#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 21:59:21 2023) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-3.522202,3.957692,389.4814);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__13->SetBinContent(1,176.1101);
   hmc__13->SetBinContent(2,174.5471);
   hmc__13->SetBinContent(3,158.8662);
   hmc__13->SetBinContent(4,140.2364);
   hmc__13->SetBinContent(5,145.701);
   hmc__13->SetBinContent(6,130.8095);
   hmc__13->SetBinContent(7,133.9665);
   hmc__13->SetBinContent(8,132.091);
   hmc__13->SetBinContent(9,143.1289);
   hmc__13->SetBinContent(10,144.3566);
   hmc__13->SetBinContent(11,151.7936);
   hmc__13->SetBinContent(12,147.8207);
   hmc__13->SetBinContent(13,166.606);
   hmc__13->SetBinContent(14,161.0924);
   hmc__13->SetBinContent(15,151.7868);
   hmc__13->SetBinContent(16,151.0738);
   hmc__13->SetBinContent(17,135.5897);
   hmc__13->SetBinContent(18,134.9409);
   hmc__13->SetBinContent(19,128.4374);
   hmc__13->SetBinContent(20,135.2618);
   hmc__13->SetBinContent(21,141.6112);
   hmc__13->SetBinContent(22,159.9493);
   hmc__13->SetBinContent(23,151.0701);
   hmc__13->SetBinContent(24,166.859);
   hmc__13->SetBinError(1,58.01869);
   hmc__13->SetBinError(2,59.85838);
   hmc__13->SetBinError(3,69.68315);
   hmc__13->SetBinError(4,57.22331);
   hmc__13->SetBinError(5,46.97867);
   hmc__13->SetBinError(6,44.61987);
   hmc__13->SetBinError(7,46.85739);
   hmc__13->SetBinError(8,49.71453);
   hmc__13->SetBinError(9,49.28723);
   hmc__13->SetBinError(10,51.33073);
   hmc__13->SetBinError(11,53.85034);
   hmc__13->SetBinError(12,54.5144);
   hmc__13->SetBinError(13,55.28655);
   hmc__13->SetBinError(14,54.11619);
   hmc__13->SetBinError(15,55.82045);
   hmc__13->SetBinError(16,52.65676);
   hmc__13->SetBinError(17,53.76403);
   hmc__13->SetBinError(18,63.68179);
   hmc__13->SetBinError(19,48.8984);
   hmc__13->SetBinError(20,49.7391);
   hmc__13->SetBinError(21,51.03559);
   hmc__13->SetBinError(22,54.86973);
   hmc__13->SetBinError(23,53.76572);
   hmc__13->SetBinError(24,55.27439);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.522202);
   hmc__13->SetMaximum(369.8313);
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
   hs5_stack_5->SetMinimum(-3.571482e-09);
   hs5_stack_5->SetMaximum(184.9157);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.483495);
   hbadmatch_stack_1->SetBinContent(2,4.000258);
   hbadmatch_stack_1->SetBinContent(3,2.366969);
   hbadmatch_stack_1->SetBinContent(4,3.844089);
   hbadmatch_stack_1->SetBinContent(5,4.36864);
   hbadmatch_stack_1->SetBinContent(6,3.807342);
   hbadmatch_stack_1->SetBinContent(7,3.209139);
   hbadmatch_stack_1->SetBinContent(8,2.857903);
   hbadmatch_stack_1->SetBinContent(9,4.816415);
   hbadmatch_stack_1->SetBinContent(10,3.874997);
   hbadmatch_stack_1->SetBinContent(11,2.539189);
   hbadmatch_stack_1->SetBinContent(12,2.234014);
   hbadmatch_stack_1->SetBinContent(13,3.332652);
   hbadmatch_stack_1->SetBinContent(14,3.162313);
   hbadmatch_stack_1->SetBinContent(15,2.271057);
   hbadmatch_stack_1->SetBinContent(16,5.317977);
   hbadmatch_stack_1->SetBinContent(17,3.836833);
   hbadmatch_stack_1->SetBinContent(18,1.85729);
   hbadmatch_stack_1->SetBinContent(19,3.24106);
   hbadmatch_stack_1->SetBinContent(20,4.263323);
   hbadmatch_stack_1->SetBinContent(21,1.61717);
   hbadmatch_stack_1->SetBinContent(22,6.193892);
   hbadmatch_stack_1->SetBinContent(23,1.548125);
   hbadmatch_stack_1->SetBinContent(24,2.535931);
   hbadmatch_stack_1->SetBinError(1,1.066137);
   hbadmatch_stack_1->SetBinError(2,1.081391);
   hbadmatch_stack_1->SetBinError(3,0.8159692);
   hbadmatch_stack_1->SetBinError(4,1.070099);
   hbadmatch_stack_1->SetBinError(5,1.082821);
   hbadmatch_stack_1->SetBinError(6,0.9871822);
   hbadmatch_stack_1->SetBinError(7,0.9302246);
   hbadmatch_stack_1->SetBinError(8,0.8509557);
   hbadmatch_stack_1->SetBinError(9,1.497054);
   hbadmatch_stack_1->SetBinError(10,1.01006);
   hbadmatch_stack_1->SetBinError(11,0.8689046);
   hbadmatch_stack_1->SetBinError(12,0.7165117);
   hbadmatch_stack_1->SetBinError(13,1.058395);
   hbadmatch_stack_1->SetBinError(14,0.8287057);
   hbadmatch_stack_1->SetBinError(15,0.7810278);
   hbadmatch_stack_1->SetBinError(16,2.16339);
   hbadmatch_stack_1->SetBinError(17,0.9662143);
   hbadmatch_stack_1->SetBinError(18,0.6799255);
   hbadmatch_stack_1->SetBinError(19,1.103421);
   hbadmatch_stack_1->SetBinError(20,1.067738);
   hbadmatch_stack_1->SetBinError(21,0.7081597);
   hbadmatch_stack_1->SetBinError(22,1.337655);
   hbadmatch_stack_1->SetBinError(23,0.5997932);
   hbadmatch_stack_1->SetBinError(24,0.8325131);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.66531);
   hext_stack_2->SetBinContent(2,13.06572);
   hext_stack_2->SetBinContent(3,11.5403);
   hext_stack_2->SetBinContent(4,7.627179);
   hext_stack_2->SetBinContent(5,23.04746);
   hext_stack_2->SetBinContent(6,14.14706);
   hext_stack_2->SetBinContent(7,15.81812);
   hext_stack_2->SetBinContent(8,10.89868);
   hext_stack_2->SetBinContent(9,13.0067);
   hext_stack_2->SetBinContent(10,8.806664);
   hext_stack_2->SetBinContent(11,6.571785);
   hext_stack_2->SetBinContent(12,5.83638);
   hext_stack_2->SetBinContent(13,8.959478);
   hext_stack_2->SetBinContent(14,3.647801);
   hext_stack_2->SetBinContent(15,9.058812);
   hext_stack_2->SetBinContent(16,11.31246);
   hext_stack_2->SetBinContent(17,8.242843);
   hext_stack_2->SetBinContent(18,17.89301);
   hext_stack_2->SetBinContent(19,16.05754);
   hext_stack_2->SetBinContent(20,15.79223);
   hext_stack_2->SetBinContent(21,13.62236);
   hext_stack_2->SetBinContent(22,10.59583);
   hext_stack_2->SetBinContent(23,6.24298);
   hext_stack_2->SetBinContent(24,9.436689);
   hext_stack_2->SetBinError(1,2.766741);
   hext_stack_2->SetBinError(2,2.584156);
   hext_stack_2->SetBinError(3,2.410265);
   hext_stack_2->SetBinError(4,1.735511);
   hext_stack_2->SetBinError(5,3.505488);
   hext_stack_2->SetBinError(6,2.566159);
   hext_stack_2->SetBinError(7,2.800198);
   hext_stack_2->SetBinError(8,2.323297);
   hext_stack_2->SetBinError(9,2.546687);
   hext_stack_2->SetBinError(10,2.09257);
   hext_stack_2->SetBinError(11,1.62364);
   hext_stack_2->SetBinError(12,1.493496);
   hext_stack_2->SetBinError(13,2.136611);
   hext_stack_2->SetBinError(14,1.246589);
   hext_stack_2->SetBinError(15,1.971413);
   hext_stack_2->SetBinError(16,2.315563);
   hext_stack_2->SetBinError(17,1.972853);
   hext_stack_2->SetBinError(18,3.098176);
   hext_stack_2->SetBinError(19,2.867504);
   hext_stack_2->SetBinError(20,2.641814);
   hext_stack_2->SetBinError(21,2.713994);
   hext_stack_2->SetBinError(22,2.165381);
   hext_stack_2->SetBinError(23,1.547854);
   hext_stack_2->SetBinError(24,2.203769);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.6588001);
   hdirt_stack_3->SetBinContent(3,0.6763744);
   hdirt_stack_3->SetBinContent(4,0.6951543);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,1.36306);
   hdirt_stack_3->SetBinContent(7,0.9140499);
   hdirt_stack_3->SetBinContent(8,1.100025);
   hdirt_stack_3->SetBinContent(9,0.2516114);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,1.149204);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(17,0.743394);
   hdirt_stack_3->SetBinContent(18,0.9859834);
   hdirt_stack_3->SetBinContent(19,1.130314);
   hdirt_stack_3->SetBinContent(20,1.347093);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,1.193245);
   hdirt_stack_3->SetBinContent(23,0.6415418);
   hdirt_stack_3->SetBinContent(24,0.400075);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.3855615);
   hdirt_stack_3->SetBinError(3,0.4782689);
   hdirt_stack_3->SetBinError(4,0.4258516);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.5669696);
   hdirt_stack_3->SetBinError(7,0.4788161);
   hdirt_stack_3->SetBinError(8,0.5136649);
   hdirt_stack_3->SetBinError(9,0.2516114);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.9557142);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(17,0.3770732);
   hdirt_stack_3->SetBinError(18,0.588423);
   hdirt_stack_3->SetBinError(19,0.4939269);
   hdirt_stack_3->SetBinError(20,0.6015335);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.637085);
   hdirt_stack_3->SetBinError(23,0.40094);
   hdirt_stack_3->SetBinError(24,0.296158);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.12523);
   houtFV_stack_4->SetBinContent(2,8.982877);
   houtFV_stack_4->SetBinContent(3,9.941799);
   houtFV_stack_4->SetBinContent(4,10.87169);
   houtFV_stack_4->SetBinContent(5,8.260727);
   houtFV_stack_4->SetBinContent(6,10.64696);
   houtFV_stack_4->SetBinContent(7,7.153216);
   houtFV_stack_4->SetBinContent(8,10.50189);
   houtFV_stack_4->SetBinContent(9,8.352248);
   houtFV_stack_4->SetBinContent(10,8.754272);
   houtFV_stack_4->SetBinContent(11,7.401916);
   houtFV_stack_4->SetBinContent(12,7.983947);
   houtFV_stack_4->SetBinContent(13,7.479176);
   houtFV_stack_4->SetBinContent(14,9.59836);
   houtFV_stack_4->SetBinContent(15,11.6298);
   houtFV_stack_4->SetBinContent(16,9.31633);
   houtFV_stack_4->SetBinContent(17,9.183102);
   houtFV_stack_4->SetBinContent(18,8.110936);
   houtFV_stack_4->SetBinContent(19,7.337166);
   houtFV_stack_4->SetBinContent(20,9.526513);
   houtFV_stack_4->SetBinContent(21,9.896147);
   houtFV_stack_4->SetBinContent(22,8.150808);
   houtFV_stack_4->SetBinContent(23,9.742321);
   houtFV_stack_4->SetBinContent(24,7.420442);
   houtFV_stack_4->SetBinError(1,1.640127);
   houtFV_stack_4->SetBinError(2,1.487135);
   houtFV_stack_4->SetBinError(3,1.61726);
   houtFV_stack_4->SetBinError(4,1.651986);
   houtFV_stack_4->SetBinError(5,1.400837);
   houtFV_stack_4->SetBinError(6,1.623877);
   houtFV_stack_4->SetBinError(7,1.333899);
   houtFV_stack_4->SetBinError(8,1.64216);
   houtFV_stack_4->SetBinError(9,1.468146);
   houtFV_stack_4->SetBinError(10,1.443559);
   houtFV_stack_4->SetBinError(11,1.377014);
   houtFV_stack_4->SetBinError(12,1.41055);
   houtFV_stack_4->SetBinError(13,1.310141);
   houtFV_stack_4->SetBinError(14,1.549191);
   houtFV_stack_4->SetBinError(15,1.621944);
   houtFV_stack_4->SetBinError(16,1.55544);
   houtFV_stack_4->SetBinError(17,1.500594);
   houtFV_stack_4->SetBinError(18,1.484753);
   houtFV_stack_4->SetBinError(19,1.316504);
   houtFV_stack_4->SetBinError(20,1.563091);
   houtFV_stack_4->SetBinError(21,1.629007);
   houtFV_stack_4->SetBinError(22,1.456345);
   houtFV_stack_4->SetBinError(23,1.625274);
   houtFV_stack_4->SetBinError(24,1.386998);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5432221);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4450719);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2611072);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.198595);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04832419);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.08694);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.00424);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3001705);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3738879);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3199419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,68.59893);
   hNCpi0inFVres_stack_7->SetBinContent(2,67.14048);
   hNCpi0inFVres_stack_7->SetBinContent(3,66.41455);
   hNCpi0inFVres_stack_7->SetBinContent(4,61.06171);
   hNCpi0inFVres_stack_7->SetBinContent(5,55.95966);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.66129);
   hNCpi0inFVres_stack_7->SetBinContent(7,58.34814);
   hNCpi0inFVres_stack_7->SetBinContent(8,54.75196);
   hNCpi0inFVres_stack_7->SetBinContent(9,62.52282);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.2332);
   hNCpi0inFVres_stack_7->SetBinContent(11,62.15096);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.68497);
   hNCpi0inFVres_stack_7->SetBinContent(13,60.7485);
   hNCpi0inFVres_stack_7->SetBinContent(14,62.70899);
   hNCpi0inFVres_stack_7->SetBinContent(15,64.18089);
   hNCpi0inFVres_stack_7->SetBinContent(16,63.51978);
   hNCpi0inFVres_stack_7->SetBinContent(17,57.44331);
   hNCpi0inFVres_stack_7->SetBinContent(18,55.35465);
   hNCpi0inFVres_stack_7->SetBinContent(19,51.34717);
   hNCpi0inFVres_stack_7->SetBinContent(20,57.39621);
   hNCpi0inFVres_stack_7->SetBinContent(21,63.21865);
   hNCpi0inFVres_stack_7->SetBinContent(22,65.51379);
   hNCpi0inFVres_stack_7->SetBinContent(23,63.75011);
   hNCpi0inFVres_stack_7->SetBinContent(24,66.92259);
   hNCpi0inFVres_stack_7->SetBinError(1,2.780885);
   hNCpi0inFVres_stack_7->SetBinError(2,2.736181);
   hNCpi0inFVres_stack_7->SetBinError(3,2.660661);
   hNCpi0inFVres_stack_7->SetBinError(4,2.532809);
   hNCpi0inFVres_stack_7->SetBinError(5,2.445745);
   hNCpi0inFVres_stack_7->SetBinError(6,2.354762);
   hNCpi0inFVres_stack_7->SetBinError(7,2.590395);
   hNCpi0inFVres_stack_7->SetBinError(8,2.382546);
   hNCpi0inFVres_stack_7->SetBinError(9,2.588324);
   hNCpi0inFVres_stack_7->SetBinError(10,2.621077);
   hNCpi0inFVres_stack_7->SetBinError(11,2.648902);
   hNCpi0inFVres_stack_7->SetBinError(12,2.481358);
   hNCpi0inFVres_stack_7->SetBinError(13,2.513552);
   hNCpi0inFVres_stack_7->SetBinError(14,2.586573);
   hNCpi0inFVres_stack_7->SetBinError(15,2.641649);
   hNCpi0inFVres_stack_7->SetBinError(16,2.680494);
   hNCpi0inFVres_stack_7->SetBinError(17,2.402474);
   hNCpi0inFVres_stack_7->SetBinError(18,2.426693);
   hNCpi0inFVres_stack_7->SetBinError(19,2.337218);
   hNCpi0inFVres_stack_7->SetBinError(20,2.491366);
   hNCpi0inFVres_stack_7->SetBinError(21,2.579855);
   hNCpi0inFVres_stack_7->SetBinError(22,2.673794);
   hNCpi0inFVres_stack_7->SetBinError(23,2.632967);
   hNCpi0inFVres_stack_7->SetBinError(24,2.715238);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.42585);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.39803);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.80492);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.27024);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.92041);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.38301);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.47251);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.28011);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.24109);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.85324);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.05883);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.30917);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.9744);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.14535);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.75042);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.13662);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.69146);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.185269);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.83088);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.89035);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.78415);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.83811);
   hNCpi0inFVdis_stack_8->SetBinContent(23,13.48306);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.61184);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.134972);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.153622);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.258556);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.167846);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.089212);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.204891);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.080812);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.088557);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.111234);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.165316);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.137313);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.061127);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.317629);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.128984);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.065184);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.057115);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.043434);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9013758);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.024297);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.092394);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.127057);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.095684);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.204459);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.067374);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,24.90343);
   hCCpi0inFV_stack_10->SetBinContent(2,23.60738);
   hCCpi0inFV_stack_10->SetBinContent(3,23.85897);
   hCCpi0inFV_stack_10->SetBinContent(4,24.19872);
   hCCpi0inFV_stack_10->SetBinContent(5,19.23043);
   hCCpi0inFV_stack_10->SetBinContent(6,17.06971);
   hCCpi0inFV_stack_10->SetBinContent(7,17.63231);
   hCCpi0inFV_stack_10->SetBinContent(8,18.58293);
   hCCpi0inFV_stack_10->SetBinContent(9,17.74347);
   hCCpi0inFV_stack_10->SetBinContent(10,21.19868);
   hCCpi0inFV_stack_10->SetBinContent(11,22.43396);
   hCCpi0inFV_stack_10->SetBinContent(12,21.92396);
   hCCpi0inFV_stack_10->SetBinContent(13,29.65294);
   hCCpi0inFV_stack_10->SetBinContent(14,23.87871);
   hCCpi0inFV_stack_10->SetBinContent(15,20.83913);
   hCCpi0inFV_stack_10->SetBinContent(16,21.21004);
   hCCpi0inFV_stack_10->SetBinContent(17,19.27357);
   hCCpi0inFV_stack_10->SetBinContent(18,16.66642);
   hCCpi0inFV_stack_10->SetBinContent(19,17.68973);
   hCCpi0inFV_stack_10->SetBinContent(20,15.94581);
   hCCpi0inFV_stack_10->SetBinContent(21,20.35515);
   hCCpi0inFV_stack_10->SetBinContent(22,27.43753);
   hCCpi0inFV_stack_10->SetBinContent(23,24.36148);
   hCCpi0inFV_stack_10->SetBinContent(24,26.19786);
   hCCpi0inFV_stack_10->SetBinError(1,2.57331);
   hCCpi0inFV_stack_10->SetBinError(2,2.431674);
   hCCpi0inFV_stack_10->SetBinError(3,2.473224);
   hCCpi0inFV_stack_10->SetBinError(4,2.487859);
   hCCpi0inFV_stack_10->SetBinError(5,2.183616);
   hCCpi0inFV_stack_10->SetBinError(6,2.10454);
   hCCpi0inFV_stack_10->SetBinError(7,2.109269);
   hCCpi0inFV_stack_10->SetBinError(8,2.185417);
   hCCpi0inFV_stack_10->SetBinError(9,2.091351);
   hCCpi0inFV_stack_10->SetBinError(10,2.270803);
   hCCpi0inFV_stack_10->SetBinError(11,2.392113);
   hCCpi0inFV_stack_10->SetBinError(12,2.370911);
   hCCpi0inFV_stack_10->SetBinError(13,2.722985);
   hCCpi0inFV_stack_10->SetBinError(14,2.458291);
   hCCpi0inFV_stack_10->SetBinError(15,2.294931);
   hCCpi0inFV_stack_10->SetBinError(16,2.306589);
   hCCpi0inFV_stack_10->SetBinError(17,2.211843);
   hCCpi0inFV_stack_10->SetBinError(18,1.930465);
   hCCpi0inFV_stack_10->SetBinError(19,2.132491);
   hCCpi0inFV_stack_10->SetBinError(20,1.987753);
   hCCpi0inFV_stack_10->SetBinError(21,2.274933);
   hCCpi0inFV_stack_10->SetBinError(22,2.674004);
   hCCpi0inFV_stack_10->SetBinError(23,2.474865);
   hCCpi0inFV_stack_10->SetBinError(24,2.55323);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.99045);
   hNCinFV_stack_11->SetBinContent(2,11.53196);
   hNCinFV_stack_11->SetBinContent(3,11.04156);
   hNCinFV_stack_11->SetBinContent(4,11.33247);
   hNCinFV_stack_11->SetBinContent(5,13.03613);
   hNCinFV_stack_11->SetBinContent(6,9.201195);
   hNCinFV_stack_11->SetBinContent(7,10.12476);
   hNCinFV_stack_11->SetBinContent(8,11.19685);
   hNCinFV_stack_11->SetBinContent(9,10.20205);
   hNCinFV_stack_11->SetBinContent(10,8.410952);
   hNCinFV_stack_11->SetBinContent(11,9.864645);
   hNCinFV_stack_11->SetBinContent(12,12.80584);
   hNCinFV_stack_11->SetBinContent(13,12.31267);
   hNCinFV_stack_11->SetBinContent(14,16.2558);
   hNCinFV_stack_11->SetBinContent(15,15.03348);
   hNCinFV_stack_11->SetBinContent(16,13.03275);
   hNCinFV_stack_11->SetBinContent(17,12.31882);
   hNCinFV_stack_11->SetBinContent(18,11.48547);
   hNCinFV_stack_11->SetBinContent(19,11.53088);
   hNCinFV_stack_11->SetBinContent(20,9.777817);
   hNCinFV_stack_11->SetBinContent(21,10.32316);
   hNCinFV_stack_11->SetBinContent(22,13.76298);
   hNCinFV_stack_11->SetBinContent(23,11.1884);
   hNCinFV_stack_11->SetBinContent(24,11.08866);
   hNCinFV_stack_11->SetBinError(1,1.654078);
   hNCinFV_stack_11->SetBinError(2,1.687957);
   hNCinFV_stack_11->SetBinError(3,1.629051);
   hNCinFV_stack_11->SetBinError(4,1.734303);
   hNCinFV_stack_11->SetBinError(5,1.840953);
   hNCinFV_stack_11->SetBinError(6,1.482609);
   hNCinFV_stack_11->SetBinError(7,1.557977);
   hNCinFV_stack_11->SetBinError(8,1.653924);
   hNCinFV_stack_11->SetBinError(9,1.654077);
   hNCinFV_stack_11->SetBinError(10,1.428992);
   hNCinFV_stack_11->SetBinError(11,1.556582);
   hNCinFV_stack_11->SetBinError(12,1.788311);
   hNCinFV_stack_11->SetBinError(13,1.788845);
   hNCinFV_stack_11->SetBinError(14,2.077246);
   hNCinFV_stack_11->SetBinError(15,1.981692);
   hNCinFV_stack_11->SetBinError(16,1.840593);
   hNCinFV_stack_11->SetBinError(17,1.733201);
   hNCinFV_stack_11->SetBinError(18,1.700052);
   hNCinFV_stack_11->SetBinError(19,1.745613);
   hNCinFV_stack_11->SetBinError(20,1.519514);
   hNCinFV_stack_11->SetBinError(21,1.570558);
   hNCinFV_stack_11->SetBinError(22,1.891976);
   hNCinFV_stack_11->SetBinError(23,1.652923);
   hNCinFV_stack_11->SetBinError(24,1.67674);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,27.4392);
   hnumuCCinFV_stack_12->SetBinContent(2,30.37331);
   hnumuCCinFV_stack_12->SetBinContent(3,16.94921);
   hnumuCCinFV_stack_12->SetBinContent(4,6.263016);
   hnumuCCinFV_stack_12->SetBinContent(5,7.615233);
   hnumuCCinFV_stack_12->SetBinContent(6,7.704398);
   hnumuCCinFV_stack_12->SetBinContent(7,8.441612);
   hnumuCCinFV_stack_12->SetBinContent(8,9.022699);
   hnumuCCinFV_stack_12->SetBinContent(9,13.60343);
   hnumuCCinFV_stack_12->SetBinContent(10,15.35987);
   hnumuCCinFV_stack_12->SetBinContent(11,25.94043);
   hnumuCCinFV_stack_12->SetBinContent(12,26.08282);
   hnumuCCinFV_stack_12->SetBinContent(13,27.09275);
   hnumuCCinFV_stack_12->SetBinContent(14,27.39439);
   hnumuCCinFV_stack_12->SetBinContent(15,15.28921);
   hnumuCCinFV_stack_12->SetBinContent(16,13.88032);
   hnumuCCinFV_stack_12->SetBinContent(17,11.49847);
   hnumuCCinFV_stack_12->SetBinContent(18,10.92935);
   hnumuCCinFV_stack_12->SetBinContent(19,8.291449);
   hnumuCCinFV_stack_12->SetBinContent(20,8.48384);
   hnumuCCinFV_stack_12->SetBinContent(21,9.246033);
   hnumuCCinFV_stack_12->SetBinContent(22,12.19267);
   hnumuCCinFV_stack_12->SetBinContent(23,18.22361);
   hnumuCCinFV_stack_12->SetBinContent(24,29.38797);
   hnumuCCinFV_stack_12->SetBinError(1,2.793687);
   hnumuCCinFV_stack_12->SetBinError(2,4.099745);
   hnumuCCinFV_stack_12->SetBinError(3,2.119684);
   hnumuCCinFV_stack_12->SetBinError(4,1.391959);
   hnumuCCinFV_stack_12->SetBinError(5,1.458749);
   hnumuCCinFV_stack_12->SetBinError(6,1.635793);
   hnumuCCinFV_stack_12->SetBinError(7,1.5253);
   hnumuCCinFV_stack_12->SetBinError(8,1.541427);
   hnumuCCinFV_stack_12->SetBinError(9,2.48266);
   hnumuCCinFV_stack_12->SetBinError(10,2.261998);
   hnumuCCinFV_stack_12->SetBinError(11,3.066975);
   hnumuCCinFV_stack_12->SetBinError(12,2.831942);
   hnumuCCinFV_stack_12->SetBinError(13,2.988243);
   hnumuCCinFV_stack_12->SetBinError(14,2.94542);
   hnumuCCinFV_stack_12->SetBinError(15,2.106402);
   hnumuCCinFV_stack_12->SetBinError(16,1.923741);
   hnumuCCinFV_stack_12->SetBinError(17,2.481859);
   hnumuCCinFV_stack_12->SetBinError(18,2.306202);
   hnumuCCinFV_stack_12->SetBinError(19,1.451278);
   hnumuCCinFV_stack_12->SetBinError(20,1.64706);
   hnumuCCinFV_stack_12->SetBinError(21,1.482722);
   hnumuCCinFV_stack_12->SetBinError(22,1.84505);
   hnumuCCinFV_stack_12->SetBinError(23,2.396118);
   hnumuCCinFV_stack_12->SetBinError(24,3.212897);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.7571448);
   hnueCCinFV_stack_13->SetBinContent(3,1.322447);
   hnueCCinFV_stack_13->SetBinContent(4,0.8312448);
   hnueCCinFV_stack_13->SetBinContent(5,2.2084);
   hnueCCinFV_stack_13->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_13->SetBinContent(7,0.7090399);
   hnueCCinFV_stack_13->SetBinContent(8,0.6569352);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.88752);
   hnueCCinFV_stack_13->SetBinContent(12,1.18254);
   hnueCCinFV_stack_13->SetBinContent(13,1.109674);
   hnueCCinFV_stack_13->SetBinContent(14,0.5998481);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.5508933);
   hnueCCinFV_stack_13->SetBinContent(17,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(18,1.203684);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(21,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(22,1.927507);
   hnueCCinFV_stack_13->SetBinContent(23,0.7863669);
   hnueCCinFV_stack_13->SetBinContent(24,1.908623);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.4585326);
   hnueCCinFV_stack_13->SetBinError(3,0.6079505);
   hnueCCinFV_stack_13->SetBinError(4,0.5003997);
   hnueCCinFV_stack_13->SetBinError(5,1.613015);
   hnueCCinFV_stack_13->SetBinError(6,0.2764757);
   hnueCCinFV_stack_13->SetBinError(7,0.501777);
   hnueCCinFV_stack_13->SetBinError(8,0.3817919);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.4470051);
   hnueCCinFV_stack_13->SetBinError(12,0.6241514);
   hnueCCinFV_stack_13->SetBinError(13,0.5082303);
   hnueCCinFV_stack_13->SetBinError(14,0.3531104);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.4001523);
   hnueCCinFV_stack_13->SetBinError(17,0.3401776);
   hnueCCinFV_stack_13->SetBinError(18,0.7503767);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.2945335);
   hnueCCinFV_stack_13->SetBinError(21,0.2556439);
   hnueCCinFV_stack_13->SetBinError(22,1.244362);
   hnueCCinFV_stack_13->SetBinError(23,0.4656598);
   hnueCCinFV_stack_13->SetBinError(24,0.6954953);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__14->SetBinContent(1,176.1101);
   hmcerror__14->SetBinContent(2,174.5471);
   hmcerror__14->SetBinContent(3,158.8662);
   hmcerror__14->SetBinContent(4,140.2364);
   hmcerror__14->SetBinContent(5,145.701);
   hmcerror__14->SetBinContent(6,130.8095);
   hmcerror__14->SetBinContent(7,133.9665);
   hmcerror__14->SetBinContent(8,132.091);
   hmcerror__14->SetBinContent(9,143.1289);
   hmcerror__14->SetBinContent(10,144.3566);
   hmcerror__14->SetBinContent(11,151.7936);
   hmcerror__14->SetBinContent(12,147.8207);
   hmcerror__14->SetBinContent(13,166.606);
   hmcerror__14->SetBinContent(14,161.0924);
   hmcerror__14->SetBinContent(15,151.7868);
   hmcerror__14->SetBinContent(16,151.0738);
   hmcerror__14->SetBinContent(17,135.5897);
   hmcerror__14->SetBinContent(18,134.9409);
   hmcerror__14->SetBinContent(19,128.4374);
   hmcerror__14->SetBinContent(20,135.2618);
   hmcerror__14->SetBinContent(21,141.6112);
   hmcerror__14->SetBinContent(22,159.9493);
   hmcerror__14->SetBinContent(23,151.0701);
   hmcerror__14->SetBinContent(24,166.859);
   hmcerror__14->SetBinError(1,58.01869);
   hmcerror__14->SetBinError(2,59.85838);
   hmcerror__14->SetBinError(3,69.68315);
   hmcerror__14->SetBinError(4,57.22331);
   hmcerror__14->SetBinError(5,46.97867);
   hmcerror__14->SetBinError(6,44.61987);
   hmcerror__14->SetBinError(7,46.85739);
   hmcerror__14->SetBinError(8,49.71453);
   hmcerror__14->SetBinError(9,49.28723);
   hmcerror__14->SetBinError(10,51.33073);
   hmcerror__14->SetBinError(11,53.85034);
   hmcerror__14->SetBinError(12,54.5144);
   hmcerror__14->SetBinError(13,55.28655);
   hmcerror__14->SetBinError(14,54.11619);
   hmcerror__14->SetBinError(15,55.82045);
   hmcerror__14->SetBinError(16,52.65676);
   hmcerror__14->SetBinError(17,53.76403);
   hmcerror__14->SetBinError(18,63.68179);
   hmcerror__14->SetBinError(19,48.8984);
   hmcerror__14->SetBinError(20,49.7391);
   hmcerror__14->SetBinError(21,51.03559);
   hmcerror__14->SetBinError(22,54.86973);
   hmcerror__14->SetBinError(23,53.76572);
   hmcerror__14->SetBinError(24,55.27439);
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
   138,
   139,
   97,
   121,
   121,
   110,
   92,
   88,
   94,
   141,
   108,
   108,
   112,
   153,
   99,
   113,
   100,
   90,
   95,
   88,
   99,
   88,
   111,
   116};
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
   11.74734,
   11.78983,
   9.9704,
   11,
   11,
   10.48809,
   9.7138,
   9.5036,
   9.8173,
   11.87434,
   10.3923,
   10.3923,
   10.58301,
   12.36932,
   10.0712,
   10.63015,
   10.1212,
   9.6093,
   9.8686,
   9.5036,
   10.0712,
   9.5036,
   10.53565,
   10.77033};
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
   11.74734,
   11.78983,
   9.769,
   11,
   11,
   10.48809,
   9.513,
   9.3021,
   9.616,
   11.87434,
   10.3923,
   10.3923,
   10.58301,
   12.36932,
   9.87,
   10.63015,
   9.92,
   9.4079,
   9.667,
   9.3021,
   9.87,
   9.3021,
   10.53565,
   10.77033};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(69.80911);
   Graph_Graph3017->SetMaximum(174.0566);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.5/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_phi_all");
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
   0.3294455,
   0.3429354,
   0.4386279,
   0.4080489,
   0.3224319,
   0.3411057,
   0.3497695,
   0.3763657,
   0.3443555,
   0.3555829,
   0.3547603,
   0.3687873,
   0.33184,
   0.3359326,
   0.3677557,
   0.3485498,
   0.3965201,
   0.4719237,
   0.3807178,
   0.3677246,
   0.3603923,
   0.3430446,
   0.3558992,
   0.3312642};
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
   0.3294455,
   0.3429354,
   0.4386279,
   0.4080489,
   0.3224319,
   0.3411057,
   0.3497695,
   0.3763657,
   0.3443555,
   0.3555829,
   0.3547603,
   0.3687873,
   0.33184,
   0.3359326,
   0.3677557,
   0.3485498,
   0.3965201,
   0.4719237,
   0.3807178,
   0.3677246,
   0.3603923,
   0.3430446,
   0.3558992,
   0.3312642};
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
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   0.2953818,
   0.3023384,
   0.3117541,
   0.3223883,
   0.297774,
   0.3043966,
   0.3205344,
   0.3159311,
   0.3176912,
   0.3240146,
   0.316077,
   0.323453,
   0.3008262,
   0.2994522,
   0.3237337,
   0.3142017,
   0.3341612,
   0.2998717,
   0.3040632,
   0.3050656,
   0.3098281,
   0.3116187,
   0.3272677,
   0.3076739};
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
   0.2953818,
   0.3023384,
   0.3117541,
   0.3223883,
   0.297774,
   0.3043966,
   0.3205344,
   0.3159311,
   0.3176912,
   0.3240146,
   0.316077,
   0.323453,
   0.3008262,
   0.2994522,
   0.3237337,
   0.3142017,
   0.3341612,
   0.2998717,
   0.3040632,
   0.3050656,
   0.3098281,
   0.3116187,
   0.3272677,
   0.3076739};
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
   0.7836006,
   0.7963467,
   0.6105767,
   0.8628287,
   0.8304676,
   0.8409175,
   0.686739,
   0.6662072,
   0.6567506,
   0.976748,
   0.7114925,
   0.7306148,
   0.6722446,
   0.9497655,
   0.6522307,
   0.7479786,
   0.7375193,
   0.6669589,
   0.7396599,
   0.65059,
   0.6990971,
   0.5501745,
   0.7347585,
   0.6951979};
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
   0.06670451,
   0.06754525,
   0.06275973,
   0.07843898,
   0.07549705,
   0.08017833,
   0.07250919,
   0.07194735,
   0.06859061,
   0.08225702,
   0.0684634,
   0.07030344,
   0.06352114,
   0.07678399,
   0.06635097,
   0.07036391,
   0.0746458,
   0.0712112,
   0.07683587,
   0.07026076,
   0.07111866,
   0.05941634,
   0.06974019,
   0.0645475};
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
   0.06670451,
   0.06754525,
   0.061492,
   0.07843898,
   0.07549705,
   0.08017833,
   0.07101031,
   0.07042189,
   0.06718419,
   0.08225702,
   0.0684634,
   0.07030344,
   0.06352114,
   0.07678399,
   0.06502542,
   0.07036391,
   0.07316191,
   0.06971869,
   0.07526623,
   0.06877106,
   0.06969787,
   0.05815657,
   0.06974019,
   0.0645475};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.4339334);
   Graph_Graph3020->SetMaximum(1.11583);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
