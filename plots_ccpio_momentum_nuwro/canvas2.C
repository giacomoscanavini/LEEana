#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Mar 12 14:46:52 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-184.6154,-14.78398,1353.846,1634.796);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,238.4976);
   hmc__4->SetBinContent(2,739.1988);
   hmc__4->SetBinContent(3,585.3871);
   hmc__4->SetBinContent(4,426.278);
   hmc__4->SetBinContent(5,260.823);
   hmc__4->SetBinContent(6,147.1104);
   hmc__4->SetBinContent(7,78.8881);
   hmc__4->SetBinContent(8,42.8469);
   hmc__4->SetBinContent(9,28.92444);
   hmc__4->SetBinContent(10,18.10586);
   hmc__4->SetBinContent(11,12.48335);
   hmc__4->SetBinContent(12,10.06386);
   hmc__4->SetBinContent(13,45.69447);
   hmc__4->SetBinError(1,48.55904);
   hmc__4->SetBinError(2,174.9753);
   hmc__4->SetBinError(3,158.3642);
   hmc__4->SetBinError(4,108.2758);
   hmc__4->SetBinError(5,60.7484);
   hmc__4->SetBinError(6,30.21165);
   hmc__4->SetBinError(7,17.49829);
   hmc__4->SetBinError(8,10.91741);
   hmc__4->SetBinError(9,6.822857);
   hmc__4->SetBinError(10,4.811753);
   hmc__4->SetBinError(11,3.589949);
   hmc__4->SetBinError(12,2.946524);
   hmc__4->SetBinError(13,9.94691);
   hmc__4->SetMinimum(-14.78398);
   hmc__4->SetMaximum(1552.317);
   hmc__4->SetEntries(2626.225);
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
   hs2_stack_2->SetMinimum(-1.166102e-08);
   hs2_stack_2->SetMaximum(776.1587);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.9127098);
   hbadmatch_stack_1->SetBinContent(2,3.98175);
   hbadmatch_stack_1->SetBinContent(3,4.908942);
   hbadmatch_stack_1->SetBinContent(4,1.612941);
   hbadmatch_stack_1->SetBinContent(5,2.48385);
   hbadmatch_stack_1->SetBinContent(6,1.146108);
   hbadmatch_stack_1->SetBinContent(7,0.6793121);
   hbadmatch_stack_1->SetBinContent(8,0.7211752);
   hbadmatch_stack_1->SetBinContent(9,0.2333977);
   hbadmatch_stack_1->SetBinContent(13,0.4459144);
   hbadmatch_stack_1->SetBinError(1,0.554787);
   hbadmatch_stack_1->SetBinError(2,1.155833);
   hbadmatch_stack_1->SetBinError(3,1.335915);
   hbadmatch_stack_1->SetBinError(4,0.6864489);
   hbadmatch_stack_1->SetBinError(5,0.9791741);
   hbadmatch_stack_1->SetBinError(6,0.601883);
   hbadmatch_stack_1->SetBinError(7,0.5033032);
   hbadmatch_stack_1->SetBinError(8,0.5240306);
   hbadmatch_stack_1->SetBinError(9,0.2333977);
   hbadmatch_stack_1->SetBinError(13,0.4459143);
   hbadmatch_stack_1->SetEntries(55);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,0.7572465);
   houtFV_stack_4->SetBinContent(2,0.4667954);
   houtFV_stack_4->SetBinContent(3,1.358624);
   houtFV_stack_4->SetBinContent(4,0.6793121);
   houtFV_stack_4->SetBinContent(5,2.450862);
   houtFV_stack_4->SetBinContent(6,1.146108);
   houtFV_stack_4->SetBinError(1,0.4396712);
   houtFV_stack_4->SetBinError(2,0.3300742);
   houtFV_stack_4->SetBinError(3,0.7117782);
   houtFV_stack_4->SetBinError(4,0.5033032);
   houtFV_stack_4->SetBinError(5,0.9574007);
   houtFV_stack_4->SetBinError(6,0.601883);
   houtFV_stack_4->SetEntries(22);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04681417);
   hNCpi0inFVcoh_stack_5->SetEntries(5);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.170042);
   hNCpi0inFVres_stack_7->SetBinContent(2,14.28405);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.2971);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.80827);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.087826);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.845544);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.876972);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.422132);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.132804);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.1986157);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1324105);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2893277);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.298317);
   hNCpi0inFVres_stack_7->SetBinError(1,0.755863);
   hNCpi0inFVres_stack_7->SetBinError(2,1.379159);
   hNCpi0inFVres_stack_7->SetBinError(3,1.194606);
   hNCpi0inFVres_stack_7->SetBinError(4,1.336795);
   hNCpi0inFVres_stack_7->SetBinError(5,1.138763);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5682193);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5898987);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5251233);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4571733);
   hNCpi0inFVres_stack_7->SetBinError(10,0.08108451);
   hNCpi0inFVres_stack_7->SetBinError(11,0.06620523);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2583545);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4631267);
   hNCpi0inFVres_stack_7->SetEntries(979);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.210066);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.01598);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.717169);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.062139);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.730225);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.299991);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.09278);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8189695);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3972314);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2648209);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4217381);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.09930784);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.554542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7345414);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.048249);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.233785);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7905229);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.023342);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4364342);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4906987);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2903095);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1146708);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.09362833);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2667025);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.05733541);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5292803);
   hNCpi0inFVdis_stack_8->SetEntries(747);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,159.8792);
   hCCpi0inFV_stack_10->SetBinContent(2,557.5771);
   hCCpi0inFV_stack_10->SetBinContent(3,436.5769);
   hCCpi0inFV_stack_10->SetBinContent(4,326.4524);
   hCCpi0inFV_stack_10->SetBinContent(5,188.6396);
   hCCpi0inFV_stack_10->SetBinContent(6,96.21698);
   hCCpi0inFV_stack_10->SetBinContent(7,55.28465);
   hCCpi0inFV_stack_10->SetBinContent(8,29.37747);
   hCCpi0inFV_stack_10->SetBinContent(9,20.22949);
   hCCpi0inFV_stack_10->SetBinContent(10,12.33202);
   hCCpi0inFV_stack_10->SetBinContent(11,7.451551);
   hCCpi0inFV_stack_10->SetBinContent(12,5.386838);
   hCCpi0inFV_stack_10->SetBinContent(13,22.37183);
   hCCpi0inFV_stack_10->SetBinError(1,7.432602);
   hCCpi0inFV_stack_10->SetBinError(2,13.83347);
   hCCpi0inFV_stack_10->SetBinError(3,12.29383);
   hCCpi0inFV_stack_10->SetBinError(4,10.60975);
   hCCpi0inFV_stack_10->SetBinError(5,7.987536);
   hCCpi0inFV_stack_10->SetBinError(6,5.741887);
   hCCpi0inFV_stack_10->SetBinError(7,4.383054);
   hCCpi0inFV_stack_10->SetBinError(8,3.189574);
   hCCpi0inFV_stack_10->SetBinError(9,2.680557);
   hCCpi0inFV_stack_10->SetBinError(10,2.027363);
   hCCpi0inFV_stack_10->SetBinError(11,1.695979);
   hCCpi0inFV_stack_10->SetBinError(12,1.309229);
   hCCpi0inFV_stack_10->SetBinError(13,2.73786);
   hCCpi0inFV_stack_10->SetEntries(6199);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,3.863356);
   hNCinFV_stack_11->SetBinContent(2,14.05304);
   hNCinFV_stack_11->SetBinContent(3,7.068281);
   hNCinFV_stack_11->SetBinContent(4,4.755184);
   hNCinFV_stack_11->SetBinContent(5,3.39656);
   hNCinFV_stack_11->SetBinContent(6,2.950646);
   hNCinFV_stack_11->SetBinContent(7,0.7001932);
   hNCinFV_stack_11->SetBinContent(8,0.9127098);
   hNCinFV_stack_11->SetBinContent(9,0.6793121);
   hNCinFV_stack_11->SetBinContent(10,0.2333977);
   hNCinFV_stack_11->SetBinContent(11,0.4667954);
   hNCinFV_stack_11->SetBinContent(12,0.2333977);
   hNCinFV_stack_11->SetBinContent(13,2.037936);
   hNCinFV_stack_11->SetBinError(1,1.172825);
   hNCinFV_stack_11->SetBinError(2,2.274913);
   hNCinFV_stack_11->SetBinError(3,1.55172);
   hNCinFV_stack_11->SetBinError(4,1.331615);
   hNCinFV_stack_11->SetBinError(5,1.12542);
   hNCinFV_stack_11->SetBinError(6,1.033311);
   hNCinFV_stack_11->SetBinError(7,0.4042567);
   hNCinFV_stack_11->SetBinError(8,0.554787);
   hNCinFV_stack_11->SetBinError(9,0.5033032);
   hNCinFV_stack_11->SetBinError(10,0.2333977);
   hNCinFV_stack_11->SetBinError(11,0.3300742);
   hNCinFV_stack_11->SetBinError(12,0.2333977);
   hNCinFV_stack_11->SetBinError(13,0.8717467);
   hNCinFV_stack_11->SetEntries(128);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,63.63879);
   hnumuCCinFV_stack_12->SetBinContent(2,137.9926);
   hnumuCCinFV_stack_12->SetBinContent(3,114.0352);
   hnumuCCinFV_stack_12->SetBinContent(4,76.44095);
   hnumuCCinFV_stack_12->SetBinContent(5,49.29881);
   hnumuCCinFV_stack_12->SetBinContent(6,40.27159);
   hnumuCCinFV_stack_12->SetBinContent(7,18.2542);
   hnumuCCinFV_stack_12->SetBinContent(8,9.361052);
   hnumuCCinFV_stack_12->SetBinContent(9,6.252209);
   hnumuCCinFV_stack_12->SetBinContent(10,5.077002);
   hnumuCCinFV_stack_12->SetBinContent(11,4.010856);
   hnumuCCinFV_stack_12->SetBinContent(12,3.163163);
   hnumuCCinFV_stack_12->SetBinContent(13,16.5611);
   hnumuCCinFV_stack_12->SetBinError(1,5.611422);
   hnumuCCinFV_stack_12->SetBinError(2,7.761806);
   hnumuCCinFV_stack_12->SetBinError(3,6.417717);
   hnumuCCinFV_stack_12->SetBinError(4,5.138305);
   hnumuCCinFV_stack_12->SetBinError(5,4.227197);
   hnumuCCinFV_stack_12->SetBinError(6,3.993868);
   hnumuCCinFV_stack_12->SetBinError(7,2.481083);
   hnumuCCinFV_stack_12->SetBinError(8,1.769848);
   hnumuCCinFV_stack_12->SetBinError(9,1.432221);
   hnumuCCinFV_stack_12->SetBinError(10,1.293);
   hnumuCCinFV_stack_12->SetBinError(11,1.189363);
   hnumuCCinFV_stack_12->SetBinError(12,1.100952);
   hnumuCCinFV_stack_12->SetBinError(13,2.405704);
   hnumuCCinFV_stack_12->SetEntries(1718);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(2,1.571141);
   hnueCCinFV_stack_13->SetBinContent(3,1.358624);
   hnueCCinFV_stack_13->SetBinContent(4,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(5,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(6,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(8,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.8918287);
   hnueCCinFV_stack_13->SetBinContent(13,1.358624);
   hnueCCinFV_stack_13->SetBinError(2,0.8068416);
   hnueCCinFV_stack_13->SetBinError(3,0.7117782);
   hnueCCinFV_stack_13->SetBinError(4,0.3300742);
   hnueCCinFV_stack_13->SetBinError(5,0.4459143);
   hnueCCinFV_stack_13->SetBinError(6,0.2333977);
   hnueCCinFV_stack_13->SetBinError(8,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.6306181);
   hnueCCinFV_stack_13->SetBinError(13,0.7117782);
   hnueCCinFV_stack_13->SetEntries(19);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,238.4976);
   hmcerror__5->SetBinContent(2,739.1988);
   hmcerror__5->SetBinContent(3,585.3871);
   hmcerror__5->SetBinContent(4,426.278);
   hmcerror__5->SetBinContent(5,260.823);
   hmcerror__5->SetBinContent(6,147.1104);
   hmcerror__5->SetBinContent(7,78.8881);
   hmcerror__5->SetBinContent(8,42.8469);
   hmcerror__5->SetBinContent(9,28.92444);
   hmcerror__5->SetBinContent(10,18.10586);
   hmcerror__5->SetBinContent(11,12.48335);
   hmcerror__5->SetBinContent(12,10.06386);
   hmcerror__5->SetBinContent(13,45.69447);
   hmcerror__5->SetBinError(1,48.55904);
   hmcerror__5->SetBinError(2,174.9753);
   hmcerror__5->SetBinError(3,158.3642);
   hmcerror__5->SetBinError(4,108.2758);
   hmcerror__5->SetBinError(5,60.7484);
   hmcerror__5->SetBinError(6,30.21165);
   hmcerror__5->SetBinError(7,17.49829);
   hmcerror__5->SetBinError(8,10.91741);
   hmcerror__5->SetBinError(9,6.822857);
   hmcerror__5->SetBinError(10,4.811753);
   hmcerror__5->SetBinError(11,3.589949);
   hmcerror__5->SetBinError(12,2.946524);
   hmcerror__5->SetBinError(13,9.94691);
   hmcerror__5->SetEntries(2626.225);

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
   167,
   586,
   444,
   292,
   201,
   117,
   87,
   52,
   30,
   19,
   12,
   12};
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
   12.92285,
   24.20744,
   21.07131,
   17.08801,
   14.17745,
   10.81665,
   9.4503,
   7.3419,
   5.6197,
   4.5151,
   3.64022,
   3.64022};
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
   12.92285,
   24.20744,
   21.07131,
   17.08801,
   14.17745,
   10.81665,
   9.2488,
   7.1381,
   5.4117,
   4.3011,
   3.4155,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(7.523802);
   Graph_Graph3005->SetMaximum(670.3922);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.78#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2019.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 16.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 6.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  40.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1895.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 39.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 527.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_4_pi0_momentum_all");
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
   0.2036039,
   0.2367095,
   0.270529,
   0.2540028,
   0.2329105,
   0.2053672,
   0.2218115,
   0.2548004,
   0.2358855,
   0.2657567,
   0.2875789,
   0.2927826};
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
   0.2036039,
   0.2367095,
   0.270529,
   0.2540028,
   0.2329105,
   0.2053672,
   0.2218115,
   0.2548004,
   0.2358855,
   0.2657567,
   0.2875789,
   0.2927826};
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
   0.2036039,
   0.2367095,
   0.270529,
   0.2540028,
   0.2329105,
   0.2053672,
   0.2218115,
   0.2548004,
   0.2358855,
   0.2657567,
   0.2875789,
   0.2927826};
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
   0.2036039,
   0.2367095,
   0.270529,
   0.2540028,
   0.2329105,
   0.2053672,
   0.2218115,
   0.2548004,
   0.2358855,
   0.2657567,
   0.2875789,
   0.2927826};
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
   0.7002167,
   0.7927502,
   0.7584725,
   0.684999,
   0.7706377,
   0.7953212,
   1.102828,
   1.213623,
   1.037185,
   1.049384,
   0.9612802,
   1.192385};
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
   0.05418439,
   0.03274821,
   0.03599551,
   0.04008653,
   0.05435659,
   0.07352748,
   0.1197937,
   0.1713519,
   0.194289,
   0.2493723,
   0.291606,
   0.361712};
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
   0.05418439,
   0.03274821,
   0.03599551,
   0.04008653,
   0.05435659,
   0.07352748,
   0.1172395,
   0.1665955,
   0.1870978,
   0.237553,
   0.2736044,
   0.3393826};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.5562269);
   Graph_Graph3008->SetMaximum(1.620453);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
