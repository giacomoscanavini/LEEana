#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 11:12:01 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-4.119231,-3.425473,3.957692,288.6411);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,171.2736);
   hmc__4->SetBinContent(2,171.1279);
   hmc__4->SetBinContent(3,154.5649);
   hmc__4->SetBinContent(4,134.2824);
   hmc__4->SetBinContent(5,139.9841);
   hmc__4->SetBinContent(6,127.04);
   hmc__4->SetBinContent(7,129.9986);
   hmc__4->SetBinContent(8,128.3765);
   hmc__4->SetBinContent(9,138.3501);
   hmc__4->SetBinContent(10,140.5888);
   hmc__4->SetBinContent(11,147.007);
   hmc__4->SetBinContent(12,140.5463);
   hmc__4->SetBinContent(13,161.6193);
   hmc__4->SetBinContent(14,153.1797);
   hmc__4->SetBinContent(15,144.898);
   hmc__4->SetBinContent(16,145.9009);
   hmc__4->SetBinContent(17,129.8246);
   hmc__4->SetBinContent(18,131.8035);
   hmc__4->SetBinContent(19,124.3776);
   hmc__4->SetBinContent(20,131.8359);
   hmc__4->SetBinContent(21,137.3049);
   hmc__4->SetBinContent(22,153.7056);
   hmc__4->SetBinContent(23,143.8411);
   hmc__4->SetBinContent(24,162.1659);
   hmc__4->SetBinError(1,41.20017);
   hmc__4->SetBinError(2,39.18812);
   hmc__4->SetBinError(3,39.59587);
   hmc__4->SetBinError(4,33.28252);
   hmc__4->SetBinError(5,30.9171);
   hmc__4->SetBinError(6,29.24247);
   hmc__4->SetBinError(7,30.15071);
   hmc__4->SetBinError(8,30.72822);
   hmc__4->SetBinError(9,32.96167);
   hmc__4->SetBinError(10,33.93213);
   hmc__4->SetBinError(11,35.84804);
   hmc__4->SetBinError(12,34.90707);
   hmc__4->SetBinError(13,39.96769);
   hmc__4->SetBinError(14,37.57708);
   hmc__4->SetBinError(15,36.41054);
   hmc__4->SetBinError(16,35.48919);
   hmc__4->SetBinError(17,31.20518);
   hmc__4->SetBinError(18,33.14143);
   hmc__4->SetBinError(19,28.32182);
   hmc__4->SetBinError(20,30.01904);
   hmc__4->SetBinError(21,31.40509);
   hmc__4->SetBinError(22,36.13444);
   hmc__4->SetBinError(23,35.96513);
   hmc__4->SetBinError(24,36.67919);
   hmc__4->SetBinError(25,0.4212968);
   hmc__4->SetMinimum(-3.425473);
   hmc__4->SetMaximum(274.0378);
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
   hs2_stack_2->SetMinimum(-1.556429e-09);
   hs2_stack_2->SetMaximum(179.8373);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,82.13962);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,81.34711);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,80.88941);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,74.26661);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,67.52127);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,66.17442);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,69.53194);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,66.72991);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,74.3357);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,76.95084);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,74.94914);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,69.49652);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,76.26678);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,75.88648);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,76.68495);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,75.56232);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,69.99934);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,65.1954);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,62.76329);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,69.37433);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,75.75644);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,78.11916);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,78.13992);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,78.399);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,3.018669);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.980999);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.95758);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.806657);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.689276);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.670808);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.817385);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.635613);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.82661);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.880692);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.898803);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.707378);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.847591);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.847022);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.86347);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.894968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.638896);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.59983);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.557658);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.740364);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.830626);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.905748);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.912181);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.935123);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,27.15413);
   hCCpi0inFV_stack_7->SetBinContent(2,24.9827);
   hCCpi0inFV_stack_7->SetBinContent(3,26.25144);
   hCCpi0inFV_stack_7->SetBinContent(4,25.17722);
   hCCpi0inFV_stack_7->SetBinContent(5,21.03613);
   hCCpi0inFV_stack_7->SetBinContent(6,18.6787);
   hCCpi0inFV_stack_7->SetBinContent(7,19.14433);
   hCCpi0inFV_stack_7->SetBinContent(8,20.34829);
   hCCpi0inFV_stack_7->SetBinContent(9,19.79914);
   hCCpi0inFV_stack_7->SetBinContent(10,23.05595);
   hCCpi0inFV_stack_7->SetBinContent(11,25.0747);
   hCCpi0inFV_stack_7->SetBinContent(12,24.22791);
   hCCpi0inFV_stack_7->SetBinContent(13,32.53243);
   hCCpi0inFV_stack_7->SetBinContent(14,25.93439);
   hCCpi0inFV_stack_7->SetBinContent(15,24.16362);
   hCCpi0inFV_stack_7->SetBinContent(16,24.33442);
   hCCpi0inFV_stack_7->SetBinContent(17,21.61786);
   hCCpi0inFV_stack_7->SetBinContent(18,19.05889);
   hCCpi0inFV_stack_7->SetBinContent(19,19.94381);
   hCCpi0inFV_stack_7->SetBinContent(20,17.94654);
   hCCpi0inFV_stack_7->SetBinContent(21,22.40744);
   hCCpi0inFV_stack_7->SetBinContent(22,30.12031);
   hCCpi0inFV_stack_7->SetBinContent(23,26.41377);
   hCCpi0inFV_stack_7->SetBinContent(24,27.57149);
   hCCpi0inFV_stack_7->SetBinError(1,2.67612);
   hCCpi0inFV_stack_7->SetBinError(2,2.486616);
   hCCpi0inFV_stack_7->SetBinError(3,2.594782);
   hCCpi0inFV_stack_7->SetBinError(4,2.526052);
   hCCpi0inFV_stack_7->SetBinError(5,2.295532);
   hCCpi0inFV_stack_7->SetBinError(6,2.211714);
   hCCpi0inFV_stack_7->SetBinError(7,2.189431);
   hCCpi0inFV_stack_7->SetBinError(8,2.263257);
   hCCpi0inFV_stack_7->SetBinError(9,2.208032);
   hCCpi0inFV_stack_7->SetBinError(10,2.37041);
   hCCpi0inFV_stack_7->SetBinError(11,2.517532);
   hCCpi0inFV_stack_7->SetBinError(12,2.474386);
   hCCpi0inFV_stack_7->SetBinError(13,2.867886);
   hCCpi0inFV_stack_7->SetBinError(14,2.558291);
   hCCpi0inFV_stack_7->SetBinError(15,2.472901);
   hCCpi0inFV_stack_7->SetBinError(16,2.475653);
   hCCpi0inFV_stack_7->SetBinError(17,2.35555);
   hCCpi0inFV_stack_7->SetBinError(18,2.083926);
   hCCpi0inFV_stack_7->SetBinError(19,2.255778);
   hCCpi0inFV_stack_7->SetBinError(20,2.119077);
   hCCpi0inFV_stack_7->SetBinError(21,2.382363);
   hCCpi0inFV_stack_7->SetBinError(22,2.814556);
   hCCpi0inFV_stack_7->SetBinError(23,2.573964);
   hCCpi0inFV_stack_7->SetBinError(24,2.605482);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,6.153953);
   hNCinFV_stack_8->SetBinContent(2,8.112802);
   hNCinFV_stack_8->SetBinContent(3,6.740258);
   hNCinFV_stack_8->SetBinContent(4,5.378465);
   hNCinFV_stack_8->SetBinContent(5,7.319179);
   hNCinFV_stack_8->SetBinContent(6,5.431718);
   hNCinFV_stack_8->SetBinContent(7,6.156874);
   hNCinFV_stack_8->SetBinContent(8,7.482318);
   hNCinFV_stack_8->SetBinContent(9,5.423265);
   hNCinFV_stack_8->SetBinContent(10,4.643166);
   hNCinFV_stack_8->SetBinContent(11,5.078016);
   hNCinFV_stack_8->SetBinContent(12,5.531462);
   hNCinFV_stack_8->SetBinContent(13,7.32594);
   hNCinFV_stack_8->SetBinContent(14,8.343092);
   hNCinFV_stack_8->SetBinContent(15,8.144686);
   hNCinFV_stack_8->SetBinContent(16,7.762482);
   hNCinFV_stack_8->SetBinContent(17,6.553686);
   hNCinFV_stack_8->SetBinContent(18,8.348164);
   hNCinFV_stack_8->SetBinContent(19,7.471093);
   hNCinFV_stack_8->SetBinContent(20,6.351899);
   hNCinFV_stack_8->SetBinContent(21,6.016793);
   hNCinFV_stack_8->SetBinContent(22,7.519275);
   hNCinFV_stack_8->SetBinContent(23,3.95943);
   hNCinFV_stack_8->SetBinContent(24,6.395617);
   hNCinFV_stack_8->SetBinError(1,1.242118);
   hNCinFV_stack_8->SetBinError(2,1.4429);
   hNCinFV_stack_8->SetBinError(3,1.270607);
   hNCinFV_stack_8->SetBinError(4,1.16169);
   hNCinFV_stack_8->SetBinError(5,1.387272);
   hNCinFV_stack_8->SetBinError(6,1.145075);
   hNCinFV_stack_8->SetBinError(7,1.225153);
   hNCinFV_stack_8->SetBinError(8,1.345685);
   hNCinFV_stack_8->SetBinError(9,1.143628);
   hNCinFV_stack_8->SetBinError(10,1.075057);
   hNCinFV_stack_8->SetBinError(11,1.090953);
   hNCinFV_stack_8->SetBinError(12,1.109907);
   hNCinFV_stack_8->SetBinError(13,1.388227);
   hNCinFV_stack_8->SetBinError(14,1.507651);
   hNCinFV_stack_8->SetBinError(15,1.494541);
   hNCinFV_stack_8->SetBinError(16,1.400809);
   hNCinFV_stack_8->SetBinError(17,1.256869);
   hNCinFV_stack_8->SetBinError(18,1.50831);
   hNCinFV_stack_8->SetBinError(19,1.415931);
   hNCinFV_stack_8->SetBinError(20,1.240579);
   hNCinFV_stack_8->SetBinError(21,1.19386);
   hNCinFV_stack_8->SetBinError(22,1.401623);
   hNCinFV_stack_8->SetBinError(23,0.9607189);
   hNCinFV_stack_8->SetBinError(24,1.302061);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,25.1885);
   hnumuCCinFV_stack_9->SetBinContent(2,28.998);
   hnumuCCinFV_stack_9->SetBinContent(3,14.55673);
   hnumuCCinFV_stack_9->SetBinContent(4,5.28451);
   hnumuCCinFV_stack_9->SetBinContent(5,5.80953);
   hnumuCCinFV_stack_9->SetBinContent(6,6.09541);
   hnumuCCinFV_stack_9->SetBinContent(7,6.929595);
   hnumuCCinFV_stack_9->SetBinContent(8,7.257332);
   hnumuCCinFV_stack_9->SetBinContent(9,11.54776);
   hnumuCCinFV_stack_9->SetBinContent(10,13.50261);
   hnumuCCinFV_stack_9->SetBinContent(11,23.29969);
   hnumuCCinFV_stack_9->SetBinContent(12,23.77887);
   hnumuCCinFV_stack_9->SetBinContent(13,24.21326);
   hnumuCCinFV_stack_9->SetBinContent(14,25.33872);
   hnumuCCinFV_stack_9->SetBinContent(15,11.96472);
   hnumuCCinFV_stack_9->SetBinContent(16,10.75594);
   hnumuCCinFV_stack_9->SetBinContent(17,9.154186);
   hnumuCCinFV_stack_9->SetBinContent(18,8.536882);
   hnumuCCinFV_stack_9->SetBinContent(19,6.03737);
   hnumuCCinFV_stack_9->SetBinContent(20,6.483111);
   hnumuCCinFV_stack_9->SetBinContent(21,7.193741);
   hnumuCCinFV_stack_9->SetBinContent(22,9.509892);
   hnumuCCinFV_stack_9->SetBinContent(23,16.17132);
   hnumuCCinFV_stack_9->SetBinContent(24,28.01434);
   hnumuCCinFV_stack_9->SetBinError(1,2.695365);
   hnumuCCinFV_stack_9->SetBinError(2,4.066656);
   hnumuCCinFV_stack_9->SetBinError(3,1.969012);
   hnumuCCinFV_stack_9->SetBinError(4,1.321382);
   hnumuCCinFV_stack_9->SetBinError(5,1.275406);
   hnumuCCinFV_stack_9->SetBinError(6,1.487692);
   hnumuCCinFV_stack_9->SetBinError(7,1.407817);
   hnumuCCinFV_stack_9->SetBinError(8,1.424679);
   hnumuCCinFV_stack_9->SetBinError(9,2.379484);
   hnumuCCinFV_stack_9->SetBinError(10,2.157391);
   hnumuCCinFV_stack_9->SetBinError(11,2.964891);
   hnumuCCinFV_stack_9->SetBinError(12,2.741993);
   hnumuCCinFV_stack_9->SetBinError(13,2.849469);
   hnumuCCinFV_stack_9->SetBinError(14,2.858993);
   hnumuCCinFV_stack_9->SetBinError(15,1.894308);
   hnumuCCinFV_stack_9->SetBinError(16,1.700668);
   hnumuCCinFV_stack_9->SetBinError(17,2.345902);
   hnumuCCinFV_stack_9->SetBinError(18,2.168528);
   hnumuCCinFV_stack_9->SetBinError(19,1.251076);
   hnumuCCinFV_stack_9->SetBinError(20,1.474274);
   hnumuCCinFV_stack_9->SetBinError(21,1.303123);
   hnumuCCinFV_stack_9->SetBinError(22,1.622585);
   hnumuCCinFV_stack_9->SetBinError(23,2.289333);
   hnumuCCinFV_stack_9->SetBinError(24,3.170671);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_10->SetBinContent(2,0.7571448);
   hnueCCinFV_stack_10->SetBinContent(3,1.322447);
   hnueCCinFV_stack_10->SetBinContent(4,0.8312448);
   hnueCCinFV_stack_10->SetBinContent(5,2.2084);
   hnueCCinFV_stack_10->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_10->SetBinContent(7,0.7090399);
   hnueCCinFV_stack_10->SetBinContent(8,0.6569352);
   hnueCCinFV_stack_10->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_10->SetBinContent(10,0.536893);
   hnueCCinFV_stack_10->SetBinContent(11,0.88752);
   hnueCCinFV_stack_10->SetBinContent(12,1.18254);
   hnueCCinFV_stack_10->SetBinContent(13,1.109674);
   hnueCCinFV_stack_10->SetBinContent(14,0.5998481);
   hnueCCinFV_stack_10->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_10->SetBinContent(16,0.5508933);
   hnueCCinFV_stack_10->SetBinContent(17,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(18,1.203684);
   hnueCCinFV_stack_10->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(20,0.4159254);
   hnueCCinFV_stack_10->SetBinContent(21,0.2560115);
   hnueCCinFV_stack_10->SetBinContent(22,1.927507);
   hnueCCinFV_stack_10->SetBinContent(23,0.7863669);
   hnueCCinFV_stack_10->SetBinContent(24,1.908623);
   hnueCCinFV_stack_10->SetBinError(1,0.1974404);
   hnueCCinFV_stack_10->SetBinError(2,0.4585326);
   hnueCCinFV_stack_10->SetBinError(3,0.6079505);
   hnueCCinFV_stack_10->SetBinError(4,0.5003997);
   hnueCCinFV_stack_10->SetBinError(5,1.613015);
   hnueCCinFV_stack_10->SetBinError(6,0.2764757);
   hnueCCinFV_stack_10->SetBinError(7,0.501777);
   hnueCCinFV_stack_10->SetBinError(8,0.3817919);
   hnueCCinFV_stack_10->SetBinError(9,0.4394482);
   hnueCCinFV_stack_10->SetBinError(10,0.3929602);
   hnueCCinFV_stack_10->SetBinError(11,0.4470051);
   hnueCCinFV_stack_10->SetBinError(12,0.6241514);
   hnueCCinFV_stack_10->SetBinError(13,0.5082303);
   hnueCCinFV_stack_10->SetBinError(14,0.3531104);
   hnueCCinFV_stack_10->SetBinError(15,0.3921167);
   hnueCCinFV_stack_10->SetBinError(16,0.4001523);
   hnueCCinFV_stack_10->SetBinError(17,0.3401776);
   hnueCCinFV_stack_10->SetBinError(18,0.7503767);
   hnueCCinFV_stack_10->SetBinError(19,0.3401776);
   hnueCCinFV_stack_10->SetBinError(20,0.2945335);
   hnueCCinFV_stack_10->SetBinError(21,0.2556439);
   hnueCCinFV_stack_10->SetBinError(22,1.244362);
   hnueCCinFV_stack_10->SetBinError(23,0.4656598);
   hnueCCinFV_stack_10->SetBinError(24,0.6954953);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,171.2736);
   hmcerror__5->SetBinContent(2,171.1279);
   hmcerror__5->SetBinContent(3,154.5649);
   hmcerror__5->SetBinContent(4,134.2824);
   hmcerror__5->SetBinContent(5,139.9841);
   hmcerror__5->SetBinContent(6,127.04);
   hmcerror__5->SetBinContent(7,129.9986);
   hmcerror__5->SetBinContent(8,128.3765);
   hmcerror__5->SetBinContent(9,138.3501);
   hmcerror__5->SetBinContent(10,140.5888);
   hmcerror__5->SetBinContent(11,147.007);
   hmcerror__5->SetBinContent(12,140.5463);
   hmcerror__5->SetBinContent(13,161.6193);
   hmcerror__5->SetBinContent(14,153.1797);
   hmcerror__5->SetBinContent(15,144.898);
   hmcerror__5->SetBinContent(16,145.9009);
   hmcerror__5->SetBinContent(17,129.8246);
   hmcerror__5->SetBinContent(18,131.8035);
   hmcerror__5->SetBinContent(19,124.3776);
   hmcerror__5->SetBinContent(20,131.8359);
   hmcerror__5->SetBinContent(21,137.3049);
   hmcerror__5->SetBinContent(22,153.7056);
   hmcerror__5->SetBinContent(23,143.8411);
   hmcerror__5->SetBinContent(24,162.1659);
   hmcerror__5->SetBinError(1,41.20017);
   hmcerror__5->SetBinError(2,39.18812);
   hmcerror__5->SetBinError(3,39.59587);
   hmcerror__5->SetBinError(4,33.28252);
   hmcerror__5->SetBinError(5,30.9171);
   hmcerror__5->SetBinError(6,29.24247);
   hmcerror__5->SetBinError(7,30.15071);
   hmcerror__5->SetBinError(8,30.72822);
   hmcerror__5->SetBinError(9,32.96167);
   hmcerror__5->SetBinError(10,33.93213);
   hmcerror__5->SetBinError(11,35.84804);
   hmcerror__5->SetBinError(12,34.90707);
   hmcerror__5->SetBinError(13,39.96769);
   hmcerror__5->SetBinError(14,37.57708);
   hmcerror__5->SetBinError(15,36.41054);
   hmcerror__5->SetBinError(16,35.48919);
   hmcerror__5->SetBinError(17,31.20518);
   hmcerror__5->SetBinError(18,33.14143);
   hmcerror__5->SetBinError(19,28.32182);
   hmcerror__5->SetBinError(20,30.01904);
   hmcerror__5->SetBinError(21,31.40509);
   hmcerror__5->SetBinError(22,36.13444);
   hmcerror__5->SetBinError(23,35.96513);
   hmcerror__5->SetBinError(24,36.67919);
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(69.80911);
   Graph_Graph3005->SetMaximum(174.0566);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.0/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_phi_all");
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
   0.2405517,
   0.2289989,
   0.2561763,
   0.2478547,
   0.2208615,
   0.2301831,
   0.2319311,
   0.2393602,
   0.2382482,
   0.2413573,
   0.2438526,
   0.248367,
   0.2472953,
   0.2453137,
   0.251284,
   0.2432418,
   0.2403643,
   0.2514457,
   0.2277083,
   0.2277,
   0.2287253,
   0.2350887,
   0.2500338,
   0.2261831};
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
   0.2405517,
   0.2289989,
   0.2561763,
   0.2478547,
   0.2208615,
   0.2301831,
   0.2319311,
   0.2393602,
   0.2382482,
   0.2413573,
   0.2438526,
   0.248367,
   0.2472953,
   0.2453137,
   0.251284,
   0.2432418,
   0.2403643,
   0.2514457,
   0.2277083,
   0.2277,
   0.2287253,
   0.2350887,
   0.2500338,
   0.2261831};
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
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} #phi [degree]");
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
   0.2157379,
   0.2215167,
   0.2193846,
   0.2296238,
   0.2048488,
   0.2128438,
   0.2185354,
   0.2207397,
   0.2239141,
   0.2213442,
   0.2286113,
   0.2275408,
   0.2219935,
   0.2192575,
   0.225489,
   0.2178115,
   0.2237266,
   0.2068161,
   0.2092482,
   0.207708,
   0.2109258,
   0.223005,
   0.2329922,
   0.2188417};
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
   0.2157379,
   0.2215167,
   0.2193846,
   0.2296238,
   0.2048488,
   0.2128438,
   0.2185354,
   0.2207397,
   0.2239141,
   0.2213442,
   0.2286113,
   0.2275408,
   0.2219935,
   0.2192575,
   0.225489,
   0.2178115,
   0.2237266,
   0.2068161,
   0.2092482,
   0.207708,
   0.2109258,
   0.223005,
   0.2329922,
   0.2188417};
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
   0.8057282,
   0.8122578,
   0.6275681,
   0.9010861,
   0.8643839,
   0.8658688,
   0.7077,
   0.6854837,
   0.6794355,
   1.002925,
   0.7346591,
   0.7684298,
   0.6929865,
   0.9988269,
   0.6832393,
   0.7744983,
   0.7702703,
   0.6828345,
   0.763803,
   0.6674964,
   0.7210233,
   0.5725232,
   0.7716851,
   0.7153167};
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
   0.06858814,
   0.0688948,
   0.06450623,
   0.08191692,
   0.07858035,
   0.08255735,
   0.07472235,
   0.07402912,
   0.07095981,
   0.08446151,
   0.07069261,
   0.07394219,
   0.06548107,
   0.08075037,
   0.06950545,
   0.07285867,
   0.0779606,
   0.07290623,
   0.07934386,
   0.07208657,
   0.07334919,
   0.06182991,
   0.0732451,
   0.06641549};
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
   0.06858814,
   0.0688948,
   0.06320322,
   0.08191692,
   0.07858035,
   0.08255735,
   0.07317772,
   0.07245952,
   0.06950481,
   0.08446151,
   0.07069261,
   0.07394219,
   0.06548107,
   0.08075037,
   0.06811688,
   0.07285867,
   0.07641081,
   0.0713782,
   0.07772299,
   0.07055816,
   0.07188384,
   0.06051896,
   0.0732451,
   0.06641549};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.453024);
   Graph_Graph3008->SetMaximum(1.145056);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
