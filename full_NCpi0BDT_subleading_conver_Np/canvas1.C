#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 19:45:10 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-14.44,101.5385,1520.76);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hmc__1->SetBinContent(1,710.8427);
   hmc__1->SetBinContent(2,224.8902);
   hmc__1->SetBinContent(3,238.0521);
   hmc__1->SetBinContent(4,230.4302);
   hmc__1->SetBinContent(5,231.0907);
   hmc__1->SetBinContent(6,211.3045);
   hmc__1->SetBinContent(7,204.6105);
   hmc__1->SetBinContent(8,185.3718);
   hmc__1->SetBinContent(9,172.2473);
   hmc__1->SetBinContent(10,151.764);
   hmc__1->SetBinContent(11,130.5305);
   hmc__1->SetBinContent(12,117.4384);
   hmc__1->SetBinContent(13,107.5232);
   hmc__1->SetBinContent(14,89.32949);
   hmc__1->SetBinContent(15,75.13177);
   hmc__1->SetBinContent(16,67.15144);
   hmc__1->SetBinContent(17,60.31204);
   hmc__1->SetBinContent(18,52.51889);
   hmc__1->SetBinContent(19,43.92329);
   hmc__1->SetBinContent(20,41.55754);
   hmc__1->SetBinContent(21,35.3202);
   hmc__1->SetBinContent(22,31.40754);
   hmc__1->SetBinContent(23,33.46369);
   hmc__1->SetBinContent(24,30.16858);
   hmc__1->SetBinContent(25,24.81775);
   hmc__1->SetBinContent(26,319.803);
   hmc__1->SetBinError(1,137.7834);
   hmc__1->SetBinError(2,48.99139);
   hmc__1->SetBinError(3,47.6602);
   hmc__1->SetBinError(4,52.54228);
   hmc__1->SetBinError(5,47.93712);
   hmc__1->SetBinError(6,43.71859);
   hmc__1->SetBinError(7,42.44169);
   hmc__1->SetBinError(8,40.33476);
   hmc__1->SetBinError(9,33.63567);
   hmc__1->SetBinError(10,32.00659);
   hmc__1->SetBinError(11,28.2534);
   hmc__1->SetBinError(12,25.3421);
   hmc__1->SetBinError(13,21.0347);
   hmc__1->SetBinError(14,18.24604);
   hmc__1->SetBinError(15,16.8491);
   hmc__1->SetBinError(16,15.75688);
   hmc__1->SetBinError(17,14.40092);
   hmc__1->SetBinError(18,12.75316);
   hmc__1->SetBinError(19,10.28375);
   hmc__1->SetBinError(20,10.50275);
   hmc__1->SetBinError(21,8.765107);
   hmc__1->SetBinError(22,7.233042);
   hmc__1->SetBinError(23,7.807573);
   hmc__1->SetBinError(24,8.337111);
   hmc__1->SetBinError(25,7.422157);
   hmc__1->SetBinError(26,67.51313);
   hmc__1->SetMinimum(-14.44);
   hmc__1->SetMaximum(1444);
   hmc__1->SetEntries(3775.136);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,90);
   hs1_stack_1->SetMinimum(-1.293891e-08);
   hs1_stack_1->SetMaximum(746.3848);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hbadmatch_stack_1->SetBinContent(1,20.21154);
   hbadmatch_stack_1->SetBinContent(2,2.689659);
   hbadmatch_stack_1->SetBinContent(3,5.092959);
   hbadmatch_stack_1->SetBinContent(4,4.693038);
   hbadmatch_stack_1->SetBinContent(5,4.567717);
   hbadmatch_stack_1->SetBinContent(6,3.250108);
   hbadmatch_stack_1->SetBinContent(7,6.628988);
   hbadmatch_stack_1->SetBinContent(8,3.812222);
   hbadmatch_stack_1->SetBinContent(9,2.789552);
   hbadmatch_stack_1->SetBinContent(10,3.475979);
   hbadmatch_stack_1->SetBinContent(11,5.185063);
   hbadmatch_stack_1->SetBinContent(12,2.910067);
   hbadmatch_stack_1->SetBinContent(13,2.893105);
   hbadmatch_stack_1->SetBinContent(14,2.213408);
   hbadmatch_stack_1->SetBinContent(15,1.515262);
   hbadmatch_stack_1->SetBinContent(16,2.994448);
   hbadmatch_stack_1->SetBinContent(17,0.9303237);
   hbadmatch_stack_1->SetBinContent(18,1.447784);
   hbadmatch_stack_1->SetBinContent(19,2.554793);
   hbadmatch_stack_1->SetBinContent(20,1.518779);
   hbadmatch_stack_1->SetBinContent(21,1.307496);
   hbadmatch_stack_1->SetBinContent(22,1.614217);
   hbadmatch_stack_1->SetBinContent(23,0.7319179);
   hbadmatch_stack_1->SetBinContent(24,1.099518);
   hbadmatch_stack_1->SetBinContent(25,0.9718649);
   hbadmatch_stack_1->SetBinContent(26,11.85355);
   hbadmatch_stack_1->SetBinError(1,2.519888);
   hbadmatch_stack_1->SetBinError(2,0.7980711);
   hbadmatch_stack_1->SetBinError(3,1.210623);
   hbadmatch_stack_1->SetBinError(4,1.056454);
   hbadmatch_stack_1->SetBinError(5,1.269648);
   hbadmatch_stack_1->SetBinError(6,0.8950277);
   hbadmatch_stack_1->SetBinError(7,1.373632);
   hbadmatch_stack_1->SetBinError(8,1.227529);
   hbadmatch_stack_1->SetBinError(9,0.9512562);
   hbadmatch_stack_1->SetBinError(10,1.065195);
   hbadmatch_stack_1->SetBinError(11,1.913279);
   hbadmatch_stack_1->SetBinError(12,0.9073655);
   hbadmatch_stack_1->SetBinError(13,0.8718675);
   hbadmatch_stack_1->SetBinError(14,0.7672007);
   hbadmatch_stack_1->SetBinError(15,0.6500288);
   hbadmatch_stack_1->SetBinError(16,1.709093);
   hbadmatch_stack_1->SetBinError(17,0.4814682);
   hbadmatch_stack_1->SetBinError(18,0.619765);
   hbadmatch_stack_1->SetBinError(19,0.8416047);
   hbadmatch_stack_1->SetBinError(20,0.5892709);
   hbadmatch_stack_1->SetBinError(21,0.6211578);
   hbadmatch_stack_1->SetBinError(22,0.6239832);
   hbadmatch_stack_1->SetBinError(23,0.438694);
   hbadmatch_stack_1->SetBinError(24,0.5646683);
   hbadmatch_stack_1->SetBinError(25,0.500027);
   hbadmatch_stack_1->SetBinError(26,1.889023);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hext_stack_2->SetBinContent(1,100.1296);
   hext_stack_2->SetBinContent(2,23.05306);
   hext_stack_2->SetBinContent(3,31.69255);
   hext_stack_2->SetBinContent(4,27.27187);
   hext_stack_2->SetBinContent(5,31.48349);
   hext_stack_2->SetBinContent(6,21.33451);
   hext_stack_2->SetBinContent(7,19.67064);
   hext_stack_2->SetBinContent(8,19.59284);
   hext_stack_2->SetBinContent(9,27.10904);
   hext_stack_2->SetBinContent(10,21.37205);
   hext_stack_2->SetBinContent(11,11.66281);
   hext_stack_2->SetBinContent(12,13.42325);
   hext_stack_2->SetBinContent(13,14.64304);
   hext_stack_2->SetBinContent(14,10.85679);
   hext_stack_2->SetBinContent(15,8.433196);
   hext_stack_2->SetBinContent(16,4.303776);
   hext_stack_2->SetBinContent(17,6.736189);
   hext_stack_2->SetBinContent(18,7.67625);
   hext_stack_2->SetBinContent(19,6.470814);
   hext_stack_2->SetBinContent(20,4.863188);
   hext_stack_2->SetBinContent(21,5.001641);
   hext_stack_2->SetBinContent(22,4.620993);
   hext_stack_2->SetBinContent(23,6.221437);
   hext_stack_2->SetBinContent(24,3.565599);
   hext_stack_2->SetBinContent(25,2.973055);
   hext_stack_2->SetBinContent(26,43.28311);
   hext_stack_2->SetBinError(1,6.762856);
   hext_stack_2->SetBinError(2,3.207083);
   hext_stack_2->SetBinError(3,3.857509);
   hext_stack_2->SetBinError(4,3.482078);
   hext_stack_2->SetBinError(5,3.763715);
   hext_stack_2->SetBinError(6,3.17829);
   hext_stack_2->SetBinError(7,2.940134);
   hext_stack_2->SetBinError(8,2.952866);
   hext_stack_2->SetBinError(9,3.715716);
   hext_stack_2->SetBinError(10,3.093052);
   hext_stack_2->SetBinError(11,2.235751);
   hext_stack_2->SetBinError(12,2.472532);
   hext_stack_2->SetBinError(13,2.570871);
   hext_stack_2->SetBinError(14,2.113466);
   hext_stack_2->SetBinError(15,1.88251);
   hext_stack_2->SetBinError(16,1.250299);
   hext_stack_2->SetBinError(17,1.660237);
   hext_stack_2->SetBinError(18,1.934366);
   hext_stack_2->SetBinError(19,1.686238);
   hext_stack_2->SetBinError(20,1.383773);
   hext_stack_2->SetBinError(21,1.582242);
   hext_stack_2->SetBinError(22,1.367364);
   hext_stack_2->SetBinError(23,1.731894);
   hext_stack_2->SetBinError(24,1.22225);
   hext_stack_2->SetBinError(25,1.346105);
   hext_stack_2->SetBinError(26,4.391053);
   hext_stack_2->SetEntries(1136);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hdirt_stack_3->SetBinContent(1,12.1045);
   hdirt_stack_3->SetBinContent(2,2.916103);
   hdirt_stack_3->SetBinContent(3,4.446784);
   hdirt_stack_3->SetBinContent(4,3.319147);
   hdirt_stack_3->SetBinContent(5,3.371118);
   hdirt_stack_3->SetBinContent(6,4.859375);
   hdirt_stack_3->SetBinContent(7,3.420578);
   hdirt_stack_3->SetBinContent(8,2.385376);
   hdirt_stack_3->SetBinContent(9,2.307345);
   hdirt_stack_3->SetBinContent(10,1.205538);
   hdirt_stack_3->SetBinContent(11,1.208973);
   hdirt_stack_3->SetBinContent(12,1.114166);
   hdirt_stack_3->SetBinContent(13,0.9280674);
   hdirt_stack_3->SetBinContent(14,1.169656);
   hdirt_stack_3->SetBinContent(15,1.574942);
   hdirt_stack_3->SetBinContent(16,1.292203);
   hdirt_stack_3->SetBinContent(17,0.7248526);
   hdirt_stack_3->SetBinContent(18,1.589627);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.3001209);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,0.8430812);
   hdirt_stack_3->SetBinContent(23,0.7385731);
   hdirt_stack_3->SetBinContent(24,0.3569671);
   hdirt_stack_3->SetBinContent(26,4.438187);
   hdirt_stack_3->SetBinError(1,1.932974);
   hdirt_stack_3->SetBinError(2,0.906048);
   hdirt_stack_3->SetBinError(3,1.153805);
   hdirt_stack_3->SetBinError(4,0.9412196);
   hdirt_stack_3->SetBinError(5,0.9906152);
   hdirt_stack_3->SetBinError(6,1.25506);
   hdirt_stack_3->SetBinError(7,0.9430507);
   hdirt_stack_3->SetBinError(8,0.7820284);
   hdirt_stack_3->SetBinError(9,1.178513);
   hdirt_stack_3->SetBinError(10,0.5515436);
   hdirt_stack_3->SetBinError(11,0.4690424);
   hdirt_stack_3->SetBinError(12,0.569712);
   hdirt_stack_3->SetBinError(13,0.4492904);
   hdirt_stack_3->SetBinError(14,0.54277);
   hdirt_stack_3->SetBinError(15,0.6841233);
   hdirt_stack_3->SetBinError(16,0.6334916);
   hdirt_stack_3->SetBinError(17,0.5136932);
   hdirt_stack_3->SetBinError(18,0.6997764);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.2128937);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.4525761);
   hdirt_stack_3->SetBinError(23,0.5240987);
   hdirt_stack_3->SetBinError(24,0.258803);
   hdirt_stack_3->SetBinError(26,1.117573);
   hdirt_stack_3->SetEntries(238);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   houtFV_stack_4->SetBinContent(1,96.86945);
   houtFV_stack_4->SetBinContent(2,25.5865);
   houtFV_stack_4->SetBinContent(3,34.34532);
   houtFV_stack_4->SetBinContent(4,28.38367);
   houtFV_stack_4->SetBinContent(5,26.53872);
   houtFV_stack_4->SetBinContent(6,26.30386);
   houtFV_stack_4->SetBinContent(7,25.39052);
   houtFV_stack_4->SetBinContent(8,23.15719);
   houtFV_stack_4->SetBinContent(9,21.21973);
   houtFV_stack_4->SetBinContent(10,19.33273);
   houtFV_stack_4->SetBinContent(11,18.00761);
   houtFV_stack_4->SetBinContent(12,17.7333);
   houtFV_stack_4->SetBinContent(13,16.09833);
   houtFV_stack_4->SetBinContent(14,13.45498);
   houtFV_stack_4->SetBinContent(15,9.745187);
   houtFV_stack_4->SetBinContent(16,8.449963);
   houtFV_stack_4->SetBinContent(17,8.9354);
   houtFV_stack_4->SetBinContent(18,5.869521);
   houtFV_stack_4->SetBinContent(19,4.691348);
   houtFV_stack_4->SetBinContent(20,4.447166);
   houtFV_stack_4->SetBinContent(21,6.74702);
   houtFV_stack_4->SetBinContent(22,4.211089);
   houtFV_stack_4->SetBinContent(23,4.568258);
   houtFV_stack_4->SetBinContent(24,2.734337);
   houtFV_stack_4->SetBinContent(25,2.41193);
   houtFV_stack_4->SetBinContent(26,50.63077);
   houtFV_stack_4->SetBinError(1,5.005974);
   houtFV_stack_4->SetBinError(2,2.72335);
   houtFV_stack_4->SetBinError(3,2.969988);
   houtFV_stack_4->SetBinError(4,2.740652);
   houtFV_stack_4->SetBinError(5,2.574316);
   houtFV_stack_4->SetBinError(6,2.533441);
   houtFV_stack_4->SetBinError(7,2.488934);
   houtFV_stack_4->SetBinError(8,2.382764);
   houtFV_stack_4->SetBinError(9,2.300294);
   houtFV_stack_4->SetBinError(10,2.185894);
   houtFV_stack_4->SetBinError(11,2.107444);
   houtFV_stack_4->SetBinError(12,2.169921);
   houtFV_stack_4->SetBinError(13,2.060215);
   houtFV_stack_4->SetBinError(14,1.772216);
   houtFV_stack_4->SetBinError(15,1.546734);
   houtFV_stack_4->SetBinError(16,1.456389);
   houtFV_stack_4->SetBinError(17,1.500977);
   houtFV_stack_4->SetBinError(18,1.243121);
   houtFV_stack_4->SetBinError(19,1.056141);
   houtFV_stack_4->SetBinError(20,1.093472);
   houtFV_stack_4->SetBinError(21,1.271649);
   houtFV_stack_4->SetBinError(22,0.961256);
   houtFV_stack_4->SetBinError(23,1.120489);
   houtFV_stack_4->SetBinError(24,0.8558255);
   houtFV_stack_4->SetBinError(25,0.7898793);
   houtFV_stack_4->SetBinError(26,3.665087);
   houtFV_stack_4->SetEntries(2163);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,13.54319);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.055412);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.169836);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.154058);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.429146);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.693704);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.894141);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.791592);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.305746);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.22371);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.498806);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.833942);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.037956);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.313716);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.509848);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.553198);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.35349);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.702076);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.380558);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.823054);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,9.604105);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.257525);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.917886);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9079737);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9082951);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7835696);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8601698);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6876715);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6450832);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6314641);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6595029);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.607004);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6658172);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5741058);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4996144);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5237648);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.594588);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4189688);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4740994);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3962917);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3085891);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.9432244);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,264.5733);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,105.1495);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,100.5168);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,100.1386);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,101.8546);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,94.30219);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,87.41221);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,81.53387);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,75.81742);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,62.24017);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,56.02858);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,47.44663);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,42.20604);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,37.36905);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,31.02575);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,26.55599);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,22.6881);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,21.38876);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,16.54725);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,17.48806);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,12.71414);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,11.8798);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,11.32096);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,11.88046);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,10.13737);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,106.5099);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,5.322632);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.34741);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.221844);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.252812);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.239113);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.12033);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.037787);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.941745);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.907132);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.582419);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.456952);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.248625);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.058498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.007025);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.806725);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.682548);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.525185);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.502733);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.264135);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.377229);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.148268);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.11409);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.030453);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,1.108018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.045608);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,3.401114);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hCCpi0inFV_stack_7->SetBinContent(1,107.512);
   hCCpi0inFV_stack_7->SetBinContent(2,36.09312);
   hCCpi0inFV_stack_7->SetBinContent(3,34.68942);
   hCCpi0inFV_stack_7->SetBinContent(4,38.01761);
   hCCpi0inFV_stack_7->SetBinContent(5,40.12083);
   hCCpi0inFV_stack_7->SetBinContent(6,38.72578);
   hCCpi0inFV_stack_7->SetBinContent(7,36.95277);
   hCCpi0inFV_stack_7->SetBinContent(8,36.24335);
   hCCpi0inFV_stack_7->SetBinContent(9,25.64456);
   hCCpi0inFV_stack_7->SetBinContent(10,25.44574);
   hCCpi0inFV_stack_7->SetBinContent(11,20.64305);
   hCCpi0inFV_stack_7->SetBinContent(12,21.59822);
   hCCpi0inFV_stack_7->SetBinContent(13,17.63727);
   hCCpi0inFV_stack_7->SetBinContent(14,15.93697);
   hCCpi0inFV_stack_7->SetBinContent(15,12.77638);
   hCCpi0inFV_stack_7->SetBinContent(16,13.43471);
   hCCpi0inFV_stack_7->SetBinContent(17,14.1754);
   hCCpi0inFV_stack_7->SetBinContent(18,8.017893);
   hCCpi0inFV_stack_7->SetBinContent(19,6.453941);
   hCCpi0inFV_stack_7->SetBinContent(20,6.689568);
   hCCpi0inFV_stack_7->SetBinContent(21,3.951585);
   hCCpi0inFV_stack_7->SetBinContent(22,4.102892);
   hCCpi0inFV_stack_7->SetBinContent(23,4.638094);
   hCCpi0inFV_stack_7->SetBinContent(24,5.288256);
   hCCpi0inFV_stack_7->SetBinContent(25,4.891444);
   hCCpi0inFV_stack_7->SetBinContent(26,47.31617);
   hCCpi0inFV_stack_7->SetBinError(1,5.185193);
   hCCpi0inFV_stack_7->SetBinError(2,3.001329);
   hCCpi0inFV_stack_7->SetBinError(3,2.917358);
   hCCpi0inFV_stack_7->SetBinError(4,3.140152);
   hCCpi0inFV_stack_7->SetBinError(5,3.190897);
   hCCpi0inFV_stack_7->SetBinError(6,3.115004);
   hCCpi0inFV_stack_7->SetBinError(7,3.047615);
   hCCpi0inFV_stack_7->SetBinError(8,3.004615);
   hCCpi0inFV_stack_7->SetBinError(9,2.531897);
   hCCpi0inFV_stack_7->SetBinError(10,2.594931);
   hCCpi0inFV_stack_7->SetBinError(11,2.25316);
   hCCpi0inFV_stack_7->SetBinError(12,2.336098);
   hCCpi0inFV_stack_7->SetBinError(13,2.095039);
   hCCpi0inFV_stack_7->SetBinError(14,2.022376);
   hCCpi0inFV_stack_7->SetBinError(15,1.801752);
   hCCpi0inFV_stack_7->SetBinError(16,1.825147);
   hCCpi0inFV_stack_7->SetBinError(17,1.846035);
   hCCpi0inFV_stack_7->SetBinError(18,1.382866);
   hCCpi0inFV_stack_7->SetBinError(19,1.28803);
   hCCpi0inFV_stack_7->SetBinError(20,1.309512);
   hCCpi0inFV_stack_7->SetBinError(21,1.057495);
   hCCpi0inFV_stack_7->SetBinError(22,1.000002);
   hCCpi0inFV_stack_7->SetBinError(23,1.074132);
   hCCpi0inFV_stack_7->SetBinError(24,1.110933);
   hCCpi0inFV_stack_7->SetBinError(25,1.074921);
   hCCpi0inFV_stack_7->SetBinError(26,3.466364);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hNCinFV_stack_8->SetBinContent(1,27.77146);
   hNCinFV_stack_8->SetBinContent(2,7.283913);
   hNCinFV_stack_8->SetBinContent(3,6.845682);
   hNCinFV_stack_8->SetBinContent(4,8.924786);
   hNCinFV_stack_8->SetBinContent(5,7.667809);
   hNCinFV_stack_8->SetBinContent(6,8.204701);
   hNCinFV_stack_8->SetBinContent(7,7.184169);
   hNCinFV_stack_8->SetBinContent(8,5.970302);
   hNCinFV_stack_8->SetBinContent(9,5.913668);
   hNCinFV_stack_8->SetBinContent(10,6.74871);
   hNCinFV_stack_8->SetBinContent(11,4.944697);
   hNCinFV_stack_8->SetBinContent(12,3.909558);
   hNCinFV_stack_8->SetBinContent(13,5.13465);
   hNCinFV_stack_8->SetBinContent(14,4.345016);
   hNCinFV_stack_8->SetBinContent(15,2.694);
   hNCinFV_stack_8->SetBinContent(16,3.56938);
   hNCinFV_stack_8->SetBinContent(17,1.807394);
   hNCinFV_stack_8->SetBinContent(18,1.610679);
   hNCinFV_stack_8->SetBinContent(19,2.192373);
   hNCinFV_stack_8->SetBinContent(20,1.944219);
   hNCinFV_stack_8->SetBinContent(21,1.660551);
   hNCinFV_stack_8->SetBinContent(22,1.322064);
   hNCinFV_stack_8->SetBinContent(23,2.050601);
   hNCinFV_stack_8->SetBinContent(24,0.3917402);
   hNCinFV_stack_8->SetBinContent(25,0.8770706);
   hNCinFV_stack_8->SetBinContent(26,14.16763);
   hNCinFV_stack_8->SetBinError(1,2.712223);
   hNCinFV_stack_8->SetBinError(2,1.33098);
   hNCinFV_stack_8->SetBinError(3,1.31748);
   hNCinFV_stack_8->SetBinError(4,1.544601);
   hNCinFV_stack_8->SetBinError(5,1.42953);
   hNCinFV_stack_8->SetBinError(6,1.482557);
   hNCinFV_stack_8->SetBinError(7,1.360445);
   hNCinFV_stack_8->SetBinError(8,1.210899);
   hNCinFV_stack_8->SetBinError(9,1.226083);
   hNCinFV_stack_8->SetBinError(10,1.271909);
   hNCinFV_stack_8->SetBinError(11,1.056943);
   hNCinFV_stack_8->SetBinError(12,0.9811382);
   hNCinFV_stack_8->SetBinError(13,1.07386);
   hNCinFV_stack_8->SetBinError(14,1.093476);
   hNCinFV_stack_8->SetBinError(15,0.7598915);
   hNCinFV_stack_8->SetBinError(16,0.9202779);
   hNCinFV_stack_8->SetBinError(17,0.7084844);
   hNCinFV_stack_8->SetBinError(18,0.6806271);
   hNCinFV_stack_8->SetBinError(19,0.7589683);
   hNCinFV_stack_8->SetBinError(20,0.6621824);
   hNCinFV_stack_8->SetBinError(21,0.650847);
   hNCinFV_stack_8->SetBinError(22,0.5554667);
   hNCinFV_stack_8->SetBinError(23,0.7068742);
   hNCinFV_stack_8->SetBinError(24,0.2770047);
   hNCinFV_stack_8->SetBinError(25,0.5197486);
   hNCinFV_stack_8->SetBinError(26,1.860907);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hnumuCCinFV_stack_9->SetBinContent(1,63.91109);
   hnumuCCinFV_stack_9->SetBinContent(2,12.79513);
   hnumuCCinFV_stack_9->SetBinContent(3,12.41799);
   hnumuCCinFV_stack_9->SetBinContent(4,11.35022);
   hnumuCCinFV_stack_9->SetBinContent(5,8.32361);
   hnumuCCinFV_stack_9->SetBinContent(6,5.862824);
   hnumuCCinFV_stack_9->SetBinContent(7,10.24637);
   hnumuCCinFV_stack_9->SetBinContent(8,8.161733);
   hnumuCCinFV_stack_9->SetBinContent(9,6.94352);
   hnumuCCinFV_stack_9->SetBinContent(10,6.682902);
   hnumuCCinFV_stack_9->SetBinContent(11,7.998772);
   hnumuCCinFV_stack_9->SetBinContent(12,4.730562);
   hnumuCCinFV_stack_9->SetBinContent(13,3.63898);
   hnumuCCinFV_stack_9->SetBinContent(14,1.474875);
   hnumuCCinFV_stack_9->SetBinContent(15,3.564282);
   hnumuCCinFV_stack_9->SetBinContent(16,3.542116);
   hnumuCCinFV_stack_9->SetBinContent(17,2.570839);
   hnumuCCinFV_stack_9->SetBinContent(18,3.216285);
   hnumuCCinFV_stack_9->SetBinContent(19,3.16819);
   hnumuCCinFV_stack_9->SetBinContent(20,3.026325);
   hnumuCCinFV_stack_9->SetBinContent(21,2.340053);
   hnumuCCinFV_stack_9->SetBinContent(22,1.943788);
   hnumuCCinFV_stack_9->SetBinContent(23,1.430938);
   hnumuCCinFV_stack_9->SetBinContent(24,3.804034);
   hnumuCCinFV_stack_9->SetBinContent(25,1.92618);
   hnumuCCinFV_stack_9->SetBinContent(26,24.11217);
   hnumuCCinFV_stack_9->SetBinError(1,4.549379);
   hnumuCCinFV_stack_9->SetBinError(2,1.812024);
   hnumuCCinFV_stack_9->SetBinError(3,2.786399);
   hnumuCCinFV_stack_9->SetBinError(4,2.561829);
   hnumuCCinFV_stack_9->SetBinError(5,1.481353);
   hnumuCCinFV_stack_9->SetBinError(6,1.193613);
   hnumuCCinFV_stack_9->SetBinError(7,1.674109);
   hnumuCCinFV_stack_9->SetBinError(8,2.421029);
   hnumuCCinFV_stack_9->SetBinError(9,1.351262);
   hnumuCCinFV_stack_9->SetBinError(10,1.55457);
   hnumuCCinFV_stack_9->SetBinError(11,1.687828);
   hnumuCCinFV_stack_9->SetBinError(12,1.138892);
   hnumuCCinFV_stack_9->SetBinError(13,0.9787957);
   hnumuCCinFV_stack_9->SetBinError(14,0.5608181);
   hnumuCCinFV_stack_9->SetBinError(15,0.9982861);
   hnumuCCinFV_stack_9->SetBinError(16,0.9887172);
   hnumuCCinFV_stack_9->SetBinError(17,0.9114147);
   hnumuCCinFV_stack_9->SetBinError(18,0.9375846);
   hnumuCCinFV_stack_9->SetBinError(19,0.9115998);
   hnumuCCinFV_stack_9->SetBinError(20,1.191641);
   hnumuCCinFV_stack_9->SetBinError(21,0.8783747);
   hnumuCCinFV_stack_9->SetBinError(22,0.7738756);
   hnumuCCinFV_stack_9->SetBinError(23,0.6148876);
   hnumuCCinFV_stack_9->SetBinError(24,1.538245);
   hnumuCCinFV_stack_9->SetBinError(25,1.054702);
   hnumuCCinFV_stack_9->SetBinError(26,2.750675);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hnueCCinFV_stack_10->SetBinContent(1,4.216596);
   hnueCCinFV_stack_10->SetBinContent(2,2.267722);
   hnueCCinFV_stack_10->SetBinContent(3,0.8347859);
   hnueCCinFV_stack_10->SetBinContent(4,1.177157);
   hnueCCinFV_stack_10->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_10->SetBinContent(6,1.767464);
   hnueCCinFV_stack_10->SetBinContent(7,2.810091);
   hnueCCinFV_stack_10->SetBinContent(8,0.7232802);
   hnueCCinFV_stack_10->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(10,1.03649);
   hnueCCinFV_stack_10->SetBinContent(11,1.352116);
   hnueCCinFV_stack_10->SetBinContent(12,0.7386991);
   hnueCCinFV_stack_10->SetBinContent(13,1.305779);
   hnueCCinFV_stack_10->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(15,1.292927);
   hnueCCinFV_stack_10->SetBinContent(16,0.4556582);
   hnueCCinFV_stack_10->SetBinContent(17,0.3900497);
   hnueCCinFV_stack_10->SetBinContent(18,1.642976e-05);
   hnueCCinFV_stack_10->SetBinContent(19,0.2451269);
   hnueCCinFV_stack_10->SetBinContent(20,0.6252881);
   hnueCCinFV_stack_10->SetBinContent(21,0.9043458);
   hnueCCinFV_stack_10->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(23,0.9398632);
   hnueCCinFV_stack_10->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(26,7.887442);
   hnueCCinFV_stack_10->SetBinError(1,1.474355);
   hnueCCinFV_stack_10->SetBinError(2,0.8768042);
   hnueCCinFV_stack_10->SetBinError(3,0.4196513);
   hnueCCinFV_stack_10->SetBinError(4,0.533728);
   hnueCCinFV_stack_10->SetBinError(5,0.4394482);
   hnueCCinFV_stack_10->SetBinError(6,0.7095005);
   hnueCCinFV_stack_10->SetBinError(7,1.424906);
   hnueCCinFV_stack_10->SetBinError(8,0.4283181);
   hnueCCinFV_stack_10->SetBinError(9,0.1967154);
   hnueCCinFV_stack_10->SetBinError(10,0.6315824);
   hnueCCinFV_stack_10->SetBinError(11,0.6836999);
   hnueCCinFV_stack_10->SetBinError(12,0.564419);
   hnueCCinFV_stack_10->SetBinError(13,0.5389249);
   hnueCCinFV_stack_10->SetBinError(14,0.1950249);
   hnueCCinFV_stack_10->SetBinError(15,0.6861848);
   hnueCCinFV_stack_10->SetBinError(16,0.3255218);
   hnueCCinFV_stack_10->SetBinError(17,0.2758068);
   hnueCCinFV_stack_10->SetBinError(18,1.642976e-05);
   hnueCCinFV_stack_10->SetBinError(19,0.2451269);
   hnueCCinFV_stack_10->SetBinError(20,0.461976);
   hnueCCinFV_stack_10->SetBinError(21,0.5706973);
   hnueCCinFV_stack_10->SetBinError(22,0.3401776);
   hnueCCinFV_stack_10->SetBinError(23,0.7687429);
   hnueCCinFV_stack_10->SetBinError(24,0.1967154);
   hnueCCinFV_stack_10->SetBinError(25,0.1967154);
   hnueCCinFV_stack_10->SetBinError(26,2.195027);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);
   hmcerror__2->SetBinContent(1,710.8427);
   hmcerror__2->SetBinContent(2,224.8902);
   hmcerror__2->SetBinContent(3,238.0521);
   hmcerror__2->SetBinContent(4,230.4302);
   hmcerror__2->SetBinContent(5,231.0907);
   hmcerror__2->SetBinContent(6,211.3045);
   hmcerror__2->SetBinContent(7,204.6105);
   hmcerror__2->SetBinContent(8,185.3718);
   hmcerror__2->SetBinContent(9,172.2473);
   hmcerror__2->SetBinContent(10,151.764);
   hmcerror__2->SetBinContent(11,130.5305);
   hmcerror__2->SetBinContent(12,117.4384);
   hmcerror__2->SetBinContent(13,107.5232);
   hmcerror__2->SetBinContent(14,89.32949);
   hmcerror__2->SetBinContent(15,75.13177);
   hmcerror__2->SetBinContent(16,67.15144);
   hmcerror__2->SetBinContent(17,60.31204);
   hmcerror__2->SetBinContent(18,52.51889);
   hmcerror__2->SetBinContent(19,43.92329);
   hmcerror__2->SetBinContent(20,41.55754);
   hmcerror__2->SetBinContent(21,35.3202);
   hmcerror__2->SetBinContent(22,31.40754);
   hmcerror__2->SetBinContent(23,33.46369);
   hmcerror__2->SetBinContent(24,30.16858);
   hmcerror__2->SetBinContent(25,24.81775);
   hmcerror__2->SetBinContent(26,319.803);
   hmcerror__2->SetBinError(1,137.7834);
   hmcerror__2->SetBinError(2,48.99139);
   hmcerror__2->SetBinError(3,47.6602);
   hmcerror__2->SetBinError(4,52.54228);
   hmcerror__2->SetBinError(5,47.93712);
   hmcerror__2->SetBinError(6,43.71859);
   hmcerror__2->SetBinError(7,42.44169);
   hmcerror__2->SetBinError(8,40.33476);
   hmcerror__2->SetBinError(9,33.63567);
   hmcerror__2->SetBinError(10,32.00659);
   hmcerror__2->SetBinError(11,28.2534);
   hmcerror__2->SetBinError(12,25.3421);
   hmcerror__2->SetBinError(13,21.0347);
   hmcerror__2->SetBinError(14,18.24604);
   hmcerror__2->SetBinError(15,16.8491);
   hmcerror__2->SetBinError(16,15.75688);
   hmcerror__2->SetBinError(17,14.40092);
   hmcerror__2->SetBinError(18,12.75316);
   hmcerror__2->SetBinError(19,10.28375);
   hmcerror__2->SetBinError(20,10.50275);
   hmcerror__2->SetBinError(21,8.765107);
   hmcerror__2->SetBinError(22,7.233042);
   hmcerror__2->SetBinError(23,7.807573);
   hmcerror__2->SetBinError(24,8.337111);
   hmcerror__2->SetBinError(25,7.422157);
   hmcerror__2->SetBinError(26,67.51313);
   hmcerror__2->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3001[25] = {
   722,
   224,
   249,
   237,
   234,
   189,
   216,
   164,
   137,
   147,
   145,
   122,
   103,
   99,
   77,
   92,
   59,
   58,
   43,
   47,
   42,
   31,
   29,
   27,
   21};
   Double_t _felx3001[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3001[25] = {
   26.87006,
   14.96663,
   15.77973,
   15.3948,
   15.29706,
   13.74773,
   14.69694,
   12.80625,
   11.7047,
   12.12436,
   12.04159,
   11.04536,
   10.14889,
   10.0712,
   8.8995,
   9.7138,
   7.8097,
   7.7446,
   6.6917,
   6.9882,
   6.6155,
   5.7094,
   5.5285,
   5.3414,
   4.7354};
   Double_t _fehx3001[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3001[25] = {
   26.87006,
   14.96663,
   15.77973,
   15.3948,
   15.29706,
   13.74773,
   14.69694,
   12.80625,
   11.7047,
   12.12436,
   12.04159,
   11.04536,
   10.14889,
   9.87,
   8.6976,
   9.513,
   7.6066,
   7.5415,
   6.4868,
   6.7839,
   6.4104,
   5.5017,
   5.3201,
   5.1322,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(14.63814);
   Graph_Graph3001->SetMaximum(822.1306);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.5/25","");
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

   ci = 1434;
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

   ci = 1435;
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

   ci = 1436;
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

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1450.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 579.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 131.0","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 195.1","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 24.9","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3002[25] = {
   0.193831,
   0.2178459,
   0.2002091,
   0.2280182,
   0.2074386,
   0.2068985,
   0.2074268,
   0.2175885,
   0.1952755,
   0.2108971,
   0.2164506,
   0.2157906,
   0.1956294,
   0.2042555,
   0.2242606,
   0.2346469,
   0.2387736,
   0.2428299,
   0.2341298,
   0.2527279,
   0.2481613,
   0.2302964,
   0.2333148,
   0.2763508,
   0.2990665};
   Double_t _fehx3002[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3002[25] = {
   0.193831,
   0.2178459,
   0.2002091,
   0.2280182,
   0.2074386,
   0.2068985,
   0.2074268,
   0.2175885,
   0.1952755,
   0.2108971,
   0.2164506,
   0.2157906,
   0.1956294,
   0.2042555,
   0.2242606,
   0.2346469,
   0.2387736,
   0.2428299,
   0.2341298,
   0.2527279,
   0.2481613,
   0.2302964,
   0.2333148,
   0.2763508,
   0.2990665};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3003[25] = {
   0.1818692,
   0.1912286,
   0.1812693,
   0.1920694,
   0.1905074,
   0.1922179,
   0.1953987,
   0.1898666,
   0.1790055,
   0.1816676,
   0.1954757,
   0.1878239,
   0.1788383,
   0.1902338,
   0.1938646,
   0.1990187,
   0.1949633,
   0.195432,
   0.1769942,
   0.2066991,
   0.2009098,
   0.1971332,
   0.1832544,
   0.2233994,
   0.2321072};
   Double_t _fehx3003[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3003[25] = {
   0.1818692,
   0.1912286,
   0.1812693,
   0.1920694,
   0.1905074,
   0.1922179,
   0.1953987,
   0.1898666,
   0.1790055,
   0.1816676,
   0.1954757,
   0.1878239,
   0.1788383,
   0.1902338,
   0.1938646,
   0.1990187,
   0.1949633,
   0.195432,
   0.1769942,
   0.2066991,
   0.2009098,
   0.1971332,
   0.1832544,
   0.2233994,
   0.2321072};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3004[25] = {
   1.015696,
   0.9960418,
   1.045989,
   1.028511,
   1.01259,
   0.8944437,
   1.055664,
   0.8847086,
   0.7953681,
   0.968609,
   1.110852,
   1.038842,
   0.9579327,
   1.108257,
   1.024866,
   1.370038,
   0.9782458,
   1.104365,
   0.9789796,
   1.130962,
   1.189121,
   0.9870243,
   0.8666109,
   0.8949708,
   0.8461685};
   Double_t _felx3004[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3004[25] = {
   0.03780029,
   0.06655084,
   0.06628689,
   0.06680897,
   0.06619505,
   0.0650612,
   0.07182887,
   0.06908414,
   0.06795289,
   0.07988952,
   0.0922512,
   0.09405238,
   0.09438791,
   0.1127422,
   0.1184519,
   0.1446551,
   0.1294882,
   0.1474631,
   0.1523497,
   0.1681572,
   0.1873007,
   0.1817844,
   0.1652089,
   0.1770517,
   0.190807};
   Double_t _fehx3004[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3004[25] = {
   0.03780029,
   0.06655084,
   0.06628689,
   0.06680897,
   0.06619505,
   0.0650612,
   0.07182887,
   0.06908414,
   0.06795289,
   0.07988952,
   0.0922512,
   0.09405238,
   0.09438791,
   0.1104898,
   0.1157646,
   0.1416649,
   0.1261207,
   0.143596,
   0.1476848,
   0.1632411,
   0.1814939,
   0.1751713,
   0.1589813,
   0.1701174,
   0.1822445};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.5697274);
   Graph_Graph3004->SetMaximum(1.597337);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",25,0,90);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
