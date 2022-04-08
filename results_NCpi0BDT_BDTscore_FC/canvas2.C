#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 02:13:37 2022) by ROOT version 6.26/00
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
   pad1->Range(0.2307692,-0.5890851,6.641026,49.63817);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hmc__4->SetBinContent(4,27.14515);
   hmc__4->SetBinContent(5,29.45425);
   hmc__4->SetBinContent(6,25.06388);
   hmc__4->SetBinContent(7,15.27943);
   hmc__4->SetBinContent(8,13.36863);
   hmc__4->SetBinContent(9,10.41531);
   hmc__4->SetBinContent(10,7.012714);
   hmc__4->SetBinContent(11,4.567707);
   hmc__4->SetBinContent(12,2.721614);
   hmc__4->SetBinContent(13,1.929618);
   hmc__4->SetBinContent(14,0.8345215);
   hmc__4->SetBinContent(15,0.6727884);
   hmc__4->SetBinContent(16,0.2004138);
   hmc__4->SetBinContent(17,0.1366628);
   hmc__4->SetBinContent(18,0.0127502);
   hmc__4->SetBinError(1,0.125509);
   hmc__4->SetBinError(2,0.125509);
   hmc__4->SetBinError(3,0.125509);
   hmc__4->SetBinError(4,6.280228);
   hmc__4->SetBinError(5,6.729508);
   hmc__4->SetBinError(6,7.570664);
   hmc__4->SetBinError(7,5.119867);
   hmc__4->SetBinError(8,4.096703);
   hmc__4->SetBinError(9,3.768508);
   hmc__4->SetBinError(10,2.987483);
   hmc__4->SetBinError(11,2.213785);
   hmc__4->SetBinError(12,1.782205);
   hmc__4->SetBinError(13,1.321496);
   hmc__4->SetBinError(14,0.777245);
   hmc__4->SetBinError(15,0.6672233);
   hmc__4->SetBinError(16,0.3651676);
   hmc__4->SetBinError(17,0.4033547);
   hmc__4->SetBinError(18,0.09101748);
   hmc__4->SetBinError(19,0.125509);
   hmc__4->SetBinError(20,0.125509);
   hmc__4->SetBinError(21,0.125509);
   hmc__4->SetMinimum(-0.5890851);
   hmc__4->SetMaximum(47.12681);
   hmc__4->SetEntries(136.1863);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,1,6);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(30.92697);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,1.091598);
   hbadmatch_stack_1->SetBinContent(5,1.317248);
   hbadmatch_stack_1->SetBinContent(6,0.631708);
   hbadmatch_stack_1->SetBinContent(7,0.4227385);
   hbadmatch_stack_1->SetBinContent(8,0.2774389);
   hbadmatch_stack_1->SetBinContent(9,0.2733256);
   hbadmatch_stack_1->SetBinContent(10,0.03825143);
   hbadmatch_stack_1->SetBinContent(11,0.08745668);
   hbadmatch_stack_1->SetBinContent(12,0.0127502);
   hbadmatch_stack_1->SetBinContent(14,0.06195629);
   hbadmatch_stack_1->SetBinContent(15,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.06195629);
   hbadmatch_stack_1->SetBinError(4,0.2352378);
   hbadmatch_stack_1->SetBinError(5,0.4115066);
   hbadmatch_stack_1->SetBinError(6,0.1856118);
   hbadmatch_stack_1->SetBinError(7,0.1538888);
   hbadmatch_stack_1->SetBinError(8,0.1127751);
   hbadmatch_stack_1->SetBinError(9,0.1252177);
   hbadmatch_stack_1->SetBinError(10,0.02208399);
   hbadmatch_stack_1->SetBinError(11,0.06452687);
   hbadmatch_stack_1->SetBinError(12,0.0127502);
   hbadmatch_stack_1->SetBinError(14,0.06195629);
   hbadmatch_stack_1->SetBinError(15,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.06195629);
   hbadmatch_stack_1->SetEntries(120);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,5.522908);
   hext_stack_2->SetBinContent(5,5.724689);
   hext_stack_2->SetBinContent(6,4.233186);
   hext_stack_2->SetBinContent(7,1.286991);
   hext_stack_2->SetBinContent(8,1.053863);
   hext_stack_2->SetBinContent(9,0.3217476);
   hext_stack_2->SetBinContent(10,0.1104287);
   hext_stack_2->SetBinContent(11,0.3980982);
   hext_stack_2->SetBinContent(12,0.01226985);
   hext_stack_2->SetBinContent(15,0.1990491);
   hext_stack_2->SetBinError(4,0.9606586);
   hext_stack_2->SetBinError(5,0.9998486);
   hext_stack_2->SetBinError(6,0.8492049);
   hext_stack_2->SetBinError(7,0.4055911);
   hext_stack_2->SetBinError(8,0.4020494);
   hext_stack_2->SetBinError(9,0.2027956);
   hext_stack_2->SetBinError(10,0.03680956);
   hext_stack_2->SetBinError(11,0.2814979);
   hext_stack_2->SetBinError(12,0.01226985);
   hext_stack_2->SetBinError(15,0.1990491);
   hext_stack_2->SetEntries(350);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,0.467722);
   hdirt_stack_3->SetBinContent(5,0.515804);
   hdirt_stack_3->SetBinContent(6,0.4484696);
   hdirt_stack_3->SetBinContent(7,0.06064831);
   hdirt_stack_3->SetBinContent(8,0.07880323);
   hdirt_stack_3->SetBinContent(9,0.13512);
   hdirt_stack_3->SetBinContent(10,0.06760487);
   hdirt_stack_3->SetBinContent(11,0.04420907);
   hdirt_stack_3->SetBinError(4,0.1375179);
   hdirt_stack_3->SetBinError(5,0.1392474);
   hdirt_stack_3->SetBinError(6,0.1361115);
   hdirt_stack_3->SetBinError(7,0.04571177);
   hdirt_stack_3->SetBinError(8,0.04749567);
   hdirt_stack_3->SetBinError(9,0.07323868);
   hdirt_stack_3->SetBinError(10,0.05395906);
   hdirt_stack_3->SetBinError(11,0.04420907);
   hdirt_stack_3->SetEntries(71);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,7.642066);
   houtFV_stack_4->SetBinContent(5,5.993661);
   houtFV_stack_4->SetBinContent(6,4.669102);
   houtFV_stack_4->SetBinContent(7,3.157886);
   houtFV_stack_4->SetBinContent(8,2.53232);
   houtFV_stack_4->SetBinContent(9,1.74375);
   houtFV_stack_4->SetBinContent(10,1.486965);
   houtFV_stack_4->SetBinContent(11,0.3243263);
   houtFV_stack_4->SetBinContent(12,0.2782909);
   houtFV_stack_4->SetBinContent(13,0.02550039);
   houtFV_stack_4->SetBinContent(14,0.0127502);
   houtFV_stack_4->SetBinContent(15,0.0127502);
   houtFV_stack_4->SetBinError(4,0.6606551);
   houtFV_stack_4->SetBinError(5,0.5697899);
   houtFV_stack_4->SetBinError(6,0.4893833);
   houtFV_stack_4->SetBinError(7,0.4185038);
   houtFV_stack_4->SetBinError(8,0.3750327);
   houtFV_stack_4->SetBinError(9,0.303894);
   houtFV_stack_4->SetBinError(10,0.2895774);
   houtFV_stack_4->SetBinError(11,0.1277878);
   houtFV_stack_4->SetBinError(12,0.1128921);
   houtFV_stack_4->SetBinError(13,0.0180315);
   houtFV_stack_4->SetBinError(14,0.0127502);
   houtFV_stack_4->SetBinError(15,0.0127502);
   houtFV_stack_4->SetEntries(730);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hNCpi0inFV_stack_5->SetBinContent(4,3.447454);
   hNCpi0inFV_stack_5->SetBinContent(5,5.326071);
   hNCpi0inFV_stack_5->SetBinContent(6,5.475484);
   hNCpi0inFV_stack_5->SetBinContent(7,4.458683);
   hNCpi0inFV_stack_5->SetBinContent(8,4.717464);
   hNCpi0inFV_stack_5->SetBinContent(9,4.677419);
   hNCpi0inFV_stack_5->SetBinContent(10,3.277925);
   hNCpi0inFV_stack_5->SetBinContent(11,2.392402);
   hNCpi0inFV_stack_5->SetBinContent(12,1.50688);
   hNCpi0inFV_stack_5->SetBinContent(13,1.406673);
   hNCpi0inFV_stack_5->SetBinContent(14,0.7088143);
   hNCpi0inFV_stack_5->SetBinContent(15,0.3370765);
   hNCpi0inFV_stack_5->SetBinContent(16,0.1257073);
   hNCpi0inFV_stack_5->SetBinContent(17,0.07470649);
   hNCpi0inFV_stack_5->SetBinContent(18,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(4,0.4327138);
   hNCpi0inFV_stack_5->SetBinError(5,0.5389418);
   hNCpi0inFV_stack_5->SetBinError(6,0.5463154);
   hNCpi0inFV_stack_5->SetBinError(7,0.4865368);
   hNCpi0inFV_stack_5->SetBinError(8,0.5052333);
   hNCpi0inFV_stack_5->SetBinError(9,0.5077389);
   hNCpi0inFV_stack_5->SetBinError(10,0.4121123);
   hNCpi0inFV_stack_5->SetBinError(11,0.353569);
   hNCpi0inFV_stack_5->SetBinError(12,0.2831705);
   hNCpi0inFV_stack_5->SetBinError(13,0.2754256);
   hNCpi0inFV_stack_5->SetBinError(14,0.1988059);
   hNCpi0inFV_stack_5->SetBinError(15,0.1284224);
   hNCpi0inFV_stack_5->SetBinError(16,0.06820132);
   hNCpi0inFV_stack_5->SetBinError(17,0.06325464);
   hNCpi0inFV_stack_5->SetBinError(18,0.0127502);
   hNCpi0inFV_stack_5->SetEntries(1004);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_6->SetBinContent(4,5.102188);
   hCCpi0inFV_stack_6->SetBinContent(5,6.6142);
   hCCpi0inFV_stack_6->SetBinContent(6,5.432137);
   hCCpi0inFV_stack_6->SetBinContent(7,3.924027);
   hCCpi0inFV_stack_6->SetBinContent(8,3.036798);
   hCCpi0inFV_stack_6->SetBinContent(9,2.160098);
   hCCpi0inFV_stack_6->SetBinContent(10,1.456863);
   hCCpi0inFV_stack_6->SetBinContent(11,0.989159);
   hCCpi0inFV_stack_6->SetBinContent(12,0.5876493);
   hCCpi0inFV_stack_6->SetBinContent(13,0.4227385);
   hCCpi0inFV_stack_6->SetBinContent(14,0.05100079);
   hCCpi0inFV_stack_6->SetBinContent(15,0.06195629);
   hCCpi0inFV_stack_6->SetBinContent(16,0.07470649);
   hCCpi0inFV_stack_6->SetBinError(4,0.5223104);
   hCCpi0inFV_stack_6->SetBinError(5,0.5986951);
   hCCpi0inFV_stack_6->SetBinError(6,0.5472675);
   hCCpi0inFV_stack_6->SetBinError(7,0.4545313);
   hCCpi0inFV_stack_6->SetBinError(8,0.4120084);
   hCCpi0inFV_stack_6->SetBinError(9,0.3315081);
   hCCpi0inFV_stack_6->SetBinError(10,0.285067);
   hCCpi0inFV_stack_6->SetBinError(11,0.2287453);
   hCCpi0inFV_stack_6->SetBinError(12,0.1821548);
   hCCpi0inFV_stack_6->SetBinError(13,0.1538888);
   hCCpi0inFV_stack_6->SetBinError(14,0.02550039);
   hCCpi0inFV_stack_6->SetBinError(15,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(16,0.06325464);
   hCCpi0inFV_stack_6->SetEntries(802);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hNCinFV_stack_7->SetBinContent(4,0.426293);
   hNCinFV_stack_7->SetBinContent(5,0.3006206);
   hNCinFV_stack_7->SetBinContent(6,0.3352818);
   hNCinFV_stack_7->SetBinContent(7,0.4482389);
   hNCinFV_stack_7->SetBinContent(8,0.3352818);
   hNCinFV_stack_7->SetBinContent(9,0.2860757);
   hNCinFV_stack_7->SetBinContent(10,0.1858689);
   hNCinFV_stack_7->SetBinContent(11,0.03825059);
   hNCinFV_stack_7->SetBinContent(12,0.08745668);
   hNCinFV_stack_7->SetBinContent(13,0.06195629);
   hNCinFV_stack_7->SetBinError(4,0.1437328);
   hNCinFV_stack_7->SetBinError(5,0.1139248);
   hNCinFV_stack_7->SetBinError(6,0.139707);
   hNCinFV_stack_7->SetBinError(7,0.1549416);
   hNCinFV_stack_7->SetBinError(8,0.139707);
   hNCinFV_stack_7->SetBinError(9,0.1258651);
   hNCinFV_stack_7->SetBinError(10,0.1073114);
   hNCinFV_stack_7->SetBinError(11,0.02208399);
   hNCinFV_stack_7->SetBinError(12,0.06452687);
   hNCinFV_stack_7->SetBinError(13,0.06195629);
   hNCinFV_stack_7->SetEntries(70);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_8->SetBinContent(4,3.370216);
   hnumuCCinFV_stack_8->SetBinContent(5,3.366412);
   hnumuCCinFV_stack_8->SetBinContent(6,3.737249);
   hnumuCCinFV_stack_8->SetBinContent(7,1.430412);
   hnumuCCinFV_stack_8->SetBinContent(8,1.319539);
   hnumuCCinFV_stack_8->SetBinContent(9,0.7558231);
   hnumuCCinFV_stack_8->SetBinContent(10,0.3760583);
   hnumuCCinFV_stack_8->SetBinContent(11,0.2938043);
   hnumuCCinFV_stack_8->SetBinContent(12,0.2363167);
   hnumuCCinFV_stack_8->SetBinContent(13,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(4,0.4406407);
   hnumuCCinFV_stack_8->SetBinError(5,0.503644);
   hnumuCCinFV_stack_8->SetBinError(6,0.7011821);
   hnumuCCinFV_stack_8->SetBinError(7,0.3457693);
   hnumuCCinFV_stack_8->SetBinError(8,0.2803125);
   hnumuCCinFV_stack_8->SetBinError(9,0.2095836);
   hnumuCCinFV_stack_8->SetBinError(10,0.1444971);
   hnumuCCinFV_stack_8->SetBinError(11,0.1357473);
   hnumuCCinFV_stack_8->SetBinError(12,0.1223032);
   hnumuCCinFV_stack_8->SetBinError(13,0.0127502);
   hnumuCCinFV_stack_8->SetEntries(342);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_9->SetBinContent(4,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(5,0.2955489);
   hnueCCinFV_stack_9->SetBinContent(6,0.1012671);
   hnueCCinFV_stack_9->SetBinContent(7,0.08981021);
   hnueCCinFV_stack_9->SetBinContent(8,0.01711721);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(4,0.06325464);
   hnueCCinFV_stack_9->SetBinError(5,0.1432456);
   hnueCCinFV_stack_9->SetBinError(6,0.07292545);
   hnueCCinFV_stack_9->SetBinError(7,0.06792954);
   hnueCCinFV_stack_9->SetBinError(8,0.01711721);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetEntries(15);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);
   hmcerror__5->SetBinContent(4,27.14515);
   hmcerror__5->SetBinContent(5,29.45425);
   hmcerror__5->SetBinContent(6,25.06388);
   hmcerror__5->SetBinContent(7,15.27943);
   hmcerror__5->SetBinContent(8,13.36863);
   hmcerror__5->SetBinContent(9,10.41531);
   hmcerror__5->SetBinContent(10,7.012714);
   hmcerror__5->SetBinContent(11,4.567707);
   hmcerror__5->SetBinContent(12,2.721614);
   hmcerror__5->SetBinContent(13,1.929618);
   hmcerror__5->SetBinContent(14,0.8345215);
   hmcerror__5->SetBinContent(15,0.6727884);
   hmcerror__5->SetBinContent(16,0.2004138);
   hmcerror__5->SetBinContent(17,0.1366628);
   hmcerror__5->SetBinContent(18,0.0127502);
   hmcerror__5->SetBinError(1,0.125509);
   hmcerror__5->SetBinError(2,0.125509);
   hmcerror__5->SetBinError(3,0.125509);
   hmcerror__5->SetBinError(4,6.280228);
   hmcerror__5->SetBinError(5,6.729508);
   hmcerror__5->SetBinError(6,7.570664);
   hmcerror__5->SetBinError(7,5.119867);
   hmcerror__5->SetBinError(8,4.096703);
   hmcerror__5->SetBinError(9,3.768508);
   hmcerror__5->SetBinError(10,2.987483);
   hmcerror__5->SetBinError(11,2.213785);
   hmcerror__5->SetBinError(12,1.782205);
   hmcerror__5->SetBinError(13,1.321496);
   hmcerror__5->SetBinError(14,0.777245);
   hmcerror__5->SetBinError(15,0.6672233);
   hmcerror__5->SetBinError(16,0.3651676);
   hmcerror__5->SetBinError(17,0.4033547);
   hmcerror__5->SetBinError(18,0.09101748);
   hmcerror__5->SetBinError(19,0.125509);
   hmcerror__5->SetBinError(20,0.125509);
   hmcerror__5->SetBinError(21,0.125509);
   hmcerror__5->SetEntries(136.1863);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3005[20] = {
   0,
   0,
   0,
   18,
   24,
   20,
   25,
   9,
   10,
   4,
   4,
   2,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3005[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3005[20] = {
   0,
   0,
   0,
   4.4008,
   5.0476,
   4.6266,
   5.1474,
   3.19354,
   3.34883,
   2.29683,
   2.29683,
   2,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3005[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3005[20] = {
   1.1478,
   1.1478,
   1.1478,
   4.1858,
   4.837,
   4.4133,
   4.9374,
   2.9582,
   3.1179,
   1.98186,
   1.98186,
   1.51917,
   1.35971,
   1.35971,
   1.35971,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0.5,6.5);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(32.93114);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.86#pm0.08(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.81/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 119.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.3","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 18.9","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.8","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 27.9","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  37.9","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 29.9","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 2.5","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 14.9","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.7","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_10_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3006[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3006[20] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3006[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3006[20] = {
   0,
   0,
   0,
   0.2313573,
   0.2284732,
   0.3020547,
   0.3350822,
   0.3064416,
   0.3618238,
   0.4260095,
   0.4846601,
   0.6548341,
   0.6848485,
   0.931366,
   0.9917283,
   1.822069,
   2.95146,
   7.138516,
   0,
   0};
   Double_t _fehx3006[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3006[20] = {
   0,
   0,
   0,
   0.2313573,
   0.2284732,
   0.3020547,
   0.3350822,
   0.3064416,
   0.3618238,
   0.4260095,
   0.4846601,
   0.6548341,
   0.6848485,
   0.931366,
   0.9917283,
   1.822069,
   2.95146,
   7.138516,
   0,
   0};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0.5,6.5);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3007[20] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3007[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3007[20] = {
   0,
   0,
   0,
   0.1579186,
   0.1575783,
   0.1746259,
   0.1931396,
   0.204742,
   0.228708,
   0.2199267,
   0.2234778,
   0.2767451,
   0.3046251,
   0.448661,
   0.4577676,
   0.8238564,
   1.137365,
   5.711408,
   0,
   0};
   Double_t _fehx3007[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3007[20] = {
   0,
   0,
   0,
   0.1579186,
   0.1575783,
   0.1746259,
   0.1931396,
   0.204742,
   0.228708,
   0.2199267,
   0.2234778,
   0.2767451,
   0.3046251,
   0.448661,
   0.4577676,
   0.8238564,
   1.137365,
   5.711408,
   0,
   0};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0.5,6.5);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3008[20] = {
   10,
   10,
   10,
   0.6631018,
   0.8148229,
   0.7979609,
   1.636186,
   0.673218,
   0.9601246,
   0.5703925,
   0.875713,
   0.7348582,
   0.5182372,
   1.198291,
   1.486351,
   0,
   0,
   0,
   10,
   10};
   Double_t _felx3008[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3008[20] = {
   0,
   0,
   0,
   0.162121,
   0.1713708,
   0.1845923,
   0.3368842,
   0.2388832,
   0.3215294,
   0.3275237,
   0.502841,
   0.7348582,
   0.5182372,
   1.198291,
   1.486351,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3008[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3008[20] = {
   0,
   0,
   0,
   0.1542006,
   0.1642208,
   0.176082,
   0.3231402,
   0.2212793,
   0.2993573,
   0.2826095,
   0.4338851,
   0.5581872,
   0.7046522,
   1.629329,
   2.021007,
   5.727152,
   8.398775,
   90.02214,
   0,
   0};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0.5,6.5);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(99.02436);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_PC_bnb_10_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
