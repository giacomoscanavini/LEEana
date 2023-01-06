#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 17:16:32 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-14.56437,1692.308,1610.512);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hmc__7->SetBinContent(1,68.67733);
   hmc__7->SetBinContent(2,260.1112);
   hmc__7->SetBinContent(3,435.0882);
   hmc__7->SetBinContent(4,621.2336);
   hmc__7->SetBinContent(5,728.2183);
   hmc__7->SetBinContent(6,601.4274);
   hmc__7->SetBinContent(7,478.058);
   hmc__7->SetBinContent(8,367.0164);
   hmc__7->SetBinContent(9,291.7141);
   hmc__7->SetBinContent(10,228.345);
   hmc__7->SetBinContent(11,185.4059);
   hmc__7->SetBinContent(12,116.1665);
   hmc__7->SetBinContent(13,93.73589);
   hmc__7->SetBinContent(14,62.71298);
   hmc__7->SetBinContent(15,53.51136);
   hmc__7->SetBinContent(16,45.19089);
   hmc__7->SetBinContent(17,38.5138);
   hmc__7->SetBinContent(18,26.88398);
   hmc__7->SetBinContent(19,22.29686);
   hmc__7->SetBinContent(20,20.3649);
   hmc__7->SetBinContent(21,13.79375);
   hmc__7->SetBinContent(22,11.29614);
   hmc__7->SetBinContent(23,8.42919);
   hmc__7->SetBinContent(24,9.093154);
   hmc__7->SetBinContent(25,4.686884);
   hmc__7->SetBinContent(26,19.05288);
   hmc__7->SetBinError(1,14.8101);
   hmc__7->SetBinError(2,53.40579);
   hmc__7->SetBinError(3,93.66375);
   hmc__7->SetBinError(4,143.1895);
   hmc__7->SetBinError(5,169.0127);
   hmc__7->SetBinError(6,143.7169);
   hmc__7->SetBinError(7,114.2857);
   hmc__7->SetBinError(8,86.33414);
   hmc__7->SetBinError(9,71.77831);
   hmc__7->SetBinError(10,55.69314);
   hmc__7->SetBinError(11,44.52882);
   hmc__7->SetBinError(12,29.81419);
   hmc__7->SetBinError(13,21.93456);
   hmc__7->SetBinError(14,15.61833);
   hmc__7->SetBinError(15,14.19591);
   hmc__7->SetBinError(16,10.71101);
   hmc__7->SetBinError(17,9.214708);
   hmc__7->SetBinError(18,7.215684);
   hmc__7->SetBinError(19,5.266073);
   hmc__7->SetBinError(20,5.095396);
   hmc__7->SetBinError(21,3.930986);
   hmc__7->SetBinError(22,3.255118);
   hmc__7->SetBinError(23,2.499042);
   hmc__7->SetBinError(24,4.936999);
   hmc__7->SetBinError(25,1.839341);
   hmc__7->SetBinError(26,4.76127);
   hmc__7->SetMinimum(-14.56437);
   hmc__7->SetMaximum(1529.258);
   hmc__7->SetEntries(4762.881);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,1500);
   hs3_stack_3->SetMinimum(-1.202048e-08);
   hs3_stack_3->SetMaximum(764.6292);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1.123658);
   hbadmatch_stack_1->SetBinContent(2,2.641466);
   hbadmatch_stack_1->SetBinContent(3,2.141627);
   hbadmatch_stack_1->SetBinContent(4,3.536453);
   hbadmatch_stack_1->SetBinContent(5,2.657699);
   hbadmatch_stack_1->SetBinContent(6,2.236501);
   hbadmatch_stack_1->SetBinContent(7,1.680933);
   hbadmatch_stack_1->SetBinContent(8,1.151568);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,1.376319);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.5188295);
   hbadmatch_stack_1->SetBinError(2,0.8226409);
   hbadmatch_stack_1->SetBinError(3,0.6908445);
   hbadmatch_stack_1->SetBinError(4,1.027439);
   hbadmatch_stack_1->SetBinError(5,0.9805615);
   hbadmatch_stack_1->SetBinError(6,0.8397539);
   hbadmatch_stack_1->SetBinError(7,0.6317189);
   hbadmatch_stack_1->SetBinError(8,0.5062471);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.6470723);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.054399);
   hext_stack_2->SetBinContent(2,15.67249);
   hext_stack_2->SetBinContent(3,18.72497);
   hext_stack_2->SetBinContent(4,13.71294);
   hext_stack_2->SetBinContent(5,25.2145);
   hext_stack_2->SetBinContent(6,10.33209);
   hext_stack_2->SetBinContent(7,5.8292);
   hext_stack_2->SetBinContent(8,4.132192);
   hext_stack_2->SetBinContent(9,6.519885);
   hext_stack_2->SetBinContent(10,7.325902);
   hext_stack_2->SetBinContent(11,4.263464);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.890854);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(1,1.311223);
   hext_stack_2->SetBinError(2,2.730138);
   hext_stack_2->SetBinError(3,3.108386);
   hext_stack_2->SetBinError(4,2.25532);
   hext_stack_2->SetBinError(5,3.683557);
   hext_stack_2->SetBinError(6,2.290706);
   hext_stack_2->SetBinError(7,1.559401);
   hext_stack_2->SetBinError(8,1.282292);
   hext_stack_2->SetBinError(9,1.890284);
   hext_stack_2->SetBinError(10,2.026085);
   hext_stack_2->SetBinError(11,1.560171);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.323597);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetEntries(271);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.2665913);
   hdirt_stack_3->SetBinContent(2,0.853712);
   hdirt_stack_3->SetBinContent(3,0.5484001);
   hdirt_stack_3->SetBinContent(4,0.536227);
   hdirt_stack_3->SetBinContent(5,0.8582678);
   hdirt_stack_3->SetBinContent(6,0.7759796);
   hdirt_stack_3->SetBinContent(7,0.9878123);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(1,0.2665913);
   hdirt_stack_3->SetBinError(2,0.4538079);
   hdirt_stack_3->SetBinError(3,0.3260268);
   hdirt_stack_3->SetBinError(4,0.3148224);
   hdirt_stack_3->SetBinError(5,0.5285502);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.4736141);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(10,0.165896);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
   hdirt_stack_3->SetEntries(27);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,2.054373);
   houtFV_stack_4->SetBinContent(2,6.780948);
   houtFV_stack_4->SetBinContent(3,9.783535);
   houtFV_stack_4->SetBinContent(4,7.124203);
   houtFV_stack_4->SetBinContent(5,5.680202);
   houtFV_stack_4->SetBinContent(6,7.84719);
   houtFV_stack_4->SetBinContent(7,3.771379);
   houtFV_stack_4->SetBinContent(8,3.785978);
   houtFV_stack_4->SetBinContent(9,1.352291);
   houtFV_stack_4->SetBinContent(10,1.684587);
   houtFV_stack_4->SetBinContent(11,3.135108);
   houtFV_stack_4->SetBinContent(12,0.9801958);
   houtFV_stack_4->SetBinContent(13,1.322064);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinError(1,0.7273384);
   houtFV_stack_4->SetBinError(2,1.256128);
   houtFV_stack_4->SetBinError(3,1.574109);
   houtFV_stack_4->SetBinError(4,1.372175);
   houtFV_stack_4->SetBinError(5,1.317958);
   houtFV_stack_4->SetBinError(6,1.458357);
   houtFV_stack_4->SetBinError(7,0.9748804);
   houtFV_stack_4->SetBinError(8,1.81408);
   houtFV_stack_4->SetBinError(9,0.5668768);
   houtFV_stack_4->SetBinError(10,0.9585315);
   houtFV_stack_4->SetBinError(11,1.141916);
   houtFV_stack_4->SetBinError(12,0.4383608);
   houtFV_stack_4->SetBinError(13,0.5554667);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetEntries(234);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03076306);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2573834);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1705113);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.55546);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.680047);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.991201);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.711897);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.861413);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.37639);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.872539);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.377743);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3741011);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6582003);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.2219745);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1345337);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3531636);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8465099);
   hNCpi0inFVres_stack_7->SetBinError(3,1.126729);
   hNCpi0inFVres_stack_7->SetBinError(4,1.044012);
   hNCpi0inFVres_stack_7->SetBinError(5,1.131025);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9303633);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9861);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3988974);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1669442);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2915842);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1239508);
   hNCpi0inFVres_stack_7->SetBinError(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.08087716);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(949);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6944379);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.034054);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.475915);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.94048);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.249746);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.349043);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.210588);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.69949);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.190781);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6386398);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9577656);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1946706);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.011048);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8370979);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.134196);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.326723);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8692057);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6770113);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4700535);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3462455);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2773594);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3414807);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(773);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,34.36634);
   hCCpi0inFV_stack_10->SetBinContent(2,143.1317);
   hCCpi0inFV_stack_10->SetBinContent(3,287.1708);
   hCCpi0inFV_stack_10->SetBinContent(4,458.1813);
   hCCpi0inFV_stack_10->SetBinContent(5,527.8646);
   hCCpi0inFV_stack_10->SetBinContent(6,457.2478);
   hCCpi0inFV_stack_10->SetBinContent(7,385.2869);
   hCCpi0inFV_stack_10->SetBinContent(8,298.6034);
   hCCpi0inFV_stack_10->SetBinContent(9,233.3428);
   hCCpi0inFV_stack_10->SetBinContent(10,178.3992);
   hCCpi0inFV_stack_10->SetBinContent(11,149.43);
   hCCpi0inFV_stack_10->SetBinContent(12,91.60666);
   hCCpi0inFV_stack_10->SetBinContent(13,74.74568);
   hCCpi0inFV_stack_10->SetBinContent(14,51.33128);
   hCCpi0inFV_stack_10->SetBinContent(15,44.22178);
   hCCpi0inFV_stack_10->SetBinContent(16,34.48521);
   hCCpi0inFV_stack_10->SetBinContent(17,31.20184);
   hCCpi0inFV_stack_10->SetBinContent(18,20.49434);
   hCCpi0inFV_stack_10->SetBinContent(19,17.76576);
   hCCpi0inFV_stack_10->SetBinContent(20,16.78474);
   hCCpi0inFV_stack_10->SetBinContent(21,11.51684);
   hCCpi0inFV_stack_10->SetBinContent(22,8.366782);
   hCCpi0inFV_stack_10->SetBinContent(23,5.813315);
   hCCpi0inFV_stack_10->SetBinContent(24,5.608755);
   hCCpi0inFV_stack_10->SetBinContent(25,4.149991);
   hCCpi0inFV_stack_10->SetBinContent(26,16.28725);
   hCCpi0inFV_stack_10->SetBinError(1,2.911435);
   hCCpi0inFV_stack_10->SetBinError(2,5.990037);
   hCCpi0inFV_stack_10->SetBinError(3,8.519836);
   hCCpi0inFV_stack_10->SetBinError(4,10.82935);
   hCCpi0inFV_stack_10->SetBinError(5,11.54909);
   hCCpi0inFV_stack_10->SetBinError(6,10.77817);
   hCCpi0inFV_stack_10->SetBinError(7,9.913506);
   hCCpi0inFV_stack_10->SetBinError(8,8.706057);
   hCCpi0inFV_stack_10->SetBinError(9,7.750287);
   hCCpi0inFV_stack_10->SetBinError(10,6.652554);
   hCCpi0inFV_stack_10->SetBinError(11,6.175431);
   hCCpi0inFV_stack_10->SetBinError(12,4.725419);
   hCCpi0inFV_stack_10->SetBinError(13,4.342289);
   hCCpi0inFV_stack_10->SetBinError(14,3.650936);
   hCCpi0inFV_stack_10->SetBinError(15,3.28271);
   hCCpi0inFV_stack_10->SetBinError(16,2.946784);
   hCCpi0inFV_stack_10->SetBinError(17,2.815919);
   hCCpi0inFV_stack_10->SetBinError(18,2.259177);
   hCCpi0inFV_stack_10->SetBinError(19,2.078948);
   hCCpi0inFV_stack_10->SetBinError(20,2.047747);
   hCCpi0inFV_stack_10->SetBinError(21,1.704035);
   hCCpi0inFV_stack_10->SetBinError(22,1.464632);
   hCCpi0inFV_stack_10->SetBinError(23,1.176416);
   hCCpi0inFV_stack_10->SetBinError(24,1.241199);
   hCCpi0inFV_stack_10->SetBinError(25,1.075944);
   hCCpi0inFV_stack_10->SetBinError(26,2.052261);
   hCCpi0inFV_stack_10->SetEntries(15285);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,5.075243);
   hNCinFV_stack_11->SetBinContent(3,3.434371);
   hNCinFV_stack_11->SetBinContent(4,6.308788);
   hNCinFV_stack_11->SetBinContent(5,3.127768);
   hNCinFV_stack_11->SetBinContent(6,3.121006);
   hNCinFV_stack_11->SetBinContent(7,0.3401776);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(9,0.3917402);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,0.9286332);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,1.177914);
   hNCinFV_stack_11->SetBinError(3,0.8793172);
   hNCinFV_stack_11->SetBinError(4,1.257512);
   hNCinFV_stack_11->SetBinError(5,0.8999062);
   hNCinFV_stack_11->SetBinError(6,0.8984332);
   hNCinFV_stack_11->SetBinError(7,0.3401776);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(9,0.2770047);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.48078);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetEntries(106);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,23.25254);
   hnumuCCinFV_stack_12->SetBinContent(2,70.06631);
   hnumuCCinFV_stack_12->SetBinContent(3,93.87738);
   hnumuCCinFV_stack_12->SetBinContent(4,113.1822);
   hnumuCCinFV_stack_12->SetBinContent(5,144.7132);
   hnumuCCinFV_stack_12->SetBinContent(6,108.4094);
   hnumuCCinFV_stack_12->SetBinContent(7,72.8817);
   hnumuCCinFV_stack_12->SetBinContent(8,55.26766);
   hnumuCCinFV_stack_12->SetBinContent(9,48.00557);
   hnumuCCinFV_stack_12->SetBinContent(10,37.30935);
   hnumuCCinFV_stack_12->SetBinContent(11,25.73705);
   hnumuCCinFV_stack_12->SetBinContent(12,22.9497);
   hnumuCCinFV_stack_12->SetBinContent(13,15.69448);
   hnumuCCinFV_stack_12->SetBinContent(14,10.63597);
   hnumuCCinFV_stack_12->SetBinContent(15,8.177023);
   hnumuCCinFV_stack_12->SetBinContent(16,7.399211);
   hnumuCCinFV_stack_12->SetBinContent(17,6.011233);
   hnumuCCinFV_stack_12->SetBinContent(18,6.194618);
   hnumuCCinFV_stack_12->SetBinContent(19,4.531097);
   hnumuCCinFV_stack_12->SetBinContent(20,2.457416);
   hnumuCCinFV_stack_12->SetBinContent(21,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(22,2.929362);
   hnumuCCinFV_stack_12->SetBinContent(23,2.615874);
   hnumuCCinFV_stack_12->SetBinContent(24,3.484399);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,2.42546);
   hnumuCCinFV_stack_12->SetBinError(1,2.786765);
   hnumuCCinFV_stack_12->SetBinError(2,4.537918);
   hnumuCCinFV_stack_12->SetBinError(3,5.028813);
   hnumuCCinFV_stack_12->SetBinError(4,5.881061);
   hnumuCCinFV_stack_12->SetBinError(5,7.908668);
   hnumuCCinFV_stack_12->SetBinError(6,5.660125);
   hnumuCCinFV_stack_12->SetBinError(7,4.874893);
   hnumuCCinFV_stack_12->SetBinError(8,4.122248);
   hnumuCCinFV_stack_12->SetBinError(9,3.577511);
   hnumuCCinFV_stack_12->SetBinError(10,3.2336);
   hnumuCCinFV_stack_12->SetBinError(11,2.550759);
   hnumuCCinFV_stack_12->SetBinError(12,2.646199);
   hnumuCCinFV_stack_12->SetBinError(13,1.983098);
   hnumuCCinFV_stack_12->SetBinError(14,1.668049);
   hnumuCCinFV_stack_12->SetBinError(15,1.476514);
   hnumuCCinFV_stack_12->SetBinError(16,1.387396);
   hnumuCCinFV_stack_12->SetBinError(17,1.250359);
   hnumuCCinFV_stack_12->SetBinError(18,1.994404);
   hnumuCCinFV_stack_12->SetBinError(19,1.111645);
   hnumuCCinFV_stack_12->SetBinError(20,0.8034956);
   hnumuCCinFV_stack_12->SetBinError(21,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(22,0.8777653);
   hnumuCCinFV_stack_12->SetBinError(23,0.8160661);
   hnumuCCinFV_stack_12->SetBinError(24,2.292531);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.7989997);
   hnumuCCinFV_stack_12->SetEntries(3654);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(2,3.157715);
   hnueCCinFV_stack_13->SetBinContent(3,2.758916);
   hnueCCinFV_stack_13->SetBinContent(4,1.999038);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.5191111);
   hnueCCinFV_stack_13->SetBinError(2,0.9544214);
   hnueCCinFV_stack_13->SetBinError(3,0.8179726);
   hnueCCinFV_stack_13->SetBinError(4,0.7339349);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.438694);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetEntries(47);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__8->SetBinContent(1,68.67733);
   hmcerror__8->SetBinContent(2,260.1112);
   hmcerror__8->SetBinContent(3,435.0882);
   hmcerror__8->SetBinContent(4,621.2336);
   hmcerror__8->SetBinContent(5,728.2183);
   hmcerror__8->SetBinContent(6,601.4274);
   hmcerror__8->SetBinContent(7,478.058);
   hmcerror__8->SetBinContent(8,367.0164);
   hmcerror__8->SetBinContent(9,291.7141);
   hmcerror__8->SetBinContent(10,228.345);
   hmcerror__8->SetBinContent(11,185.4059);
   hmcerror__8->SetBinContent(12,116.1665);
   hmcerror__8->SetBinContent(13,93.73589);
   hmcerror__8->SetBinContent(14,62.71298);
   hmcerror__8->SetBinContent(15,53.51136);
   hmcerror__8->SetBinContent(16,45.19089);
   hmcerror__8->SetBinContent(17,38.5138);
   hmcerror__8->SetBinContent(18,26.88398);
   hmcerror__8->SetBinContent(19,22.29686);
   hmcerror__8->SetBinContent(20,20.3649);
   hmcerror__8->SetBinContent(21,13.79375);
   hmcerror__8->SetBinContent(22,11.29614);
   hmcerror__8->SetBinContent(23,8.42919);
   hmcerror__8->SetBinContent(24,9.093154);
   hmcerror__8->SetBinContent(25,4.686884);
   hmcerror__8->SetBinContent(26,19.05288);
   hmcerror__8->SetBinError(1,14.8101);
   hmcerror__8->SetBinError(2,53.40579);
   hmcerror__8->SetBinError(3,93.66375);
   hmcerror__8->SetBinError(4,143.1895);
   hmcerror__8->SetBinError(5,169.0127);
   hmcerror__8->SetBinError(6,143.7169);
   hmcerror__8->SetBinError(7,114.2857);
   hmcerror__8->SetBinError(8,86.33414);
   hmcerror__8->SetBinError(9,71.77831);
   hmcerror__8->SetBinError(10,55.69314);
   hmcerror__8->SetBinError(11,44.52882);
   hmcerror__8->SetBinError(12,29.81419);
   hmcerror__8->SetBinError(13,21.93456);
   hmcerror__8->SetBinError(14,15.61833);
   hmcerror__8->SetBinError(15,14.19591);
   hmcerror__8->SetBinError(16,10.71101);
   hmcerror__8->SetBinError(17,9.214708);
   hmcerror__8->SetBinError(18,7.215684);
   hmcerror__8->SetBinError(19,5.266073);
   hmcerror__8->SetBinError(20,5.095396);
   hmcerror__8->SetBinError(21,3.930986);
   hmcerror__8->SetBinError(22,3.255118);
   hmcerror__8->SetBinError(23,2.499042);
   hmcerror__8->SetBinError(24,4.936999);
   hmcerror__8->SetBinError(25,1.839341);
   hmcerror__8->SetBinError(26,4.76127);
   hmcerror__8->SetEntries(4762.881);

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
   Double_t _fy3009[25] = {
   68,
   246,
   393,
   588,
   674,
   620,
   472,
   313,
   246,
   182,
   153,
   137,
   102,
   52,
   50,
   33,
   25,
   16,
   20,
   12,
   12,
   8,
   9,
   6,
   6};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   8.3726,
   15.68439,
   19.82423,
   24.24871,
   25.96151,
   24.8998,
   21.72556,
   17.69181,
   15.68439,
   13.49074,
   12.36932,
   11.7047,
   10.0995,
   7.3419,
   7.2025,
   5.8847,
   5.1474,
   4.1628,
   4.6266,
   3.64022,
   3.64022,
   3.0307,
   3.19354,
   2.67925,
   2.67925};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   8.1701,
   15.68439,
   19.82423,
   24.24871,
   25.96151,
   24.8998,
   21.72556,
   17.69181,
   15.68439,
   13.49074,
   12.36932,
   11.7047,
   10.0995,
   7.1381,
   6.9985,
   5.6776,
   4.9374,
   3.9454,
   4.4133,
   3.4155,
   3.4155,
   2.7896,
   2.9582,
   2.41858,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(2.988675);
   Graph_Graph3009->SetMaximum(769.6256);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4443.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 122.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3571.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 888.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.7","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_muon_momentum_all");
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.2156476,
   0.2053191,
   0.2152753,
   0.2304923,
   0.2320907,
   0.2389597,
   0.2390624,
   0.2352324,
   0.2460571,
   0.2438991,
   0.2401693,
   0.2566505,
   0.2340039,
   0.2490445,
   0.2652878,
   0.2370169,
   0.2392573,
   0.2684009,
   0.23618,
   0.2502048,
   0.2849831,
   0.2881618,
   0.2964748,
   0.5429358,
   0.3924443};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.2156476,
   0.2053191,
   0.2152753,
   0.2304923,
   0.2320907,
   0.2389597,
   0.2390624,
   0.2352324,
   0.2460571,
   0.2438991,
   0.2401693,
   0.2566505,
   0.2340039,
   0.2490445,
   0.2652878,
   0.2370169,
   0.2392573,
   0.2684009,
   0.23618,
   0.2502048,
   0.2849831,
   0.2881618,
   0.2964748,
   0.5429358,
   0.3924443};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   Graph_Graph3010->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   Double_t _fely3011[25] = {
   0.2156476,
   0.2053191,
   0.2152753,
   0.2304923,
   0.2320907,
   0.2389597,
   0.2390624,
   0.2352324,
   0.2460571,
   0.2438991,
   0.2401693,
   0.2566505,
   0.2340039,
   0.2490445,
   0.2652878,
   0.2370169,
   0.2392573,
   0.2684009,
   0.23618,
   0.2502048,
   0.2849831,
   0.2881618,
   0.2964748,
   0.5429358,
   0.3924443};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.2156476,
   0.2053191,
   0.2152753,
   0.2304923,
   0.2320907,
   0.2389597,
   0.2390624,
   0.2352324,
   0.2460571,
   0.2438991,
   0.2401693,
   0.2566505,
   0.2340039,
   0.2490445,
   0.2652878,
   0.2370169,
   0.2392573,
   0.2684009,
   0.23618,
   0.2502048,
   0.2849831,
   0.2881618,
   0.2964748,
   0.5429358,
   0.3924443};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   0.9901375,
   0.9457493,
   0.9032652,
   0.9465039,
   0.9255467,
   1.030881,
   0.987328,
   0.8528229,
   0.8432916,
   0.7970396,
   0.8252163,
   1.179342,
   1.088164,
   0.8291744,
   0.934381,
   0.7302357,
   0.649118,
   0.5951499,
   0.8969872,
   0.5892492,
   0.8699593,
   0.7082062,
   1.067718,
   0.6598371,
   1.280168};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   0.1219121,
   0.06029878,
   0.0455637,
   0.03903316,
   0.03565073,
   0.04140117,
   0.04544545,
   0.0482044,
   0.05376631,
   0.05908051,
   0.06671479,
   0.1007579,
   0.1077443,
   0.1170715,
   0.1345976,
   0.1302187,
   0.1336508,
   0.1548431,
   0.2075001,
   0.1787497,
   0.2639036,
   0.2682951,
   0.3788668,
   0.2946447,
   0.5716485};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.1189636,
   0.06029878,
   0.0455637,
   0.03903316,
   0.03565073,
   0.04140117,
   0.04544545,
   0.0482044,
   0.05376631,
   0.05908051,
   0.06671479,
   0.1007579,
   0.1077443,
   0.1138217,
   0.1307853,
   0.1256359,
   0.1281982,
   0.1467565,
   0.1979337,
   0.167715,
   0.2476122,
   0.2469515,
   0.3509471,
   0.2659781,
   0.5160316};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.2220916);
   Graph_Graph3012->SetMaximum(1.939301);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_muon_momentum_all",25,0,1500);

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
