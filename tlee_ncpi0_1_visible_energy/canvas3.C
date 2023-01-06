#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 16:05:14 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",112,135,1200,900);
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
   pad1->Range(-153.8462,-8.183195,1128.205,904.889);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hmc__7->SetBinContent(1,115.8277);
   hmc__7->SetBinContent(2,409.1597);
   hmc__7->SetBinContent(3,368.52);
   hmc__7->SetBinContent(4,240.2769);
   hmc__7->SetBinContent(5,159.7101);
   hmc__7->SetBinContent(6,88.78305);
   hmc__7->SetBinContent(7,60.86067);
   hmc__7->SetBinContent(8,39.44394);
   hmc__7->SetBinContent(9,26.67129);
   hmc__7->SetBinContent(10,15.69009);
   hmc__7->SetBinContent(11,12.78918);
   hmc__7->SetBinContent(12,12.49793);
   hmc__7->SetBinContent(13,43.92287);
   hmc__7->SetBinError(1,33.3193);
   hmc__7->SetBinError(2,93.86849);
   hmc__7->SetBinError(3,86.82981);
   hmc__7->SetBinError(4,58.78303);
   hmc__7->SetBinError(5,39.1091);
   hmc__7->SetBinError(6,25.42075);
   hmc__7->SetBinError(7,26.91485);
   hmc__7->SetBinError(8,21.72576);
   hmc__7->SetBinError(9,17.52016);
   hmc__7->SetBinError(10,10.79547);
   hmc__7->SetBinError(11,9.097031);
   hmc__7->SetBinError(12,10.55786);
   hmc__7->SetBinError(13,17.88983);
   hmc__7->SetMinimum(-8.183195);
   hmc__7->SetMaximum(859.2354);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1000);
   hs3_stack_3->SetMinimum(-6.583386e-09);
   hs3_stack_3->SetMaximum(429.6177);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,6.300235);
   hbadmatch_stack_1->SetBinContent(2,19.54319);
   hbadmatch_stack_1->SetBinContent(3,10.38993);
   hbadmatch_stack_1->SetBinContent(4,6.993591);
   hbadmatch_stack_1->SetBinContent(5,1.609006);
   hbadmatch_stack_1->SetBinContent(6,2.925304);
   hbadmatch_stack_1->SetBinContent(7,1.947462);
   hbadmatch_stack_1->SetBinContent(8,2.07947);
   hbadmatch_stack_1->SetBinContent(9,0.4675971);
   hbadmatch_stack_1->SetBinContent(10,0.4047455);
   hbadmatch_stack_1->SetBinContent(11,0.4781666);
   hbadmatch_stack_1->SetBinContent(13,0.8904712);
   hbadmatch_stack_1->SetBinError(1,1.253092);
   hbadmatch_stack_1->SetBinError(2,2.471216);
   hbadmatch_stack_1->SetBinError(3,1.692319);
   hbadmatch_stack_1->SetBinError(4,1.377847);
   hbadmatch_stack_1->SetBinError(5,1.141197);
   hbadmatch_stack_1->SetBinError(6,0.8784684);
   hbadmatch_stack_1->SetBinError(7,0.6734268);
   hbadmatch_stack_1->SetBinError(8,0.8187951);
   hbadmatch_stack_1->SetBinError(9,0.3632582);
   hbadmatch_stack_1->SetBinError(10,0.2622958);
   hbadmatch_stack_1->SetBinError(11,0.3433827);
   hbadmatch_stack_1->SetBinError(13,0.6469496);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,27.2531);
   hext_stack_2->SetBinContent(2,74.54752);
   hext_stack_2->SetBinContent(3,65.15826);
   hext_stack_2->SetBinContent(4,34.97565);
   hext_stack_2->SetBinContent(5,29.58176);
   hext_stack_2->SetBinContent(6,10.46178);
   hext_stack_2->SetBinContent(7,11.26339);
   hext_stack_2->SetBinContent(8,7.732501);
   hext_stack_2->SetBinContent(9,4.602222);
   hext_stack_2->SetBinContent(10,2.834603);
   hext_stack_2->SetBinContent(11,1.78639);
   hext_stack_2->SetBinContent(12,4.587862);
   hext_stack_2->SetBinContent(13,12.8004);
   hext_stack_2->SetBinError(1,3.520248);
   hext_stack_2->SetBinError(2,5.882177);
   hext_stack_2->SetBinError(3,5.477384);
   hext_stack_2->SetBinError(4,4.14729);
   hext_stack_2->SetBinError(5,3.75883);
   hext_stack_2->SetBinError(6,2.057993);
   hext_stack_2->SetBinError(7,2.152222);
   hext_stack_2->SetBinError(8,2.06648);
   hext_stack_2->SetBinError(9,1.461836);
   hext_stack_2->SetBinError(10,1.106046);
   hext_stack_2->SetBinError(11,0.8039566);
   hext_stack_2->SetBinError(12,1.593539);
   hext_stack_2->SetBinError(13,2.331193);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,2.90813);
   hdirt_stack_3->SetBinContent(2,8.194418);
   hdirt_stack_3->SetBinContent(3,5.858076);
   hdirt_stack_3->SetBinContent(4,2.006593);
   hdirt_stack_3->SetBinContent(5,1.49082);
   hdirt_stack_3->SetBinContent(6,1.081354);
   hdirt_stack_3->SetBinContent(7,1.561283);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,0.3895662);
   hdirt_stack_3->SetBinError(1,0.8369775);
   hdirt_stack_3->SetBinError(2,1.461741);
   hdirt_stack_3->SetBinError(3,1.250564);
   hdirt_stack_3->SetBinError(4,0.8216973);
   hdirt_stack_3->SetBinError(5,0.6903232);
   hdirt_stack_3->SetBinError(6,0.574891);
   hdirt_stack_3->SetBinError(7,1.039681);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.3895662);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,40.6211);
   houtFV_stack_4->SetBinContent(2,108.5408);
   houtFV_stack_4->SetBinContent(3,72.42303);
   houtFV_stack_4->SetBinContent(4,37.58201);
   houtFV_stack_4->SetBinContent(5,22.80558);
   houtFV_stack_4->SetBinContent(6,9.324093);
   houtFV_stack_4->SetBinContent(7,6.846191);
   houtFV_stack_4->SetBinContent(8,3.889609);
   houtFV_stack_4->SetBinContent(9,1.225383);
   houtFV_stack_4->SetBinContent(10,1.451419);
   houtFV_stack_4->SetBinContent(11,0.5857972);
   houtFV_stack_4->SetBinContent(12,0.5669563);
   houtFV_stack_4->SetBinContent(13,2.825479);
   houtFV_stack_4->SetBinError(1,3.262436);
   houtFV_stack_4->SetBinError(2,5.326545);
   houtFV_stack_4->SetBinError(3,4.144333);
   houtFV_stack_4->SetBinError(4,3.219801);
   houtFV_stack_4->SetBinError(5,2.467157);
   houtFV_stack_4->SetBinError(6,1.6366);
   houtFV_stack_4->SetBinError(7,1.412114);
   houtFV_stack_4->SetBinError(8,1.027669);
   houtFV_stack_4->SetBinError(9,0.5905434);
   houtFV_stack_4->SetBinError(10,0.9298688);
   houtFV_stack_4->SetBinError(11,0.4195828);
   houtFV_stack_4->SetBinError(12,0.4088391);
   houtFV_stack_4->SetBinError(13,1.050453);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5372685);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.538367);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.980214);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.573706);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8545113);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.6102693);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6895616);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3704883);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2375447);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6123673);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2421334);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7555164);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9131708);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3762873);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2601539);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1933963);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3732738);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.121502);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1157753);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2939126);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1169861);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3497783);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4201961);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2733604);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1595668);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05506742);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1057439);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1107922);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1412543);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1190866);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.13329);
   hNCpi0inFVres_stack_7->SetBinContent(2,71.53112);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.7383);
   hNCpi0inFVres_stack_7->SetBinContent(4,30.33518);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.23256);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.43081);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.444165);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.854746);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.699403);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.366377);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.955604);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.265934);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.237754);
   hNCpi0inFVres_stack_7->SetBinError(1,1.579073);
   hNCpi0inFVres_stack_7->SetBinError(2,2.630552);
   hNCpi0inFVres_stack_7->SetBinError(3,2.15287);
   hNCpi0inFVres_stack_7->SetBinError(4,1.570433);
   hNCpi0inFVres_stack_7->SetBinError(5,1.177851);
   hNCpi0inFVres_stack_7->SetBinError(6,1.222009);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8946191);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5073095);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6592812);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8562356);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3570365);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6219524);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3262719);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.787876);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.24598);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.48863);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.949087);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.841117);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.527899);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.167459);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.545151);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.933314);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6232113);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.7805);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.058659);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.999798);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4634255);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.03057);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.292201);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.202545);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.063168);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9684307);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6762191);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8790203);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9057398);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2458839);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7518655);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5760279);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7433416);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02275844);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05436744);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01720841);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03140701);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,7.565766);
   hCCpi0inFV_stack_10->SetBinContent(2,56.85093);
   hCCpi0inFV_stack_10->SetBinContent(3,74.3359);
   hCCpi0inFV_stack_10->SetBinContent(4,59.86652);
   hCCpi0inFV_stack_10->SetBinContent(5,40.52926);
   hCCpi0inFV_stack_10->SetBinContent(6,26.30501);
   hCCpi0inFV_stack_10->SetBinContent(7,15.24818);
   hCCpi0inFV_stack_10->SetBinContent(8,10.66365);
   hCCpi0inFV_stack_10->SetBinContent(9,6.398563);
   hCCpi0inFV_stack_10->SetBinContent(10,4.733375);
   hCCpi0inFV_stack_10->SetBinContent(11,3.852923);
   hCCpi0inFV_stack_10->SetBinContent(12,3.219667);
   hCCpi0inFV_stack_10->SetBinContent(13,9.526157);
   hCCpi0inFV_stack_10->SetBinError(1,1.386928);
   hCCpi0inFV_stack_10->SetBinError(2,3.803465);
   hCCpi0inFV_stack_10->SetBinError(3,4.327501);
   hCCpi0inFV_stack_10->SetBinError(4,3.905744);
   hCCpi0inFV_stack_10->SetBinError(5,3.217096);
   hCCpi0inFV_stack_10->SetBinError(6,2.618949);
   hCCpi0inFV_stack_10->SetBinError(7,1.942797);
   hCCpi0inFV_stack_10->SetBinError(8,1.626476);
   hCCpi0inFV_stack_10->SetBinError(9,1.283648);
   hCCpi0inFV_stack_10->SetBinError(10,1.12743);
   hCCpi0inFV_stack_10->SetBinError(11,0.9998173);
   hCCpi0inFV_stack_10->SetBinError(12,0.962208);
   hCCpi0inFV_stack_10->SetBinError(13,1.519174);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,3.447883);
   hNCinFV_stack_11->SetBinContent(2,13.3463);
   hNCinFV_stack_11->SetBinContent(3,15.77372);
   hNCinFV_stack_11->SetBinContent(4,15.23253);
   hNCinFV_stack_11->SetBinContent(5,7.168569);
   hNCinFV_stack_11->SetBinContent(6,4.568274);
   hNCinFV_stack_11->SetBinContent(7,2.36512);
   hNCinFV_stack_11->SetBinContent(8,2.637839);
   hNCinFV_stack_11->SetBinContent(9,3.106366);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.5867651);
   hNCinFV_stack_11->SetBinContent(13,1.63806);
   hNCinFV_stack_11->SetBinError(1,0.9507511);
   hNCinFV_stack_11->SetBinError(2,1.768352);
   hNCinFV_stack_11->SetBinError(3,2.107583);
   hNCinFV_stack_11->SetBinError(4,2.083051);
   hNCinFV_stack_11->SetBinError(5,1.54822);
   hNCinFV_stack_11->SetBinError(6,1.207352);
   hNCinFV_stack_11->SetBinError(7,0.9660578);
   hNCinFV_stack_11->SetBinError(8,1.012881);
   hNCinFV_stack_11->SetBinError(9,1.078888);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3387718);
   hNCinFV_stack_11->SetBinError(13,0.6959877);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,3.133346);
   hnumuCCinFV_stack_12->SetBinContent(2,39.22136);
   hnumuCCinFV_stack_12->SetBinContent(3,51.70263);
   hnumuCCinFV_stack_12->SetBinContent(4,41.29194);
   hnumuCCinFV_stack_12->SetBinContent(5,30.98182);
   hnumuCCinFV_stack_12->SetBinContent(6,16.41998);
   hnumuCCinFV_stack_12->SetBinContent(7,8.716226);
   hnumuCCinFV_stack_12->SetBinContent(8,5.825204);
   hnumuCCinFV_stack_12->SetBinContent(9,4.394029);
   hnumuCCinFV_stack_12->SetBinContent(10,2.089865);
   hnumuCCinFV_stack_12->SetBinContent(11,2.386738);
   hnumuCCinFV_stack_12->SetBinContent(12,1.181755);
   hnumuCCinFV_stack_12->SetBinContent(13,7.012579);
   hnumuCCinFV_stack_12->SetBinError(1,0.8942327);
   hnumuCCinFV_stack_12->SetBinError(2,4.169616);
   hnumuCCinFV_stack_12->SetBinError(3,4.402241);
   hnumuCCinFV_stack_12->SetBinError(4,3.456557);
   hnumuCCinFV_stack_12->SetBinError(5,3.29195);
   hnumuCCinFV_stack_12->SetBinError(6,2.366446);
   hnumuCCinFV_stack_12->SetBinError(7,1.448837);
   hnumuCCinFV_stack_12->SetBinError(8,1.290396);
   hnumuCCinFV_stack_12->SetBinError(9,1.067925);
   hnumuCCinFV_stack_12->SetBinError(10,0.7715166);
   hnumuCCinFV_stack_12->SetBinError(11,0.7534331);
   hnumuCCinFV_stack_12->SetBinError(12,0.5433415);
   hnumuCCinFV_stack_12->SetBinError(13,1.353801);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(2,1.231182);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.597499);
   hnueCCinFV_stack_13->SetBinContent(7,2.1963);
   hnueCCinFV_stack_13->SetBinContent(8,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(10,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(11,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(12,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(13,4.379798);
   hnueCCinFV_stack_13->SetBinError(2,0.568054);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.6236562);
   hnueCCinFV_stack_13->SetBinError(7,1.611112);
   hnueCCinFV_stack_13->SetBinError(8,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,0.3152389);
   hnueCCinFV_stack_13->SetBinError(10,0.2192101);
   hnueCCinFV_stack_13->SetBinError(11,0.1529246);
   hnueCCinFV_stack_13->SetBinError(12,0.1711909);
   hnueCCinFV_stack_13->SetBinError(13,1.628734);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__8->SetBinContent(1,115.8277);
   hmcerror__8->SetBinContent(2,409.1597);
   hmcerror__8->SetBinContent(3,368.52);
   hmcerror__8->SetBinContent(4,240.2769);
   hmcerror__8->SetBinContent(5,159.7101);
   hmcerror__8->SetBinContent(6,88.78305);
   hmcerror__8->SetBinContent(7,60.86067);
   hmcerror__8->SetBinContent(8,39.44394);
   hmcerror__8->SetBinContent(9,26.67129);
   hmcerror__8->SetBinContent(10,15.69009);
   hmcerror__8->SetBinContent(11,12.78918);
   hmcerror__8->SetBinContent(12,12.49793);
   hmcerror__8->SetBinContent(13,43.92287);
   hmcerror__8->SetBinError(1,33.3193);
   hmcerror__8->SetBinError(2,93.86849);
   hmcerror__8->SetBinError(3,86.82981);
   hmcerror__8->SetBinError(4,58.78303);
   hmcerror__8->SetBinError(5,39.1091);
   hmcerror__8->SetBinError(6,25.42075);
   hmcerror__8->SetBinError(7,26.91485);
   hmcerror__8->SetBinError(8,21.72576);
   hmcerror__8->SetBinError(9,17.52016);
   hmcerror__8->SetBinError(10,10.79547);
   hmcerror__8->SetBinError(11,9.097031);
   hmcerror__8->SetBinError(12,10.55786);
   hmcerror__8->SetBinError(13,17.88983);
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
   
   Double_t _fx3009[12] = {
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
   Double_t _fy3009[12] = {
   129,
   400,
   342,
   223,
   145,
   65,
   44,
   30,
   26,
   21,
   9,
   8};
   Double_t _felx3009[12] = {
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
   Double_t _fely3009[12] = {
   11.35782,
   20,
   18.49324,
   14.93318,
   12.04159,
   8.1893,
   6.7671,
   5.6197,
   5.2453,
   4.7354,
   3.19354,
   3.0307};
   Double_t _fehx3009[12] = {
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
   Double_t _fehy3009[12] = {
   11.35782,
   20,
   18.49324,
   14.93318,
   12.04159,
   7.9866,
   6.5623,
   5.4117,
   5.0358,
   4.5229,
   2.9582,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1100);
   Graph_Graph3009->SetMinimum(4.47237);
   Graph_Graph3009->SetMaximum(461.5031);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.1/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1442.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 274.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 305.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  219.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  63.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 309.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 68.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 207.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[12] = {
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
   Double_t _fy3010[12] = {
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
   Double_t _felx3010[12] = {
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
   Double_t _fely3010[12] = {
   0.2876625,
   0.2294177,
   0.2356176,
   0.244647,
   0.2448756,
   0.2863244,
   0.4422372,
   0.550801,
   0.6568923,
   0.688044,
   0.711307,
   0.8447686};
   Double_t _fehx3010[12] = {
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
   Double_t _fehy3010[12] = {
   0.2876625,
   0.2294177,
   0.2356176,
   0.244647,
   0.2448756,
   0.2863244,
   0.4422372,
   0.550801,
   0.6568923,
   0.688044,
   0.711307,
   0.8447686};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1100);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   
   Double_t _fx3011[12] = {
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
   Double_t _fy3011[12] = {
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
   Double_t _felx3011[12] = {
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
   Double_t _fely3011[12] = {
   0.2009997,
   0.2153558,
   0.2107058,
   0.2051537,
   0.1900295,
   0.1941181,
   0.1865583,
   0.1956007,
   0.2159461,
   0.2738348,
   0.2563573,
   0.2411762};
   Double_t _fehx3011[12] = {
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
   Double_t _fehy3011[12] = {
   0.2009997,
   0.2153558,
   0.2107058,
   0.2051537,
   0.1900295,
   0.1941181,
   0.1865583,
   0.1956007,
   0.2159461,
   0.2738348,
   0.2563573,
   0.2411762};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1100);
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
   
   Double_t _fx3012[12] = {
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
   Double_t _fy3012[12] = {
   1.113723,
   0.9776133,
   0.9280365,
   0.9280959,
   0.9078953,
   0.7321217,
   0.7229628,
   0.760573,
   0.9748311,
   1.338424,
   0.70372,
   0.6401061};
   Double_t _felx3012[12] = {
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
   Double_t _fely3012[12] = {
   0.09805784,
   0.04888067,
   0.05018247,
   0.0621499,
   0.0753966,
   0.09223945,
   0.11119,
   0.1424731,
   0.1966647,
   0.3018083,
   0.2497065,
   0.2424962};
   Double_t _fehx3012[12] = {
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
   Double_t _fehy3012[12] = {
   0.09805784,
   0.04888067,
   0.05018247,
   0.0621499,
   0.0753966,
   0.08995636,
   0.107825,
   0.1371998,
   0.1888098,
   0.2882647,
   0.231305,
   0.223205};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1100);
   Graph_Graph3012->SetMinimum(0.274702);
   Graph_Graph3012->SetMaximum(1.749597);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_visible_energy_all",12,0,1000);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
