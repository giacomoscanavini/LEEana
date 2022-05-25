#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 15:05:53 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-170,-4.34,163.3333,365.7021);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,4.332654);
   hmc__1->SetBinContent(1,1.670207);
   hmc__1->SetBinContent(2,33.14265);
   hmc__1->SetBinContent(3,89.00589);
   hmc__1->SetBinContent(4,147.3544);
   hmc__1->SetBinContent(5,168.097);
   hmc__1->SetBinContent(6,159.7426);
   hmc__1->SetBinContent(7,165.8045);
   hmc__1->SetBinContent(8,169.0728);
   hmc__1->SetBinContent(9,160.1922);
   hmc__1->SetBinContent(10,168.5865);
   hmc__1->SetBinContent(11,164.5023);
   hmc__1->SetBinContent(12,158.9064);
   hmc__1->SetBinContent(13,170.7619);
   hmc__1->SetBinContent(14,157.5907);
   hmc__1->SetBinContent(15,157.3658);
   hmc__1->SetBinContent(16,179.1706);
   hmc__1->SetBinContent(17,176.558);
   hmc__1->SetBinContent(18,171.3969);
   hmc__1->SetBinContent(19,182.3246);
   hmc__1->SetBinContent(20,194.9445);
   hmc__1->SetBinContent(21,204.5037);
   hmc__1->SetBinContent(22,213.4113);
   hmc__1->SetBinContent(23,188.063);
   hmc__1->SetBinContent(24,157.0348);
   hmc__1->SetBinContent(25,70.24592);
   hmc__1->SetBinContent(26,4.446381);
   hmc__1->SetBinContent(27,2.772987);
   hmc__1->SetBinError(0,1.084277);
   hmc__1->SetBinError(1,2.096857);
   hmc__1->SetBinError(2,11.12421);
   hmc__1->SetBinError(3,22.47056);
   hmc__1->SetBinError(4,33.32193);
   hmc__1->SetBinError(5,37.17584);
   hmc__1->SetBinError(6,36.90292);
   hmc__1->SetBinError(7,39.28);
   hmc__1->SetBinError(8,38.66174);
   hmc__1->SetBinError(9,33.41501);
   hmc__1->SetBinError(10,39.65585);
   hmc__1->SetBinError(11,39.09139);
   hmc__1->SetBinError(12,34.75571);
   hmc__1->SetBinError(13,36.07887);
   hmc__1->SetBinError(14,34.97504);
   hmc__1->SetBinError(15,32.77851);
   hmc__1->SetBinError(16,36.19135);
   hmc__1->SetBinError(17,34.15148);
   hmc__1->SetBinError(18,32.36611);
   hmc__1->SetBinError(19,33.6469);
   hmc__1->SetBinError(20,35.50452);
   hmc__1->SetBinError(21,37.59859);
   hmc__1->SetBinError(22,35.69363);
   hmc__1->SetBinError(23,34.18241);
   hmc__1->SetBinError(24,25.89964);
   hmc__1->SetBinError(25,14.91847);
   hmc__1->SetBinError(26,5.315425);
   hmc__1->SetBinError(27,3.84343);
   hmc__1->SetMinimum(-4.34);
   hmc__1->SetMaximum(347.2);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,-130,130);
   hs1_stack_1->SetMinimum(-7.708339e-09);
   hs1_stack_1->SetMaximum(224.0818);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.6835541);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,4.658492);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,27.4009);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,57.39985);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,72.44878);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,76.89032);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,84.95367);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,85.68175);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,77.57973);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,80.60557);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,84.53187);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,73.3532);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,75.46448);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,74.91428);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,74.84378);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,79.49324);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,76.58);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,67.89567);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,71.04665);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,72.72098);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,73.84379);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,64.98336);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,54.85177);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,35.96676);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,6.594722);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.181018);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,1.101558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.3022172);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,0.7377759);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.693011);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.513088);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.748292);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.818718);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.013732);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.032059);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.835377);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.89268);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.011881);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.735161);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.799912);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.774204);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.829658);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.936592);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.889719);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.591182);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.76196);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.782202);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.807327);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.658734);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.366277);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.053103);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.8317986);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.1086555);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.3863457);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_7->SetBinContent(2,2.7859);
   hCCpi0inFV_stack_7->SetBinContent(3,13.64934);
   hCCpi0inFV_stack_7->SetBinContent(4,29.65158);
   hCCpi0inFV_stack_7->SetBinContent(5,31.93777);
   hCCpi0inFV_stack_7->SetBinContent(6,28.80411);
   hCCpi0inFV_stack_7->SetBinContent(7,24.71305);
   hCCpi0inFV_stack_7->SetBinContent(8,28.80731);
   hCCpi0inFV_stack_7->SetBinContent(9,27.87939);
   hCCpi0inFV_stack_7->SetBinContent(10,32.42625);
   hCCpi0inFV_stack_7->SetBinContent(11,28.6209);
   hCCpi0inFV_stack_7->SetBinContent(12,30.6757);
   hCCpi0inFV_stack_7->SetBinContent(13,28.95231);
   hCCpi0inFV_stack_7->SetBinContent(14,31.45194);
   hCCpi0inFV_stack_7->SetBinContent(15,29.02244);
   hCCpi0inFV_stack_7->SetBinContent(16,35.64529);
   hCCpi0inFV_stack_7->SetBinContent(17,24.13493);
   hCCpi0inFV_stack_7->SetBinContent(18,30.21427);
   hCCpi0inFV_stack_7->SetBinContent(19,31.52008);
   hCCpi0inFV_stack_7->SetBinContent(20,31.21597);
   hCCpi0inFV_stack_7->SetBinContent(21,29.14791);
   hCCpi0inFV_stack_7->SetBinContent(22,26.58958);
   hCCpi0inFV_stack_7->SetBinContent(23,25.05957);
   hCCpi0inFV_stack_7->SetBinContent(24,18.30809);
   hCCpi0inFV_stack_7->SetBinContent(25,4.371113);
   hCCpi0inFV_stack_7->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_7->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_7->SetBinError(2,0.8327353);
   hCCpi0inFV_stack_7->SetBinError(3,1.820945);
   hCCpi0inFV_stack_7->SetBinError(4,2.751404);
   hCCpi0inFV_stack_7->SetBinError(5,2.875558);
   hCCpi0inFV_stack_7->SetBinError(6,2.617117);
   hCCpi0inFV_stack_7->SetBinError(7,2.441961);
   hCCpi0inFV_stack_7->SetBinError(8,2.668532);
   hCCpi0inFV_stack_7->SetBinError(9,2.672606);
   hCCpi0inFV_stack_7->SetBinError(10,2.909634);
   hCCpi0inFV_stack_7->SetBinError(11,2.760869);
   hCCpi0inFV_stack_7->SetBinError(12,2.74423);
   hCCpi0inFV_stack_7->SetBinError(13,2.678708);
   hCCpi0inFV_stack_7->SetBinError(14,2.755547);
   hCCpi0inFV_stack_7->SetBinError(15,2.725838);
   hCCpi0inFV_stack_7->SetBinError(16,2.961311);
   hCCpi0inFV_stack_7->SetBinError(17,2.490891);
   hCCpi0inFV_stack_7->SetBinError(18,2.75608);
   hCCpi0inFV_stack_7->SetBinError(19,2.870607);
   hCCpi0inFV_stack_7->SetBinError(20,2.851899);
   hCCpi0inFV_stack_7->SetBinError(21,2.636979);
   hCCpi0inFV_stack_7->SetBinError(22,2.527644);
   hCCpi0inFV_stack_7->SetBinError(23,2.497145);
   hCCpi0inFV_stack_7->SetBinError(24,2.194376);
   hCCpi0inFV_stack_7->SetBinError(25,1.03394);
   hCCpi0inFV_stack_7->SetBinError(26,0.1950249);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(2,0.3401776);
   hNCinFV_stack_8->SetBinContent(3,3.714533);
   hNCinFV_stack_8->SetBinContent(4,4.404423);
   hNCinFV_stack_8->SetBinContent(5,5.662008);
   hNCinFV_stack_8->SetBinContent(6,5.568418);
   hNCinFV_stack_8->SetBinContent(7,6.411914);
   hNCinFV_stack_8->SetBinContent(8,5.674924);
   hNCinFV_stack_8->SetBinContent(9,6.543542);
   hNCinFV_stack_8->SetBinContent(10,6.647276);
   hNCinFV_stack_8->SetBinContent(11,11.24226);
   hNCinFV_stack_8->SetBinContent(12,8.104349);
   hNCinFV_stack_8->SetBinContent(13,7.277759);
   hNCinFV_stack_8->SetBinContent(14,8.162674);
   hNCinFV_stack_8->SetBinContent(15,6.44718);
   hNCinFV_stack_8->SetBinContent(16,6.551995);
   hNCinFV_stack_8->SetBinContent(17,7.216053);
   hNCinFV_stack_8->SetBinContent(18,7.276069);
   hNCinFV_stack_8->SetBinContent(19,8.304445);
   hNCinFV_stack_8->SetBinContent(20,7.282222);
   hNCinFV_stack_8->SetBinContent(21,6.67916);
   hNCinFV_stack_8->SetBinContent(22,6.305408);
   hNCinFV_stack_8->SetBinContent(23,5.655371);
   hNCinFV_stack_8->SetBinContent(24,2.736028);
   hNCinFV_stack_8->SetBinContent(25,0.7319179);
   hNCinFV_stack_8->SetBinContent(26,0.1967154);
   hNCinFV_stack_8->SetBinError(2,0.3401776);
   hNCinFV_stack_8->SetBinError(3,0.9615599);
   hNCinFV_stack_8->SetBinError(4,0.9805027);
   hNCinFV_stack_8->SetBinError(5,1.225662);
   hNCinFV_stack_8->SetBinError(6,1.177103);
   hNCinFV_stack_8->SetBinError(7,1.226115);
   hNCinFV_stack_8->SetBinError(8,1.144079);
   hNCinFV_stack_8->SetBinError(9,1.255287);
   hNCinFV_stack_8->SetBinError(10,1.302457);
   hNCinFV_stack_8->SetBinError(11,1.700722);
   hNCinFV_stack_8->SetBinError(12,1.441752);
   hNCinFV_stack_8->SetBinError(13,1.402671);
   hNCinFV_stack_8->SetBinError(14,1.429094);
   hNCinFV_stack_8->SetBinError(15,1.287001);
   hNCinFV_stack_8->SetBinError(16,1.256605);
   hNCinFV_stack_8->SetBinError(17,1.415098);
   hNCinFV_stack_8->SetBinError(18,1.402435);
   hNCinFV_stack_8->SetBinError(19,1.455566);
   hNCinFV_stack_8->SetBinError(20,1.330732);
   hNCinFV_stack_8->SetBinError(21,1.359443);
   hNCinFV_stack_8->SetBinError(22,1.256985);
   hNCinFV_stack_8->SetBinError(23,1.166944);
   hNCinFV_stack_8->SetBinError(24,0.8562123);
   hNCinFV_stack_8->SetBinError(25,0.438694);
   hNCinFV_stack_8->SetBinError(26,0.1967154);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_9->SetBinContent(2,0.2384555);
   hnumuCCinFV_stack_9->SetBinContent(3,2.161702);
   hnumuCCinFV_stack_9->SetBinContent(4,5.357251);
   hnumuCCinFV_stack_9->SetBinContent(5,9.085438);
   hnumuCCinFV_stack_9->SetBinContent(6,7.748312);
   hnumuCCinFV_stack_9->SetBinContent(7,11.31316);
   hnumuCCinFV_stack_9->SetBinContent(8,11.80038);
   hnumuCCinFV_stack_9->SetBinContent(9,7.946979);
   hnumuCCinFV_stack_9->SetBinContent(10,11.21981);
   hnumuCCinFV_stack_9->SetBinContent(11,8.209975);
   hnumuCCinFV_stack_9->SetBinContent(12,10.37324);
   hnumuCCinFV_stack_9->SetBinContent(13,11.67434);
   hnumuCCinFV_stack_9->SetBinContent(14,11.52806);
   hnumuCCinFV_stack_9->SetBinContent(15,8.967466);
   hnumuCCinFV_stack_9->SetBinContent(16,11.62555);
   hnumuCCinFV_stack_9->SetBinContent(17,12.81277);
   hnumuCCinFV_stack_9->SetBinContent(18,10.28094);
   hnumuCCinFV_stack_9->SetBinContent(19,8.581289);
   hnumuCCinFV_stack_9->SetBinContent(20,10.78212);
   hnumuCCinFV_stack_9->SetBinContent(21,11.11581);
   hnumuCCinFV_stack_9->SetBinContent(22,13.78392);
   hnumuCCinFV_stack_9->SetBinContent(23,9.400778);
   hnumuCCinFV_stack_9->SetBinContent(24,8.713528);
   hnumuCCinFV_stack_9->SetBinContent(25,4.145782);
   hnumuCCinFV_stack_9->SetBinError(0,0.316714);
   hnumuCCinFV_stack_9->SetBinError(2,0.2384555);
   hnumuCCinFV_stack_9->SetBinError(3,0.8021339);
   hnumuCCinFV_stack_9->SetBinError(4,1.223602);
   hnumuCCinFV_stack_9->SetBinError(5,1.871321);
   hnumuCCinFV_stack_9->SetBinError(6,1.413788);
   hnumuCCinFV_stack_9->SetBinError(7,1.869793);
   hnumuCCinFV_stack_9->SetBinError(8,2.067981);
   hnumuCCinFV_stack_9->SetBinError(9,1.457936);
   hnumuCCinFV_stack_9->SetBinError(10,1.802683);
   hnumuCCinFV_stack_9->SetBinError(11,1.483619);
   hnumuCCinFV_stack_9->SetBinError(12,1.86798);
   hnumuCCinFV_stack_9->SetBinError(13,1.758568);
   hnumuCCinFV_stack_9->SetBinError(14,2.08581);
   hnumuCCinFV_stack_9->SetBinError(15,1.589216);
   hnumuCCinFV_stack_9->SetBinError(16,1.9974);
   hnumuCCinFV_stack_9->SetBinError(17,2.658549);
   hnumuCCinFV_stack_9->SetBinError(18,1.742583);
   hnumuCCinFV_stack_9->SetBinError(19,1.464198);
   hnumuCCinFV_stack_9->SetBinError(20,2.469452);
   hnumuCCinFV_stack_9->SetBinError(21,1.841166);
   hnumuCCinFV_stack_9->SetBinError(22,3.120573);
   hnumuCCinFV_stack_9->SetBinError(23,1.680444);
   hnumuCCinFV_stack_9->SetBinError(24,1.547497);
   hnumuCCinFV_stack_9->SetBinError(25,1.300529);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(4,1.27222);
   hnueCCinFV_stack_10->SetBinContent(5,1.22512);
   hnueCCinFV_stack_10->SetBinContent(6,0.4949126);
   hnueCCinFV_stack_10->SetBinContent(7,1.071151);
   hnueCCinFV_stack_10->SetBinContent(8,1.713057);
   hnueCCinFV_stack_10->SetBinContent(9,2.339324);
   hnueCCinFV_stack_10->SetBinContent(10,1.677241);
   hnueCCinFV_stack_10->SetBinContent(11,1.186236);
   hnueCCinFV_stack_10->SetBinContent(12,1.725775);
   hnueCCinFV_stack_10->SetBinContent(13,2.323999);
   hnueCCinFV_stack_10->SetBinContent(14,1.911281);
   hnueCCinFV_stack_10->SetBinContent(15,0.7039669);
   hnueCCinFV_stack_10->SetBinContent(16,3.899607);
   hnueCCinFV_stack_10->SetBinContent(17,0.7582098);
   hnueCCinFV_stack_10->SetBinContent(18,0.7336248);
   hnueCCinFV_stack_10->SetBinContent(19,0.8728007);
   hnueCCinFV_stack_10->SetBinContent(20,2.287719);
   hnueCCinFV_stack_10->SetBinContent(21,1.387521);
   hnueCCinFV_stack_10->SetBinContent(22,1.423397);
   hnueCCinFV_stack_10->SetBinContent(23,2.079736);
   hnueCCinFV_stack_10->SetBinContent(24,1.329913);
   hnueCCinFV_stack_10->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_10->SetBinError(3,0.1950249);
   hnueCCinFV_stack_10->SetBinError(4,0.6739543);
   hnueCCinFV_stack_10->SetBinError(5,0.6593169);
   hnueCCinFV_stack_10->SetBinError(6,0.3475576);
   hnueCCinFV_stack_10->SetBinError(7,0.5697525);
   hnueCCinFV_stack_10->SetBinError(8,0.7462591);
   hnueCCinFV_stack_10->SetBinError(9,1.066439);
   hnueCCinFV_stack_10->SetBinError(10,0.7084458);
   hnueCCinFV_stack_10->SetBinError(11,0.5448371);
   hnueCCinFV_stack_10->SetBinError(12,0.8274448);
   hnueCCinFV_stack_10->SetBinError(13,1.548703);
   hnueCCinFV_stack_10->SetBinError(14,0.7462427);
   hnueCCinFV_stack_10->SetBinError(15,0.7039669);
   hnueCCinFV_stack_10->SetBinError(16,1.393396);
   hnueCCinFV_stack_10->SetBinError(17,0.4509977);
   hnueCCinFV_stack_10->SetBinError(18,0.4394482);
   hnueCCinFV_stack_10->SetBinError(19,0.4390931);
   hnueCCinFV_stack_10->SetBinError(20,1.352245);
   hnueCCinFV_stack_10->SetBinError(21,0.5983931);
   hnueCCinFV_stack_10->SetBinError(22,0.6876589);
   hnueCCinFV_stack_10->SetBinError(23,0.9024165);
   hnueCCinFV_stack_10->SetBinError(24,0.8167221);
   hnueCCinFV_stack_10->SetBinError(25,0.2180157);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,4.332654);
   hmcerror__2->SetBinContent(1,1.670207);
   hmcerror__2->SetBinContent(2,33.14265);
   hmcerror__2->SetBinContent(3,89.00589);
   hmcerror__2->SetBinContent(4,147.3544);
   hmcerror__2->SetBinContent(5,168.097);
   hmcerror__2->SetBinContent(6,159.7426);
   hmcerror__2->SetBinContent(7,165.8045);
   hmcerror__2->SetBinContent(8,169.0728);
   hmcerror__2->SetBinContent(9,160.1922);
   hmcerror__2->SetBinContent(10,168.5865);
   hmcerror__2->SetBinContent(11,164.5023);
   hmcerror__2->SetBinContent(12,158.9064);
   hmcerror__2->SetBinContent(13,170.7619);
   hmcerror__2->SetBinContent(14,157.5907);
   hmcerror__2->SetBinContent(15,157.3658);
   hmcerror__2->SetBinContent(16,179.1706);
   hmcerror__2->SetBinContent(17,176.558);
   hmcerror__2->SetBinContent(18,171.3969);
   hmcerror__2->SetBinContent(19,182.3246);
   hmcerror__2->SetBinContent(20,194.9445);
   hmcerror__2->SetBinContent(21,204.5037);
   hmcerror__2->SetBinContent(22,213.4113);
   hmcerror__2->SetBinContent(23,188.063);
   hmcerror__2->SetBinContent(24,157.0348);
   hmcerror__2->SetBinContent(25,70.24592);
   hmcerror__2->SetBinContent(26,4.446381);
   hmcerror__2->SetBinContent(27,2.772987);
   hmcerror__2->SetBinError(0,1.084277);
   hmcerror__2->SetBinError(1,2.096857);
   hmcerror__2->SetBinError(2,11.12421);
   hmcerror__2->SetBinError(3,22.47056);
   hmcerror__2->SetBinError(4,33.32193);
   hmcerror__2->SetBinError(5,37.17584);
   hmcerror__2->SetBinError(6,36.90292);
   hmcerror__2->SetBinError(7,39.28);
   hmcerror__2->SetBinError(8,38.66174);
   hmcerror__2->SetBinError(9,33.41501);
   hmcerror__2->SetBinError(10,39.65585);
   hmcerror__2->SetBinError(11,39.09139);
   hmcerror__2->SetBinError(12,34.75571);
   hmcerror__2->SetBinError(13,36.07887);
   hmcerror__2->SetBinError(14,34.97504);
   hmcerror__2->SetBinError(15,32.77851);
   hmcerror__2->SetBinError(16,36.19135);
   hmcerror__2->SetBinError(17,34.15148);
   hmcerror__2->SetBinError(18,32.36611);
   hmcerror__2->SetBinError(19,33.6469);
   hmcerror__2->SetBinError(20,35.50452);
   hmcerror__2->SetBinError(21,37.59859);
   hmcerror__2->SetBinError(22,35.69363);
   hmcerror__2->SetBinError(23,34.18241);
   hmcerror__2->SetBinError(24,25.89964);
   hmcerror__2->SetBinError(25,14.91847);
   hmcerror__2->SetBinError(26,5.315425);
   hmcerror__2->SetBinError(27,3.84343);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[26] = {
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
   Double_t _fy3001[26] = {
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
   Double_t _felx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3001[26] = {
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
   Double_t _fehx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3001[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(254.904);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.5/26","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 56.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 503.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1554.9","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 625.8","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 218.9","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   Double_t _fy3002[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3002[26] = {
   1.255447,
   0.3356463,
   0.2524615,
   0.2261347,
   0.221157,
   0.2310149,
   0.2369055,
   0.2286692,
   0.2085932,
   0.2352256,
   0.2376342,
   0.2187182,
   0.2112818,
   0.2219359,
   0.2082949,
   0.2019938,
   0.1934292,
   0.1888372,
   0.1845439,
   0.1821263,
   0.1838529,
   0.1672528,
   0.1817604,
   0.1649293,
   0.2123748,
   1.19545};
   Double_t _fehx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3002[26] = {
   1.255447,
   0.3356463,
   0.2524615,
   0.2261347,
   0.221157,
   0.2310149,
   0.2369055,
   0.2286692,
   0.2085932,
   0.2352256,
   0.2376342,
   0.2187182,
   0.2112818,
   0.2219359,
   0.2082949,
   0.2019938,
   0.1934292,
   0.1888372,
   0.1845439,
   0.1821263,
   0.1838529,
   0.1672528,
   0.1817604,
   0.1649293,
   0.2123748,
   1.19545};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-156,156);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3003[26] = {
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
   Double_t _fy3003[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3003[26] = {
   0.5090158,
   0.2294128,
   0.2131795,
   0.2032195,
   0.195785,
   0.2122969,
   0.2146491,
   0.2123475,
   0.1949683,
   0.2011268,
   0.216246,
   0.2013264,
   0.1844329,
   0.1975879,
   0.1867982,
   0.1861571,
   0.1837787,
   0.1782656,
   0.169889,
   0.1689147,
   0.1595206,
   0.1566287,
   0.1512996,
   0.1470093,
   0.1736017,
   0.3650654};
   Double_t _fehx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3003[26] = {
   0.5090158,
   0.2294128,
   0.2131795,
   0.2032195,
   0.195785,
   0.2122969,
   0.2146491,
   0.2123475,
   0.1949683,
   0.2011268,
   0.216246,
   0.2013264,
   0.1844329,
   0.1975879,
   0.1867982,
   0.1861571,
   0.1837787,
   0.1782656,
   0.169889,
   0.1689147,
   0.1595206,
   0.1566287,
   0.1512996,
   0.1470093,
   0.1736017,
   0.3650654};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-156,156);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[26] = {
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
   Double_t _fy3004[26] = {
   1.796185,
   0.6336246,
   0.954993,
   1.072245,
   1.023218,
   1.020392,
   1.139896,
   1.06463,
   1.086195,
   0.9846579,
   1.106367,
   1.069812,
   1.001395,
   0.9899062,
   1.061221,
   1.049279,
   0.9005538,
   0.9510091,
   0.9433722,
   0.9233398,
   0.9192989,
   1.016816,
   0.9996649,
   1.006147,
   0.6263709,
   0.449804};
   Double_t _felx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3004[26] = {
   1.283295,
   0.1428793,
   0.1049683,
   0.08530324,
   0.07801968,
   0.07992324,
   0.08291527,
   0.07935284,
   0.08234422,
   0.07642427,
   0.0820094,
   0.08205085,
   0.07657856,
   0.07925593,
   0.08211978,
   0.07652655,
   0.07141856,
   0.07448878,
   0.07193145,
   0.06882168,
   0.06704677,
   0.06902597,
   0.07290806,
   0.08004473,
   0.09633442,
   0.449804};
   Double_t _fehx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3004[26] = {
   1.032339,
   0.1364677,
   0.1027022,
   0.08530324,
   0.07801968,
   0.07992324,
   0.08291527,
   0.07935284,
   0.08234422,
   0.07642427,
   0.0820094,
   0.08205085,
   0.07657856,
   0.07925593,
   0.08211978,
   0.07652655,
   0.07141856,
   0.07448878,
   0.07193145,
   0.06882168,
   0.06704677,
   0.06902597,
   0.07290806,
   0.08004473,
   0.09341895,
   0.3416644};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.111376);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
