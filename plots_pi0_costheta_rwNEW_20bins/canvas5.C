#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 19:54:23 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-10.52095,1.25641,1163.396);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__13->SetBinContent(1,136.467);
   hmc__13->SetBinContent(2,108.039);
   hmc__13->SetBinContent(3,96.28266);
   hmc__13->SetBinContent(4,95.26266);
   hmc__13->SetBinContent(5,93.09574);
   hmc__13->SetBinContent(6,108.0056);
   hmc__13->SetBinContent(7,94.77107);
   hmc__13->SetBinContent(8,106.648);
   hmc__13->SetBinContent(9,113.2467);
   hmc__13->SetBinContent(10,131.0277);
   hmc__13->SetBinContent(11,137.2251);
   hmc__13->SetBinContent(12,152.4569);
   hmc__13->SetBinContent(13,153.5467);
   hmc__13->SetBinContent(14,168.6265);
   hmc__13->SetBinContent(15,189.0505);
   hmc__13->SetBinContent(16,220.9749);
   hmc__13->SetBinContent(17,273.9677);
   hmc__13->SetBinContent(18,295.1677);
   hmc__13->SetBinContent(19,363.7965);
   hmc__13->SetBinContent(20,526.0477);
   hmc__13->SetBinError(1,44.18778);
   hmc__13->SetBinError(2,40.54075);
   hmc__13->SetBinError(3,36.74164);
   hmc__13->SetBinError(4,36.57609);
   hmc__13->SetBinError(5,33.01548);
   hmc__13->SetBinError(6,35.68166);
   hmc__13->SetBinError(7,41.74484);
   hmc__13->SetBinError(8,35.70204);
   hmc__13->SetBinError(9,41.16439);
   hmc__13->SetBinError(10,45.25865);
   hmc__13->SetBinError(11,49.63254);
   hmc__13->SetBinError(12,55.71465);
   hmc__13->SetBinError(13,54.1192);
   hmc__13->SetBinError(14,66.20468);
   hmc__13->SetBinError(15,70.7231);
   hmc__13->SetBinError(16,93.73177);
   hmc__13->SetBinError(17,99.41077);
   hmc__13->SetBinError(18,110.1349);
   hmc__13->SetBinError(19,138.2272);
   hmc__13->SetBinError(20,156.9225);
   hmc__13->SetBinError(21,0.3895343);
   hmc__13->SetMinimum(-10.52095);
   hmc__13->SetMaximum(1104.7);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,-1,1);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(552.3501);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.641676);
   hbadmatch_stack_1->SetBinContent(2,1.976873);
   hbadmatch_stack_1->SetBinContent(3,2.365929);
   hbadmatch_stack_1->SetBinContent(4,2.197032);
   hbadmatch_stack_1->SetBinContent(5,2.392469);
   hbadmatch_stack_1->SetBinContent(6,2.732646);
   hbadmatch_stack_1->SetBinContent(7,1.779949);
   hbadmatch_stack_1->SetBinContent(8,3.553929);
   hbadmatch_stack_1->SetBinContent(9,3.620976);
   hbadmatch_stack_1->SetBinContent(10,3.148724);
   hbadmatch_stack_1->SetBinContent(11,4.693818);
   hbadmatch_stack_1->SetBinContent(12,7.466803);
   hbadmatch_stack_1->SetBinContent(13,4.220632);
   hbadmatch_stack_1->SetBinContent(14,3.910654);
   hbadmatch_stack_1->SetBinContent(15,3.029352);
   hbadmatch_stack_1->SetBinContent(16,4.318984);
   hbadmatch_stack_1->SetBinContent(17,7.004998);
   hbadmatch_stack_1->SetBinContent(18,6.314311);
   hbadmatch_stack_1->SetBinContent(19,4.9743);
   hbadmatch_stack_1->SetBinContent(20,7.236019);
   hbadmatch_stack_1->SetBinError(1,1.14297);
   hbadmatch_stack_1->SetBinError(2,0.737805);
   hbadmatch_stack_1->SetBinError(3,0.8156904);
   hbadmatch_stack_1->SetBinError(4,0.6634638);
   hbadmatch_stack_1->SetBinError(5,0.7848912);
   hbadmatch_stack_1->SetBinError(6,0.8554385);
   hbadmatch_stack_1->SetBinError(7,0.6359281);
   hbadmatch_stack_1->SetBinError(8,1.033818);
   hbadmatch_stack_1->SetBinError(9,1.025498);
   hbadmatch_stack_1->SetBinError(10,0.8737044);
   hbadmatch_stack_1->SetBinError(11,1.14544);
   hbadmatch_stack_1->SetBinError(12,2.287463);
   hbadmatch_stack_1->SetBinError(13,1.42158);
   hbadmatch_stack_1->SetBinError(14,1.009926);
   hbadmatch_stack_1->SetBinError(15,0.9591239);
   hbadmatch_stack_1->SetBinError(16,1.131211);
   hbadmatch_stack_1->SetBinError(17,1.504783);
   hbadmatch_stack_1->SetBinError(18,1.391454);
   hbadmatch_stack_1->SetBinError(19,1.091177);
   hbadmatch_stack_1->SetBinError(20,1.34505);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,9.925489);
   hext_stack_2->SetBinContent(2,6.496764);
   hext_stack_2->SetBinContent(3,4.792576);
   hext_stack_2->SetBinContent(4,7.422464);
   hext_stack_2->SetBinContent(5,6.538654);
   hext_stack_2->SetBinContent(6,18.28802);
   hext_stack_2->SetBinContent(7,6.966795);
   hext_stack_2->SetBinContent(8,12.60287);
   hext_stack_2->SetBinContent(9,12.38222);
   hext_stack_2->SetBinContent(10,20.29506);
   hext_stack_2->SetBinContent(11,8.849747);
   hext_stack_2->SetBinContent(12,14.12552);
   hext_stack_2->SetBinContent(13,16.95572);
   hext_stack_2->SetBinContent(14,12.11848);
   hext_stack_2->SetBinContent(15,13.94953);
   hext_stack_2->SetBinContent(16,21.07796);
   hext_stack_2->SetBinContent(17,22.9206);
   hext_stack_2->SetBinContent(18,16.99326);
   hext_stack_2->SetBinContent(19,17.79486);
   hext_stack_2->SetBinContent(20,26.39681);
   hext_stack_2->SetBinError(1,2.254331);
   hext_stack_2->SetBinError(2,1.541077);
   hext_stack_2->SetBinError(3,1.337408);
   hext_stack_2->SetBinError(4,1.939769);
   hext_stack_2->SetBinError(5,1.818211);
   hext_stack_2->SetBinError(6,3.135299);
   hext_stack_2->SetBinError(7,1.693402);
   hext_stack_2->SetBinError(8,2.446215);
   hext_stack_2->SetBinError(9,2.309809);
   hext_stack_2->SetBinError(10,3.335445);
   hext_stack_2->SetBinError(11,1.78091);
   hext_stack_2->SetBinError(12,2.681189);
   hext_stack_2->SetBinError(13,2.876976);
   hext_stack_2->SetBinError(14,2.42769);
   hext_stack_2->SetBinError(15,2.671081);
   hext_stack_2->SetBinError(16,3.234005);
   hext_stack_2->SetBinError(17,3.410822);
   hext_stack_2->SetBinError(18,2.782522);
   hext_stack_2->SetBinError(19,2.85292);
   hext_stack_2->SetBinError(20,3.642624);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.7249213);
   hdirt_stack_3->SetBinContent(3,0.8191268);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.6143302);
   hdirt_stack_3->SetBinContent(6,0.8385887);
   hdirt_stack_3->SetBinContent(7,0.6143302);
   hdirt_stack_3->SetBinContent(10,0.6189706);
   hdirt_stack_3->SetBinContent(12,2.26337);
   hdirt_stack_3->SetBinContent(13,0.1651799);
   hdirt_stack_3->SetBinContent(14,0.9215518);
   hdirt_stack_3->SetBinContent(15,1.424551);
   hdirt_stack_3->SetBinContent(16,0.6951543);
   hdirt_stack_3->SetBinContent(17,0.6983124);
   hdirt_stack_3->SetBinContent(18,1.676579);
   hdirt_stack_3->SetBinContent(19,0.8527125);
   hdirt_stack_3->SetBinContent(20,2.441719);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4354434);
   hdirt_stack_3->SetBinError(3,0.4702608);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.39051);
   hdirt_stack_3->SetBinError(6,0.5064279);
   hdirt_stack_3->SetBinError(7,0.39051);
   hdirt_stack_3->SetBinError(10,0.3682728);
   hdirt_stack_3->SetBinError(12,1.112637);
   hdirt_stack_3->SetBinError(13,0.1651799);
   hdirt_stack_3->SetBinError(14,0.5656263);
   hdirt_stack_3->SetBinError(15,0.6445866);
   hdirt_stack_3->SetBinError(16,0.4258516);
   hdirt_stack_3->SetBinError(17,0.4046009);
   hdirt_stack_3->SetBinError(18,0.6062382);
   hdirt_stack_3->SetBinError(19,0.5176777);
   hdirt_stack_3->SetBinError(20,0.7666453);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,15.29965);
   houtFV_stack_4->SetBinContent(2,8.605977);
   houtFV_stack_4->SetBinContent(3,7.139428);
   houtFV_stack_4->SetBinContent(4,7.574579);
   houtFV_stack_4->SetBinContent(5,5.071752);
   houtFV_stack_4->SetBinContent(6,5.689134);
   houtFV_stack_4->SetBinContent(7,5.165814);
   houtFV_stack_4->SetBinContent(8,6.008327);
   houtFV_stack_4->SetBinContent(9,7.693686);
   houtFV_stack_4->SetBinContent(10,5.778974);
   houtFV_stack_4->SetBinContent(11,7.562555);
   houtFV_stack_4->SetBinContent(12,7.27627);
   houtFV_stack_4->SetBinContent(13,6.20018);
   houtFV_stack_4->SetBinContent(14,9.06646);
   houtFV_stack_4->SetBinContent(15,11.26654);
   houtFV_stack_4->SetBinContent(16,12.07977);
   houtFV_stack_4->SetBinContent(17,16.8593);
   houtFV_stack_4->SetBinContent(18,18.72298);
   houtFV_stack_4->SetBinContent(19,22.61363);
   houtFV_stack_4->SetBinContent(20,30.69286);
   houtFV_stack_4->SetBinError(1,2.000161);
   houtFV_stack_4->SetBinError(2,1.442239);
   houtFV_stack_4->SetBinError(3,1.31945);
   houtFV_stack_4->SetBinError(4,1.438108);
   houtFV_stack_4->SetBinError(5,1.117407);
   houtFV_stack_4->SetBinError(6,1.173008);
   houtFV_stack_4->SetBinError(7,1.168545);
   houtFV_stack_4->SetBinError(8,1.255324);
   houtFV_stack_4->SetBinError(9,1.362641);
   houtFV_stack_4->SetBinError(10,1.163982);
   houtFV_stack_4->SetBinError(11,1.420456);
   houtFV_stack_4->SetBinError(12,1.296266);
   houtFV_stack_4->SetBinError(13,1.232788);
   houtFV_stack_4->SetBinError(14,1.554353);
   houtFV_stack_4->SetBinError(15,1.662837);
   houtFV_stack_4->SetBinError(16,1.757962);
   houtFV_stack_4->SetBinError(17,2.055344);
   houtFV_stack_4->SetBinError(18,2.109135);
   houtFV_stack_4->SetBinError(19,2.339747);
   houtFV_stack_4->SetBinError(20,2.877825);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3901041);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5025361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8771898);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.205188);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2390593);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2820092);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2413539);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5490984);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.087276);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.11584);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.283072);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.35673);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.315044);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.99943);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3944872);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3780289);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3388471);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5131296);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4718358);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5772612);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,44.64848);
   hNCpi0inFVres_stack_7->SetBinContent(2,42.80492);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.50217);
   hNCpi0inFVres_stack_7->SetBinContent(4,40.4673);
   hNCpi0inFVres_stack_7->SetBinContent(5,38.09278);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.03549);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.46373);
   hNCpi0inFVres_stack_7->SetBinContent(8,41.26426);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.79762);
   hNCpi0inFVres_stack_7->SetBinContent(10,53.37128);
   hNCpi0inFVres_stack_7->SetBinContent(11,59.14958);
   hNCpi0inFVres_stack_7->SetBinContent(12,64.31194);
   hNCpi0inFVres_stack_7->SetBinContent(13,64.36206);
   hNCpi0inFVres_stack_7->SetBinContent(14,76.89107);
   hNCpi0inFVres_stack_7->SetBinContent(15,81.59268);
   hNCpi0inFVres_stack_7->SetBinContent(16,99.67378);
   hNCpi0inFVres_stack_7->SetBinContent(17,111.8139);
   hNCpi0inFVres_stack_7->SetBinContent(18,133.139);
   hNCpi0inFVres_stack_7->SetBinContent(19,155.5524);
   hNCpi0inFVres_stack_7->SetBinContent(20,187.6989);
   hNCpi0inFVres_stack_7->SetBinError(1,2.179823);
   hNCpi0inFVres_stack_7->SetBinError(2,2.136222);
   hNCpi0inFVres_stack_7->SetBinError(3,2.078647);
   hNCpi0inFVres_stack_7->SetBinError(4,2.1263);
   hNCpi0inFVres_stack_7->SetBinError(5,2.002462);
   hNCpi0inFVres_stack_7->SetBinError(6,2.081577);
   hNCpi0inFVres_stack_7->SetBinError(7,2.041285);
   hNCpi0inFVres_stack_7->SetBinError(8,2.062355);
   hNCpi0inFVres_stack_7->SetBinError(9,2.230552);
   hNCpi0inFVres_stack_7->SetBinError(10,2.449059);
   hNCpi0inFVres_stack_7->SetBinError(11,2.554714);
   hNCpi0inFVres_stack_7->SetBinError(12,2.695914);
   hNCpi0inFVres_stack_7->SetBinError(13,2.59496);
   hNCpi0inFVres_stack_7->SetBinError(14,2.907812);
   hNCpi0inFVres_stack_7->SetBinError(15,2.871568);
   hNCpi0inFVres_stack_7->SetBinError(16,3.301188);
   hNCpi0inFVres_stack_7->SetBinError(17,3.487206);
   hNCpi0inFVres_stack_7->SetBinError(18,3.822555);
   hNCpi0inFVres_stack_7->SetBinError(19,4.106337);
   hNCpi0inFVres_stack_7->SetBinError(20,4.508581);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.581533);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.760785);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.209353);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.904198);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.618461);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.67643);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.772163);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.364719);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.195488);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.117444);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.904366);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.616395);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.83455);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.37753);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.71805);
   hNCpi0inFVdis_stack_8->SetBinContent(16,16.32688);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.56662);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.38164);
   hNCpi0inFVdis_stack_8->SetBinContent(19,34.06371);
   hNCpi0inFVdis_stack_8->SetBinContent(20,56.74899);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.034412);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7609313);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8533933);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8953833);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7722281);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8571477);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7418962);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9589463);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9184859);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9712803);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9134933);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9611417);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.091681);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.287902);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.180167);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.309628);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.473616);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.687427);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.895746);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.437469);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2926179);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.122146);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,20.83604);
   hCCpi0inFV_stack_10->SetBinContent(2,19.26149);
   hCCpi0inFV_stack_10->SetBinContent(3,16.08685);
   hCCpi0inFV_stack_10->SetBinContent(4,12.45147);
   hCCpi0inFV_stack_10->SetBinContent(5,14.25668);
   hCCpi0inFV_stack_10->SetBinContent(6,14.28264);
   hCCpi0inFV_stack_10->SetBinContent(7,14.37502);
   hCCpi0inFV_stack_10->SetBinContent(8,15.34967);
   hCCpi0inFV_stack_10->SetBinContent(9,12.41071);
   hCCpi0inFV_stack_10->SetBinContent(10,14.91294);
   hCCpi0inFV_stack_10->SetBinContent(11,20.39068);
   hCCpi0inFV_stack_10->SetBinContent(12,17.31442);
   hCCpi0inFV_stack_10->SetBinContent(13,20.26435);
   hCCpi0inFV_stack_10->SetBinContent(14,22.89847);
   hCCpi0inFV_stack_10->SetBinContent(15,24.90971);
   hCCpi0inFV_stack_10->SetBinContent(16,25.96441);
   hCCpi0inFV_stack_10->SetBinContent(17,43.77682);
   hCCpi0inFV_stack_10->SetBinContent(18,43.71167);
   hCCpi0inFV_stack_10->SetBinContent(19,52.92854);
   hCCpi0inFV_stack_10->SetBinContent(20,89.50974);
   hCCpi0inFV_stack_10->SetBinError(1,2.277236);
   hCCpi0inFV_stack_10->SetBinError(2,2.248795);
   hCCpi0inFV_stack_10->SetBinError(3,2.012692);
   hCCpi0inFV_stack_10->SetBinError(4,1.732135);
   hCCpi0inFV_stack_10->SetBinError(5,1.778925);
   hCCpi0inFV_stack_10->SetBinError(6,1.916478);
   hCCpi0inFV_stack_10->SetBinError(7,1.83553);
   hCCpi0inFV_stack_10->SetBinError(8,1.95875);
   hCCpi0inFV_stack_10->SetBinError(9,1.686641);
   hCCpi0inFV_stack_10->SetBinError(10,1.92934);
   hCCpi0inFV_stack_10->SetBinError(11,2.234306);
   hCCpi0inFV_stack_10->SetBinError(12,2.088357);
   hCCpi0inFV_stack_10->SetBinError(13,2.293199);
   hCCpi0inFV_stack_10->SetBinError(14,2.436013);
   hCCpi0inFV_stack_10->SetBinError(15,2.4903);
   hCCpi0inFV_stack_10->SetBinError(16,2.581269);
   hCCpi0inFV_stack_10->SetBinError(17,3.385057);
   hCCpi0inFV_stack_10->SetBinError(18,3.292976);
   hCCpi0inFV_stack_10->SetBinError(19,3.67032);
   hCCpi0inFV_stack_10->SetBinError(20,4.814611);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,14.31617);
   hNCinFV_stack_11->SetBinContent(2,9.336205);
   hNCinFV_stack_11->SetBinContent(3,8.070774);
   hNCinFV_stack_11->SetBinContent(4,6.355279);
   hNCinFV_stack_11->SetBinContent(5,8.649694);
   hNCinFV_stack_11->SetBinContent(6,6.700529);
   hNCinFV_stack_11->SetBinContent(7,7.379045);
   hNCinFV_stack_11->SetBinContent(8,3.766095);
   hNCinFV_stack_11->SetBinContent(9,7.64644);
   hNCinFV_stack_11->SetBinContent(10,7.767552);
   hNCinFV_stack_11->SetBinContent(11,5.857033);
   hNCinFV_stack_11->SetBinContent(12,8.45298);
   hNCinFV_stack_11->SetBinContent(13,8.509614);
   hNCinFV_stack_11->SetBinContent(14,7.965959);
   hNCinFV_stack_11->SetBinContent(15,13.86333);
   hNCinFV_stack_11->SetBinContent(16,14.67095);
   hNCinFV_stack_11->SetBinContent(17,17.49043);
   hNCinFV_stack_11->SetBinContent(18,21.65164);
   hNCinFV_stack_11->SetBinContent(19,39.66943);
   hNCinFV_stack_11->SetBinContent(20,59.73057);
   hNCinFV_stack_11->SetBinError(1,1.882016);
   hNCinFV_stack_11->SetBinError(2,1.507263);
   hNCinFV_stack_11->SetBinError(3,1.387911);
   hNCinFV_stack_11->SetBinError(4,1.241112);
   hNCinFV_stack_11->SetBinError(5,1.495453);
   hNCinFV_stack_11->SetBinError(6,1.28766);
   hNCinFV_stack_11->SetBinError(7,1.316586);
   hNCinFV_stack_11->SetBinError(8,0.9410676);
   hNCinFV_stack_11->SetBinError(9,1.494515);
   hNCinFV_stack_11->SetBinError(10,1.401518);
   hNCinFV_stack_11->SetBinError(11,1.241081);
   hNCinFV_stack_11->SetBinError(12,1.482458);
   hNCinFV_stack_11->SetBinError(13,1.469925);
   hNCinFV_stack_11->SetBinError(14,1.41549);
   hNCinFV_stack_11->SetBinError(15,1.923252);
   hNCinFV_stack_11->SetBinError(16,1.861462);
   hNCinFV_stack_11->SetBinError(17,2.076256);
   hNCinFV_stack_11->SetBinError(18,2.296629);
   hNCinFV_stack_11->SetBinError(19,3.151891);
   hNCinFV_stack_11->SetBinError(20,3.935473);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,15.26385);
   hnumuCCinFV_stack_12->SetBinContent(2,11.1276);
   hnumuCCinFV_stack_12->SetBinContent(3,10.42225);
   hnumuCCinFV_stack_12->SetBinContent(4,9.907249);
   hnumuCCinFV_stack_12->SetBinContent(5,9.433267);
   hnumuCCinFV_stack_12->SetBinContent(6,9.712811);
   hnumuCCinFV_stack_12->SetBinContent(7,9.957314);
   hnumuCCinFV_stack_12->SetBinContent(8,15.26363);
   hnumuCCinFV_stack_12->SetBinContent(9,13.74718);
   hnumuCCinFV_stack_12->SetBinContent(10,16.626);
   hnumuCCinFV_stack_12->SetBinContent(11,22.35708);
   hnumuCCinFV_stack_12->SetBinContent(12,20.61197);
   hnumuCCinFV_stack_12->SetBinContent(13,21.55993);
   hnumuCCinFV_stack_12->SetBinContent(14,18.96863);
   hnumuCCinFV_stack_12->SetBinContent(15,23.38697);
   hnumuCCinFV_stack_12->SetBinContent(16,24.43813);
   hnumuCCinFV_stack_12->SetBinContent(17,31.51212);
   hnumuCCinFV_stack_12->SetBinContent(18,23.5307);
   hnumuCCinFV_stack_12->SetBinContent(19,30.4953);
   hnumuCCinFV_stack_12->SetBinContent(20,48.38329);
   hnumuCCinFV_stack_12->SetBinError(1,2.02982);
   hnumuCCinFV_stack_12->SetBinError(2,1.780159);
   hnumuCCinFV_stack_12->SetBinError(3,1.996613);
   hnumuCCinFV_stack_12->SetBinError(4,1.658694);
   hnumuCCinFV_stack_12->SetBinError(5,1.949266);
   hnumuCCinFV_stack_12->SetBinError(6,1.61192);
   hnumuCCinFV_stack_12->SetBinError(7,1.672649);
   hnumuCCinFV_stack_12->SetBinError(8,2.205106);
   hnumuCCinFV_stack_12->SetBinError(9,2.177898);
   hnumuCCinFV_stack_12->SetBinError(10,2.435234);
   hnumuCCinFV_stack_12->SetBinError(11,2.759749);
   hnumuCCinFV_stack_12->SetBinError(12,2.757129);
   hnumuCCinFV_stack_12->SetBinError(13,2.815413);
   hnumuCCinFV_stack_12->SetBinError(14,2.346156);
   hnumuCCinFV_stack_12->SetBinError(15,2.898025);
   hnumuCCinFV_stack_12->SetBinError(16,3.575924);
   hnumuCCinFV_stack_12->SetBinError(17,3.304707);
   hnumuCCinFV_stack_12->SetBinError(18,2.728465);
   hnumuCCinFV_stack_12->SetBinError(19,3.247624);
   hnumuCCinFV_stack_12->SetBinError(20,3.931499);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.441907);
   hnueCCinFV_stack_13->SetBinContent(3,0.497884);
   hnueCCinFV_stack_13->SetBinContent(4,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(5,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(6,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(14,1.005302);
   hnueCCinFV_stack_13->SetBinContent(15,0.7102025);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.9857838);
   hnueCCinFV_stack_13->SetBinContent(18,1.130776);
   hnueCCinFV_stack_13->SetBinContent(19,1.463836);
   hnueCCinFV_stack_13->SetBinContent(20,10.71157);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.3143499);
   hnueCCinFV_stack_13->SetBinError(3,0.3520617);
   hnueCCinFV_stack_13->SetBinError(4,0.3160204);
   hnueCCinFV_stack_13->SetBinError(5,0.3401778);
   hnueCCinFV_stack_13->SetBinError(6,0.4132436);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.3174228);
   hnueCCinFV_stack_13->SetBinError(14,0.5917492);
   hnueCCinFV_stack_13->SetBinError(15,0.4315545);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.5068534);
   hnueCCinFV_stack_13->SetBinError(18,0.5783639);
   hnueCCinFV_stack_13->SetBinError(19,0.620407);
   hnueCCinFV_stack_13->SetBinError(20,2.445267);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__14->SetBinContent(1,136.467);
   hmcerror__14->SetBinContent(2,108.039);
   hmcerror__14->SetBinContent(3,96.28266);
   hmcerror__14->SetBinContent(4,95.26266);
   hmcerror__14->SetBinContent(5,93.09574);
   hmcerror__14->SetBinContent(6,108.0056);
   hmcerror__14->SetBinContent(7,94.77107);
   hmcerror__14->SetBinContent(8,106.648);
   hmcerror__14->SetBinContent(9,113.2467);
   hmcerror__14->SetBinContent(10,131.0277);
   hmcerror__14->SetBinContent(11,137.2251);
   hmcerror__14->SetBinContent(12,152.4569);
   hmcerror__14->SetBinContent(13,153.5467);
   hmcerror__14->SetBinContent(14,168.6265);
   hmcerror__14->SetBinContent(15,189.0505);
   hmcerror__14->SetBinContent(16,220.9749);
   hmcerror__14->SetBinContent(17,273.9677);
   hmcerror__14->SetBinContent(18,295.1677);
   hmcerror__14->SetBinContent(19,363.7965);
   hmcerror__14->SetBinContent(20,526.0477);
   hmcerror__14->SetBinError(1,44.18778);
   hmcerror__14->SetBinError(2,40.54075);
   hmcerror__14->SetBinError(3,36.74164);
   hmcerror__14->SetBinError(4,36.57609);
   hmcerror__14->SetBinError(5,33.01548);
   hmcerror__14->SetBinError(6,35.68166);
   hmcerror__14->SetBinError(7,41.74484);
   hmcerror__14->SetBinError(8,35.70204);
   hmcerror__14->SetBinError(9,41.16439);
   hmcerror__14->SetBinError(10,45.25865);
   hmcerror__14->SetBinError(11,49.63254);
   hmcerror__14->SetBinError(12,55.71465);
   hmcerror__14->SetBinError(13,54.1192);
   hmcerror__14->SetBinError(14,66.20468);
   hmcerror__14->SetBinError(15,70.7231);
   hmcerror__14->SetBinError(16,93.73177);
   hmcerror__14->SetBinError(17,99.41077);
   hmcerror__14->SetBinError(18,110.1349);
   hmcerror__14->SetBinError(19,138.2272);
   hmcerror__14->SetBinError(20,156.9225);
   hmcerror__14->SetBinError(21,0.3895343);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3017[20] = {
   102,
   67,
   86,
   67,
   92,
   77,
   78,
   92,
   80,
   89,
   101,
   111,
   102,
   125,
   123,
   148,
   175,
   237,
   294,
   375};
   Double_t _felx3017[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3017[20] = {
   10.0995,
   8.3119,
   9.3967,
   8.3119,
   9.7138,
   8.8995,
   8.9562,
   9.7138,
   9.0683,
   9.5566,
   10.04988,
   10.53565,
   10.0995,
   11.18034,
   11.09054,
   12.16553,
   13.22876,
   15.3948,
   17.14643,
   19.36492};
   Double_t _fehx3017[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3017[20] = {
   10.0995,
   8.1094,
   9.1951,
   8.1094,
   9.513,
   8.6976,
   8.7542,
   9.513,
   8.8665,
   9.3552,
   10.04988,
   10.53565,
   10.0995,
   11.18034,
   11.09054,
   12.16553,
   13.22876,
   15.3948,
   17.14643,
   19.36492};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(25.12042);
   Graph_Graph3017->SetMaximum(427.9326);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.1/20","");
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3018[20] = {
   0.3237983,
   0.3752419,
   0.3816019,
   0.3839499,
   0.35464,
   0.3303687,
   0.4404808,
   0.3347652,
   0.3634931,
   0.3454128,
   0.3616872,
   0.3654451,
   0.3524609,
   0.3926114,
   0.3740964,
   0.4241739,
   0.3628558,
   0.3731266,
   0.3799575,
   0.2983047};
   Double_t _fehx3018[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3018[20] = {
   0.3237983,
   0.3752419,
   0.3816019,
   0.3839499,
   0.35464,
   0.3303687,
   0.4404808,
   0.3347652,
   0.3634931,
   0.3454128,
   0.3616872,
   0.3654451,
   0.3524609,
   0.3926114,
   0.3740964,
   0.4241739,
   0.3628558,
   0.3731266,
   0.3799575,
   0.2983047};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3019[20] = {
   0.2745563,
   0.2950473,
   0.3094365,
   0.3201135,
   0.3140198,
   0.2749771,
   0.3125882,
   0.291906,
   0.3153815,
   0.3064581,
   0.32424,
   0.3227748,
   0.3288128,
   0.3584634,
   0.3567093,
   0.3710021,
   0.3343733,
   0.3501244,
   0.3221346,
   0.2835911};
   Double_t _fehx3019[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3019[20] = {
   0.2745563,
   0.2950473,
   0.3094365,
   0.3201135,
   0.3140198,
   0.2749771,
   0.3125882,
   0.291906,
   0.3153815,
   0.3064581,
   0.32424,
   0.3227748,
   0.3288128,
   0.3584634,
   0.3567093,
   0.3710021,
   0.3343733,
   0.3501244,
   0.3221346,
   0.2835911};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3020[20] = {
   0.7474336,
   0.6201465,
   0.8932034,
   0.7033186,
   0.98823,
   0.7129262,
   0.823036,
   0.8626511,
   0.7064224,
   0.6792456,
   0.7360172,
   0.7280744,
   0.6642931,
   0.7412834,
   0.6506199,
   0.6697594,
   0.6387614,
   0.8029335,
   0.8081442,
   0.7128632};
   Double_t _felx3020[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3020[20] = {
   0.07400695,
   0.07693427,
   0.09759493,
   0.08725244,
   0.104342,
   0.08239853,
   0.09450352,
   0.09108283,
   0.08007563,
   0.07293572,
   0.07323645,
   0.06910577,
   0.06577482,
   0.0663024,
   0.05866442,
   0.05505388,
   0.04828582,
   0.05215613,
   0.04713192,
   0.03681209};
   Double_t _fehx3020[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3020[20] = {
   0.07400695,
   0.07505994,
   0.0955011,
   0.08512674,
   0.1021851,
   0.08052918,
   0.09237207,
   0.0892,
   0.07829368,
   0.07139864,
   0.07323645,
   0.06910577,
   0.06577482,
   0.0663024,
   0.05866442,
   0.05505388,
   0.04828582,
   0.05215613,
   0.04713192,
   0.03681209};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.488492);
   Graph_Graph3020->SetMaximum(1.145135);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
