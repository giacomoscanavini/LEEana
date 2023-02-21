#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Jan  9 21:29:49 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",216,172,1200,900);
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
   pad1->Range(-1.307692,-9.774681,1.25641,1080.874);
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
   hmc__13->SetBinContent(1,121.8976);
   hmc__13->SetBinContent(2,91.31212);
   hmc__13->SetBinContent(3,81.03664);
   hmc__13->SetBinContent(4,78.70084);
   hmc__13->SetBinContent(5,77.98112);
   hmc__13->SetBinContent(6,90.82834);
   hmc__13->SetBinContent(7,77.40806);
   hmc__13->SetBinContent(8,89.81549);
   hmc__13->SetBinContent(9,92.6867);
   hmc__13->SetBinContent(10,107.8674);
   hmc__13->SetBinContent(11,113.1781);
   hmc__13->SetBinContent(12,126.7013);
   hmc__13->SetBinContent(13,127.5377);
   hmc__13->SetBinContent(14,139.0683);
   hmc__13->SetBinContent(15,157.787);
   hmc__13->SetBinContent(16,184.748);
   hmc__13->SetBinContent(17,237.8888);
   hmc__13->SetBinContent(18,248.3675);
   hmc__13->SetBinContent(19,316.1003);
   hmc__13->SetBinContent(20,488.7341);
   hmc__13->SetBinError(1,41.44323);
   hmc__13->SetBinError(2,36.60862);
   hmc__13->SetBinError(3,33.96573);
   hmc__13->SetBinError(4,33.12962);
   hmc__13->SetBinError(5,30.56619);
   hmc__13->SetBinError(6,33.88459);
   hmc__13->SetBinError(7,34.41756);
   hmc__13->SetBinError(8,34.29736);
   hmc__13->SetBinError(9,37.4852);
   hmc__13->SetBinError(10,41.70766);
   hmc__13->SetBinError(11,47.43334);
   hmc__13->SetBinError(12,50.85958);
   hmc__13->SetBinError(13,48.36056);
   hmc__13->SetBinError(14,58.93734);
   hmc__13->SetBinError(15,61.43974);
   hmc__13->SetBinError(16,80.07844);
   hmc__13->SetBinError(17,85.41441);
   hmc__13->SetBinError(18,91.12422);
   hmc__13->SetBinError(19,120.2648);
   hmc__13->SetBinError(20,127.2124);
   hmc__13->SetBinError(21,0.3895343);
   hmc__13->SetMinimum(-9.774681);
   hmc__13->SetMaximum(1026.342);
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
   hs5_stack_5->SetMaximum(513.1707);
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
   hbadmatch_stack_1->SetBinContent(1,4.256101);
   hbadmatch_stack_1->SetBinContent(2,1.680004);
   hbadmatch_stack_1->SetBinContent(3,2.164236);
   hbadmatch_stack_1->SetBinContent(4,2.153606);
   hbadmatch_stack_1->SetBinContent(5,1.932337);
   hbadmatch_stack_1->SetBinContent(6,2.562484);
   hbadmatch_stack_1->SetBinContent(7,1.165136);
   hbadmatch_stack_1->SetBinContent(8,3.518713);
   hbadmatch_stack_1->SetBinContent(9,3.583582);
   hbadmatch_stack_1->SetBinContent(10,2.650714);
   hbadmatch_stack_1->SetBinContent(11,4.433189);
   hbadmatch_stack_1->SetBinContent(12,7.330829);
   hbadmatch_stack_1->SetBinContent(13,3.80695);
   hbadmatch_stack_1->SetBinContent(14,4.655087);
   hbadmatch_stack_1->SetBinContent(15,2.528793);
   hbadmatch_stack_1->SetBinContent(16,3.881869);
   hbadmatch_stack_1->SetBinContent(17,6.618523);
   hbadmatch_stack_1->SetBinContent(18,5.83841);
   hbadmatch_stack_1->SetBinContent(19,4.335717);
   hbadmatch_stack_1->SetBinContent(20,6.778527);
   hbadmatch_stack_1->SetBinError(1,1.093577);
   hbadmatch_stack_1->SetBinError(2,0.6452737);
   hbadmatch_stack_1->SetBinError(3,0.7573675);
   hbadmatch_stack_1->SetBinError(4,0.663131);
   hbadmatch_stack_1->SetBinError(5,0.6865233);
   hbadmatch_stack_1->SetBinError(6,0.7929767);
   hbadmatch_stack_1->SetBinError(7,0.434137);
   hbadmatch_stack_1->SetBinError(8,1.048237);
   hbadmatch_stack_1->SetBinError(9,1.05477);
   hbadmatch_stack_1->SetBinError(10,0.7610537);
   hbadmatch_stack_1->SetBinError(11,1.161667);
   hbadmatch_stack_1->SetBinError(12,2.285502);
   hbadmatch_stack_1->SetBinError(13,1.371093);
   hbadmatch_stack_1->SetBinError(14,1.321009);
   hbadmatch_stack_1->SetBinError(15,0.8400007);
   hbadmatch_stack_1->SetBinError(16,1.052468);
   hbadmatch_stack_1->SetBinError(17,1.45776);
   hbadmatch_stack_1->SetBinError(18,1.314227);
   hbadmatch_stack_1->SetBinError(19,0.9641535);
   hbadmatch_stack_1->SetBinError(20,1.343156);
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
   houtFV_stack_4->SetBinContent(1,15.2382);
   houtFV_stack_4->SetBinContent(2,7.633893);
   houtFV_stack_4->SetBinContent(3,6.768162);
   houtFV_stack_4->SetBinContent(4,7.251206);
   houtFV_stack_4->SetBinContent(5,4.697001);
   houtFV_stack_4->SetBinContent(6,5.059069);
   houtFV_stack_4->SetBinContent(7,4.866244);
   houtFV_stack_4->SetBinContent(8,5.704525);
   houtFV_stack_4->SetBinContent(9,7.029053);
   houtFV_stack_4->SetBinContent(10,5.02708);
   houtFV_stack_4->SetBinContent(11,6.914222);
   houtFV_stack_4->SetBinContent(12,6.805034);
   houtFV_stack_4->SetBinContent(13,5.79703);
   houtFV_stack_4->SetBinContent(14,8.309319);
   houtFV_stack_4->SetBinContent(15,10.7662);
   houtFV_stack_4->SetBinContent(16,10.94475);
   houtFV_stack_4->SetBinContent(17,15.67729);
   houtFV_stack_4->SetBinContent(18,16.99226);
   houtFV_stack_4->SetBinContent(19,21.2139);
   houtFV_stack_4->SetBinContent(20,30.37517);
   houtFV_stack_4->SetBinError(1,2.037538);
   houtFV_stack_4->SetBinError(2,1.352479);
   houtFV_stack_4->SetBinError(3,1.278069);
   houtFV_stack_4->SetBinError(4,1.428523);
   houtFV_stack_4->SetBinError(5,1.050899);
   houtFV_stack_4->SetBinError(6,1.060766);
   houtFV_stack_4->SetBinError(7,1.116965);
   houtFV_stack_4->SetBinError(8,1.202546);
   houtFV_stack_4->SetBinError(9,1.298888);
   houtFV_stack_4->SetBinError(10,1.049738);
   houtFV_stack_4->SetBinError(11,1.305278);
   houtFV_stack_4->SetBinError(12,1.234563);
   houtFV_stack_4->SetBinError(13,1.168382);
   houtFV_stack_4->SetBinError(14,1.451632);
   houtFV_stack_4->SetBinError(15,1.614931);
   houtFV_stack_4->SetBinError(16,1.694475);
   houtFV_stack_4->SetBinError(17,1.964562);
   houtFV_stack_4->SetBinError(18,1.953547);
   houtFV_stack_4->SetBinError(19,2.245805);
   houtFV_stack_4->SetBinError(20,3.025807);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1075194);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.47799);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2526288);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2474454);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.041804);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.214147);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.100147);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2794944);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.146251);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1187243);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3114345);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5701133);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7977036);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3891626);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1746735);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1527309);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3986421);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2719082);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2384573);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2339316);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4661747);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2221121);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2949631);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2982927);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2696238);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1763521);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6907941);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5807788);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8896411);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.607649);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.646724);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.019987);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3017477);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1679253);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05893896);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05832466);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1511871);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.137782);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1307984);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1195219);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2192843);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1182423);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.147886);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1127636);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1420156);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06555068);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.228684);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2150699);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2274238);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.356129);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4108478);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4068392);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,32.85439);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.63608);
   hNCpi0inFVres_stack_7->SetBinContent(3,25.85892);
   hNCpi0inFVres_stack_7->SetBinContent(4,26.98152);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.44684);
   hNCpi0inFVres_stack_7->SetBinContent(6,28.14582);
   hNCpi0inFVres_stack_7->SetBinContent(7,27.09421);
   hNCpi0inFVres_stack_7->SetBinContent(8,27.04082);
   hNCpi0inFVres_stack_7->SetBinContent(9,29.50646);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.62684);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.47843);
   hNCpi0inFVres_stack_7->SetBinContent(12,42.66776);
   hNCpi0inFVres_stack_7->SetBinContent(13,43.38358);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.16815);
   hNCpi0inFVres_stack_7->SetBinContent(15,54.9466);
   hNCpi0inFVres_stack_7->SetBinContent(16,68.30966);
   hNCpi0inFVres_stack_7->SetBinContent(17,80.86241);
   hNCpi0inFVres_stack_7->SetBinContent(18,94.71592);
   hNCpi0inFVres_stack_7->SetBinContent(19,111.7764);
   hNCpi0inFVres_stack_7->SetBinContent(20,145.1716);
   hNCpi0inFVres_stack_7->SetBinError(1,1.860424);
   hNCpi0inFVres_stack_7->SetBinError(2,1.555818);
   hNCpi0inFVres_stack_7->SetBinError(3,1.546653);
   hNCpi0inFVres_stack_7->SetBinError(4,1.533545);
   hNCpi0inFVres_stack_7->SetBinError(5,1.48416);
   hNCpi0inFVres_stack_7->SetBinError(6,1.588857);
   hNCpi0inFVres_stack_7->SetBinError(7,1.491286);
   hNCpi0inFVres_stack_7->SetBinError(8,1.492851);
   hNCpi0inFVres_stack_7->SetBinError(9,1.50505);
   hNCpi0inFVres_stack_7->SetBinError(10,1.780406);
   hNCpi0inFVres_stack_7->SetBinError(11,1.825537);
   hNCpi0inFVres_stack_7->SetBinError(12,1.945479);
   hNCpi0inFVres_stack_7->SetBinError(13,1.946099);
   hNCpi0inFVres_stack_7->SetBinError(14,2.098142);
   hNCpi0inFVres_stack_7->SetBinError(15,2.094747);
   hNCpi0inFVres_stack_7->SetBinError(16,2.435649);
   hNCpi0inFVres_stack_7->SetBinError(17,2.789934);
   hNCpi0inFVres_stack_7->SetBinError(18,3.063006);
   hNCpi0inFVres_stack_7->SetBinError(19,3.256871);
   hNCpi0inFVres_stack_7->SetBinError(20,3.999984);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.871519);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.93038);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.619001);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.716077);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.856338);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.058515);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.35608);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.894566);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.240965);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.79188);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.510155);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.237825);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.985142);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.51111);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.3654);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.23032);
   hNCpi0inFVdis_stack_8->SetBinContent(17,15.40474);
   hNCpi0inFVdis_stack_8->SetBinContent(18,20.40408);
   hNCpi0inFVdis_stack_8->SetBinContent(19,30.66498);
   hNCpi0inFVdis_stack_8->SetBinContent(20,57.84953);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9618742);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5766285);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7413083);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.697878);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6357163);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7023841);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.645179);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9582676);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7782058);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6937972);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7439124);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8631984);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7147948);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.070691);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9518536);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.391877);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.24587);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.49299);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.094394);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.909779);
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
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03255694);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1647521);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2048209);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02095708);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1303682);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.08775484);
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
   hNCinFV_stack_11->SetBinContent(1,14.00726);
   hNCinFV_stack_11->SetBinContent(2,9.963941);
   hNCinFV_stack_11->SetBinContent(3,7.72545);
   hNCinFV_stack_11->SetBinContent(4,5.987011);
   hNCinFV_stack_11->SetBinContent(5,8.970278);
   hNCinFV_stack_11->SetBinContent(6,5.993177);
   hNCinFV_stack_11->SetBinContent(7,6.880535);
   hNCinFV_stack_11->SetBinContent(8,3.126909);
   hNCinFV_stack_11->SetBinContent(9,7.125331);
   hNCinFV_stack_11->SetBinContent(10,7.095819);
   hNCinFV_stack_11->SetBinContent(11,5.949658);
   hNCinFV_stack_11->SetBinContent(12,7.588118);
   hNCinFV_stack_11->SetBinContent(13,8.317681);
   hNCinFV_stack_11->SetBinContent(14,8.171075);
   hNCinFV_stack_11->SetBinContent(15,14.04261);
   hNCinFV_stack_11->SetBinContent(16,15.02733);
   hNCinFV_stack_11->SetBinContent(17,18.50862);
   hNCinFV_stack_11->SetBinContent(18,21.4817);
   hNCinFV_stack_11->SetBinContent(19,41.77552);
   hNCinFV_stack_11->SetBinContent(20,65.67711);
   hNCinFV_stack_11->SetBinError(1,1.938674);
   hNCinFV_stack_11->SetBinError(2,1.686357);
   hNCinFV_stack_11->SetBinError(3,1.355651);
   hNCinFV_stack_11->SetBinError(4,1.191208);
   hNCinFV_stack_11->SetBinError(5,1.746831);
   hNCinFV_stack_11->SetBinError(6,1.1891);
   hNCinFV_stack_11->SetBinError(7,1.256252);
   hNCinFV_stack_11->SetBinError(8,0.7701357);
   hNCinFV_stack_11->SetBinError(9,1.418037);
   hNCinFV_stack_11->SetBinError(10,1.346985);
   hNCinFV_stack_11->SetBinError(11,1.39912);
   hNCinFV_stack_11->SetBinError(12,1.35424);
   hNCinFV_stack_11->SetBinError(13,1.525955);
   hNCinFV_stack_11->SetBinError(14,1.674284);
   hNCinFV_stack_11->SetBinError(15,2.248706);
   hNCinFV_stack_11->SetBinError(16,2.098963);
   hNCinFV_stack_11->SetBinError(17,2.481964);
   hNCinFV_stack_11->SetBinError(18,2.417304);
   hNCinFV_stack_11->SetBinError(19,3.616118);
   hNCinFV_stack_11->SetBinError(20,4.796545);
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
   hmcerror__14->SetBinContent(1,121.8976);
   hmcerror__14->SetBinContent(2,91.31212);
   hmcerror__14->SetBinContent(3,81.03664);
   hmcerror__14->SetBinContent(4,78.70084);
   hmcerror__14->SetBinContent(5,77.98112);
   hmcerror__14->SetBinContent(6,90.82834);
   hmcerror__14->SetBinContent(7,77.40806);
   hmcerror__14->SetBinContent(8,89.81549);
   hmcerror__14->SetBinContent(9,92.6867);
   hmcerror__14->SetBinContent(10,107.8674);
   hmcerror__14->SetBinContent(11,113.1781);
   hmcerror__14->SetBinContent(12,126.7013);
   hmcerror__14->SetBinContent(13,127.5377);
   hmcerror__14->SetBinContent(14,139.0683);
   hmcerror__14->SetBinContent(15,157.787);
   hmcerror__14->SetBinContent(16,184.748);
   hmcerror__14->SetBinContent(17,237.8888);
   hmcerror__14->SetBinContent(18,248.3675);
   hmcerror__14->SetBinContent(19,316.1003);
   hmcerror__14->SetBinContent(20,488.7341);
   hmcerror__14->SetBinError(1,41.44323);
   hmcerror__14->SetBinError(2,36.60862);
   hmcerror__14->SetBinError(3,33.96573);
   hmcerror__14->SetBinError(4,33.12962);
   hmcerror__14->SetBinError(5,30.56619);
   hmcerror__14->SetBinError(6,33.88459);
   hmcerror__14->SetBinError(7,34.41756);
   hmcerror__14->SetBinError(8,34.29736);
   hmcerror__14->SetBinError(9,37.4852);
   hmcerror__14->SetBinError(10,41.70766);
   hmcerror__14->SetBinError(11,47.43334);
   hmcerror__14->SetBinError(12,50.85958);
   hmcerror__14->SetBinError(13,48.36056);
   hmcerror__14->SetBinError(14,58.93734);
   hmcerror__14->SetBinError(15,61.43974);
   hmcerror__14->SetBinError(16,80.07844);
   hmcerror__14->SetBinError(17,85.41441);
   hmcerror__14->SetBinError(18,91.12422);
   hmcerror__14->SetBinError(19,120.2648);
   hmcerror__14->SetBinError(20,127.2124);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.7/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

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
   0.3399841,
   0.4009175,
   0.4191405,
   0.4209563,
   0.3919691,
   0.3730619,
   0.444625,
   0.3818647,
   0.4044291,
   0.3866567,
   0.4191034,
   0.4014133,
   0.3791863,
   0.4238015,
   0.389384,
   0.4334467,
   0.3590519,
   0.3668927,
   0.3804642,
   0.2602897};
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
   0.3399841,
   0.4009175,
   0.4191405,
   0.4209563,
   0.3919691,
   0.3730619,
   0.444625,
   0.3818647,
   0.4044291,
   0.3866567,
   0.4191034,
   0.4014133,
   0.3791863,
   0.4238015,
   0.389384,
   0.4334467,
   0.3590519,
   0.3668927,
   0.3804642,
   0.2602897};
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
   0.2875548,
   0.3330044,
   0.3497497,
   0.3730514,
   0.3525061,
   0.315903,
   0.3641984,
   0.3452909,
   0.3695179,
   0.3589193,
   0.3774362,
   0.3702472,
   0.3601499,
   0.387594,
   0.3736986,
   0.3805884,
   0.3276492,
   0.3471938,
   0.3053646,
   0.2435042};
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
   0.2875548,
   0.3330044,
   0.3497497,
   0.3730514,
   0.3525061,
   0.315903,
   0.3641984,
   0.3452909,
   0.3695179,
   0.3589193,
   0.3774362,
   0.3702472,
   0.3601499,
   0.387594,
   0.3736986,
   0.3805884,
   0.3276492,
   0.3471938,
   0.3053646,
   0.2435042};
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
   0.8367682,
   0.7337471,
   1.061248,
   0.8513251,
   1.179773,
   0.847753,
   1.007647,
   1.024322,
   0.8631228,
   0.825087,
   0.8923985,
   0.8760763,
   0.7997633,
   0.8988391,
   0.7795318,
   0.801091,
   0.7356379,
   0.9542311,
   0.9300846,
   0.7672884};
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
   0.0828524,
   0.09102735,
   0.1159562,
   0.1056139,
   0.124566,
   0.09798153,
   0.1157011,
   0.1081528,
   0.0978382,
   0.08859581,
   0.08879697,
   0.08315348,
   0.07918837,
   0.08039462,
   0.07028802,
   0.06584928,
   0.055609,
   0.06198397,
   0.05424363,
   0.0396226};
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
   0.0828524,
   0.08880968,
   0.1134684,
   0.1030408,
   0.1219911,
   0.09575866,
   0.1130916,
   0.1059171,
   0.09566098,
   0.0867287,
   0.08879697,
   0.08315348,
   0.07918837,
   0.08039462,
   0.07028802,
   0.06584928,
   0.055609,
   0.06198397,
   0.05424363,
   0.0396226};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.5768153);
   Graph_Graph3020->SetMaximum(1.367668);
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
