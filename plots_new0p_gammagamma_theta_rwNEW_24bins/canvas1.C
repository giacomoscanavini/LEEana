#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 20:57:02 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-11.6009,3.553846,1282.816);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__1->SetBinContent(1,135.8225);
   hmc__1->SetBinContent(2,174.8658);
   hmc__1->SetBinContent(3,219.6081);
   hmc__1->SetBinContent(4,389.4635);
   hmc__1->SetBinContent(5,547.1606);
   hmc__1->SetBinContent(6,580.0452);
   hmc__1->SetBinContent(7,554.0311);
   hmc__1->SetBinContent(8,523.4009);
   hmc__1->SetBinContent(9,505.5855);
   hmc__1->SetBinContent(10,452.741);
   hmc__1->SetBinContent(11,449.0516);
   hmc__1->SetBinContent(12,383.7036);
   hmc__1->SetBinContent(13,351.422);
   hmc__1->SetBinContent(14,293.5655);
   hmc__1->SetBinContent(15,245.8153);
   hmc__1->SetBinContent(16,246.4157);
   hmc__1->SetBinContent(17,215.3375);
   hmc__1->SetBinContent(18,182.2176);
   hmc__1->SetBinContent(19,171.7101);
   hmc__1->SetBinContent(20,166.1411);
   hmc__1->SetBinContent(21,166.4272);
   hmc__1->SetBinContent(22,154.3937);
   hmc__1->SetBinContent(23,144.7264);
   hmc__1->SetBinContent(24,80.65371);
   hmc__1->SetBinError(1,47.92883);
   hmc__1->SetBinError(2,46.12561);
   hmc__1->SetBinError(3,58.02801);
   hmc__1->SetBinError(4,92.81134);
   hmc__1->SetBinError(5,144.5422);
   hmc__1->SetBinError(6,177.7012);
   hmc__1->SetBinError(7,160.1292);
   hmc__1->SetBinError(8,144.5095);
   hmc__1->SetBinError(9,135.8421);
   hmc__1->SetBinError(10,120.6297);
   hmc__1->SetBinError(11,127.235);
   hmc__1->SetBinError(12,98.70787);
   hmc__1->SetBinError(13,90.94979);
   hmc__1->SetBinError(14,75.35936);
   hmc__1->SetBinError(15,80.61424);
   hmc__1->SetBinError(16,62.855);
   hmc__1->SetBinError(17,55.90797);
   hmc__1->SetBinError(18,45.28975);
   hmc__1->SetBinError(19,42.05403);
   hmc__1->SetBinError(20,44.22923);
   hmc__1->SetBinError(21,44.1534);
   hmc__1->SetBinError(22,43.26112);
   hmc__1->SetBinError(23,37.40474);
   hmc__1->SetBinError(24,23.37555);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-11.6009);
   hmc__1->SetMaximum(1218.095);
   hmc__1->SetEntries(7241.585);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,3.15);
   hs1_stack_1->SetMinimum(-5.219833e-10);
   hs1_stack_1->SetMaximum(609.0474);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.67164);
   hbadmatch_stack_1->SetBinContent(2,7.010409);
   hbadmatch_stack_1->SetBinContent(3,5.601357);
   hbadmatch_stack_1->SetBinContent(4,9.273624);
   hbadmatch_stack_1->SetBinContent(5,12.38412);
   hbadmatch_stack_1->SetBinContent(6,16.7039);
   hbadmatch_stack_1->SetBinContent(7,9.125227);
   hbadmatch_stack_1->SetBinContent(8,12.32123);
   hbadmatch_stack_1->SetBinContent(9,10.10355);
   hbadmatch_stack_1->SetBinContent(10,8.69532);
   hbadmatch_stack_1->SetBinContent(11,11.39664);
   hbadmatch_stack_1->SetBinContent(12,10.77486);
   hbadmatch_stack_1->SetBinContent(13,6.170254);
   hbadmatch_stack_1->SetBinContent(14,4.886943);
   hbadmatch_stack_1->SetBinContent(15,4.721729);
   hbadmatch_stack_1->SetBinContent(16,7.920402);
   hbadmatch_stack_1->SetBinContent(17,10.29646);
   hbadmatch_stack_1->SetBinContent(18,3.782447);
   hbadmatch_stack_1->SetBinContent(19,6.047491);
   hbadmatch_stack_1->SetBinContent(20,3.989675);
   hbadmatch_stack_1->SetBinContent(21,6.09621);
   hbadmatch_stack_1->SetBinContent(22,4.077834);
   hbadmatch_stack_1->SetBinContent(23,3.854608);
   hbadmatch_stack_1->SetBinContent(24,1.627516);
   hbadmatch_stack_1->SetBinError(1,1.07841);
   hbadmatch_stack_1->SetBinError(2,1.40555);
   hbadmatch_stack_1->SetBinError(3,1.299404);
   hbadmatch_stack_1->SetBinError(4,1.642953);
   hbadmatch_stack_1->SetBinError(5,2.055543);
   hbadmatch_stack_1->SetBinError(6,2.606923);
   hbadmatch_stack_1->SetBinError(7,1.554146);
   hbadmatch_stack_1->SetBinError(8,1.879114);
   hbadmatch_stack_1->SetBinError(9,1.648076);
   hbadmatch_stack_1->SetBinError(10,1.481735);
   hbadmatch_stack_1->SetBinError(11,1.803938);
   hbadmatch_stack_1->SetBinError(12,1.9682);
   hbadmatch_stack_1->SetBinError(13,1.252119);
   hbadmatch_stack_1->SetBinError(14,1.101101);
   hbadmatch_stack_1->SetBinError(15,1.206583);
   hbadmatch_stack_1->SetBinError(16,1.423782);
   hbadmatch_stack_1->SetBinError(17,2.508785);
   hbadmatch_stack_1->SetBinError(18,1.735807);
   hbadmatch_stack_1->SetBinError(19,1.340368);
   hbadmatch_stack_1->SetBinError(20,1.042214);
   hbadmatch_stack_1->SetBinError(21,1.340467);
   hbadmatch_stack_1->SetBinError(22,1.074869);
   hbadmatch_stack_1->SetBinError(23,1.067754);
   hbadmatch_stack_1->SetBinError(24,0.9305159);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,11.91219);
   hext_stack_2->SetBinContent(2,19.36501);
   hext_stack_2->SetBinContent(3,22.97804);
   hext_stack_2->SetBinContent(4,41.61646);
   hext_stack_2->SetBinContent(5,49.60558);
   hext_stack_2->SetBinContent(6,43.77474);
   hext_stack_2->SetBinContent(7,35.25657);
   hext_stack_2->SetBinContent(8,39.6629);
   hext_stack_2->SetBinContent(9,31.25842);
   hext_stack_2->SetBinContent(10,28.29696);
   hext_stack_2->SetBinContent(11,37.99461);
   hext_stack_2->SetBinContent(12,28.37034);
   hext_stack_2->SetBinContent(13,32.61227);
   hext_stack_2->SetBinContent(14,27.4694);
   hext_stack_2->SetBinContent(15,18.62683);
   hext_stack_2->SetBinContent(16,24.34347);
   hext_stack_2->SetBinContent(17,22.85559);
   hext_stack_2->SetBinContent(18,17.68677);
   hext_stack_2->SetBinContent(19,13.2848);
   hext_stack_2->SetBinContent(20,20.01657);
   hext_stack_2->SetBinContent(21,18.93964);
   hext_stack_2->SetBinContent(22,9.46982);
   hext_stack_2->SetBinContent(23,11.9988);
   hext_stack_2->SetBinContent(24,7.436825);
   hext_stack_2->SetBinError(1,2.200574);
   hext_stack_2->SetBinError(2,2.876086);
   hext_stack_2->SetBinError(3,3.166085);
   hext_stack_2->SetBinError(4,4.261517);
   hext_stack_2->SetBinError(5,4.554471);
   hext_stack_2->SetBinError(6,4.223745);
   hext_stack_2->SetBinError(7,3.817383);
   hext_stack_2->SetBinError(8,4.21074);
   hext_stack_2->SetBinError(9,3.658098);
   hext_stack_2->SetBinError(10,3.391696);
   hext_stack_2->SetBinError(11,4.017221);
   hext_stack_2->SetBinError(12,3.360573);
   hext_stack_2->SetBinError(13,3.785655);
   hext_stack_2->SetBinError(14,3.402258);
   hext_stack_2->SetBinError(15,2.864004);
   hext_stack_2->SetBinError(16,3.302653);
   hext_stack_2->SetBinError(17,3.082933);
   hext_stack_2->SetBinError(18,2.686472);
   hext_stack_2->SetBinError(19,2.350479);
   hext_stack_2->SetBinError(20,2.854123);
   hext_stack_2->SetBinError(21,2.893757);
   hext_stack_2->SetBinError(22,2.046195);
   hext_stack_2->SetBinError(23,2.244491);
   hext_stack_2->SetBinError(24,1.833113);
   hext_stack_2->SetEntries(1541);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,1.14619);
   hdirt_stack_3->SetBinContent(2,3.736266);
   hdirt_stack_3->SetBinContent(3,2.007586);
   hdirt_stack_3->SetBinContent(4,5.236095);
   hdirt_stack_3->SetBinContent(5,5.782753);
   hdirt_stack_3->SetBinContent(6,3.30443);
   hdirt_stack_3->SetBinContent(7,4.316348);
   hdirt_stack_3->SetBinContent(8,3.410394);
   hdirt_stack_3->SetBinContent(9,4.174051);
   hdirt_stack_3->SetBinContent(10,2.658617);
   hdirt_stack_3->SetBinContent(11,3.7715);
   hdirt_stack_3->SetBinContent(12,1.570737);
   hdirt_stack_3->SetBinContent(13,1.54716);
   hdirt_stack_3->SetBinContent(14,1.854044);
   hdirt_stack_3->SetBinContent(15,4.451793);
   hdirt_stack_3->SetBinContent(16,1.721273);
   hdirt_stack_3->SetBinContent(17,2.129831);
   hdirt_stack_3->SetBinContent(18,3.03783);
   hdirt_stack_3->SetBinContent(19,4.252109);
   hdirt_stack_3->SetBinContent(20,1.499683);
   hdirt_stack_3->SetBinContent(21,2.220806);
   hdirt_stack_3->SetBinContent(22,3.082272);
   hdirt_stack_3->SetBinContent(23,4.191653);
   hdirt_stack_3->SetBinContent(24,1.927622);
   hdirt_stack_3->SetBinError(1,0.5715167);
   hdirt_stack_3->SetBinError(2,1.105005);
   hdirt_stack_3->SetBinError(3,0.7621027);
   hdirt_stack_3->SetBinError(4,1.539429);
   hdirt_stack_3->SetBinError(5,1.301714);
   hdirt_stack_3->SetBinError(6,0.9511406);
   hdirt_stack_3->SetBinError(7,1.061976);
   hdirt_stack_3->SetBinError(8,0.944822);
   hdirt_stack_3->SetBinError(9,1.30823);
   hdirt_stack_3->SetBinError(10,0.7077202);
   hdirt_stack_3->SetBinError(11,1.24813);
   hdirt_stack_3->SetBinError(12,0.610746);
   hdirt_stack_3->SetBinError(13,0.5782485);
   hdirt_stack_3->SetBinError(14,0.6691053);
   hdirt_stack_3->SetBinError(15,1.175658);
   hdirt_stack_3->SetBinError(16,0.5767192);
   hdirt_stack_3->SetBinError(17,0.7101958);
   hdirt_stack_3->SetBinError(18,0.9858534);
   hdirt_stack_3->SetBinError(19,1.056877);
   hdirt_stack_3->SetBinError(20,0.6552434);
   hdirt_stack_3->SetBinError(21,0.7783481);
   hdirt_stack_3->SetBinError(22,0.8594206);
   hdirt_stack_3->SetBinError(23,1.126805);
   hdirt_stack_3->SetBinError(24,0.733452);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,16.80754);
   houtFV_stack_4->SetBinContent(2,26.87053);
   houtFV_stack_4->SetBinContent(3,29.16302);
   houtFV_stack_4->SetBinContent(4,45.24767);
   houtFV_stack_4->SetBinContent(5,53.10273);
   houtFV_stack_4->SetBinContent(6,53.27264);
   houtFV_stack_4->SetBinContent(7,47.87161);
   houtFV_stack_4->SetBinContent(8,41.01796);
   houtFV_stack_4->SetBinContent(9,42.59635);
   houtFV_stack_4->SetBinContent(10,35.60631);
   houtFV_stack_4->SetBinContent(11,35.06751);
   houtFV_stack_4->SetBinContent(12,29.26933);
   houtFV_stack_4->SetBinContent(13,23.74059);
   houtFV_stack_4->SetBinContent(14,19.54416);
   houtFV_stack_4->SetBinContent(15,23.76994);
   houtFV_stack_4->SetBinContent(16,23.66111);
   houtFV_stack_4->SetBinContent(17,14.98017);
   houtFV_stack_4->SetBinContent(18,20.28095);
   houtFV_stack_4->SetBinContent(19,22.2558);
   houtFV_stack_4->SetBinContent(20,21.42592);
   houtFV_stack_4->SetBinContent(21,29.10052);
   houtFV_stack_4->SetBinContent(22,29.95447);
   houtFV_stack_4->SetBinContent(23,23.99053);
   houtFV_stack_4->SetBinContent(24,13.63439);
   houtFV_stack_4->SetBinError(1,2.130158);
   houtFV_stack_4->SetBinError(2,2.624582);
   houtFV_stack_4->SetBinError(3,2.731946);
   houtFV_stack_4->SetBinError(4,3.415169);
   houtFV_stack_4->SetBinError(5,3.676517);
   houtFV_stack_4->SetBinError(6,3.737957);
   houtFV_stack_4->SetBinError(7,3.471655);
   houtFV_stack_4->SetBinError(8,3.280346);
   houtFV_stack_4->SetBinError(9,3.290441);
   houtFV_stack_4->SetBinError(10,2.909205);
   houtFV_stack_4->SetBinError(11,2.946947);
   houtFV_stack_4->SetBinError(12,2.723772);
   houtFV_stack_4->SetBinError(13,2.40791);
   houtFV_stack_4->SetBinError(14,2.240912);
   houtFV_stack_4->SetBinError(15,2.719876);
   houtFV_stack_4->SetBinError(16,2.411875);
   houtFV_stack_4->SetBinError(17,1.963822);
   houtFV_stack_4->SetBinError(18,2.265079);
   houtFV_stack_4->SetBinError(19,2.374061);
   houtFV_stack_4->SetBinError(20,2.315505);
   houtFV_stack_4->SetBinError(21,2.680107);
   houtFV_stack_4->SetBinError(22,2.717652);
   houtFV_stack_4->SetBinError(23,2.431971);
   houtFV_stack_4->SetBinError(24,1.83675);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.590308);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.605997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.421338);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,8.130062);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.6272);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.60621);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.36008);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.455461);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.607003);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.464263);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.621214);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.129056);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.88467);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.664135);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.60883);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.519394);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.051494);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.338208);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.731888);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.980244);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.576026);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.565816);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.42598);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.519394);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4346236);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4461125);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6822262);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9478903);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.10834);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.207472);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.070409);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.787203);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7625493);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6998731);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8223086);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7183528);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5346129);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6083923);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5677436);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4176504);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5415458);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3603705);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5833534);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4618313);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4418765);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5555585);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.489117);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4176504);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5566719);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.659726);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.23068);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.300762);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.297354);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.437022);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.379558);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.204612);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.42174);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.757212);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.060704);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.9770041);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8228858);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7670858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2062853);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4445111);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4835148);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.478525);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.329333);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3809346);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3240709);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5516334);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3153462);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.489714);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.35757);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3542895);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2499367);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2468026);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05579997);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,33.43249);
   hNCpi0inFVres_stack_7->SetBinContent(2,41.52648);
   hNCpi0inFVres_stack_7->SetBinContent(3,63.57009);
   hNCpi0inFVres_stack_7->SetBinContent(4,119.548);
   hNCpi0inFVres_stack_7->SetBinContent(5,198.1786);
   hNCpi0inFVres_stack_7->SetBinContent(6,225.1208);
   hNCpi0inFVres_stack_7->SetBinContent(7,233.1798);
   hNCpi0inFVres_stack_7->SetBinContent(8,223.263);
   hNCpi0inFVres_stack_7->SetBinContent(9,213.2183);
   hNCpi0inFVres_stack_7->SetBinContent(10,197.965);
   hNCpi0inFVres_stack_7->SetBinContent(11,182.0017);
   hNCpi0inFVres_stack_7->SetBinContent(12,167.1127);
   hNCpi0inFVres_stack_7->SetBinContent(13,141.9142);
   hNCpi0inFVres_stack_7->SetBinContent(14,117.2134);
   hNCpi0inFVres_stack_7->SetBinContent(15,93.9777);
   hNCpi0inFVres_stack_7->SetBinContent(16,84.69312);
   hNCpi0inFVres_stack_7->SetBinContent(17,71.28379);
   hNCpi0inFVres_stack_7->SetBinContent(18,63.14195);
   hNCpi0inFVres_stack_7->SetBinContent(19,54.92947);
   hNCpi0inFVres_stack_7->SetBinContent(20,54.2104);
   hNCpi0inFVres_stack_7->SetBinContent(21,53.36378);
   hNCpi0inFVres_stack_7->SetBinContent(22,53.3279);
   hNCpi0inFVres_stack_7->SetBinContent(23,46.82354);
   hNCpi0inFVres_stack_7->SetBinContent(24,22.38087);
   hNCpi0inFVres_stack_7->SetBinError(1,1.939302);
   hNCpi0inFVres_stack_7->SetBinError(2,2.051743);
   hNCpi0inFVres_stack_7->SetBinError(3,2.640593);
   hNCpi0inFVres_stack_7->SetBinError(4,3.49448);
   hNCpi0inFVres_stack_7->SetBinError(5,4.625394);
   hNCpi0inFVres_stack_7->SetBinError(6,4.863701);
   hNCpi0inFVres_stack_7->SetBinError(7,5.013762);
   hNCpi0inFVres_stack_7->SetBinError(8,4.870376);
   hNCpi0inFVres_stack_7->SetBinError(9,4.810413);
   hNCpi0inFVres_stack_7->SetBinError(10,4.67223);
   hNCpi0inFVres_stack_7->SetBinError(11,4.431404);
   hNCpi0inFVres_stack_7->SetBinError(12,4.254681);
   hNCpi0inFVres_stack_7->SetBinError(13,3.889342);
   hNCpi0inFVres_stack_7->SetBinError(14,3.551652);
   hNCpi0inFVres_stack_7->SetBinError(15,3.153767);
   hNCpi0inFVres_stack_7->SetBinError(16,3.027338);
   hNCpi0inFVres_stack_7->SetBinError(17,2.75005);
   hNCpi0inFVres_stack_7->SetBinError(18,2.621634);
   hNCpi0inFVres_stack_7->SetBinError(19,2.331089);
   hNCpi0inFVres_stack_7->SetBinError(20,2.376316);
   hNCpi0inFVres_stack_7->SetBinError(21,2.383267);
   hNCpi0inFVres_stack_7->SetBinError(22,2.356277);
   hNCpi0inFVres_stack_7->SetBinError(23,2.271815);
   hNCpi0inFVres_stack_7->SetBinError(24,1.548108);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.50114);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.73956);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.18565);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.91341);
   hNCpi0inFVdis_stack_8->SetBinContent(5,47.99617);
   hNCpi0inFVdis_stack_8->SetBinContent(6,44.24177);
   hNCpi0inFVdis_stack_8->SetBinContent(7,44.78515);
   hNCpi0inFVdis_stack_8->SetBinContent(8,39.82526);
   hNCpi0inFVdis_stack_8->SetBinContent(9,35.07991);
   hNCpi0inFVdis_stack_8->SetBinContent(10,33.33016);
   hNCpi0inFVdis_stack_8->SetBinContent(11,26.85601);
   hNCpi0inFVdis_stack_8->SetBinContent(12,27.78967);
   hNCpi0inFVdis_stack_8->SetBinContent(13,27.98232);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.61396);
   hNCpi0inFVdis_stack_8->SetBinContent(15,18.75102);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.2097);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.07312);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.93984);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.43074);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.09285);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.3751);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.940073);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.522238);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.216492);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8508428);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.098788);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.450589);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.833827);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.283222);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.162359);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.152256);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.072004);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.96132);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.88633);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.661197);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.717679);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.734889);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.538988);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.37225);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.2061);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.327438);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.175817);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.066857);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9640057);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.081382);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9918655);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9790957);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7482523);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.153118);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1050124);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.7369);
   hCCpi0inFV_stack_10->SetBinContent(2,21.76799);
   hCCpi0inFV_stack_10->SetBinContent(3,30.53531);
   hCCpi0inFV_stack_10->SetBinContent(4,56.67322);
   hCCpi0inFV_stack_10->SetBinContent(5,80.87891);
   hCCpi0inFV_stack_10->SetBinContent(6,95.12189);
   hCCpi0inFV_stack_10->SetBinContent(7,88.14395);
   hCCpi0inFV_stack_10->SetBinContent(8,76.26716);
   hCCpi0inFV_stack_10->SetBinContent(9,82.56606);
   hCCpi0inFV_stack_10->SetBinContent(10,74.15367);
   hCCpi0inFV_stack_10->SetBinContent(11,76.6082);
   hCCpi0inFV_stack_10->SetBinContent(12,51.80588);
   hCCpi0inFV_stack_10->SetBinContent(13,50.40253);
   hCCpi0inFV_stack_10->SetBinContent(14,41.4147);
   hCCpi0inFV_stack_10->SetBinContent(15,32.79779);
   hCCpi0inFV_stack_10->SetBinContent(16,39.21986);
   hCCpi0inFV_stack_10->SetBinContent(17,31.56538);
   hCCpi0inFV_stack_10->SetBinContent(18,24.71433);
   hCCpi0inFV_stack_10->SetBinContent(19,23.01532);
   hCCpi0inFV_stack_10->SetBinContent(20,21.50279);
   hCCpi0inFV_stack_10->SetBinContent(21,19.59766);
   hCCpi0inFV_stack_10->SetBinContent(22,21.76638);
   hCCpi0inFV_stack_10->SetBinContent(23,24.08339);
   hCCpi0inFV_stack_10->SetBinContent(24,13.67787);
   hCCpi0inFV_stack_10->SetBinError(1,2.172645);
   hCCpi0inFV_stack_10->SetBinError(2,2.33705);
   hCCpi0inFV_stack_10->SetBinError(3,2.725468);
   hCCpi0inFV_stack_10->SetBinError(4,3.773011);
   hCCpi0inFV_stack_10->SetBinError(5,4.43872);
   hCCpi0inFV_stack_10->SetBinError(6,4.899456);
   hCCpi0inFV_stack_10->SetBinError(7,4.733461);
   hCCpi0inFV_stack_10->SetBinError(8,4.339385);
   hCCpi0inFV_stack_10->SetBinError(9,4.600516);
   hCCpi0inFV_stack_10->SetBinError(10,4.365285);
   hCCpi0inFV_stack_10->SetBinError(11,4.442129);
   hCCpi0inFV_stack_10->SetBinError(12,3.566885);
   hCCpi0inFV_stack_10->SetBinError(13,3.593113);
   hCCpi0inFV_stack_10->SetBinError(14,3.258963);
   hCCpi0inFV_stack_10->SetBinError(15,2.834354);
   hCCpi0inFV_stack_10->SetBinError(16,3.166277);
   hCCpi0inFV_stack_10->SetBinError(17,2.817337);
   hCCpi0inFV_stack_10->SetBinError(18,2.522484);
   hCCpi0inFV_stack_10->SetBinError(19,2.378713);
   hCCpi0inFV_stack_10->SetBinError(20,2.292765);
   hCCpi0inFV_stack_10->SetBinError(21,2.184836);
   hCCpi0inFV_stack_10->SetBinError(22,2.298049);
   hCCpi0inFV_stack_10->SetBinError(23,2.488224);
   hCCpi0inFV_stack_10->SetBinError(24,1.825702);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.2716);
   hNCinFV_stack_11->SetBinContent(2,13.55842);
   hNCinFV_stack_11->SetBinContent(3,17.77059);
   hNCinFV_stack_11->SetBinContent(4,32.34687);
   hNCinFV_stack_11->SetBinContent(5,37.60422);
   hNCinFV_stack_11->SetBinContent(6,36.53997);
   hNCinFV_stack_11->SetBinContent(7,30.74633);
   hNCinFV_stack_11->SetBinContent(8,35.7106);
   hNCinFV_stack_11->SetBinContent(9,29.76046);
   hNCinFV_stack_11->SetBinContent(10,28.96358);
   hNCinFV_stack_11->SetBinContent(11,29.33746);
   hNCinFV_stack_11->SetBinContent(12,25.85827);
   hNCinFV_stack_11->SetBinContent(13,27.25147);
   hNCinFV_stack_11->SetBinContent(14,24.7502);
   hNCinFV_stack_11->SetBinContent(15,17.94049);
   hNCinFV_stack_11->SetBinContent(16,16.90858);
   hNCinFV_stack_11->SetBinContent(17,19.62748);
   hNCinFV_stack_11->SetBinContent(18,14.98699);
   hNCinFV_stack_11->SetBinContent(19,14.99206);
   hNCinFV_stack_11->SetBinContent(20,13.58425);
   hNCinFV_stack_11->SetBinContent(21,10.01656);
   hNCinFV_stack_11->SetBinContent(22,9.619747);
   hNCinFV_stack_11->SetBinContent(23,8.074156);
   hNCinFV_stack_11->SetBinContent(24,5.869949);
   hNCinFV_stack_11->SetBinError(1,1.582922);
   hNCinFV_stack_11->SetBinError(2,1.932923);
   hNCinFV_stack_11->SetBinError(3,2.112401);
   hNCinFV_stack_11->SetBinError(4,2.829941);
   hNCinFV_stack_11->SetBinError(5,3.102807);
   hNCinFV_stack_11->SetBinError(6,3.020583);
   hNCinFV_stack_11->SetBinError(7,2.747597);
   hNCinFV_stack_11->SetBinError(8,3.034809);
   hNCinFV_stack_11->SetBinError(9,2.675166);
   hNCinFV_stack_11->SetBinError(10,2.755535);
   hNCinFV_stack_11->SetBinError(11,2.779066);
   hNCinFV_stack_11->SetBinError(12,2.528865);
   hNCinFV_stack_11->SetBinError(13,2.684839);
   hNCinFV_stack_11->SetBinError(14,2.543555);
   hNCinFV_stack_11->SetBinError(15,2.085961);
   hNCinFV_stack_11->SetBinError(16,2.010625);
   hNCinFV_stack_11->SetBinError(17,2.141682);
   hNCinFV_stack_11->SetBinError(18,1.992004);
   hNCinFV_stack_11->SetBinError(19,1.992503);
   hNCinFV_stack_11->SetBinError(20,1.830173);
   hNCinFV_stack_11->SetBinError(21,1.582177);
   hNCinFV_stack_11->SetBinError(22,1.557102);
   hNCinFV_stack_11->SetBinError(23,1.388388);
   hNCinFV_stack_11->SetBinError(24,1.160583);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,25.17466);
   hnumuCCinFV_stack_12->SetBinContent(2,21.80633);
   hnumuCCinFV_stack_12->SetBinContent(3,21.47865);
   hnumuCCinFV_stack_12->SetBinContent(4,34.34634);
   hnumuCCinFV_stack_12->SetBinContent(5,44.68142);
   hnumuCCinFV_stack_12->SetBinContent(6,42.86691);
   hnumuCCinFV_stack_12->SetBinContent(7,44.53413);
   hnumuCCinFV_stack_12->SetBinContent(8,40.64908);
   hnumuCCinFV_stack_12->SetBinContent(9,47.86016);
   hnumuCCinFV_stack_12->SetBinContent(10,34.44148);
   hnumuCCinFV_stack_12->SetBinContent(11,38.33988);
   hnumuCCinFV_stack_12->SetBinContent(12,33.97421);
   hnumuCCinFV_stack_12->SetBinContent(13,34.47141);
   hnumuCCinFV_stack_12->SetBinContent(14,30.022);
   hnumuCCinFV_stack_12->SetBinContent(15,26.52284);
   hnumuCCinFV_stack_12->SetBinContent(16,27.32248);
   hnumuCCinFV_stack_12->SetBinContent(17,20.01113);
   hnumuCCinFV_stack_12->SetBinContent(18,18.23399);
   hnumuCCinFV_stack_12->SetBinContent(19,17.10616);
   hnumuCCinFV_stack_12->SetBinContent(20,15.87004);
   hnumuCCinFV_stack_12->SetBinContent(21,12.01477);
   hnumuCCinFV_stack_12->SetBinContent(22,8.278337);
   hnumuCCinFV_stack_12->SetBinContent(23,7.071797);
   hnumuCCinFV_stack_12->SetBinContent(24,6.683107);
   hnumuCCinFV_stack_12->SetBinError(1,3.062659);
   hnumuCCinFV_stack_12->SetBinError(2,2.569934);
   hnumuCCinFV_stack_12->SetBinError(3,2.482505);
   hnumuCCinFV_stack_12->SetBinError(4,3.054356);
   hnumuCCinFV_stack_12->SetBinError(5,4.079948);
   hnumuCCinFV_stack_12->SetBinError(6,3.382959);
   hnumuCCinFV_stack_12->SetBinError(7,4.020223);
   hnumuCCinFV_stack_12->SetBinError(8,3.86003);
   hnumuCCinFV_stack_12->SetBinError(9,5.260497);
   hnumuCCinFV_stack_12->SetBinError(10,3.187383);
   hnumuCCinFV_stack_12->SetBinError(11,3.500183);
   hnumuCCinFV_stack_12->SetBinError(12,3.13409);
   hnumuCCinFV_stack_12->SetBinError(13,3.291668);
   hnumuCCinFV_stack_12->SetBinError(14,3.041583);
   hnumuCCinFV_stack_12->SetBinError(15,2.953878);
   hnumuCCinFV_stack_12->SetBinError(16,2.971311);
   hnumuCCinFV_stack_12->SetBinError(17,2.576403);
   hnumuCCinFV_stack_12->SetBinError(18,2.28122);
   hnumuCCinFV_stack_12->SetBinError(19,2.262186);
   hnumuCCinFV_stack_12->SetBinError(20,2.150707);
   hnumuCCinFV_stack_12->SetBinError(21,1.8402);
   hnumuCCinFV_stack_12->SetBinError(22,1.661137);
   hnumuCCinFV_stack_12->SetBinError(23,2.495482);
   hnumuCCinFV_stack_12->SetBinError(24,1.342531);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,7.159142);
   hnueCCinFV_stack_13->SetBinContent(2,5.515979);
   hnueCCinFV_stack_13->SetBinContent(3,2.283959);
   hnueCCinFV_stack_13->SetBinContent(4,4.336675);
   hnueCCinFV_stack_13->SetBinContent(5,4.049105);
   hnueCCinFV_stack_13->SetBinContent(6,4.776394);
   hnueCCinFV_stack_13->SetBinContent(7,3.453303);
   hnueCCinFV_stack_13->SetBinContent(8,1.517089);
   hnueCCinFV_stack_13->SetBinContent(9,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(10,1.61708);
   hnueCCinFV_stack_13->SetBinContent(11,0.6494526);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(14,0.9332143);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,2.11123);
   hnueCCinFV_stack_13->SetBinContent(17,3.346528);
   hnueCCinFV_stack_13->SetBinContent(18,1.041502);
   hnueCCinFV_stack_13->SetBinContent(19,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(20,1.452853);
   hnueCCinFV_stack_13->SetBinContent(21,1.24743);
   hnueCCinFV_stack_13->SetBinContent(22,1.76798);
   hnueCCinFV_stack_13->SetBinContent(23,2.382837);
   hnueCCinFV_stack_13->SetBinContent(24,0.5680714);
   hnueCCinFV_stack_13->SetBinError(1,2.138812);
   hnueCCinFV_stack_13->SetBinError(2,1.334099);
   hnueCCinFV_stack_13->SetBinError(3,0.788839);
   hnueCCinFV_stack_13->SetBinError(4,1.125443);
   hnueCCinFV_stack_13->SetBinError(5,1.457425);
   hnueCCinFV_stack_13->SetBinError(6,1.6029);
   hnueCCinFV_stack_13->SetBinError(7,1.16947);
   hnueCCinFV_stack_13->SetBinError(8,0.5887087);
   hnueCCinFV_stack_13->SetBinError(9,0.4383608);
   hnueCCinFV_stack_13->SetBinError(10,0.6460078);
   hnueCCinFV_stack_13->SetBinError(11,0.3778196);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.4156841);
   hnueCCinFV_stack_13->SetBinError(14,0.5581114);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.7768034);
   hnueCCinFV_stack_13->SetBinError(17,1.816814);
   hnueCCinFV_stack_13->SetBinError(18,0.6015552);
   hnueCCinFV_stack_13->SetBinError(19,0.340721);
   hnueCCinFV_stack_13->SetBinError(20,0.678412);
   hnueCCinFV_stack_13->SetBinError(21,0.6855949);
   hnueCCinFV_stack_13->SetBinError(22,0.7003296);
   hnueCCinFV_stack_13->SetBinError(23,1.20487);
   hnueCCinFV_stack_13->SetBinError(24,0.3993615);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__2->SetBinContent(1,135.8225);
   hmcerror__2->SetBinContent(2,174.8658);
   hmcerror__2->SetBinContent(3,219.6081);
   hmcerror__2->SetBinContent(4,389.4635);
   hmcerror__2->SetBinContent(5,547.1606);
   hmcerror__2->SetBinContent(6,580.0452);
   hmcerror__2->SetBinContent(7,554.0311);
   hmcerror__2->SetBinContent(8,523.4009);
   hmcerror__2->SetBinContent(9,505.5855);
   hmcerror__2->SetBinContent(10,452.741);
   hmcerror__2->SetBinContent(11,449.0516);
   hmcerror__2->SetBinContent(12,383.7036);
   hmcerror__2->SetBinContent(13,351.422);
   hmcerror__2->SetBinContent(14,293.5655);
   hmcerror__2->SetBinContent(15,245.8153);
   hmcerror__2->SetBinContent(16,246.4157);
   hmcerror__2->SetBinContent(17,215.3375);
   hmcerror__2->SetBinContent(18,182.2176);
   hmcerror__2->SetBinContent(19,171.7101);
   hmcerror__2->SetBinContent(20,166.1411);
   hmcerror__2->SetBinContent(21,166.4272);
   hmcerror__2->SetBinContent(22,154.3937);
   hmcerror__2->SetBinContent(23,144.7264);
   hmcerror__2->SetBinContent(24,80.65371);
   hmcerror__2->SetBinError(1,47.92883);
   hmcerror__2->SetBinError(2,46.12561);
   hmcerror__2->SetBinError(3,58.02801);
   hmcerror__2->SetBinError(4,92.81134);
   hmcerror__2->SetBinError(5,144.5422);
   hmcerror__2->SetBinError(6,177.7012);
   hmcerror__2->SetBinError(7,160.1292);
   hmcerror__2->SetBinError(8,144.5095);
   hmcerror__2->SetBinError(9,135.8421);
   hmcerror__2->SetBinError(10,120.6297);
   hmcerror__2->SetBinError(11,127.235);
   hmcerror__2->SetBinError(12,98.70787);
   hmcerror__2->SetBinError(13,90.94979);
   hmcerror__2->SetBinError(14,75.35936);
   hmcerror__2->SetBinError(15,80.61424);
   hmcerror__2->SetBinError(16,62.855);
   hmcerror__2->SetBinError(17,55.90797);
   hmcerror__2->SetBinError(18,45.28975);
   hmcerror__2->SetBinError(19,42.05403);
   hmcerror__2->SetBinError(20,44.22923);
   hmcerror__2->SetBinError(21,44.1534);
   hmcerror__2->SetBinError(22,43.26112);
   hmcerror__2->SetBinError(23,37.40474);
   hmcerror__2->SetBinError(24,23.37555);
   hmcerror__2->SetBinError(25,0.3895343);
   hmcerror__2->SetEntries(7241.585);

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
   
   Double_t _fx3001[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3001[24] = {
   120,
   153,
   210,
   337,
   446,
   431,
   457,
   444,
   459,
   415,
   368,
   359,
   293,
   268,
   239,
   212,
   192,
   168,
   165,
   157,
   163,
   149,
   170,
   69};
   Double_t _felx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3001[24] = {
   10.95445,
   12.36932,
   14.49138,
   18.35756,
   21.11871,
   20.76054,
   21.37756,
   21.07131,
   21.42429,
   20.37155,
   19.18333,
   18.9473,
   17.11724,
   16.37071,
   15.45962,
   14.56022,
   13.85641,
   12.96148,
   12.84523,
   12.52996,
   12.76715,
   12.20656,
   13.0384,
   8.4327};
   Double_t _fehx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3001[24] = {
   10.95445,
   12.36932,
   14.49138,
   18.35756,
   21.11871,
   20.76054,
   21.37756,
   21.07131,
   21.42429,
   20.37155,
   19.18333,
   18.9473,
   17.11724,
   16.37071,
   15.45962,
   14.56022,
   13.85641,
   12.96148,
   12.84523,
   12.52996,
   12.76715,
   12.20656,
   13.0384,
   8.2304};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,3.465);
   Graph_Graph3001->SetMinimum(18.5816);
   Graph_Graph3001->SetMaximum(522.41);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 614.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3002[24] = {
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
   Double_t _felx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3002[24] = {
   0.3528785,
   0.2637772,
   0.2642344,
   0.2383056,
   0.2641678,
   0.3063575,
   0.2890256,
   0.2760971,
   0.2686827,
   0.266443,
   0.2833416,
   0.2572503,
   0.258805,
   0.2567037,
   0.3279464,
   0.255077,
   0.2596295,
   0.2485476,
   0.244913,
   0.2662148,
   0.2653016,
   0.2802001,
   0.2584514,
   0.289826};
   Double_t _fehx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3002[24] = {
   0.3528785,
   0.2637772,
   0.2642344,
   0.2383056,
   0.2641678,
   0.3063575,
   0.2890256,
   0.2760971,
   0.2686827,
   0.266443,
   0.2833416,
   0.2572503,
   0.258805,
   0.2567037,
   0.3279464,
   0.255077,
   0.2596295,
   0.2485476,
   0.244913,
   0.2662148,
   0.2653016,
   0.2802001,
   0.2584514,
   0.289826};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,3.465);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3003[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3003[24] = {
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
   Double_t _felx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3003[24] = {
   0.2007676,
   0.1919576,
   0.2059261,
   0.2174422,
   0.2534586,
   0.2791505,
   0.2707519,
   0.2659566,
   0.2586892,
   0.2562676,
   0.2459945,
   0.2413373,
   0.2342862,
   0.2257076,
   0.2414356,
   0.2132655,
   0.2140574,
   0.2051926,
   0.2072496,
   0.1991702,
   0.1986077,
   0.20449,
   0.2056988,
   0.1932562};
   Double_t _fehx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3003[24] = {
   0.2007676,
   0.1919576,
   0.2059261,
   0.2174422,
   0.2534586,
   0.2791505,
   0.2707519,
   0.2659566,
   0.2586892,
   0.2562676,
   0.2459945,
   0.2413373,
   0.2342862,
   0.2257076,
   0.2414356,
   0.2132655,
   0.2140574,
   0.2051926,
   0.2072496,
   0.1991702,
   0.1986077,
   0.20449,
   0.2056988,
   0.1932562};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,3.465);
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
   
   Double_t _fx3004[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3004[24] = {
   0.8835063,
   0.8749565,
   0.956249,
   0.8652929,
   0.8151171,
   0.7430455,
   0.8248635,
   0.8482982,
   0.9078583,
   0.9166388,
   0.8195049,
   0.935618,
   0.8337554,
   0.9129138,
   0.9722746,
   0.8603346,
   0.8916236,
   0.9219746,
   0.9609218,
   0.9449798,
   0.9794073,
   0.9650654,
   1.17463,
   0.8555093};
   Double_t _felx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3004[24] = {
   0.08065272,
   0.07073604,
   0.06598745,
   0.04713551,
   0.03859691,
   0.03579124,
   0.03858549,
   0.04025845,
   0.0423752,
   0.04499603,
   0.04271965,
   0.04938003,
   0.04870851,
   0.05576509,
   0.06289122,
   0.05908803,
   0.06434739,
   0.07113188,
   0.07480766,
   0.0754176,
   0.0767131,
   0.07906124,
   0.09009001,
   0.1045544};
   Double_t _fehx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3004[24] = {
   0.08065272,
   0.07073604,
   0.06598745,
   0.04713551,
   0.03859691,
   0.03579124,
   0.03858549,
   0.04025845,
   0.0423752,
   0.04499603,
   0.04271965,
   0.04938003,
   0.04870851,
   0.05576509,
   0.06289122,
   0.05908803,
   0.06434739,
   0.07113188,
   0.07480766,
   0.0754176,
   0.0767131,
   0.07906124,
   0.09009001,
   0.1020461};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,3.465);
   Graph_Graph3004->SetMinimum(0.6515077);
   Graph_Graph3004->SetMaximum(1.320467);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,0,3.15);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
