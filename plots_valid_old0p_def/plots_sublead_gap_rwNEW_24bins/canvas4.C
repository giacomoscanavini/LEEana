#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 13:27:16 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-14.70833,101.5385,1626.432);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__10->SetBinContent(1,735.4165);
   hmc__10->SetBinContent(2,247.9389);
   hmc__10->SetBinContent(3,247.3762);
   hmc__10->SetBinContent(4,245.3848);
   hmc__10->SetBinContent(5,240.6463);
   hmc__10->SetBinContent(6,228.2845);
   hmc__10->SetBinContent(7,215.1175);
   hmc__10->SetBinContent(8,196.3792);
   hmc__10->SetBinContent(9,166.5469);
   hmc__10->SetBinContent(10,158.871);
   hmc__10->SetBinContent(11,127.9966);
   hmc__10->SetBinContent(12,122.8636);
   hmc__10->SetBinContent(13,106.2219);
   hmc__10->SetBinContent(14,86.06607);
   hmc__10->SetBinContent(15,72.99173);
   hmc__10->SetBinContent(16,65.4034);
   hmc__10->SetBinContent(17,59.16203);
   hmc__10->SetBinContent(18,49.83677);
   hmc__10->SetBinContent(19,47.81568);
   hmc__10->SetBinContent(20,34.06496);
   hmc__10->SetBinContent(21,36.13014);
   hmc__10->SetBinContent(22,36.41875);
   hmc__10->SetBinContent(23,30.60542);
   hmc__10->SetBinContent(24,26.6114);
   hmc__10->SetBinContent(25,325.9548);
   hmc__10->SetBinError(1,164.55);
   hmc__10->SetBinError(2,63.28295);
   hmc__10->SetBinError(3,56.73525);
   hmc__10->SetBinError(4,65.12092);
   hmc__10->SetBinError(5,60.52595);
   hmc__10->SetBinError(6,55.67792);
   hmc__10->SetBinError(7,64.75957);
   hmc__10->SetBinError(8,48.64537);
   hmc__10->SetBinError(9,46.28844);
   hmc__10->SetBinError(10,38.77356);
   hmc__10->SetBinError(11,37.66759);
   hmc__10->SetBinError(12,34.58624);
   hmc__10->SetBinError(13,27.03576);
   hmc__10->SetBinError(14,27.0127);
   hmc__10->SetBinError(15,20.67518);
   hmc__10->SetBinError(16,20.79843);
   hmc__10->SetBinError(17,20.21394);
   hmc__10->SetBinError(18,19.15808);
   hmc__10->SetBinError(19,23.97428);
   hmc__10->SetBinError(20,13.98534);
   hmc__10->SetBinError(21,11.89588);
   hmc__10->SetBinError(22,14.2275);
   hmc__10->SetBinError(23,15.31311);
   hmc__10->SetBinError(24,12.69026);
   hmc__10->SetBinError(25,71.75209);
   hmc__10->SetMinimum(-14.70833);
   hmc__10->SetMaximum(1544.375);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,90);
   hs4_stack_4->SetMinimum(-2.843452e-08);
   hs4_stack_4->SetMaximum(772.1874);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,20.40826);
   hbadmatch_stack_1->SetBinContent(2,2.833121);
   hbadmatch_stack_1->SetBinContent(3,5.092959);
   hbadmatch_stack_1->SetBinContent(4,5.622868);
   hbadmatch_stack_1->SetBinContent(5,3.494425);
   hbadmatch_stack_1->SetBinContent(6,5.198382);
   hbadmatch_stack_1->SetBinContent(7,5.116619);
   hbadmatch_stack_1->SetBinContent(8,3.994883);
   hbadmatch_stack_1->SetBinContent(9,2.948664);
   hbadmatch_stack_1->SetBinContent(10,6.224503);
   hbadmatch_stack_1->SetBinContent(11,3.105092);
   hbadmatch_stack_1->SetBinContent(12,2.983314);
   hbadmatch_stack_1->SetBinContent(13,2.996889);
   hbadmatch_stack_1->SetBinContent(14,0.7850344);
   hbadmatch_stack_1->SetBinContent(15,3.726366);
   hbadmatch_stack_1->SetBinContent(16,1.322064);
   hbadmatch_stack_1->SetBinContent(17,0.6540039);
   hbadmatch_stack_1->SetBinContent(18,2.048939);
   hbadmatch_stack_1->SetBinContent(19,2.621697);
   hbadmatch_stack_1->SetBinContent(20,1.309187);
   hbadmatch_stack_1->SetBinContent(21,1.562287);
   hbadmatch_stack_1->SetBinContent(22,0.9788727);
   hbadmatch_stack_1->SetBinContent(23,0.5386397);
   hbadmatch_stack_1->SetBinContent(24,1.532743);
   hbadmatch_stack_1->SetBinContent(25,11.85355);
   hbadmatch_stack_1->SetBinError(1,2.527555);
   hbadmatch_stack_1->SetBinError(2,0.8449505);
   hbadmatch_stack_1->SetBinError(3,1.210623);
   hbadmatch_stack_1->SetBinError(4,1.163702);
   hbadmatch_stack_1->SetBinError(5,1.138804);
   hbadmatch_stack_1->SetBinError(6,1.206406);
   hbadmatch_stack_1->SetBinError(7,1.152576);
   hbadmatch_stack_1->SetBinError(8,1.265315);
   hbadmatch_stack_1->SetBinError(9,0.9630666);
   hbadmatch_stack_1->SetBinError(10,2.039516);
   hbadmatch_stack_1->SetBinError(11,0.9280878);
   hbadmatch_stack_1->SetBinError(12,0.9356836);
   hbadmatch_stack_1->SetBinError(13,0.8614291);
   hbadmatch_stack_1->SetBinError(14,0.4803616);
   hbadmatch_stack_1->SetBinError(15,1.764497);
   hbadmatch_stack_1->SetBinError(16,0.5554667);
   hbadmatch_stack_1->SetBinError(17,0.3817607);
   hbadmatch_stack_1->SetBinError(18,0.7659759);
   hbadmatch_stack_1->SetBinError(19,0.8176124);
   hbadmatch_stack_1->SetBinError(20,0.6216906);
   hbadmatch_stack_1->SetBinError(21,0.6053124);
   hbadmatch_stack_1->SetBinError(22,0.5034274);
   hbadmatch_stack_1->SetBinError(23,0.3929641);
   hbadmatch_stack_1->SetBinError(24,0.643783);
   hbadmatch_stack_1->SetBinError(25,1.889023);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,100.1296);
   hext_stack_2->SetBinContent(2,29.73017);
   hext_stack_2->SetBinContent(3,26.63743);
   hext_stack_2->SetBinContent(4,30.19585);
   hext_stack_2->SetBinContent(5,29.4549);
   hext_stack_2->SetBinContent(6,24.48633);
   hext_stack_2->SetBinContent(7,21.39359);
   hext_stack_2->SetBinContent(8,25.16266);
   hext_stack_2->SetBinContent(9,23.53468);
   hext_stack_2->SetBinContent(10,18.20587);
   hext_stack_2->SetBinContent(11,10.2902);
   hext_stack_2->SetBinContent(12,17.22386);
   hext_stack_2->SetBinContent(13,11.91659);
   hext_stack_2->SetBinContent(14,10.04359);
   hext_stack_2->SetBinContent(15,4.703194);
   hext_stack_2->SetBinContent(16,7.067767);
   hext_stack_2->SetBinContent(17,9.862059);
   hext_stack_2->SetBinContent(18,4.856008);
   hext_stack_2->SetBinContent(19,6.560196);
   hext_stack_2->SetBinContent(20,2.435184);
   hext_stack_2->SetBinContent(21,7.511847);
   hext_stack_2->SetBinContent(22,6.221437);
   hext_stack_2->SetBinContent(23,3.565599);
   hext_stack_2->SetBinContent(24,2.973055);
   hext_stack_2->SetBinContent(25,43.28311);
   hext_stack_2->SetBinError(1,6.762856);
   hext_stack_2->SetBinError(2,3.765625);
   hext_stack_2->SetBinError(3,3.392933);
   hext_stack_2->SetBinError(4,3.634156);
   hext_stack_2->SetBinError(5,3.670703);
   hext_stack_2->SetBinError(6,3.410469);
   hext_stack_2->SetBinError(7,2.993888);
   hext_stack_2->SetBinError(8,3.629758);
   hext_stack_2->SetBinError(9,3.272919);
   hext_stack_2->SetBinError(10,2.905099);
   hext_stack_2->SetBinError(11,2.077585);
   hext_stack_2->SetBinError(12,2.802437);
   hext_stack_2->SetBinError(13,2.231065);
   hext_stack_2->SetBinError(14,2.033738);
   hext_stack_2->SetBinError(15,1.389163);
   hext_stack_2->SetBinError(16,1.631079);
   hext_stack_2->SetBinError(17,2.180514);
   hext_stack_2->SetBinError(18,1.454658);
   hext_stack_2->SetBinError(19,1.643863);
   hext_stack_2->SetBinError(20,0.9256422);
   hext_stack_2->SetBinError(21,1.903048);
   hext_stack_2->SetBinError(22,1.731894);
   hext_stack_2->SetBinError(23,1.22225);
   hext_stack_2->SetBinError(24,1.346105);
   hext_stack_2->SetBinError(25,4.391053);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,12.1045);
   hdirt_stack_3->SetBinContent(2,2.916103);
   hdirt_stack_3->SetBinContent(3,4.66568);
   hdirt_stack_3->SetBinContent(4,3.682402);
   hdirt_stack_3->SetBinContent(5,4.496658);
   hdirt_stack_3->SetBinContent(6,4.841712);
   hdirt_stack_3->SetBinContent(7,1.73055);
   hdirt_stack_3->SetBinContent(8,2.604272);
   hdirt_stack_3->SetBinContent(9,2.566515);
   hdirt_stack_3->SetBinContent(10,0.8655432);
   hdirt_stack_3->SetBinContent(11,1.289797);
   hdirt_stack_3->SetBinContent(12,1.336892);
   hdirt_stack_3->SetBinContent(13,1.317914);
   hdirt_stack_3->SetBinContent(14,1.414125);
   hdirt_stack_3->SetBinContent(15,1.252782);
   hdirt_stack_3->SetBinContent(16,1.263277);
   hdirt_stack_3->SetBinContent(17,1.370732);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5190165);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.7050098);
   hdirt_stack_3->SetBinContent(22,0.8766446);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(25,4.438187);
   hdirt_stack_3->SetBinError(1,1.932974);
   hdirt_stack_3->SetBinError(2,0.906048);
   hdirt_stack_3->SetBinError(3,1.174386);
   hdirt_stack_3->SetBinError(4,0.9770615);
   hdirt_stack_3->SetBinError(5,1.257191);
   hdirt_stack_3->SetBinError(6,1.139631);
   hdirt_stack_3->SetBinError(7,0.6707299);
   hdirt_stack_3->SetBinError(8,0.812086);
   hdirt_stack_3->SetBinError(9,1.206674);
   hdirt_stack_3->SetBinError(10,0.4562668);
   hdirt_stack_3->SetBinError(11,0.498851);
   hdirt_stack_3->SetBinError(12,0.5849506);
   hdirt_stack_3->SetBinError(13,0.5626542);
   hdirt_stack_3->SetBinError(14,0.6649533);
   hdirt_stack_3->SetBinError(15,0.6018287);
   hdirt_stack_3->SetBinError(16,0.6657529);
   hdirt_stack_3->SetBinError(17,0.6646592);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.3053507);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.4310004);
   hdirt_stack_3->SetBinError(22,0.5419808);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(25,1.117573);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,98.13657);
   houtFV_stack_4->SetBinContent(2,28.00567);
   houtFV_stack_4->SetBinContent(3,33.74337);
   houtFV_stack_4->SetBinContent(4,28.92373);
   houtFV_stack_4->SetBinContent(5,27.69543);
   houtFV_stack_4->SetBinContent(6,28.8999);
   houtFV_stack_4->SetBinContent(7,23.58687);
   houtFV_stack_4->SetBinContent(8,25.41181);
   houtFV_stack_4->SetBinContent(9,18.18808);
   houtFV_stack_4->SetBinContent(10,22.55548);
   houtFV_stack_4->SetBinContent(11,19.2352);
   houtFV_stack_4->SetBinContent(12,16.71325);
   houtFV_stack_4->SetBinContent(13,16.44018);
   houtFV_stack_4->SetBinContent(14,10.72625);
   houtFV_stack_4->SetBinContent(15,9.324472);
   houtFV_stack_4->SetBinContent(16,9.430265);
   houtFV_stack_4->SetBinContent(17,5.86614);
   houtFV_stack_4->SetBinContent(18,6.695457);
   houtFV_stack_4->SetBinContent(19,3.858711);
   houtFV_stack_4->SetBinContent(20,6.155183);
   houtFV_stack_4->SetBinContent(21,5.336437);
   houtFV_stack_4->SetBinContent(22,4.818227);
   houtFV_stack_4->SetBinContent(23,3.074514);
   houtFV_stack_4->SetBinContent(24,2.41193);
   houtFV_stack_4->SetBinContent(25,50.63077);
   houtFV_stack_4->SetBinError(1,5.040435);
   houtFV_stack_4->SetBinError(2,2.8515);
   houtFV_stack_4->SetBinError(3,2.927782);
   houtFV_stack_4->SetBinError(4,2.751396);
   houtFV_stack_4->SetBinError(5,2.617073);
   houtFV_stack_4->SetBinError(6,2.671696);
   houtFV_stack_4->SetBinError(7,2.402091);
   houtFV_stack_4->SetBinError(8,2.506261);
   houtFV_stack_4->SetBinError(9,2.097509);
   houtFV_stack_4->SetBinError(10,2.375687);
   houtFV_stack_4->SetBinError(11,2.229849);
   houtFV_stack_4->SetBinError(12,2.123164);
   houtFV_stack_4->SetBinError(13,1.984012);
   houtFV_stack_4->SetBinError(14,1.622562);
   houtFV_stack_4->SetBinError(15,1.530485);
   houtFV_stack_4->SetBinError(16,1.500561);
   houtFV_stack_4->SetBinError(17,1.242589);
   houtFV_stack_4->SetBinError(18,1.286888);
   houtFV_stack_4->SetBinError(19,1.039352);
   houtFV_stack_4->SetBinError(20,1.224883);
   houtFV_stack_4->SetBinError(21,1.092639);
   houtFV_stack_4->SetBinError(22,1.120654);
   houtFV_stack_4->SetBinError(23,0.920955);
   houtFV_stack_4->SetBinError(24,0.7898793);
   houtFV_stack_4->SetBinError(25,3.665087);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.03144);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.152563);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.0589);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.683494);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.432721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.508278);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.298032);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.861674);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.696345);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.792256);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.557518);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.982652);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.523466);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.829038);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.153053);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.172304);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.548126);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.814508);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9188759);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3626998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.604105);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.291223);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9051113);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8987825);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9237329);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8759374);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7453421);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.754941);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6413517);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6400349);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6345389);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7326583);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5308381);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5305329);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5630391);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6652329);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3618977);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4409948);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4971419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3145228);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1005948);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9432244);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.412698);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5709538);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5455435);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1902537);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07891307);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,224.5688);
   hNCpi0inFVres_stack_7->SetBinContent(2,88.87879);
   hNCpi0inFVres_stack_7->SetBinContent(3,84.43833);
   hNCpi0inFVres_stack_7->SetBinContent(4,89.38896);
   hNCpi0inFVres_stack_7->SetBinContent(5,87.74463);
   hNCpi0inFVres_stack_7->SetBinContent(6,80.57899);
   hNCpi0inFVres_stack_7->SetBinContent(7,77.37299);
   hNCpi0inFVres_stack_7->SetBinContent(8,68.74518);
   hNCpi0inFVres_stack_7->SetBinContent(9,59.48521);
   hNCpi0inFVres_stack_7->SetBinContent(10,51.72714);
   hNCpi0inFVres_stack_7->SetBinContent(11,43.40826);
   hNCpi0inFVres_stack_7->SetBinContent(12,37.58625);
   hNCpi0inFVres_stack_7->SetBinContent(13,34.00774);
   hNCpi0inFVres_stack_7->SetBinContent(14,29.67243);
   hNCpi0inFVres_stack_7->SetBinContent(15,23.68027);
   hNCpi0inFVres_stack_7->SetBinContent(16,20.62616);
   hNCpi0inFVres_stack_7->SetBinContent(17,18.20697);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.42245);
   hNCpi0inFVres_stack_7->SetBinContent(19,15.24476);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.78265);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.99962);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.38581);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.33334);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.728916);
   hNCpi0inFVres_stack_7->SetBinContent(25,88.72902);
   hNCpi0inFVres_stack_7->SetBinError(1,4.908838);
   hNCpi0inFVres_stack_7->SetBinError(2,3.067991);
   hNCpi0inFVres_stack_7->SetBinError(3,2.929437);
   hNCpi0inFVres_stack_7->SetBinError(4,3.078334);
   hNCpi0inFVres_stack_7->SetBinError(5,3.01913);
   hNCpi0inFVres_stack_7->SetBinError(6,2.887877);
   hNCpi0inFVres_stack_7->SetBinError(7,2.882381);
   hNCpi0inFVres_stack_7->SetBinError(8,2.746805);
   hNCpi0inFVres_stack_7->SetBinError(9,2.531925);
   hNCpi0inFVres_stack_7->SetBinError(10,2.354749);
   hNCpi0inFVres_stack_7->SetBinError(11,2.148893);
   hNCpi0inFVres_stack_7->SetBinError(12,1.966406);
   hNCpi0inFVres_stack_7->SetBinError(13,1.886673);
   hNCpi0inFVres_stack_7->SetBinError(14,1.766771);
   hNCpi0inFVres_stack_7->SetBinError(15,1.535475);
   hNCpi0inFVres_stack_7->SetBinError(16,1.488159);
   hNCpi0inFVres_stack_7->SetBinError(17,1.34001);
   hNCpi0inFVres_stack_7->SetBinError(18,1.281641);
   hNCpi0inFVres_stack_7->SetBinError(19,1.306852);
   hNCpi0inFVres_stack_7->SetBinError(20,1.124493);
   hNCpi0inFVres_stack_7->SetBinError(21,1.082311);
   hNCpi0inFVres_stack_7->SetBinError(22,1.00486);
   hNCpi0inFVres_stack_7->SetBinError(23,1.041755);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9671974);
   hNCpi0inFVres_stack_7->SetBinError(25,3.125326);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,42.47294);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.40694);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.03236);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.66858);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.00635);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.80331);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.82094);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.99115);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.25679);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.6013);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.904694);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.16894);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.068357);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.25801);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.490587);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.687056);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.530114);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.996102);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.425812);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.797562);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.352322);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.300762);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.365771);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.883094);
   hNCpi0inFVdis_stack_8->SetBinContent(25,17.36217);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.129059);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.412687);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.435417);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.398148);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.246956);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.140103);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.288255);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.169094);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.178765);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.153988);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8691718);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.112051);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8477114);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.753522);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6643539);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7291083);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6998273);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5061281);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4543969);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4036703);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3012488);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.478525);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2552009);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4863911);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.324943);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,101.0366);
   hCCpi0inFV_stack_10->SetBinContent(2,35.53935);
   hCCpi0inFV_stack_10->SetBinContent(3,33.34113);
   hCCpi0inFV_stack_10->SetBinContent(4,34.64772);
   hCCpi0inFV_stack_10->SetBinContent(5,41.43998);
   hCCpi0inFV_stack_10->SetBinContent(6,34.62411);
   hCCpi0inFV_stack_10->SetBinContent(7,37.40828);
   hCCpi0inFV_stack_10->SetBinContent(8,31.80704);
   hCCpi0inFV_stack_10->SetBinContent(9,24.71252);
   hCCpi0inFV_stack_10->SetBinContent(10,25.32885);
   hCCpi0inFV_stack_10->SetBinContent(11,17.73701);
   hCCpi0inFV_stack_10->SetBinContent(12,19.6429);
   hCCpi0inFV_stack_10->SetBinContent(13,14.42773);
   hCCpi0inFV_stack_10->SetBinContent(14,13.95498);
   hCCpi0inFV_stack_10->SetBinContent(15,12.99648);
   hCCpi0inFV_stack_10->SetBinContent(16,12.15304);
   hCCpi0inFV_stack_10->SetBinContent(17,9.766242);
   hCCpi0inFV_stack_10->SetBinContent(18,7.849922);
   hCCpi0inFV_stack_10->SetBinContent(19,6.007522);
   hCCpi0inFV_stack_10->SetBinContent(20,3.611408);
   hCCpi0inFV_stack_10->SetBinContent(21,3.225821);
   hCCpi0inFV_stack_10->SetBinContent(22,4.586532);
   hCCpi0inFV_stack_10->SetBinContent(23,4.304679);
   hCCpi0inFV_stack_10->SetBinContent(24,4.159526);
   hCCpi0inFV_stack_10->SetBinContent(25,44.8155);
   hCCpi0inFV_stack_10->SetBinError(1,5.021755);
   hCCpi0inFV_stack_10->SetBinError(2,2.984487);
   hCCpi0inFV_stack_10->SetBinError(3,2.862015);
   hCCpi0inFV_stack_10->SetBinError(4,2.975741);
   hCCpi0inFV_stack_10->SetBinError(5,3.248209);
   hCCpi0inFV_stack_10->SetBinError(6,2.939743);
   hCCpi0inFV_stack_10->SetBinError(7,3.109352);
   hCCpi0inFV_stack_10->SetBinError(8,2.813297);
   hCCpi0inFV_stack_10->SetBinError(9,2.490908);
   hCCpi0inFV_stack_10->SetBinError(10,2.56647);
   hCCpi0inFV_stack_10->SetBinError(11,2.076027);
   hCCpi0inFV_stack_10->SetBinError(12,2.25278);
   hCCpi0inFV_stack_10->SetBinError(13,1.883643);
   hCCpi0inFV_stack_10->SetBinError(14,1.864894);
   hCCpi0inFV_stack_10->SetBinError(15,1.815326);
   hCCpi0inFV_stack_10->SetBinError(16,1.725751);
   hCCpi0inFV_stack_10->SetBinError(17,1.498723);
   hCCpi0inFV_stack_10->SetBinError(18,1.422434);
   hCCpi0inFV_stack_10->SetBinError(19,1.217669);
   hCCpi0inFV_stack_10->SetBinError(20,1.001287);
   hCCpi0inFV_stack_10->SetBinError(21,0.854322);
   hCCpi0inFV_stack_10->SetBinError(22,1.092131);
   hCCpi0inFV_stack_10->SetBinError(23,1.020141);
   hCCpi0inFV_stack_10->SetBinError(24,0.9813267);
   hCCpi0inFV_stack_10->SetBinError(25,3.387568);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,43.84515);
   hNCinFV_stack_11->SetBinContent(2,14.41929);
   hNCinFV_stack_11->SetBinContent(3,15.10195);
   hNCinFV_stack_11->SetBinContent(4,13.17452);
   hNCinFV_stack_11->SetBinContent(5,11.48885);
   hNCinFV_stack_11->SetBinContent(6,15.19046);
   hNCinFV_stack_11->SetBinContent(7,13.34273);
   hNCinFV_stack_11->SetBinContent(8,10.94688);
   hNCinFV_stack_11->SetBinContent(9,9.665155);
   hNCinFV_stack_11->SetBinContent(10,9.105914);
   hNCinFV_stack_11->SetBinContent(11,7.778779);
   hNCinFV_stack_11->SetBinContent(12,7.333785);
   hNCinFV_stack_11->SetBinContent(13,8.159293);
   hNCinFV_stack_11->SetBinContent(14,5.125115);
   hNCinFV_stack_11->SetBinContent(15,5.763443);
   hNCinFV_stack_11->SetBinContent(16,3.467945);
   hNCinFV_stack_11->SetBinContent(17,3.519508);
   hNCinFV_stack_11->SetBinContent(18,2.730956);
   hNCinFV_stack_11->SetBinContent(19,5.068606);
   hNCinFV_stack_11->SetBinContent(20,2.000729);
   hNCinFV_stack_11->SetBinContent(21,1.858957);
   hNCinFV_stack_11->SetBinContent(22,2.442341);
   hNCinFV_stack_11->SetBinContent(23,0.7834804);
   hNCinFV_stack_11->SetBinContent(24,1.607298);
   hNCinFV_stack_11->SetBinContent(25,20.31944);
   hNCinFV_stack_11->SetBinError(1,3.382269);
   hNCinFV_stack_11->SetBinError(2,1.861184);
   hNCinFV_stack_11->SetBinError(3,1.973509);
   hNCinFV_stack_11->SetBinError(4,1.861221);
   hNCinFV_stack_11->SetBinError(5,1.700441);
   hNCinFV_stack_11->SetBinError(6,2.002355);
   hNCinFV_stack_11->SetBinError(7,1.830976);
   hNCinFV_stack_11->SetBinError(8,1.653812);
   hNCinFV_stack_11->SetBinError(9,1.606722);
   hNCinFV_stack_11->SetBinError(10,1.442495);
   hNCinFV_stack_11->SetBinError(11,1.330512);
   hNCinFV_stack_11->SetBinError(12,1.316001);
   hNCinFV_stack_11->SetBinError(13,1.428631);
   hNCinFV_stack_11->SetBinError(14,1.160961);
   hNCinFV_stack_11->SetBinError(15,1.19315);
   hNCinFV_stack_11->SetBinError(16,0.9620561);
   hNCinFV_stack_11->SetBinError(17,0.9415746);
   hNCinFV_stack_11->SetBinError(18,0.8550514);
   hNCinFV_stack_11->SetBinError(19,1.116688);
   hNCinFV_stack_11->SetBinError(20,0.7343859);
   hNCinFV_stack_11->SetBinError(21,0.6804124);
   hNCinFV_stack_11->SetBinError(22,0.759212);
   hNCinFV_stack_11->SetBinError(23,0.3917439);
   hNCinFV_stack_11->SetBinError(24,0.6796534);
   hNCinFV_stack_11->SetBinError(25,2.227552);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,71.90027);
   hnumuCCinFV_stack_12->SetBinContent(2,17.2182);
   hnumuCCinFV_stack_12->SetBinContent(3,16.98275);
   hnumuCCinFV_stack_12->SetBinContent(4,12.54834);
   hnumuCCinFV_stack_12->SetBinContent(5,10.40761);
   hnumuCCinFV_stack_12->SetBinContent(6,10.41281);
   hnumuCCinFV_stack_12->SetBinContent(7,12.9639);
   hnumuCCinFV_stack_12->SetBinContent(8,10.26169);
   hnumuCCinFV_stack_12->SetBinContent(9,7.326829);
   hnumuCCinFV_stack_12->SetBinContent(10,7.789062);
   hnumuCCinFV_stack_12->SetBinContent(11,10.78486);
   hnumuCCinFV_stack_12->SetBinContent(12,5.920672);
   hnumuCCinFV_stack_12->SetBinContent(13,6.498555);
   hnumuCCinFV_stack_12->SetBinContent(14,4.886346);
   hnumuCCinFV_stack_12->SetBinContent(15,3.337984);
   hnumuCCinFV_stack_12->SetBinContent(16,3.506596);
   hnumuCCinFV_stack_12->SetBinContent(17,3.545788);
   hnumuCCinFV_stack_12->SetBinContent(18,4.735011);
   hnumuCCinFV_stack_12->SetBinContent(19,4.057937);
   hnumuCCinFV_stack_12->SetBinContent(20,3.073689);
   hnumuCCinFV_stack_12->SetBinContent(21,2.819168);
   hnumuCCinFV_stack_12->SetBinContent(22,1.822678);
   hnumuCCinFV_stack_12->SetBinContent(23,4.984326);
   hnumuCCinFV_stack_12->SetBinContent(24,2.658098);
   hnumuCCinFV_stack_12->SetBinContent(25,26.61284);
   hnumuCCinFV_stack_12->SetBinError(1,4.765534);
   hnumuCCinFV_stack_12->SetBinError(2,2.946214);
   hnumuCCinFV_stack_12->SetBinError(3,2.88162);
   hnumuCCinFV_stack_12->SetBinError(4,1.790448);
   hnumuCCinFV_stack_12->SetBinError(5,1.618286);
   hnumuCCinFV_stack_12->SetBinError(6,1.583047);
   hnumuCCinFV_stack_12->SetBinError(7,2.589783);
   hnumuCCinFV_stack_12->SetBinError(8,1.806186);
   hnumuCCinFV_stack_12->SetBinError(9,1.408621);
   hnumuCCinFV_stack_12->SetBinError(10,1.610412);
   hnumuCCinFV_stack_12->SetBinError(11,1.907913);
   hnumuCCinFV_stack_12->SetBinError(12,1.231633);
   hnumuCCinFV_stack_12->SetBinError(13,1.319465);
   hnumuCCinFV_stack_12->SetBinError(14,1.142418);
   hnumuCCinFV_stack_12->SetBinError(15,0.8818273);
   hnumuCCinFV_stack_12->SetBinError(16,1.07866);
   hnumuCCinFV_stack_12->SetBinError(17,0.9406671);
   hnumuCCinFV_stack_12->SetBinError(18,1.171606);
   hnumuCCinFV_stack_12->SetBinError(19,1.308006);
   hnumuCCinFV_stack_12->SetBinError(20,0.9776107);
   hnumuCCinFV_stack_12->SetBinError(21,0.9318582);
   hnumuCCinFV_stack_12->SetBinError(22,0.6744023);
   hnumuCCinFV_stack_12->SetBinError(23,1.611949);
   hnumuCCinFV_stack_12->SetBinError(24,1.1423);
   hnumuCCinFV_stack_12->SetBinError(25,2.847152);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,4.216596);
   hnueCCinFV_stack_13->SetBinContent(2,2.267722);
   hnueCCinFV_stack_13->SetBinContent(3,0.8347859);
   hnueCCinFV_stack_13->SetBinContent(4,1.373872);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,3.237773);
   hnueCCinFV_stack_13->SetBinContent(7,1.469717);
   hnueCCinFV_stack_13->SetBinContent(8,0.3966292);
   hnueCCinFV_stack_13->SetBinContent(9,0.678202);
   hnueCCinFV_stack_13->SetBinContent(10,1.159045);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,0.6361428);
   hnueCCinFV_stack_13->SetBinContent(13,0.6699017);
   hnueCCinFV_stack_13->SetBinContent(14,1.147774);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.4556582);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.4073255);
   hnueCCinFV_stack_13->SetBinContent(20,1.122308);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.9398632);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,7.887442);
   hnueCCinFV_stack_13->SetBinError(1,1.474355);
   hnueCCinFV_stack_13->SetBinError(2,0.8768042);
   hnueCCinFV_stack_13->SetBinError(3,0.4196513);
   hnueCCinFV_stack_13->SetBinError(4,0.5688255);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,1.471089);
   hnueCCinFV_stack_13->SetBinError(7,0.6615517);
   hnueCCinFV_stack_13->SetBinError(8,0.2770479);
   hnueCCinFV_stack_13->SetBinError(9,0.5201215);
   hnueCCinFV_stack_13->SetBinError(10,0.5936429);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.3692352);
   hnueCCinFV_stack_13->SetBinError(13,0.3925627);
   hnueCCinFV_stack_13->SetBinError(14,0.6270275);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.3255218);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.4073256);
   hnueCCinFV_stack_13->SetBinError(20,0.6109035);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.7687429);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,2.195027);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__11->SetBinContent(1,735.4165);
   hmcerror__11->SetBinContent(2,247.9389);
   hmcerror__11->SetBinContent(3,247.3762);
   hmcerror__11->SetBinContent(4,245.3848);
   hmcerror__11->SetBinContent(5,240.6463);
   hmcerror__11->SetBinContent(6,228.2845);
   hmcerror__11->SetBinContent(7,215.1175);
   hmcerror__11->SetBinContent(8,196.3792);
   hmcerror__11->SetBinContent(9,166.5469);
   hmcerror__11->SetBinContent(10,158.871);
   hmcerror__11->SetBinContent(11,127.9966);
   hmcerror__11->SetBinContent(12,122.8636);
   hmcerror__11->SetBinContent(13,106.2219);
   hmcerror__11->SetBinContent(14,86.06607);
   hmcerror__11->SetBinContent(15,72.99173);
   hmcerror__11->SetBinContent(16,65.4034);
   hmcerror__11->SetBinContent(17,59.16203);
   hmcerror__11->SetBinContent(18,49.83677);
   hmcerror__11->SetBinContent(19,47.81568);
   hmcerror__11->SetBinContent(20,34.06496);
   hmcerror__11->SetBinContent(21,36.13014);
   hmcerror__11->SetBinContent(22,36.41875);
   hmcerror__11->SetBinContent(23,30.60542);
   hmcerror__11->SetBinContent(24,26.6114);
   hmcerror__11->SetBinContent(25,325.9548);
   hmcerror__11->SetBinError(1,164.55);
   hmcerror__11->SetBinError(2,63.28295);
   hmcerror__11->SetBinError(3,56.73525);
   hmcerror__11->SetBinError(4,65.12092);
   hmcerror__11->SetBinError(5,60.52595);
   hmcerror__11->SetBinError(6,55.67792);
   hmcerror__11->SetBinError(7,64.75957);
   hmcerror__11->SetBinError(8,48.64537);
   hmcerror__11->SetBinError(9,46.28844);
   hmcerror__11->SetBinError(10,38.77356);
   hmcerror__11->SetBinError(11,37.66759);
   hmcerror__11->SetBinError(12,34.58624);
   hmcerror__11->SetBinError(13,27.03576);
   hmcerror__11->SetBinError(14,27.0127);
   hmcerror__11->SetBinError(15,20.67518);
   hmcerror__11->SetBinError(16,20.79843);
   hmcerror__11->SetBinError(17,20.21394);
   hmcerror__11->SetBinError(18,19.15808);
   hmcerror__11->SetBinError(19,23.97428);
   hmcerror__11->SetBinError(20,13.98534);
   hmcerror__11->SetBinError(21,11.89588);
   hmcerror__11->SetBinError(22,14.2275);
   hmcerror__11->SetBinError(23,15.31311);
   hmcerror__11->SetBinError(24,12.69026);
   hmcerror__11->SetBinError(25,71.75209);
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
   
   Double_t _fx3013[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3013[24] = {
   730,
   232,
   255,
   266,
   226,
   202,
   207,
   167,
   137,
   157,
   148,
   110,
   118,
   74,
   98,
   70,
   65,
   43,
   50,
   46,
   31,
   34,
   24,
   24};
   Double_t _felx3013[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3013[24] = {
   27.01851,
   15.23155,
   15.96872,
   16.30951,
   15.0333,
   14.21267,
   14.38749,
   12.92285,
   11.7047,
   12.52996,
   12.16553,
   10.48809,
   10.86278,
   8.7275,
   10.0209,
   8.4925,
   8.1893,
   6.6917,
   7.2025,
   6.9153,
   5.7094,
   5.9703,
   5.0476,
   5.0476};
   Double_t _fehx3013[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3013[24] = {
   27.01851,
   15.23155,
   15.96872,
   16.30951,
   15.0333,
   14.21267,
   14.38749,
   12.92285,
   11.7047,
   12.52996,
   12.16553,
   10.48809,
   10.86278,
   8.5253,
   9.82,
   8.2902,
   7.9866,
   6.4868,
   6.9985,
   6.7108,
   5.5017,
   5.7635,
   4.837,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,99);
   Graph_Graph3013->SetMinimum(17.05716);
   Graph_Graph3013->SetMaximum(830.8251);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 87.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 434.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 52.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 455.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1203.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  238.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 534.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 213.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 240.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3014[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3014[24] = {
   0.2237508,
   0.2552361,
   0.2293481,
   0.2653829,
   0.2515142,
   0.2438971,
   0.3010427,
   0.2477115,
   0.2779303,
   0.2440569,
   0.2942859,
   0.281501,
   0.2545215,
   0.3138601,
   0.2832538,
   0.3180024,
   0.3416709,
   0.3844165,
   0.5013895,
   0.410549,
   0.3292507,
   0.3906642,
   0.5003397,
   0.4768731};
   Double_t _fehx3014[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3014[24] = {
   0.2237508,
   0.2552361,
   0.2293481,
   0.2653829,
   0.2515142,
   0.2438971,
   0.3010427,
   0.2477115,
   0.2779303,
   0.2440569,
   0.2942859,
   0.281501,
   0.2545215,
   0.3138601,
   0.2832538,
   0.3180024,
   0.3416709,
   0.3844165,
   0.5013895,
   0.410549,
   0.3292507,
   0.3906642,
   0.5003397,
   0.4768731};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,99);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3015[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3015[24] = {
   0.1967877,
   0.1949521,
   0.1983678,
   0.2018868,
   0.1998581,
   0.1991677,
   0.2047866,
   0.1953339,
   0.1886795,
   0.1957494,
   0.2042827,
   0.1881452,
   0.1920269,
   0.2031986,
   0.213077,
   0.2086096,
   0.1931033,
   0.200814,
   0.203923,
   0.2196083,
   0.1978011,
   0.1964283,
   0.232227,
   0.2406922};
   Double_t _fehx3015[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3015[24] = {
   0.1967877,
   0.1949521,
   0.1983678,
   0.2018868,
   0.1998581,
   0.1991677,
   0.2047866,
   0.1953339,
   0.1886795,
   0.1957494,
   0.2042827,
   0.1881452,
   0.1920269,
   0.2031986,
   0.213077,
   0.2086096,
   0.1931033,
   0.200814,
   0.203923,
   0.2196083,
   0.1978011,
   0.1964283,
   0.232227,
   0.2406922};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,99);
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
   
   Double_t _fx3016[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3016[24] = {
   0.9926348,
   0.9357145,
   1.030819,
   1.084012,
   0.9391378,
   0.884861,
   0.9622647,
   0.8503957,
   0.822591,
   0.9882234,
   1.156281,
   0.8953015,
   1.110882,
   0.8598046,
   1.342618,
   1.070281,
   1.098678,
   0.8628168,
   1.045682,
   1.350361,
   0.8580094,
   0.9335849,
   0.7841748,
   0.9018692};
   Double_t _felx3016[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3016[24] = {
   0.03673906,
   0.06143267,
   0.06455237,
   0.06646503,
   0.06247051,
   0.0622586,
   0.06688202,
   0.0658056,
   0.07027869,
   0.07886882,
   0.09504569,
   0.08536365,
   0.102265,
   0.1014047,
   0.1372882,
   0.129848,
   0.1384216,
   0.1342724,
   0.1506305,
   0.2030033,
   0.1580232,
   0.1639348,
   0.164925,
   0.1896781};
   Double_t _fehx3016[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3016[24] = {
   0.03673906,
   0.06143267,
   0.06455237,
   0.06646503,
   0.06247051,
   0.0622586,
   0.06688202,
   0.0658056,
   0.07027869,
   0.07886882,
   0.09504569,
   0.08536365,
   0.102265,
   0.09905529,
   0.1345358,
   0.1267549,
   0.1349954,
   0.1301609,
   0.1463641,
   0.1970001,
   0.1522745,
   0.1582564,
   0.1580439,
   0.1817642};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,99);
   Graph_Graph3016->SetMinimum(0.5264386);
   Graph_Graph3016->SetMaximum(1.640172);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
