#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 23:12:06 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-0.1538462,-5.261959,1.128205,581.8619);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__13->SetBinContent(1,167.2514);
   hmc__13->SetBinContent(2,168.5266);
   hmc__13->SetBinContent(3,167.2349);
   hmc__13->SetBinContent(4,158.3095);
   hmc__13->SetBinContent(5,157.8233);
   hmc__13->SetBinContent(6,179.1318);
   hmc__13->SetBinContent(7,166.8467);
   hmc__13->SetBinContent(8,161.4447);
   hmc__13->SetBinContent(9,159.5052);
   hmc__13->SetBinContent(10,159.3855);
   hmc__13->SetBinContent(11,169.2182);
   hmc__13->SetBinContent(12,163.0726);
   hmc__13->SetBinContent(13,170.9108);
   hmc__13->SetBinContent(14,168.0341);
   hmc__13->SetBinContent(15,166.7595);
   hmc__13->SetBinContent(16,195.766);
   hmc__13->SetBinContent(17,192.8367);
   hmc__13->SetBinContent(18,203.8948);
   hmc__13->SetBinContent(19,224.6278);
   hmc__13->SetBinContent(20,263.098);
   hmc__13->SetBinContent(21,0.02789998);
   hmc__13->SetBinError(1,62.92459);
   hmc__13->SetBinError(2,62.9684);
   hmc__13->SetBinError(3,63.25623);
   hmc__13->SetBinError(4,60.35733);
   hmc__13->SetBinError(5,58.55181);
   hmc__13->SetBinError(6,61.84721);
   hmc__13->SetBinError(7,66.82268);
   hmc__13->SetBinError(8,59.46908);
   hmc__13->SetBinError(9,58.57443);
   hmc__13->SetBinError(10,57.52597);
   hmc__13->SetBinError(11,57.96582);
   hmc__13->SetBinError(12,62.37454);
   hmc__13->SetBinError(13,57.35054);
   hmc__13->SetBinError(14,58.23674);
   hmc__13->SetBinError(15,57.92724);
   hmc__13->SetBinError(16,68.18526);
   hmc__13->SetBinError(17,61.44105);
   hmc__13->SetBinError(18,67.79327);
   hmc__13->SetBinError(19,64.71519);
   hmc__13->SetBinError(20,80.9807);
   hmc__13->SetBinError(21,0.2454704);
   hmc__13->SetMinimum(-5.261959);
   hmc__13->SetMaximum(552.5057);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(276.2529);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,7.762208);
   hbadmatch_stack_1->SetBinContent(2,5.326301);
   hbadmatch_stack_1->SetBinContent(3,2.647423);
   hbadmatch_stack_1->SetBinContent(4,3.870128);
   hbadmatch_stack_1->SetBinContent(5,5.965017);
   hbadmatch_stack_1->SetBinContent(6,4.741511);
   hbadmatch_stack_1->SetBinContent(7,3.599254);
   hbadmatch_stack_1->SetBinContent(8,2.869767);
   hbadmatch_stack_1->SetBinContent(9,3.63173);
   hbadmatch_stack_1->SetBinContent(10,4.04071);
   hbadmatch_stack_1->SetBinContent(11,4.22284);
   hbadmatch_stack_1->SetBinContent(12,4.760811);
   hbadmatch_stack_1->SetBinContent(13,4.147544);
   hbadmatch_stack_1->SetBinContent(14,2.50807);
   hbadmatch_stack_1->SetBinContent(15,2.001158);
   hbadmatch_stack_1->SetBinContent(16,3.315526);
   hbadmatch_stack_1->SetBinContent(17,4.685225);
   hbadmatch_stack_1->SetBinContent(18,3.272067);
   hbadmatch_stack_1->SetBinContent(19,3.755303);
   hbadmatch_stack_1->SetBinContent(20,4.457483);
   hbadmatch_stack_1->SetBinError(1,1.57334);
   hbadmatch_stack_1->SetBinError(2,1.145754);
   hbadmatch_stack_1->SetBinError(3,0.8250259);
   hbadmatch_stack_1->SetBinError(4,1.017181);
   hbadmatch_stack_1->SetBinError(5,1.262141);
   hbadmatch_stack_1->SetBinError(6,1.476867);
   hbadmatch_stack_1->SetBinError(7,1.007995);
   hbadmatch_stack_1->SetBinError(8,0.8699269);
   hbadmatch_stack_1->SetBinError(9,0.9770619);
   hbadmatch_stack_1->SetBinError(10,1.11836);
   hbadmatch_stack_1->SetBinError(11,1.129923);
   hbadmatch_stack_1->SetBinError(12,1.150003);
   hbadmatch_stack_1->SetBinError(13,1.134578);
   hbadmatch_stack_1->SetBinError(14,0.8289835);
   hbadmatch_stack_1->SetBinError(15,0.6339424);
   hbadmatch_stack_1->SetBinError(16,0.9625952);
   hbadmatch_stack_1->SetBinError(17,2.097686);
   hbadmatch_stack_1->SetBinError(18,0.9487027);
   hbadmatch_stack_1->SetBinError(19,0.968226);
   hbadmatch_stack_1->SetBinError(20,1.08709);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,12.37504);
   hext_stack_2->SetBinContent(2,15.15056);
   hext_stack_2->SetBinContent(3,12.05505);
   hext_stack_2->SetBinContent(4,5.587004);
   hext_stack_2->SetBinContent(5,8.421607);
   hext_stack_2->SetBinContent(6,15.30778);
   hext_stack_2->SetBinContent(7,7.704972);
   hext_stack_2->SetBinContent(8,12.77168);
   hext_stack_2->SetBinContent(9,10.27584);
   hext_stack_2->SetBinContent(10,12.42411);
   hext_stack_2->SetBinContent(11,11.72624);
   hext_stack_2->SetBinContent(12,10.67803);
   hext_stack_2->SetBinContent(13,14.77432);
   hext_stack_2->SetBinContent(14,14.12111);
   hext_stack_2->SetBinContent(15,14.80745);
   hext_stack_2->SetBinContent(16,18.72056);
   hext_stack_2->SetBinContent(17,10.67085);
   hext_stack_2->SetBinContent(18,23.66753);
   hext_stack_2->SetBinContent(19,24.97236);
   hext_stack_2->SetBinContent(20,20.68131);
   hext_stack_2->SetBinError(1,2.35296);
   hext_stack_2->SetBinError(2,2.810324);
   hext_stack_2->SetBinError(3,2.359303);
   hext_stack_2->SetBinError(4,1.544858);
   hext_stack_2->SetBinError(5,1.89998);
   hext_stack_2->SetBinError(6,2.866933);
   hext_stack_2->SetBinError(7,1.713757);
   hext_stack_2->SetBinError(8,2.497853);
   hext_stack_2->SetBinError(9,2.172271);
   hext_stack_2->SetBinError(10,2.503237);
   hext_stack_2->SetBinError(11,2.307803);
   hext_stack_2->SetBinError(12,2.179211);
   hext_stack_2->SetBinError(13,2.720155);
   hext_stack_2->SetBinError(14,2.655871);
   hext_stack_2->SetBinError(15,2.594139);
   hext_stack_2->SetBinError(16,3.086574);
   hext_stack_2->SetBinError(17,2.224896);
   hext_stack_2->SetBinError(18,3.647426);
   hext_stack_2->SetBinError(19,3.491853);
   hext_stack_2->SetBinError(20,3.12345);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.1446783);
   hdirt_stack_3->SetBinContent(4,0.9099599);
   hdirt_stack_3->SetBinContent(5,1.487391);
   hdirt_stack_3->SetBinContent(6,0.9183763);
   hdirt_stack_3->SetBinContent(7,0.6997947);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.6536692);
   hdirt_stack_3->SetBinContent(10,0.6436294);
   hdirt_stack_3->SetBinContent(11,0.140423);
   hdirt_stack_3->SetBinContent(12,0.1652832);
   hdirt_stack_3->SetBinContent(13,0.6842157);
   hdirt_stack_3->SetBinContent(14,1.380454);
   hdirt_stack_3->SetBinContent(15,0.481239);
   hdirt_stack_3->SetBinContent(16,0.9389746);
   hdirt_stack_3->SetBinContent(17,0.7222627);
   hdirt_stack_3->SetBinContent(18,1.673804);
   hdirt_stack_3->SetBinContent(19,1.337742);
   hdirt_stack_3->SetBinContent(20,2.300924);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.1446783);
   hdirt_stack_3->SetBinError(4,0.5081362);
   hdirt_stack_3->SetBinError(5,1.013785);
   hdirt_stack_3->SetBinError(6,0.477084);
   hdirt_stack_3->SetBinError(7,0.4055569);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.3334763);
   hdirt_stack_3->SetBinError(10,0.4778222);
   hdirt_stack_3->SetBinError(11,0.1380915);
   hdirt_stack_3->SetBinError(12,0.1652832);
   hdirt_stack_3->SetBinError(13,0.3548463);
   hdirt_stack_3->SetBinError(14,0.587272);
   hdirt_stack_3->SetBinError(15,0.3416714);
   hdirt_stack_3->SetBinError(16,0.5171344);
   hdirt_stack_3->SetBinError(17,0.4353967);
   hdirt_stack_3->SetBinError(18,0.6977565);
   hdirt_stack_3->SetBinError(19,0.5880709);
   hdirt_stack_3->SetBinError(20,0.8146437);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,10.32086);
   houtFV_stack_4->SetBinContent(2,10.38247);
   houtFV_stack_4->SetBinContent(3,9.361526);
   houtFV_stack_4->SetBinContent(4,9.268146);
   houtFV_stack_4->SetBinContent(5,12.45289);
   houtFV_stack_4->SetBinContent(6,8.557767);
   houtFV_stack_4->SetBinContent(7,7.398432);
   houtFV_stack_4->SetBinContent(8,9.681007);
   houtFV_stack_4->SetBinContent(9,10.39857);
   houtFV_stack_4->SetBinContent(10,9.768477);
   houtFV_stack_4->SetBinContent(11,12.25317);
   houtFV_stack_4->SetBinContent(12,10.68632);
   houtFV_stack_4->SetBinContent(13,11.26379);
   houtFV_stack_4->SetBinContent(14,9.851883);
   houtFV_stack_4->SetBinContent(15,10.24077);
   houtFV_stack_4->SetBinContent(16,14.77784);
   houtFV_stack_4->SetBinContent(17,10.26146);
   houtFV_stack_4->SetBinContent(18,10.15333);
   houtFV_stack_4->SetBinContent(19,14.03729);
   houtFV_stack_4->SetBinContent(20,15.25187);
   houtFV_stack_4->SetBinError(1,1.589963);
   houtFV_stack_4->SetBinError(2,1.584195);
   houtFV_stack_4->SetBinError(3,1.556849);
   houtFV_stack_4->SetBinError(4,1.521734);
   houtFV_stack_4->SetBinError(5,1.771872);
   houtFV_stack_4->SetBinError(6,1.487577);
   houtFV_stack_4->SetBinError(7,1.327042);
   houtFV_stack_4->SetBinError(8,1.59787);
   houtFV_stack_4->SetBinError(9,1.572224);
   houtFV_stack_4->SetBinError(10,1.631725);
   houtFV_stack_4->SetBinError(11,1.771098);
   houtFV_stack_4->SetBinError(12,1.670999);
   houtFV_stack_4->SetBinError(13,1.70342);
   houtFV_stack_4->SetBinError(14,1.574236);
   houtFV_stack_4->SetBinError(15,1.577725);
   houtFV_stack_4->SetBinError(16,1.985076);
   houtFV_stack_4->SetBinError(17,1.581666);
   houtFV_stack_4->SetBinError(18,1.585317);
   houtFV_stack_4->SetBinError(19,1.854233);
   houtFV_stack_4->SetBinError(20,1.953427);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4450719);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9906222);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.198595);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3642206);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.088604);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6689357);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.269958);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.116504);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6546538);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9617218);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5294358);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.045422);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.631994);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.576026);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.13029);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6410357);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3586568);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1793726);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4538266);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3597403);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1962949);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2825829);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.168174);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2866851);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4791353);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4418765);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.41147);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1771895);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2652967);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,68.56503);
   hNCpi0inFVres_stack_7->SetBinContent(2,68.61869);
   hNCpi0inFVres_stack_7->SetBinContent(3,74.63581);
   hNCpi0inFVres_stack_7->SetBinContent(4,67.70363);
   hNCpi0inFVres_stack_7->SetBinContent(5,65.26428);
   hNCpi0inFVres_stack_7->SetBinContent(6,69.92831);
   hNCpi0inFVres_stack_7->SetBinContent(7,79.17491);
   hNCpi0inFVres_stack_7->SetBinContent(8,67.15205);
   hNCpi0inFVres_stack_7->SetBinContent(9,68.73177);
   hNCpi0inFVres_stack_7->SetBinContent(10,66.5934);
   hNCpi0inFVres_stack_7->SetBinContent(11,73.98163);
   hNCpi0inFVres_stack_7->SetBinContent(12,72.50661);
   hNCpi0inFVres_stack_7->SetBinContent(13,69.75491);
   hNCpi0inFVres_stack_7->SetBinContent(14,71.97383);
   hNCpi0inFVres_stack_7->SetBinContent(15,72.35994);
   hNCpi0inFVres_stack_7->SetBinContent(16,78.73082);
   hNCpi0inFVres_stack_7->SetBinContent(17,76.47818);
   hNCpi0inFVres_stack_7->SetBinContent(18,79.12042);
   hNCpi0inFVres_stack_7->SetBinContent(19,79.89546);
   hNCpi0inFVres_stack_7->SetBinContent(20,92.43575);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,2.724039);
   hNCpi0inFVres_stack_7->SetBinError(2,2.739936);
   hNCpi0inFVres_stack_7->SetBinError(3,2.892199);
   hNCpi0inFVres_stack_7->SetBinError(4,2.739723);
   hNCpi0inFVres_stack_7->SetBinError(5,2.620477);
   hNCpi0inFVres_stack_7->SetBinError(6,2.725384);
   hNCpi0inFVres_stack_7->SetBinError(7,3.005618);
   hNCpi0inFVres_stack_7->SetBinError(8,2.614642);
   hNCpi0inFVres_stack_7->SetBinError(9,2.727371);
   hNCpi0inFVres_stack_7->SetBinError(10,2.637065);
   hNCpi0inFVres_stack_7->SetBinError(11,2.826831);
   hNCpi0inFVres_stack_7->SetBinError(12,2.799485);
   hNCpi0inFVres_stack_7->SetBinError(13,2.69359);
   hNCpi0inFVres_stack_7->SetBinError(14,2.788455);
   hNCpi0inFVres_stack_7->SetBinError(15,2.787303);
   hNCpi0inFVres_stack_7->SetBinError(16,2.959269);
   hNCpi0inFVres_stack_7->SetBinError(17,2.808932);
   hNCpi0inFVres_stack_7->SetBinError(18,2.952311);
   hNCpi0inFVres_stack_7->SetBinError(19,2.92191);
   hNCpi0inFVres_stack_7->SetBinError(20,3.177527);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.4183);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.54841);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.83787);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.79653);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.25628);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.44745);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.62239);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.06015);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.37129);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.88787);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.65477);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.27106);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.3536);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.82914);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.49618);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.08318);
   hNCpi0inFVdis_stack_8->SetBinContent(17,15.05909);
   hNCpi0inFVdis_stack_8->SetBinContent(18,17.28778);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.96543);
   hNCpi0inFVdis_stack_8->SetBinContent(20,19.49254);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.221519);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.162919);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.150215);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.274408);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.136314);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.273237);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.192416);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.125387);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.189475);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.269052);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.078739);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.112925);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.140474);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.139136);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.166011);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.37558);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.282956);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.385728);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.353977);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.402941);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.04832419);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,21.88313);
   hCCpi0inFV_stack_10->SetBinContent(2,25.97002);
   hCCpi0inFV_stack_10->SetBinContent(3,27.66559);
   hCCpi0inFV_stack_10->SetBinContent(4,27.89984);
   hCCpi0inFV_stack_10->SetBinContent(5,24.0424);
   hCCpi0inFV_stack_10->SetBinContent(6,29.54909);
   hCCpi0inFV_stack_10->SetBinContent(7,28.36565);
   hCCpi0inFV_stack_10->SetBinContent(8,29.00891);
   hCCpi0inFV_stack_10->SetBinContent(9,21.36575);
   hCCpi0inFV_stack_10->SetBinContent(10,22.44804);
   hCCpi0inFV_stack_10->SetBinContent(11,25.85945);
   hCCpi0inFV_stack_10->SetBinContent(12,22.38808);
   hCCpi0inFV_stack_10->SetBinContent(13,26.99715);
   hCCpi0inFV_stack_10->SetBinContent(14,26.86119);
   hCCpi0inFV_stack_10->SetBinContent(15,20.4108);
   hCCpi0inFV_stack_10->SetBinContent(16,23.9352);
   hCCpi0inFV_stack_10->SetBinContent(17,30.10394);
   hCCpi0inFV_stack_10->SetBinContent(18,24.66176);
   hCCpi0inFV_stack_10->SetBinContent(19,28.38404);
   hCCpi0inFV_stack_10->SetBinContent(20,28.09231);
   hCCpi0inFV_stack_10->SetBinError(1,2.283255);
   hCCpi0inFV_stack_10->SetBinError(2,2.576551);
   hCCpi0inFV_stack_10->SetBinError(3,2.619064);
   hCCpi0inFV_stack_10->SetBinError(4,2.663694);
   hCCpi0inFV_stack_10->SetBinError(5,2.51957);
   hCCpi0inFV_stack_10->SetBinError(6,2.741162);
   hCCpi0inFV_stack_10->SetBinError(7,2.682811);
   hCCpi0inFV_stack_10->SetBinError(8,2.685804);
   hCCpi0inFV_stack_10->SetBinError(9,2.338076);
   hCCpi0inFV_stack_10->SetBinError(10,2.287933);
   hCCpi0inFV_stack_10->SetBinError(11,2.544705);
   hCCpi0inFV_stack_10->SetBinError(12,2.330236);
   hCCpi0inFV_stack_10->SetBinError(13,2.695899);
   hCCpi0inFV_stack_10->SetBinError(14,2.650484);
   hCCpi0inFV_stack_10->SetBinError(15,2.17405);
   hCCpi0inFV_stack_10->SetBinError(16,2.495954);
   hCCpi0inFV_stack_10->SetBinError(17,2.767479);
   hCCpi0inFV_stack_10->SetBinError(18,2.519666);
   hCCpi0inFV_stack_10->SetBinError(19,2.648711);
   hCCpi0inFV_stack_10->SetBinError(20,2.703744);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,16.27548);
   hNCinFV_stack_11->SetBinContent(2,18.36134);
   hNCinFV_stack_11->SetBinContent(3,11.0069);
   hNCinFV_stack_11->SetBinContent(4,12.45936);
   hNCinFV_stack_11->SetBinContent(5,13.49005);
   hNCinFV_stack_11->SetBinContent(6,16.9138);
   hNCinFV_stack_11->SetBinContent(7,11.24503);
   hNCinFV_stack_11->SetBinContent(8,16.00752);
   hNCinFV_stack_11->SetBinContent(9,15.13045);
   hNCinFV_stack_11->SetBinContent(10,10.74172);
   hNCinFV_stack_11->SetBinContent(11,11.83856);
   hNCinFV_stack_11->SetBinContent(12,11.48378);
   hNCinFV_stack_11->SetBinContent(13,10.56975);
   hNCinFV_stack_11->SetBinContent(14,11.03094);
   hNCinFV_stack_11->SetBinContent(15,13.68122);
   hNCinFV_stack_11->SetBinContent(16,11.77516);
   hNCinFV_stack_11->SetBinContent(17,12.84618);
   hNCinFV_stack_11->SetBinContent(18,15.38657);
   hNCinFV_stack_11->SetBinContent(19,14.60816);
   hNCinFV_stack_11->SetBinContent(20,22.99775);
   hNCinFV_stack_11->SetBinError(1,2.03083);
   hNCinFV_stack_11->SetBinError(2,2.185625);
   hNCinFV_stack_11->SetBinError(3,1.64299);
   hNCinFV_stack_11->SetBinError(4,1.767164);
   hNCinFV_stack_11->SetBinError(5,1.741904);
   hNCinFV_stack_11->SetBinError(6,2.049402);
   hNCinFV_stack_11->SetBinError(7,1.641692);
   hNCinFV_stack_11->SetBinError(8,2.077316);
   hNCinFV_stack_11->SetBinError(9,2.011245);
   hNCinFV_stack_11->SetBinError(10,1.641063);
   hNCinFV_stack_11->SetBinError(11,1.677071);
   hNCinFV_stack_11->SetBinError(12,1.699857);
   hNCinFV_stack_11->SetBinError(13,1.570254);
   hNCinFV_stack_11->SetBinError(14,1.745401);
   hNCinFV_stack_11->SetBinError(15,1.862131);
   hNCinFV_stack_11->SetBinError(16,1.687282);
   hNCinFV_stack_11->SetBinError(17,1.831136);
   hNCinFV_stack_11->SetBinError(18,1.962013);
   hNCinFV_stack_11->SetBinError(19,1.923024);
   hNCinFV_stack_11->SetBinError(20,2.435171);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,15.25832);
   hnumuCCinFV_stack_12->SetBinContent(2,10.16517);
   hnumuCCinFV_stack_12->SetBinContent(3,15.17276);
   hnumuCCinFV_stack_12->SetBinContent(4,14.89137);
   hnumuCCinFV_stack_12->SetBinContent(5,12.78611);
   hnumuCCinFV_stack_12->SetBinContent(6,16.26621);
   hnumuCCinFV_stack_12->SetBinContent(7,13.655);
   hnumuCCinFV_stack_12->SetBinContent(8,11.15669);
   hnumuCCinFV_stack_12->SetBinContent(9,15.08158);
   hnumuCCinFV_stack_12->SetBinContent(10,16.50654);
   hnumuCCinFV_stack_12->SetBinContent(11,16.34256);
   hnumuCCinFV_stack_12->SetBinContent(12,16.74942);
   hnumuCCinFV_stack_12->SetBinContent(13,17.60163);
   hnumuCCinFV_stack_12->SetBinContent(14,14.43347);
   hnumuCCinFV_stack_12->SetBinContent(15,16.31133);
   hnumuCCinFV_stack_12->SetBinContent(16,23.18187);
   hnumuCCinFV_stack_12->SetBinContent(17,29.88558);
   hnumuCCinFV_stack_12->SetBinContent(18,26.24052);
   hnumuCCinFV_stack_12->SetBinContent(19,36.00855);
   hnumuCCinFV_stack_12->SetBinContent(20,49.01062);
   hnumuCCinFV_stack_12->SetBinError(1,2.258568);
   hnumuCCinFV_stack_12->SetBinError(2,1.604836);
   hnumuCCinFV_stack_12->SetBinError(3,2.07088);
   hnumuCCinFV_stack_12->SetBinError(4,1.94594);
   hnumuCCinFV_stack_12->SetBinError(5,2.137438);
   hnumuCCinFV_stack_12->SetBinError(6,2.140546);
   hnumuCCinFV_stack_12->SetBinError(7,1.999815);
   hnumuCCinFV_stack_12->SetBinError(8,1.759153);
   hnumuCCinFV_stack_12->SetBinError(9,2.115212);
   hnumuCCinFV_stack_12->SetBinError(10,2.452585);
   hnumuCCinFV_stack_12->SetBinError(11,2.11016);
   hnumuCCinFV_stack_12->SetBinError(12,2.371804);
   hnumuCCinFV_stack_12->SetBinError(13,2.481979);
   hnumuCCinFV_stack_12->SetBinError(14,2.049202);
   hnumuCCinFV_stack_12->SetBinError(15,2.326114);
   hnumuCCinFV_stack_12->SetBinError(16,3.015305);
   hnumuCCinFV_stack_12->SetBinError(17,3.557661);
   hnumuCCinFV_stack_12->SetBinError(18,2.648191);
   hnumuCCinFV_stack_12->SetBinError(19,4.281253);
   hnumuCCinFV_stack_12->SetBinError(20,4.18779);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(2,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(4,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(5,0.7793876);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.7421971);
   hnueCCinFV_stack_13->SetBinContent(13,1.133082);
   hnueCCinFV_stack_13->SetBinContent(14,0.412125);
   hnueCCinFV_stack_13->SetBinContent(15,1.225864);
   hnueCCinFV_stack_13->SetBinContent(16,1.340903);
   hnueCCinFV_stack_13->SetBinContent(17,0.9795939);
   hnueCCinFV_stack_13->SetBinContent(18,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(19,3.535119);
   hnueCCinFV_stack_13->SetBinContent(20,6.522406);
   hnueCCinFV_stack_13->SetBinError(1,0.2486649);
   hnueCCinFV_stack_13->SetBinError(2,0.4810838);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(4,0.2781975);
   hnueCCinFV_stack_13->SetBinError(5,0.4771304);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.4287931);
   hnueCCinFV_stack_13->SetBinError(13,0.579217);
   hnueCCinFV_stack_13->SetBinError(14,0.2918342);
   hnueCCinFV_stack_13->SetBinError(15,0.5609203);
   hnueCCinFV_stack_13->SetBinError(16,0.6339163);
   hnueCCinFV_stack_13->SetBinError(17,0.5037815);
   hnueCCinFV_stack_13->SetBinError(18,0.4383608);
   hnueCCinFV_stack_13->SetBinError(19,1.453359);
   hnueCCinFV_stack_13->SetBinError(20,1.96799);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__14->SetBinContent(1,167.2514);
   hmcerror__14->SetBinContent(2,168.5266);
   hmcerror__14->SetBinContent(3,167.2349);
   hmcerror__14->SetBinContent(4,158.3095);
   hmcerror__14->SetBinContent(5,157.8233);
   hmcerror__14->SetBinContent(6,179.1318);
   hmcerror__14->SetBinContent(7,166.8467);
   hmcerror__14->SetBinContent(8,161.4447);
   hmcerror__14->SetBinContent(9,159.5052);
   hmcerror__14->SetBinContent(10,159.3855);
   hmcerror__14->SetBinContent(11,169.2182);
   hmcerror__14->SetBinContent(12,163.0726);
   hmcerror__14->SetBinContent(13,170.9108);
   hmcerror__14->SetBinContent(14,168.0341);
   hmcerror__14->SetBinContent(15,166.7595);
   hmcerror__14->SetBinContent(16,195.766);
   hmcerror__14->SetBinContent(17,192.8367);
   hmcerror__14->SetBinContent(18,203.8948);
   hmcerror__14->SetBinContent(19,224.6278);
   hmcerror__14->SetBinContent(20,263.098);
   hmcerror__14->SetBinContent(21,0.02789998);
   hmcerror__14->SetBinError(1,62.92459);
   hmcerror__14->SetBinError(2,62.9684);
   hmcerror__14->SetBinError(3,63.25623);
   hmcerror__14->SetBinError(4,60.35733);
   hmcerror__14->SetBinError(5,58.55181);
   hmcerror__14->SetBinError(6,61.84721);
   hmcerror__14->SetBinError(7,66.82268);
   hmcerror__14->SetBinError(8,59.46908);
   hmcerror__14->SetBinError(9,58.57443);
   hmcerror__14->SetBinError(10,57.52597);
   hmcerror__14->SetBinError(11,57.96582);
   hmcerror__14->SetBinError(12,62.37454);
   hmcerror__14->SetBinError(13,57.35054);
   hmcerror__14->SetBinError(14,58.23674);
   hmcerror__14->SetBinError(15,57.92724);
   hmcerror__14->SetBinError(16,68.18526);
   hmcerror__14->SetBinError(17,61.44105);
   hmcerror__14->SetBinError(18,67.79327);
   hmcerror__14->SetBinError(19,64.71519);
   hmcerror__14->SetBinError(20,80.9807);
   hmcerror__14->SetBinError(21,0.2454704);
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
   
   Double_t _fx3017[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3017[20] = {
   126,
   110,
   149,
   124,
   134,
   123,
   117,
   117,
   113,
   108,
   109,
   138,
   124,
   121,
   133,
   140,
   129,
   145,
   160,
   201};
   Double_t _felx3017[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3017[20] = {
   11.22497,
   10.48809,
   12.20656,
   11.13553,
   11.57584,
   11.09054,
   10.81665,
   10.81665,
   10.63015,
   10.3923,
   10.44031,
   11.74734,
   11.13553,
   11,
   11.53256,
   11.83216,
   11.35782,
   12.04159,
   12.64911,
   14.17745};
   Double_t _fehx3017[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3017[20] = {
   11.22497,
   10.48809,
   12.20656,
   11.13553,
   11.57584,
   11.09054,
   10.81665,
   10.81665,
   10.63015,
   10.3923,
   10.44031,
   11.74734,
   11.13553,
   11,
   11.53256,
   11.83216,
   11.35782,
   12.04159,
   12.64911,
   14.17745};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1.1);
   Graph_Graph3017->SetMinimum(85.85072);
   Graph_Graph3017->SetMaximum(226.9344);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   
   Double_t _fx3018[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3018[20] = {
   0.3762275,
   0.3736406,
   0.3782478,
   0.3812616,
   0.370996,
   0.345261,
   0.4005036,
   0.3683558,
   0.3672257,
   0.3609234,
   0.3425508,
   0.3824955,
   0.3355583,
   0.346577,
   0.3473699,
   0.3482998,
   0.3186169,
   0.3324915,
   0.2880997,
   0.3077967};
   Double_t _fehx3018[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3018[20] = {
   0.3762275,
   0.3736406,
   0.3782478,
   0.3812616,
   0.370996,
   0.345261,
   0.4005036,
   0.3683558,
   0.3672257,
   0.3609234,
   0.3425508,
   0.3824955,
   0.3355583,
   0.346577,
   0.3473699,
   0.3482998,
   0.3186169,
   0.3324915,
   0.2880997,
   0.3077967};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1.1);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
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
   
   Double_t _fx3019[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3019[20] = {
   0.3299368,
   0.3372643,
   0.3423846,
   0.3449737,
   0.3370866,
   0.3132581,
   0.3479704,
   0.3294098,
   0.3286831,
   0.3183162,
   0.3119663,
   0.3205422,
   0.3135215,
   0.3121267,
   0.3105868,
   0.3021751,
   0.2911813,
   0.2816724,
   0.2635384,
   0.254777};
   Double_t _fehx3019[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3019[20] = {
   0.3299368,
   0.3372643,
   0.3423846,
   0.3449737,
   0.3370866,
   0.3132581,
   0.3479704,
   0.3294098,
   0.3286831,
   0.3183162,
   0.3119663,
   0.3205422,
   0.3135215,
   0.3121267,
   0.3105868,
   0.3021751,
   0.2911813,
   0.2816724,
   0.2635384,
   0.254777};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1.1);
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
   
   Double_t _fx3020[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3020[20] = {
   0.7533568,
   0.6527158,
   0.8909625,
   0.7832758,
   0.8490509,
   0.6866453,
   0.7012427,
   0.7247063,
   0.7084407,
   0.6776023,
   0.6441389,
   0.8462487,
   0.7255245,
   0.7200921,
   0.7975557,
   0.7151395,
   0.6689596,
   0.7111511,
   0.7122895,
   0.763974};
   Double_t _felx3020[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3020[20] = {
   0.06711436,
   0.06223401,
   0.07299049,
   0.07034025,
   0.07334682,
   0.06191272,
   0.06482991,
   0.06699913,
   0.0666445,
   0.06520231,
   0.06169731,
   0.07203747,
   0.06515403,
   0.06546292,
   0.06915685,
   0.06044032,
   0.05889861,
   0.05905789,
   0.05631143,
   0.05388657};
   Double_t _fehx3020[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3020[20] = {
   0.06711436,
   0.06223401,
   0.07299049,
   0.07034025,
   0.07334682,
   0.06191272,
   0.06482991,
   0.06699913,
   0.0666445,
   0.06520231,
   0.06169731,
   0.07203747,
   0.06515403,
   0.06546292,
   0.06915685,
   0.06044032,
   0.05889861,
   0.05905789,
   0.05631143,
   0.05388657};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1.1);
   Graph_Graph3020->SetMinimum(0.5442904);
   Graph_Graph3020->SetMaximum(1.002104);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   TLine *line = new TLine(0,1,1,1);
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
