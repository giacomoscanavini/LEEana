#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Oct 21 19:09:15 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
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
   pad1->Range(-276.9231,-3.78,2030.769,417.9884);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__7->SetBinContent(2,2.08781);
   hmc__7->SetBinContent(3,59.38485);
   hmc__7->SetBinContent(4,156.7971);
   hmc__7->SetBinContent(5,179.9313);
   hmc__7->SetBinContent(6,171.1385);
   hmc__7->SetBinContent(7,160.9681);
   hmc__7->SetBinContent(8,141.5336);
   hmc__7->SetBinContent(9,141.5736);
   hmc__7->SetBinContent(10,105.9376);
   hmc__7->SetBinContent(11,80.06477);
   hmc__7->SetBinContent(12,74.34599);
   hmc__7->SetBinContent(13,63.77943);
   hmc__7->SetBinContent(14,51.04086);
   hmc__7->SetBinContent(15,38.7494);
   hmc__7->SetBinContent(16,31.41462);
   hmc__7->SetBinContent(17,20.11524);
   hmc__7->SetBinContent(18,15.96179);
   hmc__7->SetBinContent(19,17.29742);
   hmc__7->SetBinContent(20,12.28366);
   hmc__7->SetBinContent(21,8.778892);
   hmc__7->SetBinContent(22,7.383476);
   hmc__7->SetBinContent(23,7.453323);
   hmc__7->SetBinContent(24,4.686115);
   hmc__7->SetBinContent(25,8.021358);
   hmc__7->SetBinContent(26,33.42469);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,7.109643);
   hmc__7->SetBinError(3,23.76415);
   hmc__7->SetBinError(4,37.58593);
   hmc__7->SetBinError(5,44.76308);
   hmc__7->SetBinError(6,45.49411);
   hmc__7->SetBinError(7,46.83773);
   hmc__7->SetBinError(8,48.05954);
   hmc__7->SetBinError(9,45.22245);
   hmc__7->SetBinError(10,31.60709);
   hmc__7->SetBinError(11,24.13452);
   hmc__7->SetBinError(12,22.91662);
   hmc__7->SetBinError(13,41.97896);
   hmc__7->SetBinError(14,25.11429);
   hmc__7->SetBinError(15,21.40779);
   hmc__7->SetBinError(16,20.99793);
   hmc__7->SetBinError(17,16.61983);
   hmc__7->SetBinError(18,10.64818);
   hmc__7->SetBinError(19,15.11756);
   hmc__7->SetBinError(20,13.67918);
   hmc__7->SetBinError(21,15.01138);
   hmc__7->SetBinError(22,8.87647);
   hmc__7->SetBinError(23,8.812474);
   hmc__7->SetBinError(24,9.867382);
   hmc__7->SetBinError(25,6.806036);
   hmc__7->SetBinError(26,14.30876);
   hmc__7->SetMinimum(-3.78);
   hmc__7->SetMaximum(396.9);
   hmc__7->SetEntries(1653.165);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,1800);
   hs3_stack_3->SetMinimum(-1.337066e-08);
   hs3_stack_3->SetMaximum(188.9279);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(3,1.892772);
   hbadmatch_stack_1->SetBinContent(4,6.101633);
   hbadmatch_stack_1->SetBinContent(5,5.785744);
   hbadmatch_stack_1->SetBinContent(6,5.151647);
   hbadmatch_stack_1->SetBinContent(7,7.742244);
   hbadmatch_stack_1->SetBinContent(8,4.896752);
   hbadmatch_stack_1->SetBinContent(9,3.506835);
   hbadmatch_stack_1->SetBinContent(10,3.830297);
   hbadmatch_stack_1->SetBinContent(11,2.591481);
   hbadmatch_stack_1->SetBinContent(12,2.388255);
   hbadmatch_stack_1->SetBinContent(13,1.434764);
   hbadmatch_stack_1->SetBinContent(14,2.335856);
   hbadmatch_stack_1->SetBinContent(15,1.779472);
   hbadmatch_stack_1->SetBinContent(16,0.7302274);
   hbadmatch_stack_1->SetBinContent(17,0.7704073);
   hbadmatch_stack_1->SetBinContent(18,0.3229986);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.7399068);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.8106244);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6507624);
   hbadmatch_stack_1->SetBinError(4,1.679949);
   hbadmatch_stack_1->SetBinError(5,1.300755);
   hbadmatch_stack_1->SetBinError(6,1.161982);
   hbadmatch_stack_1->SetBinError(7,1.609289);
   hbadmatch_stack_1->SetBinError(8,1.204962);
   hbadmatch_stack_1->SetBinError(9,0.9508294);
   hbadmatch_stack_1->SetBinError(10,1.104081);
   hbadmatch_stack_1->SetBinError(11,0.7148608);
   hbadmatch_stack_1->SetBinError(12,0.7694934);
   hbadmatch_stack_1->SetBinError(13,0.5757633);
   hbadmatch_stack_1->SetBinError(14,0.7811436);
   hbadmatch_stack_1->SetBinError(15,0.8009398);
   hbadmatch_stack_1->SetBinError(16,0.4379386);
   hbadmatch_stack_1->SetBinError(17,0.5008065);
   hbadmatch_stack_1->SetBinError(18,0.2332637);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.4336269);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.4059403);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(221);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,23.39503);
   hext_stack_2->SetBinContent(4,45.52517);
   hext_stack_2->SetBinContent(5,44.35445);
   hext_stack_2->SetBinContent(6,33.22793);
   hext_stack_2->SetBinContent(7,21.63138);
   hext_stack_2->SetBinContent(8,15.86284);
   hext_stack_2->SetBinContent(9,18.36587);
   hext_stack_2->SetBinContent(10,15.19251);
   hext_stack_2->SetBinContent(11,14.71089);
   hext_stack_2->SetBinContent(12,9.93985);
   hext_stack_2->SetBinContent(13,8.395657);
   hext_stack_2->SetBinContent(14,5.102613);
   hext_stack_2->SetBinContent(15,2.435184);
   hext_stack_2->SetBinContent(16,4.054399);
   hext_stack_2->SetBinContent(17,2.192989);
   hext_stack_2->SetBinContent(18,2.759582);
   hext_stack_2->SetBinContent(19,2.517386);
   hext_stack_2->SetBinContent(20,1.939204);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,2.973055);
   hext_stack_2->SetBinContent(26,10.89868);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,3.501645);
   hext_stack_2->SetBinError(4,4.5632);
   hext_stack_2->SetBinError(5,4.588747);
   hext_stack_2->SetBinError(6,3.900171);
   hext_stack_2->SetBinError(7,2.978823);
   hext_stack_2->SetBinError(8,2.665586);
   hext_stack_2->SetBinError(9,2.902525);
   hext_stack_2->SetBinError(10,2.738336);
   hext_stack_2->SetBinError(11,2.659299);
   hext_stack_2->SetBinError(12,2.16324);
   hext_stack_2->SetBinError(13,2.019506);
   hext_stack_2->SetBinError(14,1.515354);
   hext_stack_2->SetBinError(15,0.9256422);
   hext_stack_2->SetBinError(16,1.311223);
   hext_stack_2->SetBinError(17,0.9009267);
   hext_stack_2->SetBinError(18,0.98084);
   hext_stack_2->SetBinError(19,0.9575503);
   hext_stack_2->SetBinError(20,0.912471);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,1.346105);
   hext_stack_2->SetBinError(26,2.323297);
   hext_stack_2->SetEntries(672);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(3,2.435897);
   hdirt_stack_3->SetBinContent(4,5.885754);
   hdirt_stack_3->SetBinContent(5,4.137941);
   hdirt_stack_3->SetBinContent(6,1.934901);
   hdirt_stack_3->SetBinContent(7,1.907593);
   hdirt_stack_3->SetBinContent(8,2.499095);
   hdirt_stack_3->SetBinContent(9,2.005346);
   hdirt_stack_3->SetBinContent(10,1.852524);
   hdirt_stack_3->SetBinContent(11,0.165479);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.3895662);
   hdirt_stack_3->SetBinContent(19,0.1380715);
   hdirt_stack_3->SetBinError(3,0.8006753);
   hdirt_stack_3->SetBinError(4,1.204335);
   hdirt_stack_3->SetBinError(5,1.117765);
   hdirt_stack_3->SetBinError(6,0.7211666);
   hdirt_stack_3->SetBinError(7,0.7134486);
   hdirt_stack_3->SetBinError(8,1.12576);
   hdirt_stack_3->SetBinError(9,0.7938298);
   hdirt_stack_3->SetBinError(10,0.79454);
   hdirt_stack_3->SetBinError(11,0.165479);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.3895662);
   hdirt_stack_3->SetBinError(19,0.1380715);
   hdirt_stack_3->SetEntries(101);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.349473);
   houtFV_stack_4->SetBinContent(3,15.85007);
   houtFV_stack_4->SetBinContent(4,37.61246);
   houtFV_stack_4->SetBinContent(5,43.85266);
   houtFV_stack_4->SetBinContent(6,38.51055);
   houtFV_stack_4->SetBinContent(7,33.91717);
   houtFV_stack_4->SetBinContent(8,23.43647);
   houtFV_stack_4->SetBinContent(9,29.0338);
   houtFV_stack_4->SetBinContent(10,20.86068);
   houtFV_stack_4->SetBinContent(11,11.57215);
   houtFV_stack_4->SetBinContent(12,10.23566);
   houtFV_stack_4->SetBinContent(13,9.65172);
   houtFV_stack_4->SetBinContent(14,8.575714);
   houtFV_stack_4->SetBinContent(15,6.800245);
   houtFV_stack_4->SetBinContent(16,5.002083);
   houtFV_stack_4->SetBinContent(17,2.307543);
   houtFV_stack_4->SetBinContent(18,2.065837);
   houtFV_stack_4->SetBinContent(19,2.394526);
   houtFV_stack_4->SetBinContent(20,1.51274);
   houtFV_stack_4->SetBinContent(21,0.9260038);
   houtFV_stack_4->SetBinContent(22,1.169247);
   houtFV_stack_4->SetBinContent(23,0.9303237);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(25,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.3900497);
   houtFV_stack_4->SetBinError(2,0.5288921);
   houtFV_stack_4->SetBinError(3,2.004029);
   houtFV_stack_4->SetBinError(4,3.118496);
   houtFV_stack_4->SetBinError(5,3.583565);
   houtFV_stack_4->SetBinError(6,3.183287);
   houtFV_stack_4->SetBinError(7,2.82086);
   houtFV_stack_4->SetBinError(8,2.337783);
   houtFV_stack_4->SetBinError(9,2.625681);
   houtFV_stack_4->SetBinError(10,2.316946);
   houtFV_stack_4->SetBinError(11,1.614059);
   houtFV_stack_4->SetBinError(12,1.57535);
   houtFV_stack_4->SetBinError(13,1.617412);
   houtFV_stack_4->SetBinError(14,1.778674);
   houtFV_stack_4->SetBinError(15,1.468298);
   houtFV_stack_4->SetBinError(16,1.285743);
   houtFV_stack_4->SetBinError(17,0.7519887);
   houtFV_stack_4->SetBinError(18,0.7671827);
   houtFV_stack_4->SetBinError(19,0.8397);
   houtFV_stack_4->SetBinError(20,0.6376025);
   houtFV_stack_4->SetBinError(21,0.6774313);
   houtFV_stack_4->SetBinError(22,0.6728653);
   houtFV_stack_4->SetBinError(23,0.4814682);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(25,0.3401776);
   houtFV_stack_4->SetBinError(26,0.2758068);
   houtFV_stack_4->SetEntries(1382);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7877853);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.145452);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.951229);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.912635);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.220476);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5353883);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.019693);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5587326);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.9689304);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6148517);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1333298);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3183979);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.135741);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2552553);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3372182);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5689487);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6494543);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6546273);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3865953);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1525938);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2874425);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1881822);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4363975);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3549306);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06716368);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1452961);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06079824);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1647996);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.05579997);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1063446);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1762284);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2847145);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1187159);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.09573572);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2563236);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03585128);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4335563);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05202946);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0693503);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1033376);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04545007);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04318719);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1402277);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02535645);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2942463);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.106717);
   hNCpi0inFVqe_stack_6->SetEntries(55);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1199066);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.882806);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.56927);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.59796);
   hNCpi0inFVres_stack_7->SetBinContent(6,30.71619);
   hNCpi0inFVres_stack_7->SetBinContent(7,25.73267);
   hNCpi0inFVres_stack_7->SetBinContent(8,22.0422);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.85356);
   hNCpi0inFVres_stack_7->SetBinContent(10,14.68474);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.850268);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.24727);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.485054);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.248623);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.897306);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.73447);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.067446);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.304033);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.275429);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8910785);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.979907);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.6032829);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.9154934);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4841525);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.7630469);
   hNCpi0inFVres_stack_7->SetBinError(2,0.05686547);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9911112);
   hNCpi0inFVres_stack_7->SetBinError(4,1.662031);
   hNCpi0inFVres_stack_7->SetBinError(5,2.080249);
   hNCpi0inFVres_stack_7->SetBinError(6,1.648093);
   hNCpi0inFVres_stack_7->SetBinError(7,1.395209);
   hNCpi0inFVres_stack_7->SetBinError(8,1.284126);
   hNCpi0inFVres_stack_7->SetBinError(9,1.105527);
   hNCpi0inFVres_stack_7->SetBinError(10,1.126588);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7934137);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9573534);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7894263);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7371139);
   hNCpi0inFVres_stack_7->SetBinError(15,0.738614);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5680988);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3311081);
   hNCpi0inFVres_stack_7->SetBinError(18,0.451387);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5841475);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3667425);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4279747);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4372789);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5879336);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3544124);
   hNCpi0inFVres_stack_7->SetBinError(26,0.326519);
   hNCpi0inFVres_stack_7->SetEntries(5331);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.258812);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.948347);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.108026);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.553751);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.55299);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.453118);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.813777);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.205751);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.390101);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.699818);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.425023);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.362042);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.058701);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.692059);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.439074);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9534776);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.138921);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.679367);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7955372);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2905918);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.135835);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1694578);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.573663);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3035398);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4742426);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8048562);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7096811);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7599542);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6401723);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5982494);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7958372);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9036455);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8992929);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9040287);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6785029);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7850559);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5141189);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5067818);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.295738);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.1205);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7480404);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4834978);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1387626);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4661215);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.0803814);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.366159);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05495351);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03175074);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,2.085274);
   hCCpi0inFV_stack_10->SetBinContent(4,10.55837);
   hCCpi0inFV_stack_10->SetBinContent(5,13.95454);
   hCCpi0inFV_stack_10->SetBinContent(6,21.69125);
   hCCpi0inFV_stack_10->SetBinContent(7,31.12861);
   hCCpi0inFV_stack_10->SetBinContent(8,40.539);
   hCCpi0inFV_stack_10->SetBinContent(9,36.92665);
   hCCpi0inFV_stack_10->SetBinContent(10,25.86993);
   hCCpi0inFV_stack_10->SetBinContent(11,23.06244);
   hCCpi0inFV_stack_10->SetBinContent(12,22.1879);
   hCCpi0inFV_stack_10->SetBinContent(13,21.48713);
   hCCpi0inFV_stack_10->SetBinContent(14,15.4864);
   hCCpi0inFV_stack_10->SetBinContent(15,12.38005);
   hCCpi0inFV_stack_10->SetBinContent(16,7.814044);
   hCCpi0inFV_stack_10->SetBinContent(17,6.272147);
   hCCpi0inFV_stack_10->SetBinContent(18,3.127768);
   hCCpi0inFV_stack_10->SetBinContent(19,3.89375);
   hCCpi0inFV_stack_10->SetBinContent(20,3.126077);
   hCCpi0inFV_stack_10->SetBinContent(21,1.958701);
   hCCpi0inFV_stack_10->SetBinContent(22,1.682546);
   hCCpi0inFV_stack_10->SetBinContent(23,1.467217);
   hCCpi0inFV_stack_10->SetBinContent(24,1.805704);
   hCCpi0inFV_stack_10->SetBinContent(25,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(26,8.928167);
   hCCpi0inFV_stack_10->SetBinError(3,0.8097876);
   hCCpi0inFV_stack_10->SetBinError(4,1.608052);
   hCCpi0inFV_stack_10->SetBinError(5,1.888111);
   hCCpi0inFV_stack_10->SetBinError(6,2.344358);
   hCCpi0inFV_stack_10->SetBinError(7,2.804803);
   hCCpi0inFV_stack_10->SetBinError(8,3.23927);
   hCCpi0inFV_stack_10->SetBinError(9,3.051195);
   hCCpi0inFV_stack_10->SetBinError(10,2.519575);
   hCCpi0inFV_stack_10->SetBinError(11,2.396877);
   hCCpi0inFV_stack_10->SetBinError(12,2.398022);
   hCCpi0inFV_stack_10->SetBinError(13,2.370878);
   hCCpi0inFV_stack_10->SetBinError(14,2.007566);
   hCCpi0inFV_stack_10->SetBinError(15,1.781207);
   hCCpi0inFV_stack_10->SetBinError(16,1.386823);
   hCCpi0inFV_stack_10->SetBinError(17,1.220947);
   hCCpi0inFV_stack_10->SetBinError(18,0.8999062);
   hCCpi0inFV_stack_10->SetBinError(19,0.9379985);
   hCCpi0inFV_stack_10->SetBinError(20,0.8995382);
   hCCpi0inFV_stack_10->SetBinError(21,0.6194014);
   hCCpi0inFV_stack_10->SetBinError(22,0.7192452);
   hCCpi0inFV_stack_10->SetBinError(23,0.6214735);
   hCCpi0inFV_stack_10->SetBinError(24,0.7080169);
   hCCpi0inFV_stack_10->SetBinError(25,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(26,1.545029);
   hCCpi0inFV_stack_10->SetEntries(1354);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.3917402);
   hNCinFV_stack_11->SetBinContent(4,3.083508);
   hNCinFV_stack_11->SetBinContent(5,4.036396);
   hNCinFV_stack_11->SetBinContent(6,5.632709);
   hNCinFV_stack_11->SetBinContent(7,8.274633);
   hNCinFV_stack_11->SetBinContent(8,5.36305);
   hNCinFV_stack_11->SetBinContent(9,7.307896);
   hNCinFV_stack_11->SetBinContent(10,5.059105);
   hNCinFV_stack_11->SetBinContent(11,2.617568);
   hNCinFV_stack_11->SetBinContent(12,6.002271);
   hNCinFV_stack_11->SetBinContent(13,3.108231);
   hNCinFV_stack_11->SetBinContent(14,3.509117);
   hNCinFV_stack_11->SetBinContent(15,2.841617);
   hNCinFV_stack_11->SetBinContent(16,2.874465);
   hNCinFV_stack_11->SetBinContent(17,2.813944);
   hNCinFV_stack_11->SetBinContent(18,1.181278);
   hNCinFV_stack_11->SetBinContent(19,1.443017);
   hNCinFV_stack_11->SetBinContent(20,1.186645);
   hNCinFV_stack_11->SetBinContent(21,0.8770706);
   hNCinFV_stack_11->SetBinContent(23,0.9676009);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,1.102857);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.2770047);
   hNCinFV_stack_11->SetBinError(4,0.9692236);
   hNCinFV_stack_11->SetBinError(5,0.9778616);
   hNCinFV_stack_11->SetBinError(6,1.158945);
   hNCinFV_stack_11->SetBinError(7,1.422242);
   hNCinFV_stack_11->SetBinError(8,1.083688);
   hNCinFV_stack_11->SetBinError(9,1.253895);
   hNCinFV_stack_11->SetBinError(10,1.084744);
   hNCinFV_stack_11->SetBinError(11,0.7458951);
   hNCinFV_stack_11->SetBinError(12,1.600936);
   hNCinFV_stack_11->SetBinError(13,0.8819695);
   hNCinFV_stack_11->SetBinError(14,1.087975);
   hNCinFV_stack_11->SetBinError(15,0.9310896);
   hNCinFV_stack_11->SetBinError(16,1.089155);
   hNCinFV_stack_11->SetBinError(17,1.194714);
   hNCinFV_stack_11->SetBinError(18,0.7547513);
   hNCinFV_stack_11->SetBinError(19,0.7940645);
   hNCinFV_stack_11->SetBinError(20,0.5639351);
   hNCinFV_stack_11->SetBinError(21,0.5197486);
   hNCinFV_stack_11->SetBinError(23,0.6390204);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.575016);
   hNCinFV_stack_11->SetEntries(310);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(3,3.397593);
   hnumuCCinFV_stack_12->SetBinContent(4,19.0587);
   hnumuCCinFV_stack_12->SetBinContent(5,20.97611);
   hnumuCCinFV_stack_12->SetBinContent(6,25.20395);
   hnumuCCinFV_stack_12->SetBinContent(7,22.48997);
   hnumuCCinFV_stack_12->SetBinContent(8,20.39827);
   hnumuCCinFV_stack_12->SetBinContent(9,20.13124);
   hnumuCCinFV_stack_12->SetBinContent(10,12.03007);
   hnumuCCinFV_stack_12->SetBinContent(11,10.88061);
   hnumuCCinFV_stack_12->SetBinContent(12,10.65948);
   hnumuCCinFV_stack_12->SetBinContent(13,8.364294);
   hnumuCCinFV_stack_12->SetBinContent(14,6.953327);
   hnumuCCinFV_stack_12->SetBinContent(15,4.58847);
   hnumuCCinFV_stack_12->SetBinContent(16,6.024438);
   hnumuCCinFV_stack_12->SetBinContent(17,2.761071);
   hnumuCCinFV_stack_12->SetBinContent(18,3.637895);
   hnumuCCinFV_stack_12->SetBinContent(19,2.058825);
   hnumuCCinFV_stack_12->SetBinContent(20,1.072095);
   hnumuCCinFV_stack_12->SetBinContent(21,2.102546);
   hnumuCCinFV_stack_12->SetBinContent(22,1.517089);
   hnumuCCinFV_stack_12->SetBinContent(23,1.640877);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(25,1.18159);
   hnumuCCinFV_stack_12->SetBinContent(26,7.033944);
   hnumuCCinFV_stack_12->SetBinError(3,1.078068);
   hnumuCCinFV_stack_12->SetBinError(4,2.695371);
   hnumuCCinFV_stack_12->SetBinError(5,2.97009);
   hnumuCCinFV_stack_12->SetBinError(6,2.979563);
   hnumuCCinFV_stack_12->SetBinError(7,3.310041);
   hnumuCCinFV_stack_12->SetBinError(8,2.56272);
   hnumuCCinFV_stack_12->SetBinError(9,2.589312);
   hnumuCCinFV_stack_12->SetBinError(10,1.753849);
   hnumuCCinFV_stack_12->SetBinError(11,1.912737);
   hnumuCCinFV_stack_12->SetBinError(12,1.641652);
   hnumuCCinFV_stack_12->SetBinError(13,1.545608);
   hnumuCCinFV_stack_12->SetBinError(14,1.399666);
   hnumuCCinFV_stack_12->SetBinError(15,1.085199);
   hnumuCCinFV_stack_12->SetBinError(16,1.670048);
   hnumuCCinFV_stack_12->SetBinError(17,0.7785604);
   hnumuCCinFV_stack_12->SetBinError(18,1.044206);
   hnumuCCinFV_stack_12->SetBinError(19,0.7519033);
   hnumuCCinFV_stack_12->SetBinError(20,0.5551335);
   hnumuCCinFV_stack_12->SetBinError(21,0.7229322);
   hnumuCCinFV_stack_12->SetBinError(22,0.5887087);
   hnumuCCinFV_stack_12->SetBinError(23,0.6970665);
   hnumuCCinFV_stack_12->SetBinError(24,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(25,0.5585289);
   hnumuCCinFV_stack_12->SetBinError(26,1.330841);
   hnumuCCinFV_stack_12->SetEntries(833);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,1.72261);
   hnueCCinFV_stack_13->SetBinContent(14,0.8824278);
   hnueCCinFV_stack_13->SetBinContent(15,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(16,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(17,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(18,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(21,1.083326);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(25,0.6737906);
   hnueCCinFV_stack_13->SetBinContent(26,2.622682);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,0.340721);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,1.577117);
   hnueCCinFV_stack_13->SetBinError(14,0.562594);
   hnueCCinFV_stack_13->SetBinError(15,0.3152389);
   hnueCCinFV_stack_13->SetBinError(16,0.2331833);
   hnueCCinFV_stack_13->SetBinError(17,0.3654046);
   hnueCCinFV_stack_13->SetBinError(18,0.3326517);
   hnueCCinFV_stack_13->SetBinError(21,0.8173063);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.1711909);
   hnueCCinFV_stack_13->SetBinError(25,0.5056665);
   hnueCCinFV_stack_13->SetBinError(26,1.314947);
   hnueCCinFV_stack_13->SetEntries(36);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__8->SetBinContent(2,2.08781);
   hmcerror__8->SetBinContent(3,59.38485);
   hmcerror__8->SetBinContent(4,156.7971);
   hmcerror__8->SetBinContent(5,179.9313);
   hmcerror__8->SetBinContent(6,171.1385);
   hmcerror__8->SetBinContent(7,160.9681);
   hmcerror__8->SetBinContent(8,141.5336);
   hmcerror__8->SetBinContent(9,141.5736);
   hmcerror__8->SetBinContent(10,105.9376);
   hmcerror__8->SetBinContent(11,80.06477);
   hmcerror__8->SetBinContent(12,74.34599);
   hmcerror__8->SetBinContent(13,63.77943);
   hmcerror__8->SetBinContent(14,51.04086);
   hmcerror__8->SetBinContent(15,38.7494);
   hmcerror__8->SetBinContent(16,31.41462);
   hmcerror__8->SetBinContent(17,20.11524);
   hmcerror__8->SetBinContent(18,15.96179);
   hmcerror__8->SetBinContent(19,17.29742);
   hmcerror__8->SetBinContent(20,12.28366);
   hmcerror__8->SetBinContent(21,8.778892);
   hmcerror__8->SetBinContent(22,7.383476);
   hmcerror__8->SetBinContent(23,7.453323);
   hmcerror__8->SetBinContent(24,4.686115);
   hmcerror__8->SetBinContent(25,8.021358);
   hmcerror__8->SetBinContent(26,33.42469);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,7.109643);
   hmcerror__8->SetBinError(3,23.76415);
   hmcerror__8->SetBinError(4,37.58593);
   hmcerror__8->SetBinError(5,44.76308);
   hmcerror__8->SetBinError(6,45.49411);
   hmcerror__8->SetBinError(7,46.83773);
   hmcerror__8->SetBinError(8,48.05954);
   hmcerror__8->SetBinError(9,45.22245);
   hmcerror__8->SetBinError(10,31.60709);
   hmcerror__8->SetBinError(11,24.13452);
   hmcerror__8->SetBinError(12,22.91662);
   hmcerror__8->SetBinError(13,41.97896);
   hmcerror__8->SetBinError(14,25.11429);
   hmcerror__8->SetBinError(15,21.40779);
   hmcerror__8->SetBinError(16,20.99793);
   hmcerror__8->SetBinError(17,16.61983);
   hmcerror__8->SetBinError(18,10.64818);
   hmcerror__8->SetBinError(19,15.11756);
   hmcerror__8->SetBinError(20,13.67918);
   hmcerror__8->SetBinError(21,15.01138);
   hmcerror__8->SetBinError(22,8.87647);
   hmcerror__8->SetBinError(23,8.812474);
   hmcerror__8->SetBinError(24,9.867382);
   hmcerror__8->SetBinError(25,6.806036);
   hmcerror__8->SetBinError(26,14.30876);
   hmcerror__8->SetEntries(1653.165);

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
   
   Double_t _fx3009[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3009[25] = {
   0,
   3,
   61,
   142,
   173,
   189,
   169,
   152,
   142,
   96,
   68,
   57,
   50,
   30,
   19,
   23,
   16,
   14,
   13,
   10,
   6,
   4,
   6,
   1,
   2};
   Double_t _felx3009[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3009[25] = {
   0,
   2.143368,
   7.9383,
   11.91638,
   13.15295,
   13.74773,
   13,
   12.32883,
   11.91638,
   9.9196,
   8.3726,
   7.679,
   7.2025,
   5.6197,
   4.5151,
   4.9457,
   4.1628,
   3.9102,
   3.77763,
   3.34883,
   2.67925,
   2.29683,
   2.67925,
   1,
   2};
   Double_t _fehx3009[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3009[25] = {
   1.1478,
   1.72422,
   7.7354,
   11.91638,
   13.15295,
   13.74773,
   13,
   12.32883,
   11.91638,
   9.718,
   8.1701,
   7.4757,
   6.9985,
   5.4117,
   4.3011,
   4.7346,
   3.9454,
   3.6898,
   3.5552,
   3.1179,
   2.41858,
   1.98186,
   2.41858,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1980);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(223.0225);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1446.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  219.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  65.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 310.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 69.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 207.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3010[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3010[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3010[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3010[25] = {
   0,
   3.405311,
   0.4001719,
   0.2397106,
   0.2487788,
   0.2658321,
   0.2909752,
   0.3395627,
   0.3194271,
   0.2983559,
   0.3014375,
   0.3082428,
   0.6581897,
   0.4920429,
   0.5524676,
   0.6684127,
   0.8262306,
   0.6671047,
   0.8739779,
   1.113607,
   1.709941,
   1.202207,
   1.182355,
   2.105664,
   0.8484892};
   Double_t _fehx3010[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3010[25] = {
   0,
   3.405311,
   0.4001719,
   0.2397106,
   0.2487788,
   0.2658321,
   0.2909752,
   0.3395627,
   0.3194271,
   0.2983559,
   0.3014375,
   0.3082428,
   0.6581897,
   0.4920429,
   0.5524676,
   0.6684127,
   0.8262306,
   0.6671047,
   0.8739779,
   1.113607,
   1.709941,
   1.202207,
   1.182355,
   2.105664,
   0.8484892};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1980);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3011[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3011[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3011[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3011[25] = {
   0,
   0.468902,
   0.1340329,
   0.1633546,
   0.1945866,
   0.2301734,
   0.2496116,
   0.2847236,
   0.2587858,
   0.2263148,
   0.2264256,
   0.2072214,
   0.2081823,
   0.2031162,
   0.2315255,
   0.241676,
   0.2671144,
   0.2738048,
   0.2657231,
   0.2703061,
   0.4322949,
   0.2985227,
   0.3524583,
   0.3362804,
   0.2841546};
   Double_t _fehx3011[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3011[25] = {
   0,
   0.468902,
   0.1340329,
   0.1633546,
   0.1945866,
   0.2301734,
   0.2496116,
   0.2847236,
   0.2587858,
   0.2263148,
   0.2264256,
   0.2072214,
   0.2081823,
   0.2031162,
   0.2315255,
   0.241676,
   0.2671144,
   0.2738048,
   0.2657231,
   0.2703061,
   0.4322949,
   0.2985227,
   0.3524583,
   0.3362804,
   0.2841546};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1980);
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
   
   Double_t _fx3012[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3012[25] = {
   10,
   1.436912,
   1.027198,
   0.905629,
   0.9614782,
   1.104369,
   1.049897,
   1.07395,
   1.003012,
   0.9061941,
   0.8493123,
   0.7666856,
   0.7839518,
   0.5877644,
   0.4903302,
   0.7321431,
   0.7954167,
   0.8770948,
   0.7515571,
   0.8140894,
   0.6834576,
   0.5417502,
   0.80501,
   0.2133964,
   0.2493343};
   Double_t _felx3012[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3012[25] = {
   0,
   1.026611,
   0.1336755,
   0.0759987,
   0.07309983,
   0.08033101,
   0.08076133,
   0.08710884,
   0.08417087,
   0.09363628,
   0.1045728,
   0.1032873,
   0.1129283,
   0.110102,
   0.1165205,
   0.1574331,
   0.2069475,
   0.2449726,
   0.2183927,
   0.2726247,
   0.3051923,
   0.311077,
   0.3594705,
   0.2133964,
   0.2493343};
   Double_t _fehx3012[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3012[25] = {
   0,
   0.825851,
   0.1302588,
   0.0759987,
   0.07309983,
   0.08033101,
   0.08076133,
   0.08710884,
   0.08417087,
   0.09173327,
   0.1020436,
   0.1005528,
   0.1097297,
   0.1060268,
   0.1109979,
   0.1507133,
   0.1961398,
   0.2311646,
   0.2055335,
   0.2538249,
   0.2754995,
   0.2684183,
   0.3244969,
   0.2901572,
   0.1893906};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1980);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(11);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
