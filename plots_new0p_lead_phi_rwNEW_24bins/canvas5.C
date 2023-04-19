#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 18:06:01 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-2.48,3.957692,274.2358);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__13->SetBinContent(1,121.871);
   hmc__13->SetBinContent(2,120.5449);
   hmc__13->SetBinContent(3,107.5972);
   hmc__13->SetBinContent(4,107.0109);
   hmc__13->SetBinContent(5,88.58628);
   hmc__13->SetBinContent(6,89.97593);
   hmc__13->SetBinContent(7,84.08799);
   hmc__13->SetBinContent(8,98.55602);
   hmc__13->SetBinContent(9,103.9239);
   hmc__13->SetBinContent(10,100.1357);
   hmc__13->SetBinContent(11,120.0589);
   hmc__13->SetBinContent(12,112.9667);
   hmc__13->SetBinContent(13,122.2083);
   hmc__13->SetBinContent(14,121.0046);
   hmc__13->SetBinContent(15,115.0828);
   hmc__13->SetBinContent(16,96.53568);
   hmc__13->SetBinContent(17,99.10236);
   hmc__13->SetBinContent(18,85.26083);
   hmc__13->SetBinContent(19,80.59754);
   hmc__13->SetBinContent(20,95.07976);
   hmc__13->SetBinContent(21,95.45);
   hmc__13->SetBinContent(22,100.6208);
   hmc__13->SetBinContent(23,110.7673);
   hmc__13->SetBinContent(24,120.0169);
   hmc__13->SetBinError(1,41.62044);
   hmc__13->SetBinError(2,42.38054);
   hmc__13->SetBinError(3,41.97964);
   hmc__13->SetBinError(4,40.45813);
   hmc__13->SetBinError(5,34.29796);
   hmc__13->SetBinError(6,32.86833);
   hmc__13->SetBinError(7,32.70414);
   hmc__13->SetBinError(8,37.75608);
   hmc__13->SetBinError(9,41.90788);
   hmc__13->SetBinError(10,37.78578);
   hmc__13->SetBinError(11,49.08176);
   hmc__13->SetBinError(12,41.23514);
   hmc__13->SetBinError(13,41.6943);
   hmc__13->SetBinError(14,43.9641);
   hmc__13->SetBinError(15,43.75608);
   hmc__13->SetBinError(16,36.70421);
   hmc__13->SetBinError(17,38.68646);
   hmc__13->SetBinError(18,48.68516);
   hmc__13->SetBinError(19,28.74332);
   hmc__13->SetBinError(20,38.3881);
   hmc__13->SetBinError(21,38.628);
   hmc__13->SetBinError(22,40.75233);
   hmc__13->SetBinError(23,41.52992);
   hmc__13->SetBinError(24,41.29935);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-2.48);
   hmc__13->SetMaximum(260.4);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,-3.15,3.15);
   hs5_stack_5->SetMinimum(-1.244044e-08);
   hs5_stack_5->SetMaximum(128.3188);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.410577);
   hbadmatch_stack_1->SetBinContent(2,3.176513);
   hbadmatch_stack_1->SetBinContent(3,2.568357);
   hbadmatch_stack_1->SetBinContent(4,3.371073);
   hbadmatch_stack_1->SetBinContent(5,3.166003);
   hbadmatch_stack_1->SetBinContent(6,1.894974);
   hbadmatch_stack_1->SetBinContent(7,2.864219);
   hbadmatch_stack_1->SetBinContent(8,2.095389);
   hbadmatch_stack_1->SetBinContent(9,4.555413);
   hbadmatch_stack_1->SetBinContent(10,0.7319179);
   hbadmatch_stack_1->SetBinContent(11,2.248884);
   hbadmatch_stack_1->SetBinContent(12,2.707971);
   hbadmatch_stack_1->SetBinContent(13,2.519343);
   hbadmatch_stack_1->SetBinContent(14,1.732778);
   hbadmatch_stack_1->SetBinContent(15,0.9818863);
   hbadmatch_stack_1->SetBinContent(16,3.088538);
   hbadmatch_stack_1->SetBinContent(17,2.534799);
   hbadmatch_stack_1->SetBinContent(18,1.713827);
   hbadmatch_stack_1->SetBinContent(19,2.458558);
   hbadmatch_stack_1->SetBinContent(20,4.046011);
   hbadmatch_stack_1->SetBinContent(21,1.855576);
   hbadmatch_stack_1->SetBinContent(22,1.715188);
   hbadmatch_stack_1->SetBinContent(23,1.370245);
   hbadmatch_stack_1->SetBinContent(24,1.303475);
   hbadmatch_stack_1->SetBinError(1,1.063477);
   hbadmatch_stack_1->SetBinError(2,0.9187892);
   hbadmatch_stack_1->SetBinError(3,0.8407006);
   hbadmatch_stack_1->SetBinError(4,0.9753204);
   hbadmatch_stack_1->SetBinError(5,0.9090301);
   hbadmatch_stack_1->SetBinError(6,0.6915972);
   hbadmatch_stack_1->SetBinError(7,1.284284);
   hbadmatch_stack_1->SetBinError(8,0.6657661);
   hbadmatch_stack_1->SetBinError(9,1.178645);
   hbadmatch_stack_1->SetBinError(10,0.438694);
   hbadmatch_stack_1->SetBinError(11,0.7743533);
   hbadmatch_stack_1->SetBinError(12,0.888636);
   hbadmatch_stack_1->SetBinError(13,0.8528556);
   hbadmatch_stack_1->SetBinError(14,0.737246);
   hbadmatch_stack_1->SetBinError(15,0.4391155);
   hbadmatch_stack_1->SetBinError(16,0.9955974);
   hbadmatch_stack_1->SetBinError(17,0.7971804);
   hbadmatch_stack_1->SetBinError(18,0.6207051);
   hbadmatch_stack_1->SetBinError(19,0.7968033);
   hbadmatch_stack_1->SetBinError(20,1.070545);
   hbadmatch_stack_1->SetBinError(21,0.6794384);
   hbadmatch_stack_1->SetBinError(22,0.6691181);
   hbadmatch_stack_1->SetBinError(23,0.5179089);
   hbadmatch_stack_1->SetBinError(24,0.6014233);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,3.718413);
   hext_stack_2->SetBinContent(2,2.752401);
   hext_stack_2->SetBinContent(3,6.165187);
   hext_stack_2->SetBinContent(4,8.503808);
   hext_stack_2->SetBinContent(5,5.504803);
   hext_stack_2->SetBinContent(6,7.359033);
   hext_stack_2->SetBinContent(7,6.470814);
   hext_stack_2->SetBinContent(8,9.380438);
   hext_stack_2->SetBinContent(9,5.676386);
   hext_stack_2->SetBinContent(10,5.095432);
   hext_stack_2->SetBinContent(11,4.132192);
   hext_stack_2->SetBinContent(12,2.517386);
   hext_stack_2->SetBinContent(13,3.394015);
   hext_stack_2->SetBinContent(14,3.967789);
   hext_stack_2->SetBinContent(15,4.95257);
   hext_stack_2->SetBinContent(16,5.419829);
   hext_stack_2->SetBinContent(17,4.613812);
   hext_stack_2->SetBinContent(18,5.84797);
   hext_stack_2->SetBinContent(19,7.855014);
   hext_stack_2->SetBinContent(20,9.406388);
   hext_stack_2->SetBinContent(21,3.483397);
   hext_stack_2->SetBinContent(22,4.277825);
   hext_stack_2->SetBinContent(23,5.187586);
   hext_stack_2->SetBinContent(24,5.344809);
   hext_stack_2->SetBinError(1,1.296206);
   hext_stack_2->SetBinError(2,1.07854);
   hext_stack_2->SetBinError(3,1.571905);
   hext_stack_2->SetBinError(4,1.915728);
   hext_stack_2->SetBinError(5,1.525286);
   hext_stack_2->SetBinError(6,1.853466);
   hext_stack_2->SetBinError(7,1.686238);
   hext_stack_2->SetBinError(8,2.080391);
   hext_stack_2->SetBinError(9,1.49849);
   hext_stack_2->SetBinError(10,1.580348);
   hext_stack_2->SetBinError(11,1.282292);
   hext_stack_2->SetBinError(12,0.9575503);
   hext_stack_2->SetBinError(13,1.254957);
   hext_stack_2->SetBinError(14,1.234542);
   hext_stack_2->SetBinError(15,1.331809);
   hext_stack_2->SetBinError(16,1.613299);
   hext_stack_2->SetBinError(17,1.439057);
   hext_stack_2->SetBinError(18,1.471207);
   hext_stack_2->SetBinError(19,1.859985);
   hext_stack_2->SetBinError(20,1.964573);
   hext_stack_2->SetBinError(21,1.197416);
   hext_stack_2->SetBinError(22,1.425388);
   hext_stack_2->SetBinError(23,1.421289);
   hext_stack_2->SetBinError(24,1.530177);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.7408447);
   hdirt_stack_3->SetBinContent(3,0.6515772);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,0.9621688);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.7759784);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.7618795);
   hdirt_stack_3->SetBinContent(17,0.4257011);
   hdirt_stack_3->SetBinContent(18,0.2238023);
   hdirt_stack_3->SetBinContent(19,0.6552311);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,0.590017);
   hdirt_stack_3->SetBinContent(22,0.4007975);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.5529928);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.4510433);
   hdirt_stack_3->SetBinError(3,0.4051801);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.4830285);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.3381872);
   hdirt_stack_3->SetBinError(9,0.258803);
   hdirt_stack_3->SetBinError(10,0.458477);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.480555);
   hdirt_stack_3->SetBinError(17,0.3084732);
   hdirt_stack_3->SetBinError(18,0.2189231);
   hdirt_stack_3->SetBinError(19,0.3342221);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,0.4557601);
   hdirt_stack_3->SetBinError(22,0.4007975);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.437291);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,5.11682);
   houtFV_stack_4->SetBinContent(2,5.66646);
   houtFV_stack_4->SetBinContent(3,5.315069);
   houtFV_stack_4->SetBinContent(4,7.555397);
   houtFV_stack_4->SetBinContent(5,4.897448);
   houtFV_stack_4->SetBinContent(6,6.211817);
   houtFV_stack_4->SetBinContent(7,5.531462);
   houtFV_stack_4->SetBinContent(8,4.981653);
   houtFV_stack_4->SetBinContent(9,5.267672);
   houtFV_stack_4->SetBinContent(10,5.071489);
   houtFV_stack_4->SetBinContent(11,4.735266);
   houtFV_stack_4->SetBinContent(12,6.246767);
   houtFV_stack_4->SetBinContent(13,4.719357);
   houtFV_stack_4->SetBinContent(14,6.841998);
   houtFV_stack_4->SetBinContent(15,7.28749);
   houtFV_stack_4->SetBinContent(16,6.781893);
   houtFV_stack_4->SetBinContent(17,5.540946);
   houtFV_stack_4->SetBinContent(18,5.271958);
   houtFV_stack_4->SetBinContent(19,4.983344);
   houtFV_stack_4->SetBinContent(20,5.126696);
   houtFV_stack_4->SetBinContent(21,6.152493);
   houtFV_stack_4->SetBinContent(22,5.785106);
   houtFV_stack_4->SetBinContent(23,3.120462);
   houtFV_stack_4->SetBinContent(24,6.771088);
   houtFV_stack_4->SetBinError(1,1.098442);
   houtFV_stack_4->SetBinError(2,1.208079);
   houtFV_stack_4->SetBinError(3,1.176383);
   houtFV_stack_4->SetBinError(4,1.366063);
   houtFV_stack_4->SetBinError(5,1.112479);
   houtFV_stack_4->SetBinError(6,1.209684);
   houtFV_stack_4->SetBinError(7,1.109907);
   houtFV_stack_4->SetBinError(8,1.1273);
   houtFV_stack_4->SetBinError(9,1.134366);
   houtFV_stack_4->SetBinError(10,1.157582);
   houtFV_stack_4->SetBinError(11,1.04548);
   houtFV_stack_4->SetBinError(12,1.241079);
   houtFV_stack_4->SetBinError(13,0.9860601);
   houtFV_stack_4->SetBinError(14,1.319273);
   houtFV_stack_4->SetBinError(15,1.389886);
   houtFV_stack_4->SetBinError(16,1.25221);
   houtFV_stack_4->SetBinError(17,1.223036);
   houtFV_stack_4->SetBinError(18,1.194227);
   houtFV_stack_4->SetBinError(19,1.127594);
   houtFV_stack_4->SetBinError(20,1.100424);
   houtFV_stack_4->SetBinError(21,1.31893);
   houtFV_stack_4->SetBinError(22,1.277296);
   houtFV_stack_4->SetBinError(23,0.8709351);
   houtFV_stack_4->SetBinError(24,1.358986);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7242399);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2828126);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3007107);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,45.00389);
   hNCpi0inFVres_stack_7->SetBinContent(2,47.01717);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.02703);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.23526);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.67238);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.95111);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.29598);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.93978);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.37108);
   hNCpi0inFVres_stack_7->SetBinContent(10,43.08204);
   hNCpi0inFVres_stack_7->SetBinContent(11,50.63988);
   hNCpi0inFVres_stack_7->SetBinContent(12,42.00229);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.1451);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.22321);
   hNCpi0inFVres_stack_7->SetBinContent(15,48.87203);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.03667);
   hNCpi0inFVres_stack_7->SetBinContent(17,43.83472);
   hNCpi0inFVres_stack_7->SetBinContent(18,37.70784);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.94872);
   hNCpi0inFVres_stack_7->SetBinContent(20,41.61039);
   hNCpi0inFVres_stack_7->SetBinContent(21,43.94781);
   hNCpi0inFVres_stack_7->SetBinContent(22,46.46299);
   hNCpi0inFVres_stack_7->SetBinContent(23,47.61969);
   hNCpi0inFVres_stack_7->SetBinContent(24,44.77221);
   hNCpi0inFVres_stack_7->SetBinError(1,2.233328);
   hNCpi0inFVres_stack_7->SetBinError(2,2.264522);
   hNCpi0inFVres_stack_7->SetBinError(3,2.158726);
   hNCpi0inFVres_stack_7->SetBinError(4,2.41403);
   hNCpi0inFVres_stack_7->SetBinError(5,2.05277);
   hNCpi0inFVres_stack_7->SetBinError(6,1.967016);
   hNCpi0inFVres_stack_7->SetBinError(7,2.037928);
   hNCpi0inFVres_stack_7->SetBinError(8,2.222175);
   hNCpi0inFVres_stack_7->SetBinError(9,2.283393);
   hNCpi0inFVres_stack_7->SetBinError(10,2.133723);
   hNCpi0inFVres_stack_7->SetBinError(11,2.382914);
   hNCpi0inFVres_stack_7->SetBinError(12,2.091216);
   hNCpi0inFVres_stack_7->SetBinError(13,2.123277);
   hNCpi0inFVres_stack_7->SetBinError(14,2.353551);
   hNCpi0inFVres_stack_7->SetBinError(15,2.301813);
   hNCpi0inFVres_stack_7->SetBinError(16,2.16657);
   hNCpi0inFVres_stack_7->SetBinError(17,2.129424);
   hNCpi0inFVres_stack_7->SetBinError(18,2.025108);
   hNCpi0inFVres_stack_7->SetBinError(19,1.935585);
   hNCpi0inFVres_stack_7->SetBinError(20,2.103127);
   hNCpi0inFVres_stack_7->SetBinError(21,2.13151);
   hNCpi0inFVres_stack_7->SetBinError(22,2.235795);
   hNCpi0inFVres_stack_7->SetBinError(23,2.272244);
   hNCpi0inFVres_stack_7->SetBinError(24,2.180849);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.245565);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.143007);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.392779);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.931354);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.818418);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.357072);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.707658);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.292558);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.741037);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.881201);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.22075);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.629022);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.493673);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.0927);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.75956);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.517502);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.928937);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.351664);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.631167);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.744367);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.162202);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.855798);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.677525);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.518501);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9878684);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8801113);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8992146);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8789318);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8073813);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8119482);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.901413);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8814005);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9679013);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.962929);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.083809);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9081521);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9855672);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.020332);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.034538);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.930101);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8707375);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6593054);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7353533);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.006925);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.019346);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.992095);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.051886);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9576601);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,20.37337);
   hCCpi0inFV_stack_10->SetBinContent(2,17.13413);
   hCCpi0inFV_stack_10->SetBinContent(3,11.8069);
   hCCpi0inFV_stack_10->SetBinContent(4,16.94913);
   hCCpi0inFV_stack_10->SetBinContent(5,14.79379);
   hCCpi0inFV_stack_10->SetBinContent(6,10.55369);
   hCCpi0inFV_stack_10->SetBinContent(7,9.311039);
   hCCpi0inFV_stack_10->SetBinContent(8,14.0528);
   hCCpi0inFV_stack_10->SetBinContent(9,16.74605);
   hCCpi0inFV_stack_10->SetBinContent(10,13.88864);
   hCCpi0inFV_stack_10->SetBinContent(11,15.96607);
   hCCpi0inFV_stack_10->SetBinContent(12,20.17996);
   hCCpi0inFV_stack_10->SetBinContent(13,21.43795);
   hCCpi0inFV_stack_10->SetBinContent(14,19.29173);
   hCCpi0inFV_stack_10->SetBinContent(15,18.26952);
   hCCpi0inFV_stack_10->SetBinContent(16,12.55249);
   hCCpi0inFV_stack_10->SetBinContent(17,14.6234);
   hCCpi0inFV_stack_10->SetBinContent(18,11.92094);
   hCCpi0inFV_stack_10->SetBinContent(19,9.821825);
   hCCpi0inFV_stack_10->SetBinContent(20,12.03697);
   hCCpi0inFV_stack_10->SetBinContent(21,12.88212);
   hCCpi0inFV_stack_10->SetBinContent(22,14.62448);
   hCCpi0inFV_stack_10->SetBinContent(23,17.67343);
   hCCpi0inFV_stack_10->SetBinContent(24,20.16367);
   hCCpi0inFV_stack_10->SetBinError(1,2.27192);
   hCCpi0inFV_stack_10->SetBinError(2,2.090984);
   hCCpi0inFV_stack_10->SetBinError(3,1.674821);
   hCCpi0inFV_stack_10->SetBinError(4,2.088954);
   hCCpi0inFV_stack_10->SetBinError(5,1.947457);
   hCCpi0inFV_stack_10->SetBinError(6,1.678801);
   hCCpi0inFV_stack_10->SetBinError(7,1.544028);
   hCCpi0inFV_stack_10->SetBinError(8,1.896668);
   hCCpi0inFV_stack_10->SetBinError(9,2.043045);
   hCCpi0inFV_stack_10->SetBinError(10,1.858271);
   hCCpi0inFV_stack_10->SetBinError(11,2.028526);
   hCCpi0inFV_stack_10->SetBinError(12,2.254976);
   hCCpi0inFV_stack_10->SetBinError(13,2.319105);
   hCCpi0inFV_stack_10->SetBinError(14,2.194009);
   hCCpi0inFV_stack_10->SetBinError(15,2.126815);
   hCCpi0inFV_stack_10->SetBinError(16,1.787837);
   hCCpi0inFV_stack_10->SetBinError(17,1.946557);
   hCCpi0inFV_stack_10->SetBinError(18,1.709204);
   hCCpi0inFV_stack_10->SetBinError(19,1.569694);
   hCCpi0inFV_stack_10->SetBinError(20,1.688765);
   hCCpi0inFV_stack_10->SetBinError(21,1.835453);
   hCCpi0inFV_stack_10->SetBinError(22,1.924929);
   hCCpi0inFV_stack_10->SetBinError(23,2.152624);
   hCCpi0inFV_stack_10->SetBinError(24,2.297155);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.345739);
   hNCinFV_stack_11->SetBinContent(2,8.254574);
   hNCinFV_stack_11->SetBinContent(3,11.65743);
   hNCinFV_stack_11->SetBinContent(4,6.398998);
   hNCinFV_stack_11->SetBinContent(5,6.539079);
   hNCinFV_stack_11->SetBinContent(6,7.712609);
   hNCinFV_stack_11->SetBinContent(7,7.335475);
   hNCinFV_stack_11->SetBinContent(8,6.755473);
   hNCinFV_stack_11->SetBinContent(9,7.965959);
   hNCinFV_stack_11->SetBinContent(10,7.661047);
   hNCinFV_stack_11->SetBinContent(11,8.609358);
   hNCinFV_stack_11->SetBinContent(12,8.502851);
   hNCinFV_stack_11->SetBinContent(13,9.429794);
   hNCinFV_stack_11->SetBinContent(14,8.062322);
   hNCinFV_stack_11->SetBinContent(15,10.68569);
   hNCinFV_stack_11->SetBinContent(16,7.557921);
   hNCinFV_stack_11->SetBinContent(17,9.684834);
   hNCinFV_stack_11->SetBinContent(18,7.221125);
   hNCinFV_stack_11->SetBinContent(19,6.929129);
   hNCinFV_stack_11->SetBinContent(20,6.453333);
   hNCinFV_stack_11->SetBinContent(21,9.047589);
   hNCinFV_stack_11->SetBinContent(22,7.557921);
   hNCinFV_stack_11->SetBinContent(23,11.33862);
   hNCinFV_stack_11->SetBinContent(24,8.650778);
   hNCinFV_stack_11->SetBinError(1,1.441246);
   hNCinFV_stack_11->SetBinError(2,1.469123);
   hNCinFV_stack_11->SetBinError(3,1.765663);
   hNCinFV_stack_11->SetBinError(4,1.302569);
   hNCinFV_stack_11->SetBinError(5,1.33131);
   hNCinFV_stack_11->SetBinError(6,1.414892);
   hNCinFV_stack_11->SetBinError(7,1.316252);
   hNCinFV_stack_11->SetBinError(8,1.27295);
   hNCinFV_stack_11->SetBinError(9,1.41549);
   hNCinFV_stack_11->SetBinError(10,1.428603);
   hNCinFV_stack_11->SetBinError(11,1.442698);
   hNCinFV_stack_11->SetBinError(12,1.469024);
   hNCinFV_stack_11->SetBinError(13,1.545483);
   hNCinFV_stack_11->SetBinError(14,1.386717);
   hNCinFV_stack_11->SetBinError(15,1.711349);
   hNCinFV_stack_11->SetBinError(16,1.455639);
   hNCinFV_stack_11->SetBinError(17,1.546245);
   hNCinFV_stack_11->SetBinError(18,1.4158);
   hNCinFV_stack_11->SetBinError(19,1.359579);
   hNCinFV_stack_11->SetBinError(20,1.208468);
   hNCinFV_stack_11->SetBinError(21,1.455037);
   hNCinFV_stack_11->SetBinError(22,1.455639);
   hNCinFV_stack_11->SetBinError(23,1.67685);
   hNCinFV_stack_11->SetBinError(24,1.42773);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,24.59438);
   hnumuCCinFV_stack_12->SetBinContent(2,26.23001);
   hnumuCCinFV_stack_12->SetBinContent(3,13.7226);
   hnumuCCinFV_stack_12->SetBinContent(4,4.886324);
   hnumuCCinFV_stack_12->SetBinContent(5,4.4745);
   hnumuCCinFV_stack_12->SetBinContent(6,8.268063);
   hnumuCCinFV_stack_12->SetBinContent(7,5.690966);
   hnumuCCinFV_stack_12->SetBinContent(8,7.925901);
   hnumuCCinFV_stack_12->SetBinContent(9,6.252321);
   hnumuCCinFV_stack_12->SetBinContent(10,13.38746);
   hnumuCCinFV_stack_12->SetBinContent(11,21.93563);
   hnumuCCinFV_stack_12->SetBinContent(12,21.77549);
   hnumuCCinFV_stack_12->SetBinContent(13,25.44999);
   hnumuCCinFV_stack_12->SetBinContent(14,21.54605);
   hnumuCCinFV_stack_12->SetBinContent(15,12.1272);
   hnumuCCinFV_stack_12->SetBinContent(16,7.007172);
   hnumuCCinFV_stack_12->SetBinContent(17,9.119087);
   hnumuCCinFV_stack_12->SetBinContent(18,8.849113);
   hnumuCCinFV_stack_12->SetBinContent(19,6.304609);
   hnumuCCinFV_stack_12->SetBinContent(20,6.266091);
   hnumuCCinFV_stack_12->SetBinContent(21,7.422028);
   hnumuCCinFV_stack_12->SetBinContent(22,9.464428);
   hnumuCCinFV_stack_12->SetBinContent(23,12.88017);
   hnumuCCinFV_stack_12->SetBinContent(24,22.42945);
   hnumuCCinFV_stack_12->SetBinError(1,2.767983);
   hnumuCCinFV_stack_12->SetBinError(2,3.875672);
   hnumuCCinFV_stack_12->SetBinError(3,2.043182);
   hnumuCCinFV_stack_12->SetBinError(4,1.235893);
   hnumuCCinFV_stack_12->SetBinError(5,1.146095);
   hnumuCCinFV_stack_12->SetBinError(6,1.516279);
   hnumuCCinFV_stack_12->SetBinError(7,1.241465);
   hnumuCCinFV_stack_12->SetBinError(8,1.472337);
   hnumuCCinFV_stack_12->SetBinError(9,1.686152);
   hnumuCCinFV_stack_12->SetBinError(10,2.285451);
   hnumuCCinFV_stack_12->SetBinError(11,2.89695);
   hnumuCCinFV_stack_12->SetBinError(12,2.525579);
   hnumuCCinFV_stack_12->SetBinError(13,2.750702);
   hnumuCCinFV_stack_12->SetBinError(14,2.910987);
   hnumuCCinFV_stack_12->SetBinError(15,1.825554);
   hnumuCCinFV_stack_12->SetBinError(16,1.487142);
   hnumuCCinFV_stack_12->SetBinError(17,1.922695);
   hnumuCCinFV_stack_12->SetBinError(18,1.812992);
   hnumuCCinFV_stack_12->SetBinError(19,1.20678);
   hnumuCCinFV_stack_12->SetBinError(20,1.415703);
   hnumuCCinFV_stack_12->SetBinError(21,1.530801);
   hnumuCCinFV_stack_12->SetBinError(22,1.632961);
   hnumuCCinFV_stack_12->SetBinError(23,1.901464);
   hnumuCCinFV_stack_12->SetBinError(24,2.854283);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.7055822);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.5843627);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,2.035451);
   hnueCCinFV_stack_13->SetBinContent(7,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(8,0.4030693);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(11,0.88752);
   hnueCCinFV_stack_13->SetBinContent(12,0.7907994);
   hnueCCinFV_stack_13->SetBinContent(13,0.912959);
   hnueCCinFV_stack_13->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.7897245);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.4752215);
   hnueCCinFV_stack_13->SetBinContent(22,0.8216388);
   hnueCCinFV_stack_13->SetBinContent(23,1.035733);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.4992408);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.4354523);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,1.60402);
   hnueCCinFV_stack_13->SetBinError(7,0.3688623);
   hnueCCinFV_stack_13->SetBinError(8,0.2851617);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.5197486);
   hnueCCinFV_stack_13->SetBinError(11,0.4470051);
   hnueCCinFV_stack_13->SetBinError(12,0.5593151);
   hnueCCinFV_stack_13->SetBinError(13,0.4686161);
   hnueCCinFV_stack_13->SetBinError(14,0.2502081);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.4810838);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.6258613);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.3367593);
   hnueCCinFV_stack_13->SetBinError(22,0.4120716);
   hnueCCinFV_stack_13->SetBinError(23,0.5280575);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__14->SetBinContent(1,121.871);
   hmcerror__14->SetBinContent(2,120.5449);
   hmcerror__14->SetBinContent(3,107.5972);
   hmcerror__14->SetBinContent(4,107.0109);
   hmcerror__14->SetBinContent(5,88.58628);
   hmcerror__14->SetBinContent(6,89.97593);
   hmcerror__14->SetBinContent(7,84.08799);
   hmcerror__14->SetBinContent(8,98.55602);
   hmcerror__14->SetBinContent(9,103.9239);
   hmcerror__14->SetBinContent(10,100.1357);
   hmcerror__14->SetBinContent(11,120.0589);
   hmcerror__14->SetBinContent(12,112.9667);
   hmcerror__14->SetBinContent(13,122.2083);
   hmcerror__14->SetBinContent(14,121.0046);
   hmcerror__14->SetBinContent(15,115.0828);
   hmcerror__14->SetBinContent(16,96.53568);
   hmcerror__14->SetBinContent(17,99.10236);
   hmcerror__14->SetBinContent(18,85.26083);
   hmcerror__14->SetBinContent(19,80.59754);
   hmcerror__14->SetBinContent(20,95.07976);
   hmcerror__14->SetBinContent(21,95.45);
   hmcerror__14->SetBinContent(22,100.6208);
   hmcerror__14->SetBinContent(23,110.7673);
   hmcerror__14->SetBinContent(24,120.0169);
   hmcerror__14->SetBinError(1,41.62044);
   hmcerror__14->SetBinError(2,42.38054);
   hmcerror__14->SetBinError(3,41.97964);
   hmcerror__14->SetBinError(4,40.45813);
   hmcerror__14->SetBinError(5,34.29796);
   hmcerror__14->SetBinError(6,32.86833);
   hmcerror__14->SetBinError(7,32.70414);
   hmcerror__14->SetBinError(8,37.75608);
   hmcerror__14->SetBinError(9,41.90788);
   hmcerror__14->SetBinError(10,37.78578);
   hmcerror__14->SetBinError(11,49.08176);
   hmcerror__14->SetBinError(12,41.23514);
   hmcerror__14->SetBinError(13,41.6943);
   hmcerror__14->SetBinError(14,43.9641);
   hmcerror__14->SetBinError(15,43.75608);
   hmcerror__14->SetBinError(16,36.70421);
   hmcerror__14->SetBinError(17,38.68646);
   hmcerror__14->SetBinError(18,48.68516);
   hmcerror__14->SetBinError(19,28.74332);
   hmcerror__14->SetBinError(20,38.3881);
   hmcerror__14->SetBinError(21,38.628);
   hmcerror__14->SetBinError(22,40.75233);
   hmcerror__14->SetBinError(23,41.52992);
   hmcerror__14->SetBinError(24,41.29935);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3017[24] = {
   124,
   87,
   75,
   68,
   80,
   54,
   90,
   67,
   82,
   78,
   72,
   91,
   101,
   78,
   91,
   72,
   54,
   61,
   68,
   58,
   66,
   71,
   83,
   78};
   Double_t _felx3017[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3017[24] = {
   11.13553,
   9.4503,
   8.7852,
   8.3726,
   9.0683,
   7.4785,
   9.6093,
   8.3119,
   9.1791,
   8.9562,
   8.6108,
   9.6617,
   10.04988,
   8.9562,
   9.6617,
   8.6108,
   7.4785,
   7.9383,
   8.3726,
   7.7446,
   8.2509,
   8.5518,
   9.234,
   8.9562};
   Double_t _fehx3017[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3017[24] = {
   11.13553,
   9.2488,
   8.5831,
   8.1701,
   8.8665,
   7.275,
   9.4079,
   8.1094,
   8.9774,
   8.7542,
   8.4085,
   9.46,
   10.04988,
   8.7542,
   9.46,
   8.4085,
   7.275,
   7.7354,
   8.1701,
   7.5415,
   8.0483,
   8.3496,
   9.0323,
   8.7542};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(37.6601);
   Graph_Graph3017->SetMaximum(143.9969);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3018[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3018[24] = {
   0.3415124,
   0.3515746,
   0.3901555,
   0.3780748,
   0.3871701,
   0.3653013,
   0.3889275,
   0.3830926,
   0.4032554,
   0.377346,
   0.4088139,
   0.3650204,
   0.341174,
   0.3633259,
   0.380214,
   0.3802139,
   0.3903687,
   0.5710143,
   0.3566278,
   0.4037463,
   0.4046936,
   0.405009,
   0.3749295,
   0.3441128};
   Double_t _fehx3018[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3018[24] = {
   0.3415124,
   0.3515746,
   0.3901555,
   0.3780748,
   0.3871701,
   0.3653013,
   0.3889275,
   0.3830926,
   0.4032554,
   0.377346,
   0.4088139,
   0.3650204,
   0.341174,
   0.3633259,
   0.380214,
   0.3802139,
   0.3903687,
   0.5710143,
   0.3566278,
   0.4037463,
   0.4046936,
   0.405009,
   0.3749295,
   0.3441128};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-3.78,3.78);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3019[24] = {
   0.3134346,
   0.3126778,
   0.3395207,
   0.3305787,
   0.3546501,
   0.3242992,
   0.3546254,
   0.3455166,
   0.3519342,
   0.3344424,
   0.3357726,
   0.3226384,
   0.3014564,
   0.3210994,
   0.3437874,
   0.3393492,
   0.3353293,
   0.3467195,
   0.3178258,
   0.3381592,
   0.368018,
   0.3527125,
   0.3400398,
   0.3054954};
   Double_t _fehx3019[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3019[24] = {
   0.3134346,
   0.3126778,
   0.3395207,
   0.3305787,
   0.3546501,
   0.3242992,
   0.3546254,
   0.3455166,
   0.3519342,
   0.3344424,
   0.3357726,
   0.3226384,
   0.3014564,
   0.3210994,
   0.3437874,
   0.3393492,
   0.3353293,
   0.3467195,
   0.3178258,
   0.3381592,
   0.368018,
   0.3527125,
   0.3400398,
   0.3054954};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.78,3.78);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3020[24] = {
   1.01747,
   0.7217226,
   0.6970442,
   0.6354492,
   0.9030744,
   0.6001605,
   1.070307,
   0.6798164,
   0.7890388,
   0.7789434,
   0.5997055,
   0.8055473,
   0.8264575,
   0.6446037,
   0.7907352,
   0.7458382,
   0.5448912,
   0.7154516,
   0.8436982,
   0.6100142,
   0.6914615,
   0.7056194,
   0.7493189,
   0.6499085};
   Double_t _felx3020[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3020[24] = {
   0.09137147,
   0.07839649,
   0.08164897,
   0.07824061,
   0.1023669,
   0.08311667,
   0.1142767,
   0.08433681,
   0.0883252,
   0.08944067,
   0.07172144,
   0.08552699,
   0.08223559,
   0.07401538,
   0.08395435,
   0.08919811,
   0.07546238,
   0.09310606,
   0.1038816,
   0.08145372,
   0.08644212,
   0.08499037,
   0.08336398,
   0.0746245};
   Double_t _fehx3020[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3020[24] = {
   0.09137147,
   0.07672491,
   0.07977067,
   0.07634828,
   0.1000889,
   0.08085496,
   0.1118816,
   0.08228214,
   0.08638435,
   0.08742341,
   0.07003644,
   0.08374151,
   0.08223559,
   0.07234602,
   0.0822017,
   0.08710251,
   0.07340895,
   0.0907263,
   0.1013691,
   0.07931762,
   0.08431954,
   0.08298085,
   0.08154304,
   0.0729414};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.3981528);
   Graph_Graph3020->SetMaximum(1.253465);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
