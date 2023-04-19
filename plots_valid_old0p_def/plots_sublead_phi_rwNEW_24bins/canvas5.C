#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 13:51:03 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-4.119231,-3.326928,3.957692,367.8882);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__13->SetBinContent(1,166.3464);
   hmc__13->SetBinContent(2,154.9618);
   hmc__13->SetBinContent(3,149.1295);
   hmc__13->SetBinContent(4,147.3019);
   hmc__13->SetBinContent(5,140.3976);
   hmc__13->SetBinContent(6,134.3069);
   hmc__13->SetBinContent(7,149.272);
   hmc__13->SetBinContent(8,136.6682);
   hmc__13->SetBinContent(9,136.1652);
   hmc__13->SetBinContent(10,146.8683);
   hmc__13->SetBinContent(11,156.9085);
   hmc__13->SetBinContent(12,156.2956);
   hmc__13->SetBinContent(13,162.9221);
   hmc__13->SetBinContent(14,138.9945);
   hmc__13->SetBinContent(15,153.3472);
   hmc__13->SetBinContent(16,142.715);
   hmc__13->SetBinContent(17,151.8842);
   hmc__13->SetBinContent(18,144.1634);
   hmc__13->SetBinContent(19,156.6127);
   hmc__13->SetBinContent(20,140.2643);
   hmc__13->SetBinContent(21,142.9876);
   hmc__13->SetBinContent(22,134.1126);
   hmc__13->SetBinContent(23,156.2312);
   hmc__13->SetBinContent(24,164.8493);
   hmc__13->SetBinError(1,57.04879);
   hmc__13->SetBinError(2,53.29151);
   hmc__13->SetBinError(3,54.25768);
   hmc__13->SetBinError(4,48.75301);
   hmc__13->SetBinError(5,48.6746);
   hmc__13->SetBinError(6,50.47731);
   hmc__13->SetBinError(7,49.70958);
   hmc__13->SetBinError(8,45.33356);
   hmc__13->SetBinError(9,50.98211);
   hmc__13->SetBinError(10,54.97853);
   hmc__13->SetBinError(11,51.92249);
   hmc__13->SetBinError(12,57.54831);
   hmc__13->SetBinError(13,55.82379);
   hmc__13->SetBinError(14,50.60408);
   hmc__13->SetBinError(15,56.54513);
   hmc__13->SetBinError(16,51.0748);
   hmc__13->SetBinError(17,63.69386);
   hmc__13->SetBinError(18,48.41491);
   hmc__13->SetBinError(19,50.14665);
   hmc__13->SetBinError(20,50.5193);
   hmc__13->SetBinError(21,53.28936);
   hmc__13->SetBinError(22,52.00801);
   hmc__13->SetBinError(23,53.6908);
   hmc__13->SetBinError(24,64.78912);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.326928);
   hmc__13->SetMaximum(349.3274);
   hmc__13->SetEntries(3516.85);
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
   hs5_stack_5->SetMinimum(-9.660135e-09);
   hs5_stack_5->SetMaximum(174.6637);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.08794);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8492898);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.781536);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5988538);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.185922);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.450976);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7800399);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3769979);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2397359);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2954882);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1922885);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3716255);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4666525);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2855518);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,63.97129);
   hNCpi0inFVres_stack_7->SetBinContent(2,66.96444);
   hNCpi0inFVres_stack_7->SetBinContent(3,60.14101);
   hNCpi0inFVres_stack_7->SetBinContent(4,57.61937);
   hNCpi0inFVres_stack_7->SetBinContent(5,56.51718);
   hNCpi0inFVres_stack_7->SetBinContent(6,58.96954);
   hNCpi0inFVres_stack_7->SetBinContent(7,55.85287);
   hNCpi0inFVres_stack_7->SetBinContent(8,53.29252);
   hNCpi0inFVres_stack_7->SetBinContent(9,58.21542);
   hNCpi0inFVres_stack_7->SetBinContent(10,58.45689);
   hNCpi0inFVres_stack_7->SetBinContent(11,64.293);
   hNCpi0inFVres_stack_7->SetBinContent(12,66.22226);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.30132);
   hNCpi0inFVres_stack_7->SetBinContent(14,60.01346);
   hNCpi0inFVres_stack_7->SetBinContent(15,64.9548);
   hNCpi0inFVres_stack_7->SetBinContent(16,59.79177);
   hNCpi0inFVres_stack_7->SetBinContent(17,61.80192);
   hNCpi0inFVres_stack_7->SetBinContent(18,57.55146);
   hNCpi0inFVres_stack_7->SetBinContent(19,53.25);
   hNCpi0inFVres_stack_7->SetBinContent(20,59.7071);
   hNCpi0inFVres_stack_7->SetBinContent(21,65.23014);
   hNCpi0inFVres_stack_7->SetBinContent(22,63.65029);
   hNCpi0inFVres_stack_7->SetBinContent(23,64.95413);
   hNCpi0inFVres_stack_7->SetBinContent(24,68.91114);
   hNCpi0inFVres_stack_7->SetBinError(1,2.586535);
   hNCpi0inFVres_stack_7->SetBinError(2,2.733248);
   hNCpi0inFVres_stack_7->SetBinError(3,2.527733);
   hNCpi0inFVres_stack_7->SetBinError(4,2.456569);
   hNCpi0inFVres_stack_7->SetBinError(5,2.516455);
   hNCpi0inFVres_stack_7->SetBinError(6,2.50554);
   hNCpi0inFVres_stack_7->SetBinError(7,2.446182);
   hNCpi0inFVres_stack_7->SetBinError(8,2.335691);
   hNCpi0inFVres_stack_7->SetBinError(9,2.526257);
   hNCpi0inFVres_stack_7->SetBinError(10,2.538782);
   hNCpi0inFVres_stack_7->SetBinError(11,2.660771);
   hNCpi0inFVres_stack_7->SetBinError(12,2.688818);
   hNCpi0inFVres_stack_7->SetBinError(13,2.608319);
   hNCpi0inFVres_stack_7->SetBinError(14,2.49191);
   hNCpi0inFVres_stack_7->SetBinError(15,2.688143);
   hNCpi0inFVres_stack_7->SetBinError(16,2.520653);
   hNCpi0inFVres_stack_7->SetBinError(17,2.610811);
   hNCpi0inFVres_stack_7->SetBinError(18,2.485224);
   hNCpi0inFVres_stack_7->SetBinError(19,2.322824);
   hNCpi0inFVres_stack_7->SetBinError(20,2.545139);
   hNCpi0inFVres_stack_7->SetBinError(21,2.662952);
   hNCpi0inFVres_stack_7->SetBinError(22,2.620161);
   hNCpi0inFVres_stack_7->SetBinError(23,2.663658);
   hNCpi0inFVres_stack_7->SetBinError(24,2.775047);
   hNCpi0inFVres_stack_7->SetEntries(26810);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.5998);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.82076);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.87974);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.79569);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.49594);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.62296);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.83005);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.45459);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.68151);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.61966);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.02013);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.44677);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.65437);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.7124);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.71223);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.5293);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.76096);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.72519);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.25388);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.62736);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.58925);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.6095);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.25562);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.04163);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.086916);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.073253);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.348048);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.128898);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.194943);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.043372);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.014849);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.205294);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.106436);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.196815);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.124435);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.076874);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.293907);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.111992);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.097163);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.129558);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9706778);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.106524);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.105762);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.056716);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.10872);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9847437);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.142236);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.064453);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,28.74825);
   hCCpi0inFV_stack_10->SetBinContent(2,22.21319);
   hCCpi0inFV_stack_10->SetBinContent(3,22.08529);
   hCCpi0inFV_stack_10->SetBinContent(4,20.6874);
   hCCpi0inFV_stack_10->SetBinContent(5,19.24119);
   hCCpi0inFV_stack_10->SetBinContent(6,13.84489);
   hCCpi0inFV_stack_10->SetBinContent(7,18.56144);
   hCCpi0inFV_stack_10->SetBinContent(8,16.35639);
   hCCpi0inFV_stack_10->SetBinContent(9,17.43775);
   hCCpi0inFV_stack_10->SetBinContent(10,26.03291);
   hCCpi0inFV_stack_10->SetBinContent(11,27.37897);
   hCCpi0inFV_stack_10->SetBinContent(12,26.38787);
   hCCpi0inFV_stack_10->SetBinContent(13,28.16995);
   hCCpi0inFV_stack_10->SetBinContent(14,18.9409);
   hCCpi0inFV_stack_10->SetBinContent(15,20.41935);
   hCCpi0inFV_stack_10->SetBinContent(16,19.32239);
   hCCpi0inFV_stack_10->SetBinContent(17,21.41924);
   hCCpi0inFV_stack_10->SetBinContent(18,18.47874);
   hCCpi0inFV_stack_10->SetBinContent(19,22.37279);
   hCCpi0inFV_stack_10->SetBinContent(20,19.48686);
   hCCpi0inFV_stack_10->SetBinContent(21,21.61522);
   hCCpi0inFV_stack_10->SetBinContent(22,16.61427);
   hCCpi0inFV_stack_10->SetBinContent(23,26.60096);
   hCCpi0inFV_stack_10->SetBinContent(24,23.4761);
   hCCpi0inFV_stack_10->SetBinError(1,2.675001);
   hCCpi0inFV_stack_10->SetBinError(2,2.315984);
   hCCpi0inFV_stack_10->SetBinError(3,2.378903);
   hCCpi0inFV_stack_10->SetBinError(4,2.312874);
   hCCpi0inFV_stack_10->SetBinError(5,2.202225);
   hCCpi0inFV_stack_10->SetBinError(6,1.914256);
   hCCpi0inFV_stack_10->SetBinError(7,2.194762);
   hCCpi0inFV_stack_10->SetBinError(8,2.010974);
   hCCpi0inFV_stack_10->SetBinError(9,2.018507);
   hCCpi0inFV_stack_10->SetBinError(10,2.612539);
   hCCpi0inFV_stack_10->SetBinError(11,2.673143);
   hCCpi0inFV_stack_10->SetBinError(12,2.543775);
   hCCpi0inFV_stack_10->SetBinError(13,2.716727);
   hCCpi0inFV_stack_10->SetBinError(14,2.168771);
   hCCpi0inFV_stack_10->SetBinError(15,2.274082);
   hCCpi0inFV_stack_10->SetBinError(16,2.165927);
   hCCpi0inFV_stack_10->SetBinError(17,2.376451);
   hCCpi0inFV_stack_10->SetBinError(18,2.137153);
   hCCpi0inFV_stack_10->SetBinError(19,2.350163);
   hCCpi0inFV_stack_10->SetBinError(20,2.215744);
   hCCpi0inFV_stack_10->SetBinError(21,2.39691);
   hCCpi0inFV_stack_10->SetBinError(22,2.073805);
   hCCpi0inFV_stack_10->SetBinError(23,2.513469);
   hCCpi0inFV_stack_10->SetBinError(24,2.427356);
   hCCpi0inFV_stack_10->SetEntries(2205);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,12.78954);
   hNCinFV_stack_11->SetBinContent(2,11.19963);
   hNCinFV_stack_11->SetBinContent(3,14.21642);
   hNCinFV_stack_11->SetBinContent(4,11.89181);
   hNCinFV_stack_11->SetBinContent(5,9.623129);
   hNCinFV_stack_11->SetBinContent(6,9.628201);
   hNCinFV_stack_11->SetBinContent(7,12.74136);
   hNCinFV_stack_11->SetBinContent(8,10.35674);
   hNCinFV_stack_11->SetBinContent(9,9.866943);
   hNCinFV_stack_11->SetBinContent(10,10.64197);
   hNCinFV_stack_11->SetBinContent(11,12.8876);
   hNCinFV_stack_11->SetBinContent(12,10.74063);
   hNCinFV_stack_11->SetBinContent(13,12.44937);
   hNCinFV_stack_11->SetBinContent(14,12.57217);
   hNCinFV_stack_11->SetBinContent(15,12.60236);
   hNCinFV_stack_11->SetBinContent(16,12.90728);
   hNCinFV_stack_11->SetBinContent(17,12.22584);
   hNCinFV_stack_11->SetBinContent(18,11.27354);
   hNCinFV_stack_11->SetBinContent(19,13.08938);
   hNCinFV_stack_11->SetBinContent(20,10.01656);
   hNCinFV_stack_11->SetBinContent(21,10.65042);
   hNCinFV_stack_11->SetBinContent(22,12.01222);
   hNCinFV_stack_11->SetBinContent(23,11.92693);
   hNCinFV_stack_11->SetBinContent(24,9.539681);
   hNCinFV_stack_11->SetBinError(1,1.841212);
   hNCinFV_stack_11->SetBinError(2,1.593161);
   hNCinFV_stack_11->SetBinError(3,1.902968);
   hNCinFV_stack_11->SetBinError(4,1.665605);
   hNCinFV_stack_11->SetBinError(5,1.557527);
   hNCinFV_stack_11->SetBinError(6,1.558165);
   hNCinFV_stack_11->SetBinError(7,1.852127);
   hNCinFV_stack_11->SetBinError(8,1.618334);
   hNCinFV_stack_11->SetBinError(9,1.619333);
   hNCinFV_stack_11->SetBinError(10,1.66505);
   hNCinFV_stack_11->SetBinError(11,1.819367);
   hNCinFV_stack_11->SetBinError(12,1.700309);
   hNCinFV_stack_11->SetBinError(13,1.809514);
   hNCinFV_stack_11->SetBinError(14,1.73369);
   hNCinFV_stack_11->SetBinError(15,1.776713);
   hNCinFV_stack_11->SetBinError(16,1.766187);
   hNCinFV_stack_11->SetBinError(17,1.756684);
   hNCinFV_stack_11->SetBinError(18,1.686866);
   hNCinFV_stack_11->SetBinError(19,1.830514);
   hNCinFV_stack_11->SetBinError(20,1.582177);
   hNCinFV_stack_11->SetBinError(21,1.666044);
   hNCinFV_stack_11->SetBinError(22,1.743737);
   hNCinFV_stack_11->SetBinError(23,1.664875);
   hNCinFV_stack_11->SetBinError(24,1.520917);
   hNCinFV_stack_11->SetEntries(1184);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,19.18098);
   hnumuCCinFV_stack_12->SetBinContent(2,15.1138);
   hnumuCCinFV_stack_12->SetBinContent(3,11.7617);
   hnumuCCinFV_stack_12->SetBinContent(4,18.52788);
   hnumuCCinFV_stack_12->SetBinContent(5,13.04275);
   hnumuCCinFV_stack_12->SetBinContent(6,11.6516);
   hnumuCCinFV_stack_12->SetBinContent(7,13.00156);
   hnumuCCinFV_stack_12->SetBinContent(8,13.29975);
   hnumuCCinFV_stack_12->SetBinContent(9,14.36849);
   hnumuCCinFV_stack_12->SetBinContent(10,14.29842);
   hnumuCCinFV_stack_12->SetBinContent(11,13.49179);
   hnumuCCinFV_stack_12->SetBinContent(12,14.50762);
   hnumuCCinFV_stack_12->SetBinContent(13,22.38962);
   hnumuCCinFV_stack_12->SetBinContent(14,18.40837);
   hnumuCCinFV_stack_12->SetBinContent(15,15.80669);
   hnumuCCinFV_stack_12->SetBinContent(16,18.33901);
   hnumuCCinFV_stack_12->SetBinContent(17,16.40757);
   hnumuCCinFV_stack_12->SetBinContent(18,18.56041);
   hnumuCCinFV_stack_12->SetBinContent(19,22.86785);
   hnumuCCinFV_stack_12->SetBinContent(20,17.33331);
   hnumuCCinFV_stack_12->SetBinContent(21,14.97931);
   hnumuCCinFV_stack_12->SetBinContent(22,11.67507);
   hnumuCCinFV_stack_12->SetBinContent(23,16.09122);
   hnumuCCinFV_stack_12->SetBinContent(24,21.60049);
   hnumuCCinFV_stack_12->SetBinError(1,2.375725);
   hnumuCCinFV_stack_12->SetBinError(2,2.352474);
   hnumuCCinFV_stack_12->SetBinError(3,1.709596);
   hnumuCCinFV_stack_12->SetBinError(4,2.580148);
   hnumuCCinFV_stack_12->SetBinError(5,2.120223);
   hnumuCCinFV_stack_12->SetBinError(6,2.10857);
   hnumuCCinFV_stack_12->SetBinError(7,1.833902);
   hnumuCCinFV_stack_12->SetBinError(8,1.877644);
   hnumuCCinFV_stack_12->SetBinError(9,2.263654);
   hnumuCCinFV_stack_12->SetBinError(10,2.253371);
   hnumuCCinFV_stack_12->SetBinError(11,2.095879);
   hnumuCCinFV_stack_12->SetBinError(12,2.02582);
   hnumuCCinFV_stack_12->SetBinError(13,2.848555);
   hnumuCCinFV_stack_12->SetBinError(14,2.313777);
   hnumuCCinFV_stack_12->SetBinError(15,2.171273);
   hnumuCCinFV_stack_12->SetBinError(16,2.362458);
   hnumuCCinFV_stack_12->SetBinError(17,2.30423);
   hnumuCCinFV_stack_12->SetBinError(18,2.570562);
   hnumuCCinFV_stack_12->SetBinError(19,3.291829);
   hnumuCCinFV_stack_12->SetBinError(20,3.246613);
   hnumuCCinFV_stack_12->SetBinError(21,2.018154);
   hnumuCCinFV_stack_12->SetBinError(22,1.79267);
   hnumuCCinFV_stack_12->SetBinError(23,2.391749);
   hnumuCCinFV_stack_12->SetBinError(24,2.758912);
   hnumuCCinFV_stack_12->SetEntries(1510);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.125273);
   hnueCCinFV_stack_13->SetBinContent(2,0.6989822);
   hnueCCinFV_stack_13->SetBinContent(3,1.200917);
   hnueCCinFV_stack_13->SetBinContent(4,1.404358);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.8091456);
   hnueCCinFV_stack_13->SetBinContent(7,0.9696276);
   hnueCCinFV_stack_13->SetBinContent(8,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(9,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(11,0.6438754);
   hnueCCinFV_stack_13->SetBinContent(13,0.7382848);
   hnueCCinFV_stack_13->SetBinContent(16,0.8057001);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,1.927569);
   hnueCCinFV_stack_13->SetBinContent(20,2.239153);
   hnueCCinFV_stack_13->SetBinContent(21,0.771975);
   hnueCCinFV_stack_13->SetBinContent(22,0.9460971);
   hnueCCinFV_stack_13->SetBinContent(23,1.455703);
   hnueCCinFV_stack_13->SetBinContent(24,1.098501);
   hnueCCinFV_stack_13->SetBinError(1,0.783722);
   hnueCCinFV_stack_13->SetBinError(2,0.4059236);
   hnueCCinFV_stack_13->SetBinError(3,0.5503192);
   hnueCCinFV_stack_13->SetBinError(4,0.6484658);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.4829484);
   hnueCCinFV_stack_13->SetBinError(7,0.5064878);
   hnueCCinFV_stack_13->SetBinError(8,0.5946997);
   hnueCCinFV_stack_13->SetBinError(9,0.5507173);
   hnueCCinFV_stack_13->SetBinError(11,0.3743212);
   hnueCCinFV_stack_13->SetBinError(13,0.4415857);
   hnueCCinFV_stack_13->SetBinError(16,0.4980907);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,1.24412);
   hnueCCinFV_stack_13->SetBinError(20,1.621199);
   hnueCCinFV_stack_13->SetBinError(21,0.4580576);
   hnueCCinFV_stack_13->SetBinError(22,0.4744541);
   hnueCCinFV_stack_13->SetBinError(23,0.6747802);
   hnueCCinFV_stack_13->SetBinError(24,0.5096995);
   hnueCCinFV_stack_13->SetEntries(72);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__14->SetBinContent(1,166.3464);
   hmcerror__14->SetBinContent(2,154.9618);
   hmcerror__14->SetBinContent(3,149.1295);
   hmcerror__14->SetBinContent(4,147.3019);
   hmcerror__14->SetBinContent(5,140.3976);
   hmcerror__14->SetBinContent(6,134.3069);
   hmcerror__14->SetBinContent(7,149.272);
   hmcerror__14->SetBinContent(8,136.6682);
   hmcerror__14->SetBinContent(9,136.1652);
   hmcerror__14->SetBinContent(10,146.8683);
   hmcerror__14->SetBinContent(11,156.9085);
   hmcerror__14->SetBinContent(12,156.2956);
   hmcerror__14->SetBinContent(13,162.9221);
   hmcerror__14->SetBinContent(14,138.9945);
   hmcerror__14->SetBinContent(15,153.3472);
   hmcerror__14->SetBinContent(16,142.715);
   hmcerror__14->SetBinContent(17,151.8842);
   hmcerror__14->SetBinContent(18,144.1634);
   hmcerror__14->SetBinContent(19,156.6127);
   hmcerror__14->SetBinContent(20,140.2643);
   hmcerror__14->SetBinContent(21,142.9876);
   hmcerror__14->SetBinContent(22,134.1126);
   hmcerror__14->SetBinContent(23,156.2312);
   hmcerror__14->SetBinContent(24,164.8493);
   hmcerror__14->SetBinError(1,57.04879);
   hmcerror__14->SetBinError(2,53.29151);
   hmcerror__14->SetBinError(3,54.25768);
   hmcerror__14->SetBinError(4,48.75301);
   hmcerror__14->SetBinError(5,48.6746);
   hmcerror__14->SetBinError(6,50.47731);
   hmcerror__14->SetBinError(7,49.70958);
   hmcerror__14->SetBinError(8,45.33356);
   hmcerror__14->SetBinError(9,50.98211);
   hmcerror__14->SetBinError(10,54.97853);
   hmcerror__14->SetBinError(11,51.92249);
   hmcerror__14->SetBinError(12,57.54831);
   hmcerror__14->SetBinError(13,55.82379);
   hmcerror__14->SetBinError(14,50.60408);
   hmcerror__14->SetBinError(15,56.54513);
   hmcerror__14->SetBinError(16,51.0748);
   hmcerror__14->SetBinError(17,63.69386);
   hmcerror__14->SetBinError(18,48.41491);
   hmcerror__14->SetBinError(19,50.14665);
   hmcerror__14->SetBinError(20,50.5193);
   hmcerror__14->SetBinError(21,53.28936);
   hmcerror__14->SetBinError(22,52.00801);
   hmcerror__14->SetBinError(23,53.6908);
   hmcerror__14->SetBinError(24,64.78912);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(3516.85);

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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(70.22785);
   Graph_Graph3017->SetMaximum(146.7333);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/24","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all");
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
   0.3429518,
   0.343901,
   0.3638292,
   0.3309734,
   0.3466913,
   0.3758354,
   0.3330135,
   0.3317052,
   0.3744137,
   0.374339,
   0.3309094,
   0.3682018,
   0.342641,
   0.3640726,
   0.3687393,
   0.3578796,
   0.4193579,
   0.3358336,
   0.3201952,
   0.3601722,
   0.3726852,
   0.3877936,
   0.3436623,
   0.3930202};
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
   0.3429518,
   0.343901,
   0.3638292,
   0.3309734,
   0.3466913,
   0.3758354,
   0.3330135,
   0.3317052,
   0.3744137,
   0.374339,
   0.3309094,
   0.3682018,
   0.342641,
   0.3640726,
   0.3687393,
   0.3578796,
   0.4193579,
   0.3358336,
   0.3201952,
   0.3601722,
   0.3726852,
   0.3877936,
   0.3436623,
   0.3930202};
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
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.3084668,
   0.3125953,
   0.3291919,
   0.2960932,
   0.2959645,
   0.3193013,
   0.2930903,
   0.3095216,
   0.329003,
   0.3129786,
   0.3077625,
   0.3245043,
   0.3057595,
   0.3123299,
   0.3083802,
   0.3296326,
   0.3003259,
   0.2965005,
   0.2873802,
   0.3183075,
   0.332034,
   0.3337721,
   0.3115814,
   0.3115087};
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
   0.3084668,
   0.3125953,
   0.3291919,
   0.2960932,
   0.2959645,
   0.3193013,
   0.2930903,
   0.3095216,
   0.329003,
   0.3129786,
   0.3077625,
   0.3245043,
   0.3057595,
   0.3123299,
   0.3083802,
   0.3296326,
   0.3003259,
   0.2965005,
   0.2873802,
   0.3183075,
   0.332034,
   0.3337721,
   0.3115814,
   0.3115087};
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
   0.7694787,
   0.8131037,
   0.7845529,
   0.7331882,
   0.7122631,
   0.7669001,
   0.7972026,
   0.6585291,
   0.7123702,
   0.8034409,
   0.7775233,
   0.7357853,
   0.7917894,
   0.7266477,
   0.73689,
   0.6025995,
   0.7176519,
   0.6867207,
   0.6321325,
   0.7271988,
   0.7273359,
   0.9096833,
   0.6848822,
   0.6490775};
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
   0.06801295,
   0.07243704,
   0.07253194,
   0.07055107,
   0.07208958,
   0.07556491,
   0.07307944,
   0.07031116,
   0.07322284,
   0.07396273,
   0.07039365,
   0.06861233,
   0.06971317,
   0.07230414,
   0.06932078,
   0.06584241,
   0.06873858,
   0.06985961,
   0.06430639,
   0.07200341,
   0.07132115,
   0.08235886,
   0.06621006,
   0.06274869};
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
   0.06801295,
   0.07243704,
   0.07253194,
   0.07055107,
   0.0706565,
   0.07556491,
   0.07307944,
   0.06883751,
   0.07174376,
   0.07396273,
   0.07039365,
   0.06861233,
   0.06971317,
   0.07230414,
   0.06932078,
   0.0644298,
   0.06873858,
   0.06846398,
   0.0630217,
   0.07200341,
   0.07132115,
   0.08235886,
   0.06621006,
   0.06274869};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.4912286);
   Graph_Graph3020->SetMaximum(1.037571);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
