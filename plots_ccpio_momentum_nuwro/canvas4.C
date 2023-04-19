#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Mar 12 14:46:53 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-16,1353.846,1769.263);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,262.3948);
   hmc__10->SetBinContent(2,744.1207);
   hmc__10->SetBinContent(3,705.9691);
   hmc__10->SetBinContent(4,549.1078);
   hmc__10->SetBinContent(5,352.682);
   hmc__10->SetBinContent(6,209.3849);
   hmc__10->SetBinContent(7,109.1371);
   hmc__10->SetBinContent(8,72.35149);
   hmc__10->SetBinContent(9,48.09206);
   hmc__10->SetBinContent(10,37.78192);
   hmc__10->SetBinContent(11,19.93946);
   hmc__10->SetBinContent(12,17.81211);
   hmc__10->SetBinContent(13,85.0125);
   hmc__10->SetBinError(1,51.53073);
   hmc__10->SetBinError(2,154.4543);
   hmc__10->SetBinError(3,168.0532);
   hmc__10->SetBinError(4,129.6454);
   hmc__10->SetBinError(5,79.55679);
   hmc__10->SetBinError(6,44.74567);
   hmc__10->SetBinError(7,23.93709);
   hmc__10->SetBinError(8,16.95529);
   hmc__10->SetBinError(9,10.73107);
   hmc__10->SetBinError(10,8.341509);
   hmc__10->SetBinError(11,5.153482);
   hmc__10->SetBinError(12,4.359927);
   hmc__10->SetBinError(13,16.52308);
   hmc__10->SetMinimum(-16);
   hmc__10->SetMaximum(1680);
   hmc__10->SetEntries(3172.984);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-4.784113e-08);
   hs4_stack_4->SetMaximum(781.3268);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.6793121);
   hbadmatch_stack_1->SetBinContent(2,4.734303);
   hbadmatch_stack_1->SetBinContent(3,5.101993);
   hbadmatch_stack_1->SetBinContent(4,1.166989);
   hbadmatch_stack_1->SetBinContent(5,3.307943);
   hbadmatch_stack_1->SetBinContent(6,1.166989);
   hbadmatch_stack_1->SetBinContent(7,0.7202482);
   hbadmatch_stack_1->SetBinContent(8,0.9643238);
   hbadmatch_stack_1->SetBinContent(9,1.125226);
   hbadmatch_stack_1->SetBinContent(10,0.5374587);
   hbadmatch_stack_1->SetBinContent(13,0.4459144);
   hbadmatch_stack_1->SetBinError(1,0.5033032);
   hbadmatch_stack_1->SetBinError(2,1.36495);
   hbadmatch_stack_1->SetBinError(3,1.310314);
   hbadmatch_stack_1->SetBinError(4,0.5218932);
   hbadmatch_stack_1->SetBinError(5,1.105595);
   hbadmatch_stack_1->SetBinError(6,0.5218932);
   hbadmatch_stack_1->SetBinError(7,0.4161578);
   hbadmatch_stack_1->SetBinError(8,0.683804);
   hbadmatch_stack_1->SetBinError(9,0.6724238);
   hbadmatch_stack_1->SetBinError(10,0.5374588);
   hbadmatch_stack_1->SetBinError(13,0.4459143);
   hbadmatch_stack_1->SetEntries(63);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,5.470293);
   houtFV_stack_4->SetBinContent(2,6.259359);
   houtFV_stack_4->SetBinContent(3,8.181471);
   houtFV_stack_4->SetBinContent(4,4.455782);
   houtFV_stack_4->SetBinContent(5,4.763958);
   houtFV_stack_4->SetBinContent(6,3.438323);
   houtFV_stack_4->SetBinContent(7,1.68963);
   houtFV_stack_4->SetBinContent(8,0.4459144);
   houtFV_stack_4->SetBinContent(9,0.2333977);
   houtFV_stack_4->SetBinContent(10,0.2333977);
   houtFV_stack_4->SetBinContent(11,0.4740298);
   houtFV_stack_4->SetBinContent(13,0.7001932);
   houtFV_stack_4->SetBinError(1,2.278108);
   houtFV_stack_4->SetBinError(2,1.397521);
   houtFV_stack_4->SetBinError(3,1.629136);
   houtFV_stack_4->SetBinError(4,1.305109);
   houtFV_stack_4->SetBinError(5,1.245493);
   houtFV_stack_4->SetBinError(6,1.042492);
   houtFV_stack_4->SetBinError(7,0.877898);
   houtFV_stack_4->SetBinError(8,0.4459143);
   houtFV_stack_4->SetBinError(9,0.2333977);
   houtFV_stack_4->SetBinError(10,0.2333977);
   houtFV_stack_4->SetBinError(11,0.4740298);
   houtFV_stack_4->SetBinError(13,0.4042567);
   houtFV_stack_4->SetEntries(114);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05733541);
   hNCpi0inFVcoh_stack_5->SetEntries(8);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5124501);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.362357);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(6);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.12795);
   hNCpi0inFVres_stack_7->SetBinContent(2,14.99511);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.43683);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.129917);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.939111);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.754832);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.729044);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7858669);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.455234);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.7110658);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4548407);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.3224303);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.810767);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6499952);
   hNCpi0inFVres_stack_7->SetBinError(2,1.42827);
   hNCpi0inFVres_stack_7->SetBinError(3,1.266182);
   hNCpi0inFVres_stack_7->SetBinError(4,1.202337);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9863605);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5125435);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6582977);
   hNCpi0inFVres_stack_7->SetBinError(8,0.288416);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5261657);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3713183);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2687489);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2604666);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5880382);
   hNCpi0inFVres_stack_7->SetEntries(970);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.267675);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.875366);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.642368);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.26935);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.416784);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.821037);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.481415);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.1414);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.430334);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8434762);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1655131);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2317183);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.86877);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7737104);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.164454);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.255754);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7580344);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.061662);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.514677);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.557512);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3900288);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1193532);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3771742);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.0740197);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.08758128);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7806983);
   hNCpi0inFVdis_stack_8->SetEntries(790);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,161.5608);
   hCCpi0inFV_stack_10->SetBinContent(2,492.2675);
   hCCpi0inFV_stack_10->SetBinContent(3,473.5017);
   hCCpi0inFV_stack_10->SetBinContent(4,393.5429);
   hCCpi0inFV_stack_10->SetBinContent(5,235.3322);
   hCCpi0inFV_stack_10->SetBinContent(6,128.3529);
   hCCpi0inFV_stack_10->SetBinContent(7,66.40024);
   hCCpi0inFV_stack_10->SetBinContent(8,42.90473);
   hCCpi0inFV_stack_10->SetBinContent(9,26.69214);
   hCCpi0inFV_stack_10->SetBinContent(10,20.01697);
   hCCpi0inFV_stack_10->SetBinContent(11,10.51491);
   hCCpi0inFV_stack_10->SetBinContent(12,10.46484);
   hCCpi0inFV_stack_10->SetBinContent(13,43.96273);
   hCCpi0inFV_stack_10->SetBinError(1,7.470093);
   hCCpi0inFV_stack_10->SetBinError(2,13.04244);
   hCCpi0inFV_stack_10->SetBinError(3,12.7874);
   hCCpi0inFV_stack_10->SetBinError(4,11.68791);
   hCCpi0inFV_stack_10->SetBinError(5,8.968797);
   hCCpi0inFV_stack_10->SetBinError(6,6.541782);
   hCCpi0inFV_stack_10->SetBinError(7,4.76903);
   hCCpi0inFV_stack_10->SetBinError(8,3.843608);
   hCCpi0inFV_stack_10->SetBinError(9,3.029199);
   hCCpi0inFV_stack_10->SetBinError(10,2.653492);
   hCCpi0inFV_stack_10->SetBinError(11,1.923613);
   hCCpi0inFV_stack_10->SetBinError(12,1.916874);
   hCCpi0inFV_stack_10->SetBinError(13,3.801492);
   hCCpi0inFV_stack_10->SetEntries(6794);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,3.629958);
   hNCinFV_stack_11->SetBinContent(2,9.552132);
   hNCinFV_stack_11->SetBinContent(3,10.5066);
   hNCinFV_stack_11->SetBinContent(4,4.30927);
   hNCinFV_stack_11->SetBinContent(5,2.971527);
   hNCinFV_stack_11->SetBinContent(6,3.39656);
   hNCinFV_stack_11->SetBinContent(7,1.612903);
   hNCinFV_stack_11->SetBinContent(8,0.4667954);
   hNCinFV_stack_11->SetBinContent(9,1.358624);
   hNCinFV_stack_11->SetBinContent(10,0.7001932);
   hNCinFV_stack_11->SetBinContent(11,1.358624);
   hNCinFV_stack_11->SetBinContent(12,0.4459144);
   hNCinFV_stack_11->SetBinContent(13,2.950646);
   hNCinFV_stack_11->SetBinError(1,1.149367);
   hNCinFV_stack_11->SetBinError(2,1.834834);
   hNCinFV_stack_11->SetBinError(3,1.869391);
   hNCinFV_stack_11->SetBinError(4,1.254735);
   hNCinFV_stack_11->SetBinError(5,0.9888581);
   hNCinFV_stack_11->SetBinError(6,1.12542);
   hNCinFV_stack_11->SetBinError(7,0.6864489);
   hNCinFV_stack_11->SetBinError(8,0.3300742);
   hNCinFV_stack_11->SetBinError(9,0.7117782);
   hNCinFV_stack_11->SetBinError(10,0.4042567);
   hNCinFV_stack_11->SetBinError(11,0.7117782);
   hNCinFV_stack_11->SetBinError(12,0.4459143);
   hNCinFV_stack_11->SetBinError(13,1.033311);
   hNCinFV_stack_11->SetEntries(138);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,82.59261);
   hnumuCCinFV_stack_12->SetBinContent(2,204.8221);
   hnumuCCinFV_stack_12->SetBinContent(3,186.7065);
   hnumuCCinFV_stack_12->SetBinContent(4,130.0213);
   hnumuCCinFV_stack_12->SetBinContent(5,89.68764);
   hnumuCCinFV_stack_12->SetBinContent(6,66.30811);
   hnumuCCinFV_stack_12->SetBinContent(7,33.27027);
   hnumuCCinFV_stack_12->SetBinContent(8,24.96314);
   hnumuCCinFV_stack_12->SetBinContent(9,16.07409);
   hnumuCCinFV_stack_12->SetBinContent(10,14.73936);
   hnumuCCinFV_stack_12->SetBinContent(11,6.738145);
   hnumuCCinFV_stack_12->SetBinContent(12,5.455378);
   hnumuCCinFV_stack_12->SetBinContent(13,30.58215);
   hnumuCCinFV_stack_12->SetBinError(1,6.299322);
   hnumuCCinFV_stack_12->SetBinError(2,9.891539);
   hnumuCCinFV_stack_12->SetBinError(3,9.690303);
   hnumuCCinFV_stack_12->SetBinError(4,6.794737);
   hnumuCCinFV_stack_12->SetBinError(5,5.709865);
   hnumuCCinFV_stack_12->SetBinError(6,4.93613);
   hnumuCCinFV_stack_12->SetBinError(7,3.330895);
   hnumuCCinFV_stack_12->SetBinError(8,3.584867);
   hnumuCCinFV_stack_12->SetBinError(9,2.403762);
   hnumuCCinFV_stack_12->SetBinError(10,2.410291);
   hnumuCCinFV_stack_12->SetBinError(11,1.514735);
   hnumuCCinFV_stack_12->SetBinError(12,1.391626);
   hnumuCCinFV_stack_12->SetBinError(13,3.167034);
   hnumuCCinFV_stack_12->SetEntries(2795);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(2,1.358624);
   hnueCCinFV_stack_13->SetBinContent(3,1.82542);
   hnueCCinFV_stack_13->SetBinContent(4,1.146108);
   hnueCCinFV_stack_13->SetBinContent(5,2.717248);
   hnueCCinFV_stack_13->SetBinContent(6,1.146108);
   hnueCCinFV_stack_13->SetBinContent(7,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(8,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(9,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.8918287);
   hnueCCinFV_stack_13->SetBinContent(13,1.592022);
   hnueCCinFV_stack_13->SetBinError(2,0.7117782);
   hnueCCinFV_stack_13->SetBinError(3,0.7845873);
   hnueCCinFV_stack_13->SetBinError(4,0.601883);
   hnueCCinFV_stack_13->SetBinError(5,1.006606);
   hnueCCinFV_stack_13->SetBinError(6,0.601883);
   hnueCCinFV_stack_13->SetBinError(7,0.2333977);
   hnueCCinFV_stack_13->SetBinError(8,0.5033032);
   hnueCCinFV_stack_13->SetBinError(9,0.3300742);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.6306181);
   hnueCCinFV_stack_13->SetBinError(13,0.7490679);
   hnueCCinFV_stack_13->SetEntries(39);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,262.3948);
   hmcerror__11->SetBinContent(2,744.1207);
   hmcerror__11->SetBinContent(3,705.9691);
   hmcerror__11->SetBinContent(4,549.1078);
   hmcerror__11->SetBinContent(5,352.682);
   hmcerror__11->SetBinContent(6,209.3849);
   hmcerror__11->SetBinContent(7,109.1371);
   hmcerror__11->SetBinContent(8,72.35149);
   hmcerror__11->SetBinContent(9,48.09206);
   hmcerror__11->SetBinContent(10,37.78192);
   hmcerror__11->SetBinContent(11,19.93946);
   hmcerror__11->SetBinContent(12,17.81211);
   hmcerror__11->SetBinContent(13,85.0125);
   hmcerror__11->SetBinError(1,51.53073);
   hmcerror__11->SetBinError(2,154.4543);
   hmcerror__11->SetBinError(3,168.0532);
   hmcerror__11->SetBinError(4,129.6454);
   hmcerror__11->SetBinError(5,79.55679);
   hmcerror__11->SetBinError(6,44.74567);
   hmcerror__11->SetBinError(7,23.93709);
   hmcerror__11->SetBinError(8,16.95529);
   hmcerror__11->SetBinError(9,10.73107);
   hmcerror__11->SetBinError(10,8.341509);
   hmcerror__11->SetBinError(11,5.153482);
   hmcerror__11->SetBinError(12,4.359927);
   hmcerror__11->SetBinError(13,16.52308);
   hmcerror__11->SetEntries(3172.984);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[12] = {
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
   Double_t _fy3013[12] = {
   227,
   800,
   657,
   447,
   302,
   206,
   117,
   73,
   48,
   35,
   18,
   20};
   Double_t _felx3013[12] = {
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
   Double_t _fely3013[12] = {
   15.06652,
   28.28427,
   25.63201,
   21.14237,
   17.37815,
   14.3527,
   10.81665,
   8.6693,
   7.0604,
   6.0548,
   4.4008,
   4.6266};
   Double_t _fehx3013[12] = {
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
   Double_t _fehy3013[12] = {
   15.06652,
   28.28427,
   25.63201,
   21.14237,
   17.37815,
   14.3527,
   10.81665,
   8.4672,
   6.8561,
   5.8483,
   4.1858,
   4.4133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(12.23928);
   Graph_Graph3013->SetMaximum(909.7528);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.3/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2950.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.5","F");

   ci = 1473;
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

   ci = 1474;
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

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 35.6","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  54.8","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.6","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2061.6","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 40.3","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 861.4","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.7","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[12] = {
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
   Double_t _fy3014[12] = {
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
   Double_t _felx3014[12] = {
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
   Double_t _fely3014[12] = {
   0.1963863,
   0.2075661,
   0.2380462,
   0.236102,
   0.2255766,
   0.2137006,
   0.2193303,
   0.2343462,
   0.223136,
   0.2207804,
   0.2584564,
   0.2447732};
   Double_t _fehx3014[12] = {
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
   Double_t _fehy3014[12] = {
   0.1963863,
   0.2075661,
   0.2380462,
   0.236102,
   0.2255766,
   0.2137006,
   0.2193303,
   0.2343462,
   0.223136,
   0.2207804,
   0.2584564,
   0.2447732};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[12] = {
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
   Double_t _fy3015[12] = {
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
   Double_t _felx3015[12] = {
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
   Double_t _fely3015[12] = {
   0.1963863,
   0.2075661,
   0.2380462,
   0.236102,
   0.2255766,
   0.2137006,
   0.2193303,
   0.2343462,
   0.223136,
   0.2207804,
   0.2584564,
   0.2447732};
   Double_t _fehx3015[12] = {
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
   Double_t _fehy3015[12] = {
   0.1963863,
   0.2075661,
   0.2380462,
   0.236102,
   0.2255766,
   0.2137006,
   0.2193303,
   0.2343462,
   0.223136,
   0.2207804,
   0.2584564,
   0.2447732};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[12] = {
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
   Double_t _fy3016[12] = {
   0.8651086,
   1.075094,
   0.9306357,
   0.8140477,
   0.8562955,
   0.9838341,
   1.072046,
   1.008963,
   0.9980858,
   0.926369,
   0.9027325,
   1.122832};
   Double_t _felx3016[12] = {
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
   Double_t _fely3016[12] = {
   0.05741927,
   0.03801033,
   0.03630756,
   0.03850314,
   0.04927427,
   0.06854697,
   0.09911066,
   0.119822,
   0.1468101,
   0.1602565,
   0.2207081,
   0.2597446};
   Double_t _fehx3016[12] = {
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
   Double_t _fehy3016[12] = {
   0.05741927,
   0.03801033,
   0.03630756,
   0.03850314,
   0.04927427,
   0.06854697,
   0.09911066,
   0.1170287,
   0.142562,
   0.154791,
   0.2099254,
   0.2477696};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.6131667);
   Graph_Graph3016->SetMaximum(1.439459);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
