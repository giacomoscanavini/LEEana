#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 23:52:13 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-2.81726,3.957692,311.5297);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__13->SetBinContent(1,140.863);
   hmc__13->SetBinContent(2,129.486);
   hmc__13->SetBinContent(3,123.9618);
   hmc__13->SetBinContent(4,118.3308);
   hmc__13->SetBinContent(5,115.6066);
   hmc__13->SetBinContent(6,112.6511);
   hmc__13->SetBinContent(7,120.6163);
   hmc__13->SetBinContent(8,109.6321);
   hmc__13->SetBinContent(9,114.9529);
   hmc__13->SetBinContent(10,119.5417);
   hmc__13->SetBinContent(11,116.5902);
   hmc__13->SetBinContent(12,126.1002);
   hmc__13->SetBinContent(13,133.2522);
   hmc__13->SetBinContent(14,130.1867);
   hmc__13->SetBinContent(15,111.9);
   hmc__13->SetBinContent(16,133.5134);
   hmc__13->SetBinContent(17,117.4531);
   hmc__13->SetBinContent(18,123.5994);
   hmc__13->SetBinContent(19,119.6265);
   hmc__13->SetBinContent(20,128.7094);
   hmc__13->SetBinContent(21,114.7812);
   hmc__13->SetBinContent(22,113.4516);
   hmc__13->SetBinContent(23,112.7524);
   hmc__13->SetBinContent(24,126.5579);
   hmc__13->SetBinContent(25,135.5297);
   hmc__13->SetBinError(1,48.83091);
   hmc__13->SetBinError(2,47.61967);
   hmc__13->SetBinError(3,47.26802);
   hmc__13->SetBinError(4,41.50351);
   hmc__13->SetBinError(5,39.39567);
   hmc__13->SetBinError(6,43.27496);
   hmc__13->SetBinError(7,45.87382);
   hmc__13->SetBinError(8,41.25432);
   hmc__13->SetBinError(9,41.73029);
   hmc__13->SetBinError(10,42.93364);
   hmc__13->SetBinError(11,42.71295);
   hmc__13->SetBinError(12,49.03388);
   hmc__13->SetBinError(13,51.99361);
   hmc__13->SetBinError(14,49.6138);
   hmc__13->SetBinError(15,40.8264);
   hmc__13->SetBinError(16,46.50802);
   hmc__13->SetBinError(17,44.40055);
   hmc__13->SetBinError(18,45.86047);
   hmc__13->SetBinError(19,42.85577);
   hmc__13->SetBinError(20,48.67243);
   hmc__13->SetBinError(21,41.37301);
   hmc__13->SetBinError(22,42.63405);
   hmc__13->SetBinError(23,43.20157);
   hmc__13->SetBinError(24,44.38993);
   hmc__13->SetBinError(25,56.71728);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-2.81726);
   hmc__13->SetMaximum(295.8123);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-3.15,3.15);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(147.9062);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.05486);
   hbadmatch_stack_1->SetBinContent(2,3.224105);
   hbadmatch_stack_1->SetBinContent(3,2.864305);
   hbadmatch_stack_1->SetBinContent(4,3.886003);
   hbadmatch_stack_1->SetBinContent(5,2.004657);
   hbadmatch_stack_1->SetBinContent(6,3.659405);
   hbadmatch_stack_1->SetBinContent(7,2.077505);
   hbadmatch_stack_1->SetBinContent(8,4.168372);
   hbadmatch_stack_1->SetBinContent(9,4.745823);
   hbadmatch_stack_1->SetBinContent(10,1.439964);
   hbadmatch_stack_1->SetBinContent(11,2.871653);
   hbadmatch_stack_1->SetBinContent(12,3.109054);
   hbadmatch_stack_1->SetBinContent(13,2.378249);
   hbadmatch_stack_1->SetBinContent(14,5.616982);
   hbadmatch_stack_1->SetBinContent(15,2.686937);
   hbadmatch_stack_1->SetBinContent(16,3.207498);
   hbadmatch_stack_1->SetBinContent(17,2.961627);
   hbadmatch_stack_1->SetBinContent(18,3.148292);
   hbadmatch_stack_1->SetBinContent(19,1.373752);
   hbadmatch_stack_1->SetBinContent(20,4.434968);
   hbadmatch_stack_1->SetBinContent(21,3.081918);
   hbadmatch_stack_1->SetBinContent(22,1.950857);
   hbadmatch_stack_1->SetBinContent(23,1.40445);
   hbadmatch_stack_1->SetBinContent(24,1.861268);
   hbadmatch_stack_1->SetBinContent(25,4.662302);
   hbadmatch_stack_1->SetBinError(1,0.9094405);
   hbadmatch_stack_1->SetBinError(2,0.9550464);
   hbadmatch_stack_1->SetBinError(3,0.842613);
   hbadmatch_stack_1->SetBinError(4,1.092213);
   hbadmatch_stack_1->SetBinError(5,0.6390912);
   hbadmatch_stack_1->SetBinError(6,1.002431);
   hbadmatch_stack_1->SetBinError(7,0.6571126);
   hbadmatch_stack_1->SetBinError(8,1.069913);
   hbadmatch_stack_1->SetBinError(9,2.198649);
   hbadmatch_stack_1->SetBinError(10,0.6144353);
   hbadmatch_stack_1->SetBinError(11,0.8145977);
   hbadmatch_stack_1->SetBinError(12,0.9073709);
   hbadmatch_stack_1->SetBinError(13,0.711917);
   hbadmatch_stack_1->SetBinError(14,1.58814);
   hbadmatch_stack_1->SetBinError(15,0.877731);
   hbadmatch_stack_1->SetBinError(16,0.893935);
   hbadmatch_stack_1->SetBinError(17,0.9566486);
   hbadmatch_stack_1->SetBinError(18,0.9430356);
   hbadmatch_stack_1->SetBinError(19,0.5543223);
   hbadmatch_stack_1->SetBinError(20,1.286608);
   hbadmatch_stack_1->SetBinError(21,0.8823899);
   hbadmatch_stack_1->SetBinError(22,0.7609034);
   hbadmatch_stack_1->SetBinError(23,0.5592071);
   hbadmatch_stack_1->SetBinError(24,0.6197382);
   hbadmatch_stack_1->SetBinError(25,1.245583);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,10.67085);
   hext_stack_2->SetBinContent(2,12.51349);
   hext_stack_2->SetBinContent(3,9.690475);
   hext_stack_2->SetBinContent(4,8.275974);
   hext_stack_2->SetBinContent(5,17.98957);
   hext_stack_2->SetBinContent(6,14.00861);
   hext_stack_2->SetBinContent(7,18.53021);
   hext_stack_2->SetBinContent(8,11.82721);
   hext_stack_2->SetBinContent(9,15.75192);
   hext_stack_2->SetBinContent(10,17.79644);
   hext_stack_2->SetBinContent(11,8.477858);
   hext_stack_2->SetBinContent(12,7.899675);
   hext_stack_2->SetBinContent(13,11.28651);
   hext_stack_2->SetBinContent(14,5.669206);
   hext_stack_2->SetBinContent(15,3.159);
   hext_stack_2->SetBinContent(16,18.90374);
   hext_stack_2->SetBinContent(17,3.394015);
   hext_stack_2->SetBinContent(18,13.78954);
   hext_stack_2->SetBinContent(19,13.70733);
   hext_stack_2->SetBinContent(20,12.51072);
   hext_stack_2->SetBinContent(21,8.325045);
   hext_stack_2->SetBinContent(22,7.051768);
   hext_stack_2->SetBinContent(23,5.594185);
   hext_stack_2->SetBinContent(24,8.884457);
   hext_stack_2->SetBinContent(25,11.1856);
   hext_stack_2->SetBinError(1,2.224896);
   hext_stack_2->SetBinError(2,2.47489);
   hext_stack_2->SetBinError(3,2.199014);
   hext_stack_2->SetBinError(4,1.795123);
   hext_stack_2->SetBinError(5,3.042431);
   hext_stack_2->SetBinError(6,2.448777);
   hext_stack_2->SetBinError(7,3.14249);
   hext_stack_2->SetBinError(8,2.262468);
   hext_stack_2->SetBinError(9,2.801797);
   hext_stack_2->SetBinError(10,3.152937);
   hext_stack_2->SetBinError(11,2.034329);
   hext_stack_2->SetBinError(12,2.013503);
   hext_stack_2->SetBinError(13,2.414604);
   hext_stack_2->SetBinError(14,1.564185);
   hext_stack_2->SetBinError(15,1.152637);
   hext_stack_2->SetBinError(16,3.062652);
   hext_stack_2->SetBinError(17,1.254957);
   hext_stack_2->SetBinError(18,2.673877);
   hext_stack_2->SetBinError(19,2.662617);
   hext_stack_2->SetBinError(20,2.541929);
   hext_stack_2->SetBinError(21,1.988024);
   hext_stack_2->SetBinError(22,1.609775);
   hext_stack_2->SetBinError(23,1.478305);
   hext_stack_2->SetBinError(24,2.074564);
   hext_stack_2->SetBinError(25,2.169584);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.148888);
   hdirt_stack_3->SetBinContent(2,0.722366);
   hdirt_stack_3->SetBinContent(3,0.9619534);
   hdirt_stack_3->SetBinContent(4,0.7271646);
   hdirt_stack_3->SetBinContent(5,1.014745);
   hdirt_stack_3->SetBinContent(7,1.09526);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.6566868);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.8086942);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,1.149204);
   hdirt_stack_3->SetBinContent(16,0.3965656);
   hdirt_stack_3->SetBinContent(18,1.160324);
   hdirt_stack_3->SetBinContent(19,1.448263);
   hdirt_stack_3->SetBinContent(20,0.9403316);
   hdirt_stack_3->SetBinContent(23,1.22185);
   hdirt_stack_3->SetBinContent(24,0.9712972);
   hdirt_stack_3->SetBinContent(25,0.8404487);
   hdirt_stack_3->SetBinError(1,0.5902483);
   hdirt_stack_3->SetBinError(2,0.4354359);
   hdirt_stack_3->SetBinError(3,0.4947604);
   hdirt_stack_3->SetBinError(4,0.4782061);
   hdirt_stack_3->SetBinError(5,0.4902916);
   hdirt_stack_3->SetBinError(7,0.5187246);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(11,0.3791383);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.4749675);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.9557142);
   hdirt_stack_3->SetBinError(16,0.2804592);
   hdirt_stack_3->SetBinError(18,0.4855235);
   hdirt_stack_3->SetBinError(19,0.6840174);
   hdirt_stack_3->SetBinError(20,0.5220551);
   hdirt_stack_3->SetBinError(23,0.6405557);
   hdirt_stack_3->SetBinError(24,0.4684838);
   hdirt_stack_3->SetBinError(25,0.4300001);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.88614);
   houtFV_stack_4->SetBinContent(2,7.473369);
   houtFV_stack_4->SetBinContent(3,11.19906);
   houtFV_stack_4->SetBinContent(4,7.348861);
   houtFV_stack_4->SetBinContent(5,5.471994);
   houtFV_stack_4->SetBinContent(6,9.064752);
   houtFV_stack_4->SetBinContent(7,12.07757);
   houtFV_stack_4->SetBinContent(8,7.920123);
   houtFV_stack_4->SetBinContent(9,6.766038);
   houtFV_stack_4->SetBinContent(10,6.236121);
   houtFV_stack_4->SetBinContent(11,7.766128);
   houtFV_stack_4->SetBinContent(12,7.361495);
   houtFV_stack_4->SetBinContent(13,8.408293);
   houtFV_stack_4->SetBinContent(14,6.323301);
   houtFV_stack_4->SetBinContent(15,5.784769);
   houtFV_stack_4->SetBinContent(16,8.315243);
   houtFV_stack_4->SetBinContent(17,9.409477);
   houtFV_stack_4->SetBinContent(18,9.105093);
   houtFV_stack_4->SetBinContent(19,9.226398);
   houtFV_stack_4->SetBinContent(20,8.163239);
   houtFV_stack_4->SetBinContent(21,8.240863);
   houtFV_stack_4->SetBinContent(22,5.35337);
   houtFV_stack_4->SetBinContent(23,7.043906);
   houtFV_stack_4->SetBinContent(24,9.262619);
   houtFV_stack_4->SetBinContent(25,8.861382);
   houtFV_stack_4->SetBinError(1,1.642921);
   houtFV_stack_4->SetBinError(2,1.334842);
   houtFV_stack_4->SetBinError(3,1.838002);
   houtFV_stack_4->SetBinError(4,1.308803);
   houtFV_stack_4->SetBinError(5,1.155889);
   houtFV_stack_4->SetBinError(6,1.540067);
   houtFV_stack_4->SetBinError(7,1.737731);
   houtFV_stack_4->SetBinError(8,1.388055);
   houtFV_stack_4->SetBinError(9,1.209068);
   houtFV_stack_4->SetBinError(10,1.238864);
   houtFV_stack_4->SetBinError(11,1.518561);
   houtFV_stack_4->SetBinError(12,1.27005);
   houtFV_stack_4->SetBinError(13,1.434726);
   houtFV_stack_4->SetBinError(14,1.176432);
   houtFV_stack_4->SetBinError(15,1.178096);
   houtFV_stack_4->SetBinError(16,1.43806);
   houtFV_stack_4->SetBinError(17,1.530456);
   houtFV_stack_4->SetBinError(18,1.512384);
   houtFV_stack_4->SetBinError(19,1.529564);
   houtFV_stack_4->SetBinError(20,1.420303);
   houtFV_stack_4->SetBinError(21,1.585773);
   houtFV_stack_4->SetBinError(22,1.297261);
   houtFV_stack_4->SetBinError(23,1.278619);
   houtFV_stack_4->SetBinError(24,1.529617);
   houtFV_stack_4->SetBinError(25,1.490864);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2214168);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2402984);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1172889);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1088959);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5427876);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1868612);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1716469);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2223511);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5818444);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05328434);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1718805);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5301538);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2523072);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08394548);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.403278);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4427734);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2993441);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3516378);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.09300321);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1770272);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1660683);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1445019);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0644859);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06370695);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2552559);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.10647);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1064439);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1501141);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3271448);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03317517);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.08262575);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2819311);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1244184);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04846605);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.18679);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2155359);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.182423);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1884122);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05409581);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.08513212);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1926606);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7272971);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.698209);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7477767);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4452211);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4666235);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3044955);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5596486);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2935302);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4075402);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3049401);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6484957);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6050592);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5673209);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2712974);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9570681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4312513);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6684353);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2569438);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3507555);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2411869);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3729947);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4227031);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.36949);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5093566);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07039753);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2587036);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3248711);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2445788);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1587429);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1607583);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1361954);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1608551);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1237536);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1608617);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1509822);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.281612);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1951451);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2166019);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1189326);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3066903);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1818187);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2539966);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1414624);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1150879);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.08541659);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1409556);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1850217);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1884043);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1869965);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,44.39828);
   hNCpi0inFVres_stack_7->SetBinContent(2,47.43408);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.27474);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.80428);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.99198);
   hNCpi0inFVres_stack_7->SetBinContent(6,39.58988);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.66847);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.02425);
   hNCpi0inFVres_stack_7->SetBinContent(9,39.02725);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.80811);
   hNCpi0inFVres_stack_7->SetBinContent(11,36.08696);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.61905);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.60624);
   hNCpi0inFVres_stack_7->SetBinContent(14,42.97714);
   hNCpi0inFVres_stack_7->SetBinContent(15,39.48105);
   hNCpi0inFVres_stack_7->SetBinContent(16,43.53368);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.74554);
   hNCpi0inFVres_stack_7->SetBinContent(18,38.05915);
   hNCpi0inFVres_stack_7->SetBinContent(19,40.74203);
   hNCpi0inFVres_stack_7->SetBinContent(20,32.89065);
   hNCpi0inFVres_stack_7->SetBinContent(21,40.8941);
   hNCpi0inFVres_stack_7->SetBinContent(22,40.30447);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.18237);
   hNCpi0inFVres_stack_7->SetBinContent(24,43.48595);
   hNCpi0inFVres_stack_7->SetBinContent(25,46.04346);
   hNCpi0inFVres_stack_7->SetBinError(1,2.155302);
   hNCpi0inFVres_stack_7->SetBinError(2,2.225185);
   hNCpi0inFVres_stack_7->SetBinError(3,2.024927);
   hNCpi0inFVres_stack_7->SetBinError(4,1.916957);
   hNCpi0inFVres_stack_7->SetBinError(5,1.814762);
   hNCpi0inFVres_stack_7->SetBinError(6,1.935249);
   hNCpi0inFVres_stack_7->SetBinError(7,1.899854);
   hNCpi0inFVres_stack_7->SetBinError(8,1.69658);
   hNCpi0inFVres_stack_7->SetBinError(9,1.832189);
   hNCpi0inFVres_stack_7->SetBinError(10,1.97376);
   hNCpi0inFVres_stack_7->SetBinError(11,1.682602);
   hNCpi0inFVres_stack_7->SetBinError(12,1.965906);
   hNCpi0inFVres_stack_7->SetBinError(13,2.111654);
   hNCpi0inFVres_stack_7->SetBinError(14,2.042649);
   hNCpi0inFVres_stack_7->SetBinError(15,1.886666);
   hNCpi0inFVres_stack_7->SetBinError(16,1.997745);
   hNCpi0inFVres_stack_7->SetBinError(17,1.913624);
   hNCpi0inFVres_stack_7->SetBinError(18,1.901549);
   hNCpi0inFVres_stack_7->SetBinError(19,2.116607);
   hNCpi0inFVres_stack_7->SetBinError(20,1.518791);
   hNCpi0inFVres_stack_7->SetBinError(21,1.965051);
   hNCpi0inFVres_stack_7->SetBinError(22,1.785574);
   hNCpi0inFVres_stack_7->SetBinError(23,2.031578);
   hNCpi0inFVres_stack_7->SetBinError(24,1.988241);
   hNCpi0inFVres_stack_7->SetBinError(25,2.101681);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.926619);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.918083);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.064);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.766335);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.055668);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.632939);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.902467);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.985532);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.289865);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.37561);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.624431);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.656276);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.70405);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.96307);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.415202);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.620814);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.65598);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.874242);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.45146);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.922752);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.138933);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.35223);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.103109);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.43169);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.667282);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9555603);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.134973);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.11561);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.093644);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9011993);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.081102);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.052062);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9922539);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.085957);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.238625);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9545703);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.094821);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.276962);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.167777);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.058972);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9580883);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.235554);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7846702);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8526613);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.056857);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8239297);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.312051);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.855785);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.183183);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.978136);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1384211);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06363495);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1281576);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03246768);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02449786);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,28.21135);
   hCCpi0inFV_stack_10->SetBinContent(2,21.42971);
   hCCpi0inFV_stack_10->SetBinContent(3,20.37318);
   hCCpi0inFV_stack_10->SetBinContent(4,20.34385);
   hCCpi0inFV_stack_10->SetBinContent(5,17.54537);
   hCCpi0inFV_stack_10->SetBinContent(6,16.12748);
   hCCpi0inFV_stack_10->SetBinContent(7,15.92238);
   hCCpi0inFV_stack_10->SetBinContent(8,16.04548);
   hCCpi0inFV_stack_10->SetBinContent(9,17.06437);
   hCCpi0inFV_stack_10->SetBinContent(10,19.71368);
   hCCpi0inFV_stack_10->SetBinContent(11,26.50682);
   hCCpi0inFV_stack_10->SetBinContent(12,25.59985);
   hCCpi0inFV_stack_10->SetBinContent(13,27.54904);
   hCCpi0inFV_stack_10->SetBinContent(14,23.81602);
   hCCpi0inFV_stack_10->SetBinContent(15,16.68922);
   hCCpi0inFV_stack_10->SetBinContent(16,20.08074);
   hCCpi0inFV_stack_10->SetBinContent(17,19.97101);
   hCCpi0inFV_stack_10->SetBinContent(18,20.66097);
   hCCpi0inFV_stack_10->SetBinContent(19,17.53629);
   hCCpi0inFV_stack_10->SetBinContent(20,21.06228);
   hCCpi0inFV_stack_10->SetBinContent(21,17.58571);
   hCCpi0inFV_stack_10->SetBinContent(22,20.43831);
   hCCpi0inFV_stack_10->SetBinContent(23,18.18292);
   hCCpi0inFV_stack_10->SetBinContent(24,24.35196);
   hCCpi0inFV_stack_10->SetBinContent(25,23.08435);
   hCCpi0inFV_stack_10->SetBinError(1,2.64598);
   hCCpi0inFV_stack_10->SetBinError(2,2.282612);
   hCCpi0inFV_stack_10->SetBinError(3,2.296643);
   hCCpi0inFV_stack_10->SetBinError(4,2.287431);
   hCCpi0inFV_stack_10->SetBinError(5,2.067166);
   hCCpi0inFV_stack_10->SetBinError(6,2.087046);
   hCCpi0inFV_stack_10->SetBinError(7,2.049849);
   hCCpi0inFV_stack_10->SetBinError(8,1.982904);
   hCCpi0inFV_stack_10->SetBinError(9,2.022418);
   hCCpi0inFV_stack_10->SetBinError(10,2.241289);
   hCCpi0inFV_stack_10->SetBinError(11,2.628819);
   hCCpi0inFV_stack_10->SetBinError(12,2.549244);
   hCCpi0inFV_stack_10->SetBinError(13,2.611047);
   hCCpi0inFV_stack_10->SetBinError(14,2.531537);
   hCCpi0inFV_stack_10->SetBinError(15,2.023292);
   hCCpi0inFV_stack_10->SetBinError(16,2.213086);
   hCCpi0inFV_stack_10->SetBinError(17,2.283344);
   hCCpi0inFV_stack_10->SetBinError(18,2.267043);
   hCCpi0inFV_stack_10->SetBinError(19,2.0809);
   hCCpi0inFV_stack_10->SetBinError(20,2.28468);
   hCCpi0inFV_stack_10->SetBinError(21,2.104324);
   hCCpi0inFV_stack_10->SetBinError(22,2.348259);
   hCCpi0inFV_stack_10->SetBinError(23,2.146685);
   hCCpi0inFV_stack_10->SetBinError(24,2.403851);
   hCCpi0inFV_stack_10->SetBinError(25,2.411498);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,12.71941);
   hNCinFV_stack_11->SetBinContent(2,10.22233);
   hNCinFV_stack_11->SetBinContent(3,13.94627);
   hNCinFV_stack_11->SetBinContent(4,10.26432);
   hNCinFV_stack_11->SetBinContent(5,10.09214);
   hNCinFV_stack_11->SetBinContent(6,8.26931);
   hNCinFV_stack_11->SetBinContent(7,10.57327);
   hNCinFV_stack_11->SetBinContent(8,10.9918);
   hNCinFV_stack_11->SetBinContent(9,8.347656);
   hNCinFV_stack_11->SetBinContent(10,10.48489);
   hNCinFV_stack_11->SetBinContent(11,11.48314);
   hNCinFV_stack_11->SetBinContent(12,12.17091);
   hNCinFV_stack_11->SetBinContent(13,9.454987);
   hNCinFV_stack_11->SetBinContent(14,14.5478);
   hNCinFV_stack_11->SetBinContent(15,14.05924);
   hNCinFV_stack_11->SetBinContent(16,12.13725);
   hNCinFV_stack_11->SetBinContent(17,14.03349);
   hNCinFV_stack_11->SetBinContent(18,11.85223);
   hNCinFV_stack_11->SetBinContent(19,10.30318);
   hNCinFV_stack_11->SetBinContent(20,12.53512);
   hNCinFV_stack_11->SetBinContent(21,9.149448);
   hNCinFV_stack_11->SetBinContent(22,12.17344);
   hNCinFV_stack_11->SetBinContent(23,12.66171);
   hNCinFV_stack_11->SetBinContent(24,11.22109);
   hNCinFV_stack_11->SetBinContent(25,9.720722);
   hNCinFV_stack_11->SetBinError(1,1.990211);
   hNCinFV_stack_11->SetBinError(2,1.599458);
   hNCinFV_stack_11->SetBinError(3,2.086954);
   hNCinFV_stack_11->SetBinError(4,1.541973);
   hNCinFV_stack_11->SetBinError(5,1.743687);
   hNCinFV_stack_11->SetBinError(6,1.471595);
   hNCinFV_stack_11->SetBinError(7,1.641906);
   hNCinFV_stack_11->SetBinError(8,1.746305);
   hNCinFV_stack_11->SetBinError(9,1.468343);
   hNCinFV_stack_11->SetBinError(10,1.864298);
   hNCinFV_stack_11->SetBinError(11,1.855194);
   hNCinFV_stack_11->SetBinError(12,2.001463);
   hNCinFV_stack_11->SetBinError(13,1.589264);
   hNCinFV_stack_11->SetBinError(14,2.413559);
   hNCinFV_stack_11->SetBinError(15,2.106417);
   hNCinFV_stack_11->SetBinError(16,2.020523);
   hNCinFV_stack_11->SetBinError(17,2.001761);
   hNCinFV_stack_11->SetBinError(18,1.929518);
   hNCinFV_stack_11->SetBinError(19,1.648879);
   hNCinFV_stack_11->SetBinError(20,2.110273);
   hNCinFV_stack_11->SetBinError(21,1.568648);
   hNCinFV_stack_11->SetBinError(22,2.243086);
   hNCinFV_stack_11->SetBinError(23,2.078054);
   hNCinFV_stack_11->SetBinError(24,1.746012);
   hNCinFV_stack_11->SetBinError(25,1.696621);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,18.22322);
   hnumuCCinFV_stack_12->SetBinContent(2,15.87485);
   hnumuCCinFV_stack_12->SetBinContent(3,10.53745);
   hnumuCCinFV_stack_12->SetBinContent(4,17.57133);
   hnumuCCinFV_stack_12->SetBinContent(5,13.33802);
   hnumuCCinFV_stack_12->SetBinContent(6,11.44309);
   hnumuCCinFV_stack_12->SetBinContent(7,11.68862);
   hnumuCCinFV_stack_12->SetBinContent(8,12.7964);
   hnumuCCinFV_stack_12->SetBinContent(9,12.80319);
   hnumuCCinFV_stack_12->SetBinContent(10,13.7168);
   hnumuCCinFV_stack_12->SetBinContent(11,12.54644);
   hnumuCCinFV_stack_12->SetBinContent(12,14.86832);
   hnumuCCinFV_stack_12->SetBinContent(13,17.20278);
   hnumuCCinFV_stack_12->SetBinContent(14,18.64235);
   hnumuCCinFV_stack_12->SetBinContent(15,19.01396);
   hnumuCCinFV_stack_12->SetBinContent(16,15.38019);
   hnumuCCinFV_stack_12->SetBinContent(17,16.1884);
   hnumuCCinFV_stack_12->SetBinContent(18,16.86409);
   hnumuCCinFV_stack_12->SetBinContent(19,16.3019);
   hnumuCCinFV_stack_12->SetBinContent(20,23.56773);
   hnumuCCinFV_stack_12->SetBinContent(21,16.21255);
   hnumuCCinFV_stack_12->SetBinContent(22,13.53565);
   hnumuCCinFV_stack_12->SetBinContent(23,13.57383);
   hnumuCCinFV_stack_12->SetBinContent(24,14.13487);
   hnumuCCinFV_stack_12->SetBinContent(25,20.67926);
   hnumuCCinFV_stack_12->SetBinError(1,2.323921);
   hnumuCCinFV_stack_12->SetBinError(2,2.395599);
   hnumuCCinFV_stack_12->SetBinError(3,1.587271);
   hnumuCCinFV_stack_12->SetBinError(4,2.533976);
   hnumuCCinFV_stack_12->SetBinError(5,2.144386);
   hnumuCCinFV_stack_12->SetBinError(6,2.03187);
   hnumuCCinFV_stack_12->SetBinError(7,1.827952);
   hnumuCCinFV_stack_12->SetBinError(8,1.854984);
   hnumuCCinFV_stack_12->SetBinError(9,1.854018);
   hnumuCCinFV_stack_12->SetBinError(10,2.303685);
   hnumuCCinFV_stack_12->SetBinError(11,2.042169);
   hnumuCCinFV_stack_12->SetBinError(12,2.214804);
   hnumuCCinFV_stack_12->SetBinError(13,2.504049);
   hnumuCCinFV_stack_12->SetBinError(14,2.333609);
   hnumuCCinFV_stack_12->SetBinError(15,2.43106);
   hnumuCCinFV_stack_12->SetBinError(16,2.119617);
   hnumuCCinFV_stack_12->SetBinError(17,2.206725);
   hnumuCCinFV_stack_12->SetBinError(18,2.338918);
   hnumuCCinFV_stack_12->SetBinError(19,2.460258);
   hnumuCCinFV_stack_12->SetBinError(20,3.324367);
   hnumuCCinFV_stack_12->SetBinError(21,3.168085);
   hnumuCCinFV_stack_12->SetBinError(22,1.913333);
   hnumuCCinFV_stack_12->SetBinError(23,1.941868);
   hnumuCCinFV_stack_12->SetBinError(24,2.263594);
   hnumuCCinFV_stack_12->SetBinError(25,2.719883);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.125273);
   hnueCCinFV_stack_13->SetBinContent(2,0.6989822);
   hnueCCinFV_stack_13->SetBinContent(3,1.200917);
   hnueCCinFV_stack_13->SetBinContent(4,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(5,1.511251);
   hnueCCinFV_stack_13->SetBinContent(6,0.8091456);
   hnueCCinFV_stack_13->SetBinContent(7,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(8,1.00044);
   hnueCCinFV_stack_13->SetBinContent(9,0.5817212);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.44716);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.5432599);
   hnueCCinFV_stack_13->SetBinContent(16,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,1.927569);
   hnueCCinFV_stack_13->SetBinContent(21,2.434177);
   hnueCCinFV_stack_13->SetBinContent(22,0.5769502);
   hnueCCinFV_stack_13->SetBinContent(23,0.9460971);
   hnueCCinFV_stack_13->SetBinContent(24,1.455703);
   hnueCCinFV_stack_13->SetBinContent(25,1.098501);
   hnueCCinFV_stack_13->SetBinError(1,0.783722);
   hnueCCinFV_stack_13->SetBinError(2,0.4059236);
   hnueCCinFV_stack_13->SetBinError(3,0.5503192);
   hnueCCinFV_stack_13->SetBinError(4,0.3921167);
   hnueCCinFV_stack_13->SetBinError(5,0.637166);
   hnueCCinFV_stack_13->SetBinError(6,0.4829484);
   hnueCCinFV_stack_13->SetBinError(7,0.4172458);
   hnueCCinFV_stack_13->SetBinError(8,0.6603813);
   hnueCCinFV_stack_13->SetBinError(9,0.4330921);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.3184642);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.3961859);
   hnueCCinFV_stack_13->SetBinError(16,0.4139598);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.24412);
   hnueCCinFV_stack_13->SetBinError(21,1.632887);
   hnueCCinFV_stack_13->SetBinError(22,0.414466);
   hnueCCinFV_stack_13->SetBinError(23,0.4744541);
   hnueCCinFV_stack_13->SetBinError(24,0.6747802);
   hnueCCinFV_stack_13->SetBinError(25,0.5096995);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__14->SetBinContent(1,140.863);
   hmcerror__14->SetBinContent(2,129.486);
   hmcerror__14->SetBinContent(3,123.9618);
   hmcerror__14->SetBinContent(4,118.3308);
   hmcerror__14->SetBinContent(5,115.6066);
   hmcerror__14->SetBinContent(6,112.6511);
   hmcerror__14->SetBinContent(7,120.6163);
   hmcerror__14->SetBinContent(8,109.6321);
   hmcerror__14->SetBinContent(9,114.9529);
   hmcerror__14->SetBinContent(10,119.5417);
   hmcerror__14->SetBinContent(11,116.5902);
   hmcerror__14->SetBinContent(12,126.1002);
   hmcerror__14->SetBinContent(13,133.2522);
   hmcerror__14->SetBinContent(14,130.1867);
   hmcerror__14->SetBinContent(15,111.9);
   hmcerror__14->SetBinContent(16,133.5134);
   hmcerror__14->SetBinContent(17,117.4531);
   hmcerror__14->SetBinContent(18,123.5994);
   hmcerror__14->SetBinContent(19,119.6265);
   hmcerror__14->SetBinContent(20,128.7094);
   hmcerror__14->SetBinContent(21,114.7812);
   hmcerror__14->SetBinContent(22,113.4516);
   hmcerror__14->SetBinContent(23,112.7524);
   hmcerror__14->SetBinContent(24,126.5579);
   hmcerror__14->SetBinContent(25,135.5297);
   hmcerror__14->SetBinError(1,48.83091);
   hmcerror__14->SetBinError(2,47.61967);
   hmcerror__14->SetBinError(3,47.26802);
   hmcerror__14->SetBinError(4,41.50351);
   hmcerror__14->SetBinError(5,39.39567);
   hmcerror__14->SetBinError(6,43.27496);
   hmcerror__14->SetBinError(7,45.87382);
   hmcerror__14->SetBinError(8,41.25432);
   hmcerror__14->SetBinError(9,41.73029);
   hmcerror__14->SetBinError(10,42.93364);
   hmcerror__14->SetBinError(11,42.71295);
   hmcerror__14->SetBinError(12,49.03388);
   hmcerror__14->SetBinError(13,51.99361);
   hmcerror__14->SetBinError(14,49.6138);
   hmcerror__14->SetBinError(15,40.8264);
   hmcerror__14->SetBinError(16,46.50802);
   hmcerror__14->SetBinError(17,44.40055);
   hmcerror__14->SetBinError(18,45.86047);
   hmcerror__14->SetBinError(19,42.85577);
   hmcerror__14->SetBinError(20,48.67243);
   hmcerror__14->SetBinError(21,41.37301);
   hmcerror__14->SetBinError(22,42.63405);
   hmcerror__14->SetBinError(23,43.20157);
   hmcerror__14->SetBinError(24,44.38993);
   hmcerror__14->SetBinError(25,56.71728);
   hmcerror__14->SetBinError(26,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   125,
   119,
   118,
   100,
   94,
   101,
   115,
   90,
   91,
   94,
   118,
   115,
   130,
   103,
   102,
   109,
   84,
   96,
   104,
   94,
   94,
   105,
   114,
   103,
   103};
   Double_t _felx3017[25] = {
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
   Double_t _fely3017[25] = {
   11.18034,
   10.90871,
   10.86278,
   10.1212,
   9.8173,
   10.04988,
   10.72381,
   9.6093,
   9.6617,
   9.8173,
   10.86278,
   10.72381,
   11.40175,
   10.14889,
   10.0995,
   10.44031,
   9.2886,
   9.9196,
   10.19804,
   9.8173,
   9.8173,
   10.24695,
   10.67708,
   10.14889,
   10.14889};
   Double_t _fehx3017[25] = {
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
   Double_t _fehy3017[25] = {
   11.18034,
   10.90871,
   10.86278,
   9.92,
   9.616,
   10.04988,
   10.72381,
   9.4079,
   9.46,
   9.616,
   10.86278,
   10.72381,
   11.40175,
   10.14889,
   10.0995,
   10.44031,
   9.0869,
   9.718,
   10.19804,
   9.616,
   9.616,
   10.24695,
   10.67708,
   10.14889,
   10.14889};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(68.04236);
   Graph_Graph3017->SetMaximum(148.0708);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

   ci = 1486;
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

   ci = 1487;
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

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
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
   Double_t _fely3018[25] = {
   0.3466553,
   0.3677591,
   0.3813113,
   0.3507415,
   0.3407736,
   0.3841505,
   0.3803285,
   0.3762978,
   0.3630206,
   0.3591521,
   0.3663512,
   0.3888486,
   0.3901895,
   0.3810972,
   0.3648472,
   0.3483397,
   0.378028,
   0.3710411,
   0.3582464,
   0.3781576,
   0.3604511,
   0.3757906,
   0.3831544,
   0.350748,
   0.418486};
   Double_t _fehx3018[25] = {
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
   Double_t _fehy3018[25] = {
   0.3466553,
   0.3677591,
   0.3813113,
   0.3507415,
   0.3407736,
   0.3841505,
   0.3803285,
   0.3762978,
   0.3630206,
   0.3591521,
   0.3663512,
   0.3888486,
   0.3901895,
   0.3810972,
   0.3648472,
   0.3483397,
   0.378028,
   0.3710411,
   0.3582464,
   0.3781576,
   0.3604511,
   0.3757906,
   0.3831544,
   0.350748,
   0.418486};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-3.78,3.78);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[25] = {
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
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
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
   Double_t _fely3019[25] = {
   0.3088677,
   0.3298149,
   0.3285564,
   0.3163672,
   0.3027044,
   0.3215302,
   0.3087419,
   0.3249841,
   0.324517,
   0.3035014,
   0.336006,
   0.353914,
   0.3175178,
   0.3107524,
   0.3269049,
   0.3112169,
   0.3373678,
   0.2988108,
   0.3168001,
   0.3188455,
   0.3183838,
   0.3328792,
   0.3380621,
   0.3305774,
   0.32791};
   Double_t _fehx3019[25] = {
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
   Double_t _fehy3019[25] = {
   0.3088677,
   0.3298149,
   0.3285564,
   0.3163672,
   0.3027044,
   0.3215302,
   0.3087419,
   0.3249841,
   0.324517,
   0.3035014,
   0.336006,
   0.353914,
   0.3175178,
   0.3107524,
   0.3269049,
   0.3112169,
   0.3373678,
   0.2988108,
   0.3168001,
   0.3188455,
   0.3183838,
   0.3328792,
   0.3380621,
   0.3305774,
   0.32791};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.78,3.78);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[25] = {
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
   Double_t _fy3020[25] = {
   0.887387,
   0.9190181,
   0.9519064,
   0.8450888,
   0.8131026,
   0.8965739,
   0.9534366,
   0.8209275,
   0.7916283,
   0.7863365,
   1.012092,
   0.9119733,
   0.9755937,
   0.7911712,
   0.9115283,
   0.8163974,
   0.7151793,
   0.7767026,
   0.8693725,
   0.7303275,
   0.8189495,
   0.9255046,
   1.011065,
   0.8138567,
   0.7599811};
   Double_t _felx3020[25] = {
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
   Double_t _fely3020[25] = {
   0.07937031,
   0.08424625,
   0.08763009,
   0.08553312,
   0.08491992,
   0.08921244,
   0.08890842,
   0.08765043,
   0.08404918,
   0.08212448,
   0.09317064,
   0.08504194,
   0.08556523,
   0.07795642,
   0.09025475,
   0.07819669,
   0.0790835,
   0.08025603,
   0.08524899,
   0.07627494,
   0.08553056,
   0.09032,
   0.09469491,
   0.08019168,
   0.07488316};
   Double_t _fehx3020[25] = {
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
   Double_t _fehy3020[25] = {
   0.07937031,
   0.08424625,
   0.08763009,
   0.08383281,
   0.08317867,
   0.08921244,
   0.08890842,
   0.08581337,
   0.08229455,
   0.08044055,
   0.09317064,
   0.08504194,
   0.08556523,
   0.07795642,
   0.09025475,
   0.07819669,
   0.07736622,
   0.07862496,
   0.08524899,
   0.07471095,
   0.08377679,
   0.09032,
   0.09469491,
   0.08019168,
   0.07488316};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.5891293);
   Graph_Graph3020->SetMaximum(1.152726);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
