#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Mar 13 18:29:32 2023) by ROOT version 6.26/00
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
   pad1->Range(-170,-5.2,163.3333,575.0105);
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
   hmc__10->SetBinContent(0,5.073423);
   hmc__10->SetBinContent(1,2.771893);
   hmc__10->SetBinContent(2,38.9511);
   hmc__10->SetBinContent(3,110.1848);
   hmc__10->SetBinContent(4,186.4044);
   hmc__10->SetBinContent(5,213.5286);
   hmc__10->SetBinContent(6,204.9503);
   hmc__10->SetBinContent(7,216.2516);
   hmc__10->SetBinContent(8,217.0486);
   hmc__10->SetBinContent(9,211.3999);
   hmc__10->SetBinContent(10,221.5452);
   hmc__10->SetBinContent(11,214.8531);
   hmc__10->SetBinContent(12,208.9808);
   hmc__10->SetBinContent(13,217.001);
   hmc__10->SetBinContent(14,213.2502);
   hmc__10->SetBinContent(15,212.0835);
   hmc__10->SetBinContent(16,231.1683);
   hmc__10->SetBinContent(17,219.8124);
   hmc__10->SetBinContent(18,214.0822);
   hmc__10->SetBinContent(19,231.1568);
   hmc__10->SetBinContent(20,246.134);
   hmc__10->SetBinContent(21,248.5632);
   hmc__10->SetBinContent(22,258.1367);
   hmc__10->SetBinContent(23,224.5228);
   hmc__10->SetBinContent(24,184.2673);
   hmc__10->SetBinContent(25,76.7433);
   hmc__10->SetBinContent(26,4.643096);
   hmc__10->SetBinContent(27,3.754537);
   hmc__10->SetBinError(0,1.140963);
   hmc__10->SetBinError(1,4.605182);
   hmc__10->SetBinError(2,22.82197);
   hmc__10->SetBinError(3,30.87498);
   hmc__10->SetBinError(4,45.32562);
   hmc__10->SetBinError(5,55.64209);
   hmc__10->SetBinError(6,51.1324);
   hmc__10->SetBinError(7,53.82953);
   hmc__10->SetBinError(8,53.90038);
   hmc__10->SetBinError(9,49.69824);
   hmc__10->SetBinError(10,52.80746);
   hmc__10->SetBinError(11,51.2612);
   hmc__10->SetBinError(12,54.01984);
   hmc__10->SetBinError(13,51.30469);
   hmc__10->SetBinError(14,54.22229);
   hmc__10->SetBinError(15,52.03527);
   hmc__10->SetBinError(16,52.53951);
   hmc__10->SetBinError(17,49.59673);
   hmc__10->SetBinError(18,45.89421);
   hmc__10->SetBinError(19,48.94632);
   hmc__10->SetBinError(20,50.38581);
   hmc__10->SetBinError(21,55.52296);
   hmc__10->SetBinError(22,52.87387);
   hmc__10->SetBinError(23,45.39733);
   hmc__10->SetBinError(24,35.48263);
   hmc__10->SetBinError(25,32.3191);
   hmc__10->SetBinError(26,5.860496);
   hmc__10->SetBinError(27,4.942769);
   hmc__10->SetMinimum(-5.2);
   hmc__10->SetMaximum(546);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",26,-130,130);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(271.0435);
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
   hbadmatch_stack_1->SetBinContent(2,2.06116);
   hbadmatch_stack_1->SetBinContent(3,2.053982);
   hbadmatch_stack_1->SetBinContent(4,9.087369);
   hbadmatch_stack_1->SetBinContent(5,5.708199);
   hbadmatch_stack_1->SetBinContent(6,3.641538);
   hbadmatch_stack_1->SetBinContent(7,3.49013);
   hbadmatch_stack_1->SetBinContent(8,4.515682);
   hbadmatch_stack_1->SetBinContent(9,3.934166);
   hbadmatch_stack_1->SetBinContent(10,5.83108);
   hbadmatch_stack_1->SetBinContent(11,4.05471);
   hbadmatch_stack_1->SetBinContent(12,5.150594);
   hbadmatch_stack_1->SetBinContent(13,8.24076);
   hbadmatch_stack_1->SetBinContent(14,2.635274);
   hbadmatch_stack_1->SetBinContent(15,5.493716);
   hbadmatch_stack_1->SetBinContent(16,6.775474);
   hbadmatch_stack_1->SetBinContent(17,5.914898);
   hbadmatch_stack_1->SetBinContent(18,6.499053);
   hbadmatch_stack_1->SetBinContent(19,3.907148);
   hbadmatch_stack_1->SetBinContent(20,6.028613);
   hbadmatch_stack_1->SetBinContent(21,6.651248);
   hbadmatch_stack_1->SetBinContent(22,4.485113);
   hbadmatch_stack_1->SetBinContent(23,5.452235);
   hbadmatch_stack_1->SetBinContent(24,7.692225);
   hbadmatch_stack_1->SetBinContent(25,3.117553);
   hbadmatch_stack_1->SetBinError(2,0.7600344);
   hbadmatch_stack_1->SetBinError(3,0.7078105);
   hbadmatch_stack_1->SetBinError(4,2.809379);
   hbadmatch_stack_1->SetBinError(5,2.01318);
   hbadmatch_stack_1->SetBinError(6,0.9708745);
   hbadmatch_stack_1->SetBinError(7,0.9669228);
   hbadmatch_stack_1->SetBinError(8,1.417662);
   hbadmatch_stack_1->SetBinError(9,0.9803035);
   hbadmatch_stack_1->SetBinError(10,1.434341);
   hbadmatch_stack_1->SetBinError(11,1.01996);
   hbadmatch_stack_1->SetBinError(12,1.231341);
   hbadmatch_stack_1->SetBinError(13,1.508845);
   hbadmatch_stack_1->SetBinError(14,0.7354788);
   hbadmatch_stack_1->SetBinError(15,1.338901);
   hbadmatch_stack_1->SetBinError(16,1.35884);
   hbadmatch_stack_1->SetBinError(17,1.260879);
   hbadmatch_stack_1->SetBinError(18,1.33093);
   hbadmatch_stack_1->SetBinError(19,1.050904);
   hbadmatch_stack_1->SetBinError(20,1.288232);
   hbadmatch_stack_1->SetBinError(21,1.517094);
   hbadmatch_stack_1->SetBinError(22,1.176152);
   hbadmatch_stack_1->SetBinError(23,1.176445);
   hbadmatch_stack_1->SetBinError(24,1.464058);
   hbadmatch_stack_1->SetBinError(25,0.9311789);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,4.628173);
   hext_stack_2->SetBinContent(5,5.676386);
   hext_stack_2->SetBinContent(6,4.93821);
   hext_stack_2->SetBinContent(7,4.620993);
   hext_stack_2->SetBinContent(8,8.179411);
   hext_stack_2->SetBinContent(9,10.91745);
   hext_stack_2->SetBinContent(10,11.16683);
   hext_stack_2->SetBinContent(11,10.44742);
   hext_stack_2->SetBinContent(12,9.48418);
   hext_stack_2->SetBinContent(13,15.71003);
   hext_stack_2->SetBinContent(14,14.17301);
   hext_stack_2->SetBinContent(15,18.00399);
   hext_stack_2->SetBinContent(16,18.41777);
   hext_stack_2->SetBinContent(17,23.87344);
   hext_stack_2->SetBinContent(18,25.30671);
   hext_stack_2->SetBinContent(19,35.71502);
   hext_stack_2->SetBinContent(20,44.6326);
   hext_stack_2->SetBinContent(21,43.18938);
   hext_stack_2->SetBinContent(22,57.23553);
   hext_stack_2->SetBinContent(23,50.1374);
   hext_stack_2->SetBinContent(24,48.30358);
   hext_stack_2->SetBinContent(25,15.71721);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,1.291697);
   hext_stack_2->SetBinError(5,1.49849);
   hext_stack_2->SetBinError(6,1.475167);
   hext_stack_2->SetBinError(7,1.367364);
   hext_stack_2->SetBinError(8,1.888062);
   hext_stack_2->SetBinError(9,2.265045);
   hext_stack_2->SetBinError(10,2.23033);
   hext_stack_2->SetBinError(11,2.153541);
   hext_stack_2->SetBinError(12,1.945382);
   hext_stack_2->SetBinError(13,2.630417);
   hext_stack_2->SetBinError(14,2.473194);
   hext_stack_2->SetBinError(15,2.742912);
   hext_stack_2->SetBinError(16,2.736364);
   hext_stack_2->SetBinError(17,3.227201);
   hext_stack_2->SetBinError(18,3.429394);
   hext_stack_2->SetBinError(19,3.889883);
   hext_stack_2->SetBinError(20,4.331896);
   hext_stack_2->SetBinError(21,4.237561);
   hext_stack_2->SetBinError(22,4.839305);
   hext_stack_2->SetBinError(23,4.592583);
   hext_stack_2->SetBinError(24,4.493011);
   hext_stack_2->SetBinError(25,2.591889);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,2.356437);
   hdirt_stack_3->SetBinContent(4,2.435151);
   hdirt_stack_3->SetBinContent(5,1.81754);
   hdirt_stack_3->SetBinContent(6,2.938441);
   hdirt_stack_3->SetBinContent(7,3.516597);
   hdirt_stack_3->SetBinContent(8,2.147753);
   hdirt_stack_3->SetBinContent(9,2.049609);
   hdirt_stack_3->SetBinContent(10,2.518032);
   hdirt_stack_3->SetBinContent(11,1.132113);
   hdirt_stack_3->SetBinContent(12,3.208807);
   hdirt_stack_3->SetBinContent(13,2.066694);
   hdirt_stack_3->SetBinContent(14,0.7498547);
   hdirt_stack_3->SetBinContent(15,1.86911);
   hdirt_stack_3->SetBinContent(16,3.046592);
   hdirt_stack_3->SetBinContent(17,1.347676);
   hdirt_stack_3->SetBinContent(18,2.10411);
   hdirt_stack_3->SetBinContent(19,2.048349);
   hdirt_stack_3->SetBinContent(20,4.922387);
   hdirt_stack_3->SetBinContent(21,4.667755);
   hdirt_stack_3->SetBinContent(22,5.947768);
   hdirt_stack_3->SetBinContent(23,5.140493);
   hdirt_stack_3->SetBinContent(24,1.925183);
   hdirt_stack_3->SetBinContent(25,2.337278);
   hdirt_stack_3->SetBinContent(27,0.6763744);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.8215658);
   hdirt_stack_3->SetBinError(4,0.7873049);
   hdirt_stack_3->SetBinError(5,0.6493932);
   hdirt_stack_3->SetBinError(6,0.7759919);
   hdirt_stack_3->SetBinError(7,1.229919);
   hdirt_stack_3->SetBinError(8,0.8842929);
   hdirt_stack_3->SetBinError(9,0.7108802);
   hdirt_stack_3->SetBinError(10,0.8749764);
   hdirt_stack_3->SetBinError(11,0.4953169);
   hdirt_stack_3->SetBinError(12,0.9740958);
   hdirt_stack_3->SetBinError(13,0.76545);
   hdirt_stack_3->SetBinError(14,0.3885538);
   hdirt_stack_3->SetBinError(15,0.7143259);
   hdirt_stack_3->SetBinError(16,0.9510541);
   hdirt_stack_3->SetBinError(17,0.6459851);
   hdirt_stack_3->SetBinError(18,0.7413137);
   hdirt_stack_3->SetBinError(19,0.7481613);
   hdirt_stack_3->SetBinError(20,1.126407);
   hdirt_stack_3->SetBinError(21,1.140706);
   hdirt_stack_3->SetBinError(22,1.622725);
   hdirt_stack_3->SetBinError(23,1.155354);
   hdirt_stack_3->SetBinError(24,1.059996);
   hdirt_stack_3->SetBinError(25,0.8233576);
   hdirt_stack_3->SetBinError(27,0.4782689);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,2.145881);
   houtFV_stack_4->SetBinContent(1,1.857266);
   houtFV_stack_4->SetBinContent(2,26.49554);
   houtFV_stack_4->SetBinContent(3,41.52934);
   houtFV_stack_4->SetBinContent(4,36.57458);
   houtFV_stack_4->SetBinContent(5,33.28684);
   houtFV_stack_4->SetBinContent(6,25.31537);
   houtFV_stack_4->SetBinContent(7,23.58567);
   houtFV_stack_4->SetBinContent(8,19.61588);
   houtFV_stack_4->SetBinContent(9,20.74878);
   houtFV_stack_4->SetBinContent(10,18.84638);
   houtFV_stack_4->SetBinContent(11,18.11081);
   houtFV_stack_4->SetBinContent(12,16.73774);
   houtFV_stack_4->SetBinContent(13,16.67713);
   houtFV_stack_4->SetBinContent(14,16.64029);
   houtFV_stack_4->SetBinContent(15,13.4951);
   houtFV_stack_4->SetBinContent(16,15.44141);
   houtFV_stack_4->SetBinContent(17,18.08592);
   houtFV_stack_4->SetBinContent(18,18.97377);
   houtFV_stack_4->SetBinContent(19,18.33826);
   houtFV_stack_4->SetBinContent(20,18.99757);
   houtFV_stack_4->SetBinContent(21,26.76151);
   houtFV_stack_4->SetBinContent(22,32.5396);
   houtFV_stack_4->SetBinContent(23,29.36674);
   houtFV_stack_4->SetBinContent(24,38.46763);
   houtFV_stack_4->SetBinContent(25,35.29215);
   houtFV_stack_4->SetBinContent(26,2.736028);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.785499);
   houtFV_stack_4->SetBinError(1,0.6799255);
   houtFV_stack_4->SetBinError(2,2.571287);
   houtFV_stack_4->SetBinError(3,3.256744);
   houtFV_stack_4->SetBinError(4,3.034396);
   houtFV_stack_4->SetBinError(5,2.920966);
   houtFV_stack_4->SetBinError(6,2.497736);
   houtFV_stack_4->SetBinError(7,2.389129);
   houtFV_stack_4->SetBinError(8,2.18787);
   houtFV_stack_4->SetBinError(9,2.326284);
   houtFV_stack_4->SetBinError(10,2.172903);
   houtFV_stack_4->SetBinError(11,2.366693);
   houtFV_stack_4->SetBinError(12,2.045558);
   houtFV_stack_4->SetBinError(13,2.035178);
   houtFV_stack_4->SetBinError(14,2.031765);
   houtFV_stack_4->SetBinError(15,1.855642);
   houtFV_stack_4->SetBinError(16,1.898826);
   houtFV_stack_4->SetBinError(17,2.118329);
   houtFV_stack_4->SetBinError(18,2.162213);
   houtFV_stack_4->SetBinError(19,2.185049);
   houtFV_stack_4->SetBinError(20,2.10709);
   houtFV_stack_4->SetBinError(21,2.745432);
   houtFV_stack_4->SetBinError(22,2.918907);
   houtFV_stack_4->SetBinError(23,2.76286);
   houtFV_stack_4->SetBinError(24,3.157863);
   houtFV_stack_4->SetBinError(25,3.042368);
   houtFV_stack_4->SetBinError(26,0.8562123);
   houtFV_stack_4->SetBinError(27,0.3397478);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.559912);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.473978);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.782046);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.740528);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.76826);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.184599);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.119342);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.256514);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.509278);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.866746);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.276766);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.476137);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.410464);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.676846);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.294063);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.339718);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.368946);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.930924);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.502709);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.242232);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.006414);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.566816);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3609996);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6501412);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7183523);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7128226);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6900258);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7039396);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7636554);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7496812);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7794614);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.755242);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5499838);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6441772);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7696205);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8031123);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.962896);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7814146);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7644618);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6223066);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6653782);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7539092);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7791286);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6005584);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.17535);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.673344);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9339901);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6418679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4524662);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3344153);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2250829);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.714124);
   hNCpi0inFVres_stack_7->SetBinContent(3,27.9041);
   hNCpi0inFVres_stack_7->SetBinContent(4,56.92121);
   hNCpi0inFVres_stack_7->SetBinContent(5,77.33396);
   hNCpi0inFVres_stack_7->SetBinContent(6,83.10473);
   hNCpi0inFVres_stack_7->SetBinContent(7,90.45133);
   hNCpi0inFVres_stack_7->SetBinContent(8,90.49185);
   hNCpi0inFVres_stack_7->SetBinContent(9,88.23377);
   hNCpi0inFVres_stack_7->SetBinContent(10,91.71747);
   hNCpi0inFVres_stack_7->SetBinContent(11,92.36965);
   hNCpi0inFVres_stack_7->SetBinContent(12,83.19446);
   hNCpi0inFVres_stack_7->SetBinContent(13,84.09209);
   hNCpi0inFVres_stack_7->SetBinContent(14,79.66477);
   hNCpi0inFVres_stack_7->SetBinContent(15,84.95276);
   hNCpi0inFVres_stack_7->SetBinContent(16,86.02155);
   hNCpi0inFVres_stack_7->SetBinContent(17,82.6066);
   hNCpi0inFVres_stack_7->SetBinContent(18,73.62831);
   hNCpi0inFVres_stack_7->SetBinContent(19,79.05348);
   hNCpi0inFVres_stack_7->SetBinContent(20,80.73728);
   hNCpi0inFVres_stack_7->SetBinContent(21,78.80702);
   hNCpi0inFVres_stack_7->SetBinContent(22,73.15046);
   hNCpi0inFVres_stack_7->SetBinContent(23,59.84407);
   hNCpi0inFVres_stack_7->SetBinContent(24,35.81631);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.67859);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.519562);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7163178);
   hNCpi0inFVres_stack_7->SetBinError(3,1.712402);
   hNCpi0inFVres_stack_7->SetBinError(4,2.455354);
   hNCpi0inFVres_stack_7->SetBinError(5,2.865916);
   hNCpi0inFVres_stack_7->SetBinError(6,2.925104);
   hNCpi0inFVres_stack_7->SetBinError(7,3.105242);
   hNCpi0inFVres_stack_7->SetBinError(8,3.098131);
   hNCpi0inFVres_stack_7->SetBinError(9,3.076058);
   hNCpi0inFVres_stack_7->SetBinError(10,3.133317);
   hNCpi0inFVres_stack_7->SetBinError(11,3.188268);
   hNCpi0inFVres_stack_7->SetBinError(12,2.931584);
   hNCpi0inFVres_stack_7->SetBinError(13,2.949904);
   hNCpi0inFVres_stack_7->SetBinError(14,2.879408);
   hNCpi0inFVres_stack_7->SetBinError(15,3.047994);
   hNCpi0inFVres_stack_7->SetBinError(16,3.076174);
   hNCpi0inFVres_stack_7->SetBinError(17,3.001608);
   hNCpi0inFVres_stack_7->SetBinError(18,2.713074);
   hNCpi0inFVres_stack_7->SetBinError(19,2.936106);
   hNCpi0inFVres_stack_7->SetBinError(20,2.940025);
   hNCpi0inFVres_stack_7->SetBinError(21,2.905457);
   hNCpi0inFVres_stack_7->SetBinError(22,2.846487);
   hNCpi0inFVres_stack_7->SetBinError(23,2.499084);
   hNCpi0inFVres_stack_7->SetBinError(24,2.072381);
   hNCpi0inFVres_stack_7->SetBinError(25,0.852633);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4551821);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.557504);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.948445);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.41614);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.38217);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.45509);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.6934);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.69856);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.38092);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.32637);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.61011);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.77328);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.96908);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.5187);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.4124);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.52825);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.40958);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.25388);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.53522);
   hNCpi0inFVdis_stack_8->SetBinContent(20,17.65281);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.17493);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.7858);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.09305);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.254616);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.69958);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2486359);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6845987);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.224675);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.272166);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.317924);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.398124);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.450209);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.220722);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.271554);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.310792);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.314375);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.353258);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.493402);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.282273);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.389841);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.290518);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.246254);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.315485);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.398357);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.337491);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.07901);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.175955);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9603322);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4086217);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
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
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
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
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(2,2.837462);
   hCCpi0inFV_stack_10->SetBinContent(3,15.08984);
   hCCpi0inFV_stack_10->SetBinContent(4,33.22198);
   hCCpi0inFV_stack_10->SetBinContent(5,35.84902);
   hCCpi0inFV_stack_10->SetBinContent(6,34.27016);
   hCCpi0inFV_stack_10->SetBinContent(7,29.63197);
   hCCpi0inFV_stack_10->SetBinContent(8,35.359);
   hCCpi0inFV_stack_10->SetBinContent(9,34.03734);
   hCCpi0inFV_stack_10->SetBinContent(10,38.4827);
   hCCpi0inFV_stack_10->SetBinContent(11,32.57425);
   hCCpi0inFV_stack_10->SetBinContent(12,34.98207);
   hCCpi0inFV_stack_10->SetBinContent(13,35.06823);
   hCCpi0inFV_stack_10->SetBinContent(14,37.07964);
   hCCpi0inFV_stack_10->SetBinContent(15,34.06242);
   hCCpi0inFV_stack_10->SetBinContent(16,39.23479);
   hCCpi0inFV_stack_10->SetBinContent(17,30.79636);
   hCCpi0inFV_stack_10->SetBinContent(18,36.18291);
   hCCpi0inFV_stack_10->SetBinContent(19,35.78104);
   hCCpi0inFV_stack_10->SetBinContent(20,35.66411);
   hCCpi0inFV_stack_10->SetBinContent(21,33.68924);
   hCCpi0inFV_stack_10->SetBinContent(22,30.47765);
   hCCpi0inFV_stack_10->SetBinContent(23,27.95396);
   hCCpi0inFV_stack_10->SetBinContent(24,19.96358);
   hCCpi0inFV_stack_10->SetBinContent(25,4.064391);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(2,0.8089864);
   hCCpi0inFV_stack_10->SetBinError(3,1.93689);
   hCCpi0inFV_stack_10->SetBinError(4,2.915026);
   hCCpi0inFV_stack_10->SetBinError(5,3.038442);
   hCCpi0inFV_stack_10->SetBinError(6,2.90865);
   hCCpi0inFV_stack_10->SetBinError(7,2.68174);
   hCCpi0inFV_stack_10->SetBinError(8,2.98892);
   hCCpi0inFV_stack_10->SetBinError(9,2.973515);
   hCCpi0inFV_stack_10->SetBinError(10,3.147795);
   hCCpi0inFV_stack_10->SetBinError(11,2.909659);
   hCCpi0inFV_stack_10->SetBinError(12,2.927823);
   hCCpi0inFV_stack_10->SetBinError(13,2.94022);
   hCCpi0inFV_stack_10->SetBinError(14,2.990364);
   hCCpi0inFV_stack_10->SetBinError(15,2.943579);
   hCCpi0inFV_stack_10->SetBinError(16,3.090124);
   hCCpi0inFV_stack_10->SetBinError(17,2.826474);
   hCCpi0inFV_stack_10->SetBinError(18,3.012268);
   hCCpi0inFV_stack_10->SetBinError(19,3.020719);
   hCCpi0inFV_stack_10->SetBinError(20,3.041552);
   hCCpi0inFV_stack_10->SetBinError(21,2.864878);
   hCCpi0inFV_stack_10->SetBinError(22,2.720909);
   hCCpi0inFV_stack_10->SetBinError(23,2.62969);
   hCCpi0inFV_stack_10->SetBinError(24,2.258046);
   hCCpi0inFV_stack_10->SetBinError(25,0.9836632);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,1.073786);
   hNCinFV_stack_11->SetBinContent(3,6.642204);
   hNCinFV_stack_11->SetBinContent(4,11.61879);
   hNCinFV_stack_11->SetBinContent(5,15.00328);
   hNCinFV_stack_11->SetBinContent(6,14.11945);
   hNCinFV_stack_11->SetBinContent(7,16.225);
   hNCinFV_stack_11->SetBinContent(8,13.58763);
   hNCinFV_stack_11->SetBinContent(9,14.16594);
   hNCinFV_stack_11->SetBinContent(10,13.53607);
   hNCinFV_stack_11->SetBinContent(11,18.13781);
   hNCinFV_stack_11->SetBinContent(12,15.91562);
   hNCinFV_stack_11->SetBinContent(13,14.0214);
   hNCinFV_stack_11->SetBinContent(14,16.08214);
   hNCinFV_stack_11->SetBinContent(15,15.14675);
   hNCinFV_stack_11->SetBinContent(16,13.93565);
   hNCinFV_stack_11->SetBinContent(17,15.91562);
   hNCinFV_stack_11->SetBinContent(18,13.09107);
   hNCinFV_stack_11->SetBinContent(19,16.17343);
   hNCinFV_stack_11->SetBinContent(20,14.42774);
   hNCinFV_stack_11->SetBinContent(21,14.45009);
   hNCinFV_stack_11->SetBinContent(22,15.34623);
   hNCinFV_stack_11->SetBinContent(23,12.83278);
   hNCinFV_stack_11->SetBinContent(24,8.252883);
   hNCinFV_stack_11->SetBinContent(25,2.100933);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.5557297);
   hNCinFV_stack_11->SetBinError(3,1.301694);
   hNCinFV_stack_11->SetBinError(4,1.721402);
   hNCinFV_stack_11->SetBinError(5,1.943213);
   hNCinFV_stack_11->SetBinError(6,1.871707);
   hNCinFV_stack_11->SetBinError(7,1.991305);
   hNCinFV_stack_11->SetBinError(8,1.830535);
   hNCinFV_stack_11->SetBinError(9,1.860729);
   hNCinFV_stack_11->SetBinError(10,1.841154);
   hNCinFV_stack_11->SetBinError(11,2.142092);
   hNCinFV_stack_11->SetBinError(12,2.049202);
   hNCinFV_stack_11->SetBinError(13,1.892948);
   hNCinFV_stack_11->SetBinError(14,2.021608);
   hNCinFV_stack_11->SetBinError(15,1.962931);
   hNCinFV_stack_11->SetBinError(16,1.808663);
   hNCinFV_stack_11->SetBinError(17,2.049202);
   hNCinFV_stack_11->SetBinError(18,1.830694);
   hNCinFV_stack_11->SetBinError(19,2.001071);
   hNCinFV_stack_11->SetBinError(20,1.862074);
   hNCinFV_stack_11->SetBinError(21,1.95286);
   hNCinFV_stack_11->SetBinError(22,1.922107);
   hNCinFV_stack_11->SetBinError(23,1.791625);
   hNCinFV_stack_11->SetBinError(24,1.468898);
   hNCinFV_stack_11->SetBinError(25,0.709366);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.5786332);
   hnumuCCinFV_stack_12->SetBinContent(3,5.784162);
   hnumuCCinFV_stack_12->SetBinContent(4,11.08137);
   hnumuCCinFV_stack_12->SetBinContent(5,15.61169);
   hnumuCCinFV_stack_12->SetBinContent(6,13.38677);
   hnumuCCinFV_stack_12->SetBinContent(7,17.8498);
   hnumuCCinFV_stack_12->SetBinContent(8,16.53714);
   hnumuCCinFV_stack_12->SetBinContent(9,13.92936);
   hnumuCCinFV_stack_12->SetBinContent(10,15.47624);
   hnumuCCinFV_stack_12->SetBinContent(11,11.78509);
   hnumuCCinFV_stack_12->SetBinContent(12,16.26283);
   hnumuCCinFV_stack_12->SetBinContent(13,17.91298);
   hnumuCCinFV_stack_12->SetBinContent(14,18.72027);
   hnumuCCinFV_stack_12->SetBinContent(15,15.15027);
   hnumuCCinFV_stack_12->SetBinContent(16,20.18389);
   hnumuCCinFV_stack_12->SetBinContent(17,16.36435);
   hnumuCCinFV_stack_12->SetBinContent(18,16.31385);
   hnumuCCinFV_stack_12->SetBinContent(19,17.32888);
   hnumuCCinFV_stack_12->SetBinContent(20,16.29394);
   hnumuCCinFV_stack_12->SetBinContent(21,18.00276);
   hnumuCCinFV_stack_12->SetBinContent(22,20.23817);
   hnumuCCinFV_stack_12->SetBinContent(23,13.9688);
   hnumuCCinFV_stack_12->SetBinContent(24,11.22006);
   hnumuCCinFV_stack_12->SetBinContent(25,5.114056);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.4154297);
   hnumuCCinFV_stack_12->SetBinError(3,1.263061);
   hnumuCCinFV_stack_12->SetBinError(4,1.739756);
   hnumuCCinFV_stack_12->SetBinError(5,2.591436);
   hnumuCCinFV_stack_12->SetBinError(6,2.186669);
   hnumuCCinFV_stack_12->SetBinError(7,2.409548);
   hnumuCCinFV_stack_12->SetBinError(8,2.355625);
   hnumuCCinFV_stack_12->SetBinError(9,1.92379);
   hnumuCCinFV_stack_12->SetBinError(10,2.044203);
   hnumuCCinFV_stack_12->SetBinError(11,1.788272);
   hnumuCCinFV_stack_12->SetBinError(12,2.202308);
   hnumuCCinFV_stack_12->SetBinError(13,2.203878);
   hnumuCCinFV_stack_12->SetBinError(14,2.505918);
   hnumuCCinFV_stack_12->SetBinError(15,2.064812);
   hnumuCCinFV_stack_12->SetBinError(16,2.493673);
   hnumuCCinFV_stack_12->SetBinError(17,2.838872);
   hnumuCCinFV_stack_12->SetBinError(18,2.142537);
   hnumuCCinFV_stack_12->SetBinError(19,2.154245);
   hnumuCCinFV_stack_12->SetBinError(20,2.728316);
   hnumuCCinFV_stack_12->SetBinError(21,2.476063);
   hnumuCCinFV_stack_12->SetBinError(22,3.371729);
   hnumuCCinFV_stack_12->SetBinError(23,2.002237);
   hnumuCCinFV_stack_12->SetBinError(24,1.732019);
   hnumuCCinFV_stack_12->SetBinError(25,1.39268);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,2.429651);
   hnueCCinFV_stack_13->SetBinContent(5,1.421836);
   hnueCCinFV_stack_13->SetBinContent(6,1.216997);
   hnueCCinFV_stack_13->SetBinContent(7,1.521732);
   hnueCCinFV_stack_13->SetBinContent(8,1.908082);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.830165);
   hnueCCinFV_stack_13->SetBinContent(11,2.15999);
   hnueCCinFV_stack_13->SetBinContent(12,2.139735);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.911281);
   hnueCCinFV_stack_13->SetBinContent(15,1.137455);
   hnueCCinFV_stack_13->SetBinContent(16,4.153312);
   hnueCCinFV_stack_13->SetBinContent(17,0.7582098);
   hnueCCinFV_stack_13->SetBinContent(18,0.9286497);
   hnueCCinFV_stack_13->SetBinContent(19,1.069516);
   hnueCCinFV_stack_13->SetBinContent(20,2.287719);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,2.419914);
   hnueCCinFV_stack_13->SetBinContent(24,1.329913);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,1.339351);
   hnueCCinFV_stack_13->SetBinError(5,0.6880376);
   hnueCCinFV_stack_13->SetBinError(6,0.556978);
   hnueCCinFV_stack_13->SetBinError(7,0.6540357);
   hnueCCinFV_stack_13->SetBinError(8,0.7713218);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.724763);
   hnueCCinFV_stack_13->SetBinError(11,0.7483939);
   hnueCCinFV_stack_13->SetBinError(12,0.9252176);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.7462427);
   hnueCCinFV_stack_13->SetBinError(15,0.7683277);
   hnueCCinFV_stack_13->SetBinError(16,1.416304);
   hnueCCinFV_stack_13->SetBinError(17,0.4509977);
   hnueCCinFV_stack_13->SetBinError(18,0.48078);
   hnueCCinFV_stack_13->SetBinError(19,0.4811441);
   hnueCCinFV_stack_13->SetBinError(20,1.352245);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.9644046);
   hnueCCinFV_stack_13->SetBinError(24,0.8167221);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__11->SetBinContent(0,5.073423);
   hmcerror__11->SetBinContent(1,2.771893);
   hmcerror__11->SetBinContent(2,38.9511);
   hmcerror__11->SetBinContent(3,110.1848);
   hmcerror__11->SetBinContent(4,186.4044);
   hmcerror__11->SetBinContent(5,213.5286);
   hmcerror__11->SetBinContent(6,204.9503);
   hmcerror__11->SetBinContent(7,216.2516);
   hmcerror__11->SetBinContent(8,217.0486);
   hmcerror__11->SetBinContent(9,211.3999);
   hmcerror__11->SetBinContent(10,221.5452);
   hmcerror__11->SetBinContent(11,214.8531);
   hmcerror__11->SetBinContent(12,208.9808);
   hmcerror__11->SetBinContent(13,217.001);
   hmcerror__11->SetBinContent(14,213.2502);
   hmcerror__11->SetBinContent(15,212.0835);
   hmcerror__11->SetBinContent(16,231.1683);
   hmcerror__11->SetBinContent(17,219.8124);
   hmcerror__11->SetBinContent(18,214.0822);
   hmcerror__11->SetBinContent(19,231.1568);
   hmcerror__11->SetBinContent(20,246.134);
   hmcerror__11->SetBinContent(21,248.5632);
   hmcerror__11->SetBinContent(22,258.1367);
   hmcerror__11->SetBinContent(23,224.5228);
   hmcerror__11->SetBinContent(24,184.2673);
   hmcerror__11->SetBinContent(25,76.7433);
   hmcerror__11->SetBinContent(26,4.643096);
   hmcerror__11->SetBinContent(27,3.754537);
   hmcerror__11->SetBinError(0,1.140963);
   hmcerror__11->SetBinError(1,4.605182);
   hmcerror__11->SetBinError(2,22.82197);
   hmcerror__11->SetBinError(3,30.87498);
   hmcerror__11->SetBinError(4,45.32562);
   hmcerror__11->SetBinError(5,55.64209);
   hmcerror__11->SetBinError(6,51.1324);
   hmcerror__11->SetBinError(7,53.82953);
   hmcerror__11->SetBinError(8,53.90038);
   hmcerror__11->SetBinError(9,49.69824);
   hmcerror__11->SetBinError(10,52.80746);
   hmcerror__11->SetBinError(11,51.2612);
   hmcerror__11->SetBinError(12,54.01984);
   hmcerror__11->SetBinError(13,51.30469);
   hmcerror__11->SetBinError(14,54.22229);
   hmcerror__11->SetBinError(15,52.03527);
   hmcerror__11->SetBinError(16,52.53951);
   hmcerror__11->SetBinError(17,49.59673);
   hmcerror__11->SetBinError(18,45.89421);
   hmcerror__11->SetBinError(19,48.94632);
   hmcerror__11->SetBinError(20,50.38581);
   hmcerror__11->SetBinError(21,55.52296);
   hmcerror__11->SetBinError(22,52.87387);
   hmcerror__11->SetBinError(23,45.39733);
   hmcerror__11->SetBinError(24,35.48263);
   hmcerror__11->SetBinError(25,32.3191);
   hmcerror__11->SetBinError(26,5.860496);
   hmcerror__11->SetBinError(27,4.942769);
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
   4,
   28,
   103,
   188,
   209,
   199,
   230,
   223,
   208,
   204,
   219,
   195,
   202,
   191,
   191,
   218,
   196,
   195,
   217,
   219,
   231,
   260,
   220,
   182,
   53,
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
   2.29683,
   5.4358,
   10.14889,
   13.71131,
   14.45683,
   14.10674,
   15.16575,
   14.93318,
   14.42221,
   14.28286,
   14.79865,
   13.96424,
   14.21267,
   13.82027,
   13.82027,
   14.76482,
   14,
   13.96424,
   14.73092,
   14.79865,
   15.19868,
   16.12452,
   14.8324,
   13.49074,
   7.4105,
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
   1.98186,
   5.2271,
   10.14889,
   13.71131,
   14.45683,
   14.10674,
   15.16575,
   14.93318,
   14.42221,
   14.28286,
   14.79865,
   13.96424,
   14.21267,
   13.82027,
   13.82027,
   14.76482,
   14,
   13.96424,
   14.73092,
   14.79865,
   15.19868,
   16.12452,
   14.8324,
   13.49074,
   7.2068,
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
   Graph_Graph3013->SetMaximum(303.737);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4587.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 62.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 584.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1691.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  341.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 726.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.4","F");

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
   1.661385,
   0.5859134,
   0.2802109,
   0.2431575,
   0.2605838,
   0.2494868,
   0.2489209,
   0.2483332,
   0.2350911,
   0.2383598,
   0.2385872,
   0.2584919,
   0.236426,
   0.254266,
   0.2453527,
   0.2272781,
   0.225632,
   0.2143766,
   0.2117451,
   0.2047088,
   0.2233757,
   0.204829,
   0.2021948,
   0.1925607,
   0.4211326,
   1.262196};
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
   1.661385,
   0.5859134,
   0.2802109,
   0.2431575,
   0.2605838,
   0.2494868,
   0.2489209,
   0.2483332,
   0.2350911,
   0.2383598,
   0.2385872,
   0.2584919,
   0.236426,
   0.254266,
   0.2453527,
   0.2272781,
   0.225632,
   0.2143766,
   0.2117451,
   0.2047088,
   0.2233757,
   0.204829,
   0.2021948,
   0.1925607,
   0.4211326,
   1.262196};
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
   0.4232174,
   0.2202658,
   0.2127159,
   0.2070697,
   0.1996285,
   0.2180417,
   0.2165904,
   0.2159252,
   0.197839,
   0.2073257,
   0.2142701,
   0.2068792,
   0.1947408,
   0.2012653,
   0.1920323,
   0.192037,
   0.1944228,
   0.1859065,
   0.1831367,
   0.177523,
   0.1755105,
   0.1707065,
   0.1630195,
   0.1549138,
   0.1882409,
   0.3515573};
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
   0.4232174,
   0.2202658,
   0.2127159,
   0.2070697,
   0.1996285,
   0.2180417,
   0.2165904,
   0.2159252,
   0.197839,
   0.2073257,
   0.2142701,
   0.2068792,
   0.1947408,
   0.2012653,
   0.1920323,
   0.192037,
   0.1944228,
   0.1859065,
   0.1831367,
   0.177523,
   0.1755105,
   0.1707065,
   0.1630195,
   0.1549138,
   0.1882409,
   0.3515573};
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
   1.443057,
   0.7188501,
   0.9347932,
   1.00856,
   0.9787915,
   0.970967,
   1.063576,
   1.027419,
   0.9839173,
   0.9208053,
   1.019301,
   0.9331002,
   0.9308713,
   0.8956613,
   0.9005886,
   0.9430358,
   0.8916693,
   0.910865,
   0.9387567,
   0.8897591,
   0.9293412,
   1.007218,
   0.9798561,
   0.9876957,
   0.690614,
   0.430747};
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
   0.8286143,
   0.1395545,
   0.09210791,
   0.07355679,
   0.06770442,
   0.06883003,
   0.07013013,
   0.0688011,
   0.06822239,
   0.06446927,
   0.06887797,
   0.06682069,
   0.06549587,
   0.06480778,
   0.0651643,
   0.06387044,
   0.06369066,
   0.06522839,
   0.06372696,
   0.06012435,
   0.06114616,
   0.06246504,
   0.06606188,
   0.07321288,
   0.09656217,
   0.430747};
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
   0.7149844,
   0.1341965,
   0.09210791,
   0.07355679,
   0.06770442,
   0.06883003,
   0.07013013,
   0.0688011,
   0.06822239,
   0.06446927,
   0.06887797,
   0.06682069,
   0.06549587,
   0.06480778,
   0.0651643,
   0.06387044,
   0.06369066,
   0.06522839,
   0.06372696,
   0.06012435,
   0.06114616,
   0.06246504,
   0.06606188,
   0.07321288,
   0.09390787,
   0.327189};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-156,156);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.373846);
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
