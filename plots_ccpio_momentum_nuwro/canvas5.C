#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Mar 12 14:46:53 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-184.6154,-24.61983,1353.846,2722.435);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__13->SetBinContent(1,407.6755);
   hmc__13->SetBinContent(2,1230.992);
   hmc__13->SetBinContent(3,900.5571);
   hmc__13->SetBinContent(4,602.0098);
   hmc__13->SetBinContent(5,358.8007);
   hmc__13->SetBinContent(6,188.1561);
   hmc__13->SetBinContent(7,95.85932);
   hmc__13->SetBinContent(8,65.82758);
   hmc__13->SetBinContent(9,33.20676);
   hmc__13->SetBinContent(10,19.59148);
   hmc__13->SetBinContent(11,19.33147);
   hmc__13->SetBinContent(12,12.82534);
   hmc__13->SetBinContent(13,52.83857);
   hmc__13->SetBinError(1,105.4692);
   hmc__13->SetBinError(2,315.6187);
   hmc__13->SetBinError(3,258.3817);
   hmc__13->SetBinError(4,169.8086);
   hmc__13->SetBinError(5,89.66715);
   hmc__13->SetBinError(6,43.33958);
   hmc__13->SetBinError(7,21.92772);
   hmc__13->SetBinError(8,15.75888);
   hmc__13->SetBinError(9,8.269516);
   hmc__13->SetBinError(10,4.97);
   hmc__13->SetBinError(11,5.701757);
   hmc__13->SetBinError(12,3.756901);
   hmc__13->SetBinError(13,11.75118);
   hmc__13->SetMinimum(-24.61983);
   hmc__13->SetMaximum(2585.083);
   hmc__13->SetEntries(3971.639);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",12,0,1200);
   hs5_stack_5->SetMinimum(-1.166102e-08);
   hs5_stack_5->SetMaximum(1292.541);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.4667954);
   hbadmatch_stack_1->SetBinContent(2,2.856523);
   hbadmatch_stack_1->SetBinContent(3,3.712067);
   hbadmatch_stack_1->SetBinContent(4,3.011535);
   hbadmatch_stack_1->SetBinContent(5,1.571141);
   hbadmatch_stack_1->SetBinContent(6,2.442777);
   hbadmatch_stack_1->SetBinContent(7,1.337743);
   hbadmatch_stack_1->SetBinContent(8,0.2752608);
   hbadmatch_stack_1->SetBinContent(11,0.2333977);
   hbadmatch_stack_1->SetBinContent(13,0.6793121);
   hbadmatch_stack_1->SetBinError(1,0.3300742);
   hbadmatch_stack_1->SetBinError(2,0.9401042);
   hbadmatch_stack_1->SetBinError(3,1.124048);
   hbadmatch_stack_1->SetBinError(4,0.9990474);
   hbadmatch_stack_1->SetBinError(5,0.8068416);
   hbadmatch_stack_1->SetBinError(6,1.046142);
   hbadmatch_stack_1->SetBinError(7,0.7723463);
   hbadmatch_stack_1->SetBinError(8,0.2752608);
   hbadmatch_stack_1->SetBinError(11,0.2333977);
   hbadmatch_stack_1->SetBinError(13,0.5033032);
   hbadmatch_stack_1->SetEntries(52);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,1.146124);
   houtFV_stack_4->SetBinContent(2,4.626192);
   houtFV_stack_4->SetBinContent(3,7.781733);
   houtFV_stack_4->SetBinContent(4,2.250453);
   houtFV_stack_4->SetBinContent(5,4.033077);
   houtFV_stack_4->SetBinContent(6,1.571141);
   houtFV_stack_4->SetBinContent(7,0.8003959);
   houtFV_stack_4->SetBinContent(11,0.4459144);
   houtFV_stack_4->SetBinContent(12,0.4459144);
   houtFV_stack_4->SetBinContent(13,0.4667954);
   houtFV_stack_4->SetBinError(1,0.601883);
   houtFV_stack_4->SetBinError(2,1.126619);
   houtFV_stack_4->SetBinError(3,1.714778);
   houtFV_stack_4->SetBinError(4,0.9509508);
   houtFV_stack_4->SetBinError(5,1.272068);
   houtFV_stack_4->SetBinError(6,0.8068416);
   houtFV_stack_4->SetBinError(7,0.5176634);
   houtFV_stack_4->SetBinError(11,0.4459143);
   houtFV_stack_4->SetBinError(12,0.4459143);
   houtFV_stack_4->SetBinError(13,0.3300742);
   houtFV_stack_4->SetEntries(75);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetEntries(3);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.673503);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.94275);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.65264);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.328139);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.954628);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.291395);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.265214);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.678357);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.7110658);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.1655131);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.09930784);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.03310261);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.5872512);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7449108);
   hNCpi0inFVres_stack_7->SetBinError(2,1.404285);
   hNCpi0inFVres_stack_7->SetBinError(3,1.22312);
   hNCpi0inFVres_stack_7->SetBinError(4,1.116945);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9397598);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4973529);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4619422);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5842994);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3713183);
   hNCpi0inFVres_stack_7->SetBinError(10,0.0740197);
   hNCpi0inFVres_stack_7->SetBinError(11,0.05733541);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03310261);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2767835);
   hNCpi0inFVres_stack_7->SetEntries(838);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.813229);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.461831);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.220236);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.066471);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.836948);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.439717);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.207999);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.7858669);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2648209);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1655131);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4548407);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1655131);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.075195);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8550006);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.011589);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.140686);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9347756);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6162453);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6054823);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5991146);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.288416);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.09362833);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.0740197);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2687489);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0740197);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3872091);
   hNCpi0inFVdis_stack_8->SetEntries(630);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,289.958);
   hCCpi0inFV_stack_10->SetBinContent(2,952.0602);
   hCCpi0inFV_stack_10->SetBinContent(3,678.1808);
   hCCpi0inFV_stack_10->SetBinContent(4,475.14);
   hCCpi0inFV_stack_10->SetBinContent(5,260.0234);
   hCCpi0inFV_stack_10->SetBinContent(6,124.349);
   hCCpi0inFV_stack_10->SetBinContent(7,59.51162);
   hCCpi0inFV_stack_10->SetBinContent(8,44.07022);
   hCCpi0inFV_stack_10->SetBinContent(9,21.80063);
   hCCpi0inFV_stack_10->SetBinContent(10,12.17506);
   hCCpi0inFV_stack_10->SetBinContent(11,10.9163);
   hCCpi0inFV_stack_10->SetBinContent(12,7.61726);
   hCCpi0inFV_stack_10->SetBinContent(13,29.10231);
   hCCpi0inFV_stack_10->SetBinError(1,10.05628);
   hCCpi0inFV_stack_10->SetBinError(2,18.14747);
   hCCpi0inFV_stack_10->SetBinError(3,15.30819);
   hCCpi0inFV_stack_10->SetBinError(4,12.83111);
   hCCpi0inFV_stack_10->SetBinError(5,9.42746);
   hCCpi0inFV_stack_10->SetBinError(6,6.591894);
   hCCpi0inFV_stack_10->SetBinError(7,4.593056);
   hCCpi0inFV_stack_10->SetBinError(8,3.986526);
   hCCpi0inFV_stack_10->SetBinError(9,2.799353);
   hCCpi0inFV_stack_10->SetBinError(10,2.086838);
   hCCpi0inFV_stack_10->SetBinError(11,2.024218);
   hCCpi0inFV_stack_10->SetBinError(12,1.645685);
   hCCpi0inFV_stack_10->SetBinError(13,3.209157);
   hCCpi0inFV_stack_10->SetEntries(9551);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,3.417441);
   hNCinFV_stack_11->SetBinContent(2,12.2485);
   hNCinFV_stack_11->SetBinContent(3,7.705831);
   hNCinFV_stack_11->SetBinContent(4,4.096754);
   hNCinFV_stack_11->SetBinContent(5,5.22198);
   hNCinFV_stack_11->SetBinContent(6,2.759011);
   hNCinFV_stack_11->SetBinContent(7,0.2333977);
   hNCinFV_stack_11->SetBinContent(8,0.6793121);
   hNCinFV_stack_11->SetBinContent(9,0.4667954);
   hNCinFV_stack_11->SetBinContent(11,0.2333977);
   hNCinFV_stack_11->SetBinContent(12,0.4667954);
   hNCinFV_stack_11->SetBinContent(13,1.358624);
   hNCinFV_stack_11->SetBinError(1,1.084749);
   hNCinFV_stack_11->SetBinError(2,2.114181);
   hNCinFV_stack_11->SetBinError(3,1.685506);
   hNCinFV_stack_11->SetBinError(4,1.195824);
   hNCinFV_stack_11->SetBinError(5,1.371914);
   hNCinFV_stack_11->SetBinError(6,0.9129486);
   hNCinFV_stack_11->SetBinError(7,0.2333977);
   hNCinFV_stack_11->SetBinError(8,0.5033032);
   hNCinFV_stack_11->SetBinError(9,0.3300742);
   hNCinFV_stack_11->SetBinError(11,0.2333977);
   hNCinFV_stack_11->SetBinError(12,0.3300742);
   hNCinFV_stack_11->SetBinError(13,0.7117782);
   hNCinFV_stack_11->SetEntries(122);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,102.9339);
   hnumuCCinFV_stack_12->SetBinContent(2,236.0949);
   hnumuCCinFV_stack_12->SetBinContent(3,183.8248);
   hnumuCCinFV_stack_12->SetBinContent(4,103.6706);
   hnumuCCinFV_stack_12->SetBinContent(5,78.48026);
   hnumuCCinFV_stack_12->SetBinContent(6,51.39042);
   hnumuCCinFV_stack_12->SetBinContent(7,30.50296);
   hnumuCCinFV_stack_12->SetBinContent(8,18.10516);
   hnumuCCinFV_stack_12->SetBinContent(9,9.963453);
   hnumuCCinFV_stack_12->SetBinContent(10,7.085395);
   hnumuCCinFV_stack_12->SetBinContent(11,6.268991);
   hnumuCCinFV_stack_12->SetBinContent(12,4.096754);
   hnumuCCinFV_stack_12->SetBinContent(13,17.99795);
   hnumuCCinFV_stack_12->SetBinError(1,6.585157);
   hnumuCCinFV_stack_12->SetBinError(2,9.530962);
   hnumuCCinFV_stack_12->SetBinError(3,8.470256);
   hnumuCCinFV_stack_12->SetBinError(4,5.887174);
   hnumuCCinFV_stack_12->SetBinError(5,5.371891);
   hnumuCCinFV_stack_12->SetBinError(6,4.271724);
   hnumuCCinFV_stack_12->SetBinError(7,3.593152);
   hnumuCCinFV_stack_12->SetBinError(8,2.437865);
   hnumuCCinFV_stack_12->SetBinError(9,1.874891);
   hnumuCCinFV_stack_12->SetBinError(10,1.562522);
   hnumuCCinFV_stack_12->SetBinError(11,1.556577);
   hnumuCCinFV_stack_12->SetBinError(12,1.195824);
   hnumuCCinFV_stack_12->SetBinError(13,2.517592);
   hnumuCCinFV_stack_12->SetEntries(2690);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(2,1.444589);
   hnueCCinFV_stack_13->SetBinContent(3,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(4,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(5,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(6,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(8,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(11,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(13,1.571141);
   hnueCCinFV_stack_13->SetBinError(1,0.2333977);
   hnueCCinFV_stack_13->SetBinError(2,0.838584);
   hnueCCinFV_stack_13->SetBinError(3,0.4459143);
   hnueCCinFV_stack_13->SetBinError(4,0.4459143);
   hnueCCinFV_stack_13->SetBinError(5,0.5033032);
   hnueCCinFV_stack_13->SetBinError(6,0.554787);
   hnueCCinFV_stack_13->SetBinError(8,0.2333977);
   hnueCCinFV_stack_13->SetBinError(11,0.5033032);
   hnueCCinFV_stack_13->SetBinError(13,0.8068416);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__14->SetBinContent(1,407.6755);
   hmcerror__14->SetBinContent(2,1230.992);
   hmcerror__14->SetBinContent(3,900.5571);
   hmcerror__14->SetBinContent(4,602.0098);
   hmcerror__14->SetBinContent(5,358.8007);
   hmcerror__14->SetBinContent(6,188.1561);
   hmcerror__14->SetBinContent(7,95.85932);
   hmcerror__14->SetBinContent(8,65.82758);
   hmcerror__14->SetBinContent(9,33.20676);
   hmcerror__14->SetBinContent(10,19.59148);
   hmcerror__14->SetBinContent(11,19.33147);
   hmcerror__14->SetBinContent(12,12.82534);
   hmcerror__14->SetBinContent(13,52.83857);
   hmcerror__14->SetBinError(1,105.4692);
   hmcerror__14->SetBinError(2,315.6187);
   hmcerror__14->SetBinError(3,258.3817);
   hmcerror__14->SetBinError(4,169.8086);
   hmcerror__14->SetBinError(5,89.66715);
   hmcerror__14->SetBinError(6,43.33958);
   hmcerror__14->SetBinError(7,21.92772);
   hmcerror__14->SetBinError(8,15.75888);
   hmcerror__14->SetBinError(9,8.269516);
   hmcerror__14->SetBinError(10,4.97);
   hmcerror__14->SetBinError(11,5.701757);
   hmcerror__14->SetBinError(12,3.756901);
   hmcerror__14->SetBinError(13,11.75118);
   hmcerror__14->SetEntries(3971.639);

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
   
   Double_t _fx3017[12] = {
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
   Double_t _fy3017[12] = {
   294,
   945,
   615,
   387,
   259,
   151,
   101,
   52,
   35,
   23,
   17,
   10};
   Double_t _felx3017[12] = {
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
   Double_t _fely3017[12] = {
   17.14643,
   30.74085,
   24.79919,
   19.67232,
   16.09348,
   12.28821,
   10.04988,
   7.3419,
   6.0548,
   4.9457,
   4.2835,
   3.34883};
   Double_t _fehx3017[12] = {
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
   Double_t _fehy3017[12] = {
   17.14643,
   30.74085,
   24.79919,
   19.67232,
   16.09348,
   12.28821,
   10.04988,
   7.1381,
   5.8483,
   4.7346,
   4.0673,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(5.986053);
   Graph_Graph3017->SetMaximum(1072.65);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.73#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2889.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 23.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  48.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  35.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2935.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 832.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.1","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[12] = {
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
   Double_t _fy3018[12] = {
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
   Double_t _felx3018[12] = {
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
   Double_t _fely3018[12] = {
   0.2587088,
   0.2563938,
   0.2869132,
   0.2820695,
   0.249908,
   0.2303384,
   0.2287489,
   0.2393963,
   0.2490311,
   0.2536817,
   0.2949469,
   0.292928};
   Double_t _fehx3018[12] = {
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
   Double_t _fehy3018[12] = {
   0.2587088,
   0.2563938,
   0.2869132,
   0.2820695,
   0.249908,
   0.2303384,
   0.2287489,
   0.2393963,
   0.2490311,
   0.2536817,
   0.2949469,
   0.292928};
   grae = new TGraphAsymmErrors(12,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1320);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3019[12] = {
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
   Double_t _fy3019[12] = {
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
   Double_t _felx3019[12] = {
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
   Double_t _fely3019[12] = {
   0.2587088,
   0.2563938,
   0.2869132,
   0.2820695,
   0.249908,
   0.2303384,
   0.2287489,
   0.2393963,
   0.2490311,
   0.2536817,
   0.2949469,
   0.292928};
   Double_t _fehx3019[12] = {
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
   Double_t _fehy3019[12] = {
   0.2587088,
   0.2563938,
   0.2869132,
   0.2820695,
   0.249908,
   0.2303384,
   0.2287489,
   0.2393963,
   0.2490311,
   0.2536817,
   0.2949469,
   0.292928};
   grae = new TGraphAsymmErrors(12,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1320);
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
   
   Double_t _fx3020[12] = {
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
   Double_t _fy3020[12] = {
   0.7211618,
   0.7676737,
   0.6829106,
   0.6428466,
   0.7218492,
   0.802525,
   1.053627,
   0.7899425,
   1.054002,
   1.17398,
   0.8793953,
   0.7797065};
   Double_t _felx3020[12] = {
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
   Double_t _fely3020[12] = {
   0.04205901,
   0.02497243,
   0.02753761,
   0.03267773,
   0.04485352,
   0.06530856,
   0.1048398,
   0.1115323,
   0.1823363,
   0.2524413,
   0.2215817,
   0.2611104};
   Double_t _fehx3020[12] = {
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
   Double_t _fehy3020[12] = {
   0.04205901,
   0.02497243,
   0.02753761,
   0.03267773,
   0.04485352,
   0.06530856,
   0.1048398,
   0.1084363,
   0.1761177,
   0.2416662,
   0.2103979,
   0.2431047};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.428891);
   Graph_Graph3020->SetMaximum(1.505351);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   entry=leg->AddEntry("","Stat. + XS","F");

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
