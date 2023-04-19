#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 20:57:03 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(-0.4846154,-7.881533,3.553846,871.5316);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__10->SetBinContent(1,74.93665);
   hmc__10->SetBinContent(2,113.4509);
   hmc__10->SetBinContent(3,147.6775);
   hmc__10->SetBinContent(4,274.4434);
   hmc__10->SetBinContent(5,376.2118);
   hmc__10->SetBinContent(6,394.0767);
   hmc__10->SetBinContent(7,363.6548);
   hmc__10->SetBinContent(8,339.4341);
   hmc__10->SetBinContent(9,314.3443);
   hmc__10->SetBinContent(10,277.09);
   hmc__10->SetBinContent(11,277.2667);
   hmc__10->SetBinContent(12,225.3663);
   hmc__10->SetBinContent(13,205.5273);
   hmc__10->SetBinContent(14,174.4851);
   hmc__10->SetBinContent(15,147.9482);
   hmc__10->SetBinContent(16,149.253);
   hmc__10->SetBinContent(17,135.9168);
   hmc__10->SetBinContent(18,122.0173);
   hmc__10->SetBinContent(19,121.8665);
   hmc__10->SetBinContent(20,123.1916);
   hmc__10->SetBinContent(21,136.5836);
   hmc__10->SetBinContent(22,132.5741);
   hmc__10->SetBinContent(23,133.5423);
   hmc__10->SetBinContent(24,76.40403);
   hmc__10->SetBinError(1,36.6469);
   hmc__10->SetBinError(2,28.67235);
   hmc__10->SetBinError(3,51.07145);
   hmc__10->SetBinError(4,68.74024);
   hmc__10->SetBinError(5,93.88449);
   hmc__10->SetBinError(6,119.6587);
   hmc__10->SetBinError(7,93.7236);
   hmc__10->SetBinError(8,86.0705);
   hmc__10->SetBinError(9,79.98687);
   hmc__10->SetBinError(10,70.12829);
   hmc__10->SetBinError(11,76.48693);
   hmc__10->SetBinError(12,56.15406);
   hmc__10->SetBinError(13,51.31543);
   hmc__10->SetBinError(14,44.36202);
   hmc__10->SetBinError(15,46.85067);
   hmc__10->SetBinError(16,44.0336);
   hmc__10->SetBinError(17,39.98626);
   hmc__10->SetBinError(18,37.2891);
   hmc__10->SetBinError(19,32.35109);
   hmc__10->SetBinError(20,31.97317);
   hmc__10->SetBinError(21,37.69961);
   hmc__10->SetBinError(22,38.02701);
   hmc__10->SetBinError(23,35.35103);
   hmc__10->SetBinError(24,22.18355);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-7.881533);
   hmc__10->SetMaximum(827.561);
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
   hs4_stack_4->SetMinimum(-3.571482e-09);
   hs4_stack_4->SetMaximum(413.7805);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.678584);
   hbadmatch_stack_1->SetBinContent(2,4.761729);
   hbadmatch_stack_1->SetBinContent(3,4.057024);
   hbadmatch_stack_1->SetBinContent(4,7.086167);
   hbadmatch_stack_1->SetBinContent(5,8.803366);
   hbadmatch_stack_1->SetBinContent(6,11.99375);
   hbadmatch_stack_1->SetBinContent(7,5.206673);
   hbadmatch_stack_1->SetBinContent(8,8.421744);
   hbadmatch_stack_1->SetBinContent(9,5.85816);
   hbadmatch_stack_1->SetBinContent(10,4.838102);
   hbadmatch_stack_1->SetBinContent(11,8.409971);
   hbadmatch_stack_1->SetBinContent(12,5.789755);
   hbadmatch_stack_1->SetBinContent(13,4.193101);
   hbadmatch_stack_1->SetBinContent(14,3.308596);
   hbadmatch_stack_1->SetBinContent(15,3.451228);
   hbadmatch_stack_1->SetBinContent(16,5.15236);
   hbadmatch_stack_1->SetBinContent(17,6.724137);
   hbadmatch_stack_1->SetBinContent(18,3.175654);
   hbadmatch_stack_1->SetBinContent(19,4.014035);
   hbadmatch_stack_1->SetBinContent(20,2.589184);
   hbadmatch_stack_1->SetBinContent(21,4.472707);
   hbadmatch_stack_1->SetBinContent(22,2.743134);
   hbadmatch_stack_1->SetBinContent(23,3.065238);
   hbadmatch_stack_1->SetBinContent(24,1.627516);
   hbadmatch_stack_1->SetBinError(1,0.9404997);
   hbadmatch_stack_1->SetBinError(2,1.134988);
   hbadmatch_stack_1->SetBinError(3,1.126555);
   hbadmatch_stack_1->SetBinError(4,1.424744);
   hbadmatch_stack_1->SetBinError(5,1.767834);
   hbadmatch_stack_1->SetBinError(6,2.372085);
   hbadmatch_stack_1->SetBinError(7,1.151714);
   hbadmatch_stack_1->SetBinError(8,1.587375);
   hbadmatch_stack_1->SetBinError(9,1.23796);
   hbadmatch_stack_1->SetBinError(10,1.057259);
   hbadmatch_stack_1->SetBinError(11,1.542257);
   hbadmatch_stack_1->SetBinError(12,1.288079);
   hbadmatch_stack_1->SetBinError(13,1.056104);
   hbadmatch_stack_1->SetBinError(14,0.9501715);
   hbadmatch_stack_1->SetBinError(15,1.052763);
   hbadmatch_stack_1->SetBinError(16,1.190879);
   hbadmatch_stack_1->SetBinError(17,2.259435);
   hbadmatch_stack_1->SetBinError(18,1.700014);
   hbadmatch_stack_1->SetBinError(19,1.115091);
   hbadmatch_stack_1->SetBinError(20,0.809167);
   hbadmatch_stack_1->SetBinError(21,1.185185);
   hbadmatch_stack_1->SetBinError(22,0.8713811);
   hbadmatch_stack_1->SetBinError(23,0.9600745);
   hbadmatch_stack_1->SetBinError(24,0.9305159);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,9.159784);
   hext_stack_2->SetBinContent(2,17.17202);
   hext_stack_2->SetBinContent(3,14.80304);
   hext_stack_2->SetBinContent(4,33.66489);
   hext_stack_2->SetBinContent(5,40.69517);
   hext_stack_2->SetBinContent(6,36.48355);
   hext_stack_2->SetBinContent(7,25.13796);
   hext_stack_2->SetBinContent(8,30.12524);
   hext_stack_2->SetBinContent(9,24.20943);
   hext_stack_2->SetBinContent(10,20.75916);
   hext_stack_2->SetBinContent(11,29.18077);
   hext_stack_2->SetBinContent(12,20.43753);
   hext_stack_2->SetBinContent(13,23.71345);
   hext_stack_2->SetBinContent(14,21.46861);
   hext_stack_2->SetBinContent(15,15.38563);
   hext_stack_2->SetBinContent(16,17.87984);
   hext_stack_2->SetBinContent(17,18.63401);
   hext_stack_2->SetBinContent(18,13.63237);
   hext_stack_2->SetBinContent(19,10.85679);
   hext_stack_2->SetBinContent(20,17.58139);
   hext_stack_2->SetBinContent(21,18.12644);
   hext_stack_2->SetBinContent(22,7.772812);
   hext_stack_2->SetBinContent(23,10.8612);
   hext_stack_2->SetBinContent(24,6.064215);
   hext_stack_2->SetBinError(1,1.918145);
   hext_stack_2->SetBinError(2,2.731337);
   hext_stack_2->SetBinError(3,2.567963);
   hext_stack_2->SetBinError(4,3.878569);
   hext_stack_2->SetBinError(5,4.111918);
   hext_stack_2->SetBinError(6,3.855798);
   hext_stack_2->SetBinError(7,3.189833);
   hext_stack_2->SetBinError(8,3.616756);
   hext_stack_2->SetBinError(9,3.233262);
   hext_stack_2->SetBinError(10,2.889722);
   hext_stack_2->SetBinError(11,3.458384);
   hext_stack_2->SetBinError(12,2.812283);
   hext_stack_2->SetBinError(13,3.229516);
   hext_stack_2->SetBinError(14,3.037212);
   hext_stack_2->SetBinError(15,2.610337);
   hext_stack_2->SetBinError(16,2.804089);
   hext_stack_2->SetBinError(17,2.82866);
   hext_stack_2->SetBinError(18,2.344745);
   hext_stack_2->SetBinError(19,2.113466);
   hext_stack_2->SetBinError(20,2.699852);
   hext_stack_2->SetBinError(21,2.836051);
   hext_stack_2->SetBinError(22,1.843762);
   hext_stack_2->SetBinError(23,2.145195);
   hext_stack_2->SetBinError(24,1.636483);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,1.008119);
   hdirt_stack_3->SetBinContent(2,3.335469);
   hdirt_stack_3->SetBinContent(3,1.745243);
   hdirt_stack_3->SetBinContent(4,5.098023);
   hdirt_stack_3->SetBinContent(5,5.515815);
   hdirt_stack_3->SetBinContent(6,3.30443);
   hdirt_stack_3->SetBinContent(7,4.316348);
   hdirt_stack_3->SetBinContent(8,2.162247);
   hdirt_stack_3->SetBinContent(9,3.30711);
   hdirt_stack_3->SetBinContent(10,1.794964);
   hdirt_stack_3->SetBinContent(11,3.193082);
   hdirt_stack_3->SetBinContent(12,1.21377);
   hdirt_stack_3->SetBinContent(13,1.54716);
   hdirt_stack_3->SetBinContent(14,0.8591703);
   hdirt_stack_3->SetBinContent(15,3.375482);
   hdirt_stack_3->SetBinContent(16,1.502377);
   hdirt_stack_3->SetBinContent(17,1.910935);
   hdirt_stack_3->SetBinContent(18,2.777309);
   hdirt_stack_3->SetBinContent(19,3.814317);
   hdirt_stack_3->SetBinContent(20,1.094771);
   hdirt_stack_3->SetBinContent(21,1.882619);
   hdirt_stack_3->SetBinContent(22,2.83066);
   hdirt_stack_3->SetBinContent(23,4.191653);
   hdirt_stack_3->SetBinContent(24,1.708726);
   hdirt_stack_3->SetBinError(1,0.5545878);
   hdirt_stack_3->SetBinError(2,1.029756);
   hdirt_stack_3->SetBinError(3,0.7155253);
   hdirt_stack_3->SetBinError(4,1.533225);
   hdirt_stack_3->SetBinError(5,1.274538);
   hdirt_stack_3->SetBinError(6,0.9511406);
   hdirt_stack_3->SetBinError(7,1.061976);
   hdirt_stack_3->SetBinError(8,0.7211904);
   hdirt_stack_3->SetBinError(9,1.225139);
   hdirt_stack_3->SetBinError(10,0.5840363);
   hdirt_stack_3->SetBinError(11,1.201219);
   hdirt_stack_3->SetBinError(12,0.5532013);
   hdirt_stack_3->SetBinError(13,0.5782485);
   hdirt_stack_3->SetBinError(14,0.4354141);
   hdirt_stack_3->SetBinError(15,1.018627);
   hdirt_stack_3->SetBinError(16,0.5335632);
   hdirt_stack_3->SetBinError(17,0.6756203);
   hdirt_stack_3->SetBinError(18,0.9508079);
   hdirt_stack_3->SetBinError(19,1.010524);
   hdirt_stack_3->SetBinError(20,0.5151601);
   hdirt_stack_3->SetBinError(21,0.7010387);
   hdirt_stack_3->SetBinError(22,0.8217636);
   hdirt_stack_3->SetBinError(23,1.126805);
   hdirt_stack_3->SetBinError(24,0.7000261);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,11.6936);
   houtFV_stack_4->SetBinContent(2,20.48168);
   houtFV_stack_4->SetBinContent(3,23.04357);
   houtFV_stack_4->SetBinContent(4,36.05525);
   houtFV_stack_4->SetBinContent(5,39.95596);
   houtFV_stack_4->SetBinContent(6,42.06598);
   houtFV_stack_4->SetBinContent(7,37.17133);
   houtFV_stack_4->SetBinContent(8,31.64361);
   houtFV_stack_4->SetBinContent(9,31.85276);
   houtFV_stack_4->SetBinContent(10,27.44702);
   houtFV_stack_4->SetBinContent(11,27.67401);
   houtFV_stack_4->SetBinContent(12,24.11405);
   houtFV_stack_4->SetBinContent(13,18.33607);
   houtFV_stack_4->SetBinContent(14,14.9943);
   houtFV_stack_4->SetBinContent(15,17.88318);
   houtFV_stack_4->SetBinContent(16,20.48149);
   houtFV_stack_4->SetBinContent(17,13.32131);
   houtFV_stack_4->SetBinContent(18,17.57116);
   houtFV_stack_4->SetBinContent(19,20.35308);
   houtFV_stack_4->SetBinContent(20,18.44499);
   houtFV_stack_4->SetBinContent(21,27.04823);
   houtFV_stack_4->SetBinContent(22,28.58422);
   houtFV_stack_4->SetBinContent(23,23.5971);
   houtFV_stack_4->SetBinContent(24,13.43767);
   houtFV_stack_4->SetBinError(1,1.790415);
   houtFV_stack_4->SetBinError(2,2.279412);
   houtFV_stack_4->SetBinError(3,2.427894);
   houtFV_stack_4->SetBinError(4,3.049667);
   houtFV_stack_4->SetBinError(5,3.184416);
   houtFV_stack_4->SetBinError(6,3.348088);
   houtFV_stack_4->SetBinError(7,3.086987);
   houtFV_stack_4->SetBinError(8,2.891159);
   houtFV_stack_4->SetBinError(9,2.824293);
   houtFV_stack_4->SetBinError(10,2.534263);
   houtFV_stack_4->SetBinError(11,2.590581);
   houtFV_stack_4->SetBinError(12,2.488554);
   houtFV_stack_4->SetBinError(13,2.138908);
   houtFV_stack_4->SetBinError(14,1.980163);
   houtFV_stack_4->SetBinError(15,2.427149);
   houtFV_stack_4->SetBinError(16,2.246396);
   houtFV_stack_4->SetBinError(17,1.853013);
   houtFV_stack_4->SetBinError(18,2.117863);
   houtFV_stack_4->SetBinError(19,2.249324);
   houtFV_stack_4->SetBinError(20,2.151762);
   houtFV_stack_4->SetBinError(21,2.585081);
   houtFV_stack_4->SetBinError(22,2.667846);
   houtFV_stack_4->SetBinError(23,2.416007);
   houtFV_stack_4->SetBinError(24,1.826186);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.534508);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.578098);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.365538);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.949044);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.5993);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.52251);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.24848);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.455461);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.509685);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.464263);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.426579);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.031738);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.88467);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.664135);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.58093);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.519394);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.051494);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.143572);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.731888);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.980244);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.576026);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.565816);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.202612);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.519394);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4328289);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4452392);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6810843);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9416421);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.107989);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.206505);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.068953);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.787203);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7563139);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6998731);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8107095);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7117303);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5346129);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6083923);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5670576);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4176504);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5415458);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3330545);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5833534);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4618313);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4418765);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5555585);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4474922);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4176504);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9339901);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.185922);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.143572);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6682718);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5437177);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.088108);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6980042);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3344153);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3716255);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3330545);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.213699);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1480721);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4181941);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3431282);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,15.41316);
   hNCpi0inFVres_stack_7->SetBinContent(2,25.83965);
   hNCpi0inFVres_stack_7->SetBinContent(3,44.99226);
   hNCpi0inFVres_stack_7->SetBinContent(4,82.40146);
   hNCpi0inFVres_stack_7->SetBinContent(5,128.5805);
   hNCpi0inFVres_stack_7->SetBinContent(6,137.9732);
   hNCpi0inFVres_stack_7->SetBinContent(7,142.6255);
   hNCpi0inFVres_stack_7->SetBinContent(8,134.4647);
   hNCpi0inFVres_stack_7->SetBinContent(9,127.6138);
   hNCpi0inFVres_stack_7->SetBinContent(10,111.8149);
   hNCpi0inFVres_stack_7->SetBinContent(11,101.4935);
   hNCpi0inFVres_stack_7->SetBinContent(12,87.98246);
   hNCpi0inFVres_stack_7->SetBinContent(13,76.1839);
   hNCpi0inFVres_stack_7->SetBinContent(14,64.46655);
   hNCpi0inFVres_stack_7->SetBinContent(15,49.59693);
   hNCpi0inFVres_stack_7->SetBinContent(16,47.17944);
   hNCpi0inFVres_stack_7->SetBinContent(17,41.3272);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.59318);
   hNCpi0inFVres_stack_7->SetBinContent(19,37.73704);
   hNCpi0inFVres_stack_7->SetBinContent(20,40.40766);
   hNCpi0inFVres_stack_7->SetBinContent(21,44.76125);
   hNCpi0inFVres_stack_7->SetBinContent(22,46.25704);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.21081);
   hNCpi0inFVres_stack_7->SetBinContent(24,21.04167);
   hNCpi0inFVres_stack_7->SetBinError(1,1.328367);
   hNCpi0inFVres_stack_7->SetBinError(2,1.618154);
   hNCpi0inFVres_stack_7->SetBinError(3,2.20512);
   hNCpi0inFVres_stack_7->SetBinError(4,2.889202);
   hNCpi0inFVres_stack_7->SetBinError(5,3.73173);
   hNCpi0inFVres_stack_7->SetBinError(6,3.814885);
   hNCpi0inFVres_stack_7->SetBinError(7,3.915464);
   hNCpi0inFVres_stack_7->SetBinError(8,3.757858);
   hNCpi0inFVres_stack_7->SetBinError(9,3.718556);
   hNCpi0inFVres_stack_7->SetBinError(10,3.504222);
   hNCpi0inFVres_stack_7->SetBinError(11,3.336701);
   hNCpi0inFVres_stack_7->SetBinError(12,3.067547);
   hNCpi0inFVres_stack_7->SetBinError(13,2.825098);
   hNCpi0inFVres_stack_7->SetBinError(14,2.67212);
   hNCpi0inFVres_stack_7->SetBinError(15,2.284798);
   hNCpi0inFVres_stack_7->SetBinError(16,2.281773);
   hNCpi0inFVres_stack_7->SetBinError(17,2.070062);
   hNCpi0inFVres_stack_7->SetBinError(18,2.125537);
   hNCpi0inFVres_stack_7->SetBinError(19,1.925672);
   hNCpi0inFVres_stack_7->SetBinError(20,2.049323);
   hNCpi0inFVres_stack_7->SetBinError(21,2.199892);
   hNCpi0inFVres_stack_7->SetBinError(22,2.185321);
   hNCpi0inFVres_stack_7->SetBinError(23,2.182782);
   hNCpi0inFVres_stack_7->SetBinError(24,1.488202);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.346352);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.596554);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.28152);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.91596);
   hNCpi0inFVdis_stack_8->SetBinContent(5,30.80189);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.32169);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.19455);
   hNCpi0inFVdis_stack_8->SetBinContent(8,25.07091);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.15685);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.54893);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.12716);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.36881);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.88721);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.19328);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.758223);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.531783);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.311327);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.339812);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.816921);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.830371);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.616484);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.225211);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.978519);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.076992);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5864584);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8736018);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.096098);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.543534);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.808734);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.754982);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.719);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.632025);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.586087);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.502021);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.180084);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.278017);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.3785);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.248647);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9760763);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9266772);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9932382);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9645447);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8037979);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7876977);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9555579);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8781558);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9678342);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.745647);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
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
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1012383);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.568047);
   hCCpi0inFV_stack_10->SetBinContent(2,13.62448);
   hCCpi0inFV_stack_10->SetBinContent(3,21.24729);
   hCCpi0inFV_stack_10->SetBinContent(4,39.80753);
   hCCpi0inFV_stack_10->SetBinContent(5,56.65354);
   hCCpi0inFV_stack_10->SetBinContent(6,66.91695);
   hCCpi0inFV_stack_10->SetBinContent(7,60.6535);
   hCCpi0inFV_stack_10->SetBinContent(8,54.39535);
   hCCpi0inFV_stack_10->SetBinContent(9,50.93423);
   hCCpi0inFV_stack_10->SetBinContent(10,46.08298);
   hCCpi0inFV_stack_10->SetBinContent(11,48.33365);
   hCCpi0inFV_stack_10->SetBinContent(12,32.70654);
   hCCpi0inFV_stack_10->SetBinContent(13,29.57278);
   hCCpi0inFV_stack_10->SetBinContent(14,22.46134);
   hCCpi0inFV_stack_10->SetBinContent(15,18.60713);
   hCCpi0inFV_stack_10->SetBinContent(16,21.59999);
   hCCpi0inFV_stack_10->SetBinContent(17,21.28222);
   hCCpi0inFV_stack_10->SetBinContent(18,15.55888);
   hCCpi0inFV_stack_10->SetBinContent(19,15.21321);
   hCCpi0inFV_stack_10->SetBinContent(20,14.17609);
   hCCpi0inFV_stack_10->SetBinContent(21,14.56614);
   hCCpi0inFV_stack_10->SetBinContent(22,18.93061);
   hCCpi0inFV_stack_10->SetBinContent(23,21.78451);
   hCCpi0inFV_stack_10->SetBinContent(24,13.28613);
   hCCpi0inFV_stack_10->SetBinError(1,1.618556);
   hCCpi0inFV_stack_10->SetBinError(2,1.834826);
   hCCpi0inFV_stack_10->SetBinError(3,2.261862);
   hCCpi0inFV_stack_10->SetBinError(4,3.151592);
   hCCpi0inFV_stack_10->SetBinError(5,3.703893);
   hCCpi0inFV_stack_10->SetBinError(6,4.106911);
   hCCpi0inFV_stack_10->SetBinError(7,3.96611);
   hCCpi0inFV_stack_10->SetBinError(8,3.675189);
   hCCpi0inFV_stack_10->SetBinError(9,3.608232);
   hCCpi0inFV_stack_10->SetBinError(10,3.455064);
   hCCpi0inFV_stack_10->SetBinError(11,3.498245);
   hCCpi0inFV_stack_10->SetBinError(12,2.883531);
   hCCpi0inFV_stack_10->SetBinError(13,2.720395);
   hCCpi0inFV_stack_10->SetBinError(14,2.362564);
   hCCpi0inFV_stack_10->SetBinError(15,2.088844);
   hCCpi0inFV_stack_10->SetBinError(16,2.301608);
   hCCpi0inFV_stack_10->SetBinError(17,2.341027);
   hCCpi0inFV_stack_10->SetBinError(18,2.015361);
   hCCpi0inFV_stack_10->SetBinError(19,1.915239);
   hCCpi0inFV_stack_10->SetBinError(20,1.861796);
   hCCpi0inFV_stack_10->SetBinError(21,1.882115);
   hCCpi0inFV_stack_10->SetBinError(22,2.1511);
   hCCpi0inFV_stack_10->SetBinError(23,2.385767);
   hCCpi0inFV_stack_10->SetBinError(24,1.804565);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.233312);
   hNCinFV_stack_11->SetBinContent(2,5.658628);
   hNCinFV_stack_11->SetBinContent(3,10.74172);
   hNCinFV_stack_11->SetBinContent(4,18.51434);
   hNCinFV_stack_11->SetBinContent(5,23.73305);
   hNCinFV_stack_11->SetBinContent(6,23.4943);
   hNCinFV_stack_11->SetBinContent(7,20.47811);
   hNCinFV_stack_11->SetBinContent(8,21.16523);
   hNCinFV_stack_11->SetBinContent(9,17.84014);
   hNCinFV_stack_11->SetBinContent(10,18.61638);
   hNCinFV_stack_11->SetBinContent(11,17.0248);
   hNCinFV_stack_11->SetBinContent(12,16.41556);
   hNCinFV_stack_11->SetBinContent(13,13.62966);
   hNCinFV_stack_11->SetBinContent(14,15.13214);
   hNCinFV_stack_11->SetBinContent(15,12.12549);
   hNCinFV_stack_11->SetBinContent(16,8.902897);
   hNCinFV_stack_11->SetBinContent(17,10.96149);
   hNCinFV_stack_11->SetBinContent(18,8.19963);
   hNCinFV_stack_11->SetBinContent(19,10.9906);
   hNCinFV_stack_11->SetBinContent(20,7.527119);
   hNCinFV_stack_11->SetBinContent(21,6.548614);
   hNCinFV_stack_11->SetBinContent(22,6.83892);
   hNCinFV_stack_11->SetBinContent(23,7.090579);
   hNCinFV_stack_11->SetBinContent(24,5.869949);
   hNCinFV_stack_11->SetBinError(1,1.127758);
   hNCinFV_stack_11->SetBinError(2,1.225121);
   hNCinFV_stack_11->SetBinError(3,1.641063);
   hNCinFV_stack_11->SetBinError(4,2.158548);
   hNCinFV_stack_11->SetBinError(5,2.474638);
   hNCinFV_stack_11->SetBinError(6,2.43505);
   hNCinFV_stack_11->SetBinError(7,2.246102);
   hNCinFV_stack_11->SetBinError(8,2.297621);
   hNCinFV_stack_11->SetBinError(9,2.05716);
   hNCinFV_stack_11->SetBinError(10,2.186164);
   hNCinFV_stack_11->SetBinError(11,2.126791);
   hNCinFV_stack_11->SetBinError(12,2.049383);
   hNCinFV_stack_11->SetBinError(13,1.872571);
   hNCinFV_stack_11->SetBinError(14,2.011409);
   hNCinFV_stack_11->SetBinError(15,1.722386);
   hNCinFV_stack_11->SetBinError(16,1.443131);
   hNCinFV_stack_11->SetBinError(17,1.594499);
   hNCinFV_stack_11->SetBinError(18,1.481886);
   hNCinFV_stack_11->SetBinError(19,1.700418);
   hNCinFV_stack_11->SetBinError(20,1.330124);
   hNCinFV_stack_11->SetBinError(21,1.256078);
   hNCinFV_stack_11->SetBinError(22,1.316474);
   hNCinFV_stack_11->SetBinError(23,1.316866);
   hNCinFV_stack_11->SetBinError(24,1.160583);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,9.358036);
   hnumuCCinFV_stack_12->SetBinContent(2,9.841279);
   hnumuCCinFV_stack_12->SetBinContent(3,9.116243);
   hnumuCCinFV_stack_12->SetBinContent(4,17.30645);
   hnumuCCinFV_stack_12->SetBinContent(5,25.45024);
   hnumuCCinFV_stack_12->SetBinContent(6,25.87803);
   hnumuCCinFV_stack_12->SetBinContent(7,25.15027);
   hnumuCCinFV_stack_12->SetBinContent(8,22.40418);
   hnumuCCinFV_stack_12->SetBinContent(9,22.91503);
   hnumuCCinFV_stack_12->SetBinContent(10,18.17124);
   hnumuCCinFV_stack_12->SetBinContent(11,20.73483);
   hnumuCCinFV_stack_12->SetBinContent(12,16.32911);
   hnumuCCinFV_stack_12->SetBinContent(13,17.31942);
   hnumuCCinFV_stack_12->SetBinContent(14,14.50726);
   hnumuCCinFV_stack_12->SetBinContent(15,14.44355);
   hnumuCCinFV_stack_12->SetBinContent(16,13.52644);
   hnumuCCinFV_stack_12->SetBinContent(17,9.076235);
   hnumuCCinFV_stack_12->SetBinContent(18,9.62644);
   hnumuCCinFV_stack_12->SetBinContent(19,8.610409);
   hnumuCCinFV_stack_12->SetBinContent(20,10.89804);
   hnumuCCinFV_stack_12->SetBinContent(21,7.305593);
   hnumuCCinFV_stack_12->SetBinContent(22,5.681991);
   hnumuCCinFV_stack_12->SetBinContent(23,5.954029);
   hnumuCCinFV_stack_12->SetBinContent(24,6.147904);
   hnumuCCinFV_stack_12->SetBinError(1,2.103372);
   hnumuCCinFV_stack_12->SetBinError(2,1.656539);
   hnumuCCinFV_stack_12->SetBinError(3,1.521969);
   hnumuCCinFV_stack_12->SetBinError(4,2.161612);
   hnumuCCinFV_stack_12->SetBinError(5,3.272611);
   hnumuCCinFV_stack_12->SetBinError(6,2.634573);
   hnumuCCinFV_stack_12->SetBinError(7,2.873672);
   hnumuCCinFV_stack_12->SetBinError(8,2.870966);
   hnumuCCinFV_stack_12->SetBinError(9,3.412369);
   hnumuCCinFV_stack_12->SetBinError(10,2.38922);
   hnumuCCinFV_stack_12->SetBinError(11,2.636561);
   hnumuCCinFV_stack_12->SetBinError(12,2.161947);
   hnumuCCinFV_stack_12->SetBinError(13,2.172658);
   hnumuCCinFV_stack_12->SetBinError(14,2.048615);
   hnumuCCinFV_stack_12->SetBinError(15,2.260776);
   hnumuCCinFV_stack_12->SetBinError(16,1.896103);
   hnumuCCinFV_stack_12->SetBinError(17,1.541495);
   hnumuCCinFV_stack_12->SetBinError(18,1.632829);
   hnumuCCinFV_stack_12->SetBinError(19,1.486716);
   hnumuCCinFV_stack_12->SetBinError(20,1.842552);
   hnumuCCinFV_stack_12->SetBinError(21,1.405591);
   hnumuCCinFV_stack_12->SetBinError(22,1.228611);
   hnumuCCinFV_stack_12->SetBinError(23,2.428827);
   hnumuCCinFV_stack_12->SetBinError(24,1.283992);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,5.887348);
   hnueCCinFV_stack_13->SetBinContent(2,3.477613);
   hnueCCinFV_stack_13->SetBinContent(3,0.9499335);
   hnueCCinFV_stack_13->SetBinContent(4,3.253554);
   hnueCCinFV_stack_13->SetBinContent(5,3.460262);
   hnueCCinFV_stack_13->SetBinContent(6,3.13254);
   hnueCCinFV_stack_13->SetBinContent(7,3.258278);
   hnueCCinFV_stack_13->SetBinContent(8,0.9818863);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,1.00824);
   hnueCCinFV_stack_13->SetBinContent(11,1.034085e-05);
   hnueCCinFV_stack_13->SetBinContent(13,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(14,0.5930367);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,1.861022);
   hnueCCinFV_stack_13->SetBinContent(17,0.8419645);
   hnueCCinFV_stack_13->SetBinContent(18,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(19,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(20,1.452853);
   hnueCCinFV_stack_13->SetBinContent(21,1.24743);
   hnueCCinFV_stack_13->SetBinContent(22,1.76798);
   hnueCCinFV_stack_13->SetBinContent(23,2.382837);
   hnueCCinFV_stack_13->SetBinContent(24,0.5680714);
   hnueCCinFV_stack_13->SetBinError(1,2.055772);
   hnueCCinFV_stack_13->SetBinError(2,1.108341);
   hnueCCinFV_stack_13->SetBinError(3,0.4898809);
   hnueCCinFV_stack_13->SetBinError(4,0.9737721);
   hnueCCinFV_stack_13->SetBinError(5,1.395182);
   hnueCCinFV_stack_13->SetBinError(6,1.443945);
   hnueCCinFV_stack_13->SetBinError(7,1.153093);
   hnueCCinFV_stack_13->SetBinError(8,0.4391155);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.5417213);
   hnueCCinFV_stack_13->SetBinError(11,1.034085e-05);
   hnueCCinFV_stack_13->SetBinError(13,0.4156841);
   hnueCCinFV_stack_13->SetBinError(14,0.4424562);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.7354042);
   hnueCCinFV_stack_13->SetBinError(17,0.6062267);
   hnueCCinFV_stack_13->SetBinError(18,0.4961329);
   hnueCCinFV_stack_13->SetBinError(19,0.2781975);
   hnueCCinFV_stack_13->SetBinError(20,0.678412);
   hnueCCinFV_stack_13->SetBinError(21,0.6855949);
   hnueCCinFV_stack_13->SetBinError(22,0.7003296);
   hnueCCinFV_stack_13->SetBinError(23,1.20487);
   hnueCCinFV_stack_13->SetBinError(24,0.3993615);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__11->SetBinContent(1,74.93665);
   hmcerror__11->SetBinContent(2,113.4509);
   hmcerror__11->SetBinContent(3,147.6775);
   hmcerror__11->SetBinContent(4,274.4434);
   hmcerror__11->SetBinContent(5,376.2118);
   hmcerror__11->SetBinContent(6,394.0767);
   hmcerror__11->SetBinContent(7,363.6548);
   hmcerror__11->SetBinContent(8,339.4341);
   hmcerror__11->SetBinContent(9,314.3443);
   hmcerror__11->SetBinContent(10,277.09);
   hmcerror__11->SetBinContent(11,277.2667);
   hmcerror__11->SetBinContent(12,225.3663);
   hmcerror__11->SetBinContent(13,205.5273);
   hmcerror__11->SetBinContent(14,174.4851);
   hmcerror__11->SetBinContent(15,147.9482);
   hmcerror__11->SetBinContent(16,149.253);
   hmcerror__11->SetBinContent(17,135.9168);
   hmcerror__11->SetBinContent(18,122.0173);
   hmcerror__11->SetBinContent(19,121.8665);
   hmcerror__11->SetBinContent(20,123.1916);
   hmcerror__11->SetBinContent(21,136.5836);
   hmcerror__11->SetBinContent(22,132.5741);
   hmcerror__11->SetBinContent(23,133.5423);
   hmcerror__11->SetBinContent(24,76.40403);
   hmcerror__11->SetBinError(1,36.6469);
   hmcerror__11->SetBinError(2,28.67235);
   hmcerror__11->SetBinError(3,51.07145);
   hmcerror__11->SetBinError(4,68.74024);
   hmcerror__11->SetBinError(5,93.88449);
   hmcerror__11->SetBinError(6,119.6587);
   hmcerror__11->SetBinError(7,93.7236);
   hmcerror__11->SetBinError(8,86.0705);
   hmcerror__11->SetBinError(9,79.98687);
   hmcerror__11->SetBinError(10,70.12829);
   hmcerror__11->SetBinError(11,76.48693);
   hmcerror__11->SetBinError(12,56.15406);
   hmcerror__11->SetBinError(13,51.31543);
   hmcerror__11->SetBinError(14,44.36202);
   hmcerror__11->SetBinError(15,46.85067);
   hmcerror__11->SetBinError(16,44.0336);
   hmcerror__11->SetBinError(17,39.98626);
   hmcerror__11->SetBinError(18,37.2891);
   hmcerror__11->SetBinError(19,32.35109);
   hmcerror__11->SetBinError(20,31.97317);
   hmcerror__11->SetBinError(21,37.69961);
   hmcerror__11->SetBinError(22,38.02701);
   hmcerror__11->SetBinError(23,35.35103);
   hmcerror__11->SetBinError(24,22.18355);
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
   83,
   104,
   150,
   247,
   326,
   326,
   310,
   308,
   321,
   260,
   249,
   233,
   188,
   186,
   154,
   143,
   138,
   124,
   123,
   123,
   142,
   137,
   157,
   63};
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
   9.234,
   10.19804,
   12.24745,
   15.71623,
   18.05547,
   18.05547,
   17.60682,
   17.54993,
   17.91647,
   16.12452,
   15.77973,
   15.26434,
   13.71131,
   13.63818,
   12.40967,
   11.95826,
   11.74734,
   11.13553,
   11.09054,
   11.09054,
   11.91638,
   11.7047,
   12.52996,
   8.0648};
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
   9.0323,
   10.19804,
   12.24745,
   15.71623,
   18.05547,
   18.05547,
   17.60682,
   17.54993,
   17.91647,
   16.12452,
   15.77973,
   15.26434,
   13.71131,
   13.63818,
   12.40967,
   11.95826,
   11.74734,
   11.13553,
   11.09054,
   11.09054,
   11.91638,
   11.7047,
   12.52996,
   7.862};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(26.02317);
   Graph_Graph3013->SetMaximum(372.9675);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all");
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
   0.4890384,
   0.2527291,
   0.3458309,
   0.2504715,
   0.2495522,
   0.3036433,
   0.2577268,
   0.2535705,
   0.2544563,
   0.2530885,
   0.2758605,
   0.2491679,
   0.249677,
   0.2542453,
   0.3166694,
   0.2950265,
   0.2941966,
   0.3056049,
   0.2654633,
   0.2595401,
   0.2760185,
   0.286836,
   0.2647179,
   0.2903453};
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
   0.4890384,
   0.2527291,
   0.3458309,
   0.2504715,
   0.2495522,
   0.3036433,
   0.2577268,
   0.2535705,
   0.2544563,
   0.2530885,
   0.2758605,
   0.2491679,
   0.249677,
   0.2542453,
   0.3166694,
   0.2950265,
   0.2941966,
   0.3056049,
   0.2654633,
   0.2595401,
   0.2760185,
   0.286836,
   0.2647179,
   0.2903453};
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
   Graph_Graph3014->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
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
   0.1878843,
   0.1856465,
   0.2075693,
   0.204582,
   0.2275241,
   0.2392416,
   0.230993,
   0.2255213,
   0.2222067,
   0.2216515,
   0.208198,
   0.2087722,
   0.2064848,
   0.2060634,
   0.2097785,
   0.193817,
   0.1880084,
   0.1918052,
   0.1964329,
   0.1908195,
   0.1970306,
   0.2062973,
   0.2103888,
   0.1945499};
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
   0.1878843,
   0.1856465,
   0.2075693,
   0.204582,
   0.2275241,
   0.2392416,
   0.230993,
   0.2255213,
   0.2222067,
   0.2216515,
   0.208198,
   0.2087722,
   0.2064848,
   0.2060634,
   0.2097785,
   0.193817,
   0.1880084,
   0.1918052,
   0.1964329,
   0.1908195,
   0.1970306,
   0.2062973,
   0.2103888,
   0.1945499};
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
   1.107602,
   0.9166961,
   1.015727,
   0.9000034,
   0.8665332,
   0.8272502,
   0.8524567,
   0.9073925,
   1.021173,
   0.9383232,
   0.8980524,
   1.033872,
   0.9147205,
   1.065994,
   1.040905,
   0.9581045,
   1.015327,
   1.016249,
   1.009301,
   0.9984445,
   1.039656,
   1.033385,
   1.175658,
   0.8245638};
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
   0.1232241,
   0.08988945,
   0.08293375,
   0.05726584,
   0.04799284,
   0.04581715,
   0.04841629,
   0.05170349,
   0.05699634,
   0.05819233,
   0.05691176,
   0.06773122,
   0.06671285,
   0.07816245,
   0.08387851,
   0.08012072,
   0.08643039,
   0.09126186,
   0.0910056,
   0.09002671,
   0.08724599,
   0.08828801,
   0.0938277,
   0.1055546};
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
   0.1205325,
   0.08988945,
   0.08293375,
   0.05726584,
   0.04799284,
   0.04581715,
   0.04841629,
   0.05170349,
   0.05699634,
   0.05819233,
   0.05691176,
   0.06773122,
   0.06671285,
   0.07816245,
   0.08387851,
   0.08012072,
   0.08643039,
   0.09126186,
   0.0910056,
   0.09002671,
   0.08724599,
   0.08828801,
   0.0938277,
   0.1029003};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.6639616);
   Graph_Graph3016->SetMaximum(1.324533);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);

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
