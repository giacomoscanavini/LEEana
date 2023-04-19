#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Mar 13 18:29:33 2023) by ROOT version 6.26/00
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
   pad1->Range(-170,-3.922657,163.3333,433.7632);
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
   hmc__16->SetBinContent(0,4.341506);
   hmc__16->SetBinContent(1,2.183437);
   hmc__16->SetBinContent(2,20.96736);
   hmc__16->SetBinContent(3,57.24086);
   hmc__16->SetBinContent(4,112.2007);
   hmc__16->SetBinContent(5,154.9489);
   hmc__16->SetBinContent(6,159.9234);
   hmc__16->SetBinContent(7,181.5778);
   hmc__16->SetBinContent(8,180.8369);
   hmc__16->SetBinContent(9,179.1045);
   hmc__16->SetBinContent(10,190.635);
   hmc__16->SetBinContent(11,184.9335);
   hmc__16->SetBinContent(12,176.2189);
   hmc__16->SetBinContent(13,185.6273);
   hmc__16->SetBinContent(14,183.6893);
   hmc__16->SetBinContent(15,176.9408);
   hmc__16->SetBinContent(16,196.1328);
   hmc__16->SetBinContent(17,184.4839);
   hmc__16->SetBinContent(18,173.4195);
   hmc__16->SetBinContent(19,183.0527);
   hmc__16->SetBinContent(20,193.5072);
   hmc__16->SetBinContent(21,186.5371);
   hmc__16->SetBinContent(22,166.4586);
   hmc__16->SetBinContent(23,123.7168);
   hmc__16->SetBinContent(24,83.05788);
   hmc__16->SetBinContent(25,35.06396);
   hmc__16->SetBinContent(26,3.195041);
   hmc__16->SetBinContent(27,3.009751);
   hmc__16->SetBinError(0,1.053254);
   hmc__16->SetBinError(1,9.905919);
   hmc__16->SetBinError(2,12.94007);
   hmc__16->SetBinError(3,17.92828);
   hmc__16->SetBinError(4,31.54514);
   hmc__16->SetBinError(5,39.80358);
   hmc__16->SetBinError(6,42.70021);
   hmc__16->SetBinError(7,48.12933);
   hmc__16->SetBinError(8,47.88892);
   hmc__16->SetBinError(9,43.68611);
   hmc__16->SetBinError(10,46.79064);
   hmc__16->SetBinError(11,46.41218);
   hmc__16->SetBinError(12,46.02837);
   hmc__16->SetBinError(13,44.35397);
   hmc__16->SetBinError(14,49.00017);
   hmc__16->SetBinError(15,41.27646);
   hmc__16->SetBinError(16,45.16971);
   hmc__16->SetBinError(17,43.52813);
   hmc__16->SetBinError(18,39.40088);
   hmc__16->SetBinError(19,41.30717);
   hmc__16->SetBinError(20,42.73647);
   hmc__16->SetBinError(21,43.285);
   hmc__16->SetBinError(22,36.99483);
   hmc__16->SetBinError(23,31.4578);
   hmc__16->SetBinError(24,20.86968);
   hmc__16->SetBinError(25,14.32518);
   hmc__16->SetBinError(26,4.400215);
   hmc__16->SetBinError(27,4.737898);
   hmc__16->SetMinimum(-3.922657);
   hmc__16->SetMaximum(411.8789);
   hmc__16->SetEntries(3645.257);
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
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(205.9395);
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
   hbadmatch_stack_1->SetBinContent(2,1.524267);
   hbadmatch_stack_1->SetBinContent(3,1.465526);
   hbadmatch_stack_1->SetBinContent(4,5.541411);
   hbadmatch_stack_1->SetBinContent(5,4.373947);
   hbadmatch_stack_1->SetBinContent(6,2.517879);
   hbadmatch_stack_1->SetBinContent(7,3.0967);
   hbadmatch_stack_1->SetBinContent(8,3.051003);
   hbadmatch_stack_1->SetBinContent(9,2.807127);
   hbadmatch_stack_1->SetBinContent(10,5.2723);
   hbadmatch_stack_1->SetBinContent(11,2.732646);
   hbadmatch_stack_1->SetBinContent(12,3.720703);
   hbadmatch_stack_1->SetBinContent(13,6.214578);
   hbadmatch_stack_1->SetBinContent(14,2.157107);
   hbadmatch_stack_1->SetBinContent(15,3.848383);
   hbadmatch_stack_1->SetBinContent(16,5.651816);
   hbadmatch_stack_1->SetBinContent(17,5.719874);
   hbadmatch_stack_1->SetBinContent(18,3.060201);
   hbadmatch_stack_1->SetBinContent(19,1.015871);
   hbadmatch_stack_1->SetBinContent(20,3.123074);
   hbadmatch_stack_1->SetBinContent(21,4.819865);
   hbadmatch_stack_1->SetBinContent(22,1.871356);
   hbadmatch_stack_1->SetBinContent(23,2.693036);
   hbadmatch_stack_1->SetBinContent(24,4.961999);
   hbadmatch_stack_1->SetBinContent(25,1.999038);
   hbadmatch_stack_1->SetBinError(2,0.6505648);
   hbadmatch_stack_1->SetBinError(3,0.6209405);
   hbadmatch_stack_1->SetBinError(4,2.61821);
   hbadmatch_stack_1->SetBinError(5,1.892217);
   hbadmatch_stack_1->SetBinError(6,0.8206176);
   hbadmatch_stack_1->SetBinError(7,0.9260377);
   hbadmatch_stack_1->SetBinError(8,0.8858895);
   hbadmatch_stack_1->SetBinError(9,0.8309551);
   hbadmatch_stack_1->SetBinError(10,1.376163);
   hbadmatch_stack_1->SetBinError(11,0.8554385);
   hbadmatch_stack_1->SetBinError(12,0.9720555);
   hbadmatch_stack_1->SetBinError(13,1.314013);
   hbadmatch_stack_1->SetBinError(14,0.6503978);
   hbadmatch_stack_1->SetBinError(15,1.141935);
   hbadmatch_stack_1->SetBinError(16,1.255891);
   hbadmatch_stack_1->SetBinError(17,1.245705);
   hbadmatch_stack_1->SetBinError(18,0.875283);
   hbadmatch_stack_1->SetBinError(19,0.4554874);
   hbadmatch_stack_1->SetBinError(20,0.8931147);
   hbadmatch_stack_1->SetBinError(21,1.337764);
   hbadmatch_stack_1->SetBinError(22,0.7960928);
   hbadmatch_stack_1->SetBinError(23,0.8468604);
   hbadmatch_stack_1->SetBinError(24,1.162376);
   hbadmatch_stack_1->SetBinError(25,0.7339349);
   hbadmatch_stack_1->SetEntries(316);

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
   hext_stack_2->SetBinContent(3,1.055394);
   hext_stack_2->SetBinContent(4,2.517386);
   hext_stack_2->SetBinContent(5,4.132192);
   hext_stack_2->SetBinContent(6,4.613812);
   hext_stack_2->SetBinContent(7,2.517386);
   hext_stack_2->SetBinContent(8,4.303776);
   hext_stack_2->SetBinContent(9,7.855014);
   hext_stack_2->SetBinContent(10,8.503808);
   hext_stack_2->SetBinContent(11,8.57883);
   hext_stack_2->SetBinContent(12,6.407382);
   hext_stack_2->SetBinContent(13,13.43484);
   hext_stack_2->SetBinContent(14,11.01401);
   hext_stack_2->SetBinContent(15,12.72261);
   hext_stack_2->SetBinContent(16,13.30797);
   hext_stack_2->SetBinContent(17,13.98984);
   hext_stack_2->SetBinContent(18,17.07105);
   hext_stack_2->SetBinContent(19,23.89939);
   hext_stack_2->SetBinContent(20,29.47921);
   hext_stack_2->SetBinContent(21,27.53283);
   hext_stack_2->SetBinContent(22,29.12175);
   hext_stack_2->SetBinContent(23,19.44998);
   hext_stack_2->SetBinContent(24,16.69758);
   hext_stack_2->SetBinContent(25,4.378797);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinError(3,0.6130171);
   hext_stack_2->SetBinError(4,0.9575503);
   hext_stack_2->SetBinError(5,1.282292);
   hext_stack_2->SetBinError(6,1.439057);
   hext_stack_2->SetBinError(7,0.9575503);
   hext_stack_2->SetBinError(8,1.250299);
   hext_stack_2->SetBinError(9,1.859985);
   hext_stack_2->SetBinError(10,1.915728);
   hext_stack_2->SetBinError(11,1.982751);
   hext_stack_2->SetBinError(12,1.5862);
   hext_stack_2->SetBinError(13,2.459133);
   hext_stack_2->SetBinError(14,2.188177);
   hext_stack_2->SetBinError(15,2.347232);
   hext_stack_2->SetBinError(16,2.322196);
   hext_stack_2->SetBinError(17,2.502757);
   hext_stack_2->SetBinError(18,2.769006);
   hext_stack_2->SetBinError(19,3.153783);
   hext_stack_2->SetBinError(20,3.540358);
   hext_stack_2->SetBinError(21,3.450033);
   hext_stack_2->SetBinError(22,3.430477);
   hext_stack_2->SetBinError(23,2.827656);
   hext_stack_2->SetBinError(24,2.613884);
   hext_stack_2->SetBinError(25,1.350755);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetEntries(711);

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
   hdirt_stack_3->SetBinContent(5,1.190193);
   hdirt_stack_3->SetBinContent(6,2.581474);
   hdirt_stack_3->SetBinContent(7,2.231512);
   hdirt_stack_3->SetBinContent(8,2.009682);
   hdirt_stack_3->SetBinContent(9,1.830713);
   hdirt_stack_3->SetBinContent(10,2.190295);
   hdirt_stack_3->SetBinContent(11,0.9940419);
   hdirt_stack_3->SetBinContent(12,2.294758);
   hdirt_stack_3->SetBinContent(13,1.910232);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,1.86911);
   hdirt_stack_3->SetBinContent(16,2.079227);
   hdirt_stack_3->SetBinContent(17,0.8714176);
   hdirt_stack_3->SetBinContent(18,1.609072);
   hdirt_stack_3->SetBinContent(19,1.153079);
   hdirt_stack_3->SetBinContent(20,4.008337);
   hdirt_stack_3->SetBinContent(21,2.968318);
   hdirt_stack_3->SetBinContent(22,2.923215);
   hdirt_stack_3->SetBinContent(23,2.293332);
   hdirt_stack_3->SetBinContent(24,1.149204);
   hdirt_stack_3->SetBinContent(25,0.4048706);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.526456);
   hdirt_stack_3->SetBinError(4,0.6095247);
   hdirt_stack_3->SetBinError(5,0.5170999);
   hdirt_stack_3->SetBinError(6,0.731563);
   hdirt_stack_3->SetBinError(7,0.7644091);
   hdirt_stack_3->SetBinError(8,0.8734474);
   hdirt_stack_3->SetBinError(9,0.6763397);
   hdirt_stack_3->SetBinError(10,0.8444623);
   hdirt_stack_3->SetBinError(11,0.4756839);
   hdirt_stack_3->SetBinError(12,0.848291);
   hdirt_stack_3->SetBinError(13,0.7492886);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.7143259);
   hdirt_stack_3->SetBinError(16,0.8170286);
   hdirt_stack_3->SetBinError(17,0.5327874);
   hdirt_stack_3->SetBinError(18,0.6808107);
   hdirt_stack_3->SetBinError(19,0.532061);
   hdirt_stack_3->SetBinError(20,1.019573);
   hdirt_stack_3->SetBinError(21,0.9307702);
   hdirt_stack_3->SetBinError(22,1.265752);
   hdirt_stack_3->SetBinError(23,0.7173259);
   hdirt_stack_3->SetBinError(24,0.9557142);
   hdirt_stack_3->SetBinError(25,0.2872316);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(173);

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
   houtFV_stack_4->SetBinContent(0,1.754141);
   houtFV_stack_4->SetBinContent(1,1.465526);
   houtFV_stack_4->SetBinContent(2,13.39794);
   houtFV_stack_4->SetBinContent(3,18.98594);
   houtFV_stack_4->SetBinContent(4,21.11029);
   houtFV_stack_4->SetBinContent(5,19.91397);
   houtFV_stack_4->SetBinContent(6,15.06406);
   houtFV_stack_4->SetBinContent(7,17.76559);
   houtFV_stack_4->SetBinContent(8,12.74751);
   houtFV_stack_4->SetBinContent(9,13.51952);
   houtFV_stack_4->SetBinContent(10,11.47226);
   houtFV_stack_4->SetBinContent(11,11.84514);
   houtFV_stack_4->SetBinContent(12,10.54076);
   houtFV_stack_4->SetBinContent(13,9.814773);
   houtFV_stack_4->SetBinContent(14,10.63872);
   houtFV_stack_4->SetBinContent(15,8.330445);
   houtFV_stack_4->SetBinContent(16,10.34856);
   houtFV_stack_4->SetBinContent(17,11.74743);
   houtFV_stack_4->SetBinContent(18,12.59385);
   houtFV_stack_4->SetBinContent(19,11.41702);
   houtFV_stack_4->SetBinContent(20,13.38189);
   houtFV_stack_4->SetBinContent(21,15.2618);
   houtFV_stack_4->SetBinContent(22,20.0833);
   houtFV_stack_4->SetBinContent(23,14.16655);
   houtFV_stack_4->SetBinContent(24,15.35983);
   houtFV_stack_4->SetBinContent(25,15.86406);
   houtFV_stack_4->SetBinContent(26,2.00411);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.7350354);
   houtFV_stack_4->SetBinError(1,0.6209405);
   houtFV_stack_4->SetBinError(2,1.842401);
   houtFV_stack_4->SetBinError(3,2.170001);
   houtFV_stack_4->SetBinError(4,2.305803);
   houtFV_stack_4->SetBinError(5,2.240999);
   houtFV_stack_4->SetBinError(6,1.88532);
   houtFV_stack_4->SetBinError(7,2.078781);
   houtFV_stack_4->SetBinError(8,1.777046);
   houtFV_stack_4->SetBinError(9,1.855863);
   houtFV_stack_4->SetBinError(10,1.683642);
   houtFV_stack_4->SetBinError(11,1.63648);
   houtFV_stack_4->SetBinError(12,1.632846);
   houtFV_stack_4->SetBinError(13,1.569267);
   houtFV_stack_4->SetBinError(14,1.641481);
   houtFV_stack_4->SetBinError(15,1.459409);
   houtFV_stack_4->SetBinError(16,1.532207);
   houtFV_stack_4->SetBinError(17,1.700973);
   houtFV_stack_4->SetBinError(18,1.767627);
   houtFV_stack_4->SetBinError(19,1.709864);
   houtFV_stack_4->SetBinError(20,1.78079);
   houtFV_stack_4->SetBinError(21,1.945175);
   houtFV_stack_4->SetBinError(22,2.277473);
   houtFV_stack_4->SetBinError(23,1.913358);
   houtFV_stack_4->SetBinError(24,1.974496);
   houtFV_stack_4->SetBinError(25,2.058694);
   houtFV_stack_4->SetBinError(26,0.7352871);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetEntries(1472);

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
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.966458);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.140842);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.42001);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.294456);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.793832);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.910424);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.75481);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.17431);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.40656);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.039948);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.848383);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.131296);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.30036);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.568991);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.1308);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.978178);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.498638);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.140674);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.32186);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.487188);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2693006);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4164057);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6722165);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7017251);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6454851);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.672216);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7553709);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7083495);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7519709);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7197509);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5376982);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5702508);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7428141);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7713466);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9099009);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7733204);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7353538);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5793918);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6473918);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6809413);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6821792);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1431726);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

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
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.450808);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9339901);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6418679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.7538042);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4301228);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3344153);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2250829);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3453893);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06834073);
   hNCpi0inFVqe_stack_6->SetEntries(229);

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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.277102);
   hNCpi0inFVres_stack_7->SetBinContent(3,17.37529);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.25415);
   hNCpi0inFVres_stack_7->SetBinContent(5,65.7888);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.58499);
   hNCpi0inFVres_stack_7->SetBinContent(7,85.26624);
   hNCpi0inFVres_stack_7->SetBinContent(8,85.1239);
   hNCpi0inFVres_stack_7->SetBinContent(9,83.04751);
   hNCpi0inFVres_stack_7->SetBinContent(10,86.61507);
   hNCpi0inFVres_stack_7->SetBinContent(11,86.24774);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.05396);
   hNCpi0inFVres_stack_7->SetBinContent(13,79.92517);
   hNCpi0inFVres_stack_7->SetBinContent(14,76.44564);
   hNCpi0inFVres_stack_7->SetBinContent(15,79.3181);
   hNCpi0inFVres_stack_7->SetBinContent(16,81.35027);
   hNCpi0inFVres_stack_7->SetBinContent(17,77.79498);
   hNCpi0inFVres_stack_7->SetBinContent(18,68.09364);
   hNCpi0inFVres_stack_7->SetBinContent(19,73.44706);
   hNCpi0inFVres_stack_7->SetBinContent(20,73.47446);
   hNCpi0inFVres_stack_7->SetBinContent(21,70.23405);
   hNCpi0inFVres_stack_7->SetBinContent(22,61.03517);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.26393);
   hNCpi0inFVres_stack_7->SetBinContent(24,21.75663);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.671278);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.519562);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(2,0.60663);
   hNCpi0inFVres_stack_7->SetBinError(3,1.344939);
   hNCpi0inFVres_stack_7->SetBinError(4,2.121444);
   hNCpi0inFVres_stack_7->SetBinError(5,2.663341);
   hNCpi0inFVres_stack_7->SetBinError(6,2.76684);
   hNCpi0inFVres_stack_7->SetBinError(7,3.032037);
   hNCpi0inFVres_stack_7->SetBinError(8,3.010987);
   hNCpi0inFVres_stack_7->SetBinError(9,2.987987);
   hNCpi0inFVres_stack_7->SetBinError(10,3.052656);
   hNCpi0inFVres_stack_7->SetBinError(11,3.079062);
   hNCpi0inFVres_stack_7->SetBinError(12,2.864931);
   hNCpi0inFVres_stack_7->SetBinError(13,2.88454);
   hNCpi0inFVres_stack_7->SetBinError(14,2.839253);
   hNCpi0inFVres_stack_7->SetBinError(15,2.939336);
   hNCpi0inFVres_stack_7->SetBinError(16,2.988422);
   hNCpi0inFVres_stack_7->SetBinError(17,2.90763);
   hNCpi0inFVres_stack_7->SetBinError(18,2.609642);
   hNCpi0inFVres_stack_7->SetBinError(19,2.834863);
   hNCpi0inFVres_stack_7->SetBinError(20,2.817614);
   hNCpi0inFVres_stack_7->SetBinError(21,2.737887);
   hNCpi0inFVres_stack_7->SetBinError(22,2.611693);
   hNCpi0inFVres_stack_7->SetBinError(23,2.128617);
   hNCpi0inFVres_stack_7->SetBinError(24,1.600378);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7295085);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4551821);
   hNCpi0inFVres_stack_7->SetEntries(27989);

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
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.387206);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.299789);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.44037);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.30811);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.82493);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.63528);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.55804);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.64299);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.99273);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.67122);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.78316);
   hNCpi0inFVdis_stack_8->SetBinContent(14,19.12469);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.97688);
   hNCpi0inFVdis_stack_8->SetBinContent(16,16.18921);
   hNCpi0inFVdis_stack_8->SetBinContent(17,15.12783);
   hNCpi0inFVdis_stack_8->SetBinContent(18,13.86054);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.69348);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.72853);
   hNCpi0inFVdis_stack_8->SetBinContent(21,13.83265);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.093439);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.229877);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.238824);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7934898);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6044338);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9634345);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.165343);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.226977);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.333167);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.368938);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.194861);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.248308);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.244092);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.274586);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.301231);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.448732);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.226738);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.335113);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.234356);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.18669);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.212056);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.332827);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.245786);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9339984);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9827336);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6692183);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2364666);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

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
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(14);

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
   hCCpi0inFV_stack_10->SetBinContent(2,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(3,7.030287);
   hCCpi0inFV_stack_10->SetBinContent(4,15.53341);
   hCCpi0inFV_stack_10->SetBinContent(5,19.69184);
   hCCpi0inFV_stack_10->SetBinContent(6,22.11791);
   hCCpi0inFV_stack_10->SetBinContent(7,21.10846);
   hCCpi0inFV_stack_10->SetBinContent(8,26.14257);
   hCCpi0inFV_stack_10->SetBinContent(9,24.81405);
   hCCpi0inFV_stack_10->SetBinContent(10,30.13276);
   hCCpi0inFV_stack_10->SetBinContent(11,27.49407);
   hCCpi0inFV_stack_10->SetBinContent(12,25.82279);
   hCCpi0inFV_stack_10->SetBinContent(13,27.07712);
   hCCpi0inFV_stack_10->SetBinContent(14,30.69681);
   hCCpi0inFV_stack_10->SetBinContent(15,25.49579);
   hCCpi0inFV_stack_10->SetBinContent(16,30.05497);
   hCCpi0inFV_stack_10->SetBinContent(17,24.55544);
   hCCpi0inFV_stack_10->SetBinContent(18,27.4706);
   hCCpi0inFV_stack_10->SetBinContent(19,25.31137);
   hCCpi0inFV_stack_10->SetBinContent(20,25.65709);
   hCCpi0inFV_stack_10->SetBinContent(21,23.45594);
   hCCpi0inFV_stack_10->SetBinContent(22,16.48706);
   hCCpi0inFV_stack_10->SetBinContent(23,13.62628);
   hCCpi0inFV_stack_10->SetBinContent(24,8.751129);
   hCCpi0inFV_stack_10->SetBinContent(25,1.695697);
   hCCpi0inFV_stack_10->SetBinError(0,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(2,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(3,1.277206);
   hCCpi0inFV_stack_10->SetBinError(4,1.981879);
   hCCpi0inFV_stack_10->SetBinError(5,2.273676);
   hCCpi0inFV_stack_10->SetBinError(6,2.325563);
   hCCpi0inFV_stack_10->SetBinError(7,2.258637);
   hCCpi0inFV_stack_10->SetBinError(8,2.555429);
   hCCpi0inFV_stack_10->SetBinError(9,2.536663);
   hCCpi0inFV_stack_10->SetBinError(10,2.787522);
   hCCpi0inFV_stack_10->SetBinError(11,2.658651);
   hCCpi0inFV_stack_10->SetBinError(12,2.499566);
   hCCpi0inFV_stack_10->SetBinError(13,2.563052);
   hCCpi0inFV_stack_10->SetBinError(14,2.718513);
   hCCpi0inFV_stack_10->SetBinError(15,2.540639);
   hCCpi0inFV_stack_10->SetBinError(16,2.675952);
   hCCpi0inFV_stack_10->SetBinError(17,2.485282);
   hCCpi0inFV_stack_10->SetBinError(18,2.647471);
   hCCpi0inFV_stack_10->SetBinError(19,2.509488);
   hCCpi0inFV_stack_10->SetBinError(20,2.559903);
   hCCpi0inFV_stack_10->SetBinError(21,2.407133);
   hCCpi0inFV_stack_10->SetBinError(22,2.041996);
   hCCpi0inFV_stack_10->SetBinError(23,1.872217);
   hCCpi0inFV_stack_10->SetBinError(24,1.468924);
   hCCpi0inFV_stack_10->SetBinError(25,0.6622277);
   hCCpi0inFV_stack_10->SetEntries(2161);

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
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.7336084);
   hNCinFV_stack_11->SetBinContent(3,3.907867);
   hNCinFV_stack_11->SetBinContent(4,7.765862);
   hNCinFV_stack_11->SetBinContent(5,10.41168);
   hNCinFV_stack_11->SetBinContent(6,11.13853);
   hNCinFV_stack_11->SetBinContent(7,13.83084);
   hNCinFV_stack_11->SetBinContent(8,12.1221);
   hNCinFV_stack_11->SetBinContent(9,12.65054);
   hNCinFV_stack_11->SetBinContent(10,12.80415);
   hNCinFV_stack_11->SetBinContent(11,15.20507);
   hNCinFV_stack_11->SetBinContent(12,14.39853);
   hNCinFV_stack_11->SetBinContent(13,12.55587);
   hNCinFV_stack_11->SetBinContent(14,14.27644);
   hNCinFV_stack_11->SetBinContent(15,12.80753);
   hNCinFV_stack_11->SetBinContent(16,13.00702);
   hNCinFV_stack_11->SetBinContent(17,14.6485);
   hNCinFV_stack_11->SetBinContent(18,12.16244);
   hNCinFV_stack_11->SetBinContent(19,13.97599);
   hNCinFV_stack_11->SetBinContent(20,13.15893);
   hNCinFV_stack_11->SetBinContent(21,12.54296);
   hNCinFV_stack_11->SetBinContent(22,12.11703);
   hNCinFV_stack_11->SetBinContent(23,9.509985);
   hNCinFV_stack_11->SetBinContent(24,4.594985);
   hNCinFV_stack_11->SetBinContent(25,1.125349);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.4394482);
   hNCinFV_stack_11->SetBinError(3,0.9808007);
   hNCinFV_stack_11->SetBinError(4,1.401282);
   hNCinFV_stack_11->SetBinError(5,1.606655);
   hNCinFV_stack_11->SetBinError(6,1.664874);
   hNCinFV_stack_11->SetBinError(7,1.829912);
   hNCinFV_stack_11->SetBinError(8,1.722002);
   hNCinFV_stack_11->SetBinError(9,1.765332);
   hNCinFV_stack_11->SetBinError(10,1.788126);
   hNCinFV_stack_11->SetBinError(11,1.953653);
   hNCinFV_stack_11->SetBinError(12,1.962817);
   hNCinFV_stack_11->SetBinError(13,1.788208);
   hNCinFV_stack_11->SetBinError(14,1.893571);
   hNCinFV_stack_11->SetBinError(15,1.788496);
   hNCinFV_stack_11->SetBinError(16,1.743592);
   hNCinFV_stack_11->SetBinError(17,1.962912);
   hNCinFV_stack_11->SetBinError(18,1.766435);
   hNCinFV_stack_11->SetBinError(19,1.851017);
   hNCinFV_stack_11->SetBinError(20,1.766479);
   hNCinFV_stack_11->SetBinError(21,1.841471);
   hNCinFV_stack_11->SetBinError(22,1.721425);
   hNCinFV_stack_11->SetBinError(23,1.536898);
   hNCinFV_stack_11->SetBinError(24,1.093646);
   hNCinFV_stack_11->SetBinError(25,0.5194673);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1123);

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
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,1.88406);
   hnumuCCinFV_stack_12->SetBinContent(4,6.223996);
   hnumuCCinFV_stack_12->SetBinContent(5,9.984238);
   hnumuCCinFV_stack_12->SetBinContent(6,7.933951);
   hnumuCCinFV_stack_12->SetBinContent(7,11.64253);
   hnumuCCinFV_stack_12->SetBinContent(8,11.59737);
   hnumuCCinFV_stack_12->SetBinContent(9,10.22835);
   hnumuCCinFV_stack_12->SetBinContent(10,11.03986);
   hnumuCCinFV_stack_12->SetBinContent(11,7.94046);
   hnumuCCinFV_stack_12->SetBinContent(12,11.71579);
   hnumuCCinFV_stack_12->SetBinContent(13,12.90577);
   hnumuCCinFV_stack_12->SetBinContent(14,13.03164);
   hnumuCCinFV_stack_12->SetBinContent(15,10.35408);
   hnumuCCinFV_stack_12->SetBinContent(16,14.19051);
   hnumuCCinFV_stack_12->SetBinContent(17,12.4803);
   hnumuCCinFV_stack_12->SetBinContent(18,10.97851);
   hnumuCCinFV_stack_12->SetBinContent(19,12.50675);
   hnumuCCinFV_stack_12->SetBinContent(20,9.375545);
   hnumuCCinFV_stack_12->SetBinContent(21,10.13735);
   hnumuCCinFV_stack_12->SetBinContent(22,7.77209);
   hnumuCCinFV_stack_12->SetBinContent(23,5.094548);
   hnumuCCinFV_stack_12->SetBinContent(24,4.36288);
   hnumuCCinFV_stack_12->SetBinContent(25,3.66293);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.6937473);
   hnumuCCinFV_stack_12->SetBinError(4,1.333059);
   hnumuCCinFV_stack_12->SetBinError(5,2.279281);
   hnumuCCinFV_stack_12->SetBinError(6,1.843268);
   hnumuCCinFV_stack_12->SetBinError(7,1.858309);
   hnumuCCinFV_stack_12->SetBinError(8,2.028895);
   hnumuCCinFV_stack_12->SetBinError(9,1.695525);
   hnumuCCinFV_stack_12->SetBinError(10,1.759916);
   hnumuCCinFV_stack_12->SetBinError(11,1.406518);
   hnumuCCinFV_stack_12->SetBinError(12,1.877424);
   hnumuCCinFV_stack_12->SetBinError(13,1.854438);
   hnumuCCinFV_stack_12->SetBinError(14,2.162326);
   hnumuCCinFV_stack_12->SetBinError(15,1.714989);
   hnumuCCinFV_stack_12->SetBinError(16,2.154974);
   hnumuCCinFV_stack_12->SetBinError(17,2.671273);
   hnumuCCinFV_stack_12->SetBinError(18,1.693359);
   hnumuCCinFV_stack_12->SetBinError(19,1.820369);
   hnumuCCinFV_stack_12->SetBinError(20,1.552998);
   hnumuCCinFV_stack_12->SetBinError(21,1.786884);
   hnumuCCinFV_stack_12->SetBinError(22,1.446977);
   hnumuCCinFV_stack_12->SetBinError(23,1.299468);
   hnumuCCinFV_stack_12->SetBinError(24,1.135998);
   hnumuCCinFV_stack_12->SetBinError(25,1.249363);
   hnumuCCinFV_stack_12->SetEntries(859);

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
   hnueCCinFV_stack_13->SetBinContent(6,0.8196462);
   hnueCCinFV_stack_13->SetBinContent(7,1.325017);
   hnueCCinFV_stack_13->SetBinContent(8,1.514651);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.677241);
   hnueCCinFV_stack_13->SetBinContent(11,1.766559);
   hnueCCinFV_stack_13->SetBinContent(12,1.921773);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.608732);
   hnueCCinFV_stack_13->SetBinContent(15,1.137455);
   hnueCCinFV_stack_13->SetBinContent(16,3.928026);
   hnueCCinFV_stack_13->SetBinContent(17,0.5614945);
   hnueCCinFV_stack_13->SetBinContent(18,0.9286497);
   hnueCCinFV_stack_13->SetBinContent(19,0.8728007);
   hnueCCinFV_stack_13->SetBinContent(20,2.091004);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,1.623046);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.6593169);
   hnueCCinFV_stack_13->SetBinError(6,0.4793433);
   hnueCCinFV_stack_13->SetBinError(7,0.6237514);
   hnueCCinFV_stack_13->SetBinError(8,0.7194049);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.7084458);
   hnueCCinFV_stack_13->SetBinError(11,0.6947658);
   hnueCCinFV_stack_13->SetBinError(12,0.8991774);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.68216);
   hnueCCinFV_stack_13->SetBinError(15,0.7683277);
   hnueCCinFV_stack_13->SetBinError(16,1.398272);
   hnueCCinFV_stack_13->SetBinError(17,0.4058349);
   hnueCCinFV_stack_13->SetBinError(18,0.48078);
   hnueCCinFV_stack_13->SetBinError(19,0.4390931);
   hnueCCinFV_stack_13->SetBinError(20,1.33786);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.7783247);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
   hnueCCinFV_stack_13->SetEntries(111);

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
   hmcerror__17->SetBinContent(0,4.341506);
   hmcerror__17->SetBinContent(1,2.183437);
   hmcerror__17->SetBinContent(2,20.96736);
   hmcerror__17->SetBinContent(3,57.24086);
   hmcerror__17->SetBinContent(4,112.2007);
   hmcerror__17->SetBinContent(5,154.9489);
   hmcerror__17->SetBinContent(6,159.9234);
   hmcerror__17->SetBinContent(7,181.5778);
   hmcerror__17->SetBinContent(8,180.8369);
   hmcerror__17->SetBinContent(9,179.1045);
   hmcerror__17->SetBinContent(10,190.635);
   hmcerror__17->SetBinContent(11,184.9335);
   hmcerror__17->SetBinContent(12,176.2189);
   hmcerror__17->SetBinContent(13,185.6273);
   hmcerror__17->SetBinContent(14,183.6893);
   hmcerror__17->SetBinContent(15,176.9408);
   hmcerror__17->SetBinContent(16,196.1328);
   hmcerror__17->SetBinContent(17,184.4839);
   hmcerror__17->SetBinContent(18,173.4195);
   hmcerror__17->SetBinContent(19,183.0527);
   hmcerror__17->SetBinContent(20,193.5072);
   hmcerror__17->SetBinContent(21,186.5371);
   hmcerror__17->SetBinContent(22,166.4586);
   hmcerror__17->SetBinContent(23,123.7168);
   hmcerror__17->SetBinContent(24,83.05788);
   hmcerror__17->SetBinContent(25,35.06396);
   hmcerror__17->SetBinContent(26,3.195041);
   hmcerror__17->SetBinContent(27,3.009751);
   hmcerror__17->SetBinError(0,1.053254);
   hmcerror__17->SetBinError(1,9.905919);
   hmcerror__17->SetBinError(2,12.94007);
   hmcerror__17->SetBinError(3,17.92828);
   hmcerror__17->SetBinError(4,31.54514);
   hmcerror__17->SetBinError(5,39.80358);
   hmcerror__17->SetBinError(6,42.70021);
   hmcerror__17->SetBinError(7,48.12933);
   hmcerror__17->SetBinError(8,47.88892);
   hmcerror__17->SetBinError(9,43.68611);
   hmcerror__17->SetBinError(10,46.79064);
   hmcerror__17->SetBinError(11,46.41218);
   hmcerror__17->SetBinError(12,46.02837);
   hmcerror__17->SetBinError(13,44.35397);
   hmcerror__17->SetBinError(14,49.00017);
   hmcerror__17->SetBinError(15,41.27646);
   hmcerror__17->SetBinError(16,45.16971);
   hmcerror__17->SetBinError(17,43.52813);
   hmcerror__17->SetBinError(18,39.40088);
   hmcerror__17->SetBinError(19,41.30717);
   hmcerror__17->SetBinError(20,42.73647);
   hmcerror__17->SetBinError(21,43.285);
   hmcerror__17->SetBinError(22,36.99483);
   hmcerror__17->SetBinError(23,31.4578);
   hmcerror__17->SetBinError(24,20.86968);
   hmcerror__17->SetBinError(25,14.32518);
   hmcerror__17->SetBinError(26,4.400215);
   hmcerror__17->SetBinError(27,4.737898);
   hmcerror__17->SetEntries(3645.257);

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
   14,
   46,
   126,
   143,
   156,
   192,
   185,
   173,
   172,
   179,
   169,
   172,
   163,
   165,
   188,
   169,
   166,
   170,
   174,
   172,
   184,
   126,
   81,
   26,
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
   3.9102,
   6.9153,
   11.22497,
   11.95826,
   12.49,
   13.85641,
   13.60147,
   13.15295,
   13.11488,
   13.37909,
   13,
   13.11488,
   12.76715,
   12.84523,
   13.71131,
   13,
   12.8841,
   13.0384,
   13.19091,
   13.11488,
   13.56466,
   11.22497,
   9.1239,
   5.2453,
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
   3.6898,
   6.7108,
   11.22497,
   11.95826,
   12.49,
   13.85641,
   13.60147,
   13.15295,
   13.11488,
   13.37909,
   13,
   13.11488,
   12.76715,
   12.84523,
   13.71131,
   13,
   12.8841,
   13.0384,
   13.19091,
   13.11488,
   13.56466,
   11.22497,
   8.9221,
   5.0358,
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
   Graph_Graph3021->SetMaximum(226.442);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3515.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 41.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 338.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1517.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  295.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 261.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 217.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

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
   4.536846,
   0.6171534,
   0.3132077,
   0.2811493,
   0.256882,
   0.2670041,
   0.2650617,
   0.2648183,
   0.2439141,
   0.2454463,
   0.2509669,
   0.2611999,
   0.238941,
   0.2667557,
   0.2332784,
   0.2303016,
   0.2359453,
   0.2271998,
   0.2256573,
   0.2208521,
   0.2320449,
   0.2222464,
   0.2542727,
   0.2512667,
   0.4085443,
   1.377202};
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
   4.536846,
   0.6171534,
   0.3132077,
   0.2811493,
   0.256882,
   0.2670041,
   0.2650617,
   0.2648183,
   0.2439141,
   0.2454463,
   0.2509669,
   0.2611999,
   0.238941,
   0.2667557,
   0.2332784,
   0.2303016,
   0.2359453,
   0.2271998,
   0.2256573,
   0.2208521,
   0.2320449,
   0.2222464,
   0.2542727,
   0.2512667,
   0.4085443,
   1.377202};
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
   0.4594886,
   0.2480095,
   0.2230523,
   0.2199991,
   0.2055013,
   0.2254996,
   0.225175,
   0.2218259,
   0.2031137,
   0.2127132,
   0.2197829,
   0.2129842,
   0.1979675,
   0.2086704,
   0.1971722,
   0.1971183,
   0.2027261,
   0.1936557,
   0.1921924,
   0.1895218,
   0.1884987,
   0.1874232,
   0.1891206,
   0.1882005,
   0.2343255,
   0.4217183};
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
   0.4594886,
   0.2480095,
   0.2230523,
   0.2199991,
   0.2055013,
   0.2254996,
   0.225175,
   0.2218259,
   0.2031137,
   0.2127132,
   0.2197829,
   0.2129842,
   0.1979675,
   0.2086704,
   0.1971722,
   0.1971183,
   0.2027261,
   0.1936557,
   0.1921924,
   0.1895218,
   0.1884987,
   0.1874232,
   0.1891206,
   0.1882005,
   0.2343255,
   0.4217183};
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
   1.37398,
   0.6677046,
   0.8036217,
   1.122988,
   0.9228852,
   0.9754669,
   1.057398,
   1.023022,
   0.9659166,
   0.9022478,
   0.9679156,
   0.9590343,
   0.9265877,
   0.887368,
   0.9325154,
   0.9585341,
   0.9160689,
   0.9572164,
   0.9286944,
   0.8991916,
   0.9220684,
   1.10538,
   1.018455,
   0.9752236,
   0.7415022,
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
   0.9816486,
   0.1864899,
   0.1208106,
   0.1000437,
   0.07717554,
   0.07809986,
   0.07631112,
   0.07521404,
   0.07343728,
   0.06879575,
   0.07234541,
   0.07377187,
   0.07065165,
   0.06950403,
   0.07259622,
   0.06990828,
   0.07046684,
   0.0742944,
   0.07122761,
   0.06816754,
   0.07030706,
   0.0814897,
   0.09073122,
   0.1098499,
   0.1495924,
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
   0.7896815,
   0.1759783,
   0.1172379,
   0.1000437,
   0.07717554,
   0.07809986,
   0.07631112,
   0.07521404,
   0.07343728,
   0.06879575,
   0.07234541,
   0.07377187,
   0.07065165,
   0.06950403,
   0.07259622,
   0.06990828,
   0.07046684,
   0.0742944,
   0.07122761,
   0.06816754,
   0.07030706,
   0.0814897,
   0.09073122,
   0.1074203,
   0.1436176,
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
   Graph_Graph3024->SetMaximum(2.380028);
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
