#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Jun  5 00:41:46 2022) by ROOT version 6.26/00
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
   pad1->Range(-153.8462,-28.52792,1128.205,3154.588);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__1->SetBinContent(0,118.3478);
   hmc__1->SetBinContent(1,1426.396);
   hmc__1->SetBinContent(2,1096.49);
   hmc__1->SetBinContent(3,942.3826);
   hmc__1->SetBinContent(4,824.5204);
   hmc__1->SetBinContent(5,705.2553);
   hmc__1->SetBinContent(6,544.1581);
   hmc__1->SetBinContent(7,434.7206);
   hmc__1->SetBinContent(8,307.14);
   hmc__1->SetBinContent(9,219.7517);
   hmc__1->SetBinContent(10,167.7056);
   hmc__1->SetBinContent(11,125.9916);
   hmc__1->SetBinContent(12,83.10179);
   hmc__1->SetBinContent(13,57.24816);
   hmc__1->SetBinContent(14,48.59358);
   hmc__1->SetBinContent(15,34.76969);
   hmc__1->SetBinContent(16,128.0255);
   hmc__1->SetBinError(0,6.243989);
   hmc__1->SetBinError(1,300.5386);
   hmc__1->SetBinError(2,223.7503);
   hmc__1->SetBinError(3,195.6315);
   hmc__1->SetBinError(4,174.7938);
   hmc__1->SetBinError(5,152.3785);
   hmc__1->SetBinError(6,115.2771);
   hmc__1->SetBinError(7,97.22977);
   hmc__1->SetBinError(8,70.76758);
   hmc__1->SetBinError(9,52.16318);
   hmc__1->SetBinError(10,42.93317);
   hmc__1->SetBinError(11,35.22908);
   hmc__1->SetBinError(12,22.509);
   hmc__1->SetBinError(13,20.16106);
   hmc__1->SetBinError(14,21.18585);
   hmc__1->SetBinError(15,13.16163);
   hmc__1->SetBinError(16,47.11573);
   hmc__1->SetMinimum(-28.52792);
   hmc__1->SetMaximum(2995.432);
   hmc__1->SetEntries(7171.878);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",15,0,1000);
   hs1_stack_1->SetMinimum(-3.646956e-09);
   hs1_stack_1->SetMaximum(1497.716);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,2.365465);
   hbadmatch_stack_1->SetBinContent(1,26.04156);
   hbadmatch_stack_1->SetBinContent(2,22.20815);
   hbadmatch_stack_1->SetBinContent(3,17.47406);
   hbadmatch_stack_1->SetBinContent(4,23.69596);
   hbadmatch_stack_1->SetBinContent(5,19.55075);
   hbadmatch_stack_1->SetBinContent(6,18.93435);
   hbadmatch_stack_1->SetBinContent(7,12.87457);
   hbadmatch_stack_1->SetBinContent(8,10.3269);
   hbadmatch_stack_1->SetBinContent(9,4.170595);
   hbadmatch_stack_1->SetBinContent(10,5.562797);
   hbadmatch_stack_1->SetBinContent(11,5.357277);
   hbadmatch_stack_1->SetBinContent(12,3.360645);
   hbadmatch_stack_1->SetBinContent(13,2.143294);
   hbadmatch_stack_1->SetBinContent(14,0.9801958);
   hbadmatch_stack_1->SetBinContent(15,0.7607957);
   hbadmatch_stack_1->SetBinContent(16,4.726071);
   hbadmatch_stack_1->SetBinError(0,0.8845709);
   hbadmatch_stack_1->SetBinError(1,3.090982);
   hbadmatch_stack_1->SetBinError(2,2.59706);
   hbadmatch_stack_1->SetBinError(3,2.335102);
   hbadmatch_stack_1->SetBinError(4,3.378544);
   hbadmatch_stack_1->SetBinError(5,2.266362);
   hbadmatch_stack_1->SetBinError(6,2.689028);
   hbadmatch_stack_1->SetBinError(7,1.865716);
   hbadmatch_stack_1->SetBinError(8,1.717095);
   hbadmatch_stack_1->SetBinError(9,1.079974);
   hbadmatch_stack_1->SetBinError(10,1.177985);
   hbadmatch_stack_1->SetBinError(11,1.252773);
   hbadmatch_stack_1->SetBinError(12,0.9733782);
   hbadmatch_stack_1->SetBinError(13,0.7347251);
   hbadmatch_stack_1->SetBinError(14,0.4383608);
   hbadmatch_stack_1->SetBinError(15,0.4522722);
   hbadmatch_stack_1->SetBinError(16,1.091931);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,52.66513);
   hext_stack_2->SetBinContent(1,162.7637);
   hext_stack_2->SetBinContent(2,113.7691);
   hext_stack_2->SetBinContent(3,85.43745);
   hext_stack_2->SetBinContent(4,68.71674);
   hext_stack_2->SetBinContent(5,52.84666);
   hext_stack_2->SetBinContent(6,53.17276);
   hext_stack_2->SetBinContent(7,40.06226);
   hext_stack_2->SetBinContent(8,25.92678);
   hext_stack_2->SetBinContent(9,19.66786);
   hext_stack_2->SetBinContent(10,17.8583);
   hext_stack_2->SetBinContent(11,11.98003);
   hext_stack_2->SetBinContent(12,11.06308);
   hext_stack_2->SetBinContent(13,3.650572);
   hext_stack_2->SetBinContent(14,3.069618);
   hext_stack_2->SetBinContent(15,5.758588);
   hext_stack_2->SetBinContent(16,25.92956);
   hext_stack_2->SetBinError(0,5.040956);
   hext_stack_2->SetBinError(1,8.810896);
   hext_stack_2->SetBinError(2,7.236246);
   hext_stack_2->SetBinError(3,6.196536);
   hext_stack_2->SetBinError(4,5.510574);
   hext_stack_2->SetBinError(5,4.979225);
   hext_stack_2->SetBinError(6,4.902954);
   hext_stack_2->SetBinError(7,4.407637);
   hext_stack_2->SetBinError(8,3.574356);
   hext_stack_2->SetBinError(9,2.996783);
   hext_stack_2->SetBinError(10,2.909729);
   hext_stack_2->SetBinError(11,2.303263);
   hext_stack_2->SetBinError(12,2.349019);
   hext_stack_2->SetBinError(13,1.103476);
   hext_stack_2->SetBinError(14,1.212305);
   hext_stack_2->SetBinError(15,1.518408);
   hext_stack_2->SetBinError(16,3.526995);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,1.112764);
   hdirt_stack_3->SetBinContent(1,21.75112);
   hdirt_stack_3->SetBinContent(2,15.56388);
   hdirt_stack_3->SetBinContent(3,11.19846);
   hdirt_stack_3->SetBinContent(4,6.994184);
   hdirt_stack_3->SetBinContent(5,5.0555);
   hdirt_stack_3->SetBinContent(6,3.808949);
   hdirt_stack_3->SetBinContent(7,3.233731);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.8621924);
   hdirt_stack_3->SetBinContent(10,1.27496);
   hdirt_stack_3->SetBinContent(11,0.2761429);
   hdirt_stack_3->SetBinContent(14,0.3895662);
   hdirt_stack_3->SetBinContent(16,0.4762587);
   hdirt_stack_3->SetBinError(0,0.541316);
   hdirt_stack_3->SetBinError(1,2.496508);
   hdirt_stack_3->SetBinError(2,2.038234);
   hdirt_stack_3->SetBinError(3,2.126749);
   hdirt_stack_3->SetBinError(4,1.551013);
   hdirt_stack_3->SetBinError(5,1.09859);
   hdirt_stack_3->SetBinError(6,1.00453);
   hdirt_stack_3->SetBinError(7,0.9383687);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.3948905);
   hdirt_stack_3->SetBinError(10,0.6726499);
   hdirt_stack_3->SetBinError(11,0.1952625);
   hdirt_stack_3->SetBinError(14,0.3895662);
   hdirt_stack_3->SetBinError(16,0.3652866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,7.451112);
   houtFV_stack_4->SetBinContent(1,187.7104);
   houtFV_stack_4->SetBinContent(2,138.0711);
   houtFV_stack_4->SetBinContent(3,101.4701);
   houtFV_stack_4->SetBinContent(4,77.77313);
   houtFV_stack_4->SetBinContent(5,55.06566);
   houtFV_stack_4->SetBinContent(6,45.96478);
   houtFV_stack_4->SetBinContent(7,30.98551);
   houtFV_stack_4->SetBinContent(8,24.03162);
   houtFV_stack_4->SetBinContent(9,15.36995);
   houtFV_stack_4->SetBinContent(10,9.878036);
   houtFV_stack_4->SetBinContent(11,9.07501);
   houtFV_stack_4->SetBinContent(12,5.839145);
   houtFV_stack_4->SetBinContent(13,3.336338);
   houtFV_stack_4->SetBinContent(14,2.445722);
   houtFV_stack_4->SetBinContent(15,2.197444);
   houtFV_stack_4->SetBinContent(16,5.566728);
   houtFV_stack_4->SetBinError(0,1.363162);
   houtFV_stack_4->SetBinError(1,6.863981);
   houtFV_stack_4->SetBinError(2,5.857963);
   houtFV_stack_4->SetBinError(3,5.205147);
   houtFV_stack_4->SetBinError(4,4.485416);
   houtFV_stack_4->SetBinError(5,3.705876);
   houtFV_stack_4->SetBinError(6,3.388248);
   houtFV_stack_4->SetBinError(7,2.819987);
   houtFV_stack_4->SetBinError(8,2.541761);
   houtFV_stack_4->SetBinError(9,2.006781);
   houtFV_stack_4->SetBinError(10,1.577592);
   houtFV_stack_4->SetBinError(11,1.57018);
   houtFV_stack_4->SetBinError(12,1.240851);
   houtFV_stack_4->SetBinError(13,0.9675235);
   houtFV_stack_4->SetBinError(14,0.7600838);
   houtFV_stack_4->SetBinError(15,0.760276);
   houtFV_stack_4->SetBinError(16,1.176822);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,2.188994);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,62.73375);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,16.32489);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.313319);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.442604);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.138098);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.662134);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.421076);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5025361);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.439447);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.633607);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.324992);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9726479);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8560878);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5637875);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5158401);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3360594);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2820092);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.142834);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.141674);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.387702);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.18028);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.485852);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.84124);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.44964);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.966794);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5998541);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6414023);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6863973);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5648792);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.558818);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5897673);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4039115);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.316578);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4887857);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2983287);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,22.4488);
   hNCpi0inFVres_stack_7->SetBinContent(1,625.2192);
   hNCpi0inFVres_stack_7->SetBinContent(2,504.8989);
   hNCpi0inFVres_stack_7->SetBinContent(3,425.7169);
   hNCpi0inFVres_stack_7->SetBinContent(4,339.0149);
   hNCpi0inFVres_stack_7->SetBinContent(5,268.2762);
   hNCpi0inFVres_stack_7->SetBinContent(6,183.1918);
   hNCpi0inFVres_stack_7->SetBinContent(7,128.8472);
   hNCpi0inFVres_stack_7->SetBinContent(8,83.98766);
   hNCpi0inFVres_stack_7->SetBinContent(9,60.03441);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.12601);
   hNCpi0inFVres_stack_7->SetBinContent(11,24.72683);
   hNCpi0inFVres_stack_7->SetBinContent(12,15.11506);
   hNCpi0inFVres_stack_7->SetBinContent(13,10.97588);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.586672);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.421338);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.88657);
   hNCpi0inFVres_stack_7->SetBinError(0,1.54905);
   hNCpi0inFVres_stack_7->SetBinError(1,8.128195);
   hNCpi0inFVres_stack_7->SetBinError(2,7.336629);
   hNCpi0inFVres_stack_7->SetBinError(3,6.792636);
   hNCpi0inFVres_stack_7->SetBinError(4,5.987762);
   hNCpi0inFVres_stack_7->SetBinError(5,5.36406);
   hNCpi0inFVres_stack_7->SetBinError(6,4.412078);
   hNCpi0inFVres_stack_7->SetBinError(7,3.721861);
   hNCpi0inFVres_stack_7->SetBinError(8,3.015917);
   hNCpi0inFVres_stack_7->SetBinError(9,2.549885);
   hNCpi0inFVres_stack_7->SetBinError(10,2.053398);
   hNCpi0inFVres_stack_7->SetBinError(11,1.70899);
   hNCpi0inFVres_stack_7->SetBinError(12,1.296261);
   hNCpi0inFVres_stack_7->SetBinError(13,1.125589);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8930622);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6822262);
   hNCpi0inFVres_stack_7->SetBinError(16,1.271687);
   hNCpi0inFVres_stack_7->SetEntries(50865);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,3.106205);
   hNCpi0inFVdis_stack_8->SetBinContent(1,106.1184);
   hNCpi0inFVdis_stack_8->SetBinContent(2,78.79472);
   hNCpi0inFVdis_stack_8->SetBinContent(3,66.19318);
   hNCpi0inFVdis_stack_8->SetBinContent(4,62.95161);
   hNCpi0inFVdis_stack_8->SetBinContent(5,55.13494);
   hNCpi0inFVdis_stack_8->SetBinContent(6,39.74619);
   hNCpi0inFVdis_stack_8->SetBinContent(7,33.79583);
   hNCpi0inFVdis_stack_8->SetBinContent(8,24.12679);
   hNCpi0inFVdis_stack_8->SetBinContent(9,18.33519);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.68143);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.19368);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.126486);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.851959);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.234584);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.123488);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.876625);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.5034937);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.363822);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.874549);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.645685);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.57225);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.447945);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.029491);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.880267);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.584245);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.400697);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.2293);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.092305);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8632561);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6917159);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5550324);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6349992);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8496601);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.5304361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.283386);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1155977);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1443;
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
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,9.495964);
   hCCpi0inFV_stack_11->SetBinContent(1,90.85529);
   hCCpi0inFV_stack_11->SetBinContent(2,101.2889);
   hCCpi0inFV_stack_11->SetBinContent(3,117.6113);
   hCCpi0inFV_stack_11->SetBinContent(4,133.8344);
   hCCpi0inFV_stack_11->SetBinContent(5,137.5597);
   hCCpi0inFV_stack_11->SetBinContent(6,116.8806);
   hCCpi0inFV_stack_11->SetBinContent(7,111.1272);
   hCCpi0inFV_stack_11->SetBinContent(8,84.57419);
   hCCpi0inFV_stack_11->SetBinContent(9,62.80295);
   hCCpi0inFV_stack_11->SetBinContent(10,51.68114);
   hCCpi0inFV_stack_11->SetBinContent(11,44.38026);
   hCCpi0inFV_stack_11->SetBinContent(12,24.98266);
   hCCpi0inFV_stack_11->SetBinContent(13,23.60644);
   hCCpi0inFV_stack_11->SetBinContent(14,21.47075);
   hCCpi0inFV_stack_11->SetBinContent(15,14.26278);
   hCCpi0inFV_stack_11->SetBinContent(16,47.55818);
   hCCpi0inFV_stack_11->SetBinError(0,1.468626);
   hCCpi0inFV_stack_11->SetBinError(1,4.719279);
   hCCpi0inFV_stack_11->SetBinError(2,5.06361);
   hCCpi0inFV_stack_11->SetBinError(3,5.419718);
   hCCpi0inFV_stack_11->SetBinError(4,5.849307);
   hCCpi0inFV_stack_11->SetBinError(5,5.886788);
   hCCpi0inFV_stack_11->SetBinError(6,5.34055);
   hCCpi0inFV_stack_11->SetBinError(7,5.277402);
   hCCpi0inFV_stack_11->SetBinError(8,4.670653);
   hCCpi0inFV_stack_11->SetBinError(9,3.991421);
   hCCpi0inFV_stack_11->SetBinError(10,3.626659);
   hCCpi0inFV_stack_11->SetBinError(11,3.339383);
   hCCpi0inFV_stack_11->SetBinError(12,2.516652);
   hCCpi0inFV_stack_11->SetBinError(13,2.458505);
   hCCpi0inFV_stack_11->SetBinError(14,2.351266);
   hCCpi0inFV_stack_11->SetBinError(15,1.932998);
   hCCpi0inFV_stack_11->SetBinError(16,3.490319);
   hCCpi0inFV_stack_11->SetEntries(5105);

   ci = 1444;
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
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,5.231622);
   hNCinFV_stack_12->SetBinContent(1,57.97812);
   hNCinFV_stack_12->SetBinContent(2,35.47125);
   hNCinFV_stack_12->SetBinContent(3,31.30895);
   hNCinFV_stack_12->SetBinContent(4,32.0085);
   hNCinFV_stack_12->SetBinContent(5,35.08458);
   hNCinFV_stack_12->SetBinContent(6,22.56229);
   hNCinFV_stack_12->SetBinContent(7,22.08264);
   hNCinFV_stack_12->SetBinContent(8,14.17439);
   hNCinFV_stack_12->SetBinContent(9,14.54646);
   hNCinFV_stack_12->SetBinContent(10,9.036364);
   hNCinFV_stack_12->SetBinContent(11,4.896516);
   hNCinFV_stack_12->SetBinContent(12,2.979234);
   hNCinFV_stack_12->SetBinContent(13,2.43942);
   hNCinFV_stack_12->SetBinContent(14,4.970428);
   hNCinFV_stack_12->SetBinContent(15,2.053982);
   hNCinFV_stack_12->SetBinContent(16,5.955695);
   hNCinFV_stack_12->SetBinError(0,1.127464);
   hNCinFV_stack_12->SetBinError(1,3.866307);
   hNCinFV_stack_12->SetBinError(2,2.969356);
   hNCinFV_stack_12->SetBinError(3,2.837495);
   hNCinFV_stack_12->SetBinError(4,2.7849);
   hNCinFV_stack_12->SetBinError(5,2.956743);
   hNCinFV_stack_12->SetBinError(6,2.386838);
   hNCinFV_stack_12->SetBinError(7,2.388348);
   hNCinFV_stack_12->SetBinError(8,1.861619);
   hNCinFV_stack_12->SetBinError(9,1.932107);
   hNCinFV_stack_12->SetBinError(10,1.520238);
   hNCinFV_stack_12->SetBinError(11,1.075844);
   hNCinFV_stack_12->SetBinError(12,0.8548804);
   hNCinFV_stack_12->SetBinError(13,0.7862942);
   hNCinFV_stack_12->SetBinError(14,1.210288);
   hNCinFV_stack_12->SetBinError(15,0.7078105);
   hNCinFV_stack_12->SetBinError(16,1.288);
   hNCinFV_stack_12->SetEntries(1286);

   ci = 1445;
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
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,11.83002);
   hnumuCCinFV_stack_13->SetBinContent(1,68.93801);
   hnumuCCinFV_stack_13->SetBinContent(2,57.45941);
   hnumuCCinFV_stack_13->SetBinContent(3,67.70065);
   hnumuCCinFV_stack_13->SetBinContent(4,65.062);
   hnumuCCinFV_stack_13->SetBinContent(5,63.61103);
   hnumuCCinFV_stack_13->SetBinContent(6,53.27878);
   hnumuCCinFV_stack_13->SetBinContent(7,44.36292);
   hnumuCCinFV_stack_13->SetBinContent(8,33.59609);
   hnumuCCinFV_stack_13->SetBinContent(9,21.05659);
   hnumuCCinFV_stack_13->SetBinContent(10,17.20172);
   hnumuCCinFV_stack_13->SetBinContent(11,13.80799);
   hnumuCCinFV_stack_13->SetBinContent(12,11.68788);
   hnumuCCinFV_stack_13->SetBinContent(13,5.040313);
   hnumuCCinFV_stack_13->SetBinContent(14,3.955304);
   hnumuCCinFV_stack_13->SetBinContent(15,2.163377);
   hnumuCCinFV_stack_13->SetBinContent(16,14.05371);
   hnumuCCinFV_stack_13->SetBinError(0,2.06141);
   hnumuCCinFV_stack_13->SetBinError(1,5.229886);
   hnumuCCinFV_stack_13->SetBinError(2,4.273526);
   hnumuCCinFV_stack_13->SetBinError(3,5.954433);
   hnumuCCinFV_stack_13->SetBinError(4,4.573138);
   hnumuCCinFV_stack_13->SetBinError(5,4.859249);
   hnumuCCinFV_stack_13->SetBinError(6,4.006175);
   hnumuCCinFV_stack_13->SetBinError(7,3.766112);
   hnumuCCinFV_stack_13->SetBinError(8,3.371771);
   hnumuCCinFV_stack_13->SetBinError(9,2.684059);
   hnumuCCinFV_stack_13->SetBinError(10,2.207659);
   hnumuCCinFV_stack_13->SetBinError(11,2.020518);
   hnumuCCinFV_stack_13->SetBinError(12,1.974272);
   hnumuCCinFV_stack_13->SetBinError(13,1.132508);
   hnumuCCinFV_stack_13->SetBinError(14,0.9841832);
   hnumuCCinFV_stack_13->SetBinError(15,0.7598881);
   hnumuCCinFV_stack_13->SetBinError(16,2.211756);
   hnumuCCinFV_stack_13->SetEntries(2136);

   ci = 1446;
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
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(0,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(1,11.80899);
   hnueCCinFV_stack_14->SetBinContent(2,8.232977);
   hnueCCinFV_stack_14->SetBinContent(3,5.040112);
   hnueCCinFV_stack_14->SetBinContent(4,4.538961);
   hnueCCinFV_stack_14->SetBinContent(5,6.278922);
   hnueCCinFV_stack_14->SetBinContent(6,1.877494);
   hnueCCinFV_stack_14->SetBinContent(7,4.422265);
   hnueCCinFV_stack_14->SetBinContent(8,2.447107);
   hnueCCinFV_stack_14->SetBinContent(9,1.691716);
   hnueCCinFV_stack_14->SetBinContent(10,1.539397);
   hnueCCinFV_stack_14->SetBinContent(11,0.9350092);
   hnueCCinFV_stack_14->SetBinContent(12,0.4452329);
   hnueCCinFV_stack_14->SetBinContent(13,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(14,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(16,2.619576);
   hnueCCinFV_stack_14->SetBinError(0,0.3401776);
   hnueCCinFV_stack_14->SetBinError(1,2.22678);
   hnueCCinFV_stack_14->SetBinError(2,1.707163);
   hnueCCinFV_stack_14->SetBinError(3,1.136021);
   hnueCCinFV_stack_14->SetBinError(4,1.760902);
   hnueCCinFV_stack_14->SetBinError(5,2.081573);
   hnueCCinFV_stack_14->SetBinError(6,0.6861632);
   hnueCCinFV_stack_14->SetBinError(7,1.304936);
   hnueCCinFV_stack_14->SetBinError(8,1.080374);
   hnueCCinFV_stack_14->SetBinError(9,0.6506949);
   hnueCCinFV_stack_14->SetBinError(10,0.8198597);
   hnueCCinFV_stack_14->SetBinError(11,0.4877731);
   hnueCCinFV_stack_14->SetBinError(12,0.3172361);
   hnueCCinFV_stack_14->SetBinError(13,0.4531728);
   hnueCCinFV_stack_14->SetBinError(14,0.2781975);
   hnueCCinFV_stack_14->SetBinError(16,1.312969);
   hnueCCinFV_stack_14->SetEntries(187);

   ci = 1447;
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
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__2->SetBinContent(0,118.3478);
   hmcerror__2->SetBinContent(1,1426.396);
   hmcerror__2->SetBinContent(2,1096.49);
   hmcerror__2->SetBinContent(3,942.3826);
   hmcerror__2->SetBinContent(4,824.5204);
   hmcerror__2->SetBinContent(5,705.2553);
   hmcerror__2->SetBinContent(6,544.1581);
   hmcerror__2->SetBinContent(7,434.7206);
   hmcerror__2->SetBinContent(8,307.14);
   hmcerror__2->SetBinContent(9,219.7517);
   hmcerror__2->SetBinContent(10,167.7056);
   hmcerror__2->SetBinContent(11,125.9916);
   hmcerror__2->SetBinContent(12,83.10179);
   hmcerror__2->SetBinContent(13,57.24816);
   hmcerror__2->SetBinContent(14,48.59358);
   hmcerror__2->SetBinContent(15,34.76969);
   hmcerror__2->SetBinContent(16,128.0255);
   hmcerror__2->SetBinError(0,6.243989);
   hmcerror__2->SetBinError(1,300.5386);
   hmcerror__2->SetBinError(2,223.7503);
   hmcerror__2->SetBinError(3,195.6315);
   hmcerror__2->SetBinError(4,174.7938);
   hmcerror__2->SetBinError(5,152.3785);
   hmcerror__2->SetBinError(6,115.2771);
   hmcerror__2->SetBinError(7,97.22977);
   hmcerror__2->SetBinError(8,70.76758);
   hmcerror__2->SetBinError(9,52.16318);
   hmcerror__2->SetBinError(10,42.93317);
   hmcerror__2->SetBinError(11,35.22908);
   hmcerror__2->SetBinError(12,22.509);
   hmcerror__2->SetBinError(13,20.16106);
   hmcerror__2->SetBinError(14,21.18585);
   hmcerror__2->SetBinError(15,13.16163);
   hmcerror__2->SetBinError(16,47.11573);
   hmcerror__2->SetEntries(7171.878);

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
   
   Double_t _fx3001[15] = {
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
   Double_t _fy3001[15] = {
   1294,
   959,
   805,
   698,
   543,
   418,
   332,
   228,
   162,
   110,
   89,
   57,
   42,
   32,
   29};
   Double_t _felx3001[15] = {
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
   Double_t _fely3001[15] = {
   35.97221,
   30.96773,
   28.37252,
   26.41969,
   23.30236,
   20.44505,
   18.22087,
   15.09967,
   12.72792,
   10.48809,
   9.5566,
   7.679,
   6.6155,
   5.7977,
   5.5285};
   Double_t _fehx3001[15] = {
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
   Double_t _fehy3001[15] = {
   35.97221,
   30.96773,
   28.37252,
   26.41969,
   23.30236,
   20.44505,
   18.22087,
   15.09967,
   12.72792,
   10.48809,
   9.3552,
   7.4757,
   6.4104,
   5.5904,
   5.3201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1100);
   Graph_Graph3001->SetMinimum(21.12435);
   Graph_Graph3001->SetMaximum(1460.622);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5798.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 675.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 71.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 709.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2720.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  528.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1136.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 291.6","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 528.9","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 50.3","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[15] = {
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
   Double_t _fy3002[15] = {
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
   Double_t _felx3002[15] = {
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
   Double_t _fely3002[15] = {
   0.2106978,
   0.2040606,
   0.2075925,
   0.2119946,
   0.2160614,
   0.2118448,
   0.2236603,
   0.2304083,
   0.2373732,
   0.2560033,
   0.2796145,
   0.2708606,
   0.3521695,
   0.4359804,
   0.3785375};
   Double_t _fehx3002[15] = {
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
   Double_t _fehy3002[15] = {
   0.2106978,
   0.2040606,
   0.2075925,
   0.2119946,
   0.2160614,
   0.2118448,
   0.2236603,
   0.2304083,
   0.2373732,
   0.2560033,
   0.2796145,
   0.2708606,
   0.3521695,
   0.4359804,
   0.3785375};
   grae = new TGraphAsymmErrors(15,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1100);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3003[15] = {
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
   Double_t _fy3003[15] = {
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
   Double_t _felx3003[15] = {
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
   Double_t _fely3003[15] = {
   0.1902657,
   0.2012086,
   0.2054188,
   0.2097257,
   0.2099621,
   0.2056954,
   0.2041878,
   0.209192,
   0.2061519,
   0.2092876,
   0.2029372,
   0.2003576,
   0.2151535,
   0.2291735,
   0.2200555};
   Double_t _fehx3003[15] = {
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
   Double_t _fehy3003[15] = {
   0.1902657,
   0.2012086,
   0.2054188,
   0.2097257,
   0.2099621,
   0.2056954,
   0.2041878,
   0.209192,
   0.2061519,
   0.2092876,
   0.2029372,
   0.2003576,
   0.2151535,
   0.2291735,
   0.2200555};
   grae = new TGraphAsymmErrors(15,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1100);
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
   
   Double_t _fx3004[15] = {
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
   Double_t _fy3004[15] = {
   0.9071814,
   0.8746093,
   0.8542178,
   0.8465528,
   0.7699339,
   0.768159,
   0.7637088,
   0.7423326,
   0.7371955,
   0.6559115,
   0.7063963,
   0.6859058,
   0.7336481,
   0.6585232,
   0.8340598};
   Double_t _felx3004[15] = {
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
   Double_t _fely3004[15] = {
   0.02521895,
   0.02824261,
   0.03010722,
   0.03204249,
   0.03304103,
   0.03757189,
   0.04191397,
   0.04916218,
   0.05791955,
   0.06253871,
   0.07585109,
   0.09240475,
   0.1155583,
   0.11931,
   0.1590034};
   Double_t _fehx3004[15] = {
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
   Double_t _fehy3004[15] = {
   0.02521895,
   0.02824261,
   0.03010722,
   0.03204249,
   0.03304103,
   0.03757189,
   0.04191397,
   0.04916218,
   0.05791955,
   0.06253871,
   0.07425257,
   0.08995835,
   0.1119757,
   0.115044,
   0.1530097};
   grae = new TGraphAsymmErrors(15,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1100);
   Graph_Graph3004->SetMinimum(0.4944275);
   Graph_Graph3004->SetMaximum(1.031855);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nonpi0_energy_all",15,0,1000);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
