#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Mar 13 18:29:33 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-170,-2.57438,163.3333,284.6722);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__13->SetBinContent(2,23.06796);
   hmc__13->SetBinContent(3,50.85096);
   hmc__13->SetBinContent(4,81.2016);
   hmc__13->SetBinContent(5,99.5798);
   hmc__13->SetBinContent(6,106.7706);
   hmc__13->SetBinContent(7,124.415);
   hmc__13->SetBinContent(8,124.1271);
   hmc__13->SetBinContent(9,114.9487);
   hmc__13->SetBinContent(10,120.8857);
   hmc__13->SetBinContent(11,123.1349);
   hmc__13->SetBinContent(12,128.719);
   hmc__13->SetBinContent(13,125.3917);
   hmc__13->SetBinContent(14,124.6402);
   hmc__13->SetBinContent(15,118.9065);
   hmc__13->SetBinContent(16,120.9296);
   hmc__13->SetBinContent(17,117.7105);
   hmc__13->SetBinContent(18,123.012);
   hmc__13->SetBinContent(19,121.9656);
   hmc__13->SetBinContent(20,116.1181);
   hmc__13->SetBinContent(21,111.1641);
   hmc__13->SetBinContent(22,108.1534);
   hmc__13->SetBinContent(23,102.1175);
   hmc__13->SetBinContent(24,68.47239);
   hmc__13->SetBinContent(25,40.75933);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,13.51296);
   hmc__13->SetBinError(3,21.30823);
   hmc__13->SetBinError(4,27.56123);
   hmc__13->SetBinError(5,31.66487);
   hmc__13->SetBinError(6,34.84215);
   hmc__13->SetBinError(7,34.67787);
   hmc__13->SetBinError(8,35.2371);
   hmc__13->SetBinError(9,32.61522);
   hmc__13->SetBinError(10,33.27609);
   hmc__13->SetBinError(11,36.69942);
   hmc__13->SetBinError(12,37.00451);
   hmc__13->SetBinError(13,34.41636);
   hmc__13->SetBinError(14,35.04936);
   hmc__13->SetBinError(15,30.96898);
   hmc__13->SetBinError(16,32.12859);
   hmc__13->SetBinError(17,31.73462);
   hmc__13->SetBinError(18,35.93889);
   hmc__13->SetBinError(19,33.46968);
   hmc__13->SetBinError(20,32.11417);
   hmc__13->SetBinError(21,28.6103);
   hmc__13->SetBinError(22,26.5325);
   hmc__13->SetBinError(23,30.65741);
   hmc__13->SetBinError(24,22.77801);
   hmc__13->SetBinError(25,15.82396);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetBinError(27,0.3895343);
   hmc__13->SetMinimum(-2.57438);
   hmc__13->SetMaximum(270.3099);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",26,-130,130);
   hs5_stack_5->SetMinimum(-1.244044e-08);
   hs5_stack_5->SetMaximum(135.1549);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.526568);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,1.127039);
   hbadmatch_stack_1->SetBinContent(5,1.467217);
   hbadmatch_stack_1->SetBinContent(6,1.767057);
   hbadmatch_stack_1->SetBinContent(7,2.582242);
   hbadmatch_stack_1->SetBinContent(8,2.910248);
   hbadmatch_stack_1->SetBinContent(9,2.826938);
   hbadmatch_stack_1->SetBinContent(10,2.8256);
   hbadmatch_stack_1->SetBinContent(11,3.105551);
   hbadmatch_stack_1->SetBinContent(12,4.109121);
   hbadmatch_stack_1->SetBinContent(13,2.882013);
   hbadmatch_stack_1->SetBinContent(14,4.030202);
   hbadmatch_stack_1->SetBinContent(15,3.133062);
   hbadmatch_stack_1->SetBinContent(16,2.65433);
   hbadmatch_stack_1->SetBinContent(17,1.710423);
   hbadmatch_stack_1->SetBinContent(18,2.619823);
   hbadmatch_stack_1->SetBinContent(19,3.359829);
   hbadmatch_stack_1->SetBinContent(20,2.640989);
   hbadmatch_stack_1->SetBinContent(21,2.145881);
   hbadmatch_stack_1->SetBinContent(22,1.376642);
   hbadmatch_stack_1->SetBinContent(23,5.282034);
   hbadmatch_stack_1->SetBinContent(24,0.821188);
   hbadmatch_stack_1->SetBinContent(25,1.012496);
   hbadmatch_stack_1->SetBinError(2,0.6569024);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,0.5201044);
   hbadmatch_stack_1->SetBinError(5,0.6214735);
   hbadmatch_stack_1->SetBinError(6,0.5890229);
   hbadmatch_stack_1->SetBinError(7,0.8517356);
   hbadmatch_stack_1->SetBinError(8,0.8279711);
   hbadmatch_stack_1->SetBinError(9,0.87936);
   hbadmatch_stack_1->SetBinError(10,0.8429968);
   hbadmatch_stack_1->SetBinError(11,0.9280797);
   hbadmatch_stack_1->SetBinError(12,1.07593);
   hbadmatch_stack_1->SetBinError(13,0.8637154);
   hbadmatch_stack_1->SetBinError(14,1.084188);
   hbadmatch_stack_1->SetBinError(15,0.9127252);
   hbadmatch_stack_1->SetBinError(16,0.7856148);
   hbadmatch_stack_1->SetBinError(17,0.6196373);
   hbadmatch_stack_1->SetBinError(18,0.8625612);
   hbadmatch_stack_1->SetBinError(19,1.009407);
   hbadmatch_stack_1->SetBinError(20,0.8910215);
   hbadmatch_stack_1->SetBinError(21,0.785499);
   hbadmatch_stack_1->SetBinError(22,0.6447546);
   hbadmatch_stack_1->SetBinError(23,1.621416);
   hbadmatch_stack_1->SetBinError(24,0.4116688);
   hbadmatch_stack_1->SetBinError(25,0.5163078);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,0.8131978);
   hext_stack_2->SetBinContent(5,3.15182);
   hext_stack_2->SetBinContent(6,1.055394);
   hext_stack_2->SetBinContent(7,2.599588);
   hext_stack_2->SetBinContent(8,2.905215);
   hext_stack_2->SetBinContent(9,3.241202);
   hext_stack_2->SetBinContent(10,6.381432);
   hext_stack_2->SetBinContent(11,6.318);
   hext_stack_2->SetBinContent(12,4.136601);
   hext_stack_2->SetBinContent(13,5.669206);
   hext_stack_2->SetBinContent(14,4.374388);
   hext_stack_2->SetBinContent(15,4.696014);
   hext_stack_2->SetBinContent(16,7.61559);
   hext_stack_2->SetBinContent(17,6.724599);
   hext_stack_2->SetBinContent(18,5.027592);
   hext_stack_2->SetBinContent(19,8.172231);
   hext_stack_2->SetBinContent(20,10.14457);
   hext_stack_2->SetBinContent(21,10.37958);
   hext_stack_2->SetBinContent(22,11.56902);
   hext_stack_2->SetBinContent(23,12.85666);
   hext_stack_2->SetBinContent(24,6.966795);
   hext_stack_2->SetBinContent(25,5.579823);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.5750177);
   hext_stack_2->SetBinError(5,1.23684);
   hext_stack_2->SetBinError(6,0.6130171);
   hext_stack_2->SetBinError(7,0.9884288);
   hext_stack_2->SetBinError(8,1.161682);
   hext_stack_2->SetBinError(9,1.178414);
   hext_stack_2->SetBinError(10,1.727574);
   hext_stack_2->SetBinError(11,1.630074);
   hext_stack_2->SetBinError(12,1.33394);
   hext_stack_2->SetBinError(13,1.564185);
   hext_stack_2->SetBinError(14,1.299776);
   hext_stack_2->SetBinError(15,1.459786);
   hext_stack_2->SetBinError(16,1.754445);
   hext_stack_2->SetBinError(17,1.680019);
   hext_stack_2->SetBinError(18,1.426537);
   hext_stack_2->SetBinError(19,1.940613);
   hext_stack_2->SetBinError(20,1.982145);
   hext_stack_2->SetBinError(21,2.043342);
   hext_stack_2->SetBinError(22,2.237091);
   hext_stack_2->SetBinError(23,2.441932);
   hext_stack_2->SetBinError(24,1.693402);
   hext_stack_2->SetBinError(25,1.60866);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.2212471);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.4794168);
   hdirt_stack_3->SetBinContent(10,0.7943197);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,1.155067);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.427289);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(17,0.8332258);
   hdirt_stack_3->SetBinContent(18,0.3635739);
   hdirt_stack_3->SetBinContent(19,0.4007975);
   hdirt_stack_3->SetBinContent(21,0.89118);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,0.7868363);
   hdirt_stack_3->SetBinContent(24,0.470507);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.2189082);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(9,0.3402743);
   hdirt_stack_3->SetBinError(10,0.407894);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.5327083);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4247414);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(17,0.4476755);
   hdirt_stack_3->SetBinError(18,0.2623873);
   hdirt_stack_3->SetBinError(19,0.4007975);
   hdirt_stack_3->SetBinError(21,0.5528056);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.4053435);
   hdirt_stack_3->SetBinError(24,0.333502);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(2,15.98963);
   houtFV_stack_4->SetBinContent(3,10.74685);
   houtFV_stack_4->SetBinContent(4,5.6897);
   houtFV_stack_4->SetBinContent(5,3.469636);
   houtFV_stack_4->SetBinContent(6,2.559349);
   houtFV_stack_4->SetBinContent(7,3.613539);
   houtFV_stack_4->SetBinContent(8,3.248142);
   houtFV_stack_4->SetBinContent(9,4.89221);
   houtFV_stack_4->SetBinContent(10,4.203291);
   houtFV_stack_4->SetBinContent(11,4.728595);
   houtFV_stack_4->SetBinContent(12,3.748892);
   houtFV_stack_4->SetBinContent(13,1.515398);
   houtFV_stack_4->SetBinContent(14,4.773527);
   houtFV_stack_4->SetBinContent(15,3.653215);
   houtFV_stack_4->SetBinContent(16,4.480738);
   houtFV_stack_4->SetBinContent(17,2.969589);
   houtFV_stack_4->SetBinContent(18,3.480861);
   houtFV_stack_4->SetBinContent(19,3.057736);
   houtFV_stack_4->SetBinContent(20,3.024022);
   houtFV_stack_4->SetBinContent(21,4.426574);
   houtFV_stack_4->SetBinContent(22,3.570527);
   houtFV_stack_4->SetBinContent(23,2.891468);
   houtFV_stack_4->SetBinContent(24,9.285863);
   houtFV_stack_4->SetBinContent(25,24.96079);
   houtFV_stack_4->SetBinError(2,1.94223);
   houtFV_stack_4->SetBinError(3,1.618107);
   houtFV_stack_4->SetBinError(4,1.173776);
   houtFV_stack_4->SetBinError(5,0.9624002);
   houtFV_stack_4->SetBinError(6,0.7517966);
   houtFV_stack_4->SetBinError(7,0.9305033);
   houtFV_stack_4->SetBinError(8,0.8963157);
   houtFV_stack_4->SetBinError(9,1.2143);
   houtFV_stack_4->SetBinError(10,1.037665);
   houtFV_stack_4->SetBinError(11,1.126548);
   houtFV_stack_4->SetBinError(12,0.9693016);
   houtFV_stack_4->SetBinError(13,0.588146);
   houtFV_stack_4->SetBinError(14,1.156553);
   houtFV_stack_4->SetBinError(15,0.9692835);
   houtFV_stack_4->SetBinError(16,1.063767);
   houtFV_stack_4->SetBinError(17,0.8876467);
   houtFV_stack_4->SetBinError(18,0.8557002);
   houtFV_stack_4->SetBinError(19,0.85871);
   houtFV_stack_4->SetBinError(20,0.9181667);
   houtFV_stack_4->SetBinError(21,1.015658);
   houtFV_stack_4->SetBinError(22,1.04035);
   houtFV_stack_4->SetBinError(23,0.8237858);
   houtFV_stack_4->SetBinError(24,1.566068);
   houtFV_stack_4->SetBinError(25,2.486782);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8222219);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.682722);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7250721);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2756104);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2684567);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3150384);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08369995);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.580762);
   hNCpi0inFVres_stack_7->SetBinContent(3,17.55349);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.13797);
   hNCpi0inFVres_stack_7->SetBinContent(5,47.50942);
   hNCpi0inFVres_stack_7->SetBinContent(6,47.74356);
   hNCpi0inFVres_stack_7->SetBinContent(7,59.08282);
   hNCpi0inFVres_stack_7->SetBinContent(8,59.73931);
   hNCpi0inFVres_stack_7->SetBinContent(9,51.27077);
   hNCpi0inFVres_stack_7->SetBinContent(10,50.51579);
   hNCpi0inFVres_stack_7->SetBinContent(11,56.63239);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.79343);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.32061);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.17629);
   hNCpi0inFVres_stack_7->SetBinContent(15,52.86108);
   hNCpi0inFVres_stack_7->SetBinContent(16,49.9721);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.08787);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.40781);
   hNCpi0inFVres_stack_7->SetBinContent(19,49.92524);
   hNCpi0inFVres_stack_7->SetBinContent(20,54.17623);
   hNCpi0inFVres_stack_7->SetBinContent(21,42.44087);
   hNCpi0inFVres_stack_7->SetBinContent(22,44.84396);
   hNCpi0inFVres_stack_7->SetBinContent(23,38.89876);
   hNCpi0inFVres_stack_7->SetBinContent(24,24.80953);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.939222);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5373969);
   hNCpi0inFVres_stack_7->SetBinError(3,1.357159);
   hNCpi0inFVres_stack_7->SetBinError(4,2.039694);
   hNCpi0inFVres_stack_7->SetBinError(5,2.297285);
   hNCpi0inFVres_stack_7->SetBinError(6,2.216138);
   hNCpi0inFVres_stack_7->SetBinError(7,2.570687);
   hNCpi0inFVres_stack_7->SetBinError(8,2.59196);
   hNCpi0inFVres_stack_7->SetBinError(9,2.319219);
   hNCpi0inFVres_stack_7->SetBinError(10,2.242804);
   hNCpi0inFVres_stack_7->SetBinError(11,2.412995);
   hNCpi0inFVres_stack_7->SetBinError(12,2.502094);
   hNCpi0inFVres_stack_7->SetBinError(13,2.431007);
   hNCpi0inFVres_stack_7->SetBinError(14,2.413102);
   hNCpi0inFVres_stack_7->SetBinError(15,2.390022);
   hNCpi0inFVres_stack_7->SetBinError(16,2.31838);
   hNCpi0inFVres_stack_7->SetBinError(17,2.312686);
   hNCpi0inFVres_stack_7->SetBinError(18,2.345905);
   hNCpi0inFVres_stack_7->SetBinError(19,2.260149);
   hNCpi0inFVres_stack_7->SetBinError(20,2.463465);
   hNCpi0inFVres_stack_7->SetBinError(21,2.071534);
   hNCpi0inFVres_stack_7->SetBinError(22,2.221343);
   hNCpi0inFVres_stack_7->SetBinError(23,2.121154);
   hNCpi0inFVres_stack_7->SetBinError(24,1.69439);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3989017);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5151539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.927852);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.321458);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.681494);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.45482);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.36682);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.759392);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.27041);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.270137);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.006747);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.6248);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.38864);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.41371);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.03018);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.562923);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.978352);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.31673);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.79883);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.750079);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.589584);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.846069);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.880875);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.543812);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.795154);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1861173);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5764177);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9108625);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.865582);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.026638);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.159037);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.018582);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.181788);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9484712);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.926537);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.076994);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.064453);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.005248);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.123714);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9732811);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9507598);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.032749);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.947582);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8594524);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.982007);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.880406);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.003117);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5845195);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3073253);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,1.513708);
   hCCpi0inFV_stack_10->SetBinContent(3,9.032167);
   hCCpi0inFV_stack_10->SetBinContent(4,12.08576);
   hCCpi0inFV_stack_10->SetBinContent(5,13.90372);
   hCCpi0inFV_stack_10->SetBinContent(6,16.62464);
   hCCpi0inFV_stack_10->SetBinContent(7,18.57857);
   hCCpi0inFV_stack_10->SetBinContent(8,19.842);
   hCCpi0inFV_stack_10->SetBinContent(9,14.4176);
   hCCpi0inFV_stack_10->SetBinContent(10,17.30307);
   hCCpi0inFV_stack_10->SetBinContent(11,18.45211);
   hCCpi0inFV_stack_10->SetBinContent(12,21.24708);
   hCCpi0inFV_stack_10->SetBinContent(13,20.50336);
   hCCpi0inFV_stack_10->SetBinContent(14,17.66989);
   hCCpi0inFV_stack_10->SetBinContent(15,15.49923);
   hCCpi0inFV_stack_10->SetBinContent(16,19.9911);
   hCCpi0inFV_stack_10->SetBinContent(17,18.04711);
   hCCpi0inFV_stack_10->SetBinContent(18,19.52308);
   hCCpi0inFV_stack_10->SetBinContent(19,20.80416);
   hCCpi0inFV_stack_10->SetBinContent(20,15.24311);
   hCCpi0inFV_stack_10->SetBinContent(21,13.57547);
   hCCpi0inFV_stack_10->SetBinContent(22,15.20847);
   hCCpi0inFV_stack_10->SetBinContent(23,15.49483);
   hCCpi0inFV_stack_10->SetBinContent(24,9.799816);
   hCCpi0inFV_stack_10->SetBinContent(25,2.694);
   hCCpi0inFV_stack_10->SetBinError(2,0.5875827);
   hCCpi0inFV_stack_10->SetBinError(3,1.500634);
   hCCpi0inFV_stack_10->SetBinError(4,1.75874);
   hCCpi0inFV_stack_10->SetBinError(5,1.927733);
   hCCpi0inFV_stack_10->SetBinError(6,2.02649);
   hCCpi0inFV_stack_10->SetBinError(7,2.165038);
   hCCpi0inFV_stack_10->SetBinError(8,2.200093);
   hCCpi0inFV_stack_10->SetBinError(9,1.861006);
   hCCpi0inFV_stack_10->SetBinError(10,2.082566);
   hCCpi0inFV_stack_10->SetBinError(11,2.18079);
   hCCpi0inFV_stack_10->SetBinError(12,2.381057);
   hCCpi0inFV_stack_10->SetBinError(13,2.280918);
   hCCpi0inFV_stack_10->SetBinError(14,2.102345);
   hCCpi0inFV_stack_10->SetBinError(15,1.89126);
   hCCpi0inFV_stack_10->SetBinError(16,2.297239);
   hCCpi0inFV_stack_10->SetBinError(17,2.194014);
   hCCpi0inFV_stack_10->SetBinError(18,2.20539);
   hCCpi0inFV_stack_10->SetBinError(19,2.32982);
   hCCpi0inFV_stack_10->SetBinError(20,1.942285);
   hCCpi0inFV_stack_10->SetBinError(21,1.858613);
   hCCpi0inFV_stack_10->SetBinError(22,2.00435);
   hCCpi0inFV_stack_10->SetBinError(23,1.922733);
   hCCpi0inFV_stack_10->SetBinError(24,1.636287);
   hCCpi0inFV_stack_10->SetBinError(25,0.7598915);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(3,3.96112);
   hNCinFV_stack_11->SetBinContent(4,6.000495);
   hNCinFV_stack_11->SetBinContent(5,7.730597);
   hNCinFV_stack_11->SetBinContent(6,8.59137);
   hNCinFV_stack_11->SetBinContent(7,11.62555);
   hNCinFV_stack_11->SetBinContent(8,8.544271);
   hNCinFV_stack_11->SetBinContent(9,9.723481);
   hNCinFV_stack_11->SetBinContent(10,11.44175);
   hNCinFV_stack_11->SetBinContent(11,8.639552);
   hNCinFV_stack_11->SetBinContent(12,11.86598);
   hNCinFV_stack_11->SetBinContent(13,9.474595);
   hNCinFV_stack_11->SetBinContent(14,9.178135);
   hNCinFV_stack_11->SetBinContent(15,10.40661);
   hNCinFV_stack_11->SetBinContent(16,8.896282);
   hNCinFV_stack_11->SetBinContent(17,11.62893);
   hNCinFV_stack_11->SetBinContent(18,13.08262);
   hNCinFV_stack_11->SetBinContent(19,10.45371);
   hNCinFV_stack_11->SetBinContent(20,8.214236);
   hNCinFV_stack_11->SetBinContent(21,12.52061);
   hNCinFV_stack_11->SetBinContent(22,7.804509);
   hNCinFV_stack_11->SetBinContent(23,4.643166);
   hNCinFV_stack_11->SetBinContent(24,3.857995);
   hNCinFV_stack_11->SetBinContent(25,0.7319179);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.9610635);
   hNCinFV_stack_11->SetBinError(4,1.271733);
   hNCinFV_stack_11->SetBinError(5,1.345576);
   hNCinFV_stack_11->SetBinError(6,1.507554);
   hNCinFV_stack_11->SetBinError(7,1.722172);
   hNCinFV_stack_11->SetBinError(8,1.454327);
   hNCinFV_stack_11->SetBinError(9,1.595373);
   hNCinFV_stack_11->SetBinError(10,1.653435);
   hNCinFV_stack_11->SetBinError(11,1.494124);
   hNCinFV_stack_11->SetBinError(12,1.777892);
   hNCinFV_stack_11->SetBinError(13,1.531953);
   hNCinFV_stack_11->SetBinError(14,1.545149);
   hNCinFV_stack_11->SetBinError(15,1.606037);
   hNCinFV_stack_11->SetBinError(16,1.495134);
   hNCinFV_stack_11->SetBinError(17,1.722556);
   hNCinFV_stack_11->SetBinError(18,1.82979);
   hNCinFV_stack_11->SetBinError(19,1.654389);
   hNCinFV_stack_11->SetBinError(20,1.415387);
   hNCinFV_stack_11->SetBinError(21,1.744899);
   hNCinFV_stack_11->SetBinError(22,1.455311);
   hNCinFV_stack_11->SetBinError(23,1.075057);
   hNCinFV_stack_11->SetBinError(24,1.00081);
   hNCinFV_stack_11->SetBinError(25,0.438694);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinContent(3,5.621972);
   hnumuCCinFV_stack_12->SetBinContent(4,9.21752);
   hnumuCCinFV_stack_12->SetBinContent(5,13.2768);
   hnumuCCinFV_stack_12->SetBinContent(6,17.90263);
   hnumuCCinFV_stack_12->SetBinContent(7,12.63083);
   hnumuCCinFV_stack_12->SetBinContent(8,15.41992);
   hnumuCCinFV_stack_12->SetBinContent(9,13.38864);
   hnumuCCinFV_stack_12->SetBinContent(10,15.1234);
   hnumuCCinFV_stack_12->SetBinContent(11,14.88889);
   hnumuCCinFV_stack_12->SetBinContent(12,13.38595);
   hnumuCCinFV_stack_12->SetBinContent(13,16.98197);
   hnumuCCinFV_stack_12->SetBinContent(14,16.59998);
   hnumuCCinFV_stack_12->SetBinContent(15,16.57334);
   hnumuCCinFV_stack_12->SetBinContent(16,16.1688);
   hnumuCCinFV_stack_12->SetBinContent(17,14.54392);
   hnumuCCinFV_stack_12->SetBinContent(18,15.50925);
   hnumuCCinFV_stack_12->SetBinContent(19,15.48811);
   hnumuCCinFV_stack_12->SetBinContent(20,13.55033);
   hnumuCCinFV_stack_12->SetBinContent(21,14.41052);
   hnumuCCinFV_stack_12->SetBinContent(22,14.3995);
   hnumuCCinFV_stack_12->SetBinContent(23,12.10389);
   hnumuCCinFV_stack_12->SetBinContent(24,8.392879);
   hnumuCCinFV_stack_12->SetBinContent(25,2.18033);
   hnumuCCinFV_stack_12->SetBinError(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinError(3,1.725551);
   hnumuCCinFV_stack_12->SetBinError(4,1.619983);
   hnumuCCinFV_stack_12->SetBinError(5,2.058031);
   hnumuCCinFV_stack_12->SetBinError(6,2.545572);
   hnumuCCinFV_stack_12->SetBinError(7,1.901099);
   hnumuCCinFV_stack_12->SetBinError(8,2.325476);
   hnumuCCinFV_stack_12->SetBinError(9,2.033278);
   hnumuCCinFV_stack_12->SetBinError(10,2.139918);
   hnumuCCinFV_stack_12->SetBinError(11,2.335222);
   hnumuCCinFV_stack_12->SetBinError(12,2.238691);
   hnumuCCinFV_stack_12->SetBinError(13,2.182724);
   hnumuCCinFV_stack_12->SetBinError(14,2.397665);
   hnumuCCinFV_stack_12->SetBinError(15,2.27923);
   hnumuCCinFV_stack_12->SetBinError(16,2.145964);
   hnumuCCinFV_stack_12->SetBinError(17,2.052117);
   hnumuCCinFV_stack_12->SetBinError(18,2.407039);
   hnumuCCinFV_stack_12->SetBinError(19,3.049248);
   hnumuCCinFV_stack_12->SetBinError(20,2.386586);
   hnumuCCinFV_stack_12->SetBinError(21,2.222884);
   hnumuCCinFV_stack_12->SetBinError(22,2.253909);
   hnumuCCinFV_stack_12->SetBinError(23,2.047644);
   hnumuCCinFV_stack_12->SetBinError(24,1.594113);
   hnumuCCinFV_stack_12->SetBinError(25,0.8350063);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.8468039);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,1.223615);
   hnueCCinFV_stack_13->SetBinContent(8,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(9,1.419486);
   hnueCCinFV_stack_13->SetBinContent(10,2.315639);
   hnueCCinFV_stack_13->SetBinContent(11,0.6965446);
   hnueCCinFV_stack_13->SetBinContent(12,0.5668526);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.158955);
   hnueCCinFV_stack_13->SetBinContent(15,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,1.011747);
   hnueCCinFV_stack_13->SetBinContent(19,0.5853692);
   hnueCCinFV_stack_13->SetBinContent(20,0.7326428);
   hnueCCinFV_stack_13->SetBinContent(21,0.8490325);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.5125206);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.6232214);
   hnueCCinFV_stack_13->SetBinError(8,0.5507173);
   hnueCCinFV_stack_13->SetBinError(9,0.5377431);
   hnueCCinFV_stack_13->SetBinError(10,1.63159);
   hnueCCinFV_stack_13->SetBinError(11,0.4044932);
   hnueCCinFV_stack_13->SetBinError(12,0.4041175);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.7264723);
   hnueCCinFV_stack_13->SetBinError(15,0.2502081);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.5175176);
   hnueCCinFV_stack_13->SetBinError(19,0.4193325);
   hnueCCinFV_stack_13->SetBinError(20,0.4390196);
   hnueCCinFV_stack_13->SetBinError(21,0.5006171);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(25,0.3893379);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__14->SetBinContent(2,23.06796);
   hmcerror__14->SetBinContent(3,50.85096);
   hmcerror__14->SetBinContent(4,81.2016);
   hmcerror__14->SetBinContent(5,99.5798);
   hmcerror__14->SetBinContent(6,106.7706);
   hmcerror__14->SetBinContent(7,124.415);
   hmcerror__14->SetBinContent(8,124.1271);
   hmcerror__14->SetBinContent(9,114.9487);
   hmcerror__14->SetBinContent(10,120.8857);
   hmcerror__14->SetBinContent(11,123.1349);
   hmcerror__14->SetBinContent(12,128.719);
   hmcerror__14->SetBinContent(13,125.3917);
   hmcerror__14->SetBinContent(14,124.6402);
   hmcerror__14->SetBinContent(15,118.9065);
   hmcerror__14->SetBinContent(16,120.9296);
   hmcerror__14->SetBinContent(17,117.7105);
   hmcerror__14->SetBinContent(18,123.012);
   hmcerror__14->SetBinContent(19,121.9656);
   hmcerror__14->SetBinContent(20,116.1181);
   hmcerror__14->SetBinContent(21,111.1641);
   hmcerror__14->SetBinContent(22,108.1534);
   hmcerror__14->SetBinContent(23,102.1175);
   hmcerror__14->SetBinContent(24,68.47239);
   hmcerror__14->SetBinContent(25,40.75933);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,13.51296);
   hmcerror__14->SetBinError(3,21.30823);
   hmcerror__14->SetBinError(4,27.56123);
   hmcerror__14->SetBinError(5,31.66487);
   hmcerror__14->SetBinError(6,34.84215);
   hmcerror__14->SetBinError(7,34.67787);
   hmcerror__14->SetBinError(8,35.2371);
   hmcerror__14->SetBinError(9,32.61522);
   hmcerror__14->SetBinError(10,33.27609);
   hmcerror__14->SetBinError(11,36.69942);
   hmcerror__14->SetBinError(12,37.00451);
   hmcerror__14->SetBinError(13,34.41636);
   hmcerror__14->SetBinError(14,35.04936);
   hmcerror__14->SetBinError(15,30.96898);
   hmcerror__14->SetBinError(16,32.12859);
   hmcerror__14->SetBinError(17,31.73462);
   hmcerror__14->SetBinError(18,35.93889);
   hmcerror__14->SetBinError(19,33.46968);
   hmcerror__14->SetBinError(20,32.11417);
   hmcerror__14->SetBinError(21,28.6103);
   hmcerror__14->SetBinError(22,26.5325);
   hmcerror__14->SetBinError(23,30.65741);
   hmcerror__14->SetBinError(24,22.77801);
   hmcerror__14->SetBinError(25,15.82396);
   hmcerror__14->SetBinError(26,0.3895343);
   hmcerror__14->SetBinError(27,0.3895343);
   hmcerror__14->SetEntries(2462.59);

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
   
   Double_t _fx3017[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3017[26] = {
   0,
   18,
   40,
   70,
   71,
   84,
   77,
   94,
   94,
   100,
   86,
   75,
   71,
   81,
   78,
   88,
   100,
   97,
   87,
   82,
   96,
   92,
   82,
   57,
   29,
   0};
   Double_t _felx3017[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3017[26] = {
   0,
   4.4008,
   6.4604,
   8.4925,
   8.5518,
   9.2886,
   8.8995,
   9.8173,
   9.8173,
   10.1212,
   9.3967,
   8.7852,
   8.5518,
   9.1239,
   8.9562,
   9.5036,
   10.1212,
   9.9704,
   9.4503,
   9.1791,
   9.9196,
   9.7138,
   9.1791,
   7.679,
   5.5285,
   0};
   Double_t _fehx3017[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3017[26] = {
   1.1478,
   4.1858,
   6.2549,
   8.2902,
   8.3496,
   9.0869,
   8.6976,
   9.616,
   9.616,
   9.92,
   9.1951,
   8.5831,
   8.3496,
   8.9221,
   8.7542,
   9.3021,
   9.92,
   9.769,
   9.2488,
   8.9774,
   9.718,
   9.513,
   8.9774,
   7.4757,
   5.3201,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-156,156);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(120.912);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.6/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3018[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3018[26] = {
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
   Double_t _felx3018[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3018[26] = {
   0,
   0.5857894,
   0.419033,
   0.3394173,
   0.3179849,
   0.3263273,
   0.2787275,
   0.2838793,
   0.2837373,
   0.275269,
   0.2980423,
   0.2874829,
   0.2744707,
   0.2812042,
   0.2604481,
   0.2656801,
   0.2695988,
   0.2921575,
   0.2744191,
   0.2765648,
   0.2573699,
   0.2453229,
   0.3002169,
   0.3326598,
   0.3882291,
   0};
   Double_t _fehx3018[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3018[26] = {
   0,
   0.5857894,
   0.419033,
   0.3394173,
   0.3179849,
   0.3263273,
   0.2787275,
   0.2838793,
   0.2837373,
   0.275269,
   0.2980423,
   0.2874829,
   0.2744707,
   0.2812042,
   0.2604481,
   0.2656801,
   0.2695988,
   0.2921575,
   0.2744191,
   0.2765648,
   0.2573699,
   0.2453229,
   0.3002169,
   0.3326598,
   0.3882291,
   0};
   grae = new TGraphAsymmErrors(26,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-156,156);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
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
   
   Double_t _fx3019[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3019[26] = {
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
   Double_t _felx3019[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3019[26] = {
   0,
   0.2369048,
   0.2412484,
   0.2372975,
   0.2360945,
   0.232745,
   0.2389428,
   0.2362846,
   0.2495274,
   0.2245509,
   0.2423489,
   0.2363792,
   0.2275766,
   0.237581,
   0.2305406,
   0.229373,
   0.2307247,
   0.2342225,
   0.2260832,
   0.2314655,
   0.211064,
   0.2089613,
   0.1939055,
   0.2293661,
   0.1863994,
   0};
   Double_t _fehx3019[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3019[26] = {
   0,
   0.2369048,
   0.2412484,
   0.2372975,
   0.2360945,
   0.232745,
   0.2389428,
   0.2362846,
   0.2495274,
   0.2245509,
   0.2423489,
   0.2363792,
   0.2275766,
   0.237581,
   0.2305406,
   0.229373,
   0.2307247,
   0.2342225,
   0.2260832,
   0.2314655,
   0.211064,
   0.2089613,
   0.1939055,
   0.2293661,
   0.1863994,
   0};
   grae = new TGraphAsymmErrors(26,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-156,156);
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
   
   Double_t _fx3020[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3020[26] = {
   10,
   0.7803032,
   0.7866125,
   0.862052,
   0.712996,
   0.7867336,
   0.6188967,
   0.7572885,
   0.8177563,
   0.8272277,
   0.6984208,
   0.5826646,
   0.5662256,
   0.6498704,
   0.6559773,
   0.7276961,
   0.8495416,
   0.7885409,
   0.7133161,
   0.7061778,
   0.863588,
   0.8506439,
   0.8029964,
   0.8324523,
   0.7114935,
   10};
   Double_t _felx3020[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3020[26] = {
   0,
   0.1907755,
   0.1270458,
   0.1045854,
   0.08587886,
   0.08699588,
   0.07153079,
   0.07909073,
   0.08540594,
   0.08372537,
   0.07631221,
   0.068251,
   0.06820067,
   0.07320188,
   0.07532134,
   0.07858787,
   0.08598381,
   0.08105224,
   0.07748335,
   0.07904972,
   0.08923383,
   0.08981505,
   0.08988761,
   0.1121474,
   0.1356376,
   0};
   Double_t _fehx3020[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3020[26] = {
   0,
   0.1814552,
   0.1230046,
   0.102094,
   0.08384833,
   0.08510678,
   0.06990799,
   0.07746901,
   0.08365473,
   0.08206099,
   0.07467499,
   0.06668091,
   0.06658813,
   0.07158282,
   0.07362252,
   0.07692161,
   0.08427453,
   0.07941501,
   0.07583124,
   0.07731269,
   0.08742029,
   0.08795843,
   0.08791243,
   0.1091783,
   0.1305247,
   0};
   grae = new TGraphAsymmErrors(26,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-156,156);
   Graph_Graph3020->SetMinimum(0.4482224);
   Graph_Graph3020->SetMaximum(10.9502);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
