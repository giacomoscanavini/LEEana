#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 16:05:14 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-153.8462,-39.66,1128.205,4385.561);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hmc__4->SetBinContent(1,677.2202);
   hmc__4->SetBinContent(2,1892.015);
   hmc__4->SetBinContent(3,1105.512);
   hmc__4->SetBinContent(4,629.2653);
   hmc__4->SetBinContent(5,348.847);
   hmc__4->SetBinContent(6,200.4897);
   hmc__4->SetBinContent(7,115.6834);
   hmc__4->SetBinContent(8,74.74551);
   hmc__4->SetBinContent(9,43.50021);
   hmc__4->SetBinContent(10,26.56916);
   hmc__4->SetBinContent(11,17.24);
   hmc__4->SetBinContent(12,11.206);
   hmc__4->SetBinContent(13,42.66629);
   hmc__4->SetBinError(1,193.7237);
   hmc__4->SetBinError(2,542.1791);
   hmc__4->SetBinError(3,345.1518);
   hmc__4->SetBinError(4,178.6797);
   hmc__4->SetBinError(5,84.8628);
   hmc__4->SetBinError(6,53.16531);
   hmc__4->SetBinError(7,40.02134);
   hmc__4->SetBinError(8,32.29119);
   hmc__4->SetBinError(9,19.27772);
   hmc__4->SetBinError(10,18.33678);
   hmc__4->SetBinError(11,15.05439);
   hmc__4->SetBinError(12,8.919696);
   hmc__4->SetBinError(13,17.12597);
   hmc__4->SetMinimum(-39.66);
   hmc__4->SetMaximum(4164.3);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1000);
   hs2_stack_2->SetMinimum(-3.368749e-09);
   hs2_stack_2->SetMaximum(1986.616);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,37.95071);
   hbadmatch_stack_1->SetBinContent(2,40.81948);
   hbadmatch_stack_1->SetBinContent(3,18.6259);
   hbadmatch_stack_1->SetBinContent(4,10.62968);
   hbadmatch_stack_1->SetBinContent(5,2.112495);
   hbadmatch_stack_1->SetBinContent(6,2.737353);
   hbadmatch_stack_1->SetBinContent(7,2.404247);
   hbadmatch_stack_1->SetBinContent(8,0.5901461);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.6847605);
   hbadmatch_stack_1->SetBinContent(11,0.9562006);
   hbadmatch_stack_1->SetBinContent(12,0.56883);
   hbadmatch_stack_1->SetBinContent(13,1.010954);
   hbadmatch_stack_1->SetBinError(1,3.401507);
   hbadmatch_stack_1->SetBinError(2,4.151755);
   hbadmatch_stack_1->SetBinError(3,2.700725);
   hbadmatch_stack_1->SetBinError(4,1.791889);
   hbadmatch_stack_1->SetBinError(5,0.7456476);
   hbadmatch_stack_1->SetBinError(6,0.925688);
   hbadmatch_stack_1->SetBinError(7,0.8651525);
   hbadmatch_stack_1->SetBinError(8,0.340721);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.574539);
   hbadmatch_stack_1->SetBinError(11,0.5846064);
   hbadmatch_stack_1->SetBinError(12,0.4257516);
   hbadmatch_stack_1->SetBinError(13,0.4529982);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,96.55843);
   hext_stack_2->SetBinContent(2,191.1153);
   hext_stack_2->SetBinContent(3,71.26726);
   hext_stack_2->SetBinContent(4,45.83237);
   hext_stack_2->SetBinContent(5,27.92942);
   hext_stack_2->SetBinContent(6,9.862059);
   hext_stack_2->SetBinContent(7,12.84947);
   hext_stack_2->SetBinContent(8,4.435048);
   hext_stack_2->SetBinContent(9,1.461993);
   hext_stack_2->SetBinContent(10,1.461993);
   hext_stack_2->SetBinContent(11,1.137595);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,2.435184);
   hext_stack_2->SetBinError(1,6.701863);
   hext_stack_2->SetBinError(2,9.444184);
   hext_stack_2->SetBinError(3,5.532959);
   hext_stack_2->SetBinError(4,4.795536);
   hext_stack_2->SetBinError(5,3.733094);
   hext_stack_2->SetBinError(6,2.180514);
   hext_stack_2->SetBinError(7,2.482788);
   hext_stack_2->SetBinError(8,1.533985);
   hext_stack_2->SetBinError(9,0.7356036);
   hext_stack_2->SetBinError(10,0.7356036);
   hext_stack_2->SetBinError(11,0.6602113);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.9256422);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,17.53316);
   hdirt_stack_3->SetBinContent(2,20.45577);
   hdirt_stack_3->SetBinContent(3,6.605395);
   hdirt_stack_3->SetBinContent(4,3.433427);
   hdirt_stack_3->SetBinContent(5,1.098836);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinError(1,2.342312);
   hdirt_stack_3->SetBinError(2,2.358219);
   hdirt_stack_3->SetBinError(3,1.327005);
   hdirt_stack_3->SetBinError(4,1.303776);
   hdirt_stack_3->SetBinError(5,0.5009843);
   hdirt_stack_3->SetBinError(6,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,96.64368);
   houtFV_stack_4->SetBinContent(2,184.0162);
   houtFV_stack_4->SetBinContent(3,58.48335);
   houtFV_stack_4->SetBinContent(4,15.64707);
   houtFV_stack_4->SetBinContent(5,8.759192);
   houtFV_stack_4->SetBinContent(6,3.303227);
   houtFV_stack_4->SetBinContent(7,2.23313);
   houtFV_stack_4->SetBinContent(8,1.121968);
   houtFV_stack_4->SetBinContent(9,0.3934307);
   houtFV_stack_4->SetBinContent(11,0.3265825);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinError(1,4.93917);
   houtFV_stack_4->SetBinError(2,6.754318);
   houtFV_stack_4->SetBinError(3,3.825243);
   houtFV_stack_4->SetBinError(4,1.930527);
   houtFV_stack_4->SetBinError(5,1.481153);
   houtFV_stack_4->SetBinError(6,0.8787102);
   houtFV_stack_4->SetBinError(7,0.7350875);
   houtFV_stack_4->SetBinError(8,0.5181909);
   houtFV_stack_4->SetBinError(9,0.2781975);
   houtFV_stack_4->SetBinError(11,0.2357168);
   houtFV_stack_4->SetBinError(13,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.655529);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,39.75935);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,23.9458);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.2668);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.417675);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.68333);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.556009);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7291804);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5995924);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4199534);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4094663);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6075018);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.762123);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9780461);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.33039);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.941064);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.17215);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8964833);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9449995);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3890644);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2461783);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1977107);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2276585);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.212249);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3100157);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4614995);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.609756);
   hNCpi0inFVqe_stack_6->SetBinContent(2,6.658228);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.454793);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.142979);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8910286);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4133109);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2909888);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3331324);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1109873);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5053517);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.771374);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4768142);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3905179);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2967322);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1551674);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2088813);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1836357);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08764647);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,279.5963);
   hNCpi0inFVres_stack_7->SetBinContent(2,829.1988);
   hNCpi0inFVres_stack_7->SetBinContent(3,421.8881);
   hNCpi0inFVres_stack_7->SetBinContent(4,189.0517);
   hNCpi0inFVres_stack_7->SetBinContent(5,96.60902);
   hNCpi0inFVres_stack_7->SetBinContent(6,55.72281);
   hNCpi0inFVres_stack_7->SetBinContent(7,30.81115);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.6923);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.9419);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.975803);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.849849);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.782027);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.829908);
   hNCpi0inFVres_stack_7->SetBinError(1,5.481515);
   hNCpi0inFVres_stack_7->SetBinError(2,9.222534);
   hNCpi0inFVres_stack_7->SetBinError(3,6.383559);
   hNCpi0inFVres_stack_7->SetBinError(4,4.40001);
   hNCpi0inFVres_stack_7->SetBinError(5,3.458077);
   hNCpi0inFVres_stack_7->SetBinError(6,2.868565);
   hNCpi0inFVres_stack_7->SetBinError(7,2.148384);
   hNCpi0inFVres_stack_7->SetBinError(8,1.795669);
   hNCpi0inFVres_stack_7->SetBinError(9,1.503776);
   hNCpi0inFVres_stack_7->SetBinError(10,1.051644);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9515125);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4516311);
   hNCpi0inFVres_stack_7->SetBinError(13,1.131748);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,51.59879);
   hNCpi0inFVdis_stack_8->SetBinContent(2,121.9058);
   hNCpi0inFVdis_stack_8->SetBinContent(3,81.62679);
   hNCpi0inFVdis_stack_8->SetBinContent(4,53.96012);
   hNCpi0inFVdis_stack_8->SetBinContent(5,30.05079);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.06221);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.41197);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.399);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.394087);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.477087);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.809483);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.139654);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.543545);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.402057);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.50356);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.877616);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.595075);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.830373);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.048594);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.383532);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.388596);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9817393);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8821987);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4926143);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4882092);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8904826);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.5151844);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4433756);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1512313);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2202879);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1698374);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06069715);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,38.45264);
   hCCpi0inFV_stack_10->SetBinContent(2,217.5605);
   hCCpi0inFV_stack_10->SetBinContent(3,191.1754);
   hCCpi0inFV_stack_10->SetBinContent(4,133.8586);
   hCCpi0inFV_stack_10->SetBinContent(5,79.15112);
   hCCpi0inFV_stack_10->SetBinContent(6,43.8319);
   hCCpi0inFV_stack_10->SetBinContent(7,27.84492);
   hCCpi0inFV_stack_10->SetBinContent(8,17.99773);
   hCCpi0inFV_stack_10->SetBinContent(9,7.620709);
   hCCpi0inFV_stack_10->SetBinContent(10,6.992947);
   hCCpi0inFV_stack_10->SetBinContent(11,2.495594);
   hCCpi0inFV_stack_10->SetBinContent(12,2.832252);
   hCCpi0inFV_stack_10->SetBinContent(13,6.107002);
   hCCpi0inFV_stack_10->SetBinError(1,3.087588);
   hCCpi0inFV_stack_10->SetBinError(2,7.308609);
   hCCpi0inFV_stack_10->SetBinError(3,6.93978);
   hCCpi0inFV_stack_10->SetBinError(4,5.83648);
   hCCpi0inFV_stack_10->SetBinError(5,4.485373);
   hCCpi0inFV_stack_10->SetBinError(6,3.319931);
   hCCpi0inFV_stack_10->SetBinError(7,2.666885);
   hCCpi0inFV_stack_10->SetBinError(8,2.144973);
   hCCpi0inFV_stack_10->SetBinError(9,1.373283);
   hCCpi0inFV_stack_10->SetBinError(10,1.376679);
   hCCpi0inFV_stack_10->SetBinError(11,0.7335366);
   hCCpi0inFV_stack_10->SetBinError(12,0.8992452);
   hCCpi0inFV_stack_10->SetBinError(13,1.24123);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,29.12357);
   hNCinFV_stack_11->SetBinContent(2,131.988);
   hNCinFV_stack_11->SetBinContent(3,110.3207);
   hNCinFV_stack_11->SetBinContent(4,69.26221);
   hNCinFV_stack_11->SetBinContent(5,42.06769);
   hNCinFV_stack_11->SetBinContent(6,20.89303);
   hNCinFV_stack_11->SetBinContent(7,12.19819);
   hNCinFV_stack_11->SetBinContent(8,9.443058);
   hNCinFV_stack_11->SetBinContent(9,9.209338);
   hNCinFV_stack_11->SetBinContent(10,2.208205);
   hNCinFV_stack_11->SetBinContent(11,2.71567);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,4.866111);
   hNCinFV_stack_11->SetBinError(1,2.643871);
   hNCinFV_stack_11->SetBinError(2,5.795385);
   hNCinFV_stack_11->SetBinError(3,5.492863);
   hNCinFV_stack_11->SetBinError(4,4.540769);
   hNCinFV_stack_11->SetBinError(5,3.992388);
   hNCinFV_stack_11->SetBinError(6,2.897502);
   hNCinFV_stack_11->SetBinError(7,2.108105);
   hNCinFV_stack_11->SetBinError(8,1.98924);
   hNCinFV_stack_11->SetBinError(9,1.981479);
   hNCinFV_stack_11->SetBinError(10,0.7631587);
   hNCinFV_stack_11->SetBinError(11,1.031838);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,1.352233);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,15.79632);
   hnumuCCinFV_stack_12->SetBinContent(2,100.235);
   hnumuCCinFV_stack_12->SetBinContent(3,111.4157);
   hnumuCCinFV_stack_12->SetBinContent(4,88.93031);
   hnumuCCinFV_stack_12->SetBinContent(5,52.15055);
   hnumuCCinFV_stack_12->SetBinContent(6,30.69135);
   hnumuCCinFV_stack_12->SetBinContent(7,13.40537);
   hnumuCCinFV_stack_12->SetBinContent(8,9.198933);
   hnumuCCinFV_stack_12->SetBinContent(9,5.656649);
   hnumuCCinFV_stack_12->SetBinContent(10,3.72023);
   hnumuCCinFV_stack_12->SetBinContent(11,2.247316);
   hnumuCCinFV_stack_12->SetBinContent(12,1.045319);
   hnumuCCinFV_stack_12->SetBinContent(13,4.910784);
   hnumuCCinFV_stack_12->SetBinError(1,2.631566);
   hnumuCCinFV_stack_12->SetBinError(2,6.114906);
   hnumuCCinFV_stack_12->SetBinError(3,5.942963);
   hnumuCCinFV_stack_12->SetBinError(4,5.261948);
   hnumuCCinFV_stack_12->SetBinError(5,4.08222);
   hnumuCCinFV_stack_12->SetBinError(6,3.013914);
   hnumuCCinFV_stack_12->SetBinError(7,3.060352);
   hnumuCCinFV_stack_12->SetBinError(8,1.718531);
   hnumuCCinFV_stack_12->SetBinError(9,1.189718);
   hnumuCCinFV_stack_12->SetBinError(10,0.9630696);
   hnumuCCinFV_stack_12->SetBinError(11,0.7337357);
   hnumuCCinFV_stack_12->SetBinError(12,0.4707315);
   hnumuCCinFV_stack_12->SetBinError(13,1.138328);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(1,2.186077);
   hnueCCinFV_stack_13->SetBinContent(2,7.859208);
   hnueCCinFV_stack_13->SetBinContent(3,6.551944);
   hnueCCinFV_stack_13->SetBinContent(4,5.231676);
   hnueCCinFV_stack_13->SetBinContent(5,2.609234);
   hnueCCinFV_stack_13->SetBinContent(6,3.133721);
   hnueCCinFV_stack_13->SetBinContent(7,0.6779776);
   hnueCCinFV_stack_13->SetBinContent(8,0.8050063);
   hnueCCinFV_stack_13->SetBinContent(9,1.77134);
   hnueCCinFV_stack_13->SetBinContent(10,0.6097559);
   hnueCCinFV_stack_13->SetBinContent(11,1.231815);
   hnueCCinFV_stack_13->SetBinContent(12,1.090205);
   hnueCCinFV_stack_13->SetBinContent(13,7.987196);
   hnueCCinFV_stack_13->SetBinError(1,1.403542);
   hnueCCinFV_stack_13->SetBinError(2,1.609695);
   hnueCCinFV_stack_13->SetBinError(3,1.67579);
   hnueCCinFV_stack_13->SetBinError(4,1.280258);
   hnueCCinFV_stack_13->SetBinError(5,0.8714634);
   hnueCCinFV_stack_13->SetBinError(6,0.9784578);
   hnueCCinFV_stack_13->SetBinError(7,0.4890466);
   hnueCCinFV_stack_13->SetBinError(8,0.4029833);
   hnueCCinFV_stack_13->SetBinError(9,0.6410515);
   hnueCCinFV_stack_13->SetBinError(10,0.3525088);
   hnueCCinFV_stack_13->SetBinError(11,0.8843136);
   hnueCCinFV_stack_13->SetBinError(12,0.5664118);
   hnueCCinFV_stack_13->SetBinError(13,2.052896);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__5->SetBinContent(1,677.2202);
   hmcerror__5->SetBinContent(2,1892.015);
   hmcerror__5->SetBinContent(3,1105.512);
   hmcerror__5->SetBinContent(4,629.2653);
   hmcerror__5->SetBinContent(5,348.847);
   hmcerror__5->SetBinContent(6,200.4897);
   hmcerror__5->SetBinContent(7,115.6834);
   hmcerror__5->SetBinContent(8,74.74551);
   hmcerror__5->SetBinContent(9,43.50021);
   hmcerror__5->SetBinContent(10,26.56916);
   hmcerror__5->SetBinContent(11,17.24);
   hmcerror__5->SetBinContent(12,11.206);
   hmcerror__5->SetBinContent(13,42.66629);
   hmcerror__5->SetBinError(1,193.7237);
   hmcerror__5->SetBinError(2,542.1791);
   hmcerror__5->SetBinError(3,345.1518);
   hmcerror__5->SetBinError(4,178.6797);
   hmcerror__5->SetBinError(5,84.8628);
   hmcerror__5->SetBinError(6,53.16531);
   hmcerror__5->SetBinError(7,40.02134);
   hmcerror__5->SetBinError(8,32.29119);
   hmcerror__5->SetBinError(9,19.27772);
   hmcerror__5->SetBinError(10,18.33678);
   hmcerror__5->SetBinError(11,15.05439);
   hmcerror__5->SetBinError(12,8.919696);
   hmcerror__5->SetBinError(13,17.12597);
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3005[12] = {
   766,
   1983,
   1046,
   533,
   277,
   144,
   81,
   40,
   25,
   23,
   16,
   6};
   Double_t _felx3005[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3005[12] = {
   27.67671,
   44.53089,
   32.34192,
   23.08679,
   16.64332,
   12,
   9.1239,
   6.4604,
   5.1474,
   4.9457,
   4.1628,
   2.67925};
   Double_t _fehx3005[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3005[12] = {
   27.67671,
   44.53089,
   32.34192,
   23.08679,
   16.64332,
   12,
   8.9221,
   6.2549,
   4.9374,
   4.7346,
   3.9454,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1100);
   Graph_Graph3005->SetMinimum(2.988675);
   Graph_Graph3005->SetMaximum(2229.952);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4940.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 464.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 370.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1945.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  399.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 769.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 440.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 434.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 33.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
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
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3006[12] = {
   0.2860572,
   0.2865617,
   0.3122098,
   0.2839496,
   0.2432665,
   0.2651773,
   0.3459557,
   0.4320151,
   0.4431639,
   0.6901528,
   0.8732245,
   0.7959754};
   Double_t _fehx3006[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3006[12] = {
   0.2860572,
   0.2865617,
   0.3122098,
   0.2839496,
   0.2432665,
   0.2651773,
   0.3459557,
   0.4320151,
   0.4431639,
   0.6901528,
   0.8732245,
   0.7959754};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1100);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
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
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3007[12] = {
   0.2671128,
   0.2836735,
   0.3066329,
   0.2761394,
   0.2206521,
   0.2170297,
   0.2458592,
   0.2799098,
   0.3125076,
   0.284769,
   0.3191484,
   0.3020315};
   Double_t _fehx3007[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3007[12] = {
   0.2671128,
   0.2836735,
   0.3066329,
   0.2761394,
   0.2206521,
   0.2170297,
   0.2458592,
   0.2799098,
   0.3125076,
   0.284769,
   0.3191484,
   0.3020315};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1100);
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3008[12] = {
   1.131095,
   1.048089,
   0.9461676,
   0.8470195,
   0.7940443,
   0.7182414,
   0.7001867,
   0.5351492,
   0.5747099,
   0.8656654,
   0.9280743,
   0.5354277};
   Double_t _felx3008[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3008[12] = {
   0.04086811,
   0.02353622,
   0.02925514,
   0.03668849,
   0.0477095,
   0.05985345,
   0.07886955,
   0.08643195,
   0.1183305,
   0.1861444,
   0.2414617,
   0.2390908};
   Double_t _fehx3008[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3008[12] = {
   0.04086811,
   0.02353622,
   0.02925514,
   0.03668849,
   0.0477095,
   0.05985345,
   0.07712514,
   0.08368262,
   0.1135029,
   0.1781991,
   0.2288515,
   0.2158291};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1100);
   Graph_Graph3008->SetMinimum(0.2087743);
   Graph_Graph3008->SetMaximum(1.259525);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_visible_energy_all",12,0,1000);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
