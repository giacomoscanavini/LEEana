#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Jan  9 21:29:49 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-13.52,1.25641,1495.027);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__16->SetBinContent(1,57.94416);
   hmc__16->SetBinContent(2,45.76621);
   hmc__16->SetBinContent(3,44.59132);
   hmc__16->SetBinContent(4,42.07264);
   hmc__16->SetBinContent(5,45.16188);
   hmc__16->SetBinContent(6,41.86645);
   hmc__16->SetBinContent(7,35.39294);
   hmc__16->SetBinContent(8,47.91402);
   hmc__16->SetBinContent(9,57.59505);
   hmc__16->SetBinContent(10,56.87703);
   hmc__16->SetBinContent(11,63.76505);
   hmc__16->SetBinContent(12,81.48613);
   hmc__16->SetBinContent(13,101.0978);
   hmc__16->SetBinContent(14,123.1554);
   hmc__16->SetBinContent(15,146.9465);
   hmc__16->SetBinContent(16,202.4417);
   hmc__16->SetBinContent(17,239.2914);
   hmc__16->SetBinContent(18,294.1372);
   hmc__16->SetBinContent(19,419.1785);
   hmc__16->SetBinContent(20,649.2141);
   hmc__16->SetBinError(1,24.06266);
   hmc__16->SetBinError(2,15.57988);
   hmc__16->SetBinError(3,20.50952);
   hmc__16->SetBinError(4,15.21679);
   hmc__16->SetBinError(5,16.32411);
   hmc__16->SetBinError(6,20.85415);
   hmc__16->SetBinError(7,13.46544);
   hmc__16->SetBinError(8,18.06783);
   hmc__16->SetBinError(9,18.51911);
   hmc__16->SetBinError(10,23.29272);
   hmc__16->SetBinError(11,19.94862);
   hmc__16->SetBinError(12,25.73559);
   hmc__16->SetBinError(13,32.64112);
   hmc__16->SetBinError(14,35.87945);
   hmc__16->SetBinError(15,44.00447);
   hmc__16->SetBinError(16,58.5618);
   hmc__16->SetBinError(17,70.45256);
   hmc__16->SetBinError(18,86.10484);
   hmc__16->SetBinError(19,100.0447);
   hmc__16->SetBinError(20,166.0158);
   hmc__16->SetBinError(21,0.3895343);
   hmc__16->SetMinimum(-13.52);
   hmc__16->SetMaximum(1419.6);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,-1,1);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(681.6748);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.339336);
   hbadmatch_stack_1->SetBinContent(2,2.441476);
   hbadmatch_stack_1->SetBinContent(3,1.352654);
   hbadmatch_stack_1->SetBinContent(4,0.3917402);
   hbadmatch_stack_1->SetBinContent(5,1.077772);
   hbadmatch_stack_1->SetBinContent(6,2.526026);
   hbadmatch_stack_1->SetBinContent(7,0.8207904);
   hbadmatch_stack_1->SetBinContent(8,1.490512);
   hbadmatch_stack_1->SetBinContent(9,1.453948);
   hbadmatch_stack_1->SetBinContent(10,1.011425);
   hbadmatch_stack_1->SetBinContent(11,3.63078);
   hbadmatch_stack_1->SetBinContent(12,2.372298);
   hbadmatch_stack_1->SetBinContent(13,2.012076);
   hbadmatch_stack_1->SetBinContent(14,2.863988);
   hbadmatch_stack_1->SetBinContent(15,2.451505);
   hbadmatch_stack_1->SetBinContent(16,5.599439);
   hbadmatch_stack_1->SetBinContent(17,3.938945);
   hbadmatch_stack_1->SetBinContent(18,7.086802);
   hbadmatch_stack_1->SetBinContent(19,5.804233);
   hbadmatch_stack_1->SetBinContent(20,13.93495);
   hbadmatch_stack_1->SetBinError(1,0.7880801);
   hbadmatch_stack_1->SetBinError(2,1.727939);
   hbadmatch_stack_1->SetBinError(3,0.5175605);
   hbadmatch_stack_1->SetBinError(4,0.2770047);
   hbadmatch_stack_1->SetBinError(5,0.6240045);
   hbadmatch_stack_1->SetBinError(6,0.8660549);
   hbadmatch_stack_1->SetBinError(7,0.4288102);
   hbadmatch_stack_1->SetBinError(8,0.5696918);
   hbadmatch_stack_1->SetBinError(9,0.6132511);
   hbadmatch_stack_1->SetBinError(10,0.5191512);
   hbadmatch_stack_1->SetBinError(11,1.785569);
   hbadmatch_stack_1->SetBinError(12,0.795619);
   hbadmatch_stack_1->SetBinError(13,0.7380963);
   hbadmatch_stack_1->SetBinError(14,0.9323641);
   hbadmatch_stack_1->SetBinError(15,0.8366941);
   hbadmatch_stack_1->SetBinError(16,1.254175);
   hbadmatch_stack_1->SetBinError(17,0.9954283);
   hbadmatch_stack_1->SetBinError(18,1.405968);
   hbadmatch_stack_1->SetBinError(19,1.273464);
   hbadmatch_stack_1->SetBinError(20,2.148347);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,8.1391);
   hext_stack_2->SetBinContent(2,5.89704);
   hext_stack_2->SetBinContent(3,3.972198);
   hext_stack_2->SetBinContent(4,5.807659);
   hext_stack_2->SetBinContent(5,3.725593);
   hext_stack_2->SetBinContent(6,5.594185);
   hext_stack_2->SetBinContent(7,2.439593);
   hext_stack_2->SetBinContent(8,7.105247);
   hext_stack_2->SetBinContent(9,12.21945);
   hext_stack_2->SetBinContent(10,5.605774);
   hext_stack_2->SetBinContent(11,11.40184);
   hext_stack_2->SetBinContent(12,14.8637);
   hext_stack_2->SetBinContent(13,14.65022);
   hext_stack_2->SetBinContent(14,22.68558);
   hext_stack_2->SetBinContent(15,26.08237);
   hext_stack_2->SetBinContent(16,20.57763);
   hext_stack_2->SetBinContent(17,21.12104);
   hext_stack_2->SetBinContent(18,17.12295);
   hext_stack_2->SetBinContent(19,36.81507);
   hext_stack_2->SetBinContent(20,32.49857);
   hext_stack_2->SetBinError(1,2.106102);
   hext_stack_2->SetBinError(2,1.701242);
   hext_stack_2->SetBinError(3,1.288106);
   hext_stack_2->SetBinError(4,1.742221);
   hext_stack_2->SetBinError(5,1.216121);
   hext_stack_2->SetBinError(6,1.478305);
   hext_stack_2->SetBinError(7,0.9959598);
   hext_stack_2->SetBinError(8,1.859105);
   hext_stack_2->SetBinError(9,2.384636);
   hext_stack_2->SetBinError(10,1.455784);
   hext_stack_2->SetBinError(11,2.284889);
   hext_stack_2->SetBinError(12,2.694092);
   hext_stack_2->SetBinError(13,2.531438);
   hext_stack_2->SetBinError(14,3.374516);
   hext_stack_2->SetBinError(15,3.553301);
   hext_stack_2->SetBinError(16,2.994836);
   hext_stack_2->SetBinError(17,3.041641);
   hext_stack_2->SetBinError(18,2.594307);
   hext_stack_2->SetBinError(19,4.012683);
   hext_stack_2->SetBinError(20,3.925841);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.061732);
   hdirt_stack_3->SetBinContent(2,0.3671539);
   hdirt_stack_3->SetBinContent(3,1.352749);
   hdirt_stack_3->SetBinContent(4,1.09554);
   hdirt_stack_3->SetBinContent(5,0.5033248);
   hdirt_stack_3->SetBinContent(6,1.292544);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,1.330383);
   hdirt_stack_3->SetBinContent(9,0.742136);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,1.093975);
   hdirt_stack_3->SetBinContent(12,2.074914);
   hdirt_stack_3->SetBinContent(13,2.511211);
   hdirt_stack_3->SetBinContent(14,2.197525);
   hdirt_stack_3->SetBinContent(15,1.37165);
   hdirt_stack_3->SetBinContent(16,2.751901);
   hdirt_stack_3->SetBinContent(17,4.551794);
   hdirt_stack_3->SetBinContent(18,4.064167);
   hdirt_stack_3->SetBinContent(19,3.301553);
   hdirt_stack_3->SetBinContent(20,5.486931);
   hdirt_stack_3->SetBinError(1,0.4080244);
   hdirt_stack_3->SetBinError(2,0.2643781);
   hdirt_stack_3->SetBinError(3,0.6763744);
   hdirt_stack_3->SetBinError(4,0.5845155);
   hdirt_stack_3->SetBinError(5,0.3904789);
   hdirt_stack_3->SetBinError(6,0.5936772);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.6284736);
   hdirt_stack_3->SetBinError(9,0.374946);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.5705956);
   hdirt_stack_3->SetBinError(12,0.7631283);
   hdirt_stack_3->SetBinError(13,0.8454443);
   hdirt_stack_3->SetBinError(14,0.779535);
   hdirt_stack_3->SetBinError(15,0.6162463);
   hdirt_stack_3->SetBinError(16,0.7732855);
   hdirt_stack_3->SetBinError(17,1.428602);
   hdirt_stack_3->SetBinError(18,1.074975);
   hdirt_stack_3->SetBinError(19,1.046667);
   hdirt_stack_3->SetBinError(20,1.256174);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,4.681443);
   houtFV_stack_4->SetBinContent(2,4.914585);
   houtFV_stack_4->SetBinContent(3,5.829934);
   houtFV_stack_4->SetBinContent(4,6.335467);
   houtFV_stack_4->SetBinContent(5,6.800425);
   houtFV_stack_4->SetBinContent(6,5.200626);
   houtFV_stack_4->SetBinContent(7,5.490136);
   houtFV_stack_4->SetBinContent(8,5.942431);
   houtFV_stack_4->SetBinContent(9,5.543351);
   houtFV_stack_4->SetBinContent(10,8.406526);
   houtFV_stack_4->SetBinContent(11,7.814523);
   houtFV_stack_4->SetBinContent(12,9.768177);
   houtFV_stack_4->SetBinContent(13,9.954741);
   houtFV_stack_4->SetBinContent(14,14.91181);
   houtFV_stack_4->SetBinContent(15,17.46919);
   houtFV_stack_4->SetBinContent(16,25.04908);
   houtFV_stack_4->SetBinContent(17,29.51715);
   houtFV_stack_4->SetBinContent(18,33.07246);
   houtFV_stack_4->SetBinContent(19,37.05308);
   houtFV_stack_4->SetBinContent(20,40.54711);
   houtFV_stack_4->SetBinError(1,1.134714);
   houtFV_stack_4->SetBinError(2,1.10414);
   houtFV_stack_4->SetBinError(3,1.196384);
   houtFV_stack_4->SetBinError(4,1.322054);
   houtFV_stack_4->SetBinError(5,1.333766);
   houtFV_stack_4->SetBinError(6,1.078299);
   houtFV_stack_4->SetBinError(7,1.135877);
   houtFV_stack_4->SetBinError(8,1.21173);
   houtFV_stack_4->SetBinError(9,1.088602);
   houtFV_stack_4->SetBinError(10,1.448529);
   houtFV_stack_4->SetBinError(11,1.454169);
   houtFV_stack_4->SetBinError(12,1.585161);
   houtFV_stack_4->SetBinError(13,1.594367);
   houtFV_stack_4->SetBinError(14,1.923294);
   houtFV_stack_4->SetBinError(15,2.058215);
   houtFV_stack_4->SetBinError(16,2.586524);
   houtFV_stack_4->SetBinError(17,2.674642);
   houtFV_stack_4->SetBinError(18,2.928278);
   houtFV_stack_4->SetBinError(19,3.034042);
   houtFV_stack_4->SetBinError(20,3.16208);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.647418);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6094512);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6082652);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4812065);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2980558);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.437433);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.193473);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4848375);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3852539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3634356);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2364284);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.005359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7640742);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.155535);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.362031);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.16705);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,14.60121);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,58.21078);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8366964);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.20983);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1869958);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.182373);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1292155);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2939829);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.08735967);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2222178);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2201053);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2511433);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.09667764);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4161124);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.337789);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5826645);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7076925);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9984428);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.371248);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.886865);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2463214);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1370652);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.06050988);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05458213);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1529967);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3148397);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.06074714);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1085062);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.10272);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4748276);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2900287);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.222673);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.19316);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.497523);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1266278);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1223856);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03076236);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04066776);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07296056);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.176599);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0408864);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07185118);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0482942);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1590389);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.09543294);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4012977);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3808071);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3474726);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.9224);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.51822);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.15702);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.52445);
   hNCpi0inFVres_stack_7->SetBinContent(5,16.83735);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.24924);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.02097);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.51695);
   hNCpi0inFVres_stack_7->SetBinContent(9,18.77064);
   hNCpi0inFVres_stack_7->SetBinContent(10,24.05071);
   hNCpi0inFVres_stack_7->SetBinContent(11,22.1712);
   hNCpi0inFVres_stack_7->SetBinContent(12,30.58455);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.90838);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.30308);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.97388);
   hNCpi0inFVres_stack_7->SetBinContent(16,77.08183);
   hNCpi0inFVres_stack_7->SetBinContent(17,96.99454);
   hNCpi0inFVres_stack_7->SetBinContent(18,119.5916);
   hNCpi0inFVres_stack_7->SetBinContent(19,163.6814);
   hNCpi0inFVres_stack_7->SetBinContent(20,218.9407);
   hNCpi0inFVres_stack_7->SetBinError(1,1.427068);
   hNCpi0inFVres_stack_7->SetBinError(2,1.31113);
   hNCpi0inFVres_stack_7->SetBinError(3,1.402184);
   hNCpi0inFVres_stack_7->SetBinError(4,1.305845);
   hNCpi0inFVres_stack_7->SetBinError(5,1.482606);
   hNCpi0inFVres_stack_7->SetBinError(6,1.246938);
   hNCpi0inFVres_stack_7->SetBinError(7,1.298269);
   hNCpi0inFVres_stack_7->SetBinError(8,1.321279);
   hNCpi0inFVres_stack_7->SetBinError(9,1.46896);
   hNCpi0inFVres_stack_7->SetBinError(10,1.709569);
   hNCpi0inFVres_stack_7->SetBinError(11,1.528618);
   hNCpi0inFVres_stack_7->SetBinError(12,1.88048);
   hNCpi0inFVres_stack_7->SetBinError(13,2.252154);
   hNCpi0inFVres_stack_7->SetBinError(14,2.329727);
   hNCpi0inFVres_stack_7->SetBinError(15,2.640435);
   hNCpi0inFVres_stack_7->SetBinError(16,3.135059);
   hNCpi0inFVres_stack_7->SetBinError(17,3.357313);
   hNCpi0inFVres_stack_7->SetBinError(18,3.718889);
   hNCpi0inFVres_stack_7->SetBinError(19,4.381531);
   hNCpi0inFVres_stack_7->SetBinError(20,5.148694);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.552671);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.59896);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.516072);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.504215);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.836995);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.715899);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.11611);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.895071);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.874224);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.892476);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.478844);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.105066);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.82378);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.646981);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.014836);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.91134);
   hNCpi0inFVdis_stack_8->SetBinContent(17,17.28519);
   hNCpi0inFVdis_stack_8->SetBinContent(18,24.56627);
   hNCpi0inFVdis_stack_8->SetBinContent(19,34.34581);
   hNCpi0inFVdis_stack_8->SetBinContent(20,60.08134);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6644038);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.910765);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4924622);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8316522);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3950004);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3308053);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6938878);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5855192);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5395701);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5079773);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4844125);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8102089);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7816244);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7575725);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.876756);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.337859);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.413831);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.762294);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.939203);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.733538);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09545146);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0514606);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1290437);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,7.525896);
   hCCpi0inFV_stack_10->SetBinContent(2,6.583295);
   hCCpi0inFV_stack_10->SetBinContent(3,5.625052);
   hCCpi0inFV_stack_10->SetBinContent(4,4.106273);
   hCCpi0inFV_stack_10->SetBinContent(5,7.582063);
   hCCpi0inFV_stack_10->SetBinContent(6,5.96523);
   hCCpi0inFV_stack_10->SetBinContent(7,4.087476);
   hCCpi0inFV_stack_10->SetBinContent(8,6.076638);
   hCCpi0inFV_stack_10->SetBinContent(9,5.671544);
   hCCpi0inFV_stack_10->SetBinContent(10,7.434137);
   hCCpi0inFV_stack_10->SetBinContent(11,8.996027);
   hCCpi0inFV_stack_10->SetBinContent(12,8.751129);
   hCCpi0inFV_stack_10->SetBinContent(13,13.77819);
   hCCpi0inFV_stack_10->SetBinContent(14,13.14433);
   hCCpi0inFV_stack_10->SetBinContent(15,17.21216);
   hCCpi0inFV_stack_10->SetBinContent(16,26.01001);
   hCCpi0inFV_stack_10->SetBinContent(17,36.81415);
   hCCpi0inFV_stack_10->SetBinContent(18,40.31586);
   hCCpi0inFV_stack_10->SetBinContent(19,65.95573);
   hCCpi0inFV_stack_10->SetBinContent(20,100.5016);
   hCCpi0inFV_stack_10->SetBinError(1,1.352918);
   hCCpi0inFV_stack_10->SetBinError(2,1.261884);
   hCCpi0inFV_stack_10->SetBinError(3,1.161279);
   hCCpi0inFV_stack_10->SetBinError(4,1.000664);
   hCCpi0inFV_stack_10->SetBinError(5,1.31589);
   hCCpi0inFV_stack_10->SetBinError(6,1.210079);
   hCCpi0inFV_stack_10->SetBinError(7,1.026961);
   hCCpi0inFV_stack_10->SetBinError(8,1.293611);
   hCCpi0inFV_stack_10->SetBinError(9,1.143501);
   hCCpi0inFV_stack_10->SetBinError(10,1.360581);
   hCCpi0inFV_stack_10->SetBinError(11,1.468374);
   hCCpi0inFV_stack_10->SetBinError(12,1.468924);
   hCCpi0inFV_stack_10->SetBinError(13,1.89355);
   hCCpi0inFV_stack_10->SetBinError(14,1.820196);
   hCCpi0inFV_stack_10->SetBinError(15,2.107615);
   hCCpi0inFV_stack_10->SetBinError(16,2.533667);
   hCCpi0inFV_stack_10->SetBinError(17,3.087525);
   hCCpi0inFV_stack_10->SetBinError(18,3.162219);
   hCCpi0inFV_stack_10->SetBinError(19,4.076878);
   hCCpi0inFV_stack_10->SetBinError(20,4.981794);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.739576);
   hNCinFV_stack_11->SetBinContent(2,3.747921);
   hNCinFV_stack_11->SetBinContent(3,3.773458);
   hNCinFV_stack_11->SetBinContent(4,2.324548);
   hNCinFV_stack_11->SetBinContent(5,3.698127);
   hNCinFV_stack_11->SetBinContent(6,1.865901);
   hNCinFV_stack_11->SetBinContent(7,2.441823);
   hNCinFV_stack_11->SetBinContent(8,1.646686);
   hNCinFV_stack_11->SetBinContent(9,4.528349);
   hNCinFV_stack_11->SetBinContent(10,2.825368);
   hNCinFV_stack_11->SetBinContent(11,3.222439);
   hNCinFV_stack_11->SetBinContent(12,4.932987);
   hNCinFV_stack_11->SetBinContent(13,4.43975);
   hNCinFV_stack_11->SetBinContent(14,5.994785);
   hNCinFV_stack_11->SetBinContent(15,7.881007);
   hNCinFV_stack_11->SetBinContent(16,13.54391);
   hNCinFV_stack_11->SetBinContent(17,11.95699);
   hNCinFV_stack_11->SetBinContent(18,20.86776);
   hNCinFV_stack_11->SetBinContent(19,31.2706);
   hNCinFV_stack_11->SetBinContent(20,62.69485);
   hNCinFV_stack_11->SetBinError(1,0.9400014);
   hNCinFV_stack_11->SetBinError(2,0.9714588);
   hNCinFV_stack_11->SetBinError(3,1.075895);
   hNCinFV_stack_11->SetBinError(4,0.8263193);
   hNCinFV_stack_11->SetBinError(5,0.9565598);
   hNCinFV_stack_11->SetBinError(6,0.6302764);
   hNCinFV_stack_11->SetBinError(7,0.8133599);
   hNCinFV_stack_11->SetBinError(8,0.8379765);
   hNCinFV_stack_11->SetBinError(9,1.12966);
   hNCinFV_stack_11->SetBinError(10,0.8267213);
   hNCinFV_stack_11->SetBinError(11,0.9452505);
   hNCinFV_stack_11->SetBinError(12,1.099442);
   hNCinFV_stack_11->SetBinError(13,1.046462);
   hNCinFV_stack_11->SetBinError(14,1.188673);
   hNCinFV_stack_11->SetBinError(15,1.350502);
   hNCinFV_stack_11->SetBinError(16,1.972204);
   hNCinFV_stack_11->SetBinError(17,1.691496);
   hNCinFV_stack_11->SetBinError(18,2.466818);
   hNCinFV_stack_11->SetBinError(19,2.941574);
   hNCinFV_stack_11->SetBinError(20,4.396964);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.06142);
   hnumuCCinFV_stack_12->SetBinContent(2,2.232033);
   hnumuCCinFV_stack_12->SetBinContent(3,2.477322);
   hnumuCCinFV_stack_12->SetBinContent(4,2.053982);
   hnumuCCinFV_stack_12->SetBinContent(5,2.785028);
   hnumuCCinFV_stack_12->SetBinContent(6,2.587679);
   hnumuCCinFV_stack_12->SetBinContent(7,2.288599);
   hnumuCCinFV_stack_12->SetBinContent(8,4.364749);
   hnumuCCinFV_stack_12->SetBinContent(9,4.328043);
   hnumuCCinFV_stack_12->SetBinContent(10,3.818672);
   hnumuCCinFV_stack_12->SetBinContent(11,2.382061);
   hnumuCCinFV_stack_12->SetBinContent(12,3.173325);
   hnumuCCinFV_stack_12->SetBinContent(13,8.317356);
   hnumuCCinFV_stack_12->SetBinContent(14,7.078355);
   hnumuCCinFV_stack_12->SetBinContent(15,6.696975);
   hnumuCCinFV_stack_12->SetBinContent(16,14.8432);
   hnumuCCinFV_stack_12->SetBinContent(17,12.27807);
   hnumuCCinFV_stack_12->SetBinContent(18,16.53447);
   hnumuCCinFV_stack_12->SetBinContent(19,22.86634);
   hnumuCCinFV_stack_12->SetBinContent(20,43.84953);
   hnumuCCinFV_stack_12->SetBinError(1,0.9654609);
   hnumuCCinFV_stack_12->SetBinError(2,0.8363553);
   hnumuCCinFV_stack_12->SetBinError(3,0.8045639);
   hnumuCCinFV_stack_12->SetBinError(4,0.7078105);
   hnumuCCinFV_stack_12->SetBinError(5,0.8690179);
   hnumuCCinFV_stack_12->SetBinError(6,1.12079);
   hnumuCCinFV_stack_12->SetBinError(7,1.206001);
   hnumuCCinFV_stack_12->SetBinError(8,1.873783);
   hnumuCCinFV_stack_12->SetBinError(9,1.049512);
   hnumuCCinFV_stack_12->SetBinError(10,1.154999);
   hnumuCCinFV_stack_12->SetBinError(11,0.8726338);
   hnumuCCinFV_stack_12->SetBinError(12,0.9236517);
   hnumuCCinFV_stack_12->SetBinError(13,1.607561);
   hnumuCCinFV_stack_12->SetBinError(14,1.548969);
   hnumuCCinFV_stack_12->SetBinError(15,1.344845);
   hnumuCCinFV_stack_12->SetBinError(16,3.078895);
   hnumuCCinFV_stack_12->SetBinError(17,1.818176);
   hnumuCCinFV_stack_12->SetBinError(18,2.158831);
   hnumuCCinFV_stack_12->SetBinError(19,2.426975);
   hnumuCCinFV_stack_12->SetBinError(20,3.404033);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,0.6097559);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.196905);
   hnueCCinFV_stack_13->SetBinContent(15,1.926081);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.181475);
   hnueCCinFV_stack_13->SetBinContent(18,2.525204);
   hnueCCinFV_stack_13->SetBinContent(19,2.194916);
   hnueCCinFV_stack_13->SetBinContent(20,10.84115);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.3525088);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.6198054);
   hnueCCinFV_stack_13->SetBinError(15,1.329164);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.6355789);
   hnueCCinFV_stack_13->SetBinError(18,0.9958059);
   hnueCCinFV_stack_13->SetBinError(19,0.7051348);
   hnueCCinFV_stack_13->SetBinError(20,2.390243);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__17->SetBinContent(1,57.94416);
   hmcerror__17->SetBinContent(2,45.76621);
   hmcerror__17->SetBinContent(3,44.59132);
   hmcerror__17->SetBinContent(4,42.07264);
   hmcerror__17->SetBinContent(5,45.16188);
   hmcerror__17->SetBinContent(6,41.86645);
   hmcerror__17->SetBinContent(7,35.39294);
   hmcerror__17->SetBinContent(8,47.91402);
   hmcerror__17->SetBinContent(9,57.59505);
   hmcerror__17->SetBinContent(10,56.87703);
   hmcerror__17->SetBinContent(11,63.76505);
   hmcerror__17->SetBinContent(12,81.48613);
   hmcerror__17->SetBinContent(13,101.0978);
   hmcerror__17->SetBinContent(14,123.1554);
   hmcerror__17->SetBinContent(15,146.9465);
   hmcerror__17->SetBinContent(16,202.4417);
   hmcerror__17->SetBinContent(17,239.2914);
   hmcerror__17->SetBinContent(18,294.1372);
   hmcerror__17->SetBinContent(19,419.1785);
   hmcerror__17->SetBinContent(20,649.2141);
   hmcerror__17->SetBinError(1,24.06266);
   hmcerror__17->SetBinError(2,15.57988);
   hmcerror__17->SetBinError(3,20.50952);
   hmcerror__17->SetBinError(4,15.21679);
   hmcerror__17->SetBinError(5,16.32411);
   hmcerror__17->SetBinError(6,20.85415);
   hmcerror__17->SetBinError(7,13.46544);
   hmcerror__17->SetBinError(8,18.06783);
   hmcerror__17->SetBinError(9,18.51911);
   hmcerror__17->SetBinError(10,23.29272);
   hmcerror__17->SetBinError(11,19.94862);
   hmcerror__17->SetBinError(12,25.73559);
   hmcerror__17->SetBinError(13,32.64112);
   hmcerror__17->SetBinError(14,35.87945);
   hmcerror__17->SetBinError(15,44.00447);
   hmcerror__17->SetBinError(16,58.5618);
   hmcerror__17->SetBinError(17,70.45256);
   hmcerror__17->SetBinError(18,86.10484);
   hmcerror__17->SetBinError(19,100.0447);
   hmcerror__17->SetBinError(20,166.0158);
   hmcerror__17->SetBinError(21,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3021[20] = {
   60,
   56,
   47,
   42,
   45,
   50,
   54,
   69,
   57,
   57,
   63,
   77,
   112,
   133,
   130,
   209,
   235,
   321,
   445,
   676};
   Double_t _felx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3021[20] = {
   7.8743,
   7.6127,
   6.9882,
   6.6155,
   6.8416,
   7.2025,
   7.4785,
   8.4327,
   7.679,
   7.679,
   8.0648,
   8.8995,
   10.58301,
   11.53256,
   11.40175,
   14.45683,
   15.32971,
   17.91647,
   21.09502,
   26};
   Double_t _fehx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3021[20] = {
   7.6713,
   7.4094,
   6.7839,
   6.4104,
   6.637,
   6.9985,
   7.275,
   8.2304,
   7.4757,
   7.4757,
   7.862,
   8.6976,
   10.58301,
   11.53256,
   11.40175,
   14.45683,
   15.32971,
   17.91647,
   21.09502,
   26};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(31.84605);
   Graph_Graph3021->SetMaximum(768.6616);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3022[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3022[20] = {
   0.4152733,
   0.3404231,
   0.4599443,
   0.361679,
   0.3614577,
   0.4981114,
   0.3804556,
   0.3770887,
   0.32154,
   0.4095277,
   0.3128456,
   0.3158278,
   0.3228667,
   0.2913347,
   0.2994592,
   0.2892774,
   0.2944216,
   0.292737,
   0.2386685,
   0.2557182};
   Double_t _fehx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3022[20] = {
   0.4152733,
   0.3404231,
   0.4599443,
   0.361679,
   0.3614577,
   0.4981114,
   0.3804556,
   0.3770887,
   0.32154,
   0.4095277,
   0.3128456,
   0.3158278,
   0.3228667,
   0.2913347,
   0.2994592,
   0.2892774,
   0.2944216,
   0.292737,
   0.2386685,
   0.2557182};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3023[20] = {
   0.2267899,
   0.2219457,
   0.2218002,
   0.2256049,
   0.2368046,
   0.2443466,
   0.2598874,
   0.2178802,
   0.2073503,
   0.237221,
   0.2257782,
   0.231874,
   0.2436755,
   0.2332652,
   0.2467759,
   0.2430308,
   0.2523045,
   0.2301683,
   0.2182011,
   0.2280964};
   Double_t _fehx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3023[20] = {
   0.2267899,
   0.2219457,
   0.2218002,
   0.2256049,
   0.2368046,
   0.2443466,
   0.2598874,
   0.2178802,
   0.2073503,
   0.237221,
   0.2257782,
   0.231874,
   0.2436755,
   0.2332652,
   0.2467759,
   0.2430308,
   0.2523045,
   0.2301683,
   0.2182011,
   0.2280964};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3024[20] = {
   1.03548,
   1.22361,
   1.054017,
   0.9982736,
   0.9964156,
   1.194274,
   1.525728,
   1.44008,
   0.9896683,
   1.002162,
   0.9880021,
   0.9449461,
   1.107838,
   1.079936,
   0.884676,
   1.032396,
   0.9820662,
   1.091327,
   1.0616,
   1.041259};
   Double_t _felx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3024[20] = {
   0.1358946,
   0.1663389,
   0.1567166,
   0.15724,
   0.1514906,
   0.1720351,
   0.2112992,
   0.1759965,
   0.1333274,
   0.1350106,
   0.1264768,
   0.1092149,
   0.1046808,
   0.09364234,
   0.07759122,
   0.07141233,
   0.06406293,
   0.06091196,
   0.05032468,
   0.04004842};
   Double_t _fehx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3024[20] = {
   0.1323912,
   0.1618967,
   0.152135,
   0.1523651,
   0.1469602,
   0.1671625,
   0.2055494,
   0.1717744,
   0.1297976,
   0.1314362,
   0.1232964,
   0.1067372,
   0.1046808,
   0.09364234,
   0.07759122,
   0.07141233,
   0.06406293,
   0.06091196,
   0.05032468,
   0.04004842};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.7146655);
   Graph_Graph3024->SetMaximum(1.823697);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
