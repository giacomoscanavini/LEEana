#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 21:15:03 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-0.6953352,1241.026,76.88944);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__25->SetBinContent(1,34.76676);
   hmc__25->SetBinContent(2,27.81483);
   hmc__25->SetBinContent(3,24.27002);
   hmc__25->SetBinContent(4,24.17572);
   hmc__25->SetBinContent(5,24.66768);
   hmc__25->SetBinContent(6,23.69303);
   hmc__25->SetBinContent(7,24.18678);
   hmc__25->SetBinContent(8,30.85653);
   hmc__25->SetBinContent(9,25.32413);
   hmc__25->SetBinContent(10,21.00356);
   hmc__25->SetBinContent(11,24.24356);
   hmc__25->SetBinContent(12,19.88854);
   hmc__25->SetBinContent(13,19.23968);
   hmc__25->SetBinContent(14,21.90767);
   hmc__25->SetBinContent(15,23.05532);
   hmc__25->SetBinContent(16,23.78112);
   hmc__25->SetBinContent(17,20.63329);
   hmc__25->SetBinContent(18,20.72926);
   hmc__25->SetBinContent(19,21.60144);
   hmc__25->SetBinContent(20,24.99083);
   hmc__25->SetBinContent(21,32.17078);
   hmc__25->SetBinContent(22,22.60347);
   hmc__25->SetBinContent(23,21.99963);
   hmc__25->SetBinContent(24,20.23416);
   hmc__25->SetBinContent(25,19.7855);
   hmc__25->SetBinContent(26,22.34675);
   hmc__25->SetBinContent(27,18.05638);
   hmc__25->SetBinContent(28,22.50818);
   hmc__25->SetBinContent(29,32.73807);
   hmc__25->SetBinContent(30,27.11451);
   hmc__25->SetBinContent(31,0.670465);
   hmc__25->SetBinError(1,26.13242);
   hmc__25->SetBinError(2,13.29139);
   hmc__25->SetBinError(3,20.04369);
   hmc__25->SetBinError(4,11.0199);
   hmc__25->SetBinError(5,12.96302);
   hmc__25->SetBinError(6,10.36475);
   hmc__25->SetBinError(7,11.1021);
   hmc__25->SetBinError(8,15.84908);
   hmc__25->SetBinError(9,15.15489);
   hmc__25->SetBinError(10,10.50382);
   hmc__25->SetBinError(11,15.13626);
   hmc__25->SetBinError(12,9.014269);
   hmc__25->SetBinError(13,15.18806);
   hmc__25->SetBinError(14,11.43211);
   hmc__25->SetBinError(15,10.70499);
   hmc__25->SetBinError(16,12.87727);
   hmc__25->SetBinError(17,11.87707);
   hmc__25->SetBinError(18,12.0753);
   hmc__25->SetBinError(19,11.5111);
   hmc__25->SetBinError(20,14.10287);
   hmc__25->SetBinError(21,13.18609);
   hmc__25->SetBinError(22,14.76553);
   hmc__25->SetBinError(23,11.78863);
   hmc__25->SetBinError(24,11.91184);
   hmc__25->SetBinError(25,10.753);
   hmc__25->SetBinError(26,22.25669);
   hmc__25->SetBinError(27,10.19348);
   hmc__25->SetBinError(28,10.12185);
   hmc__25->SetBinError(29,15.09274);
   hmc__25->SetBinError(30,13.03913);
   hmc__25->SetBinError(31,2.097188);
   hmc__25->SetBinError(32,0.3895343);
   hmc__25->SetBinError(33,0.3895343);
   hmc__25->SetMinimum(-0.6953352);
   hmc__25->SetMaximum(73.0102);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",32,0,1100);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(36.5051);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.121968);
   hbadmatch_stack_1->SetBinContent(3,1.529414);
   hbadmatch_stack_1->SetBinContent(4,1.256949);
   hbadmatch_stack_1->SetBinContent(5,0.8552974);
   hbadmatch_stack_1->SetBinContent(6,0.6262909);
   hbadmatch_stack_1->SetBinContent(7,0.536893);
   hbadmatch_stack_1->SetBinContent(8,1.01081);
   hbadmatch_stack_1->SetBinContent(9,1.932906);
   hbadmatch_stack_1->SetBinContent(10,0.9171755);
   hbadmatch_stack_1->SetBinContent(11,0.8317402);
   hbadmatch_stack_1->SetBinContent(12,0.9829878);
   hbadmatch_stack_1->SetBinContent(13,1.073786);
   hbadmatch_stack_1->SetBinContent(14,0.9255152);
   hbadmatch_stack_1->SetBinContent(16,0.7876176);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,1.59377);
   hbadmatch_stack_1->SetBinContent(21,0.9801958);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.610593);
   hbadmatch_stack_1->SetBinContent(25,0.3934307);
   hbadmatch_stack_1->SetBinContent(26,0.7336084);
   hbadmatch_stack_1->SetBinContent(27,0.6633613);
   hbadmatch_stack_1->SetBinContent(28,0.5352025);
   hbadmatch_stack_1->SetBinContent(29,0.3401776);
   hbadmatch_stack_1->SetBinContent(30,0.390963);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.5181909);
   hbadmatch_stack_1->SetBinError(3,0.6586514);
   hbadmatch_stack_1->SetBinError(4,0.634866);
   hbadmatch_stack_1->SetBinError(5,0.4291307);
   hbadmatch_stack_1->SetBinError(6,0.3629679);
   hbadmatch_stack_1->SetBinError(7,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.5420441);
   hbadmatch_stack_1->SetBinError(9,0.7689169);
   hbadmatch_stack_1->SetBinError(10,0.4641925);
   hbadmatch_stack_1->SetBinError(11,0.418066);
   hbadmatch_stack_1->SetBinError(12,0.5040296);
   hbadmatch_stack_1->SetBinError(13,0.5557297);
   hbadmatch_stack_1->SetBinError(14,0.5884926);
   hbadmatch_stack_1->SetBinError(16,0.4661336);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.7263803);
   hbadmatch_stack_1->SetBinError(21,0.4383608);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.3530271);
   hbadmatch_stack_1->SetBinError(25,0.2781975);
   hbadmatch_stack_1->SetBinError(26,0.4394482);
   hbadmatch_stack_1->SetBinError(27,0.384328);
   hbadmatch_stack_1->SetBinError(28,0.3921167);
   hbadmatch_stack_1->SetBinError(29,0.3401776);
   hbadmatch_stack_1->SetBinError(30,0.390963);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.379791);
   hext_stack_2->SetBinContent(2,4.125011);
   hext_stack_2->SetBinContent(3,3.856865);
   hext_stack_2->SetBinContent(4,3.394015);
   hext_stack_2->SetBinContent(5,5.083842);
   hext_stack_2->SetBinContent(6,4.919439);
   hext_stack_2->SetBinContent(7,4.054399);
   hext_stack_2->SetBinContent(8,6.512704);
   hext_stack_2->SetBinContent(9,4.143782);
   hext_stack_2->SetBinContent(10,1.697008);
   hext_stack_2->SetBinContent(11,3.532468);
   hext_stack_2->SetBinContent(12,1.868591);
   hext_stack_2->SetBinContent(13,2.110787);
   hext_stack_2->SetBinContent(14,2.25642);
   hext_stack_2->SetBinContent(15,3.215251);
   hext_stack_2->SetBinContent(16,2.021405);
   hext_stack_2->SetBinContent(17,3.297453);
   hext_stack_2->SetBinContent(18,1.219797);
   hext_stack_2->SetBinContent(19,1.219797);
   hext_stack_2->SetBinContent(20,4.841647);
   hext_stack_2->SetBinContent(21,9.105111);
   hext_stack_2->SetBinContent(22,1.048213);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,2.890854);
   hext_stack_2->SetBinContent(27,1.37261);
   hext_stack_2->SetBinContent(28,2.021405);
   hext_stack_2->SetBinContent(29,1.379791);
   hext_stack_2->SetBinContent(30,1.379791);
   hext_stack_2->SetBinError(1,0.6935586);
   hext_stack_2->SetBinError(2,1.358482);
   hext_stack_2->SetBinError(3,1.506257);
   hext_stack_2->SetBinError(4,1.254957);
   hext_stack_2->SetBinError(5,1.601118);
   hext_stack_2->SetBinError(6,1.563138);
   hext_stack_2->SetBinError(7,1.311223);
   hext_stack_2->SetBinError(8,1.942775);
   hext_stack_2->SetBinError(9,1.256262);
   hext_stack_2->SetBinError(10,0.8873887);
   hext_stack_2->SetBinError(11,1.47091);
   hext_stack_2->SetBinError(12,0.840497);
   hext_stack_2->SetBinError(13,0.8669371);
   hext_stack_2->SetBinError(14,1.067257);
   hext_stack_2->SetBinError(15,1.36277);
   hext_stack_2->SetBinError(16,0.9448239);
   hext_stack_2->SetBinError(17,1.384641);
   hext_stack_2->SetBinError(18,0.7042499);
   hext_stack_2->SetBinError(19,0.7042499);
   hext_stack_2->SetBinError(20,1.586957);
   hext_stack_2->SetBinError(21,2.225436);
   hext_stack_2->SetBinError(22,0.7595995);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(24,1.406172);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.323597);
   hext_stack_2->SetBinError(27,0.8259691);
   hext_stack_2->SetBinError(28,0.9448239);
   hext_stack_2->SetBinError(29,0.6935586);
   hext_stack_2->SetBinError(30,0.6935586);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.8359687);
   hdirt_stack_3->SetBinContent(2,0.002351481);
   hdirt_stack_3->SetBinContent(3,0.2761429);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinContent(5,0.4049124);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.4008912);
   hdirt_stack_3->SetBinContent(12,0.2620035);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.691244);
   hdirt_stack_3->SetBinError(1,0.5163774);
   hdirt_stack_3->SetBinError(2,0.002351481);
   hdirt_stack_3->SetBinError(3,0.1952625);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetBinError(5,0.4049124);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.2968804);
   hdirt_stack_3->SetBinError(12,0.2620035);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(28,0.5027721);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,14.1754);
   houtFV_stack_4->SetBinContent(2,6.391863);
   houtFV_stack_4->SetBinContent(3,3.514436);
   houtFV_stack_4->SetBinContent(4,3.146433);
   houtFV_stack_4->SetBinContent(5,2.381133);
   houtFV_stack_4->SetBinContent(6,3.230893);
   houtFV_stack_4->SetBinContent(7,3.501039);
   houtFV_stack_4->SetBinContent(8,5.707573);
   houtFV_stack_4->SetBinContent(9,4.150395);
   houtFV_stack_4->SetBinContent(10,3.356038);
   houtFV_stack_4->SetBinContent(11,4.184477);
   houtFV_stack_4->SetBinContent(12,2.889025);
   houtFV_stack_4->SetBinContent(13,4.05302);
   houtFV_stack_4->SetBinContent(14,3.405744);
   houtFV_stack_4->SetBinContent(15,3.907867);
   houtFV_stack_4->SetBinContent(16,3.230893);
   houtFV_stack_4->SetBinContent(17,3.520952);
   houtFV_stack_4->SetBinContent(18,3.962811);
   houtFV_stack_4->SetBinContent(19,6.008527);
   houtFV_stack_4->SetBinContent(20,2.863458);
   houtFV_stack_4->SetBinContent(21,5.889562);
   houtFV_stack_4->SetBinContent(22,2.873673);
   houtFV_stack_4->SetBinContent(23,3.222135);
   houtFV_stack_4->SetBinContent(24,5.214185);
   houtFV_stack_4->SetBinContent(25,3.471094);
   houtFV_stack_4->SetBinContent(26,2.525038);
   houtFV_stack_4->SetBinContent(27,3.714533);
   houtFV_stack_4->SetBinContent(28,2.340906);
   houtFV_stack_4->SetBinContent(29,2.445722);
   houtFV_stack_4->SetBinContent(30,2.017434);
   houtFV_stack_4->SetBinError(1,1.975496);
   houtFV_stack_4->SetBinError(2,1.283697);
   houtFV_stack_4->SetBinError(3,0.940519);
   houtFV_stack_4->SetBinError(4,0.9041698);
   houtFV_stack_4->SetBinError(5,0.8200537);
   houtFV_stack_4->SetBinError(6,0.855484);
   houtFV_stack_4->SetBinError(7,0.880412);
   houtFV_stack_4->SetBinError(8,1.233615);
   houtFV_stack_4->SetBinError(9,1.010421);
   houtFV_stack_4->SetBinError(10,0.9611624);
   houtFV_stack_4->SetBinError(11,0.9867768);
   houtFV_stack_4->SetBinError(12,0.7845188);
   houtFV_stack_4->SetBinError(13,1.019635);
   houtFV_stack_4->SetBinError(14,0.9067586);
   houtFV_stack_4->SetBinError(15,0.9808007);
   houtFV_stack_4->SetBinError(16,0.855484);
   houtFV_stack_4->SetBinError(17,0.9010467);
   houtFV_stack_4->SetBinError(18,0.961408);
   houtFV_stack_4->SetBinError(19,1.316849);
   houtFV_stack_4->SetBinError(20,0.9076449);
   houtFV_stack_4->SetBinError(21,1.281118);
   houtFV_stack_4->SetBinError(22,0.8186237);
   houtFV_stack_4->SetBinError(23,0.8099644);
   houtFV_stack_4->SetBinError(24,1.089601);
   houtFV_stack_4->SetBinError(25,0.888741);
   houtFV_stack_4->SetBinError(26,0.9177767);
   houtFV_stack_4->SetBinError(27,0.9615599);
   houtFV_stack_4->SetBinError(28,0.8093475);
   houtFV_stack_4->SetBinError(29,0.7600838);
   houtFV_stack_4->SetBinError(30,0.7497981);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.7392);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.93242);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.281006);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.50047);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.852128);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.820483);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.084042);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.84475);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.238824);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.5493);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.634664);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.467264);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.917306);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.271796);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.503542);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.795575);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.192897);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.966224);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.732319);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.327596);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.920713);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.42001);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.439692);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.01512);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.662564);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.104724);
   hNCpi0inFVres_stack_7->SetBinContent(27,5.438532);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.963064);
   hNCpi0inFVres_stack_7->SetBinContent(29,8.858958);
   hNCpi0inFVres_stack_7->SetBinContent(30,7.75324);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7315064);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6269282);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6650371);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6379547);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7150033);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5695678);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6311047);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8648333);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6692183);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7808332);
   hNCpi0inFVres_stack_7->SetBinError(11,0.806578);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8036776);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6165468);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7795447);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6797017);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7306627);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5170958);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7564007);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8517962);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7805426);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7075704);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7017251);
   hNCpi0inFVres_stack_7->SetBinError(23,0.752402);
   hNCpi0inFVres_stack_7->SetBinError(24,0.58596);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8070604);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7238846);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7911088);
   hNCpi0inFVres_stack_7->SetBinError(28,0.7265233);
   hNCpi0inFVres_stack_7->SetBinError(29,1.014179);
   hNCpi0inFVres_stack_7->SetBinError(30,0.8848527);
   hNCpi0inFVres_stack_7->SetBinError(31,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.339208);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.757212);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.9339901);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6825538);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.06004);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6976678);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.212158);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9906222);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7949858);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.28324);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.421908);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.116504);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.268958);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.128458);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.367108);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.11584);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.04559);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.562408);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.05904);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.408458);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.864572);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.25534);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.14274);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.01769);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.004904);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.636562);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.17588);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.426488);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.489714);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3344153);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1982678);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3759641);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2285151);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3167831);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3642206);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2483746);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3841566);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3635961);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3597403);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3923435);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3130755);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4273996);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3780289);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3390387);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4337272);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2988711);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3972726);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3211561);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3831421);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3027526);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.3378888);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.3553864);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.5388434);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5331556);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,6.169353);
   hCCpi0inFV_stack_10->SetBinContent(2,4.833119);
   hCCpi0inFV_stack_10->SetBinContent(3,3.804742);
   hCCpi0inFV_stack_10->SetBinContent(4,3.58018);
   hCCpi0inFV_stack_10->SetBinContent(5,6.976806);
   hCCpi0inFV_stack_10->SetBinContent(6,4.200301);
   hCCpi0inFV_stack_10->SetBinContent(7,4.63248);
   hCCpi0inFV_stack_10->SetBinContent(8,3.95943);
   hCCpi0inFV_stack_10->SetBinContent(9,3.552726);
   hCCpi0inFV_stack_10->SetBinContent(10,5.51773);
   hCCpi0inFV_stack_10->SetBinContent(11,4.382205);
   hCCpi0inFV_stack_10->SetBinContent(12,2.980925);
   hCCpi0inFV_stack_10->SetBinContent(13,2.834081);
   hCCpi0inFV_stack_10->SetBinContent(14,4.520749);
   hCCpi0inFV_stack_10->SetBinContent(15,5.862216);
   hCCpi0inFV_stack_10->SetBinContent(16,3.514436);
   hCCpi0inFV_stack_10->SetBinContent(17,3.896642);
   hCCpi0inFV_stack_10->SetBinContent(18,4.487303);
   hCCpi0inFV_stack_10->SetBinContent(19,4.488478);
   hCCpi0inFV_stack_10->SetBinContent(20,4.639785);
   hCCpi0inFV_stack_10->SetBinContent(21,3.3381);
   hCCpi0inFV_stack_10->SetBinContent(22,5.482244);
   hCCpi0inFV_stack_10->SetBinContent(23,4.357932);
   hCCpi0inFV_stack_10->SetBinContent(24,2.249007);
   hCCpi0inFV_stack_10->SetBinContent(25,4.087294);
   hCCpi0inFV_stack_10->SetBinContent(26,3.473638);
   hCCpi0inFV_stack_10->SetBinContent(27,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(28,4.839881);
   hCCpi0inFV_stack_10->SetBinContent(29,6.500432);
   hCCpi0inFV_stack_10->SetBinContent(30,6.356448);
   hCCpi0inFV_stack_10->SetBinError(1,1.251503);
   hCCpi0inFV_stack_10->SetBinError(2,1.091694);
   hCCpi0inFV_stack_10->SetBinError(3,1.019779);
   hCCpi0inFV_stack_10->SetBinError(4,0.8715217);
   hCCpi0inFV_stack_10->SetBinError(5,1.347166);
   hCCpi0inFV_stack_10->SetBinError(6,1.029438);
   hCCpi0inFV_stack_10->SetBinError(7,1.036887);
   hCCpi0inFV_stack_10->SetBinError(8,0.9607189);
   hCCpi0inFV_stack_10->SetBinError(9,0.9489554);
   hCCpi0inFV_stack_10->SetBinError(10,1.161353);
   hCCpi0inFV_stack_10->SetBinError(11,1.036491);
   hCCpi0inFV_stack_10->SetBinError(12,0.8552677);
   hCCpi0inFV_stack_10->SetBinError(13,0.8081673);
   hCCpi0inFV_stack_10->SetBinError(14,1.118484);
   hCCpi0inFV_stack_10->SetBinError(15,1.211149);
   hCCpi0inFV_stack_10->SetBinError(16,0.940519);
   hCCpi0inFV_stack_10->SetBinError(17,1.075156);
   hCCpi0inFV_stack_10->SetBinError(18,1.131365);
   hCCpi0inFV_stack_10->SetBinError(19,1.128146);
   hCCpi0inFV_stack_10->SetBinError(20,1.074441);
   hCCpi0inFV_stack_10->SetBinError(21,0.8950227);
   hCCpi0inFV_stack_10->SetBinError(22,1.188869);
   hCCpi0inFV_stack_10->SetBinError(23,1.00118);
   hCCpi0inFV_stack_10->SetBinError(24,0.7341869);
   hCCpi0inFV_stack_10->SetBinError(25,1.020272);
   hCCpi0inFV_stack_10->SetBinError(26,0.9614103);
   hCCpi0inFV_stack_10->SetBinError(27,0.809167);
   hCCpi0inFV_stack_10->SetBinError(28,1.092906);
   hCCpi0inFV_stack_10->SetBinError(29,1.272024);
   hCCpi0inFV_stack_10->SetBinError(30,1.296838);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,1.662242);
   hNCinFV_stack_11->SetBinContent(2,1.807394);
   hNCinFV_stack_11->SetBinContent(3,2.090938);
   hNCinFV_stack_11->SetBinContent(4,1.320373);
   hNCinFV_stack_11->SetBinContent(5,0.785171);
   hNCinFV_stack_11->SetBinContent(6,1.121968);
   hNCinFV_stack_11->SetBinContent(7,1.127039);
   hNCinFV_stack_11->SetBinContent(8,0.5884556);
   hNCinFV_stack_11->SetBinContent(9,1.317452);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.9303237);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.9286332);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,1.413964);
   hNCinFV_stack_11->SetBinContent(17,0.5850745);
   hNCinFV_stack_11->SetBinContent(18,0.785171);
   hNCinFV_stack_11->SetBinContent(19,0.5867651);
   hNCinFV_stack_11->SetBinContent(20,0.3917402);
   hNCinFV_stack_11->SetBinContent(21,1.127039);
   hNCinFV_stack_11->SetBinContent(22,2.535931);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,1.320373);
   hNCinFV_stack_11->SetBinContent(25,0.785171);
   hNCinFV_stack_11->SetBinContent(26,1.957011);
   hNCinFV_stack_11->SetBinContent(27,1.072095);
   hNCinFV_stack_11->SetBinContent(28,1.857266);
   hNCinFV_stack_11->SetBinContent(29,2.48775);
   hNCinFV_stack_11->SetBinContent(30,4.05471);
   hNCinFV_stack_11->SetBinError(1,0.6513556);
   hNCinFV_stack_11->SetBinError(2,0.7084844);
   hNCinFV_stack_11->SetBinError(3,0.8091189);
   hNCinFV_stack_11->SetBinError(4,0.5548703);
   hNCinFV_stack_11->SetBinError(5,0.3925882);
   hNCinFV_stack_11->SetBinError(6,0.5181909);
   hNCinFV_stack_11->SetBinError(7,0.5201044);
   hNCinFV_stack_11->SetBinError(8,0.3397478);
   hNCinFV_stack_11->SetBinError(9,0.5913855);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.4814682);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.48078);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.6515799);
   hNCinFV_stack_11->SetBinError(17,0.337793);
   hNCinFV_stack_11->SetBinError(18,0.3925882);
   hNCinFV_stack_11->SetBinError(19,0.3387718);
   hNCinFV_stack_11->SetBinError(20,0.2770047);
   hNCinFV_stack_11->SetBinError(21,0.5201044);
   hNCinFV_stack_11->SetBinError(22,0.8325131);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.5548703);
   hNCinFV_stack_11->SetBinError(25,0.3925882);
   hNCinFV_stack_11->SetBinError(26,0.6188666);
   hNCinFV_stack_11->SetBinError(27,0.5551335);
   hNCinFV_stack_11->SetBinError(28,0.6799255);
   hNCinFV_stack_11->SetBinError(29,0.856383);
   hNCinFV_stack_11->SetBinError(30,1.01996);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,4.242675);
   hnumuCCinFV_stack_12->SetBinContent(2,3.940813);
   hnumuCCinFV_stack_12->SetBinContent(3,3.940535);
   hnumuCCinFV_stack_12->SetBinContent(4,5.881898);
   hnumuCCinFV_stack_12->SetBinContent(5,2.199373);
   hnumuCCinFV_stack_12->SetBinContent(6,4.827813);
   hnumuCCinFV_stack_12->SetBinContent(7,5.052774);
   hnumuCCinFV_stack_12->SetBinContent(8,5.598602);
   hnumuCCinFV_stack_12->SetBinContent(9,4.664286);
   hnumuCCinFV_stack_12->SetBinContent(10,2.57971);
   hnumuCCinFV_stack_12->SetBinContent(11,3.896896);
   hnumuCCinFV_stack_12->SetBinContent(12,3.722491);
   hnumuCCinFV_stack_12->SetBinContent(13,3.179741);
   hnumuCCinFV_stack_12->SetBinContent(14,2.724508);
   hnumuCCinFV_stack_12->SetBinContent(15,3.66178);
   hnumuCCinFV_stack_12->SetBinContent(16,4.507139);
   hnumuCCinFV_stack_12->SetBinContent(17,4.05898);
   hnumuCCinFV_stack_12->SetBinContent(18,2.419262);
   hnumuCCinFV_stack_12->SetBinContent(19,1.685834);
   hnumuCCinFV_stack_12->SetBinContent(20,4.008075);
   hnumuCCinFV_stack_12->SetBinContent(21,4.438735);
   hnumuCCinFV_stack_12->SetBinContent(22,3.913019);
   hnumuCCinFV_stack_12->SetBinContent(23,5.657578);
   hnumuCCinFV_stack_12->SetBinContent(24,2.307752);
   hnumuCCinFV_stack_12->SetBinContent(25,3.160902);
   hnumuCCinFV_stack_12->SetBinContent(26,4.294519);
   hnumuCCinFV_stack_12->SetBinContent(27,2.007544);
   hnumuCCinFV_stack_12->SetBinContent(28,4.029692);
   hnumuCCinFV_stack_12->SetBinContent(29,6.365871);
   hnumuCCinFV_stack_12->SetBinContent(30,2.958148);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,1.164384);
   hnumuCCinFV_stack_12->SetBinError(2,1.640349);
   hnumuCCinFV_stack_12->SetBinError(3,1.277739);
   hnumuCCinFV_stack_12->SetBinError(4,1.328651);
   hnumuCCinFV_stack_12->SetBinError(5,0.8080887);
   hnumuCCinFV_stack_12->SetBinError(6,1.281409);
   hnumuCCinFV_stack_12->SetBinError(7,1.205256);
   hnumuCCinFV_stack_12->SetBinError(8,1.33634);
   hnumuCCinFV_stack_12->SetBinError(9,1.26735);
   hnumuCCinFV_stack_12->SetBinError(10,0.7948682);
   hnumuCCinFV_stack_12->SetBinError(11,1.001679);
   hnumuCCinFV_stack_12->SetBinError(12,0.9760621);
   hnumuCCinFV_stack_12->SetBinError(13,1.000845);
   hnumuCCinFV_stack_12->SetBinError(14,0.7987962);
   hnumuCCinFV_stack_12->SetBinError(15,0.9792943);
   hnumuCCinFV_stack_12->SetBinError(16,1.333688);
   hnumuCCinFV_stack_12->SetBinError(17,1.206843);
   hnumuCCinFV_stack_12->SetBinError(18,0.8534524);
   hnumuCCinFV_stack_12->SetBinError(19,0.6276995);
   hnumuCCinFV_stack_12->SetBinError(20,1.438664);
   hnumuCCinFV_stack_12->SetBinError(21,1.138148);
   hnumuCCinFV_stack_12->SetBinError(22,1.029051);
   hnumuCCinFV_stack_12->SetBinError(23,1.552378);
   hnumuCCinFV_stack_12->SetBinError(24,0.7950501);
   hnumuCCinFV_stack_12->SetBinError(25,0.9706087);
   hnumuCCinFV_stack_12->SetBinError(26,1.110225);
   hnumuCCinFV_stack_12->SetBinError(27,0.6939813);
   hnumuCCinFV_stack_12->SetBinError(28,1.060403);
   hnumuCCinFV_stack_12->SetBinError(29,1.600691);
   hnumuCCinFV_stack_12->SetBinError(30,0.8253356);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(16,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(25,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,1.569686);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(16,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1711909);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4041031);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(25,0.3921167);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1529246);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,1.569686);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__26->SetBinContent(1,34.76676);
   hmcerror__26->SetBinContent(2,27.81483);
   hmcerror__26->SetBinContent(3,24.27002);
   hmcerror__26->SetBinContent(4,24.17572);
   hmcerror__26->SetBinContent(5,24.66768);
   hmcerror__26->SetBinContent(6,23.69303);
   hmcerror__26->SetBinContent(7,24.18678);
   hmcerror__26->SetBinContent(8,30.85653);
   hmcerror__26->SetBinContent(9,25.32413);
   hmcerror__26->SetBinContent(10,21.00356);
   hmcerror__26->SetBinContent(11,24.24356);
   hmcerror__26->SetBinContent(12,19.88854);
   hmcerror__26->SetBinContent(13,19.23968);
   hmcerror__26->SetBinContent(14,21.90767);
   hmcerror__26->SetBinContent(15,23.05532);
   hmcerror__26->SetBinContent(16,23.78112);
   hmcerror__26->SetBinContent(17,20.63329);
   hmcerror__26->SetBinContent(18,20.72926);
   hmcerror__26->SetBinContent(19,21.60144);
   hmcerror__26->SetBinContent(20,24.99083);
   hmcerror__26->SetBinContent(21,32.17078);
   hmcerror__26->SetBinContent(22,22.60347);
   hmcerror__26->SetBinContent(23,21.99963);
   hmcerror__26->SetBinContent(24,20.23416);
   hmcerror__26->SetBinContent(25,19.7855);
   hmcerror__26->SetBinContent(26,22.34675);
   hmcerror__26->SetBinContent(27,18.05638);
   hmcerror__26->SetBinContent(28,22.50818);
   hmcerror__26->SetBinContent(29,32.73807);
   hmcerror__26->SetBinContent(30,27.11451);
   hmcerror__26->SetBinContent(31,0.670465);
   hmcerror__26->SetBinError(1,26.13242);
   hmcerror__26->SetBinError(2,13.29139);
   hmcerror__26->SetBinError(3,20.04369);
   hmcerror__26->SetBinError(4,11.0199);
   hmcerror__26->SetBinError(5,12.96302);
   hmcerror__26->SetBinError(6,10.36475);
   hmcerror__26->SetBinError(7,11.1021);
   hmcerror__26->SetBinError(8,15.84908);
   hmcerror__26->SetBinError(9,15.15489);
   hmcerror__26->SetBinError(10,10.50382);
   hmcerror__26->SetBinError(11,15.13626);
   hmcerror__26->SetBinError(12,9.014269);
   hmcerror__26->SetBinError(13,15.18806);
   hmcerror__26->SetBinError(14,11.43211);
   hmcerror__26->SetBinError(15,10.70499);
   hmcerror__26->SetBinError(16,12.87727);
   hmcerror__26->SetBinError(17,11.87707);
   hmcerror__26->SetBinError(18,12.0753);
   hmcerror__26->SetBinError(19,11.5111);
   hmcerror__26->SetBinError(20,14.10287);
   hmcerror__26->SetBinError(21,13.18609);
   hmcerror__26->SetBinError(22,14.76553);
   hmcerror__26->SetBinError(23,11.78863);
   hmcerror__26->SetBinError(24,11.91184);
   hmcerror__26->SetBinError(25,10.753);
   hmcerror__26->SetBinError(26,22.25669);
   hmcerror__26->SetBinError(27,10.19348);
   hmcerror__26->SetBinError(28,10.12185);
   hmcerror__26->SetBinError(29,15.09274);
   hmcerror__26->SetBinError(30,13.03913);
   hmcerror__26->SetBinError(31,2.097188);
   hmcerror__26->SetBinError(32,0.3895343);
   hmcerror__26->SetBinError(33,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3033[32] = {
   23,
   18,
   16,
   19,
   20,
   19,
   25,
   27,
   19,
   19,
   19,
   17,
   14,
   20,
   20,
   20,
   13,
   12,
   17,
   15,
   27,
   20,
   21,
   15,
   22,
   20,
   25,
   21,
   27,
   15,
   0,
   0};
   Double_t _felx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3033[32] = {
   4.9457,
   4.4008,
   4.1628,
   4.5151,
   4.6266,
   4.5151,
   5.1474,
   5.3414,
   4.5151,
   4.5151,
   4.5151,
   4.2835,
   3.9102,
   4.6266,
   4.6266,
   4.6266,
   3.77763,
   3.64022,
   4.2835,
   4.0385,
   5.3414,
   4.6266,
   4.7354,
   4.0385,
   4.8417,
   4.6266,
   5.1474,
   4.7354,
   5.3414,
   4.0385,
   0,
   0};
   Double_t _fehx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3033[32] = {
   4.7346,
   4.1858,
   3.9454,
   4.3011,
   4.4133,
   4.3011,
   4.9374,
   5.1322,
   4.3011,
   4.3011,
   4.3011,
   4.0673,
   3.6898,
   4.4133,
   4.4133,
   4.4133,
   3.5552,
   3.4155,
   4.0673,
   3.8197,
   5.1322,
   4.4133,
   4.5229,
   3.8197,
   4.6299,
   4.4133,
   4.9374,
   4.5229,
   5.1322,
   3.8197,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1210);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(35.34542);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3034[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3034[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3034[32] = {
   0.7516496,
   0.4778526,
   0.825862,
   0.4558253,
   0.5255065,
   0.4374597,
   0.4590155,
   0.5136378,
   0.5984369,
   0.5000973,
   0.6243415,
   0.4532395,
   0.7894134,
   0.5218315,
   0.4643174,
   0.5414915,
   0.5756266,
   0.5825246,
   0.5328859,
   0.5643219,
   0.4098779,
   0.6532419,
   0.5358559,
   0.5886995,
   0.5434791,
   0.9959701,
   0.5645365,
   0.4496965,
   0.4610149,
   0.4808913,
   3.12796,
   0};
   Double_t _fehx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3034[32] = {
   0.7516496,
   0.4778526,
   0.825862,
   0.4558253,
   0.5255065,
   0.4374597,
   0.4590155,
   0.5136378,
   0.5984369,
   0.5000973,
   0.6243415,
   0.4532395,
   0.7894134,
   0.5218315,
   0.4643174,
   0.5414915,
   0.5756266,
   0.5825246,
   0.5328859,
   0.5643219,
   0.4098779,
   0.6532419,
   0.5358559,
   0.5886995,
   0.5434791,
   0.9959701,
   0.5645365,
   0.4496965,
   0.4610149,
   0.4808913,
   3.12796,
   0};
   grae = new TGraphAsymmErrors(32,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1210);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3035[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3035[32] = {
   0.245083,
   0.2518529,
   0.2420762,
   0.2485972,
   0.2253312,
   0.238743,
   0.235931,
   0.2292107,
   0.2229902,
   0.2968706,
   0.2500986,
   0.2794922,
   0.2818881,
   0.246454,
   0.2582543,
   0.3142108,
   0.2756018,
   0.2801837,
   0.2943851,
   0.2483214,
   0.2002953,
   0.2671932,
   0.2840597,
   0.2547409,
   0.2807787,
   0.2740204,
   0.3110172,
   0.2727724,
   0.286536,
   0.2788919,
   0.8256912,
   0};
   Double_t _fehx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3035[32] = {
   0.245083,
   0.2518529,
   0.2420762,
   0.2485972,
   0.2253312,
   0.238743,
   0.235931,
   0.2292107,
   0.2229902,
   0.2968706,
   0.2500986,
   0.2794922,
   0.2818881,
   0.246454,
   0.2582543,
   0.3142108,
   0.2756018,
   0.2801837,
   0.2943851,
   0.2483214,
   0.2002953,
   0.2671932,
   0.2840597,
   0.2547409,
   0.2807787,
   0.2740204,
   0.3110172,
   0.2727724,
   0.286536,
   0.2788919,
   0.8256912,
   0};
   grae = new TGraphAsymmErrors(32,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1210);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3036[32] = {
   0.6615514,
   0.6471367,
   0.6592495,
   0.7859125,
   0.8107775,
   0.8019236,
   1.033623,
   0.8750173,
   0.7502726,
   0.9046084,
   0.7837133,
   0.8547637,
   0.7276629,
   0.9129223,
   0.8674787,
   0.8410033,
   0.6300498,
   0.5788919,
   0.7869844,
   0.6002201,
   0.8392709,
   0.8848201,
   0.9545614,
   0.7413207,
   1.111926,
   0.8949849,
   1.384553,
   0.932994,
   0.824728,
   0.5532093,
   0,
   10};
   Double_t _felx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3036[32] = {
   0.1422537,
   0.1582177,
   0.1715202,
   0.1867618,
   0.1875572,
   0.1905666,
   0.2128188,
   0.1731044,
   0.1782924,
   0.2149683,
   0.1862392,
   0.2153753,
   0.2032362,
   0.2111863,
   0.2006739,
   0.1945493,
   0.1830842,
   0.1756078,
   0.1982969,
   0.1615993,
   0.1660327,
   0.2046854,
   0.2152491,
   0.1995882,
   0.2447095,
   0.2070369,
   0.2850738,
   0.2103857,
   0.1631556,
   0.1489424,
   0,
   0};
   Double_t _fehx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3036[32] = {
   0.1361818,
   0.150488,
   0.1625627,
   0.1779099,
   0.1789102,
   0.1815344,
   0.2041363,
   0.1663246,
   0.169842,
   0.2047795,
   0.1774121,
   0.2045047,
   0.1917807,
   0.20145,
   0.1914222,
   0.18558,
   0.1723041,
   0.1647671,
   0.1882883,
   0.1528441,
   0.1595299,
   0.1952488,
   0.2055898,
   0.1887748,
   0.2340047,
   0.1974918,
   0.2734436,
   0.2009447,
   0.1567655,
   0.1408729,
   1.711946,
   0};
   grae = new TGraphAsymmErrors(32,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1210);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,1100,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
