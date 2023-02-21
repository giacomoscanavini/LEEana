#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 19:21:10 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-184.6154,-18.80388,1353.846,2079.313);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__13->SetBinContent(1,336.5811);
   hmc__13->SetBinContent(2,940.194);
   hmc__13->SetBinContent(3,737.5154);
   hmc__13->SetBinContent(4,495.0442);
   hmc__13->SetBinContent(5,326.6123);
   hmc__13->SetBinContent(6,187.7201);
   hmc__13->SetBinContent(7,111.6531);
   hmc__13->SetBinContent(8,64.338);
   hmc__13->SetBinContent(9,42.11355);
   hmc__13->SetBinContent(10,35.19323);
   hmc__13->SetBinContent(11,33.09391);
   hmc__13->SetBinContent(12,28.22937);
   hmc__13->SetBinContent(13,225.4178);
   hmc__13->SetBinError(1,95.54888);
   hmc__13->SetBinError(2,315.5659);
   hmc__13->SetBinError(3,272.4927);
   hmc__13->SetBinError(4,185.0995);
   hmc__13->SetBinError(5,119.6304);
   hmc__13->SetBinError(6,61.96974);
   hmc__13->SetBinError(7,37.71502);
   hmc__13->SetBinError(8,23.42564);
   hmc__13->SetBinError(9,16.11452);
   hmc__13->SetBinError(10,15.77549);
   hmc__13->SetBinError(11,17.88723);
   hmc__13->SetBinError(12,12.60697);
   hmc__13->SetBinError(13,67.20339);
   hmc__13->SetMinimum(-18.80388);
   hmc__13->SetMaximum(1974.407);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",12,0,1200);
   hs5_stack_5->SetMinimum(-5.168879e-09);
   hs5_stack_5->SetMaximum(987.2039);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,13.98483);
   hbadmatch_stack_1->SetBinContent(2,20.75655);
   hbadmatch_stack_1->SetBinContent(3,16.56492);
   hbadmatch_stack_1->SetBinContent(4,7.97099);
   hbadmatch_stack_1->SetBinContent(5,5.95386);
   hbadmatch_stack_1->SetBinContent(6,3.749742);
   hbadmatch_stack_1->SetBinContent(7,2.668166);
   hbadmatch_stack_1->SetBinContent(8,1.744771);
   hbadmatch_stack_1->SetBinContent(9,1.48495);
   hbadmatch_stack_1->SetBinContent(10,1.318683);
   hbadmatch_stack_1->SetBinContent(11,0.5798234);
   hbadmatch_stack_1->SetBinContent(12,1.247732);
   hbadmatch_stack_1->SetBinContent(13,3.55505);
   hbadmatch_stack_1->SetBinError(1,2.015885);
   hbadmatch_stack_1->SetBinError(2,3.072917);
   hbadmatch_stack_1->SetBinError(3,2.183807);
   hbadmatch_stack_1->SetBinError(4,1.411918);
   hbadmatch_stack_1->SetBinError(5,1.258121);
   hbadmatch_stack_1->SetBinError(6,1.062947);
   hbadmatch_stack_1->SetBinError(7,0.8665328);
   hbadmatch_stack_1->SetBinError(8,0.7950867);
   hbadmatch_stack_1->SetBinError(9,0.6274201);
   hbadmatch_stack_1->SetBinError(10,0.5542732);
   hbadmatch_stack_1->SetBinError(11,0.4306607);
   hbadmatch_stack_1->SetBinError(12,0.5865443);
   hbadmatch_stack_1->SetBinError(13,0.9910943);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,39.04435);
   hext_stack_2->SetBinContent(2,74.29532);
   hext_stack_2->SetBinContent(3,44.59393);
   hext_stack_2->SetBinContent(4,31.1778);
   hext_stack_2->SetBinContent(5,23.55503);
   hext_stack_2->SetBinContent(6,18.23895);
   hext_stack_2->SetBinContent(7,14.01737);
   hext_stack_2->SetBinContent(8,4.613812);
   hext_stack_2->SetBinContent(9,2.435184);
   hext_stack_2->SetBinContent(10,3.330584);
   hext_stack_2->SetBinContent(11,3.401196);
   hext_stack_2->SetBinContent(12,2.192989);
   hext_stack_2->SetBinContent(13,15.99689);
   hext_stack_2->SetBinError(1,4.455034);
   hext_stack_2->SetBinError(2,6.035131);
   hext_stack_2->SetBinError(3,4.484156);
   hext_stack_2->SetBinError(4,3.888888);
   hext_stack_2->SetBinError(5,3.499511);
   hext_stack_2->SetBinError(6,3.016675);
   hext_stack_2->SetBinError(7,2.756296);
   hext_stack_2->SetBinError(8,1.439057);
   hext_stack_2->SetBinError(9,0.9256422);
   hext_stack_2->SetBinError(10,1.116937);
   hext_stack_2->SetBinError(11,1.172056);
   hext_stack_2->SetBinError(12,0.9009267);
   hext_stack_2->SetBinError(13,2.749343);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,2.303332);
   hdirt_stack_3->SetBinContent(2,5.119854);
   hdirt_stack_3->SetBinContent(3,3.776386);
   hdirt_stack_3->SetBinContent(4,0.7820653);
   hdirt_stack_3->SetBinContent(5,1.445814);
   hdirt_stack_3->SetBinContent(6,0.7408447);
   hdirt_stack_3->SetBinContent(7,0.63311);
   hdirt_stack_3->SetBinContent(8,0.1564614);
   hdirt_stack_3->SetBinContent(11,0.481239);
   hdirt_stack_3->SetBinContent(13,0.5388689);
   hdirt_stack_3->SetBinError(1,0.7629002);
   hdirt_stack_3->SetBinError(2,1.416798);
   hdirt_stack_3->SetBinError(3,0.9388572);
   hdirt_stack_3->SetBinError(4,0.4240153);
   hdirt_stack_3->SetBinError(5,0.7259979);
   hdirt_stack_3->SetBinError(6,0.4510433);
   hdirt_stack_3->SetBinError(7,0.3242013);
   hdirt_stack_3->SetBinError(8,0.1564614);
   hdirt_stack_3->SetBinError(11,0.3416714);
   hdirt_stack_3->SetBinError(13,0.4239131);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,19.31704);
   houtFV_stack_4->SetBinContent(2,42.59138);
   houtFV_stack_4->SetBinContent(3,44.46294);
   houtFV_stack_4->SetBinContent(4,25.98471);
   houtFV_stack_4->SetBinContent(5,21.67931);
   houtFV_stack_4->SetBinContent(6,12.44066);
   houtFV_stack_4->SetBinContent(7,8.551033);
   houtFV_stack_4->SetBinContent(8,4.38079);
   houtFV_stack_4->SetBinContent(9,4.588223);
   houtFV_stack_4->SetBinContent(10,4.498013);
   houtFV_stack_4->SetBinContent(11,3.133847);
   houtFV_stack_4->SetBinContent(12,4.197714);
   houtFV_stack_4->SetBinContent(13,20.54221);
   houtFV_stack_4->SetBinError(1,2.164834);
   houtFV_stack_4->SetBinError(2,3.264966);
   houtFV_stack_4->SetBinError(3,3.367059);
   houtFV_stack_4->SetBinError(4,2.546981);
   houtFV_stack_4->SetBinError(5,2.372808);
   houtFV_stack_4->SetBinError(6,1.718886);
   houtFV_stack_4->SetBinError(7,1.455238);
   houtFV_stack_4->SetBinError(8,1.102736);
   houtFV_stack_4->SetBinError(9,1.092434);
   houtFV_stack_4->SetBinError(10,1.038297);
   houtFV_stack_4->SetBinError(11,0.9132729);
   houtFV_stack_4->SetBinError(12,0.995835);
   houtFV_stack_4->SetBinError(13,2.323635);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6260899);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.281744);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9625539);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2263758);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3765671);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3148322);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.45504);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.997532);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.751234);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.761284);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.795154);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4245815);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.8327343);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5903169);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5889423);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3073253);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,110.014);
   hNCpi0inFVres_stack_7->SetBinContent(2,411.3248);
   hNCpi0inFVres_stack_7->SetBinContent(3,344.7695);
   hNCpi0inFVres_stack_7->SetBinContent(4,227.5475);
   hNCpi0inFVres_stack_7->SetBinContent(5,141.965);
   hNCpi0inFVres_stack_7->SetBinContent(6,71.06773);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.12449);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.83855);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.94191);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.994377);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.052931);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.771667);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.22101);
   hNCpi0inFVres_stack_7->SetBinError(1,3.448917);
   hNCpi0inFVres_stack_7->SetBinError(2,6.645816);
   hNCpi0inFVres_stack_7->SetBinError(3,6.123812);
   hNCpi0inFVres_stack_7->SetBinError(4,4.950987);
   hNCpi0inFVres_stack_7->SetBinError(5,3.964021);
   hNCpi0inFVres_stack_7->SetBinError(6,2.754422);
   hNCpi0inFVres_stack_7->SetBinError(7,1.888512);
   hNCpi0inFVres_stack_7->SetBinError(8,1.384276);
   hNCpi0inFVres_stack_7->SetBinError(9,1.177085);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9897376);
   hNCpi0inFVres_stack_7->SetBinError(11,1.030045);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7724387);
   hNCpi0inFVres_stack_7->SetBinError(13,2.664863);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,26.88008);
   hNCpi0inFVdis_stack_8->SetBinContent(2,73.24425);
   hNCpi0inFVdis_stack_8->SetBinContent(3,55.37906);
   hNCpi0inFVdis_stack_8->SetBinContent(4,40.35287);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.23209);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.56686);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.770929);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.769171);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.141506);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.690866);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.966626);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.901616);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.84338);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.652132);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.763239);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.40412);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.096359);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.686754);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.331464);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9471711);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7340729);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6621045);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5349164);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4540403);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6082856);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.464099);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.446568);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.767254);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2126346);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3060563);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,52.61713);
   hCCpi0inFV_stack_10->SetBinContent(2,143.4747);
   hCCpi0inFV_stack_10->SetBinContent(3,105.8353);
   hCCpi0inFV_stack_10->SetBinContent(4,74.19281);
   hCCpi0inFV_stack_10->SetBinContent(5,41.3583);
   hCCpi0inFV_stack_10->SetBinContent(6,28.26641);
   hCCpi0inFV_stack_10->SetBinContent(7,16.09981);
   hCCpi0inFV_stack_10->SetBinContent(8,8.517458);
   hCCpi0inFV_stack_10->SetBinContent(9,6.155183);
   hCCpi0inFV_stack_10->SetBinContent(10,4.896516);
   hCCpi0inFV_stack_10->SetBinContent(11,4.773885);
   hCCpi0inFV_stack_10->SetBinContent(12,4.044458);
   hCCpi0inFV_stack_10->SetBinContent(13,25.66039);
   hCCpi0inFV_stack_10->SetBinError(1,3.576506);
   hCCpi0inFV_stack_10->SetBinError(2,6.022726);
   hCCpi0inFV_stack_10->SetBinError(3,5.190057);
   hCCpi0inFV_stack_10->SetBinError(4,4.366414);
   hCCpi0inFV_stack_10->SetBinError(5,3.145895);
   hCCpi0inFV_stack_10->SetBinError(6,2.683873);
   hCCpi0inFV_stack_10->SetBinError(7,2.112497);
   hCCpi0inFV_stack_10->SetBinError(8,1.401914);
   hCCpi0inFV_stack_10->SetBinError(9,1.224883);
   hCCpi0inFV_stack_10->SetBinError(10,1.075844);
   hCCpi0inFV_stack_10->SetBinError(11,1.135262);
   hCCpi0inFV_stack_10->SetBinError(12,0.947838);
   hCCpi0inFV_stack_10->SetBinError(13,2.613363);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,37.34528);
   hNCinFV_stack_11->SetBinContent(2,74.98383);
   hNCinFV_stack_11->SetBinContent(3,48.30729);
   hNCinFV_stack_11->SetBinContent(4,30.41461);
   hNCinFV_stack_11->SetBinContent(5,21.89038);
   hNCinFV_stack_11->SetBinContent(6,16.12187);
   hNCinFV_stack_11->SetBinContent(7,10.40323);
   hNCinFV_stack_11->SetBinContent(8,6.539079);
   hNCinFV_stack_11->SetBinContent(9,1.857266);
   hNCinFV_stack_11->SetBinContent(10,3.124387);
   hNCinFV_stack_11->SetBinContent(11,3.907867);
   hNCinFV_stack_11->SetBinContent(12,2.389088);
   hNCinFV_stack_11->SetBinContent(13,20.56555);
   hNCinFV_stack_11->SetBinError(1,3.02168);
   hNCinFV_stack_11->SetBinError(2,4.389122);
   hNCinFV_stack_11->SetBinError(3,3.488002);
   hNCinFV_stack_11->SetBinError(4,2.727064);
   hNCinFV_stack_11->SetBinError(5,2.338561);
   hNCinFV_stack_11->SetBinError(6,2.010789);
   hNCinFV_stack_11->SetBinError(7,1.605624);
   hNCinFV_stack_11->SetBinError(8,1.33131);
   hNCinFV_stack_11->SetBinError(9,0.6799255);
   hNCinFV_stack_11->SetBinError(10,0.89917);
   hNCinFV_stack_11->SetBinError(11,0.9808007);
   hNCinFV_stack_11->SetBinError(12,0.784047);
   hNCinFV_stack_11->SetBinError(13,2.314655);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,30.90511);
   hnumuCCinFV_stack_12->SetBinContent(2,85.74207);
   hnumuCCinFV_stack_12->SetBinContent(3,66.05044);
   hnumuCCinFV_stack_12->SetBinContent(4,49.89674);
   hnumuCCinFV_stack_12->SetBinContent(5,39.39032);
   hnumuCCinFV_stack_12->SetBinContent(6,19.58973);
   hnumuCCinFV_stack_12->SetBinContent(7,15.26128);
   hnumuCCinFV_stack_12->SetBinContent(8,13.15126);
   hnumuCCinFV_stack_12->SetBinContent(9,6.944532);
   hnumuCCinFV_stack_12->SetBinContent(10,4.85172);
   hnumuCCinFV_stack_12->SetBinContent(11,5.643381);
   hnumuCCinFV_stack_12->SetBinContent(12,4.375054);
   hnumuCCinFV_stack_12->SetBinContent(13,44.90367);
   hnumuCCinFV_stack_12->SetBinError(1,3.030384);
   hnumuCCinFV_stack_12->SetBinError(2,5.396459);
   hnumuCCinFV_stack_12->SetBinError(3,4.551347);
   hnumuCCinFV_stack_12->SetBinError(4,3.947959);
   hnumuCCinFV_stack_12->SetBinError(5,3.790081);
   hnumuCCinFV_stack_12->SetBinError(6,3.306723);
   hnumuCCinFV_stack_12->SetBinError(7,2.374628);
   hnumuCCinFV_stack_12->SetBinError(8,2.107512);
   hnumuCCinFV_stack_12->SetBinError(9,1.415922);
   hnumuCCinFV_stack_12->SetBinError(10,1.088947);
   hnumuCCinFV_stack_12->SetBinError(11,1.246958);
   hnumuCCinFV_stack_12->SetBinError(12,1.235748);
   hnumuCCinFV_stack_12->SetBinError(13,4.087101);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.9342211);
   hnueCCinFV_stack_13->SetBinContent(2,1.270501);
   hnueCCinFV_stack_13->SetBinContent(3,2.658922);
   hnueCCinFV_stack_13->SetBinContent(4,3.280109);
   hnueCCinFV_stack_13->SetBinContent(5,1.330223);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.7889074);
   hnueCCinFV_stack_13->SetBinContent(8,0.4313416);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(13,7.833016);
   hnueCCinFV_stack_13->SetBinError(1,0.5439573);
   hnueCCinFV_stack_13->SetBinError(2,0.5895188);
   hnueCCinFV_stack_13->SetBinError(3,0.9646802);
   hnueCCinFV_stack_13->SetBinError(4,1.687561);
   hnueCCinFV_stack_13->SetBinError(5,0.5624674);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.467035);
   hnueCCinFV_stack_13->SetBinError(8,0.3061804);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.5410961);
   hnueCCinFV_stack_13->SetBinError(13,1.788767);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__14->SetBinContent(1,336.5811);
   hmcerror__14->SetBinContent(2,940.194);
   hmcerror__14->SetBinContent(3,737.5154);
   hmcerror__14->SetBinContent(4,495.0442);
   hmcerror__14->SetBinContent(5,326.6123);
   hmcerror__14->SetBinContent(6,187.7201);
   hmcerror__14->SetBinContent(7,111.6531);
   hmcerror__14->SetBinContent(8,64.338);
   hmcerror__14->SetBinContent(9,42.11355);
   hmcerror__14->SetBinContent(10,35.19323);
   hmcerror__14->SetBinContent(11,33.09391);
   hmcerror__14->SetBinContent(12,28.22937);
   hmcerror__14->SetBinContent(13,225.4178);
   hmcerror__14->SetBinError(1,95.54888);
   hmcerror__14->SetBinError(2,315.5659);
   hmcerror__14->SetBinError(3,272.4927);
   hmcerror__14->SetBinError(4,185.0995);
   hmcerror__14->SetBinError(5,119.6304);
   hmcerror__14->SetBinError(6,61.96974);
   hmcerror__14->SetBinError(7,37.71502);
   hmcerror__14->SetBinError(8,23.42564);
   hmcerror__14->SetBinError(9,16.11452);
   hmcerror__14->SetBinError(10,15.77549);
   hmcerror__14->SetBinError(11,17.88723);
   hmcerror__14->SetBinError(12,12.60697);
   hmcerror__14->SetBinError(13,67.20339);
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
   Double_t _fy3017[12] = {
   240,
   708,
   593,
   344,
   190,
   134,
   85,
   59,
   37,
   35,
   22,
   16};
   Double_t _felx3017[12] = {
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
   Double_t _fely3017[12] = {
   15.49193,
   26.60827,
   24.35159,
   18.54724,
   13.78405,
   11.57584,
   9.3428,
   7.8097,
   6.2203,
   6.0548,
   4.8417,
   4.1628};
   Double_t _fehx3017[12] = {
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
   Double_t _fehy3017[12] = {
   15.49193,
   26.60827,
   24.35159,
   18.54724,
   13.78405,
   11.57584,
   9.1411,
   7.6066,
   6.0141,
   5.8483,
   4.6299,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(10.65348);
   Graph_Graph3017->SetMaximum(806.8854);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2463.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 78.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 260.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 195.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1398.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  264.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 490.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 257.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 341.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 12.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[12] = {
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
   Double_t _fely3018[12] = {
   0.2838807,
   0.3356391,
   0.3694739,
   0.373905,
   0.3662766,
   0.3301178,
   0.3377874,
   0.3641027,
   0.3826446,
   0.4482535,
   0.5404992,
   0.4465906};
   Double_t _fehx3018[12] = {
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
   Double_t _fehy3018[12] = {
   0.2838807,
   0.3356391,
   0.3694739,
   0.373905,
   0.3662766,
   0.3301178,
   0.3377874,
   0.3641027,
   0.3826446,
   0.4482535,
   0.5404992,
   0.4465906};
   grae = new TGraphAsymmErrors(12,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1320);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   Double_t _fely3019[12] = {
   0.2614791,
   0.3189903,
   0.3555442,
   0.3606463,
   0.3430834,
   0.3084724,
   0.2483995,
   0.2379843,
   0.2749709,
   0.23933,
   0.2199939,
   0.2169704};
   Double_t _fehx3019[12] = {
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
   Double_t _fehy3019[12] = {
   0.2614791,
   0.3189903,
   0.3555442,
   0.3606463,
   0.3430834,
   0.3084724,
   0.2483995,
   0.2379843,
   0.2749709,
   0.23933,
   0.2199939,
   0.2169704};
   grae = new TGraphAsymmErrors(12,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1320);
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
   Double_t _fy3020[12] = {
   0.7130525,
   0.7530361,
   0.804051,
   0.6948875,
   0.5817295,
   0.7138288,
   0.7612863,
   0.917032,
   0.878577,
   0.9945095,
   0.6647748,
   0.5667856};
   Double_t _felx3020[12] = {
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
   Double_t _fely3020[12] = {
   0.04602734,
   0.02830083,
   0.03301842,
   0.03746582,
   0.04220309,
   0.06166541,
   0.08367701,
   0.1213855,
   0.147703,
   0.1720445,
   0.1463018,
   0.1474634};
   Double_t _fehx3020[12] = {
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
   Double_t _fehy3020[12] = {
   0.04602734,
   0.02830083,
   0.03301842,
   0.03746582,
   0.04220309,
   0.06166541,
   0.08187052,
   0.1182287,
   0.1428068,
   0.1661768,
   0.1399019,
   0.1397622};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.3451858);
   Graph_Graph3020->SetMaximum(1.234823);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
