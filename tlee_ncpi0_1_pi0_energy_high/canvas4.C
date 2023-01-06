#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 18:31:53 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-92.30769,-11.9,676.9231,1315.889);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__10->SetBinContent(1,12.52116);
   hmc__10->SetBinContent(2,67.50583);
   hmc__10->SetBinContent(3,212.3841);
   hmc__10->SetBinContent(4,410.8813);
   hmc__10->SetBinContent(5,501.5355);
   hmc__10->SetBinContent(6,496.5698);
   hmc__10->SetBinContent(7,409.5501);
   hmc__10->SetBinContent(8,329.8733);
   hmc__10->SetBinContent(9,268.1112);
   hmc__10->SetBinContent(10,204.9853);
   hmc__10->SetBinContent(11,162.6528);
   hmc__10->SetBinContent(12,121.5667);
   hmc__10->SetBinContent(13,85.96989);
   hmc__10->SetBinContent(14,76.50434);
   hmc__10->SetBinContent(15,61.08728);
   hmc__10->SetBinContent(16,55.04231);
   hmc__10->SetBinContent(17,38.87683);
   hmc__10->SetBinContent(18,30.68961);
   hmc__10->SetBinContent(19,25.26186);
   hmc__10->SetBinContent(20,22.13591);
   hmc__10->SetBinContent(21,135.7545);
   hmc__10->SetBinError(1,9.74277);
   hmc__10->SetBinError(2,22.77012);
   hmc__10->SetBinError(3,62.77068);
   hmc__10->SetBinError(4,101.1353);
   hmc__10->SetBinError(5,112.6055);
   hmc__10->SetBinError(6,115.8202);
   hmc__10->SetBinError(7,99.79437);
   hmc__10->SetBinError(8,83.66013);
   hmc__10->SetBinError(9,67.65555);
   hmc__10->SetBinError(10,51.48073);
   hmc__10->SetBinError(11,48.80326);
   hmc__10->SetBinError(12,36.85426);
   hmc__10->SetBinError(13,35.18254);
   hmc__10->SetBinError(14,31.27429);
   hmc__10->SetBinError(15,22.87296);
   hmc__10->SetBinError(16,21.26232);
   hmc__10->SetBinError(17,14.59572);
   hmc__10->SetBinError(18,14.82047);
   hmc__10->SetBinError(19,12.01659);
   hmc__10->SetBinError(20,10.37842);
   hmc__10->SetBinError(21,46.74466);
   hmc__10->SetMinimum(-11.9);
   hmc__10->SetMaximum(1249.5);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,600);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(526.6123);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.564005);
   hbadmatch_stack_1->SetBinContent(2,7.214934);
   hbadmatch_stack_1->SetBinContent(3,10.2455);
   hbadmatch_stack_1->SetBinContent(4,13.38571);
   hbadmatch_stack_1->SetBinContent(5,15.81741);
   hbadmatch_stack_1->SetBinContent(6,14.9304);
   hbadmatch_stack_1->SetBinContent(7,13.93107);
   hbadmatch_stack_1->SetBinContent(8,6.329412);
   hbadmatch_stack_1->SetBinContent(9,1.970219);
   hbadmatch_stack_1->SetBinContent(10,5.156079);
   hbadmatch_stack_1->SetBinContent(11,1.804028);
   hbadmatch_stack_1->SetBinContent(12,0.3197311);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.3252394);
   hbadmatch_stack_1->SetBinContent(15,0.7100622);
   hbadmatch_stack_1->SetBinContent(16,0.6399668);
   hbadmatch_stack_1->SetBinContent(17,0.4241887);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.592916);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,1.294089);
   hbadmatch_stack_1->SetBinError(1,1.128827);
   hbadmatch_stack_1->SetBinError(2,1.600943);
   hbadmatch_stack_1->SetBinError(3,1.675122);
   hbadmatch_stack_1->SetBinError(4,1.815475);
   hbadmatch_stack_1->SetBinError(5,2.043035);
   hbadmatch_stack_1->SetBinError(6,2.189272);
   hbadmatch_stack_1->SetBinError(7,2.624537);
   hbadmatch_stack_1->SetBinError(8,1.35727);
   hbadmatch_stack_1->SetBinError(9,0.6700737);
   hbadmatch_stack_1->SetBinError(10,1.956263);
   hbadmatch_stack_1->SetBinError(11,0.6741931);
   hbadmatch_stack_1->SetBinError(12,0.2322905);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.2349795);
   hbadmatch_stack_1->SetBinError(15,0.3612073);
   hbadmatch_stack_1->SetBinError(16,0.484942);
   hbadmatch_stack_1->SetBinError(17,0.3007342);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.4423482);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.6903937);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,4.435048);
   hext_stack_2->SetBinContent(2,18.97718);
   hext_stack_2->SetBinContent(3,52.34797);
   hext_stack_2->SetBinContent(4,71.81232);
   hext_stack_2->SetBinContent(5,86.57498);
   hext_stack_2->SetBinContent(6,68.80493);
   hext_stack_2->SetBinContent(7,52.78764);
   hext_stack_2->SetBinContent(8,27.93502);
   hext_stack_2->SetBinContent(9,31.37811);
   hext_stack_2->SetBinContent(10,21.52487);
   hext_stack_2->SetBinContent(11,11.16242);
   hext_stack_2->SetBinContent(12,8.421607);
   hext_stack_2->SetBinContent(13,3.15182);
   hext_stack_2->SetBinContent(14,3.076798);
   hext_stack_2->SetBinContent(15,6.703058);
   hext_stack_2->SetBinContent(16,2.185808);
   hext_stack_2->SetBinContent(17,1.544194);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,2.599588);
   hext_stack_2->SetBinError(1,1.533985);
   hext_stack_2->SetBinError(2,2.79987);
   hext_stack_2->SetBinError(3,4.875899);
   hext_stack_2->SetBinError(4,5.600681);
   hext_stack_2->SetBinError(5,6.337457);
   hext_stack_2->SetBinError(6,5.688892);
   hext_stack_2->SetBinError(7,4.959883);
   hext_stack_2->SetBinError(8,3.454407);
   hext_stack_2->SetBinError(9,3.773277);
   hext_stack_2->SetBinError(10,3.123015);
   hext_stack_2->SetBinError(11,2.19983);
   hext_stack_2->SetBinError(12,1.89998);
   hext_stack_2->SetBinError(13,1.23684);
   hext_stack_2->SetBinError(14,1.126269);
   hext_stack_2->SetBinError(15,1.850964);
   hext_stack_2->SetBinError(16,1.006415);
   hext_stack_2->SetBinError(17,0.7753719);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.9884288);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.5841489);
   hdirt_stack_3->SetBinContent(2,2.699793);
   hdirt_stack_3->SetBinContent(3,8.561328);
   hdirt_stack_3->SetBinContent(4,8.205194);
   hdirt_stack_3->SetBinContent(5,12.31377);
   hdirt_stack_3->SetBinContent(6,8.605966);
   hdirt_stack_3->SetBinContent(7,3.1013);
   hdirt_stack_3->SetBinContent(8,2.743913);
   hdirt_stack_3->SetBinContent(9,1.640887);
   hdirt_stack_3->SetBinContent(10,2.303302);
   hdirt_stack_3->SetBinContent(11,0.7458355);
   hdirt_stack_3->SetBinContent(12,1.681556);
   hdirt_stack_3->SetBinContent(13,1.251623);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,1.730123);
   hdirt_stack_3->SetBinContent(16,0.746255);
   hdirt_stack_3->SetBinError(1,0.4258231);
   hdirt_stack_3->SetBinError(2,0.8345938);
   hdirt_stack_3->SetBinError(3,1.504003);
   hdirt_stack_3->SetBinError(4,1.465901);
   hdirt_stack_3->SetBinError(5,1.830819);
   hdirt_stack_3->SetBinError(6,1.610336);
   hdirt_stack_3->SetBinError(7,0.8314634);
   hdirt_stack_3->SetBinError(8,0.9106913);
   hdirt_stack_3->SetBinError(9,0.692948);
   hdirt_stack_3->SetBinError(10,0.7842036);
   hdirt_stack_3->SetBinError(11,0.3802618);
   hdirt_stack_3->SetBinError(12,0.7289637);
   hdirt_stack_3->SetBinError(13,0.9559066);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,1.17734);
   hdirt_stack_3->SetBinError(16,0.5299905);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,2.445263);
   houtFV_stack_4->SetBinContent(2,13.48349);
   houtFV_stack_4->SetBinContent(3,39.75158);
   houtFV_stack_4->SetBinContent(4,70.64323);
   houtFV_stack_4->SetBinContent(5,75.70814);
   houtFV_stack_4->SetBinContent(6,71.6254);
   houtFV_stack_4->SetBinContent(7,50.68425);
   houtFV_stack_4->SetBinContent(8,37.39137);
   houtFV_stack_4->SetBinContent(9,25.63693);
   houtFV_stack_4->SetBinContent(10,23.17567);
   houtFV_stack_4->SetBinContent(11,18.59472);
   houtFV_stack_4->SetBinContent(12,9.50659);
   houtFV_stack_4->SetBinContent(13,7.23315);
   houtFV_stack_4->SetBinContent(14,5.643697);
   houtFV_stack_4->SetBinContent(15,4.721765);
   houtFV_stack_4->SetBinContent(16,6.02041);
   houtFV_stack_4->SetBinContent(17,2.363125);
   houtFV_stack_4->SetBinContent(18,1.847419);
   houtFV_stack_4->SetBinContent(19,3.501084);
   houtFV_stack_4->SetBinContent(20,1.316992);
   houtFV_stack_4->SetBinContent(21,5.448112);
   houtFV_stack_4->SetBinError(1,0.7872867);
   houtFV_stack_4->SetBinError(2,1.815396);
   houtFV_stack_4->SetBinError(3,3.261406);
   houtFV_stack_4->SetBinError(4,4.25025);
   houtFV_stack_4->SetBinError(5,4.507846);
   houtFV_stack_4->SetBinError(6,4.240984);
   houtFV_stack_4->SetBinError(7,3.579732);
   houtFV_stack_4->SetBinError(8,3.111661);
   houtFV_stack_4->SetBinError(9,2.514474);
   houtFV_stack_4->SetBinError(10,2.440565);
   houtFV_stack_4->SetBinError(11,2.132734);
   houtFV_stack_4->SetBinError(12,1.512491);
   houtFV_stack_4->SetBinError(13,1.273441);
   houtFV_stack_4->SetBinError(14,1.139756);
   houtFV_stack_4->SetBinError(15,1.058115);
   houtFV_stack_4->SetBinError(16,1.236304);
   houtFV_stack_4->SetBinError(17,0.7441549);
   houtFV_stack_4->SetBinError(18,0.7207219);
   houtFV_stack_4->SetBinError(19,0.9743716);
   houtFV_stack_4->SetBinError(20,0.5536755);
   houtFV_stack_4->SetBinError(21,1.224981);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.3794058);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.654668);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.718213);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.168541);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.49457);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.25936);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.58607);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.84567);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.242091);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.933376);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.716493);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.726264);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.944);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.441612);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.200572);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.196872);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.075618);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.284136);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.27734);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,11.85474);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2223618);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4521856);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8544659);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.05106);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.389407);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.120116);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.167041);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.056242);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.213121);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9398387);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6888657);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.974588);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.789578);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3123126);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5336044);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5305526);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3203002);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5137069);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4154559);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.429235);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2924129);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7071375);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8038417);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.095353);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6536441);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.080167);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3827297);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05344805);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01491798);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4911657);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2567351);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05879373);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.07411882);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2129437);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7676594);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1075481);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1729564);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2993874);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3289582);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2084947);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3488844);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1446069);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03424265);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01491798);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2252779);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1337749);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03668827);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04914633);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1388408);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3761881);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.439612);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.985754);
   hNCpi0inFVres_stack_7->SetBinContent(3,49.22348);
   hNCpi0inFVres_stack_7->SetBinContent(4,126.9578);
   hNCpi0inFVres_stack_7->SetBinContent(5,163.746);
   hNCpi0inFVres_stack_7->SetBinContent(6,159.149);
   hNCpi0inFVres_stack_7->SetBinContent(7,138.1233);
   hNCpi0inFVres_stack_7->SetBinContent(8,120.4355);
   hNCpi0inFVres_stack_7->SetBinContent(9,89.10813);
   hNCpi0inFVres_stack_7->SetBinContent(10,62.94099);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.9646);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.1568);
   hNCpi0inFVres_stack_7->SetBinContent(13,24.11374);
   hNCpi0inFVres_stack_7->SetBinContent(14,22.13961);
   hNCpi0inFVres_stack_7->SetBinContent(15,15.45064);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.97286);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.3369);
   hNCpi0inFVres_stack_7->SetBinContent(18,10.07771);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.669118);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.718918);
   hNCpi0inFVres_stack_7->SetBinContent(21,30.78337);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4390923);
   hNCpi0inFVres_stack_7->SetBinError(2,1.129671);
   hNCpi0inFVres_stack_7->SetBinError(3,2.33405);
   hNCpi0inFVres_stack_7->SetBinError(4,3.983542);
   hNCpi0inFVres_stack_7->SetBinError(5,4.429219);
   hNCpi0inFVres_stack_7->SetBinError(6,4.300194);
   hNCpi0inFVres_stack_7->SetBinError(7,3.983068);
   hNCpi0inFVres_stack_7->SetBinError(8,3.781357);
   hNCpi0inFVres_stack_7->SetBinError(9,3.165714);
   hNCpi0inFVres_stack_7->SetBinError(10,2.561121);
   hNCpi0inFVres_stack_7->SetBinError(11,2.404668);
   hNCpi0inFVres_stack_7->SetBinError(12,1.956445);
   hNCpi0inFVres_stack_7->SetBinError(13,1.579218);
   hNCpi0inFVres_stack_7->SetBinError(14,1.540124);
   hNCpi0inFVres_stack_7->SetBinError(15,1.348911);
   hNCpi0inFVres_stack_7->SetBinError(16,1.52415);
   hNCpi0inFVres_stack_7->SetBinError(17,1.259153);
   hNCpi0inFVres_stack_7->SetBinError(18,1.284483);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8315679);
   hNCpi0inFVres_stack_7->SetBinError(20,1.096548);
   hNCpi0inFVres_stack_7->SetBinError(21,2.282483);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6328939);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.978874);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.68933);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.44834);
   hNCpi0inFVdis_stack_8->SetBinContent(5,28.06885);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.00279);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.25165);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.77617);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.24726);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.11383);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.39091);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.03884);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.231905);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.229814);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.087113);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.996913);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.53565);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.475207);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.98307);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.188109);
   hNCpi0inFVdis_stack_8->SetBinContent(21,20.46224);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3629452);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4208007);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.148531);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.737451);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.759227);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.70138);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.626149);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.412371);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.327442);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.08603);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.022897);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.112575);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9540586);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8522675);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7532073);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9008883);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8502735);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7577505);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6261953);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6852762);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.940177);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1599382);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03464893);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.08199448);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.0245005);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(2,4.448141);
   hCCpi0inFV_stack_10->SetBinContent(3,20.33693);
   hCCpi0inFV_stack_10->SetBinContent(4,42.80922);
   hCCpi0inFV_stack_10->SetBinContent(5,53.11324);
   hCCpi0inFV_stack_10->SetBinContent(6,65.77501);
   hCCpi0inFV_stack_10->SetBinContent(7,65.44543);
   hCCpi0inFV_stack_10->SetBinContent(8,55.87113);
   hCCpi0inFV_stack_10->SetBinContent(9,54.32109);
   hCCpi0inFV_stack_10->SetBinContent(10,40.64722);
   hCCpi0inFV_stack_10->SetBinContent(11,35.31425);
   hCCpi0inFV_stack_10->SetBinContent(12,29.00475);
   hCCpi0inFV_stack_10->SetBinContent(13,21.47183);
   hCCpi0inFV_stack_10->SetBinContent(14,16.22683);
   hCCpi0inFV_stack_10->SetBinContent(15,12.55925);
   hCCpi0inFV_stack_10->SetBinContent(16,11.11114);
   hCCpi0inFV_stack_10->SetBinContent(17,9.392643);
   hCCpi0inFV_stack_10->SetBinContent(18,6.252154);
   hCCpi0inFV_stack_10->SetBinContent(19,5.231622);
   hCCpi0inFV_stack_10->SetBinContent(20,3.96112);
   hCCpi0inFV_stack_10->SetBinContent(21,25.1016);
   hCCpi0inFV_stack_10->SetBinError(1,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(2,1.057219);
   hCCpi0inFV_stack_10->SetBinError(3,2.270555);
   hCCpi0inFV_stack_10->SetBinError(4,3.255204);
   hCCpi0inFV_stack_10->SetBinError(5,3.641918);
   hCCpi0inFV_stack_10->SetBinError(6,4.095989);
   hCCpi0inFV_stack_10->SetBinError(7,4.045365);
   hCCpi0inFV_stack_10->SetBinError(8,3.740076);
   hCCpi0inFV_stack_10->SetBinError(9,3.714036);
   hCCpi0inFV_stack_10->SetBinError(10,3.173388);
   hCCpi0inFV_stack_10->SetBinError(11,3.009249);
   hCCpi0inFV_stack_10->SetBinError(12,2.722622);
   hCCpi0inFV_stack_10->SetBinError(13,2.289635);
   hCCpi0inFV_stack_10->SetBinError(14,2.006699);
   hCCpi0inFV_stack_10->SetBinError(15,1.788578);
   hCCpi0inFV_stack_10->SetBinError(16,1.679604);
   hCCpi0inFV_stack_10->SetBinError(17,1.515863);
   hCCpi0inFV_stack_10->SetBinError(18,1.272139);
   hCCpi0inFV_stack_10->SetBinError(19,1.127464);
   hCCpi0inFV_stack_10->SetBinError(20,0.9610635);
   hCCpi0inFV_stack_10->SetBinError(21,2.528122);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,0.3900497);
   hNCinFV_stack_11->SetBinContent(2,2.247316);
   hNCinFV_stack_11->SetBinContent(3,8.298123);
   hNCinFV_stack_11->SetBinContent(4,19.15409);
   hNCinFV_stack_11->SetBinContent(5,21.97995);
   hNCinFV_stack_11->SetBinContent(6,28.97843);
   hNCinFV_stack_11->SetBinContent(7,22.07987);
   hNCinFV_stack_11->SetBinContent(8,25.08531);
   hNCinFV_stack_11->SetBinContent(9,19.39945);
   hNCinFV_stack_11->SetBinContent(10,11.24452);
   hNCinFV_stack_11->SetBinContent(11,10.63768);
   hNCinFV_stack_11->SetBinContent(12,8.622009);
   hNCinFV_stack_11->SetBinContent(13,7.252071);
   hNCinFV_stack_11->SetBinContent(14,9.880514);
   hNCinFV_stack_11->SetBinContent(15,6.675733);
   hNCinFV_stack_11->SetBinContent(16,5.358492);
   hNCinFV_stack_11->SetBinContent(17,2.756187);
   hNCinFV_stack_11->SetBinContent(18,5.114999);
   hNCinFV_stack_11->SetBinContent(19,1.764087);
   hNCinFV_stack_11->SetBinContent(20,1.759847);
   hNCinFV_stack_11->SetBinContent(21,13.14706);
   hNCinFV_stack_11->SetBinError(1,0.2758068);
   hNCinFV_stack_11->SetBinError(2,0.7337357);
   hNCinFV_stack_11->SetBinError(3,1.463776);
   hNCinFV_stack_11->SetBinError(4,2.200796);
   hNCinFV_stack_11->SetBinError(5,2.272341);
   hNCinFV_stack_11->SetBinError(6,2.719445);
   hNCinFV_stack_11->SetBinError(7,2.359533);
   hNCinFV_stack_11->SetBinError(8,2.673506);
   hNCinFV_stack_11->SetBinError(9,2.50746);
   hNCinFV_stack_11->SetBinError(10,1.697593);
   hNCinFV_stack_11->SetBinError(11,1.694538);
   hNCinFV_stack_11->SetBinError(12,1.553533);
   hNCinFV_stack_11->SetBinError(13,1.454103);
   hNCinFV_stack_11->SetBinError(14,1.941528);
   hNCinFV_stack_11->SetBinError(15,1.3437);
   hNCinFV_stack_11->SetBinError(16,1.171825);
   hNCinFV_stack_11->SetBinError(17,0.8305288);
   hNCinFV_stack_11->SetBinError(18,1.586841);
   hNCinFV_stack_11->SetBinError(19,0.7078247);
   hNCinFV_stack_11->SetBinError(20,0.7707614);
   hNCinFV_stack_11->SetBinError(21,2.171402);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinContent(2,5.657461);
   hnumuCCinFV_stack_12->SetBinContent(3,9.562018);
   hnumuCCinFV_stack_12->SetBinContent(4,24.98126);
   hnumuCCinFV_stack_12->SetBinContent(5,33.30431);
   hnumuCCinFV_stack_12->SetBinContent(6,36.79445);
   hnumuCCinFV_stack_12->SetBinContent(7,28.91724);
   hnumuCCinFV_stack_12->SetBinContent(8,23.45634);
   hnumuCCinFV_stack_12->SetBinContent(9,20.64711);
   hnumuCCinFV_stack_12->SetBinContent(10,14.37447);
   hnumuCCinFV_stack_12->SetBinContent(11,13.28878);
   hnumuCCinFV_stack_12->SetBinContent(12,11.41042);
   hnumuCCinFV_stack_12->SetBinContent(13,8.686601);
   hnumuCCinFV_stack_12->SetBinContent(14,7.250785);
   hnumuCCinFV_stack_12->SetBinContent(15,5.16724);
   hnumuCCinFV_stack_12->SetBinContent(16,4.172896);
   hnumuCCinFV_stack_12->SetBinContent(17,2.507997);
   hnumuCCinFV_stack_12->SetBinContent(18,1.52047);
   hnumuCCinFV_stack_12->SetBinContent(19,1.660551);
   hnumuCCinFV_stack_12->SetBinContent(20,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(21,11.20713);
   hnumuCCinFV_stack_12->SetBinError(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinError(2,1.786113);
   hnumuCCinFV_stack_12->SetBinError(3,1.816852);
   hnumuCCinFV_stack_12->SetBinError(4,3.051787);
   hnumuCCinFV_stack_12->SetBinError(5,3.795778);
   hnumuCCinFV_stack_12->SetBinError(6,3.861395);
   hnumuCCinFV_stack_12->SetBinError(7,3.304907);
   hnumuCCinFV_stack_12->SetBinError(8,2.633969);
   hnumuCCinFV_stack_12->SetBinError(9,2.385596);
   hnumuCCinFV_stack_12->SetBinError(10,2.070089);
   hnumuCCinFV_stack_12->SetBinError(11,1.920404);
   hnumuCCinFV_stack_12->SetBinError(12,1.760606);
   hnumuCCinFV_stack_12->SetBinError(13,1.393839);
   hnumuCCinFV_stack_12->SetBinError(14,1.329783);
   hnumuCCinFV_stack_12->SetBinError(15,1.194852);
   hnumuCCinFV_stack_12->SetBinError(16,1.01472);
   hnumuCCinFV_stack_12->SetBinError(17,0.7903643);
   hnumuCCinFV_stack_12->SetBinError(18,0.5898325);
   hnumuCCinFV_stack_12->SetBinError(19,0.650847);
   hnumuCCinFV_stack_12->SetBinError(20,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(21,1.750644);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,1.405116);
   hnueCCinFV_stack_13->SetBinContent(4,2.058754);
   hnueCCinFV_stack_13->SetBinContent(5,1.905048);
   hnueCCinFV_stack_13->SetBinContent(6,3.15363);
   hnueCCinFV_stack_13->SetBinContent(7,2.315365);
   hnueCCinFV_stack_13->SetBinContent(8,1.182881);
   hnueCCinFV_stack_13->SetBinContent(9,0.5335968);
   hnueCCinFV_stack_13->SetBinContent(10,2.079783);
   hnueCCinFV_stack_13->SetBinContent(11,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.3974268);
   hnueCCinFV_stack_13->SetBinContent(14,0.5901788);
   hnueCCinFV_stack_13->SetBinContent(15,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(16,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(17,0.7817899);
   hnueCCinFV_stack_13->SetBinContent(18,0.2016043);
   hnueCCinFV_stack_13->SetBinContent(19,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(21,13.08889);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.7450537);
   hnueCCinFV_stack_13->SetBinError(4,1.332719);
   hnueCCinFV_stack_13->SetBinError(5,0.8945168);
   hnueCCinFV_stack_13->SetBinError(6,0.9479784);
   hnueCCinFV_stack_13->SetBinError(7,0.9075575);
   hnueCCinFV_stack_13->SetBinError(8,0.5438668);
   hnueCCinFV_stack_13->SetBinError(9,0.3901103);
   hnueCCinFV_stack_13->SetBinError(10,1.235543);
   hnueCCinFV_stack_13->SetBinError(11,0.4937343);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.2782262);
   hnueCCinFV_stack_13->SetBinError(14,0.340721);
   hnueCCinFV_stack_13->SetBinError(15,0.438694);
   hnueCCinFV_stack_13->SetBinError(16,0.4670934);
   hnueCCinFV_stack_13->SetBinError(17,0.3908977);
   hnueCCinFV_stack_13->SetBinError(18,0.1967761);
   hnueCCinFV_stack_13->SetBinError(19,0.3963213);
   hnueCCinFV_stack_13->SetBinError(21,2.56528);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__11->SetBinContent(1,12.52116);
   hmcerror__11->SetBinContent(2,67.50583);
   hmcerror__11->SetBinContent(3,212.3841);
   hmcerror__11->SetBinContent(4,410.8813);
   hmcerror__11->SetBinContent(5,501.5355);
   hmcerror__11->SetBinContent(6,496.5698);
   hmcerror__11->SetBinContent(7,409.5501);
   hmcerror__11->SetBinContent(8,329.8733);
   hmcerror__11->SetBinContent(9,268.1112);
   hmcerror__11->SetBinContent(10,204.9853);
   hmcerror__11->SetBinContent(11,162.6528);
   hmcerror__11->SetBinContent(12,121.5667);
   hmcerror__11->SetBinContent(13,85.96989);
   hmcerror__11->SetBinContent(14,76.50434);
   hmcerror__11->SetBinContent(15,61.08728);
   hmcerror__11->SetBinContent(16,55.04231);
   hmcerror__11->SetBinContent(17,38.87683);
   hmcerror__11->SetBinContent(18,30.68961);
   hmcerror__11->SetBinContent(19,25.26186);
   hmcerror__11->SetBinContent(20,22.13591);
   hmcerror__11->SetBinContent(21,135.7545);
   hmcerror__11->SetBinError(1,9.74277);
   hmcerror__11->SetBinError(2,22.77012);
   hmcerror__11->SetBinError(3,62.77068);
   hmcerror__11->SetBinError(4,101.1353);
   hmcerror__11->SetBinError(5,112.6055);
   hmcerror__11->SetBinError(6,115.8202);
   hmcerror__11->SetBinError(7,99.79437);
   hmcerror__11->SetBinError(8,83.66013);
   hmcerror__11->SetBinError(9,67.65555);
   hmcerror__11->SetBinError(10,51.48073);
   hmcerror__11->SetBinError(11,48.80326);
   hmcerror__11->SetBinError(12,36.85426);
   hmcerror__11->SetBinError(13,35.18254);
   hmcerror__11->SetBinError(14,31.27429);
   hmcerror__11->SetBinError(15,22.87296);
   hmcerror__11->SetBinError(16,21.26232);
   hmcerror__11->SetBinError(17,14.59572);
   hmcerror__11->SetBinError(18,14.82047);
   hmcerror__11->SetBinError(19,12.01659);
   hmcerror__11->SetBinError(20,10.37842);
   hmcerror__11->SetBinError(21,46.74466);
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
   
   Double_t _fx3013[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3013[20] = {
   6,
   66,
   249,
   472,
   595,
   507,
   417,
   347,
   254,
   222,
   141,
   86,
   90,
   78,
   66,
   46,
   22,
   25,
   15,
   23};
   Double_t _felx3013[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3013[20] = {
   2.67925,
   8.2509,
   15.77973,
   21.72556,
   24.39262,
   22.51666,
   20.42058,
   18.62794,
   15.93738,
   14.89966,
   11.87434,
   9.3967,
   9.6093,
   8.9562,
   8.2509,
   6.9153,
   4.8417,
   5.1474,
   4.0385,
   4.9457};
   Double_t _fehx3013[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3013[20] = {
   2.41858,
   8.0483,
   15.77973,
   21.72556,
   24.39262,
   22.51666,
   20.42058,
   18.62794,
   15.93738,
   14.89966,
   11.87434,
   9.1951,
   9.4079,
   8.7542,
   8.0483,
   6.7108,
   4.6299,
   4.9374,
   3.8197,
   4.7346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,660);
   Graph_Graph3013->SetMinimum(2.988675);
   Graph_Graph3013->SetMaximum(680.9998);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.04#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3727.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 96.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 471.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1123.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  217.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 554.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 218.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 255.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3014[20] = {
   0.7781042,
   0.337306,
   0.2955526,
   0.2461424,
   0.2245215,
   0.2332405,
   0.2436683,
   0.2536129,
   0.2523414,
   0.2511435,
   0.3000455,
   0.3031609,
   0.4092426,
   0.408791,
   0.3744307,
   0.3862905,
   0.375435,
   0.482915,
   0.4756812,
   0.46885};
   Double_t _fehx3014[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3014[20] = {
   0.7781042,
   0.337306,
   0.2955526,
   0.2461424,
   0.2245215,
   0.2332405,
   0.2436683,
   0.2536129,
   0.2523414,
   0.2511435,
   0.3000455,
   0.3031609,
   0.4092426,
   0.408791,
   0.3744307,
   0.3862905,
   0.375435,
   0.482915,
   0.4756812,
   0.46885};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,660);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3015[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3015[20] = {
   0.2746793,
   0.1629783,
   0.1639209,
   0.1869263,
   0.1973483,
   0.2031426,
   0.2145878,
   0.2187096,
   0.2218941,
   0.2249985,
   0.2515148,
   0.2640844,
   0.3273055,
   0.3059952,
   0.2767126,
   0.2514502,
   0.2661907,
   0.2800631,
   0.2633819,
   0.2948756};
   Double_t _fehx3015[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3015[20] = {
   0.2746793,
   0.1629783,
   0.1639209,
   0.1869263,
   0.1973483,
   0.2031426,
   0.2145878,
   0.2187096,
   0.2218941,
   0.2249985,
   0.2515148,
   0.2640844,
   0.3273055,
   0.3059952,
   0.2767126,
   0.2514502,
   0.2661907,
   0.2800631,
   0.2633819,
   0.2948756};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,660);
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
   
   Double_t _fx3016[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3016[20] = {
   0.4791887,
   0.9776934,
   1.172404,
   1.14875,
   1.186357,
   1.021005,
   1.01819,
   1.051919,
   0.9473682,
   1.083004,
   0.8668769,
   0.7074308,
   1.046878,
   1.01955,
   1.080421,
   0.8357207,
   0.5658898,
   0.8146079,
   0.5937805,
   1.039036};
   Double_t _felx3016[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3016[20] = {
   0.2139777,
   0.122225,
   0.07429809,
   0.05287552,
   0.04863588,
   0.0453444,
   0.049861,
   0.05646997,
   0.05944317,
   0.07268649,
   0.07300421,
   0.07729668,
   0.1117752,
   0.1170679,
   0.1350674,
   0.1256361,
   0.1245395,
   0.1677245,
   0.1598655,
   0.2234243};
   Double_t _fehx3016[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3016[20] = {
   0.1931594,
   0.1192238,
   0.07429809,
   0.05287552,
   0.04863588,
   0.0453444,
   0.049861,
   0.05646997,
   0.05944317,
   0.07268649,
   0.07300421,
   0.07563833,
   0.1094325,
   0.1144275,
   0.1317508,
   0.1219207,
   0.1190915,
   0.1608818,
   0.1512042,
   0.2138878};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,660);
   Graph_Graph3016->SetMinimum(0.1664397);
   Graph_Graph3016->SetMaximum(1.351695);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
