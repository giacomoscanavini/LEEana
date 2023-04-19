#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 20:27:22 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   hmc__10->SetBinContent(0,11.14749);
   hmc__10->SetBinContent(1,98.07455);
   hmc__10->SetBinContent(2,141.0086);
   hmc__10->SetBinContent(3,161.5371);
   hmc__10->SetBinContent(4,153.6755);
   hmc__10->SetBinContent(5,152.3093);
   hmc__10->SetBinContent(6,158.1119);
   hmc__10->SetBinContent(7,145.5423);
   hmc__10->SetBinContent(8,157.1251);
   hmc__10->SetBinContent(9,155.4081);
   hmc__10->SetBinContent(10,159.6846);
   hmc__10->SetBinContent(11,146.6948);
   hmc__10->SetBinContent(12,150.1645);
   hmc__10->SetBinContent(13,145.1021);
   hmc__10->SetBinContent(14,152.6241);
   hmc__10->SetBinContent(15,156.5909);
   hmc__10->SetBinContent(16,150.4804);
   hmc__10->SetBinContent(17,163.8512);
   hmc__10->SetBinContent(18,160.579);
   hmc__10->SetBinContent(19,144.4659);
   hmc__10->SetBinContent(20,168.2287);
   hmc__10->SetBinContent(21,161.08);
   hmc__10->SetBinContent(22,165.8052);
   hmc__10->SetBinContent(23,167.9887);
   hmc__10->SetBinContent(24,168.2432);
   hmc__10->SetBinContent(25,142.5477);
   hmc__10->SetBinContent(26,65.2648);
   hmc__10->SetBinContent(27,6.769165);
   hmc__10->SetBinError(0,1.680803);
   hmc__10->SetBinError(1,27.8242);
   hmc__10->SetBinError(2,36.91149);
   hmc__10->SetBinError(3,44.38085);
   hmc__10->SetBinError(4,42.32346);
   hmc__10->SetBinError(5,42.59874);
   hmc__10->SetBinError(6,40.3643);
   hmc__10->SetBinError(7,38.9737);
   hmc__10->SetBinError(8,39.23385);
   hmc__10->SetBinError(9,48.25265);
   hmc__10->SetBinError(10,40.94839);
   hmc__10->SetBinError(11,37.05989);
   hmc__10->SetBinError(12,38.18233);
   hmc__10->SetBinError(13,34.76352);
   hmc__10->SetBinError(14,43.76372);
   hmc__10->SetBinError(15,36.30042);
   hmc__10->SetBinError(16,37.90243);
   hmc__10->SetBinError(17,37.20828);
   hmc__10->SetBinError(18,46.18895);
   hmc__10->SetBinError(19,43.27852);
   hmc__10->SetBinError(20,40.56695);
   hmc__10->SetBinError(21,39.20276);
   hmc__10->SetBinError(22,38.91828);
   hmc__10->SetBinError(23,48.4056);
   hmc__10->SetBinError(24,41.23569);
   hmc__10->SetBinError(25,42.67933);
   hmc__10->SetBinError(26,27.56725);
   hmc__10->SetBinError(27,5.687631);
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
   hs4_stack_4->SetMinimum(-3.571482e-09);
   hs4_stack_4->SetMaximum(176.6554);
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
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6961718);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2155126);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05579997);
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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.9205402);
   hNCpi0inFVres_stack_7->SetBinContent(1,12.78805);
   hNCpi0inFVres_stack_7->SetBinContent(2,39.13378);
   hNCpi0inFVres_stack_7->SetBinContent(3,48.27267);
   hNCpi0inFVres_stack_7->SetBinContent(4,54.4969);
   hNCpi0inFVres_stack_7->SetBinContent(5,57.11636);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.21141);
   hNCpi0inFVres_stack_7->SetBinContent(7,59.22936);
   hNCpi0inFVres_stack_7->SetBinContent(8,59.55294);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.06741);
   hNCpi0inFVres_stack_7->SetBinContent(10,54.98183);
   hNCpi0inFVres_stack_7->SetBinContent(11,58.43994);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.21465);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.04557);
   hNCpi0inFVres_stack_7->SetBinContent(14,58.07125);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.53991);
   hNCpi0inFVres_stack_7->SetBinContent(16,57.88411);
   hNCpi0inFVres_stack_7->SetBinContent(17,54.59385);
   hNCpi0inFVres_stack_7->SetBinContent(18,55.02667);
   hNCpi0inFVres_stack_7->SetBinContent(19,54.42198);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.27857);
   hNCpi0inFVres_stack_7->SetBinContent(21,53.64095);
   hNCpi0inFVres_stack_7->SetBinContent(22,50.78352);
   hNCpi0inFVres_stack_7->SetBinContent(23,46.99725);
   hNCpi0inFVres_stack_7->SetBinContent(24,40.97677);
   hNCpi0inFVres_stack_7->SetBinContent(25,28.52703);
   hNCpi0inFVres_stack_7->SetBinContent(26,8.139855);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3905998);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3707519);
   hNCpi0inFVres_stack_7->SetBinError(1,1.15954);
   hNCpi0inFVres_stack_7->SetBinError(2,2.027885);
   hNCpi0inFVres_stack_7->SetBinError(3,2.272243);
   hNCpi0inFVres_stack_7->SetBinError(4,2.443888);
   hNCpi0inFVres_stack_7->SetBinError(5,2.479109);
   hNCpi0inFVres_stack_7->SetBinError(6,2.414674);
   hNCpi0inFVres_stack_7->SetBinError(7,2.527501);
   hNCpi0inFVres_stack_7->SetBinError(8,2.468147);
   hNCpi0inFVres_stack_7->SetBinError(9,2.700746);
   hNCpi0inFVres_stack_7->SetBinError(10,2.445692);
   hNCpi0inFVres_stack_7->SetBinError(11,2.493328);
   hNCpi0inFVres_stack_7->SetBinError(12,2.402892);
   hNCpi0inFVres_stack_7->SetBinError(13,2.366208);
   hNCpi0inFVres_stack_7->SetBinError(14,2.486659);
   hNCpi0inFVres_stack_7->SetBinError(15,2.45773);
   hNCpi0inFVres_stack_7->SetBinError(16,2.517524);
   hNCpi0inFVres_stack_7->SetBinError(17,2.355822);
   hNCpi0inFVres_stack_7->SetBinError(18,2.433487);
   hNCpi0inFVres_stack_7->SetBinError(19,2.367592);
   hNCpi0inFVres_stack_7->SetBinError(20,2.279668);
   hNCpi0inFVres_stack_7->SetBinError(21,2.369906);
   hNCpi0inFVres_stack_7->SetBinError(22,2.342956);
   hNCpi0inFVres_stack_7->SetBinError(23,2.260509);
   hNCpi0inFVres_stack_7->SetBinError(24,2.005019);
   hNCpi0inFVres_stack_7->SetBinError(25,1.714428);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9353173);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1043922);
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
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.540988);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.002684);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.782883);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.48099);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.37602);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.13257);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.926783);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.7971);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.77982);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.8788);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.384897);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.619555);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.90919);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.70733);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.30785);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.81336);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.98683);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.106);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.897722);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.08257);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.98485);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.801069);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.567252);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.825065);
   hNCpi0inFVdis_stack_8->SetBinContent(25,6.175886);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.435358);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.153118);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6023911);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9465548);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9304495);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.20322);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.085334);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.196354);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9474445);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.136172);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.068255);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.090491);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.973148);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9839203);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.117027);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.038011);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.073767);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9837553);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.087901);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.184694);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.978068);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.069469);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.22486);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9662575);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.037481);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9274468);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7840248);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3264641);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1050124);
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
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
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
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,3.172568);
   hNCinFV_stack_11->SetBinContent(2,9.663465);
   hNCinFV_stack_11->SetBinContent(3,10.11292);
   hNCinFV_stack_11->SetBinContent(4,10.00364);
   hNCinFV_stack_11->SetBinContent(5,9.033108);
   hNCinFV_stack_11->SetBinContent(6,8.68158);
   hNCinFV_stack_11->SetBinContent(7,8.751129);
   hNCinFV_stack_11->SetBinContent(8,11.56384);
   hNCinFV_stack_11->SetBinContent(9,9.581709);
   hNCinFV_stack_11->SetBinContent(10,11.37727);
   hNCinFV_stack_11->SetBinContent(11,11.57229);
   hNCinFV_stack_11->SetBinContent(12,8.451289);
   hNCinFV_stack_11->SetBinContent(13,7.484009);
   hNCinFV_stack_11->SetBinContent(14,7.833723);
   hNCinFV_stack_11->SetBinContent(15,8.733142);
   hNCinFV_stack_11->SetBinContent(16,10.85667);
   hNCinFV_stack_11->SetBinContent(17,10.55852);
   hNCinFV_stack_11->SetBinContent(18,8.594751);
   hNCinFV_stack_11->SetBinContent(19,10.50527);
   hNCinFV_stack_11->SetBinContent(20,11.10326);
   hNCinFV_stack_11->SetBinContent(21,9.472904);
   hNCinFV_stack_11->SetBinContent(22,7.617937);
   hNCinFV_stack_11->SetBinContent(23,8.545961);
   hNCinFV_stack_11->SetBinContent(24,10.0244);
   hNCinFV_stack_11->SetBinContent(25,8.552724);
   hNCinFV_stack_11->SetBinContent(26,2.000729);
   hNCinFV_stack_11->SetBinContent(27,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.8764662);
   hNCinFV_stack_11->SetBinError(2,1.606516);
   hNCinFV_stack_11->SetBinError(3,1.556489);
   hNCinFV_stack_11->SetBinError(4,1.642137);
   hNCinFV_stack_11->SetBinError(5,1.473757);
   hNCinFV_stack_11->SetBinError(6,1.545338);
   hNCinFV_stack_11->SetBinError(7,1.468924);
   hNCinFV_stack_11->SetBinError(8,1.732308);
   hNCinFV_stack_11->SetBinError(9,1.571258);
   hNCinFV_stack_11->SetBinError(10,1.722256);
   hNCinFV_stack_11->SetBinError(11,1.733263);
   hNCinFV_stack_11->SetBinError(12,1.482235);
   hNCinFV_stack_11->SetBinError(13,1.345931);
   hNCinFV_stack_11->SetBinError(14,1.316282);
   hNCinFV_stack_11->SetBinError(15,1.532671);
   hNCinFV_stack_11->SetBinError(16,1.618563);
   hNCinFV_stack_11->SetBinError(17,1.630855);
   hNCinFV_stack_11->SetBinError(18,1.507993);
   hNCinFV_stack_11->SetBinError(19,1.642564);
   hNCinFV_stack_11->SetBinError(20,1.618268);
   hNCinFV_stack_11->SetBinError(21,1.531737);
   hNCinFV_stack_11->SetBinError(22,1.443332);
   hNCinFV_stack_11->SetBinError(23,1.454555);
   hNCinFV_stack_11->SetBinError(24,1.5192);
   hNCinFV_stack_11->SetBinError(25,1.455465);
   hNCinFV_stack_11->SetBinError(26,0.7343859);
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
   hmcerror__11->SetBinContent(0,11.14749);
   hmcerror__11->SetBinContent(1,98.07455);
   hmcerror__11->SetBinContent(2,141.0086);
   hmcerror__11->SetBinContent(3,161.5371);
   hmcerror__11->SetBinContent(4,153.6755);
   hmcerror__11->SetBinContent(5,152.3093);
   hmcerror__11->SetBinContent(6,158.1119);
   hmcerror__11->SetBinContent(7,145.5423);
   hmcerror__11->SetBinContent(8,157.1251);
   hmcerror__11->SetBinContent(9,155.4081);
   hmcerror__11->SetBinContent(10,159.6846);
   hmcerror__11->SetBinContent(11,146.6948);
   hmcerror__11->SetBinContent(12,150.1645);
   hmcerror__11->SetBinContent(13,145.1021);
   hmcerror__11->SetBinContent(14,152.6241);
   hmcerror__11->SetBinContent(15,156.5909);
   hmcerror__11->SetBinContent(16,150.4804);
   hmcerror__11->SetBinContent(17,163.8512);
   hmcerror__11->SetBinContent(18,160.579);
   hmcerror__11->SetBinContent(19,144.4659);
   hmcerror__11->SetBinContent(20,168.2287);
   hmcerror__11->SetBinContent(21,161.08);
   hmcerror__11->SetBinContent(22,165.8052);
   hmcerror__11->SetBinContent(23,167.9887);
   hmcerror__11->SetBinContent(24,168.2432);
   hmcerror__11->SetBinContent(25,142.5477);
   hmcerror__11->SetBinContent(26,65.2648);
   hmcerror__11->SetBinContent(27,6.769165);
   hmcerror__11->SetBinError(0,1.680803);
   hmcerror__11->SetBinError(1,27.8242);
   hmcerror__11->SetBinError(2,36.91149);
   hmcerror__11->SetBinError(3,44.38085);
   hmcerror__11->SetBinError(4,42.32346);
   hmcerror__11->SetBinError(5,42.59874);
   hmcerror__11->SetBinError(6,40.3643);
   hmcerror__11->SetBinError(7,38.9737);
   hmcerror__11->SetBinError(8,39.23385);
   hmcerror__11->SetBinError(9,48.25265);
   hmcerror__11->SetBinError(10,40.94839);
   hmcerror__11->SetBinError(11,37.05989);
   hmcerror__11->SetBinError(12,38.18233);
   hmcerror__11->SetBinError(13,34.76352);
   hmcerror__11->SetBinError(14,43.76372);
   hmcerror__11->SetBinError(15,36.30042);
   hmcerror__11->SetBinError(16,37.90243);
   hmcerror__11->SetBinError(17,37.20828);
   hmcerror__11->SetBinError(18,46.18895);
   hmcerror__11->SetBinError(19,43.27852);
   hmcerror__11->SetBinError(20,40.56695);
   hmcerror__11->SetBinError(21,39.20276);
   hmcerror__11->SetBinError(22,38.91828);
   hmcerror__11->SetBinError(23,48.4056);
   hmcerror__11->SetBinError(24,41.23569);
   hmcerror__11->SetBinError(25,42.67933);
   hmcerror__11->SetBinError(26,27.56725);
   hmcerror__11->SetBinError(27,5.687631);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/26","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 493.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1290.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 233.8","F");

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
   0.2837046,
   0.2617677,
   0.2747408,
   0.2754081,
   0.2796858,
   0.2552895,
   0.2677826,
   0.2496982,
   0.31049,
   0.2564329,
   0.2526326,
   0.2542701,
   0.2395797,
   0.2867419,
   0.2318169,
   0.2518762,
   0.2270858,
   0.28764,
   0.299576,
   0.2411416,
   0.2433744,
   0.2347229,
   0.2881479,
   0.2450957,
   0.2994039,
   0.4223907};
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
   0.2837046,
   0.2617677,
   0.2747408,
   0.2754081,
   0.2796858,
   0.2552895,
   0.2677826,
   0.2496982,
   0.31049,
   0.2564329,
   0.2526326,
   0.2542701,
   0.2395797,
   0.2867419,
   0.2318169,
   0.2518762,
   0.2270858,
   0.28764,
   0.299576,
   0.2411416,
   0.2433744,
   0.2347229,
   0.2881479,
   0.2450957,
   0.2994039,
   0.4223907};
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
   0.1885229,
   0.1909249,
   0.1978336,
   0.1987896,
   0.2016077,
   0.1989859,
   0.2113424,
   0.2059284,
   0.20885,
   0.1894521,
   0.2093694,
   0.2059776,
   0.1981566,
   0.2066895,
   0.1897006,
   0.1969859,
   0.1833298,
   0.1984377,
   0.2105269,
   0.1877108,
   0.1991265,
   0.1777837,
   0.1842272,
   0.1858618,
   0.1728546,
   0.1998742};
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
   0.1885229,
   0.1909249,
   0.1978336,
   0.1987896,
   0.2016077,
   0.1989859,
   0.2113424,
   0.2059284,
   0.20885,
   0.1894521,
   0.2093694,
   0.2059776,
   0.1981566,
   0.2066895,
   0.1897006,
   0.1969859,
   0.1833298,
   0.1984377,
   0.2105269,
   0.1877108,
   0.1991265,
   0.1777837,
   0.1842272,
   0.1858618,
   0.1728546,
   0.1998742};
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
   0.9788472,
   0.9999392,
   0.8357212,
   0.8849819,
   0.9323134,
   0.8854489,
   0.9756614,
   0.9864754,
   1.081025,
   0.9894504,
   1.0907,
   1.112114,
   1.192264,
   1.061431,
   0.9259797,
   1.056616,
   0.9154649,
   0.9154371,
   0.9067881,
   0.9451418,
   1.036752,
   1.043393,
   1.101264,
   0.7548595,
   0.9260059,
   0.9499761};
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
   0.1011435,
   0.08421007,
   0.07192743,
   0.07588657,
   0.078238,
   0.07483409,
   0.08187568,
   0.07923561,
   0.0834029,
   0.07871644,
   0.08622739,
   0.08605797,
   0.09064614,
   0.08339393,
   0.07689843,
   0.0837951,
   0.07474739,
   0.07550398,
   0.07922645,
   0.07495462,
   0.08022625,
   0.07932771,
   0.08096656,
   0.06698294,
   0.08059847,
   0.1226051};
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
   0.09908789,
   0.08421007,
   0.07192743,
   0.07588657,
   0.078238,
   0.07483409,
   0.08187568,
   0.07923561,
   0.0834029,
   0.07871644,
   0.08622739,
   0.08605797,
   0.09064614,
   0.08339393,
   0.07689843,
   0.0837951,
   0.07474739,
   0.07550398,
   0.07922645,
   0.07495462,
   0.08022625,
   0.07932771,
   0.08096656,
   0.06698294,
   0.08059847,
   0.1194963};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,286);
   Graph_Graph3016->SetMinimum(0.6283732);
   Graph_Graph3016->SetMaximum(1.342413);
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
