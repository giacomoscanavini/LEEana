#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 10:49:40 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-92.30769,-8.171089,676.9231,688.5218);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__4->SetBinContent(1,13.49288);
   hmc__4->SetBinContent(2,55.56565);
   hmc__4->SetBinContent(3,164.7879);
   hmc__4->SetBinContent(4,290.402);
   hmc__4->SetBinContent(5,408.5544);
   hmc__4->SetBinContent(6,403.0616);
   hmc__4->SetBinContent(7,388.2067);
   hmc__4->SetBinContent(8,305.3458);
   hmc__4->SetBinContent(9,235.4919);
   hmc__4->SetBinContent(10,197.417);
   hmc__4->SetBinContent(11,176.0713);
   hmc__4->SetBinContent(12,139.7637);
   hmc__4->SetBinContent(13,113.1238);
   hmc__4->SetBinContent(14,98.91016);
   hmc__4->SetBinContent(15,71.32637);
   hmc__4->SetBinContent(16,62.7793);
   hmc__4->SetBinContent(17,53.50198);
   hmc__4->SetBinContent(18,38.61963);
   hmc__4->SetBinContent(19,33.77169);
   hmc__4->SetBinContent(20,23.02129);
   hmc__4->SetBinContent(21,17.82873);
   hmc__4->SetBinContent(22,14.40819);
   hmc__4->SetBinContent(23,14.27664);
   hmc__4->SetBinContent(24,11.48054);
   hmc__4->SetBinContent(25,112.388);
   hmc__4->SetBinError(1,4.501914);
   hmc__4->SetBinError(2,12.69794);
   hmc__4->SetBinError(3,32.16357);
   hmc__4->SetBinError(4,60.93666);
   hmc__4->SetBinError(5,87.31527);
   hmc__4->SetBinError(6,89.69292);
   hmc__4->SetBinError(7,94.55948);
   hmc__4->SetBinError(8,75.42795);
   hmc__4->SetBinError(9,63.91211);
   hmc__4->SetBinError(10,54.57595);
   hmc__4->SetBinError(11,45.18833);
   hmc__4->SetBinError(12,38.92765);
   hmc__4->SetBinError(13,30.24273);
   hmc__4->SetBinError(14,26.81481);
   hmc__4->SetBinError(15,22.40834);
   hmc__4->SetBinError(16,16.98049);
   hmc__4->SetBinError(17,17.13046);
   hmc__4->SetBinError(18,15.31705);
   hmc__4->SetBinError(19,10.15663);
   hmc__4->SetBinError(20,7.067629);
   hmc__4->SetBinError(21,5.427977);
   hmc__4->SetBinError(22,5.993306);
   hmc__4->SetBinError(23,5.855298);
   hmc__4->SetBinError(24,4.3026);
   hmc__4->SetBinError(25,33.48887);
   hmc__4->SetMinimum(-8.171089);
   hmc__4->SetMaximum(653.6871);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,600);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(428.9822);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.222168);
   hbadmatch_stack_1->SetBinContent(3,7.56369);
   hbadmatch_stack_1->SetBinContent(4,10.9764);
   hbadmatch_stack_1->SetBinContent(5,9.575541);
   hbadmatch_stack_1->SetBinContent(6,8.867641);
   hbadmatch_stack_1->SetBinContent(7,9.863913);
   hbadmatch_stack_1->SetBinContent(8,9.963051);
   hbadmatch_stack_1->SetBinContent(9,4.87281);
   hbadmatch_stack_1->SetBinContent(10,4.21561);
   hbadmatch_stack_1->SetBinContent(11,1.073786);
   hbadmatch_stack_1->SetBinContent(12,2.258342);
   hbadmatch_stack_1->SetBinContent(13,0.8997518);
   hbadmatch_stack_1->SetBinContent(14,1.452052);
   hbadmatch_stack_1->SetBinContent(15,1.545967);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.6803553);
   hbadmatch_stack_1->SetBinContent(19,0.9762383);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(25,1.123658);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9667909);
   hbadmatch_stack_1->SetBinError(3,1.607769);
   hbadmatch_stack_1->SetBinError(4,1.634118);
   hbadmatch_stack_1->SetBinError(5,1.54771);
   hbadmatch_stack_1->SetBinError(6,1.869353);
   hbadmatch_stack_1->SetBinError(7,1.57325);
   hbadmatch_stack_1->SetBinError(8,2.429468);
   hbadmatch_stack_1->SetBinError(9,1.131589);
   hbadmatch_stack_1->SetBinError(10,1.099097);
   hbadmatch_stack_1->SetBinError(11,0.5557297);
   hbadmatch_stack_1->SetBinError(12,0.8235284);
   hbadmatch_stack_1->SetBinError(13,0.5287499);
   hbadmatch_stack_1->SetBinError(14,0.7606228);
   hbadmatch_stack_1->SetBinError(15,0.5988954);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.4810838);
   hbadmatch_stack_1->SetBinError(19,0.5901424);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(25,0.5188295);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,4.841647);
   hext_stack_2->SetBinContent(2,8.200953);
   hext_stack_2->SetBinContent(3,25.10918);
   hext_stack_2->SetBinContent(4,19.97626);
   hext_stack_2->SetBinContent(5,32.85327);
   hext_stack_2->SetBinContent(6,31.40841);
   hext_stack_2->SetBinContent(7,33.6996);
   hext_stack_2->SetBinContent(8,33.70395);
   hext_stack_2->SetBinContent(9,11.71906);
   hext_stack_2->SetBinContent(10,9.883599);
   hext_stack_2->SetBinContent(11,16.2782);
   hext_stack_2->SetBinContent(12,7.455595);
   hext_stack_2->SetBinContent(13,5.814838);
   hext_stack_2->SetBinContent(14,9.182903);
   hext_stack_2->SetBinContent(15,3.412785);
   hext_stack_2->SetBinContent(16,4.192852);
   hext_stack_2->SetBinContent(17,3.730002);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,3.208071);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(25,8.332225);
   hext_stack_2->SetBinError(1,1.586957);
   hext_stack_2->SetBinError(2,1.720806);
   hext_stack_2->SetBinError(3,3.508597);
   hext_stack_2->SetBinError(4,3.002815);
   hext_stack_2->SetBinError(5,4.063805);
   hext_stack_2->SetBinError(6,3.903162);
   hext_stack_2->SetBinError(7,4.021875);
   hext_stack_2->SetBinError(8,4.20012);
   hext_stack_2->SetBinError(9,2.35099);
   hext_stack_2->SetBinError(10,2.037409);
   hext_stack_2->SetBinError(11,2.978477);
   hext_stack_2->SetBinError(12,1.758699);
   hext_stack_2->SetBinError(13,1.683489);
   hext_stack_2->SetBinError(14,2.208514);
   hext_stack_2->SetBinError(15,1.14352);
   hext_stack_2->SetBinError(16,1.519199);
   hext_stack_2->SetBinError(17,1.270461);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,1.434693);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(25,1.936759);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,1.058914);
   hdirt_stack_3->SetBinContent(3,1.402799);
   hdirt_stack_3->SetBinContent(4,1.462021);
   hdirt_stack_3->SetBinContent(5,4.162078);
   hdirt_stack_3->SetBinContent(6,1.747276);
   hdirt_stack_3->SetBinContent(7,1.257105);
   hdirt_stack_3->SetBinContent(8,0.8838965);
   hdirt_stack_3->SetBinContent(9,1.543066);
   hdirt_stack_3->SetBinContent(10,0.8144459);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.9324398);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(2,0.4475448);
   hdirt_stack_3->SetBinError(3,0.6123533);
   hdirt_stack_3->SetBinError(4,0.6319729);
   hdirt_stack_3->SetBinError(5,1.3029);
   hdirt_stack_3->SetBinError(6,0.6554984);
   hdirt_stack_3->SetBinError(7,0.6119204);
   hdirt_stack_3->SetBinError(8,0.4536616);
   hdirt_stack_3->SetBinError(9,0.7131111);
   hdirt_stack_3->SetBinError(10,0.4978001);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4844392);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(25,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.072095);
   houtFV_stack_4->SetBinContent(2,6.100781);
   houtFV_stack_4->SetBinContent(3,15.17156);
   houtFV_stack_4->SetBinContent(4,19.43766);
   houtFV_stack_4->SetBinContent(5,24.41312);
   houtFV_stack_4->SetBinContent(6,24.35654);
   houtFV_stack_4->SetBinContent(7,23.19674);
   houtFV_stack_4->SetBinContent(8,19.76912);
   houtFV_stack_4->SetBinContent(9,13.9441);
   houtFV_stack_4->SetBinContent(10,13.72959);
   houtFV_stack_4->SetBinContent(11,10.89998);
   houtFV_stack_4->SetBinContent(12,9.148011);
   houtFV_stack_4->SetBinContent(13,5.913488);
   houtFV_stack_4->SetBinContent(14,4.643866);
   houtFV_stack_4->SetBinContent(15,4.072659);
   houtFV_stack_4->SetBinContent(16,3.517817);
   houtFV_stack_4->SetBinContent(17,2.737718);
   houtFV_stack_4->SetBinContent(18,2.817245);
   houtFV_stack_4->SetBinContent(19,2.628164);
   houtFV_stack_4->SetBinContent(20,0.9269427);
   houtFV_stack_4->SetBinContent(21,1.517089);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,1.371936);
   houtFV_stack_4->SetBinContent(25,4.05302);
   houtFV_stack_4->SetBinError(1,0.5551335);
   houtFV_stack_4->SetBinError(2,1.296577);
   houtFV_stack_4->SetBinError(3,1.908333);
   houtFV_stack_4->SetBinError(4,2.215017);
   houtFV_stack_4->SetBinError(5,2.526056);
   houtFV_stack_4->SetBinError(6,2.491969);
   houtFV_stack_4->SetBinError(7,2.402917);
   houtFV_stack_4->SetBinError(8,2.293867);
   houtFV_stack_4->SetBinError(9,1.809578);
   houtFV_stack_4->SetBinError(10,1.802518);
   houtFV_stack_4->SetBinError(11,1.673336);
   houtFV_stack_4->SetBinError(12,1.495615);
   houtFV_stack_4->SetBinError(13,1.194981);
   houtFV_stack_4->SetBinError(14,1.009316);
   houtFV_stack_4->SetBinError(15,1.034935);
   houtFV_stack_4->SetBinError(16,0.9412229);
   houtFV_stack_4->SetBinError(17,0.856599);
   houtFV_stack_4->SetBinError(18,0.9179378);
   houtFV_stack_4->SetBinError(19,0.874263);
   houtFV_stack_4->SetBinError(20,0.4800908);
   houtFV_stack_4->SetBinError(21,0.5887087);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.5185478);
   houtFV_stack_4->SetBinError(25,1.019635);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6397079);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8071078);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2416228);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2511016);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3259676);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,1.53334);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,16.60488);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,64.89484);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,146.8581);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,220.3556);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,218.1276);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,207.5794);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,159.1837);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,132.8449);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,107.3761);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,93.50278);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,69.32579);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,60.34082);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,49.04209);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,39.46888);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,31.07706);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,25.22469);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,22.56557);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,15.99491);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,13.1936);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,8.506043);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,8.731749);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,6.413872);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,4.546724);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,43.1869);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.320245);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.292627);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.642668);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.816626);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.904912);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.796254);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.789419);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.075446);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.762665);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.442931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.233833);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.692241);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.588679);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.291079);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.09086);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.802357);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.638822);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.641814);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.352443);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.216597);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.9220808);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.028974);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.8442996);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.7130503);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.229767);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_7->SetBinContent(1,0.6384395);
   hCCpi0inFV_stack_7->SetBinContent(2,4.056401);
   hCCpi0inFV_stack_7->SetBinContent(3,17.82463);
   hCCpi0inFV_stack_7->SetBinContent(4,42.76202);
   hCCpi0inFV_stack_7->SetBinContent(5,62.47463);
   hCCpi0inFV_stack_7->SetBinContent(6,64.01987);
   hCCpi0inFV_stack_7->SetBinContent(7,52.83861);
   hCCpi0inFV_stack_7->SetBinContent(8,46.11829);
   hCCpi0inFV_stack_7->SetBinContent(9,38.81367);
   hCCpi0inFV_stack_7->SetBinContent(10,34.72686);
   hCCpi0inFV_stack_7->SetBinContent(11,31.98497);
   hCCpi0inFV_stack_7->SetBinContent(12,26.80846);
   hCCpi0inFV_stack_7->SetBinContent(13,23.76004);
   hCCpi0inFV_stack_7->SetBinContent(14,19.99616);
   hCCpi0inFV_stack_7->SetBinContent(15,12.49767);
   hCCpi0inFV_stack_7->SetBinContent(16,14.00745);
   hCCpi0inFV_stack_7->SetBinContent(17,11.08701);
   hCCpi0inFV_stack_7->SetBinContent(18,6.725624);
   hCCpi0inFV_stack_7->SetBinContent(19,9.103394);
   hCCpi0inFV_stack_7->SetBinContent(20,5.130187);
   hCCpi0inFV_stack_7->SetBinContent(21,3.17933);
   hCCpi0inFV_stack_7->SetBinContent(22,3.126077);
   hCCpi0inFV_stack_7->SetBinContent(23,4.14661);
   hCCpi0inFV_stack_7->SetBinContent(24,3.365903);
   hCCpi0inFV_stack_7->SetBinContent(25,27.78328);
   hCCpi0inFV_stack_7->SetBinError(1,0.3709342);
   hCCpi0inFV_stack_7->SetBinError(2,1.020285);
   hCCpi0inFV_stack_7->SetBinError(3,2.13209);
   hCCpi0inFV_stack_7->SetBinError(4,3.28428);
   hCCpi0inFV_stack_7->SetBinError(5,3.943101);
   hCCpi0inFV_stack_7->SetBinError(6,4.001259);
   hCCpi0inFV_stack_7->SetBinError(7,3.632143);
   hCCpi0inFV_stack_7->SetBinError(8,3.416849);
   hCCpi0inFV_stack_7->SetBinError(9,3.136415);
   hCCpi0inFV_stack_7->SetBinError(10,2.974265);
   hCCpi0inFV_stack_7->SetBinError(11,2.8949);
   hCCpi0inFV_stack_7->SetBinError(12,2.625959);
   hCCpi0inFV_stack_7->SetBinError(13,2.408182);
   hCCpi0inFV_stack_7->SetBinError(14,2.202928);
   hCCpi0inFV_stack_7->SetBinError(15,1.661203);
   hCCpi0inFV_stack_7->SetBinError(16,1.87707);
   hCCpi0inFV_stack_7->SetBinError(17,1.671953);
   hCCpi0inFV_stack_7->SetBinError(18,1.325652);
   hCCpi0inFV_stack_7->SetBinError(19,1.57409);
   hCCpi0inFV_stack_7->SetBinError(20,1.161816);
   hCCpi0inFV_stack_7->SetBinError(21,0.8779761);
   hCCpi0inFV_stack_7->SetBinError(22,0.8995382);
   hCCpi0inFV_stack_7->SetBinError(23,1.075328);
   hCCpi0inFV_stack_7->SetBinError(24,0.897533);
   hCCpi0inFV_stack_7->SetBinError(25,2.689359);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_8->SetBinContent(1,2.144191);
   hNCinFV_stack_8->SetBinContent(2,6.97731);
   hNCinFV_stack_8->SetBinContent(3,12.26095);
   hNCinFV_stack_8->SetBinContent(4,15.09856);
   hNCinFV_stack_8->SetBinContent(5,18.05883);
   hNCinFV_stack_8->SetBinContent(6,17.33912);
   hNCinFV_stack_8->SetBinContent(7,16.49562);
   hNCinFV_stack_8->SetBinContent(8,11.13853);
   hNCinFV_stack_8->SetBinContent(9,6.835539);
   hNCinFV_stack_8->SetBinContent(10,6.025245);
   hNCinFV_stack_8->SetBinContent(11,5.373393);
   hNCinFV_stack_8->SetBinContent(12,6.782286);
   hNCinFV_stack_8->SetBinContent(13,3.856305);
   hNCinFV_stack_8->SetBinContent(14,3.814277);
   hNCinFV_stack_8->SetBinContent(15,5.217015);
   hNCinFV_stack_8->SetBinContent(16,4.001457);
   hNCinFV_stack_8->SetBinContent(17,3.530734);
   hNCinFV_stack_8->SetBinContent(18,2.392469);
   hNCinFV_stack_8->SetBinContent(19,1.712114);
   hNCinFV_stack_8->SetBinContent(20,0.7817899);
   hNCinFV_stack_8->SetBinContent(21,0.5867651);
   hNCinFV_stack_8->SetBinContent(22,0.3401776);
   hNCinFV_stack_8->SetBinContent(23,0.7336084);
   hNCinFV_stack_8->SetBinContent(24,0.7834804);
   hNCinFV_stack_8->SetBinContent(25,5.363858);
   hNCinFV_stack_8->SetBinError(1,0.7850774);
   hNCinFV_stack_8->SetBinError(2,1.344671);
   hNCinFV_stack_8->SetBinError(3,1.755992);
   hNCinFV_stack_8->SetBinError(4,1.973173);
   hNCinFV_stack_8->SetBinError(5,2.068626);
   hNCinFV_stack_8->SetBinError(6,2.104551);
   hNCinFV_stack_8->SetBinError(7,2.076378);
   hNCinFV_stack_8->SetBinError(8,1.664874);
   hNCinFV_stack_8->SetBinError(9,1.315971);
   hNCinFV_stack_8->SetBinError(10,1.195246);
   hNCinFV_stack_8->SetBinError(11,1.160835);
   hNCinFV_stack_8->SetBinError(12,1.330454);
   hNCinFV_stack_8->SetBinError(13,1.000479);
   hNCinFV_stack_8->SetBinError(14,0.9193991);
   hNCinFV_stack_8->SetBinError(15,1.209894);
   hNCinFV_stack_8->SetBinError(16,1.038578);
   hNCinFV_stack_8->SetBinError(17,0.8322087);
   hNCinFV_stack_8->SetBinError(18,0.7848912);
   hNCinFV_stack_8->SetBinError(19,0.6201715);
   hNCinFV_stack_8->SetBinError(20,0.3908977);
   hNCinFV_stack_8->SetBinError(21,0.3387718);
   hNCinFV_stack_8->SetBinError(22,0.3401776);
   hNCinFV_stack_8->SetBinError(23,0.4394482);
   hNCinFV_stack_8->SetBinError(24,0.3917439);
   hNCinFV_stack_8->SetBinError(25,1.24185);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_9->SetBinContent(1,3.066449);
   hnumuCCinFV_stack_9->SetBinContent(2,9.121317);
   hnumuCCinFV_stack_9->SetBinContent(3,20.20733);
   hnumuCCinFV_stack_9->SetBinContent(4,33.26552);
   hnumuCCinFV_stack_9->SetBinContent(5,35.6215);
   hnumuCCinFV_stack_9->SetBinContent(6,35.8493);
   hnumuCCinFV_stack_9->SetBinContent(7,40.64479);
   hnumuCCinFV_stack_9->SetBinContent(8,23.00672);
   hnumuCCinFV_stack_9->SetBinContent(9,23.44872);
   hnumuCCinFV_stack_9->SetBinContent(10,20.53398);
   hnumuCCinFV_stack_9->SetBinContent(11,14.96322);
   hnumuCCinFV_stack_9->SetBinContent(12,16.7736);
   hnumuCCinFV_stack_9->SetBinContent(13,12.06139);
   hnumuCCinFV_stack_9->SetBinContent(14,10.62571);
   hnumuCCinFV_stack_9->SetBinContent(15,4.720446);
   hnumuCCinFV_stack_9->SetBinContent(16,4.704197);
   hnumuCCinFV_stack_9->SetBinContent(17,5.873148);
   hnumuCCinFV_stack_9->SetBinContent(18,2.316884);
   hnumuCCinFV_stack_9->SetBinContent(19,2.491893);
   hnumuCCinFV_stack_9->SetBinContent(20,1.456241);
   hnumuCCinFV_stack_9->SetBinContent(21,0.4633543);
   hnumuCCinFV_stack_9->SetBinContent(22,1.466152);
   hnumuCCinFV_stack_9->SetBinContent(23,0.7449581);
   hnumuCCinFV_stack_9->SetBinContent(24,1.3846);
   hnumuCCinFV_stack_9->SetBinContent(25,10.81061);
   hnumuCCinFV_stack_9->SetBinError(1,1.072671);
   hnumuCCinFV_stack_9->SetBinError(2,1.682698);
   hnumuCCinFV_stack_9->SetBinError(3,2.506398);
   hnumuCCinFV_stack_9->SetBinError(4,3.771073);
   hnumuCCinFV_stack_9->SetBinError(5,3.535575);
   hnumuCCinFV_stack_9->SetBinError(6,3.184825);
   hnumuCCinFV_stack_9->SetBinError(7,4.302144);
   hnumuCCinFV_stack_9->SetBinError(8,2.561326);
   hnumuCCinFV_stack_9->SetBinError(9,2.595509);
   hnumuCCinFV_stack_9->SetBinError(10,2.800313);
   hnumuCCinFV_stack_9->SetBinError(11,2.027946);
   hnumuCCinFV_stack_9->SetBinError(12,2.44806);
   hnumuCCinFV_stack_9->SetBinError(13,1.823196);
   hnumuCCinFV_stack_9->SetBinError(14,1.851675);
   hnumuCCinFV_stack_9->SetBinError(15,1.624877);
   hnumuCCinFV_stack_9->SetBinError(16,1.11998);
   hnumuCCinFV_stack_9->SetBinError(17,1.304076);
   hnumuCCinFV_stack_9->SetBinError(18,0.7384447);
   hnumuCCinFV_stack_9->SetBinError(19,0.8247918);
   hnumuCCinFV_stack_9->SetBinError(20,0.6933097);
   hnumuCCinFV_stack_9->SetBinError(21,0.3313506);
   hnumuCCinFV_stack_9->SetBinError(22,0.62168);
   hnumuCCinFV_stack_9->SetBinError(23,0.528742);
   hnumuCCinFV_stack_9->SetBinError(24,0.5958194);
   hnumuCCinFV_stack_9->SetBinError(25,2.860039);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_10->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_10->SetBinContent(4,0.4402164);
   hnueCCinFV_stack_10->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_10->SetBinContent(6,0.9280312);
   hnueCCinFV_stack_10->SetBinContent(7,1.991224);
   hnueCCinFV_stack_10->SetBinContent(8,0.7715192);
   hnueCCinFV_stack_10->SetBinContent(9,1.386339);
   hnueCCinFV_stack_10->SetBinContent(11,0.9823625);
   hnueCCinFV_stack_10->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(15,0.1970832);
   hnueCCinFV_stack_10->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_10->SetBinContent(17,0.8415501);
   hnueCCinFV_stack_10->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(25,10.53934);
   hnueCCinFV_stack_10->SetBinError(2,0.1950249);
   hnueCCinFV_stack_10->SetBinError(3,0.2556436);
   hnueCCinFV_stack_10->SetBinError(4,0.3132948);
   hnueCCinFV_stack_10->SetBinError(5,0.4394482);
   hnueCCinFV_stack_10->SetBinError(6,0.5410961);
   hnueCCinFV_stack_10->SetBinError(7,0.8265606);
   hnueCCinFV_stack_10->SetBinError(8,0.4576759);
   hnueCCinFV_stack_10->SetBinError(9,0.7176052);
   hnueCCinFV_stack_10->SetBinError(11,0.5051484);
   hnueCCinFV_stack_10->SetBinError(13,0.2781975);
   hnueCCinFV_stack_10->SetBinError(15,0.1967157);
   hnueCCinFV_stack_10->SetBinError(16,0.3921167);
   hnueCCinFV_stack_10->SetBinError(17,0.4913333);
   hnueCCinFV_stack_10->SetBinError(18,0.1950249);
   hnueCCinFV_stack_10->SetBinError(25,2.423815);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__5->SetBinContent(1,13.49288);
   hmcerror__5->SetBinContent(2,55.56565);
   hmcerror__5->SetBinContent(3,164.7879);
   hmcerror__5->SetBinContent(4,290.402);
   hmcerror__5->SetBinContent(5,408.5544);
   hmcerror__5->SetBinContent(6,403.0616);
   hmcerror__5->SetBinContent(7,388.2067);
   hmcerror__5->SetBinContent(8,305.3458);
   hmcerror__5->SetBinContent(9,235.4919);
   hmcerror__5->SetBinContent(10,197.417);
   hmcerror__5->SetBinContent(11,176.0713);
   hmcerror__5->SetBinContent(12,139.7637);
   hmcerror__5->SetBinContent(13,113.1238);
   hmcerror__5->SetBinContent(14,98.91016);
   hmcerror__5->SetBinContent(15,71.32637);
   hmcerror__5->SetBinContent(16,62.7793);
   hmcerror__5->SetBinContent(17,53.50198);
   hmcerror__5->SetBinContent(18,38.61963);
   hmcerror__5->SetBinContent(19,33.77169);
   hmcerror__5->SetBinContent(20,23.02129);
   hmcerror__5->SetBinContent(21,17.82873);
   hmcerror__5->SetBinContent(22,14.40819);
   hmcerror__5->SetBinContent(23,14.27664);
   hmcerror__5->SetBinContent(24,11.48054);
   hmcerror__5->SetBinContent(25,112.388);
   hmcerror__5->SetBinError(1,4.501914);
   hmcerror__5->SetBinError(2,12.69794);
   hmcerror__5->SetBinError(3,32.16357);
   hmcerror__5->SetBinError(4,60.93666);
   hmcerror__5->SetBinError(5,87.31527);
   hmcerror__5->SetBinError(6,89.69292);
   hmcerror__5->SetBinError(7,94.55948);
   hmcerror__5->SetBinError(8,75.42795);
   hmcerror__5->SetBinError(9,63.91211);
   hmcerror__5->SetBinError(10,54.57595);
   hmcerror__5->SetBinError(11,45.18833);
   hmcerror__5->SetBinError(12,38.92765);
   hmcerror__5->SetBinError(13,30.24273);
   hmcerror__5->SetBinError(14,26.81481);
   hmcerror__5->SetBinError(15,22.40834);
   hmcerror__5->SetBinError(16,16.98049);
   hmcerror__5->SetBinError(17,17.13046);
   hmcerror__5->SetBinError(18,15.31705);
   hmcerror__5->SetBinError(19,10.15663);
   hmcerror__5->SetBinError(20,7.067629);
   hmcerror__5->SetBinError(21,5.427977);
   hmcerror__5->SetBinError(22,5.993306);
   hmcerror__5->SetBinError(23,5.855298);
   hmcerror__5->SetBinError(24,4.3026);
   hmcerror__5->SetBinError(25,33.48887);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3005[24] = {
   10,
   45,
   113,
   226,
   324,
   334,
   297,
   228,
   166,
   163,
   123,
   111,
   78,
   62,
   50,
   48,
   35,
   27,
   29,
   19,
   19,
   14,
   15,
   4};
   Double_t _felx3005[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3005[24] = {
   3.34883,
   6.8416,
   10.63015,
   15.0333,
   18,
   18.27567,
   17.23369,
   15.09967,
   12.8841,
   12.76715,
   11.09054,
   10.53565,
   8.9562,
   8.0018,
   7.2025,
   7.0604,
   6.0548,
   5.3414,
   5.5285,
   4.5151,
   4.5151,
   3.9102,
   4.0385,
   2.29683};
   Double_t _fehx3005[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3005[24] = {
   3.1179,
   6.637,
   10.63015,
   15.0333,
   18,
   18.27567,
   17.23369,
   15.09967,
   12.8841,
   12.76715,
   11.09054,
   10.53565,
   8.7542,
   7.7989,
   6.9985,
   6.8561,
   5.8483,
   5.1322,
   5.3201,
   4.3011,
   4.3011,
   3.6898,
   3.8197,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,660);
   Graph_Graph3005->SetMinimum(1.532853);
   Graph_Graph3005->SetMaximum(387.3329);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2540.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 80.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 268.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 212.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1723.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 539.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 152.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 324.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 9.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3006[24] = {
   0.3336511,
   0.2285213,
   0.1951816,
   0.2098355,
   0.2137176,
   0.2225291,
   0.2435802,
   0.2470247,
   0.2713983,
   0.2764501,
   0.2566479,
   0.2785248,
   0.267342,
   0.2711026,
   0.3141663,
   0.2704791,
   0.3201837,
   0.3966131,
   0.300744,
   0.3070041,
   0.3044511,
   0.4159651,
   0.4101314,
   0.3747731};
   Double_t _fehx3006[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3006[24] = {
   0.3336511,
   0.2285213,
   0.1951816,
   0.2098355,
   0.2137176,
   0.2225291,
   0.2435802,
   0.2470247,
   0.2713983,
   0.2764501,
   0.2566479,
   0.2785248,
   0.267342,
   0.2711026,
   0.3141663,
   0.2704791,
   0.3201837,
   0.3966131,
   0.300744,
   0.3070041,
   0.3044511,
   0.4159651,
   0.4101314,
   0.3747731};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,660);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3007[24] = {
   0.2156175,
   0.1807769,
   0.1815758,
   0.206295,
   0.2099746,
   0.2146085,
   0.2305009,
   0.2279758,
   0.2561057,
   0.2524937,
   0.240161,
   0.2332799,
   0.2481381,
   0.2228153,
   0.2502305,
   0.2210508,
   0.2228953,
   0.2559212,
   0.2585924,
   0.2583684,
   0.2410613,
   0.2572396,
   0.2726874,
   0.2827506};
   Double_t _fehx3007[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3007[24] = {
   0.2156175,
   0.1807769,
   0.1815758,
   0.206295,
   0.2099746,
   0.2146085,
   0.2305009,
   0.2279758,
   0.2561057,
   0.2524937,
   0.240161,
   0.2332799,
   0.2481381,
   0.2228153,
   0.2502305,
   0.2210508,
   0.2228953,
   0.2559212,
   0.2585924,
   0.2583684,
   0.2410613,
   0.2572396,
   0.2726874,
   0.2827506};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,660);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3008[24] = {
   0.7411318,
   0.8098529,
   0.6857298,
   0.7782315,
   0.79304,
   0.8286575,
   0.7650564,
   0.7466943,
   0.7049075,
   0.8256633,
   0.6985806,
   0.7941977,
   0.6895102,
   0.6268314,
   0.701003,
   0.7645832,
   0.6541814,
   0.6991263,
   0.8587073,
   0.8253231,
   1.065696,
   0.9716694,
   1.050668,
   0.3484155};
   Double_t _felx3008[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3008[24] = {
   0.2481925,
   0.1231264,
   0.06450803,
   0.05176719,
   0.04405778,
   0.04534212,
   0.04439307,
   0.04945104,
   0.05471143,
   0.06467094,
   0.06298889,
   0.07538191,
   0.07917169,
   0.08089967,
   0.1009795,
   0.1124638,
   0.1131696,
   0.1383079,
   0.1637022,
   0.1961272,
   0.2532486,
   0.2713873,
   0.2828747,
   0.2000628};
   Double_t _fehx3008[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3008[24] = {
   0.2310775,
   0.1194443,
   0.06450803,
   0.05176719,
   0.04405778,
   0.04534212,
   0.04439307,
   0.04945104,
   0.05471143,
   0.06467094,
   0.06298889,
   0.07538191,
   0.07738603,
   0.07884832,
   0.09811939,
   0.1092096,
   0.10931,
   0.132891,
   0.1575313,
   0.1868314,
   0.2412455,
   0.2560904,
   0.267549,
   0.1726277};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,660);
   Graph_Graph3008->SetMinimum(0.03136635);
   Graph_Graph3008->SetMaximum(1.435203);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
