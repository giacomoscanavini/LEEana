#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 22:48:00 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",138,161,1200,900);
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
   pad1->Range(-0.4846154,-8.9,3.553846,984.1526);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__4->SetBinContent(1,98.55827);
   hmc__4->SetBinContent(2,254.7213);
   hmc__4->SetBinContent(3,371.4123);
   hmc__4->SetBinContent(4,430.7772);
   hmc__4->SetBinContent(5,439.1343);
   hmc__4->SetBinContent(6,411.5992);
   hmc__4->SetBinContent(7,407.1486);
   hmc__4->SetBinContent(8,366.8702);
   hmc__4->SetBinContent(9,311.2978);
   hmc__4->SetBinContent(10,271.0412);
   hmc__4->SetBinContent(11,252.2625);
   hmc__4->SetBinContent(12,218.0814);
   hmc__4->SetBinContent(13,193.9145);
   hmc__4->SetBinContent(14,150.2438);
   hmc__4->SetBinContent(15,143.2446);
   hmc__4->SetBinContent(16,138.2147);
   hmc__4->SetBinContent(17,121.4102);
   hmc__4->SetBinContent(18,114.1251);
   hmc__4->SetBinContent(19,104.3527);
   hmc__4->SetBinContent(20,99.12007);
   hmc__4->SetBinContent(21,93.00607);
   hmc__4->SetBinContent(22,79.92352);
   hmc__4->SetBinContent(23,59.46556);
   hmc__4->SetBinContent(24,40.34812);
   hmc__4->SetBinContent(25,14.67765);
   hmc__4->SetBinError(1,33.1039);
   hmc__4->SetBinError(2,65.93794);
   hmc__4->SetBinError(3,89.93483);
   hmc__4->SetBinError(4,107.7159);
   hmc__4->SetBinError(5,111.5477);
   hmc__4->SetBinError(6,113.6929);
   hmc__4->SetBinError(7,114.5512);
   hmc__4->SetBinError(8,112.8156);
   hmc__4->SetBinError(9,98.77847);
   hmc__4->SetBinError(10,82.78046);
   hmc__4->SetBinError(11,75.34396);
   hmc__4->SetBinError(12,67.96023);
   hmc__4->SetBinError(13,67.01493);
   hmc__4->SetBinError(14,48.97656);
   hmc__4->SetBinError(15,54.73674);
   hmc__4->SetBinError(16,46.75265);
   hmc__4->SetBinError(17,38.07869);
   hmc__4->SetBinError(18,36.42161);
   hmc__4->SetBinError(19,36.31547);
   hmc__4->SetBinError(20,31.1635);
   hmc__4->SetBinError(21,33.22086);
   hmc__4->SetBinError(22,27.79261);
   hmc__4->SetBinError(23,21.15602);
   hmc__4->SetBinError(24,18.87174);
   hmc__4->SetBinError(25,8.47873);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-8.9);
   hmc__4->SetMaximum(934.5);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,3.15);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(461.091);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.564826);
   hbadmatch_stack_1->SetBinContent(2,3.829312);
   hbadmatch_stack_1->SetBinContent(3,7.182887);
   hbadmatch_stack_1->SetBinContent(4,7.097655);
   hbadmatch_stack_1->SetBinContent(5,6.66165);
   hbadmatch_stack_1->SetBinContent(6,9.604105);
   hbadmatch_stack_1->SetBinContent(7,7.045207);
   hbadmatch_stack_1->SetBinContent(8,8.260104);
   hbadmatch_stack_1->SetBinContent(9,5.710691);
   hbadmatch_stack_1->SetBinContent(10,4.422915);
   hbadmatch_stack_1->SetBinContent(11,10.61723);
   hbadmatch_stack_1->SetBinContent(12,8.408353);
   hbadmatch_stack_1->SetBinContent(13,5.134563);
   hbadmatch_stack_1->SetBinContent(14,3.047894);
   hbadmatch_stack_1->SetBinContent(15,5.868637);
   hbadmatch_stack_1->SetBinContent(16,4.227307);
   hbadmatch_stack_1->SetBinContent(17,3.375661);
   hbadmatch_stack_1->SetBinContent(18,2.658346);
   hbadmatch_stack_1->SetBinContent(19,2.034128);
   hbadmatch_stack_1->SetBinContent(20,2.470745);
   hbadmatch_stack_1->SetBinContent(21,1.700606);
   hbadmatch_stack_1->SetBinContent(22,4.236081);
   hbadmatch_stack_1->SetBinContent(23,1.349425);
   hbadmatch_stack_1->SetBinContent(24,1.922601);
   hbadmatch_stack_1->SetBinError(1,1.145263);
   hbadmatch_stack_1->SetBinError(2,1.012349);
   hbadmatch_stack_1->SetBinError(3,1.503468);
   hbadmatch_stack_1->SetBinError(4,1.363402);
   hbadmatch_stack_1->SetBinError(5,1.348866);
   hbadmatch_stack_1->SetBinError(6,1.657684);
   hbadmatch_stack_1->SetBinError(7,1.435973);
   hbadmatch_stack_1->SetBinError(8,1.489969);
   hbadmatch_stack_1->SetBinError(9,1.208171);
   hbadmatch_stack_1->SetBinError(10,1.069724);
   hbadmatch_stack_1->SetBinError(11,2.593699);
   hbadmatch_stack_1->SetBinError(12,1.8429);
   hbadmatch_stack_1->SetBinError(13,1.851535);
   hbadmatch_stack_1->SetBinError(14,0.9626644);
   hbadmatch_stack_1->SetBinError(15,1.30724);
   hbadmatch_stack_1->SetBinError(16,0.9848534);
   hbadmatch_stack_1->SetBinError(17,0.9531478);
   hbadmatch_stack_1->SetBinError(18,0.9516127);
   hbadmatch_stack_1->SetBinError(19,0.7281765);
   hbadmatch_stack_1->SetBinError(20,0.7668342);
   hbadmatch_stack_1->SetBinError(21,0.6480593);
   hbadmatch_stack_1->SetBinError(22,1.850013);
   hbadmatch_stack_1->SetBinError(23,0.6110397);
   hbadmatch_stack_1->SetBinError(24,0.7409392);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,3.15182);
   hext_stack_2->SetBinContent(2,6.247388);
   hext_stack_2->SetBinContent(3,15.46342);
   hext_stack_2->SetBinContent(4,24.24414);
   hext_stack_2->SetBinContent(5,33.5755);
   hext_stack_2->SetBinContent(6,28.56668);
   hext_stack_2->SetBinContent(7,40.14169);
   hext_stack_2->SetBinContent(8,40.97643);
   hext_stack_2->SetBinContent(9,30.0877);
   hext_stack_2->SetBinContent(10,37.08756);
   hext_stack_2->SetBinContent(11,39.60382);
   hext_stack_2->SetBinContent(12,27.60502);
   hext_stack_2->SetBinContent(13,25.75085);
   hext_stack_2->SetBinContent(14,13.74765);
   hext_stack_2->SetBinContent(15,20.62229);
   hext_stack_2->SetBinContent(16,15.11308);
   hext_stack_2->SetBinContent(17,12.96758);
   hext_stack_2->SetBinContent(18,15.28189);
   hext_stack_2->SetBinContent(19,6.221437);
   hext_stack_2->SetBinContent(20,9.86483);
   hext_stack_2->SetBinContent(21,8.973839);
   hext_stack_2->SetBinContent(22,4.435048);
   hext_stack_2->SetBinContent(23,4.670063);
   hext_stack_2->SetBinContent(24,2.028585);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(1,1.23684);
   hext_stack_2->SetBinError(2,1.590904);
   hext_stack_2->SetBinError(3,2.595924);
   hext_stack_2->SetBinError(4,3.403844);
   hext_stack_2->SetBinError(5,3.896718);
   hext_stack_2->SetBinError(6,3.589168);
   hext_stack_2->SetBinError(7,4.452379);
   hext_stack_2->SetBinError(8,4.42162);
   hext_stack_2->SetBinError(9,3.689917);
   hext_stack_2->SetBinError(10,4.14051);
   hext_stack_2->SetBinError(11,4.343788);
   hext_stack_2->SetBinError(12,3.718973);
   hext_stack_2->SetBinError(13,3.375131);
   hext_stack_2->SetBinError(14,2.493721);
   hext_stack_2->SetBinError(15,3.092522);
   hext_stack_2->SetBinError(16,2.664971);
   hext_stack_2->SetBinError(17,2.284364);
   hext_stack_2->SetBinError(18,2.712448);
   hext_stack_2->SetBinError(19,1.731894);
   hext_stack_2->SetBinError(20,2.101979);
   hext_stack_2->SetBinError(21,2.040271);
   hext_stack_2->SetBinError(22,1.533985);
   hext_stack_2->SetBinError(23,1.612283);
   hext_stack_2->SetBinError(24,0.8315593);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,1.373798);
   hdirt_stack_3->SetBinContent(3,1.972778);
   hdirt_stack_3->SetBinContent(4,3.984972);
   hdirt_stack_3->SetBinContent(5,3.333734);
   hdirt_stack_3->SetBinContent(6,4.022851);
   hdirt_stack_3->SetBinContent(7,6.297842);
   hdirt_stack_3->SetBinContent(8,2.11932);
   hdirt_stack_3->SetBinContent(9,3.136186);
   hdirt_stack_3->SetBinContent(10,3.608445);
   hdirt_stack_3->SetBinContent(11,1.611426);
   hdirt_stack_3->SetBinContent(12,2.85488);
   hdirt_stack_3->SetBinContent(13,1.375092);
   hdirt_stack_3->SetBinContent(14,1.3681);
   hdirt_stack_3->SetBinContent(15,1.408814);
   hdirt_stack_3->SetBinContent(16,2.169836);
   hdirt_stack_3->SetBinContent(17,1.723894);
   hdirt_stack_3->SetBinContent(18,1.41404);
   hdirt_stack_3->SetBinContent(19,1.874854);
   hdirt_stack_3->SetBinContent(20,0.6512973);
   hdirt_stack_3->SetBinContent(21,1.076137);
   hdirt_stack_3->SetBinContent(22,0.2863297);
   hdirt_stack_3->SetBinContent(23,0.6287382);
   hdirt_stack_3->SetBinContent(24,0.4142144);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.5770587);
   hdirt_stack_3->SetBinError(3,0.6924316);
   hdirt_stack_3->SetBinError(4,1.168939);
   hdirt_stack_3->SetBinError(5,0.9266328);
   hdirt_stack_3->SetBinError(6,1.015596);
   hdirt_stack_3->SetBinError(7,1.640215);
   hdirt_stack_3->SetBinError(8,0.7132923);
   hdirt_stack_3->SetBinError(9,0.870268);
   hdirt_stack_3->SetBinError(10,0.9578059);
   hdirt_stack_3->SetBinError(11,0.6472301);
   hdirt_stack_3->SetBinError(12,0.9072868);
   hdirt_stack_3->SetBinError(13,0.6472427);
   hdirt_stack_3->SetBinError(14,0.9804616);
   hdirt_stack_3->SetBinError(15,0.6008309);
   hdirt_stack_3->SetBinError(16,0.7287351);
   hdirt_stack_3->SetBinError(17,0.7464738);
   hdirt_stack_3->SetBinError(18,0.6091253);
   hdirt_stack_3->SetBinError(19,0.750043);
   hdirt_stack_3->SetBinError(20,0.4229282);
   hdirt_stack_3->SetBinError(21,0.4841273);
   hdirt_stack_3->SetBinError(22,0.2025938);
   hdirt_stack_3->SetBinError(23,0.3958337);
   hdirt_stack_3->SetBinError(24,0.2391468);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.072584);
   houtFV_stack_4->SetBinContent(2,12.02386);
   houtFV_stack_4->SetBinContent(3,20.14085);
   houtFV_stack_4->SetBinContent(4,27.46634);
   houtFV_stack_4->SetBinContent(5,30.36549);
   houtFV_stack_4->SetBinContent(6,33.68604);
   houtFV_stack_4->SetBinContent(7,35.58921);
   houtFV_stack_4->SetBinContent(8,32.4492);
   houtFV_stack_4->SetBinContent(9,24.31197);
   houtFV_stack_4->SetBinContent(10,20.13878);
   houtFV_stack_4->SetBinContent(11,17.6688);
   houtFV_stack_4->SetBinContent(12,17.68347);
   houtFV_stack_4->SetBinContent(13,11.65454);
   houtFV_stack_4->SetBinContent(14,10.71454);
   houtFV_stack_4->SetBinContent(15,10.13966);
   houtFV_stack_4->SetBinContent(16,10.39966);
   houtFV_stack_4->SetBinContent(17,6.81106);
   houtFV_stack_4->SetBinContent(18,10.35316);
   houtFV_stack_4->SetBinContent(19,7.399574);
   houtFV_stack_4->SetBinContent(20,7.226097);
   houtFV_stack_4->SetBinContent(21,6.892185);
   houtFV_stack_4->SetBinContent(22,6.706417);
   houtFV_stack_4->SetBinContent(23,4.585328);
   houtFV_stack_4->SetBinContent(24,2.530046);
   houtFV_stack_4->SetBinContent(25,1.115732);
   houtFV_stack_4->SetBinError(1,0.8917918);
   houtFV_stack_4->SetBinError(2,1.721468);
   houtFV_stack_4->SetBinError(3,2.248183);
   houtFV_stack_4->SetBinError(4,2.606021);
   houtFV_stack_4->SetBinError(5,2.731484);
   houtFV_stack_4->SetBinError(6,2.924721);
   houtFV_stack_4->SetBinError(7,2.952252);
   houtFV_stack_4->SetBinError(8,2.861961);
   houtFV_stack_4->SetBinError(9,2.420529);
   houtFV_stack_4->SetBinError(10,2.206102);
   houtFV_stack_4->SetBinError(11,2.117148);
   houtFV_stack_4->SetBinError(12,2.059948);
   houtFV_stack_4->SetBinError(13,1.758311);
   houtFV_stack_4->SetBinError(14,1.659858);
   houtFV_stack_4->SetBinError(15,1.51648);
   houtFV_stack_4->SetBinError(16,1.594773);
   houtFV_stack_4->SetBinError(17,1.230111);
   houtFV_stack_4->SetBinError(18,1.65461);
   houtFV_stack_4->SetBinError(19,1.399527);
   houtFV_stack_4->SetBinError(20,1.204137);
   houtFV_stack_4->SetBinError(21,1.33381);
   houtFV_stack_4->SetBinError(22,1.363587);
   houtFV_stack_4->SetBinError(23,1.18426);
   houtFV_stack_4->SetBinError(24,0.7919547);
   houtFV_stack_4->SetBinError(25,0.5719249);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.509533);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.91801);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,20.20471);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,15.26685);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.08785);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.708035);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.706454);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.901402);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.326479);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.539485);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7097455);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5655617);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2549132);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3435173);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1773983);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.541642);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.415752);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7843217);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9027939);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.211252);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.242342);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9705523);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4555764);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.090167);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.545195);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.674321);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.479259);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.234135);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9207454);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9232085);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6159901);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3766476);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4933052);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3360649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2334105);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.09740903);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.213157);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.07707098);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2445897);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4320029);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3600104);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2951192);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4353218);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4563987);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3863899);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2943632);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.06410217);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.733582);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9964368);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.529018);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.822135);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.228257);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.201894);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.598953);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4300924);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6554964);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4987783);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5718725);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8314619);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4788316);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3936431);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5579675);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2606671);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1403539);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2508363);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1361326);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6922472);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3951066);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3809842);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1156182);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04570566);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3042133);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2433456);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3303726);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3870407);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5473191);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2720073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3965884);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1145834);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2086373);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1407251);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1886194);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3195583);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1401103);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1512394);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.204405);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1217412);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04973827);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.138613);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04682498);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2908059);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1878678);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1516039);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08216112);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,32.87397);
   hNCpi0inFVres_stack_7->SetBinContent(2,86.14479);
   hNCpi0inFVres_stack_7->SetBinContent(3,129.7449);
   hNCpi0inFVres_stack_7->SetBinContent(4,163.4077);
   hNCpi0inFVres_stack_7->SetBinContent(5,172.2726);
   hNCpi0inFVres_stack_7->SetBinContent(6,169.2458);
   hNCpi0inFVres_stack_7->SetBinContent(7,161.5034);
   hNCpi0inFVres_stack_7->SetBinContent(8,150.099);
   hNCpi0inFVres_stack_7->SetBinContent(9,126.6249);
   hNCpi0inFVres_stack_7->SetBinContent(10,104.4923);
   hNCpi0inFVres_stack_7->SetBinContent(11,87.59183);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.17531);
   hNCpi0inFVres_stack_7->SetBinContent(13,69.7875);
   hNCpi0inFVres_stack_7->SetBinContent(14,58.69523);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.38503);
   hNCpi0inFVres_stack_7->SetBinContent(16,49.11965);
   hNCpi0inFVres_stack_7->SetBinContent(17,48.7829);
   hNCpi0inFVres_stack_7->SetBinContent(18,42.03595);
   hNCpi0inFVres_stack_7->SetBinContent(19,41.19219);
   hNCpi0inFVres_stack_7->SetBinContent(20,33.5573);
   hNCpi0inFVres_stack_7->SetBinContent(21,33.27552);
   hNCpi0inFVres_stack_7->SetBinContent(22,25.76078);
   hNCpi0inFVres_stack_7->SetBinContent(23,19.78546);
   hNCpi0inFVres_stack_7->SetBinContent(24,12.27252);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.113684);
   hNCpi0inFVres_stack_7->SetBinError(1,2.138862);
   hNCpi0inFVres_stack_7->SetBinError(2,3.131579);
   hNCpi0inFVres_stack_7->SetBinError(3,3.788408);
   hNCpi0inFVres_stack_7->SetBinError(4,4.254653);
   hNCpi0inFVres_stack_7->SetBinError(5,4.42976);
   hNCpi0inFVres_stack_7->SetBinError(6,4.333915);
   hNCpi0inFVres_stack_7->SetBinError(7,4.147852);
   hNCpi0inFVres_stack_7->SetBinError(8,4.056774);
   hNCpi0inFVres_stack_7->SetBinError(9,3.720316);
   hNCpi0inFVres_stack_7->SetBinError(10,3.286186);
   hNCpi0inFVres_stack_7->SetBinError(11,2.885242);
   hNCpi0inFVres_stack_7->SetBinError(12,2.741092);
   hNCpi0inFVres_stack_7->SetBinError(13,2.677085);
   hNCpi0inFVres_stack_7->SetBinError(14,2.466453);
   hNCpi0inFVres_stack_7->SetBinError(15,2.137435);
   hNCpi0inFVres_stack_7->SetBinError(16,2.144774);
   hNCpi0inFVres_stack_7->SetBinError(17,2.262423);
   hNCpi0inFVres_stack_7->SetBinError(18,1.987331);
   hNCpi0inFVres_stack_7->SetBinError(19,2.103835);
   hNCpi0inFVres_stack_7->SetBinError(20,1.832303);
   hNCpi0inFVres_stack_7->SetBinError(21,1.837228);
   hNCpi0inFVres_stack_7->SetBinError(22,1.72442);
   hNCpi0inFVres_stack_7->SetBinError(23,1.475922);
   hNCpi0inFVres_stack_7->SetBinError(24,1.20578);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6029726);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.53992);
   hNCpi0inFVdis_stack_8->SetBinContent(2,25.24569);
   hNCpi0inFVdis_stack_8->SetBinContent(3,41.37272);
   hNCpi0inFVdis_stack_8->SetBinContent(4,42.9497);
   hNCpi0inFVdis_stack_8->SetBinContent(5,39.63329);
   hNCpi0inFVdis_stack_8->SetBinContent(6,35.32978);
   hNCpi0inFVdis_stack_8->SetBinContent(7,27.48766);
   hNCpi0inFVdis_stack_8->SetBinContent(8,24.88644);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.62793);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.66167);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.78008);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.96318);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.77777);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.620764);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.653183);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.204118);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.091273);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.056608);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.715938);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.305413);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.81332);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.815161);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.256549);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.132503);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4591082);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.382318);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.66274);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.307244);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.425084);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.211655);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.945948);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.690514);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.683269);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.558468);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.363871);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.310132);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.232489);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.272131);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8229382);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.84198);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9143471);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.982911);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6834404);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.019279);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9892652);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7351836);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.066368);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6041603);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5703742);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1798759);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1604226);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1001309);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3194672);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1647521);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02901978);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1309374);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.0700503);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1783006);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1303682);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02121135);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,14.45118);
   hCCpi0inFV_stack_10->SetBinContent(2,44.35187);
   hCCpi0inFV_stack_10->SetBinContent(3,63.54643);
   hCCpi0inFV_stack_10->SetBinContent(4,70.35513);
   hCCpi0inFV_stack_10->SetBinContent(5,60.33888);
   hCCpi0inFV_stack_10->SetBinContent(6,60.69765);
   hCCpi0inFV_stack_10->SetBinContent(7,63.2452);
   hCCpi0inFV_stack_10->SetBinContent(8,48.84701);
   hCCpi0inFV_stack_10->SetBinContent(9,48.64249);
   hCCpi0inFV_stack_10->SetBinContent(10,37.26173);
   hCCpi0inFV_stack_10->SetBinContent(11,35.20335);
   hCCpi0inFV_stack_10->SetBinContent(12,24.99683);
   hCCpi0inFV_stack_10->SetBinContent(13,28.55166);
   hCCpi0inFV_stack_10->SetBinContent(14,18.57205);
   hCCpi0inFV_stack_10->SetBinContent(15,21.35839);
   hCCpi0inFV_stack_10->SetBinContent(16,22.3287);
   hCCpi0inFV_stack_10->SetBinContent(17,18.6923);
   hCCpi0inFV_stack_10->SetBinContent(18,16.63472);
   hCCpi0inFV_stack_10->SetBinContent(19,15.7148);
   hCCpi0inFV_stack_10->SetBinContent(20,15.48994);
   hCCpi0inFV_stack_10->SetBinContent(21,15.69148);
   hCCpi0inFV_stack_10->SetBinContent(22,11.77291);
   hCCpi0inFV_stack_10->SetBinContent(23,8.929132);
   hCCpi0inFV_stack_10->SetBinContent(24,6.823065);
   hCCpi0inFV_stack_10->SetBinContent(25,3.424339);
   hCCpi0inFV_stack_10->SetBinError(1,1.917465);
   hCCpi0inFV_stack_10->SetBinError(2,3.342511);
   hCCpi0inFV_stack_10->SetBinError(3,3.970669);
   hCCpi0inFV_stack_10->SetBinError(4,4.238119);
   hCCpi0inFV_stack_10->SetBinError(5,3.819343);
   hCCpi0inFV_stack_10->SetBinError(6,3.985323);
   hCCpi0inFV_stack_10->SetBinError(7,3.980389);
   hCCpi0inFV_stack_10->SetBinError(8,3.55568);
   hCCpi0inFV_stack_10->SetBinError(9,3.541194);
   hCCpi0inFV_stack_10->SetBinError(10,3.044679);
   hCCpi0inFV_stack_10->SetBinError(11,2.978305);
   hCCpi0inFV_stack_10->SetBinError(12,2.492413);
   hCCpi0inFV_stack_10->SetBinError(13,2.602684);
   hCCpi0inFV_stack_10->SetBinError(14,2.178525);
   hCCpi0inFV_stack_10->SetBinError(15,2.366483);
   hCCpi0inFV_stack_10->SetBinError(16,2.316683);
   hCCpi0inFV_stack_10->SetBinError(17,2.152892);
   hCCpi0inFV_stack_10->SetBinError(18,1.962316);
   hCCpi0inFV_stack_10->SetBinError(19,1.955124);
   hCCpi0inFV_stack_10->SetBinError(20,1.982975);
   hCCpi0inFV_stack_10->SetBinError(21,1.952486);
   hCCpi0inFV_stack_10->SetBinError(22,1.70483);
   hCCpi0inFV_stack_10->SetBinError(23,1.45347);
   hCCpi0inFV_stack_10->SetBinError(24,1.371295);
   hCCpi0inFV_stack_10->SetBinError(25,0.9116141);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.412087);
   hNCinFV_stack_11->SetBinContent(2,29.85358);
   hNCinFV_stack_11->SetBinContent(3,41.04111);
   hNCinFV_stack_11->SetBinContent(4,44.92989);
   hNCinFV_stack_11->SetBinContent(5,50.67243);
   hNCinFV_stack_11->SetBinContent(6,34.5903);
   hNCinFV_stack_11->SetBinContent(7,27.34123);
   hNCinFV_stack_11->SetBinContent(8,24.45648);
   hNCinFV_stack_11->SetBinContent(9,23.04222);
   hNCinFV_stack_11->SetBinContent(10,16.13178);
   hNCinFV_stack_11->SetBinContent(11,14.65492);
   hNCinFV_stack_11->SetBinContent(12,17.80412);
   hNCinFV_stack_11->SetBinContent(13,11.95223);
   hNCinFV_stack_11->SetBinContent(14,12.03841);
   hNCinFV_stack_11->SetBinContent(15,6.544541);
   hNCinFV_stack_11->SetBinContent(16,12.46539);
   hNCinFV_stack_11->SetBinContent(17,8.953602);
   hNCinFV_stack_11->SetBinContent(18,7.988369);
   hNCinFV_stack_11->SetBinContent(19,10.55597);
   hNCinFV_stack_11->SetBinContent(20,9.412672);
   hNCinFV_stack_11->SetBinContent(21,8.226109);
   hNCinFV_stack_11->SetBinContent(22,7.529743);
   hNCinFV_stack_11->SetBinContent(23,6.75585);
   hNCinFV_stack_11->SetBinContent(24,6.429772);
   hNCinFV_stack_11->SetBinContent(25,2.246485);
   hNCinFV_stack_11->SetBinError(1,1.840145);
   hNCinFV_stack_11->SetBinError(2,2.902187);
   hNCinFV_stack_11->SetBinError(3,3.650298);
   hNCinFV_stack_11->SetBinError(4,3.734442);
   hNCinFV_stack_11->SetBinError(5,4.201801);
   hNCinFV_stack_11->SetBinError(6,3.24889);
   hNCinFV_stack_11->SetBinError(7,2.768979);
   hNCinFV_stack_11->SetBinError(8,2.726388);
   hNCinFV_stack_11->SetBinError(9,2.56043);
   hNCinFV_stack_11->SetBinError(10,1.970088);
   hNCinFV_stack_11->SetBinError(11,1.994907);
   hNCinFV_stack_11->SetBinError(12,2.3022);
   hNCinFV_stack_11->SetBinError(13,1.798335);
   hNCinFV_stack_11->SetBinError(14,1.675232);
   hNCinFV_stack_11->SetBinError(15,1.217962);
   hNCinFV_stack_11->SetBinError(16,2.063054);
   hNCinFV_stack_11->SetBinError(17,1.490231);
   hNCinFV_stack_11->SetBinError(18,1.369371);
   hNCinFV_stack_11->SetBinError(19,1.735951);
   hNCinFV_stack_11->SetBinError(20,1.565096);
   hNCinFV_stack_11->SetBinError(21,1.457495);
   hNCinFV_stack_11->SetBinError(22,1.356816);
   hNCinFV_stack_11->SetBinError(23,1.285733);
   hNCinFV_stack_11->SetBinError(24,1.435461);
   hNCinFV_stack_11->SetBinError(25,0.7565463);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.111615);
   hnumuCCinFV_stack_12->SetBinContent(2,19.9351);
   hnumuCCinFV_stack_12->SetBinContent(3,24.22041);
   hnumuCCinFV_stack_12->SetBinContent(4,27.93873);
   hnumuCCinFV_stack_12->SetBinContent(5,26.81649);
   hnumuCCinFV_stack_12->SetBinContent(6,24.90157);
   hnumuCCinFV_stack_12->SetBinContent(7,29.06013);
   hnumuCCinFV_stack_12->SetBinContent(8,28.68212);
   hnumuCCinFV_stack_12->SetBinContent(9,24.15705);
   hnumuCCinFV_stack_12->SetBinContent(10,27.28303);
   hnumuCCinFV_stack_12->SetBinContent(11,26.9226);
   hnumuCCinFV_stack_12->SetBinContent(12,23.75341);
   hnumuCCinFV_stack_12->SetBinContent(13,26.48531);
   hnumuCCinFV_stack_12->SetBinContent(14,22.03674);
   hnumuCCinFV_stack_12->SetBinContent(15,16.06728);
   hnumuCCinFV_stack_12->SetBinContent(16,12.71779);
   hnumuCCinFV_stack_12->SetBinContent(17,10.10755);
   hnumuCCinFV_stack_12->SetBinContent(18,11.02002);
   hnumuCCinFV_stack_12->SetBinContent(19,10.37636);
   hnumuCCinFV_stack_12->SetBinContent(20,9.897654);
   hnumuCCinFV_stack_12->SetBinContent(21,8.059167);
   hnumuCCinFV_stack_12->SetBinContent(22,8.84605);
   hnumuCCinFV_stack_12->SetBinContent(23,6.331915);
   hnumuCCinFV_stack_12->SetBinContent(24,3.511929);
   hnumuCCinFV_stack_12->SetBinContent(25,2.163784);
   hnumuCCinFV_stack_12->SetBinError(1,1.469891);
   hnumuCCinFV_stack_12->SetBinError(2,2.266599);
   hnumuCCinFV_stack_12->SetBinError(3,2.483245);
   hnumuCCinFV_stack_12->SetBinError(4,2.646102);
   hnumuCCinFV_stack_12->SetBinError(5,3.09205);
   hnumuCCinFV_stack_12->SetBinError(6,2.703154);
   hnumuCCinFV_stack_12->SetBinError(7,3.199113);
   hnumuCCinFV_stack_12->SetBinError(8,4.14865);
   hnumuCCinFV_stack_12->SetBinError(9,2.615952);
   hnumuCCinFV_stack_12->SetBinError(10,3.272517);
   hnumuCCinFV_stack_12->SetBinError(11,2.907758);
   hnumuCCinFV_stack_12->SetBinError(12,3.246864);
   hnumuCCinFV_stack_12->SetBinError(13,2.889977);
   hnumuCCinFV_stack_12->SetBinError(14,2.656421);
   hnumuCCinFV_stack_12->SetBinError(15,2.622246);
   hnumuCCinFV_stack_12->SetBinError(16,1.821807);
   hnumuCCinFV_stack_12->SetBinError(17,1.794746);
   hnumuCCinFV_stack_12->SetBinError(18,2.021527);
   hnumuCCinFV_stack_12->SetBinError(19,2.189781);
   hnumuCCinFV_stack_12->SetBinError(20,1.674863);
   hnumuCCinFV_stack_12->SetBinError(21,1.486678);
   hnumuCCinFV_stack_12->SetBinError(22,1.625606);
   hnumuCCinFV_stack_12->SetBinError(23,1.321559);
   hnumuCCinFV_stack_12->SetBinError(24,0.9063248);
   hnumuCCinFV_stack_12->SetBinError(25,0.7266697);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,4.587731);
   hnueCCinFV_stack_13->SetBinContent(2,7.022088);
   hnueCCinFV_stack_13->SetBinContent(3,5.365223);
   hnueCCinFV_stack_13->SetBinContent(4,1.506954);
   hnueCCinFV_stack_13->SetBinContent(5,2.234836);
   hnueCCinFV_stack_13->SetBinContent(6,1.982575);
   hnueCCinFV_stack_13->SetBinContent(7,2.363941);
   hnueCCinFV_stack_13->SetBinContent(8,1.575472);
   hnueCCinFV_stack_13->SetBinContent(9,2.181895);
   hnueCCinFV_stack_13->SetBinContent(10,1.729025);
   hnueCCinFV_stack_13->SetBinContent(11,1.381755);
   hnueCCinFV_stack_13->SetBinContent(12,0.6922869);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.8559723);
   hnueCCinFV_stack_13->SetBinContent(15,1.459626);
   hnueCCinFV_stack_13->SetBinContent(16,0.6993333);
   hnueCCinFV_stack_13->SetBinContent(17,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(19,0.5372608);
   hnueCCinFV_stack_13->SetBinContent(20,1.323669);
   hnueCCinFV_stack_13->SetBinContent(21,1.684429);
   hnueCCinFV_stack_13->SetBinContent(22,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(23,0.5207534);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.271503);
   hnueCCinFV_stack_13->SetBinError(2,2.043741);
   hnueCCinFV_stack_13->SetBinError(3,1.269731);
   hnueCCinFV_stack_13->SetBinError(4,0.5821362);
   hnueCCinFV_stack_13->SetBinError(5,0.775499);
   hnueCCinFV_stack_13->SetBinError(6,0.8753811);
   hnueCCinFV_stack_13->SetBinError(7,0.8363469);
   hnueCCinFV_stack_13->SetBinError(8,0.6718209);
   hnueCCinFV_stack_13->SetBinError(9,1.353507);
   hnueCCinFV_stack_13->SetBinError(10,0.7323633);
   hnueCCinFV_stack_13->SetBinError(11,0.7157199);
   hnueCCinFV_stack_13->SetBinError(12,0.4018789);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.5082737);
   hnueCCinFV_stack_13->SetBinError(15,0.7387881);
   hnueCCinFV_stack_13->SetBinError(16,0.4064758);
   hnueCCinFV_stack_13->SetBinError(17,0.4132436);
   hnueCCinFV_stack_13->SetBinError(19,0.3929604);
   hnueCCinFV_stack_13->SetBinError(20,1.104131);
   hnueCCinFV_stack_13->SetBinError(21,0.7095577);
   hnueCCinFV_stack_13->SetBinError(22,0.48078);
   hnueCCinFV_stack_13->SetBinError(23,0.5207534);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__5->SetBinContent(1,98.55827);
   hmcerror__5->SetBinContent(2,254.7213);
   hmcerror__5->SetBinContent(3,371.4123);
   hmcerror__5->SetBinContent(4,430.7772);
   hmcerror__5->SetBinContent(5,439.1343);
   hmcerror__5->SetBinContent(6,411.5992);
   hmcerror__5->SetBinContent(7,407.1486);
   hmcerror__5->SetBinContent(8,366.8702);
   hmcerror__5->SetBinContent(9,311.2978);
   hmcerror__5->SetBinContent(10,271.0412);
   hmcerror__5->SetBinContent(11,252.2625);
   hmcerror__5->SetBinContent(12,218.0814);
   hmcerror__5->SetBinContent(13,193.9145);
   hmcerror__5->SetBinContent(14,150.2438);
   hmcerror__5->SetBinContent(15,143.2446);
   hmcerror__5->SetBinContent(16,138.2147);
   hmcerror__5->SetBinContent(17,121.4102);
   hmcerror__5->SetBinContent(18,114.1251);
   hmcerror__5->SetBinContent(19,104.3527);
   hmcerror__5->SetBinContent(20,99.12007);
   hmcerror__5->SetBinContent(21,93.00607);
   hmcerror__5->SetBinContent(22,79.92352);
   hmcerror__5->SetBinContent(23,59.46556);
   hmcerror__5->SetBinContent(24,40.34812);
   hmcerror__5->SetBinContent(25,14.67765);
   hmcerror__5->SetBinError(1,33.1039);
   hmcerror__5->SetBinError(2,65.93794);
   hmcerror__5->SetBinError(3,89.93483);
   hmcerror__5->SetBinError(4,107.7159);
   hmcerror__5->SetBinError(5,111.5477);
   hmcerror__5->SetBinError(6,113.6929);
   hmcerror__5->SetBinError(7,114.5512);
   hmcerror__5->SetBinError(8,112.8156);
   hmcerror__5->SetBinError(9,98.77847);
   hmcerror__5->SetBinError(10,82.78046);
   hmcerror__5->SetBinError(11,75.34396);
   hmcerror__5->SetBinError(12,67.96023);
   hmcerror__5->SetBinError(13,67.01493);
   hmcerror__5->SetBinError(14,48.97656);
   hmcerror__5->SetBinError(15,54.73674);
   hmcerror__5->SetBinError(16,46.75265);
   hmcerror__5->SetBinError(17,38.07869);
   hmcerror__5->SetBinError(18,36.42161);
   hmcerror__5->SetBinError(19,36.31547);
   hmcerror__5->SetBinError(20,31.1635);
   hmcerror__5->SetBinError(21,33.22086);
   hmcerror__5->SetBinError(22,27.79261);
   hmcerror__5->SetBinError(23,21.15602);
   hmcerror__5->SetBinError(24,18.87174);
   hmcerror__5->SetBinError(25,8.47873);
   hmcerror__5->SetBinError(26,0.3895343);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3005[25] = {
   82,
   217,
   379,
   417,
   445,
   394,
   381,
   335,
   314,
   253,
   219,
   196,
   185,
   162,
   146,
   121,
   145,
   111,
   103,
   106,
   85,
   84,
   43,
   39,
   12};
   Double_t _felx3005[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3005[25] = {
   9.1791,
   14.73092,
   19.46792,
   20.42058,
   21.09502,
   19.84943,
   19.51922,
   18.30301,
   17.72005,
   15.90597,
   14.79865,
   14,
   13.60147,
   12.72792,
   12.08305,
   11,
   12.04159,
   10.53565,
   10.14889,
   10.29563,
   9.3428,
   9.2886,
   6.6917,
   6.3813,
   3.64022};
   Double_t _fehx3005[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3005[25] = {
   8.9774,
   14.73092,
   19.46792,
   20.42058,
   21.09502,
   19.84943,
   19.51922,
   18.30301,
   17.72005,
   15.90597,
   14.79865,
   14,
   13.60147,
   12.72792,
   12.08305,
   11,
   12.04159,
   10.53565,
   10.14889,
   10.29563,
   9.1411,
   9.0869,
   6.4868,
   6.1757,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,3.465);
   Graph_Graph3005->SetMinimum(7.523802);
   Graph_Graph3005->SetMaximum(511.8685);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3006[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3006[25] = {
   0.3358815,
   0.2588631,
   0.2421428,
   0.2500503,
   0.2540173,
   0.2762223,
   0.2813499,
   0.3075081,
   0.3173118,
   0.3054165,
   0.2986728,
   0.3116279,
   0.3455901,
   0.3259805,
   0.3821207,
   0.338261,
   0.3136368,
   0.3191376,
   0.348007,
   0.3144015,
   0.3571902,
   0.3477401,
   0.3557693,
   0.467723,
   0.5776627};
   Double_t _fehx3006[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3006[25] = {
   0.3358815,
   0.2588631,
   0.2421428,
   0.2500503,
   0.2540173,
   0.2762223,
   0.2813499,
   0.3075081,
   0.3173118,
   0.3054165,
   0.2986728,
   0.3116279,
   0.3455901,
   0.3259805,
   0.3821207,
   0.338261,
   0.3136368,
   0.3191376,
   0.348007,
   0.3144015,
   0.3571902,
   0.3477401,
   0.3557693,
   0.467723,
   0.5776627};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,3.465);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3007[25] = {
   0.2439097,
   0.2381777,
   0.2306544,
   0.2325873,
   0.2412641,
   0.2605517,
   0.2731203,
   0.2913574,
   0.3037823,
   0.2932417,
   0.2811169,
   0.2984885,
   0.2941062,
   0.3009205,
   0.3132435,
   0.3026312,
   0.2927417,
   0.2922626,
   0.3167146,
   0.2727315,
   0.2776789,
   0.2790884,
   0.2819304,
   0.2698367,
   0.2887842};
   Double_t _fehx3007[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3007[25] = {
   0.2439097,
   0.2381777,
   0.2306544,
   0.2325873,
   0.2412641,
   0.2605517,
   0.2731203,
   0.2913574,
   0.3037823,
   0.2932417,
   0.2811169,
   0.2984885,
   0.2941062,
   0.3009205,
   0.3132435,
   0.3026312,
   0.2927417,
   0.2922626,
   0.3167146,
   0.2727315,
   0.2776789,
   0.2790884,
   0.2819304,
   0.2698367,
   0.2887842};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,3.465);
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
   
   Double_t _fx3008[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3008[25] = {
   0.8319952,
   0.8519114,
   1.020429,
   0.9680178,
   1.013357,
   0.9572419,
   0.9357762,
   0.9131295,
   1.00868,
   0.9334374,
   0.8681432,
   0.8987471,
   0.9540288,
   1.078247,
   1.019236,
   0.8754493,
   1.194299,
   0.9726168,
   0.9870374,
   1.06941,
   0.9139188,
   1.051005,
   0.7231076,
   0.9665877,
   0.8175697};
   Double_t _felx3008[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3008[25] = {
   0.09313374,
   0.05783152,
   0.05241593,
   0.04740404,
   0.04803775,
   0.04822515,
   0.04794127,
   0.0498896,
   0.05692313,
   0.05868471,
   0.05866368,
   0.06419622,
   0.07014159,
   0.0847151,
   0.08435253,
   0.0795863,
   0.09918111,
   0.0923167,
   0.09725568,
   0.1038703,
   0.1004537,
   0.1162186,
   0.1125307,
   0.1581561,
   0.2480111};
   Double_t _fehx3008[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3008[25] = {
   0.09108724,
   0.05783152,
   0.05241593,
   0.04740404,
   0.04803775,
   0.04822515,
   0.04794127,
   0.0498896,
   0.05692313,
   0.05868471,
   0.05866368,
   0.06419622,
   0.07014159,
   0.0847151,
   0.08435253,
   0.0795863,
   0.09918111,
   0.0923167,
   0.09725568,
   0.1038703,
   0.09828498,
   0.1136949,
   0.109085,
   0.1530604,
   0.2327008};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,3.465);
   Graph_Graph3008->SetMinimum(0.4971664);
   Graph_Graph3008->SetMaximum(1.365872);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
