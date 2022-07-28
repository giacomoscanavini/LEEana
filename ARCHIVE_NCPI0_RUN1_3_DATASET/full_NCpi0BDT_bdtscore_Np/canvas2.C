#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 12:18:08 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",138,161,1200,900);
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
   pad1->Range(0.2307692,-9.622174,6.641026,810.7948);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmc__4->SetBinContent(4,400.9757);
   hmc__4->SetBinContent(5,481.1087);
   hmc__4->SetBinContent(6,445.4059);
   hmc__4->SetBinContent(7,373.9081);
   hmc__4->SetBinContent(8,331.1264);
   hmc__4->SetBinContent(9,313.691);
   hmc__4->SetBinContent(10,276.4018);
   hmc__4->SetBinContent(11,268.7332);
   hmc__4->SetBinContent(12,226.9412);
   hmc__4->SetBinContent(13,168.027);
   hmc__4->SetBinContent(14,88.48708);
   hmc__4->SetBinContent(15,42.52755);
   hmc__4->SetBinContent(16,16.50454);
   hmc__4->SetBinContent(17,6.670051);
   hmc__4->SetBinContent(18,2.348542);
   hmc__4->SetBinContent(19,0.3763178);
   hmc__4->SetBinContent(20,0.1115999);
   hmc__4->SetBinContent(21,0.2525153);
   hmc__4->SetBinError(1,0.4212968);
   hmc__4->SetBinError(2,0.4212968);
   hmc__4->SetBinError(3,0.4212968);
   hmc__4->SetBinError(4,82.7876);
   hmc__4->SetBinError(5,92.95698);
   hmc__4->SetBinError(6,91.94031);
   hmc__4->SetBinError(7,89.95269);
   hmc__4->SetBinError(8,78.35276);
   hmc__4->SetBinError(9,77.78347);
   hmc__4->SetBinError(10,77.82871);
   hmc__4->SetBinError(11,71.16175);
   hmc__4->SetBinError(12,62.58531);
   hmc__4->SetBinError(13,47.96999);
   hmc__4->SetBinError(14,24.55423);
   hmc__4->SetBinError(15,11.69209);
   hmc__4->SetBinError(16,5.411863);
   hmc__4->SetBinError(17,2.824547);
   hmc__4->SetBinError(18,1.356473);
   hmc__4->SetBinError(19,0.5506065);
   hmc__4->SetBinError(20,0.3937501);
   hmc__4->SetBinError(21,0.5320355);
   hmc__4->SetMinimum(-9.622174);
   hmc__4->SetMaximum(769.7739);
   hmc__4->SetEntries(3396.741);
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
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(505.1641);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,14.18383);
   hbadmatch_stack_1->SetBinContent(5,14.98407);
   hbadmatch_stack_1->SetBinContent(6,12.31371);
   hbadmatch_stack_1->SetBinContent(7,10.54142);
   hbadmatch_stack_1->SetBinContent(8,9.093398);
   hbadmatch_stack_1->SetBinContent(9,5.76609);
   hbadmatch_stack_1->SetBinContent(10,4.794154);
   hbadmatch_stack_1->SetBinContent(11,2.645818);
   hbadmatch_stack_1->SetBinContent(12,4.47337);
   hbadmatch_stack_1->SetBinContent(13,2.195754);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(4,1.977591);
   hbadmatch_stack_1->SetBinError(5,2.042554);
   hbadmatch_stack_1->SetBinError(6,2.639691);
   hbadmatch_stack_1->SetBinError(7,1.752324);
   hbadmatch_stack_1->SetBinError(8,1.548624);
   hbadmatch_stack_1->SetBinError(9,1.1876);
   hbadmatch_stack_1->SetBinError(10,1.106824);
   hbadmatch_stack_1->SetBinError(11,0.7859699);
   hbadmatch_stack_1->SetBinError(12,1.453213);
   hbadmatch_stack_1->SetBinError(13,0.7598403);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,50.94935);
   hext_stack_2->SetBinContent(5,59.59438);
   hext_stack_2->SetBinContent(6,47.06099);
   hext_stack_2->SetBinContent(7,33.23234);
   hext_stack_2->SetBinContent(8,26.11991);
   hext_stack_2->SetBinContent(9,17.80645);
   hext_stack_2->SetBinContent(10,14.38208);
   hext_stack_2->SetBinContent(11,14.58119);
   hext_stack_2->SetBinContent(12,4.143782);
   hext_stack_2->SetBinContent(13,4.752265);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,3.297453);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinError(4,4.989094);
   hext_stack_2->SetBinError(5,5.367812);
   hext_stack_2->SetBinError(6,4.874769);
   hext_stack_2->SetBinError(7,3.917456);
   hext_stack_2->SetBinError(8,3.477268);
   hext_stack_2->SetBinError(9,2.841316);
   hext_stack_2->SetBinError(10,2.613717);
   hext_stack_2->SetBinError(11,2.843215);
   hext_stack_2->SetBinError(12,1.256262);
   hext_stack_2->SetBinError(13,1.630811);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,1.384641);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,1.992028);
   hdirt_stack_3->SetBinContent(5,2.017667);
   hdirt_stack_3->SetBinContent(6,1.717018);
   hdirt_stack_3->SetBinContent(7,3.342972);
   hdirt_stack_3->SetBinContent(8,1.432419);
   hdirt_stack_3->SetBinContent(9,1.723574);
   hdirt_stack_3->SetBinContent(10,1.479801);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.7759784);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,0.6651848);
   hdirt_stack_3->SetBinError(5,0.667529);
   hdirt_stack_3->SetBinError(6,0.6473599);
   hdirt_stack_3->SetBinError(7,1.23469);
   hdirt_stack_3->SetBinError(8,0.7271377);
   hdirt_stack_3->SetBinError(9,0.695848);
   hdirt_stack_3->SetBinError(10,0.6374586);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.458477);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,36.75916);
   houtFV_stack_4->SetBinContent(5,46.97467);
   houtFV_stack_4->SetBinContent(6,32.54635);
   houtFV_stack_4->SetBinContent(7,25.85693);
   houtFV_stack_4->SetBinContent(8,21.19047);
   houtFV_stack_4->SetBinContent(9,20.33931);
   houtFV_stack_4->SetBinContent(10,13.42776);
   houtFV_stack_4->SetBinContent(11,9.386394);
   houtFV_stack_4->SetBinContent(12,5.456517);
   houtFV_stack_4->SetBinContent(13,3.698393);
   houtFV_stack_4->SetBinContent(14,0.1950248);
   houtFV_stack_4->SetBinContent(15,0.536893);
   houtFV_stack_4->SetBinError(4,3.034227);
   houtFV_stack_4->SetBinError(5,3.502218);
   houtFV_stack_4->SetBinError(6,2.876763);
   houtFV_stack_4->SetBinError(7,2.56559);
   houtFV_stack_4->SetBinError(8,2.235415);
   houtFV_stack_4->SetBinError(9,2.220418);
   houtFV_stack_4->SetBinError(10,1.824358);
   houtFV_stack_4->SetBinError(11,1.53486);
   houtFV_stack_4->SetBinError(12,1.21373);
   houtFV_stack_4->SetBinError(13,0.9892716);
   houtFV_stack_4->SetBinError(14,0.1950249);
   houtFV_stack_4->SetBinError(15,0.3929602);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9197081);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6124718);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3437889);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2100249);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,97.66235);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,137.746);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,157.3071);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,161.2684);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,167.2917);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,186.1891);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,188.2496);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,200.3741);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,190.1034);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,142.6931);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,78.07012);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,36.30635);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,14.87874);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,5.982586);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,1.81334);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,0.3763178);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,0.1115999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.226351);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.834796);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.07256);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.129925);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.25443);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.51503);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,4.49101);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.621886);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.564172);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.917378);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.908509);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.985137);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.328611);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.8445687);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.4029467);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.1313578);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_7->SetBinContent(4,84.02096);
   hCCpi0inFV_stack_7->SetBinContent(5,108.4618);
   hCCpi0inFV_stack_7->SetBinContent(6,89.88378);
   hCCpi0inFV_stack_7->SetBinContent(7,76.95357);
   hCCpi0inFV_stack_7->SetBinContent(8,62.40589);
   hCCpi0inFV_stack_7->SetBinContent(9,48.35326);
   hCCpi0inFV_stack_7->SetBinContent(10,32.91286);
   hCCpi0inFV_stack_7->SetBinContent(11,29.45019);
   hCCpi0inFV_stack_7->SetBinContent(12,16.06965);
   hCCpi0inFV_stack_7->SetBinContent(13,9.277799);
   hCCpi0inFV_stack_7->SetBinContent(14,5.615518);
   hCCpi0inFV_stack_7->SetBinContent(15,1.465526);
   hCCpi0inFV_stack_7->SetBinContent(16,0.9794611);
   hCCpi0inFV_stack_7->SetBinContent(17,0.3934307);
   hCCpi0inFV_stack_7->SetBinContent(18,0.5352025);
   hCCpi0inFV_stack_7->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_7->SetBinError(4,4.591481);
   hCCpi0inFV_stack_7->SetBinError(5,5.250761);
   hCCpi0inFV_stack_7->SetBinError(6,4.759761);
   hCCpi0inFV_stack_7->SetBinError(7,4.456538);
   hCCpi0inFV_stack_7->SetBinError(8,3.902647);
   hCCpi0inFV_stack_7->SetBinError(9,3.521223);
   hCCpi0inFV_stack_7->SetBinError(10,2.845886);
   hCCpi0inFV_stack_7->SetBinError(11,2.719509);
   hCCpi0inFV_stack_7->SetBinError(12,2.051613);
   hCCpi0inFV_stack_7->SetBinError(13,1.447049);
   hCCpi0inFV_stack_7->SetBinError(14,1.242265);
   hCCpi0inFV_stack_7->SetBinError(15,0.6209405);
   hCCpi0inFV_stack_7->SetBinError(16,0.4376058);
   hCCpi0inFV_stack_7->SetBinError(17,0.2781975);
   hCCpi0inFV_stack_7->SetBinError(18,0.3921167);
   hCCpi0inFV_stack_7->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_8->SetBinContent(4,27.10002);
   hNCinFV_stack_8->SetBinContent(5,30.63137);
   hNCinFV_stack_8->SetBinContent(6,27.46387);
   hNCinFV_stack_8->SetBinContent(7,19.73497);
   hNCinFV_stack_8->SetBinContent(8,15.78);
   hNCinFV_stack_8->SetBinContent(9,15.13829);
   hNCinFV_stack_8->SetBinContent(10,6.940354);
   hNCinFV_stack_8->SetBinContent(11,4.196482);
   hNCinFV_stack_8->SetBinContent(12,4.589913);
   hNCinFV_stack_8->SetBinContent(13,3.56769);
   hNCinFV_stack_8->SetBinContent(14,1.91052);
   hNCinFV_stack_8->SetBinContent(15,0.3934307);
   hNCinFV_stack_8->SetBinContent(16,0.1967154);
   hNCinFV_stack_8->SetBinError(4,2.677911);
   hNCinFV_stack_8->SetBinError(5,2.760911);
   hNCinFV_stack_8->SetBinError(6,2.618478);
   hNCinFV_stack_8->SetBinError(7,2.246444);
   hNCinFV_stack_8->SetBinError(8,1.981638);
   hNCinFV_stack_8->SetBinError(9,1.962088);
   hNCinFV_stack_8->SetBinError(10,1.28626);
   hNCinFV_stack_8->SetBinError(11,1.056731);
   hNCinFV_stack_8->SetBinError(12,1.092737);
   hNCinFV_stack_8->SetBinError(13,0.919918);
   hNCinFV_stack_8->SetBinError(14,0.6511312);
   hNCinFV_stack_8->SetBinError(15,0.2781975);
   hNCinFV_stack_8->SetBinError(16,0.1967154);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_9->SetBinContent(4,82.74876);
   hnumuCCinFV_stack_9->SetBinContent(5,74.55499);
   hnumuCCinFV_stack_9->SetBinContent(6,71.7438);
   hnumuCCinFV_stack_9->SetBinContent(7,41.35968);
   hnumuCCinFV_stack_9->SetBinContent(8,25.80472);
   hnumuCCinFV_stack_9->SetBinContent(9,17.72807);
   hnumuCCinFV_stack_9->SetBinContent(10,12.41837);
   hnumuCCinFV_stack_9->SetBinContent(11,6.389042);
   hnumuCCinFV_stack_9->SetBinContent(12,0.654262);
   hnumuCCinFV_stack_9->SetBinContent(13,0.6238208);
   hnumuCCinFV_stack_9->SetBinContent(14,1.595797);
   hnumuCCinFV_stack_9->SetBinContent(15,0.0006863147);
   hnumuCCinFV_stack_9->SetBinError(4,5.410435);
   hnumuCCinFV_stack_9->SetBinError(5,4.95352);
   hnumuCCinFV_stack_9->SetBinError(6,5.221757);
   hnumuCCinFV_stack_9->SetBinError(7,3.603647);
   hnumuCCinFV_stack_9->SetBinError(8,3.721935);
   hnumuCCinFV_stack_9->SetBinError(9,2.53641);
   hnumuCCinFV_stack_9->SetBinError(10,1.808754);
   hnumuCCinFV_stack_9->SetBinError(11,1.348602);
   hnumuCCinFV_stack_9->SetBinError(12,0.3764039);
   hnumuCCinFV_stack_9->SetBinError(13,0.3559308);
   hnumuCCinFV_stack_9->SetBinError(14,0.7336072);
   hnumuCCinFV_stack_9->SetBinError(15,0.0006863147);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_10->SetBinContent(4,4.945985);
   hnueCCinFV_stack_10->SetBinContent(5,5.433114);
   hnueCCinFV_stack_10->SetBinContent(6,5.146072);
   hnueCCinFV_stack_10->SetBinContent(7,1.478316);
   hnueCCinFV_stack_10->SetBinContent(8,1.380992);
   hnueCCinFV_stack_10->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_10->SetBinContent(10,0.8770706);
   hnueCCinFV_stack_10->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(13,0.2486649);
   hnueCCinFV_stack_10->SetBinError(4,1.892687);
   hnueCCinFV_stack_10->SetBinError(5,1.564483);
   hnueCCinFV_stack_10->SetBinError(6,1.221339);
   hnueCCinFV_stack_10->SetBinError(7,0.5623398);
   hnueCCinFV_stack_10->SetBinError(8,0.5789646);
   hnueCCinFV_stack_10->SetBinError(9,0.3921167);
   hnueCCinFV_stack_10->SetBinError(10,0.5197486);
   hnueCCinFV_stack_10->SetBinError(12,0.3401776);
   hnueCCinFV_stack_10->SetBinError(13,0.2486649);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__5->SetBinContent(4,400.9757);
   hmcerror__5->SetBinContent(5,481.1087);
   hmcerror__5->SetBinContent(6,445.4059);
   hmcerror__5->SetBinContent(7,373.9081);
   hmcerror__5->SetBinContent(8,331.1264);
   hmcerror__5->SetBinContent(9,313.691);
   hmcerror__5->SetBinContent(10,276.4018);
   hmcerror__5->SetBinContent(11,268.7332);
   hmcerror__5->SetBinContent(12,226.9412);
   hmcerror__5->SetBinContent(13,168.027);
   hmcerror__5->SetBinContent(14,88.48708);
   hmcerror__5->SetBinContent(15,42.52755);
   hmcerror__5->SetBinContent(16,16.50454);
   hmcerror__5->SetBinContent(17,6.670051);
   hmcerror__5->SetBinContent(18,2.348542);
   hmcerror__5->SetBinContent(19,0.3763178);
   hmcerror__5->SetBinContent(20,0.1115999);
   hmcerror__5->SetBinContent(21,0.2525153);
   hmcerror__5->SetBinError(1,0.4212968);
   hmcerror__5->SetBinError(2,0.4212968);
   hmcerror__5->SetBinError(3,0.4212968);
   hmcerror__5->SetBinError(4,82.7876);
   hmcerror__5->SetBinError(5,92.95698);
   hmcerror__5->SetBinError(6,91.94031);
   hmcerror__5->SetBinError(7,89.95269);
   hmcerror__5->SetBinError(8,78.35276);
   hmcerror__5->SetBinError(9,77.78347);
   hmcerror__5->SetBinError(10,77.82871);
   hmcerror__5->SetBinError(11,71.16175);
   hmcerror__5->SetBinError(12,62.58531);
   hmcerror__5->SetBinError(13,47.96999);
   hmcerror__5->SetBinError(14,24.55423);
   hmcerror__5->SetBinError(15,11.69209);
   hmcerror__5->SetBinError(16,5.411863);
   hmcerror__5->SetBinError(17,2.824547);
   hmcerror__5->SetBinError(18,1.356473);
   hmcerror__5->SetBinError(19,0.5506065);
   hmcerror__5->SetBinError(20,0.3937501);
   hmcerror__5->SetBinError(21,0.5320355);
   hmcerror__5->SetEntries(3396.741);

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
   290,
   395,
   357,
   299,
   255,
   239,
   210,
   186,
   159,
   132,
   59,
   19,
   10,
   6,
   4,
   1,
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
   17.02939,
   19.87461,
   18.89444,
   17.29162,
   15.96872,
   15.45962,
   14.49138,
   13.63818,
   12.60952,
   11.48913,
   7.8097,
   4.5151,
   3.34883,
   2.67925,
   2.29683,
   1,
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
   17.02939,
   19.87461,
   18.89444,
   17.29162,
   15.96872,
   15.45962,
   14.49138,
   13.63818,
   12.60952,
   11.48913,
   7.6066,
   4.3011,
   3.1179,
   2.41858,
   1.98186,
   1.35971,
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
   Graph_Graph3005->SetMaximum(456.3621);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.4","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 566.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_pio_score_all");
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
   0.2064654,
   0.1932141,
   0.2064191,
   0.2405743,
   0.2366249,
   0.2479621,
   0.2815782,
   0.2648045,
   0.2757776,
   0.2854898,
   0.2774895,
   0.2749298,
   0.3279016,
   0.4234671,
   0.5775808,
   1.463142,
   3.528229};
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
   0.2064654,
   0.1932141,
   0.2064191,
   0.2405743,
   0.2366249,
   0.2479621,
   0.2815782,
   0.2648045,
   0.2757776,
   0.2854898,
   0.2774895,
   0.2749298,
   0.3279016,
   0.4234671,
   0.5775808,
   1.463142,
   3.528229};
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
   Graph_Graph3006->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
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
   0.1700416,
   0.1779796,
   0.189661,
   0.2111825,
   0.2170605,
   0.2332605,
   0.2451141,
   0.2495339,
   0.2629211,
   0.273672,
   0.2708007,
   0.2493063,
   0.2693101,
   0.3045072,
   0.4253747,
   1.010644,
   2.482251};
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
   0.1700416,
   0.1779796,
   0.189661,
   0.2111825,
   0.2170605,
   0.2332605,
   0.2451141,
   0.2495339,
   0.2629211,
   0.273672,
   0.2708007,
   0.2493063,
   0.2693101,
   0.3045072,
   0.4253747,
   1.010644,
   2.482251};
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
   0.7232358,
   0.8210203,
   0.801516,
   0.7996617,
   0.7700986,
   0.7618963,
   0.7597636,
   0.6921363,
   0.7006219,
   0.7855881,
   0.666764,
   0.4467692,
   0.6058941,
   0.8995434,
   1.703184,
   2.657328,
   0};
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
   0.04246987,
   0.04131001,
   0.04242073,
   0.04624563,
   0.04822544,
   0.04928298,
   0.05242867,
   0.0507499,
   0.05556293,
   0.06837666,
   0.08825809,
   0.1061688,
   0.2029036,
   0.4016836,
   0.9779811,
   2.657328,
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
   0.04246987,
   0.04131001,
   0.04242073,
   0.04624563,
   0.04822544,
   0.04928298,
   0.05242867,
   0.0507499,
   0.05556293,
   0.06837666,
   0.08596284,
   0.1011368,
   0.1889117,
   0.3626029,
   0.8438682,
   3.613196,
   10.28495};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0.5,6.5);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11.31345);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
