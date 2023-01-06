#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 21:27:21 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-41.49248,56.41026,4588.195);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__1->SetBinContent(1,2074.624);
   hmc__1->SetBinContent(2,399.5302);
   hmc__1->SetBinContent(3,385.8764);
   hmc__1->SetBinContent(4,367.7225);
   hmc__1->SetBinContent(5,353.4773);
   hmc__1->SetBinContent(6,297.0947);
   hmc__1->SetBinContent(7,293.8226);
   hmc__1->SetBinContent(8,253.3793);
   hmc__1->SetBinContent(9,244.0663);
   hmc__1->SetBinContent(10,225.0927);
   hmc__1->SetBinContent(11,185.7166);
   hmc__1->SetBinContent(12,166.0885);
   hmc__1->SetBinContent(13,139.3223);
   hmc__1->SetBinContent(14,124.6577);
   hmc__1->SetBinContent(15,111.6654);
   hmc__1->SetBinContent(16,110.2237);
   hmc__1->SetBinContent(17,106.9583);
   hmc__1->SetBinContent(18,90.27764);
   hmc__1->SetBinContent(19,80.25781);
   hmc__1->SetBinContent(20,65.41317);
   hmc__1->SetBinContent(21,703.842);
   hmc__1->SetBinError(1,452.0664);
   hmc__1->SetBinError(2,125.0193);
   hmc__1->SetBinError(3,113.4163);
   hmc__1->SetBinError(4,107.4997);
   hmc__1->SetBinError(5,101.1185);
   hmc__1->SetBinError(6,89.28981);
   hmc__1->SetBinError(7,83.521);
   hmc__1->SetBinError(8,73.30333);
   hmc__1->SetBinError(9,67.60525);
   hmc__1->SetBinError(10,62.51553);
   hmc__1->SetBinError(11,52.55768);
   hmc__1->SetBinError(12,47.28517);
   hmc__1->SetBinError(13,42.46457);
   hmc__1->SetBinError(14,38.21302);
   hmc__1->SetBinError(15,36.5787);
   hmc__1->SetBinError(16,32.63153);
   hmc__1->SetBinError(17,28.4291);
   hmc__1->SetBinError(18,27.09235);
   hmc__1->SetBinError(19,25.54063);
   hmc__1->SetBinError(20,23.59502);
   hmc__1->SetBinError(21,162.5134);
   hmc__1->SetMinimum(-41.49248);
   hmc__1->SetMaximum(4356.71);
   hmc__1->SetEntries(7381.09);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,50);
   hs1_stack_1->SetMinimum(-4.228303e-08);
   hs1_stack_1->SetMaximum(2178.355);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,43.76575);
   hbadmatch_stack_1->SetBinContent(2,5.585675);
   hbadmatch_stack_1->SetBinContent(3,6.646914);
   hbadmatch_stack_1->SetBinContent(4,7.215428);
   hbadmatch_stack_1->SetBinContent(5,7.373323);
   hbadmatch_stack_1->SetBinContent(6,5.913095);
   hbadmatch_stack_1->SetBinContent(7,5.982613);
   hbadmatch_stack_1->SetBinContent(8,5.072071);
   hbadmatch_stack_1->SetBinContent(9,4.083877);
   hbadmatch_stack_1->SetBinContent(10,3.996498);
   hbadmatch_stack_1->SetBinContent(11,5.035461);
   hbadmatch_stack_1->SetBinContent(12,1.848697);
   hbadmatch_stack_1->SetBinContent(13,4.263482);
   hbadmatch_stack_1->SetBinContent(14,3.856808);
   hbadmatch_stack_1->SetBinContent(15,4.331602);
   hbadmatch_stack_1->SetBinContent(16,2.325222);
   hbadmatch_stack_1->SetBinContent(17,5.242611);
   hbadmatch_stack_1->SetBinContent(18,5.338573);
   hbadmatch_stack_1->SetBinContent(19,2.226647);
   hbadmatch_stack_1->SetBinContent(20,2.290021);
   hbadmatch_stack_1->SetBinContent(21,41.06573);
   hbadmatch_stack_1->SetBinError(1,3.574705);
   hbadmatch_stack_1->SetBinError(2,1.236859);
   hbadmatch_stack_1->SetBinError(3,1.370234);
   hbadmatch_stack_1->SetBinError(4,2.058396);
   hbadmatch_stack_1->SetBinError(5,1.342373);
   hbadmatch_stack_1->SetBinError(6,1.601678);
   hbadmatch_stack_1->SetBinError(7,1.180869);
   hbadmatch_stack_1->SetBinError(8,1.286691);
   hbadmatch_stack_1->SetBinError(9,0.9496465);
   hbadmatch_stack_1->SetBinError(10,0.9695382);
   hbadmatch_stack_1->SetBinError(11,1.158811);
   hbadmatch_stack_1->SetBinError(12,0.7398598);
   hbadmatch_stack_1->SetBinError(13,1.459051);
   hbadmatch_stack_1->SetBinError(14,1.134425);
   hbadmatch_stack_1->SetBinError(15,1.211528);
   hbadmatch_stack_1->SetBinError(16,0.8029122);
   hbadmatch_stack_1->SetBinError(17,1.404453);
   hbadmatch_stack_1->SetBinError(18,2.184949);
   hbadmatch_stack_1->SetBinError(19,0.8434861);
   hbadmatch_stack_1->SetBinError(20,0.8790016);
   hbadmatch_stack_1->SetBinError(21,3.715808);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,273.0107);
   hext_stack_2->SetBinContent(2,27.55595);
   hext_stack_2->SetBinContent(3,29.46485);
   hext_stack_2->SetBinContent(4,33.33608);
   hext_stack_2->SetBinContent(5,34.85867);
   hext_stack_2->SetBinContent(6,21.41514);
   hext_stack_2->SetBinContent(7,30.50589);
   hext_stack_2->SetBinContent(8,24.23538);
   hext_stack_2->SetBinContent(9,23.3013);
   hext_stack_2->SetBinContent(10,26.0493);
   hext_stack_2->SetBinContent(11,17.62328);
   hext_stack_2->SetBinContent(12,17.05669);
   hext_stack_2->SetBinContent(13,17.92891);
   hext_stack_2->SetBinContent(14,9.869238);
   hext_stack_2->SetBinContent(15,8.000648);
   hext_stack_2->SetBinContent(16,12.99511);
   hext_stack_2->SetBinContent(17,20.07881);
   hext_stack_2->SetBinContent(18,13.00229);
   hext_stack_2->SetBinContent(19,17.17196);
   hext_stack_2->SetBinContent(20,8.029369);
   hext_stack_2->SetBinContent(21,88.84859);
   hext_stack_2->SetBinError(1,11.39753);
   hext_stack_2->SetBinError(2,3.619528);
   hext_stack_2->SetBinError(3,3.59674);
   hext_stack_2->SetBinError(4,3.847459);
   hext_stack_2->SetBinError(5,4.163912);
   hext_stack_2->SetBinError(6,2.891325);
   hext_stack_2->SetBinError(7,3.70334);
   hext_stack_2->SetBinError(8,3.159984);
   hext_stack_2->SetBinError(9,3.307128);
   hext_stack_2->SetBinError(10,3.459078);
   hext_stack_2->SetBinError(11,2.867085);
   hext_stack_2->SetBinError(12,2.840739);
   hext_stack_2->SetBinError(13,2.931329);
   hext_stack_2->SetBinError(14,2.133879);
   hext_stack_2->SetBinError(15,1.961378);
   hext_stack_2->SetBinError(16,2.559628);
   hext_stack_2->SetBinError(17,3.25754);
   hext_stack_2->SetBinError(18,2.520018);
   hext_stack_2->SetBinError(19,2.964897);
   hext_stack_2->SetBinError(20,1.74419);
   hext_stack_2->SetBinError(21,6.263645);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,27.39582);
   hdirt_stack_3->SetBinContent(2,3.583035);
   hdirt_stack_3->SetBinContent(3,2.216933);
   hdirt_stack_3->SetBinContent(4,2.261197);
   hdirt_stack_3->SetBinContent(5,2.542736);
   hdirt_stack_3->SetBinContent(6,2.825828);
   hdirt_stack_3->SetBinContent(7,3.132562);
   hdirt_stack_3->SetBinContent(8,2.918204);
   hdirt_stack_3->SetBinContent(9,2.850061);
   hdirt_stack_3->SetBinContent(10,2.242018);
   hdirt_stack_3->SetBinContent(11,1.573292);
   hdirt_stack_3->SetBinContent(12,1.85841);
   hdirt_stack_3->SetBinContent(13,0.994077);
   hdirt_stack_3->SetBinContent(14,0.9891746);
   hdirt_stack_3->SetBinContent(15,1.553378);
   hdirt_stack_3->SetBinContent(16,0.9384086);
   hdirt_stack_3->SetBinContent(17,1.740318);
   hdirt_stack_3->SetBinContent(18,1.092852);
   hdirt_stack_3->SetBinContent(20,1.250286);
   hdirt_stack_3->SetBinContent(21,9.072456);
   hdirt_stack_3->SetBinError(1,3.003706);
   hdirt_stack_3->SetBinError(2,0.9901546);
   hdirt_stack_3->SetBinError(3,0.6929408);
   hdirt_stack_3->SetBinError(4,0.7271825);
   hdirt_stack_3->SetBinError(5,0.8054209);
   hdirt_stack_3->SetBinError(6,0.8650995);
   hdirt_stack_3->SetBinError(7,0.9304487);
   hdirt_stack_3->SetBinError(8,0.8156732);
   hdirt_stack_3->SetBinError(9,0.9103693);
   hdirt_stack_3->SetBinError(10,1.110084);
   hdirt_stack_3->SetBinError(11,0.6107514);
   hdirt_stack_3->SetBinError(12,0.7084358);
   hdirt_stack_3->SetBinError(13,0.5383284);
   hdirt_stack_3->SetBinError(14,0.5161646);
   hdirt_stack_3->SetBinError(15,0.7038561);
   hdirt_stack_3->SetBinError(16,0.5453468);
   hdirt_stack_3->SetBinError(17,0.7075044);
   hdirt_stack_3->SetBinError(18,0.5148645);
   hdirt_stack_3->SetBinError(20,0.6442406);
   hdirt_stack_3->SetBinError(21,1.589705);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,211.8988);
   houtFV_stack_4->SetBinContent(2,25.19543);
   houtFV_stack_4->SetBinContent(3,29.21696);
   houtFV_stack_4->SetBinContent(4,28.29146);
   houtFV_stack_4->SetBinContent(5,31.39931);
   houtFV_stack_4->SetBinContent(6,22.3812);
   houtFV_stack_4->SetBinContent(7,27.34358);
   houtFV_stack_4->SetBinContent(8,29.39314);
   houtFV_stack_4->SetBinContent(9,26.15708);
   houtFV_stack_4->SetBinContent(10,28.48943);
   houtFV_stack_4->SetBinContent(11,21.19112);
   houtFV_stack_4->SetBinContent(12,19.74192);
   houtFV_stack_4->SetBinContent(13,13.77773);
   houtFV_stack_4->SetBinContent(14,11.34831);
   houtFV_stack_4->SetBinContent(15,12.15406);
   houtFV_stack_4->SetBinContent(16,13.19454);
   houtFV_stack_4->SetBinContent(17,10.94508);
   houtFV_stack_4->SetBinContent(18,10.45303);
   houtFV_stack_4->SetBinContent(19,9.437271);
   houtFV_stack_4->SetBinContent(20,6.802567);
   houtFV_stack_4->SetBinContent(21,90.99994);
   houtFV_stack_4->SetBinError(1,7.265802);
   houtFV_stack_4->SetBinError(2,2.480014);
   houtFV_stack_4->SetBinError(3,2.668803);
   houtFV_stack_4->SetBinError(4,2.63175);
   houtFV_stack_4->SetBinError(5,2.781794);
   houtFV_stack_4->SetBinError(6,2.248353);
   houtFV_stack_4->SetBinError(7,2.615146);
   houtFV_stack_4->SetBinError(8,2.728232);
   houtFV_stack_4->SetBinError(9,2.56794);
   houtFV_stack_4->SetBinError(10,3.096527);
   houtFV_stack_4->SetBinError(11,2.339079);
   houtFV_stack_4->SetBinError(12,2.261515);
   houtFV_stack_4->SetBinError(13,1.904985);
   houtFV_stack_4->SetBinError(14,1.654382);
   houtFV_stack_4->SetBinError(15,1.70286);
   houtFV_stack_4->SetBinError(16,1.813483);
   houtFV_stack_4->SetBinError(17,1.664036);
   houtFV_stack_4->SetBinError(18,1.769473);
   houtFV_stack_4->SetBinError(19,1.554516);
   houtFV_stack_4->SetBinError(20,1.298908);
   houtFV_stack_4->SetBinError(21,4.895149);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,52.20828);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.556152);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.959516);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.922061);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.189086);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.669639);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.351259);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.864846);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.247936);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.722281);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.883374);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.452769);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.581057);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.144433);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9655563);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.479092);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.144697);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7562724);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.573095);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.112686);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.827002);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.711425);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8016037);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9667562);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8708672);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7442791);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7427108);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7352344);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6052783);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6945675);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7682151);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4118877);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3708153);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6832613);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7102331);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.188988);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4857001);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3496165);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3193379);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4276883);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3779722);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.040177);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.706427);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.326041);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.233694);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.221758);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7011474);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.294048);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.960682);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.028335);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7960863);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4912071);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8271085);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4444529);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2502728);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2711693);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4053718);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7311781);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3656397);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08357733);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3630742);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0359625);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.344613);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6953139);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2703875);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3250998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3481944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2353461);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2915764);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2792036);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2691197);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2632989);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1853697);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2566391);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1411814);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08819009);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1377728);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.193886);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2926609);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1338755);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04335467);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2866519);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02543686);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2809485);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,650.4556);
   hNCpi0inFVres_stack_7->SetBinContent(2,140.7522);
   hNCpi0inFVres_stack_7->SetBinContent(3,140.0715);
   hNCpi0inFVres_stack_7->SetBinContent(4,128.9361);
   hNCpi0inFVres_stack_7->SetBinContent(5,117.283);
   hNCpi0inFVres_stack_7->SetBinContent(6,109.789);
   hNCpi0inFVres_stack_7->SetBinContent(7,98.40241);
   hNCpi0inFVres_stack_7->SetBinContent(8,87.38408);
   hNCpi0inFVres_stack_7->SetBinContent(9,77.51434);
   hNCpi0inFVres_stack_7->SetBinContent(10,71.92927);
   hNCpi0inFVres_stack_7->SetBinContent(11,62.66323);
   hNCpi0inFVres_stack_7->SetBinContent(12,53.49848);
   hNCpi0inFVres_stack_7->SetBinContent(13,46.62289);
   hNCpi0inFVres_stack_7->SetBinContent(14,43.23314);
   hNCpi0inFVres_stack_7->SetBinContent(15,37.07137);
   hNCpi0inFVres_stack_7->SetBinContent(16,35.2895);
   hNCpi0inFVres_stack_7->SetBinContent(17,28.2166);
   hNCpi0inFVres_stack_7->SetBinContent(18,26.94336);
   hNCpi0inFVres_stack_7->SetBinContent(19,22.62039);
   hNCpi0inFVres_stack_7->SetBinContent(20,17.67782);
   hNCpi0inFVres_stack_7->SetBinContent(21,175.8164);
   hNCpi0inFVres_stack_7->SetBinError(1,8.629602);
   hNCpi0inFVres_stack_7->SetBinError(2,3.681773);
   hNCpi0inFVres_stack_7->SetBinError(3,3.71184);
   hNCpi0inFVres_stack_7->SetBinError(4,3.565052);
   hNCpi0inFVres_stack_7->SetBinError(5,3.400967);
   hNCpi0inFVres_stack_7->SetBinError(6,3.494143);
   hNCpi0inFVres_stack_7->SetBinError(7,3.153543);
   hNCpi0inFVres_stack_7->SetBinError(8,3.028677);
   hNCpi0inFVres_stack_7->SetBinError(9,2.716265);
   hNCpi0inFVres_stack_7->SetBinError(10,2.82299);
   hNCpi0inFVres_stack_7->SetBinError(11,2.61303);
   hNCpi0inFVres_stack_7->SetBinError(12,2.374948);
   hNCpi0inFVres_stack_7->SetBinError(13,2.134252);
   hNCpi0inFVres_stack_7->SetBinError(14,2.256961);
   hNCpi0inFVres_stack_7->SetBinError(15,1.91902);
   hNCpi0inFVres_stack_7->SetBinError(16,1.855638);
   hNCpi0inFVres_stack_7->SetBinError(17,1.638368);
   hNCpi0inFVres_stack_7->SetBinError(18,1.800975);
   hNCpi0inFVres_stack_7->SetBinError(19,1.487445);
   hNCpi0inFVres_stack_7->SetBinError(20,1.246189);
   hNCpi0inFVres_stack_7->SetBinError(21,4.421285);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,142.8613);
   hNCpi0inFVdis_stack_8->SetBinContent(2,32.25154);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.28826);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.41102);
   hNCpi0inFVdis_stack_8->SetBinContent(5,28.22247);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.21072);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.58887);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.48073);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.77787);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.6646);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.27614);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.39531);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.596716);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.088619);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.465368);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.238866);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.087196);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.822619);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.333897);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.875718);
   hNCpi0inFVdis_stack_8->SetBinContent(21,38.39027);
   hNCpi0inFVdis_stack_8->SetBinError(1,4.112112);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.032411);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.791916);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.012918);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.89107);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.677777);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.495725);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.484937);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.390336);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.436733);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.183978);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.326101);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.170252);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.05946);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8820559);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8544618);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9510819);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5818708);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.812319);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5456726);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.234281);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3102415);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.164166);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08431811);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1177733);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.150234);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1441499);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1302849);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04888967);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07223304);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1330957);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02577893);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,309.8479);
   hCCpi0inFV_stack_10->SetBinContent(2,67.13451);
   hCCpi0inFV_stack_10->SetBinContent(3,62.18647);
   hCCpi0inFV_stack_10->SetBinContent(4,64.66292);
   hCCpi0inFV_stack_10->SetBinContent(5,57.9054);
   hCCpi0inFV_stack_10->SetBinContent(6,48.49524);
   hCCpi0inFV_stack_10->SetBinContent(7,48.88013);
   hCCpi0inFV_stack_10->SetBinContent(8,42.1721);
   hCCpi0inFV_stack_10->SetBinContent(9,51.15849);
   hCCpi0inFV_stack_10->SetBinContent(10,39.14455);
   hCCpi0inFV_stack_10->SetBinContent(11,35.00537);
   hCCpi0inFV_stack_10->SetBinContent(12,31.01626);
   hCCpi0inFV_stack_10->SetBinContent(13,20.63402);
   hCCpi0inFV_stack_10->SetBinContent(14,22.04219);
   hCCpi0inFV_stack_10->SetBinContent(15,20.67527);
   hCCpi0inFV_stack_10->SetBinContent(16,18.41722);
   hCCpi0inFV_stack_10->SetBinContent(17,16.88099);
   hCCpi0inFV_stack_10->SetBinContent(18,11.62611);
   hCCpi0inFV_stack_10->SetBinContent(19,11.50743);
   hCCpi0inFV_stack_10->SetBinContent(20,12.88191);
   hCCpi0inFV_stack_10->SetBinContent(21,102.7426);
   hCCpi0inFV_stack_10->SetBinError(1,8.835886);
   hCCpi0inFV_stack_10->SetBinError(2,4.132941);
   hCCpi0inFV_stack_10->SetBinError(3,3.962569);
   hCCpi0inFV_stack_10->SetBinError(4,4.065742);
   hCCpi0inFV_stack_10->SetBinError(5,3.826696);
   hCCpi0inFV_stack_10->SetBinError(6,3.48001);
   hCCpi0inFV_stack_10->SetBinError(7,3.485062);
   hCCpi0inFV_stack_10->SetBinError(8,3.226162);
   hCCpi0inFV_stack_10->SetBinError(9,3.610404);
   hCCpi0inFV_stack_10->SetBinError(10,3.128828);
   hCCpi0inFV_stack_10->SetBinError(11,2.995672);
   hCCpi0inFV_stack_10->SetBinError(12,2.775477);
   hCCpi0inFV_stack_10->SetBinError(13,2.18879);
   hCCpi0inFV_stack_10->SetBinError(14,2.32621);
   hCCpi0inFV_stack_10->SetBinError(15,2.255756);
   hCCpi0inFV_stack_10->SetBinError(16,2.145048);
   hCCpi0inFV_stack_10->SetBinError(17,2.060969);
   hCCpi0inFV_stack_10->SetBinError(18,1.700199);
   hCCpi0inFV_stack_10->SetBinError(19,1.687464);
   hCCpi0inFV_stack_10->SetBinError(20,1.888887);
   hCCpi0inFV_stack_10->SetBinError(21,5.119325);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,159.7862);
   hNCinFV_stack_11->SetBinContent(2,32.62507);
   hNCinFV_stack_11->SetBinContent(3,30.7785);
   hNCinFV_stack_11->SetBinContent(4,23.23318);
   hNCinFV_stack_11->SetBinContent(5,29.04871);
   hNCinFV_stack_11->SetBinContent(6,20.83278);
   hNCinFV_stack_11->SetBinContent(7,22.85304);
   hNCinFV_stack_11->SetBinContent(8,16.62425);
   hNCinFV_stack_11->SetBinContent(9,14.40512);
   hNCinFV_stack_11->SetBinContent(10,15.69447);
   hNCinFV_stack_11->SetBinContent(11,13.97594);
   hNCinFV_stack_11->SetBinContent(12,11.20744);
   hNCinFV_stack_11->SetBinContent(13,10.26163);
   hNCinFV_stack_11->SetBinContent(14,10.48668);
   hNCinFV_stack_11->SetBinContent(15,9.126394);
   hNCinFV_stack_11->SetBinContent(16,12.18214);
   hNCinFV_stack_11->SetBinContent(17,8.847844);
   hNCinFV_stack_11->SetBinContent(18,7.165796);
   hNCinFV_stack_11->SetBinContent(19,3.969522);
   hNCinFV_stack_11->SetBinContent(20,4.145937);
   hNCinFV_stack_11->SetBinContent(21,57.99028);
   hNCinFV_stack_11->SetBinError(1,6.654771);
   hNCinFV_stack_11->SetBinError(2,3.384254);
   hNCinFV_stack_11->SetBinError(3,3.227972);
   hNCinFV_stack_11->SetBinError(4,2.613194);
   hNCinFV_stack_11->SetBinError(5,2.973854);
   hNCinFV_stack_11->SetBinError(6,2.425027);
   hNCinFV_stack_11->SetBinError(7,2.621674);
   hNCinFV_stack_11->SetBinError(8,2.108685);
   hNCinFV_stack_11->SetBinError(9,1.876839);
   hNCinFV_stack_11->SetBinError(10,2.078137);
   hNCinFV_stack_11->SetBinError(11,1.9289);
   hNCinFV_stack_11->SetBinError(12,1.91117);
   hNCinFV_stack_11->SetBinError(13,1.799926);
   hNCinFV_stack_11->SetBinError(14,1.841787);
   hNCinFV_stack_11->SetBinError(15,1.808916);
   hNCinFV_stack_11->SetBinError(16,2.279588);
   hNCinFV_stack_11->SetBinError(17,1.545976);
   hNCinFV_stack_11->SetBinError(18,1.425943);
   hNCinFV_stack_11->SetBinError(19,1.044989);
   hNCinFV_stack_11->SetBinError(20,0.9179572);
   hNCinFV_stack_11->SetBinError(21,4.061682);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,164.5223);
   hnumuCCinFV_stack_12->SetBinContent(2,57.97172);
   hnumuCCinFV_stack_12->SetBinContent(3,49.93781);
   hnumuCCinFV_stack_12->SetBinContent(4,41.6223);
   hnumuCCinFV_stack_12->SetBinContent(5,37.77814);
   hnumuCCinFV_stack_12->SetBinContent(6,32.7431);
   hnumuCCinFV_stack_12->SetBinContent(7,29.6238);
   hnumuCCinFV_stack_12->SetBinContent(8,22.38823);
   hnumuCCinFV_stack_12->SetBinContent(9,21.12033);
   hnumuCCinFV_stack_12->SetBinContent(10,16.89725);
   hnumuCCinFV_stack_12->SetBinContent(11,12.73197);
   hnumuCCinFV_stack_12->SetBinContent(12,15.30773);
   hnumuCCinFV_stack_12->SetBinContent(13,11.85219);
   hnumuCCinFV_stack_12->SetBinContent(14,10.08695);
   hnumuCCinFV_stack_12->SetBinContent(15,9.417198);
   hnumuCCinFV_stack_12->SetBinContent(16,6.414198);
   hnumuCCinFV_stack_12->SetBinContent(17,5.599097);
   hnumuCCinFV_stack_12->SetBinContent(18,8.79108);
   hnumuCCinFV_stack_12->SetBinContent(19,5.859509);
   hnumuCCinFV_stack_12->SetBinContent(20,6.153461);
   hnumuCCinFV_stack_12->SetBinContent(21,86.94292);
   hnumuCCinFV_stack_12->SetBinError(1,7.517988);
   hnumuCCinFV_stack_12->SetBinError(2,4.470131);
   hnumuCCinFV_stack_12->SetBinError(3,4.348529);
   hnumuCCinFV_stack_12->SetBinError(4,4.439213);
   hnumuCCinFV_stack_12->SetBinError(5,3.880849);
   hnumuCCinFV_stack_12->SetBinError(6,3.17232);
   hnumuCCinFV_stack_12->SetBinError(7,3.303473);
   hnumuCCinFV_stack_12->SetBinError(8,2.582286);
   hnumuCCinFV_stack_12->SetBinError(9,2.779256);
   hnumuCCinFV_stack_12->SetBinError(10,2.072596);
   hnumuCCinFV_stack_12->SetBinError(11,1.961604);
   hnumuCCinFV_stack_12->SetBinError(12,2.187843);
   hnumuCCinFV_stack_12->SetBinError(13,1.714745);
   hnumuCCinFV_stack_12->SetBinError(14,1.804336);
   hnumuCCinFV_stack_12->SetBinError(15,1.606507);
   hnumuCCinFV_stack_12->SetBinError(16,1.246395);
   hnumuCCinFV_stack_12->SetBinError(17,1.122955);
   hnumuCCinFV_stack_12->SetBinError(18,1.525547);
   hnumuCCinFV_stack_12->SetBinError(19,1.23038);
   hnumuCCinFV_stack_12->SetBinError(20,1.303178);
   hnumuCCinFV_stack_12->SetBinError(21,5.322224);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,33.85469);
   hnueCCinFV_stack_13->SetBinContent(2,0.8287424);
   hnueCCinFV_stack_13->SetBinContent(3,1.856751);
   hnueCCinFV_stack_13->SetBinContent(4,1.574557);
   hnueCCinFV_stack_13->SetBinContent(5,1.164511);
   hnueCCinFV_stack_13->SetBinContent(6,1.517861);
   hnueCCinFV_stack_13->SetBinContent(7,1.145014);
   hnueCCinFV_stack_13->SetBinContent(8,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(9,1.543895);
   hnueCCinFV_stack_13->SetBinContent(10,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(11,0.9115337);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.5408891);
   hnueCCinFV_stack_13->SetBinContent(14,1.090732);
   hnueCCinFV_stack_13->SetBinContent(15,0.4991921);
   hnueCCinFV_stack_13->SetBinContent(17,0.7905979);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,1.157431);
   hnueCCinFV_stack_13->SetBinContent(21,2.764619);
   hnueCCinFV_stack_13->SetBinError(1,3.967829);
   hnueCCinFV_stack_13->SetBinError(2,0.4209555);
   hnueCCinFV_stack_13->SetBinError(3,0.8269193);
   hnueCCinFV_stack_13->SetBinError(4,0.6589965);
   hnueCCinFV_stack_13->SetBinError(5,0.6161081);
   hnueCCinFV_stack_13->SetBinError(6,0.7137061);
   hnueCCinFV_stack_13->SetBinError(7,0.5882319);
   hnueCCinFV_stack_13->SetBinError(8,0.4394482);
   hnueCCinFV_stack_13->SetBinError(9,1.173326);
   hnueCCinFV_stack_13->SetBinError(10,0.3812133);
   hnueCCinFV_stack_13->SetBinError(11,0.5485739);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.3929806);
   hnueCCinFV_stack_13->SetBinError(14,0.596548);
   hnueCCinFV_stack_13->SetBinError(15,0.3613204);
   hnueCCinFV_stack_13->SetBinError(17,0.4677435);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.157431);
   hnueCCinFV_stack_13->SetBinError(21,0.9437009);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__2->SetBinContent(1,2074.624);
   hmcerror__2->SetBinContent(2,399.5302);
   hmcerror__2->SetBinContent(3,385.8764);
   hmcerror__2->SetBinContent(4,367.7225);
   hmcerror__2->SetBinContent(5,353.4773);
   hmcerror__2->SetBinContent(6,297.0947);
   hmcerror__2->SetBinContent(7,293.8226);
   hmcerror__2->SetBinContent(8,253.3793);
   hmcerror__2->SetBinContent(9,244.0663);
   hmcerror__2->SetBinContent(10,225.0927);
   hmcerror__2->SetBinContent(11,185.7166);
   hmcerror__2->SetBinContent(12,166.0885);
   hmcerror__2->SetBinContent(13,139.3223);
   hmcerror__2->SetBinContent(14,124.6577);
   hmcerror__2->SetBinContent(15,111.6654);
   hmcerror__2->SetBinContent(16,110.2237);
   hmcerror__2->SetBinContent(17,106.9583);
   hmcerror__2->SetBinContent(18,90.27764);
   hmcerror__2->SetBinContent(19,80.25781);
   hmcerror__2->SetBinContent(20,65.41317);
   hmcerror__2->SetBinContent(21,703.842);
   hmcerror__2->SetBinError(1,452.0664);
   hmcerror__2->SetBinError(2,125.0193);
   hmcerror__2->SetBinError(3,113.4163);
   hmcerror__2->SetBinError(4,107.4997);
   hmcerror__2->SetBinError(5,101.1185);
   hmcerror__2->SetBinError(6,89.28981);
   hmcerror__2->SetBinError(7,83.521);
   hmcerror__2->SetBinError(8,73.30333);
   hmcerror__2->SetBinError(9,67.60525);
   hmcerror__2->SetBinError(10,62.51553);
   hmcerror__2->SetBinError(11,52.55768);
   hmcerror__2->SetBinError(12,47.28517);
   hmcerror__2->SetBinError(13,42.46457);
   hmcerror__2->SetBinError(14,38.21302);
   hmcerror__2->SetBinError(15,36.5787);
   hmcerror__2->SetBinError(16,32.63153);
   hmcerror__2->SetBinError(17,28.4291);
   hmcerror__2->SetBinError(18,27.09235);
   hmcerror__2->SetBinError(19,25.54063);
   hmcerror__2->SetBinError(20,23.59502);
   hmcerror__2->SetBinError(21,162.5134);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3001[20] = {
   2024,
   374,
   347,
   358,
   324,
   310,
   237,
   253,
   265,
   216,
   186,
   148,
   114,
   133,
   111,
   94,
   84,
   91,
   73,
   58};
   Double_t _felx3001[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3001[20] = {
   44.98889,
   19.33908,
   18.62794,
   18.92089,
   18,
   17.60682,
   15.3948,
   15.90597,
   16.27882,
   14.69694,
   13.63818,
   12.16553,
   10.67708,
   11.53256,
   10.53565,
   9.8173,
   9.2886,
   9.6617,
   8.6693,
   7.7446};
   Double_t _fehx3001[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3001[20] = {
   44.98889,
   19.33908,
   18.62794,
   18.92089,
   18,
   17.60682,
   15.3948,
   15.90597,
   16.27882,
   14.69694,
   13.63818,
   12.16553,
   10.67708,
   11.53256,
   10.53565,
   9.616,
   9.0869,
   9.46,
   8.4672,
   7.5415};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,55);
   Graph_Graph3001->SetMinimum(45.22986);
   Graph_Graph3001->SetMaximum(2270.862);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5800.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 132.4","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 665.5","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 64.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 588.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  107.8","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.5","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1996.4","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  434.9","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 992.3","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 457.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 566.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 50.5","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3002[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3002[20] = {
   0.2179028,
   0.3129158,
   0.2939188,
   0.2923393,
   0.2860679,
   0.3005432,
   0.2842566,
   0.2893028,
   0.2769954,
   0.2777324,
   0.2829993,
   0.2846987,
   0.3047939,
   0.3065437,
   0.3275741,
   0.2960482,
   0.2657961,
   0.3001003,
   0.3182323,
   0.3607075};
   Double_t _fehx3002[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3002[20] = {
   0.2179028,
   0.3129158,
   0.2939188,
   0.2923393,
   0.2860679,
   0.3005432,
   0.2842566,
   0.2893028,
   0.2769954,
   0.2777324,
   0.2829993,
   0.2846987,
   0.3047939,
   0.3065437,
   0.3275741,
   0.2960482,
   0.2657961,
   0.3001003,
   0.3182323,
   0.3607075};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,55);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3003[20] = {
   0.2098428,
   0.2915618,
   0.2841813,
   0.2811984,
   0.2675256,
   0.2890902,
   0.266636,
   0.2701537,
   0.2590189,
   0.2427684,
   0.2494376,
   0.2620727,
   0.2587405,
   0.259588,
   0.2614499,
   0.2457175,
   0.2255224,
   0.2519161,
   0.2391908,
   0.2734841};
   Double_t _fehx3003[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3003[20] = {
   0.2098428,
   0.2915618,
   0.2841813,
   0.2811984,
   0.2675256,
   0.2890902,
   0.266636,
   0.2701537,
   0.2590189,
   0.2427684,
   0.2494376,
   0.2620727,
   0.2587405,
   0.259588,
   0.2614499,
   0.2457175,
   0.2255224,
   0.2519161,
   0.2391908,
   0.2734841};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,55);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3004[20] = {
   0.9755985,
   0.9360996,
   0.8992516,
   0.9735601,
   0.9166077,
   1.043438,
   0.8066092,
   0.9985031,
   1.08577,
   0.9596046,
   1.001526,
   0.8910914,
   0.8182468,
   1.066922,
   0.9940411,
   0.8528111,
   0.7853528,
   1.008002,
   0.9095688,
   0.8866716};
   Double_t _felx3004[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3004[20] = {
   0.02168532,
   0.04840456,
   0.04827436,
   0.05145425,
   0.05092265,
   0.05926331,
   0.0523949,
   0.06277535,
   0.06669835,
   0.06529282,
   0.07343543,
   0.07324726,
   0.07663584,
   0.09251386,
   0.0943502,
   0.08906705,
   0.08684319,
   0.1070221,
   0.1080181,
   0.1183951};
   Double_t _fehx3004[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3004[20] = {
   0.02168532,
   0.04840456,
   0.04827436,
   0.05145425,
   0.05092265,
   0.05926331,
   0.0523949,
   0.06277535,
   0.06669835,
   0.06529282,
   0.07343543,
   0.07324726,
   0.07663584,
   0.09251386,
   0.0943502,
   0.08724076,
   0.08495741,
   0.1047879,
   0.1055,
   0.1152902};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,55);
   Graph_Graph3004->SetMinimum(0.652417);
   Graph_Graph3004->SetMaximum(1.205528);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_gap_high_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
