#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 21:57:08 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-5.261038,56.41026,581.7601);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__7->SetBinContent(1,263.0519);
   hmc__7->SetBinContent(2,74.07642);
   hmc__7->SetBinContent(3,88.67482);
   hmc__7->SetBinContent(4,81.74918);
   hmc__7->SetBinContent(5,70.32296);
   hmc__7->SetBinContent(6,63.4543);
   hmc__7->SetBinContent(7,64.25133);
   hmc__7->SetBinContent(8,67.35419);
   hmc__7->SetBinContent(9,60.4955);
   hmc__7->SetBinContent(10,60.52697);
   hmc__7->SetBinContent(11,51.44451);
   hmc__7->SetBinContent(12,52.56136);
   hmc__7->SetBinContent(13,45.02837);
   hmc__7->SetBinContent(14,40.23337);
   hmc__7->SetBinContent(15,33.13769);
   hmc__7->SetBinContent(16,30.40853);
   hmc__7->SetBinContent(17,37.56762);
   hmc__7->SetBinContent(18,25.23924);
   hmc__7->SetBinContent(19,27.76126);
   hmc__7->SetBinContent(20,24.7438);
   hmc__7->SetBinContent(21,332.0701);
   hmc__7->SetBinError(1,58.29823);
   hmc__7->SetBinError(2,29.94148);
   hmc__7->SetBinError(3,26.38893);
   hmc__7->SetBinError(4,25.94408);
   hmc__7->SetBinError(5,24.50254);
   hmc__7->SetBinError(6,22.52301);
   hmc__7->SetBinError(7,19.51577);
   hmc__7->SetBinError(8,21.23001);
   hmc__7->SetBinError(9,20.10574);
   hmc__7->SetBinError(10,19.62407);
   hmc__7->SetBinError(11,18.27325);
   hmc__7->SetBinError(12,19.92977);
   hmc__7->SetBinError(13,18.35645);
   hmc__7->SetBinError(14,20.24883);
   hmc__7->SetBinError(15,13.4574);
   hmc__7->SetBinError(16,15.30736);
   hmc__7->SetBinError(17,17.64504);
   hmc__7->SetBinError(18,18.12554);
   hmc__7->SetBinError(19,15.80946);
   hmc__7->SetBinError(20,10.94304);
   hmc__7->SetBinError(21,65.53233);
   hmc__7->SetMinimum(-5.261038);
   hmc__7->SetMaximum(552.409);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,50);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(276.2045);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,11.73352);
   hbadmatch_stack_1->SetBinContent(2,1.461991);
   hbadmatch_stack_1->SetBinContent(3,2.711734);
   hbadmatch_stack_1->SetBinContent(4,2.540874);
   hbadmatch_stack_1->SetBinContent(5,1.29435);
   hbadmatch_stack_1->SetBinContent(6,1.594009);
   hbadmatch_stack_1->SetBinContent(7,1.706486);
   hbadmatch_stack_1->SetBinContent(8,0.4508327);
   hbadmatch_stack_1->SetBinContent(9,1.682602);
   hbadmatch_stack_1->SetBinContent(10,3.070902);
   hbadmatch_stack_1->SetBinContent(11,0.3252394);
   hbadmatch_stack_1->SetBinContent(12,0.5509332);
   hbadmatch_stack_1->SetBinContent(13,1.421991);
   hbadmatch_stack_1->SetBinContent(14,2.226488);
   hbadmatch_stack_1->SetBinContent(15,1.02801);
   hbadmatch_stack_1->SetBinContent(16,0.9615706);
   hbadmatch_stack_1->SetBinContent(17,1.735542);
   hbadmatch_stack_1->SetBinContent(18,1.586132);
   hbadmatch_stack_1->SetBinContent(19,1.331891);
   hbadmatch_stack_1->SetBinContent(20,0.6946292);
   hbadmatch_stack_1->SetBinContent(21,13.91944);
   hbadmatch_stack_1->SetBinError(1,2.133701);
   hbadmatch_stack_1->SetBinError(2,0.6188428);
   hbadmatch_stack_1->SetBinError(3,0.8075643);
   hbadmatch_stack_1->SetBinError(4,0.9016928);
   hbadmatch_stack_1->SetBinError(5,0.597972);
   hbadmatch_stack_1->SetBinError(6,0.6132187);
   hbadmatch_stack_1->SetBinError(7,0.7276679);
   hbadmatch_stack_1->SetBinError(8,0.3213605);
   hbadmatch_stack_1->SetBinError(9,0.6019294);
   hbadmatch_stack_1->SetBinError(10,0.9082985);
   hbadmatch_stack_1->SetBinError(11,0.2349795);
   hbadmatch_stack_1->SetBinError(12,0.3259017);
   hbadmatch_stack_1->SetBinError(13,0.6727041);
   hbadmatch_stack_1->SetBinError(14,0.8585286);
   hbadmatch_stack_1->SetBinError(15,0.5298636);
   hbadmatch_stack_1->SetBinError(16,0.5262177);
   hbadmatch_stack_1->SetBinError(17,0.7193723);
   hbadmatch_stack_1->SetBinError(18,0.7750337);
   hbadmatch_stack_1->SetBinError(19,0.5193985);
   hbadmatch_stack_1->SetBinError(20,0.4912807);
   hbadmatch_stack_1->SetBinError(21,1.970323);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,58.90533);
   hext_stack_2->SetBinContent(2,11.46527);
   hext_stack_2->SetBinContent(3,18.45242);
   hext_stack_2->SetBinContent(4,10.58146);
   hext_stack_2->SetBinContent(5,8.682573);
   hext_stack_2->SetBinContent(6,9.498542);
   hext_stack_2->SetBinContent(7,9.629814);
   hext_stack_2->SetBinContent(8,10.98088);
   hext_stack_2->SetBinContent(9,7.850605);
   hext_stack_2->SetBinContent(10,10.65649);
   hext_stack_2->SetBinContent(11,9.413568);
   hext_stack_2->SetBinContent(12,9.608273);
   hext_stack_2->SetBinContent(13,8.250023);
   hext_stack_2->SetBinContent(14,5.669206);
   hext_stack_2->SetBinContent(15,7.594048);
   hext_stack_2->SetBinContent(16,3.972198);
   hext_stack_2->SetBinContent(17,6.616447);
   hext_stack_2->SetBinContent(18,4.856008);
   hext_stack_2->SetBinContent(19,3.737183);
   hext_stack_2->SetBinContent(20,6.132056);
   hext_stack_2->SetBinContent(21,65.03304);
   hext_stack_2->SetBinError(1,5.305036);
   hext_stack_2->SetBinError(2,2.355438);
   hext_stack_2->SetBinError(3,3.154406);
   hext_stack_2->SetBinError(4,2.256386);
   hext_stack_2->SetBinError(5,1.840594);
   hext_stack_2->SetBinError(6,1.839051);
   hext_stack_2->SetBinError(7,2.04254);
   hext_stack_2->SetBinError(8,2.336194);
   hext_stack_2->SetBinError(9,1.8233);
   hext_stack_2->SetBinError(10,2.313561);
   hext_stack_2->SetBinError(11,1.91268);
   hext_stack_2->SetBinError(12,2.185309);
   hext_stack_2->SetBinError(13,1.921184);
   hext_stack_2->SetBinError(14,1.564185);
   hext_stack_2->SetBinError(15,1.918771);
   hext_stack_2->SetBinError(16,1.288106);
   hext_stack_2->SetBinError(17,1.797459);
   hext_stack_2->SetBinError(18,1.454658);
   hext_stack_2->SetBinError(19,1.188642);
   hext_stack_2->SetBinError(20,1.772165);
   hext_stack_2->SetBinError(21,5.460627);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,6.021008);
   hdirt_stack_3->SetBinContent(2,1.17687);
   hdirt_stack_3->SetBinContent(3,0.238199);
   hdirt_stack_3->SetBinContent(4,1.398315);
   hdirt_stack_3->SetBinContent(5,2.113797);
   hdirt_stack_3->SetBinContent(6,0.5821506);
   hdirt_stack_3->SetBinContent(7,0.5373625);
   hdirt_stack_3->SetBinContent(8,1.858555);
   hdirt_stack_3->SetBinContent(9,1.152633);
   hdirt_stack_3->SetBinContent(10,0.7828965);
   hdirt_stack_3->SetBinContent(11,0.3797361);
   hdirt_stack_3->SetBinContent(12,0.7914401);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5638119);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.3569671);
   hdirt_stack_3->SetBinContent(18,0.165479);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(21,4.019176);
   hdirt_stack_3->SetBinError(1,1.483971);
   hdirt_stack_3->SetBinError(2,0.5462043);
   hdirt_stack_3->SetBinError(3,0.238199);
   hdirt_stack_3->SetBinError(4,0.7157756);
   hdirt_stack_3->SetBinError(5,0.8394207);
   hdirt_stack_3->SetBinError(6,0.3415702);
   hdirt_stack_3->SetBinError(7,0.4224891);
   hdirt_stack_3->SetBinError(8,0.6875976);
   hdirt_stack_3->SetBinError(9,0.6018102);
   hdirt_stack_3->SetBinError(10,0.4525189);
   hdirt_stack_3->SetBinError(11,0.2716338);
   hdirt_stack_3->SetBinError(12,0.3607976);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4029034);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.258803);
   hdirt_stack_3->SetBinError(18,0.165479);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(21,1.105076);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,52.86112);
   houtFV_stack_4->SetBinContent(2,14.31637);
   houtFV_stack_4->SetBinContent(3,14.99419);
   houtFV_stack_4->SetBinContent(4,15.02201);
   houtFV_stack_4->SetBinContent(5,12.99177);
   houtFV_stack_4->SetBinContent(6,11.2371);
   houtFV_stack_4->SetBinContent(7,12.28995);
   houtFV_stack_4->SetBinContent(8,12.36941);
   houtFV_stack_4->SetBinContent(9,13.27244);
   houtFV_stack_4->SetBinContent(10,9.161013);
   houtFV_stack_4->SetBinContent(11,8.351031);
   houtFV_stack_4->SetBinContent(12,12.34508);
   houtFV_stack_4->SetBinContent(13,7.97549);
   houtFV_stack_4->SetBinContent(14,6.995077);
   houtFV_stack_4->SetBinContent(15,5.379692);
   houtFV_stack_4->SetBinContent(16,5.879234);
   houtFV_stack_4->SetBinContent(17,9.549079);
   houtFV_stack_4->SetBinContent(18,2.941187);
   houtFV_stack_4->SetBinContent(19,9.994534);
   houtFV_stack_4->SetBinContent(20,5.17674);
   houtFV_stack_4->SetBinContent(21,65.58487);
   houtFV_stack_4->SetBinError(1,3.728795);
   houtFV_stack_4->SetBinError(2,1.896028);
   houtFV_stack_4->SetBinError(3,2.237385);
   houtFV_stack_4->SetBinError(4,2.065318);
   houtFV_stack_4->SetBinError(5,1.809047);
   houtFV_stack_4->SetBinError(6,1.640744);
   houtFV_stack_4->SetBinError(7,1.869975);
   houtFV_stack_4->SetBinError(8,1.725899);
   houtFV_stack_4->SetBinError(9,1.813559);
   houtFV_stack_4->SetBinError(10,1.468157);
   houtFV_stack_4->SetBinError(11,1.485104);
   houtFV_stack_4->SetBinError(12,1.811757);
   houtFV_stack_4->SetBinError(13,1.467351);
   houtFV_stack_4->SetBinError(14,1.359994);
   houtFV_stack_4->SetBinError(15,1.095037);
   houtFV_stack_4->SetBinError(16,1.19909);
   houtFV_stack_4->SetBinError(17,1.655612);
   houtFV_stack_4->SetBinError(18,0.8197296);
   houtFV_stack_4->SetBinError(19,1.621178);
   houtFV_stack_4->SetBinError(20,1.114458);
   houtFV_stack_4->SetBinError(21,4.11921);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.552088);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7833049);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6661314);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.826382);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.155171);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9941427);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7170521);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2782724);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4109454);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4828555);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4526986);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8173921);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7549598);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5781115);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1334263);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4693745);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2008912);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.148629);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4404438);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2363769);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.700139);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6476781);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3215414);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2404614);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3852733);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4777559);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2908597);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2527529);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1242192);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1749172);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2195002);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2549383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3586556);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2411888);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2386696);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.0615567);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2172644);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1396865);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.09657665);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3050221);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1465707);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6071447);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1991104);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2050235);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08105171);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05585749);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1458081);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03347047);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05495516);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03873478);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08272377);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.09357945);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.09334777);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6507078);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1150928);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1022175);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0456019);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03225289);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1294588);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0202701);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03172866);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03000036);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04975943);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05167104);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06658219);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3234816);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.88839);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.69904);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.33651);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.26891);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.05021);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.24694);
   hNCpi0inFVres_stack_7->SetBinContent(7,12.40495);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.27656);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.93817);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.447758);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.297732);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.036138);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.732514);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.713739);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.658497);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.352188);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.712294);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.377823);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.650886);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.526157);
   hNCpi0inFVres_stack_7->SetBinContent(21,31.60991);
   hNCpi0inFVres_stack_7->SetBinError(1,1.760381);
   hNCpi0inFVres_stack_7->SetBinError(2,1.036789);
   hNCpi0inFVres_stack_7->SetBinError(3,1.213134);
   hNCpi0inFVres_stack_7->SetBinError(4,1.291412);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9667727);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9776961);
   hNCpi0inFVres_stack_7->SetBinError(7,1.157605);
   hNCpi0inFVres_stack_7->SetBinError(8,1.06309);
   hNCpi0inFVres_stack_7->SetBinError(9,1.112921);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9802916);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8047241);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7940624);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8752346);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7578035);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9350763);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5584105);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7187661);
   hNCpi0inFVres_stack_7->SetBinError(18,0.52569);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4527659);
   hNCpi0inFVres_stack_7->SetBinError(20,0.412791);
   hNCpi0inFVres_stack_7->SetBinError(21,1.842464);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.503976);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.964767);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.206481);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.623461);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.879699);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.094862);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.912658);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.448313);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.430263);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.520378);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.350154);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.354353);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.026353);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.090519);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.469662);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9064426);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.153753);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.393957);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8912369);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.083577);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.64381);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8041167);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5956367);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8469049);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6160247);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.750755);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7474522);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5723066);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7394244);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4791532);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5496324);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5129176);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9465142);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8148246);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5092444);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7918825);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2357092);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2665444);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4723837);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5080195);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3842375);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.389303);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,43.63812);
   hCCpi0inFV_stack_10->SetBinContent(2,14.32587);
   hCCpi0inFV_stack_10->SetBinContent(3,17.4401);
   hCCpi0inFV_stack_10->SetBinContent(4,18.43754);
   hCCpi0inFV_stack_10->SetBinContent(5,14.35054);
   hCCpi0inFV_stack_10->SetBinContent(6,14.21104);
   hCCpi0inFV_stack_10->SetBinContent(7,15.41438);
   hCCpi0inFV_stack_10->SetBinContent(8,15.8075);
   hCCpi0inFV_stack_10->SetBinContent(9,13.10568);
   hCCpi0inFV_stack_10->SetBinContent(10,16.96591);
   hCCpi0inFV_stack_10->SetBinContent(11,11.08866);
   hCCpi0inFV_stack_10->SetBinContent(12,11.43049);
   hCCpi0inFV_stack_10->SetBinContent(13,7.582209);
   hCCpi0inFV_stack_10->SetBinContent(14,10.35759);
   hCCpi0inFV_stack_10->SetBinContent(15,6.161945);
   hCCpi0inFV_stack_10->SetBinContent(16,6.690516);
   hCCpi0inFV_stack_10->SetBinContent(17,7.249489);
   hCCpi0inFV_stack_10->SetBinContent(18,5.520237);
   hCCpi0inFV_stack_10->SetBinContent(19,4.584841);
   hCCpi0inFV_stack_10->SetBinContent(20,3.577899);
   hCCpi0inFV_stack_10->SetBinContent(21,61.15535);
   hCCpi0inFV_stack_10->SetBinError(1,3.333519);
   hCCpi0inFV_stack_10->SetBinError(2,1.921092);
   hCCpi0inFV_stack_10->SetBinError(3,2.114706);
   hCCpi0inFV_stack_10->SetBinError(4,2.142477);
   hCCpi0inFV_stack_10->SetBinError(5,1.939898);
   hCCpi0inFV_stack_10->SetBinError(6,1.918191);
   hCCpi0inFV_stack_10->SetBinError(7,1.986405);
   hCCpi0inFV_stack_10->SetBinError(8,2.021233);
   hCCpi0inFV_stack_10->SetBinError(9,1.777294);
   hCCpi0inFV_stack_10->SetBinError(10,2.089018);
   hCCpi0inFV_stack_10->SetBinError(11,1.67674);
   hCCpi0inFV_stack_10->SetBinError(12,1.665831);
   hCCpi0inFV_stack_10->SetBinError(13,1.411092);
   hCCpi0inFV_stack_10->SetBinError(14,1.680091);
   hCCpi0inFV_stack_10->SetBinError(15,1.225964);
   hCCpi0inFV_stack_10->SetBinError(16,1.231364);
   hCCpi0inFV_stack_10->SetBinError(17,1.407505);
   hCCpi0inFV_stack_10->SetBinError(18,1.194104);
   hCCpi0inFV_stack_10->SetBinError(19,1.091827);
   hCCpi0inFV_stack_10->SetBinError(20,0.9554818);
   hCCpi0inFV_stack_10->SetBinError(21,3.919107);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,5.991685);
   hNCinFV_stack_11->SetBinContent(2,3.779862);
   hNCinFV_stack_11->SetBinContent(3,2.836463);
   hNCinFV_stack_11->SetBinContent(4,4.21068);
   hNCinFV_stack_11->SetBinContent(5,5.081637);
   hNCinFV_stack_11->SetBinContent(6,3.977543);
   hNCinFV_stack_11->SetBinContent(7,2.556309);
   hNCinFV_stack_11->SetBinContent(8,3.707762);
   hNCinFV_stack_11->SetBinContent(9,2.802516);
   hNCinFV_stack_11->SetBinContent(10,1.838282);
   hNCinFV_stack_11->SetBinContent(11,4.954059);
   hNCinFV_stack_11->SetBinContent(12,2.396576);
   hNCinFV_stack_11->SetBinContent(13,3.123558);
   hNCinFV_stack_11->SetBinContent(14,1.423635);
   hNCinFV_stack_11->SetBinContent(15,0.7319179);
   hNCinFV_stack_11->SetBinContent(16,1.417928);
   hNCinFV_stack_11->SetBinContent(17,1.203645);
   hNCinFV_stack_11->SetBinContent(18,1.315778);
   hNCinFV_stack_11->SetBinContent(19,0.7373331);
   hNCinFV_stack_11->SetBinContent(20,0.9815423);
   hNCinFV_stack_11->SetBinContent(21,15.1429);
   hNCinFV_stack_11->SetBinError(1,1.318469);
   hNCinFV_stack_11->SetBinError(2,0.9900688);
   hNCinFV_stack_11->SetBinError(3,0.8263555);
   hNCinFV_stack_11->SetBinError(4,1.065995);
   hNCinFV_stack_11->SetBinError(5,1.08915);
   hNCinFV_stack_11->SetBinError(6,1.028481);
   hNCinFV_stack_11->SetBinError(7,0.8776684);
   hNCinFV_stack_11->SetBinError(8,1.160292);
   hNCinFV_stack_11->SetBinError(9,0.9964626);
   hNCinFV_stack_11->SetBinError(10,0.6457882);
   hNCinFV_stack_11->SetBinError(11,1.387494);
   hNCinFV_stack_11->SetBinError(12,0.858241);
   hNCinFV_stack_11->SetBinError(13,1.022389);
   hNCinFV_stack_11->SetBinError(14,0.6233752);
   hNCinFV_stack_11->SetBinError(15,0.438694);
   hNCinFV_stack_11->SetBinError(16,0.5098062);
   hNCinFV_stack_11->SetBinError(17,0.4787717);
   hNCinFV_stack_11->SetBinError(18,0.5958433);
   hNCinFV_stack_11->SetBinError(19,0.3513647);
   hNCinFV_stack_11->SetBinError(20,0.4729019);
   hNCinFV_stack_11->SetBinError(21,2.171887);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,48.45499);
   hnumuCCinFV_stack_12->SetBinContent(2,9.898042);
   hnumuCCinFV_stack_12->SetBinContent(3,11.75554);
   hnumuCCinFV_stack_12->SetBinContent(4,9.574995);
   hnumuCCinFV_stack_12->SetBinContent(5,8.022564);
   hnumuCCinFV_stack_12->SetBinContent(6,6.925068);
   hnumuCCinFV_stack_12->SetBinContent(7,5.739841);
   hnumuCCinFV_stack_12->SetBinContent(8,6.732084);
   hnumuCCinFV_stack_12->SetBinContent(9,6.061077);
   hnumuCCinFV_stack_12->SetBinContent(10,5.311538);
   hnumuCCinFV_stack_12->SetBinContent(11,6.546815);
   hnumuCCinFV_stack_12->SetBinContent(12,3.03397);
   hnumuCCinFV_stack_12->SetBinContent(13,5.895313);
   hnumuCCinFV_stack_12->SetBinContent(14,4.324902);
   hnumuCCinFV_stack_12->SetBinContent(15,2.733382);
   hnumuCCinFV_stack_12->SetBinContent(16,5.402112);
   hnumuCCinFV_stack_12->SetBinContent(17,4.789514);
   hnumuCCinFV_stack_12->SetBinContent(18,3.535355);
   hnumuCCinFV_stack_12->SetBinContent(19,2.955119);
   hnumuCCinFV_stack_12->SetBinContent(20,3.630523);
   hnumuCCinFV_stack_12->SetBinContent(21,53.03472);
   hnumuCCinFV_stack_12->SetBinError(1,4.036695);
   hnumuCCinFV_stack_12->SetBinError(2,1.654571);
   hnumuCCinFV_stack_12->SetBinError(3,2.73167);
   hnumuCCinFV_stack_12->SetBinError(4,1.575818);
   hnumuCCinFV_stack_12->SetBinError(5,1.648956);
   hnumuCCinFV_stack_12->SetBinError(6,1.296067);
   hnumuCCinFV_stack_12->SetBinError(7,1.36612);
   hnumuCCinFV_stack_12->SetBinError(8,1.290976);
   hnumuCCinFV_stack_12->SetBinError(9,1.343808);
   hnumuCCinFV_stack_12->SetBinError(10,1.198951);
   hnumuCCinFV_stack_12->SetBinError(11,2.199733);
   hnumuCCinFV_stack_12->SetBinError(12,0.8974446);
   hnumuCCinFV_stack_12->SetBinError(13,1.297857);
   hnumuCCinFV_stack_12->SetBinError(14,1.305177);
   hnumuCCinFV_stack_12->SetBinError(15,0.9133577);
   hnumuCCinFV_stack_12->SetBinError(16,1.174129);
   hnumuCCinFV_stack_12->SetBinError(17,1.212979);
   hnumuCCinFV_stack_12->SetBinError(18,0.989784);
   hnumuCCinFV_stack_12->SetBinError(19,0.87611);
   hnumuCCinFV_stack_12->SetBinError(20,1.363159);
   hnumuCCinFV_stack_12->SetBinError(21,4.203686);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(4,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(5,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,7.576046);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(4,0.2463303);
   hnueCCinFV_stack_13->SetBinError(5,0.3585277);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.2502081);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2655531);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.37477);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__8->SetBinContent(1,263.0519);
   hmcerror__8->SetBinContent(2,74.07642);
   hmcerror__8->SetBinContent(3,88.67482);
   hmcerror__8->SetBinContent(4,81.74918);
   hmcerror__8->SetBinContent(5,70.32296);
   hmcerror__8->SetBinContent(6,63.4543);
   hmcerror__8->SetBinContent(7,64.25133);
   hmcerror__8->SetBinContent(8,67.35419);
   hmcerror__8->SetBinContent(9,60.4955);
   hmcerror__8->SetBinContent(10,60.52697);
   hmcerror__8->SetBinContent(11,51.44451);
   hmcerror__8->SetBinContent(12,52.56136);
   hmcerror__8->SetBinContent(13,45.02837);
   hmcerror__8->SetBinContent(14,40.23337);
   hmcerror__8->SetBinContent(15,33.13769);
   hmcerror__8->SetBinContent(16,30.40853);
   hmcerror__8->SetBinContent(17,37.56762);
   hmcerror__8->SetBinContent(18,25.23924);
   hmcerror__8->SetBinContent(19,27.76126);
   hmcerror__8->SetBinContent(20,24.7438);
   hmcerror__8->SetBinContent(21,332.0701);
   hmcerror__8->SetBinError(1,58.29823);
   hmcerror__8->SetBinError(2,29.94148);
   hmcerror__8->SetBinError(3,26.38893);
   hmcerror__8->SetBinError(4,25.94408);
   hmcerror__8->SetBinError(5,24.50254);
   hmcerror__8->SetBinError(6,22.52301);
   hmcerror__8->SetBinError(7,19.51577);
   hmcerror__8->SetBinError(8,21.23001);
   hmcerror__8->SetBinError(9,20.10574);
   hmcerror__8->SetBinError(10,19.62407);
   hmcerror__8->SetBinError(11,18.27325);
   hmcerror__8->SetBinError(12,19.92977);
   hmcerror__8->SetBinError(13,18.35645);
   hmcerror__8->SetBinError(14,20.24883);
   hmcerror__8->SetBinError(15,13.4574);
   hmcerror__8->SetBinError(16,15.30736);
   hmcerror__8->SetBinError(17,17.64504);
   hmcerror__8->SetBinError(18,18.12554);
   hmcerror__8->SetBinError(19,15.80946);
   hmcerror__8->SetBinError(20,10.94304);
   hmcerror__8->SetBinError(21,65.53233);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3009[20] = {
   236,
   65,
   78,
   84,
   70,
   77,
   73,
   55,
   54,
   60,
   55,
   40,
   27,
   34,
   45,
   33,
   33,
   26,
   22,
   17};
   Double_t _felx3009[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3009[20] = {
   15.36229,
   8.1893,
   8.9562,
   9.2886,
   8.4925,
   8.8995,
   8.6693,
   7.546,
   7.4785,
   7.8743,
   7.546,
   6.4604,
   5.3414,
   5.9703,
   6.8416,
   5.8847,
   5.8847,
   5.2453,
   4.8417,
   4.2835};
   Double_t _fehx3009[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3009[20] = {
   15.36229,
   7.9866,
   8.7542,
   9.0869,
   8.2902,
   8.6976,
   8.4672,
   7.3425,
   7.275,
   7.6713,
   7.3425,
   6.2549,
   5.1322,
   5.7635,
   6.637,
   5.6776,
   5.6776,
   5.0358,
   4.6299,
   4.0673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,55);
   Graph_Graph3009->SetMinimum(11.44485);
   Graph_Graph3009->SetMaximum(275.2269);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1184.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.1","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 222.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.7","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 243.1","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.1","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.2","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  188.6","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  55.3","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 257.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 55.1","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 161.3","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.9","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3010[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3010[20] = {
   0.2216225,
   0.4041972,
   0.2975922,
   0.3173619,
   0.3484287,
   0.3549486,
   0.3037412,
   0.3151995,
   0.3323511,
   0.3242202,
   0.3552032,
   0.3791714,
   0.407664,
   0.5032844,
   0.4061056,
   0.5033902,
   0.4696874,
   0.7181491,
   0.5694791,
   0.442254};
   Double_t _fehx3010[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3010[20] = {
   0.2216225,
   0.4041972,
   0.2975922,
   0.3173619,
   0.3484287,
   0.3549486,
   0.3037412,
   0.3151995,
   0.3323511,
   0.3242202,
   0.3552032,
   0.3791714,
   0.407664,
   0.5032844,
   0.4061056,
   0.5033902,
   0.4696874,
   0.7181491,
   0.5694791,
   0.442254};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,55);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3011[20] = {
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
   Double_t _felx3011[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3011[20] = {
   0.1668311,
   0.242817,
   0.2229512,
   0.2282403,
   0.2422713,
   0.2359197,
   0.2279493,
   0.2080499,
   0.2151732,
   0.2334098,
   0.2357109,
   0.2053007,
   0.1989217,
   0.2246124,
   0.2248791,
   0.2238116,
   0.2105018,
   0.2047083,
   0.214239,
   0.2235677};
   Double_t _fehx3011[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3011[20] = {
   0.1668311,
   0.242817,
   0.2229512,
   0.2282403,
   0.2422713,
   0.2359197,
   0.2279493,
   0.2080499,
   0.2151732,
   0.2334098,
   0.2357109,
   0.2053007,
   0.1989217,
   0.2246124,
   0.2248791,
   0.2238116,
   0.2105018,
   0.2047083,
   0.214239,
   0.2235677};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,55);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3012[20] = {
   0.8971613,
   0.8774723,
   0.8796184,
   1.027533,
   0.9954075,
   1.213472,
   1.136163,
   0.8165787,
   0.8926284,
   0.9912936,
   1.069113,
   0.7610153,
   0.5996219,
   0.8450696,
   1.35797,
   1.085222,
   0.878416,
   1.030142,
   0.7924712,
   0.6870409};
   Double_t _felx3012[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3012[20] = {
   0.05840023,
   0.1105521,
   0.1010005,
   0.1136232,
   0.1207643,
   0.1402506,
   0.134928,
   0.1120346,
   0.1236208,
   0.1300957,
   0.1466823,
   0.1229116,
   0.118623,
   0.1483917,
   0.2064598,
   0.1935213,
   0.1566429,
   0.2078232,
   0.1744049,
   0.1731141};
   Double_t _fehx3012[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3012[20] = {
   0.05840023,
   0.1078157,
   0.0987225,
   0.1111559,
   0.1178875,
   0.1370687,
   0.1317825,
   0.1090133,
   0.1202569,
   0.1267418,
   0.1427266,
   0.1190019,
   0.113977,
   0.1432517,
   0.2002855,
   0.1867108,
   0.1511301,
   0.1995227,
   0.1667756,
   0.1643765};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,55);
   Graph_Graph3012->SetMinimum(0.3732732);
   Graph_Graph3012->SetMaximum(1.665982);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
