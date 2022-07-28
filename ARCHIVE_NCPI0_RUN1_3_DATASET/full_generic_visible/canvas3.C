#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  1 13:33:35 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-230.7692,-690.433,1692.308,72713.5);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_bnb_12_visible_energy_all",20,0,1500);
   hmc__7->SetBinContent(1,11476.42);
   hmc__7->SetBinContent(2,34521.65);
   hmc__7->SetBinContent(3,33544.79);
   hmc__7->SetBinContent(4,29560.92);
   hmc__7->SetBinContent(5,24785.45);
   hmc__7->SetBinContent(6,20465.39);
   hmc__7->SetBinContent(7,16592.99);
   hmc__7->SetBinContent(8,12878.01);
   hmc__7->SetBinContent(9,9747.192);
   hmc__7->SetBinContent(10,7228.531);
   hmc__7->SetBinContent(11,5384.072);
   hmc__7->SetBinContent(12,4111.83);
   hmc__7->SetBinContent(13,3079.912);
   hmc__7->SetBinContent(14,2309.52);
   hmc__7->SetBinContent(15,1784.356);
   hmc__7->SetBinContent(16,1359.379);
   hmc__7->SetBinContent(17,1063.311);
   hmc__7->SetBinContent(18,808.3851);
   hmc__7->SetBinContent(19,649.7805);
   hmc__7->SetBinContent(20,553.1094);
   hmc__7->SetBinContent(21,3356.344);
   hmc__7->SetBinError(1,1447.863);
   hmc__7->SetBinError(2,4571.652);
   hmc__7->SetBinError(3,4277.419);
   hmc__7->SetBinError(4,3767.036);
   hmc__7->SetBinError(5,3225.212);
   hmc__7->SetBinError(6,2739.936);
   hmc__7->SetBinError(7,2385.638);
   hmc__7->SetBinError(8,1962.019);
   hmc__7->SetBinError(9,1611.796);
   hmc__7->SetBinError(10,1344.302);
   hmc__7->SetBinError(11,1046.416);
   hmc__7->SetBinError(12,855.0266);
   hmc__7->SetBinError(13,683.4997);
   hmc__7->SetBinError(14,587.0053);
   hmc__7->SetBinError(15,373.5258);
   hmc__7->SetBinError(16,402.8679);
   hmc__7->SetBinError(17,250.4395);
   hmc__7->SetBinError(18,186.1932);
   hmc__7->SetBinError(19,158.5445);
   hmc__7->SetBinError(20,131.3413);
   hmc__7->SetBinError(21,698.1867);
   hmc__7->SetMinimum(-690.433);
   hmc__7->SetMaximum(69043.3);
   hmc__7->SetEntries(201139.1);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1500);
   hs3_stack_3->SetMinimum(0);
   hs3_stack_3->SetMaximum(36247.74);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1470.123);
   hbadmatch_stack_1->SetBinContent(2,1896.563);
   hbadmatch_stack_1->SetBinContent(3,1096.578);
   hbadmatch_stack_1->SetBinContent(4,657.1532);
   hbadmatch_stack_1->SetBinContent(5,370.4731);
   hbadmatch_stack_1->SetBinContent(6,250.441);
   hbadmatch_stack_1->SetBinContent(7,165.7861);
   hbadmatch_stack_1->SetBinContent(8,136.878);
   hbadmatch_stack_1->SetBinContent(9,75.95944);
   hbadmatch_stack_1->SetBinContent(10,45.1422);
   hbadmatch_stack_1->SetBinContent(11,35.85521);
   hbadmatch_stack_1->SetBinContent(12,27.6217);
   hbadmatch_stack_1->SetBinContent(13,14.7615);
   hbadmatch_stack_1->SetBinContent(14,12.01947);
   hbadmatch_stack_1->SetBinContent(15,5.863785);
   hbadmatch_stack_1->SetBinContent(16,7.829984);
   hbadmatch_stack_1->SetBinContent(17,2.401148);
   hbadmatch_stack_1->SetBinContent(18,2.95747);
   hbadmatch_stack_1->SetBinContent(19,2.223056);
   hbadmatch_stack_1->SetBinContent(20,5.745639);
   hbadmatch_stack_1->SetBinContent(21,35.74253);
   hbadmatch_stack_1->SetBinError(1,23.9877);
   hbadmatch_stack_1->SetBinError(2,28.79922);
   hbadmatch_stack_1->SetBinError(3,20.74658);
   hbadmatch_stack_1->SetBinError(4,16.94294);
   hbadmatch_stack_1->SetBinError(5,12.52319);
   hbadmatch_stack_1->SetBinError(6,13.26375);
   hbadmatch_stack_1->SetBinError(7,7.951805);
   hbadmatch_stack_1->SetBinError(8,8.088136);
   hbadmatch_stack_1->SetBinError(9,5.019146);
   hbadmatch_stack_1->SetBinError(10,3.755114);
   hbadmatch_stack_1->SetBinError(11,3.360599);
   hbadmatch_stack_1->SetBinError(12,2.98475);
   hbadmatch_stack_1->SetBinError(13,2.085373);
   hbadmatch_stack_1->SetBinError(14,2.118046);
   hbadmatch_stack_1->SetBinError(15,1.264444);
   hbadmatch_stack_1->SetBinError(16,1.616199);
   hbadmatch_stack_1->SetBinError(17,0.736331);
   hbadmatch_stack_1->SetBinError(18,0.8842564);
   hbadmatch_stack_1->SetBinError(19,0.8148509);
   hbadmatch_stack_1->SetBinError(20,2.505);
   hbadmatch_stack_1->SetBinError(21,4.385251);
   hbadmatch_stack_1->SetEntries(23972);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1454;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,4444.251);
   hext_stack_2->SetBinContent(2,7022.987);
   hext_stack_2->SetBinContent(3,4978.821);
   hext_stack_2->SetBinContent(4,3577.684);
   hext_stack_2->SetBinContent(5,2667.5);
   hext_stack_2->SetBinContent(6,2244.713);
   hext_stack_2->SetBinContent(7,2000.966);
   hext_stack_2->SetBinContent(8,1503.587);
   hext_stack_2->SetBinContent(9,991.9384);
   hext_stack_2->SetBinContent(10,625.8799);
   hext_stack_2->SetBinContent(11,444.2968);
   hext_stack_2->SetBinContent(12,334.2574);
   hext_stack_2->SetBinContent(13,258.2203);
   hext_stack_2->SetBinContent(14,195.4438);
   hext_stack_2->SetBinContent(15,152.3103);
   hext_stack_2->SetBinContent(16,120.4953);
   hext_stack_2->SetBinContent(17,87.28009);
   hext_stack_2->SetBinContent(18,77.21331);
   hext_stack_2->SetBinContent(19,62.57864);
   hext_stack_2->SetBinContent(20,58.78842);
   hext_stack_2->SetBinContent(21,858.7574);
   hext_stack_2->SetBinError(1,46.16865);
   hext_stack_2->SetBinError(2,57.27758);
   hext_stack_2->SetBinError(3,47.90039);
   hext_stack_2->SetBinError(4,40.29547);
   hext_stack_2->SetBinError(5,34.9654);
   hext_stack_2->SetBinError(6,32.25603);
   hext_stack_2->SetBinError(7,30.7312);
   hext_stack_2->SetBinError(8,26.84277);
   hext_stack_2->SetBinError(9,21.85068);
   hext_stack_2->SetBinError(10,17.28583);
   hext_stack_2->SetBinError(11,14.66047);
   hext_stack_2->SetBinError(12,12.60595);
   hext_stack_2->SetBinError(13,11.12501);
   hext_stack_2->SetBinError(14,9.613821);
   hext_stack_2->SetBinError(15,8.429541);
   hext_stack_2->SetBinError(16,7.460373);
   hext_stack_2->SetBinError(17,6.290626);
   hext_stack_2->SetBinError(18,5.963895);
   hext_stack_2->SetBinError(19,5.159388);
   hext_stack_2->SetBinError(20,5.191449);
   hext_stack_2->SetBinError(21,20.0792);
   hext_stack_2->SetEntries(75986);

   ci = 1455;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,1300.158);
   hdirt_stack_3->SetBinContent(2,2046.322);
   hdirt_stack_3->SetBinContent(3,1208.103);
   hdirt_stack_3->SetBinContent(4,702.8423);
   hdirt_stack_3->SetBinContent(5,437.1646);
   hdirt_stack_3->SetBinContent(6,314.3229);
   hdirt_stack_3->SetBinContent(7,223.997);
   hdirt_stack_3->SetBinContent(8,153.842);
   hdirt_stack_3->SetBinContent(9,115.7895);
   hdirt_stack_3->SetBinContent(10,90.83549);
   hdirt_stack_3->SetBinContent(11,76.96853);
   hdirt_stack_3->SetBinContent(12,55.6144);
   hdirt_stack_3->SetBinContent(13,51.93391);
   hdirt_stack_3->SetBinContent(14,39.68819);
   hdirt_stack_3->SetBinContent(15,32.30206);
   hdirt_stack_3->SetBinContent(16,26.80065);
   hdirt_stack_3->SetBinContent(17,24.92597);
   hdirt_stack_3->SetBinContent(18,16.4031);
   hdirt_stack_3->SetBinContent(19,16.96105);
   hdirt_stack_3->SetBinContent(20,16.48662);
   hdirt_stack_3->SetBinContent(21,107.3457);
   hdirt_stack_3->SetBinError(1,22.69253);
   hdirt_stack_3->SetBinError(2,28.71823);
   hdirt_stack_3->SetBinError(3,22.82304);
   hdirt_stack_3->SetBinError(4,16.44944);
   hdirt_stack_3->SetBinError(5,12.72721);
   hdirt_stack_3->SetBinError(6,11.54381);
   hdirt_stack_3->SetBinError(7,9.516372);
   hdirt_stack_3->SetBinError(8,7.897468);
   hdirt_stack_3->SetBinError(9,6.263043);
   hdirt_stack_3->SetBinError(10,6.024012);
   hdirt_stack_3->SetBinError(11,5.83716);
   hdirt_stack_3->SetBinError(12,5.452491);
   hdirt_stack_3->SetBinError(13,4.630091);
   hdirt_stack_3->SetBinError(14,4.689099);
   hdirt_stack_3->SetBinError(15,3.818369);
   hdirt_stack_3->SetBinError(16,3.424512);
   hdirt_stack_3->SetBinError(17,3.0338);
   hdirt_stack_3->SetBinError(18,2.138119);
   hdirt_stack_3->SetBinError(19,2.389704);
   hdirt_stack_3->SetBinError(20,2.948915);
   hdirt_stack_3->SetBinError(21,6.859518);
   hdirt_stack_3->SetEntries(28480);

   ci = 1456;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,1163.396);
   houtFV_stack_4->SetBinContent(2,3303.379);
   houtFV_stack_4->SetBinContent(3,2253.271);
   houtFV_stack_4->SetBinContent(4,1538.412);
   houtFV_stack_4->SetBinContent(5,993.3878);
   houtFV_stack_4->SetBinContent(6,711.8834);
   houtFV_stack_4->SetBinContent(7,509.1788);
   houtFV_stack_4->SetBinContent(8,411.5697);
   houtFV_stack_4->SetBinContent(9,293.8063);
   houtFV_stack_4->SetBinContent(10,216.7811);
   houtFV_stack_4->SetBinContent(11,183.6124);
   houtFV_stack_4->SetBinContent(12,136.0425);
   houtFV_stack_4->SetBinContent(13,107.639);
   houtFV_stack_4->SetBinContent(14,87.90453);
   houtFV_stack_4->SetBinContent(15,60.05853);
   houtFV_stack_4->SetBinContent(16,45.37768);
   houtFV_stack_4->SetBinContent(17,40.75037);
   houtFV_stack_4->SetBinContent(18,28.24339);
   houtFV_stack_4->SetBinContent(19,18.77373);
   houtFV_stack_4->SetBinContent(20,26.6374);
   houtFV_stack_4->SetBinContent(21,99.53476);
   houtFV_stack_4->SetBinError(1,18.12562);
   houtFV_stack_4->SetBinError(2,32.00242);
   houtFV_stack_4->SetBinError(3,27.05373);
   houtFV_stack_4->SetBinError(4,22.84387);
   houtFV_stack_4->SetBinError(5,18.34597);
   houtFV_stack_4->SetBinError(6,16.69157);
   houtFV_stack_4->SetBinError(7,14.76023);
   houtFV_stack_4->SetBinError(8,14.0311);
   houtFV_stack_4->SetBinError(9,12.13478);
   houtFV_stack_4->SetBinError(10,10.38148);
   houtFV_stack_4->SetBinError(11,9.661808);
   houtFV_stack_4->SetBinError(12,7.817366);
   houtFV_stack_4->SetBinError(13,7.07311);
   houtFV_stack_4->SetBinError(14,7.059212);
   houtFV_stack_4->SetBinError(15,5.377619);
   houtFV_stack_4->SetBinError(16,3.774223);
   houtFV_stack_4->SetBinError(17,4.345138);
   houtFV_stack_4->SetBinError(18,3.481694);
   houtFV_stack_4->SetBinError(19,3.143118);
   houtFV_stack_4->SetBinError(20,5.073649);
   houtFV_stack_4->SetBinError(21,6.491796);
   houtFV_stack_4->SetEntries(48988);

   ci = 1457;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.780556);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,48.83251);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,40.93926);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,28.2751);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,15.31302);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,11.16935);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.441267);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.513752);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.387702);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.931584);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.965794);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.394672);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.63149);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.282408);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.854362);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.087108);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.691698);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9168951);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.291277);
   hNCpi0inFVcoh_stack_5->SetBinError(3,2.089214);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.748576);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.332779);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.160016);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7844383);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5904269);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5648792);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.586584);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4323036);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3434108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3623449);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.358204);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4653296);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3505157);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.0882275);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5526317);
   hNCpi0inFVcoh_stack_5->SetEntries(3360);

   ci = 1458;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,622.322);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,2218.533);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,1498.586);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,929.8145);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,531.5881);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,339.2711);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,214.6163);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,144.6315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,98.95703);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,66.82323);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,54.56667);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,37.52155);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,30.21633);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,22.38287);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,18.72912);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,14.57217);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,12.6188);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,8.648208);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,8.589941);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,8.63127);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,48.12157);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,8.141171);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,15.29421);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,12.66712);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,10.05449);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,7.49513);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,6.040618);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.755813);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.986906);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.229124);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.597658);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.488238);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.028925);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.822277);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.581356);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.431752);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.295235);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.177373);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.9719478);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.8882644);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.002502);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.323928);
   hNCpi0inFVnoncoh_stack_6->SetEntries(128446);

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,101.8739);
   hCCpi0inFV_stack_7->SetBinContent(2,915.726);
   hCCpi0inFV_stack_7->SetBinContent(3,1570.724);
   hCCpi0inFV_stack_7->SetBinContent(4,1854.01);
   hCCpi0inFV_stack_7->SetBinContent(5,1882.811);
   hCCpi0inFV_stack_7->SetBinContent(6,1732.025);
   hCCpi0inFV_stack_7->SetBinContent(7,1528.378);
   hCCpi0inFV_stack_7->SetBinContent(8,1259.767);
   hCCpi0inFV_stack_7->SetBinContent(9,1034.602);
   hCCpi0inFV_stack_7->SetBinContent(10,801.0479);
   hCCpi0inFV_stack_7->SetBinContent(11,634.21);
   hCCpi0inFV_stack_7->SetBinContent(12,522.8229);
   hCCpi0inFV_stack_7->SetBinContent(13,396.9953);
   hCCpi0inFV_stack_7->SetBinContent(14,311.1036);
   hCCpi0inFV_stack_7->SetBinContent(15,251.5887);
   hCCpi0inFV_stack_7->SetBinContent(16,208.1497);
   hCCpi0inFV_stack_7->SetBinContent(17,161.1746);
   hCCpi0inFV_stack_7->SetBinContent(18,147.7456);
   hCCpi0inFV_stack_7->SetBinContent(19,111.369);
   hCCpi0inFV_stack_7->SetBinContent(20,103.9021);
   hCCpi0inFV_stack_7->SetBinContent(21,713.2913);
   hCCpi0inFV_stack_7->SetBinError(1,5.452266);
   hCCpi0inFV_stack_7->SetBinError(2,15.16188);
   hCCpi0inFV_stack_7->SetBinError(3,19.87665);
   hCCpi0inFV_stack_7->SetBinError(4,21.61762);
   hCCpi0inFV_stack_7->SetBinError(5,21.7942);
   hCCpi0inFV_stack_7->SetBinError(6,20.87704);
   hCCpi0inFV_stack_7->SetBinError(7,19.654);
   hCCpi0inFV_stack_7->SetBinError(8,17.82243);
   hCCpi0inFV_stack_7->SetBinError(9,16.146);
   hCCpi0inFV_stack_7->SetBinError(10,14.17873);
   hCCpi0inFV_stack_7->SetBinError(11,12.68117);
   hCCpi0inFV_stack_7->SetBinError(12,11.50112);
   hCCpi0inFV_stack_7->SetBinError(13,10.01136);
   hCCpi0inFV_stack_7->SetBinError(14,8.827617);
   hCCpi0inFV_stack_7->SetBinError(15,7.949704);
   hCCpi0inFV_stack_7->SetBinError(16,7.235042);
   hCCpi0inFV_stack_7->SetBinError(17,6.374344);
   hCCpi0inFV_stack_7->SetBinError(18,6.125843);
   hCCpi0inFV_stack_7->SetBinError(19,5.309059);
   hCCpi0inFV_stack_7->SetBinError(20,5.097602);
   hCCpi0inFV_stack_7->SetBinError(21,13.43567);
   hCCpi0inFV_stack_7->SetEntries(69445);

   ci = 1460;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,671.9407);
   hNCinFV_stack_8->SetBinContent(2,5091.105);
   hNCinFV_stack_8->SetBinContent(3,3396.651);
   hNCinFV_stack_8->SetBinContent(4,1785.596);
   hNCinFV_stack_8->SetBinContent(5,977.5355);
   hNCinFV_stack_8->SetBinContent(6,559.5856);
   hNCinFV_stack_8->SetBinContent(7,321.8407);
   hNCinFV_stack_8->SetBinContent(8,187.5645);
   hNCinFV_stack_8->SetBinContent(9,130.3217);
   hNCinFV_stack_8->SetBinContent(10,71.14164);
   hNCinFV_stack_8->SetBinContent(11,57.24289);
   hNCinFV_stack_8->SetBinContent(12,32.97138);
   hNCinFV_stack_8->SetBinContent(13,25.13544);
   hNCinFV_stack_8->SetBinContent(14,20.42486);
   hNCinFV_stack_8->SetBinContent(15,14.84521);
   hNCinFV_stack_8->SetBinContent(16,10.9289);
   hNCinFV_stack_8->SetBinContent(17,10.06028);
   hNCinFV_stack_8->SetBinContent(18,7.337166);
   hNCinFV_stack_8->SetBinContent(19,5.518546);
   hNCinFV_stack_8->SetBinContent(20,2.155416);
   hNCinFV_stack_8->SetBinContent(21,19.24457);
   hNCinFV_stack_8->SetBinError(1,12.99026);
   hNCinFV_stack_8->SetBinError(2,35.73054);
   hNCinFV_stack_8->SetBinError(3,29.25795);
   hNCinFV_stack_8->SetBinError(4,21.13905);
   hNCinFV_stack_8->SetBinError(5,15.67859);
   hNCinFV_stack_8->SetBinError(6,11.91535);
   hNCinFV_stack_8->SetBinError(7,8.994515);
   hNCinFV_stack_8->SetBinError(8,6.896148);
   hNCinFV_stack_8->SetBinError(9,5.761976);
   hNCinFV_stack_8->SetBinError(10,4.234643);
   hNCinFV_stack_8->SetBinError(11,3.81958);
   hNCinFV_stack_8->SetBinError(12,2.852936);
   hNCinFV_stack_8->SetBinError(13,2.478627);
   hNCinFV_stack_8->SetBinError(14,2.254617);
   hNCinFV_stack_8->SetBinError(15,1.972744);
   hNCinFV_stack_8->SetBinError(16,1.710683);
   hNCinFV_stack_8->SetBinError(17,1.630831);
   hNCinFV_stack_8->SetBinError(18,1.316504);
   hNCinFV_stack_8->SetBinError(19,1.193827);
   hNCinFV_stack_8->SetBinError(20,0.6498885);
   hNCinFV_stack_8->SetBinError(21,2.202525);
   hNCinFV_stack_8->SetEntries(57294);

   ci = 1461;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,1685.709);
   hnumuCCinFV_stack_9->SetBinContent(2,11923.85);
   hnumuCCinFV_stack_9->SetBinContent(3,17423.13);
   hnumuCCinFV_stack_9->SetBinContent(4,18406.28);
   hnumuCCinFV_stack_9->SetBinContent(5,16835.22);
   hnumuCCinFV_stack_9->SetBinContent(6,14217.78);
   hnumuCCinFV_stack_9->SetBinContent(7,11559.12);
   hnumuCCinFV_stack_9->SetBinContent(8,9013.477);
   hnumuCCinFV_stack_9->SetBinContent(9,6940.851);
   hnumuCCinFV_stack_9->SetBinContent(10,5253.339);
   hnumuCCinFV_stack_9->SetBinContent(11,3851.281);
   hnumuCCinFV_stack_9->SetBinContent(12,2923.296);
   hnumuCCinFV_stack_9->SetBinContent(13,2155.732);
   hnumuCCinFV_stack_9->SetBinContent(14,1581.477);
   hnumuCCinFV_stack_9->SetBinContent(15,1221.655);
   hnumuCCinFV_stack_9->SetBinContent(16,897.5669);
   hnumuCCinFV_stack_9->SetBinContent(17,704.2756);
   hnumuCCinFV_stack_9->SetBinContent(18,497.6559);
   hnumuCCinFV_stack_9->SetBinContent(19,408.7916);
   hnumuCCinFV_stack_9->SetBinContent(20,315.8757);
   hnumuCCinFV_stack_9->SetBinContent(21,1324.956);
   hnumuCCinFV_stack_9->SetBinError(1,30.17568);
   hnumuCCinFV_stack_9->SetBinError(2,79.6819);
   hnumuCCinFV_stack_9->SetBinError(3,92.46308);
   hnumuCCinFV_stack_9->SetBinError(4,92.74173);
   hnumuCCinFV_stack_9->SetBinError(5,88.69995);
   hnumuCCinFV_stack_9->SetBinError(6,82.0196);
   hnumuCCinFV_stack_9->SetBinError(7,75.09591);
   hnumuCCinFV_stack_9->SetBinError(8,66.74796);
   hnumuCCinFV_stack_9->SetBinError(9,59.77845);
   hnumuCCinFV_stack_9->SetBinError(10,52.48516);
   hnumuCCinFV_stack_9->SetBinError(11,45.39213);
   hnumuCCinFV_stack_9->SetBinError(12,40.62324);
   hnumuCCinFV_stack_9->SetBinError(13,36.12141);
   hnumuCCinFV_stack_9->SetBinError(14,29.30169);
   hnumuCCinFV_stack_9->SetBinError(15,27.68647);
   hnumuCCinFV_stack_9->SetBinError(16,23.29359);
   hnumuCCinFV_stack_9->SetBinError(17,21.13139);
   hnumuCCinFV_stack_9->SetBinError(18,16.47544);
   hnumuCCinFV_stack_9->SetBinError(19,16.07048);
   hnumuCCinFV_stack_9->SetBinError(20,14.65133);
   hnumuCCinFV_stack_9->SetBinError(21,26.81073);
   hnumuCCinFV_stack_9->SetEntries(459623);

   ci = 1462;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,7.867251);
   hnueCCinFV_stack_10->SetBinContent(2,54.36218);
   hnueCCinFV_stack_10->SetBinContent(3,77.98396);
   hnueCCinFV_stack_10->SetBinContent(4,80.86016);
   hnueCCinFV_stack_10->SetBinContent(5,74.45058);
   hnueCCinFV_stack_10->SetBinContent(6,84.20274);
   hnueCCinFV_stack_10->SetBinContent(7,62.67358);
   hnueCCinFV_stack_10->SetBinContent(8,63.17842);
   hnueCCinFV_stack_10->SetBinContent(9,61.57883);
   hnueCCinFV_stack_10->SetBinContent(10,54.60902);
   hnueCCinFV_stack_10->SetBinContent(11,44.07277);
   hnueCCinFV_stack_10->SetBinContent(12,40.28747);
   hnueCCinFV_stack_10->SetBinContent(13,37.6468);
   hnueCCinFV_stack_10->SetBinContent(14,37.79329);
   hnueCCinFV_stack_10->SetBinContent(15,25.14895);
   hnueCCinFV_stack_10->SetBinContent(16,26.63995);
   hnueCCinFV_stack_10->SetBinContent(17,18.73678);
   hnueCCinFV_stack_10->SetBinContent(18,21.94409);
   hnueCCinFV_stack_10->SetBinContent(19,14.8217);
   hnueCCinFV_stack_10->SetBinContent(20,14.60799);
   hnueCCinFV_stack_10->SetBinContent(21,146.6588);
   hnueCCinFV_stack_10->SetBinError(1,2.139689);
   hnueCCinFV_stack_10->SetBinError(2,4.964908);
   hnueCCinFV_stack_10->SetBinError(3,6.2264);
   hnueCCinFV_stack_10->SetBinError(4,5.54722);
   hnueCCinFV_stack_10->SetBinError(5,5.207293);
   hnueCCinFV_stack_10->SetBinError(6,5.866003);
   hnueCCinFV_stack_10->SetBinError(7,4.337474);
   hnueCCinFV_stack_10->SetBinError(8,5.063852);
   hnueCCinFV_stack_10->SetBinError(9,5.133416);
   hnueCCinFV_stack_10->SetBinError(10,5.025997);
   hnueCCinFV_stack_10->SetBinError(11,3.74407);
   hnueCCinFV_stack_10->SetBinError(12,4.910878);
   hnueCCinFV_stack_10->SetBinError(13,4.087296);
   hnueCCinFV_stack_10->SetBinError(14,5.179133);
   hnueCCinFV_stack_10->SetBinError(15,3.280757);
   hnueCCinFV_stack_10->SetBinError(16,4.670728);
   hnueCCinFV_stack_10->SetBinError(17,2.79415);
   hnueCCinFV_stack_10->SetBinError(18,3.11062);
   hnueCCinFV_stack_10->SetBinError(19,2.257535);
   hnueCCinFV_stack_10->SetBinError(20,2.026894);
   hnueCCinFV_stack_10->SetBinError(21,8.949165);
   hnueCCinFV_stack_10->SetEntries(3908);

   ci = 1463;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_10,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__8->SetBinContent(1,11476.42);
   hmcerror__8->SetBinContent(2,34521.65);
   hmcerror__8->SetBinContent(3,33544.79);
   hmcerror__8->SetBinContent(4,29560.92);
   hmcerror__8->SetBinContent(5,24785.45);
   hmcerror__8->SetBinContent(6,20465.39);
   hmcerror__8->SetBinContent(7,16592.99);
   hmcerror__8->SetBinContent(8,12878.01);
   hmcerror__8->SetBinContent(9,9747.192);
   hmcerror__8->SetBinContent(10,7228.531);
   hmcerror__8->SetBinContent(11,5384.072);
   hmcerror__8->SetBinContent(12,4111.83);
   hmcerror__8->SetBinContent(13,3079.912);
   hmcerror__8->SetBinContent(14,2309.52);
   hmcerror__8->SetBinContent(15,1784.356);
   hmcerror__8->SetBinContent(16,1359.379);
   hmcerror__8->SetBinContent(17,1063.311);
   hmcerror__8->SetBinContent(18,808.3851);
   hmcerror__8->SetBinContent(19,649.7805);
   hmcerror__8->SetBinContent(20,553.1094);
   hmcerror__8->SetBinContent(21,3356.344);
   hmcerror__8->SetBinError(1,1447.863);
   hmcerror__8->SetBinError(2,4571.652);
   hmcerror__8->SetBinError(3,4277.419);
   hmcerror__8->SetBinError(4,3767.036);
   hmcerror__8->SetBinError(5,3225.212);
   hmcerror__8->SetBinError(6,2739.936);
   hmcerror__8->SetBinError(7,2385.638);
   hmcerror__8->SetBinError(8,1962.019);
   hmcerror__8->SetBinError(9,1611.796);
   hmcerror__8->SetBinError(10,1344.302);
   hmcerror__8->SetBinError(11,1046.416);
   hmcerror__8->SetBinError(12,855.0266);
   hmcerror__8->SetBinError(13,683.4997);
   hmcerror__8->SetBinError(14,587.0053);
   hmcerror__8->SetBinError(15,373.5258);
   hmcerror__8->SetBinError(16,402.8679);
   hmcerror__8->SetBinError(17,250.4395);
   hmcerror__8->SetBinError(18,186.1932);
   hmcerror__8->SetBinError(19,158.5445);
   hmcerror__8->SetBinError(20,131.3413);
   hmcerror__8->SetBinError(21,698.1867);
   hmcerror__8->SetEntries(201139.1);

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
   
   Double_t _fx3009[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3009[20] = {
   10355,
   33866,
   33957,
   30955,
   26470,
   21559,
   17059,
   12884,
   9453,
   7059,
   5304,
   3797,
   2758,
   2034,
   1545,
   1149,
   905,
   687,
   572,
   458};
   Double_t _felx3009[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3009[20] = {
   101.7595,
   184.0272,
   184.2743,
   175.9403,
   162.696,
   146.8298,
   130.6101,
   113.5077,
   97.22654,
   84.01786,
   72.82857,
   61.6198,
   52.51666,
   45.09989,
   39.30649,
   33.8969,
   30.08322,
   26.21068,
   23.91652,
   21.40093};
   Double_t _fehx3009[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3009[20] = {
   101.7595,
   184.0272,
   184.2743,
   175.9403,
   162.696,
   146.8298,
   130.6101,
   113.5077,
   97.22654,
   84.01786,
   72.82857,
   61.6198,
   52.51666,
   45.09989,
   39.30649,
   33.8969,
   30.08322,
   26.21068,
   23.91652,
   21.40093};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(392.9392);
   Graph_Graph3009->SetMaximum(37511.74);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 222826.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6282.4","F");

   ci = 1454;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 31849.2","F");

   ci = 1455;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6951.5","F");

   ci = 1456;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 12130.1","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  180.5","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  6881.6","F");

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 15530.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 13379.9","F");

   ci = 1461;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 127816.4","F");

   ci = 1462;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 903.5","F");

   ci = 1463;
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
   TText *pt_LaTex = pt->AddText("generic_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3010[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3010[20] = {
   0.1261598,
   0.1324285,
   0.1275137,
   0.127433,
   0.1301252,
   0.1338814,
   0.1437738,
   0.1523542,
   0.16536,
   0.1859717,
   0.194354,
   0.2079431,
   0.2219219,
   0.2541677,
   0.2093337,
   0.2963618,
   0.235528,
   0.2303274,
   0.243997,
   0.2374598};
   Double_t _fehx3010[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3010[20] = {
   0.1261598,
   0.1324285,
   0.1275137,
   0.127433,
   0.1301252,
   0.1338814,
   0.1437738,
   0.1523542,
   0.16536,
   0.1859717,
   0.194354,
   0.2079431,
   0.2219219,
   0.2541677,
   0.2093337,
   0.2963618,
   0.235528,
   0.2303274,
   0.243997,
   0.2374598};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3011[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3011[20] = {
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
   Double_t _felx3011[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3011[20] = {
   0.1000536,
   0.1250817,
   0.1247015,
   0.1261083,
   0.1281237,
   0.1302594,
   0.1357639,
   0.1411657,
   0.1464819,
   0.1557935,
   0.1594679,
   0.1678851,
   0.1686274,
   0.1666435,
   0.1807896,
   0.1779033,
   0.1784038,
   0.1635044,
   0.1687607,
   0.181944};
   Double_t _fehx3011[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3011[20] = {
   0.1000536,
   0.1250817,
   0.1247015,
   0.1261083,
   0.1281237,
   0.1302594,
   0.1357639,
   0.1411657,
   0.1464819,
   0.1557935,
   0.1594679,
   0.1678851,
   0.1686274,
   0.1666435,
   0.1807896,
   0.1779033,
   0.1784038,
   0.1635044,
   0.1687607,
   0.181944};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
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
   
   Double_t _fx3012[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3012[20] = {
   0.9022848,
   0.9810075,
   1.012288,
   1.047159,
   1.067965,
   1.053437,
   1.028084,
   1.000465,
   0.9698177,
   0.9765469,
   0.9851279,
   0.9234332,
   0.8954802,
   0.8807026,
   0.8658586,
   0.845239,
   0.8511152,
   0.8498425,
   0.8802973,
   0.8280459};
   Double_t _felx3012[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3012[20] = {
   0.008866834,
   0.005330775,
   0.00549338,
   0.005951787,
   0.006564176,
   0.007174542,
   0.007871401,
   0.008814074,
   0.009974825,
   0.01162309,
   0.01352667,
   0.01498598,
   0.01705135,
   0.01952782,
   0.02202839,
   0.02493558,
   0.02829203,
   0.03242351,
   0.03680708,
   0.03869204};
   Double_t _fehx3012[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3012[20] = {
   0.008866834,
   0.005330775,
   0.00549338,
   0.005951787,
   0.006564176,
   0.007174542,
   0.007871401,
   0.008814074,
   0.009974825,
   0.01162309,
   0.01352667,
   0.01498598,
   0.01705135,
   0.01952782,
   0.02202839,
   0.02493558,
   0.02829203,
   0.03242351,
   0.03680708,
   0.03869204};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.7608363);
   Graph_Graph3012->SetMaximum(1.103047);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_bnb_12_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
