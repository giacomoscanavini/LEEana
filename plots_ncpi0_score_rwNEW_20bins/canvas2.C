#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 15:55:15 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(0.2307692,-15.69647,6.641026,1735.699);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hmc__4->SetBinContent(4,624.186);
   hmc__4->SetBinContent(5,784.8235);
   hmc__4->SetBinContent(6,748.3401);
   hmc__4->SetBinContent(7,667.1094);
   hmc__4->SetBinContent(8,583.6942);
   hmc__4->SetBinContent(9,530.3014);
   hmc__4->SetBinContent(10,467.2381);
   hmc__4->SetBinContent(11,432.2848);
   hmc__4->SetBinContent(12,364.8891);
   hmc__4->SetBinContent(13,271.0917);
   hmc__4->SetBinContent(14,162.7423);
   hmc__4->SetBinContent(15,80.907);
   hmc__4->SetBinContent(16,43.06081);
   hmc__4->SetBinContent(17,18.96775);
   hmc__4->SetBinContent(18,6.538855);
   hmc__4->SetBinContent(19,1.658894);
   hmc__4->SetBinContent(20,0.2510999);
   hmc__4->SetBinContent(21,0.6705194);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,0.3895343);
   hmc__4->SetBinError(3,0.3895343);
   hmc__4->SetBinError(4,128.2977);
   hmc__4->SetBinError(5,163.0219);
   hmc__4->SetBinError(6,165.034);
   hmc__4->SetBinError(7,154.6168);
   hmc__4->SetBinError(8,147.5395);
   hmc__4->SetBinError(9,155.7018);
   hmc__4->SetBinError(10,142.1917);
   hmc__4->SetBinError(11,139.5277);
   hmc__4->SetBinError(12,125.649);
   hmc__4->SetBinError(13,98.56556);
   hmc__4->SetBinError(14,57.63233);
   hmc__4->SetBinError(15,29.27396);
   hmc__4->SetBinError(16,17.20698);
   hmc__4->SetBinError(17,9.841219);
   hmc__4->SetBinError(18,4.423719);
   hmc__4->SetBinError(19,2.618882);
   hmc__4->SetBinError(20,0.6507229);
   hmc__4->SetBinError(21,3.854816);
   hmc__4->SetMinimum(-15.69647);
   hmc__4->SetMaximum(1648.129);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,1,6);
   hs2_stack_2->SetMinimum(-3.646956e-09);
   hs2_stack_2->SetMaximum(824.0647);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,21.12031);
   hbadmatch_stack_1->SetBinContent(5,24.80895);
   hbadmatch_stack_1->SetBinContent(6,21.19274);
   hbadmatch_stack_1->SetBinContent(7,17.78595);
   hbadmatch_stack_1->SetBinContent(8,12.24347);
   hbadmatch_stack_1->SetBinContent(9,10.31558);
   hbadmatch_stack_1->SetBinContent(10,5.632246);
   hbadmatch_stack_1->SetBinContent(11,3.717914);
   hbadmatch_stack_1->SetBinContent(12,4.079939);
   hbadmatch_stack_1->SetBinContent(13,2.587494);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinError(4,2.450711);
   hbadmatch_stack_1->SetBinError(5,3.022234);
   hbadmatch_stack_1->SetBinError(6,3.132863);
   hbadmatch_stack_1->SetBinError(7,2.683726);
   hbadmatch_stack_1->SetBinError(8,1.811594);
   hbadmatch_stack_1->SetBinError(9,1.665126);
   hbadmatch_stack_1->SetBinError(10,1.184326);
   hbadmatch_stack_1->SetBinError(11,0.9622484);
   hbadmatch_stack_1->SetBinError(12,1.426336);
   hbadmatch_stack_1->SetBinError(13,0.8087577);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,84.87679);
   hext_stack_2->SetBinContent(5,93.47834);
   hext_stack_2->SetBinContent(6,77.92163);
   hext_stack_2->SetBinContent(7,63.60972);
   hext_stack_2->SetBinContent(8,51.43821);
   hext_stack_2->SetBinContent(9,34.04276);
   hext_stack_2->SetBinContent(10,22.57585);
   hext_stack_2->SetBinContent(11,20.74638);
   hext_stack_2->SetBinContent(12,7.63436);
   hext_stack_2->SetBinContent(13,6.449273);
   hext_stack_2->SetBinContent(14,1.78639);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinError(4,6.443142);
   hext_stack_2->SetBinError(5,6.534799);
   hext_stack_2->SetBinError(6,6.103276);
   hext_stack_2->SetBinError(7,5.285357);
   hext_stack_2->SetBinError(8,4.877095);
   hext_stack_2->SetBinError(9,4.001678);
   hext_stack_2->SetBinError(10,3.161312);
   hext_stack_2->SetBinError(11,3.248808);
   hext_stack_2->SetBinError(12,1.676543);
   hext_stack_2->SetBinError(13,1.856611);
   hext_stack_2->SetBinError(14,0.8039566);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,8.22972);
   hdirt_stack_3->SetBinContent(5,9.633923);
   hdirt_stack_3->SetBinContent(6,7.888932);
   hdirt_stack_3->SetBinContent(7,7.648257);
   hdirt_stack_3->SetBinContent(8,3.749922);
   hdirt_stack_3->SetBinContent(9,5.231659);
   hdirt_stack_3->SetBinContent(10,2.050309);
   hdirt_stack_3->SetBinContent(11,1.132946);
   hdirt_stack_3->SetBinContent(12,2.191746);
   hdirt_stack_3->SetBinContent(13,1.005603);
   hdirt_stack_3->SetBinContent(14,0.2827498);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,1.513249);
   hdirt_stack_3->SetBinError(5,1.600655);
   hdirt_stack_3->SetBinError(6,1.411875);
   hdirt_stack_3->SetBinError(7,1.631118);
   hdirt_stack_3->SetBinError(8,1.018071);
   hdirt_stack_3->SetBinError(9,1.542009);
   hdirt_stack_3->SetBinError(10,0.671095);
   hdirt_stack_3->SetBinError(11,0.526479);
   hdirt_stack_3->SetBinError(12,0.9076);
   hdirt_stack_3->SetBinError(13,0.4680051);
   hdirt_stack_3->SetBinError(14,0.1999888);
   hdirt_stack_3->SetBinError(15,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,60.15296);
   houtFV_stack_4->SetBinContent(5,79.48159);
   houtFV_stack_4->SetBinContent(6,69.41937);
   houtFV_stack_4->SetBinContent(7,56.38543);
   houtFV_stack_4->SetBinContent(8,44.47754);
   houtFV_stack_4->SetBinContent(9,30.79687);
   houtFV_stack_4->SetBinContent(10,25.7028);
   houtFV_stack_4->SetBinContent(11,14.27074);
   houtFV_stack_4->SetBinContent(12,8.973504);
   houtFV_stack_4->SetBinContent(13,5.25863);
   houtFV_stack_4->SetBinContent(14,1.320373);
   houtFV_stack_4->SetBinContent(15,0.5901461);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,3.824982);
   houtFV_stack_4->SetBinError(5,4.478517);
   houtFV_stack_4->SetBinError(6,4.204683);
   houtFV_stack_4->SetBinError(7,3.744321);
   houtFV_stack_4->SetBinError(8,3.303801);
   houtFV_stack_4->SetBinError(9,2.794532);
   houtFV_stack_4->SetBinError(10,2.561115);
   houtFV_stack_4->SetBinError(11,1.872962);
   houtFV_stack_4->SetBinError(12,1.535189);
   houtFV_stack_4->SetBinError(13,1.159279);
   houtFV_stack_4->SetBinError(14,0.5548703);
   houtFV_stack_4->SetBinError(15,0.340721);
   houtFV_stack_4->SetBinError(16,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.139178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.625118);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.95759);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.06703);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.775908);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.862432);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.640143);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.226379);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,9.793621);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.364552);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.258585);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.508614);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.22795);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.784944);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6429173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8662943);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8571856);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8634813);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8581689);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8470992);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8798166);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9251711);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.127576);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9417107);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7516682);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.788069);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7581136);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4558939);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.660558);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.644939);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.287312);
   hNCpi0inFVqe_stack_6->SetBinContent(7,3.137434);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.35673);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.134194);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.688122);
   hNCpi0inFVqe_stack_6->SetBinContent(11,3.04178);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.745834);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.924276);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4656783);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.32507);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5045885);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5756293);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5131296);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4935402);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3900216);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.6003421);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5180986);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4230513);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,147.1713);
   hNCpi0inFVres_stack_7->SetBinContent(5,214.9576);
   hNCpi0inFVres_stack_7->SetBinContent(6,229.874);
   hNCpi0inFVres_stack_7->SetBinContent(7,236.7097);
   hNCpi0inFVres_stack_7->SetBinContent(8,233.283);
   hNCpi0inFVres_stack_7->SetBinContent(9,258.0491);
   hNCpi0inFVres_stack_7->SetBinContent(10,249.4093);
   hNCpi0inFVres_stack_7->SetBinContent(11,259.8417);
   hNCpi0inFVres_stack_7->SetBinContent(12,236.4021);
   hNCpi0inFVres_stack_7->SetBinContent(13,183.7136);
   hNCpi0inFVres_stack_7->SetBinContent(14,115.4729);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.17403);
   hNCpi0inFVres_stack_7->SetBinContent(16,29.04104);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.82037);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.225038);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.380558);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2231999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.473804);
   hNCpi0inFVres_stack_7->SetBinError(4,3.983072);
   hNCpi0inFVres_stack_7->SetBinError(5,4.814221);
   hNCpi0inFVres_stack_7->SetBinError(6,4.925783);
   hNCpi0inFVres_stack_7->SetBinError(7,5.00496);
   hNCpi0inFVres_stack_7->SetBinError(8,4.964996);
   hNCpi0inFVres_stack_7->SetBinError(9,5.337541);
   hNCpi0inFVres_stack_7->SetBinError(10,5.169603);
   hNCpi0inFVres_stack_7->SetBinError(11,5.284305);
   hNCpi0inFVres_stack_7->SetBinError(12,5.021392);
   hNCpi0inFVres_stack_7->SetBinError(13,4.433419);
   hNCpi0inFVres_stack_7->SetBinError(14,3.552917);
   hNCpi0inFVres_stack_7->SetBinError(15,2.38683);
   hNCpi0inFVres_stack_7->SetBinError(16,1.822828);
   hNCpi0inFVres_stack_7->SetBinError(17,1.289337);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6387164);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3962917);
   hNCpi0inFVres_stack_7->SetBinError(20,0.07891307);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2438946);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,37.10049);
   hNCpi0inFVdis_stack_8->SetBinContent(5,49.74308);
   hNCpi0inFVdis_stack_8->SetBinContent(6,50.5799);
   hNCpi0inFVdis_stack_8->SetBinContent(7,51.10804);
   hNCpi0inFVdis_stack_8->SetBinContent(8,48.45235);
   hNCpi0inFVdis_stack_8->SetBinContent(9,45.84019);
   hNCpi0inFVdis_stack_8->SetBinContent(10,46.87483);
   hNCpi0inFVdis_stack_8->SetBinContent(11,40.52872);
   hNCpi0inFVdis_stack_8->SetBinContent(12,39.06514);
   hNCpi0inFVdis_stack_8->SetBinContent(13,27.91373);
   hNCpi0inFVdis_stack_8->SetBinContent(14,16.27157);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.396444);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.806538);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.395672);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8933042);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.959251);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.319122);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.268657);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.390239);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.248856);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.124483);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.203707);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.028212);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.056654);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.737934);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.291247);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9752792);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6295097);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4122573);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3509784);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.3485861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5025361);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2218905);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2820092);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,98.50139);
   hCCpi0inFV_stack_10->SetBinContent(5,130.8538);
   hCCpi0inFV_stack_10->SetBinContent(6,115.8525);
   hCCpi0inFV_stack_10->SetBinContent(7,107.6779);
   hCCpi0inFV_stack_10->SetBinContent(8,87.64676);
   hCCpi0inFV_stack_10->SetBinContent(9,67.71934);
   hCCpi0inFV_stack_10->SetBinContent(10,52.4734);
   hCCpi0inFV_stack_10->SetBinContent(11,47.34227);
   hCCpi0inFV_stack_10->SetBinContent(12,31.7177);
   hCCpi0inFV_stack_10->SetBinContent(13,16.98365);
   hCCpi0inFV_stack_10->SetBinContent(14,10.65211);
   hCCpi0inFV_stack_10->SetBinContent(15,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(16,2.051557);
   hCCpi0inFV_stack_10->SetBinContent(17,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(18,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,4.973166);
   hCCpi0inFV_stack_10->SetBinError(5,5.771744);
   hCCpi0inFV_stack_10->SetBinError(6,5.387077);
   hCCpi0inFV_stack_10->SetBinError(7,5.225448);
   hCCpi0inFV_stack_10->SetBinError(8,4.627334);
   hCCpi0inFV_stack_10->SetBinError(9,4.113445);
   hCCpi0inFV_stack_10->SetBinError(10,3.594085);
   hCCpi0inFV_stack_10->SetBinError(11,3.461861);
   hCCpi0inFV_stack_10->SetBinError(12,2.839728);
   hCCpi0inFV_stack_10->SetBinError(13,2.023171);
   hCCpi0inFV_stack_10->SetBinError(14,1.666242);
   hCCpi0inFV_stack_10->SetBinError(15,1.075193);
   hCCpi0inFV_stack_10->SetBinError(16,0.7068749);
   hCCpi0inFV_stack_10->SetBinError(17,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(18,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,57.7994);
   hNCinFV_stack_11->SetBinContent(5,65.48736);
   hNCinFV_stack_11->SetBinContent(6,70.58265);
   hNCinFV_stack_11->SetBinContent(7,54.96024);
   hNCinFV_stack_11->SetBinContent(8,51.25186);
   hNCinFV_stack_11->SetBinContent(9,45.01432);
   hNCinFV_stack_11->SetBinContent(10,33.33481);
   hNCinFV_stack_11->SetBinContent(11,20.87601);
   hNCinFV_stack_11->SetBinContent(12,14.99375);
   hNCinFV_stack_11->SetBinContent(13,12.99748);
   hNCinFV_stack_11->SetBinContent(14,7.322684);
   hNCinFV_stack_11->SetBinContent(15,2.737718);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinError(4,3.836442);
   hNCinFV_stack_11->SetBinError(5,4.021763);
   hNCinFV_stack_11->SetBinError(6,4.208219);
   hNCinFV_stack_11->SetBinError(7,3.750089);
   hNCinFV_stack_11->SetBinError(8,3.597582);
   hNCinFV_stack_11->SetBinError(9,3.336403);
   hNCinFV_stack_11->SetBinError(10,2.956305);
   hNCinFV_stack_11->SetBinError(11,2.219398);
   hNCinFV_stack_11->SetBinError(12,1.992669);
   hNCinFV_stack_11->SetBinError(13,1.798546);
   hNCinFV_stack_11->SetBinError(14,1.337165);
   hNCinFV_stack_11->SetBinError(15,0.856599);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,94.73261);
   hnumuCCinFV_stack_12->SetBinContent(5,99.34735);
   hnumuCCinFV_stack_12->SetBinContent(6,85.87565);
   hnumuCCinFV_stack_12->SetBinContent(7,57.93902);
   hnumuCCinFV_stack_12->SetBinContent(8,35.6396);
   hnumuCCinFV_stack_12->SetBinContent(9,22.91442);
   hnumuCCinFV_stack_12->SetBinContent(10,18.1977);
   hnumuCCinFV_stack_12->SetBinContent(11,11.12706);
   hnumuCCinFV_stack_12->SetBinContent(12,6.124604);
   hnumuCCinFV_stack_12->SetBinContent(13,3.11718);
   hnumuCCinFV_stack_12->SetBinContent(14,2.719455);
   hnumuCCinFV_stack_12->SetBinContent(15,1.231427);
   hnumuCCinFV_stack_12->SetBinContent(16,0.437725);
   hnumuCCinFV_stack_12->SetBinError(4,5.646264);
   hnumuCCinFV_stack_12->SetBinError(5,5.892714);
   hnumuCCinFV_stack_12->SetBinError(6,5.566216);
   hnumuCCinFV_stack_12->SetBinError(7,4.203835);
   hnumuCCinFV_stack_12->SetBinError(8,4.101878);
   hnumuCCinFV_stack_12->SetBinError(9,2.50668);
   hnumuCCinFV_stack_12->SetBinError(10,2.226909);
   hnumuCCinFV_stack_12->SetBinError(11,1.718796);
   hnumuCCinFV_stack_12->SetBinError(12,1.274363);
   hnumuCCinFV_stack_12->SetBinError(13,0.8517191);
   hnumuCCinFV_stack_12->SetBinError(14,0.8985341);
   hnumuCCinFV_stack_12->SetBinError(15,0.5049095);
   hnumuCCinFV_stack_12->SetBinError(16,0.311099);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,8.673429);
   hnueCCinFV_stack_13->SetBinContent(5,8.677755);
   hnueCCinFV_stack_13->SetBinContent(6,9.712537);
   hnueCCinFV_stack_13->SetBinContent(7,2.73203);
   hnueCCinFV_stack_13->SetBinContent(8,6.323081);
   hnueCCinFV_stack_13->SetBinContent(9,1.26889);
   hnueCCinFV_stack_13->SetBinContent(10,1.505508);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,1.111003);
   hnueCCinFV_stack_13->SetBinContent(13,0.5528322);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,2.08778);
   hnueCCinFV_stack_13->SetBinError(5,1.699987);
   hnueCCinFV_stack_13->SetBinError(6,1.724209);
   hnueCCinFV_stack_13->SetBinError(7,0.8869923);
   hnueCCinFV_stack_13->SetBinError(8,2.090111);
   hnueCCinFV_stack_13->SetBinError(9,0.578198);
   hnueCCinFV_stack_13->SetBinError(10,0.7036984);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.565759);
   hnueCCinFV_stack_13->SetBinError(13,0.3928765);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__5->SetBinContent(4,624.186);
   hmcerror__5->SetBinContent(5,784.8235);
   hmcerror__5->SetBinContent(6,748.3401);
   hmcerror__5->SetBinContent(7,667.1094);
   hmcerror__5->SetBinContent(8,583.6942);
   hmcerror__5->SetBinContent(9,530.3014);
   hmcerror__5->SetBinContent(10,467.2381);
   hmcerror__5->SetBinContent(11,432.2848);
   hmcerror__5->SetBinContent(12,364.8891);
   hmcerror__5->SetBinContent(13,271.0917);
   hmcerror__5->SetBinContent(14,162.7423);
   hmcerror__5->SetBinContent(15,80.907);
   hmcerror__5->SetBinContent(16,43.06081);
   hmcerror__5->SetBinContent(17,18.96775);
   hmcerror__5->SetBinContent(18,6.538855);
   hmcerror__5->SetBinContent(19,1.658894);
   hmcerror__5->SetBinContent(20,0.2510999);
   hmcerror__5->SetBinContent(21,0.6705194);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,0.3895343);
   hmcerror__5->SetBinError(3,0.3895343);
   hmcerror__5->SetBinError(4,128.2977);
   hmcerror__5->SetBinError(5,163.0219);
   hmcerror__5->SetBinError(6,165.034);
   hmcerror__5->SetBinError(7,154.6168);
   hmcerror__5->SetBinError(8,147.5395);
   hmcerror__5->SetBinError(9,155.7018);
   hmcerror__5->SetBinError(10,142.1917);
   hmcerror__5->SetBinError(11,139.5277);
   hmcerror__5->SetBinError(12,125.649);
   hmcerror__5->SetBinError(13,98.56556);
   hmcerror__5->SetBinError(14,57.63233);
   hmcerror__5->SetBinError(15,29.27396);
   hmcerror__5->SetBinError(16,17.20698);
   hmcerror__5->SetBinError(17,9.841219);
   hmcerror__5->SetBinError(18,4.423719);
   hmcerror__5->SetBinError(19,2.618882);
   hmcerror__5->SetBinError(20,0.6507229);
   hmcerror__5->SetBinError(21,3.854816);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3005[20] = {
   0,
   0,
   0,
   535,
   683,
   687,
   584,
   488,
   458,
   383,
   356,
   284,
   237,
   137,
   73,
   35,
   22,
   7,
   3,
   2};
   Double_t _felx3005[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3005[20] = {
   0,
   0,
   0,
   23.13007,
   26.13427,
   26.21068,
   24.16609,
   22.09072,
   21.40093,
   19.57039,
   18.86796,
   16.8523,
   15.3948,
   11.7047,
   8.6693,
   6.0548,
   4.8417,
   2.85954,
   2.143368,
   2};
   Double_t _fehx3005[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3005[20] = {
   1.1478,
   1.1478,
   1.1478,
   23.13007,
   26.13427,
   26.21068,
   24.16609,
   22.09072,
   21.40093,
   19.57039,
   18.86796,
   16.8523,
   15.3948,
   11.7047,
   8.4672,
   5.8483,
   4.6299,
   2.61053,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0.5,6.5);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(784.5318);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/20","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2469.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3006[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3006[20] = {
   0,
   0,
   0,
   0.2055441,
   0.2077179,
   0.2205334,
   0.2317712,
   0.2527685,
   0.29361,
   0.3043238,
   0.322768,
   0.3443483,
   0.3635876,
   0.3541325,
   0.3618224,
   0.3995972,
   0.5188396,
   0.6765281,
   1.578691,
   2.59149};
   Double_t _fehx3006[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3006[20] = {
   0,
   0,
   0,
   0.2055441,
   0.2077179,
   0.2205334,
   0.2317712,
   0.2527685,
   0.29361,
   0.3043238,
   0.322768,
   0.3443483,
   0.3635876,
   0.3541325,
   0.3618224,
   0.3995972,
   0.5188396,
   0.6765281,
   1.578691,
   2.59149};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0.5,6.5);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3007[20] = {
   0,
   0,
   0,
   0.186124,
   0.1955632,
   0.2035884,
   0.2197665,
   0.2401832,
   0.2745451,
   0.291807,
   0.3090093,
   0.3336522,
   0.3493132,
   0.3285175,
   0.3145914,
   0.2918841,
   0.2985448,
   0.3349131,
   0.5177562,
   1.308577};
   Double_t _fehx3007[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3007[20] = {
   0,
   0,
   0,
   0.186124,
   0.1955632,
   0.2035884,
   0.2197665,
   0.2401832,
   0.2745451,
   0.291807,
   0.3090093,
   0.3336522,
   0.3493132,
   0.3285175,
   0.3145914,
   0.2918841,
   0.2985448,
   0.3349131,
   0.5177562,
   1.308577};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0.5,6.5);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3008[20] = {
   10,
   10,
   10,
   0.8571163,
   0.8702594,
   0.9180317,
   0.8754187,
   0.8360542,
   0.8636598,
   0.8197106,
   0.8235311,
   0.7783187,
   0.874243,
   0.8418218,
   0.9022705,
   0.812804,
   1.159864,
   1.070524,
   1.808434,
   7.964959};
   Double_t _felx3008[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3008[20] = {
   0,
   0,
   0,
   0.03705637,
   0.03329955,
   0.0350251,
   0.03622508,
   0.0378464,
   0.04035617,
   0.04188525,
   0.04364706,
   0.04618472,
   0.05678819,
   0.07192169,
   0.1071514,
   0.1406105,
   0.2552596,
   0.4373151,
   1.292046,
   7.964959};
   Double_t _fehx3008[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3008[20] = {
   0,
   0,
   0,
   0.03705637,
   0.03329955,
   0.0350251,
   0.03622508,
   0.0378464,
   0.04035617,
   0.04188525,
   0.04364706,
   0.04618472,
   0.05678819,
   0.07192169,
   0.1046535,
   0.1358149,
   0.2440933,
   0.3992335,
   1.039379,
   6.050063};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0.5,6.5);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(15.41652);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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
