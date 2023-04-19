#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 20:55:43 2023) by ROOT version 6.26/00
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
   pad1->Range(-170,-4.372722,163.3333,483.531);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__10->SetBinContent(0,4.332654);
   hmc__10->SetBinContent(1,1.866922);
   hmc__10->SetBinContent(2,33.67954);
   hmc__10->SetBinContent(3,91.34512);
   hmc__10->SetBinContent(4,151.6943);
   hmc__10->SetBinContent(5,173.5254);
   hmc__10->SetBinContent(6,165.1143);
   hmc__10->SetBinContent(7,171.8);
   hmc__10->SetBinContent(8,173.8079);
   hmc__10->SetBinContent(9,163.9034);
   hmc__10->SetBinContent(10,171.6173);
   hmc__10->SetBinContent(11,168.0218);
   hmc__10->SetBinContent(12,162.9611);
   hmc__10->SetBinContent(13,174.431);
   hmc__10->SetBinContent(14,161.0603);
   hmc__10->SetBinContent(15,161.2238);
   hmc__10->SetBinContent(16,183.1833);
   hmc__10->SetBinContent(17,179.6326);
   hmc__10->SetBinContent(18,174.1845);
   hmc__10->SetBinContent(19,186.9644);
   hmc__10->SetBinContent(20,198.5705);
   hmc__10->SetBinContent(21,209.25);
   hmc__10->SetBinContent(22,218.6361);
   hmc__10->SetBinContent(23,191.7243);
   hmc__10->SetBinContent(24,159.3757);
   hmc__10->SetBinContent(25,70.97952);
   hmc__10->SetBinContent(26,4.446381);
   hmc__10->SetBinContent(27,2.772987);
   hmc__10->SetBinError(0,1.084277);
   hmc__10->SetBinError(1,3.225846);
   hmc__10->SetBinError(2,19.70248);
   hmc__10->SetBinError(3,27.18589);
   hmc__10->SetBinError(4,43.12506);
   hmc__10->SetBinError(5,49.10317);
   hmc__10->SetBinError(6,45.52778);
   hmc__10->SetBinError(7,47.97315);
   hmc__10->SetBinError(8,46.59492);
   hmc__10->SetBinError(9,42.89352);
   hmc__10->SetBinError(10,42.42451);
   hmc__10->SetBinError(11,44.49929);
   hmc__10->SetBinError(12,49.91591);
   hmc__10->SetBinError(13,44.81241);
   hmc__10->SetBinError(14,44.79433);
   hmc__10->SetBinError(15,43.57981);
   hmc__10->SetBinError(16,45.22018);
   hmc__10->SetBinError(17,40.56323);
   hmc__10->SetBinError(18,39.71637);
   hmc__10->SetBinError(19,40.38906);
   hmc__10->SetBinError(20,42.58004);
   hmc__10->SetBinError(21,48.17754);
   hmc__10->SetBinError(22,46.64378);
   hmc__10->SetBinError(23,40.66482);
   hmc__10->SetBinError(24,32.57081);
   hmc__10->SetBinError(25,26.5161);
   hmc__10->SetBinError(26,6.059277);
   hmc__10->SetBinError(27,5.163789);
   hmc__10->SetMinimum(-4.372722);
   hmc__10->SetMaximum(459.1358);
   hmc__10->SetEntries(3864.24);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",26,-130,130);
   hs4_stack_4->SetMinimum(-7.708339e-09);
   hs4_stack_4->SetMaximum(229.5679);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.842803);
   hbadmatch_stack_1->SetBinContent(3,1.662242);
   hbadmatch_stack_1->SetBinContent(4,5.349676);
   hbadmatch_stack_1->SetBinContent(5,5.105728);
   hbadmatch_stack_1->SetBinContent(6,3.104645);
   hbadmatch_stack_1->SetBinContent(7,2.953238);
   hbadmatch_stack_1->SetBinContent(8,3.585358);
   hbadmatch_stack_1->SetBinContent(9,3.103719);
   hbadmatch_stack_1->SetBinContent(10,4.523726);
   hbadmatch_stack_1->SetBinContent(11,3.517817);
   hbadmatch_stack_1->SetBinContent(12,4.757163);
   hbadmatch_stack_1->SetBinContent(13,6.633462);
   hbadmatch_stack_1->SetBinContent(14,0.9801964);
   hbadmatch_stack_1->SetBinContent(15,4.385276);
   hbadmatch_stack_1->SetBinContent(16,4.16656);
   hbadmatch_stack_1->SetBinContent(17,5.521468);
   hbadmatch_stack_1->SetBinContent(18,6.057363);
   hbadmatch_stack_1->SetBinContent(19,3.710433);
   hbadmatch_stack_1->SetBinContent(20,5.294412);
   hbadmatch_stack_1->SetBinContent(21,5.433999);
   hbadmatch_stack_1->SetBinContent(22,3.439265);
   hbadmatch_stack_1->SetBinContent(23,4.915341);
   hbadmatch_stack_1->SetBinContent(24,6.763591);
   hbadmatch_stack_1->SetBinContent(25,2.145881);
   hbadmatch_stack_1->SetBinError(2,0.7279921);
   hbadmatch_stack_1->SetBinError(3,0.6513556);
   hbadmatch_stack_1->SetBinError(4,1.912783);
   hbadmatch_stack_1->SetBinError(5,1.962029);
   hbadmatch_stack_1->SetBinError(6,0.8877948);
   hbadmatch_stack_1->SetBinError(7,0.8834715);
   hbadmatch_stack_1->SetBinError(8,1.333399);
   hbadmatch_stack_1->SetBinError(9,0.88722);
   hbadmatch_stack_1->SetBinError(10,1.167339);
   hbadmatch_stack_1->SetBinError(11,0.9412229);
   hbadmatch_stack_1->SetBinError(12,1.199503);
   hbadmatch_stack_1->SetBinError(13,1.347102);
   hbadmatch_stack_1->SetBinError(14,0.4383608);
   hbadmatch_stack_1->SetBinError(15,1.207656);
   hbadmatch_stack_1->SetBinError(16,1.080652);
   hbadmatch_stack_1->SetBinError(17,1.229805);
   hbadmatch_stack_1->SetBinError(18,1.293316);
   hbadmatch_stack_1->SetBinError(19,1.032329);
   hbadmatch_stack_1->SetBinError(20,1.210961);
   hbadmatch_stack_1->SetBinError(21,1.384093);
   hbadmatch_stack_1->SetBinError(22,1.028931);
   hbadmatch_stack_1->SetBinError(23,1.108876);
   hbadmatch_stack_1->SetBinError(24,1.382865);
   hbadmatch_stack_1->SetBinError(25,0.785499);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,4.628173);
   hext_stack_2->SetBinContent(5,5.732637);
   hext_stack_2->SetBinContent(6,6.863051);
   hext_stack_2->SetBinContent(7,4.620993);
   hext_stack_2->SetBinContent(8,7.131198);
   hext_stack_2->SetBinContent(9,10.01487);
   hext_stack_2->SetBinContent(10,7.855014);
   hext_stack_2->SetBinContent(11,6.564605);
   hext_stack_2->SetBinContent(12,10.02923);
   hext_stack_2->SetBinContent(13,18.97435);
   hext_stack_2->SetBinContent(14,9.324187);
   hext_stack_2->SetBinContent(15,14.36337);
   hext_stack_2->SetBinContent(16,15.88161);
   hext_stack_2->SetBinContent(17,27.29058);
   hext_stack_2->SetBinContent(18,26.63183);
   hext_stack_2->SetBinContent(19,35.17872);
   hext_stack_2->SetBinContent(20,41.49672);
   hext_stack_2->SetBinContent(21,46.97721);
   hext_stack_2->SetBinContent(22,58.67592);
   hext_stack_2->SetBinContent(23,49.58675);
   hext_stack_2->SetBinContent(24,46.41622);
   hext_stack_2->SetBinContent(25,20.20133);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,1.291697);
   hext_stack_2->SetBinError(5,1.665546);
   hext_stack_2->SetBinError(6,1.846923);
   hext_stack_2->SetBinError(7,1.367364);
   hext_stack_2->SetBinError(8,1.728522);
   hext_stack_2->SetBinError(9,2.222813);
   hext_stack_2->SetBinError(10,1.859985);
   hext_stack_2->SetBinError(11,1.684461);
   hext_stack_2->SetBinError(12,2.130374);
   hext_stack_2->SetBinError(13,3.083181);
   hext_stack_2->SetBinError(14,1.94922);
   hext_stack_2->SetBinError(15,2.401746);
   hext_stack_2->SetBinError(16,2.61497);
   hext_stack_2->SetBinError(17,3.631528);
   hext_stack_2->SetBinError(18,3.676283);
   hext_stack_2->SetBinError(19,3.997232);
   hext_stack_2->SetBinError(20,4.316828);
   hext_stack_2->SetBinError(21,4.679896);
   hext_stack_2->SetBinError(22,5.088615);
   hext_stack_2->SetBinError(23,4.726616);
   hext_stack_2->SetBinError(24,4.443871);
   hext_stack_2->SetBinError(25,3.130618);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,2.356437);
   hdirt_stack_3->SetBinContent(4,2.435151);
   hdirt_stack_3->SetBinContent(5,1.598644);
   hdirt_stack_3->SetBinContent(6,2.938441);
   hdirt_stack_3->SetBinContent(7,3.378525);
   hdirt_stack_3->SetBinContent(8,2.147753);
   hdirt_stack_3->SetBinContent(9,2.049609);
   hdirt_stack_3->SetBinContent(10,2.518032);
   hdirt_stack_3->SetBinContent(11,0.6558546);
   hdirt_stack_3->SetBinContent(12,2.651725);
   hdirt_stack_3->SetBinContent(13,1.910232);
   hdirt_stack_3->SetBinContent(14,0.7498547);
   hdirt_stack_3->SetBinContent(15,1.512143);
   hdirt_stack_3->SetBinContent(16,3.046592);
   hdirt_stack_3->SetBinContent(17,1.128781);
   hdirt_stack_3->SetBinContent(18,1.627852);
   hdirt_stack_3->SetBinContent(19,2.048349);
   hdirt_stack_3->SetBinContent(20,4.146409);
   hdirt_stack_3->SetBinContent(21,3.528601);
   hdirt_stack_3->SetBinContent(22,5.518867);
   hdirt_stack_3->SetBinContent(23,4.981863);
   hdirt_stack_3->SetBinContent(24,0.994874);
   hdirt_stack_3->SetBinContent(25,1.932407);
   hdirt_stack_3->SetBinContent(27,0.6763744);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.8215658);
   hdirt_stack_3->SetBinError(4,0.7873049);
   hdirt_stack_3->SetBinError(5,0.6113888);
   hdirt_stack_3->SetBinError(6,0.7759919);
   hdirt_stack_3->SetBinError(7,1.222145);
   hdirt_stack_3->SetBinError(8,0.8842929);
   hdirt_stack_3->SetBinError(9,0.7108802);
   hdirt_stack_3->SetBinError(10,0.8749764);
   hdirt_stack_3->SetBinError(11,0.3345214);
   hdirt_stack_3->SetBinError(12,0.8868916);
   hdirt_stack_3->SetBinError(13,0.7492886);
   hdirt_stack_3->SetBinError(14,0.3885538);
   hdirt_stack_3->SetBinError(15,0.6657946);
   hdirt_stack_3->SetBinError(16,0.9510541);
   hdirt_stack_3->SetBinError(17,0.6077676);
   hdirt_stack_3->SetBinError(18,0.6450671);
   hdirt_stack_3->SetBinError(19,0.7481613);
   hdirt_stack_3->SetBinError(20,1.028879);
   hdirt_stack_3->SetBinError(21,1.005481);
   hdirt_stack_3->SetBinError(22,1.565017);
   hdirt_stack_3->SetBinError(23,1.144412);
   hdirt_stack_3->SetBinError(24,0.5080516);
   hdirt_stack_3->SetBinError(25,0.7716319);
   hdirt_stack_3->SetBinError(27,0.4782689);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.949166);
   houtFV_stack_4->SetBinContent(1,1.517089);
   houtFV_stack_4->SetBinContent(2,22.64393);
   houtFV_stack_4->SetBinContent(3,34.87172);
   houtFV_stack_4->SetBinContent(4,32.6604);
   houtFV_stack_4->SetBinContent(5,30.54678);
   houtFV_stack_4->SetBinContent(6,22.64564);
   houtFV_stack_4->SetBinContent(7,21.87186);
   houtFV_stack_4->SetBinContent(8,17.47169);
   houtFV_stack_4->SetBinContent(9,17.86616);
   houtFV_stack_4->SetBinContent(10,16.20563);
   houtFV_stack_4->SetBinContent(11,14.64455);
   houtFV_stack_4->SetBinContent(12,12.45297);
   houtFV_stack_4->SetBinContent(13,14.48307);
   houtFV_stack_4->SetBinContent(14,14.25946);
   houtFV_stack_4->SetBinContent(15,11.96103);
   houtFV_stack_4->SetBinContent(16,13.51828);
   houtFV_stack_4->SetBinContent(17,13.98859);
   houtFV_stack_4->SetBinContent(18,15.46478);
   houtFV_stack_4->SetBinContent(19,15.88758);
   houtFV_stack_4->SetBinContent(20,16.16349);
   houtFV_stack_4->SetBinContent(21,22.02645);
   houtFV_stack_4->SetBinContent(22,27.50507);
   houtFV_stack_4->SetBinContent(23,26.77587);
   houtFV_stack_4->SetBinContent(24,33.43441);
   houtFV_stack_4->SetBinContent(25,29.72373);
   houtFV_stack_4->SetBinContent(26,2.736028);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.7604681);
   houtFV_stack_4->SetBinError(1,0.5887087);
   houtFV_stack_4->SetBinError(2,2.356042);
   houtFV_stack_4->SetBinError(3,2.992682);
   houtFV_stack_4->SetBinError(4,2.88416);
   houtFV_stack_4->SetBinError(5,2.803688);
   houtFV_stack_4->SetBinError(6,2.350031);
   houtFV_stack_4->SetBinError(7,2.307089);
   houtFV_stack_4->SetBinError(8,2.042163);
   houtFV_stack_4->SetBinError(9,2.176643);
   houtFV_stack_4->SetBinError(10,2.026264);
   houtFV_stack_4->SetBinError(11,2.162486);
   houtFV_stack_4->SetBinError(12,1.758073);
   houtFV_stack_4->SetBinError(13,1.888188);
   houtFV_stack_4->SetBinError(14,1.85892);
   houtFV_stack_4->SetBinError(15,1.757782);
   houtFV_stack_4->SetBinError(16,1.759003);
   houtFV_stack_4->SetBinError(17,1.904641);
   houtFV_stack_4->SetBinError(18,1.931746);
   houtFV_stack_4->SetBinError(19,2.009477);
   houtFV_stack_4->SetBinError(20,1.945943);
   houtFV_stack_4->SetBinError(21,2.503125);
   houtFV_stack_4->SetBinError(22,2.685227);
   houtFV_stack_4->SetBinError(23,2.641587);
   houtFV_stack_4->SetBinError(24,2.956397);
   houtFV_stack_4->SetBinError(25,2.805429);
   houtFV_stack_4->SetBinError(26,0.8562123);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.532012);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.195642);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.754146);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.684728);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.516992);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.059381);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.868906);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.907928);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.32826);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.783046);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.067847);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.308737);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.159196);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.341878);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.126663);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.2145);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.17431);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.554438);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.36321);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.186432);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.755979);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.371348);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3599199);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6335667);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7178103);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7117298);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6605838);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6966217);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7501141);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7160912);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.771851);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7536944);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5384215);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6405418);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7433379);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7764596);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9604678);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7748288);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7519709);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5807338);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6624471);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.752876);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7658609);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5678579);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1086555);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9195399);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.599022);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2922873);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2640716);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(179);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2926179);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.156788);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.16307);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.73975);
   hNCpi0inFVres_stack_7->SetBinContent(5,60.75233);
   hNCpi0inFVres_stack_7->SetBinContent(6,64.15956);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.67622);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.79055);
   hNCpi0inFVres_stack_7->SetBinContent(9,65.8391);
   hNCpi0inFVres_stack_7->SetBinContent(10,68.68559);
   hNCpi0inFVres_stack_7->SetBinContent(11,70.39548);
   hNCpi0inFVres_stack_7->SetBinContent(12,62.12772);
   hNCpi0inFVres_stack_7->SetBinContent(13,62.31572);
   hNCpi0inFVres_stack_7->SetBinContent(14,60.87853);
   hNCpi0inFVres_stack_7->SetBinContent(15,61.72176);
   hNCpi0inFVres_stack_7->SetBinContent(16,65.33858);
   hNCpi0inFVres_stack_7->SetBinContent(17,64.14453);
   hNCpi0inFVres_stack_7->SetBinContent(18,56.68597);
   hNCpi0inFVres_stack_7->SetBinContent(19,58.73339);
   hNCpi0inFVres_stack_7->SetBinContent(20,58.97037);
   hNCpi0inFVres_stack_7->SetBinContent(21,60.79035);
   hNCpi0inFVres_stack_7->SetBinContent(22,56.20961);
   hNCpi0inFVres_stack_7->SetBinContent(23,44.96233);
   hNCpi0inFVres_stack_7->SetBinContent(24,28.91168);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.214996);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.87819);
   hNCpi0inFVres_stack_7->SetBinError(0,0.122146);
   hNCpi0inFVres_stack_7->SetBinError(1,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6957372);
   hNCpi0inFVres_stack_7->SetBinError(3,1.571769);
   hNCpi0inFVres_stack_7->SetBinError(4,2.229534);
   hNCpi0inFVres_stack_7->SetBinError(5,2.548193);
   hNCpi0inFVres_stack_7->SetBinError(6,2.570597);
   hNCpi0inFVres_stack_7->SetBinError(7,2.741025);
   hNCpi0inFVres_stack_7->SetBinError(8,2.739675);
   hNCpi0inFVres_stack_7->SetBinError(9,2.623179);
   hNCpi0inFVres_stack_7->SetBinError(10,2.689987);
   hNCpi0inFVres_stack_7->SetBinError(11,2.774836);
   hNCpi0inFVres_stack_7->SetBinError(12,2.521398);
   hNCpi0inFVres_stack_7->SetBinError(13,2.538577);
   hNCpi0inFVres_stack_7->SetBinError(14,2.503299);
   hNCpi0inFVres_stack_7->SetBinError(15,2.583091);
   hNCpi0inFVres_stack_7->SetBinError(16,2.655206);
   hNCpi0inFVres_stack_7->SetBinError(17,2.668099);
   hNCpi0inFVres_stack_7->SetBinError(18,2.364315);
   hNCpi0inFVres_stack_7->SetBinError(19,2.500175);
   hNCpi0inFVres_stack_7->SetBinError(20,2.480417);
   hNCpi0inFVres_stack_7->SetBinError(21,2.528117);
   hNCpi0inFVres_stack_7->SetBinError(22,2.488563);
   hNCpi0inFVres_stack_7->SetBinError(23,2.113923);
   hNCpi0inFVres_stack_7->SetBinError(24,1.854248);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7443843);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3320795);
   hNCpi0inFVres_stack_7->SetEntries(24054);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.3909362);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.501704);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.126224);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.22781);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.55694);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.0472);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.13456);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.15184);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.47591);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.50214);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.50946);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.08597);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.61849);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.71522);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.28451);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.51346);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.29597);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.97288);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.75492);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.44354);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.77444);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.662153);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.666234);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.636408);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.351826);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2764336);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2454852);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6266693);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.137199);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.027585);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.116184);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.20206);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.262801);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.069651);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.051855);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.140701);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.058188);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.160854);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.18912);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.101353);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.228536);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.108076);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.053981);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.138624);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.243728);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.217344);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9342417);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.060363);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8558982);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3701385);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(2,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(3,12.08068);
   hCCpi0inFV_stack_10->SetBinContent(4,27.20248);
   hCCpi0inFV_stack_10->SetBinContent(5,29.93704);
   hCCpi0inFV_stack_10->SetBinContent(6,26.89359);
   hCCpi0inFV_stack_10->SetBinContent(7,22.65906);
   hCCpi0inFV_stack_10->SetBinContent(8,26.75164);
   hCCpi0inFV_stack_10->SetBinContent(9,25.63377);
   hCCpi0inFV_stack_10->SetBinContent(10,30.68416);
   hCCpi0inFV_stack_10->SetBinContent(11,27.5505);
   hCCpi0inFV_stack_10->SetBinContent(12,28.57692);
   hCCpi0inFV_stack_10->SetBinContent(13,26.60971);
   hCCpi0inFV_stack_10->SetBinContent(14,28.61448);
   hCCpi0inFV_stack_10->SetBinContent(15,26.09477);
   hCCpi0inFV_stack_10->SetBinContent(16,31.64553);
   hCCpi0inFV_stack_10->SetBinContent(17,23.7415);
   hCCpi0inFV_stack_10->SetBinContent(18,27.47655);
   hCCpi0inFV_stack_10->SetBinContent(19,28.44218);
   hCCpi0inFV_stack_10->SetBinContent(20,29.49879);
   hCCpi0inFV_stack_10->SetBinContent(21,26.55534);
   hCCpi0inFV_stack_10->SetBinContent(22,24.53898);
   hCCpi0inFV_stack_10->SetBinContent(23,23.204);
   hCCpi0inFV_stack_10->SetBinContent(24,17.04097);
   hCCpi0inFV_stack_10->SetBinContent(25,3.83422);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_10->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(2,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(3,1.734432);
   hCCpi0inFV_stack_10->SetBinError(4,2.644083);
   hCCpi0inFV_stack_10->SetBinError(5,2.7802);
   hCCpi0inFV_stack_10->SetBinError(6,2.534824);
   hCCpi0inFV_stack_10->SetBinError(7,2.337131);
   hCCpi0inFV_stack_10->SetBinError(8,2.57282);
   hCCpi0inFV_stack_10->SetBinError(9,2.570042);
   hCCpi0inFV_stack_10->SetBinError(10,2.840574);
   hCCpi0inFV_stack_10->SetBinError(11,2.704604);
   hCCpi0inFV_stack_10->SetBinError(12,2.659218);
   hCCpi0inFV_stack_10->SetBinError(13,2.553385);
   hCCpi0inFV_stack_10->SetBinError(14,2.634119);
   hCCpi0inFV_stack_10->SetBinError(15,2.580771);
   hCCpi0inFV_stack_10->SetBinError(16,2.773333);
   hCCpi0inFV_stack_10->SetBinError(17,2.475307);
   hCCpi0inFV_stack_10->SetBinError(18,2.619583);
   hCCpi0inFV_stack_10->SetBinError(19,2.718621);
   hCCpi0inFV_stack_10->SetBinError(20,2.783294);
   hCCpi0inFV_stack_10->SetBinError(21,2.509498);
   hCCpi0inFV_stack_10->SetBinError(22,2.426791);
   hCCpi0inFV_stack_10->SetBinError(23,2.402935);
   hCCpi0inFV_stack_10->SetBinError(24,2.114019);
   hCCpi0inFV_stack_10->SetBinError(25,0.956355);
   hCCpi0inFV_stack_10->SetBinError(26,0.1950249);
   hCCpi0inFV_stack_10->SetEntries(2475);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.8770706);
   hNCinFV_stack_11->SetBinContent(3,6.053749);
   hNCinFV_stack_11->SetBinContent(4,8.744368);
   hNCinFV_stack_11->SetBinContent(5,11.09035);
   hNCinFV_stack_11->SetBinContent(6,10.94012);
   hNCinFV_stack_11->SetBinContent(7,12.40734);
   hNCinFV_stack_11->SetBinContent(8,10.40999);
   hNCinFV_stack_11->SetBinContent(9,10.25469);
   hNCinFV_stack_11->SetBinContent(10,9.678073);
   hNCinFV_stack_11->SetBinContent(11,14.76177);
   hNCinFV_stack_11->SetBinContent(12,12.15906);
   hNCinFV_stack_11->SetBinContent(13,10.94688);
   hNCinFV_stack_11->SetBinContent(14,11.63231);
   hNCinFV_stack_11->SetBinContent(15,10.30517);
   hNCinFV_stack_11->SetBinContent(16,10.56468);
   hNCinFV_stack_11->SetBinContent(17,10.29057);
   hNCinFV_stack_11->SetBinContent(18,10.06366);
   hNCinFV_stack_11->SetBinContent(19,12.94423);
   hNCinFV_stack_11->SetBinContent(20,10.90824);
   hNCinFV_stack_11->SetBinContent(21,11.42545);
   hNCinFV_stack_11->SetBinContent(22,11.53027);
   hNCinFV_stack_11->SetBinContent(23,9.31665);
   hNCinFV_stack_11->SetBinContent(24,5.076934);
   hNCinFV_stack_11->SetBinContent(25,1.465526);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.5197486);
   hNCinFV_stack_11->SetBinError(3,1.256574);
   hNCinFV_stack_11->SetBinError(4,1.468022);
   hNCinFV_stack_11->SetBinError(5,1.676938);
   hNCinFV_stack_11->SetBinError(6,1.653011);
   hNCinFV_stack_11->SetBinError(7,1.765977);
   hNCinFV_stack_11->SetBinError(8,1.606449);
   hNCinFV_stack_11->SetBinError(9,1.580828);
   hNCinFV_stack_11->SetBinError(10,1.545388);
   hNCinFV_stack_11->SetBinError(11,1.943969);
   hNCinFV_stack_11->SetBinError(12,1.76606);
   hNCinFV_stack_11->SetBinError(13,1.653812);
   hNCinFV_stack_11->SetBinError(14,1.72294);
   hNCinFV_stack_11->SetBinError(15,1.630336);
   hNCinFV_stack_11->SetBinError(16,1.569621);
   hNCinFV_stack_11->SetBinError(17,1.68839);
   hNCinFV_stack_11->SetBinError(18,1.631237);
   hNCinFV_stack_11->SetBinError(19,1.809169);
   hNCinFV_stack_11->SetBinError(20,1.606473);
   hNCinFV_stack_11->SetBinError(21,1.710513);
   hNCinFV_stack_11->SetBinError(22,1.687761);
   hNCinFV_stack_11->SetBinError(23,1.524691);
   hNCinFV_stack_11->SetBinError(24,1.178195);
   hNCinFV_stack_11->SetBinError(25,0.6209405);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetEntries(996);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(2,0.5786332);
   hnumuCCinFV_stack_12->SetBinContent(3,3.730353);
   hnumuCCinFV_stack_12->SetBinContent(4,7.806355);
   hnumuCCinFV_stack_12->SetBinContent(5,11.08617);
   hnumuCCinFV_stack_12->SetBinContent(6,9.658832);
   hnumuCCinFV_stack_12->SetBinContent(7,13.36714);
   hnumuCCinFV_stack_12->SetBinContent(8,13.85605);
   hnumuCCinFV_stack_12->SetBinContent(9,10.1926);
   hnumuCCinFV_stack_12->SetBinContent(10,12.9619);
   hnumuCCinFV_stack_12->SetBinContent(11,9.28038);
   hnumuCCinFV_stack_12->SetBinContent(12,12.47202);
   hnumuCCinFV_stack_12->SetBinContent(13,14.01694);
   hnumuCCinFV_stack_12->SetBinContent(14,14.36552);
   hnumuCCinFV_stack_12->SetBinContent(15,11.89514);
   hnumuCCinFV_stack_12->SetBinContent(16,15.62532);
   hnumuCCinFV_stack_12->SetBinContent(17,13.2062);
   hnumuCCinFV_stack_12->SetBinContent(18,13.01866);
   hnumuCCinFV_stack_12->SetBinContent(19,11.65919);
   hnumuCCinFV_stack_12->SetBinContent(20,12.49931);
   hnumuCCinFV_stack_12->SetBinContent(21,13.70837);
   hnumuCCinFV_stack_12->SetBinContent(22,15.83453);
   hnumuCCinFV_stack_12->SetBinContent(23,11.25635);
   hnumuCCinFV_stack_12->SetBinContent(24,9.980648);
   hnumuCCinFV_stack_12->SetBinContent(25,4.682675);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(2,0.4154297);
   hnumuCCinFV_stack_12->SetBinError(3,0.9751961);
   hnumuCCinFV_stack_12->SetBinError(4,1.440921);
   hnumuCCinFV_stack_12->SetBinError(5,2.010265);
   hnumuCCinFV_stack_12->SetBinError(6,1.556524);
   hnumuCCinFV_stack_12->SetBinError(7,1.99928);
   hnumuCCinFV_stack_12->SetBinError(8,2.18591);
   hnumuCCinFV_stack_12->SetBinError(9,1.631957);
   hnumuCCinFV_stack_12->SetBinError(10,1.909653);
   hnumuCCinFV_stack_12->SetBinError(11,1.583868);
   hnumuCCinFV_stack_12->SetBinError(12,1.987136);
   hnumuCCinFV_stack_12->SetBinError(13,1.936045);
   hnumuCCinFV_stack_12->SetBinError(14,2.2372);
   hnumuCCinFV_stack_12->SetBinError(15,1.815328);
   hnumuCCinFV_stack_12->SetBinError(16,2.251131);
   hnumuCCinFV_stack_12->SetBinError(17,2.673065);
   hnumuCCinFV_stack_12->SetBinError(18,1.941741);
   hnumuCCinFV_stack_12->SetBinError(19,1.730133);
   hnumuCCinFV_stack_12->SetBinError(20,2.546525);
   hnumuCCinFV_stack_12->SetBinError(21,2.011459);
   hnumuCCinFV_stack_12->SetBinError(22,3.199632);
   hnumuCCinFV_stack_12->SetBinError(23,1.812602);
   hnumuCCinFV_stack_12->SetBinError(24,1.655583);
   hnumuCCinFV_stack_12->SetBinError(25,1.358599);
   hnumuCCinFV_stack_12->SetEntries(1051);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.27222);
   hnueCCinFV_stack_13->SetBinContent(5,1.22512);
   hnueCCinFV_stack_13->SetBinContent(6,0.4949126);
   hnueCCinFV_stack_13->SetBinContent(7,1.071151);
   hnueCCinFV_stack_13->SetBinContent(8,1.713057);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.677241);
   hnueCCinFV_stack_13->SetBinContent(11,1.186236);
   hnueCCinFV_stack_13->SetBinContent(12,1.725775);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.911281);
   hnueCCinFV_stack_13->SetBinContent(15,0.7039669);
   hnueCCinFV_stack_13->SetBinContent(16,3.899607);
   hnueCCinFV_stack_13->SetBinContent(17,0.7582098);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336248);
   hnueCCinFV_stack_13->SetBinContent(19,0.8728007);
   hnueCCinFV_stack_13->SetBinContent(20,2.287719);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,2.079736);
   hnueCCinFV_stack_13->SetBinContent(24,1.329913);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.6739543);
   hnueCCinFV_stack_13->SetBinError(5,0.6593169);
   hnueCCinFV_stack_13->SetBinError(6,0.3475576);
   hnueCCinFV_stack_13->SetBinError(7,0.5697525);
   hnueCCinFV_stack_13->SetBinError(8,0.7462591);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.7084458);
   hnueCCinFV_stack_13->SetBinError(11,0.5448371);
   hnueCCinFV_stack_13->SetBinError(12,0.8274448);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.7462427);
   hnueCCinFV_stack_13->SetBinError(15,0.7039669);
   hnueCCinFV_stack_13->SetBinError(16,1.393396);
   hnueCCinFV_stack_13->SetBinError(17,0.4509977);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.4390931);
   hnueCCinFV_stack_13->SetBinError(20,1.352245);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.9024165);
   hnueCCinFV_stack_13->SetBinError(24,0.8167221);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
   hnueCCinFV_stack_13->SetEntries(115);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__11->SetBinContent(0,4.332654);
   hmcerror__11->SetBinContent(1,1.866922);
   hmcerror__11->SetBinContent(2,33.67954);
   hmcerror__11->SetBinContent(3,91.34512);
   hmcerror__11->SetBinContent(4,151.6943);
   hmcerror__11->SetBinContent(5,173.5254);
   hmcerror__11->SetBinContent(6,165.1143);
   hmcerror__11->SetBinContent(7,171.8);
   hmcerror__11->SetBinContent(8,173.8079);
   hmcerror__11->SetBinContent(9,163.9034);
   hmcerror__11->SetBinContent(10,171.6173);
   hmcerror__11->SetBinContent(11,168.0218);
   hmcerror__11->SetBinContent(12,162.9611);
   hmcerror__11->SetBinContent(13,174.431);
   hmcerror__11->SetBinContent(14,161.0603);
   hmcerror__11->SetBinContent(15,161.2238);
   hmcerror__11->SetBinContent(16,183.1833);
   hmcerror__11->SetBinContent(17,179.6326);
   hmcerror__11->SetBinContent(18,174.1845);
   hmcerror__11->SetBinContent(19,186.9644);
   hmcerror__11->SetBinContent(20,198.5705);
   hmcerror__11->SetBinContent(21,209.25);
   hmcerror__11->SetBinContent(22,218.6361);
   hmcerror__11->SetBinContent(23,191.7243);
   hmcerror__11->SetBinContent(24,159.3757);
   hmcerror__11->SetBinContent(25,70.97952);
   hmcerror__11->SetBinContent(26,4.446381);
   hmcerror__11->SetBinContent(27,2.772987);
   hmcerror__11->SetBinError(0,1.084277);
   hmcerror__11->SetBinError(1,3.225846);
   hmcerror__11->SetBinError(2,19.70248);
   hmcerror__11->SetBinError(3,27.18589);
   hmcerror__11->SetBinError(4,43.12506);
   hmcerror__11->SetBinError(5,49.10317);
   hmcerror__11->SetBinError(6,45.52778);
   hmcerror__11->SetBinError(7,47.97315);
   hmcerror__11->SetBinError(8,46.59492);
   hmcerror__11->SetBinError(9,42.89352);
   hmcerror__11->SetBinError(10,42.42451);
   hmcerror__11->SetBinError(11,44.49929);
   hmcerror__11->SetBinError(12,49.91591);
   hmcerror__11->SetBinError(13,44.81241);
   hmcerror__11->SetBinError(14,44.79433);
   hmcerror__11->SetBinError(15,43.57981);
   hmcerror__11->SetBinError(16,45.22018);
   hmcerror__11->SetBinError(17,40.56323);
   hmcerror__11->SetBinError(18,39.71637);
   hmcerror__11->SetBinError(19,40.38906);
   hmcerror__11->SetBinError(20,42.58004);
   hmcerror__11->SetBinError(21,48.17754);
   hmcerror__11->SetBinError(22,46.64378);
   hmcerror__11->SetBinError(23,40.66482);
   hmcerror__11->SetBinError(24,32.57081);
   hmcerror__11->SetBinError(25,26.5161);
   hmcerror__11->SetBinError(26,6.059277);
   hmcerror__11->SetBinError(27,5.163789);
   hmcerror__11->SetEntries(3864.24);

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
   
   Double_t _fx3013[26] = {
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
   Double_t _fy3013[26] = {
   3,
   21,
   85,
   158,
   172,
   163,
   189,
   180,
   174,
   166,
   182,
   170,
   171,
   156,
   167,
   188,
   159,
   163,
   172,
   180,
   188,
   217,
   188,
   158,
   44,
   2};
   Double_t _felx3013[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3013[26] = {
   2.143368,
   4.7354,
   9.3428,
   12.56981,
   13.11488,
   12.76715,
   13.74773,
   13.41641,
   13.19091,
   12.8841,
   13.49074,
   13.0384,
   13.0767,
   12.49,
   12.92285,
   13.71131,
   12.60952,
   12.76715,
   13.11488,
   13.41641,
   13.71131,
   14.73092,
   13.71131,
   12.56981,
   6.7671,
   2};
   Double_t _fehx3013[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3013[26] = {
   1.72422,
   4.5229,
   9.1411,
   12.56981,
   13.11488,
   12.76715,
   13.74773,
   13.41641,
   13.19091,
   12.8841,
   13.49074,
   13.0384,
   13.0767,
   12.49,
   12.92285,
   13.71131,
   12.60952,
   12.76715,
   13.11488,
   13.41641,
   13.71131,
   14.73092,
   13.71131,
   12.56981,
   6.5623,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-156,156);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(254.904);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("","BNB Data, 3816.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 56.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 503.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1290.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 577.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 266.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[26] = {
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
   Double_t _fy3014[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3014[26] = {
   1.727895,
   0.5849985,
   0.2976173,
   0.2842892,
   0.282974,
   0.2757349,
   0.2792384,
   0.268083,
   0.2617,
   0.2472042,
   0.2648423,
   0.3063057,
   0.2569063,
   0.2781215,
   0.2703062,
   0.2468575,
   0.2258123,
   0.2280133,
   0.2160254,
   0.2144329,
   0.2302392,
   0.2133398,
   0.2121005,
   0.204365,
   0.3735739,
   1.362743};
   Double_t _fehx3014[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3014[26] = {
   1.727895,
   0.5849985,
   0.2976173,
   0.2842892,
   0.282974,
   0.2757349,
   0.2792384,
   0.268083,
   0.2617,
   0.2472042,
   0.2648423,
   0.3063057,
   0.2569063,
   0.2781215,
   0.2703062,
   0.2468575,
   0.2258123,
   0.2280133,
   0.2160254,
   0.2144329,
   0.2302392,
   0.2133398,
   0.2121005,
   0.204365,
   0.3735739,
   1.362743};
   grae = new TGraphAsymmErrors(26,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-156,156);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3015[26] = {
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
   Double_t _fy3015[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3015[26] = {
   0.4897043,
   0.2332683,
   0.2189665,
   0.2107934,
   0.2031879,
   0.2220212,
   0.2259548,
   0.2234274,
   0.2061172,
   0.2127606,
   0.2267389,
   0.2121388,
   0.197094,
   0.2122219,
   0.1991217,
   0.1958897,
   0.193654,
   0.1877699,
   0.1791178,
   0.1770849,
   0.1673666,
   0.1645055,
   0.1575924,
   0.151627,
   0.1769352,
   0.3715947};
   Double_t _fehx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3015[26] = {
   0.4897043,
   0.2332683,
   0.2189665,
   0.2107934,
   0.2031879,
   0.2220212,
   0.2259548,
   0.2234274,
   0.2061172,
   0.2127606,
   0.2267389,
   0.2121388,
   0.197094,
   0.2122219,
   0.1991217,
   0.1958897,
   0.193654,
   0.1877699,
   0.1791178,
   0.1770849,
   0.1673666,
   0.1645055,
   0.1575924,
   0.151627,
   0.1769352,
   0.3715947};
   grae = new TGraphAsymmErrors(26,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-156,156);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3016[26] = {
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
   Double_t _fy3016[26] = {
   1.606923,
   0.6235239,
   0.9305369,
   1.041568,
   0.9912095,
   0.987195,
   1.100116,
   1.035626,
   1.061601,
   0.9672686,
   1.083193,
   1.043194,
   0.9803304,
   0.9685813,
   1.035827,
   1.026294,
   0.8851402,
   0.9357894,
   0.9199612,
   0.9064791,
   0.898447,
   0.9925168,
   0.9805747,
   0.9913684,
   0.6198971,
   0.449804};
   Double_t _felx3016[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3016[26] = {
   1.148076,
   0.1406017,
   0.1022802,
   0.08286274,
   0.07557902,
   0.07732308,
   0.0800217,
   0.07719103,
   0.08047976,
   0.0750746,
   0.08029157,
   0.08000931,
   0.07496774,
   0.07754857,
   0.0801547,
   0.07485021,
   0.07019619,
   0.07329668,
   0.07014638,
   0.06756496,
   0.06552598,
   0.06737643,
   0.07151576,
   0.07886903,
   0.09533876,
   0.449804};
   Double_t _fehx3016[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3016[26] = {
   0.9235629,
   0.1342922,
   0.1000721,
   0.08286274,
   0.07557902,
   0.07732308,
   0.0800217,
   0.07719103,
   0.08047976,
   0.0750746,
   0.08029157,
   0.08000931,
   0.07496774,
   0.07754857,
   0.0801547,
   0.07485021,
   0.07019619,
   0.07329668,
   0.07014638,
   0.06756496,
   0.06552598,
   0.06737643,
   0.07151576,
   0.07886903,
   0.09245343,
   0.3416644};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-156,156);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.783534);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
