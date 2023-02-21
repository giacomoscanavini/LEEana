#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Oct 21 23:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-40,-3.7,293.3333,409.1421);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__10->SetBinContent(0,9.831333);
   hmc__10->SetBinContent(1,92.89423);
   hmc__10->SetBinContent(2,132.1556);
   hmc__10->SetBinContent(3,151.9877);
   hmc__10->SetBinContent(4,146.0942);
   hmc__10->SetBinContent(5,142.3815);
   hmc__10->SetBinContent(6,154.6834);
   hmc__10->SetBinContent(7,137.7144);
   hmc__10->SetBinContent(8,147.3146);
   hmc__10->SetBinContent(9,149.4623);
   hmc__10->SetBinContent(10,151.6);
   hmc__10->SetBinContent(11,139.2356);
   hmc__10->SetBinContent(12,143.1019);
   hmc__10->SetBinContent(13,137.4488);
   hmc__10->SetBinContent(14,145.2753);
   hmc__10->SetBinContent(15,149.4271);
   hmc__10->SetBinContent(16,145.3141);
   hmc__10->SetBinContent(17,157.1323);
   hmc__10->SetBinContent(18,154.7176);
   hmc__10->SetBinContent(19,137.9184);
   hmc__10->SetBinContent(20,161.0615);
   hmc__10->SetBinContent(21,153.9121);
   hmc__10->SetBinContent(22,162.3937);
   hmc__10->SetBinContent(23,159.6306);
   hmc__10->SetBinContent(24,161.5934);
   hmc__10->SetBinContent(25,136.9523);
   hmc__10->SetBinContent(26,61.915);
   hmc__10->SetBinContent(27,6.311509);
   hmc__10->SetBinError(0,1.569373);
   hmc__10->SetBinError(1,26.48);
   hmc__10->SetBinError(2,35.05979);
   hmc__10->SetBinError(3,41.5921);
   hmc__10->SetBinError(4,39.80041);
   hmc__10->SetBinError(5,40.29546);
   hmc__10->SetBinError(6,39.14744);
   hmc__10->SetBinError(7,37.79738);
   hmc__10->SetBinError(8,38.65415);
   hmc__10->SetBinError(9,45.24064);
   hmc__10->SetBinError(10,39.56206);
   hmc__10->SetBinError(11,35.27552);
   hmc__10->SetBinError(12,36.22838);
   hmc__10->SetBinError(13,33.75614);
   hmc__10->SetBinError(14,39.2613);
   hmc__10->SetBinError(15,36.30766);
   hmc__10->SetBinError(16,37.76745);
   hmc__10->SetBinError(17,38.45978);
   hmc__10->SetBinError(18,44.81711);
   hmc__10->SetBinError(19,40.11525);
   hmc__10->SetBinError(20,38.07715);
   hmc__10->SetBinError(21,38.19778);
   hmc__10->SetBinError(22,38.18746);
   hmc__10->SetBinError(23,49.08668);
   hmc__10->SetBinError(24,38.87504);
   hmc__10->SetBinError(25,41.96807);
   hmc__10->SetBinError(26,25.51666);
   hmc__10->SetBinError(27,5.287644);
   hmc__10->SetMinimum(-3.7);
   hmc__10->SetMaximum(388.5);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",26,0,260);
   hs4_stack_4->SetMinimum(-1.398517e-09);
   hs4_stack_4->SetMaximum(170.5134);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,3.718874);
   hbadmatch_stack_1->SetBinContent(2,2.449351);
   hbadmatch_stack_1->SetBinContent(3,1.629404);
   hbadmatch_stack_1->SetBinContent(4,2.011444);
   hbadmatch_stack_1->SetBinContent(5,1.594307);
   hbadmatch_stack_1->SetBinContent(6,3.302974);
   hbadmatch_stack_1->SetBinContent(7,2.640924);
   hbadmatch_stack_1->SetBinContent(8,2.923492);
   hbadmatch_stack_1->SetBinContent(9,2.189778);
   hbadmatch_stack_1->SetBinContent(10,4.990726);
   hbadmatch_stack_1->SetBinContent(11,3.149652);
   hbadmatch_stack_1->SetBinContent(12,4.189095);
   hbadmatch_stack_1->SetBinContent(13,2.285801);
   hbadmatch_stack_1->SetBinContent(14,4.487926);
   hbadmatch_stack_1->SetBinContent(15,3.054585);
   hbadmatch_stack_1->SetBinContent(16,5.728582);
   hbadmatch_stack_1->SetBinContent(17,3.816987);
   hbadmatch_stack_1->SetBinContent(18,4.575125);
   hbadmatch_stack_1->SetBinContent(19,6.165723);
   hbadmatch_stack_1->SetBinContent(20,5.154083);
   hbadmatch_stack_1->SetBinContent(21,5.030998);
   hbadmatch_stack_1->SetBinContent(22,3.774719);
   hbadmatch_stack_1->SetBinContent(23,5.082784);
   hbadmatch_stack_1->SetBinContent(24,4.900937);
   hbadmatch_stack_1->SetBinContent(25,5.325592);
   hbadmatch_stack_1->SetBinContent(26,3.214708);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.854644);
   hbadmatch_stack_1->SetBinError(2,0.7989141);
   hbadmatch_stack_1->SetBinError(3,0.6460282);
   hbadmatch_stack_1->SetBinError(4,0.7390221);
   hbadmatch_stack_1->SetBinError(5,0.5940914);
   hbadmatch_stack_1->SetBinError(6,0.9942264);
   hbadmatch_stack_1->SetBinError(7,0.786845);
   hbadmatch_stack_1->SetBinError(8,0.7823691);
   hbadmatch_stack_1->SetBinError(9,0.7052052);
   hbadmatch_stack_1->SetBinError(10,1.890692);
   hbadmatch_stack_1->SetBinError(11,0.9424265);
   hbadmatch_stack_1->SetBinError(12,1.242604);
   hbadmatch_stack_1->SetBinError(13,0.7955648);
   hbadmatch_stack_1->SetBinError(14,1.244306);
   hbadmatch_stack_1->SetBinError(15,0.8855958);
   hbadmatch_stack_1->SetBinError(16,1.304123);
   hbadmatch_stack_1->SetBinError(17,0.9793365);
   hbadmatch_stack_1->SetBinError(18,1.142259);
   hbadmatch_stack_1->SetBinError(19,1.578015);
   hbadmatch_stack_1->SetBinError(20,1.253796);
   hbadmatch_stack_1->SetBinError(21,1.291285);
   hbadmatch_stack_1->SetBinError(22,0.9974235);
   hbadmatch_stack_1->SetBinError(23,1.252624);
   hbadmatch_stack_1->SetBinError(24,1.381345);
   hbadmatch_stack_1->SetBinError(25,1.235153);
   hbadmatch_stack_1->SetBinError(26,1.010957);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,11.40184);
   hext_stack_2->SetBinContent(2,15.6306);
   hext_stack_2->SetBinContent(3,19.97349);
   hext_stack_2->SetBinContent(4,17.25699);
   hext_stack_2->SetBinContent(5,16.526);
   hext_stack_2->SetBinContent(6,22.37555);
   hext_stack_2->SetBinContent(7,14.16142);
   hext_stack_2->SetBinContent(8,14.48305);
   hext_stack_2->SetBinContent(9,11.49841);
   hext_stack_2->SetBinContent(10,21.10391);
   hext_stack_2->SetBinContent(11,18.58929);
   hext_stack_2->SetBinContent(12,17.24981);
   hext_stack_2->SetBinContent(13,18.18987);
   hext_stack_2->SetBinContent(14,16.18724);
   hext_stack_2->SetBinContent(15,23.41217);
   hext_stack_2->SetBinContent(16,16.8548);
   hext_stack_2->SetBinContent(17,22.26582);
   hext_stack_2->SetBinContent(18,19.08092);
   hext_stack_2->SetBinContent(19,10.37517);
   hext_stack_2->SetBinContent(20,27.90788);
   hext_stack_2->SetBinContent(21,16.45539);
   hext_stack_2->SetBinContent(22,24.50069);
   hext_stack_2->SetBinContent(23,24.70699);
   hext_stack_2->SetBinContent(24,25.95992);
   hext_stack_2->SetBinContent(25,25.05733);
   hext_stack_2->SetBinContent(26,4.460999);
   hext_stack_2->SetBinContent(27,1.048213);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,2.284889);
   hext_stack_2->SetBinError(2,2.553953);
   hext_stack_2->SetBinError(3,3.058304);
   hext_stack_2->SetBinError(4,2.680293);
   hext_stack_2->SetBinError(5,2.629337);
   hext_stack_2->SetBinError(6,3.298442);
   hext_stack_2->SetBinError(7,2.486517);
   hext_stack_2->SetBinError(8,2.573776);
   hext_stack_2->SetBinError(9,2.208711);
   hext_stack_2->SetBinError(10,3.160744);
   hext_stack_2->SetBinError(11,2.955855);
   hext_stack_2->SetBinError(12,2.717567);
   hext_stack_2->SetBinError(13,2.893191);
   hext_stack_2->SetBinError(14,2.685253);
   hext_stack_2->SetBinError(15,3.394524);
   hext_stack_2->SetBinError(16,2.674653);
   hext_stack_2->SetBinError(17,3.079977);
   hext_stack_2->SetBinError(18,2.701065);
   hext_stack_2->SetBinError(19,2.010006);
   hext_stack_2->SetBinError(20,3.813082);
   hext_stack_2->SetBinError(21,2.605234);
   hext_stack_2->SetBinError(22,3.350955);
   hext_stack_2->SetBinError(23,3.50429);
   hext_stack_2->SetBinError(24,3.479416);
   hext_stack_2->SetBinError(25,3.452072);
   hext_stack_2->SetBinError(26,1.372818);
   hext_stack_2->SetBinError(27,0.7595995);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,0.7222204);
   hdirt_stack_3->SetBinContent(2,3.593365);
   hdirt_stack_3->SetBinContent(3,3.457387);
   hdirt_stack_3->SetBinContent(4,2.636689);
   hdirt_stack_3->SetBinContent(5,1.831413);
   hdirt_stack_3->SetBinContent(6,1.128149);
   hdirt_stack_3->SetBinContent(7,1.540917);
   hdirt_stack_3->SetBinContent(8,2.033505);
   hdirt_stack_3->SetBinContent(9,2.020534);
   hdirt_stack_3->SetBinContent(10,0.9508715);
   hdirt_stack_3->SetBinContent(11,1.973687);
   hdirt_stack_3->SetBinContent(12,0.8329533);
   hdirt_stack_3->SetBinContent(13,0.8588142);
   hdirt_stack_3->SetBinContent(14,1.728496);
   hdirt_stack_3->SetBinContent(15,1.209201);
   hdirt_stack_3->SetBinContent(16,1.309318);
   hdirt_stack_3->SetBinContent(17,1.21401);
   hdirt_stack_3->SetBinContent(18,2.731592);
   hdirt_stack_3->SetBinContent(19,1.717339);
   hdirt_stack_3->SetBinContent(20,2.36631);
   hdirt_stack_3->SetBinContent(21,5.384501);
   hdirt_stack_3->SetBinContent(22,3.12098);
   hdirt_stack_3->SetBinContent(23,2.791875);
   hdirt_stack_3->SetBinContent(24,3.691761);
   hdirt_stack_3->SetBinContent(25,3.436958);
   hdirt_stack_3->SetBinContent(26,2.213138);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4476483);
   hdirt_stack_3->SetBinError(2,1.011479);
   hdirt_stack_3->SetBinError(3,0.9715223);
   hdirt_stack_3->SetBinError(4,0.7406352);
   hdirt_stack_3->SetBinError(5,0.7169917);
   hdirt_stack_3->SetBinError(6,0.4372061);
   hdirt_stack_3->SetBinError(7,0.6207914);
   hdirt_stack_3->SetBinError(8,0.7135506);
   hdirt_stack_3->SetBinError(9,0.7068368);
   hdirt_stack_3->SetBinError(10,0.5633431);
   hdirt_stack_3->SetBinError(11,1.19985);
   hdirt_stack_3->SetBinError(12,0.3836916);
   hdirt_stack_3->SetBinError(13,0.4562172);
   hdirt_stack_3->SetBinError(14,0.6907024);
   hdirt_stack_3->SetBinError(15,0.5724416);
   hdirt_stack_3->SetBinError(16,0.5433406);
   hdirt_stack_3->SetBinError(17,0.4736118);
   hdirt_stack_3->SetBinError(18,0.9045826);
   hdirt_stack_3->SetBinError(19,0.7428089);
   hdirt_stack_3->SetBinError(20,0.7685293);
   hdirt_stack_3->SetBinError(21,1.570705);
   hdirt_stack_3->SetBinError(22,0.9640038);
   hdirt_stack_3->SetBinError(23,0.8421948);
   hdirt_stack_3->SetBinError(24,0.9741151);
   hdirt_stack_3->SetBinError(25,1.033214);
   hdirt_stack_3->SetBinError(26,0.792795);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,7.150564);
   houtFV_stack_4->SetBinContent(1,45.75193);
   houtFV_stack_4->SetBinContent(2,25.70284);
   houtFV_stack_4->SetBinContent(3,25.35088);
   houtFV_stack_4->SetBinContent(4,18.57121);
   houtFV_stack_4->SetBinContent(5,14.83795);
   houtFV_stack_4->SetBinContent(6,14.67096);
   houtFV_stack_4->SetBinContent(7,13.82459);
   houtFV_stack_4->SetBinContent(8,14.64608);
   houtFV_stack_4->SetBinContent(9,12.90883);
   houtFV_stack_4->SetBinContent(10,10.67459);
   houtFV_stack_4->SetBinContent(11,10.93016);
   houtFV_stack_4->SetBinContent(12,13.05515);
   houtFV_stack_4->SetBinContent(13,12.79132);
   houtFV_stack_4->SetBinContent(14,11.4271);
   houtFV_stack_4->SetBinContent(15,11.28632);
   houtFV_stack_4->SetBinContent(16,9.437191);
   houtFV_stack_4->SetBinContent(17,13.2347);
   houtFV_stack_4->SetBinContent(18,14.94369);
   houtFV_stack_4->SetBinContent(19,12.4693);
   houtFV_stack_4->SetBinContent(20,16.75637);
   houtFV_stack_4->SetBinContent(21,15.24089);
   houtFV_stack_4->SetBinContent(22,20.7329);
   houtFV_stack_4->SetBinContent(23,25.75328);
   houtFV_stack_4->SetBinContent(24,27.75236);
   houtFV_stack_4->SetBinContent(25,26.89011);
   houtFV_stack_4->SetBinContent(26,26.15449);
   houtFV_stack_4->SetBinContent(27,3.796622);
   houtFV_stack_4->SetBinError(0,1.337629);
   houtFV_stack_4->SetBinError(1,3.438886);
   houtFV_stack_4->SetBinError(2,2.540995);
   houtFV_stack_4->SetBinError(3,2.575122);
   houtFV_stack_4->SetBinError(4,2.116936);
   houtFV_stack_4->SetBinError(5,1.863386);
   houtFV_stack_4->SetBinError(6,1.951221);
   houtFV_stack_4->SetBinError(7,1.814899);
   houtFV_stack_4->SetBinError(8,2.105309);
   houtFV_stack_4->SetBinError(9,1.851144);
   houtFV_stack_4->SetBinError(10,1.618877);
   houtFV_stack_4->SetBinError(11,1.657317);
   houtFV_stack_4->SetBinError(12,1.782294);
   houtFV_stack_4->SetBinError(13,1.789811);
   houtFV_stack_4->SetBinError(14,1.636095);
   houtFV_stack_4->SetBinError(15,1.670624);
   houtFV_stack_4->SetBinError(16,1.482205);
   houtFV_stack_4->SetBinError(17,1.852507);
   houtFV_stack_4->SetBinError(18,1.993267);
   houtFV_stack_4->SetBinError(19,1.675716);
   houtFV_stack_4->SetBinError(20,2.189067);
   houtFV_stack_4->SetBinError(21,1.987516);
   houtFV_stack_4->SetBinError(22,2.337049);
   houtFV_stack_4->SetBinError(23,2.818603);
   houtFV_stack_4->SetBinError(24,2.593644);
   houtFV_stack_4->SetBinError(25,2.579093);
   houtFV_stack_4->SetBinError(26,2.491625);
   houtFV_stack_4->SetBinError(27,0.9780316);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.430981);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.288095);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.594906);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.359331);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.03607);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.535786);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.480801);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.585858);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.039221);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.649614);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.529384);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.339417);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.513428);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.36206);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.748468);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.305541);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.08218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.999718);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.889001);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.713102);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.244852);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.720402);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.828269);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.324189);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.888017);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5009822);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05216376);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.409381);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.861857);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7567393);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5922531);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6909452);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8795715);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5601722);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6789719);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7150659);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.756836);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9254796);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7540041);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.060017);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8572859);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7045723);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.767662);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.8263734);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.022251);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9046056);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.779075);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.643667);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7560788);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7780221);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.9437754);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6095149);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2836415);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03698734);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1684876);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06498046);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6952194);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7494357);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5180497);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2262693);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4512879);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.173376);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4541193);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1182519);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2194257);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5071623);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1945562);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.131122);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.364798);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1800347);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3171044);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1071548);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2734843);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2361552);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3798632);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4214975);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.07693276);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07232625);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04627183);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3881751);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3272667);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.261974);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1486081);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.233648);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05891482);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1686395);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07477932);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.09615666);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1772168);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09703775);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07005889);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1360834);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1144993);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1444717);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04722771);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.138747);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1144326);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1101458);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2424572);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04417678);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.5715572);
   hNCpi0inFVres_stack_7->SetBinContent(1,10.58709);
   hNCpi0inFVres_stack_7->SetBinContent(2,34.2381);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.24653);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.77249);
   hNCpi0inFVres_stack_7->SetBinContent(5,49.68729);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.29945);
   hNCpi0inFVres_stack_7->SetBinContent(7,53.36594);
   hNCpi0inFVres_stack_7->SetBinContent(8,51.48717);
   hNCpi0inFVres_stack_7->SetBinContent(9,58.70459);
   hNCpi0inFVres_stack_7->SetBinContent(10,49.55768);
   hNCpi0inFVres_stack_7->SetBinContent(11,51.14162);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.61794);
   hNCpi0inFVres_stack_7->SetBinContent(13,46.98368);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.9549);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.88655);
   hNCpi0inFVres_stack_7->SetBinContent(16,53.37643);
   hNCpi0inFVres_stack_7->SetBinContent(17,49.00737);
   hNCpi0inFVres_stack_7->SetBinContent(18,49.98022);
   hNCpi0inFVres_stack_7->SetBinContent(19,49.11494);
   hNCpi0inFVres_stack_7->SetBinContent(20,44.35513);
   hNCpi0inFVres_stack_7->SetBinContent(21,47.18724);
   hNCpi0inFVres_stack_7->SetBinContent(22,47.32442);
   hNCpi0inFVres_stack_7->SetBinContent(23,41.90723);
   hNCpi0inFVres_stack_7->SetBinContent(24,35.60954);
   hNCpi0inFVres_stack_7->SetBinContent(25,25.452);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.687686);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3901839);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2402144);
   hNCpi0inFVres_stack_7->SetBinError(1,1.073809);
   hNCpi0inFVres_stack_7->SetBinError(2,1.983719);
   hNCpi0inFVres_stack_7->SetBinError(3,2.147494);
   hNCpi0inFVres_stack_7->SetBinError(4,2.486847);
   hNCpi0inFVres_stack_7->SetBinError(5,2.374006);
   hNCpi0inFVres_stack_7->SetBinError(6,2.511254);
   hNCpi0inFVres_stack_7->SetBinError(7,2.561208);
   hNCpi0inFVres_stack_7->SetBinError(8,2.354435);
   hNCpi0inFVres_stack_7->SetBinError(9,2.850249);
   hNCpi0inFVres_stack_7->SetBinError(10,2.441347);
   hNCpi0inFVres_stack_7->SetBinError(11,2.401928);
   hNCpi0inFVres_stack_7->SetBinError(12,2.434186);
   hNCpi0inFVres_stack_7->SetBinError(13,2.209327);
   hNCpi0inFVres_stack_7->SetBinError(14,2.46468);
   hNCpi0inFVres_stack_7->SetBinError(15,2.50974);
   hNCpi0inFVres_stack_7->SetBinError(16,2.678748);
   hNCpi0inFVres_stack_7->SetBinError(17,2.385843);
   hNCpi0inFVres_stack_7->SetBinError(18,2.469884);
   hNCpi0inFVres_stack_7->SetBinError(19,2.439173);
   hNCpi0inFVres_stack_7->SetBinError(20,2.255397);
   hNCpi0inFVres_stack_7->SetBinError(21,2.297725);
   hNCpi0inFVres_stack_7->SetBinError(22,2.454193);
   hNCpi0inFVres_stack_7->SetBinError(23,2.269274);
   hNCpi0inFVres_stack_7->SetBinError(24,1.87579);
   hNCpi0inFVres_stack_7->SetBinError(25,1.723101);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7870914);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1118243);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2958449);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.443068);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.031427);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.099316);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.58946);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.823412);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.11533);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.453704);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.93995);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.94999);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.35652);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.621151);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.876029);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.80627);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.434105);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.37553);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.248152);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.80757);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.62397);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.612418);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.372002);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.52444);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.7761);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.410645);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.63497);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.231003);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.226428);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1509363);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2958449);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6619424);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.916193);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9126314);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.199367);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.187355);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.359195);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.039063);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.136479);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.179412);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.007695);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.075943);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.059639);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.125852);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.087923);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.209909);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.051505);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.16006);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.123475);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.013665);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.061318);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.342739);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.069528);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.040288);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.060448);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6808988);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2771251);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1065622);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1040807);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07538465);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1290437);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,9.66962);
   hCCpi0inFV_stack_10->SetBinContent(2,20.97805);
   hCCpi0inFV_stack_10->SetBinContent(3,25.93894);
   hCCpi0inFV_stack_10->SetBinContent(4,21.67945);
   hCCpi0inFV_stack_10->SetBinContent(5,24.56775);
   hCCpi0inFV_stack_10->SetBinContent(6,22.67109);
   hCCpi0inFV_stack_10->SetBinContent(7,22.02372);
   hCCpi0inFV_stack_10->SetBinContent(8,23.36291);
   hCCpi0inFV_stack_10->SetBinContent(9,27.64582);
   hCCpi0inFV_stack_10->SetBinContent(10,26.03362);
   hCCpi0inFV_stack_10->SetBinContent(11,18.14902);
   hCCpi0inFV_stack_10->SetBinContent(12,23.04696);
   hCCpi0inFV_stack_10->SetBinContent(13,18.83217);
   hCCpi0inFV_stack_10->SetBinContent(14,24.76159);
   hCCpi0inFV_stack_10->SetBinContent(15,23.97036);
   hCCpi0inFV_stack_10->SetBinContent(16,19.9234);
   hCCpi0inFV_stack_10->SetBinContent(17,25.31658);
   hCCpi0inFV_stack_10->SetBinContent(18,24.32935);
   hCCpi0inFV_stack_10->SetBinContent(19,20.70975);
   hCCpi0inFV_stack_10->SetBinContent(20,25.8584);
   hCCpi0inFV_stack_10->SetBinContent(21,22.4957);
   hCCpi0inFV_stack_10->SetBinContent(22,24.72449);
   hCCpi0inFV_stack_10->SetBinContent(23,21.09182);
   hCCpi0inFV_stack_10->SetBinContent(24,29.99253);
   hCCpi0inFV_stack_10->SetBinContent(25,22.50891);
   hCCpi0inFV_stack_10->SetBinContent(26,7.965763);
   hCCpi0inFV_stack_10->SetBinContent(27,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.544317);
   hCCpi0inFV_stack_10->SetBinError(2,2.246266);
   hCCpi0inFV_stack_10->SetBinError(3,2.589433);
   hCCpi0inFV_stack_10->SetBinError(4,2.317502);
   hCCpi0inFV_stack_10->SetBinError(5,2.482333);
   hCCpi0inFV_stack_10->SetBinError(6,2.412391);
   hCCpi0inFV_stack_10->SetBinError(7,2.324631);
   hCCpi0inFV_stack_10->SetBinError(8,2.473287);
   hCCpi0inFV_stack_10->SetBinError(9,2.647759);
   hCCpi0inFV_stack_10->SetBinError(10,2.573689);
   hCCpi0inFV_stack_10->SetBinError(11,2.115504);
   hCCpi0inFV_stack_10->SetBinError(12,2.43954);
   hCCpi0inFV_stack_10->SetBinError(13,2.104449);
   hCCpi0inFV_stack_10->SetBinError(14,2.489797);
   hCCpi0inFV_stack_10->SetBinError(15,2.48602);
   hCCpi0inFV_stack_10->SetBinError(16,2.223617);
   hCCpi0inFV_stack_10->SetBinError(17,2.52686);
   hCCpi0inFV_stack_10->SetBinError(18,2.458444);
   hCCpi0inFV_stack_10->SetBinError(19,2.27167);
   hCCpi0inFV_stack_10->SetBinError(20,2.586505);
   hCCpi0inFV_stack_10->SetBinError(21,2.354884);
   hCCpi0inFV_stack_10->SetBinError(22,2.475014);
   hCCpi0inFV_stack_10->SetBinError(23,2.243542);
   hCCpi0inFV_stack_10->SetBinError(24,2.758942);
   hCCpi0inFV_stack_10->SetBinError(25,2.413276);
   hCCpi0inFV_stack_10->SetBinError(26,1.437572);
   hCCpi0inFV_stack_10->SetBinError(27,0.3401776);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1298672);
   hNCinFV_stack_11->SetBinContent(1,2.657548);
   hNCinFV_stack_11->SetBinContent(2,9.499839);
   hNCinFV_stack_11->SetBinContent(3,9.447764);
   hNCinFV_stack_11->SetBinContent(4,10.04055);
   hNCinFV_stack_11->SetBinContent(5,8.216869);
   hNCinFV_stack_11->SetBinContent(6,9.382225);
   hNCinFV_stack_11->SetBinContent(7,8.770744);
   hNCinFV_stack_11->SetBinContent(8,11.7059);
   hNCinFV_stack_11->SetBinContent(9,10.71316);
   hNCinFV_stack_11->SetBinContent(10,11.35481);
   hNCinFV_stack_11->SetBinContent(11,11.41302);
   hNCinFV_stack_11->SetBinContent(12,8.174557);
   hNCinFV_stack_11->SetBinContent(13,8.073601);
   hNCinFV_stack_11->SetBinContent(14,7.589107);
   hNCinFV_stack_11->SetBinContent(15,8.033689);
   hNCinFV_stack_11->SetBinContent(16,11.69304);
   hNCinFV_stack_11->SetBinContent(17,9.858216);
   hNCinFV_stack_11->SetBinContent(18,9.598916);
   hNCinFV_stack_11->SetBinContent(19,10.76939);
   hNCinFV_stack_11->SetBinContent(20,10.2353);
   hNCinFV_stack_11->SetBinContent(21,9.308587);
   hNCinFV_stack_11->SetBinContent(22,7.61299);
   hNCinFV_stack_11->SetBinContent(23,8.306907);
   hNCinFV_stack_11->SetBinContent(24,9.20491);
   hNCinFV_stack_11->SetBinContent(25,8.00089);
   hNCinFV_stack_11->SetBinContent(26,1.838339);
   hNCinFV_stack_11->SetBinContent(27,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1298672);
   hNCinFV_stack_11->SetBinError(1,0.7817073);
   hNCinFV_stack_11->SetBinError(2,1.690215);
   hNCinFV_stack_11->SetBinError(3,1.519295);
   hNCinFV_stack_11->SetBinError(4,1.688569);
   hNCinFV_stack_11->SetBinError(5,1.360121);
   hNCinFV_stack_11->SetBinError(6,1.777382);
   hNCinFV_stack_11->SetBinError(7,1.594621);
   hNCinFV_stack_11->SetBinError(8,1.789605);
   hNCinFV_stack_11->SetBinError(9,1.943999);
   hNCinFV_stack_11->SetBinError(10,1.814254);
   hNCinFV_stack_11->SetBinError(11,1.809444);
   hNCinFV_stack_11->SetBinError(12,1.469769);
   hNCinFV_stack_11->SetBinError(13,1.555535);
   hNCinFV_stack_11->SetBinError(14,1.320998);
   hNCinFV_stack_11->SetBinError(15,1.423631);
   hNCinFV_stack_11->SetBinError(16,1.854571);
   hNCinFV_stack_11->SetBinError(17,1.56232);
   hNCinFV_stack_11->SetBinError(18,1.882479);
   hNCinFV_stack_11->SetBinError(19,1.752277);
   hNCinFV_stack_11->SetBinError(20,1.511692);
   hNCinFV_stack_11->SetBinError(21,1.578211);
   hNCinFV_stack_11->SetBinError(22,1.701443);
   hNCinFV_stack_11->SetBinError(23,1.527971);
   hNCinFV_stack_11->SetBinError(24,1.458601);
   hNCinFV_stack_11->SetBinError(25,1.480934);
   hNCinFV_stack_11->SetBinError(26,0.6746929);
   hNCinFV_stack_11->SetBinError(27,0.1950249);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,3.511059);
   hnumuCCinFV_stack_12->SetBinContent(2,8.151841);
   hnumuCCinFV_stack_12->SetBinContent(3,11.31023);
   hnumuCCinFV_stack_12->SetBinContent(4,6.670415);
   hnumuCCinFV_stack_12->SetBinContent(5,9.905165);
   hnumuCCinFV_stack_12->SetBinContent(6,8.916945);
   hnumuCCinFV_stack_12->SetBinContent(7,7.043115);
   hnumuCCinFV_stack_12->SetBinContent(8,8.907808);
   hnumuCCinFV_stack_12->SetBinContent(9,5.523412);
   hnumuCCinFV_stack_12->SetBinContent(10,11.28083);
   hnumuCCinFV_stack_12->SetBinContent(11,8.835199);
   hnumuCCinFV_stack_12->SetBinContent(12,11.08805);
   hnumuCCinFV_stack_12->SetBinContent(13,8.566801);
   hnumuCCinFV_stack_12->SetBinContent(14,11.30809);
   hnumuCCinFV_stack_12->SetBinContent(15,10.28618);
   hnumuCCinFV_stack_12->SetBinContent(16,12.22054);
   hnumuCCinFV_stack_12->SetBinContent(17,13.32113);
   hnumuCCinFV_stack_12->SetBinContent(18,11.36384);
   hnumuCCinFV_stack_12->SetBinContent(19,11.92162);
   hnumuCCinFV_stack_12->SetBinContent(20,11.69755);
   hnumuCCinFV_stack_12->SetBinContent(21,14.45768);
   hnumuCCinFV_stack_12->SetBinContent(22,14.80659);
   hnumuCCinFV_stack_12->SetBinContent(23,16.9375);
   hnumuCCinFV_stack_12->SetBinContent(24,10.02218);
   hnumuCCinFV_stack_12->SetBinContent(25,11.47878);
   hnumuCCinFV_stack_12->SetBinContent(26,7.523431);
   hnumuCCinFV_stack_12->SetBinError(1,0.9398147);
   hnumuCCinFV_stack_12->SetBinError(2,1.440916);
   hnumuCCinFV_stack_12->SetBinError(3,2.220816);
   hnumuCCinFV_stack_12->SetBinError(4,1.416759);
   hnumuCCinFV_stack_12->SetBinError(5,1.669028);
   hnumuCCinFV_stack_12->SetBinError(6,1.539894);
   hnumuCCinFV_stack_12->SetBinError(7,1.474344);
   hnumuCCinFV_stack_12->SetBinError(8,1.683914);
   hnumuCCinFV_stack_12->SetBinError(9,1.16262);
   hnumuCCinFV_stack_12->SetBinError(10,1.730924);
   hnumuCCinFV_stack_12->SetBinError(11,1.529716);
   hnumuCCinFV_stack_12->SetBinError(12,2.199375);
   hnumuCCinFV_stack_12->SetBinError(13,1.674491);
   hnumuCCinFV_stack_12->SetBinError(14,1.835107);
   hnumuCCinFV_stack_12->SetBinError(15,1.688753);
   hnumuCCinFV_stack_12->SetBinError(16,1.849117);
   hnumuCCinFV_stack_12->SetBinError(17,1.989908);
   hnumuCCinFV_stack_12->SetBinError(18,1.950078);
   hnumuCCinFV_stack_12->SetBinError(19,1.932684);
   hnumuCCinFV_stack_12->SetBinError(20,2.183356);
   hnumuCCinFV_stack_12->SetBinError(21,1.999408);
   hnumuCCinFV_stack_12->SetBinError(22,2.755329);
   hnumuCCinFV_stack_12->SetBinError(23,2.984632);
   hnumuCCinFV_stack_12->SetBinError(24,1.648248);
   hnumuCCinFV_stack_12->SetBinError(25,2.10598);
   hnumuCCinFV_stack_12->SetBinError(26,1.739534);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.8377515);
   hnueCCinFV_stack_13->SetBinContent(4,1.795259);
   hnueCCinFV_stack_13->SetBinContent(5,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(6,1.766908);
   hnueCCinFV_stack_13->SetBinContent(7,1.182312);
   hnueCCinFV_stack_13->SetBinContent(8,2.787592);
   hnueCCinFV_stack_13->SetBinContent(9,3.095208);
   hnueCCinFV_stack_13->SetBinContent(10,1.088653);
   hnueCCinFV_stack_13->SetBinContent(11,0.7851874);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinContent(13,3.039896);
   hnueCCinFV_stack_13->SetBinContent(14,0.8401043);
   hnueCCinFV_stack_13->SetBinContent(15,2.032928);
   hnueCCinFV_stack_13->SetBinContent(16,0.8523195);
   hnueCCinFV_stack_13->SetBinContent(17,3.027743);
   hnueCCinFV_stack_13->SetBinContent(18,1.173137);
   hnueCCinFV_stack_13->SetBinContent(19,1.066627);
   hnueCCinFV_stack_13->SetBinContent(20,2.354626);
   hnueCCinFV_stack_13->SetBinContent(21,1.345672);
   hnueCCinFV_stack_13->SetBinContent(22,0.8824731);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(25,0.6057764);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.4952691);
   hnueCCinFV_stack_13->SetBinError(4,1.329192);
   hnueCCinFV_stack_13->SetBinError(5,0.340721);
   hnueCCinFV_stack_13->SetBinError(6,0.7793238);
   hnueCCinFV_stack_13->SetBinError(7,0.5074547);
   hnueCCinFV_stack_13->SetBinError(8,1.030043);
   hnueCCinFV_stack_13->SetBinError(9,1.109124);
   hnueCCinFV_stack_13->SetBinError(10,0.5547245);
   hnueCCinFV_stack_13->SetBinError(11,0.3925882);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
   hnueCCinFV_stack_13->SetBinError(13,1.371918);
   hnueCCinFV_stack_13->SetBinError(14,0.4210972);
   hnueCCinFV_stack_13->SetBinError(15,0.9559525);
   hnueCCinFV_stack_13->SetBinError(16,0.4301776);
   hnueCCinFV_stack_13->SetBinError(17,1.658615);
   hnueCCinFV_stack_13->SetBinError(18,0.6448608);
   hnueCCinFV_stack_13->SetBinError(19,0.8698897);
   hnueCCinFV_stack_13->SetBinError(20,0.8546649);
   hnueCCinFV_stack_13->SetBinError(21,0.5642596);
   hnueCCinFV_stack_13->SetBinError(22,0.4438617);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
   hnueCCinFV_stack_13->SetBinError(25,0.4539029);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__11->SetBinContent(0,9.831333);
   hmcerror__11->SetBinContent(1,92.89423);
   hmcerror__11->SetBinContent(2,132.1556);
   hmcerror__11->SetBinContent(3,151.9877);
   hmcerror__11->SetBinContent(4,146.0942);
   hmcerror__11->SetBinContent(5,142.3815);
   hmcerror__11->SetBinContent(6,154.6834);
   hmcerror__11->SetBinContent(7,137.7144);
   hmcerror__11->SetBinContent(8,147.3146);
   hmcerror__11->SetBinContent(9,149.4623);
   hmcerror__11->SetBinContent(10,151.6);
   hmcerror__11->SetBinContent(11,139.2356);
   hmcerror__11->SetBinContent(12,143.1019);
   hmcerror__11->SetBinContent(13,137.4488);
   hmcerror__11->SetBinContent(14,145.2753);
   hmcerror__11->SetBinContent(15,149.4271);
   hmcerror__11->SetBinContent(16,145.3141);
   hmcerror__11->SetBinContent(17,157.1323);
   hmcerror__11->SetBinContent(18,154.7176);
   hmcerror__11->SetBinContent(19,137.9184);
   hmcerror__11->SetBinContent(20,161.0615);
   hmcerror__11->SetBinContent(21,153.9121);
   hmcerror__11->SetBinContent(22,162.3937);
   hmcerror__11->SetBinContent(23,159.6306);
   hmcerror__11->SetBinContent(24,161.5934);
   hmcerror__11->SetBinContent(25,136.9523);
   hmcerror__11->SetBinContent(26,61.915);
   hmcerror__11->SetBinContent(27,6.311509);
   hmcerror__11->SetBinError(0,1.569373);
   hmcerror__11->SetBinError(1,26.48);
   hmcerror__11->SetBinError(2,35.05979);
   hmcerror__11->SetBinError(3,41.5921);
   hmcerror__11->SetBinError(4,39.80041);
   hmcerror__11->SetBinError(5,40.29546);
   hmcerror__11->SetBinError(6,39.14744);
   hmcerror__11->SetBinError(7,37.79738);
   hmcerror__11->SetBinError(8,38.65415);
   hmcerror__11->SetBinError(9,45.24064);
   hmcerror__11->SetBinError(10,39.56206);
   hmcerror__11->SetBinError(11,35.27552);
   hmcerror__11->SetBinError(12,36.22838);
   hmcerror__11->SetBinError(13,33.75614);
   hmcerror__11->SetBinError(14,39.2613);
   hmcerror__11->SetBinError(15,36.30766);
   hmcerror__11->SetBinError(16,37.76745);
   hmcerror__11->SetBinError(17,38.45978);
   hmcerror__11->SetBinError(18,44.81711);
   hmcerror__11->SetBinError(19,40.11525);
   hmcerror__11->SetBinError(20,38.07715);
   hmcerror__11->SetBinError(21,38.19778);
   hmcerror__11->SetBinError(22,38.18746);
   hmcerror__11->SetBinError(23,49.08668);
   hmcerror__11->SetBinError(24,38.87504);
   hmcerror__11->SetBinError(25,41.96807);
   hmcerror__11->SetBinError(26,25.51666);
   hmcerror__11->SetBinError(27,5.287644);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3013[26] = {
   96,
   141,
   135,
   136,
   142,
   140,
   142,
   155,
   168,
   158,
   160,
   167,
   173,
   162,
   145,
   159,
   150,
   147,
   131,
   159,
   167,
   173,
   185,
   127,
   132,
   62};
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
   9.9196,
   11.87434,
   11.61895,
   11.6619,
   11.91638,
   11.83216,
   11.91638,
   12.4499,
   12.96148,
   12.56981,
   12.64911,
   12.92285,
   13.15295,
   12.72792,
   12.04159,
   12.60952,
   12.24745,
   12.12436,
   11.44552,
   12.60952,
   12.92285,
   13.15295,
   13.60147,
   11.26943,
   11.48913,
   8.0018};
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
   9.718,
   11.87434,
   11.61895,
   11.6619,
   11.91638,
   11.83216,
   11.91638,
   12.4499,
   12.96148,
   12.56981,
   12.64911,
   12.92285,
   13.15295,
   12.72792,
   12.04159,
   12.60952,
   12.24745,
   12.12436,
   11.44552,
   12.60952,
   12.92285,
   13.15295,
   13.60147,
   11.26943,
   11.48913,
   7.7989};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,286);
   Graph_Graph3013->SetMinimum(39.53787);
   Graph_Graph3013->SetMaximum(213.0618);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3812.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 475.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 56.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 465.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1153.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 578.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.2850554,
   0.2652918,
   0.2736544,
   0.2724298,
   0.2830105,
   0.253081,
   0.274462,
   0.2623918,
   0.3026892,
   0.2609634,
   0.2533513,
   0.2531649,
   0.2455906,
   0.2702545,
   0.2429791,
   0.2599021,
   0.2447605,
   0.2896704,
   0.2908621,
   0.2364137,
   0.2481792,
   0.2351536,
   0.3075018,
   0.2405731,
   0.3064429,
   0.4121239};
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
   0.2850554,
   0.2652918,
   0.2736544,
   0.2724298,
   0.2830105,
   0.253081,
   0.274462,
   0.2623918,
   0.3026892,
   0.2609634,
   0.2533513,
   0.2531649,
   0.2455906,
   0.2702545,
   0.2429791,
   0.2599021,
   0.2447605,
   0.2896704,
   0.2908621,
   0.2364137,
   0.2481792,
   0.2351536,
   0.3075018,
   0.2405731,
   0.3064429,
   0.4121239};
   grae = new TGraphAsymmErrors(26,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,286);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3015[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.2027711,
   0.2030035,
   0.2046966,
   0.2078,
   0.216041,
   0.2005754,
   0.2184735,
   0.2177047,
   0.2080394,
   0.1959761,
   0.2177251,
   0.2074228,
   0.2063185,
   0.2084787,
   0.2008248,
   0.2021373,
   0.188954,
   0.2009021,
   0.2155566,
   0.1925523,
   0.2035756,
   0.1790687,
   0.1934511,
   0.1903335,
   0.1810334,
   0.2247508};
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
   0.2027711,
   0.2030035,
   0.2046966,
   0.2078,
   0.216041,
   0.2005754,
   0.2184735,
   0.2177047,
   0.2080394,
   0.1959761,
   0.2177251,
   0.2074228,
   0.2063185,
   0.2084787,
   0.2008248,
   0.2021373,
   0.188954,
   0.2009021,
   0.2155566,
   0.1925523,
   0.2035756,
   0.1790687,
   0.1934511,
   0.1903335,
   0.1810334,
   0.2247508};
   grae = new TGraphAsymmErrors(26,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,286);
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
   
   Double_t _fx3016[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3016[26] = {
   1.033433,
   1.066924,
   0.8882297,
   0.9309063,
   0.9973206,
   0.9050743,
   1.031119,
   1.05217,
   1.124029,
   1.042216,
   1.149131,
   1.167,
   1.25865,
   1.115125,
   0.9703729,
   1.094181,
   0.9546094,
   0.9501182,
   0.9498367,
   0.9872003,
   1.085035,
   1.065312,
   1.158926,
   0.785923,
   0.9638392,
   1.001373};
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
   0.1067838,
   0.08985124,
   0.07644664,
   0.07982455,
   0.08369328,
   0.07649274,
   0.08652959,
   0.08451232,
   0.08672072,
   0.08291426,
   0.0908468,
   0.09030521,
   0.09569341,
   0.08761246,
   0.08058508,
   0.08677422,
   0.07794353,
   0.07836443,
   0.08298762,
   0.07829008,
   0.08396252,
   0.0809942,
   0.08520593,
   0.06973939,
   0.08389144,
   0.1292385};
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
   0.1046136,
   0.08985124,
   0.07644664,
   0.07982455,
   0.08369328,
   0.07649274,
   0.08652959,
   0.08451232,
   0.08672072,
   0.08291426,
   0.0908468,
   0.09030521,
   0.09569341,
   0.08761246,
   0.08058508,
   0.08677422,
   0.07794353,
   0.07836443,
   0.08298762,
   0.07829008,
   0.08396252,
   0.0809942,
   0.08520593,
   0.06973939,
   0.08389144,
   0.1259614};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,286);
   Graph_Graph3016->SetMinimum(0.6523676);
   Graph_Graph3016->SetMaximum(1.41816);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
