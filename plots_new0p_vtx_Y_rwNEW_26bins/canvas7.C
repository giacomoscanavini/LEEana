#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Mar 13 18:29:33 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
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
   pad1->Range(-170,-2.254655,163.3333,249.3173);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__19->SetBinContent(2,10.39743);
   hmc__19->SetBinContent(3,26.90636);
   hmc__19->SetBinContent(4,53.43212);
   hmc__19->SetBinContent(5,74.83241);
   hmc__19->SetBinContent(6,91.29754);
   hmc__19->SetBinContent(7,106.5683);
   hmc__19->SetBinContent(8,102.4272);
   hmc__19->SetBinContent(9,99.24553);
   hmc__19->SetBinContent(10,101.6034);
   hmc__19->SetBinContent(11,111.0767);
   hmc__19->SetBinContent(12,110.9265);
   hmc__19->SetBinContent(13,112.7327);
   hmc__19->SetBinContent(14,111.5543);
   hmc__19->SetBinContent(15,104.4981);
   hmc__19->SetBinContent(16,102.2602);
   hmc__19->SetBinContent(17,103.3626);
   hmc__19->SetBinContent(18,102.8077);
   hmc__19->SetBinContent(19,102.0164);
   hmc__19->SetBinContent(20,98.12978);
   hmc__19->SetBinContent(21,90.00517);
   hmc__19->SetBinContent(22,80.75684);
   hmc__19->SetBinContent(23,64.94802);
   hmc__19->SetBinContent(24,37.81729);
   hmc__19->SetBinContent(25,16.90407);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,9.420535);
   hmc__19->SetBinError(3,12.33906);
   hmc__19->SetBinError(4,19.64871);
   hmc__19->SetBinError(5,24.22517);
   hmc__19->SetBinError(6,30.01288);
   hmc__19->SetBinError(7,31.64443);
   hmc__19->SetBinError(8,29.49843);
   hmc__19->SetBinError(9,29.32149);
   hmc__19->SetBinError(10,28.93618);
   hmc__19->SetBinError(11,34.22078);
   hmc__19->SetBinError(12,34.33582);
   hmc__19->SetBinError(13,33.53831);
   hmc__19->SetBinError(14,31.84229);
   hmc__19->SetBinError(15,28.75933);
   hmc__19->SetBinError(16,28.34212);
   hmc__19->SetBinError(17,28.45486);
   hmc__19->SetBinError(18,29.23758);
   hmc__19->SetBinError(19,29.3051);
   hmc__19->SetBinError(20,28.48025);
   hmc__19->SetBinError(21,23.34077);
   hmc__19->SetBinError(22,22.00504);
   hmc__19->SetBinError(23,21.30539);
   hmc__19->SetBinError(24,13.70026);
   hmc__19->SetBinError(25,8.482809);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetBinError(27,0.3895343);
   hmc__19->SetMinimum(-2.254655);
   hmc__19->SetMaximum(236.7387);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",26,-130,130);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(118.3694);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.9913658);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,0.5901461);
   hbadmatch_stack_1->SetBinContent(5,1.127039);
   hbadmatch_stack_1->SetBinContent(6,0.7868615);
   hbadmatch_stack_1->SetBinContent(7,1.456894);
   hbadmatch_stack_1->SetBinContent(8,2.17664);
   hbadmatch_stack_1->SetBinContent(9,1.792733);
   hbadmatch_stack_1->SetBinContent(10,1.518779);
   hbadmatch_stack_1->SetBinContent(11,3.105551);
   hbadmatch_stack_1->SetBinContent(12,3.056146);
   hbadmatch_stack_1->SetBinContent(13,2.490273);
   hbadmatch_stack_1->SetBinContent(14,3.074381);
   hbadmatch_stack_1->SetBinContent(15,2.155133);
   hbadmatch_stack_1->SetBinContent(16,2.260899);
   hbadmatch_stack_1->SetBinContent(17,1.125349);
   hbadmatch_stack_1->SetBinContent(18,0.7868615);
   hbadmatch_stack_1->SetBinContent(19,2.919129);
   hbadmatch_stack_1->SetBinContent(20,1.500191);
   hbadmatch_stack_1->SetBinContent(21,1.268811);
   hbadmatch_stack_1->SetBinContent(22,0.9453757);
   hbadmatch_stack_1->SetBinContent(23,4.324914);
   hbadmatch_stack_1->SetBinContent(24,0.3934307);
   hbadmatch_stack_1->SetBinContent(25,0.7930992);
   hbadmatch_stack_1->SetBinError(2,0.5270344);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,0.340721);
   hbadmatch_stack_1->SetBinError(5,0.5201044);
   hbadmatch_stack_1->SetBinError(6,0.3934307);
   hbadmatch_stack_1->SetBinError(7,0.6749868);
   hbadmatch_stack_1->SetBinError(8,0.7017275);
   hbadmatch_stack_1->SetBinError(9,0.7462894);
   hbadmatch_stack_1->SetBinError(10,0.5892709);
   hbadmatch_stack_1->SetBinError(11,0.9280797);
   hbadmatch_stack_1->SetBinError(12,0.9200001);
   hbadmatch_stack_1->SetBinError(13,0.8180909);
   hbadmatch_stack_1->SetBinError(14,0.965857);
   hbadmatch_stack_1->SetBinError(15,0.6957995);
   hbadmatch_stack_1->SetBinError(16,0.7347086);
   hbadmatch_stack_1->SetBinError(17,0.5194673);
   hbadmatch_stack_1->SetBinError(18,0.3934307);
   hbadmatch_stack_1->SetBinError(19,0.9595196);
   hbadmatch_stack_1->SetBinError(20,0.6327771);
   hbadmatch_stack_1->SetBinError(21,0.5889569);
   hbadmatch_stack_1->SetBinError(22,0.5674483);
   hbadmatch_stack_1->SetBinError(23,1.544611);
   hbadmatch_stack_1->SetBinError(24,0.2781975);
   hbadmatch_stack_1->SetBinError(25,0.4673745);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,1.697008);
   hext_stack_2->SetBinContent(6,0.6487947);
   hext_stack_2->SetBinContent(7,1.78639);
   hext_stack_2->SetBinContent(8,1.939204);
   hext_stack_2->SetBinContent(9,2.510206);
   hext_stack_2->SetBinContent(10,6.057034);
   hext_stack_2->SetBinContent(11,6.318);
   hext_stack_2->SetBinContent(12,3.730002);
   hext_stack_2->SetBinContent(13,5.020411);
   hext_stack_2->SetBinContent(14,3.725593);
   hext_stack_2->SetBinContent(15,2.916804);
   hext_stack_2->SetBinContent(16,6.884593);
   hext_stack_2->SetBinContent(17,5.027592);
   hext_stack_2->SetBinContent(18,2.599588);
   hext_stack_2->SetBinContent(19,6.393022);
   hext_stack_2->SetBinContent(20,7.067767);
   hext_stack_2->SetBinContent(21,7.455595);
   hext_stack_2->SetBinContent(22,6.635217);
   hext_stack_2->SetBinContent(23,7.041816);
   hext_stack_2->SetBinContent(24,4.132192);
   hext_stack_2->SetBinContent(25,3.793434);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,0.8873887);
   hext_stack_2->SetBinError(6,0.4587671);
   hext_stack_2->SetBinError(7,0.8039566);
   hext_stack_2->SetBinError(8,0.912471);
   hext_stack_2->SetBinError(9,1.057404);
   hext_stack_2->SetBinError(10,1.696844);
   hext_stack_2->SetBinError(11,1.630074);
   hext_stack_2->SetBinError(12,1.270461);
   hext_stack_2->SetBinError(13,1.495396);
   hext_stack_2->SetBinError(14,1.216121);
   hext_stack_2->SetBinError(15,1.132884);
   hext_stack_2->SetBinError(16,1.675566);
   hext_stack_2->SetBinError(17,1.426537);
   hext_stack_2->SetBinError(18,0.9884288);
   hext_stack_2->SetBinError(19,1.708342);
   hext_stack_2->SetBinError(20,1.631079);
   hext_stack_2->SetBinError(21,1.758699);
   hext_stack_2->SetBinError(22,1.721504);
   hext_stack_2->SetBinError(23,1.76887);
   hext_stack_2->SetBinError(24,1.282292);
   hext_stack_2->SetBinError(25,1.393356);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.4794168);
   hdirt_stack_3->SetBinContent(10,0.7943197);
   hdirt_stack_3->SetBinContent(12,4.167396e-09);
   hdirt_stack_3->SetBinContent(13,1.155067);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.427289);
   hdirt_stack_3->SetBinContent(17,0.8332258);
   hdirt_stack_3->SetBinContent(18,0.3635739);
   hdirt_stack_3->SetBinContent(19,0.4007975);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,0.3841788);
   hdirt_stack_3->SetBinContent(24,0.470507);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(9,0.3402743);
   hdirt_stack_3->SetBinError(10,0.407894);
   hdirt_stack_3->SetBinError(12,4.167396e-09);
   hdirt_stack_3->SetBinError(13,0.5327083);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4247414);
   hdirt_stack_3->SetBinError(17,0.4476755);
   hdirt_stack_3->SetBinError(18,0.2623873);
   hdirt_stack_3->SetBinError(19,0.4007975);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.2742878);
   hdirt_stack_3->SetBinError(24,0.333502);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(2,7.230659);
   houtFV_stack_4->SetBinContent(3,3.533232);
   houtFV_stack_4->SetBinContent(4,2.848856);
   houtFV_stack_4->SetBinContent(5,2.344287);
   houtFV_stack_4->SetBinContent(6,1.549131);
   houtFV_stack_4->SetBinContent(7,1.360629);
   houtFV_stack_4->SetBinContent(8,1.123658);
   houtFV_stack_4->SetBinContent(9,1.909025);
   houtFV_stack_4->SetBinContent(10,1.123658);
   houtFV_stack_4->SetBinContent(11,2.731247);
   houtFV_stack_4->SetBinContent(12,1.125349);
   houtFV_stack_4->SetBinContent(13,1.121968);
   houtFV_stack_4->SetBinContent(14,1.999038);
   houtFV_stack_4->SetBinContent(15,1.356706);
   houtFV_stack_4->SetBinContent(16,1.712114);
   houtFV_stack_4->SetBinContent(17,2.195754);
   houtFV_stack_4->SetBinContent(18,1.767057);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,1.700268);
   houtFV_stack_4->SetBinContent(21,1.754036);
   houtFV_stack_4->SetBinContent(22,2.002419);
   houtFV_stack_4->SetBinContent(23,1.230917);
   houtFV_stack_4->SetBinContent(24,4.107494);
   houtFV_stack_4->SetBinContent(25,8.01745);
   houtFV_stack_4->SetBinError(2,1.345301);
   houtFV_stack_4->SetBinError(3,0.8685744);
   houtFV_stack_4->SetBinError(4,0.8496869);
   houtFV_stack_4->SetBinError(5,0.8101654);
   houtFV_stack_4->SetBinError(6,0.6002708);
   houtFV_stack_4->SetBinError(7,0.5705097);
   houtFV_stack_4->SetBinError(8,0.5188295);
   houtFV_stack_4->SetBinError(9,0.7630586);
   houtFV_stack_4->SetBinError(10,0.5188295);
   houtFV_stack_4->SetBinError(11,0.8550514);
   houtFV_stack_4->SetBinError(12,0.5194673);
   houtFV_stack_4->SetBinError(13,0.5181909);
   houtFV_stack_4->SetBinError(14,0.7339349);
   houtFV_stack_4->SetBinError(15,0.6160636);
   houtFV_stack_4->SetBinError(16,0.6201715);
   houtFV_stack_4->SetBinError(17,0.7598403);
   houtFV_stack_4->SetBinError(18,0.5890229);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.730633);
   houtFV_stack_4->SetBinError(21,0.6344966);
   houtFV_stack_4->SetBinError(22,0.7348366);
   houtFV_stack_4->SetBinError(23,0.5049962);
   houtFV_stack_4->SetBinError(24,1.069142);
   houtFV_stack_4->SetBinError(25,1.42344);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8222219);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6971721);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2756104);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3138005);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07381642);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.24089);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.71681);
   hNCpi0inFVres_stack_7->SetBinContent(4,28.73945);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.64915);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.90438);
   hNCpi0inFVres_stack_7->SetBinContent(7,55.30619);
   hNCpi0inFVres_stack_7->SetBinContent(8,54.62063);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.11597);
   hNCpi0inFVres_stack_7->SetBinContent(10,47.18438);
   hNCpi0inFVres_stack_7->SetBinContent(11,53.02216);
   hNCpi0inFVres_stack_7->SetBinContent(12,54.99329);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.51815);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.44241);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.324);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.14828);
   hNCpi0inFVres_stack_7->SetBinContent(17,47.5889);
   hNCpi0inFVres_stack_7->SetBinContent(18,47.75356);
   hNCpi0inFVres_stack_7->SetBinContent(19,46.02139);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.55925);
   hNCpi0inFVres_stack_7->SetBinContent(21,36.50014);
   hNCpi0inFVres_stack_7->SetBinContent(22,37.13357);
   hNCpi0inFVres_stack_7->SetBinContent(23,29.0653);
   hNCpi0inFVres_stack_7->SetBinContent(24,15.61693);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.144236);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3469814);
   hNCpi0inFVres_stack_7->SetBinError(3,1.187046);
   hNCpi0inFVres_stack_7->SetBinError(4,1.790586);
   hNCpi0inFVres_stack_7->SetBinError(5,2.133594);
   hNCpi0inFVres_stack_7->SetBinError(6,2.102538);
   hNCpi0inFVres_stack_7->SetBinError(7,2.51336);
   hNCpi0inFVres_stack_7->SetBinError(8,2.474185);
   hNCpi0inFVres_stack_7->SetBinError(9,2.203236);
   hNCpi0inFVres_stack_7->SetBinError(10,2.160182);
   hNCpi0inFVres_stack_7->SetBinError(11,2.341737);
   hNCpi0inFVres_stack_7->SetBinError(12,2.448727);
   hNCpi0inFVres_stack_7->SetBinError(13,2.370769);
   hNCpi0inFVres_stack_7->SetBinError(14,2.350158);
   hNCpi0inFVres_stack_7->SetBinError(15,2.328863);
   hNCpi0inFVres_stack_7->SetBinError(16,2.197473);
   hNCpi0inFVres_stack_7->SetBinError(17,2.224254);
   hNCpi0inFVres_stack_7->SetBinError(18,2.258041);
   hNCpi0inFVres_stack_7->SetBinError(19,2.16853);
   hNCpi0inFVres_stack_7->SetBinError(20,2.352076);
   hNCpi0inFVres_stack_7->SetBinError(21,1.910861);
   hNCpi0inFVres_stack_7->SetBinError(22,2.032813);
   hNCpi0inFVres_stack_7->SetBinError(23,1.844725);
   hNCpi0inFVres_stack_7->SetBinError(24,1.331659);
   hNCpi0inFVres_stack_7->SetBinError(25,0.312142);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3477539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.798562);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.85296);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.241559);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.018293);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.12492);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.323698);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.55979);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.308247);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.281012);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.08091);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.788956);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.841923);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.22141);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.767769);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.14168);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.577374);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.547729);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.332244);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.59913);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.339461);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.897886);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.386126);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1731161);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4636538);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7283515);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6613195);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9287752);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.082102);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9302755);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.150554);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8871221);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8790418);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.0513);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.037699);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9772718);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.077566);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9234865);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8953107);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9867512);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9438781);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8446831);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9297526);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7671716);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8117487);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5194746);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.06238626);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(3,3.962811);
   hCCpi0inFV_stack_10->SetBinContent(4,6.108692);
   hCCpi0inFV_stack_10->SetBinContent(5,8.291587);
   hCCpi0inFV_stack_10->SetBinContent(6,13.59101);
   hCCpi0inFV_stack_10->SetBinContent(7,14.68992);
   hCCpi0inFV_stack_10->SetBinContent(8,14.26697);
   hCCpi0inFV_stack_10->SetBinContent(9,11.82673);
   hCCpi0inFV_stack_10->SetBinContent(10,14.47853);
   hCCpi0inFV_stack_10->SetBinContent(11,15.9167);
   hCCpi0inFV_stack_10->SetBinContent(12,16.8829);
   hCCpi0inFV_stack_10->SetBinContent(13,16.7491);
   hCCpi0inFV_stack_10->SetBinContent(14,15.42143);
   hCCpi0inFV_stack_10->SetBinContent(15,13.39707);
   hCCpi0inFV_stack_10->SetBinContent(16,15.82985);
   hCCpi0inFV_stack_10->SetBinContent(17,14.26732);
   hCCpi0inFV_stack_10->SetBinContent(18,16.11849);
   hCCpi0inFV_stack_10->SetBinContent(19,14.65467);
   hCCpi0inFV_stack_10->SetBinContent(20,12.80077);
   hCCpi0inFV_stack_10->SetBinContent(21,11.23115);
   hCCpi0inFV_stack_10->SetBinContent(22,9.176445);
   hCCpi0inFV_stack_10->SetBinContent(23,7.574613);
   hCCpi0inFV_stack_10->SetBinContent(24,5.035143);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9835768);
   hCCpi0inFV_stack_10->SetBinError(2,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(3,0.961408);
   hCCpi0inFV_stack_10->SetBinError(4,1.241497);
   hCCpi0inFV_stack_10->SetBinError(5,1.474535);
   hCCpi0inFV_stack_10->SetBinError(6,1.830897);
   hCCpi0inFV_stack_10->SetBinError(7,1.951937);
   hCCpi0inFV_stack_10->SetBinError(8,1.855923);
   hCCpi0inFV_stack_10->SetBinError(9,1.675688);
   hCCpi0inFV_stack_10->SetBinError(10,1.867965);
   hCCpi0inFV_stack_10->SetBinError(11,2.000316);
   hCCpi0inFV_stack_10->SetBinError(12,2.141196);
   hCCpi0inFV_stack_10->SetBinError(13,2.076786);
   hCCpi0inFV_stack_10->SetBinError(14,1.954312);
   hCCpi0inFV_stack_10->SetBinError(15,1.765271);
   hCCpi0inFV_stack_10->SetBinError(16,2.057717);
   hCCpi0inFV_stack_10->SetBinError(17,1.965047);
   hCCpi0inFV_stack_10->SetBinError(18,2.01046);
   hCCpi0inFV_stack_10->SetBinError(19,1.946857);
   hCCpi0inFV_stack_10->SetBinError(20,1.787756);
   hCCpi0inFV_stack_10->SetBinError(21,1.699471);
   hCCpi0inFV_stack_10->SetBinError(22,1.544935);
   hCCpi0inFV_stack_10->SetBinError(23,1.337597);
   hCCpi0inFV_stack_10->SetBinError(24,1.180318);
   hCCpi0inFV_stack_10->SetBinError(25,0.4398689);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(3,2.445722);
   hNCinFV_stack_11->SetBinContent(4,4.680122);
   hNCinFV_stack_11->SetBinContent(5,5.478209);
   hNCinFV_stack_11->SetBinContent(6,7.71599);
   hNCinFV_stack_11->SetBinContent(7,10.35674);
   hNCinFV_stack_11->SetBinContent(8,7.615638);
   hNCinFV_stack_11->SetBinContent(9,8.93831);
   hNCinFV_stack_11->SetBinContent(10,9.83107);
   hNCinFV_stack_11->SetBinContent(11,8.639552);
   hNCinFV_stack_11->SetBinContent(12,10.31025);
   hNCinFV_stack_11->SetBinContent(13,9.082854);
   hNCinFV_stack_11->SetBinContent(14,8.642933);
   hNCinFV_stack_11->SetBinContent(15,10.21158);
   hNCinFV_stack_11->SetBinContent(16,8.019212);
   hNCinFV_stack_11->SetBinContent(17,11.43221);
   hNCinFV_stack_11->SetBinContent(18,12.15568);
   hNCinFV_stack_11->SetBinContent(19,9.32836);
   hNCinFV_stack_11->SetBinContent(20,7.625781);
   hNCinFV_stack_11->SetBinContent(21,11.00183);
   hNCinFV_stack_11->SetBinContent(22,6.929129);
   hNCinFV_stack_11->SetBinContent(23,3.516127);
   hNCinFV_stack_11->SetBinContent(24,2.145881);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.7600838);
   hNCinFV_stack_11->SetBinError(4,1.144301);
   hNCinFV_stack_11->SetBinError(5,1.127041);
   hNCinFV_stack_11->SetBinError(6,1.41536);
   hNCinFV_stack_11->SetBinError(7,1.618334);
   hNCinFV_stack_11->SetBinError(8,1.372559);
   hNCinFV_stack_11->SetBinError(9,1.546315);
   hNCinFV_stack_11->SetBinError(10,1.50685);
   hNCinFV_stack_11->SetBinError(11,1.494124);
   hNCinFV_stack_11->SetBinError(12,1.630945);
   hNCinFV_stack_11->SetBinError(13,1.506701);
   hNCinFV_stack_11->SetBinError(14,1.494567);
   hNCinFV_stack_11->SetBinError(15,1.594151);
   hNCinFV_stack_11->SetBinError(16,1.401887);
   hNCinFV_stack_11->SetBinError(17,1.711287);
   hNCinFV_stack_11->SetBinError(18,1.765685);
   hNCinFV_stack_11->SetBinError(19,1.570719);
   hNCinFV_stack_11->SetBinError(20,1.374006);
   hNCinFV_stack_11->SetBinError(21,1.642386);
   hNCinFV_stack_11->SetBinError(22,1.359579);
   hNCinFV_stack_11->SetBinError(23,0.940871);
   hNCinFV_stack_11->SetBinError(24,0.785499);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(3,1.497519);
   hnumuCCinFV_stack_12->SetBinContent(4,4.50843);
   hnumuCCinFV_stack_12->SetBinContent(5,9.353104);
   hnumuCCinFV_stack_12->SetBinContent(6,15.01366);
   hnumuCCinFV_stack_12->SetBinContent(7,9.151652);
   hnumuCCinFV_stack_12->SetBinContent(8,10.60222);
   hnumuCCinFV_stack_12->SetBinContent(9,10.70325);
   hnumuCCinFV_stack_12->SetBinContent(10,11.07355);
   hnumuCCinFV_stack_12->SetBinContent(11,11.96168);
   hnumuCCinFV_stack_12->SetBinContent(12,9.106534);
   hnumuCCinFV_stack_12->SetBinContent(13,13.30509);
   hnumuCCinFV_stack_12->SetBinContent(14,14.01037);
   hnumuCCinFV_stack_12->SetBinContent(15,13.11175);
   hnumuCCinFV_stack_12->SetBinContent(16,11.59268);
   hnumuCCinFV_stack_12->SetBinContent(17,11.66142);
   hnumuCCinFV_stack_12->SetBinContent(18,10.78886);
   hnumuCCinFV_stack_12->SetBinContent(19,12.07932);
   hnumuCCinFV_stack_12->SetBinContent(20,9.391937);
   hnumuCCinFV_stack_12->SetBinContent(21,11.72682);
   hnumuCCinFV_stack_12->SetBinContent(22,10.34097);
   hnumuCCinFV_stack_12->SetBinContent(23,5.772775);
   hnumuCCinFV_stack_12->SetBinContent(24,3.306389);
   hnumuCCinFV_stack_12->SetBinContent(25,1.30326);
   hnumuCCinFV_stack_12->SetBinError(3,0.6318953);
   hnumuCCinFV_stack_12->SetBinError(4,1.109465);
   hnumuCCinFV_stack_12->SetBinError(5,1.811389);
   hnumuCCinFV_stack_12->SetBinError(6,2.380165);
   hnumuCCinFV_stack_12->SetBinError(7,1.638237);
   hnumuCCinFV_stack_12->SetBinError(8,1.746264);
   hnumuCCinFV_stack_12->SetBinError(9,1.658551);
   hnumuCCinFV_stack_12->SetBinError(10,1.857842);
   hnumuCCinFV_stack_12->SetBinError(11,2.126819);
   hnumuCCinFV_stack_12->SetBinError(12,1.963816);
   hnumuCCinFV_stack_12->SetBinError(13,1.956411);
   hnumuCCinFV_stack_12->SetBinError(14,2.198068);
   hnumuCCinFV_stack_12->SetBinError(15,2.029648);
   hnumuCCinFV_stack_12->SetBinError(16,1.747762);
   hnumuCCinFV_stack_12->SetBinError(17,1.858932);
   hnumuCCinFV_stack_12->SetBinError(18,1.934987);
   hnumuCCinFV_stack_12->SetBinError(19,2.904563);
   hnumuCCinFV_stack_12->SetBinError(20,2.102826);
   hnumuCCinFV_stack_12->SetBinError(21,1.95542);
   hnumuCCinFV_stack_12->SetBinError(22,2.028559);
   hnumuCCinFV_stack_12->SetBinError(23,1.497916);
   hnumuCCinFV_stack_12->SetBinError(24,0.9561774);
   hnumuCCinFV_stack_12->SetBinError(25,0.6535266);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,1.223615);
   hnueCCinFV_stack_13->SetBinContent(8,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(9,1.419486);
   hnueCCinFV_stack_13->SetBinContent(10,0.745953);
   hnueCCinFV_stack_13->SetBinContent(11,0.6965446);
   hnueCCinFV_stack_13->SetBinContent(12,0.5668526);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.158955);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(19,0.5853692);
   hnueCCinFV_stack_13->SetBinContent(20,0.537618);
   hnueCCinFV_stack_13->SetBinContent(21,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2476759);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.6232214);
   hnueCCinFV_stack_13->SetBinError(8,0.5507173);
   hnueCCinFV_stack_13->SetBinError(9,0.5377431);
   hnueCCinFV_stack_13->SetBinError(10,0.4451643);
   hnueCCinFV_stack_13->SetBinError(11,0.4044932);
   hnueCCinFV_stack_13->SetBinError(12,0.4041175);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.7264723);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2556436);
   hnueCCinFV_stack_13->SetBinError(19,0.4193325);
   hnueCCinFV_stack_13->SetBinError(20,0.3933237);
   hnueCCinFV_stack_13->SetBinError(21,0.2504446);
   hnueCCinFV_stack_13->SetBinError(25,0.3893379);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__20->SetBinContent(2,10.39743);
   hmcerror__20->SetBinContent(3,26.90636);
   hmcerror__20->SetBinContent(4,53.43212);
   hmcerror__20->SetBinContent(5,74.83241);
   hmcerror__20->SetBinContent(6,91.29754);
   hmcerror__20->SetBinContent(7,106.5683);
   hmcerror__20->SetBinContent(8,102.4272);
   hmcerror__20->SetBinContent(9,99.24553);
   hmcerror__20->SetBinContent(10,101.6034);
   hmcerror__20->SetBinContent(11,111.0767);
   hmcerror__20->SetBinContent(12,110.9265);
   hmcerror__20->SetBinContent(13,112.7327);
   hmcerror__20->SetBinContent(14,111.5543);
   hmcerror__20->SetBinContent(15,104.4981);
   hmcerror__20->SetBinContent(16,102.2602);
   hmcerror__20->SetBinContent(17,103.3626);
   hmcerror__20->SetBinContent(18,102.8077);
   hmcerror__20->SetBinContent(19,102.0164);
   hmcerror__20->SetBinContent(20,98.12978);
   hmcerror__20->SetBinContent(21,90.00517);
   hmcerror__20->SetBinContent(22,80.75684);
   hmcerror__20->SetBinContent(23,64.94802);
   hmcerror__20->SetBinContent(24,37.81729);
   hmcerror__20->SetBinContent(25,16.90407);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,9.420535);
   hmcerror__20->SetBinError(3,12.33906);
   hmcerror__20->SetBinError(4,19.64871);
   hmcerror__20->SetBinError(5,24.22517);
   hmcerror__20->SetBinError(6,30.01288);
   hmcerror__20->SetBinError(7,31.64443);
   hmcerror__20->SetBinError(8,29.49843);
   hmcerror__20->SetBinError(9,29.32149);
   hmcerror__20->SetBinError(10,28.93618);
   hmcerror__20->SetBinError(11,34.22078);
   hmcerror__20->SetBinError(12,34.33582);
   hmcerror__20->SetBinError(13,33.53831);
   hmcerror__20->SetBinError(14,31.84229);
   hmcerror__20->SetBinError(15,28.75933);
   hmcerror__20->SetBinError(16,28.34212);
   hmcerror__20->SetBinError(17,28.45486);
   hmcerror__20->SetBinError(18,29.23758);
   hmcerror__20->SetBinError(19,29.3051);
   hmcerror__20->SetBinError(20,28.48025);
   hmcerror__20->SetBinError(21,23.34077);
   hmcerror__20->SetBinError(22,22.00504);
   hmcerror__20->SetBinError(23,21.30539);
   hmcerror__20->SetBinError(24,13.70026);
   hmcerror__20->SetBinError(25,8.482809);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetBinError(27,0.3895343);
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
   
   Double_t _fx3025[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3025[26] = {
   0,
   5,
   20,
   48,
   55,
   68,
   56,
   80,
   80,
   86,
   77,
   65,
   63,
   74,
   71,
   74,
   89,
   87,
   66,
   72,
   67,
   61,
   58,
   22,
   8,
   0};
   Double_t _felx3025[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3025[26] = {
   0,
   2.48995,
   4.6266,
   7.0604,
   7.546,
   8.3726,
   7.6127,
   9.0683,
   9.0683,
   9.3967,
   8.8995,
   8.1893,
   8.0648,
   8.7275,
   8.5518,
   8.7275,
   9.5566,
   9.4503,
   8.2509,
   8.6108,
   8.3119,
   7.9383,
   7.7446,
   4.8417,
   3.0307,
   0};
   Double_t _fehx3025[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3025[26] = {
   1.1478,
   2.21064,
   4.4133,
   6.8561,
   7.3425,
   8.1701,
   7.4094,
   8.8665,
   8.8665,
   9.1951,
   8.6976,
   7.9866,
   7.862,
   8.5253,
   8.3496,
   8.5253,
   9.3552,
   9.2488,
   8.0483,
   8.4085,
   8.1094,
   7.7354,
   7.5415,
   4.6299,
   2.7896,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-156,156);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(108.1907);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.3/26","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3026[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3026[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3026[26] = {
   0,
   0.9060442,
   0.4585926,
   0.3677321,
   0.3237256,
   0.328737,
   0.2969403,
   0.2879941,
   0.2954439,
   0.2847953,
   0.3080826,
   0.3095366,
   0.2975029,
   0.2854421,
   0.2752139,
   0.277157,
   0.2752916,
   0.2843909,
   0.2872586,
   0.2902305,
   0.259327,
   0.2724852,
   0.3280375,
   0.3622751,
   0.5018204,
   0};
   Double_t _fehx3026[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3026[26] = {
   0,
   0.9060442,
   0.4585926,
   0.3677321,
   0.3237256,
   0.328737,
   0.2969403,
   0.2879941,
   0.2954439,
   0.2847953,
   0.3080826,
   0.3095366,
   0.2975029,
   0.2854421,
   0.2752139,
   0.277157,
   0.2752916,
   0.2843909,
   0.2872586,
   0.2902305,
   0.259327,
   0.2724852,
   0.3280375,
   0.3622751,
   0.5018204,
   0};
   grae = new TGraphAsymmErrors(26,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-156,156);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3027[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3027[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3027[26] = {
   0,
   0.2757565,
   0.2865067,
   0.2467634,
   0.2454406,
   0.2344501,
   0.2447203,
   0.2460526,
   0.2534348,
   0.2310816,
   0.2441107,
   0.2432128,
   0.2332312,
   0.2428093,
   0.2403646,
   0.2377747,
   0.2355351,
   0.2443101,
   0.2319104,
   0.2436049,
   0.2152083,
   0.2179924,
   0.2104554,
   0.2423427,
   0.2181461,
   0};
   Double_t _fehx3027[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3027[26] = {
   0,
   0.2757565,
   0.2865067,
   0.2467634,
   0.2454406,
   0.2344501,
   0.2447203,
   0.2460526,
   0.2534348,
   0.2310816,
   0.2441107,
   0.2432128,
   0.2332312,
   0.2428093,
   0.2403646,
   0.2377747,
   0.2355351,
   0.2443101,
   0.2319104,
   0.2436049,
   0.2152083,
   0.2179924,
   0.2104554,
   0.2423427,
   0.2181461,
   0};
   grae = new TGraphAsymmErrors(26,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-156,156);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3028[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3028[26] = {
   10,
   0.4808879,
   0.7433186,
   0.898336,
   0.7349756,
   0.7448174,
   0.5254845,
   0.7810423,
   0.8060817,
   0.8464281,
   0.693215,
   0.5859734,
   0.5588439,
   0.6633542,
   0.6794384,
   0.7236445,
   0.8610461,
   0.8462399,
   0.6469545,
   0.7337222,
   0.7444017,
   0.755354,
   0.8930218,
   0.5817445,
   0.4732588,
   10};
   Double_t _felx3028[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3028[26] = {
   0,
   0.2394774,
   0.1719519,
   0.1321377,
   0.1008387,
   0.09170674,
   0.07143493,
   0.08853407,
   0.09137238,
   0.09248408,
   0.08012035,
   0.07382633,
   0.07153912,
   0.07823545,
   0.08183692,
   0.08534604,
   0.092457,
   0.09192208,
   0.08087814,
   0.0877491,
   0.09234914,
   0.0982988,
   0.119243,
   0.1280287,
   0.1792882,
   0};
   Double_t _fehx3028[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3028[26] = {
   0,
   0.212614,
   0.1640244,
   0.1283142,
   0.09811925,
   0.08948872,
   0.06952723,
   0.08656389,
   0.08933904,
   0.0904999,
   0.07830268,
   0.071999,
   0.06974017,
   0.07642288,
   0.07990195,
   0.08336873,
   0.09050852,
   0.08996211,
   0.07889219,
   0.08568754,
   0.09009927,
   0.09578632,
   0.1161159,
   0.1224281,
   0.1650253,
   0};
   grae = new TGraphAsymmErrors(26,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-156,156);
   Graph_Graph3028->SetMinimum(0.2172695);
   Graph_Graph3028->SetMaximum(10.97586);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
