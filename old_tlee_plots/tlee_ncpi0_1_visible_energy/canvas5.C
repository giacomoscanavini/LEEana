#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 16:05:15 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",164,172,1200,900);
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
   pad1->Range(-153.8462,-17.84843,1128.205,1973.66);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hmc__13->SetBinContent(1,258.3234);
   hmc__13->SetBinContent(2,892.4214);
   hmc__13->SetBinContent(3,684.1218);
   hmc__13->SetBinContent(4,450.3607);
   hmc__13->SetBinContent(5,283.7254);
   hmc__13->SetBinContent(6,165.6878);
   hmc__13->SetBinContent(7,99.64525);
   hmc__13->SetBinContent(8,70.01455);
   hmc__13->SetBinContent(9,45.11686);
   hmc__13->SetBinContent(10,23.36094);
   hmc__13->SetBinContent(11,13.99103);
   hmc__13->SetBinContent(12,13.90931);
   hmc__13->SetBinContent(13,48.96471);
   hmc__13->SetBinError(1,124.1442);
   hmc__13->SetBinError(2,384.687);
   hmc__13->SetBinError(3,258.5265);
   hmc__13->SetBinError(4,147.5935);
   hmc__13->SetBinError(5,83.55506);
   hmc__13->SetBinError(6,45.60154);
   hmc__13->SetBinError(7,35.95794);
   hmc__13->SetBinError(8,30.91997);
   hmc__13->SetBinError(9,21.67596);
   hmc__13->SetBinError(10,14.27981);
   hmc__13->SetBinError(11,13.35846);
   hmc__13->SetBinError(12,8.498698);
   hmc__13->SetBinError(13,27.28521);
   hmc__13->SetMinimum(-17.84843);
   hmc__13->SetMaximum(1874.085);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",12,0,1000);
   hs5_stack_5->SetMinimum(-4.5424e-09);
   hs5_stack_5->SetMaximum(937.0426);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,20.95482);
   hbadmatch_stack_1->SetBinContent(2,26.37716);
   hbadmatch_stack_1->SetBinContent(3,13.18211);
   hbadmatch_stack_1->SetBinContent(4,7.584563);
   hbadmatch_stack_1->SetBinContent(5,0.4672679);
   hbadmatch_stack_1->SetBinContent(6,2.242405);
   hbadmatch_stack_1->SetBinContent(7,1.585984);
   hbadmatch_stack_1->SetBinContent(8,0.759148);
   hbadmatch_stack_1->SetBinContent(9,0.1274195);
   hbadmatch_stack_1->SetBinContent(10,0.1236948);
   hbadmatch_stack_1->SetBinContent(11,0.9593782);
   hbadmatch_stack_1->SetBinContent(12,0.56883);
   hbadmatch_stack_1->SetBinContent(13,0.9420338);
   hbadmatch_stack_1->SetBinError(1,2.548074);
   hbadmatch_stack_1->SetBinError(2,3.3192);
   hbadmatch_stack_1->SetBinError(3,1.931737);
   hbadmatch_stack_1->SetBinError(4,1.4094);
   hbadmatch_stack_1->SetBinError(5,0.2871168);
   hbadmatch_stack_1->SetBinError(6,0.7718056);
   hbadmatch_stack_1->SetBinError(7,0.6048167);
   hbadmatch_stack_1->SetBinError(8,0.4514588);
   hbadmatch_stack_1->SetBinError(9,0.1274195);
   hbadmatch_stack_1->SetBinError(10,0.1236948);
   hbadmatch_stack_1->SetBinError(11,0.4837994);
   hbadmatch_stack_1->SetBinError(12,0.4257516);
   hbadmatch_stack_1->SetBinError(13,0.61608);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,32.16258);
   hext_stack_2->SetBinContent(2,88.25644);
   hext_stack_2->SetBinContent(3,49.2061);
   hext_stack_2->SetBinContent(4,32.12945);
   hext_stack_2->SetBinContent(5,30.95872);
   hext_stack_2->SetBinContent(6,6.889002);
   hext_stack_2->SetBinContent(7,11.08463);
   hext_stack_2->SetBinContent(8,9.567961);
   hext_stack_2->SetBinContent(9,1.932023);
   hext_stack_2->SetBinContent(10,1.78639);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,3.939067);
   hext_stack_2->SetBinContent(13,8.250023);
   hext_stack_2->SetBinError(1,3.920851);
   hext_stack_2->SetBinError(2,6.594801);
   hext_stack_2->SetBinError(3,4.659087);
   hext_stack_2->SetBinError(4,4.005341);
   hext_stack_2->SetBinError(5,4.034422);
   hext_stack_2->SetBinError(6,1.715413);
   hext_stack_2->SetBinError(7,2.216819);
   hext_stack_2->SetBinError(8,2.376228);
   hext_stack_2->SetBinError(9,1.016762);
   hext_stack_2->SetBinError(10,0.8039566);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,1.526073);
   hext_stack_2->SetBinError(13,1.921184);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,3.500581);
   hdirt_stack_3->SetBinContent(2,5.396968);
   hdirt_stack_3->SetBinContent(3,3.321887);
   hdirt_stack_3->SetBinContent(4,3.263501);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinError(1,1.200967);
   hdirt_stack_3->SetBinError(2,1.172043);
   hdirt_stack_3->SetBinError(3,0.9503159);
   hdirt_stack_3->SetBinError(4,1.000982);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(9,0.1952625);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,27.38849);
   houtFV_stack_4->SetBinContent(2,77.76588);
   houtFV_stack_4->SetBinContent(3,41.31955);
   houtFV_stack_4->SetBinContent(4,24.03663);
   houtFV_stack_4->SetBinContent(5,14.50924);
   houtFV_stack_4->SetBinContent(6,6.434111);
   houtFV_stack_4->SetBinContent(7,4.946001);
   houtFV_stack_4->SetBinContent(8,2.784544);
   houtFV_stack_4->SetBinContent(9,0.3917402);
   houtFV_stack_4->SetBinContent(10,1.256394);
   houtFV_stack_4->SetBinContent(13,2.237023);
   houtFV_stack_4->SetBinError(1,2.632251);
   houtFV_stack_4->SetBinError(2,4.358791);
   houtFV_stack_4->SetBinError(3,3.123841);
   houtFV_stack_4->SetBinError(4,2.477776);
   houtFV_stack_4->SetBinError(5,1.92992);
   houtFV_stack_4->SetBinError(6,1.33785);
   houtFV_stack_4->SetBinError(7,1.206833);
   houtFV_stack_4->SetBinError(8,0.856729);
   houtFV_stack_4->SetBinError(9,0.2770047);
   houtFV_stack_4->SetBinError(10,0.9091871);
   houtFV_stack_4->SetBinError(13,0.9939932);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.13193);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.696147);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5016381);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4326519);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3636395);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4035186);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3724541);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4370754);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1309048);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1432382);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1785779);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2044395);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.118917);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.238985);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.269839);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.801422);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.838218);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5677084);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.50496);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2547866);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2980632);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2926681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6228295);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4037566);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.378818);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1988508);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1996456);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2057202);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1701826);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01841896);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,111.5515);
   hNCpi0inFVres_stack_7->SetBinContent(2,370.8165);
   hNCpi0inFVres_stack_7->SetBinContent(3,240.2687);
   hNCpi0inFVres_stack_7->SetBinContent(4,123.9162);
   hNCpi0inFVres_stack_7->SetBinContent(5,66.68618);
   hNCpi0inFVres_stack_7->SetBinContent(6,41.88815);
   hNCpi0inFVres_stack_7->SetBinContent(7,23.73845);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.53781);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.131757);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.254065);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.056719);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.705565);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.118715);
   hNCpi0inFVres_stack_7->SetBinError(1,3.03382);
   hNCpi0inFVres_stack_7->SetBinError(2,5.445553);
   hNCpi0inFVres_stack_7->SetBinError(3,4.461523);
   hNCpi0inFVres_stack_7->SetBinError(4,3.364331);
   hNCpi0inFVres_stack_7->SetBinError(5,2.765833);
   hNCpi0inFVres_stack_7->SetBinError(6,2.453869);
   hNCpi0inFVres_stack_7->SetBinError(7,1.878979);
   hNCpi0inFVres_stack_7->SetBinError(8,1.440599);
   hNCpi0inFVres_stack_7->SetBinError(9,1.362082);
   hNCpi0inFVres_stack_7->SetBinError(10,1.229819);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8913742);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5908283);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8774915);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.93232);
   hNCpi0inFVdis_stack_8->SetBinContent(2,54.33762);
   hNCpi0inFVdis_stack_8->SetBinContent(3,49.7216);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.80281);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.90654);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.43503);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.749804);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.655563);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.059841);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.131653);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.494704);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.029119);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.241976);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.301956);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.061461);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.280753);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.046091);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.454714);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.993332);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.238456);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.315912);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.185499);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7083479);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4283023);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6812579);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8967779);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3618308);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3609784);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1295479);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1772911);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1563585);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04896985);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01830775);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,20.42873);
   hCCpi0inFV_stack_10->SetBinContent(2,115.3391);
   hCCpi0inFV_stack_10->SetBinContent(3,120.581);
   hCCpi0inFV_stack_10->SetBinContent(4,92.72079);
   hCCpi0inFV_stack_10->SetBinContent(5,61.99143);
   hCCpi0inFV_stack_10->SetBinContent(6,37.35925);
   hCCpi0inFV_stack_10->SetBinContent(7,21.82191);
   hCCpi0inFV_stack_10->SetBinContent(8,16.9792);
   hCCpi0inFV_stack_10->SetBinContent(9,8.879047);
   hCCpi0inFV_stack_10->SetBinContent(10,4.068656);
   hCCpi0inFV_stack_10->SetBinContent(11,2.979234);
   hCCpi0inFV_stack_10->SetBinContent(12,3.512608);
   hCCpi0inFV_stack_10->SetBinContent(13,9.231388);
   hCCpi0inFV_stack_10->SetBinError(1,2.268498);
   hCCpi0inFV_stack_10->SetBinError(2,5.359977);
   hCCpi0inFV_stack_10->SetBinError(3,5.520347);
   hCCpi0inFV_stack_10->SetBinError(4,4.859475);
   hCCpi0inFV_stack_10->SetBinError(5,3.980339);
   hCCpi0inFV_stack_10->SetBinError(6,3.04861);
   hCCpi0inFV_stack_10->SetBinError(7,2.299199);
   hCCpi0inFV_stack_10->SetBinError(8,2.077851);
   hCCpi0inFV_stack_10->SetBinError(9,1.522327);
   hCCpi0inFV_stack_10->SetBinError(10,1.06149);
   hCCpi0inFV_stack_10->SetBinError(11,0.8548804);
   hCCpi0inFV_stack_10->SetBinError(12,1.019845);
   hCCpi0inFV_stack_10->SetBinError(13,1.532696);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,13.20517);
   hNCinFV_stack_11->SetBinContent(2,73.05811);
   hNCinFV_stack_11->SetBinContent(3,65.00559);
   hNCinFV_stack_11->SetBinContent(4,50.73104);
   hNCinFV_stack_11->SetBinContent(5,29.45224);
   hNCinFV_stack_11->SetBinContent(6,16.94289);
   hNCinFV_stack_11->SetBinContent(7,9.746658);
   hNCinFV_stack_11->SetBinContent(8,7.342112);
   hNCinFV_stack_11->SetBinContent(9,10.13914);
   hNCinFV_stack_11->SetBinContent(10,2.158333);
   hNCinFV_stack_11->SetBinContent(11,1.643131);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,3.453838);
   hNCinFV_stack_11->SetBinError(1,1.7319);
   hNCinFV_stack_11->SetBinError(2,4.296142);
   hNCinFV_stack_11->SetBinError(3,4.256137);
   hNCinFV_stack_11->SetBinError(4,3.909063);
   hNCinFV_stack_11->SetBinError(5,3.371038);
   hNCinFV_stack_11->SetBinError(6,2.621379);
   hNCinFV_stack_11->SetBinError(7,1.919624);
   hNCinFV_stack_11->SetBinError(8,1.781561);
   hNCinFV_stack_11->SetBinError(9,2.044354);
   hNCinFV_stack_11->SetBinError(10,0.7887095);
   hNCinFV_stack_11->SetBinError(11,0.6974135);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,1.185175);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,7.466444);
   hnumuCCinFV_stack_12->SetBinContent(2,72.7354);
   hnumuCCinFV_stack_12->SetBinContent(3,96.66862);
   hnumuCCinFV_stack_12->SetBinContent(4,75.19452);
   hnumuCCinFV_stack_12->SetBinContent(5,57.15601);
   hnumuCCinFV_stack_12->SetBinContent(6,30.48477);
   hnumuCCinFV_stack_12->SetBinContent(7,14.82658);
   hnumuCCinFV_stack_12->SetBinContent(8,9.414113);
   hnumuCCinFV_stack_12->SetBinContent(9,7.534771);
   hnumuCCinFV_stack_12->SetBinContent(10,4.091612);
   hnumuCCinFV_stack_12->SetBinContent(11,2.583453);
   hnumuCCinFV_stack_12->SetBinContent(12,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(13,7.618684);
   hnumuCCinFV_stack_12->SetBinError(1,1.395841);
   hnumuCCinFV_stack_12->SetBinError(2,5.403121);
   hnumuCCinFV_stack_12->SetBinError(3,5.542078);
   hnumuCCinFV_stack_12->SetBinError(4,4.839356);
   hnumuCCinFV_stack_12->SetBinError(5,4.528365);
   hnumuCCinFV_stack_12->SetBinError(6,3.047133);
   hnumuCCinFV_stack_12->SetBinError(7,3.003966);
   hnumuCCinFV_stack_12->SetBinError(8,1.715113);
   hnumuCCinFV_stack_12->SetBinError(9,1.395603);
   hnumuCCinFV_stack_12->SetBinError(10,1.027798);
   hnumuCCinFV_stack_12->SetBinError(11,0.7786902);
   hnumuCCinFV_stack_12->SetBinError(12,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(13,1.444949);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(2,2.011376);
   hnueCCinFV_stack_13->SetBinContent(3,1.413964);
   hnueCCinFV_stack_13->SetBinContent(4,2.692046);
   hnueCCinFV_stack_13->SetBinContent(5,1.447569);
   hnueCCinFV_stack_13->SetBinContent(6,2.103736);
   hnueCCinFV_stack_13->SetBinContent(7,1.802869);
   hnueCCinFV_stack_13->SetBinContent(8,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(9,0.5891806);
   hnueCCinFV_stack_13->SetBinContent(10,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(11,0.3479495);
   hnueCCinFV_stack_13->SetBinContent(12,0.3662158);
   hnueCCinFV_stack_13->SetBinContent(13,6.606309);
   hnueCCinFV_stack_13->SetBinError(2,0.7285148);
   hnueCCinFV_stack_13->SetBinError(3,0.6515799);
   hnueCCinFV_stack_13->SetBinError(4,0.9726717);
   hnueCCinFV_stack_13->SetBinError(5,0.6091058);
   hnueCCinFV_stack_13->SetBinError(6,0.813147);
   hnueCCinFV_stack_13->SetBinError(7,1.586911);
   hnueCCinFV_stack_13->SetBinError(8,0.3397478);
   hnueCCinFV_stack_13->SetBinError(9,0.3401681);
   hnueCCinFV_stack_13->SetBinError(10,0.2945335);
   hnueCCinFV_stack_13->SetBinError(11,0.2478319);
   hnueCCinFV_stack_13->SetBinError(12,0.2595015);
   hnueCCinFV_stack_13->SetBinError(13,1.69584);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__14->SetBinContent(1,258.3234);
   hmcerror__14->SetBinContent(2,892.4214);
   hmcerror__14->SetBinContent(3,684.1218);
   hmcerror__14->SetBinContent(4,450.3607);
   hmcerror__14->SetBinContent(5,283.7254);
   hmcerror__14->SetBinContent(6,165.6878);
   hmcerror__14->SetBinContent(7,99.64525);
   hmcerror__14->SetBinContent(8,70.01455);
   hmcerror__14->SetBinContent(9,45.11686);
   hmcerror__14->SetBinContent(10,23.36094);
   hmcerror__14->SetBinContent(11,13.99103);
   hmcerror__14->SetBinContent(12,13.90931);
   hmcerror__14->SetBinContent(13,48.96471);
   hmcerror__14->SetBinError(1,124.1442);
   hmcerror__14->SetBinError(2,384.687);
   hmcerror__14->SetBinError(3,258.5265);
   hmcerror__14->SetBinError(4,147.5935);
   hmcerror__14->SetBinError(5,83.55506);
   hmcerror__14->SetBinError(6,45.60154);
   hmcerror__14->SetBinError(7,35.95794);
   hmcerror__14->SetBinError(8,30.91997);
   hmcerror__14->SetBinError(9,21.67596);
   hmcerror__14->SetBinError(10,14.27981);
   hmcerror__14->SetBinError(11,13.35846);
   hmcerror__14->SetBinError(12,8.498698);
   hmcerror__14->SetBinError(13,27.28521);
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
   
   Double_t _fx3017[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3017[12] = {
   304,
   814,
   607,
   366,
   219,
   112,
   63,
   32,
   28,
   25,
   12,
   6};
   Double_t _felx3017[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3017[12] = {
   17.4356,
   28.53069,
   24.63737,
   19.13113,
   14.79865,
   10.58301,
   8.0648,
   5.7977,
   5.4358,
   5.1474,
   3.64022,
   2.67925};
   Double_t _fehx3017[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3017[12] = {
   17.4356,
   28.53069,
   24.63737,
   19.13113,
   14.79865,
   10.58301,
   7.862,
   5.5904,
   5.2271,
   4.9374,
   3.4155,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1100);
   Graph_Graph3017->SetMinimum(2.988675);
   Graph_Graph3017->SetMaximum(926.4517);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2588.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 74.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 268.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1012.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  230.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 506.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 280.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 379.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3018[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3018[12] = {
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
   Double_t _felx3018[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3018[12] = {
   0.4805768,
   0.4310598,
   0.3778955,
   0.3277229,
   0.2944927,
   0.2752256,
   0.3608596,
   0.441622,
   0.4804403,
   0.6112686,
   0.9547876,
   0.6110081};
   Double_t _fehx3018[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3018[12] = {
   0.4805768,
   0.4310598,
   0.3778955,
   0.3277229,
   0.2944927,
   0.2752256,
   0.3608596,
   0.441622,
   0.4804403,
   0.6112686,
   0.9547876,
   0.6110081};
   grae = new TGraphAsymmErrors(12,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1100);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3019[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3019[12] = {
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
   Double_t _felx3019[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3019[12] = {
   0.4692938,
   0.4258978,
   0.3629235,
   0.2900945,
   0.2304325,
   0.2269109,
   0.2398279,
   0.2463522,
   0.3074091,
   0.3218535,
   0.3237285,
   0.2466176};
   Double_t _fehx3019[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3019[12] = {
   0.4692938,
   0.4258978,
   0.3629235,
   0.2900945,
   0.2304325,
   0.2269109,
   0.2398279,
   0.2463522,
   0.3074091,
   0.3218535,
   0.3237285,
   0.2466176};
   grae = new TGraphAsymmErrors(12,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1100);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3020[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3020[12] = {
   1.17682,
   0.9121251,
   0.8872689,
   0.8126819,
   0.771873,
   0.67597,
   0.6322429,
   0.4570479,
   0.6206106,
   1.070162,
   0.8576922,
   0.4313659};
   Double_t _felx3020[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3020[12] = {
   0.06749523,
   0.03196997,
   0.03601314,
   0.04247957,
   0.05215834,
   0.06387316,
   0.08093512,
   0.08280707,
   0.1204827,
   0.2203421,
   0.2601824,
   0.1926228};
   Double_t _fehx3020[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3020[12] = {
   0.06749523,
   0.03196997,
   0.03601314,
   0.04247957,
   0.05215834,
   0.06387316,
   0.0788999,
   0.07984626,
   0.1158569,
   0.2113528,
   0.2441207,
   0.1738822};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1100);
   Graph_Graph3020->SetMinimum(0.1344658);
   Graph_Graph3020->SetMaximum(1.385792);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_visible_energy_all",12,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
