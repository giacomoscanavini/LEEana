#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 11:58:37 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-3.088564,101.5385,341.5302);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__25->SetBinContent(1,154.4282);
   hmc__25->SetBinContent(2,88.82227);
   hmc__25->SetBinContent(3,81.75317);
   hmc__25->SetBinContent(4,59.74041);
   hmc__25->SetBinContent(5,58.64826);
   hmc__25->SetBinContent(6,43.09955);
   hmc__25->SetBinContent(7,38.92368);
   hmc__25->SetBinContent(8,27.12453);
   hmc__25->SetBinContent(9,20.89193);
   hmc__25->SetBinContent(10,18.21682);
   hmc__25->SetBinContent(11,18.66309);
   hmc__25->SetBinContent(12,17.75837);
   hmc__25->SetBinContent(13,16.51608);
   hmc__25->SetBinContent(14,11.49819);
   hmc__25->SetBinContent(15,7.803842);
   hmc__25->SetBinContent(16,7.394355);
   hmc__25->SetBinContent(17,6.396965);
   hmc__25->SetBinContent(18,5.353338);
   hmc__25->SetBinContent(19,4.484582);
   hmc__25->SetBinContent(20,7.416626);
   hmc__25->SetBinContent(21,1.731405);
   hmc__25->SetBinContent(22,2.322056);
   hmc__25->SetBinContent(23,1.515139);
   hmc__25->SetBinContent(24,1.924107);
   hmc__25->SetBinContent(25,18.63065);
   hmc__25->SetBinError(1,46.29077);
   hmc__25->SetBinError(2,31.25103);
   hmc__25->SetBinError(3,28.46963);
   hmc__25->SetBinError(4,36.78566);
   hmc__25->SetBinError(5,21.32924);
   hmc__25->SetBinError(6,19.16847);
   hmc__25->SetBinError(7,17.86781);
   hmc__25->SetBinError(8,12.50089);
   hmc__25->SetBinError(9,13.23057);
   hmc__25->SetBinError(10,9.430499);
   hmc__25->SetBinError(11,9.412169);
   hmc__25->SetBinError(12,8.583313);
   hmc__25->SetBinError(13,11.8525);
   hmc__25->SetBinError(14,7.863484);
   hmc__25->SetBinError(15,7.085369);
   hmc__25->SetBinError(16,6.962109);
   hmc__25->SetBinError(17,7.840592);
   hmc__25->SetBinError(18,4.3221);
   hmc__25->SetBinError(19,5.140794);
   hmc__25->SetBinError(20,6.021873);
   hmc__25->SetBinError(21,2.605979);
   hmc__25->SetBinError(22,3.310698);
   hmc__25->SetBinError(23,2.963908);
   hmc__25->SetBinError(24,6.894497);
   hmc__25->SetBinError(25,13.42428);
   hmc__25->SetMinimum(-3.088564);
   hmc__25->SetMaximum(324.2993);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,90);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(162.1496);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,3.235035);
   hbadmatch_stack_1->SetBinContent(2,2.406484);
   hbadmatch_stack_1->SetBinContent(3,2.342597);
   hbadmatch_stack_1->SetBinContent(4,1.318683);
   hbadmatch_stack_1->SetBinContent(5,1.002333);
   hbadmatch_stack_1->SetBinContent(6,1.348408);
   hbadmatch_stack_1->SetBinContent(7,0.9835768);
   hbadmatch_stack_1->SetBinContent(8,0.2507246);
   hbadmatch_stack_1->SetBinContent(9,0.9278559);
   hbadmatch_stack_1->SetBinContent(10,0.439009);
   hbadmatch_stack_1->SetBinContent(11,1.26712);
   hbadmatch_stack_1->SetBinContent(12,1.658284);
   hbadmatch_stack_1->SetBinContent(13,0.8123583);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.6128272);
   hbadmatch_stack_1->SetBinContent(17,0.8140947);
   hbadmatch_stack_1->SetBinContent(18,0.4117681);
   hbadmatch_stack_1->SetBinContent(19,0.5732377);
   hbadmatch_stack_1->SetBinContent(22,0.5094033);
   hbadmatch_stack_1->SetBinContent(24,0.44);
   hbadmatch_stack_1->SetBinContent(25,1.777517);
   hbadmatch_stack_1->SetBinError(1,0.8852089);
   hbadmatch_stack_1->SetBinError(2,0.8390234);
   hbadmatch_stack_1->SetBinError(3,0.8097566);
   hbadmatch_stack_1->SetBinError(4,0.5542732);
   hbadmatch_stack_1->SetBinError(5,0.4487313);
   hbadmatch_stack_1->SetBinError(6,0.5654173);
   hbadmatch_stack_1->SetBinError(7,0.4398689);
   hbadmatch_stack_1->SetBinError(8,0.2507246);
   hbadmatch_stack_1->SetBinError(9,0.5543192);
   hbadmatch_stack_1->SetBinError(10,0.3123507);
   hbadmatch_stack_1->SetBinError(11,0.5883944);
   hbadmatch_stack_1->SetBinError(12,0.7618215);
   hbadmatch_stack_1->SetBinError(13,0.4068918);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.3543003);
   hbadmatch_stack_1->SetBinError(17,0.505089);
   hbadmatch_stack_1->SetBinError(18,0.2914526);
   hbadmatch_stack_1->SetBinError(19,0.4248129);
   hbadmatch_stack_1->SetBinError(22,0.5094033);
   hbadmatch_stack_1->SetBinError(24,0.3131254);
   hbadmatch_stack_1->SetBinError(25,0.6885295);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,14.53212);
   hext_stack_2->SetBinContent(2,10.16768);
   hext_stack_2->SetBinContent(3,7.493077);
   hext_stack_2->SetBinContent(4,5.083842);
   hext_stack_2->SetBinContent(5,8.623491);
   hext_stack_2->SetBinContent(6,3.882816);
   hext_stack_2->SetBinContent(7,3.889996);
   hext_stack_2->SetBinContent(8,2.909624);
   hext_stack_2->SetBinContent(9,1.697008);
   hext_stack_2->SetBinContent(10,3.786253);
   hext_stack_2->SetBinContent(11,4.028449);
   hext_stack_2->SetBinContent(12,4.345666);
   hext_stack_2->SetBinContent(13,4.677244);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,1.297589);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(20,4.345666);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,2.67738);
   hext_stack_2->SetBinError(1,2.711844);
   hext_stack_2->SetBinError(2,2.264322);
   hext_stack_2->SetBinError(3,1.972022);
   hext_stack_2->SetBinError(4,1.601118);
   hext_stack_2->SetBinError(5,2.127429);
   hext_stack_2->SetBinError(6,1.341763);
   hext_stack_2->SetBinError(7,1.264566);
   hext_stack_2->SetBinError(8,1.218453);
   hext_stack_2->SetBinError(9,0.8873887);
   hext_stack_2->SetBinError(10,1.463777);
   hext_stack_2->SetBinError(11,1.479117);
   hext_stack_2->SetBinError(12,1.579311);
   hext_stack_2->SetBinError(13,1.54863);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.6487947);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(20,1.579311);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.9497147);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,1.941634);
   hdirt_stack_3->SetBinContent(2,0.4008912);
   hdirt_stack_3->SetBinContent(3,0.2945329);
   hdirt_stack_3->SetBinContent(6,0.7430996);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.002351481);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.2623434);
   hdirt_stack_3->SetBinContent(17,0.2620035);
   hdirt_stack_3->SetBinError(1,0.7915393);
   hdirt_stack_3->SetBinError(2,0.2968804);
   hdirt_stack_3->SetBinError(3,0.2086718);
   hdirt_stack_3->SetBinError(6,0.5275648);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.002351481);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(14,0.2623434);
   hdirt_stack_3->SetBinError(17,0.2620035);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,23.12838);
   houtFV_stack_4->SetBinContent(2,12.55614);
   houtFV_stack_4->SetBinContent(3,11.74562);
   houtFV_stack_4->SetBinContent(4,9.02349);
   houtFV_stack_4->SetBinContent(5,10.64837);
   houtFV_stack_4->SetBinContent(6,8.576173);
   houtFV_stack_4->SetBinContent(7,7.668891);
   houtFV_stack_4->SetBinContent(8,5.940387);
   houtFV_stack_4->SetBinContent(9,3.821609);
   houtFV_stack_4->SetBinContent(10,3.414692);
   houtFV_stack_4->SetBinContent(11,4.106273);
   houtFV_stack_4->SetBinContent(12,3.175226);
   houtFV_stack_4->SetBinContent(13,2.679497);
   houtFV_stack_4->SetBinContent(14,1.957659);
   houtFV_stack_4->SetBinContent(15,1.465526);
   houtFV_stack_4->SetBinContent(16,1.660551);
   houtFV_stack_4->SetBinContent(17,1.123658);
   houtFV_stack_4->SetBinContent(18,0.9286332);
   houtFV_stack_4->SetBinContent(19,0.7336084);
   houtFV_stack_4->SetBinContent(20,0.536893);
   houtFV_stack_4->SetBinContent(21,0.3900497);
   houtFV_stack_4->SetBinContent(23,0.3917402);
   houtFV_stack_4->SetBinContent(24,0.6803553);
   houtFV_stack_4->SetBinContent(25,4.942836);
   houtFV_stack_4->SetBinError(1,2.431787);
   houtFV_stack_4->SetBinError(2,1.778644);
   houtFV_stack_4->SetBinError(3,1.698033);
   houtFV_stack_4->SetBinError(4,1.455842);
   houtFV_stack_4->SetBinError(5,1.648567);
   houtFV_stack_4->SetBinError(6,1.485682);
   houtFV_stack_4->SetBinError(7,1.358526);
   houtFV_stack_4->SetBinError(8,1.230652);
   houtFV_stack_4->SetBinError(9,1.004025);
   houtFV_stack_4->SetBinError(10,0.9817734);
   houtFV_stack_4->SetBinError(11,1.000664);
   houtFV_stack_4->SetBinError(12,0.9631468);
   houtFV_stack_4->SetBinError(13,0.8332418);
   houtFV_stack_4->SetBinError(14,0.6671402);
   houtFV_stack_4->SetBinError(15,0.6209405);
   houtFV_stack_4->SetBinError(16,0.650847);
   houtFV_stack_4->SetBinError(17,0.5188295);
   houtFV_stack_4->SetBinError(18,0.48078);
   houtFV_stack_4->SetBinError(19,0.4394482);
   houtFV_stack_4->SetBinError(20,0.3929602);
   houtFV_stack_4->SetBinError(21,0.2758068);
   houtFV_stack_4->SetBinError(23,0.2770047);
   houtFV_stack_4->SetBinError(24,0.4810838);
   houtFV_stack_4->SetBinError(25,1.182108);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,31.54707);
   hNCpi0inFVres_stack_7->SetBinContent(2,21.33428);
   hNCpi0inFVres_stack_7->SetBinContent(3,19.14495);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.95753);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.94201);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.833129);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.271306);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.767091);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.06379);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.220798);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.35997);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.189162);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.84432);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.328998);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.878854);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.42374);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.184426);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.9348222);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5294358);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.7665901);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.446568);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.631826);
   hNCpi0inFVres_stack_7->SetBinError(1,1.870635);
   hNCpi0inFVres_stack_7->SetBinError(2,1.493206);
   hNCpi0inFVres_stack_7->SetBinError(3,1.403935);
   hNCpi0inFVres_stack_7->SetBinError(4,1.223403);
   hNCpi0inFVres_stack_7->SetBinError(5,1.232621);
   hNCpi0inFVres_stack_7->SetBinError(6,1.015265);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9921601);
   hNCpi0inFVres_stack_7->SetBinError(8,0.625581);
   hNCpi0inFVres_stack_7->SetBinError(9,0.811069);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5178479);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5925108);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4752605);
   hNCpi0inFVres_stack_7->SetBinError(13,0.60223);
   hNCpi0inFVres_stack_7->SetBinError(14,0.543399);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3111014);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4511025);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3637747);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3620771);
   hNCpi0inFVres_stack_7->SetBinError(19,0.168174);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3273579);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2126346);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4436346);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.285845);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.745769);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.034314);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.402152);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.55103);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.844984);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.576026);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.533676);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.115672);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.878854);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8358399);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8511223);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.000041);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8366202);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.779628);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5877842);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4655381);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5909216);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4418765);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4099691);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3318839);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3111014);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2882649);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1313578);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3588378);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.05579997);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,30.1063);
   hCCpi0inFV_stack_10->SetBinContent(2,13.01912);
   hCCpi0inFV_stack_10->SetBinContent(3,14.93596);
   hCCpi0inFV_stack_10->SetBinContent(4,12.78394);
   hCCpi0inFV_stack_10->SetBinContent(5,10.37513);
   hCCpi0inFV_stack_10->SetBinContent(6,8.122631);
   hCCpi0inFV_stack_10->SetBinContent(7,8.488279);
   hCCpi0inFV_stack_10->SetBinContent(8,7.782774);
   hCCpi0inFV_stack_10->SetBinContent(9,3.174259);
   hCCpi0inFV_stack_10->SetBinContent(10,2.876786);
   hCCpi0inFV_stack_10->SetBinContent(11,2.478285);
   hCCpi0inFV_stack_10->SetBinContent(12,2.683339);
   hCCpi0inFV_stack_10->SetBinContent(13,1.610679);
   hCCpi0inFV_stack_10->SetBinContent(14,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(15,1.354022);
   hCCpi0inFV_stack_10->SetBinContent(16,1.608988);
   hCCpi0inFV_stack_10->SetBinContent(17,1.156355);
   hCCpi0inFV_stack_10->SetBinContent(18,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(19,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(20,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(22,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(23,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(25,2.508605);
   hCCpi0inFV_stack_10->SetBinError(1,2.773882);
   hCCpi0inFV_stack_10->SetBinError(2,1.814351);
   hCCpi0inFV_stack_10->SetBinError(3,1.916528);
   hCCpi0inFV_stack_10->SetBinError(4,1.78189);
   hCCpi0inFV_stack_10->SetBinError(5,1.665189);
   hCCpi0inFV_stack_10->SetBinError(6,1.396205);
   hCCpi0inFV_stack_10->SetBinError(7,1.486259);
   hCCpi0inFV_stack_10->SetBinError(8,1.432878);
   hCCpi0inFV_stack_10->SetBinError(9,0.8768439);
   hCCpi0inFV_stack_10->SetBinError(10,0.8192778);
   hCCpi0inFV_stack_10->SetBinError(11,0.7682901);
   hCCpi0inFV_stack_10->SetBinError(12,0.8344026);
   hCCpi0inFV_stack_10->SetBinError(13,0.6806271);
   hCCpi0inFV_stack_10->SetBinError(14,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(15,0.5677774);
   hCCpi0inFV_stack_10->SetBinError(16,0.6801404);
   hCCpi0inFV_stack_10->SetBinError(17,0.5319836);
   hCCpi0inFV_stack_10->SetBinError(18,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(19,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(20,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(22,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(23,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(25,0.7893508);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,9.282951);
   hNCinFV_stack_11->SetBinContent(2,3.912939);
   hNCinFV_stack_11->SetBinContent(3,3.56938);
   hNCinFV_stack_11->SetBinContent(4,3.076205);
   hNCinFV_stack_11->SetBinContent(5,3.559845);
   hNCinFV_stack_11->SetBinContent(6,2.835772);
   hNCinFV_stack_11->SetBinContent(7,3.659589);
   hNCinFV_stack_11->SetBinContent(8,1.465526);
   hNCinFV_stack_11->SetBinContent(9,0.3900497);
   hNCinFV_stack_11->SetBinContent(10,1.217248);
   hNCinFV_stack_11->SetBinContent(11,0.9801958);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,0.536893);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.0469509);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.519924);
   hNCinFV_stack_11->SetBinError(2,0.981813);
   hNCinFV_stack_11->SetBinError(3,0.9202779);
   hNCinFV_stack_11->SetBinError(4,0.9213145);
   hNCinFV_stack_11->SetBinError(5,1.020571);
   hNCinFV_stack_11->SetBinError(6,0.808577);
   hNCinFV_stack_11->SetBinError(7,0.9809496);
   hNCinFV_stack_11->SetBinError(8,0.6209405);
   hNCinFV_stack_11->SetBinError(9,0.2758068);
   hNCinFV_stack_11->SetBinError(10,0.6211758);
   hNCinFV_stack_11->SetBinError(11,0.4383608);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.3929602);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.0469509);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,27.0132);
   hnumuCCinFV_stack_12->SetBinContent(2,18.88925);
   hnumuCCinFV_stack_12->SetBinContent(3,16.66275);
   hnumuCCinFV_stack_12->SetBinContent(4,10.92717);
   hnumuCCinFV_stack_12->SetBinContent(5,8.722691);
   hnumuCCinFV_stack_12->SetBinContent(6,4.633372);
   hnumuCCinFV_stack_12->SetBinContent(7,3.078948);
   hnumuCCinFV_stack_12->SetBinContent(8,2.28086);
   hnumuCCinFV_stack_12->SetBinContent(9,3.673782);
   hnumuCCinFV_stack_12->SetBinContent(10,2.352926);
   hnumuCCinFV_stack_12->SetBinContent(11,1.11542);
   hnumuCCinFV_stack_12->SetBinContent(12,2.137239);
   hnumuCCinFV_stack_12->SetBinContent(13,1.821344);
   hnumuCCinFV_stack_12->SetBinContent(14,1.56053);
   hnumuCCinFV_stack_12->SetBinContent(15,1.955511);
   hnumuCCinFV_stack_12->SetBinContent(16,0.9127283);
   hnumuCCinFV_stack_12->SetBinContent(17,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(18,0.4516767);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(20,0.222045);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8608713);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9168544);
   hnumuCCinFV_stack_12->SetBinContent(23,0.4228995);
   hnumuCCinFV_stack_12->SetBinContent(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinContent(25,4.60315);
   hnumuCCinFV_stack_12->SetBinError(1,3.009893);
   hnumuCCinFV_stack_12->SetBinError(2,2.598295);
   hnumuCCinFV_stack_12->SetBinError(3,2.643829);
   hnumuCCinFV_stack_12->SetBinError(4,1.900523);
   hnumuCCinFV_stack_12->SetBinError(5,1.64521);
   hnumuCCinFV_stack_12->SetBinError(6,1.087625);
   hnumuCCinFV_stack_12->SetBinError(7,0.8715335);
   hnumuCCinFV_stack_12->SetBinError(8,0.7445493);
   hnumuCCinFV_stack_12->SetBinError(9,1.1715);
   hnumuCCinFV_stack_12->SetBinError(10,0.773386);
   hnumuCCinFV_stack_12->SetBinError(11,0.5717946);
   hnumuCCinFV_stack_12->SetBinError(12,0.7329767);
   hnumuCCinFV_stack_12->SetBinError(13,0.7555195);
   hnumuCCinFV_stack_12->SetBinError(14,0.6047388);
   hnumuCCinFV_stack_12->SetBinError(15,0.7747296);
   hnumuCCinFV_stack_12->SetBinError(16,0.5342648);
   hnumuCCinFV_stack_12->SetBinError(17,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(18,0.3220283);
   hnumuCCinFV_stack_12->SetBinError(19,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(20,0.222045);
   hnumuCCinFV_stack_12->SetBinError(21,0.4320875);
   hnumuCCinFV_stack_12->SetBinError(22,0.5435619);
   hnumuCCinFV_stack_12->SetBinError(23,0.2997603);
   hnumuCCinFV_stack_12->SetBinError(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinError(25,1.172974);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,4.798329);
   hnueCCinFV_stack_13->SetBinContent(2,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.829905);
   hnueCCinFV_stack_13->SetBinError(2,0.2502081);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__26->SetBinContent(1,154.4282);
   hmcerror__26->SetBinContent(2,88.82227);
   hmcerror__26->SetBinContent(3,81.75317);
   hmcerror__26->SetBinContent(4,59.74041);
   hmcerror__26->SetBinContent(5,58.64826);
   hmcerror__26->SetBinContent(6,43.09955);
   hmcerror__26->SetBinContent(7,38.92368);
   hmcerror__26->SetBinContent(8,27.12453);
   hmcerror__26->SetBinContent(9,20.89193);
   hmcerror__26->SetBinContent(10,18.21682);
   hmcerror__26->SetBinContent(11,18.66309);
   hmcerror__26->SetBinContent(12,17.75837);
   hmcerror__26->SetBinContent(13,16.51608);
   hmcerror__26->SetBinContent(14,11.49819);
   hmcerror__26->SetBinContent(15,7.803842);
   hmcerror__26->SetBinContent(16,7.394355);
   hmcerror__26->SetBinContent(17,6.396965);
   hmcerror__26->SetBinContent(18,5.353338);
   hmcerror__26->SetBinContent(19,4.484582);
   hmcerror__26->SetBinContent(20,7.416626);
   hmcerror__26->SetBinContent(21,1.731405);
   hmcerror__26->SetBinContent(22,2.322056);
   hmcerror__26->SetBinContent(23,1.515139);
   hmcerror__26->SetBinContent(24,1.924107);
   hmcerror__26->SetBinContent(25,18.63065);
   hmcerror__26->SetBinError(1,46.29077);
   hmcerror__26->SetBinError(2,31.25103);
   hmcerror__26->SetBinError(3,28.46963);
   hmcerror__26->SetBinError(4,36.78566);
   hmcerror__26->SetBinError(5,21.32924);
   hmcerror__26->SetBinError(6,19.16847);
   hmcerror__26->SetBinError(7,17.86781);
   hmcerror__26->SetBinError(8,12.50089);
   hmcerror__26->SetBinError(9,13.23057);
   hmcerror__26->SetBinError(10,9.430499);
   hmcerror__26->SetBinError(11,9.412169);
   hmcerror__26->SetBinError(12,8.583313);
   hmcerror__26->SetBinError(13,11.8525);
   hmcerror__26->SetBinError(14,7.863484);
   hmcerror__26->SetBinError(15,7.085369);
   hmcerror__26->SetBinError(16,6.962109);
   hmcerror__26->SetBinError(17,7.840592);
   hmcerror__26->SetBinError(18,4.3221);
   hmcerror__26->SetBinError(19,5.140794);
   hmcerror__26->SetBinError(20,6.021873);
   hmcerror__26->SetBinError(21,2.605979);
   hmcerror__26->SetBinError(22,3.310698);
   hmcerror__26->SetBinError(23,2.963908);
   hmcerror__26->SetBinError(24,6.894497);
   hmcerror__26->SetBinError(25,13.42428);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   125,
   73,
   55,
   55,
   53,
   43,
   30,
   25,
   20,
   19,
   12,
   3,
   9,
   10,
   3,
   6,
   6,
   6,
   3,
   3,
   2,
   2,
   5,
   2};
   Double_t _felx3033[24] = {
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
   Double_t _fely3033[24] = {
   11.18034,
   8.6693,
   7.546,
   7.546,
   7.4105,
   6.6917,
   5.6197,
   5.1474,
   4.6266,
   4.5151,
   3.64022,
   2.143368,
   3.19354,
   3.34883,
   2.143368,
   2.67925,
   2.67925,
   2.67925,
   2.143368,
   2.143368,
   2,
   2,
   2.48995,
   2};
   Double_t _fehx3033[24] = {
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
   Double_t _fehy3033[24] = {
   11.18034,
   8.4672,
   7.3425,
   7.3425,
   7.2068,
   6.4868,
   5.4117,
   4.9374,
   4.4133,
   4.3011,
   3.4155,
   1.72422,
   2.9582,
   3.1179,
   1.72422,
   2.41858,
   2.41858,
   2.41858,
   1.72422,
   1.72422,
   1.51917,
   1.51917,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,99);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(149.7984);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 570.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.9","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 85.8","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.4","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  149.7","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.8","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 129.6","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.0","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.7","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
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
   Double_t _fely3034[24] = {
   0.2997559,
   0.3518378,
   0.3482388,
   0.6157583,
   0.3636806,
   0.4447488,
   0.4590474,
   0.4608704,
   0.6332861,
   0.517681,
   0.5043199,
   0.4833391,
   0.7176341,
   0.6838886,
   0.9079335,
   0.9415438,
   1.225674,
   0.8073654,
   1.146326,
   0.8119424,
   1.505123,
   1.425761,
   1.956196,
   3.58322};
   Double_t _fehx3034[24] = {
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
   Double_t _fehy3034[24] = {
   0.2997559,
   0.3518378,
   0.3482388,
   0.6157583,
   0.3636806,
   0.4447488,
   0.4590474,
   0.4608704,
   0.6332861,
   0.517681,
   0.5043199,
   0.4833391,
   0.7176341,
   0.6838886,
   0.9079335,
   0.9415438,
   1.225674,
   0.8073654,
   1.146326,
   0.8119424,
   1.505123,
   1.425761,
   1.956196,
   3.58322};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,99);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[24] = {
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
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
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
   Double_t _fely3035[24] = {
   0.2323934,
   0.2672462,
   0.2607406,
   0.257625,
   0.2336043,
   0.2684541,
   0.262538,
   0.248057,
   0.2684151,
   0.2490656,
   0.2420591,
   0.2130694,
   0.3542622,
   0.2460242,
   0.3211372,
   0.3578128,
   0.3050653,
   0.3368909,
   0.3532646,
   0.3873918,
   0.6915818,
   0.4541957,
   0.5659093,
   0.5962049};
   Double_t _fehx3035[24] = {
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
   Double_t _fehy3035[24] = {
   0.2323934,
   0.2672462,
   0.2607406,
   0.257625,
   0.2336043,
   0.2684541,
   0.262538,
   0.248057,
   0.2684151,
   0.2490656,
   0.2420591,
   0.2130694,
   0.3542622,
   0.2460242,
   0.3211372,
   0.3578128,
   0.3050653,
   0.3368909,
   0.3532646,
   0.3873918,
   0.6915818,
   0.4541957,
   0.5659093,
   0.5962049};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,99);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.8094375,
   0.821866,
   0.6727568,
   0.9206498,
   0.9036926,
   0.9976902,
   0.770739,
   0.9216748,
   0.9573076,
   1.042992,
   0.6429802,
   0.1689345,
   0.5449234,
   0.8697017,
   0.3844261,
   0.8114298,
   0.9379448,
   1.120796,
   0.6689587,
   0.4044966,
   1.155131,
   0.8613056,
   3.300028,
   1.039443};
   Double_t _felx3036[24] = {
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
   Double_t _fely3036[24] = {
   0.07239829,
   0.09760278,
   0.09230223,
   0.1263132,
   0.126355,
   0.1552615,
   0.1443774,
   0.1897692,
   0.221454,
   0.2478534,
   0.1950491,
   0.1206962,
   0.1933594,
   0.2912483,
   0.2746555,
   0.3623372,
   0.4188314,
   0.5004822,
   0.4779415,
   0.288995,
   1.155131,
   0.8613056,
   1.643381,
   1.039443};
   Double_t _fehx3036[24] = {
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
   Double_t _fehy3036[24] = {
   0.07239829,
   0.09532745,
   0.08981303,
   0.1229067,
   0.1228817,
   0.1505074,
   0.1390336,
   0.1820271,
   0.2112443,
   0.236106,
   0.1830082,
   0.09709339,
   0.1791103,
   0.2711643,
   0.220945,
   0.3270847,
   0.3780824,
   0.4517892,
   0.3844773,
   0.2324804,
   0.8774203,
   0.6542348,
   1.459035,
   0.7895456};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,99);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(5.23497);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
