#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue Feb 21 19:44:21 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-184.6154,-14.52,1353.846,1605.606);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,380.4171);
   hmc__1->SetBinContent(2,672.5562);
   hmc__1->SetBinContent(3,567.0027);
   hmc__1->SetBinContent(4,404.6302);
   hmc__1->SetBinContent(5,271.0582);
   hmc__1->SetBinContent(6,168.3279);
   hmc__1->SetBinContent(7,104.4712);
   hmc__1->SetBinContent(8,59.65316);
   hmc__1->SetBinContent(9,56.71912);
   hmc__1->SetBinContent(10,30.01371);
   hmc__1->SetBinContent(11,29.49168);
   hmc__1->SetBinContent(12,22.61741);
   hmc__1->SetBinContent(13,179.1485);
   hmc__1->SetBinError(1,89.95607);
   hmc__1->SetBinError(2,154.6711);
   hmc__1->SetBinError(3,135.8513);
   hmc__1->SetBinError(4,110.802);
   hmc__1->SetBinError(5,79.25664);
   hmc__1->SetBinError(6,45.64631);
   hmc__1->SetBinError(7,30.19076);
   hmc__1->SetBinError(8,18.60077);
   hmc__1->SetBinError(9,21.16135);
   hmc__1->SetBinError(10,11.14351);
   hmc__1->SetBinError(11,12.75864);
   hmc__1->SetBinError(12,10.93362);
   hmc__1->SetBinError(13,49.09863);
   hmc__1->SetMinimum(-14.52);
   hmc__1->SetMaximum(1524.6);
   hmc__1->SetEntries(2916.026);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-1.396248e-08);
   hs1_stack_1->SetMaximum(706.184);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.4703);
   hbadmatch_stack_1->SetBinContent(2,17.74646);
   hbadmatch_stack_1->SetBinContent(3,10.34085);
   hbadmatch_stack_1->SetBinContent(4,9.34158);
   hbadmatch_stack_1->SetBinContent(5,5.771811);
   hbadmatch_stack_1->SetBinContent(6,2.37342);
   hbadmatch_stack_1->SetBinContent(7,1.331976);
   hbadmatch_stack_1->SetBinContent(8,0.9963553);
   hbadmatch_stack_1->SetBinContent(9,1.687835);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.09896);
   hbadmatch_stack_1->SetBinContent(12,1.132421);
   hbadmatch_stack_1->SetBinContent(13,3.674188);
   hbadmatch_stack_1->SetBinError(1,1.828543);
   hbadmatch_stack_1->SetBinError(2,2.709194);
   hbadmatch_stack_1->SetBinError(3,1.614512);
   hbadmatch_stack_1->SetBinError(4,2.183224);
   hbadmatch_stack_1->SetBinError(5,1.12928);
   hbadmatch_stack_1->SetBinError(6,0.8177911);
   hbadmatch_stack_1->SetBinError(7,0.6859271);
   hbadmatch_stack_1->SetBinError(8,0.5098831);
   hbadmatch_stack_1->SetBinError(9,0.6596062);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.6377079);
   hbadmatch_stack_1->SetBinError(12,0.5940087);
   hbadmatch_stack_1->SetBinError(13,1.076999);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,46.6947);
   hext_stack_2->SetBinContent(2,73.65936);
   hext_stack_2->SetBinContent(3,38.73997);
   hext_stack_2->SetBinContent(4,19.2784);
   hext_stack_2->SetBinContent(5,25.66424);
   hext_stack_2->SetBinContent(6,14.46428);
   hext_stack_2->SetBinContent(7,12.64041);
   hext_stack_2->SetBinContent(8,4.367208);
   hext_stack_2->SetBinContent(9,11.04872);
   hext_stack_2->SetBinContent(10,2.028585);
   hext_stack_2->SetBinContent(11,4.830057);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,22.80526);
   hext_stack_2->SetBinError(1,4.767302);
   hext_stack_2->SetBinError(2,5.716438);
   hext_stack_2->SetBinError(3,4.000777);
   hext_stack_2->SetBinError(4,2.841947);
   hext_stack_2->SetBinError(5,3.346087);
   hext_stack_2->SetBinError(6,2.625187);
   hext_stack_2->SetBinError(7,2.334397);
   hext_stack_2->SetBinError(8,1.374998);
   hext_stack_2->SetBinError(9,2.433165);
   hext_stack_2->SetBinError(10,0.8315593);
   hext_stack_2->SetBinError(11,1.607642);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,3.499042);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,7.912873);
   hdirt_stack_3->SetBinContent(2,8.872778);
   hdirt_stack_3->SetBinContent(3,4.378151);
   hdirt_stack_3->SetBinContent(4,2.478073);
   hdirt_stack_3->SetBinContent(5,2.783446);
   hdirt_stack_3->SetBinContent(6,2.365996);
   hdirt_stack_3->SetBinContent(7,2.216944);
   hdirt_stack_3->SetBinContent(8,1.70538);
   hdirt_stack_3->SetBinContent(9,0.7819759);
   hdirt_stack_3->SetBinContent(10,0.6392631);
   hdirt_stack_3->SetBinContent(11,0.2524987);
   hdirt_stack_3->SetBinContent(12,0.9115412);
   hdirt_stack_3->SetBinContent(13,2.50895);
   hdirt_stack_3->SetBinError(1,1.452565);
   hdirt_stack_3->SetBinError(2,1.586968);
   hdirt_stack_3->SetBinError(3,1.03967);
   hdirt_stack_3->SetBinError(4,0.7540406);
   hdirt_stack_3->SetBinError(5,0.8464396);
   hdirt_stack_3->SetBinError(6,0.813463);
   hdirt_stack_3->SetBinError(7,0.8056712);
   hdirt_stack_3->SetBinError(8,1.173634);
   hdirt_stack_3->SetBinError(9,0.4844357);
   hdirt_stack_3->SetBinError(10,0.4709666);
   hdirt_stack_3->SetBinError(11,0.2524987);
   hdirt_stack_3->SetBinError(12,0.5597697);
   hdirt_stack_3->SetBinError(13,0.8841094);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,60.36343);
   houtFV_stack_4->SetBinContent(2,70.61831);
   houtFV_stack_4->SetBinContent(3,49.48782);
   houtFV_stack_4->SetBinContent(4,35.37655);
   houtFV_stack_4->SetBinContent(5,19.43443);
   houtFV_stack_4->SetBinContent(6,12.79153);
   houtFV_stack_4->SetBinContent(7,11.78815);
   houtFV_stack_4->SetBinContent(8,3.766097);
   houtFV_stack_4->SetBinContent(9,5.783199);
   houtFV_stack_4->SetBinContent(10,3.806432);
   houtFV_stack_4->SetBinContent(11,3.462874);
   houtFV_stack_4->SetBinContent(12,4.962789);
   houtFV_stack_4->SetBinContent(13,20.51016);
   houtFV_stack_4->SetBinError(1,3.884499);
   houtFV_stack_4->SetBinError(2,4.168695);
   houtFV_stack_4->SetBinError(3,3.499515);
   houtFV_stack_4->SetBinError(4,2.970292);
   houtFV_stack_4->SetBinError(5,2.175935);
   houtFV_stack_4->SetBinError(6,1.820791);
   houtFV_stack_4->SetBinError(7,1.7303);
   houtFV_stack_4->SetBinError(8,0.9410676);
   houtFV_stack_4->SetBinError(9,1.257603);
   houtFV_stack_4->SetBinError(10,1.020103);
   houtFV_stack_4->SetBinError(11,0.961023);
   houtFV_stack_4->SetBinError(12,1.189112);
   houtFV_stack_4->SetBinError(13,2.283256);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.568486);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,10.97355);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.32887);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.42603);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.07344);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.555532);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.513583);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.803466);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.14274);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.96189);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9753399);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.11678);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8541913);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.114411);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.294082);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.340108);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.163031);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.84203);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5620009);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5841869);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3027526);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3355772);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2949384);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9782015);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.82779);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.965962);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9481038);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4344742);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4686633);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2696619);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,119.8494);
   hNCpi0inFVres_stack_7->SetBinContent(2,263.7501);
   hNCpi0inFVres_stack_7->SetBinContent(3,255.3995);
   hNCpi0inFVres_stack_7->SetBinContent(4,188.8613);
   hNCpi0inFVres_stack_7->SetBinContent(5,109.19);
   hNCpi0inFVres_stack_7->SetBinContent(6,62.84483);
   hNCpi0inFVres_stack_7->SetBinContent(7,37.32969);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.76532);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.51446);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.58128);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.756063);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.079231);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.97994);
   hNCpi0inFVres_stack_7->SetBinError(1,3.57859);
   hNCpi0inFVres_stack_7->SetBinError(2,5.28331);
   hNCpi0inFVres_stack_7->SetBinError(3,5.186263);
   hNCpi0inFVres_stack_7->SetBinError(4,4.542171);
   hNCpi0inFVres_stack_7->SetBinError(5,3.396867);
   hNCpi0inFVres_stack_7->SetBinError(6,2.559623);
   hNCpi0inFVres_stack_7->SetBinError(7,2.003126);
   hNCpi0inFVres_stack_7->SetBinError(8,1.467307);
   hNCpi0inFVres_stack_7->SetBinError(9,1.375414);
   hNCpi0inFVres_stack_7->SetBinError(10,1.023695);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9800226);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7692408);
   hNCpi0inFVres_stack_7->SetBinError(13,2.507481);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.86589);
   hNCpi0inFVdis_stack_8->SetBinContent(2,51.00006);
   hNCpi0inFVdis_stack_8->SetBinContent(3,37.02512);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.71144);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.36676);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.60937);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.20846);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.396014);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.97261);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.342944);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.007312);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.839912);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.88304);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.650817);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.311178);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.007235);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.710867);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.56069);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.353785);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.067952);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7522726);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.65417);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.47266);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4413619);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4360389);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.152807);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,49.5607);
   hCCpi0inFV_stack_10->SetBinContent(2,82.83293);
   hCCpi0inFV_stack_10->SetBinContent(3,83.01487);
   hCCpi0inFV_stack_10->SetBinContent(4,57.0616);
   hCCpi0inFV_stack_10->SetBinContent(5,35.32289);
   hCCpi0inFV_stack_10->SetBinContent(6,25.67146);
   hCCpi0inFV_stack_10->SetBinContent(7,13.40106);
   hCCpi0inFV_stack_10->SetBinContent(8,8.567743);
   hCCpi0inFV_stack_10->SetBinContent(9,6.353589);
   hCCpi0inFV_stack_10->SetBinContent(10,3.821039);
   hCCpi0inFV_stack_10->SetBinContent(11,2.730956);
   hCCpi0inFV_stack_10->SetBinContent(12,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(13,21.15551);
   hCCpi0inFV_stack_10->SetBinError(1,3.517843);
   hCCpi0inFV_stack_10->SetBinError(2,4.555911);
   hCCpi0inFV_stack_10->SetBinError(3,4.550582);
   hCCpi0inFV_stack_10->SetBinError(4,3.792865);
   hCCpi0inFV_stack_10->SetBinError(5,2.966408);
   hCCpi0inFV_stack_10->SetBinError(6,2.54942);
   hCCpi0inFV_stack_10->SetBinError(7,1.821026);
   hCCpi0inFV_stack_10->SetBinError(8,1.478965);
   hCCpi0inFV_stack_10->SetBinError(9,1.240845);
   hCCpi0inFV_stack_10->SetBinError(10,0.9208385);
   hCCpi0inFV_stack_10->SetBinError(11,0.8550514);
   hCCpi0inFV_stack_10->SetBinError(12,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(13,2.266733);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,27.77832);
   hNCinFV_stack_11->SetBinContent(2,45.73682);
   hNCinFV_stack_11->SetBinContent(3,36.97434);
   hNCinFV_stack_11->SetBinContent(4,20.12441);
   hNCinFV_stack_11->SetBinContent(5,20.16367);
   hNCinFV_stack_11->SetBinContent(6,12.89267);
   hNCinFV_stack_11->SetBinContent(7,5.825149);
   hNCinFV_stack_11->SetBinContent(8,5.820077);
   hNCinFV_stack_11->SetBinContent(9,4.825274);
   hNCinFV_stack_11->SetBinContent(10,3.466255);
   hNCinFV_stack_11->SetBinContent(11,2.002419);
   hNCinFV_stack_11->SetBinContent(12,0.7817899);
   hNCinFV_stack_11->SetBinContent(13,11.56553);
   hNCinFV_stack_11->SetBinError(1,2.573806);
   hNCinFV_stack_11->SetBinError(2,3.373552);
   hNCinFV_stack_11->SetBinError(3,3.091108);
   hNCinFV_stack_11->SetBinError(4,2.218998);
   hNCinFV_stack_11->SetBinError(5,2.297155);
   hNCinFV_stack_11->SetBinError(6,1.819913);
   hNCinFV_stack_11->SetBinError(7,1.178385);
   hNCinFV_stack_11->SetBinError(8,1.177542);
   hNCinFV_stack_11->SetBinError(9,1.177757);
   hNCinFV_stack_11->SetBinError(10,0.9617119);
   hNCinFV_stack_11->SetBinError(11,0.7348366);
   hNCinFV_stack_11->SetBinError(12,0.3908977);
   hNCinFV_stack_11->SetBinError(13,1.732499);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,19.44704);
   hnumuCCinFV_stack_12->SetBinContent(2,42.73121);
   hnumuCCinFV_stack_12->SetBinContent(3,30.58482);
   hnumuCCinFV_stack_12->SetBinContent(4,22.42616);
   hnumuCCinFV_stack_12->SetBinContent(5,16.20075);
   hnumuCCinFV_stack_12->SetBinContent(6,10.42023);
   hnumuCCinFV_stack_12->SetBinContent(7,4.996645);
   hnumuCCinFV_stack_12->SetBinContent(8,3.618068);
   hnumuCCinFV_stack_12->SetBinContent(9,3.413682);
   hnumuCCinFV_stack_12->SetBinContent(10,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(11,1.470498);
   hnumuCCinFV_stack_12->SetBinContent(12,0.993323);
   hnumuCCinFV_stack_12->SetBinContent(13,11.19936);
   hnumuCCinFV_stack_12->SetBinError(1,2.296514);
   hnumuCCinFV_stack_12->SetBinError(2,3.715386);
   hnumuCCinFV_stack_12->SetBinError(3,3.471282);
   hnumuCCinFV_stack_12->SetBinError(4,2.585809);
   hnumuCCinFV_stack_12->SetBinError(5,2.345818);
   hnumuCCinFV_stack_12->SetBinError(6,1.697856);
   hnumuCCinFV_stack_12->SetBinError(7,1.242894);
   hnumuCCinFV_stack_12->SetBinError(8,1.031313);
   hnumuCCinFV_stack_12->SetBinError(9,1.608044);
   hnumuCCinFV_stack_12->SetBinError(10,0.588146);
   hnumuCCinFV_stack_12->SetBinError(11,0.6209604);
   hnumuCCinFV_stack_12->SetBinError(12,0.5085382);
   hnumuCCinFV_stack_12->SetBinError(13,1.771568);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,4.748883);
   hnueCCinFV_stack_13->SetBinContent(2,2.751027);
   hnueCCinFV_stack_13->SetBinContent(3,2.734507);
   hnueCCinFV_stack_13->SetBinContent(4,2.540789);
   hnueCCinFV_stack_13->SetBinContent(5,1.570749);
   hnueCCinFV_stack_13->SetBinContent(6,0.781035);
   hnueCCinFV_stack_13->SetBinContent(7,0.842703);
   hnueCCinFV_stack_13->SetBinContent(8,1.344896);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,8.554512);
   hnueCCinFV_stack_13->SetBinError(1,1.527832);
   hnueCCinFV_stack_13->SetBinError(2,0.8686332);
   hnueCCinFV_stack_13->SetBinError(3,0.9628543);
   hnueCCinFV_stack_13->SetBinError(4,1.40261);
   hnueCCinFV_stack_13->SetBinError(5,0.6816847);
   hnueCCinFV_stack_13->SetBinError(6,0.4626237);
   hnueCCinFV_stack_13->SetBinError(7,0.4243469);
   hnueCCinFV_stack_13->SetBinError(8,0.6166702);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.3816983);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.278915);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,380.4171);
   hmcerror__2->SetBinContent(2,672.5562);
   hmcerror__2->SetBinContent(3,567.0027);
   hmcerror__2->SetBinContent(4,404.6302);
   hmcerror__2->SetBinContent(5,271.0582);
   hmcerror__2->SetBinContent(6,168.3279);
   hmcerror__2->SetBinContent(7,104.4712);
   hmcerror__2->SetBinContent(8,59.65316);
   hmcerror__2->SetBinContent(9,56.71912);
   hmcerror__2->SetBinContent(10,30.01371);
   hmcerror__2->SetBinContent(11,29.49168);
   hmcerror__2->SetBinContent(12,22.61741);
   hmcerror__2->SetBinContent(13,179.1485);
   hmcerror__2->SetBinError(1,89.95607);
   hmcerror__2->SetBinError(2,154.6711);
   hmcerror__2->SetBinError(3,135.8513);
   hmcerror__2->SetBinError(4,110.802);
   hmcerror__2->SetBinError(5,79.25664);
   hmcerror__2->SetBinError(6,45.64631);
   hmcerror__2->SetBinError(7,30.19076);
   hmcerror__2->SetBinError(8,18.60077);
   hmcerror__2->SetBinError(9,21.16135);
   hmcerror__2->SetBinError(10,11.14351);
   hmcerror__2->SetBinError(11,12.75864);
   hmcerror__2->SetBinError(12,10.93362);
   hmcerror__2->SetBinError(13,49.09863);
   hmcerror__2->SetEntries(2916.026);

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
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   403,
   726,
   596,
   377,
   218,
   170,
   87,
   71,
   54,
   28,
   14,
   16};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   20.07486,
   26.94439,
   24.41311,
   19.41649,
   14.76482,
   13.0384,
   9.4503,
   8.5518,
   7.4785,
   5.4358,
   3.9102,
   4.1628};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   20.07486,
   26.94439,
   24.41311,
   19.41649,
   14.76482,
   13.0384,
   9.2488,
   8.3496,
   7.275,
   5.2271,
   3.6898,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(9.08082);
   Graph_Graph3001->SetMaximum(827.2298);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2760.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 62.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 255.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 35.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 281.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  79.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1101.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  208.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 371.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 186.4","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 157.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.4","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[12] = {
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
   Double_t _fy3002[12] = {
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
   Double_t _felx3002[12] = {
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
   Double_t _fely3002[12] = {
   0.236467,
   0.229975,
   0.2395956,
   0.2738351,
   0.2923972,
   0.271175,
   0.2889863,
   0.3118153,
   0.3730902,
   0.3712806,
   0.4326183,
   0.4834161};
   Double_t _fehx3002[12] = {
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
   Double_t _fehy3002[12] = {
   0.236467,
   0.229975,
   0.2395956,
   0.2738351,
   0.2923972,
   0.271175,
   0.2889863,
   0.3118153,
   0.3730902,
   0.3712806,
   0.4326183,
   0.4834161};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
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
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.1887478,
   0.2087291,
   0.218571,
   0.2388339,
   0.2392025,
   0.2311844,
   0.2158637,
   0.2235291,
   0.1997101,
   0.2258631,
   0.2046574,
   0.2322076};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.1887478,
   0.2087291,
   0.218571,
   0.2388339,
   0.2392025,
   0.2311844,
   0.2158637,
   0.2235291,
   0.1997101,
   0.2258631,
   0.2046574,
   0.2322076};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[12] = {
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
   Double_t _fy3004[12] = {
   1.059364,
   1.079464,
   1.051141,
   0.9317149,
   0.8042554,
   1.009934,
   0.832765,
   1.190214,
   0.95206,
   0.9329069,
   0.4747102,
   0.7074196};
   Double_t _felx3004[12] = {
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
   Double_t _fely3004[12] = {
   0.05277066,
   0.04006266,
   0.04305643,
   0.04798576,
   0.05447105,
   0.07745839,
   0.09045838,
   0.1433587,
   0.1318515,
   0.1811105,
   0.1325865,
   0.1840529};
   Double_t _fehx3004[12] = {
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
   Double_t _fehy3004[12] = {
   0.05277066,
   0.04006266,
   0.04305643,
   0.04798576,
   0.05447105,
   0.07745839,
   0.08852962,
   0.1399691,
   0.1282636,
   0.1741571,
   0.1251133,
   0.1744408};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.2433177);
   Graph_Graph3004->SetMaximum(1.428989);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
