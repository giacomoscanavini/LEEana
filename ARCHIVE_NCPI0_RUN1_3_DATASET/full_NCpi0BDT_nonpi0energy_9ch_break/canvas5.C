#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Jun  5 00:41:47 2022) by ROOT version 6.26/00
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
   pad1->Range(-153.8462,-9.275646,1128.205,1025.691);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__13->SetBinContent(0,5.617658);
   hmc__13->SetBinContent(1,85.18179);
   hmc__13->SetBinContent(2,423.1571);
   hmc__13->SetBinContent(3,463.7823);
   hmc__13->SetBinContent(4,461.7672);
   hmc__13->SetBinContent(5,440.4204);
   hmc__13->SetBinContent(6,360.8398);
   hmc__13->SetBinContent(7,309.7652);
   hmc__13->SetBinContent(8,224.1165);
   hmc__13->SetBinContent(9,171.8417);
   hmc__13->SetBinContent(10,130.02);
   hmc__13->SetBinContent(11,94.30007);
   hmc__13->SetBinContent(12,66.66227);
   hmc__13->SetBinContent(13,47.72071);
   hmc__13->SetBinContent(14,37.75972);
   hmc__13->SetBinContent(15,24.9345);
   hmc__13->SetBinContent(16,95.71043);
   hmc__13->SetBinError(0,1.224065);
   hmc__13->SetBinError(1,20.79107);
   hmc__13->SetBinError(2,106.5524);
   hmc__13->SetBinError(3,114.7451);
   hmc__13->SetBinError(4,112.6782);
   hmc__13->SetBinError(5,106.3504);
   hmc__13->SetBinError(6,84.62039);
   hmc__13->SetBinError(7,73.67213);
   hmc__13->SetBinError(8,54.97349);
   hmc__13->SetBinError(9,44.6928);
   hmc__13->SetBinError(10,33.50891);
   hmc__13->SetBinError(11,27.86037);
   hmc__13->SetBinError(12,18.92556);
   hmc__13->SetBinError(13,17.00046);
   hmc__13->SetBinError(14,15.52897);
   hmc__13->SetBinError(15,10.05762);
   hmc__13->SetBinError(16,38.57648);
   hmc__13->SetMinimum(-9.275646);
   hmc__13->SetMaximum(973.9429);
   hmc__13->SetEntries(3396.741);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",15,0,1000);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(486.9714);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(1,0.3917402);
   hbadmatch_stack_1->SetBinContent(2,7.386874);
   hbadmatch_stack_1->SetBinContent(3,5.968009);
   hbadmatch_stack_1->SetBinContent(4,11.38594);
   hbadmatch_stack_1->SetBinContent(5,10.20259);
   hbadmatch_stack_1->SetBinContent(6,10.52093);
   hbadmatch_stack_1->SetBinContent(7,6.848902);
   hbadmatch_stack_1->SetBinContent(8,8.717913);
   hbadmatch_stack_1->SetBinContent(9,2.681084);
   hbadmatch_stack_1->SetBinContent(10,4.775935);
   hbadmatch_stack_1->SetBinContent(11,3.247747);
   hbadmatch_stack_1->SetBinContent(12,3.020468);
   hbadmatch_stack_1->SetBinContent(13,1.707518);
   hbadmatch_stack_1->SetBinContent(14,0.9801958);
   hbadmatch_stack_1->SetBinContent(15,0.5640803);
   hbadmatch_stack_1->SetBinContent(16,3.180148);
   hbadmatch_stack_1->SetBinError(1,0.2770047);
   hbadmatch_stack_1->SetBinError(2,1.611255);
   hbadmatch_stack_1->SetBinError(3,1.26474);
   hbadmatch_stack_1->SetBinError(4,2.672481);
   hbadmatch_stack_1->SetBinError(5,1.693325);
   hbadmatch_stack_1->SetBinError(6,1.628361);
   hbadmatch_stack_1->SetBinError(7,1.288501);
   hbadmatch_stack_1->SetBinError(8,1.57665);
   hbadmatch_stack_1->SetBinError(9,0.8779318);
   hbadmatch_stack_1->SetBinError(10,1.110342);
   hbadmatch_stack_1->SetBinError(11,1.013354);
   hbadmatch_stack_1->SetBinError(12,0.9120002);
   hbadmatch_stack_1->SetBinError(13,0.6663138);
   hbadmatch_stack_1->SetBinError(14,0.4383608);
   hbadmatch_stack_1->SetBinError(15,0.4072508);
   hbadmatch_stack_1->SetBinError(16,0.9130982);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,1.950793);
   hext_stack_2->SetBinContent(1,13.6742);
   hext_stack_2->SetBinContent(2,30.19302);
   hext_stack_2->SetBinContent(3,23.74097);
   hext_stack_2->SetBinContent(4,30.21903);
   hext_stack_2->SetBinContent(5,33.46452);
   hext_stack_2->SetBinContent(6,27.25032);
   hext_stack_2->SetBinContent(7,29.42889);
   hext_stack_2->SetBinContent(8,17.67953);
   hext_stack_2->SetBinContent(9,14.01302);
   hext_stack_2->SetBinContent(10,14.69212);
   hext_stack_2->SetBinContent(11,7.041816);
   hext_stack_2->SetBinContent(12,7.034636);
   hext_stack_2->SetBinContent(13,3.001777);
   hext_stack_2->SetBinContent(14,2.021405);
   hext_stack_2->SetBinContent(15,3.807795);
   hext_stack_2->SetBinContent(16,17.67953);
   hext_stack_2->SetBinError(0,0.8755137);
   hext_stack_2->SetBinError(1,2.785537);
   hext_stack_2->SetBinError(2,3.85666);
   hext_stack_2->SetBinError(3,3.429745);
   hext_stack_2->SetBinError(4,3.615928);
   hext_stack_2->SetBinError(5,4.15446);
   hext_stack_2->SetBinError(6,3.567698);
   hext_stack_2->SetBinError(7,3.908063);
   hext_stack_2->SetBinError(8,2.957828);
   hext_stack_2->SetBinError(9,2.476213);
   hext_stack_2->SetBinError(10,2.709087);
   hext_stack_2->SetBinError(11,1.76887);
   hext_stack_2->SetBinError(12,1.824857);
   hext_stack_2->SetBinError(13,1.003589);
   hext_stack_2->SetBinError(14,0.9448239);
   hext_stack_2->SetBinError(15,1.24058);
   hext_stack_2->SetBinError(16,2.957828);
   hext_stack_2->SetEntries(621);

   ci = 1491;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(1,0.4004149);
   hdirt_stack_3->SetBinContent(2,3.112217);
   hdirt_stack_3->SetBinContent(3,2.661013);
   hdirt_stack_3->SetBinContent(4,2.816835);
   hdirt_stack_3->SetBinContent(5,1.717083);
   hdirt_stack_3->SetBinContent(6,2.095777);
   hdirt_stack_3->SetBinContent(7,1.441459);
   hdirt_stack_3->SetBinContent(8,4.167396e-09);
   hdirt_stack_3->SetBinContent(9,0.5758626);
   hdirt_stack_3->SetBinContent(10,0.5429839);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.4762587);
   hdirt_stack_3->SetBinError(1,0.2964588);
   hdirt_stack_3->SetBinError(2,0.9461973);
   hdirt_stack_3->SetBinError(3,0.8748709);
   hdirt_stack_3->SetBinError(4,1.146876);
   hdirt_stack_3->SetBinError(5,0.5872109);
   hdirt_stack_3->SetBinError(6,0.7622213);
   hdirt_stack_3->SetBinError(7,0.6058115);
   hdirt_stack_3->SetBinError(8,4.167396e-09);
   hdirt_stack_3->SetBinError(9,0.3389606);
   hdirt_stack_3->SetBinError(10,0.4278058);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(16,0.3652866);
   hdirt_stack_3->SetEntries(69);

   ci = 1492;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,0.2153807);
   houtFV_stack_4->SetBinContent(1,9.275425);
   houtFV_stack_4->SetBinContent(2,31.04951);
   houtFV_stack_4->SetBinContent(3,32.88598);
   houtFV_stack_4->SetBinContent(4,29.6839);
   houtFV_stack_4->SetBinContent(5,22.77484);
   houtFV_stack_4->SetBinContent(6,22.32897);
   houtFV_stack_4->SetBinContent(7,18.70519);
   houtFV_stack_4->SetBinContent(8,13.72409);
   houtFV_stack_4->SetBinContent(9,11.13575);
   houtFV_stack_4->SetBinContent(10,4.9284);
   houtFV_stack_4->SetBinContent(11,5.034906);
   houtFV_stack_4->SetBinContent(12,4.858949);
   houtFV_stack_4->SetBinContent(13,2.535931);
   houtFV_stack_4->SetBinContent(14,2.052291);
   houtFV_stack_4->SetBinContent(15,1.125349);
   houtFV_stack_4->SetBinContent(16,4.05302);
   houtFV_stack_4->SetBinError(0,0.2153807);
   houtFV_stack_4->SetBinError(1,1.573833);
   houtFV_stack_4->SetBinError(2,2.792988);
   houtFV_stack_4->SetBinError(3,2.853626);
   houtFV_stack_4->SetBinError(4,2.709158);
   houtFV_stack_4->SetBinError(5,2.313078);
   houtFV_stack_4->SetBinError(6,2.372266);
   houtFV_stack_4->SetBinError(7,2.154184);
   houtFV_stack_4->SetBinError(8,1.949164);
   houtFV_stack_4->SetBinError(9,1.72311);
   houtFV_stack_4->SetBinError(10,1.144173);
   houtFV_stack_4->SetBinError(11,1.11017);
   houtFV_stack_4->SetBinError(12,1.160841);
   houtFV_stack_4->SetBinError(13,0.8325131);
   houtFV_stack_4->SetBinError(14,0.7073425);
   houtFV_stack_4->SetBinError(15,0.5194673);
   houtFV_stack_4->SetBinError(16,1.019635);
   houtFV_stack_4->SetEntries(931);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.505944);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9617218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.7807039);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7385219);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.57029);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4472753);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2825829);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2608584);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2713408);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2229107);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1494;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.636066);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.50968);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.273526);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.80313);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.506272);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.31014);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.743426);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5998541);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5801757);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4914984);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4633736);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5251252);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3479147);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3103701);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4471301);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2983287);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1495;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.850954);
   hNCpi0inFVres_stack_7->SetBinContent(1,46.44871);
   hNCpi0inFVres_stack_7->SetBinContent(2,255.8133);
   hNCpi0inFVres_stack_7->SetBinContent(3,263.181);
   hNCpi0inFVres_stack_7->SetBinContent(4,230.1448);
   hNCpi0inFVres_stack_7->SetBinContent(5,199.3372);
   hNCpi0inFVres_stack_7->SetBinContent(6,145.6703);
   hNCpi0inFVres_stack_7->SetBinContent(7,103.9847);
   hNCpi0inFVres_stack_7->SetBinContent(8,67.9778);
   hNCpi0inFVres_stack_7->SetBinContent(9,52.00317);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.8974);
   hNCpi0inFVres_stack_7->SetBinContent(11,21.17022);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.12203);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.553802);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.485282);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.752402);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.33761);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3098478);
   hNCpi0inFVres_stack_7->SetBinError(1,2.237216);
   hNCpi0inFVres_stack_7->SetBinError(2,5.243509);
   hNCpi0inFVres_stack_7->SetBinError(3,5.381465);
   hNCpi0inFVres_stack_7->SetBinError(4,4.886205);
   hNCpi0inFVres_stack_7->SetBinError(5,4.621746);
   hNCpi0inFVres_stack_7->SetBinError(6,3.962678);
   hNCpi0inFVres_stack_7->SetBinError(7,3.353741);
   hNCpi0inFVres_stack_7->SetBinError(8,2.699352);
   hNCpi0inFVres_stack_7->SetBinError(9,2.400665);
   hNCpi0inFVres_stack_7->SetBinError(10,1.911858);
   hNCpi0inFVres_stack_7->SetBinError(11,1.564157);
   hNCpi0inFVres_stack_7->SetBinError(12,1.216197);
   hNCpi0inFVres_stack_7->SetBinError(13,1.049757);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8252612);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6582234);
   hNCpi0inFVres_stack_7->SetBinError(16,1.184671);
   hNCpi0inFVres_stack_7->SetEntries(26811);

   ci = 1496;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.08537);
   hNCpi0inFVdis_stack_8->SetBinContent(2,34.02004);
   hNCpi0inFVdis_stack_8->SetBinContent(3,34.87398);
   hNCpi0inFVdis_stack_8->SetBinContent(4,40.2944);
   hNCpi0inFVdis_stack_8->SetBinContent(5,37.29963);
   hNCpi0inFVdis_stack_8->SetBinContent(6,28.91381);
   hNCpi0inFVdis_stack_8->SetBinContent(7,25.48642);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.5236);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.48613);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.64456);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.89682);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.5547);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.43346);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.039284);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.300266);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.733717);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6093502);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.933439);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.923853);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.074273);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.004858);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.750393);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.632065);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.418918);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.227082);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.130075);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.019028);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8305109);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6832238);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5501019);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5246312);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7729839);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1497;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1155977);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1498;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,1.320373);
   hCCpi0inFV_stack_11->SetBinContent(1,3.673326);
   hCCpi0inFV_stack_11->SetBinContent(2,17.37876);
   hCCpi0inFV_stack_11->SetBinContent(3,35.40678);
   hCCpi0inFV_stack_11->SetBinContent(4,47.76853);
   hCCpi0inFV_stack_11->SetBinContent(5,64.10934);
   hCCpi0inFV_stack_11->SetBinContent(6,65.51337);
   hCCpi0inFV_stack_11->SetBinContent(7,69.13512);
   hCCpi0inFV_stack_11->SetBinContent(8,54.08542);
   hCCpi0inFV_stack_11->SetBinContent(9,45.13619);
   hCCpi0inFV_stack_11->SetBinContent(10,35.14068);
   hCCpi0inFV_stack_11->SetBinContent(11,31.44847);
   hCCpi0inFV_stack_11->SetBinContent(12,19.21246);
   hCCpi0inFV_stack_11->SetBinContent(13,19.33726);
   hCCpi0inFV_stack_11->SetBinContent(14,14.83192);
   hCCpi0inFV_stack_11->SetBinContent(15,10.01642);
   hCCpi0inFV_stack_11->SetBinContent(16,33.46118);
   hCCpi0inFV_stack_11->SetBinError(0,0.5548703);
   hCCpi0inFV_stack_11->SetBinError(1,1.014325);
   hCCpi0inFV_stack_11->SetBinError(2,2.148013);
   hCCpi0inFV_stack_11->SetBinError(3,3.008221);
   hCCpi0inFV_stack_11->SetBinError(4,3.505259);
   hCCpi0inFV_stack_11->SetBinError(5,3.991709);
   hCCpi0inFV_stack_11->SetBinError(6,3.986953);
   hCCpi0inFV_stack_11->SetBinError(7,4.128411);
   hCCpi0inFV_stack_11->SetBinError(8,3.697668);
   hCCpi0inFV_stack_11->SetBinError(9,3.383088);
   hCCpi0inFV_stack_11->SetBinError(10,2.993169);
   hCCpi0inFV_stack_11->SetBinError(11,2.832249);
   hCCpi0inFV_stack_11->SetBinError(12,2.215238);
   hCCpi0inFV_stack_11->SetBinError(13,2.24361);
   hCCpi0inFV_stack_11->SetBinError(14,1.958409);
   hCCpi0inFV_stack_11->SetBinError(15,1.630783);
   hCCpi0inFV_stack_11->SetBinError(16,2.879419);
   hCCpi0inFV_stack_11->SetEntries(2425);

   ci = 1500;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,0.7336084);
   hNCinFV_stack_12->SetBinContent(1,1.855576);
   hNCinFV_stack_12->SetBinContent(2,12.49586);
   hNCinFV_stack_12->SetBinContent(3,17.14748);
   hNCinFV_stack_12->SetBinContent(4,18.77384);
   hNCinFV_stack_12->SetBinContent(5,22.23056);
   hNCinFV_stack_12->SetBinContent(6,15.91839);
   hNCinFV_stack_12->SetBinContent(7,16.27378);
   hNCinFV_stack_12->SetBinContent(8,11.63508);
   hNCinFV_stack_12->SetBinContent(9,12.15568);
   hNCinFV_stack_12->SetBinContent(10,7.572528);
   hNCinFV_stack_12->SetBinContent(11,4.30806);
   hNCinFV_stack_12->SetBinContent(12,2.784209);
   hNCinFV_stack_12->SetBinContent(13,2.047679);
   hNCinFV_stack_12->SetBinContent(14,4.63025);
   hNCinFV_stack_12->SetBinContent(15,2.053982);
   hNCinFV_stack_12->SetBinContent(16,5.027061);
   hNCinFV_stack_12->SetBinError(0,0.4394482);
   hNCinFV_stack_12->SetBinError(1,0.6794384);
   hNCinFV_stack_12->SetBinError(2,1.798156);
   hNCinFV_stack_12->SetBinError(3,2.095811);
   hNCinFV_stack_12->SetBinError(4,2.113065);
   hNCinFV_stack_12->SetBinError(5,2.363173);
   hNCinFV_stack_12->SetBinError(6,2.000482);
   hNCinFV_stack_12->SetBinError(7,2.030667);
   hNCinFV_stack_12->SetBinError(8,1.664699);
   hNCinFV_stack_12->SetBinError(9,1.765685);
   hNCinFV_stack_12->SetBinError(10,1.387883);
   hNCinFV_stack_12->SetBinError(11,1.02079);
   hNCinFV_stack_12->SetBinError(12,0.8323376);
   hNCinFV_stack_12->SetBinError(13,0.7358852);
   hNCinFV_stack_12->SetBinError(14,1.161497);
   hNCinFV_stack_12->SetBinError(15,0.7078105);
   hNCinFV_stack_12->SetBinError(16,1.194904);
   hNCinFV_stack_12->SetEntries(671);

   ci = 1501;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,0.3934307);
   hnumuCCinFV_stack_13->SetBinContent(1,4.621636);
   hnumuCCinFV_stack_13->SetBinContent(2,25.92216);
   hnumuCCinFV_stack_13->SetBinContent(3,42.48532);
   hnumuCCinFV_stack_13->SetBinContent(4,44.26572);
   hnumuCCinFV_stack_13->SetBinContent(5,43.10539);
   hnumuCCinFV_stack_13->SetBinContent(6,39.49844);
   hnumuCCinFV_stack_13->SetBinContent(7,33.24315);
   hnumuCCinFV_stack_13->SetBinContent(8,27.4921);
   hnumuCCinFV_stack_13->SetBinContent(9,17.33011);
   hnumuCCinFV_stack_13->SetBinContent(10,15.79422);
   hnumuCCinFV_stack_13->SetBinContent(11,11.71608);
   hnumuCCinFV_stack_13->SetBinContent(12,9.183019);
   hnumuCCinFV_stack_13->SetBinContent(13,4.503421);
   hnumuCCinFV_stack_13->SetBinContent(14,3.522368);
   hnumuCCinFV_stack_13->SetBinContent(15,1.286306);
   hnumuCCinFV_stack_13->SetBinContent(16,11.25914);
   hnumuCCinFV_stack_13->SetBinError(0,0.2781975);
   hnumuCCinFV_stack_13->SetBinError(1,1.576415);
   hnumuCCinFV_stack_13->SetBinError(2,2.736569);
   hnumuCCinFV_stack_13->SetBinError(3,4.787385);
   hnumuCCinFV_stack_13->SetBinError(4,3.853162);
   hnumuCCinFV_stack_13->SetBinError(5,4.073478);
   hnumuCCinFV_stack_13->SetBinError(6,3.534612);
   hnumuCCinFV_stack_13->SetBinError(7,3.362614);
   hnumuCCinFV_stack_13->SetBinError(8,3.123727);
   hnumuCCinFV_stack_13->SetBinError(9,2.478903);
   hnumuCCinFV_stack_13->SetBinError(10,2.124186);
   hnumuCCinFV_stack_13->SetBinError(11,1.867986);
   hnumuCCinFV_stack_13->SetBinError(12,1.636852);
   hnumuCCinFV_stack_13->SetBinError(13,1.062147);
   hnumuCCinFV_stack_13->SetBinError(14,0.9349434);
   hnumuCCinFV_stack_13->SetBinError(15,0.5543387);
   hnumuCCinFV_stack_13->SetBinError(16,1.772601);
   hnumuCCinFV_stack_13->SetEntries(1290);

   ci = 1502;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(1,0.2538659);
   hnueCCinFV_stack_14->SetBinContent(2,1.503863);
   hnueCCinFV_stack_14->SetBinContent(3,1.48579);
   hnueCCinFV_stack_14->SetBinContent(4,3.052978);
   hnueCCinFV_stack_14->SetBinContent(5,2.498121);
   hnueCCinFV_stack_14->SetBinContent(6,0.9269427);
   hnueCCinFV_stack_14->SetBinContent(7,3.281301);
   hnueCCinFV_stack_14->SetBinContent(8,1.412273);
   hnueCCinFV_stack_14->SetBinContent(9,1.473701);
   hnueCCinFV_stack_14->SetBinContent(10,0.6404051);
   hnueCCinFV_stack_14->SetBinContent(11,0.9350092);
   hnueCCinFV_stack_14->SetBinContent(12,0.4452329);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,2.279398);
   hnueCCinFV_stack_14->SetBinError(1,0.2538659);
   hnueCCinFV_stack_14->SetBinError(2,0.694582);
   hnueCCinFV_stack_14->SetBinError(3,0.5655932);
   hnueCCinFV_stack_14->SetBinError(4,1.667513);
   hnueCCinFV_stack_14->SetBinError(5,0.8184927);
   hnueCCinFV_stack_14->SetBinError(6,0.4800908);
   hnueCCinFV_stack_14->SetBinError(7,1.141424);
   hnueCCinFV_stack_14->SetBinError(8,0.6510715);
   hnueCCinFV_stack_14->SetBinError(9,0.6130848);
   hnueCCinFV_stack_14->SetBinError(10,0.3722443);
   hnueCCinFV_stack_14->SetBinError(11,0.4877731);
   hnueCCinFV_stack_14->SetBinError(12,0.3172361);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,1.268135);
   hnueCCinFV_stack_14->SetEntries(72);

   ci = 1503;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__14->SetBinContent(0,5.617658);
   hmcerror__14->SetBinContent(1,85.18179);
   hmcerror__14->SetBinContent(2,423.1571);
   hmcerror__14->SetBinContent(3,463.7823);
   hmcerror__14->SetBinContent(4,461.7672);
   hmcerror__14->SetBinContent(5,440.4204);
   hmcerror__14->SetBinContent(6,360.8398);
   hmcerror__14->SetBinContent(7,309.7652);
   hmcerror__14->SetBinContent(8,224.1165);
   hmcerror__14->SetBinContent(9,171.8417);
   hmcerror__14->SetBinContent(10,130.02);
   hmcerror__14->SetBinContent(11,94.30007);
   hmcerror__14->SetBinContent(12,66.66227);
   hmcerror__14->SetBinContent(13,47.72071);
   hmcerror__14->SetBinContent(14,37.75972);
   hmcerror__14->SetBinContent(15,24.9345);
   hmcerror__14->SetBinContent(16,95.71043);
   hmcerror__14->SetBinError(0,1.224065);
   hmcerror__14->SetBinError(1,20.79107);
   hmcerror__14->SetBinError(2,106.5524);
   hmcerror__14->SetBinError(3,114.7451);
   hmcerror__14->SetBinError(4,112.6782);
   hmcerror__14->SetBinError(5,106.3504);
   hmcerror__14->SetBinError(6,84.62039);
   hmcerror__14->SetBinError(7,73.67213);
   hmcerror__14->SetBinError(8,54.97349);
   hmcerror__14->SetBinError(9,44.6928);
   hmcerror__14->SetBinError(10,33.50891);
   hmcerror__14->SetBinError(11,27.86037);
   hmcerror__14->SetBinError(12,18.92556);
   hmcerror__14->SetBinError(13,17.00046);
   hmcerror__14->SetBinError(14,15.52897);
   hmcerror__14->SetBinError(15,10.05762);
   hmcerror__14->SetBinError(16,38.57648);
   hmcerror__14->SetEntries(3396.741);

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
   
   Double_t _fx3017[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3017[15] = {
   94,
   333,
   375,
   387,
   335,
   261,
   233,
   153,
   108,
   85,
   65,
   38,
   30,
   27,
   21};
   Double_t _felx3017[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3017[15] = {
   9.8173,
   18.24829,
   19.36492,
   19.67232,
   18.30301,
   16.15549,
   15.26434,
   12.36932,
   10.3923,
   9.3428,
   8.1893,
   6.3013,
   5.6197,
   5.3414,
   4.7354};
   Double_t _fehx3017[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3017[15] = {
   9.616,
   18.24829,
   19.36492,
   19.67232,
   18.30301,
   16.15549,
   15.26434,
   12.36932,
   10.3923,
   9.1411,
   7.9866,
   6.0955,
   5.4117,
   5.1322,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1100);
   Graph_Graph3017->SetMinimum(14.63814);
   Graph_Graph3017->SetMaximum(445.7131);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2545.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 78.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 257.3","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.5","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 212.1","F");

   ci = 1493;
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

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1451.5","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  276.9","F");

   ci = 1497;
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

   ci = 1498;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 532.2","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 151.9","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 324.0","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 18.1","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nonpi0_energy_all");
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
   
   Double_t _fx3018[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3018[15] = {
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
   Double_t _felx3018[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3018[15] = {
   0.2440789,
   0.2518034,
   0.2474116,
   0.2440152,
   0.2414747,
   0.2345096,
   0.2378322,
   0.2452898,
   0.2600813,
   0.2577212,
   0.2954438,
   0.2839022,
   0.3562492,
   0.4112576,
   0.4033616};
   Double_t _fehx3018[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3018[15] = {
   0.2440789,
   0.2518034,
   0.2474116,
   0.2440152,
   0.2414747,
   0.2345096,
   0.2378322,
   0.2452898,
   0.2600813,
   0.2577212,
   0.2954438,
   0.2839022,
   0.3562492,
   0.4112576,
   0.4033616};
   grae = new TGraphAsymmErrors(15,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
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
   Graph_Graph3018->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3019[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3019[15] = {
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
   Double_t _felx3019[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3019[15] = {
   0.2066201,
   0.2297227,
   0.2294645,
   0.2264602,
   0.2253864,
   0.2231422,
   0.2129677,
   0.2209658,
   0.2212278,
   0.2180504,
   0.2154496,
   0.2121169,
   0.2275037,
   0.2376077,
   0.2291531};
   Double_t _fehx3019[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3019[15] = {
   0.2066201,
   0.2297227,
   0.2294645,
   0.2264602,
   0.2253864,
   0.2231422,
   0.2129677,
   0.2209658,
   0.2212278,
   0.2180504,
   0.2154496,
   0.2121169,
   0.2275037,
   0.2376077,
   0.2291531};
   grae = new TGraphAsymmErrors(15,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
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
   
   Double_t _fx3020[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3020[15] = {
   1.103522,
   0.7869418,
   0.808569,
   0.8380846,
   0.7606369,
   0.7233128,
   0.7521826,
   0.6826808,
   0.6284856,
   0.6537456,
   0.689289,
   0.5700376,
   0.6286579,
   0.7150478,
   0.8422065};
   Double_t _felx3020[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3020[15] = {
   0.1152512,
   0.04312414,
   0.04175432,
   0.04260223,
   0.04155803,
   0.04477194,
   0.04927712,
   0.05519147,
   0.06047605,
   0.07185664,
   0.08684299,
   0.09452573,
   0.1177623,
   0.1414576,
   0.1899135};
   Double_t _fehx3020[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3020[15] = {
   0.112888,
   0.04312414,
   0.04175432,
   0.04260223,
   0.04155803,
   0.04477194,
   0.04927712,
   0.05519147,
   0.06047605,
   0.07030534,
   0.08469347,
   0.09143853,
   0.1134036,
   0.1359173,
   0.1813912};
   grae = new TGraphAsymmErrors(15,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1100);
   Graph_Graph3020->SetMinimum(0.401422);
   Graph_Graph3020->SetMaximum(1.2905);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",15,0,1000);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
