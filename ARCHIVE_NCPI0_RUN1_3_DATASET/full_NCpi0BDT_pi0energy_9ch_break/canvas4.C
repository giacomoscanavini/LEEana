#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Jun  5 00:36:31 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
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
   pad1->Range(-184.6154,-17.24,1353.846,1906.381);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmc__10->SetBinContent(1,23.90795);
   hmc__10->SetBinContent(2,171.2805);
   hmc__10->SetBinContent(3,594.533);
   hmc__10->SetBinContent(4,812.2406);
   hmc__10->SetBinContent(5,666.2184);
   hmc__10->SetBinContent(6,482.3256);
   hmc__10->SetBinContent(7,352.3173);
   hmc__10->SetBinContent(8,231.6505);
   hmc__10->SetBinContent(9,149.8015);
   hmc__10->SetBinContent(10,107.4681);
   hmc__10->SetBinContent(11,71.03204);
   hmc__10->SetBinContent(12,43.69177);
   hmc__10->SetBinContent(13,30.20955);
   hmc__10->SetBinContent(14,19.84194);
   hmc__10->SetBinContent(15,13.77467);
   hmc__10->SetBinContent(16,10.06423);
   hmc__10->SetBinContent(17,4.151111);
   hmc__10->SetBinContent(18,7.06076);
   hmc__10->SetBinContent(19,4.750748);
   hmc__10->SetBinContent(20,2.088168);
   hmc__10->SetBinContent(21,22.59269);
   hmc__10->SetBinError(1,9.028455);
   hmc__10->SetBinError(2,35.49394);
   hmc__10->SetBinError(3,124.4683);
   hmc__10->SetBinError(4,165.2731);
   hmc__10->SetBinError(5,136.4791);
   hmc__10->SetBinError(6,102.1797);
   hmc__10->SetBinError(7,73.88237);
   hmc__10->SetBinError(8,48.56285);
   hmc__10->SetBinError(9,32.44442);
   hmc__10->SetBinError(10,23.72057);
   hmc__10->SetBinError(11,16.2869);
   hmc__10->SetBinError(12,11.8772);
   hmc__10->SetBinError(13,9.614557);
   hmc__10->SetBinError(14,5.473188);
   hmc__10->SetBinError(15,4.927718);
   hmc__10->SetBinError(16,5.661567);
   hmc__10->SetBinError(17,2.452983);
   hmc__10->SetBinError(18,3.156693);
   hmc__10->SetBinError(19,2.145896);
   hmc__10->SetBinError(20,1.91581);
   hmc__10->SetBinError(21,8.430716);
   hmc__10->SetMinimum(-17.24);
   hmc__10->SetMaximum(1810.2);
   hmc__10->SetEntries(3775.136);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,1200);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(852.8526);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.21087);
   hbadmatch_stack_1->SetBinContent(2,13.60709);
   hbadmatch_stack_1->SetBinContent(3,18.73374);
   hbadmatch_stack_1->SetBinContent(4,28.67865);
   hbadmatch_stack_1->SetBinContent(5,15.65896);
   hbadmatch_stack_1->SetBinContent(6,4.904948);
   hbadmatch_stack_1->SetBinContent(7,6.6546);
   hbadmatch_stack_1->SetBinContent(8,1.568651);
   hbadmatch_stack_1->SetBinContent(9,2.78759);
   hbadmatch_stack_1->SetBinContent(10,2.768476);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.592916);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.19471);
   hbadmatch_stack_1->SetBinError(2,2.034031);
   hbadmatch_stack_1->SetBinError(3,2.243435);
   hbadmatch_stack_1->SetBinError(4,3.230122);
   hbadmatch_stack_1->SetBinError(5,2.151888);
   hbadmatch_stack_1->SetBinError(6,1.176521);
   hbadmatch_stack_1->SetBinError(7,2.054821);
   hbadmatch_stack_1->SetBinError(8,0.5546069);
   hbadmatch_stack_1->SetBinError(9,0.8331329);
   hbadmatch_stack_1->SetBinError(10,0.8641811);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.4423482);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,8.235662);
   hext_stack_2->SetBinContent(2,38.86847);
   hext_stack_2->SetBinContent(3,117.9041);
   hext_stack_2->SetBinContent(4,121.5175);
   hext_stack_2->SetBinContent(5,78.61906);
   hext_stack_2->SetBinContent(6,47.17034);
   hext_stack_2->SetBinContent(7,28.79011);
   hext_stack_2->SetBinContent(8,13.09167);
   hext_stack_2->SetBinContent(9,8.407247);
   hext_stack_2->SetBinContent(10,7.467185);
   hext_stack_2->SetBinContent(11,3.636211);
   hext_stack_2->SetBinContent(13,1.137595);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinError(1,2.023203);
   hext_stack_2->SetBinError(2,4.139131);
   hext_stack_2->SetBinError(3,7.234694);
   hext_stack_2->SetBinError(4,7.530116);
   hext_stack_2->SetBinError(5,5.964947);
   hext_stack_2->SetBinError(6,4.60617);
   hext_stack_2->SetBinError(7,3.63243);
   hext_stack_2->SetBinError(8,2.491863);
   hext_stack_2->SetBinError(9,2.003079);
   hext_stack_2->SetBinError(10,1.739811);
   hext_stack_2->SetBinError(11,1.272817);
   hext_stack_2->SetBinError(13,0.6602113);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetEntries(1136);

   ci = 1477;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.8602919);
   hdirt_stack_3->SetBinContent(2,6.055994);
   hdirt_stack_3->SetBinContent(3,16.86231);
   hdirt_stack_3->SetBinContent(4,14.92624);
   hdirt_stack_3->SetBinContent(5,7.308882);
   hdirt_stack_3->SetBinContent(6,4.026556);
   hdirt_stack_3->SetBinContent(7,3.680526);
   hdirt_stack_3->SetBinContent(8,0.7028415);
   hdirt_stack_3->SetBinContent(9,1.298596);
   hdirt_stack_3->SetBinContent(10,1.330832);
   hdirt_stack_3->SetBinError(1,0.4684579);
   hdirt_stack_3->SetBinError(2,1.253017);
   hdirt_stack_3->SetBinError(3,2.119862);
   hdirt_stack_3->SetBinError(4,2.027609);
   hdirt_stack_3->SetBinError(5,1.419685);
   hdirt_stack_3->SetBinError(6,1.09428);
   hdirt_stack_3->SetBinError(7,1.270392);
   hdirt_stack_3->SetBinError(8,0.4537404);
   hdirt_stack_3->SetBinError(9,0.6867118);
   hdirt_stack_3->SetBinError(10,1.107563);
   hdirt_stack_3->SetEntries(238);

   ci = 1478;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,4.754177);
   houtFV_stack_4->SetBinContent(2,34.83014);
   houtFV_stack_4->SetBinContent(3,109.8223);
   houtFV_stack_4->SetBinContent(4,131.8678);
   houtFV_stack_4->SetBinContent(5,83.00139);
   houtFV_stack_4->SetBinContent(6,51.2091);
   houtFV_stack_4->SetBinContent(7,32.51798);
   houtFV_stack_4->SetBinContent(8,22.29467);
   houtFV_stack_4->SetBinContent(9,12.62095);
   houtFV_stack_4->SetBinContent(10,6.615517);
   houtFV_stack_4->SetBinContent(11,6.98545);
   houtFV_stack_4->SetBinContent(12,3.999767);
   houtFV_stack_4->SetBinContent(13,1.804013);
   houtFV_stack_4->SetBinContent(14,0.9286332);
   houtFV_stack_4->SetBinContent(15,1.030359);
   houtFV_stack_4->SetBinContent(16,0.5492091);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.4423349);
   houtFV_stack_4->SetBinError(1,1.068628);
   houtFV_stack_4->SetBinError(2,2.930873);
   houtFV_stack_4->SetBinError(3,5.343881);
   houtFV_stack_4->SetBinError(4,5.863862);
   houtFV_stack_4->SetBinError(5,4.578753);
   houtFV_stack_4->SetBinError(6,3.537855);
   houtFV_stack_4->SetBinError(7,2.872274);
   houtFV_stack_4->SetBinError(8,2.358849);
   houtFV_stack_4->SetBinError(9,1.890253);
   houtFV_stack_4->SetBinError(10,1.352043);
   houtFV_stack_4->SetBinError(11,1.293808);
   houtFV_stack_4->SetBinError(12,1.03826);
   houtFV_stack_4->SetBinError(13,0.7075491);
   houtFV_stack_4->SetBinError(14,0.48078);
   houtFV_stack_4->SetBinError(15,0.5574108);
   houtFV_stack_4->SetBinError(16,0.3992681);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.3146838);
   houtFV_stack_4->SetEntries(2163);

   ci = 1479;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.086108);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.437036);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.17143);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,16.04954);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,13.51229);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,13.69348);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.70966);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.963831);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.8831);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.751738);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.52413);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.799226);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.505776);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.115008);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.697004);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.756708);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2661506);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7874513);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.161301);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.321316);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.193531);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.212056);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.116708);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9892469);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7530049);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6683942);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5176605);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4488676);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4090187);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3516243);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2563433);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3762221);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1480;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.310972);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.091844);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.772158);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.03114);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.445904);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3399938);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4651901);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4690095);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.297566);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2422936);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1481;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.775894);
   hNCpi0inFVres_stack_7->SetBinContent(2,39.99116);
   hNCpi0inFVres_stack_7->SetBinContent(3,184.5954);
   hNCpi0inFVres_stack_7->SetBinContent(4,282.7864);
   hNCpi0inFVres_stack_7->SetBinContent(5,243.6066);
   hNCpi0inFVres_stack_7->SetBinContent(6,183.1789);
   hNCpi0inFVres_stack_7->SetBinContent(7,126.3604);
   hNCpi0inFVres_stack_7->SetBinContent(8,85.76173);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.25352);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.59399);
   hNCpi0inFVres_stack_7->SetBinContent(11,19.41067);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.12732);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.662242);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.479713);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.287144);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.812676);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.15619);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.253676);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9770041);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.421908);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5113564);
   hNCpi0inFVres_stack_7->SetBinError(2,2.071738);
   hNCpi0inFVres_stack_7->SetBinError(3,4.494658);
   hNCpi0inFVres_stack_7->SetBinError(4,5.440935);
   hNCpi0inFVres_stack_7->SetBinError(5,5.047837);
   hNCpi0inFVres_stack_7->SetBinError(6,4.426097);
   hNCpi0inFVres_stack_7->SetBinError(7,3.653947);
   hNCpi0inFVres_stack_7->SetBinError(8,2.992629);
   hNCpi0inFVres_stack_7->SetBinError(9,2.407155);
   hNCpi0inFVres_stack_7->SetBinError(10,1.945747);
   hNCpi0inFVres_stack_7->SetBinError(11,1.427305);
   hNCpi0inFVres_stack_7->SetBinError(12,1.046383);
   hNCpi0inFVres_stack_7->SetBinError(13,1.02995);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7538231);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4710102);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4193552);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2569743);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3290372);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3542895);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3635961);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1482;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.083145);
   hNCpi0inFVdis_stack_8->SetBinContent(3,32.75007);
   hNCpi0inFVdis_stack_8->SetBinContent(4,45.09654);
   hNCpi0inFVdis_stack_8->SetBinContent(5,39.50341);
   hNCpi0inFVdis_stack_8->SetBinContent(6,28.8497);
   hNCpi0inFVdis_stack_8->SetBinContent(7,25.58241);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.16406);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.86345);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.02868);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.072765);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.81585);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.598284);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.179784);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.701908);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.490494);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3347998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.039779);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9002967);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.84057);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.15826);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.074726);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.716753);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.643196);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.498735);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.254994);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.054719);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9440157);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8337464);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.608445);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5987731);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.438191);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3487525);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.09664838);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5063205);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1483;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1484;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1485;
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
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,1.65886);
   hCCpi0inFV_stack_11->SetBinContent(2,13.73616);
   hCCpi0inFV_stack_11->SetBinContent(3,56.91855);
   hCCpi0inFV_stack_11->SetBinContent(4,87.44209);
   hCCpi0inFV_stack_11->SetBinContent(5,105.376);
   hCCpi0inFV_stack_11->SetBinContent(6,104.5158);
   hCCpi0inFV_stack_11->SetBinContent(7,80.09159);
   hCCpi0inFV_stack_11->SetBinContent(8,49.61054);
   hCCpi0inFV_stack_11->SetBinContent(9,34.07115);
   hCCpi0inFV_stack_11->SetBinContent(10,28.2308);
   hCCpi0inFV_stack_11->SetBinContent(11,18.5822);
   hCCpi0inFV_stack_11->SetBinContent(12,13.62459);
   hCCpi0inFV_stack_11->SetBinContent(13,8.389584);
   hCCpi0inFV_stack_11->SetBinContent(14,5.08985);
   hCCpi0inFV_stack_11->SetBinContent(15,4.843263);
   hCCpi0inFV_stack_11->SetBinContent(16,4.21278);
   hCCpi0inFV_stack_11->SetBinContent(17,1.26712);
   hCCpi0inFV_stack_11->SetBinContent(18,2.1425);
   hCCpi0inFV_stack_11->SetBinContent(19,1.178602);
   hCCpi0inFV_stack_11->SetBinContent(20,1.125349);
   hCCpi0inFV_stack_11->SetBinContent(21,4.889754);
   hCCpi0inFV_stack_11->SetBinError(1,0.650338);
   hCCpi0inFV_stack_11->SetBinError(2,1.85199);
   hCCpi0inFV_stack_11->SetBinError(3,3.788434);
   hCCpi0inFV_stack_11->SetBinError(4,4.636759);
   hCCpi0inFV_stack_11->SetBinError(5,5.162039);
   hCCpi0inFV_stack_11->SetBinError(6,5.183937);
   hCCpi0inFV_stack_11->SetBinError(7,4.50261);
   hCCpi0inFV_stack_11->SetBinError(8,3.519946);
   hCCpi0inFV_stack_11->SetBinError(9,2.919255);
   hCCpi0inFV_stack_11->SetBinError(10,2.657923);
   hCCpi0inFV_stack_11->SetBinError(11,2.104361);
   hCCpi0inFV_stack_11->SetBinError(12,1.87204);
   hCCpi0inFV_stack_11->SetBinError(13,1.494);
   hCCpi0inFV_stack_11->SetBinError(14,1.093075);
   hCCpi0inFV_stack_11->SetBinError(15,1.093512);
   hCCpi0inFV_stack_11->SetBinError(16,0.9616004);
   hCCpi0inFV_stack_11->SetBinError(17,0.5883944);
   hCCpi0inFV_stack_11->SetBinError(18,0.7846555);
   hCCpi0inFV_stack_11->SetBinError(19,0.4811646);
   hCCpi0inFV_stack_11->SetBinError(20,0.5194673);
   hCCpi0inFV_stack_11->SetBinError(21,1.074613);
   hCCpi0inFV_stack_11->SetEntries(2680);

   ci = 1486;
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
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,0.7302274);
   hNCinFV_stack_12->SetBinContent(2,5.281494);
   hNCinFV_stack_12->SetBinContent(3,18.96948);
   hNCinFV_stack_12->SetBinContent(4,33.55965);
   hNCinFV_stack_12->SetBinContent(5,28.20692);
   hNCinFV_stack_12->SetBinContent(6,14.80162);
   hNCinFV_stack_12->SetBinContent(7,12.40734);
   hNCinFV_stack_12->SetBinContent(8,10.06197);
   hNCinFV_stack_12->SetBinContent(9,4.498013);
   hNCinFV_stack_12->SetBinContent(10,3.424227);
   hNCinFV_stack_12->SetBinContent(11,5.66539);
   hNCinFV_stack_12->SetBinContent(12,2.585803);
   hNCinFV_stack_12->SetBinContent(13,0.9835768);
   hNCinFV_stack_12->SetBinContent(14,0.9785053);
   hNCinFV_stack_12->SetBinContent(15,0.9286332);
   hNCinFV_stack_12->SetBinContent(16,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,0.3917402);
   hNCinFV_stack_12->SetBinContent(18,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.7319179);
   hNCinFV_stack_12->SetBinError(1,0.4379386);
   hNCinFV_stack_12->SetBinError(2,1.109741);
   hNCinFV_stack_12->SetBinError(3,2.168342);
   hNCinFV_stack_12->SetBinError(4,2.931052);
   hNCinFV_stack_12->SetBinError(5,2.754853);
   hNCinFV_stack_12->SetBinError(6,1.896722);
   hNCinFV_stack_12->SetBinError(7,1.765977);
   hNCinFV_stack_12->SetBinError(8,1.631034);
   hNCinFV_stack_12->SetBinError(9,1.038297);
   hNCinFV_stack_12->SetBinError(10,0.8770549);
   hNCinFV_stack_12->SetBinError(11,1.226202);
   hNCinFV_stack_12->SetBinError(12,0.8083481);
   hNCinFV_stack_12->SetBinError(13,0.4398689);
   hNCinFV_stack_12->SetBinError(14,0.4376048);
   hNCinFV_stack_12->SetBinError(15,0.48078);
   hNCinFV_stack_12->SetBinError(16,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.2770047);
   hNCinFV_stack_12->SetBinError(18,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.438694);
   hNCinFV_stack_12->SetEntries(615);

   ci = 1487;
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
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,1.775216);
   hnumuCCinFV_stack_13->SetBinContent(2,9.326422);
   hnumuCCinFV_stack_13->SetBinContent(3,29.34837);
   hnumuCCinFV_stack_13->SetBinContent(4,46.53026);
   hnumuCCinFV_stack_13->SetBinContent(5,44.1087);
   hnumuCCinFV_stack_13->SetBinContent(6,27.45891);
   hnumuCCinFV_stack_13->SetBinContent(7,21.19508);
   hnumuCCinFV_stack_13->SetBinContent(8,14.88609);
   hnumuCCinFV_stack_13->SetBinContent(9,7.352519);
   hnumuCCinFV_stack_13->SetBinContent(10,4.396214);
   hnumuCCinFV_stack_13->SetBinContent(11,3.825856);
   hnumuCCinFV_stack_13->SetBinContent(12,2.906013);
   hnumuCCinFV_stack_13->SetBinContent(13,1.453269);
   hnumuCCinFV_stack_13->SetBinContent(14,1.072095);
   hnumuCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(18,0.6465525);
   hnumuCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(21,1.58351);
   hnumuCCinFV_stack_13->SetBinError(1,1.265887);
   hnumuCCinFV_stack_13->SetBinError(2,1.967042);
   hnumuCCinFV_stack_13->SetBinError(3,3.453157);
   hnumuCCinFV_stack_13->SetBinError(4,3.99011);
   hnumuCCinFV_stack_13->SetBinError(5,4.295868);
   hnumuCCinFV_stack_13->SetBinError(6,3.319505);
   hnumuCCinFV_stack_13->SetBinError(7,2.43965);
   hnumuCCinFV_stack_13->SetBinError(8,2.010361);
   hnumuCCinFV_stack_13->SetBinError(9,1.283814);
   hnumuCCinFV_stack_13->SetBinError(10,1.011947);
   hnumuCCinFV_stack_13->SetBinError(11,1.04412);
   hnumuCCinFV_stack_13->SetBinError(12,0.8283285);
   hnumuCCinFV_stack_13->SetBinError(13,0.7310422);
   hnumuCCinFV_stack_13->SetBinError(14,0.5551335);
   hnumuCCinFV_stack_13->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_13->SetBinError(17,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(18,0.3761177);
   hnumuCCinFV_stack_13->SetBinError(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(21,0.6751139);
   hnumuCCinFV_stack_13->SetEntries(846);

   ci = 1488;
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
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(2,1.19108);
   hnueCCinFV_stack_14->SetBinContent(3,1.824875);
   hnueCCinFV_stack_14->SetBinContent(4,5.46066);
   hnueCCinFV_stack_14->SetBinContent(5,2.978965);
   hnueCCinFV_stack_14->SetBinContent(6,1.373598);
   hnueCCinFV_stack_14->SetBinContent(7,0.5901461);
   hnueCCinFV_stack_14->SetBinContent(8,1.408008);
   hnueCCinFV_stack_14->SetBinContent(9,2.447784);
   hnueCCinFV_stack_14->SetBinContent(10,1.477872);
   hnueCCinFV_stack_14->SetBinContent(11,1.045954);
   hnueCCinFV_stack_14->SetBinContent(12,0.4656768);
   hnueCCinFV_stack_14->SetBinContent(13,1.185048);
   hnueCCinFV_stack_14->SetBinContent(14,0.6080654);
   hnueCCinFV_stack_14->SetBinContent(15,0.8753801);
   hnueCCinFV_stack_14->SetBinContent(16,0.6857124);
   hnueCCinFV_stack_14->SetBinContent(17,0.4142205);
   hnueCCinFV_stack_14->SetBinContent(18,0.8007563);
   hnueCCinFV_stack_14->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.0002655144);
   hnueCCinFV_stack_14->SetBinContent(21,7.799072);
   hnueCCinFV_stack_14->SetBinError(2,0.6525403);
   hnueCCinFV_stack_14->SetBinError(3,0.7946422);
   hnueCCinFV_stack_14->SetBinError(4,1.723729);
   hnueCCinFV_stack_14->SetBinError(5,0.9799475);
   hnueCCinFV_stack_14->SetBinError(6,0.6236594);
   hnueCCinFV_stack_14->SetBinError(7,0.340721);
   hnueCCinFV_stack_14->SetBinError(8,0.6112497);
   hnueCCinFV_stack_14->SetBinError(9,1.219247);
   hnueCCinFV_stack_14->SetBinError(10,0.7166852);
   hnueCCinFV_stack_14->SetBinError(11,0.5442761);
   hnueCCinFV_stack_14->SetBinError(12,0.3335974);
   hnueCCinFV_stack_14->SetBinError(13,0.6342845);
   hnueCCinFV_stack_14->SetBinError(14,0.3515683);
   hnueCCinFV_stack_14->SetBinError(15,0.5191111);
   hnueCCinFV_stack_14->SetBinError(16,0.5270816);
   hnueCCinFV_stack_14->SetBinError(17,0.2932668);
   hnueCCinFV_stack_14->SetBinError(18,0.4932626);
   hnueCCinFV_stack_14->SetBinError(19,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.0002655145);
   hnueCCinFV_stack_14->SetBinError(21,2.236913);
   hnueCCinFV_stack_14->SetEntries(115);

   ci = 1489;
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
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__11->SetBinContent(1,23.90795);
   hmcerror__11->SetBinContent(2,171.2805);
   hmcerror__11->SetBinContent(3,594.533);
   hmcerror__11->SetBinContent(4,812.2406);
   hmcerror__11->SetBinContent(5,666.2184);
   hmcerror__11->SetBinContent(6,482.3256);
   hmcerror__11->SetBinContent(7,352.3173);
   hmcerror__11->SetBinContent(8,231.6505);
   hmcerror__11->SetBinContent(9,149.8015);
   hmcerror__11->SetBinContent(10,107.4681);
   hmcerror__11->SetBinContent(11,71.03204);
   hmcerror__11->SetBinContent(12,43.69177);
   hmcerror__11->SetBinContent(13,30.20955);
   hmcerror__11->SetBinContent(14,19.84194);
   hmcerror__11->SetBinContent(15,13.77467);
   hmcerror__11->SetBinContent(16,10.06423);
   hmcerror__11->SetBinContent(17,4.151111);
   hmcerror__11->SetBinContent(18,7.06076);
   hmcerror__11->SetBinContent(19,4.750748);
   hmcerror__11->SetBinContent(20,2.088168);
   hmcerror__11->SetBinContent(21,22.59269);
   hmcerror__11->SetBinError(1,9.028455);
   hmcerror__11->SetBinError(2,35.49394);
   hmcerror__11->SetBinError(3,124.4683);
   hmcerror__11->SetBinError(4,165.2731);
   hmcerror__11->SetBinError(5,136.4791);
   hmcerror__11->SetBinError(6,102.1797);
   hmcerror__11->SetBinError(7,73.88237);
   hmcerror__11->SetBinError(8,48.56285);
   hmcerror__11->SetBinError(9,32.44442);
   hmcerror__11->SetBinError(10,23.72057);
   hmcerror__11->SetBinError(11,16.2869);
   hmcerror__11->SetBinError(12,11.8772);
   hmcerror__11->SetBinError(13,9.614557);
   hmcerror__11->SetBinError(14,5.473188);
   hmcerror__11->SetBinError(15,4.927718);
   hmcerror__11->SetBinError(16,5.661567);
   hmcerror__11->SetBinError(17,2.452983);
   hmcerror__11->SetBinError(18,3.156693);
   hmcerror__11->SetBinError(19,2.145896);
   hmcerror__11->SetBinError(20,1.91581);
   hmcerror__11->SetBinError(21,8.430716);
   hmcerror__11->SetEntries(3775.136);

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
   
   Double_t _fx3013[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3013[20] = {
   13,
   146,
   594,
   862,
   697,
   512,
   300,
   222,
   134,
   88,
   71,
   57,
   32,
   24,
   18,
   10,
   9,
   4,
   6,
   4};
   Double_t _felx3013[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3013[20] = {
   3.77763,
   12.08305,
   24.37212,
   29.35984,
   26.40076,
   22.62742,
   17.32051,
   14.89966,
   11.57584,
   9.5036,
   8.5518,
   7.679,
   5.7977,
   5.0476,
   4.4008,
   3.34883,
   3.19354,
   2.29683,
   2.67925,
   2.29683};
   Double_t _fehx3013[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3013[20] = {
   3.5552,
   12.08305,
   24.37212,
   29.35984,
   26.40076,
   22.62742,
   17.32051,
   14.89966,
   11.57584,
   9.3021,
   8.3496,
   7.4757,
   5.5904,
   4.837,
   4.1858,
   3.1179,
   2.9582,
   1.98186,
   2.41858,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(1.532853);
   Graph_Graph3013->SetMaximum(980.3255);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=21.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3803.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.8","F");

   ci = 1476;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 476.7","F");

   ci = 1477;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.4","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.1","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1290.3","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  252.6","F");

   ci = 1483;
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

   ci = 1484;
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

   ci = 1485;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 622.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 144.4","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 217.6","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 25.0","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_energy_all");
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
   
   Double_t _fx3014[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3014[20] = {
   0.377634,
   0.207227,
   0.2093548,
   0.203478,
   0.2048564,
   0.2118481,
   0.2097041,
   0.2096385,
   0.2165828,
   0.2207218,
   0.2292895,
   0.2718407,
   0.3182621,
   0.2758394,
   0.3577377,
   0.5625435,
   0.5909221,
   0.4470755,
   0.4516966,
   0.9174596};
   Double_t _fehx3014[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3014[20] = {
   0.377634,
   0.207227,
   0.2093548,
   0.203478,
   0.2048564,
   0.2118481,
   0.2097041,
   0.2096385,
   0.2165828,
   0.2207218,
   0.2292895,
   0.2718407,
   0.3182621,
   0.2758394,
   0.3577377,
   0.5625435,
   0.5909221,
   0.4470755,
   0.4516966,
   0.9174596};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3015[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3015[20] = {
   0.2029133,
   0.1609374,
   0.1685389,
   0.1817334,
   0.1953586,
   0.1979879,
   0.1949607,
   0.2029256,
   0.2094173,
   0.2084029,
   0.2161944,
   0.2411197,
   0.2348842,
   0.2365431,
   0.2711067,
   0.2702931,
   0.3639496,
   0.3039412,
   0.3166728,
   0.4856842};
   Double_t _fehx3015[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3015[20] = {
   0.2029133,
   0.1609374,
   0.1685389,
   0.1817334,
   0.1953586,
   0.1979879,
   0.1949607,
   0.2029256,
   0.2094173,
   0.2084029,
   0.2161944,
   0.2411197,
   0.2348842,
   0.2365431,
   0.2711067,
   0.2702931,
   0.3639496,
   0.3039412,
   0.3166728,
   0.4856842};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3016[20] = {
   0.5437521,
   0.8524031,
   0.9991036,
   1.061262,
   1.046203,
   1.061524,
   0.8515051,
   0.9583404,
   0.8945172,
   0.8188473,
   0.999549,
   1.304593,
   1.059268,
   1.209559,
   1.306746,
   0.993618,
   2.168094,
   0.5665113,
   1.262959,
   1.915555};
   Double_t _felx3016[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3016[20] = {
   0.1580073,
   0.07054539,
   0.04099372,
   0.03614672,
   0.03962778,
   0.04691316,
   0.04916167,
   0.0643196,
   0.07727451,
   0.08843178,
   0.1203936,
   0.1757539,
   0.1919161,
   0.2543905,
   0.319485,
   0.3327458,
   0.7693218,
   0.325295,
   0.5639639,
   1.099926};
   Double_t _fehx3016[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3016[20] = {
   0.1487037,
   0.07054539,
   0.04099372,
   0.03614672,
   0.03962778,
   0.04691316,
   0.04916167,
   0.0643196,
   0.07727451,
   0.08655681,
   0.117547,
   0.1711009,
   0.185054,
   0.2437766,
   0.3038766,
   0.3098002,
   0.7126286,
   0.2806865,
   0.5090946,
   0.9490902};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.2170946);
   Graph_Graph3016->SetMaximum(3.144674);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_energy_all",20,0,1200);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
