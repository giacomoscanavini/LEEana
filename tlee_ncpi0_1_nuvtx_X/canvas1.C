#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Oct 21 23:07:14 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-40,-6.185137,293.3333,683.9459);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,11.17511);
   hmc__1->SetBinContent(1,155.0427);
   hmc__1->SetBinContent(2,201.6468);
   hmc__1->SetBinContent(3,233.8149);
   hmc__1->SetBinContent(4,240.3332);
   hmc__1->SetBinContent(5,242.7915);
   hmc__1->SetBinContent(6,257.8333);
   hmc__1->SetBinContent(7,238.2493);
   hmc__1->SetBinContent(8,261.0436);
   hmc__1->SetBinContent(9,266.819);
   hmc__1->SetBinContent(10,269.1487);
   hmc__1->SetBinContent(11,271.6296);
   hmc__1->SetBinContent(12,269.4481);
   hmc__1->SetBinContent(13,272.9757);
   hmc__1->SetBinContent(14,282.4003);
   hmc__1->SetBinContent(15,268.1379);
   hmc__1->SetBinContent(16,275.2824);
   hmc__1->SetBinContent(17,299.0026);
   hmc__1->SetBinContent(18,295.0788);
   hmc__1->SetBinContent(19,285.0382);
   hmc__1->SetBinContent(20,304.9817);
   hmc__1->SetBinContent(21,306.7039);
   hmc__1->SetBinContent(22,301.2899);
   hmc__1->SetBinContent(23,309.2568);
   hmc__1->SetBinContent(24,283.885);
   hmc__1->SetBinContent(25,241.0151);
   hmc__1->SetBinContent(26,125.4499);
   hmc__1->SetBinContent(27,9.630085);
   hmc__1->SetBinError(0,1.663435);
   hmc__1->SetBinError(1,42.67067);
   hmc__1->SetBinError(2,58.14711);
   hmc__1->SetBinError(3,65.59452);
   hmc__1->SetBinError(4,61.05093);
   hmc__1->SetBinError(5,76.63939);
   hmc__1->SetBinError(6,69.06648);
   hmc__1->SetBinError(7,68.69211);
   hmc__1->SetBinError(8,78.73013);
   hmc__1->SetBinError(9,69.54159);
   hmc__1->SetBinError(10,70.77591);
   hmc__1->SetBinError(11,72.62819);
   hmc__1->SetBinError(12,74.34028);
   hmc__1->SetBinError(13,70.50948);
   hmc__1->SetBinError(14,74.06877);
   hmc__1->SetBinError(15,70.4443);
   hmc__1->SetBinError(16,71.33625);
   hmc__1->SetBinError(17,74.04473);
   hmc__1->SetBinError(18,77.93125);
   hmc__1->SetBinError(19,75.34487);
   hmc__1->SetBinError(20,75.57338);
   hmc__1->SetBinError(21,81.55748);
   hmc__1->SetBinError(22,73.43852);
   hmc__1->SetBinError(23,84.33532);
   hmc__1->SetBinError(24,71.61325);
   hmc__1->SetBinError(25,58.64566);
   hmc__1->SetBinError(26,37.66376);
   hmc__1->SetBinError(27,7.720451);
   hmc__1->SetMinimum(-6.185137);
   hmc__1->SetMaximum(649.4394);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(-1.051148e-09);
   hs1_stack_1->SetMaximum(324.7197);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,5.733838);
   hbadmatch_stack_1->SetBinContent(2,3.182959);
   hbadmatch_stack_1->SetBinContent(3,3.32296);
   hbadmatch_stack_1->SetBinContent(4,3.262324);
   hbadmatch_stack_1->SetBinContent(5,4.650173);
   hbadmatch_stack_1->SetBinContent(6,5.192595);
   hbadmatch_stack_1->SetBinContent(7,4.464325);
   hbadmatch_stack_1->SetBinContent(8,4.779632);
   hbadmatch_stack_1->SetBinContent(9,5.18);
   hbadmatch_stack_1->SetBinContent(10,7.678521);
   hbadmatch_stack_1->SetBinContent(11,6.968885);
   hbadmatch_stack_1->SetBinContent(12,8.421176);
   hbadmatch_stack_1->SetBinContent(13,7.270001);
   hbadmatch_stack_1->SetBinContent(14,8.643752);
   hbadmatch_stack_1->SetBinContent(15,5.436102);
   hbadmatch_stack_1->SetBinContent(16,7.807055);
   hbadmatch_stack_1->SetBinContent(17,7.927115);
   hbadmatch_stack_1->SetBinContent(18,8.917598);
   hbadmatch_stack_1->SetBinContent(19,10.43841);
   hbadmatch_stack_1->SetBinContent(20,8.452674);
   hbadmatch_stack_1->SetBinContent(21,7.391998);
   hbadmatch_stack_1->SetBinContent(22,7.415673);
   hbadmatch_stack_1->SetBinContent(23,10.35925);
   hbadmatch_stack_1->SetBinContent(24,7.014327);
   hbadmatch_stack_1->SetBinContent(25,7.815396);
   hbadmatch_stack_1->SetBinContent(26,5.339917);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.98337);
   hbadmatch_stack_1->SetBinError(2,0.9117995);
   hbadmatch_stack_1->SetBinError(3,0.8864034);
   hbadmatch_stack_1->SetBinError(4,0.9446982);
   hbadmatch_stack_1->SetBinError(5,2.081877);
   hbadmatch_stack_1->SetBinError(6,1.164493);
   hbadmatch_stack_1->SetBinError(7,1.006891);
   hbadmatch_stack_1->SetBinError(8,1.05554);
   hbadmatch_stack_1->SetBinError(9,1.31391);
   hbadmatch_stack_1->SetBinError(10,2.106037);
   hbadmatch_stack_1->SetBinError(11,1.490502);
   hbadmatch_stack_1->SetBinError(12,1.695029);
   hbadmatch_stack_1->SetBinError(13,1.414837);
   hbadmatch_stack_1->SetBinError(14,1.610197);
   hbadmatch_stack_1->SetBinError(15,1.18746);
   hbadmatch_stack_1->SetBinError(16,1.536867);
   hbadmatch_stack_1->SetBinError(17,1.463008);
   hbadmatch_stack_1->SetBinError(18,1.569258);
   hbadmatch_stack_1->SetBinError(19,2.21217);
   hbadmatch_stack_1->SetBinError(20,1.537673);
   hbadmatch_stack_1->SetBinError(21,1.500324);
   hbadmatch_stack_1->SetBinError(22,1.400222);
   hbadmatch_stack_1->SetBinError(23,1.734673);
   hbadmatch_stack_1->SetBinError(24,1.543014);
   hbadmatch_stack_1->SetBinError(25,1.437674);
   hbadmatch_stack_1->SetBinError(26,1.283293);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,1.055394);
   hext_stack_2->SetBinContent(1,13.18823);
   hext_stack_2->SetBinContent(2,18.78242);
   hext_stack_2->SetBinContent(3,24.18789);
   hext_stack_2->SetBinContent(4,25.65983);
   hext_stack_2->SetBinContent(5,24.43726);
   hext_stack_2->SetBinContent(6,28.45853);
   hext_stack_2->SetBinContent(7,20.4044);
   hext_stack_2->SetBinContent(8,18.11926);
   hext_stack_2->SetBinContent(9,20.30066);
   hext_stack_2->SetBinContent(10,32.62984);
   hext_stack_2->SetBinContent(11,31.64783);
   hext_stack_2->SetBinContent(12,27.91348);
   hext_stack_2->SetBinContent(13,28.37192);
   hext_stack_2->SetBinContent(14,26.83654);
   hext_stack_2->SetBinContent(15,31.42718);
   hext_stack_2->SetBinContent(16,30.02868);
   hext_stack_2->SetBinContent(17,34.2243);
   hext_stack_2->SetBinContent(18,32.99297);
   hext_stack_2->SetBinContent(19,21.28103);
   hext_stack_2->SetBinContent(20,41.37302);
   hext_stack_2->SetBinContent(21,40.25261);
   hext_stack_2->SetBinContent(22,39.82724);
   hext_stack_2->SetBinContent(23,46.09057);
   hext_stack_2->SetBinContent(24,38.67094);
   hext_stack_2->SetBinContent(25,37.20894);
   hext_stack_2->SetBinContent(26,17.91896);
   hext_stack_2->SetBinContent(27,1.048213);
   hext_stack_2->SetBinError(0,0.6130171);
   hext_stack_2->SetBinError(1,2.422203);
   hext_stack_2->SetBinError(2,2.837684);
   hext_stack_2->SetBinError(3,3.325295);
   hext_stack_2->SetBinError(4,3.325834);
   hext_stack_2->SetBinError(5,3.301746);
   hext_stack_2->SetBinError(6,3.645616);
   hext_stack_2->SetBinError(7,2.928928);
   hext_stack_2->SetBinError(8,2.871304);
   hext_stack_2->SetBinError(9,3.020287);
   hext_stack_2->SetBinError(10,4.025182);
   hext_stack_2->SetBinError(11,3.951726);
   hext_stack_2->SetBinError(12,3.540697);
   hext_stack_2->SetBinError(13,3.618744);
   hext_stack_2->SetBinError(14,3.572723);
   hext_stack_2->SetBinError(15,3.868771);
   hext_stack_2->SetBinError(16,3.663774);
   hext_stack_2->SetBinError(17,3.923631);
   hext_stack_2->SetBinError(18,3.692503);
   hext_stack_2->SetBinError(19,3.039183);
   hext_stack_2->SetBinError(20,4.645856);
   hext_stack_2->SetBinError(21,4.367947);
   hext_stack_2->SetBinError(22,4.379603);
   hext_stack_2->SetBinError(23,4.807427);
   hext_stack_2->SetBinError(24,4.204986);
   hext_stack_2->SetBinError(25,4.140145);
   hext_stack_2->SetBinError(26,3.021625);
   hext_stack_2->SetBinError(27,0.7595995);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,1.360397);
   hdirt_stack_3->SetBinContent(2,3.998235);
   hdirt_stack_3->SetBinContent(3,4.456168);
   hdirt_stack_3->SetBinContent(4,3.226929);
   hdirt_stack_3->SetBinContent(5,3.418409);
   hdirt_stack_3->SetBinContent(6,1.128149);
   hdirt_stack_3->SetBinContent(7,1.540917);
   hdirt_stack_3->SetBinContent(8,2.471296);
   hdirt_stack_3->SetBinContent(9,2.72485);
   hdirt_stack_3->SetBinContent(10,1.507954);
   hdirt_stack_3->SetBinContent(11,2.234208);
   hdirt_stack_3->SetBinContent(12,0.8329533);
   hdirt_stack_3->SetBinContent(13,1.335073);
   hdirt_stack_3->SetBinContent(14,1.980107);
   hdirt_stack_3->SetBinContent(15,1.209201);
   hdirt_stack_3->SetBinContent(16,2.26936);
   hdirt_stack_3->SetBinContent(17,2.290459);
   hdirt_stack_3->SetBinContent(18,3.169384);
   hdirt_stack_3->SetBinContent(19,2.393588);
   hdirt_stack_3->SetBinContent(20,2.36631);
   hdirt_stack_3->SetBinContent(21,6.75603);
   hdirt_stack_3->SetBinContent(22,4.044919);
   hdirt_stack_3->SetBinContent(23,4.45025);
   hdirt_stack_3->SetBinContent(24,4.558557);
   hdirt_stack_3->SetBinContent(25,3.934348);
   hdirt_stack_3->SetBinContent(26,2.815911);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5846869);
   hdirt_stack_3->SetBinError(2,1.051472);
   hdirt_stack_3->SetBinError(3,1.107243);
   hdirt_stack_3->SetBinError(4,0.8668545);
   hdirt_stack_3->SetBinError(5,1.234219);
   hdirt_stack_3->SetBinError(6,0.4372061);
   hdirt_stack_3->SetBinError(7,0.6207914);
   hdirt_stack_3->SetBinError(8,0.7778078);
   hdirt_stack_3->SetBinError(9,0.8263428);
   hdirt_stack_3->SetBinError(10,0.6925614);
   hdirt_stack_3->SetBinError(11,1.227807);
   hdirt_stack_3->SetBinError(12,0.3836916);
   hdirt_stack_3->SetBinError(13,0.5844386);
   hdirt_stack_3->SetBinError(14,0.7351041);
   hdirt_stack_3->SetBinError(15,0.5724416);
   hdirt_stack_3->SetBinError(16,0.6966686);
   hdirt_stack_3->SetBinError(17,0.7353631);
   hdirt_stack_3->SetBinError(18,0.9560859);
   hdirt_stack_3->SetBinError(19,0.8231756);
   hdirt_stack_3->SetBinError(20,0.7685293);
   hdirt_stack_3->SetBinError(21,1.696233);
   hdirt_stack_3->SetBinError(22,1.095126);
   hdirt_stack_3->SetBinError(23,1.085353);
   hdirt_stack_3->SetBinError(24,1.088286);
   hdirt_stack_3->SetBinError(25,1.074048);
   hdirt_stack_3->SetBinError(26,0.9016098);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,7.798624);
   houtFV_stack_4->SetBinContent(1,77.35133);
   houtFV_stack_4->SetBinContent(2,32.19225);
   houtFV_stack_4->SetBinContent(3,31.71646);
   houtFV_stack_4->SetBinContent(4,24.29374);
   houtFV_stack_4->SetBinContent(5,20.18588);
   houtFV_stack_4->SetBinContent(6,20.74674);
   houtFV_stack_4->SetBinContent(7,19.59785);
   houtFV_stack_4->SetBinContent(8,21.141);
   houtFV_stack_4->SetBinContent(9,16.47696);
   houtFV_stack_4->SetBinContent(10,17.04839);
   houtFV_stack_4->SetBinContent(11,15.38);
   houtFV_stack_4->SetBinContent(12,19.1044);
   houtFV_stack_4->SetBinContent(13,18.27894);
   houtFV_stack_4->SetBinContent(14,16.96174);
   houtFV_stack_4->SetBinContent(15,17.62711);
   houtFV_stack_4->SetBinContent(16,15.53075);
   houtFV_stack_4->SetBinContent(17,22.93025);
   houtFV_stack_4->SetBinContent(18,21.1735);
   houtFV_stack_4->SetBinContent(19,18.96221);
   houtFV_stack_4->SetBinContent(20,23.45863);
   houtFV_stack_4->SetBinContent(21,20.27352);
   houtFV_stack_4->SetBinContent(22,25.4336);
   houtFV_stack_4->SetBinContent(23,32.24505);
   houtFV_stack_4->SetBinContent(24,34.15804);
   houtFV_stack_4->SetBinContent(25,37.06152);
   houtFV_stack_4->SetBinContent(26,47.04865);
   houtFV_stack_4->SetBinContent(27,5.634874);
   houtFV_stack_4->SetBinError(0,1.38985);
   houtFV_stack_4->SetBinError(1,4.399344);
   houtFV_stack_4->SetBinError(2,2.902486);
   houtFV_stack_4->SetBinError(3,2.852205);
   houtFV_stack_4->SetBinError(4,2.488673);
   houtFV_stack_4->SetBinError(5,2.159193);
   houtFV_stack_4->SetBinError(6,2.265996);
   houtFV_stack_4->SetBinError(7,2.187002);
   houtFV_stack_4->SetBinError(8,2.438635);
   houtFV_stack_4->SetBinError(9,2.079722);
   houtFV_stack_4->SetBinError(10,2.034921);
   houtFV_stack_4->SetBinError(11,1.96598);
   houtFV_stack_4->SetBinError(12,2.193497);
   houtFV_stack_4->SetBinError(13,2.149463);
   houtFV_stack_4->SetBinError(14,2.010067);
   houtFV_stack_4->SetBinError(15,2.083272);
   houtFV_stack_4->SetBinError(16,1.980986);
   houtFV_stack_4->SetBinError(17,2.439552);
   houtFV_stack_4->SetBinError(18,2.447985);
   houtFV_stack_4->SetBinError(19,2.087294);
   houtFV_stack_4->SetBinError(20,2.615299);
   houtFV_stack_4->SetBinError(21,2.302756);
   houtFV_stack_4->SetBinError(22,2.561396);
   houtFV_stack_4->SetBinError(23,3.063008);
   houtFV_stack_4->SetBinError(24,2.872987);
   houtFV_stack_4->SetBinError(25,3.024294);
   houtFV_stack_4->SetBinError(26,3.391921);
   houtFV_stack_4->SetBinError(27,1.196241);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.443673);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.295762);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.693043);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.423584);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.148306);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.605467);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.795174);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.986762);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.216349);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.68518);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.599511);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.491703);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.638352);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.514794);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.029979);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.411224);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.746672);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.218969);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.327202);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.144682);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.693484);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.071057);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.047877);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.729518);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.075475);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5251232);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05216376);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4095777);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8618911);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7588834);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5940233);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6979245);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8805504);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6182425);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7175355);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7303831);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7573889);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9268625);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7580767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.06191);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8638707);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7275711);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7698429);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.8690905);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.035837);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9252734);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8085955);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6741741);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7709086);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.802564);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.9592032);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6206137);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.284667);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03698734);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.10808);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2887338);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5573978);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.063583);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9970638);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.095335);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8049381);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.042872);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.21055);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9098653);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.576894);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4544097);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.13987);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6701635);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.069869);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6446095);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6649275);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6887869);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.9473761);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.779974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4937293);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8398077);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.007621);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4808766);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2681741);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.07633901);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04764111);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08571501);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2015702);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4201567);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.339311);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3675686);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2379239);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3163551);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3326712);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2531048);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1551891);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1188691);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2954386);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2392503);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2895631);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1616868);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2342083);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1876288);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3809178);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2200827);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1671997);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1883435);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3185095);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1896201);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07285125);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06649547);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7194154);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.83668);
   hNCpi0inFVres_stack_7->SetBinContent(2,57.16126);
   hNCpi0inFVres_stack_7->SetBinContent(3,71.00455);
   hNCpi0inFVres_stack_7->SetBinContent(4,81.56107);
   hNCpi0inFVres_stack_7->SetBinContent(5,87.52815);
   hNCpi0inFVres_stack_7->SetBinContent(6,95.31813);
   hNCpi0inFVres_stack_7->SetBinContent(7,91.46854);
   hNCpi0inFVres_stack_7->SetBinContent(8,98.28743);
   hNCpi0inFVres_stack_7->SetBinContent(9,103.0775);
   hNCpi0inFVres_stack_7->SetBinContent(10,91.2525);
   hNCpi0inFVres_stack_7->SetBinContent(11,101.852);
   hNCpi0inFVres_stack_7->SetBinContent(12,95.70844);
   hNCpi0inFVres_stack_7->SetBinContent(13,93.02592);
   hNCpi0inFVres_stack_7->SetBinContent(14,101.3338);
   hNCpi0inFVres_stack_7->SetBinContent(15,95.5807);
   hNCpi0inFVres_stack_7->SetBinContent(16,99.64253);
   hNCpi0inFVres_stack_7->SetBinContent(17,99.86816);
   hNCpi0inFVres_stack_7->SetBinContent(18,94.46759);
   hNCpi0inFVres_stack_7->SetBinContent(19,97.53924);
   hNCpi0inFVres_stack_7->SetBinContent(20,90.21204);
   hNCpi0inFVres_stack_7->SetBinContent(21,94.84457);
   hNCpi0inFVres_stack_7->SetBinContent(22,94.69289);
   hNCpi0inFVres_stack_7->SetBinContent(23,80.2442);
   hNCpi0inFVres_stack_7->SetBinContent(24,70.84718);
   hNCpi0inFVres_stack_7->SetBinContent(25,50.96038);
   hNCpi0inFVres_stack_7->SetBinContent(26,14.30611);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.8245139);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2733299);
   hNCpi0inFVres_stack_7->SetBinError(1,1.341936);
   hNCpi0inFVres_stack_7->SetBinError(2,2.404053);
   hNCpi0inFVres_stack_7->SetBinError(3,2.633401);
   hNCpi0inFVres_stack_7->SetBinError(4,2.932457);
   hNCpi0inFVres_stack_7->SetBinError(5,2.941804);
   hNCpi0inFVres_stack_7->SetBinError(6,3.195429);
   hNCpi0inFVres_stack_7->SetBinError(7,3.096292);
   hNCpi0inFVres_stack_7->SetBinError(8,3.258353);
   hNCpi0inFVres_stack_7->SetBinError(9,3.479659);
   hNCpi0inFVres_stack_7->SetBinError(10,3.111201);
   hNCpi0inFVres_stack_7->SetBinError(11,3.265516);
   hNCpi0inFVres_stack_7->SetBinError(12,3.084074);
   hNCpi0inFVres_stack_7->SetBinError(13,3.080271);
   hNCpi0inFVres_stack_7->SetBinError(14,3.347984);
   hNCpi0inFVres_stack_7->SetBinError(15,3.273352);
   hNCpi0inFVres_stack_7->SetBinError(16,3.358298);
   hNCpi0inFVres_stack_7->SetBinError(17,3.354559);
   hNCpi0inFVres_stack_7->SetBinError(18,3.226363);
   hNCpi0inFVres_stack_7->SetBinError(19,3.281874);
   hNCpi0inFVres_stack_7->SetBinError(20,3.068753);
   hNCpi0inFVres_stack_7->SetBinError(21,3.149632);
   hNCpi0inFVres_stack_7->SetBinError(22,3.27708);
   hNCpi0inFVres_stack_7->SetBinError(23,2.884689);
   hNCpi0inFVres_stack_7->SetBinError(24,2.584491);
   hNCpi0inFVres_stack_7->SetBinError(25,2.295802);
   hNCpi0inFVres_stack_7->SetBinError(26,1.226084);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2053865);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.3225855);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.262503);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.11389);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.24935);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.54692);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.01271);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.79908);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.68621);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.12135);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.97008);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.60198);
   hNCpi0inFVdis_stack_8->SetBinContent(11,20.16018);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.96556);
   hNCpi0inFVdis_stack_8->SetBinContent(13,21.56991);
   hNCpi0inFVdis_stack_8->SetBinContent(14,19.97856);
   hNCpi0inFVdis_stack_8->SetBinContent(15,22.6312);
   hNCpi0inFVdis_stack_8->SetBinContent(16,21.20542);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.84249);
   hNCpi0inFVdis_stack_8->SetBinContent(18,20.55481);
   hNCpi0inFVdis_stack_8->SetBinContent(19,20.47112);
   hNCpi0inFVdis_stack_8->SetBinContent(20,22.59688);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.61955);
   hNCpi0inFVdis_stack_8->SetBinContent(22,20.60862);
   hNCpi0inFVdis_stack_8->SetBinContent(23,19.89898);
   hNCpi0inFVdis_stack_8->SetBinContent(24,17.04806);
   hNCpi0inFVdis_stack_8->SetBinContent(25,12.52557);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.768395);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1964617);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2970509);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7296025);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.25276);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.205651);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.53025);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.446473);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.626501);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.439033);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.374748);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.648863);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.514245);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.568413);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.580098);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.58361);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.567318);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.66196);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.737756);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.553797);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.562166);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.584217);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.740295);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.632227);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.547482);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.6655);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.459812);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.228199);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4594118);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1097577);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03399719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.04462993);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1111496);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.04411197);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.1847543);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1256101);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02411083);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02632837);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07571536);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02713362);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1388276);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1110348);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(1,17.92757);
   hCCpi0inFV_stack_10->SetBinContent(2,35.95633);
   hCCpi0inFV_stack_10->SetBinContent(3,42.77321);
   hCCpi0inFV_stack_10->SetBinContent(4,38.65036);
   hCCpi0inFV_stack_10->SetBinContent(5,39.57104);
   hCCpi0inFV_stack_10->SetBinContent(6,39.45435);
   hCCpi0inFV_stack_10->SetBinContent(7,38.88064);
   hCCpi0inFV_stack_10->SetBinContent(8,44.7691);
   hCCpi0inFV_stack_10->SetBinContent(9,46.89067);
   hCCpi0inFV_stack_10->SetBinContent(10,45.08318);
   hCCpi0inFV_stack_10->SetBinContent(11,35.09932);
   hCCpi0inFV_stack_10->SetBinContent(12,42.21341);
   hCCpi0inFV_stack_10->SetBinContent(13,39.94414);
   hCCpi0inFV_stack_10->SetBinContent(14,47.44484);
   hCCpi0inFV_stack_10->SetBinContent(15,41.50733);
   hCCpi0inFV_stack_10->SetBinContent(16,41.74579);
   hCCpi0inFV_stack_10->SetBinContent(17,48.1733);
   hCCpi0inFV_stack_10->SetBinContent(18,51.77889);
   hCCpi0inFV_stack_10->SetBinContent(19,44.3952);
   hCCpi0inFV_stack_10->SetBinContent(20,52.67006);
   hCCpi0inFV_stack_10->SetBinContent(21,50.25011);
   hCCpi0inFV_stack_10->SetBinContent(22,48.17593);
   hCCpi0inFV_stack_10->SetBinContent(23,45.47926);
   hCCpi0inFV_stack_10->SetBinContent(24,55.67152);
   hCCpi0inFV_stack_10->SetBinContent(25,41.73906);
   hCCpi0inFV_stack_10->SetBinContent(26,17.50205);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(1,2.131798);
   hCCpi0inFV_stack_10->SetBinError(2,2.972402);
   hCCpi0inFV_stack_10->SetBinError(3,3.328507);
   hCCpi0inFV_stack_10->SetBinError(4,3.111711);
   hCCpi0inFV_stack_10->SetBinError(5,3.152468);
   hCCpi0inFV_stack_10->SetBinError(6,3.122391);
   hCCpi0inFV_stack_10->SetBinError(7,3.082899);
   hCCpi0inFV_stack_10->SetBinError(8,3.405511);
   hCCpi0inFV_stack_10->SetBinError(9,3.43837);
   hCCpi0inFV_stack_10->SetBinError(10,3.390929);
   hCCpi0inFV_stack_10->SetBinError(11,2.951467);
   hCCpi0inFV_stack_10->SetBinError(12,3.304085);
   hCCpi0inFV_stack_10->SetBinError(13,3.121873);
   hCCpi0inFV_stack_10->SetBinError(14,3.48193);
   hCCpi0inFV_stack_10->SetBinError(15,3.276189);
   hCCpi0inFV_stack_10->SetBinError(16,3.189009);
   hCCpi0inFV_stack_10->SetBinError(17,3.476349);
   hCCpi0inFV_stack_10->SetBinError(18,3.610044);
   hCCpi0inFV_stack_10->SetBinError(19,3.324979);
   hCCpi0inFV_stack_10->SetBinError(20,3.709286);
   hCCpi0inFV_stack_10->SetBinError(21,3.530816);
   hCCpi0inFV_stack_10->SetBinError(22,3.477637);
   hCCpi0inFV_stack_10->SetBinError(23,3.341501);
   hCCpi0inFV_stack_10->SetBinError(24,3.718087);
   hCCpi0inFV_stack_10->SetBinError(25,3.275428);
   hCCpi0inFV_stack_10->SetBinError(26,2.153656);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1298672);
   hNCinFV_stack_11->SetBinContent(1,6.064714);
   hNCinFV_stack_11->SetBinContent(2,17.58244);
   hNCinFV_stack_11->SetBinContent(3,17.37229);
   hNCinFV_stack_11->SetBinContent(4,20.69028);
   hNCinFV_stack_11->SetBinContent(5,19.38544);
   hNCinFV_stack_11->SetBinContent(6,20.84052);
   hNCinFV_stack_11->SetBinContent(7,18.86861);
   hNCinFV_stack_11->SetBinContent(8,24.46883);
   hNCinFV_stack_11->SetBinContent(9,25.05928);
   hNCinFV_stack_11->SetBinContent(10,20.82261);
   hNCinFV_stack_11->SetBinContent(11,23.57665);
   hNCinFV_stack_11->SetBinContent(12,20.93188);
   hNCinFV_stack_11->SetBinContent(13,24.20255);
   hNCinFV_stack_11->SetBinContent(14,21.32008);
   hNCinFV_stack_11->SetBinContent(15,17.17123);
   hNCinFV_stack_11->SetBinContent(16,22.75104);
   hNCinFV_stack_11->SetBinContent(17,21.33162);
   hNCinFV_stack_11->SetBinContent(18,22.64021);
   hNCinFV_stack_11->SetBinContent(19,22.57225);
   hNCinFV_stack_11->SetBinContent(20,23.30278);
   hNCinFV_stack_11->SetBinContent(21,22.34891);
   hNCinFV_stack_11->SetBinContent(22,18.62448);
   hNCinFV_stack_11->SetBinContent(23,24.67692);
   hNCinFV_stack_11->SetBinContent(24,17.5578);
   hNCinFV_stack_11->SetBinContent(25,17.02883);
   hNCinFV_stack_11->SetBinContent(26,3.383609);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1298672);
   hNCinFV_stack_11->SetBinError(1,1.320472);
   hNCinFV_stack_11->SetBinError(2,2.164543);
   hNCinFV_stack_11->SetBinError(3,2.210384);
   hNCinFV_stack_11->SetBinError(4,2.432643);
   hNCinFV_stack_11->SetBinError(5,2.269017);
   hNCinFV_stack_11->SetBinError(6,2.770995);
   hNCinFV_stack_11->SetBinError(7,2.286076);
   hNCinFV_stack_11->SetBinError(8,2.600116);
   hNCinFV_stack_11->SetBinError(9,3.046066);
   hNCinFV_stack_11->SetBinError(10,2.391984);
   hNCinFV_stack_11->SetBinError(11,2.677944);
   hNCinFV_stack_11->SetBinError(12,2.530592);
   hNCinFV_stack_11->SetBinError(13,2.818344);
   hNCinFV_stack_11->SetBinError(14,2.508212);
   hNCinFV_stack_11->SetBinError(15,2.179273);
   hNCinFV_stack_11->SetBinError(16,2.48499);
   hNCinFV_stack_11->SetBinError(17,2.329193);
   hNCinFV_stack_11->SetBinError(18,2.748781);
   hNCinFV_stack_11->SetBinError(19,2.62844);
   hNCinFV_stack_11->SetBinError(20,2.538963);
   hNCinFV_stack_11->SetBinError(21,2.566566);
   hNCinFV_stack_11->SetBinError(22,2.471602);
   hNCinFV_stack_11->SetBinError(23,2.768593);
   hNCinFV_stack_11->SetBinError(24,2.039233);
   hNCinFV_stack_11->SetBinError(25,2.163415);
   hNCinFV_stack_11->SetBinError(26,0.8459776);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,7.425491);
   hnumuCCinFV_stack_12->SetBinContent(2,15.65067);
   hnumuCCinFV_stack_12->SetBinContent(3,17.98665);
   hnumuCCinFV_stack_12->SetBinContent(4,16.50164);
   hnumuCCinFV_stack_12->SetBinContent(5,19.37991);
   hnumuCCinFV_stack_12->SetBinContent(6,15.96273);
   hnumuCCinFV_stack_12->SetBinContent(7,18.14964);
   hnumuCCinFV_stack_12->SetBinContent(8,19.7776);
   hnumuCCinFV_stack_12->SetBinContent(9,16.99358);
   hnumuCCinFV_stack_12->SetBinContent(10,24.95209);
   hnumuCCinFV_stack_12->SetBinContent(11,26.76494);
   hnumuCCinFV_stack_12->SetBinContent(12,28.6552);
   hnumuCCinFV_stack_12->SetBinContent(13,27.53531);
   hnumuCCinFV_stack_12->SetBinContent(14,30.67908);
   hnumuCCinFV_stack_12->SetBinContent(15,27.39163);
   hnumuCCinFV_stack_12->SetBinContent(16,28.39363);
   hnumuCCinFV_stack_12->SetBinContent(17,32.0708);
   hnumuCCinFV_stack_12->SetBinContent(18,29.80695);
   hnumuCCinFV_stack_12->SetBinContent(19,38.42222);
   hnumuCCinFV_stack_12->SetBinContent(20,31.21395);
   hnumuCCinFV_stack_12->SetBinContent(21,35.65159);
   hnumuCCinFV_stack_12->SetBinContent(22,34.89928);
   hnumuCCinFV_stack_12->SetBinContent(23,36.84209);
   hnumuCCinFV_stack_12->SetBinContent(24,30.92888);
   hnumuCCinFV_stack_12->SetBinContent(25,27.82312);
   hnumuCCinFV_stack_12->SetBinContent(26,13.63576);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,1.411106);
   hnumuCCinFV_stack_12->SetBinError(2,1.967418);
   hnumuCCinFV_stack_12->SetBinError(3,2.579056);
   hnumuCCinFV_stack_12->SetBinError(4,2.15759);
   hnumuCCinFV_stack_12->SetBinError(5,2.491076);
   hnumuCCinFV_stack_12->SetBinError(6,2.068152);
   hnumuCCinFV_stack_12->SetBinError(7,2.414985);
   hnumuCCinFV_stack_12->SetBinError(8,2.53186);
   hnumuCCinFV_stack_12->SetBinError(9,2.397319);
   hnumuCCinFV_stack_12->SetBinError(10,2.708683);
   hnumuCCinFV_stack_12->SetBinError(11,2.827058);
   hnumuCCinFV_stack_12->SetBinError(12,3.272179);
   hnumuCCinFV_stack_12->SetBinError(13,2.948994);
   hnumuCCinFV_stack_12->SetBinError(14,3.291156);
   hnumuCCinFV_stack_12->SetBinError(15,2.804796);
   hnumuCCinFV_stack_12->SetBinError(16,3.151644);
   hnumuCCinFV_stack_12->SetBinError(17,3.221914);
   hnumuCCinFV_stack_12->SetBinError(18,2.989532);
   hnumuCCinFV_stack_12->SetBinError(19,3.784439);
   hnumuCCinFV_stack_12->SetBinError(20,3.343669);
   hnumuCCinFV_stack_12->SetBinError(21,3.169542);
   hnumuCCinFV_stack_12->SetBinError(22,3.758984);
   hnumuCCinFV_stack_12->SetBinError(23,3.853662);
   hnumuCCinFV_stack_12->SetBinError(24,3.212586);
   hnumuCCinFV_stack_12->SetBinError(25,3.81456);
   hnumuCCinFV_stack_12->SetBinError(26,2.478024);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,1.4588);
   hnueCCinFV_stack_13->SetBinContent(4,2.437208);
   hnueCCinFV_stack_13->SetBinContent(5,1.032564);
   hnueCCinFV_stack_13->SetBinContent(6,2.231684);
   hnueCCinFV_stack_13->SetBinContent(7,1.588087);
   hnueCCinFV_stack_13->SetBinContent(8,3.041458);
   hnueCCinFV_stack_13->SetBinContent(9,3.684051);
   hnueCCinFV_stack_13->SetBinContent(10,2.86539);
   hnueCCinFV_stack_13->SetBinContent(11,1.623242);
   hnueCCinFV_stack_13->SetBinContent(12,1.72139);
   hnueCCinFV_stack_13->SetBinContent(13,3.626661);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,3.019368);
   hnueCCinFV_stack_13->SetBinContent(16,0.8523195);
   hnueCCinFV_stack_13->SetBinContent(17,3.932542);
   hnueCCinFV_stack_13->SetBinContent(18,2.613865);
   hnueCCinFV_stack_13->SetBinContent(19,2.204338);
   hnueCCinFV_stack_13->SetBinContent(20,3.375159);
   hnueCCinFV_stack_13->SetBinContent(21,2.127757);
   hnueCCinFV_stack_13->SetBinContent(22,1.612348);
   hnueCCinFV_stack_13->SetBinContent(23,3.729996);
   hnueCCinFV_stack_13->SetBinContent(24,1.093734);
   hnueCCinFV_stack_13->SetBinContent(25,1.558595);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.6664575);
   hnueCCinFV_stack_13->SetBinError(4,1.380611);
   hnueCCinFV_stack_13->SetBinError(5,0.4638397);
   hnueCCinFV_stack_13->SetBinError(6,0.8460623);
   hnueCCinFV_stack_13->SetBinError(7,0.5830615);
   hnueCCinFV_stack_13->SetBinError(8,1.060865);
   hnueCCinFV_stack_13->SetBinError(9,1.18647);
   hnueCCinFV_stack_13->SetBinError(10,1.35873);
   hnueCCinFV_stack_13->SetBinError(11,0.5749614);
   hnueCCinFV_stack_13->SetBinError(12,0.6799435);
   hnueCCinFV_stack_13->SetBinError(13,1.413126);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,1.159416);
   hnueCCinFV_stack_13->SetBinError(16,0.4301776);
   hnueCCinFV_stack_13->SetBinError(17,1.724362);
   hnueCCinFV_stack_13->SetBinError(18,0.8886617);
   hnueCCinFV_stack_13->SetBinError(19,1.055046);
   hnueCCinFV_stack_13->SetBinError(20,1.038082);
   hnueCCinFV_stack_13->SetBinError(21,0.7300175);
   hnueCCinFV_stack_13->SetBinError(22,0.6262438);
   hnueCCinFV_stack_13->SetBinError(23,1.762662);
   hnueCCinFV_stack_13->SetBinError(24,0.4936907);
   hnueCCinFV_stack_13->SetBinError(25,0.6687268);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,11.17511);
   hmcerror__2->SetBinContent(1,155.0427);
   hmcerror__2->SetBinContent(2,201.6468);
   hmcerror__2->SetBinContent(3,233.8149);
   hmcerror__2->SetBinContent(4,240.3332);
   hmcerror__2->SetBinContent(5,242.7915);
   hmcerror__2->SetBinContent(6,257.8333);
   hmcerror__2->SetBinContent(7,238.2493);
   hmcerror__2->SetBinContent(8,261.0436);
   hmcerror__2->SetBinContent(9,266.819);
   hmcerror__2->SetBinContent(10,269.1487);
   hmcerror__2->SetBinContent(11,271.6296);
   hmcerror__2->SetBinContent(12,269.4481);
   hmcerror__2->SetBinContent(13,272.9757);
   hmcerror__2->SetBinContent(14,282.4003);
   hmcerror__2->SetBinContent(15,268.1379);
   hmcerror__2->SetBinContent(16,275.2824);
   hmcerror__2->SetBinContent(17,299.0026);
   hmcerror__2->SetBinContent(18,295.0788);
   hmcerror__2->SetBinContent(19,285.0382);
   hmcerror__2->SetBinContent(20,304.9817);
   hmcerror__2->SetBinContent(21,306.7039);
   hmcerror__2->SetBinContent(22,301.2899);
   hmcerror__2->SetBinContent(23,309.2568);
   hmcerror__2->SetBinContent(24,283.885);
   hmcerror__2->SetBinContent(25,241.0151);
   hmcerror__2->SetBinContent(26,125.4499);
   hmcerror__2->SetBinContent(27,9.630085);
   hmcerror__2->SetBinError(0,1.663435);
   hmcerror__2->SetBinError(1,42.67067);
   hmcerror__2->SetBinError(2,58.14711);
   hmcerror__2->SetBinError(3,65.59452);
   hmcerror__2->SetBinError(4,61.05093);
   hmcerror__2->SetBinError(5,76.63939);
   hmcerror__2->SetBinError(6,69.06648);
   hmcerror__2->SetBinError(7,68.69211);
   hmcerror__2->SetBinError(8,78.73013);
   hmcerror__2->SetBinError(9,69.54159);
   hmcerror__2->SetBinError(10,70.77591);
   hmcerror__2->SetBinError(11,72.62819);
   hmcerror__2->SetBinError(12,74.34028);
   hmcerror__2->SetBinError(13,70.50948);
   hmcerror__2->SetBinError(14,74.06877);
   hmcerror__2->SetBinError(15,70.4443);
   hmcerror__2->SetBinError(16,71.33625);
   hmcerror__2->SetBinError(17,74.04473);
   hmcerror__2->SetBinError(18,77.93125);
   hmcerror__2->SetBinError(19,75.34487);
   hmcerror__2->SetBinError(20,75.57338);
   hmcerror__2->SetBinError(21,81.55748);
   hmcerror__2->SetBinError(22,73.43852);
   hmcerror__2->SetBinError(23,84.33532);
   hmcerror__2->SetBinError(24,71.61325);
   hmcerror__2->SetBinError(25,58.64566);
   hmcerror__2->SetBinError(26,37.66376);
   hmcerror__2->SetBinError(27,7.720451);
   hmcerror__2->SetEntries(7381.09);

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
   Double_t _fy3001[26] = {
   150,
   186,
   229,
   227,
   220,
   226,
   244,
   246,
   283,
   272,
   284,
   270,
   292,
   262,
   265,
   277,
   270,
   269,
   254,
   269,
   299,
   295,
   284,
   225,
   221,
   108};
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
   12.24745,
   13.63818,
   15.13275,
   15.06652,
   14.8324,
   15.0333,
   15.6205,
   15.68439,
   16.8226,
   16.49242,
   16.8523,
   16.43168,
   17.08801,
   16.18641,
   16.27882,
   16.64332,
   16.43168,
   16.40122,
   15.93738,
   16.40122,
   17.29162,
   17.17556,
   16.8523,
   15,
   14.86607,
   10.3923};
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
   12.24745,
   13.63818,
   15.13275,
   15.06652,
   14.8324,
   15.0333,
   15.6205,
   15.68439,
   16.8226,
   16.49242,
   16.8523,
   16.43168,
   17.08801,
   16.18641,
   16.27882,
   16.64332,
   16.43168,
   16.40122,
   15.93738,
   16.40122,
   17.29162,
   17.17556,
   16.8523,
   15,
   14.86607,
   10.3923};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(75.7393);
   Graph_Graph3001->SetMaximum(338.16);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6427.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 752.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 72.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 666.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2170.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  472.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1093.7","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 514.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.5","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   0.2752188,
   0.2883612,
   0.2805403,
   0.2540262,
   0.3156592,
   0.2678726,
   0.2883203,
   0.3015976,
   0.2606321,
   0.2629622,
   0.2673795,
   0.2758983,
   0.2582995,
   0.2622829,
   0.2627167,
   0.2591384,
   0.2476391,
   0.2641032,
   0.2643325,
   0.2477964,
   0.265916,
   0.243747,
   0.2727032,
   0.2522615,
   0.2433277,
   0.3002296};
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
   0.2752188,
   0.2883612,
   0.2805403,
   0.2540262,
   0.3156592,
   0.2678726,
   0.2883203,
   0.3015976,
   0.2606321,
   0.2629622,
   0.2673795,
   0.2758983,
   0.2582995,
   0.2622829,
   0.2627167,
   0.2591384,
   0.2476391,
   0.2641032,
   0.2643325,
   0.2477964,
   0.265916,
   0.243747,
   0.2727032,
   0.2522615,
   0.2433277,
   0.3002296};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   0.2275428,
   0.2494993,
   0.2499423,
   0.2419132,
   0.2776933,
   0.2548771,
   0.2671078,
   0.2752706,
   0.2454071,
   0.2408492,
   0.2566709,
   0.246376,
   0.2418887,
   0.2464448,
   0.2512201,
   0.2392454,
   0.2293907,
   0.2352057,
   0.2421379,
   0.2318109,
   0.2346843,
   0.2253507,
   0.2282581,
   0.2276819,
   0.2144818,
   0.221313};
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
   0.2275428,
   0.2494993,
   0.2499423,
   0.2419132,
   0.2776933,
   0.2548771,
   0.2671078,
   0.2752706,
   0.2454071,
   0.2408492,
   0.2566709,
   0.246376,
   0.2418887,
   0.2464448,
   0.2512201,
   0.2392454,
   0.2293907,
   0.2352057,
   0.2421379,
   0.2318109,
   0.2346843,
   0.2253507,
   0.2282581,
   0.2276819,
   0.2144818,
   0.221313};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3004[26] = {
   0.9674754,
   0.9224048,
   0.9794071,
   0.9445222,
   0.9061271,
   0.8765353,
   1.024137,
   0.9423712,
   1.060644,
   1.010594,
   1.045542,
   1.002048,
   1.069692,
   0.9277612,
   0.9882973,
   1.006239,
   0.9030021,
   0.9116209,
   0.8911085,
   0.8820202,
   0.9748817,
   0.9791233,
   0.9183305,
   0.7925743,
   0.916955,
   0.8609017};
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
   0.07899404,
   0.067634,
   0.06472104,
   0.06269014,
   0.06109108,
   0.05830626,
   0.06556367,
   0.06008339,
   0.06304875,
   0.06127626,
   0.06204147,
   0.06098272,
   0.062599,
   0.05731728,
   0.06071062,
   0.06045906,
   0.05495496,
   0.05558251,
   0.05591312,
   0.05377772,
   0.05637886,
   0.05700676,
   0.05449289,
   0.05283829,
   0.06168107,
   0.08284031};
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
   0.07899404,
   0.067634,
   0.06472104,
   0.06269014,
   0.06109108,
   0.05830626,
   0.06556367,
   0.06008339,
   0.06304875,
   0.06127626,
   0.06204147,
   0.06098272,
   0.062599,
   0.05731728,
   0.06071062,
   0.06045906,
   0.05495496,
   0.05558251,
   0.05591312,
   0.05377772,
   0.05637886,
   0.05700676,
   0.05449289,
   0.05283829,
   0.06168107,
   0.08284031};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.7004805);
   Graph_Graph3004->SetMaximum(1.171547);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
