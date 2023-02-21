#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Feb 17 20:55:43 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-3.3,163.3333,364.9105);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__16->SetBinContent(0,3.600736);
   hmc__16->SetBinContent(1,1.278466);
   hmc__16->SetBinContent(2,18.88687);
   hmc__16->SetBinContent(3,49.11121);
   hmc__16->SetBinContent(4,91.05109);
   hmc__16->SetBinContent(5,126.4822);
   hmc__16->SetBinContent(6,128.0163);
   hmc__16->SetBinContent(7,145.3266);
   hmc__16->SetBinContent(8,143.9219);
   hmc__16->SetBinContent(9,139.1938);
   hmc__16->SetBinContent(10,149.169);
   hmc__16->SetBinContent(11,143.8739);
   hmc__16->SetBinContent(12,135.5671);
   hmc__16->SetBinContent(13,149.1522);
   hmc__16->SetBinContent(14,137.3837);
   hmc__16->SetBinContent(15,132.9479);
   hmc__16->SetBinContent(16,155.4241);
   hmc__16->SetBinContent(17,146.2673);
   hmc__16->SetBinContent(18,142.2499);
   hmc__16->SetBinContent(19,148.5139);
   hmc__16->SetBinContent(20,151.5143);
   hmc__16->SetBinContent(21,160.0411);
   hmc__16->SetBinContent(22,138.2683);
   hmc__16->SetBinContent(23,101.4059);
   hmc__16->SetBinContent(24,72.15246);
   hmc__16->SetBinContent(25,30.08362);
   hmc__16->SetBinContent(26,3.195041);
   hmc__16->SetBinContent(27,2.028201);
   hmc__16->SetBinError(0,0.9915664);
   hmc__16->SetBinError(1,5.134296);
   hmc__16->SetBinError(2,12.73843);
   hmc__16->SetBinError(3,16.91916);
   hmc__16->SetBinError(4,25.72567);
   hmc__16->SetBinError(5,36.06265);
   hmc__16->SetBinError(6,36.97278);
   hmc__16->SetBinError(7,42.81809);
   hmc__16->SetBinError(8,41.43449);
   hmc__16->SetBinError(9,37.73466);
   hmc__16->SetBinError(10,38.23472);
   hmc__16->SetBinError(11,40.07058);
   hmc__16->SetBinError(12,42.4634);
   hmc__16->SetBinError(13,37.95458);
   hmc__16->SetBinError(14,40.36589);
   hmc__16->SetBinError(15,33.64751);
   hmc__16->SetBinError(16,38.79071);
   hmc__16->SetBinError(17,35.87852);
   hmc__16->SetBinError(18,34.471);
   hmc__16->SetBinError(19,35.2809);
   hmc__16->SetBinError(20,35.52619);
   hmc__16->SetBinError(21,37.26192);
   hmc__16->SetBinError(22,30.91293);
   hmc__16->SetBinError(23,27.2332);
   hmc__16->SetBinError(24,18.86908);
   hmc__16->SetBinError(25,12.66116);
   hmc__16->SetBinError(26,4.622814);
   hmc__16->SetBinError(27,4.127448);
   hmc__16->SetMinimum(-3.3);
   hmc__16->SetMaximum(346.5);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",26,-130,130);
   hs6_stack_6->SetMinimum(-7.708339e-09);
   hs6_stack_6->SetMaximum(168.0431);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.30591);
   hbadmatch_stack_1->SetBinContent(3,1.465526);
   hbadmatch_stack_1->SetBinContent(4,2.143896);
   hbadmatch_stack_1->SetBinContent(5,4.177231);
   hbadmatch_stack_1->SetBinContent(6,1.980987);
   hbadmatch_stack_1->SetBinContent(7,2.756522);
   hbadmatch_stack_1->SetBinContent(8,2.317395);
   hbadmatch_stack_1->SetBinContent(9,2.370111);
   hbadmatch_stack_1->SetBinContent(10,3.964945);
   hbadmatch_stack_1->SetBinContent(11,2.535931);
   hbadmatch_stack_1->SetBinContent(12,3.327272);
   hbadmatch_stack_1->SetBinContent(13,5.142482);
   hbadmatch_stack_1->SetBinContent(14,0.783481);
   hbadmatch_stack_1->SetBinContent(15,3.456643);
   hbadmatch_stack_1->SetBinContent(16,3.434642);
   hbadmatch_stack_1->SetBinContent(17,5.326443);
   hbadmatch_stack_1->SetBinContent(18,3.060201);
   hbadmatch_stack_1->SetBinContent(19,1.015871);
   hbadmatch_stack_1->SetBinContent(20,2.585588);
   hbadmatch_stack_1->SetBinContent(21,4.13951);
   hbadmatch_stack_1->SetBinContent(22,1.217248);
   hbadmatch_stack_1->SetBinContent(23,2.352858);
   hbadmatch_stack_1->SetBinContent(24,4.033366);
   hbadmatch_stack_1->SetBinContent(25,1.268811);
   hbadmatch_stack_1->SetBinError(2,0.6128253);
   hbadmatch_stack_1->SetBinError(3,0.6209405);
   hbadmatch_stack_1->SetBinError(4,1.654351);
   hbadmatch_stack_1->SetBinError(5,1.881963);
   hbadmatch_stack_1->SetBinError(6,0.7204135);
   hbadmatch_stack_1->SetBinError(7,0.8612927);
   hbadmatch_stack_1->SetBinError(8,0.769211);
   hbadmatch_stack_1->SetBinError(9,0.7707429);
   hbadmatch_stack_1->SetBinError(10,1.095067);
   hbadmatch_stack_1->SetBinError(11,0.8325131);
   hbadmatch_stack_1->SetBinError(12,0.9313958);
   hbadmatch_stack_1->SetBinError(13,1.190989);
   hbadmatch_stack_1->SetBinError(14,0.3917439);
   hbadmatch_stack_1->SetBinError(15,1.107829);
   hbadmatch_stack_1->SetBinError(16,0.9876018);
   hbadmatch_stack_1->SetBinError(17,1.214243);
   hbadmatch_stack_1->SetBinError(18,0.875283);
   hbadmatch_stack_1->SetBinError(19,0.4554874);
   hbadmatch_stack_1->SetBinError(20,0.8020198);
   hbadmatch_stack_1->SetBinError(21,1.248267);
   hbadmatch_stack_1->SetBinError(22,0.6211758);
   hbadmatch_stack_1->SetBinError(23,0.7755332);
   hbadmatch_stack_1->SetBinError(24,1.058286);
   hbadmatch_stack_1->SetBinError(25,0.5889569);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.517386);
   hext_stack_2->SetBinContent(5,4.595042);
   hext_stack_2->SetBinContent(6,6.538654);
   hext_stack_2->SetBinContent(7,2.517386);
   hext_stack_2->SetBinContent(8,3.897177);
   hext_stack_2->SetBinContent(9,8.000648);
   hext_stack_2->SetBinContent(10,6.158006);
   hext_stack_2->SetBinContent(11,5.020411);
   hext_stack_2->SetBinContent(12,5.758588);
   hext_stack_2->SetBinContent(13,16.69916);
   hext_stack_2->SetBinContent(14,6.571785);
   hext_stack_2->SetBinContent(15,9.895189);
   hext_stack_2->SetBinContent(16,11.90941);
   hext_stack_2->SetBinContent(17,14.37049);
   hext_stack_2->SetBinContent(18,19.21655);
   hext_stack_2->SetBinContent(19,25.06011);
   hext_stack_2->SetBinContent(20,26.20488);
   hext_stack_2->SetBinContent(21,33.66647);
   hext_stack_2->SetBinContent(22,28.74545);
   hext_stack_2->SetBinContent(23,17.57421);
   hext_stack_2->SetBinContent(24,17.80923);
   hext_stack_2->SetBinContent(25,4.054399);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.9575503);
   hext_stack_2->SetBinError(5,1.529106);
   hext_stack_2->SetBinError(6,1.818211);
   hext_stack_2->SetBinError(7,0.9575503);
   hext_stack_2->SetBinError(8,1.182339);
   hext_stack_2->SetBinError(9,1.961378);
   hext_stack_2->SetBinError(10,1.634652);
   hext_stack_2->SetBinError(11,1.495396);
   hext_stack_2->SetBinError(12,1.518408);
   hext_stack_2->SetBinError(13,2.938409);
   hext_stack_2->SetBinError(14,1.62364);
   hext_stack_2->SetBinError(15,2.021128);
   hext_stack_2->SetBinError(16,2.275709);
   hext_stack_2->SetBinError(17,2.626327);
   hext_stack_2->SetBinError(18,3.090494);
   hext_stack_2->SetBinError(19,3.40301);
   hext_stack_2->SetBinError(20,3.437318);
   hext_stack_2->SetBinError(21,4.104285);
   hext_stack_2->SetBinError(22,3.549634);
   hext_stack_2->SetBinError(23,2.73686);
   hext_stack_2->SetBinError(24,2.781501);
   hext_stack_2->SetBinError(25,1.311223);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,1.021941);
   hdirt_stack_3->SetBinContent(4,1.38303);
   hdirt_stack_3->SetBinContent(5,0.9712972);
   hdirt_stack_3->SetBinContent(6,2.581474);
   hdirt_stack_3->SetBinContent(7,2.093441);
   hdirt_stack_3->SetBinContent(8,2.009682);
   hdirt_stack_3->SetBinContent(9,1.830713);
   hdirt_stack_3->SetBinContent(10,2.190295);
   hdirt_stack_3->SetBinContent(11,0.5177832);
   hdirt_stack_3->SetBinContent(12,2.075862);
   hdirt_stack_3->SetBinContent(13,1.910232);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,1.512143);
   hdirt_stack_3->SetBinContent(16,2.079227);
   hdirt_stack_3->SetBinContent(17,0.652522);
   hdirt_stack_3->SetBinContent(18,1.270885);
   hdirt_stack_3->SetBinContent(19,1.153079);
   hdirt_stack_3->SetBinContent(20,3.232359);
   hdirt_stack_3->SetBinContent(21,2.692175);
   hdirt_stack_3->SetBinContent(22,2.923215);
   hdirt_stack_3->SetBinContent(23,2.134701);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.526456);
   hdirt_stack_3->SetBinError(4,0.6095247);
   hdirt_stack_3->SetBinError(5,0.4684838);
   hdirt_stack_3->SetBinError(6,0.731563);
   hdirt_stack_3->SetBinError(7,0.7518361);
   hdirt_stack_3->SetBinError(8,0.8734474);
   hdirt_stack_3->SetBinError(9,0.6763397);
   hdirt_stack_3->SetBinError(10,0.8444623);
   hdirt_stack_3->SetBinError(11,0.3046979);
   hdirt_stack_3->SetBinError(12,0.8195623);
   hdirt_stack_3->SetBinError(13,0.7492886);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.6657946);
   hdirt_stack_3->SetBinError(16,0.8170286);
   hdirt_stack_3->SetBinError(17,0.4857439);
   hdirt_stack_3->SetBinError(18,0.5908744);
   hdirt_stack_3->SetBinError(19,0.532061);
   hdirt_stack_3->SetBinError(20,0.9106743);
   hdirt_stack_3->SetBinError(21,0.910058);
   hdirt_stack_3->SetBinError(22,1.265752);
   hdirt_stack_3->SetBinError(23,0.6995661);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.557426);
   houtFV_stack_4->SetBinContent(1,1.125349);
   houtFV_stack_4->SetBinContent(2,12.27597);
   houtFV_stack_4->SetBinContent(3,16.65707);
   houtFV_stack_4->SetBinContent(4,19.19977);
   houtFV_stack_4->SetBinContent(5,18.5373);
   houtFV_stack_4->SetBinContent(6,13.66314);
   houtFV_stack_4->SetBinContent(7,16.98042);
   houtFV_stack_4->SetBinContent(8,11.33524);
   houtFV_stack_4->SetBinContent(9,11.95897);
   houtFV_stack_4->SetBinContent(10,10.10032);
   houtFV_stack_4->SetBinContent(11,9.30752);
   houtFV_stack_4->SetBinContent(12,8.490161);
   houtFV_stack_4->SetBinContent(13,8.549343);
   houtFV_stack_4->SetBinContent(14,9.720035);
   houtFV_stack_4->SetBinContent(15,7.598528);
   houtFV_stack_4->SetBinContent(16,9.354059);
   houtFV_stack_4->SetBinContent(17,9.787039);
   houtFV_stack_4->SetBinContent(18,10.69385);
   houtFV_stack_4->SetBinContent(19,9.90144);
   houtFV_stack_4->SetBinContent(20,11.47475);
   houtFV_stack_4->SetBinContent(21,13.40284);
   houtFV_stack_4->SetBinContent(22,17.58471);
   houtFV_stack_4->SetBinContent(23,12.84449);
   houtFV_stack_4->SetBinContent(24,13.30585);
   houtFV_stack_4->SetBinContent(25,14.15364);
   houtFV_stack_4->SetBinContent(26,2.00411);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.7082233);
   houtFV_stack_4->SetBinError(1,0.5194673);
   houtFV_stack_4->SetBinError(2,1.768027);
   houtFV_stack_4->SetBinError(3,2.048665);
   houtFV_stack_4->SetBinError(4,2.211958);
   houtFV_stack_4->SetBinError(5,2.165425);
   houtFV_stack_4->SetBinError(6,1.78473);
   houtFV_stack_4->SetBinError(7,2.041374);
   houtFV_stack_4->SetBinError(8,1.653481);
   houtFV_stack_4->SetBinError(9,1.754693);
   houtFV_stack_4->SetBinError(10,1.601798);
   houtFV_stack_4->SetBinError(11,1.408661);
   houtFV_stack_4->SetBinError(12,1.471908);
   houtFV_stack_4->SetBinError(13,1.45501);
   houtFV_stack_4->SetBinError(14,1.551199);
   houtFV_stack_4->SetBinError(15,1.391913);
   houtFV_stack_4->SetBinError(16,1.437831);
   houtFV_stack_4->SetBinError(17,1.583979);
   houtFV_stack_4->SetBinError(18,1.625906);
   houtFV_stack_4->SetBinError(19,1.581197);
   houtFV_stack_4->SetBinError(20,1.65788);
   houtFV_stack_4->SetBinError(21,1.822291);
   houtFV_stack_4->SetBinError(22,2.137846);
   houtFV_stack_4->SetBinError(23,1.830955);
   houtFV_stack_4->SetBinError(24,1.843268);
   houtFV_stack_4->SetBinError(25,1.963229);
   houtFV_stack_4->SetBinError(26,0.7352871);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9044259);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.938558);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.112942);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.36421);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.266556);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.668613);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.659988);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.601692);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.021192);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.32286);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.928348);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.680983);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.880028);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.993292);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.40159);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.005582);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.783542);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.150052);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.029074);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.26606);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.236753);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2693006);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4154699);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6716373);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7006149);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6448819);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6645488);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7416783);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7005222);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7446023);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7181268);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.534795);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5661409);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7155475);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7440794);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9073308);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.766665);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7223597);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5352191);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6449826);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6797972);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6669858);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.599022);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2640716);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06238626);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2926179);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.984484);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.68459);
   hNCpi0inFVres_stack_7->SetBinContent(4,33.26509);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.8987);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.40932);
   hNCpi0inFVres_stack_7->SetBinContent(7,65.83016);
   hNCpi0inFVres_stack_7->SetBinContent(8,66.41222);
   hNCpi0inFVres_stack_7->SetBinContent(9,62.17224);
   hNCpi0inFVres_stack_7->SetBinContent(10,65.4241);
   hNCpi0inFVres_stack_7->SetBinContent(11,65.61261);
   hNCpi0inFVres_stack_7->SetBinContent(12,58.86507);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.9996);
   hNCpi0inFVres_stack_7->SetBinContent(14,58.4959);
   hNCpi0inFVres_stack_7->SetBinContent(15,57.97019);
   hNCpi0inFVres_stack_7->SetBinContent(16,61.58767);
   hNCpi0inFVres_stack_7->SetBinContent(17,60.25396);
   hNCpi0inFVres_stack_7->SetBinContent(18,52.88044);
   hNCpi0inFVres_stack_7->SetBinContent(19,54.61912);
   hNCpi0inFVres_stack_7->SetBinContent(20,53.72847);
   hNCpi0inFVres_stack_7->SetBinContent(21,53.83558);
   hNCpi0inFVres_stack_7->SetBinContent(22,46.99344);
   hNCpi0inFVres_stack_7->SetBinContent(23,32.55427);
   hNCpi0inFVres_stack_7->SetBinContent(24,17.55815);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.48602);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.87819);
   hNCpi0inFVres_stack_7->SetBinError(0,0.122146);
   hNCpi0inFVres_stack_7->SetBinError(1,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5942056);
   hNCpi0inFVres_stack_7->SetBinError(3,1.247191);
   hNCpi0inFVres_stack_7->SetBinError(4,1.938097);
   hNCpi0inFVres_stack_7->SetBinError(5,2.376098);
   hNCpi0inFVres_stack_7->SetBinError(6,2.415896);
   hNCpi0inFVres_stack_7->SetBinError(7,2.685716);
   hNCpi0inFVres_stack_7->SetBinError(8,2.655951);
   hNCpi0inFVres_stack_7->SetBinError(9,2.553711);
   hNCpi0inFVres_stack_7->SetBinError(10,2.641821);
   hNCpi0inFVres_stack_7->SetBinError(11,2.676643);
   hNCpi0inFVres_stack_7->SetBinError(12,2.452723);
   hNCpi0inFVres_stack_7->SetBinError(13,2.475128);
   hNCpi0inFVres_stack_7->SetBinError(14,2.471128);
   hNCpi0inFVres_stack_7->SetBinError(15,2.501673);
   hNCpi0inFVres_stack_7->SetBinError(16,2.573448);
   hNCpi0inFVres_stack_7->SetBinError(17,2.579654);
   hNCpi0inFVres_stack_7->SetBinError(18,2.290356);
   hNCpi0inFVres_stack_7->SetBinError(19,2.413869);
   hNCpi0inFVres_stack_7->SetBinError(20,2.37689);
   hNCpi0inFVres_stack_7->SetBinError(21,2.373899);
   hNCpi0inFVres_stack_7->SetBinError(22,2.285523);
   hNCpi0inFVres_stack_7->SetBinError(23,1.812174);
   hNCpi0inFVres_stack_7->SetBinError(24,1.427056);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6169153);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3320795);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.3909362);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2504359);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.801802);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.0031);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.633669);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.44411);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.93602);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.80001);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.82042);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.15373);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.22705);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.20712);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.79543);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.85165);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.25337);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.5788);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.34836);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.03972);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.19234);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.91004);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.01756);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.764946);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.333332);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.652756);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5709538);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2764336);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1431726);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5502199);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.897916);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9638377);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.033973);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.16264);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.207338);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.042283);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.043993);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.083);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.011424);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.119086);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.167429);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.060393);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.187838);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.053026);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.009112);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.037105);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.188084);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.143514);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8217952);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8687994);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6314647);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1902537);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(2,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(3,6.21858);
   hCCpi0inFV_stack_10->SetBinContent(4,12.55756);
   hCCpi0inFV_stack_10->SetBinContent(5,15.97731);
   hCCpi0inFV_stack_10->SetBinContent(6,17.16316);
   hCCpi0inFV_stack_10->SetBinContent(7,16.18953);
   hCCpi0inFV_stack_10->SetBinContent(8,19.56916);
   hCCpi0inFV_stack_10->SetBinContent(9,17.48427);
   hCCpi0inFV_stack_10->SetBinContent(10,24.58154);
   hCCpi0inFV_stack_10->SetBinContent(11,23.29143);
   hCCpi0inFV_stack_10->SetBinContent(12,21.07819);
   hCCpi0inFV_stack_10->SetBinContent(13,19.59376);
   hCCpi0inFV_stack_10->SetBinContent(14,23.35699);
   hCCpi0inFV_stack_10->SetBinContent(15,18.31331);
   hCCpi0inFV_stack_10->SetBinContent(16,24.07469);
   hCCpi0inFV_stack_10->SetBinContent(17,18.23249);
   hCCpi0inFV_stack_10->SetBinContent(18,20.12164);
   hCCpi0inFV_stack_10->SetBinContent(19,20.56507);
   hCCpi0inFV_stack_10->SetBinContent(20,20.36883);
   hCCpi0inFV_stack_10->SetBinContent(21,17.69263);
   hCCpi0inFV_stack_10->SetBinContent(22,12.84726);
   hCCpi0inFV_stack_10->SetBinContent(23,11.5706);
   hCCpi0inFV_stack_10->SetBinContent(24,8.162674);
   hCCpi0inFV_stack_10->SetBinContent(25,1.465526);
   hCCpi0inFV_stack_10->SetBinError(0,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(2,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(3,1.210779);
   hCCpi0inFV_stack_10->SetBinError(4,1.788393);
   hCCpi0inFV_stack_10->SetBinError(5,2.060342);
   hCCpi0inFV_stack_10->SetBinError(6,2.000448);
   hCCpi0inFV_stack_10->SetBinError(7,1.967965);
   hCCpi0inFV_stack_10->SetBinError(8,2.183862);
   hCCpi0inFV_stack_10->SetBinError(9,2.122927);
   hCCpi0inFV_stack_10->SetBinError(10,2.543402);
   hCCpi0inFV_stack_10->SetBinError(11,2.467134);
   hCCpi0inFV_stack_10->SetBinError(12,2.273922);
   hCCpi0inFV_stack_10->SetBinError(13,2.166963);
   hCCpi0inFV_stack_10->SetBinError(14,2.378333);
   hCCpi0inFV_stack_10->SetBinError(15,2.145856);
   hCCpi0inFV_stack_10->SetBinError(16,2.401213);
   hCCpi0inFV_stack_10->SetBinError(17,2.123032);
   hCCpi0inFV_stack_10->SetBinError(18,2.263019);
   hCCpi0inFV_stack_10->SetBinError(19,2.28468);
   hCCpi0inFV_stack_10->SetBinError(20,2.30628);
   hCCpi0inFV_stack_10->SetBinError(21,2.052928);
   hCCpi0inFV_stack_10->SetBinError(22,1.776258);
   hCCpi0inFV_stack_10->SetBinError(23,1.733072);
   hCCpi0inFV_stack_10->SetBinError(24,1.429094);
   hCCpi0inFV_stack_10->SetBinError(25,0.6209405);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,3.319412);
   hNCinFV_stack_11->SetBinContent(4,5.961849);
   hNCinFV_stack_11->SetBinContent(5,8.160983);
   hNCinFV_stack_11->SetBinContent(6,8.744368);
   hNCinFV_stack_11->SetBinContent(7,11.4804);
   hNCinFV_stack_11->SetBinContent(8,8.944464);
   hNCinFV_stack_11->SetBinContent(9,9.329442);
   hNCinFV_stack_11->SetBinContent(10,9.481357);
   hNCinFV_stack_11->SetBinContent(11,12.41917);
   hNCinFV_stack_11->SetBinContent(12,11.03371);
   hNCinFV_stack_11->SetBinContent(13,9.821535);
   hNCinFV_stack_11->SetBinContent(14,10.02332);
   hNCinFV_stack_11->SetBinContent(15,8.841339);
   hNCinFV_stack_11->SetBinContent(16,10.17294);
   hNCinFV_stack_11->SetBinContent(17,9.415188);
   hNCinFV_stack_11->SetBinContent(18,9.33005);
   hNCinFV_stack_11->SetBinContent(19,11.08696);
   hNCinFV_stack_11->SetBinContent(20,10.17463);
   hNCinFV_stack_11->SetBinContent(21,10.05521);
   hNCinFV_stack_11->SetBinContent(22,9.426414);
   hNCinFV_stack_11->SetBinContent(23,6.530751);
   hNCinFV_stack_11->SetBinContent(24,2.541003);
   hNCinFV_stack_11->SetBinContent(25,0.9286332);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,0.9200768);
   hNCinFV_stack_11->SetBinError(4,1.209531);
   hNCinFV_stack_11->SetBinError(5,1.428862);
   hNCinFV_stack_11->SetBinError(6,1.468022);
   hNCinFV_stack_11->SetBinError(7,1.699467);
   hNCinFV_stack_11->SetBinError(8,1.481591);
   hNCinFV_stack_11->SetBinError(9,1.506384);
   hNCinFV_stack_11->SetBinError(10,1.532817);
   hNCinFV_stack_11->SetBinError(11,1.767289);
   hNCinFV_stack_11->SetBinError(12,1.687934);
   hNCinFV_stack_11->SetBinError(13,1.570111);
   hNCinFV_stack_11->SetBinError(14,1.583014);
   hNCinFV_stack_11->SetBinError(15,1.507677);
   hNCinFV_stack_11->SetBinError(16,1.544985);
   hNCinFV_stack_11->SetBinError(17,1.606607);
   hNCinFV_stack_11->SetBinError(18,1.57093);
   hNCinFV_stack_11->SetBinError(19,1.676543);
   hNCinFV_stack_11->SetBinError(20,1.545199);
   hNCinFV_stack_11->SetBinError(21,1.630222);
   hNCinFV_stack_11->SetBinError(22,1.545054);
   hNCinFV_stack_11->SetBinError(23,1.277198);
   hNCinFV_stack_11->SetBinError(24,0.8337055);
   hNCinFV_stack_11->SetBinError(25,0.48078);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,1.083935);
   hnumuCCinFV_stack_12->SetBinContent(4,4.559657);
   hnumuCCinFV_stack_12->SetBinContent(5,7.053134);
   hnumuCCinFV_stack_12->SetBinContent(6,5.17452);
   hnumuCCinFV_stack_12->SetBinContent(7,8.481337);
   hnumuCCinFV_stack_12->SetBinContent(8,9.936824);
   hnumuCCinFV_stack_12->SetBinContent(9,7.962996);
   hnumuCCinFV_stack_12->SetBinContent(10,9.417939);
   hnumuCCinFV_stack_12->SetBinContent(11,6.304288);
   hnumuCCinFV_stack_12->SetBinContent(12,8.76093);
   hnumuCCinFV_stack_12->SetBinContent(13,10.85804);
   hnumuCCinFV_stack_12->SetBinContent(14,9.694168);
   hnumuCCinFV_stack_12->SetBinContent(15,7.685716);
   hnumuCCinFV_stack_12->SetBinContent(16,10.95175);
   hnumuCCinFV_stack_12->SetBinContent(17,9.806185);
   hnumuCCinFV_stack_12->SetBinContent(18,9.660568);
   hnumuCCinFV_stack_12->SetBinContent(19,8.929881);
   hnumuCCinFV_stack_12->SetBinContent(20,6.314517);
   hnumuCCinFV_stack_12->SetBinContent(21,7.899312);
   hnumuCCinFV_stack_12->SetBinContent(22,5.99247);
   hnumuCCinFV_stack_12->SetBinContent(23,4.455591);
   hnumuCCinFV_stack_12->SetBinContent(24,3.713619);
   hnumuCCinFV_stack_12->SetBinContent(25,3.66293);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.4883562);
   hnumuCCinFV_stack_12->SetBinError(4,1.135694);
   hnumuCCinFV_stack_12->SetBinError(5,1.721254);
   hnumuCCinFV_stack_12->SetBinError(6,1.134598);
   hnumuCCinFV_stack_12->SetBinError(7,1.598837);
   hnumuCCinFV_stack_12->SetBinError(8,1.92167);
   hnumuCCinFV_stack_12->SetBinError(9,1.465735);
   hnumuCCinFV_stack_12->SetBinError(10,1.662992);
   hnumuCCinFV_stack_12->SetBinError(11,1.253269);
   hnumuCCinFV_stack_12->SetBinError(12,1.697018);
   hnumuCCinFV_stack_12->SetBinError(13,1.692186);
   hnumuCCinFV_stack_12->SetBinError(14,1.939182);
   hnumuCCinFV_stack_12->SetBinError(15,1.444965);
   hnumuCCinFV_stack_12->SetBinError(16,1.958167);
   hnumuCCinFV_stack_12->SetBinError(17,2.517779);
   hnumuCCinFV_stack_12->SetBinError(18,1.600535);
   hnumuCCinFV_stack_12->SetBinError(19,1.529507);
   hnumuCCinFV_stack_12->SetBinError(20,1.282966);
   hnumuCCinFV_stack_12->SetBinError(21,1.61162);
   hnumuCCinFV_stack_12->SetBinError(22,1.272167);
   hnumuCCinFV_stack_12->SetBinError(23,1.248139);
   hnumuCCinFV_stack_12->SetBinError(24,1.071284);
   hnumuCCinFV_stack_12->SetBinError(25,1.249363);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,1.22512);
   hnueCCinFV_stack_13->SetBinContent(6,0.2687529);
   hnueCCinFV_stack_13->SetBinContent(7,0.8744354);
   hnueCCinFV_stack_13->SetBinContent(8,1.319626);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.677241);
   hnueCCinFV_stack_13->SetBinContent(11,0.9895205);
   hnueCCinFV_stack_13->SetBinContent(12,1.507813);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.608732);
   hnueCCinFV_stack_13->SetBinContent(15,0.7039669);
   hnueCCinFV_stack_13->SetBinContent(16,3.674321);
   hnueCCinFV_stack_13->SetBinContent(17,0.5614945);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336248);
   hnueCCinFV_stack_13->SetBinContent(19,0.6760854);
   hnueCCinFV_stack_13->SetBinContent(20,2.091004);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,1.623046);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.6593169);
   hnueCCinFV_stack_13->SetBinError(6,0.2639093);
   hnueCCinFV_stack_13->SetBinError(7,0.5347158);
   hnueCCinFV_stack_13->SetBinError(8,0.6924657);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.7084458);
   hnueCCinFV_stack_13->SetBinError(11,0.5080852);
   hnueCCinFV_stack_13->SetBinError(12,0.7982213);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.68216);
   hnueCCinFV_stack_13->SetBinError(15,0.7039669);
   hnueCCinFV_stack_13->SetBinError(16,1.375063);
   hnueCCinFV_stack_13->SetBinError(17,0.4058349);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.3925631);
   hnueCCinFV_stack_13->SetBinError(20,1.33786);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.7783247);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__17->SetBinContent(0,3.600736);
   hmcerror__17->SetBinContent(1,1.278466);
   hmcerror__17->SetBinContent(2,18.88687);
   hmcerror__17->SetBinContent(3,49.11121);
   hmcerror__17->SetBinContent(4,91.05109);
   hmcerror__17->SetBinContent(5,126.4822);
   hmcerror__17->SetBinContent(6,128.0163);
   hmcerror__17->SetBinContent(7,145.3266);
   hmcerror__17->SetBinContent(8,143.9219);
   hmcerror__17->SetBinContent(9,139.1938);
   hmcerror__17->SetBinContent(10,149.169);
   hmcerror__17->SetBinContent(11,143.8739);
   hmcerror__17->SetBinContent(12,135.5671);
   hmcerror__17->SetBinContent(13,149.1522);
   hmcerror__17->SetBinContent(14,137.3837);
   hmcerror__17->SetBinContent(15,132.9479);
   hmcerror__17->SetBinContent(16,155.4241);
   hmcerror__17->SetBinContent(17,146.2673);
   hmcerror__17->SetBinContent(18,142.2499);
   hmcerror__17->SetBinContent(19,148.5139);
   hmcerror__17->SetBinContent(20,151.5143);
   hmcerror__17->SetBinContent(21,160.0411);
   hmcerror__17->SetBinContent(22,138.2683);
   hmcerror__17->SetBinContent(23,101.4059);
   hmcerror__17->SetBinContent(24,72.15246);
   hmcerror__17->SetBinContent(25,30.08362);
   hmcerror__17->SetBinContent(26,3.195041);
   hmcerror__17->SetBinContent(27,2.028201);
   hmcerror__17->SetBinError(0,0.9915664);
   hmcerror__17->SetBinError(1,5.134296);
   hmcerror__17->SetBinError(2,12.73843);
   hmcerror__17->SetBinError(3,16.91916);
   hmcerror__17->SetBinError(4,25.72567);
   hmcerror__17->SetBinError(5,36.06265);
   hmcerror__17->SetBinError(6,36.97278);
   hmcerror__17->SetBinError(7,42.81809);
   hmcerror__17->SetBinError(8,41.43449);
   hmcerror__17->SetBinError(9,37.73466);
   hmcerror__17->SetBinError(10,38.23472);
   hmcerror__17->SetBinError(11,40.07058);
   hmcerror__17->SetBinError(12,42.4634);
   hmcerror__17->SetBinError(13,37.95458);
   hmcerror__17->SetBinError(14,40.36589);
   hmcerror__17->SetBinError(15,33.64751);
   hmcerror__17->SetBinError(16,38.79071);
   hmcerror__17->SetBinError(17,35.87852);
   hmcerror__17->SetBinError(18,34.471);
   hmcerror__17->SetBinError(19,35.2809);
   hmcerror__17->SetBinError(20,35.52619);
   hmcerror__17->SetBinError(21,37.26192);
   hmcerror__17->SetBinError(22,30.91293);
   hmcerror__17->SetBinError(23,27.2332);
   hmcerror__17->SetBinError(24,18.86908);
   hmcerror__17->SetBinError(25,12.66116);
   hmcerror__17->SetBinError(26,4.622814);
   hmcerror__17->SetBinError(27,4.127448);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[26] = {
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
   Double_t _fy3021[26] = {
   3,
   11,
   42,
   107,
   117,
   130,
   159,
   146,
   149,
   139,
   146,
   150,
   144,
   134,
   146,
   165,
   135,
   139,
   137,
   145,
   137,
   154,
   106,
   68,
   22,
   1};
   Double_t _felx3021[26] = {
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
   Double_t _fely3021[26] = {
   2.143368,
   3.4975,
   6.6155,
   10.34408,
   10.81665,
   11.40175,
   12.60952,
   12.08305,
   12.20656,
   11.78983,
   12.08305,
   12.24745,
   12,
   11.57584,
   12.08305,
   12.84523,
   11.61895,
   11.78983,
   11.7047,
   12.04159,
   11.7047,
   12.40967,
   10.29563,
   8.3726,
   4.8417,
   1};
   Double_t _fehx3021[26] = {
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
   Double_t _fehy3021[26] = {
   1.72422,
   3.27,
   6.4104,
   10.34408,
   10.81665,
   11.40175,
   12.60952,
   12.08305,
   12.20656,
   11.78983,
   12.08305,
   12.24745,
   12,
   11.57584,
   12.08305,
   12.84523,
   11.61895,
   11.78983,
   11.7047,
   12.04159,
   11.7047,
   12.40967,
   10.29563,
   8.1701,
   4.6299,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-156,156);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(195.6298);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.3","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 300.0","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1156.7","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  220.6","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 391.3","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 168.7","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[26] = {
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
   Double_t _fy3022[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[26] = {
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
   Double_t _fely3022[26] = {
   4.01598,
   0.6744596,
   0.344507,
   0.282541,
   0.2851203,
   0.2888132,
   0.2946336,
   0.2878957,
   0.2710943,
   0.2563181,
   0.2785119,
   0.313228,
   0.2544688,
   0.2938186,
   0.2530879,
   0.2495797,
   0.2452941,
   0.242327,
   0.2375595,
   0.2344742,
   0.2328272,
   0.223572,
   0.2685564,
   0.2615167,
   0.4208655,
   1.446872};
   Double_t _fehx3022[26] = {
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
   Double_t _fehy3022[26] = {
   4.01598,
   0.6744596,
   0.344507,
   0.282541,
   0.2851203,
   0.2888132,
   0.2946336,
   0.2878957,
   0.2710943,
   0.2563181,
   0.2785119,
   0.313228,
   0.2544688,
   0.2938186,
   0.2530879,
   0.2495797,
   0.2452941,
   0.242327,
   0.2375595,
   0.2344742,
   0.2328272,
   0.223572,
   0.2685564,
   0.2615167,
   0.4208655,
   1.446872};
   grae = new TGraphAsymmErrors(26,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-156,156);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[26] = {
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
   Double_t _fy3023[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[26] = {
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
   Double_t _fely3023[26] = {
   0.5967065,
   0.2634618,
   0.2366797,
   0.2252049,
   0.2096132,
   0.2296311,
   0.2354124,
   0.2299919,
   0.2126246,
   0.2187189,
   0.2334535,
   0.2220769,
   0.201894,
   0.2227656,
   0.2070573,
   0.2021988,
   0.2071164,
   0.1954407,
   0.1868175,
   0.1920258,
   0.1798781,
   0.1838458,
   0.188355,
   0.1810389,
   0.2409146,
   0.429371};
   Double_t _fehx3023[26] = {
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
   Double_t _fehy3023[26] = {
   0.5967065,
   0.2634618,
   0.2366797,
   0.2252049,
   0.2096132,
   0.2296311,
   0.2354124,
   0.2299919,
   0.2126246,
   0.2187189,
   0.2334535,
   0.2220769,
   0.201894,
   0.2227656,
   0.2070573,
   0.2021988,
   0.2071164,
   0.1954407,
   0.1868175,
   0.1920258,
   0.1798781,
   0.1838458,
   0.188355,
   0.1810389,
   0.2409146,
   0.429371};
   grae = new TGraphAsymmErrors(26,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-156,156);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[26] = {
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
   Double_t _fy3024[26] = {
   2.346561,
   0.5824151,
   0.8552019,
   1.175164,
   0.9250312,
   1.015496,
   1.094088,
   1.014439,
   1.07045,
   0.931829,
   1.014778,
   1.106463,
   0.9654567,
   0.9753703,
   1.098174,
   1.061611,
   0.9229674,
   0.9771535,
   0.9224723,
   0.9570056,
   0.8560301,
   1.113777,
   1.045304,
   0.9424488,
   0.731295,
   0.3129851};
   Double_t _felx3024[26] = {
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
   Double_t _fely3024[26] = {
   1.676515,
   0.1851815,
   0.1347045,
   0.1136074,
   0.08551916,
   0.0890649,
   0.08676679,
   0.0839556,
   0.08769465,
   0.0790367,
   0.08398361,
   0.09034235,
   0.08045473,
   0.08425916,
   0.09088555,
   0.08264633,
   0.07943639,
   0.08288108,
   0.07881213,
   0.07947499,
   0.07313558,
   0.08975068,
   0.1015289,
   0.1160404,
   0.1609414,
   0.3129851};
   Double_t _fehx3024[26] = {
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
   Double_t _fehy3024[26] = {
   1.348663,
   0.1731361,
   0.1305282,
   0.1136074,
   0.08551916,
   0.0890649,
   0.08676679,
   0.0839556,
   0.08769465,
   0.0790367,
   0.08398361,
   0.09034235,
   0.08045473,
   0.08425916,
   0.09088555,
   0.08264633,
   0.07943639,
   0.08288108,
   0.07881213,
   0.07947499,
   0.07313558,
   0.08975068,
   0.1015289,
   0.1132338,
   0.153901,
   0.4255689};
   grae = new TGraphAsymmErrors(26,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-156,156);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(4.064746);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
