#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Jan  9 23:11:09 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(-184.6154,-18.18,1353.846,2010.325);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,467.2345);
   hmc__10->SetBinContent(2,836.0874);
   hmc__10->SetBinContent(3,722.2231);
   hmc__10->SetBinContent(4,516.2472);
   hmc__10->SetBinContent(5,330.6457);
   hmc__10->SetBinContent(6,215.701);
   hmc__10->SetBinContent(7,130.5114);
   hmc__10->SetBinContent(8,82.19952);
   hmc__10->SetBinContent(9,72.69071);
   hmc__10->SetBinContent(10,42.31863);
   hmc__10->SetBinContent(11,37.35419);
   hmc__10->SetBinContent(12,27.79519);
   hmc__10->SetBinContent(13,248.451);
   hmc__10->SetBinError(1,109.34);
   hmc__10->SetBinError(2,182.8171);
   hmc__10->SetBinError(3,161.3201);
   hmc__10->SetBinError(4,129.5224);
   hmc__10->SetBinError(5,102.5367);
   hmc__10->SetBinError(6,54.61584);
   hmc__10->SetBinError(7,33.95028);
   hmc__10->SetBinError(8,24.00678);
   hmc__10->SetBinError(9,23.10163);
   hmc__10->SetBinError(10,15.42049);
   hmc__10->SetBinError(11,15.46632);
   hmc__10->SetBinError(12,11.9363);
   hmc__10->SetBinError(13,59.38253);
   hmc__10->SetMinimum(-18.18);
   hmc__10->SetMaximum(1908.9);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(877.8917);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,16.31315);
   hbadmatch_stack_1->SetBinContent(2,25.21469);
   hbadmatch_stack_1->SetBinContent(3,13.70422);
   hbadmatch_stack_1->SetBinContent(4,12.84457);
   hbadmatch_stack_1->SetBinContent(5,9.708137);
   hbadmatch_stack_1->SetBinContent(6,3.925388);
   hbadmatch_stack_1->SetBinContent(7,1.915367);
   hbadmatch_stack_1->SetBinContent(8,2.156163);
   hbadmatch_stack_1->SetBinContent(9,1.540876);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.398749);
   hbadmatch_stack_1->SetBinContent(12,1.474815);
   hbadmatch_stack_1->SetBinContent(13,7.192438);
   hbadmatch_stack_1->SetBinError(1,2.223469);
   hbadmatch_stack_1->SetBinError(2,3.153568);
   hbadmatch_stack_1->SetBinError(3,1.903129);
   hbadmatch_stack_1->SetBinError(4,2.409203);
   hbadmatch_stack_1->SetBinError(5,1.940885);
   hbadmatch_stack_1->SetBinError(6,0.9854276);
   hbadmatch_stack_1->SetBinError(7,0.7684902);
   hbadmatch_stack_1->SetBinError(8,0.7444141);
   hbadmatch_stack_1->SetBinError(9,0.6231436);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.7253409);
   hbadmatch_stack_1->SetBinError(12,0.6474879);
   hbadmatch_stack_1->SetBinError(13,1.505406);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,59.83387);
   hext_stack_2->SetBinContent(2,115.1936);
   hext_stack_2->SetBinContent(3,78.97659);
   hext_stack_2->SetBinContent(4,51.7063);
   hext_stack_2->SetBinContent(5,43.61192);
   hext_stack_2->SetBinContent(6,29.69987);
   hext_stack_2->SetBinContent(7,19.0522);
   hext_stack_2->SetBinContent(8,8.015008);
   hext_stack_2->SetBinContent(9,14.7037);
   hext_stack_2->SetBinContent(10,5.504803);
   hext_stack_2->SetBinContent(11,7.265242);
   hext_stack_2->SetBinContent(12,2.834603);
   hext_stack_2->SetBinContent(13,41.04704);
   hext_stack_2->SetBinError(1,5.27868);
   hext_stack_2->SetBinError(2,7.125876);
   hext_stack_2->SetBinError(3,5.917444);
   hext_stack_2->SetBinError(4,4.969218);
   hext_stack_2->SetBinError(5,4.418337);
   hext_stack_2->SetBinError(6,3.630824);
   hext_stack_2->SetBinError(7,2.846148);
   hext_stack_2->SetBinError(8,1.855964);
   hext_stack_2->SetBinError(9,2.696864);
   hext_stack_2->SetBinError(10,1.525286);
   hext_stack_2->SetBinError(11,1.855081);
   hext_stack_2->SetBinError(12,1.106046);
   hext_stack_2->SetBinError(13,4.435864);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,11.61858);
   hdirt_stack_3->SetBinContent(2,13.02584);
   hdirt_stack_3->SetBinContent(3,7.044441);
   hdirt_stack_3->SetBinContent(4,5.975907);
   hdirt_stack_3->SetBinContent(5,3.502578);
   hdirt_stack_3->SetBinContent(6,3.655475);
   hdirt_stack_3->SetBinContent(7,2.554859);
   hdirt_stack_3->SetBinContent(8,1.866221);
   hdirt_stack_3->SetBinContent(9,1.438663);
   hdirt_stack_3->SetBinContent(10,0.8581587);
   hdirt_stack_3->SetBinContent(11,0.3905701);
   hdirt_stack_3->SetBinContent(12,1.249728);
   hdirt_stack_3->SetBinContent(13,3.87205);
   hdirt_stack_3->SetBinError(1,1.755125);
   hdirt_stack_3->SetBinError(2,1.903436);
   hdirt_stack_3->SetBinError(3,1.311826);
   hdirt_stack_3->SetBinError(4,1.484779);
   hdirt_stack_3->SetBinError(5,0.9513179);
   hdirt_stack_3->SetBinError(6,1.061056);
   hdirt_stack_3->SetBinError(7,0.8427826);
   hdirt_stack_3->SetBinError(8,1.184604);
   hdirt_stack_3->SetBinError(9,0.6151616);
   hdirt_stack_3->SetBinError(10,0.5193504);
   hdirt_stack_3->SetBinError(11,0.2877834);
   hdirt_stack_3->SetBinError(12,0.6539975);
   hdirt_stack_3->SetBinError(13,1.092443);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,89.13205);
   houtFV_stack_4->SetBinContent(2,107.3479);
   houtFV_stack_4->SetBinContent(3,72.66698);
   houtFV_stack_4->SetBinContent(4,59.54376);
   houtFV_stack_4->SetBinContent(5,33.02677);
   houtFV_stack_4->SetBinContent(6,24.32119);
   houtFV_stack_4->SetBinContent(7,18.21368);
   houtFV_stack_4->SetBinContent(8,11.51413);
   houtFV_stack_4->SetBinContent(9,8.192986);
   houtFV_stack_4->SetBinContent(10,6.98514);
   houtFV_stack_4->SetBinContent(11,5.765883);
   houtFV_stack_4->SetBinContent(12,6.130287);
   houtFV_stack_4->SetBinContent(13,33.90164);
   houtFV_stack_4->SetBinError(1,4.739064);
   houtFV_stack_4->SetBinError(2,5.307565);
   houtFV_stack_4->SetBinError(3,4.22021);
   houtFV_stack_4->SetBinError(4,3.933438);
   houtFV_stack_4->SetBinError(5,2.90861);
   houtFV_stack_4->SetBinError(6,2.526327);
   houtFV_stack_4->SetBinError(7,2.106702);
   houtFV_stack_4->SetBinError(8,1.654585);
   houtFV_stack_4->SetBinError(9,1.457949);
   houtFV_stack_4->SetBinError(10,1.379336);
   houtFV_stack_4->SetBinError(11,1.262807);
   houtFV_stack_4->SetBinError(12,1.314364);
   houtFV_stack_4->SetBinError(13,2.941825);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.194448);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,14.99549);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.60846);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,20.78559);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.04101);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.407278);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.848533);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.318883);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.172468);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.463536);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6517811);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.079953);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.474389);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.040173);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.466042);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.733236);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.741603);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.337948);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.034252);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9596756);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7129542);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5173886);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4894209);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2061017);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3072857);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.095389);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9028652);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.591881);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.709139);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7862979);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3638682);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4599338);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3530845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1289414);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4984151);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1380737);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2399944);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3987744);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4213718);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2219935);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1134647);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1873176);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2279063);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08125716);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3052083);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06051453);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,116.8219);
   hNCpi0inFVres_stack_7->SetBinContent(2,259.3283);
   hNCpi0inFVres_stack_7->SetBinContent(3,268.5616);
   hNCpi0inFVres_stack_7->SetBinContent(4,185.1749);
   hNCpi0inFVres_stack_7->SetBinContent(5,100.0541);
   hNCpi0inFVres_stack_7->SetBinContent(6,59.14533);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.26207);
   hNCpi0inFVres_stack_7->SetBinContent(8,22.04142);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.77859);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.52302);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.709008);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.039011);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.05438);
   hNCpi0inFVres_stack_7->SetBinError(1,3.692719);
   hNCpi0inFVres_stack_7->SetBinError(2,5.499443);
   hNCpi0inFVres_stack_7->SetBinError(3,5.743397);
   hNCpi0inFVres_stack_7->SetBinError(4,4.662429);
   hNCpi0inFVres_stack_7->SetBinError(5,3.243522);
   hNCpi0inFVres_stack_7->SetBinError(6,2.486691);
   hNCpi0inFVres_stack_7->SetBinError(7,2.251969);
   hNCpi0inFVres_stack_7->SetBinError(8,1.674054);
   hNCpi0inFVres_stack_7->SetBinError(9,1.63714);
   hNCpi0inFVres_stack_7->SetBinError(10,1.06079);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9877851);
   hNCpi0inFVres_stack_7->SetBinError(12,0.793);
   hNCpi0inFVres_stack_7->SetBinError(13,2.829199);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,26.42318);
   hNCpi0inFVdis_stack_8->SetBinContent(2,53.6951);
   hNCpi0inFVdis_stack_8->SetBinContent(3,38.95422);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.48167);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.48516);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.30301);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.50043);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.631293);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.894053);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.702139);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.370795);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.424109);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.96463);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.785122);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.570214);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.140336);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.840709);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.512177);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.4115);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.293475);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9933771);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.061402);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5278069);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5526586);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5711762);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.643821);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.0949616);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1695417);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06734299);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1352493);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,68.4127);
   hCCpi0inFV_stack_10->SetBinContent(2,121.307);
   hCCpi0inFV_stack_10->SetBinContent(3,120.6121);
   hCCpi0inFV_stack_10->SetBinContent(4,86.54153);
   hCCpi0inFV_stack_10->SetBinContent(5,57.03252);
   hCCpi0inFV_stack_10->SetBinContent(6,37.69865);
   hCCpi0inFV_stack_10->SetBinContent(7,18.28912);
   hCCpi0inFV_stack_10->SetBinContent(8,11.79695);
   hCCpi0inFV_stack_10->SetBinContent(9,10.14974);
   hCCpi0inFV_stack_10->SetBinContent(10,5.286565);
   hCCpi0inFV_stack_10->SetBinContent(11,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(12,3.376046);
   hCCpi0inFV_stack_10->SetBinContent(13,34.22698);
   hCCpi0inFV_stack_10->SetBinError(1,4.115558);
   hCCpi0inFV_stack_10->SetBinError(2,5.530461);
   hCCpi0inFV_stack_10->SetBinError(3,5.50874);
   hCCpi0inFV_stack_10->SetBinError(4,4.691966);
   hCCpi0inFV_stack_10->SetBinError(5,3.784172);
   hCCpi0inFV_stack_10->SetBinError(6,3.099545);
   hCCpi0inFV_stack_10->SetBinError(7,2.1143);
   hCCpi0inFV_stack_10->SetBinError(8,1.70837);
   hCCpi0inFV_stack_10->SetBinError(9,1.623916);
   hCCpi0inFV_stack_10->SetBinError(10,1.110635);
   hCCpi0inFV_stack_10->SetBinError(11,1.075193);
   hCCpi0inFV_stack_10->SetBinError(12,0.8997438);
   hCCpi0inFV_stack_10->SetBinError(13,2.92282);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,30.90027);
   hNCinFV_stack_11->SetBinContent(2,55.19094);
   hNCinFV_stack_11->SetBinContent(3,44.46478);
   hNCinFV_stack_11->SetBinContent(4,24.34682);
   hNCinFV_stack_11->SetBinContent(5,25.5485);
   hNCinFV_stack_11->SetBinContent(6,13.70997);
   hNCinFV_stack_11->SetBinContent(7,6.988029);
   hNCinFV_stack_11->SetBinContent(8,6.842956);
   hNCinFV_stack_11->SetBinContent(9,4.316949);
   hNCinFV_stack_11->SetBinContent(10,3.948577);
   hNCinFV_stack_11->SetBinContent(11,2.002419);
   hNCinFV_stack_11->SetBinContent(12,0.7695688);
   hNCinFV_stack_11->SetBinContent(13,12.79601);
   hNCinFV_stack_11->SetBinError(1,2.830627);
   hNCinFV_stack_11->SetBinError(2,3.95804);
   hNCinFV_stack_11->SetBinError(3,3.616802);
   hNCinFV_stack_11->SetBinError(4,2.588857);
   hNCinFV_stack_11->SetBinError(5,2.997734);
   hNCinFV_stack_11->SetBinError(6,1.829363);
   hNCinFV_stack_11->SetBinError(7,1.291461);
   hNCinFV_stack_11->SetBinError(8,1.261942);
   hNCinFV_stack_11->SetBinError(9,1.087384);
   hNCinFV_stack_11->SetBinError(10,1.00809);
   hNCinFV_stack_11->SetBinError(11,0.7348366);
   hNCinFV_stack_11->SetBinError(12,0.3664217);
   hNCinFV_stack_11->SetBinError(13,1.865734);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,33.33844);
   hnumuCCinFV_stack_12->SetBinContent(2,66.01505);
   hnumuCCinFV_stack_12->SetBinContent(3,49.92095);
   hnumuCCinFV_stack_12->SetBinContent(4,33.70079);
   hnumuCCinFV_stack_12->SetBinContent(5,21.70042);
   hnumuCCinFV_stack_12->SetBinContent(6,17.37978);
   hnumuCCinFV_stack_12->SetBinContent(7,7.691275);
   hnumuCCinFV_stack_12->SetBinContent(8,6.373123);
   hnumuCCinFV_stack_12->SetBinContent(9,4.178619);
   hnumuCCinFV_stack_12->SetBinContent(10,3.978098);
   hnumuCCinFV_stack_12->SetBinContent(11,1.862238);
   hnumuCCinFV_stack_12->SetBinContent(12,2.22204);
   hnumuCCinFV_stack_12->SetBinContent(13,18.69518);
   hnumuCCinFV_stack_12->SetBinError(1,3.652209);
   hnumuCCinFV_stack_12->SetBinError(2,4.477985);
   hnumuCCinFV_stack_12->SetBinError(3,4.554791);
   hnumuCCinFV_stack_12->SetBinError(4,3.176777);
   hnumuCCinFV_stack_12->SetBinError(5,2.618015);
   hnumuCCinFV_stack_12->SetBinError(6,2.163714);
   hnumuCCinFV_stack_12->SetBinError(7,1.49959);
   hnumuCCinFV_stack_12->SetBinError(8,1.314722);
   hnumuCCinFV_stack_12->SetBinError(9,1.670996);
   hnumuCCinFV_stack_12->SetBinError(10,1.456548);
   hnumuCCinFV_stack_12->SetBinError(11,0.6799437);
   hnumuCCinFV_stack_12->SetBinError(12,0.770235);
   hnumuCCinFV_stack_12->SetBinError(13,2.293806);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.248148);
   hnueCCinFV_stack_13->SetBinContent(2,3.144458);
   hnueCCinFV_stack_13->SetBinContent(3,2.980837);
   hnueCCinFV_stack_13->SetBinContent(4,3.32596);
   hnueCCinFV_stack_13->SetBinContent(5,1.570749);
   hnueCCinFV_stack_13->SetBinContent(6,0.9777503);
   hnueCCinFV_stack_13->SetBinContent(7,0.842703);
   hnueCCinFV_stack_13->SetBinContent(8,1.344896);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.8718764);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,11.08822);
   hnueCCinFV_stack_13->SetBinError(1,1.569874);
   hnueCCinFV_stack_13->SetBinError(2,0.9120951);
   hnueCCinFV_stack_13->SetBinError(3,0.9938646);
   hnueCCinFV_stack_13->SetBinError(4,1.456517);
   hnueCCinFV_stack_13->SetBinError(5,0.6816847);
   hnueCCinFV_stack_13->SetBinError(6,0.5027103);
   hnueCCinFV_stack_13->SetBinError(7,0.4243469);
   hnueCCinFV_stack_13->SetBinError(8,0.6166702);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.4395467);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.524421);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,467.2345);
   hmcerror__11->SetBinContent(2,836.0874);
   hmcerror__11->SetBinContent(3,722.2231);
   hmcerror__11->SetBinContent(4,516.2472);
   hmcerror__11->SetBinContent(5,330.6457);
   hmcerror__11->SetBinContent(6,215.701);
   hmcerror__11->SetBinContent(7,130.5114);
   hmcerror__11->SetBinContent(8,82.19952);
   hmcerror__11->SetBinContent(9,72.69071);
   hmcerror__11->SetBinContent(10,42.31863);
   hmcerror__11->SetBinContent(11,37.35419);
   hmcerror__11->SetBinContent(12,27.79519);
   hmcerror__11->SetBinContent(13,248.451);
   hmcerror__11->SetBinError(1,109.34);
   hmcerror__11->SetBinError(2,182.8171);
   hmcerror__11->SetBinError(3,161.3201);
   hmcerror__11->SetBinError(4,129.5224);
   hmcerror__11->SetBinError(5,102.5367);
   hmcerror__11->SetBinError(6,54.61584);
   hmcerror__11->SetBinError(7,33.95028);
   hmcerror__11->SetBinError(8,24.00678);
   hmcerror__11->SetBinError(9,23.10163);
   hmcerror__11->SetBinError(10,15.42049);
   hmcerror__11->SetBinError(11,15.46632);
   hmcerror__11->SetBinError(12,11.9363);
   hmcerror__11->SetBinError(13,59.38253);
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
   
   Double_t _fx3013[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3013[12] = {
   525,
   909,
   759,
   484,
   304,
   214,
   116,
   103,
   63,
   42,
   23,
   27};
   Double_t _felx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[12] = {
   22.91288,
   30.14963,
   27.54995,
   22,
   17.4356,
   14.62874,
   10.77033,
   10.14889,
   8.0648,
   6.6155,
   4.9457,
   5.3414};
   Double_t _fehx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[12] = {
   22.91288,
   30.14963,
   27.54995,
   22,
   17.4356,
   14.62874,
   10.77033,
   10.14889,
   7.862,
   6.4104,
   4.7346,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(16.24887);
   Graph_Graph3013->SetMaximum(1031.259);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3569.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 90.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 436.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 53.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 442.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1095.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  220.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 544.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 219.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 248.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3014[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3014[12] = {
   1,
   1,
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
   Double_t _felx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[12] = {
   0.2340153,
   0.2186579,
   0.223366,
   0.2508922,
   0.3101106,
   0.2532017,
   0.2601328,
   0.292055,
   0.3178072,
   0.36439,
   0.4140451,
   0.4294377};
   Double_t _fehx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[12] = {
   0.2340153,
   0.2186579,
   0.223366,
   0.2508922,
   0.3101106,
   0.2532017,
   0.2601328,
   0.292055,
   0.3178072,
   0.36439,
   0.4140451,
   0.4294377};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3015[12] = {
   1,
   1,
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
   Double_t _felx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[12] = {
   0.1918201,
   0.1992738,
   0.2055196,
   0.221886,
   0.2328916,
   0.2150747,
   0.1956874,
   0.2001055,
   0.185844,
   0.2059808,
   0.1882321,
   0.2165643};
   Double_t _fehx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[12] = {
   0.1918201,
   0.1992738,
   0.2055196,
   0.221886,
   0.2328916,
   0.2150747,
   0.1956874,
   0.2001055,
   0.185844,
   0.2059808,
   0.1882321,
   0.2165643};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
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
   
   Double_t _fx3016[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3016[12] = {
   1.123633,
   1.087207,
   1.050922,
   0.9375354,
   0.9194132,
   0.9921143,
   0.8888115,
   1.253049,
   0.8666857,
   0.9924706,
   0.6157274,
   0.9713912};
   Double_t _felx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[12] = {
   0.04903935,
   0.03606038,
   0.03814604,
   0.04261524,
   0.05273196,
   0.06781954,
   0.08252407,
   0.1234665,
   0.1109468,
   0.1563259,
   0.1324001,
   0.19217};
   Double_t _fehx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[12] = {
   0.04903935,
   0.03606038,
   0.03814604,
   0.04261524,
   0.05273196,
   0.06781954,
   0.08252407,
   0.1234665,
   0.1081569,
   0.1514794,
   0.1267488,
   0.1846435};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.3940085);
   Graph_Graph3016->SetMaximum(1.465834);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
