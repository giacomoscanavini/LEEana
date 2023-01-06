#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 17:07:14 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-4.119231,-6.36,3.957692,703.2821);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__1->SetBinContent(1,297.1801);
   hmc__1->SetBinContent(2,302.1526);
   hmc__1->SetBinContent(3,296.2422);
   hmc__1->SetBinContent(4,262.185);
   hmc__1->SetBinContent(5,257.1187);
   hmc__1->SetBinContent(6,261.1782);
   hmc__1->SetBinContent(7,259.1034);
   hmc__1->SetBinContent(8,240.0363);
   hmc__1->SetBinContent(9,250.4671);
   hmc__1->SetBinContent(10,254.0358);
   hmc__1->SetBinContent(11,259.8434);
   hmc__1->SetBinContent(12,270.5738);
   hmc__1->SetBinContent(13,274.1103);
   hmc__1->SetBinContent(14,278.4806);
   hmc__1->SetBinContent(15,286.5707);
   hmc__1->SetBinContent(16,268.2083);
   hmc__1->SetBinContent(17,272.8187);
   hmc__1->SetBinContent(18,257.4207);
   hmc__1->SetBinContent(19,272.9715);
   hmc__1->SetBinContent(20,250.9459);
   hmc__1->SetBinContent(21,271.3873);
   hmc__1->SetBinContent(22,268.1094);
   hmc__1->SetBinContent(23,292.6707);
   hmc__1->SetBinContent(24,293.4882);
   hmc__1->SetBinContent(25,281.8056);
   hmc__1->SetBinError(1,79.5371);
   hmc__1->SetBinError(2,79.37801);
   hmc__1->SetBinError(3,83.46104);
   hmc__1->SetBinError(4,72.81128);
   hmc__1->SetBinError(5,66.90191);
   hmc__1->SetBinError(6,65.68523);
   hmc__1->SetBinError(7,75.08011);
   hmc__1->SetBinError(8,67.67881);
   hmc__1->SetBinError(9,71.80925);
   hmc__1->SetBinError(10,67.29499);
   hmc__1->SetBinError(11,78.6405);
   hmc__1->SetBinError(12,77.15371);
   hmc__1->SetBinError(13,71.55075);
   hmc__1->SetBinError(14,72.57972);
   hmc__1->SetBinError(15,76.27323);
   hmc__1->SetBinError(16,70.34701);
   hmc__1->SetBinError(17,72.53442);
   hmc__1->SetBinError(18,66.24422);
   hmc__1->SetBinError(19,70.67516);
   hmc__1->SetBinError(20,67.85639);
   hmc__1->SetBinError(21,66.62324);
   hmc__1->SetBinError(22,70.50709);
   hmc__1->SetBinError(23,75.83302);
   hmc__1->SetBinError(24,79.24648);
   hmc__1->SetBinError(25,85.98355);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-6.36);
   hmc__1->SetMaximum(667.8);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-3.15,3.15);
   hs1_stack_1->SetMinimum(-3.955423e-09);
   hs1_stack_1->SetMaximum(317.2602);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,6.909197);
   hbadmatch_stack_1->SetBinContent(2,8.208889);
   hbadmatch_stack_1->SetBinContent(3,7.185637);
   hbadmatch_stack_1->SetBinContent(4,6.107219);
   hbadmatch_stack_1->SetBinContent(5,7.600597);
   hbadmatch_stack_1->SetBinContent(6,8.944878);
   hbadmatch_stack_1->SetBinContent(7,7.422173);
   hbadmatch_stack_1->SetBinContent(8,5.822155);
   hbadmatch_stack_1->SetBinContent(9,7.381112);
   hbadmatch_stack_1->SetBinContent(10,5.114214);
   hbadmatch_stack_1->SetBinContent(11,8.369024);
   hbadmatch_stack_1->SetBinContent(12,6.936223);
   hbadmatch_stack_1->SetBinContent(13,5.551156);
   hbadmatch_stack_1->SetBinContent(14,5.135812);
   hbadmatch_stack_1->SetBinContent(15,9.33967);
   hbadmatch_stack_1->SetBinContent(16,7.246881);
   hbadmatch_stack_1->SetBinContent(17,8.073886);
   hbadmatch_stack_1->SetBinContent(18,8.990256);
   hbadmatch_stack_1->SetBinContent(19,5.658965);
   hbadmatch_stack_1->SetBinContent(20,3.607516);
   hbadmatch_stack_1->SetBinContent(21,9.085281);
   hbadmatch_stack_1->SetBinContent(22,4.797292);
   hbadmatch_stack_1->SetBinContent(23,10.6431);
   hbadmatch_stack_1->SetBinContent(24,3.108968);
   hbadmatch_stack_1->SetBinContent(25,6.219989);
   hbadmatch_stack_1->SetBinError(1,1.39142);
   hbadmatch_stack_1->SetBinError(2,1.512544);
   hbadmatch_stack_1->SetBinError(3,1.561749);
   hbadmatch_stack_1->SetBinError(4,1.235712);
   hbadmatch_stack_1->SetBinError(5,1.466792);
   hbadmatch_stack_1->SetBinError(6,1.621876);
   hbadmatch_stack_1->SetBinError(7,1.522912);
   hbadmatch_stack_1->SetBinError(8,1.312628);
   hbadmatch_stack_1->SetBinError(9,1.448414);
   hbadmatch_stack_1->SetBinError(10,1.494872);
   hbadmatch_stack_1->SetBinError(11,1.51069);
   hbadmatch_stack_1->SetBinError(12,1.694741);
   hbadmatch_stack_1->SetBinError(13,1.192079);
   hbadmatch_stack_1->SetBinError(14,1.240899);
   hbadmatch_stack_1->SetBinError(15,2.613375);
   hbadmatch_stack_1->SetBinError(16,1.373192);
   hbadmatch_stack_1->SetBinError(17,2.318995);
   hbadmatch_stack_1->SetBinError(18,1.606246);
   hbadmatch_stack_1->SetBinError(19,1.361512);
   hbadmatch_stack_1->SetBinError(20,0.9619321);
   hbadmatch_stack_1->SetBinError(21,1.704804);
   hbadmatch_stack_1->SetBinError(22,1.209955);
   hbadmatch_stack_1->SetBinError(23,1.843738);
   hbadmatch_stack_1->SetBinError(24,0.7745104);
   hbadmatch_stack_1->SetBinError(25,1.361887);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,30.65152);
   hext_stack_2->SetBinContent(2,23.27372);
   hext_stack_2->SetBinContent(3,27.32094);
   hext_stack_2->SetBinContent(4,22.90743);
   hext_stack_2->SetBinContent(5,31.15191);
   hext_stack_2->SetBinContent(6,50.4506);
   hext_stack_2->SetBinContent(7,40.38231);
   hext_stack_2->SetBinContent(8,31.3119);
   hext_stack_2->SetBinContent(9,22.49806);
   hext_stack_2->SetBinContent(10,28.11977);
   hext_stack_2->SetBinContent(11,21.61425);
   hext_stack_2->SetBinContent(12,18.85744);
   hext_stack_2->SetBinContent(13,18.17551);
   hext_stack_2->SetBinContent(14,18.95123);
   hext_stack_2->SetBinContent(15,21.7886);
   hext_stack_2->SetBinContent(16,31.21093);
   hext_stack_2->SetBinContent(17,38.20803);
   hext_stack_2->SetBinContent(18,32.83015);
   hext_stack_2->SetBinContent(19,55.59787);
   hext_stack_2->SetBinContent(20,35.48);
   hext_stack_2->SetBinContent(21,47.231);
   hext_stack_2->SetBinContent(22,29.42013);
   hext_stack_2->SetBinContent(23,35.34029);
   hext_stack_2->SetBinContent(24,20.97541);
   hext_stack_2->SetBinContent(25,20.58916);
   hext_stack_2->SetBinError(1,3.755288);
   hext_stack_2->SetBinError(2,3.30668);
   hext_stack_2->SetBinError(3,3.585337);
   hext_stack_2->SetBinError(4,3.146097);
   hext_stack_2->SetBinError(5,3.776443);
   hext_stack_2->SetBinError(6,5.020276);
   hext_stack_2->SetBinError(7,4.250525);
   hext_stack_2->SetBinError(8,3.774464);
   hext_stack_2->SetBinError(9,3.173157);
   hext_stack_2->SetBinError(10,3.686148);
   hext_stack_2->SetBinError(11,3.100341);
   hext_stack_2->SetBinError(12,2.883356);
   hext_stack_2->SetBinError(13,2.961918);
   hext_stack_2->SetBinError(14,2.882317);
   hext_stack_2->SetBinError(15,3.032287);
   hext_stack_2->SetBinError(16,3.801811);
   hext_stack_2->SetBinError(17,4.280003);
   hext_stack_2->SetBinError(18,3.913599);
   hext_stack_2->SetBinError(19,5.300388);
   hext_stack_2->SetBinError(20,3.858088);
   hext_stack_2->SetBinError(21,4.677659);
   hext_stack_2->SetBinError(22,3.697607);
   hext_stack_2->SetBinError(23,4.214828);
   hext_stack_2->SetBinError(24,2.977267);
   hext_stack_2->SetBinError(25,3.198965);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.137562);
   hdirt_stack_3->SetBinContent(2,3.463981);
   hdirt_stack_3->SetBinContent(3,3.426215);
   hdirt_stack_3->SetBinContent(4,1.728496);
   hdirt_stack_3->SetBinContent(5,3.111585);
   hdirt_stack_3->SetBinContent(6,4.174962);
   hdirt_stack_3->SetBinContent(7,2.263848);
   hdirt_stack_3->SetBinContent(8,3.438977);
   hdirt_stack_3->SetBinContent(9,2.664659);
   hdirt_stack_3->SetBinContent(10,1.62314);
   hdirt_stack_3->SetBinContent(11,2.606797);
   hdirt_stack_3->SetBinContent(12,2.891917);
   hdirt_stack_3->SetBinContent(13,1.81793);
   hdirt_stack_3->SetBinContent(14,2.080598);
   hdirt_stack_3->SetBinContent(15,2.141863);
   hdirt_stack_3->SetBinContent(16,3.956047);
   hdirt_stack_3->SetBinContent(17,2.780604);
   hdirt_stack_3->SetBinContent(18,5.47455);
   hdirt_stack_3->SetBinContent(19,2.543099);
   hdirt_stack_3->SetBinContent(20,5.505075);
   hdirt_stack_3->SetBinContent(21,3.237491);
   hdirt_stack_3->SetBinContent(22,2.407793);
   hdirt_stack_3->SetBinContent(23,4.215566);
   hdirt_stack_3->SetBinContent(24,2.996863);
   hdirt_stack_3->SetBinContent(25,1.341424);
   hdirt_stack_3->SetBinError(1,0.5016758);
   hdirt_stack_3->SetBinError(2,0.9745263);
   hdirt_stack_3->SetBinError(3,0.9948689);
   hdirt_stack_3->SetBinError(4,0.6907024);
   hdirt_stack_3->SetBinError(5,0.9503387);
   hdirt_stack_3->SetBinError(6,1.038265);
   hdirt_stack_3->SetBinError(7,0.7097921);
   hdirt_stack_3->SetBinError(8,0.947686);
   hdirt_stack_3->SetBinError(9,0.88758);
   hdirt_stack_3->SetBinError(10,0.68804);
   hdirt_stack_3->SetBinError(11,1.242878);
   hdirt_stack_3->SetBinError(12,1.171096);
   hdirt_stack_3->SetBinError(13,0.594341);
   hdirt_stack_3->SetBinError(14,0.7226931);
   hdirt_stack_3->SetBinError(15,0.8364271);
   hdirt_stack_3->SetBinError(16,1.03646);
   hdirt_stack_3->SetBinError(17,0.8986958);
   hdirt_stack_3->SetBinError(18,1.320131);
   hdirt_stack_3->SetBinError(19,0.7920369);
   hdirt_stack_3->SetBinError(20,1.443784);
   hdirt_stack_3->SetBinError(21,0.9195174);
   hdirt_stack_3->SetBinError(22,0.7369561);
   hdirt_stack_3->SetBinError(23,1.091139);
   hdirt_stack_3->SetBinError(24,0.9709702);
   hdirt_stack_3->SetBinError(25,0.5199553);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,30.8886);
   houtFV_stack_4->SetBinContent(2,29.0104);
   houtFV_stack_4->SetBinContent(3,29.45438);
   houtFV_stack_4->SetBinContent(4,32.0144);
   houtFV_stack_4->SetBinContent(5,26.51937);
   houtFV_stack_4->SetBinContent(6,25.19672);
   houtFV_stack_4->SetBinContent(7,29.68865);
   houtFV_stack_4->SetBinContent(8,22.63665);
   houtFV_stack_4->SetBinContent(9,28.42478);
   houtFV_stack_4->SetBinContent(10,26.33911);
   houtFV_stack_4->SetBinContent(11,25.21988);
   houtFV_stack_4->SetBinContent(12,30.166);
   houtFV_stack_4->SetBinContent(13,26.60506);
   houtFV_stack_4->SetBinContent(14,26.65411);
   houtFV_stack_4->SetBinContent(15,26.01292);
   houtFV_stack_4->SetBinContent(16,25.54599);
   houtFV_stack_4->SetBinContent(17,23.63399);
   houtFV_stack_4->SetBinContent(18,27.54728);
   houtFV_stack_4->SetBinContent(19,22.08272);
   houtFV_stack_4->SetBinContent(20,28.01367);
   houtFV_stack_4->SetBinContent(21,25.20489);
   houtFV_stack_4->SetBinContent(22,28.18215);
   houtFV_stack_4->SetBinContent(23,27.86448);
   houtFV_stack_4->SetBinContent(24,30.83924);
   houtFV_stack_4->SetBinContent(25,26.06655);
   houtFV_stack_4->SetBinError(1,2.893212);
   houtFV_stack_4->SetBinError(2,2.624821);
   houtFV_stack_4->SetBinError(3,2.739487);
   houtFV_stack_4->SetBinError(4,2.84571);
   houtFV_stack_4->SetBinError(5,2.605952);
   houtFV_stack_4->SetBinError(6,2.487085);
   houtFV_stack_4->SetBinError(7,2.765834);
   houtFV_stack_4->SetBinError(8,2.32335);
   houtFV_stack_4->SetBinError(9,2.848738);
   houtFV_stack_4->SetBinError(10,2.534006);
   houtFV_stack_4->SetBinError(11,2.545659);
   houtFV_stack_4->SetBinError(12,2.735579);
   houtFV_stack_4->SetBinError(13,2.535281);
   houtFV_stack_4->SetBinError(14,2.564164);
   houtFV_stack_4->SetBinError(15,2.550565);
   houtFV_stack_4->SetBinError(16,2.529529);
   houtFV_stack_4->SetBinError(17,2.377657);
   houtFV_stack_4->SetBinError(18,2.736381);
   houtFV_stack_4->SetBinError(19,2.373438);
   houtFV_stack_4->SetBinError(20,2.928405);
   houtFV_stack_4->SetBinError(21,2.483669);
   houtFV_stack_4->SetBinError(22,2.681332);
   houtFV_stack_4->SetBinError(23,2.646527);
   houtFV_stack_4->SetBinError(24,2.779958);
   houtFV_stack_4->SetBinError(25,2.57318);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.472371);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.641134);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.023613);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.61272);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.932601);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.325411);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.802941);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.000009);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.911111);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.310558);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.381949);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.17509);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.09587);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.512233);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.807079);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.376331);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.45848);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.654682);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.472053);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.197767);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.093059);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.129384);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.316072);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.214734);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.69384);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6898757);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8689521);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6726805);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.164331);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6927065);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7807825);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7197014);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7276086);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6413147);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9443171);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8521087);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.011757);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7824337);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7342018);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6780387);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8243566);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.768469);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7464922);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9134145);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.025781);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6934255);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7727184);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.640875);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7082937);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6406957);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7605072);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.060473);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6782354);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7821408);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.050417);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9899893);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9229141);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3064899);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.632016);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.752521);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.02951);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.852072);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.542675);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6789342);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7330128);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8597072);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6614097);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5321925);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6642565);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.9155902);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.8809291);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4692274);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.7015107);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8729381);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5521764);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1916038);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3418791);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2194008);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.212966);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3670323);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3148515);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3372367);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.09237995);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2074906);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.260455);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2899545);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2540277);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2086113);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2264074);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2430101);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2727203);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2093046);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1955518);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1794587);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3149547);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2728567);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1833881);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2110511);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3268289);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.17758);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,92.96219);
   hNCpi0inFVres_stack_7->SetBinContent(2,91.42365);
   hNCpi0inFVres_stack_7->SetBinContent(3,95.72444);
   hNCpi0inFVres_stack_7->SetBinContent(4,89.61077);
   hNCpi0inFVres_stack_7->SetBinContent(5,83.78204);
   hNCpi0inFVres_stack_7->SetBinContent(6,79.23981);
   hNCpi0inFVres_stack_7->SetBinContent(7,81.25764);
   hNCpi0inFVres_stack_7->SetBinContent(8,80.92275);
   hNCpi0inFVres_stack_7->SetBinContent(9,78.37029);
   hNCpi0inFVres_stack_7->SetBinContent(10,89.69876);
   hNCpi0inFVres_stack_7->SetBinContent(11,88.63731);
   hNCpi0inFVres_stack_7->SetBinContent(12,84.92499);
   hNCpi0inFVres_stack_7->SetBinContent(13,80.51095);
   hNCpi0inFVres_stack_7->SetBinContent(14,89.1944);
   hNCpi0inFVres_stack_7->SetBinContent(15,89.81845);
   hNCpi0inFVres_stack_7->SetBinContent(16,89.76976);
   hNCpi0inFVres_stack_7->SetBinContent(17,88.40707);
   hNCpi0inFVres_stack_7->SetBinContent(18,80.45879);
   hNCpi0inFVres_stack_7->SetBinContent(19,81.30707);
   hNCpi0inFVres_stack_7->SetBinContent(20,78.31609);
   hNCpi0inFVres_stack_7->SetBinContent(21,85.18408);
   hNCpi0inFVres_stack_7->SetBinContent(22,91.11514);
   hNCpi0inFVres_stack_7->SetBinContent(23,94.4286);
   hNCpi0inFVres_stack_7->SetBinContent(24,97.70163);
   hNCpi0inFVres_stack_7->SetBinContent(25,89.3989);
   hNCpi0inFVres_stack_7->SetBinError(1,3.0468);
   hNCpi0inFVres_stack_7->SetBinError(2,3.155145);
   hNCpi0inFVres_stack_7->SetBinError(3,3.165574);
   hNCpi0inFVres_stack_7->SetBinError(4,3.102034);
   hNCpi0inFVres_stack_7->SetBinError(5,2.958722);
   hNCpi0inFVres_stack_7->SetBinError(6,2.837614);
   hNCpi0inFVres_stack_7->SetBinError(7,2.990464);
   hNCpi0inFVres_stack_7->SetBinError(8,2.884546);
   hNCpi0inFVres_stack_7->SetBinError(9,2.833572);
   hNCpi0inFVres_stack_7->SetBinError(10,3.161158);
   hNCpi0inFVres_stack_7->SetBinError(11,3.055116);
   hNCpi0inFVres_stack_7->SetBinError(12,2.959889);
   hNCpi0inFVres_stack_7->SetBinError(13,2.783524);
   hNCpi0inFVres_stack_7->SetBinError(14,3.045666);
   hNCpi0inFVres_stack_7->SetBinError(15,3.122861);
   hNCpi0inFVres_stack_7->SetBinError(16,3.135233);
   hNCpi0inFVres_stack_7->SetBinError(17,3.156685);
   hNCpi0inFVres_stack_7->SetBinError(18,2.864604);
   hNCpi0inFVres_stack_7->SetBinError(19,2.992168);
   hNCpi0inFVres_stack_7->SetBinError(20,2.812326);
   hNCpi0inFVres_stack_7->SetBinError(21,3.090356);
   hNCpi0inFVres_stack_7->SetBinError(22,3.088534);
   hNCpi0inFVres_stack_7->SetBinError(23,3.291609);
   hNCpi0inFVres_stack_7->SetBinError(24,3.387523);
   hNCpi0inFVres_stack_7->SetBinError(25,3.021893);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,20.35328);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.67421);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.07835);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.64724);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.87541);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.70415);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.30133);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.66299);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.14028);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.50239);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.42051);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.83245);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.60648);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.6459);
   hNCpi0inFVdis_stack_8->SetBinContent(15,18.72846);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.06783);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.33525);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.78496);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.97421);
   hNCpi0inFVdis_stack_8->SetBinContent(20,17.21102);
   hNCpi0inFVdis_stack_8->SetBinContent(21,18.58035);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.82652);
   hNCpi0inFVdis_stack_8->SetBinContent(23,19.89146);
   hNCpi0inFVdis_stack_8->SetBinContent(24,21.18555);
   hNCpi0inFVdis_stack_8->SetBinContent(25,19.29785);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.557353);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.831167);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.602912);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.593945);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.331784);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.436628);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.424871);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.363967);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.653991);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.33144);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.743493);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.362397);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.390602);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.670203);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.442502);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.441903);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.592019);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.158072);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.537504);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.516076);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.487861);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.517272);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.481512);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.482663);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.770689);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1438386);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.0587264);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03664741);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1460168);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2168219);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06562697);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1478583);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.07614509);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.04870336);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1125211);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04441126);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02591398);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1290147);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1471308);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06562698);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1304081);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04859599);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02815057);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,49.99638);
   hCCpi0inFV_stack_10->SetBinContent(2,47.89212);
   hCCpi0inFV_stack_10->SetBinContent(3,49.59711);
   hCCpi0inFV_stack_10->SetBinContent(4,47.8848);
   hCCpi0inFV_stack_10->SetBinContent(5,44.05004);
   hCCpi0inFV_stack_10->SetBinContent(6,35.6488);
   hCCpi0inFV_stack_10->SetBinContent(7,39.04813);
   hCCpi0inFV_stack_10->SetBinContent(8,37.53285);
   hCCpi0inFV_stack_10->SetBinContent(9,41.76918);
   hCCpi0inFV_stack_10->SetBinContent(10,38.70125);
   hCCpi0inFV_stack_10->SetBinContent(11,42.44074);
   hCCpi0inFV_stack_10->SetBinContent(12,44.0919);
   hCCpi0inFV_stack_10->SetBinContent(13,51.84686);
   hCCpi0inFV_stack_10->SetBinContent(14,47.64632);
   hCCpi0inFV_stack_10->SetBinContent(15,45.62022);
   hCCpi0inFV_stack_10->SetBinContent(16,37.46126);
   hCCpi0inFV_stack_10->SetBinContent(17,39.94138);
   hCCpi0inFV_stack_10->SetBinContent(18,41.98162);
   hCCpi0inFV_stack_10->SetBinContent(19,37.97065);
   hCCpi0inFV_stack_10->SetBinContent(20,36.44904);
   hCCpi0inFV_stack_10->SetBinContent(21,42.99092);
   hCCpi0inFV_stack_10->SetBinContent(22,50.21475);
   hCCpi0inFV_stack_10->SetBinContent(23,45.97155);
   hCCpi0inFV_stack_10->SetBinContent(24,51.53019);
   hCCpi0inFV_stack_10->SetBinContent(25,46.73912);
   hCCpi0inFV_stack_10->SetBinError(1,3.6238);
   hCCpi0inFV_stack_10->SetBinError(2,3.402321);
   hCCpi0inFV_stack_10->SetBinError(3,3.550032);
   hCCpi0inFV_stack_10->SetBinError(4,3.464023);
   hCCpi0inFV_stack_10->SetBinError(5,3.34121);
   hCCpi0inFV_stack_10->SetBinError(6,2.952772);
   hCCpi0inFV_stack_10->SetBinError(7,3.141006);
   hCCpi0inFV_stack_10->SetBinError(8,3.086551);
   hCCpi0inFV_stack_10->SetBinError(9,3.265726);
   hCCpi0inFV_stack_10->SetBinError(10,3.129872);
   hCCpi0inFV_stack_10->SetBinError(11,3.231958);
   hCCpi0inFV_stack_10->SetBinError(12,3.321036);
   hCCpi0inFV_stack_10->SetBinError(13,3.603808);
   hCCpi0inFV_stack_10->SetBinError(14,3.457573);
   hCCpi0inFV_stack_10->SetBinError(15,3.318063);
   hCCpi0inFV_stack_10->SetBinError(16,3.083572);
   hCCpi0inFV_stack_10->SetBinError(17,3.166437);
   hCCpi0inFV_stack_10->SetBinError(18,3.296295);
   hCCpi0inFV_stack_10->SetBinError(19,3.046214);
   hCCpi0inFV_stack_10->SetBinError(20,3.044009);
   hCCpi0inFV_stack_10->SetBinError(21,3.346497);
   hCCpi0inFV_stack_10->SetBinError(22,3.592572);
   hCCpi0inFV_stack_10->SetBinError(23,3.408657);
   hCCpi0inFV_stack_10->SetBinError(24,3.620216);
   hCCpi0inFV_stack_10->SetBinError(25,3.405861);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,20.46778);
   hNCinFV_stack_11->SetBinContent(2,21.75774);
   hNCinFV_stack_11->SetBinContent(3,22.81955);
   hNCinFV_stack_11->SetBinContent(4,20.21845);
   hNCinFV_stack_11->SetBinContent(5,22.41101);
   hNCinFV_stack_11->SetBinContent(6,18.8519);
   hNCinFV_stack_11->SetBinContent(7,19.45344);
   hNCinFV_stack_11->SetBinContent(8,16.0863);
   hNCinFV_stack_11->SetBinContent(9,21.0405);
   hNCinFV_stack_11->SetBinContent(10,16.85089);
   hNCinFV_stack_11->SetBinContent(11,14.18989);
   hNCinFV_stack_11->SetBinContent(12,19.16031);
   hNCinFV_stack_11->SetBinContent(13,23.7205);
   hNCinFV_stack_11->SetBinContent(14,21.92429);
   hNCinFV_stack_11->SetBinContent(15,28.11318);
   hNCinFV_stack_11->SetBinContent(16,22.54507);
   hNCinFV_stack_11->SetBinContent(17,23.20421);
   hNCinFV_stack_11->SetBinContent(18,19.63502);
   hNCinFV_stack_11->SetBinContent(19,21.48368);
   hNCinFV_stack_11->SetBinContent(20,21.54294);
   hNCinFV_stack_11->SetBinContent(21,16.18338);
   hNCinFV_stack_11->SetBinContent(22,17.54044);
   hNCinFV_stack_11->SetBinContent(23,24.58841);
   hNCinFV_stack_11->SetBinContent(24,22.13435);
   hNCinFV_stack_11->SetBinContent(25,19.31769);
   hNCinFV_stack_11->SetBinError(1,2.3493);
   hNCinFV_stack_11->SetBinError(2,2.435394);
   hNCinFV_stack_11->SetBinError(3,2.661948);
   hNCinFV_stack_11->SetBinError(4,2.405717);
   hNCinFV_stack_11->SetBinError(5,2.621984);
   hNCinFV_stack_11->SetBinError(6,2.209831);
   hNCinFV_stack_11->SetBinError(7,2.373058);
   hNCinFV_stack_11->SetBinError(8,1.957104);
   hNCinFV_stack_11->SetBinError(9,2.502479);
   hNCinFV_stack_11->SetBinError(10,2.185322);
   hNCinFV_stack_11->SetBinError(11,1.82546);
   hNCinFV_stack_11->SetBinError(12,2.248929);
   hNCinFV_stack_11->SetBinError(13,2.567697);
   hNCinFV_stack_11->SetBinError(14,2.620516);
   hNCinFV_stack_11->SetBinError(15,2.925759);
   hNCinFV_stack_11->SetBinError(16,2.632869);
   hNCinFV_stack_11->SetBinError(17,2.86588);
   hNCinFV_stack_11->SetBinError(18,2.418003);
   hNCinFV_stack_11->SetBinError(19,2.676483);
   hNCinFV_stack_11->SetBinError(20,2.713574);
   hNCinFV_stack_11->SetBinError(21,2.05625);
   hNCinFV_stack_11->SetBinError(22,2.319047);
   hNCinFV_stack_11->SetBinError(23,2.835682);
   hNCinFV_stack_11->SetBinError(24,2.710538);
   hNCinFV_stack_11->SetBinError(25,2.167291);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,38.14472);
   hnumuCCinFV_stack_12->SetBinContent(2,43.59474);
   hnumuCCinFV_stack_12->SetBinContent(3,30.86964);
   hnumuCCinFV_stack_12->SetBinContent(4,13.05132);
   hnumuCCinFV_stack_12->SetBinContent(5,13.50454);
   hnumuCCinFV_stack_12->SetBinContent(6,16.38285);
   hnumuCCinFV_stack_12->SetBinContent(7,15.94994);
   hnumuCCinFV_stack_12->SetBinContent(8,20.03721);
   hnumuCCinFV_stack_12->SetBinContent(9,21.43633);
   hnumuCCinFV_stack_12->SetBinContent(10,22.44687);
   hnumuCCinFV_stack_12->SetBinContent(11,29.0807);
   hnumuCCinFV_stack_12->SetBinContent(12,36.74159);
   hnumuCCinFV_stack_12->SetBinContent(13,40.63393);
   hnumuCCinFV_stack_12->SetBinContent(14,38.23016);
   hnumuCCinFV_stack_12->SetBinContent(15,38.04828);
   hnumuCCinFV_stack_12->SetBinContent(16,23.88692);
   hnumuCCinFV_stack_12->SetBinContent(17,21.37968);
   hnumuCCinFV_stack_12->SetBinContent(18,17.82249);
   hnumuCCinFV_stack_12->SetBinContent(19,18.80186);
   hnumuCCinFV_stack_12->SetBinContent(20,17.15208);
   hnumuCCinFV_stack_12->SetBinContent(21,15.90208);
   hnumuCCinFV_stack_12->SetBinContent(22,17.55589);
   hnumuCCinFV_stack_12->SetBinContent(23,21.88865);
   hnumuCCinFV_stack_12->SetBinContent(24,35.72208);
   hnumuCCinFV_stack_12->SetBinContent(25,45.49673);
   hnumuCCinFV_stack_12->SetBinError(1,3.397236);
   hnumuCCinFV_stack_12->SetBinError(2,4.602399);
   hnumuCCinFV_stack_12->SetBinError(3,2.866796);
   hnumuCCinFV_stack_12->SetBinError(4,1.88816);
   hnumuCCinFV_stack_12->SetBinError(5,1.898787);
   hnumuCCinFV_stack_12->SetBinError(6,2.241073);
   hnumuCCinFV_stack_12->SetBinError(7,2.463023);
   hnumuCCinFV_stack_12->SetBinError(8,2.892346);
   hnumuCCinFV_stack_12->SetBinError(9,2.935864);
   hnumuCCinFV_stack_12->SetBinError(10,2.732068);
   hnumuCCinFV_stack_12->SetBinError(11,3.042056);
   hnumuCCinFV_stack_12->SetBinError(12,3.485342);
   hnumuCCinFV_stack_12->SetBinError(13,3.777915);
   hnumuCCinFV_stack_12->SetBinError(14,3.412994);
   hnumuCCinFV_stack_12->SetBinError(15,4.148005);
   hnumuCCinFV_stack_12->SetBinError(16,2.543153);
   hnumuCCinFV_stack_12->SetBinError(17,2.900848);
   hnumuCCinFV_stack_12->SetBinError(18,2.405572);
   hnumuCCinFV_stack_12->SetBinError(19,2.667212);
   hnumuCCinFV_stack_12->SetBinError(20,2.283878);
   hnumuCCinFV_stack_12->SetBinError(21,2.161854);
   hnumuCCinFV_stack_12->SetBinError(22,2.378287);
   hnumuCCinFV_stack_12->SetBinError(23,2.437074);
   hnumuCCinFV_stack_12->SetBinError(24,3.475139);
   hnumuCCinFV_stack_12->SetBinError(25,3.796199);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.41719);
   hnueCCinFV_stack_13->SetBinContent(2,4.144482);
   hnueCCinFV_stack_13->SetBinContent(3,3.048381);
   hnueCCinFV_stack_13->SetBinContent(4,1.601249);
   hnueCCinFV_stack_13->SetBinContent(5,2.985269);
   hnueCCinFV_stack_13->SetBinContent(6,1.249938);
   hnueCCinFV_stack_13->SetBinContent(7,1.575573);
   hnueCCinFV_stack_13->SetBinContent(8,1.243433);
   hnueCCinFV_stack_13->SetBinContent(9,2.140067);
   hnueCCinFV_stack_13->SetBinContent(10,2.521093);
   hnueCCinFV_stack_13->SetBinContent(11,0.8161711);
   hnueCCinFV_stack_13->SetBinContent(12,2.943751);
   hnueCCinFV_stack_13->SetBinContent(13,1.978074);
   hnueCCinFV_stack_13->SetBinContent(14,2.826616);
   hnueCCinFV_stack_13->SetBinContent(15,2.272948);
   hnueCCinFV_stack_13->SetBinContent(16,1.263125);
   hnueCCinFV_stack_13->SetBinContent(17,1.517935);
   hnueCCinFV_stack_13->SetBinContent(18,1.708685);
   hnueCCinFV_stack_13->SetBinContent(19,3.34944);
   hnueCCinFV_stack_13->SetBinContent(20,0.536893);
   hnueCCinFV_stack_13->SetBinContent(21,2.777676);
   hnueCCinFV_stack_13->SetBinContent(22,1.302814);
   hnueCCinFV_stack_13->SetBinContent(23,2.820997);
   hnueCCinFV_stack_13->SetBinContent(24,2.130141);
   hnueCCinFV_stack_13->SetBinContent(25,3.043511);
   hnueCCinFV_stack_13->SetBinError(1,0.5883982);
   hnueCCinFV_stack_13->SetBinError(2,1.759915);
   hnueCCinFV_stack_13->SetBinError(3,0.9741606);
   hnueCCinFV_stack_13->SetBinError(4,0.6102798);
   hnueCCinFV_stack_13->SetBinError(5,1.706015);
   hnueCCinFV_stack_13->SetBinError(6,0.5762995);
   hnueCCinFV_stack_13->SetBinError(7,0.7487493);
   hnueCCinFV_stack_13->SetBinError(8,0.5741636);
   hnueCCinFV_stack_13->SetBinError(9,0.7780414);
   hnueCCinFV_stack_13->SetBinError(10,1.122075);
   hnueCCinFV_stack_13->SetBinError(11,0.5068266);
   hnueCCinFV_stack_13->SetBinError(12,0.7917662);
   hnueCCinFV_stack_13->SetBinError(13,0.7390886);
   hnueCCinFV_stack_13->SetBinError(14,0.9821046);
   hnueCCinFV_stack_13->SetBinError(15,0.8642846);
   hnueCCinFV_stack_13->SetBinError(16,0.5799884);
   hnueCCinFV_stack_13->SetBinError(17,0.6293137);
   hnueCCinFV_stack_13->SetBinError(18,0.7147977);
   hnueCCinFV_stack_13->SetBinError(19,1.568287);
   hnueCCinFV_stack_13->SetBinError(20,0.3929602);
   hnueCCinFV_stack_13->SetBinError(21,1.280006);
   hnueCCinFV_stack_13->SetBinError(22,0.6407344);
   hnueCCinFV_stack_13->SetBinError(23,1.352983);
   hnueCCinFV_stack_13->SetBinError(24,0.860989);
   hnueCCinFV_stack_13->SetBinError(25,1.054853);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__2->SetBinContent(1,297.1801);
   hmcerror__2->SetBinContent(2,302.1526);
   hmcerror__2->SetBinContent(3,296.2422);
   hmcerror__2->SetBinContent(4,262.185);
   hmcerror__2->SetBinContent(5,257.1187);
   hmcerror__2->SetBinContent(6,261.1782);
   hmcerror__2->SetBinContent(7,259.1034);
   hmcerror__2->SetBinContent(8,240.0363);
   hmcerror__2->SetBinContent(9,250.4671);
   hmcerror__2->SetBinContent(10,254.0358);
   hmcerror__2->SetBinContent(11,259.8434);
   hmcerror__2->SetBinContent(12,270.5738);
   hmcerror__2->SetBinContent(13,274.1103);
   hmcerror__2->SetBinContent(14,278.4806);
   hmcerror__2->SetBinContent(15,286.5707);
   hmcerror__2->SetBinContent(16,268.2083);
   hmcerror__2->SetBinContent(17,272.8187);
   hmcerror__2->SetBinContent(18,257.4207);
   hmcerror__2->SetBinContent(19,272.9715);
   hmcerror__2->SetBinContent(20,250.9459);
   hmcerror__2->SetBinContent(21,271.3873);
   hmcerror__2->SetBinContent(22,268.1094);
   hmcerror__2->SetBinContent(23,292.6707);
   hmcerror__2->SetBinContent(24,293.4882);
   hmcerror__2->SetBinContent(25,281.8056);
   hmcerror__2->SetBinError(1,79.5371);
   hmcerror__2->SetBinError(2,79.37801);
   hmcerror__2->SetBinError(3,83.46104);
   hmcerror__2->SetBinError(4,72.81128);
   hmcerror__2->SetBinError(5,66.90191);
   hmcerror__2->SetBinError(6,65.68523);
   hmcerror__2->SetBinError(7,75.08011);
   hmcerror__2->SetBinError(8,67.67881);
   hmcerror__2->SetBinError(9,71.80925);
   hmcerror__2->SetBinError(10,67.29499);
   hmcerror__2->SetBinError(11,78.6405);
   hmcerror__2->SetBinError(12,77.15371);
   hmcerror__2->SetBinError(13,71.55075);
   hmcerror__2->SetBinError(14,72.57972);
   hmcerror__2->SetBinError(15,76.27323);
   hmcerror__2->SetBinError(16,70.34701);
   hmcerror__2->SetBinError(17,72.53442);
   hmcerror__2->SetBinError(18,66.24422);
   hmcerror__2->SetBinError(19,70.67516);
   hmcerror__2->SetBinError(20,67.85639);
   hmcerror__2->SetBinError(21,66.62324);
   hmcerror__2->SetBinError(22,70.50709);
   hmcerror__2->SetBinError(23,75.83302);
   hmcerror__2->SetBinError(24,79.24648);
   hmcerror__2->SetBinError(25,85.98355);
   hmcerror__2->SetBinError(26,0.3895343);
   hmcerror__2->SetEntries(7381.09);

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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3001[25] = {
   280,
   318,
   237,
   287,
   299,
   268,
   221,
   229,
   216,
   264,
   266,
   244,
   237,
   269,
   282,
   284,
   236,
   248,
   243,
   233,
   256,
   263,
   244,
   265,
   255};
   Double_t _felx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3001[25] = {
   16.7332,
   17.83255,
   15.3948,
   16.94107,
   17.29162,
   16.37071,
   14.86607,
   15.13275,
   14.69694,
   16.24808,
   16.30951,
   15.6205,
   15.3948,
   16.40122,
   16.79286,
   16.8523,
   15.36229,
   15.74802,
   15.58846,
   15.26434,
   16,
   16.21727,
   15.6205,
   16.27882,
   15.96872};
   Double_t _fehx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3001[25] = {
   16.7332,
   17.83255,
   15.3948,
   16.94107,
   17.29162,
   16.37071,
   14.86607,
   15.13275,
   14.69694,
   16.24808,
   16.30951,
   15.6205,
   15.3948,
   16.40122,
   16.79286,
   16.8523,
   15.36229,
   15.74802,
   15.58846,
   15.26434,
   16,
   16.21727,
   15.6205,
   16.27882,
   15.96872};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(187.8501);
   Graph_Graph3001->SetMaximum(349.2855);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2172.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  473.3","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 515.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3002[25] = {
   0.2676394,
   0.2627083,
   0.2817324,
   0.2777095,
   0.2601986,
   0.2514958,
   0.2897689,
   0.2819525,
   0.2867013,
   0.2649035,
   0.3026458,
   0.2851485,
   0.261029,
   0.2606275,
   0.2661585,
   0.262285,
   0.2658704,
   0.2573384,
   0.2589104,
   0.2704025,
   0.2454914,
   0.2629788,
   0.259107,
   0.2700159,
   0.3051165};
   Double_t _fehx3002[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3002[25] = {
   0.2676394,
   0.2627083,
   0.2817324,
   0.2777095,
   0.2601986,
   0.2514958,
   0.2897689,
   0.2819525,
   0.2867013,
   0.2649035,
   0.3026458,
   0.2851485,
   0.261029,
   0.2606275,
   0.2661585,
   0.262285,
   0.2658704,
   0.2573384,
   0.2589104,
   0.2704025,
   0.2454914,
   0.2629788,
   0.259107,
   0.2700159,
   0.3051165};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3003[25] = {
   0.2462367,
   0.2459193,
   0.250956,
   0.2471631,
   0.2411829,
   0.2131243,
   0.2399063,
   0.2492595,
   0.2583316,
   0.2481812,
   0.2577752,
   0.2613719,
   0.2350993,
   0.2362705,
   0.2458419,
   0.2425432,
   0.2375331,
   0.2398807,
   0.2195524,
   0.2298148,
   0.2204208,
   0.2496743,
   0.233412,
   0.2464897,
   0.24898};
   Double_t _fehx3003[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3003[25] = {
   0.2462367,
   0.2459193,
   0.250956,
   0.2471631,
   0.2411829,
   0.2131243,
   0.2399063,
   0.2492595,
   0.2583316,
   0.2481812,
   0.2577752,
   0.2613719,
   0.2350993,
   0.2362705,
   0.2458419,
   0.2425432,
   0.2375331,
   0.2398807,
   0.2195524,
   0.2298148,
   0.2204208,
   0.2496743,
   0.233412,
   0.2464897,
   0.24898};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3004[25] = {
   0.9421896,
   1.052448,
   0.8000211,
   1.094647,
   1.162887,
   1.026119,
   0.8529414,
   0.9540226,
   0.8623887,
   1.039223,
   1.023694,
   0.9017874,
   0.8646154,
   0.9659559,
   0.9840504,
   1.058879,
   0.8650433,
   0.9634037,
   0.8902028,
   0.9284869,
   0.9433014,
   0.9809429,
   0.8337015,
   0.9029323,
   0.904879};
   Double_t _felx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3004[25] = {
   0.0563066,
   0.05901837,
   0.05196695,
   0.06461496,
   0.06725151,
   0.06268021,
   0.05737504,
   0.06304358,
   0.05867812,
   0.06395978,
   0.06276668,
   0.05773102,
   0.0561628,
   0.05889537,
   0.05859935,
   0.06283288,
   0.05630952,
   0.06117619,
   0.05710654,
   0.0608272,
   0.05895634,
   0.06048753,
   0.05337227,
   0.05546669,
   0.05666572};
   Double_t _fehx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3004[25] = {
   0.0563066,
   0.05901837,
   0.05196695,
   0.06461496,
   0.06725151,
   0.06268021,
   0.05737504,
   0.06304358,
   0.05867812,
   0.06395978,
   0.06276668,
   0.05773102,
   0.0561628,
   0.05889537,
   0.05859935,
   0.06283288,
   0.05630952,
   0.06117619,
   0.05710654,
   0.0608272,
   0.05895634,
   0.06048753,
   0.05337227,
   0.05546669,
   0.05666572};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.6998457);
   Graph_Graph3004->SetMaximum(1.278347);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
