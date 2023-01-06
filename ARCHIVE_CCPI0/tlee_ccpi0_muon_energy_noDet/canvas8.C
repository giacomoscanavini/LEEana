#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 16:54:38 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-5.65317,1692.308,625.1215);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hmc__22->SetBinContent(2,21.51243);
   hmc__22->SetBinContent(3,123.3026);
   hmc__22->SetBinContent(4,217.1005);
   hmc__22->SetBinContent(5,282.6585);
   hmc__22->SetBinContent(6,259.5764);
   hmc__22->SetBinContent(7,199.6619);
   hmc__22->SetBinContent(8,145.4788);
   hmc__22->SetBinContent(9,112.3476);
   hmc__22->SetBinContent(10,95.24479);
   hmc__22->SetBinContent(11,76.33152);
   hmc__22->SetBinContent(12,50.5481);
   hmc__22->SetBinContent(13,39.1268);
   hmc__22->SetBinContent(14,27.41482);
   hmc__22->SetBinContent(15,22.3765);
   hmc__22->SetBinContent(16,18.17229);
   hmc__22->SetBinContent(17,18.86216);
   hmc__22->SetBinContent(18,8.704563);
   hmc__22->SetBinContent(19,10.23119);
   hmc__22->SetBinContent(20,7.837733);
   hmc__22->SetBinContent(21,6.213377);
   hmc__22->SetBinContent(22,5.06851);
   hmc__22->SetBinContent(23,3.447536);
   hmc__22->SetBinContent(24,2.979234);
   hmc__22->SetBinContent(25,1.127039);
   hmc__22->SetBinContent(26,9.356428);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,5.277579);
   hmc__22->SetBinError(3,24.73969);
   hmc__22->SetBinError(4,44.59481);
   hmc__22->SetBinError(5,57.3921);
   hmc__22->SetBinError(6,56.53796);
   hmc__22->SetBinError(7,45.95464);
   hmc__22->SetBinError(8,32.56964);
   hmc__22->SetBinError(9,26.23177);
   hmc__22->SetBinError(10,20.91108);
   hmc__22->SetBinError(11,17.30066);
   hmc__22->SetBinError(12,12.55431);
   hmc__22->SetBinError(13,9.869859);
   hmc__22->SetBinError(14,7.197214);
   hmc__22->SetBinError(15,5.735195);
   hmc__22->SetBinError(16,4.755339);
   hmc__22->SetBinError(17,5.192876);
   hmc__22->SetBinError(18,2.574649);
   hmc__22->SetBinError(19,3.021486);
   hmc__22->SetBinError(20,2.452468);
   hmc__22->SetBinError(21,2.136784);
   hmc__22->SetBinError(22,2.075425);
   hmc__22->SetBinError(23,1.356119);
   hmc__22->SetBinError(24,1.267979);
   hmc__22->SetBinError(25,0.7445956);
   hmc__22->SetBinError(26,2.71825);
   hmc__22->SetMinimum(-5.65317);
   hmc__22->SetMaximum(593.5828);
   hmc__22->SetEntries(1748.127);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1500);
   hs8_stack_8->SetMinimum(-1.202048e-08);
   hs8_stack_8->SetMaximum(296.7914);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,1.176643);
   hbadmatch_stack_1->SetBinContent(4,1.517089);
   hbadmatch_stack_1->SetBinContent(5,2.141132);
   hbadmatch_stack_1->SetBinContent(6,1.02063);
   hbadmatch_stack_1->SetBinContent(7,1.947217);
   hbadmatch_stack_1->SetBinContent(9,1.073786);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.5397959);
   hbadmatch_stack_1->SetBinError(4,0.5887087);
   hbadmatch_stack_1->SetBinError(5,0.9886739);
   hbadmatch_stack_1->SetBinError(6,0.4576411);
   hbadmatch_stack_1->SetBinError(7,0.6702869);
   hbadmatch_stack_1->SetBinError(9,0.5557297);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,1.868591);
   hext_stack_2->SetBinContent(3,8.426016);
   hext_stack_2->SetBinContent(4,6.534245);
   hext_stack_2->SetBinContent(5,8.167822);
   hext_stack_2->SetBinContent(6,10.16051);
   hext_stack_2->SetBinContent(7,4.214394);
   hext_stack_2->SetBinContent(8,1.614806);
   hext_stack_2->SetBinContent(9,2.021405);
   hext_stack_2->SetBinContent(10,7.643119);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(2,0.840497);
   hext_stack_2->SetBinError(3,1.935212);
   hext_stack_2->SetBinError(4,1.780665);
   hext_stack_2->SetBinError(5,1.905481);
   hext_stack_2->SetBinError(6,2.308323);
   hext_stack_2->SetBinError(7,1.305512);
   hext_stack_2->SetBinError(8,0.8528597);
   hext_stack_2->SetBinError(9,0.9448239);
   hext_stack_2->SetBinError(10,2.100346);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetEntries(130);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(3,0.4422882);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.6555186);
   hdirt_stack_3->SetBinContent(6,0.9390919);
   hdirt_stack_3->SetBinContent(7,1.206708);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(3,0.256382);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.406901);
   hdirt_stack_3->SetBinError(6,0.5551728);
   hdirt_stack_3->SetBinError(7,0.5217524);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
   hdirt_stack_3->SetEntries(20);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,0.9286332);
   houtFV_stack_4->SetBinContent(3,5.490931);
   houtFV_stack_4->SetBinContent(4,4.00421);
   houtFV_stack_4->SetBinContent(5,3.763833);
   houtFV_stack_4->SetBinContent(6,4.075643);
   houtFV_stack_4->SetBinContent(7,1.907138);
   houtFV_stack_4->SetBinContent(8,3.394238);
   houtFV_stack_4->SetBinContent(9,0.6186829);
   houtFV_stack_4->SetBinContent(10,0.4265028);
   houtFV_stack_4->SetBinContent(11,1.877025);
   houtFV_stack_4->SetBinContent(12,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.785171);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinError(2,0.48078);
   houtFV_stack_4->SetBinError(3,1.170287);
   houtFV_stack_4->SetBinError(4,0.9315492);
   houtFV_stack_4->SetBinError(5,1.063922);
   houtFV_stack_4->SetBinError(6,1.122956);
   houtFV_stack_4->SetBinError(7,0.6501133);
   houtFV_stack_4->SetBinError(8,1.792807);
   houtFV_stack_4->SetBinError(9,0.3580986);
   houtFV_stack_4->SetBinError(10,0.3024884);
   houtFV_stack_4->SetBinError(11,0.6904269);
   houtFV_stack_4->SetBinError(12,0.1950249);
   houtFV_stack_4->SetBinError(13,0.3925882);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetEntries(118);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08770081);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06592986);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2389644);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1695136);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.3382878);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.848733);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.759379);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.402439);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.353533);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.800234);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7889865);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3551616);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.01677029);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4796784);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1412735);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3337493);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8455738);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6969179);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4055121);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8027616);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2381614);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1547857);
   hNCpi0inFVres_stack_7->SetBinError(10,0.01677029);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2750427);
   hNCpi0inFVres_stack_7->SetBinError(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(413);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1086498);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.116875);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.849459);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.049318);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.802629);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.55988);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6742072);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5861743);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.255736);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2343295);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.06595394);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4703015);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8115017);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.041345);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7745459);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6272429);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2033707);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2359552);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1189699);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.117116);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(337);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,10.31524);
   hCCpi0inFV_stack_10->SetBinContent(3,68.24001);
   hCCpi0inFV_stack_10->SetBinContent(4,145.3083);
   hCCpi0inFV_stack_10->SetBinContent(5,188.344);
   hCCpi0inFV_stack_10->SetBinContent(6,177.3808);
   hCCpi0inFV_stack_10->SetBinContent(7,147.7292);
   hCCpi0inFV_stack_10->SetBinContent(8,110.3933);
   hCCpi0inFV_stack_10->SetBinContent(9,86.47379);
   hCCpi0inFV_stack_10->SetBinContent(10,64.98281);
   hCCpi0inFV_stack_10->SetBinContent(11,57.96044);
   hCCpi0inFV_stack_10->SetBinContent(12,35.4575);
   hCCpi0inFV_stack_10->SetBinContent(13,29.80242);
   hCCpi0inFV_stack_10->SetBinContent(14,21.83793);
   hCCpi0inFV_stack_10->SetBinContent(15,16.513);
   hCCpi0inFV_stack_10->SetBinContent(16,13.37969);
   hCCpi0inFV_stack_10->SetBinContent(17,15.47678);
   hCCpi0inFV_stack_10->SetBinContent(18,6.752091);
   hCCpi0inFV_stack_10->SetBinContent(19,7.362535);
   hCCpi0inFV_stack_10->SetBinContent(20,6.114846);
   hCCpi0inFV_stack_10->SetBinContent(21,5.058438);
   hCCpi0inFV_stack_10->SetBinContent(22,3.409649);
   hCCpi0inFV_stack_10->SetBinContent(23,2.100473);
   hCCpi0inFV_stack_10->SetBinContent(24,2.587494);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(26,8.282642);
   hCCpi0inFV_stack_10->SetBinError(2,1.58806);
   hCCpi0inFV_stack_10->SetBinError(3,4.140195);
   hCCpi0inFV_stack_10->SetBinError(4,6.061009);
   hCCpi0inFV_stack_10->SetBinError(5,6.842691);
   hCCpi0inFV_stack_10->SetBinError(6,6.678436);
   hCCpi0inFV_stack_10->SetBinError(7,6.122541);
   hCCpi0inFV_stack_10->SetBinError(8,5.295703);
   hCCpi0inFV_stack_10->SetBinError(9,4.680793);
   hCCpi0inFV_stack_10->SetBinError(10,4.012222);
   hCCpi0inFV_stack_10->SetBinError(11,3.881208);
   hCCpi0inFV_stack_10->SetBinError(12,2.902007);
   hCCpi0inFV_stack_10->SetBinError(13,2.701035);
   hCCpi0inFV_stack_10->SetBinError(14,2.405946);
   hCCpi0inFV_stack_10->SetBinError(15,1.980247);
   hCCpi0inFV_stack_10->SetBinError(16,1.872472);
   hCCpi0inFV_stack_10->SetBinError(17,1.991192);
   hCCpi0inFV_stack_10->SetBinError(18,1.27243);
   hCCpi0inFV_stack_10->SetBinError(19,1.320604);
   hCCpi0inFV_stack_10->SetBinError(20,1.159886);
   hCCpi0inFV_stack_10->SetBinError(21,1.200563);
   hCCpi0inFV_stack_10->SetBinError(22,0.9078178);
   hCCpi0inFV_stack_10->SetBinError(23,0.6782476);
   hCCpi0inFV_stack_10->SetBinError(24,0.8087577);
   hCCpi0inFV_stack_10->SetBinError(25,0.340721);
   hCCpi0inFV_stack_10->SetBinError(26,1.433117);
   hCCpi0inFV_stack_10->SetEntries(5273);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,1.713804);
   hNCinFV_stack_11->SetBinContent(4,2.200825);
   hNCinFV_stack_11->SetBinContent(5,2.982615);
   hNCinFV_stack_11->SetBinContent(6,0.9269427);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.6207051);
   hNCinFV_stack_11->SetBinError(4,0.7611465);
   hNCinFV_stack_11->SetBinError(5,0.8556548);
   hNCinFV_stack_11->SetBinError(6,0.4800908);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetEntries(43);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,7.011697);
   hnumuCCinFV_stack_12->SetBinContent(3,32.31449);
   hnumuCCinFV_stack_12->SetBinContent(4,47.01122);
   hnumuCCinFV_stack_12->SetBinContent(5,66.32439);
   hnumuCCinFV_stack_12->SetBinContent(6,58.03956);
   hnumuCCinFV_stack_12->SetBinContent(7,37.10213);
   hnumuCCinFV_stack_12->SetBinContent(8,28.15005);
   hnumuCCinFV_stack_12->SetBinContent(9,21.02192);
   hnumuCCinFV_stack_12->SetBinContent(10,21.38295);
   hnumuCCinFV_stack_12->SetBinContent(11,10.57385);
   hnumuCCinFV_stack_12->SetBinContent(12,13.9691);
   hnumuCCinFV_stack_12->SetBinContent(13,8.22716);
   hnumuCCinFV_stack_12->SetBinContent(14,4.715599);
   hnumuCCinFV_stack_12->SetBinContent(15,5.11901);
   hnumuCCinFV_stack_12->SetBinContent(16,4.052591);
   hnumuCCinFV_stack_12->SetBinContent(17,2.978776);
   hnumuCCinFV_stack_12->SetBinContent(18,1.560732);
   hnumuCCinFV_stack_12->SetBinContent(19,2.868658);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7968652);
   hnumuCCinFV_stack_12->SetBinContent(21,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(22,1.65886);
   hnumuCCinFV_stack_12->SetBinContent(23,1.347063);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7336084);
   hnumuCCinFV_stack_12->SetBinError(2,1.375657);
   hnumuCCinFV_stack_12->SetBinError(3,3.02963);
   hnumuCCinFV_stack_12->SetBinError(4,3.49991);
   hnumuCCinFV_stack_12->SetBinError(5,4.815804);
   hnumuCCinFV_stack_12->SetBinError(6,4.316013);
   hnumuCCinFV_stack_12->SetBinError(7,3.063222);
   hnumuCCinFV_stack_12->SetBinError(8,3.008134);
   hnumuCCinFV_stack_12->SetBinError(9,2.436884);
   hnumuCCinFV_stack_12->SetBinError(10,2.32976);
   hnumuCCinFV_stack_12->SetBinError(11,1.603077);
   hnumuCCinFV_stack_12->SetBinError(12,2.014018);
   hnumuCCinFV_stack_12->SetBinError(13,1.484885);
   hnumuCCinFV_stack_12->SetBinError(14,1.163172);
   hnumuCCinFV_stack_12->SetBinError(15,1.185544);
   hnumuCCinFV_stack_12->SetBinError(16,1.028538);
   hnumuCCinFV_stack_12->SetBinError(17,0.8900492);
   hnumuCCinFV_stack_12->SetBinError(18,0.5996721);
   hnumuCCinFV_stack_12->SetBinError(19,0.864257);
   hnumuCCinFV_stack_12->SetBinError(20,0.4711723);
   hnumuCCinFV_stack_12->SetBinError(21,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(22,0.650338);
   hnumuCCinFV_stack_12->SetBinError(23,0.5648839);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.4394482);
   hnumuCCinFV_stack_12->SetEntries(1565);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,1.323754);
   hnueCCinFV_stack_13->SetBinContent(4,1.558824);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.5560625);
   hnueCCinFV_stack_13->SetBinError(4,0.6039367);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.5197486);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetEntries(23);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);
   hmcerror__23->SetBinContent(2,21.51243);
   hmcerror__23->SetBinContent(3,123.3026);
   hmcerror__23->SetBinContent(4,217.1005);
   hmcerror__23->SetBinContent(5,282.6585);
   hmcerror__23->SetBinContent(6,259.5764);
   hmcerror__23->SetBinContent(7,199.6619);
   hmcerror__23->SetBinContent(8,145.4788);
   hmcerror__23->SetBinContent(9,112.3476);
   hmcerror__23->SetBinContent(10,95.24479);
   hmcerror__23->SetBinContent(11,76.33152);
   hmcerror__23->SetBinContent(12,50.5481);
   hmcerror__23->SetBinContent(13,39.1268);
   hmcerror__23->SetBinContent(14,27.41482);
   hmcerror__23->SetBinContent(15,22.3765);
   hmcerror__23->SetBinContent(16,18.17229);
   hmcerror__23->SetBinContent(17,18.86216);
   hmcerror__23->SetBinContent(18,8.704563);
   hmcerror__23->SetBinContent(19,10.23119);
   hmcerror__23->SetBinContent(20,7.837733);
   hmcerror__23->SetBinContent(21,6.213377);
   hmcerror__23->SetBinContent(22,5.06851);
   hmcerror__23->SetBinContent(23,3.447536);
   hmcerror__23->SetBinContent(24,2.979234);
   hmcerror__23->SetBinContent(25,1.127039);
   hmcerror__23->SetBinContent(26,9.356428);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,5.277579);
   hmcerror__23->SetBinError(3,24.73969);
   hmcerror__23->SetBinError(4,44.59481);
   hmcerror__23->SetBinError(5,57.3921);
   hmcerror__23->SetBinError(6,56.53796);
   hmcerror__23->SetBinError(7,45.95464);
   hmcerror__23->SetBinError(8,32.56964);
   hmcerror__23->SetBinError(9,26.23177);
   hmcerror__23->SetBinError(10,20.91108);
   hmcerror__23->SetBinError(11,17.30066);
   hmcerror__23->SetBinError(12,12.55431);
   hmcerror__23->SetBinError(13,9.869859);
   hmcerror__23->SetBinError(14,7.197214);
   hmcerror__23->SetBinError(15,5.735195);
   hmcerror__23->SetBinError(16,4.755339);
   hmcerror__23->SetBinError(17,5.192876);
   hmcerror__23->SetBinError(18,2.574649);
   hmcerror__23->SetBinError(19,3.021486);
   hmcerror__23->SetBinError(20,2.452468);
   hmcerror__23->SetBinError(21,2.136784);
   hmcerror__23->SetBinError(22,2.075425);
   hmcerror__23->SetBinError(23,1.356119);
   hmcerror__23->SetBinError(24,1.267979);
   hmcerror__23->SetBinError(25,0.7445956);
   hmcerror__23->SetBinError(26,2.71825);
   hmcerror__23->SetEntries(1748.127);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3029[25] = {
   0,
   28,
   112,
   229,
   271,
   270,
   222,
   148,
   121,
   82,
   65,
   69,
   51,
   23,
   28,
   11,
   13,
   9,
   7,
   8,
   7,
   4,
   7,
   2,
   1};
   Double_t _felx3029[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3029[25] = {
   0,
   5.4358,
   10.58301,
   15.13275,
   16.46208,
   16.43168,
   14.89966,
   12.16553,
   11,
   9.1791,
   8.1893,
   8.4327,
   7.2725,
   4.9457,
   5.4358,
   3.4975,
   3.77763,
   3.19354,
   2.85954,
   3.0307,
   2.85954,
   2.29683,
   2.85954,
   2,
   1};
   Double_t _fehx3029[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3029[25] = {
   1.1478,
   5.2271,
   10.58301,
   15.13275,
   16.46208,
   16.43168,
   14.89966,
   12.16553,
   11,
   8.9774,
   7.9866,
   8.2304,
   7.0686,
   4.7346,
   5.2271,
   3.27,
   3.5552,
   2.9582,
   2.61053,
   2.7896,
   2.61053,
   1.98186,
   2.61053,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1650);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(316.2083);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1788.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.4","F");

   ci = 1528;
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

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.7","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1223.6","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.7","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 378.1","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.6","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3030[25] = {
   0,
   0.245327,
   0.200642,
   0.2054109,
   0.203044,
   0.2178086,
   0.2301623,
   0.2238789,
   0.2334876,
   0.2195509,
   0.2266516,
   0.2483637,
   0.2522532,
   0.26253,
   0.2563044,
   0.2616808,
   0.2753066,
   0.2957815,
   0.295321,
   0.3129052,
   0.3439006,
   0.4094743,
   0.393359,
   0.4256059,
   0.6606652};
   Double_t _fehx3030[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3030[25] = {
   0,
   0.245327,
   0.200642,
   0.2054109,
   0.203044,
   0.2178086,
   0.2301623,
   0.2238789,
   0.2334876,
   0.2195509,
   0.2266516,
   0.2483637,
   0.2522532,
   0.26253,
   0.2563044,
   0.2616808,
   0.2753066,
   0.2957815,
   0.295321,
   0.3129052,
   0.3439006,
   0.4094743,
   0.393359,
   0.4256059,
   0.6606652};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1650);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Muon Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3031[25] = {
   0,
   0.245327,
   0.200642,
   0.2054109,
   0.203044,
   0.2178086,
   0.2301623,
   0.2238789,
   0.2334876,
   0.2195509,
   0.2266516,
   0.2483637,
   0.2522532,
   0.26253,
   0.2563044,
   0.2616808,
   0.2753066,
   0.2957815,
   0.295321,
   0.3129052,
   0.3439006,
   0.4094743,
   0.393359,
   0.4256059,
   0.6606652};
   Double_t _fehx3031[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3031[25] = {
   0,
   0.245327,
   0.200642,
   0.2054109,
   0.203044,
   0.2178086,
   0.2301623,
   0.2238789,
   0.2334876,
   0.2195509,
   0.2266516,
   0.2483637,
   0.2522532,
   0.26253,
   0.2563044,
   0.2616808,
   0.2753066,
   0.2957815,
   0.295321,
   0.3129052,
   0.3439006,
   0.4094743,
   0.393359,
   0.4256059,
   0.6606652};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1650);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3032[25] = {
   10,
   1.301573,
   0.9083343,
   1.054811,
   0.9587542,
   1.040156,
   1.11188,
   1.01733,
   1.077014,
   0.8609395,
   0.8515486,
   1.365036,
   1.303454,
   0.8389622,
   1.251313,
   0.6053172,
   0.6892107,
   1.03394,
   0.6841822,
   1.020703,
   1.126602,
   0.7891866,
   2.030436,
   0.6713136,
   0.8872806};
   Double_t _felx3032[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3032[25] = {
   0,
   0.2526818,
   0.08582952,
   0.06970387,
   0.05824017,
   0.0633019,
   0.07462448,
   0.08362404,
   0.09791039,
   0.09637378,
   0.107286,
   0.1668253,
   0.18587,
   0.1804024,
   0.2429245,
   0.1924634,
   0.2002756,
   0.3668811,
   0.2794923,
   0.3866807,
   0.4602232,
   0.4531569,
   0.8294447,
   0.6713136,
   0.8872806};
   Double_t _fehx3032[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3032[25] = {
   0,
   0.2429805,
   0.08582952,
   0.06970387,
   0.05824017,
   0.0633019,
   0.07462448,
   0.08362404,
   0.09791039,
   0.09425608,
   0.1046304,
   0.1628231,
   0.1806588,
   0.1727022,
   0.2335978,
   0.1799443,
   0.1884832,
   0.3398447,
   0.255154,
   0.3559193,
   0.4201467,
   0.3910144,
   0.7572163,
   0.5099197,
   1.206444};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1650);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_Emuon_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
