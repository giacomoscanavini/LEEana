#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Jan 15 16:41:41 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-6.01444,1353.846,665.0705);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,137.319);
   hmc__7->SetBinContent(2,300.722);
   hmc__7->SetBinContent(3,250.0489);
   hmc__7->SetBinContent(4,201.7442);
   hmc__7->SetBinContent(5,126.4441);
   hmc__7->SetBinContent(6,79.79496);
   hmc__7->SetBinContent(7,46.04233);
   hmc__7->SetBinContent(8,31.43914);
   hmc__7->SetBinContent(9,21.60891);
   hmc__7->SetBinContent(10,16.59949);
   hmc__7->SetBinContent(11,12.25989);
   hmc__7->SetBinContent(12,10.93546);
   hmc__7->SetBinContent(13,97.15558);
   hmc__7->SetBinError(1,39.16891);
   hmc__7->SetBinError(2,82.7502);
   hmc__7->SetBinError(3,65.59131);
   hmc__7->SetBinError(4,52.88422);
   hmc__7->SetBinError(5,49.24661);
   hmc__7->SetBinError(6,26.69626);
   hmc__7->SetBinError(7,22.18445);
   hmc__7->SetBinError(8,14.50507);
   hmc__7->SetBinError(9,13.88309);
   hmc__7->SetBinError(10,12.16681);
   hmc__7->SetBinError(11,9.085166);
   hmc__7->SetBinError(12,10.48335);
   hmc__7->SetBinError(13,32.66633);
   hmc__7->SetMinimum(-6.01444);
   hmc__7->SetMaximum(631.5162);
   hmc__7->SetEntries(1302.786);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1200);
   hs3_stack_3->SetMinimum(-1.166102e-08);
   hs3_stack_3->SetMaximum(315.7581);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,9.671158);
   hbadmatch_stack_1->SetBinContent(2,14.9001);
   hbadmatch_stack_1->SetBinContent(3,9.784737);
   hbadmatch_stack_1->SetBinContent(4,4.033166);
   hbadmatch_stack_1->SetBinContent(5,5.874578);
   hbadmatch_stack_1->SetBinContent(6,3.681029);
   hbadmatch_stack_1->SetBinContent(7,1.89674);
   hbadmatch_stack_1->SetBinContent(8,0.9743184);
   hbadmatch_stack_1->SetBinContent(9,0.4459144);
   hbadmatch_stack_1->SetBinContent(10,0.2333977);
   hbadmatch_stack_1->SetBinContent(11,0.2333977);
   hbadmatch_stack_1->SetBinContent(12,0.7273345);
   hbadmatch_stack_1->SetBinContent(13,4.769522);
   hbadmatch_stack_1->SetBinError(1,1.918765);
   hbadmatch_stack_1->SetBinError(2,2.384388);
   hbadmatch_stack_1->SetBinError(3,1.856872);
   hbadmatch_stack_1->SetBinError(4,1.211377);
   hbadmatch_stack_1->SetBinError(5,1.656898);
   hbadmatch_stack_1->SetBinError(6,1.115319);
   hbadmatch_stack_1->SetBinError(7,0.8677309);
   hbadmatch_stack_1->SetBinError(8,0.4884344);
   hbadmatch_stack_1->SetBinError(9,0.4459143);
   hbadmatch_stack_1->SetBinError(10,0.2333977);
   hbadmatch_stack_1->SetBinError(11,0.2333977);
   hbadmatch_stack_1->SetBinError(12,0.527292);
   hbadmatch_stack_1->SetBinError(13,1.34806);
   hbadmatch_stack_1->SetEntries(171);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,40.85255);
   houtFV_stack_4->SetBinContent(2,68.97941);
   houtFV_stack_4->SetBinContent(3,53.27564);
   houtFV_stack_4->SetBinContent(4,41.35712);
   houtFV_stack_4->SetBinContent(5,25.65546);
   houtFV_stack_4->SetBinContent(6,19.1777);
   houtFV_stack_4->SetBinContent(7,11.5598);
   houtFV_stack_4->SetBinContent(8,10.83501);
   houtFV_stack_4->SetBinContent(9,4.563549);
   houtFV_stack_4->SetBinContent(10,6.192713);
   houtFV_stack_4->SetBinContent(11,3.859557);
   houtFV_stack_4->SetBinContent(12,3.223337);
   houtFV_stack_4->SetBinContent(13,24.68021);
   houtFV_stack_4->SetBinError(1,3.751265);
   houtFV_stack_4->SetBinError(2,5.073302);
   houtFV_stack_4->SetBinError(3,4.319544);
   houtFV_stack_4->SetBinError(4,3.928969);
   houtFV_stack_4->SetBinError(5,3.043065);
   houtFV_stack_4->SetBinError(6,2.548561);
   houtFV_stack_4->SetBinError(7,2.036586);
   houtFV_stack_4->SetBinError(8,1.917951);
   houtFV_stack_4->SetBinError(9,1.240541);
   houtFV_stack_4->SetBinError(10,1.490097);
   houtFV_stack_4->SetBinError(11,1.290679);
   houtFV_stack_4->SetBinError(12,1.016196);
   houtFV_stack_4->SetBinError(13,2.942721);
   houtFV_stack_4->SetEntries(1008);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.777271);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.232505);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.984876);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.530035);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.207999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.455234);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6534564);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.472426);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3742577);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6456928);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5425706);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4713352);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5991146);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5261657);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2807146);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.403832);
   hNCpi0inFVcoh_stack_5->SetEntries(215);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4965392);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8103737);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1282059);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3757188);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05733541);
   hNCpi0inFVqe_stack_6->SetEntries(52);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.2954);
   hNCpi0inFVres_stack_7->SetBinContent(2,58.29094);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.74667);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.10085);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.71721);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.14501);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.01549);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.706605);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.663626);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.58033);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.08379);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.1414);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.14097);
   hNCpi0inFVres_stack_7->SetBinError(1,1.810404);
   hNCpi0inFVres_stack_7->SetBinError(2,2.88662);
   hNCpi0inFVres_stack_7->SetBinError(3,2.823391);
   hNCpi0inFVres_stack_7->SetBinError(4,2.699102);
   hNCpi0inFVres_stack_7->SetBinError(5,2.081503);
   hNCpi0inFVres_stack_7->SetBinError(6,1.725602);
   hNCpi0inFVres_stack_7->SetBinError(7,1.317843);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7456459);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9167404);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3308816);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3050342);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3900288);
   hNCpi0inFVres_stack_7->SetBinError(13,1.331904);
   hNCpi0inFVres_stack_7->SetEntries(4650);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.34287);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.31508);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.43762);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.87487);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.104624);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.938323);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.738034);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.587645);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.852466);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5872512);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9096814);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.033496);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.466685);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8651928);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.312464);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.418614);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.412033);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9891339);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7507718);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.762296);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5303145);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5385162);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2767835);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3800684);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4535638);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8999037);
   hNCpi0inFVdis_stack_8->SetEntries(1133);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03310261);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,28.38573);
   hCCpi0inFV_stack_10->SetBinContent(2,68.71907);
   hCCpi0inFV_stack_10->SetBinContent(3,62.41607);
   hCCpi0inFV_stack_10->SetBinContent(4,53.2975);
   hCCpi0inFV_stack_10->SetBinContent(5,33.58583);
   hCCpi0inFV_stack_10->SetBinContent(6,16.73238);
   hCCpi0inFV_stack_10->SetBinContent(7,7.96011);
   hCCpi0inFV_stack_10->SetBinContent(8,5.518021);
   hCCpi0inFV_stack_10->SetBinContent(9,5.927389);
   hCCpi0inFV_stack_10->SetBinContent(10,3.225806);
   hCCpi0inFV_stack_10->SetBinContent(11,3.39656);
   hCCpi0inFV_stack_10->SetBinContent(12,1.846301);
   hCCpi0inFV_stack_10->SetBinContent(13,19.16138);
   hCCpi0inFV_stack_10->SetBinError(1,2.974945);
   hCCpi0inFV_stack_10->SetBinError(2,4.928499);
   hCCpi0inFV_stack_10->SetBinError(3,4.669301);
   hCCpi0inFV_stack_10->SetBinError(4,4.364403);
   hCCpi0inFV_stack_10->SetBinError(5,3.406264);
   hCCpi0inFV_stack_10->SetBinError(6,2.415231);
   hCCpi0inFV_stack_10->SetBinError(7,1.674967);
   hCCpi0inFV_stack_10->SetBinError(8,1.291104);
   hCCpi0inFV_stack_10->SetBinError(9,1.499829);
   hCCpi0inFV_stack_10->SetBinError(10,0.9707853);
   hCCpi0inFV_stack_10->SetBinError(11,1.12542);
   hCCpi0inFV_stack_10->SetBinError(12,0.7250425);
   hCCpi0inFV_stack_10->SetBinError(13,2.62655);
   hCCpi0inFV_stack_10->SetEntries(994);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,9.847073);
   hNCinFV_stack_11->SetBinContent(2,19.93345);
   hNCinFV_stack_11->SetBinContent(3,12.0151);
   hNCinFV_stack_11->SetBinContent(4,10.23144);
   hNCinFV_stack_11->SetBinContent(5,5.730537);
   hNCinFV_stack_11->SetBinContent(6,4.351032);
   hNCinFV_stack_11->SetBinContent(7,1.846301);
   hNCinFV_stack_11->SetBinContent(8,2.058817);
   hNCinFV_stack_11->SetBinContent(9,0.6793121);
   hNCinFV_stack_11->SetBinContent(10,0.4667954);
   hNCinFV_stack_11->SetBinContent(11,1.146108);
   hNCinFV_stack_11->SetBinContent(12,0.2333977);
   hNCinFV_stack_11->SetBinContent(13,3.417441);
   hNCinFV_stack_11->SetBinError(1,1.850643);
   hNCinFV_stack_11->SetBinError(2,2.720401);
   hNCinFV_stack_11->SetBinError(3,2.101259);
   hNCinFV_stack_11->SetBinError(4,1.902611);
   hNCinFV_stack_11->SetBinError(5,1.345851);
   hNCinFV_stack_11->SetBinError(6,1.180922);
   hNCinFV_stack_11->SetBinError(7,0.7250425);
   hNCinFV_stack_11->SetBinError(8,0.8185668);
   hNCinFV_stack_11->SetBinError(9,0.5033032);
   hNCinFV_stack_11->SetBinError(10,0.3300742);
   hNCinFV_stack_11->SetBinError(11,0.601883);
   hNCinFV_stack_11->SetBinError(12,0.2333977);
   hNCinFV_stack_11->SetBinError(13,1.084749);
   hNCinFV_stack_11->SetEntries(228);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,19.86806);
   hnumuCCinFV_stack_12->SetBinContent(2,54.35503);
   hnumuCCinFV_stack_12->SetBinContent(3,39.25397);
   hnumuCCinFV_stack_12->SetBinContent(4,27.19056);
   hnumuCCinFV_stack_12->SetBinContent(5,14.95643);
   hnumuCCinFV_stack_12->SetBinContent(6,10.01465);
   hnumuCCinFV_stack_12->SetBinContent(7,6.893385);
   hnumuCCinFV_stack_12->SetBinContent(8,5.336985);
   hnumuCCinFV_stack_12->SetBinContent(9,2.565292);
   hnumuCCinFV_stack_12->SetBinContent(10,4.180782);
   hnumuCCinFV_stack_12->SetBinContent(11,1.498389);
   hnumuCCinFV_stack_12->SetBinContent(12,2.564682);
   hnumuCCinFV_stack_12->SetBinContent(13,19.65289);
   hnumuCCinFV_stack_12->SetBinError(1,3.597591);
   hnumuCCinFV_stack_12->SetBinError(2,4.692201);
   hnumuCCinFV_stack_12->SetBinError(3,4.606379);
   hnumuCCinFV_stack_12->SetBinError(4,3.287928);
   hnumuCCinFV_stack_12->SetBinError(5,2.605156);
   hnumuCCinFV_stack_12->SetBinError(6,1.928949);
   hnumuCCinFV_stack_12->SetBinError(7,1.549842);
   hnumuCCinFV_stack_12->SetBinError(8,1.316757);
   hnumuCCinFV_stack_12->SetBinError(9,0.8737354);
   hnumuCCinFV_stack_12->SetBinError(10,1.752663);
   hnumuCCinFV_stack_12->SetBinError(11,0.8014861);
   hnumuCCinFV_stack_12->SetBinError(12,1.048851);
   hnumuCCinFV_stack_12->SetBinError(13,2.933151);
   hnumuCCinFV_stack_12->SetEntries(621);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.5923644);
   hnueCCinFV_stack_13->SetBinContent(2,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(3,0.2575838);
   hnueCCinFV_stack_13->SetBinContent(4,3.02938);
   hnueCCinFV_stack_13->SetBinContent(5,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(6,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(7,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(9,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(13,6.294749);
   hnueCCinFV_stack_13->SetBinError(1,0.4281724);
   hnueCCinFV_stack_13->SetBinError(2,0.3300742);
   hnueCCinFV_stack_13->SetBinError(3,0.2575838);
   hnueCCinFV_stack_13->SetBinError(4,1.934134);
   hnueCCinFV_stack_13->SetBinError(5,0.4459143);
   hnueCCinFV_stack_13->SetBinError(6,0.2333977);
   hnueCCinFV_stack_13->SetBinError(7,0.4459143);
   hnueCCinFV_stack_13->SetBinError(9,0.2333977);
   hnueCCinFV_stack_13->SetBinError(13,2.128339);
   hnueCCinFV_stack_13->SetEntries(28);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,137.319);
   hmcerror__8->SetBinContent(2,300.722);
   hmcerror__8->SetBinContent(3,250.0489);
   hmcerror__8->SetBinContent(4,201.7442);
   hmcerror__8->SetBinContent(5,126.4441);
   hmcerror__8->SetBinContent(6,79.79496);
   hmcerror__8->SetBinContent(7,46.04233);
   hmcerror__8->SetBinContent(8,31.43914);
   hmcerror__8->SetBinContent(9,21.60891);
   hmcerror__8->SetBinContent(10,16.59949);
   hmcerror__8->SetBinContent(11,12.25989);
   hmcerror__8->SetBinContent(12,10.93546);
   hmcerror__8->SetBinContent(13,97.15558);
   hmcerror__8->SetBinError(1,39.16891);
   hmcerror__8->SetBinError(2,82.7502);
   hmcerror__8->SetBinError(3,65.59131);
   hmcerror__8->SetBinError(4,52.88422);
   hmcerror__8->SetBinError(5,49.24661);
   hmcerror__8->SetBinError(6,26.69626);
   hmcerror__8->SetBinError(7,22.18445);
   hmcerror__8->SetBinError(8,14.50507);
   hmcerror__8->SetBinError(9,13.88309);
   hmcerror__8->SetBinError(10,12.16681);
   hmcerror__8->SetBinError(11,9.085166);
   hmcerror__8->SetBinError(12,10.48335);
   hmcerror__8->SetBinError(13,32.66633);
   hmcerror__8->SetEntries(1302.786);

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
   Double_t _fy3009[12] = {
   116,
   286,
   224,
   172,
   111,
   86,
   50,
   25,
   15,
   15,
   15,
   9};
   Double_t _felx3009[12] = {
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
   Double_t _fely3009[12] = {
   10.77033,
   16.91153,
   14.96663,
   13.11488,
   10.53565,
   9.3967,
   7.2025,
   5.1474,
   4.0385,
   4.0385,
   4.0385,
   3.19354};
   Double_t _fehx3009[12] = {
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
   Double_t _fehy3009[12] = {
   10.77033,
   16.91153,
   14.96663,
   13.11488,
   10.53565,
   9.1951,
   6.9985,
   4.9374,
   3.8197,
   3.8197,
   3.8197,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(5.225814);
   Graph_Graph3009->SetMaximum(332.622);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.19","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.3/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1124.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 52.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 289.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  260.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  63.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 291.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 68.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 188.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[12] = {
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
   Double_t _fely3010[12] = {
   0.2852402,
   0.2751718,
   0.262314,
   0.262135,
   0.3894734,
   0.3345608,
   0.4818272,
   0.4613699,
   0.6424705,
   0.732963,
   0.7410476,
   0.9586567};
   Double_t _fehx3010[12] = {
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
   Double_t _fehy3010[12] = {
   0.2852402,
   0.2751718,
   0.262314,
   0.262135,
   0.3894734,
   0.3345608,
   0.4818272,
   0.4613699,
   0.6424705,
   0.732963,
   0.7410476,
   0.9586567};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   Double_t _fely3011[12] = {
   0.1925076,
   0.2001899,
   0.2213468,
   0.2185316,
   0.2148651,
   0.2064489,
   0.2187479,
   0.2189805,
   0.2473881,
   0.2544164,
   0.2543542,
   0.2647509};
   Double_t _fehx3011[12] = {
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
   Double_t _fehy3011[12] = {
   0.1925076,
   0.2001899,
   0.2213468,
   0.2185316,
   0.2148651,
   0.2064489,
   0.2187479,
   0.2189805,
   0.2473881,
   0.2544164,
   0.2543542,
   0.2647509};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
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
   Double_t _fy3012[12] = {
   0.8447482,
   0.9510444,
   0.8958249,
   0.8525646,
   0.8778583,
   1.077762,
   1.085957,
   0.7951872,
   0.6941582,
   0.9036425,
   1.223502,
   0.8230106};
   Double_t _felx3012[12] = {
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
   Double_t _fely3012[12] = {
   0.0784329,
   0.05623644,
   0.05985482,
   0.06500744,
   0.08332262,
   0.1177606,
   0.1564321,
   0.1637259,
   0.1868905,
   0.2432907,
   0.3294074,
   0.2920353};
   Double_t _fehx3012[12] = {
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
   Double_t _fehy3012[12] = {
   0.0784329,
   0.05623644,
   0.05985482,
   0.06500744,
   0.08332262,
   0.1152341,
   0.1520014,
   0.1570463,
   0.1767651,
   0.2301095,
   0.3115606,
   0.2705145};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.4044882);
   Graph_Graph3012->SetMaximum(1.637842);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_6_pi0_momentum_all",12,0,1200);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
