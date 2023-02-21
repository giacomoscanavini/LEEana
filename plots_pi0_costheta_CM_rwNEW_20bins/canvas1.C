#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Feb 17 23:12:04 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-0.1538462,-15.10796,1.128205,1670.622);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__1->SetBinContent(1,329.4027);
   hmc__1->SetBinContent(2,315.0479);
   hmc__1->SetBinContent(3,311.3122);
   hmc__1->SetBinContent(4,309.4901);
   hmc__1->SetBinContent(5,312.9665);
   hmc__1->SetBinContent(6,326.7004);
   hmc__1->SetBinContent(7,309.7566);
   hmc__1->SetBinContent(8,316.3161);
   hmc__1->SetBinContent(9,327.9648);
   hmc__1->SetBinContent(10,326.7012);
   hmc__1->SetBinContent(11,343.9615);
   hmc__1->SetBinContent(12,338.3425);
   hmc__1->SetBinContent(13,359.5016);
   hmc__1->SetBinContent(14,350.05);
   hmc__1->SetBinContent(15,358.5803);
   hmc__1->SetBinContent(16,396.9661);
   hmc__1->SetBinContent(17,415.9674);
   hmc__1->SetBinContent(18,450.6521);
   hmc__1->SetBinContent(19,518.5936);
   hmc__1->SetBinContent(20,755.3979);
   hmc__1->SetBinContent(21,0.1394999);
   hmc__1->SetBinError(1,87.53351);
   hmc__1->SetBinError(2,86.00024);
   hmc__1->SetBinError(3,86.22061);
   hmc__1->SetBinError(4,89.21037);
   hmc__1->SetBinError(5,86.38877);
   hmc__1->SetBinError(6,84.58626);
   hmc__1->SetBinError(7,88.70422);
   hmc__1->SetBinError(8,84.97066);
   hmc__1->SetBinError(9,83.29391);
   hmc__1->SetBinError(10,83.95282);
   hmc__1->SetBinError(11,89.62844);
   hmc__1->SetBinError(12,84.86238);
   hmc__1->SetBinError(13,90.71316);
   hmc__1->SetBinError(14,93.08937);
   hmc__1->SetBinError(15,94.71681);
   hmc__1->SetBinError(16,101.5571);
   hmc__1->SetBinError(17,101.3234);
   hmc__1->SetBinError(18,106.6643);
   hmc__1->SetBinError(19,122.4345);
   hmc__1->SetBinError(20,162.1002);
   hmc__1->SetBinError(21,0.5149583);
   hmc__1->SetMinimum(-15.10796);
   hmc__1->SetMaximum(1586.336);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1);
   hs1_stack_1->SetMinimum(-1.293891e-08);
   hs1_stack_1->SetMaximum(793.1678);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,13.9385);
   hbadmatch_stack_1->SetBinContent(2,11.53819);
   hbadmatch_stack_1->SetBinContent(3,8.476494);
   hbadmatch_stack_1->SetBinContent(4,7.813312);
   hbadmatch_stack_1->SetBinContent(5,10.8342);
   hbadmatch_stack_1->SetBinContent(6,7.961863);
   hbadmatch_stack_1->SetBinContent(7,7.949583);
   hbadmatch_stack_1->SetBinContent(8,8.721258);
   hbadmatch_stack_1->SetBinContent(9,8.272736);
   hbadmatch_stack_1->SetBinContent(10,8.332474);
   hbadmatch_stack_1->SetBinContent(11,9.131321);
   hbadmatch_stack_1->SetBinContent(12,8.634822);
   hbadmatch_stack_1->SetBinContent(13,7.694727);
   hbadmatch_stack_1->SetBinContent(14,7.142653);
   hbadmatch_stack_1->SetBinContent(15,7.861567);
   hbadmatch_stack_1->SetBinContent(16,6.421415);
   hbadmatch_stack_1->SetBinContent(17,9.440287);
   hbadmatch_stack_1->SetBinContent(18,8.133651);
   hbadmatch_stack_1->SetBinContent(19,8.582369);
   hbadmatch_stack_1->SetBinContent(20,13.65201);
   hbadmatch_stack_1->SetBinError(1,2.242653);
   hbadmatch_stack_1->SetBinError(2,1.725765);
   hbadmatch_stack_1->SetBinError(3,1.511672);
   hbadmatch_stack_1->SetBinError(4,1.43999);
   hbadmatch_stack_1->SetBinError(5,1.736232);
   hbadmatch_stack_1->SetBinError(6,1.770685);
   hbadmatch_stack_1->SetBinError(7,1.440775);
   hbadmatch_stack_1->SetBinError(8,1.537619);
   hbadmatch_stack_1->SetBinError(9,2.135409);
   hbadmatch_stack_1->SetBinError(10,1.576308);
   hbadmatch_stack_1->SetBinError(11,1.715026);
   hbadmatch_stack_1->SetBinError(12,1.566754);
   hbadmatch_stack_1->SetBinError(13,1.507002);
   hbadmatch_stack_1->SetBinError(14,1.327954);
   hbadmatch_stack_1->SetBinError(15,1.410197);
   hbadmatch_stack_1->SetBinError(16,1.315369);
   hbadmatch_stack_1->SetBinError(17,2.380256);
   hbadmatch_stack_1->SetBinError(18,2.070213);
   hbadmatch_stack_1->SetBinError(19,1.556196);
   hbadmatch_stack_1->SetBinError(20,2.102679);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,32.43073);
   hext_stack_2->SetBinContent(2,34.56023);
   hext_stack_2->SetBinContent(3,23.01999);
   hext_stack_2->SetBinContent(4,20.50537);
   hext_stack_2->SetBinContent(5,26.18334);
   hext_stack_2->SetBinContent(6,30.01431);
   hext_stack_2->SetBinContent(7,18.39736);
   hext_stack_2->SetBinContent(8,35.61726);
   hext_stack_2->SetBinContent(9,31.51662);
   hext_stack_2->SetBinContent(10,32.71481);
   hext_stack_2->SetBinContent(11,28.38351);
   hext_stack_2->SetBinContent(12,37.70927);
   hext_stack_2->SetBinContent(13,41.64399);
   hext_stack_2->SetBinContent(14,35.15995);
   hext_stack_2->SetBinContent(15,31.86691);
   hext_stack_2->SetBinContent(16,49.45706);
   hext_stack_2->SetBinContent(17,43.92913);
   hext_stack_2->SetBinContent(18,62.73348);
   hext_stack_2->SetBinContent(19,60.25646);
   hext_stack_2->SetBinContent(20,78.23834);
   hext_stack_2->SetBinError(1,3.866489);
   hext_stack_2->SetBinError(2,4.094441);
   hext_stack_2->SetBinError(3,3.102363);
   hext_stack_2->SetBinError(4,2.893342);
   hext_stack_2->SetBinError(5,3.524026);
   hext_stack_2->SetBinError(6,3.718285);
   hext_stack_2->SetBinError(7,2.6988);
   hext_stack_2->SetBinError(8,4.196627);
   hext_stack_2->SetBinError(9,3.673672);
   hext_stack_2->SetBinError(10,3.990721);
   hext_stack_2->SetBinError(11,3.609602);
   hext_stack_2->SetBinError(12,4.316311);
   hext_stack_2->SetBinError(13,4.415191);
   hext_stack_2->SetBinError(14,4.030526);
   hext_stack_2->SetBinError(15,3.803029);
   hext_stack_2->SetBinError(16,4.832483);
   hext_stack_2->SetBinError(17,4.45288);
   hext_stack_2->SetBinError(18,5.58722);
   hext_stack_2->SetBinError(19,5.300833);
   hext_stack_2->SetBinError(20,6.023055);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,1.727272);
   hdirt_stack_3->SetBinContent(2,1.735742);
   hdirt_stack_3->SetBinContent(3,2.296591);
   hdirt_stack_3->SetBinContent(4,2.819734);
   hdirt_stack_3->SetBinContent(5,3.848997);
   hdirt_stack_3->SetBinContent(6,3.976881);
   hdirt_stack_3->SetBinContent(7,2.465685);
   hdirt_stack_3->SetBinContent(8,2.140953);
   hdirt_stack_3->SetBinContent(9,3.223485);
   hdirt_stack_3->SetBinContent(10,2.896396);
   hdirt_stack_3->SetBinContent(11,2.726447);
   hdirt_stack_3->SetBinContent(12,3.141215);
   hdirt_stack_3->SetBinContent(13,3.847283);
   hdirt_stack_3->SetBinContent(14,3.338686);
   hdirt_stack_3->SetBinContent(15,2.342851);
   hdirt_stack_3->SetBinContent(16,4.468888);
   hdirt_stack_3->SetBinContent(17,4.540492);
   hdirt_stack_3->SetBinContent(18,6.449581);
   hdirt_stack_3->SetBinContent(19,5.092665);
   hdirt_stack_3->SetBinContent(20,9.951199);
   hdirt_stack_3->SetBinError(1,0.6674737);
   hdirt_stack_3->SetBinError(2,0.6811774);
   hdirt_stack_3->SetBinError(3,0.8359268);
   hdirt_stack_3->SetBinError(4,0.8332842);
   hdirt_stack_3->SetBinError(5,1.268833);
   hdirt_stack_3->SetBinError(6,1.089402);
   hdirt_stack_3->SetBinError(7,0.8698714);
   hdirt_stack_3->SetBinError(8,0.7169911);
   hdirt_stack_3->SetBinError(9,0.9157281);
   hdirt_stack_3->SetBinError(10,0.9346644);
   hdirt_stack_3->SetBinError(11,0.8931228);
   hdirt_stack_3->SetBinError(12,0.9130524);
   hdirt_stack_3->SetBinError(13,1.366354);
   hdirt_stack_3->SetBinError(14,0.8725707);
   hdirt_stack_3->SetBinError(15,0.7908084);
   hdirt_stack_3->SetBinError(16,1.109534);
   hdirt_stack_3->SetBinError(17,1.403795);
   hdirt_stack_3->SetBinError(18,1.253084);
   hdirt_stack_3->SetBinError(19,1.261061);
   hdirt_stack_3->SetBinError(20,1.613417);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,25.78575);
   houtFV_stack_4->SetBinContent(2,25.33545);
   houtFV_stack_4->SetBinContent(3,23.92092);
   houtFV_stack_4->SetBinContent(4,28.59148);
   houtFV_stack_4->SetBinContent(5,28.97708);
   houtFV_stack_4->SetBinContent(6,26.82006);
   houtFV_stack_4->SetBinContent(7,28.48811);
   houtFV_stack_4->SetBinContent(8,25.78758);
   houtFV_stack_4->SetBinContent(9,29.31407);
   houtFV_stack_4->SetBinContent(10,31.11849);
   houtFV_stack_4->SetBinContent(11,34.6691);
   houtFV_stack_4->SetBinContent(12,31.16483);
   houtFV_stack_4->SetBinContent(13,36.64041);
   houtFV_stack_4->SetBinContent(14,33.35617);
   houtFV_stack_4->SetBinContent(15,41.14133);
   houtFV_stack_4->SetBinContent(16,39.84441);
   houtFV_stack_4->SetBinContent(17,37.75357);
   houtFV_stack_4->SetBinContent(18,43.36014);
   houtFV_stack_4->SetBinContent(19,59.13694);
   houtFV_stack_4->SetBinContent(20,91.02588);
   houtFV_stack_4->SetBinError(1,2.519085);
   houtFV_stack_4->SetBinError(2,2.516913);
   houtFV_stack_4->SetBinError(3,2.45454);
   houtFV_stack_4->SetBinError(4,2.701002);
   houtFV_stack_4->SetBinError(5,2.69247);
   houtFV_stack_4->SetBinError(6,2.634863);
   houtFV_stack_4->SetBinError(7,2.777371);
   houtFV_stack_4->SetBinError(8,2.581587);
   houtFV_stack_4->SetBinError(9,2.69656);
   houtFV_stack_4->SetBinError(10,2.896174);
   houtFV_stack_4->SetBinError(11,2.941007);
   houtFV_stack_4->SetBinError(12,2.820146);
   houtFV_stack_4->SetBinError(13,3.287798);
   houtFV_stack_4->SetBinError(14,2.877119);
   houtFV_stack_4->SetBinError(15,3.253851);
   houtFV_stack_4->SetBinError(16,3.191931);
   houtFV_stack_4->SetBinError(17,3.091189);
   houtFV_stack_4->SetBinError(18,3.252348);
   houtFV_stack_4->SetBinError(19,3.819138);
   houtFV_stack_4->SetBinError(20,4.765468);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.81966);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.108038);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.973442);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.99843);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.94263);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.973442);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.147747);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.90028);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.434956);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.237328);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.372588);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.64321);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.176222);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.051004);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.75905);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.214491);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.396757);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.1137);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,8.771603);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,15.4218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6705742);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5699098);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6687336);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.530288);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5288181);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6687336);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.825969);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5024623);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6874359);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6648907);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5533349);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7061482);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8247501);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.818513);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8009689);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6751528);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7719343);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8702538);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.013987);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.341874);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.353322);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6416997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9623858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9760038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.772495);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.423572);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9896218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.101222);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.937062);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.980412);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.952512);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.952344);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.228104);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.339208);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.938062);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.491821);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.377857);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1338036);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2576051);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2711014);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5343105);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4132003);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2839569);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2893876);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2652967);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4084627);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.4960313);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4952461);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4609878);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3640422);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.426488);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4678321);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3076408);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,120.0306);
   hNCpi0inFVres_stack_7->SetBinContent(2,115.3972);
   hNCpi0inFVres_stack_7->SetBinContent(3,122.4851);
   hNCpi0inFVres_stack_7->SetBinContent(4,118.5586);
   hNCpi0inFVres_stack_7->SetBinContent(5,116.7948);
   hNCpi0inFVres_stack_7->SetBinContent(6,120.3315);
   hNCpi0inFVres_stack_7->SetBinContent(7,130.5372);
   hNCpi0inFVres_stack_7->SetBinContent(8,115.662);
   hNCpi0inFVres_stack_7->SetBinContent(9,124.5933);
   hNCpi0inFVres_stack_7->SetBinContent(10,126.7454);
   hNCpi0inFVres_stack_7->SetBinContent(11,132.6541);
   hNCpi0inFVres_stack_7->SetBinContent(12,130.0033);
   hNCpi0inFVres_stack_7->SetBinContent(13,128.1153);
   hNCpi0inFVres_stack_7->SetBinContent(14,134.1915);
   hNCpi0inFVres_stack_7->SetBinContent(15,136.4383);
   hNCpi0inFVres_stack_7->SetBinContent(16,149.2205);
   hNCpi0inFVres_stack_7->SetBinContent(17,148.443);
   hNCpi0inFVres_stack_7->SetBinContent(18,157.8076);
   hNCpi0inFVres_stack_7->SetBinContent(19,176.3815);
   hNCpi0inFVres_stack_7->SetBinContent(20,250.8747);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,3.604913);
   hNCpi0inFVres_stack_7->SetBinError(2,3.501657);
   hNCpi0inFVres_stack_7->SetBinError(3,3.625512);
   hNCpi0inFVres_stack_7->SetBinError(4,3.580393);
   hNCpi0inFVres_stack_7->SetBinError(5,3.505531);
   hNCpi0inFVres_stack_7->SetBinError(6,3.562557);
   hNCpi0inFVres_stack_7->SetBinError(7,3.828024);
   hNCpi0inFVres_stack_7->SetBinError(8,3.424139);
   hNCpi0inFVres_stack_7->SetBinError(9,3.679132);
   hNCpi0inFVres_stack_7->SetBinError(10,3.680921);
   hNCpi0inFVres_stack_7->SetBinError(11,3.773124);
   hNCpi0inFVres_stack_7->SetBinError(12,3.75019);
   hNCpi0inFVres_stack_7->SetBinError(13,3.68322);
   hNCpi0inFVres_stack_7->SetBinError(14,3.788916);
   hNCpi0inFVres_stack_7->SetBinError(15,3.781598);
   hNCpi0inFVres_stack_7->SetBinError(16,4.052425);
   hNCpi0inFVres_stack_7->SetBinError(17,3.935278);
   hNCpi0inFVres_stack_7->SetBinError(18,4.13246);
   hNCpi0inFVres_stack_7->SetBinError(19,4.330399);
   hNCpi0inFVres_stack_7->SetBinError(20,5.196348);
   hNCpi0inFVres_stack_7->SetBinError(21,0.05579997);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,24.02997);
   hNCpi0inFVdis_stack_8->SetBinContent(2,24.34634);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.95946);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.19538);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.72305);
   hNCpi0inFVdis_stack_8->SetBinContent(6,23.72174);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.27815);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.9817);
   hNCpi0inFVdis_stack_8->SetBinContent(9,25.73835);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.98155);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.10635);
   hNCpi0inFVdis_stack_8->SetBinContent(12,24.7675);
   hNCpi0inFVdis_stack_8->SetBinContent(13,24.77929);
   hNCpi0inFVdis_stack_8->SetBinContent(14,25.62691);
   hNCpi0inFVdis_stack_8->SetBinContent(15,27.6284);
   hNCpi0inFVdis_stack_8->SetBinContent(16,31.58293);
   hNCpi0inFVdis_stack_8->SetBinContent(17,29.1136);
   hNCpi0inFVdis_stack_8->SetBinContent(18,33.94863);
   hNCpi0inFVdis_stack_8->SetBinContent(19,33.72509);
   hNCpi0inFVdis_stack_8->SetBinContent(20,50.15692);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.612029);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.631727);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.55463);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.625973);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.472845);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.617733);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.470575);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.454942);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.640094);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.599708);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.568546);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.662759);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.643354);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.604688);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.66718);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.845287);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.756885);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.941642);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.885126);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.279341);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,48.14613);
   hCCpi0inFV_stack_10->SetBinContent(2,47.6457);
   hCCpi0inFV_stack_10->SetBinContent(3,53.41512);
   hCCpi0inFV_stack_10->SetBinContent(4,52.74256);
   hCCpi0inFV_stack_10->SetBinContent(5,51.79609);
   hCCpi0inFV_stack_10->SetBinContent(6,52.87482);
   hCCpi0inFV_stack_10->SetBinContent(7,52.95849);
   hCCpi0inFV_stack_10->SetBinContent(8,52.36613);
   hCCpi0inFV_stack_10->SetBinContent(9,44.0826);
   hCCpi0inFV_stack_10->SetBinContent(10,46.7179);
   hCCpi0inFV_stack_10->SetBinContent(11,53.49153);
   hCCpi0inFV_stack_10->SetBinContent(12,48.22329);
   hCCpi0inFV_stack_10->SetBinContent(13,53.55365);
   hCCpi0inFV_stack_10->SetBinContent(14,52.78657);
   hCCpi0inFV_stack_10->SetBinContent(15,50.52283);
   hCCpi0inFV_stack_10->SetBinContent(16,49.99464);
   hCCpi0inFV_stack_10->SetBinContent(17,61.79617);
   hCCpi0inFV_stack_10->SetBinContent(18,58.21169);
   hCCpi0inFV_stack_10->SetBinContent(19,64.18517);
   hCCpi0inFV_stack_10->SetBinContent(20,99.50606);
   hCCpi0inFV_stack_10->SetBinError(1,3.45698);
   hCCpi0inFV_stack_10->SetBinError(2,3.501447);
   hCCpi0inFV_stack_10->SetBinError(3,3.652008);
   hCCpi0inFV_stack_10->SetBinError(4,3.673154);
   hCCpi0inFV_stack_10->SetBinError(5,3.62569);
   hCCpi0inFV_stack_10->SetBinError(6,3.644394);
   hCCpi0inFV_stack_10->SetBinError(7,3.639655);
   hCCpi0inFV_stack_10->SetBinError(8,3.595983);
   hCCpi0inFV_stack_10->SetBinError(9,3.332702);
   hCCpi0inFV_stack_10->SetBinError(10,3.376478);
   hCCpi0inFV_stack_10->SetBinError(11,3.63597);
   hCCpi0inFV_stack_10->SetBinError(12,3.466196);
   hCCpi0inFV_stack_10->SetBinError(13,3.711263);
   hCCpi0inFV_stack_10->SetBinError(14,3.705185);
   hCCpi0inFV_stack_10->SetBinError(15,3.550564);
   hCCpi0inFV_stack_10->SetBinError(16,3.530864);
   hCCpi0inFV_stack_10->SetBinError(17,3.972875);
   hCCpi0inFV_stack_10->SetBinError(18,3.865318);
   hCCpi0inFV_stack_10->SetBinError(19,3.984258);
   hCCpi0inFV_stack_10->SetBinError(20,5.028627);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,27.21729);
   hNCinFV_stack_11->SetBinContent(2,29.49371);
   hNCinFV_stack_11->SetBinContent(3,21.41351);
   hNCinFV_stack_11->SetBinContent(4,23.2594);
   hNCinFV_stack_11->SetBinContent(5,25.45916);
   hNCinFV_stack_11->SetBinContent(6,24.86636);
   hNCinFV_stack_11->SetBinContent(7,19.69801);
   hNCinFV_stack_11->SetBinContent(8,24.11018);
   hNCinFV_stack_11->SetBinContent(9,27.68294);
   hNCinFV_stack_11->SetBinContent(10,22.27536);
   hNCinFV_stack_11->SetBinContent(11,25.70973);
   hNCinFV_stack_11->SetBinContent(12,19.41447);
   hNCinFV_stack_11->SetBinContent(13,21.17815);
   hNCinFV_stack_11->SetBinContent(14,22.26136);
   hNCinFV_stack_11->SetBinContent(15,22.6223);
   hNCinFV_stack_11->SetBinContent(16,21.8416);
   hNCinFV_stack_11->SetBinContent(17,22.16777);
   hNCinFV_stack_11->SetBinContent(18,26.95718);
   hNCinFV_stack_11->SetBinContent(19,33.66954);
   hNCinFV_stack_11->SetBinContent(20,50.79227);
   hNCinFV_stack_11->SetBinError(1,2.61866);
   hNCinFV_stack_11->SetBinError(2,2.782938);
   hNCinFV_stack_11->SetBinError(3,2.297558);
   hNCinFV_stack_11->SetBinError(4,2.404083);
   hNCinFV_stack_11->SetBinError(5,2.473287);
   hNCinFV_stack_11->SetBinError(6,2.461813);
   hNCinFV_stack_11->SetBinError(7,2.211975);
   hNCinFV_stack_11->SetBinError(8,2.528484);
   hNCinFV_stack_11->SetBinError(9,2.690997);
   hNCinFV_stack_11->SetBinError(10,2.354347);
   hNCinFV_stack_11->SetBinError(11,2.513195);
   hNCinFV_stack_11->SetBinError(12,2.177179);
   hNCinFV_stack_11->SetBinError(13,2.255157);
   hNCinFV_stack_11->SetBinError(14,2.43603);
   hNCinFV_stack_11->SetBinError(15,2.379353);
   hNCinFV_stack_11->SetBinError(16,2.304464);
   hNCinFV_stack_11->SetBinError(17,2.411964);
   hNCinFV_stack_11->SetBinError(18,2.61783);
   hNCinFV_stack_11->SetBinError(19,2.918174);
   hNCinFV_stack_11->SetBinError(20,3.618958);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,28.06427);
   hnumuCCinFV_stack_12->SetBinContent(2,20.11605);
   hnumuCCinFV_stack_12->SetBinContent(3,27.38629);
   hnumuCCinFV_stack_12->SetBinContent(4,25.88853);
   hnumuCCinFV_stack_12->SetBinContent(5,22.23041);
   hnumuCCinFV_stack_12->SetBinContent(6,29.3775);
   hnumuCCinFV_stack_12->SetBinContent(7,21.07817);
   hnumuCCinFV_stack_12->SetBinContent(8,26.17748);
   hnumuCCinFV_stack_12->SetBinContent(9,27.75925);
   hnumuCCinFV_stack_12->SetBinContent(10,24.81873);
   hnumuCCinFV_stack_12->SetBinContent(11,28.41893);
   hnumuCCinFV_stack_12->SetBinContent(12,29.03399);
   hnumuCCinFV_stack_12->SetBinContent(13,31.80004);
   hnumuCCinFV_stack_12->SetBinContent(14,25.26849);
   hnumuCCinFV_stack_12->SetBinContent(15,28.65518);
   hnumuCCinFV_stack_12->SetBinContent(16,33.9121);
   hnumuCCinFV_stack_12->SetBinContent(17,46.35281);
   hnumuCCinFV_stack_12->SetBinContent(18,40.88064);
   hnumuCCinFV_stack_12->SetBinContent(19,60.02003);
   hnumuCCinFV_stack_12->SetBinContent(20,76.5224);
   hnumuCCinFV_stack_12->SetBinError(1,3.275719);
   hnumuCCinFV_stack_12->SetBinError(2,2.297177);
   hnumuCCinFV_stack_12->SetBinError(3,2.786514);
   hnumuCCinFV_stack_12->SetBinError(4,2.653858);
   hnumuCCinFV_stack_12->SetBinError(5,2.712164);
   hnumuCCinFV_stack_12->SetBinError(6,2.932177);
   hnumuCCinFV_stack_12->SetBinError(7,2.397782);
   hnumuCCinFV_stack_12->SetBinError(8,3.210707);
   hnumuCCinFV_stack_12->SetBinError(9,3.12444);
   hnumuCCinFV_stack_12->SetBinError(10,2.881187);
   hnumuCCinFV_stack_12->SetBinError(11,3.043716);
   hnumuCCinFV_stack_12->SetBinError(12,3.125718);
   hnumuCCinFV_stack_12->SetBinError(13,3.21636);
   hnumuCCinFV_stack_12->SetBinError(14,2.741986);
   hnumuCCinFV_stack_12->SetBinError(15,3.008345);
   hnumuCCinFV_stack_12->SetBinError(16,3.443357);
   hnumuCCinFV_stack_12->SetBinError(17,4.150816);
   hnumuCCinFV_stack_12->SetBinError(18,3.713547);
   hnumuCCinFV_stack_12->SetBinError(19,5.435688);
   hnumuCCinFV_stack_12->SetBinError(20,4.967362);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,2.803372);
   hnueCCinFV_stack_13->SetBinContent(2,1.073786);
   hnueCCinFV_stack_13->SetBinContent(3,0.7793396);
   hnueCCinFV_stack_13->SetBinContent(4,1.127039);
   hnueCCinFV_stack_13->SetBinContent(5,1.172818);
   hnueCCinFV_stack_13->SetBinContent(6,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.251764);
   hnueCCinFV_stack_13->SetBinContent(9,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(10,0.7336411);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.742202);
   hnueCCinFV_stack_13->SetBinContent(13,2.010153);
   hnueCCinFV_stack_13->SetBinContent(14,2.662945);
   hnueCCinFV_stack_13->SetBinContent(15,1.761066);
   hnueCCinFV_stack_13->SetBinContent(16,3.055814);
   hnueCCinFV_stack_13->SetBinContent(17,4.526496);
   hnueCCinFV_stack_13->SetBinContent(18,3.688677);
   hnueCCinFV_stack_13->SetBinContent(19,6.750499);
   hnueCCinFV_stack_13->SetBinContent(20,17.70874);
   hnueCCinFV_stack_13->SetBinError(1,1.469282);
   hnueCCinFV_stack_13->SetBinError(2,0.5557297);
   hnueCCinFV_stack_13->SetBinError(3,0.4619074);
   hnueCCinFV_stack_13->SetBinError(4,0.5201044);
   hnueCCinFV_stack_13->SetBinError(5,0.5523108);
   hnueCCinFV_stack_13->SetBinError(6,0.4379386);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.5894075);
   hnueCCinFV_stack_13->SetBinError(9,0.2451269);
   hnueCCinFV_stack_13->SetBinError(10,0.4394482);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4287931);
   hnueCCinFV_stack_13->SetBinError(13,0.7782229);
   hnueCCinFV_stack_13->SetBinError(14,0.8942326);
   hnueCCinFV_stack_13->SetBinError(15,0.6843881);
   hnueCCinFV_stack_13->SetBinError(16,0.9796597);
   hnueCCinFV_stack_13->SetBinError(17,1.484057);
   hnueCCinFV_stack_13->SetBinError(18,1.063652);
   hnueCCinFV_stack_13->SetBinError(19,1.762844);
   hnueCCinFV_stack_13->SetBinError(20,3.14806);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__2->SetBinContent(1,329.4027);
   hmcerror__2->SetBinContent(2,315.0479);
   hmcerror__2->SetBinContent(3,311.3122);
   hmcerror__2->SetBinContent(4,309.4901);
   hmcerror__2->SetBinContent(5,312.9665);
   hmcerror__2->SetBinContent(6,326.7004);
   hmcerror__2->SetBinContent(7,309.7566);
   hmcerror__2->SetBinContent(8,316.3161);
   hmcerror__2->SetBinContent(9,327.9648);
   hmcerror__2->SetBinContent(10,326.7012);
   hmcerror__2->SetBinContent(11,343.9615);
   hmcerror__2->SetBinContent(12,338.3425);
   hmcerror__2->SetBinContent(13,359.5016);
   hmcerror__2->SetBinContent(14,350.05);
   hmcerror__2->SetBinContent(15,358.5803);
   hmcerror__2->SetBinContent(16,396.9661);
   hmcerror__2->SetBinContent(17,415.9674);
   hmcerror__2->SetBinContent(18,450.6521);
   hmcerror__2->SetBinContent(19,518.5936);
   hmcerror__2->SetBinContent(20,755.3979);
   hmcerror__2->SetBinContent(21,0.1394999);
   hmcerror__2->SetBinError(1,87.53351);
   hmcerror__2->SetBinError(2,86.00024);
   hmcerror__2->SetBinError(3,86.22061);
   hmcerror__2->SetBinError(4,89.21037);
   hmcerror__2->SetBinError(5,86.38877);
   hmcerror__2->SetBinError(6,84.58626);
   hmcerror__2->SetBinError(7,88.70422);
   hmcerror__2->SetBinError(8,84.97066);
   hmcerror__2->SetBinError(9,83.29391);
   hmcerror__2->SetBinError(10,83.95282);
   hmcerror__2->SetBinError(11,89.62844);
   hmcerror__2->SetBinError(12,84.86238);
   hmcerror__2->SetBinError(13,90.71316);
   hmcerror__2->SetBinError(14,93.08937);
   hmcerror__2->SetBinError(15,94.71681);
   hmcerror__2->SetBinError(16,101.5571);
   hmcerror__2->SetBinError(17,101.3234);
   hmcerror__2->SetBinError(18,106.6643);
   hmcerror__2->SetBinError(19,122.4345);
   hmcerror__2->SetBinError(20,162.1002);
   hmcerror__2->SetBinError(21,0.5149583);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3001[20] = {
   278,
   273,
   296,
   262,
   292,
   260,
   270,
   276,
   283,
   261,
   259,
   307,
   302,
   279,
   324,
   342,
   345,
   386,
   450,
   699};
   Double_t _felx3001[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3001[20] = {
   16.67333,
   16.52271,
   17.20465,
   16.18641,
   17.08801,
   16.12452,
   16.43168,
   16.61325,
   16.8226,
   16.15549,
   16.09348,
   17.52142,
   17.37815,
   16.70329,
   18,
   18.49324,
   18.57418,
   19.64688,
   21.2132,
   26.43861};
   Double_t _fehx3001[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3001[20] = {
   16.67333,
   16.52271,
   17.20465,
   16.18641,
   17.08801,
   16.12452,
   16.43168,
   16.61325,
   16.8226,
   16.15549,
   16.09348,
   17.52142,
   17.37815,
   16.70329,
   18,
   18.49324,
   18.57418,
   19.64688,
   21.2132,
   26.43861};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1.1);
   Graph_Graph3001->SetMinimum(194.6533);
   Graph_Graph3001->SetMaximum(773.6918);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3002[20] = {
   0.265734,
   0.2729751,
   0.2769586,
   0.2882495,
   0.276032,
   0.2589108,
   0.2863675,
   0.2686258,
   0.2539721,
   0.2569713,
   0.260577,
   0.250818,
   0.2523304,
   0.2659316,
   0.264144,
   0.2558332,
   0.243585,
   0.2366888,
   0.2360894,
   0.2145892};
   Double_t _fehx3002[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3002[20] = {
   0.265734,
   0.2729751,
   0.2769586,
   0.2882495,
   0.276032,
   0.2589108,
   0.2863675,
   0.2686258,
   0.2539721,
   0.2569713,
   0.260577,
   0.250818,
   0.2523304,
   0.2659316,
   0.264144,
   0.2558332,
   0.243585,
   0.2366888,
   0.2360894,
   0.2145892};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1.1);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3003[20] = {
   0.2389628,
   0.2548342,
   0.2555177,
   0.2563505,
   0.2515374,
   0.2410788,
   0.2628087,
   0.2402365,
   0.2367058,
   0.2340566,
   0.2332372,
   0.2305505,
   0.2295299,
   0.2334015,
   0.2305702,
   0.2247213,
   0.2161951,
   0.2139601,
   0.2066975,
   0.1980873};
   Double_t _fehx3003[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3003[20] = {
   0.2389628,
   0.2548342,
   0.2555177,
   0.2563505,
   0.2515374,
   0.2410788,
   0.2628087,
   0.2402365,
   0.2367058,
   0.2340566,
   0.2332372,
   0.2305505,
   0.2295299,
   0.2334015,
   0.2305702,
   0.2247213,
   0.2161951,
   0.2139601,
   0.2066975,
   0.1980873};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1.1);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3004[20] = {
   0.8439518,
   0.8665349,
   0.9508139,
   0.8465537,
   0.9330073,
   0.7958362,
   0.8716522,
   0.8725449,
   0.8628975,
   0.7988951,
   0.7529912,
   0.9073647,
   0.840052,
   0.797029,
   0.9035634,
   0.8615345,
   0.829392,
   0.8565366,
   0.8677314,
   0.9253401};
   Double_t _felx3004[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3004[20] = {
   0.05061687,
   0.05244508,
   0.05526494,
   0.05230026,
   0.05460012,
   0.04935567,
   0.05304706,
   0.05252103,
   0.05129393,
   0.04945037,
   0.0467886,
   0.05178604,
   0.04833956,
   0.04771688,
   0.05019797,
   0.04658645,
   0.04465296,
   0.04359656,
   0.04090525,
   0.03499958};
   Double_t _fehx3004[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3004[20] = {
   0.05061687,
   0.05244508,
   0.05526494,
   0.05230026,
   0.05460012,
   0.04935567,
   0.05304706,
   0.05252103,
   0.05129393,
   0.04945037,
   0.0467886,
   0.05178604,
   0.04833956,
   0.04771688,
   0.05019797,
   0.04658645,
   0.04465296,
   0.04359656,
   0.04090525,
   0.03499958};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1.1);
   Graph_Graph3004->SetMinimum(0.676215);
   Graph_Graph3004->SetMaximum(1.036066);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   TLine *line = new TLine(0,1,1,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
