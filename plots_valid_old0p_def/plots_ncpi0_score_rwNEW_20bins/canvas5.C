#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 15:55:16 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.2307692,-9.860558,6.641026,1090.37);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmc__13->SetBinContent(4,409.9168);
   hmc__13->SetBinContent(5,493.0279);
   hmc__13->SetBinContent(6,463.0998);
   hmc__13->SetBinContent(7,393.3982);
   hmc__13->SetBinContent(8,350.8081);
   hmc__13->SetBinContent(9,326.7098);
   hmc__13->SetBinContent(10,287.2371);
   hmc__13->SetBinContent(11,275.8719);
   hmc__13->SetBinContent(12,232.6049);
   hmc__13->SetBinContent(13,171.304);
   hmc__13->SetBinContent(14,90.73946);
   hmc__13->SetBinContent(15,42.52755);
   hmc__13->SetBinContent(16,16.50454);
   hmc__13->SetBinContent(17,6.866765);
   hmc__13->SetBinContent(18,2.348542);
   hmc__13->SetBinContent(19,0.3763178);
   hmc__13->SetBinContent(20,0.1115999);
   hmc__13->SetBinContent(21,0.2525153);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.3895343);
   hmc__13->SetBinError(3,0.3895343);
   hmc__13->SetBinError(4,98.13619);
   hmc__13->SetBinError(5,114.6115);
   hmc__13->SetBinError(6,129.6887);
   hmc__13->SetBinError(7,126.9551);
   hmc__13->SetBinError(8,121.1335);
   hmc__13->SetBinError(9,120.6165);
   hmc__13->SetBinError(10,122.5838);
   hmc__13->SetBinError(11,122.6136);
   hmc__13->SetBinError(12,112.7405);
   hmc__13->SetBinError(13,85.93746);
   hmc__13->SetBinError(14,47.98431);
   hmc__13->SetBinError(15,22.66386);
   hmc__13->SetBinError(16,10.34566);
   hmc__13->SetBinError(17,8.065561);
   hmc__13->SetBinError(18,2.264735);
   hmc__13->SetBinError(19,0.8748939);
   hmc__13->SetBinError(20,0.4559386);
   hmc__13->SetBinError(21,1.8131);
   hmc__13->SetMinimum(-9.860558);
   hmc__13->SetMaximum(1035.359);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,1,6);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(517.6793);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
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
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
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

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
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

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
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

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
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

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.18609);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.38039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.952512);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.771158);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.756876);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.325254);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.204444);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.021594);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.46409);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4133575);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3525453);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4952461);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4098107);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4174949);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3305127);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.5210955);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4341005);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3558418);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,73.37746);
   hNCpi0inFVres_stack_7->SetBinContent(5,105.3955);
   hNCpi0inFVres_stack_7->SetBinContent(6,123.5417);
   hNCpi0inFVres_stack_7->SetBinContent(7,131.2076);
   hNCpi0inFVres_stack_7->SetBinContent(8,137.4924);
   hNCpi0inFVres_stack_7->SetBinContent(9,156.6597);
   hNCpi0inFVres_stack_7->SetBinContent(10,155.4516);
   hNCpi0inFVres_stack_7->SetBinContent(11,173.0471);
   hNCpi0inFVres_stack_7->SetBinContent(12,162.6751);
   hNCpi0inFVres_stack_7->SetBinContent(13,124.2326);
   hNCpi0inFVres_stack_7->SetBinContent(14,68.6721);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.43828);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.05162);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.36845);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.506272);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(4,2.801869);
   hNCpi0inFVres_stack_7->SetBinError(5,3.359451);
   hNCpi0inFVres_stack_7->SetBinError(6,3.620624);
   hNCpi0inFVres_stack_7->SetBinError(7,3.73044);
   hNCpi0inFVres_stack_7->SetBinError(8,3.863924);
   hNCpi0inFVres_stack_7->SetBinError(9,4.168661);
   hNCpi0inFVres_stack_7->SetBinError(10,4.066991);
   hNCpi0inFVres_stack_7->SetBinError(11,4.303668);
   hNCpi0inFVres_stack_7->SetBinError(12,4.215901);
   hNCpi0inFVres_stack_7->SetBinError(13,3.672249);
   hNCpi0inFVres_stack_7->SetBinError(14,2.731121);
   hNCpi0inFVres_stack_7->SetBinError(15,1.843194);
   hNCpi0inFVres_stack_7->SetBinError(16,1.250179);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7941369);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3479147);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(21,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.09879);
   hNCpi0inFVdis_stack_8->SetBinContent(5,30.91432);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.67342);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.13659);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.95874);
   hNCpi0inFVdis_stack_8->SetBinContent(9,27.93929);
   hNCpi0inFVdis_stack_8->SetBinContent(10,31.41687);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.64791);
   hNCpi0inFVdis_stack_8->SetBinContent(12,25.35092);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.67579);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.826234);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.575456);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.771326);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.545318);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.814911);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.796571);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.720792);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.730209);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.688675);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.875622);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.577968);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.693471);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.298211);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9720811);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.72697);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4479997);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,73.11103);
   hCCpi0inFV_stack_10->SetBinContent(5,97.23813);
   hCCpi0inFV_stack_10->SetBinContent(6,81.8595);
   hCCpi0inFV_stack_10->SetBinContent(7,69.37428);
   hCCpi0inFV_stack_10->SetBinContent(8,58.01269);
   hCCpi0inFV_stack_10->SetBinContent(9,45.76238);
   hCCpi0inFV_stack_10->SetBinContent(10,30.12528);
   hCCpi0inFV_stack_10->SetBinContent(11,28.12813);
   hCCpi0inFV_stack_10->SetBinContent(12,14.99587);
   hCCpi0inFV_stack_10->SetBinContent(13,8.687653);
   hCCpi0inFV_stack_10->SetBinContent(14,5.418802);
   hCCpi0inFV_stack_10->SetBinContent(15,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9794611);
   hCCpi0inFV_stack_10->SetBinContent(17,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(18,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,4.301195);
   hCCpi0inFV_stack_10->SetBinError(5,4.968433);
   hCCpi0inFV_stack_10->SetBinError(6,4.548412);
   hCCpi0inFV_stack_10->SetBinError(7,4.234603);
   hCCpi0inFV_stack_10->SetBinError(8,3.751703);
   hCCpi0inFV_stack_10->SetBinError(9,3.426894);
   hCCpi0inFV_stack_10->SetBinError(10,2.721206);
   hCCpi0inFV_stack_10->SetBinError(11,2.662177);
   hCCpi0inFV_stack_10->SetBinError(12,1.974913);
   hCCpi0inFV_stack_10->SetBinError(13,1.406364);
   hCCpi0inFV_stack_10->SetBinError(14,1.226591);
   hCCpi0inFV_stack_10->SetBinError(15,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(16,0.4376058);
   hCCpi0inFV_stack_10->SetBinError(17,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(18,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,36.0411);
   hNCinFV_stack_11->SetBinContent(5,42.55061);
   hNCinFV_stack_11->SetBinContent(6,45.15778);
   hNCinFV_stack_11->SetBinContent(7,39.22504);
   hNCinFV_stack_11->SetBinContent(8,35.46172);
   hNCinFV_stack_11->SetBinContent(9,28.15715);
   hNCinFV_stack_11->SetBinContent(10,17.77566);
   hNCinFV_stack_11->SetBinContent(11,11.33524);
   hNCinFV_stack_11->SetBinContent(12,10.25361);
   hNCinFV_stack_11->SetBinContent(13,6.942045);
   hNCinFV_stack_11->SetBinContent(14,4.162908);
   hNCinFV_stack_11->SetBinContent(15,0.3934307);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(4,3.060227);
   hNCinFV_stack_11->SetBinError(5,3.277988);
   hNCinFV_stack_11->SetBinError(6,3.347926);
   hNCinFV_stack_11->SetBinError(7,3.177206);
   hNCinFV_stack_11->SetBinError(8,3.001954);
   hNCinFV_stack_11->SetBinError(9,2.625745);
   hNCinFV_stack_11->SetBinError(10,2.112872);
   hNCinFV_stack_11->SetBinError(11,1.676455);
   hNCinFV_stack_11->SetBinError(12,1.642249);
   hNCinFV_stack_11->SetBinError(13,1.286517);
   hNCinFV_stack_11->SetBinError(14,0.9820014);
   hNCinFV_stack_11->SetBinError(15,0.2781975);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,93.65869);
   hnumuCCinFV_stack_12->SetBinContent(5,85.77866);
   hnumuCCinFV_stack_12->SetBinContent(6,79.76808);
   hnumuCCinFV_stack_12->SetBinContent(7,48.93898);
   hnumuCCinFV_stack_12->SetBinContent(8,30.19792);
   hnumuCCinFV_stack_12->SetBinContent(9,20.31894);
   hnumuCCinFV_stack_12->SetBinContent(10,15.20596);
   hnumuCCinFV_stack_12->SetBinContent(11,7.711105);
   hnumuCCinFV_stack_12->SetBinContent(12,1.728048);
   hnumuCCinFV_stack_12->SetBinContent(13,1.213967);
   hnumuCCinFV_stack_12->SetBinContent(14,1.792512);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3924266);
   hnumuCCinFV_stack_12->SetBinError(4,5.643954);
   hnumuCCinFV_stack_12->SetBinError(5,5.236652);
   hnumuCCinFV_stack_12->SetBinError(6,5.406849);
   hnumuCCinFV_stack_12->SetBinError(7,3.862012);
   hnumuCCinFV_stack_12->SetBinError(8,3.874039);
   hnumuCCinFV_stack_12->SetBinError(9,2.662478);
   hnumuCCinFV_stack_12->SetBinError(10,1.991407);
   hnumuCCinFV_stack_12->SetBinError(11,1.458517);
   hnumuCCinFV_stack_12->SetBinError(12,0.6712044);
   hnumuCCinFV_stack_12->SetBinError(13,0.4927246);
   hnumuCCinFV_stack_12->SetBinError(14,0.7595238);
   hnumuCCinFV_stack_12->SetBinError(15,0.2770056);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,4.945985);
   hnueCCinFV_stack_13->SetBinContent(5,5.433114);
   hnueCCinFV_stack_13->SetBinContent(6,5.146072);
   hnueCCinFV_stack_13->SetBinContent(7,1.478316);
   hnueCCinFV_stack_13->SetBinContent(8,1.380992);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.2486649);
   hnueCCinFV_stack_13->SetBinError(4,1.892687);
   hnueCCinFV_stack_13->SetBinError(5,1.564483);
   hnueCCinFV_stack_13->SetBinError(6,1.221339);
   hnueCCinFV_stack_13->SetBinError(7,0.5623398);
   hnueCCinFV_stack_13->SetBinError(8,0.5789646);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.5197486);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.2486649);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__14->SetBinContent(4,409.9168);
   hmcerror__14->SetBinContent(5,493.0279);
   hmcerror__14->SetBinContent(6,463.0998);
   hmcerror__14->SetBinContent(7,393.3982);
   hmcerror__14->SetBinContent(8,350.8081);
   hmcerror__14->SetBinContent(9,326.7098);
   hmcerror__14->SetBinContent(10,287.2371);
   hmcerror__14->SetBinContent(11,275.8719);
   hmcerror__14->SetBinContent(12,232.6049);
   hmcerror__14->SetBinContent(13,171.304);
   hmcerror__14->SetBinContent(14,90.73946);
   hmcerror__14->SetBinContent(15,42.52755);
   hmcerror__14->SetBinContent(16,16.50454);
   hmcerror__14->SetBinContent(17,6.866765);
   hmcerror__14->SetBinContent(18,2.348542);
   hmcerror__14->SetBinContent(19,0.3763178);
   hmcerror__14->SetBinContent(20,0.1115999);
   hmcerror__14->SetBinContent(21,0.2525153);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.3895343);
   hmcerror__14->SetBinError(3,0.3895343);
   hmcerror__14->SetBinError(4,98.13619);
   hmcerror__14->SetBinError(5,114.6115);
   hmcerror__14->SetBinError(6,129.6887);
   hmcerror__14->SetBinError(7,126.9551);
   hmcerror__14->SetBinError(8,121.1335);
   hmcerror__14->SetBinError(9,120.6165);
   hmcerror__14->SetBinError(10,122.5838);
   hmcerror__14->SetBinError(11,122.6136);
   hmcerror__14->SetBinError(12,112.7405);
   hmcerror__14->SetBinError(13,85.93746);
   hmcerror__14->SetBinError(14,47.98431);
   hmcerror__14->SetBinError(15,22.66386);
   hmcerror__14->SetBinError(16,10.34566);
   hmcerror__14->SetBinError(17,8.065561);
   hmcerror__14->SetBinError(18,2.264735);
   hmcerror__14->SetBinError(19,0.8748939);
   hmcerror__14->SetBinError(20,0.4559386);
   hmcerror__14->SetBinError(21,1.8131);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[20] = {
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
   Double_t _fy3017[20] = {
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
   Double_t _felx3017[20] = {
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
   Double_t _fely3017[20] = {
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
   Double_t _fehx3017[20] = {
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
   Double_t _fehy3017[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0.5,6.5);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(456.3621);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/20","");
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

   ci = 1486;
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

   ci = 1487;
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

   ci = 1488;
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

   ci = 1489;
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

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.7","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
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
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
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
   Double_t _fely3018[20] = {
   0,
   0,
   0,
   0.2394051,
   0.2324645,
   0.2800447,
   0.322714,
   0.3452983,
   0.3691853,
   0.4267688,
   0.4444585,
   0.4846865,
   0.5016663,
   0.5288142,
   0.5329219,
   0.6268372,
   1.174579,
   0.9643153,
   2.32488,
   4.085474};
   Double_t _fehx3018[20] = {
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
   Double_t _fehy3018[20] = {
   0,
   0,
   0,
   0.2394051,
   0.2324645,
   0.2800447,
   0.322714,
   0.3452983,
   0.3691853,
   0.4267688,
   0.4444585,
   0.4846865,
   0.5016663,
   0.5288142,
   0.5329219,
   0.6268372,
   1.174579,
   0.9643153,
   2.32488,
   4.085474};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0.5,6.5);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[20] = {
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
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
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
   Double_t _fely3019[20] = {
   0,
   0,
   0,
   0.1937952,
   0.2110953,
   0.232294,
   0.2754421,
   0.3101007,
   0.345844,
   0.3971196,
   0.418862,
   0.4696154,
   0.4857351,
   0.5023211,
   0.4574512,
   0.4679016,
   0.4741959,
   0.5008037,
   1.112686,
   2.448539};
   Double_t _fehx3019[20] = {
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
   Double_t _fehy3019[20] = {
   0,
   0,
   0,
   0.1937952,
   0.2110953,
   0.232294,
   0.2754421,
   0.3101007,
   0.345844,
   0.3971196,
   0.418862,
   0.4696154,
   0.4857351,
   0.5023211,
   0.4574512,
   0.4679016,
   0.4741959,
   0.5008037,
   1.112686,
   2.448539};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0.5,6.5);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[20] = {
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
   Double_t _fy3020[20] = {
   10,
   10,
   10,
   0.7074606,
   0.8011717,
   0.7708921,
   0.7600442,
   0.7268931,
   0.7315361,
   0.7311034,
   0.6742259,
   0.6835625,
   0.7705598,
   0.6502133,
   0.4467692,
   0.6058941,
   0.8737738,
   1.703184,
   2.657328,
   0};
   Double_t _felx3020[20] = {
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
   Double_t _fely3020[20] = {
   0,
   0,
   0,
   0.04154351,
   0.04031132,
   0.04079994,
   0.04395449,
   0.04551981,
   0.04731914,
   0.05045093,
   0.04943664,
   0.05421003,
   0.06706862,
   0.0860673,
   0.1061688,
   0.2029036,
   0.3901764,
   0.9779811,
   2.657328,
   0};
   Double_t _fehx3020[20] = {
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
   Double_t _fehy3020[20] = {
   0,
   0,
   0,
   0.04154351,
   0.04031132,
   0.04079994,
   0.04395449,
   0.04551981,
   0.04731914,
   0.05045093,
   0.04943664,
   0.05421003,
   0.06706862,
   0.08382902,
   0.1011368,
   0.1889117,
   0.3522153,
   0.8438682,
   3.613196,
   10.28495};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0.5,6.5);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(11.31345);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
