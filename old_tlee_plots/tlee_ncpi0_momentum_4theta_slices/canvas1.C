#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue Dec  6 22:18:01 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-184.6154,-3.62,1353.846,400.2958);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,125.6106);
   hmc__1->SetBinContent(2,138.8008);
   hmc__1->SetBinContent(3,77.1919);
   hmc__1->SetBinContent(4,32.22858);
   hmc__1->SetBinContent(5,18.49364);
   hmc__1->SetBinContent(6,15.37607);
   hmc__1->SetBinContent(7,8.69753);
   hmc__1->SetBinContent(8,5.886796);
   hmc__1->SetBinContent(9,7.324944);
   hmc__1->SetBinContent(10,4.99306);
   hmc__1->SetBinContent(11,3.77255);
   hmc__1->SetBinContent(12,2.966337);
   hmc__1->SetBinContent(13,33.83889);
   hmc__1->SetBinError(1,35.21108);
   hmc__1->SetBinError(2,41.42199);
   hmc__1->SetBinError(3,22.27191);
   hmc__1->SetBinError(4,14.28535);
   hmc__1->SetBinError(5,10.01976);
   hmc__1->SetBinError(6,7.807331);
   hmc__1->SetBinError(7,6.778398);
   hmc__1->SetBinError(8,4.403745);
   hmc__1->SetBinError(9,5.725003);
   hmc__1->SetBinError(10,5.615811);
   hmc__1->SetBinError(11,5.644845);
   hmc__1->SetBinError(12,2.958911);
   hmc__1->SetBinError(13,16.8269);
   hmc__1->SetMinimum(-3.62);
   hmc__1->SetMaximum(380.1);
   hmc__1->SetEntries(497.2609);
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
   hs1_stack_1->SetMinimum(-1.820451e-08);
   hs1_stack_1->SetMaximum(145.7409);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,3.449768);
   hbadmatch_stack_1->SetBinContent(2,3.593674);
   hbadmatch_stack_1->SetBinContent(3,1.660551);
   hbadmatch_stack_1->SetBinContent(4,2.435902);
   hbadmatch_stack_1->SetBinContent(5,1.308949);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.3974166);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.4628094);
   hbadmatch_stack_1->SetBinContent(12,0.1912975);
   hbadmatch_stack_1->SetBinContent(13,1.011882);
   hbadmatch_stack_1->SetBinError(1,0.9516194);
   hbadmatch_stack_1->SetBinError(2,0.9529602);
   hbadmatch_stack_1->SetBinError(3,0.650847);
   hbadmatch_stack_1->SetBinError(4,1.709557);
   hbadmatch_stack_1->SetBinError(5,0.5497987);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.3974166);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.3616067);
   hbadmatch_stack_1->SetBinError(12,0.1912975);
   hbadmatch_stack_1->SetBinError(13,0.6164675);
   hbadmatch_stack_1->SetEntries(56);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,12.93886);
   hext_stack_2->SetBinContent(2,16.6904);
   hext_stack_2->SetBinContent(3,10.84684);
   hext_stack_2->SetBinContent(4,2.435184);
   hext_stack_2->SetBinContent(5,0.7309963);
   hext_stack_2->SetBinContent(6,4.834466);
   hext_stack_2->SetBinContent(7,1.137595);
   hext_stack_2->SetBinContent(8,0.6487947);
   hext_stack_2->SetBinContent(9,1.779209);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.8131978);
   hext_stack_2->SetBinContent(13,7.001504);
   hext_stack_2->SetBinError(1,2.454205);
   hext_stack_2->SetBinError(2,2.652092);
   hext_stack_2->SetBinError(3,2.237021);
   hext_stack_2->SetBinError(4,0.9256422);
   hext_stack_2->SetBinError(5,0.5201503);
   hext_stack_2->SetBinError(6,1.649131);
   hext_stack_2->SetBinError(7,0.6602113);
   hext_stack_2->SetBinError(8,0.4587671);
   hext_stack_2->SetBinError(9,0.9206235);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.5750177);
   hext_stack_2->SetBinError(13,1.999946);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,2.737414);
   hdirt_stack_3->SetBinContent(2,1.787582);
   hdirt_stack_3->SetBinContent(3,0.8747503);
   hdirt_stack_3->SetBinContent(4,0.8500889);
   hdirt_stack_3->SetBinContent(5,0.3671539);
   hdirt_stack_3->SetBinContent(6,0.3652534);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.8629241);
   hdirt_stack_3->SetBinError(1,0.8760997);
   hdirt_stack_3->SetBinError(2,0.6621898);
   hdirt_stack_3->SetBinError(3,0.3997747);
   hdirt_stack_3->SetBinError(4,0.4531604);
   hdirt_stack_3->SetBinError(5,0.2643781);
   hdirt_stack_3->SetBinError(6,0.3652534);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(13,0.5319252);
   hdirt_stack_3->SetEntries(36);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,19.07259);
   houtFV_stack_4->SetBinContent(2,13.90183);
   houtFV_stack_4->SetBinContent(3,8.637841);
   houtFV_stack_4->SetBinContent(4,4.400519);
   houtFV_stack_4->SetBinContent(5,2.924726);
   houtFV_stack_4->SetBinContent(6,1.035506);
   houtFV_stack_4->SetBinContent(7,1.154185);
   houtFV_stack_4->SetBinContent(8,0.271594);
   houtFV_stack_4->SetBinContent(9,0.6206405);
   houtFV_stack_4->SetBinContent(10,0.536893);
   houtFV_stack_4->SetBinContent(11,0.9226707);
   houtFV_stack_4->SetBinContent(12,0.4449717);
   houtFV_stack_4->SetBinContent(13,5.220948);
   houtFV_stack_4->SetBinError(1,2.178233);
   houtFV_stack_4->SetBinError(2,1.847599);
   houtFV_stack_4->SetBinError(3,1.478747);
   houtFV_stack_4->SetBinError(4,1.070316);
   houtFV_stack_4->SetBinError(5,0.8624291);
   houtFV_stack_4->SetBinError(6,0.4928235);
   houtFV_stack_4->SetBinError(7,0.4549012);
   houtFV_stack_4->SetBinError(8,0.2104845);
   houtFV_stack_4->SetBinError(9,0.3773612);
   houtFV_stack_4->SetBinError(10,0.3929602);
   houtFV_stack_4->SetBinError(11,0.4812946);
   houtFV_stack_4->SetBinError(12,0.2838327);
   houtFV_stack_4->SetBinError(13,1.154041);
   houtFV_stack_4->SetEntries(275);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.446049);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.059089);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3583861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.123979);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.07085396);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.248689);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.0795755);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2986477);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7587492);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6890035);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5975993);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1246988);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06470948);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.05101595);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1359396);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.0795755);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2841217);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3495414);
   hNCpi0inFVcoh_stack_5->SetEntries(114);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2151256);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1471127);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08869053);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.127411);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06377142);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04732107);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetEntries(20);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,41.52187);
   hNCpi0inFVres_stack_7->SetBinContent(2,55.6389);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.10096);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.1608);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.4913);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.342773);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.314464);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.876738);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.651322);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.540267);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.604118);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.3986378);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.925764);
   hNCpi0inFVres_stack_7->SetBinError(1,2.242023);
   hNCpi0inFVres_stack_7->SetBinError(2,2.51554);
   hNCpi0inFVres_stack_7->SetBinError(3,1.875022);
   hNCpi0inFVres_stack_7->SetBinError(4,1.135439);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9615743);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6563738);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4370274);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5212715);
   hNCpi0inFVres_stack_7->SetBinError(9,0.45676);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4221398);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4384121);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1096518);
   hNCpi0inFVres_stack_7->SetBinError(13,1.059665);
   hNCpi0inFVres_stack_7->SetEntries(3569);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.949358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.706008);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.79394);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.394564);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3848242);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.104936);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.90602);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.224701);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1175186);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3099034);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1664553);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.03280994);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.411654);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.23971);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9444733);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6833677);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5600008);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1487424);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.399471);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3513418);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2020077);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.0496494);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2091305);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1270789);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.02334301);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4750681);
   hNCpi0inFVdis_stack_8->SetEntries(595);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(2);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,15.20108);
   hCCpi0inFV_stack_10->SetBinContent(2,18.50915);
   hCCpi0inFV_stack_10->SetBinContent(3,11.50498);
   hCCpi0inFV_stack_10->SetBinContent(4,4.342516);
   hCCpi0inFV_stack_10->SetBinContent(5,2.247316);
   hCCpi0inFV_stack_10->SetBinContent(6,3.175949);
   hCCpi0inFV_stack_10->SetBinContent(7,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(8,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(9,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(10,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(11,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(13,2.590875);
   hCCpi0inFV_stack_10->SetBinError(1,1.901791);
   hCCpi0inFV_stack_10->SetBinError(2,2.140272);
   hCCpi0inFV_stack_10->SetBinError(3,1.727223);
   hCCpi0inFV_stack_10->SetBinError(4,1.028108);
   hCCpi0inFV_stack_10->SetBinError(5,0.7337357);
   hCCpi0inFV_stack_10->SetBinError(6,0.8772215);
   hCCpi0inFV_stack_10->SetBinError(7,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(8,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(9,0.340721);
   hCCpi0inFV_stack_10->SetBinError(10,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(11,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(13,0.8095761);
   hCCpi0inFV_stack_10->SetEntries(265);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,7.954278);
   hNCinFV_stack_11->SetBinContent(2,9.731532);
   hNCinFV_stack_11->SetBinContent(3,3.608517);
   hNCinFV_stack_11->SetBinContent(4,1.244759);
   hNCinFV_stack_11->SetBinContent(5,1.592919);
   hNCinFV_stack_11->SetBinContent(6,0.1774355);
   hNCinFV_stack_11->SetBinContent(7,0.7319179);
   hNCinFV_stack_11->SetBinContent(8,0.8383929);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.9356072);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,2.90102);
   hNCinFV_stack_11->SetBinError(1,1.524919);
   hNCinFV_stack_11->SetBinError(2,1.636142);
   hNCinFV_stack_11->SetBinError(3,0.9573145);
   hNCinFV_stack_11->SetBinError(4,0.5327752);
   hNCinFV_stack_11->SetBinError(5,0.6336934);
   hNCinFV_stack_11->SetBinError(6,0.1774355);
   hNCinFV_stack_11->SetBinError(7,0.438694);
   hNCinFV_stack_11->SetBinError(8,0.4514304);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.5446055);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(13,0.8398204);
   hNCinFV_stack_11->SetEntries(134);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,6.341537);
   hnumuCCinFV_stack_12->SetBinContent(2,7.367309);
   hnumuCCinFV_stack_12->SetBinContent(3,5.716454);
   hnumuCCinFV_stack_12->SetBinContent(4,2.484399);
   hnumuCCinFV_stack_12->SetBinContent(5,1.977106);
   hnumuCCinFV_stack_12->SetBinContent(6,0.8363956);
   hnumuCCinFV_stack_12->SetBinContent(7,0.8401008);
   hnumuCCinFV_stack_12->SetBinContent(8,0.4869024);
   hnumuCCinFV_stack_12->SetBinContent(9,1.46465);
   hnumuCCinFV_stack_12->SetBinContent(10,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(12,0.6531454);
   hnumuCCinFV_stack_12->SetBinContent(13,2.632814);
   hnumuCCinFV_stack_12->SetBinError(1,1.355046);
   hnumuCCinFV_stack_12->SetBinError(2,1.553743);
   hnumuCCinFV_stack_12->SetBinError(3,1.730437);
   hnumuCCinFV_stack_12->SetBinError(4,0.8069896);
   hnumuCCinFV_stack_12->SetBinError(5,0.7191241);
   hnumuCCinFV_stack_12->SetBinError(6,0.5076848);
   hnumuCCinFV_stack_12->SetBinError(7,0.504941);
   hnumuCCinFV_stack_12->SetBinError(8,0.3443309);
   hnumuCCinFV_stack_12->SetBinError(9,1.46465);
   hnumuCCinFV_stack_12->SetBinError(10,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(12,0.3780083);
   hnumuCCinFV_stack_12->SetBinError(13,0.9061872);
   hnumuCCinFV_stack_12->SetEntries(113);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,2.76696);
   hnueCCinFV_stack_13->SetBinContent(2,0.6682112);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.3611468);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.263864);
   hnueCCinFV_stack_13->SetBinContent(11,0.2180157);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.5207534);
   hnueCCinFV_stack_13->SetBinError(1,1.295019);
   hnueCCinFV_stack_13->SetBinError(2,0.3917183);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.3611468);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.263864);
   hnueCCinFV_stack_13->SetBinError(11,0.2180157);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.5207534);
   hnueCCinFV_stack_13->SetEntries(19);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,125.6106);
   hmcerror__2->SetBinContent(2,138.8008);
   hmcerror__2->SetBinContent(3,77.1919);
   hmcerror__2->SetBinContent(4,32.22858);
   hmcerror__2->SetBinContent(5,18.49364);
   hmcerror__2->SetBinContent(6,15.37607);
   hmcerror__2->SetBinContent(7,8.69753);
   hmcerror__2->SetBinContent(8,5.886796);
   hmcerror__2->SetBinContent(9,7.324944);
   hmcerror__2->SetBinContent(10,4.99306);
   hmcerror__2->SetBinContent(11,3.77255);
   hmcerror__2->SetBinContent(12,2.966337);
   hmcerror__2->SetBinContent(13,33.83889);
   hmcerror__2->SetBinError(1,35.21108);
   hmcerror__2->SetBinError(2,41.42199);
   hmcerror__2->SetBinError(3,22.27191);
   hmcerror__2->SetBinError(4,14.28535);
   hmcerror__2->SetBinError(5,10.01976);
   hmcerror__2->SetBinError(6,7.807331);
   hmcerror__2->SetBinError(7,6.778398);
   hmcerror__2->SetBinError(8,4.403745);
   hmcerror__2->SetBinError(9,5.725003);
   hmcerror__2->SetBinError(10,5.615811);
   hmcerror__2->SetBinError(11,5.644845);
   hmcerror__2->SetBinError(12,2.958911);
   hmcerror__2->SetBinError(13,16.8269);
   hmcerror__2->SetEntries(497.2609);

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
   128,
   181,
   80,
   30,
   19,
   22,
   8,
   6,
   5,
   5,
   3,
   4};
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
   11.31371,
   13.45362,
   9.0683,
   5.6197,
   4.5151,
   4.8417,
   3.0307,
   2.67925,
   2.48995,
   2.48995,
   2.143368,
   2.29683};
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
   11.31371,
   13.45362,
   8.8665,
   5.4117,
   4.3011,
   4.6299,
   2.7896,
   2.41858,
   2.21064,
   2.21064,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(0.7709688);
   Graph_Graph3001->SetMaximum(213.8133);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.11#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 491.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 53.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  6.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  157.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  28.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 58.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 28.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all");
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
   0.2803194,
   0.2984276,
   0.2885265,
   0.4432509,
   0.5417947,
   0.5077587,
   0.7793475,
   0.7480717,
   0.7815763,
   1.124723,
   1.496294,
   0.9974964};
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
   0.2803194,
   0.2984276,
   0.2885265,
   0.4432509,
   0.5417947,
   0.5077587,
   0.7793475,
   0.7480717,
   0.7815763,
   1.124723,
   1.496294,
   0.9974964};
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
   0.2065709,
   0.2316922,
   0.2286348,
   0.2711742,
   0.2620069,
   0.2100589,
   0.3014355,
   0.3152828,
   0.3427664,
   0.3430805,
   0.3884725,
   0.4134427};
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
   0.2065709,
   0.2316922,
   0.2286348,
   0.2711742,
   0.2620069,
   0.2100589,
   0.3014355,
   0.3152828,
   0.3427664,
   0.3430805,
   0.3884725,
   0.4134427};
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
   1.019022,
   1.304027,
   1.036378,
   0.9308508,
   1.02738,
   1.430795,
   0.9198014,
   1.01923,
   0.682599,
   1.00139,
   0.7952181,
   1.348464};
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
   0.09006971,
   0.09692756,
   0.1174773,
   0.1743701,
   0.2441433,
   0.3148855,
   0.3484553,
   0.4551287,
   0.3399275,
   0.4986822,
   0.5681483,
   0.7742984};
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
   0.09006971,
   0.09692756,
   0.1148631,
   0.1679162,
   0.2325718,
   0.3011108,
   0.3207347,
   0.4108483,
   0.3017961,
   0.4427425,
   0.4570436,
   0.6681169};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.04811858);
   Graph_Graph3004->SetMaximum(2.195533);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_theta0_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
