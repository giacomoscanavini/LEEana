#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 14:28:59 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
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
   pad1->Range(-40,-3.7,293.3333,311.7737);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,10.95078);
   hmc__1->SetBinContent(1,96.36412);
   hmc__1->SetBinContent(2,137.294);
   hmc__1->SetBinContent(3,157.6326);
   hmc__1->SetBinContent(4,149.5288);
   hmc__1->SetBinContent(5,147.9161);
   hmc__1->SetBinContent(6,154.8457);
   hmc__1->SetBinContent(7,142.3613);
   hmc__1->SetBinContent(8,153.1287);
   hmc__1->SetBinContent(9,151.3517);
   hmc__1->SetBinContent(10,155.4864);
   hmc__1->SetBinContent(11,141.9648);
   hmc__1->SetBinContent(12,147.5237);
   hmc__1->SetBinContent(13,141.9228);
   hmc__1->SetBinContent(14,149.3966);
   hmc__1->SetBinContent(15,154.4501);
   hmc__1->SetBinContent(16,145.784);
   hmc__1->SetBinContent(17,160.3737);
   hmc__1->SetBinContent(18,157.7012);
   hmc__1->SetBinContent(19,141.4816);
   hmc__1->SetBinContent(20,164.2676);
   hmc__1->SetBinContent(21,157.3672);
   hmc__1->SetBinContent(22,162.729);
   hmc__1->SetBinContent(23,165.2466);
   hmc__1->SetBinContent(24,164.1353);
   hmc__1->SetBinContent(25,138.2997);
   hmc__1->SetBinContent(26,64.72791);
   hmc__1->SetBinContent(27,6.769166);
   hmc__1->SetBinError(0,1.669252);
   hmc__1->SetBinError(1,21.10102);
   hmc__1->SetBinError(2,28.57924);
   hmc__1->SetBinError(3,34.56635);
   hmc__1->SetBinError(4,31.15498);
   hmc__1->SetBinError(5,30.46544);
   hmc__1->SetBinError(6,32.44368);
   hmc__1->SetBinError(7,32.53782);
   hmc__1->SetBinError(8,35.86052);
   hmc__1->SetBinError(9,34.32663);
   hmc__1->SetBinError(10,31.37888);
   hmc__1->SetBinError(11,31.19241);
   hmc__1->SetBinError(12,31.9583);
   hmc__1->SetBinError(13,28.47844);
   hmc__1->SetBinError(14,30.0624);
   hmc__1->SetBinError(15,28.76171);
   hmc__1->SetBinError(16,30.52904);
   hmc__1->SetBinError(17,30.09184);
   hmc__1->SetBinError(18,33.94228);
   hmc__1->SetBinError(19,30.95995);
   hmc__1->SetBinError(20,33.61343);
   hmc__1->SetBinError(21,32.3695);
   hmc__1->SetBinError(22,31.97798);
   hmc__1->SetBinError(23,34.17171);
   hmc__1->SetBinError(24,31.808);
   hmc__1->SetBinError(25,27.43022);
   hmc__1->SetBinError(26,18.4534);
   hmc__1->SetBinError(27,4.616854);
   hmc__1->SetMinimum(-3.7);
   hmc__1->SetMaximum(296);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(173.5089);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,3.718874);
   hbadmatch_stack_1->SetBinContent(2,2.247316);
   hbadmatch_stack_1->SetBinContent(3,1.697009);
   hbadmatch_stack_1->SetBinContent(4,2.053982);
   hbadmatch_stack_1->SetBinContent(5,1.715495);
   hbadmatch_stack_1->SetBinContent(6,3.196477);
   hbadmatch_stack_1->SetBinContent(7,2.834081);
   hbadmatch_stack_1->SetBinContent(8,3.493324);
   hbadmatch_stack_1->SetBinContent(9,2.736084);
   hbadmatch_stack_1->SetBinContent(10,5.132031);
   hbadmatch_stack_1->SetBinContent(11,3.067496);
   hbadmatch_stack_1->SetBinContent(12,3.967908);
   hbadmatch_stack_1->SetBinContent(13,2.396578);
   hbadmatch_stack_1->SetBinContent(14,4.313238);
   hbadmatch_stack_1->SetBinContent(15,2.944576);
   hbadmatch_stack_1->SetBinContent(16,5.834886);
   hbadmatch_stack_1->SetBinContent(17,3.82567);
   hbadmatch_stack_1->SetBinContent(18,4.829228);
   hbadmatch_stack_1->SetBinContent(19,6.211625);
   hbadmatch_stack_1->SetBinContent(20,5.221409);
   hbadmatch_stack_1->SetBinContent(21,4.563169);
   hbadmatch_stack_1->SetBinContent(22,3.890242);
   hbadmatch_stack_1->SetBinContent(23,5.502053);
   hbadmatch_stack_1->SetBinContent(24,4.696846);
   hbadmatch_stack_1->SetBinContent(25,5.450086);
   hbadmatch_stack_1->SetBinContent(26,3.216965);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.854644);
   hbadmatch_stack_1->SetBinError(2,0.7337357);
   hbadmatch_stack_1->SetBinError(3,0.662685);
   hbadmatch_stack_1->SetBinError(4,0.7078105);
   hbadmatch_stack_1->SetBinError(5,0.6212384);
   hbadmatch_stack_1->SetBinError(6,0.9280619);
   hbadmatch_stack_1->SetBinError(7,0.8081673);
   hbadmatch_stack_1->SetBinError(8,0.8936303);
   hbadmatch_stack_1->SetBinError(9,0.8558273);
   hbadmatch_stack_1->SetBinError(10,1.898173);
   hbadmatch_stack_1->SetBinError(11,0.9163985);
   hbadmatch_stack_1->SetBinError(12,1.155962);
   hbadmatch_stack_1->SetBinError(13,0.8342778);
   hbadmatch_stack_1->SetBinError(14,1.182765);
   hbadmatch_stack_1->SetBinError(15,0.8371236);
   hbadmatch_stack_1->SetBinError(16,1.29872);
   hbadmatch_stack_1->SetBinError(17,0.9573923);
   hbadmatch_stack_1->SetBinError(18,1.168269);
   hbadmatch_stack_1->SetBinError(19,1.578018);
   hbadmatch_stack_1->SetBinError(20,1.262475);
   hbadmatch_stack_1->SetBinError(21,1.155105);
   hbadmatch_stack_1->SetBinError(22,1.008955);
   hbadmatch_stack_1->SetBinError(23,1.285849);
   hbadmatch_stack_1->SetBinError(24,1.333198);
   hbadmatch_stack_1->SetBinError(25,1.266371);
   hbadmatch_stack_1->SetBinError(26,0.982531);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,8.151268);
   houtFV_stack_4->SetBinContent(1,48.42087);
   houtFV_stack_4->SetBinContent(2,29.30917);
   houtFV_stack_4->SetBinContent(3,26.59416);
   houtFV_stack_4->SetBinContent(4,20.72452);
   houtFV_stack_4->SetBinContent(5,16.33976);
   houtFV_stack_4->SetBinContent(6,15.77554);
   houtFV_stack_4->SetBinContent(7,15.30814);
   houtFV_stack_4->SetBinContent(8,15.559);
   houtFV_stack_4->SetBinContent(9,13.82988);
   houtFV_stack_4->SetBinContent(10,11.56267);
   houtFV_stack_4->SetBinContent(11,11.10211);
   houtFV_stack_4->SetBinContent(12,13.69335);
   houtFV_stack_4->SetBinContent(13,12.67123);
   houtFV_stack_4->SetBinContent(14,12.0767);
   houtFV_stack_4->SetBinContent(15,12.11124);
   houtFV_stack_4->SetBinContent(16,10.2039);
   houtFV_stack_4->SetBinContent(17,13.66389);
   houtFV_stack_4->SetBinContent(18,15.6094);
   houtFV_stack_4->SetBinContent(19,13.24688);
   houtFV_stack_4->SetBinContent(20,17.31205);
   houtFV_stack_4->SetBinContent(21,15.53822);
   houtFV_stack_4->SetBinContent(22,21.18993);
   houtFV_stack_4->SetBinContent(23,27.49498);
   houtFV_stack_4->SetBinContent(24,28.70456);
   houtFV_stack_4->SetBinContent(25,27.8398);
   houtFV_stack_4->SetBinContent(26,27.58266);
   houtFV_stack_4->SetBinContent(27,4.248045);
   houtFV_stack_4->SetBinError(0,1.448845);
   houtFV_stack_4->SetBinError(1,3.54109);
   houtFV_stack_4->SetBinError(2,2.732646);
   houtFV_stack_4->SetBinError(3,2.63168);
   houtFV_stack_4->SetBinError(4,2.294023);
   houtFV_stack_4->SetBinError(5,2.004214);
   houtFV_stack_4->SetBinError(6,2.030648);
   houtFV_stack_4->SetBinError(7,1.952877);
   houtFV_stack_4->SetBinError(8,2.144135);
   houtFV_stack_4->SetBinError(9,1.930008);
   houtFV_stack_4->SetBinError(10,1.675953);
   houtFV_stack_4->SetBinError(11,1.637343);
   houtFV_stack_4->SetBinError(12,1.83014);
   houtFV_stack_4->SetBinError(13,1.745912);
   houtFV_stack_4->SetBinError(14,1.675799);
   houtFV_stack_4->SetBinError(15,1.738417);
   houtFV_stack_4->SetBinError(16,1.549318);
   houtFV_stack_4->SetBinError(17,1.876542);
   houtFV_stack_4->SetBinError(18,2.063904);
   houtFV_stack_4->SetBinError(19,1.738067);
   houtFV_stack_4->SetBinError(20,2.19978);
   houtFV_stack_4->SetBinError(21,1.996787);
   houtFV_stack_4->SetBinError(22,2.345659);
   houtFV_stack_4->SetBinError(23,2.907815);
   houtFV_stack_4->SetBinError(24,2.602871);
   houtFV_stack_4->SetBinError(25,2.615302);
   houtFV_stack_4->SetBinError(26,2.563739);
   houtFV_stack_4->SetBinError(27,1.038119);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.128458);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.667206);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.448078);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.318284);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.457783);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.669446);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.332397);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.151716);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.35076);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.569224);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.642546);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.168742);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.411801);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.601028);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.764188);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.072256);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.742192);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.343374);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.224542);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.655332);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.448405);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.971441);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.458784);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.82606);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.802802);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3130755);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6520348);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7252278);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5571321);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5606141);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6788898);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5208455);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5700806);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7186686);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6551117);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7156382);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6727953);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8425311);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7100874);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6075379);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6800359);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7393568);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7801686);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6739512);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.707112);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6685393);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5857938);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6052382);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7627206);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5956232);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03945654);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,1.116008);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,16.32904);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,47.35966);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,57.16716);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,67.53622);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,68.34267);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,68.93022);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,69.36506);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,71.78233);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,75.12622);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,67.58553);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,67.97796);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,67.25287);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,67.65094);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,68.97388);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,68.12692);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,68.35229);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,65.91565);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,67.52344);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,64.48711);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,59.75191);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,66.91842);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,61.10041);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,57.06704);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,49.85764);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,34.81451);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,9.770681);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.5437177);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.4191238);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.306678);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.23931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.456001);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.738871);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.726432);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.709941);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.701573);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.726574);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.905681);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.69018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.678569);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.605077);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.625478);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.695624);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.689602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.716062);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.602984);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.714593);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.562573);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.526719);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.670517);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.538552);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.503157);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.209483);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.88602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,1.009755);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.1480721);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_7->SetBinContent(1,10.79328);
   hCCpi0inFV_stack_7->SetBinContent(2,25.00948);
   hCCpi0inFV_stack_7->SetBinContent(3,27.90102);
   hCCpi0inFV_stack_7->SetBinContent(4,23.04969);
   hCCpi0inFV_stack_7->SetBinContent(5,26.37346);
   hCCpi0inFV_stack_7->SetBinContent(6,24.52836);
   hCCpi0inFV_stack_7->SetBinContent(7,22.75564);
   hCCpi0inFV_stack_7->SetBinContent(8,24.3431);
   hCCpi0inFV_stack_7->SetBinContent(9,30.63013);
   hCCpi0inFV_stack_7->SetBinContent(10,28.37621);
   hCCpi0inFV_stack_7->SetBinContent(11,19.47109);
   hCCpi0inFV_stack_7->SetBinContent(12,24.31746);
   hCCpi0inFV_stack_7->SetBinContent(13,20.49103);
   hCCpi0inFV_stack_7->SetBinContent(14,25.88525);
   hCCpi0inFV_stack_7->SetBinContent(15,26.22275);
   hCCpi0inFV_stack_7->SetBinContent(16,22.11915);
   hCCpi0inFV_stack_7->SetBinContent(17,28.24425);
   hCCpi0inFV_stack_7->SetBinContent(18,25.98483);
   hCCpi0inFV_stack_7->SetBinContent(19,22.62027);
   hCCpi0inFV_stack_7->SetBinContent(20,28.59274);
   hCCpi0inFV_stack_7->SetBinContent(21,25.08658);
   hCCpi0inFV_stack_7->SetBinContent(22,25.59988);
   hCCpi0inFV_stack_7->SetBinContent(23,23.5908);
   hCCpi0inFV_stack_7->SetBinContent(24,30.92285);
   hCCpi0inFV_stack_7->SetBinContent(25,24.17116);
   hCCpi0inFV_stack_7->SetBinContent(26,9.039549);
   hCCpi0inFV_stack_7->SetBinContent(27,0.3401776);
   hCCpi0inFV_stack_7->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_7->SetBinError(1,1.62914);
   hCCpi0inFV_stack_7->SetBinError(2,2.477267);
   hCCpi0inFV_stack_7->SetBinError(3,2.662733);
   hCCpi0inFV_stack_7->SetBinError(4,2.374667);
   hCCpi0inFV_stack_7->SetBinError(5,2.58133);
   hCCpi0inFV_stack_7->SetBinError(6,2.506378);
   hCCpi0inFV_stack_7->SetBinError(7,2.365663);
   hCCpi0inFV_stack_7->SetBinError(8,2.511834);
   hCCpi0inFV_stack_7->SetBinError(9,2.782703);
   hCCpi0inFV_stack_7->SetBinError(10,2.69807);
   hCCpi0inFV_stack_7->SetBinError(11,2.187213);
   hCCpi0inFV_stack_7->SetBinError(12,2.509759);
   hCCpi0inFV_stack_7->SetBinError(13,2.202645);
   hCCpi0inFV_stack_7->SetBinError(14,2.54328);
   hCCpi0inFV_stack_7->SetBinError(15,2.592421);
   hCCpi0inFV_stack_7->SetBinError(16,2.349857);
   hCCpi0inFV_stack_7->SetBinError(17,2.674851);
   hCCpi0inFV_stack_7->SetBinError(18,2.542747);
   hCCpi0inFV_stack_7->SetBinError(19,2.363145);
   hCCpi0inFV_stack_7->SetBinError(20,2.724417);
   hCCpi0inFV_stack_7->SetBinError(21,2.490159);
   hCCpi0inFV_stack_7->SetBinError(22,2.528868);
   hCCpi0inFV_stack_7->SetBinError(23,2.360695);
   hCCpi0inFV_stack_7->SetBinError(24,2.800638);
   hCCpi0inFV_stack_7->SetBinError(25,2.499633);
   hCCpi0inFV_stack_7->SetBinError(26,1.541249);
   hCCpi0inFV_stack_7->SetBinError(27,0.3401776);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(1,1.462145);
   hNCinFV_stack_8->SetBinContent(2,5.948933);
   hNCinFV_stack_8->SetBinContent(3,6.208436);
   hNCinFV_stack_8->SetBinContent(4,5.857033);
   hNCinFV_stack_8->SetBinContent(5,4.639909);
   hNCinFV_stack_8->SetBinContent(6,5.415421);
   hNCinFV_stack_8->SetBinContent(7,5.570109);
   hNCinFV_stack_8->SetBinContent(8,7.567456);
   hNCinFV_stack_8->SetBinContent(9,5.525308);
   hNCinFV_stack_8->SetBinContent(10,7.179097);
   hNCinFV_stack_8->SetBinContent(11,6.8423);
   hNCinFV_stack_8->SetBinContent(12,5.810542);
   hNCinFV_stack_8->SetBinContent(13,4.304679);
   hNCinFV_stack_8->SetBinContent(14,4.60621);
   hNCinFV_stack_8->SetBinContent(15,6.592332);
   hNCinFV_stack_8->SetBinContent(16,6.160255);
   hNCinFV_stack_8->SetBinContent(17,7.081044);
   hNCinFV_stack_8->SetBinContent(18,5.716952);
   hNCinFV_stack_8->SetBinContent(19,7.520966);
   hNCinFV_stack_8->SetBinContent(20,7.142141);
   hNCinFV_stack_8->SetBinContent(21,5.760062);
   hNCinFV_stack_8->SetBinContent(22,4.541731);
   hNCinFV_stack_8->SetBinContent(23,5.80378);
   hNCinFV_stack_8->SetBinContent(24,5.91644);
   hNCinFV_stack_8->SetBinContent(25,4.304679);
   hNCinFV_stack_8->SetBinContent(26,1.463836);
   hNCinFV_stack_8->SetBinContent(27,0.1950248);
   hNCinFV_stack_8->SetBinError(1,0.6198731);
   hNCinFV_stack_8->SetBinError(2,1.286971);
   hNCinFV_stack_8->SetBinError(3,1.209137);
   hNCinFV_stack_8->SetBinError(4,1.241081);
   hNCinFV_stack_8->SetBinError(5,1.008257);
   hNCinFV_stack_8->SetBinError(6,1.226051);
   hNCinFV_stack_8->SetBinError(7,1.177384);
   hNCinFV_stack_8->SetBinError(8,1.387167);
   hNCinFV_stack_8->SetBinError(9,1.194936);
   hNCinFV_stack_8->SetBinError(10,1.359715);
   hNCinFV_stack_8->SetBinError(11,1.316977);
   hNCinFV_stack_8->SetBinError(12,1.257481);
   hNCinFV_stack_8->SetBinError(13,1.020141);
   hNCinFV_stack_8->SetBinError(14,1.001034);
   hNCinFV_stack_8->SetBinError(15,1.316837);
   hNCinFV_stack_8->SetBinError(16,1.225694);
   hNCinFV_stack_8->SetBinError(17,1.388809);
   hNCinFV_stack_8->SetBinError(18,1.210199);
   hNCinFV_stack_8->SetBinError(19,1.401859);
   hNCinFV_stack_8->SetBinError(20,1.301978);
   hNCinFV_stack_8->SetBinError(21,1.192595);
   hNCinFV_stack_8->SetBinError(22,1.11103);
   hNCinFV_stack_8->SetBinError(23,1.256427);
   hNCinFV_stack_8->SetBinError(24,1.142793);
   hNCinFV_stack_8->SetBinError(25,1.020141);
   hNCinFV_stack_8->SetBinError(26,0.620407);
   hNCinFV_stack_8->SetBinError(27,0.1950249);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(1,2.387401);
   hnumuCCinFV_stack_9->SetBinContent(2,4.120407);
   hnumuCCinFV_stack_9->SetBinContent(3,9.348152);
   hnumuCCinFV_stack_9->SetBinContent(4,5.30017);
   hnumuCCinFV_stack_9->SetBinContent(5,8.099461);
   hnumuCCinFV_stack_9->SetBinContent(6,7.05968);
   hnumuCCinFV_stack_9->SetBinContent(7,6.311197);
   hnumuCCinFV_stack_9->SetBinContent(8,7.927612);
   hnumuCCinFV_stack_9->SetBinContent(9,2.539107);
   hnumuCCinFV_stack_9->SetBinContent(10,8.938234);
   hnumuCCinFV_stack_9->SetBinContent(11,7.513136);
   hnumuCCinFV_stack_9->SetBinContent(12,9.817553);
   hnumuCCinFV_stack_9->SetBinContent(13,6.907941);
   hnumuCCinFV_stack_9->SetBinContent(14,10.18443);
   hnumuCCinFV_stack_9->SetBinContent(15,8.03379);
   hnumuCCinFV_stack_9->SetBinContent(16,10.02478);
   hnumuCCinFV_stack_9->SetBinContent(17,10.39345);
   hnumuCCinFV_stack_9->SetBinContent(18,9.708364);
   hnumuCCinFV_stack_9->SetBinContent(19,10.0111);
   hnumuCCinFV_stack_9->SetBinContent(20,8.963211);
   hnumuCCinFV_stack_9->SetBinContent(21,11.8668);
   hnumuCCinFV_stack_9->SetBinContent(22,13.93121);
   hnumuCCinFV_stack_9->SetBinContent(23,14.43853);
   hnumuCCinFV_stack_9->SetBinContent(24,9.091853);
   hnumuCCinFV_stack_9->SetBinContent(25,9.81654);
   hnumuCCinFV_stack_9->SetBinContent(26,6.449645);
   hnumuCCinFV_stack_9->SetBinError(1,0.7836246);
   hnumuCCinFV_stack_9->SetBinError(2,0.9925203);
   hnumuCCinFV_stack_9->SetBinError(3,2.13238);
   hnumuCCinFV_stack_9->SetBinError(4,1.318703);
   hnumuCCinFV_stack_9->SetBinError(5,1.511412);
   hnumuCCinFV_stack_9->SetBinError(6,1.381656);
   hnumuCCinFV_stack_9->SetBinError(7,1.407564);
   hnumuCCinFV_stack_9->SetBinError(8,1.625856);
   hnumuCCinFV_stack_9->SetBinError(9,0.7866874);
   hnumuCCinFV_stack_9->SetBinError(10,1.529834);
   hnumuCCinFV_stack_9->SetBinError(11,1.425303);
   hnumuCCinFV_stack_9->SetBinError(12,2.118896);
   hnumuCCinFV_stack_9->SetBinError(13,1.543043);
   hnumuCCinFV_stack_9->SetBinError(14,1.760236);
   hnumuCCinFV_stack_9->SetBinError(15,1.520372);
   hnumuCCinFV_stack_9->SetBinError(16,1.685786);
   hnumuCCinFV_stack_9->SetBinError(17,1.786036);
   hnumuCCinFV_stack_9->SetBinError(18,1.838801);
   hnumuCCinFV_stack_9->SetBinError(19,1.819696);
   hnumuCCinFV_stack_9->SetBinError(20,2.008633);
   hnumuCCinFV_stack_9->SetBinError(21,1.828174);
   hnumuCCinFV_stack_9->SetBinError(22,2.705986);
   hnumuCCinFV_stack_9->SetBinError(23,2.892858);
   hnumuCCinFV_stack_9->SetBinError(24,1.576359);
   hnumuCCinFV_stack_9->SetBinError(25,2.00272);
   hnumuCCinFV_stack_9->SetBinError(26,1.648376);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_10->SetBinContent(3,0.8377515);
   hnueCCinFV_stack_10->SetBinContent(4,1.795259);
   hnueCCinFV_stack_10->SetBinContent(5,0.5901461);
   hnueCCinFV_stack_10->SetBinContent(6,1.766908);
   hnueCCinFV_stack_10->SetBinContent(7,1.182312);
   hnueCCinFV_stack_10->SetBinContent(8,2.787592);
   hnueCCinFV_stack_10->SetBinContent(9,3.095208);
   hnueCCinFV_stack_10->SetBinContent(10,1.088653);
   hnueCCinFV_stack_10->SetBinContent(11,0.7851874);
   hnueCCinFV_stack_10->SetBinContent(12,0.41253);
   hnueCCinFV_stack_10->SetBinContent(13,3.039896);
   hnueCCinFV_stack_10->SetBinContent(14,0.8401043);
   hnueCCinFV_stack_10->SetBinContent(15,2.032928);
   hnueCCinFV_stack_10->SetBinContent(16,0.8523195);
   hnueCCinFV_stack_10->SetBinContent(17,3.027743);
   hnueCCinFV_stack_10->SetBinContent(18,1.173137);
   hnueCCinFV_stack_10->SetBinContent(19,1.066627);
   hnueCCinFV_stack_10->SetBinContent(20,2.354626);
   hnueCCinFV_stack_10->SetBinContent(21,1.345672);
   hnueCCinFV_stack_10->SetBinContent(22,0.8824731);
   hnueCCinFV_stack_10->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_10->SetBinContent(25,0.6057764);
   hnueCCinFV_stack_10->SetBinError(2,0.4078967);
   hnueCCinFV_stack_10->SetBinError(3,0.4952691);
   hnueCCinFV_stack_10->SetBinError(4,1.329192);
   hnueCCinFV_stack_10->SetBinError(5,0.340721);
   hnueCCinFV_stack_10->SetBinError(6,0.7793238);
   hnueCCinFV_stack_10->SetBinError(7,0.5074547);
   hnueCCinFV_stack_10->SetBinError(8,1.030043);
   hnueCCinFV_stack_10->SetBinError(9,1.109124);
   hnueCCinFV_stack_10->SetBinError(10,0.5547245);
   hnueCCinFV_stack_10->SetBinError(11,0.3925882);
   hnueCCinFV_stack_10->SetBinError(12,0.2921355);
   hnueCCinFV_stack_10->SetBinError(13,1.371918);
   hnueCCinFV_stack_10->SetBinError(14,0.4210972);
   hnueCCinFV_stack_10->SetBinError(15,0.9559525);
   hnueCCinFV_stack_10->SetBinError(16,0.4301776);
   hnueCCinFV_stack_10->SetBinError(17,1.658615);
   hnueCCinFV_stack_10->SetBinError(18,0.6448608);
   hnueCCinFV_stack_10->SetBinError(19,0.8698897);
   hnueCCinFV_stack_10->SetBinError(20,0.8546649);
   hnueCCinFV_stack_10->SetBinError(21,0.5642596);
   hnueCCinFV_stack_10->SetBinError(22,0.4438617);
   hnueCCinFV_stack_10->SetBinError(23,0.2770047);
   hnueCCinFV_stack_10->SetBinError(24,0.3345885);
   hnueCCinFV_stack_10->SetBinError(25,0.4539029);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,10.95078);
   hmcerror__2->SetBinContent(1,96.36412);
   hmcerror__2->SetBinContent(2,137.294);
   hmcerror__2->SetBinContent(3,157.6326);
   hmcerror__2->SetBinContent(4,149.5288);
   hmcerror__2->SetBinContent(5,147.9161);
   hmcerror__2->SetBinContent(6,154.8457);
   hmcerror__2->SetBinContent(7,142.3613);
   hmcerror__2->SetBinContent(8,153.1287);
   hmcerror__2->SetBinContent(9,151.3517);
   hmcerror__2->SetBinContent(10,155.4864);
   hmcerror__2->SetBinContent(11,141.9648);
   hmcerror__2->SetBinContent(12,147.5237);
   hmcerror__2->SetBinContent(13,141.9228);
   hmcerror__2->SetBinContent(14,149.3966);
   hmcerror__2->SetBinContent(15,154.4501);
   hmcerror__2->SetBinContent(16,145.784);
   hmcerror__2->SetBinContent(17,160.3737);
   hmcerror__2->SetBinContent(18,157.7012);
   hmcerror__2->SetBinContent(19,141.4816);
   hmcerror__2->SetBinContent(20,164.2676);
   hmcerror__2->SetBinContent(21,157.3672);
   hmcerror__2->SetBinContent(22,162.729);
   hmcerror__2->SetBinContent(23,165.2466);
   hmcerror__2->SetBinContent(24,164.1353);
   hmcerror__2->SetBinContent(25,138.2997);
   hmcerror__2->SetBinContent(26,64.72791);
   hmcerror__2->SetBinContent(27,6.769166);
   hmcerror__2->SetBinError(0,1.669252);
   hmcerror__2->SetBinError(1,21.10102);
   hmcerror__2->SetBinError(2,28.57924);
   hmcerror__2->SetBinError(3,34.56635);
   hmcerror__2->SetBinError(4,31.15498);
   hmcerror__2->SetBinError(5,30.46544);
   hmcerror__2->SetBinError(6,32.44368);
   hmcerror__2->SetBinError(7,32.53782);
   hmcerror__2->SetBinError(8,35.86052);
   hmcerror__2->SetBinError(9,34.32663);
   hmcerror__2->SetBinError(10,31.37888);
   hmcerror__2->SetBinError(11,31.19241);
   hmcerror__2->SetBinError(12,31.9583);
   hmcerror__2->SetBinError(13,28.47844);
   hmcerror__2->SetBinError(14,30.0624);
   hmcerror__2->SetBinError(15,28.76171);
   hmcerror__2->SetBinError(16,30.52904);
   hmcerror__2->SetBinError(17,30.09184);
   hmcerror__2->SetBinError(18,33.94228);
   hmcerror__2->SetBinError(19,30.95995);
   hmcerror__2->SetBinError(20,33.61343);
   hmcerror__2->SetBinError(21,32.3695);
   hmcerror__2->SetBinError(22,31.97798);
   hmcerror__2->SetBinError(23,34.17171);
   hmcerror__2->SetBinError(24,31.808);
   hmcerror__2->SetBinError(25,27.43022);
   hmcerror__2->SetBinError(26,18.4534);
   hmcerror__2->SetBinError(27,4.616854);
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(39.53787);
   Graph_Graph3001->SetMaximum(213.0618);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.2/26","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 475.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 56.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 493.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1555.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 626.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 144.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxX_all");
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
   0.2189718,
   0.2081608,
   0.2192842,
   0.2083544,
   0.2059643,
   0.2095226,
   0.2285581,
   0.2341855,
   0.2268005,
   0.201811,
   0.2197193,
   0.2166316,
   0.2006615,
   0.2012255,
   0.1862201,
   0.2094129,
   0.1876357,
   0.2152316,
   0.2188267,
   0.2046261,
   0.2056941,
   0.1965106,
   0.2067922,
   0.1937913,
   0.198339,
   0.2850918};
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
   0.2189718,
   0.2081608,
   0.2192842,
   0.2083544,
   0.2059643,
   0.2095226,
   0.2285581,
   0.2341855,
   0.2268005,
   0.201811,
   0.2197193,
   0.2166316,
   0.2006615,
   0.2012255,
   0.1862201,
   0.2094129,
   0.1876357,
   0.2152316,
   0.2188267,
   0.2046261,
   0.2056941,
   0.1965106,
   0.2067922,
   0.1937913,
   0.198339,
   0.2850918};
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
   0.1826495,
   0.1830681,
   0.1908043,
   0.1897358,
   0.191786,
   0.1893495,
   0.1998981,
   0.1948227,
   0.1989835,
   0.1780734,
   0.1975087,
   0.1942693,
   0.186267,
   0.1945282,
   0.17843,
   0.1868266,
   0.1736143,
   0.1882685,
   0.2015149,
   0.1807122,
   0.1901851,
   0.1696662,
   0.1771556,
   0.1795365,
   0.1668513,
   0.1943315};
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
   0.1826495,
   0.1830681,
   0.1908043,
   0.1897358,
   0.191786,
   0.1893495,
   0.1998981,
   0.1948227,
   0.1989835,
   0.1780734,
   0.1975087,
   0.1942693,
   0.186267,
   0.1945282,
   0.17843,
   0.1868266,
   0.1736143,
   0.1882685,
   0.2015149,
   0.1807122,
   0.1901851,
   0.1696662,
   0.1771556,
   0.1795365,
   0.1668513,
   0.1943315};
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
   0.9962214,
   1.026993,
   0.8564216,
   0.9095235,
   0.9600037,
   0.9041256,
   0.9974623,
   1.012221,
   1.109998,
   1.016166,
   1.12704,
   1.132021,
   1.218973,
   1.084362,
   0.9388146,
   1.090655,
   0.9353154,
   0.9321425,
   0.9259153,
   0.9679328,
   1.061212,
   1.063117,
   1.119539,
   0.7737519,
   0.9544493,
   0.9578557};
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
   0.1029387,
   0.0864884,
   0.07370903,
   0.077991,
   0.08056172,
   0.07641256,
   0.08370518,
   0.08130351,
   0.08563819,
   0.08084182,
   0.08910033,
   0.08759845,
   0.09267678,
   0.08519554,
   0.07796431,
   0.08649456,
   0.07636819,
   0.07688181,
   0.08089759,
   0.07676206,
   0.08211906,
   0.08082731,
   0.08231015,
   0.06865938,
   0.08307414,
   0.1236221};
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
   0.1008467,
   0.0864884,
   0.07370903,
   0.077991,
   0.08056172,
   0.07641256,
   0.08370518,
   0.08130351,
   0.08563819,
   0.08084182,
   0.08910033,
   0.08759845,
   0.09267678,
   0.08519554,
   0.07796431,
   0.08649456,
   0.07636819,
   0.07688181,
   0.08089759,
   0.07676206,
   0.08211906,
   0.08082731,
   0.08231015,
   0.06865938,
   0.08307414,
   0.1204874};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.6444368);
   Graph_Graph3004->SetMaximum(1.372305);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
