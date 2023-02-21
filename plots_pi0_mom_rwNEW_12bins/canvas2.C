#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 19:21:09 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-28.60511,1353.846,3163.123);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,653.9798);
   hmc__4->SetBinContent(2,1430.256);
   hmc__4->SetBinContent(3,1172.45);
   hmc__4->SetBinContent(4,793.196);
   hmc__4->SetBinContent(5,525.4907);
   hmc__4->SetBinContent(6,317.8613);
   hmc__4->SetBinContent(7,184.8671);
   hmc__4->SetBinContent(8,110.1675);
   hmc__4->SetBinContent(9,87.96709);
   hmc__4->SetBinContent(10,56.20507);
   hmc__4->SetBinContent(11,53.24921);
   hmc__4->SetBinContent(12,43.43119);
   hmc__4->SetBinContent(13,359.6343);
   hmc__4->SetBinError(1,141.6317);
   hmc__4->SetBinError(2,347.973);
   hmc__4->SetBinError(3,315.6443);
   hmc__4->SetBinError(4,234.8519);
   hmc__4->SetBinError(5,160.896);
   hmc__4->SetBinError(6,88.46519);
   hmc__4->SetBinError(7,48.14225);
   hmc__4->SetBinError(8,31.07567);
   hmc__4->SetBinError(9,26.20502);
   hmc__4->SetBinError(10,19.38263);
   hmc__4->SetBinError(11,21.59192);
   hmc__4->SetBinError(12,16.66135);
   hmc__4->SetBinError(13,90.40806);
   hmc__4->SetMinimum(-28.60511);
   hmc__4->SetMaximum(3003.537);
   hmc__4->SetEntries(5727.925);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1200);
   hs2_stack_2->SetMinimum(-5.219833e-10);
   hs2_stack_2->SetMaximum(1501.769);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,21.06717);
   hbadmatch_stack_1->SetBinContent(2,32.17071);
   hbadmatch_stack_1->SetBinContent(3,20.9426);
   hbadmatch_stack_1->SetBinContent(4,15.80527);
   hbadmatch_stack_1->SetBinContent(5,9.239613);
   hbadmatch_stack_1->SetBinContent(6,4.630181);
   hbadmatch_stack_1->SetBinContent(7,3.075802);
   hbadmatch_stack_1->SetBinContent(8,2.510084);
   hbadmatch_stack_1->SetBinContent(9,2.637582);
   hbadmatch_stack_1->SetBinContent(10,1.123658);
   hbadmatch_stack_1->SetBinContent(11,1.678783);
   hbadmatch_stack_1->SetBinContent(12,2.380153);
   hbadmatch_stack_1->SetBinContent(13,6.813126);
   hbadmatch_stack_1->SetBinError(1,2.526143);
   hbadmatch_stack_1->SetBinError(2,3.89554);
   hbadmatch_stack_1->SetBinError(3,2.414541);
   hbadmatch_stack_1->SetBinError(4,2.535617);
   hbadmatch_stack_1->SetBinError(5,1.45788);
   hbadmatch_stack_1->SetBinError(6,1.160027);
   hbadmatch_stack_1->SetBinError(7,0.9645751);
   hbadmatch_stack_1->SetBinError(8,0.9158402);
   hbadmatch_stack_1->SetBinError(9,0.8215721);
   hbadmatch_stack_1->SetBinError(10,0.5188295);
   hbadmatch_stack_1->SetBinError(11,0.7695064);
   hbadmatch_stack_1->SetBinError(12,0.8347937);
   hbadmatch_stack_1->SetBinError(13,1.433654);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,73.17649);
   hext_stack_2->SetBinContent(2,119.2452);
   hext_stack_2->SetBinContent(3,74.0097);
   hext_stack_2->SetBinContent(4,42.04895);
   hext_stack_2->SetBinContent(5,38.74155);
   hext_stack_2->SetBinContent(6,29.30203);
   hext_stack_2->SetBinContent(7,19.82786);
   hext_stack_2->SetBinContent(8,7.925626);
   hext_stack_2->SetBinContent(9,12.42851);
   hext_stack_2->SetBinContent(10,4.221574);
   hext_stack_2->SetBinContent(11,7.265242);
   hext_stack_2->SetBinContent(12,2.510206);
   hext_stack_2->SetBinContent(13,36.04975);
   hext_stack_2->SetBinError(1,5.976591);
   hext_stack_2->SetBinError(2,7.359629);
   hext_stack_2->SetBinError(3,5.684577);
   hext_stack_2->SetBinError(4,4.380386);
   hext_stack_2->SetBinError(5,4.219962);
   hext_stack_2->SetBinError(6,3.823378);
   hext_stack_2->SetBinError(7,2.994289);
   hext_stack_2->SetBinError(8,1.893598);
   hext_stack_2->SetBinError(9,2.530082);
   hext_stack_2->SetBinError(10,1.226034);
   hext_stack_2->SetBinError(11,1.855081);
   hext_stack_2->SetBinError(12,1.057404);
   hext_stack_2->SetBinError(13,4.317283);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,9.953386);
   hdirt_stack_3->SetBinContent(2,13.18764);
   hdirt_stack_3->SetBinContent(3,7.244577);
   hdirt_stack_3->SetBinContent(4,2.78388);
   hdirt_stack_3->SetBinContent(5,3.45982);
   hdirt_stack_3->SetBinContent(6,2.365996);
   hdirt_stack_3->SetBinContent(7,2.711983);
   hdirt_stack_3->SetBinContent(8,1.70538);
   hdirt_stack_3->SetBinContent(9,0.7819759);
   hdirt_stack_3->SetBinContent(10,0.6392631);
   hdirt_stack_3->SetBinContent(11,0.4713943);
   hdirt_stack_3->SetBinContent(12,0.9115412);
   hdirt_stack_3->SetBinContent(13,3.047819);
   hdirt_stack_3->SetBinError(1,1.619533);
   hdirt_stack_3->SetBinError(2,2.067394);
   hdirt_stack_3->SetBinError(3,1.305436);
   hdirt_stack_3->SetBinError(4,0.7841759);
   hdirt_stack_3->SetBinError(5,0.9722145);
   hdirt_stack_3->SetBinError(6,0.813463);
   hdirt_stack_3->SetBinError(7,0.8574082);
   hdirt_stack_3->SetBinError(8,1.173634);
   hdirt_stack_3->SetBinError(9,0.4844357);
   hdirt_stack_3->SetBinError(10,0.4709666);
   hdirt_stack_3->SetBinError(11,0.3341719);
   hdirt_stack_3->SetBinError(12,0.5597697);
   hdirt_stack_3->SetBinError(13,0.9804855);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,70.69051);
   houtFV_stack_4->SetBinContent(2,85.40139);
   houtFV_stack_4->SetBinContent(3,70.81436);
   houtFV_stack_4->SetBinContent(4,47.46029);
   houtFV_stack_4->SetBinContent(5,28.14204);
   houtFV_stack_4->SetBinContent(6,18.21893);
   houtFV_stack_4->SetBinContent(7,15.60581);
   houtFV_stack_4->SetBinContent(8,4.93439);
   houtFV_stack_4->SetBinContent(9,7.638775);
   houtFV_stack_4->SetBinContent(10,5.521927);
   houtFV_stack_4->SetBinContent(11,4.391507);
   houtFV_stack_4->SetBinContent(12,7.054958);
   houtFV_stack_4->SetBinContent(13,31.34852);
   houtFV_stack_4->SetBinError(1,4.197499);
   houtFV_stack_4->SetBinError(2,4.595969);
   houtFV_stack_4->SetBinError(3,4.180126);
   houtFV_stack_4->SetBinError(4,3.454192);
   houtFV_stack_4->SetBinError(5,2.625843);
   houtFV_stack_4->SetBinError(6,2.164944);
   houtFV_stack_4->SetBinError(7,1.959734);
   houtFV_stack_4->SetBinError(8,1.075539);
   houtFV_stack_4->SetBinError(9,1.429406);
   houtFV_stack_4->SetBinError(10,1.194382);
   houtFV_stack_4->SetBinError(11,1.074576);
   houtFV_stack_4->SetBinError(12,1.394155);
   houtFV_stack_4->SetBinError(13,2.843673);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.902622);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,11.57174);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,17.31783);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.10875);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.89583);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.76445);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.597283);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.887166);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.14274);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.00324);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.632598);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.867454);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.136828);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.329952);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.366733);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.208868);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8494698);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5640747);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5861822);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3027526);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2882649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2962551);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9889515);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.207843);
   hNCpi0inFVqe_stack_6->SetBinContent(2,7.546322);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.186759);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.681488);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.199372);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.906754);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4975321);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.9351097);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6984352);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6471416);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3353836);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3123499);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,221.1901);
   hNCpi0inFVres_stack_7->SetBinContent(2,638.5985);
   hNCpi0inFVres_stack_7->SetBinContent(3,568.2082);
   hNCpi0inFVres_stack_7->SetBinContent(4,386.9818);
   hNCpi0inFVres_stack_7->SetBinContent(5,235.2858);
   hNCpi0inFVres_stack_7->SetBinContent(6,123.7471);
   hNCpi0inFVres_stack_7->SetBinContent(7,65.7765);
   hNCpi0inFVres_stack_7->SetBinContent(8,37.74984);
   hNCpi0inFVres_stack_7->SetBinContent(9,29.14249);
   hNCpi0inFVres_stack_7->SetBinContent(10,19.28046);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.04257);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.05658);
   hNCpi0inFVres_stack_7->SetBinContent(13,115.1624);
   hNCpi0inFVres_stack_7->SetBinError(1,4.871823);
   hNCpi0inFVres_stack_7->SetBinError(2,8.259632);
   hNCpi0inFVres_stack_7->SetBinError(3,7.815501);
   hNCpi0inFVres_stack_7->SetBinError(4,6.463937);
   hNCpi0inFVres_stack_7->SetBinError(5,5.067161);
   hNCpi0inFVres_stack_7->SetBinError(6,3.60717);
   hNCpi0inFVres_stack_7->SetBinError(7,2.629589);
   hNCpi0inFVres_stack_7->SetBinError(8,1.979443);
   hNCpi0inFVres_stack_7->SetBinError(9,1.730584);
   hNCpi0inFVres_stack_7->SetBinError(10,1.382517);
   hNCpi0inFVres_stack_7->SetBinError(11,1.395361);
   hNCpi0inFVres_stack_7->SetBinError(12,1.055088);
   hNCpi0inFVres_stack_7->SetBinError(13,3.555467);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,49.94268);
   hNCpi0inFVdis_stack_8->SetBinContent(2,117.9264);
   hNCpi0inFVdis_stack_8->SetBinContent(3,85.12456);
   hNCpi0inFVdis_stack_8->SetBinContent(4,62.92503);
   hNCpi0inFVdis_stack_8->SetBinContent(5,45.01501);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.95934);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.71981);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.48246);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.639647);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.573624);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.262484);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.266892);
   hNCpi0inFVdis_stack_8->SetBinContent(13,29.18784);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.268529);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.507228);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.984631);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.538539);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.221956);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.847062);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.323278);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.016222);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9057201);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6761612);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5557331);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6938231);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.782744);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.5438859);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.795154);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2338466);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3073253);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1994106);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,89.16876);
   hCCpi0inFV_stack_10->SetBinContent(2,192.9663);
   hCCpi0inFV_stack_10->SetBinContent(3,162.9342);
   hCCpi0inFV_stack_10->SetBinContent(4,109.3455);
   hCCpi0inFV_stack_10->SetBinContent(5,64.07037);
   hCCpi0inFV_stack_10->SetBinContent(6,48.21128);
   hCCpi0inFV_stack_10->SetBinContent(7,25.5011);
   hCCpi0inFV_stack_10->SetBinContent(8,14.44107);
   hCCpi0inFV_stack_10->SetBinContent(9,10.84991);
   hCCpi0inFV_stack_10->SetBinContent(10,7.145522);
   hCCpi0inFV_stack_10->SetBinContent(11,5.899234);
   hCCpi0inFV_stack_10->SetBinContent(12,5.705009);
   hCCpi0inFV_stack_10->SetBinContent(13,39.68299);
   hCCpi0inFV_stack_10->SetBinError(1,4.720022);
   hCCpi0inFV_stack_10->SetBinError(2,6.958707);
   hCCpi0inFV_stack_10->SetBinError(3,6.406188);
   hCCpi0inFV_stack_10->SetBinError(4,5.248161);
   hCCpi0inFV_stack_10->SetBinError(5,3.9416);
   hCCpi0inFV_stack_10->SetBinError(6,3.508365);
   hCCpi0inFV_stack_10->SetBinError(7,2.58859);
   hCCpi0inFV_stack_10->SetBinError(8,1.880323);
   hCCpi0inFV_stack_10->SetBinError(9,1.617744);
   hCCpi0inFV_stack_10->SetBinError(10,1.302487);
   hCCpi0inFV_stack_10->SetBinError(11,1.248465);
   hCCpi0inFV_stack_10->SetBinError(12,1.149782);
   hCCpi0inFV_stack_10->SetBinError(13,3.183726);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,59.75313);
   hNCinFV_stack_11->SetBinContent(2,110.7669);
   hNCinFV_stack_11->SetBinContent(3,80.88674);
   hNCinFV_stack_11->SetBinContent(4,44.72401);
   hNCinFV_stack_11->SetBinContent(5,39.07143);
   hNCinFV_stack_11->SetBinContent(6,26.71228);
   hNCinFV_stack_11->SetBinContent(7,14.71129);
   hNCinFV_stack_11->SetBinContent(8,11.03878);
   hNCinFV_stack_11->SetBinContent(9,6.145648);
   hNCinFV_stack_11->SetBinContent(10,6.590642);
   hNCinFV_stack_11->SetBinContent(11,4.784938);
   hNCinFV_stack_11->SetBinContent(12,3.170878);
   hNCinFV_stack_11->SetBinContent(13,30.27213);
   hNCinFV_stack_11->SetBinError(1,3.790202);
   hNCinFV_stack_11->SetBinError(2,5.282895);
   hNCinFV_stack_11->SetBinError(3,4.534873);
   hNCinFV_stack_11->SetBinError(4,3.313037);
   hNCinFV_stack_11->SetBinError(5,3.164434);
   hNCinFV_stack_11->SetBinError(6,2.618139);
   hNCinFV_stack_11->SetBinError(7,1.902641);
   hNCinFV_stack_11->SetBinError(8,1.688523);
   hNCinFV_stack_11->SetBinError(9,1.301918);
   hNCinFV_stack_11->SetBinError(10,1.316585);
   hNCinFV_stack_11->SetBinError(11,1.110004);
   hNCinFV_stack_11->SetBinError(12,0.8760883);
   hNCinFV_stack_11->SetBinError(13,2.810021);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,42.7001);
   hnumuCCinFV_stack_12->SetBinContent(2,96.05798);
   hnumuCCinFV_stack_12->SetBinContent(3,74.79892);
   hnumuCCinFV_stack_12->SetBinContent(4,56.80758);
   hnumuCCinFV_stack_12->SetBinContent(5,45.90616);
   hnumuCCinFV_stack_12->SetBinContent(6,24.93854);
   hnumuCCinFV_stack_12->SetBinContent(7,15.47648);
   hnumuCCinFV_stack_12->SetBinContent(8,14.13025);
   hnumuCCinFV_stack_12->SetBinContent(9,8.996693);
   hnumuCCinFV_stack_12->SetBinContent(10,5.032413);
   hnumuCCinFV_stack_12->SetBinContent(11,5.54511);
   hnumuCCinFV_stack_12->SetBinContent(12,4.123457);
   hnumuCCinFV_stack_12->SetBinContent(13,44.89014);
   hnumuCCinFV_stack_12->SetBinError(1,3.462287);
   hnumuCCinFV_stack_12->SetBinError(2,5.671835);
   hnumuCCinFV_stack_12->SetBinError(3,4.923365);
   hnumuCCinFV_stack_12->SetBinError(4,4.207791);
   hnumuCCinFV_stack_12->SetBinError(5,4.048716);
   hnumuCCinFV_stack_12->SetBinError(6,3.52929);
   hnumuCCinFV_stack_12->SetBinError(7,2.444113);
   hnumuCCinFV_stack_12->SetBinError(8,2.197585);
   hnumuCCinFV_stack_12->SetBinError(9,2.068886);
   hnumuCCinFV_stack_12->SetBinError(10,1.068147);
   hnumuCCinFV_stack_12->SetBinError(11,1.215421);
   hnumuCCinFV_stack_12->SetBinError(12,1.150807);
   hnumuCCinFV_stack_12->SetBinError(13,3.976686);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.683105);
   hnueCCinFV_stack_13->SetBinContent(2,4.021529);
   hnueCCinFV_stack_13->SetBinContent(3,4.92612);
   hnueCCinFV_stack_13->SetBinContent(4,3.467731);
   hnueCCinFV_stack_13->SetBinContent(5,2.407869);
   hnueCCinFV_stack_13->SetBinContent(6,1.174466);
   hnueCCinFV_stack_13->SetBinContent(7,1.291433);
   hnueCCinFV_stack_13->SetBinContent(8,1.776237);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,1.123056);
   hnueCCinFV_stack_13->SetBinContent(13,13.64029);
   hnueCCinFV_stack_13->SetBinError(1,1.621777);
   hnueCCinFV_stack_13->SetBinError(2,1.049789);
   hnueCCinFV_stack_13->SetBinError(3,1.322104);
   hnueCCinFV_stack_13->SetBinError(4,1.482499);
   hnueCCinFV_stack_13->SetBinError(5,0.8012221);
   hnueCCinFV_stack_13->SetBinError(6,0.5398283);
   hnueCCinFV_stack_13->SetBinError(7,0.5314802);
   hnueCCinFV_stack_13->SetBinError(8,0.6884973);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3816983);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.5751693);
   hnueCCinFV_stack_13->SetBinError(13,2.566368);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,653.9798);
   hmcerror__5->SetBinContent(2,1430.256);
   hmcerror__5->SetBinContent(3,1172.45);
   hmcerror__5->SetBinContent(4,793.196);
   hmcerror__5->SetBinContent(5,525.4907);
   hmcerror__5->SetBinContent(6,317.8613);
   hmcerror__5->SetBinContent(7,184.8671);
   hmcerror__5->SetBinContent(8,110.1675);
   hmcerror__5->SetBinContent(9,87.96709);
   hmcerror__5->SetBinContent(10,56.20507);
   hmcerror__5->SetBinContent(11,53.24921);
   hmcerror__5->SetBinContent(12,43.43119);
   hmcerror__5->SetBinContent(13,359.6343);
   hmcerror__5->SetBinError(1,141.6317);
   hmcerror__5->SetBinError(2,347.973);
   hmcerror__5->SetBinError(3,315.6443);
   hmcerror__5->SetBinError(4,234.8519);
   hmcerror__5->SetBinError(5,160.896);
   hmcerror__5->SetBinError(6,88.46519);
   hmcerror__5->SetBinError(7,48.14225);
   hmcerror__5->SetBinError(8,31.07567);
   hmcerror__5->SetBinError(9,26.20502);
   hmcerror__5->SetBinError(10,19.38263);
   hmcerror__5->SetBinError(11,21.59192);
   hmcerror__5->SetBinError(12,16.66135);
   hmcerror__5->SetBinError(13,90.40806);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[12] = {
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
   Double_t _fy3005[12] = {
   606,
   1292,
   1049,
   640,
   360,
   260,
   151,
   122,
   80,
   56,
   30,
   27};
   Double_t _felx3005[12] = {
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
   Double_t _fely3005[12] = {
   24.61707,
   35.9444,
   32.38827,
   25.29822,
   18.97367,
   16.12452,
   12.28821,
   11.04536,
   9.0683,
   7.6127,
   5.6197,
   5.3414};
   Double_t _fehx3005[12] = {
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
   Double_t _fehy3005[12] = {
   24.61707,
   35.9444,
   32.38827,
   25.29822,
   18.97367,
   16.12452,
   12.28821,
   11.04536,
   8.8665,
   7.4094,
   5.4117,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(19.49274);
   Graph_Graph3005->SetMaximum(1458.573);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("","BNB Data, 4673.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 117.3","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 430.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 46.2","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 365.9","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  83.1","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.1","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2355.1","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  438.8","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 736.2","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 408.4","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 394.5","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.1","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[12] = {
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
   Double_t _fy3006[12] = {
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
   Double_t _felx3006[12] = {
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
   Double_t _fely3006[12] = {
   0.216569,
   0.2432942,
   0.2692177,
   0.296083,
   0.3061825,
   0.2783138,
   0.2604154,
   0.2820765,
   0.2978958,
   0.3448556,
   0.4054881,
   0.3836264};
   Double_t _fehx3006[12] = {
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
   Double_t _fehy3006[12] = {
   0.216569,
   0.2432942,
   0.2692177,
   0.296083,
   0.3061825,
   0.2783138,
   0.2604154,
   0.2820765,
   0.2978958,
   0.3448556,
   0.4054881,
   0.3836264};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[12] = {
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
   Double_t _fy3007[12] = {
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
   Double_t _felx3007[12] = {
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
   Double_t _fely3007[12] = {
   0.2007685,
   0.2400576,
   0.2660085,
   0.2907047,
   0.2927411,
   0.261662,
   0.2341172,
   0.2254844,
   0.2222859,
   0.2308841,
   0.2058244,
   0.2183723};
   Double_t _fehx3007[12] = {
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
   Double_t _fehy3007[12] = {
   0.2007685,
   0.2400576,
   0.2660085,
   0.2907047,
   0.2927411,
   0.261662,
   0.2341172,
   0.2254844,
   0.2222859,
   0.2308841,
   0.2058244,
   0.2183723};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[12] = {
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
   Double_t _fy3008[12] = {
   0.9266341,
   0.903335,
   0.8947074,
   0.8068624,
   0.6850739,
   0.8179668,
   0.8168029,
   1.107404,
   0.909431,
   0.9963513,
   0.5633887,
   0.6216731};
   Double_t _felx3008[12] = {
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
   Double_t _fely3008[12] = {
   0.03764194,
   0.02513145,
   0.02762443,
   0.03189404,
   0.03610657,
   0.05072815,
   0.06647048,
   0.1002597,
   0.1030874,
   0.1354451,
   0.1055358,
   0.1229854};
   Double_t _fehx3008[12] = {
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
   Double_t _fehy3008[12] = {
   0.03764194,
   0.02513145,
   0.02762443,
   0.03189404,
   0.03610657,
   0.05072815,
   0.06647048,
   0.1002597,
   0.1007934,
   0.131828,
   0.1016297,
   0.1181685};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.3828717);
   Graph_Graph3008->SetMaximum(1.282645);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
