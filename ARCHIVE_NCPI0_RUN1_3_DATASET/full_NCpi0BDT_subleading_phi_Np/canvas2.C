#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue May 31 16:40:09 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.241967,3.957692,341.4303);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,162.0983);
   hmc__4->SetBinContent(2,150.5187);
   hmc__4->SetBinContent(3,141.2202);
   hmc__4->SetBinContent(4,141.7301);
   hmc__4->SetBinContent(5,136.8814);
   hmc__4->SetBinContent(6,130.1071);
   hmc__4->SetBinContent(7,143.2131);
   hmc__4->SetBinContent(8,131.9847);
   hmc__4->SetBinContent(9,131.7652);
   hmc__4->SetBinContent(10,142.2784);
   hmc__4->SetBinContent(11,149.9681);
   hmc__4->SetBinContent(12,151.7186);
   hmc__4->SetBinContent(13,157.31);
   hmc__4->SetBinContent(14,132.6924);
   hmc__4->SetBinContent(15,147.1907);
   hmc__4->SetBinContent(16,137.0435);
   hmc__4->SetBinContent(17,147.8631);
   hmc__4->SetBinContent(18,140.0605);
   hmc__4->SetBinContent(19,151.8261);
   hmc__4->SetBinContent(20,137.3719);
   hmc__4->SetBinContent(21,138.1993);
   hmc__4->SetBinContent(22,129.521);
   hmc__4->SetBinContent(23,150.8466);
   hmc__4->SetBinContent(24,160.1882);
   hmc__4->SetBinError(1,40.38258);
   hmc__4->SetBinError(2,34.65332);
   hmc__4->SetBinError(3,34.71837);
   hmc__4->SetBinError(4,31.95772);
   hmc__4->SetBinError(5,32.18155);
   hmc__4->SetBinError(6,32.59898);
   hmc__4->SetBinError(7,34.47965);
   hmc__4->SetBinError(8,31.16917);
   hmc__4->SetBinError(9,32.21158);
   hmc__4->SetBinError(10,33.45179);
   hmc__4->SetBinError(11,32.27788);
   hmc__4->SetBinError(12,37.02104);
   hmc__4->SetBinError(13,38.06359);
   hmc__4->SetBinError(14,31.1658);
   hmc__4->SetBinError(15,31.89177);
   hmc__4->SetBinError(16,35.04404);
   hmc__4->SetBinError(17,34.85573);
   hmc__4->SetBinError(18,31.73265);
   hmc__4->SetBinError(19,35.51901);
   hmc__4->SetBinError(20,33.34532);
   hmc__4->SetBinError(21,34.14353);
   hmc__4->SetBinError(22,33.37268);
   hmc__4->SetBinError(23,34.87369);
   hmc__4->SetBinError(24,45.30296);
   hmc__4->SetBinError(25,0.4212968);
   hmc__4->SetMinimum(-3.241967);
   hmc__4->SetMaximum(324.1967);
   hmc__4->SetEntries(3396.741);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-3.15,3.15);
   hs2_stack_2->SetMinimum(-9.660135e-09);
   hs2_stack_2->SetMaximum(170.2032);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.426752);
   hbadmatch_stack_1->SetBinContent(2,3.762138);
   hbadmatch_stack_1->SetBinContent(3,2.902374);
   hbadmatch_stack_1->SetBinContent(4,3.49669);
   hbadmatch_stack_1->SetBinContent(5,3.301334);
   hbadmatch_stack_1->SetBinContent(6,3.307575);
   hbadmatch_stack_1->SetBinContent(7,2.956478);
   hbadmatch_stack_1->SetBinContent(8,4.205551);
   hbadmatch_stack_1->SetBinContent(9,3.970134);
   hbadmatch_stack_1->SetBinContent(10,2.320573);
   hbadmatch_stack_1->SetBinContent(11,3.44243);
   hbadmatch_stack_1->SetBinContent(12,4.276175);
   hbadmatch_stack_1->SetBinContent(13,6.145347);
   hbadmatch_stack_1->SetBinContent(14,3.381618);
   hbadmatch_stack_1->SetBinContent(15,3.353534);
   hbadmatch_stack_1->SetBinContent(16,2.498975);
   hbadmatch_stack_1->SetBinContent(17,3.882855);
   hbadmatch_stack_1->SetBinContent(18,2.264341);
   hbadmatch_stack_1->SetBinContent(19,3.811845);
   hbadmatch_stack_1->SetBinContent(20,4.212857);
   hbadmatch_stack_1->SetBinContent(21,1.413964);
   hbadmatch_stack_1->SetBinContent(22,2.002419);
   hbadmatch_stack_1->SetBinContent(23,2.205075);
   hbadmatch_stack_1->SetBinContent(24,5.03904);
   hbadmatch_stack_1->SetBinError(1,0.9887727);
   hbadmatch_stack_1->SetBinError(2,1.020645);
   hbadmatch_stack_1->SetBinError(3,0.8630198);
   hbadmatch_stack_1->SetBinError(4,0.8943645);
   hbadmatch_stack_1->SetBinError(5,0.9081354);
   hbadmatch_stack_1->SetBinError(6,0.9554597);
   hbadmatch_stack_1->SetBinError(7,0.8025521);
   hbadmatch_stack_1->SetBinError(8,1.111624);
   hbadmatch_stack_1->SetBinError(9,2.090827);
   hbadmatch_stack_1->SetBinError(10,0.7549042);
   hbadmatch_stack_1->SetBinError(11,0.921776);
   hbadmatch_stack_1->SetBinError(12,1.049471);
   hbadmatch_stack_1->SetBinError(13,1.630065);
   hbadmatch_stack_1->SetBinError(14,1.044036);
   hbadmatch_stack_1->SetBinError(15,0.9752789);
   hbadmatch_stack_1->SetBinError(16,0.7344388);
   hbadmatch_stack_1->SetBinError(17,1.074738);
   hbadmatch_stack_1->SetBinError(18,0.8297305);
   hbadmatch_stack_1->SetBinError(19,1.178512);
   hbadmatch_stack_1->SetBinError(20,0.9931288);
   hbadmatch_stack_1->SetBinError(21,0.6515799);
   hbadmatch_stack_1->SetBinError(22,0.7348366);
   hbadmatch_stack_1->SetBinError(23,0.7151319);
   hbadmatch_stack_1->SetBinError(24,1.253479);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,10.67085);
   hext_stack_2->SetBinContent(2,13.56888);
   hext_stack_2->SetBinContent(3,8.63508);
   hext_stack_2->SetBinContent(4,12.22222);
   hext_stack_2->SetBinContent(5,17.98957);
   hext_stack_2->SetBinContent(6,13.13916);
   hext_stack_2->SetBinContent(7,19.75001);
   hext_stack_2->SetBinContent(8,15.58033);
   hext_stack_2->SetBinContent(9,10.38399);
   hext_stack_2->SetBinContent(10,16.17005);
   hext_stack_2->SetBinContent(11,12.41692);
   hext_stack_2->SetBinContent(12,11.75654);
   hext_stack_2->SetBinContent(13,5.269787);
   hext_stack_2->SetBinContent(14,4.53161);
   hext_stack_2->SetBinContent(15,14.27834);
   hext_stack_2->SetBinContent(16,7.142787);
   hext_stack_2->SetBinContent(17,11.85751);
   hext_stack_2->SetBinContent(18,12.84507);
   hext_stack_2->SetBinContent(19,16.18164);
   hext_stack_2->SetBinContent(20,6.082985);
   hext_stack_2->SetBinContent(21,9.782627);
   hext_stack_2->SetBinContent(22,6.160778);
   hext_stack_2->SetBinContent(23,8.884457);
   hext_stack_2->SetBinContent(24,11.5922);
   hext_stack_2->SetBinError(1,2.224896);
   hext_stack_2->SetBinError(2,2.54968);
   hext_stack_2->SetBinError(3,2.111841);
   hext_stack_2->SetBinError(4,2.313042);
   hext_stack_2->SetBinError(5,3.042431);
   hext_stack_2->SetBinError(6,2.26656);
   hext_stack_2->SetBinError(7,3.220437);
   hext_stack_2->SetBinError(8,2.816219);
   hext_stack_2->SetBinError(9,2.076143);
   hext_stack_2->SetBinError(10,3.046263);
   hext_stack_2->SetBinError(11,2.543107);
   hext_stack_2->SetBinError(12,2.514559);
   hext_stack_2->SetBinError(13,1.442273);
   hext_stack_2->SetBinError(14,1.418025);
   hext_stack_2->SetBinError(15,2.715701);
   hext_stack_2->SetBinError(16,1.709301);
   hext_stack_2->SetBinError(17,2.473017);
   hext_stack_2->SetBinError(18,2.455425);
   hext_stack_2->SetBinError(19,3.035398);
   hext_stack_2->SetBinError(20,1.552674);
   hext_stack_2->SetBinError(21,2.087637);
   hext_stack_2->SetBinError(22,1.52832);
   hext_stack_2->SetBinError(23,2.074564);
   hext_stack_2->SetBinError(24,2.207355);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.148888);
   hdirt_stack_3->SetBinContent(2,0.722366);
   hdirt_stack_3->SetBinContent(3,0.9619534);
   hdirt_stack_3->SetBinContent(4,1.203423);
   hdirt_stack_3->SetBinContent(5,0.5384864);
   hdirt_stack_3->SetBinContent(7,1.09526);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.9467657);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.3681);
   hdirt_stack_3->SetBinContent(15,0.2212471);
   hdirt_stack_3->SetBinContent(16,0.1753185);
   hdirt_stack_3->SetBinContent(17,0.9414281);
   hdirt_stack_3->SetBinContent(18,1.328971);
   hdirt_stack_3->SetBinContent(19,1.140447);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(22,1.22185);
   hdirt_stack_3->SetBinContent(23,0.9712972);
   hdirt_stack_3->SetBinContent(24,0.8404487);
   hdirt_stack_3->SetBinError(1,0.5902483);
   hdirt_stack_3->SetBinError(2,0.4354359);
   hdirt_stack_3->SetBinError(3,0.4947604);
   hdirt_stack_3->SetBinError(4,0.6017603);
   hdirt_stack_3->SetBinError(5,0.3270345);
   hdirt_stack_3->SetBinError(7,0.5187246);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.494629);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.9804616);
   hdirt_stack_3->SetBinError(15,0.2189082);
   hdirt_stack_3->SetBinError(16,0.1753185);
   hdirt_stack_3->SetBinError(17,0.4333795);
   hdirt_stack_3->SetBinError(18,0.6335807);
   hdirt_stack_3->SetBinError(19,0.606505);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(22,0.6405557);
   hdirt_stack_3->SetBinError(23,0.4684838);
   hdirt_stack_3->SetBinError(24,0.4300001);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.0022);
   houtFV_stack_4->SetBinContent(2,8.531504);
   houtFV_stack_4->SetBinContent(3,11.32667);
   houtFV_stack_4->SetBinContent(4,8.309284);
   houtFV_stack_4->SetBinContent(5,5.904671);
   houtFV_stack_4->SetBinContent(6,11.20456);
   houtFV_stack_4->SetBinContent(7,12.80202);
   houtFV_stack_4->SetBinContent(8,8.925981);
   houtFV_stack_4->SetBinContent(9,8.356463);
   houtFV_stack_4->SetBinContent(10,5.471376);
   houtFV_stack_4->SetBinContent(11,9.404396);
   houtFV_stack_4->SetBinContent(12,9.322515);
   houtFV_stack_4->SetBinContent(13,8.315532);
   houtFV_stack_4->SetBinContent(14,7.535572);
   houtFV_stack_4->SetBinContent(15,8.045951);
   houtFV_stack_4->SetBinContent(16,8.239932);
   houtFV_stack_4->SetBinContent(17,11.4979);
   houtFV_stack_4->SetBinContent(18,8.977934);
   houtFV_stack_4->SetBinContent(19,9.588873);
   houtFV_stack_4->SetBinContent(20,8.52854);
   houtFV_stack_4->SetBinContent(21,5.272115);
   houtFV_stack_4->SetBinContent(22,7.908989);
   houtFV_stack_4->SetBinContent(23,10.27188);
   houtFV_stack_4->SetBinContent(24,10.62302);
   houtFV_stack_4->SetBinError(1,1.74687);
   houtFV_stack_4->SetBinError(2,1.453651);
   houtFV_stack_4->SetBinError(3,1.77875);
   houtFV_stack_4->SetBinError(4,1.408418);
   houtFV_stack_4->SetBinError(5,1.204705);
   houtFV_stack_4->SetBinError(6,1.731742);
   houtFV_stack_4->SetBinError(7,1.835849);
   houtFV_stack_4->SetBinError(8,1.499365);
   houtFV_stack_4->SetBinError(9,1.427196);
   houtFV_stack_4->SetBinError(10,1.152878);
   houtFV_stack_4->SetBinError(11,1.569255);
   houtFV_stack_4->SetBinError(12,1.519926);
   houtFV_stack_4->SetBinError(13,1.366742);
   houtFV_stack_4->SetBinError(14,1.331368);
   houtFV_stack_4->SetBinError(15,1.431772);
   houtFV_stack_4->SetBinError(16,1.369827);
   houtFV_stack_4->SetBinError(17,1.707939);
   houtFV_stack_4->SetBinError(18,1.48653);
   houtFV_stack_4->SetBinError(19,1.556463);
   houtFV_stack_4->SetBinError(20,1.447141);
   houtFV_stack_4->SetBinError(21,1.13523);
   houtFV_stack_4->SetBinError(22,1.450085);
   houtFV_stack_4->SetBinError(23,1.649631);
   houtFV_stack_4->SetBinError(24,1.656124);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3477539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1731161);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2032767);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,76.04472);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,78.87297);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,75.95541);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,69.53091);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,69.93332);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,70.37405);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,67.15739);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,66.98734);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,70.67847);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,71.43942);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,76.91198);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,77.82705);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,79.16951);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,71.94906);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,78.27113);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,73.10261);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,73.14895);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,70.18357);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,65.13063);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,71.82238);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,78.22361);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,75.2926);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,77.74002);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,80.73282);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.810387);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.954977);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.881841);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.729844);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.798638);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.73014);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.657013);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.653691);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.773714);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.814367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.895001);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.920056);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.935372);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.729903);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.942562);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.777931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.794218);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.744277);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.579918);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.759483);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.887664);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.821709);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.906428);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.985881);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,31.34081);
   hCCpi0inFV_stack_7->SetBinContent(2,25.34096);
   hCCpi0inFV_stack_7->SetBinContent(3,24.33092);
   hCCpi0inFV_stack_7->SetBinContent(4,23.95695);
   hCCpi0inFV_stack_7->SetBinContent(5,20.41641);
   hCCpi0inFV_stack_7->SetBinContent(6,15.16527);
   hCCpi0inFV_stack_7->SetBinContent(7,21.15062);
   hCCpi0inFV_stack_7->SetBinContent(8,17.48005);
   hCCpi0inFV_stack_7->SetBinContent(9,19.0983);
   hCCpi0inFV_stack_7->SetBinContent(10,29.40727);
   hCCpi0inFV_stack_7->SetBinContent(11,28.98965);
   hCCpi0inFV_stack_7->SetBinContent(12,28.68674);
   hCCpi0inFV_stack_7->SetBinContent(13,30.28057);
   hCCpi0inFV_stack_7->SetBinContent(14,21.53009);
   hCCpi0inFV_stack_7->SetBinContent(15,22.03003);
   hCCpi0inFV_stack_7->SetBinContent(16,21.2346);
   hCCpi0inFV_stack_7->SetBinContent(17,23.47322);
   hCCpi0inFV_stack_7->SetBinContent(18,19.40738);
   hCCpi0inFV_stack_7->SetBinContent(19,23.30143);
   hCCpi0inFV_stack_7->SetBinContent(20,20.70242);
   hCCpi0inFV_stack_7->SetBinContent(21,25.27988);
   hCCpi0inFV_stack_7->SetBinContent(22,18.37963);
   hCCpi0inFV_stack_7->SetBinContent(23,30.06891);
   hCCpi0inFV_stack_7->SetBinContent(24,25.92351);
   hCCpi0inFV_stack_7->SetBinError(1,2.794943);
   hCCpi0inFV_stack_7->SetBinError(2,2.484676);
   hCCpi0inFV_stack_7->SetBinError(3,2.489355);
   hCCpi0inFV_stack_7->SetBinError(4,2.497114);
   hCCpi0inFV_stack_7->SetBinError(5,2.253883);
   hCCpi0inFV_stack_7->SetBinError(6,1.993052);
   hCCpi0inFV_stack_7->SetBinError(7,2.339173);
   hCCpi0inFV_stack_7->SetBinError(8,2.076824);
   hCCpi0inFV_stack_7->SetBinError(9,2.120843);
   hCCpi0inFV_stack_7->SetBinError(10,2.763012);
   hCCpi0inFV_stack_7->SetBinError(11,2.758432);
   hCCpi0inFV_stack_7->SetBinError(12,2.640108);
   hCCpi0inFV_stack_7->SetBinError(13,2.800821);
   hCCpi0inFV_stack_7->SetBinError(14,2.314805);
   hCCpi0inFV_stack_7->SetBinError(15,2.373752);
   hCCpi0inFV_stack_7->SetBinError(16,2.261829);
   hCCpi0inFV_stack_7->SetBinError(17,2.47962);
   hCCpi0inFV_stack_7->SetBinError(18,2.190565);
   hCCpi0inFV_stack_7->SetBinError(19,2.398836);
   hCCpi0inFV_stack_7->SetBinError(20,2.301026);
   hCCpi0inFV_stack_7->SetBinError(21,2.590256);
   hCCpi0inFV_stack_7->SetBinError(22,2.155679);
   hCCpi0inFV_stack_7->SetBinError(23,2.691297);
   hCCpi0inFV_stack_7->SetBinError(24,2.543707);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,8.541498);
   hNCinFV_stack_8->SetBinContent(2,6.756555);
   hNCinFV_stack_8->SetBinContent(3,6.307098);
   hNCinFV_stack_8->SetBinContent(4,6.320014);
   hNCinFV_stack_8->SetBinContent(5,6.107002);
   hNCinFV_stack_8->SetBinContent(6,5.428337);
   hNCinFV_stack_8->SetBinContent(7,6.682541);
   hNCinFV_stack_8->SetBinContent(8,5.673234);
   hNCinFV_stack_8->SetBinContent(9,5.466984);
   hNCinFV_stack_8->SetBinContent(10,6.052058);
   hNCinFV_stack_8->SetBinContent(11,5.947242);
   hNCinFV_stack_8->SetBinContent(12,6.163636);
   hNCinFV_stack_8->SetBinContent(13,6.837229);
   hNCinFV_stack_8->SetBinContent(14,6.270142);
   hNCinFV_stack_8->SetBinContent(15,6.348517);
   hNCinFV_stack_8->SetBinContent(16,7.235731);
   hNCinFV_stack_8->SetBinContent(17,8.204701);
   hNCinFV_stack_8->SetBinContent(18,7.170645);
   hNCinFV_stack_8->SetBinContent(19,8.302755);
   hNCinFV_stack_8->SetBinContent(20,7.124153);
   hNCinFV_stack_8->SetBinContent(21,5.862105);
   hNCinFV_stack_8->SetBinContent(22,7.420613);
   hNCinFV_stack_8->SetBinContent(23,6.542312);
   hNCinFV_stack_8->SetBinContent(24,4.878528);
   hNCinFV_stack_8->SetBinError(1,1.520648);
   hNCinFV_stack_8->SetBinError(2,1.19266);
   hNCinFV_stack_8->SetBinError(3,1.257248);
   hNCinFV_stack_8->SetBinError(4,1.177856);
   hNCinFV_stack_8->SetBinError(5,1.24123);
   hNCinFV_stack_8->SetBinError(6,1.144497);
   hNCinFV_stack_8->SetBinError(7,1.35993);
   hNCinFV_stack_8->SetBinError(8,1.14379);
   hNCinFV_stack_8->SetBinError(9,1.210046);
   hNCinFV_stack_8->SetBinError(10,1.256311);
   hNCinFV_stack_8->SetBinError(11,1.286714);
   hNCinFV_stack_8->SetBinError(12,1.226234);
   hNCinFV_stack_8->SetBinError(13,1.316223);
   hNCinFV_stack_8->SetBinError(14,1.194569);
   hNCinFV_stack_8->SetBinError(15,1.240045);
   hNCinFV_stack_8->SetBinError(16,1.34604);
   hNCinFV_stack_8->SetBinError(17,1.482557);
   hNCinFV_stack_8->SetBinError(18,1.358497);
   hNCinFV_stack_8->SetBinError(19,1.455338);
   hNCinFV_stack_8->SetBinError(20,1.373495);
   hNCinFV_stack_8->SetBinError(21,1.241881);
   hNCinFV_stack_8->SetBinError(22,1.358633);
   hNCinFV_stack_8->SetBinError(23,1.27211);
   hNCinFV_stack_8->SetBinError(24,1.161372);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,16.58842);
   hnumuCCinFV_stack_9->SetBinContent(2,11.98603);
   hnumuCCinFV_stack_9->SetBinContent(3,9.516077);
   hnumuCCinFV_stack_9->SetBinContent(4,15.25834);
   hnumuCCinFV_stack_9->SetBinContent(5,11.86753);
   hnumuCCinFV_stack_9->SetBinContent(6,10.33122);
   hnumuCCinFV_stack_9->SetBinContent(7,10.41237);
   hnumuCCinFV_stack_9->SetBinContent(8,12.17609);
   hnumuCCinFV_stack_9->SetBinContent(9,12.70794);
   hnumuCCinFV_stack_9->SetBinContent(10,10.92406);
   hnumuCCinFV_stack_9->SetBinContent(11,11.88112);
   hnumuCCinFV_stack_9->SetBinContent(12,12.20875);
   hnumuCCinFV_stack_9->SetBinContent(13,20.27901);
   hnumuCCinFV_stack_9->SetBinContent(14,15.81919);
   hnumuCCinFV_stack_9->SetBinContent(15,14.19601);
   hnumuCCinFV_stack_9->SetBinContent(16,16.4268);
   hnumuCCinFV_stack_9->SetBinContent(17,14.35359);
   hnumuCCinFV_stack_9->SetBinContent(18,17.63178);
   hnumuCCinFV_stack_9->SetBinContent(19,21.93922);
   hnumuCCinFV_stack_9->SetBinContent(20,16.11775);
   hnumuCCinFV_stack_9->SetBinContent(21,11.31465);
   hnumuCCinFV_stack_9->SetBinContent(22,9.909705);
   hnumuCCinFV_stack_9->SetBinContent(23,12.62327);
   hnumuCCinFV_stack_9->SetBinContent(24,19.15308);
   hnumuCCinFV_stack_9->SetBinError(1,2.233381);
   hnumuCCinFV_stack_9->SetBinError(2,2.173546);
   hnumuCCinFV_stack_9->SetBinError(3,1.544349);
   hnumuCCinFV_stack_9->SetBinError(4,2.402284);
   hnumuCCinFV_stack_9->SetBinError(5,2.065224);
   hnumuCCinFV_stack_9->SetBinError(6,2.034253);
   hnumuCCinFV_stack_9->SetBinError(7,1.645735);
   hnumuCCinFV_stack_9->SetBinError(8,1.80454);
   hnumuCCinFV_stack_9->SetBinError(9,2.16807);
   hnumuCCinFV_stack_9->SetBinError(10,2.066109);
   hnumuCCinFV_stack_9->SetBinError(11,1.982286);
   hnumuCCinFV_stack_9->SetBinError(12,1.89857);
   hnumuCCinFV_stack_9->SetBinError(13,2.765913);
   hnumuCCinFV_stack_9->SetBinError(14,2.167675);
   hnumuCCinFV_stack_9->SetBinError(15,2.061838);
   hnumuCCinFV_stack_9->SetBinError(16,2.270809);
   hnumuCCinFV_stack_9->SetBinError(17,2.192825);
   hnumuCCinFV_stack_9->SetBinError(18,2.525201);
   hnumuCCinFV_stack_9->SetBinError(19,3.25653);
   hnumuCCinFV_stack_9->SetBinError(20,3.186738);
   hnumuCCinFV_stack_9->SetBinError(21,1.76315);
   hnumuCCinFV_stack_9->SetBinError(22,1.693334);
   hnumuCCinFV_stack_9->SetBinError(23,2.189728);
   hnumuCCinFV_stack_9->SetBinError(24,2.65202);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,2.125273);
   hnueCCinFV_stack_10->SetBinContent(2,0.6989822);
   hnueCCinFV_stack_10->SetBinContent(3,1.200917);
   hnueCCinFV_stack_10->SetBinContent(4,1.404358);
   hnueCCinFV_stack_10->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_10->SetBinContent(6,0.8091456);
   hnueCCinFV_stack_10->SetBinContent(7,0.9696276);
   hnueCCinFV_stack_10->SetBinContent(8,0.5946997);
   hnueCCinFV_stack_10->SetBinContent(9,0.9218988);
   hnueCCinFV_stack_10->SetBinContent(11,0.6438754);
   hnueCCinFV_stack_10->SetBinContent(13,0.7382848);
   hnueCCinFV_stack_10->SetBinContent(16,0.8057001);
   hnueCCinFV_stack_10->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(19,1.927569);
   hnueCCinFV_stack_10->SetBinContent(20,2.239153);
   hnueCCinFV_stack_10->SetBinContent(21,0.771975);
   hnueCCinFV_stack_10->SetBinContent(22,0.9460971);
   hnueCCinFV_stack_10->SetBinContent(23,1.455703);
   hnueCCinFV_stack_10->SetBinContent(24,1.098501);
   hnueCCinFV_stack_10->SetBinError(1,0.783722);
   hnueCCinFV_stack_10->SetBinError(2,0.4059236);
   hnueCCinFV_stack_10->SetBinError(3,0.5503192);
   hnueCCinFV_stack_10->SetBinError(4,0.6484658);
   hnueCCinFV_stack_10->SetBinError(5,0.3731328);
   hnueCCinFV_stack_10->SetBinError(6,0.4829484);
   hnueCCinFV_stack_10->SetBinError(7,0.5064878);
   hnueCCinFV_stack_10->SetBinError(8,0.5946997);
   hnueCCinFV_stack_10->SetBinError(9,0.5507173);
   hnueCCinFV_stack_10->SetBinError(11,0.3743212);
   hnueCCinFV_stack_10->SetBinError(13,0.4415857);
   hnueCCinFV_stack_10->SetBinError(16,0.4980907);
   hnueCCinFV_stack_10->SetBinError(17,0.1967154);
   hnueCCinFV_stack_10->SetBinError(18,0.1950249);
   hnueCCinFV_stack_10->SetBinError(19,1.24412);
   hnueCCinFV_stack_10->SetBinError(20,1.621199);
   hnueCCinFV_stack_10->SetBinError(21,0.4580576);
   hnueCCinFV_stack_10->SetBinError(22,0.4744541);
   hnueCCinFV_stack_10->SetBinError(23,0.6747802);
   hnueCCinFV_stack_10->SetBinError(24,0.5096995);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,162.0983);
   hmcerror__5->SetBinContent(2,150.5187);
   hmcerror__5->SetBinContent(3,141.2202);
   hmcerror__5->SetBinContent(4,141.7301);
   hmcerror__5->SetBinContent(5,136.8814);
   hmcerror__5->SetBinContent(6,130.1071);
   hmcerror__5->SetBinContent(7,143.2131);
   hmcerror__5->SetBinContent(8,131.9847);
   hmcerror__5->SetBinContent(9,131.7652);
   hmcerror__5->SetBinContent(10,142.2784);
   hmcerror__5->SetBinContent(11,149.9681);
   hmcerror__5->SetBinContent(12,151.7186);
   hmcerror__5->SetBinContent(13,157.31);
   hmcerror__5->SetBinContent(14,132.6924);
   hmcerror__5->SetBinContent(15,147.1907);
   hmcerror__5->SetBinContent(16,137.0435);
   hmcerror__5->SetBinContent(17,147.8631);
   hmcerror__5->SetBinContent(18,140.0605);
   hmcerror__5->SetBinContent(19,151.8261);
   hmcerror__5->SetBinContent(20,137.3719);
   hmcerror__5->SetBinContent(21,138.1993);
   hmcerror__5->SetBinContent(22,129.521);
   hmcerror__5->SetBinContent(23,150.8466);
   hmcerror__5->SetBinContent(24,160.1882);
   hmcerror__5->SetBinError(1,40.38258);
   hmcerror__5->SetBinError(2,34.65332);
   hmcerror__5->SetBinError(3,34.71837);
   hmcerror__5->SetBinError(4,31.95772);
   hmcerror__5->SetBinError(5,32.18155);
   hmcerror__5->SetBinError(6,32.59898);
   hmcerror__5->SetBinError(7,34.47965);
   hmcerror__5->SetBinError(8,31.16917);
   hmcerror__5->SetBinError(9,32.21158);
   hmcerror__5->SetBinError(10,33.45179);
   hmcerror__5->SetBinError(11,32.27788);
   hmcerror__5->SetBinError(12,37.02104);
   hmcerror__5->SetBinError(13,38.06359);
   hmcerror__5->SetBinError(14,31.1658);
   hmcerror__5->SetBinError(15,31.89177);
   hmcerror__5->SetBinError(16,35.04404);
   hmcerror__5->SetBinError(17,34.85573);
   hmcerror__5->SetBinError(18,31.73265);
   hmcerror__5->SetBinError(19,35.51901);
   hmcerror__5->SetBinError(20,33.34532);
   hmcerror__5->SetBinError(21,34.14353);
   hmcerror__5->SetBinError(22,33.37268);
   hmcerror__5->SetBinError(23,34.87369);
   hmcerror__5->SetBinError(24,45.30296);
   hmcerror__5->SetBinError(25,0.4212968);
   hmcerror__5->SetEntries(3396.741);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   128,
   126,
   117,
   108,
   100,
   103,
   119,
   90,
   97,
   118,
   122,
   115,
   129,
   101,
   113,
   86,
   109,
   99,
   99,
   102,
   104,
   122,
   107,
   107};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   11.31371,
   11.22497,
   10.81665,
   10.3923,
   10.1212,
   10.14889,
   10.90871,
   9.6093,
   9.9704,
   10.86278,
   11.04536,
   10.72381,
   11.35782,
   10.04988,
   10.63015,
   9.3967,
   10.44031,
   10.0712,
   10.0712,
   10.0995,
   10.19804,
   11.04536,
   10.34408,
   10.34408};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   11.31371,
   11.22497,
   10.81665,
   10.3923,
   9.92,
   10.14889,
   10.90871,
   9.4079,
   9.769,
   10.86278,
   11.04536,
   10.72381,
   11.35782,
   10.04988,
   10.63015,
   9.1951,
   10.44031,
   9.87,
   9.87,
   10.0995,
   10.19804,
   11.04536,
   10.34408,
   10.34408};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(70.22785);
   Graph_Graph3005->SetMaximum(146.7333);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.249124,
   0.2302259,
   0.2458456,
   0.2254829,
   0.2351053,
   0.2505551,
   0.2407576,
   0.2361574,
   0.2444619,
   0.235115,
   0.2152316,
   0.2440112,
   0.2419655,
   0.2348725,
   0.2166698,
   0.2557148,
   0.2357297,
   0.2265638,
   0.2339454,
   0.2427376,
   0.2470601,
   0.2576622,
   0.2311864,
   0.2828109};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.249124,
   0.2302259,
   0.2458456,
   0.2254829,
   0.2351053,
   0.2505551,
   0.2407576,
   0.2361574,
   0.2444619,
   0.235115,
   0.2152316,
   0.2440112,
   0.2419655,
   0.2348725,
   0.2166698,
   0.2557148,
   0.2357297,
   0.2265638,
   0.2339454,
   0.2427376,
   0.2470601,
   0.2576622,
   0.2311864,
   0.2828109};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.2259207,
   0.2165709,
   0.2331269,
   0.2113413,
   0.20974,
   0.2220329,
   0.2082595,
   0.2172123,
   0.2279376,
   0.2205144,
   0.207776,
   0.222314,
   0.2214154,
   0.2170117,
   0.2090225,
   0.2263982,
   0.2103593,
   0.2132134,
   0.2090705,
   0.2264214,
   0.2297356,
   0.2324414,
   0.2250293,
   0.2231502};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.2259207,
   0.2165709,
   0.2331269,
   0.2113413,
   0.20974,
   0.2220329,
   0.2082595,
   0.2172123,
   0.2279376,
   0.2205144,
   0.207776,
   0.222314,
   0.2214154,
   0.2170117,
   0.2090225,
   0.2263982,
   0.2103593,
   0.2132134,
   0.2090705,
   0.2264214,
   0.2297356,
   0.2324414,
   0.2250293,
   0.2231502};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.7896442,
   0.8371051,
   0.8284933,
   0.7620118,
   0.7305592,
   0.7916558,
   0.8309294,
   0.6818972,
   0.736158,
   0.8293599,
   0.8135063,
   0.7579822,
   0.820037,
   0.7611586,
   0.7677118,
   0.6275381,
   0.7371683,
   0.7068373,
   0.6520618,
   0.7425102,
   0.7525366,
   0.941932,
   0.7093297,
   0.6679644};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.06979534,
   0.07457525,
   0.07659423,
   0.07332462,
   0.07394136,
   0.07800416,
   0.07617117,
   0.07280616,
   0.07566793,
   0.07634877,
   0.0736514,
   0.07068221,
   0.07220024,
   0.07573812,
   0.07222025,
   0.06856729,
   0.07060792,
   0.07190606,
   0.06633379,
   0.07351946,
   0.07379228,
   0.08527852,
   0.06857349,
   0.06457455};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.06979534,
   0.07457525,
   0.07659423,
   0.07332462,
   0.07247148,
   0.07800416,
   0.07617117,
   0.07128023,
   0.07413946,
   0.07634877,
   0.0736514,
   0.07068221,
   0.07220024,
   0.07573812,
   0.07222025,
   0.06709623,
   0.07060792,
   0.07046954,
   0.06500859,
   0.07351946,
   0.07379228,
   0.08527852,
   0.06857349,
   0.06457455};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.5121468);
   Graph_Graph3008->SetMaximum(1.074034);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
