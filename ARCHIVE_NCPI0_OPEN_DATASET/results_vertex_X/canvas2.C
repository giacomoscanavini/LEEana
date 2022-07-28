#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr 15 12:58:56 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-40,-0.64,293.3333,53.92842);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hmc__4->SetBinContent(0,0.9441423);
   hmc__4->SetBinContent(1,15.74495);
   hmc__4->SetBinContent(2,20.95239);
   hmc__4->SetBinContent(3,25.57427);
   hmc__4->SetBinContent(4,24.24038);
   hmc__4->SetBinContent(5,25.4327);
   hmc__4->SetBinContent(6,24.09862);
   hmc__4->SetBinContent(7,25.94539);
   hmc__4->SetBinContent(8,27.46241);
   hmc__4->SetBinContent(9,28.50348);
   hmc__4->SetBinContent(10,27.33222);
   hmc__4->SetBinContent(11,28.59397);
   hmc__4->SetBinContent(12,27.82702);
   hmc__4->SetBinContent(13,27.43121);
   hmc__4->SetBinContent(14,27.89972);
   hmc__4->SetBinContent(15,27.1925);
   hmc__4->SetBinContent(16,27.8856);
   hmc__4->SetBinContent(17,28.82922);
   hmc__4->SetBinContent(18,30.00829);
   hmc__4->SetBinContent(19,28.81499);
   hmc__4->SetBinContent(20,30.31856);
   hmc__4->SetBinContent(21,28.15608);
   hmc__4->SetBinContent(22,31.10664);
   hmc__4->SetBinContent(23,29.83616);
   hmc__4->SetBinContent(24,24.91023);
   hmc__4->SetBinContent(25,11.51264);
   hmc__4->SetBinContent(26,1.013868);
   hmc__4->SetBinError(0,0.2246142);
   hmc__4->SetBinError(1,4.243658);
   hmc__4->SetBinError(2,5.761814);
   hmc__4->SetBinError(3,6.910711);
   hmc__4->SetBinError(4,6.526161);
   hmc__4->SetBinError(5,6.809871);
   hmc__4->SetBinError(6,5.727044);
   hmc__4->SetBinError(7,6.671487);
   hmc__4->SetBinError(8,6.819669);
   hmc__4->SetBinError(9,6.794853);
   hmc__4->SetBinError(10,6.837044);
   hmc__4->SetBinError(11,7.650901);
   hmc__4->SetBinError(12,6.619828);
   hmc__4->SetBinError(13,8.134092);
   hmc__4->SetBinError(14,6.533356);
   hmc__4->SetBinError(15,7.329023);
   hmc__4->SetBinError(16,6.491444);
   hmc__4->SetBinError(17,7.096188);
   hmc__4->SetBinError(18,9.101111);
   hmc__4->SetBinError(19,7.154636);
   hmc__4->SetBinError(20,7.484747);
   hmc__4->SetBinError(21,7.655549);
   hmc__4->SetBinError(22,6.79386);
   hmc__4->SetBinError(23,7.245619);
   hmc__4->SetBinError(24,5.723542);
   hmc__4->SetBinError(25,3.405706);
   hmc__4->SetBinError(26,0.8263962);
   hmc__4->SetMinimum(-0.64);
   hmc__4->SetMaximum(51.2);
   hmc__4->SetEntries(648.6285);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,260);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(32.66197);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hbadmatch_stack_1->SetBinContent(1,0.2836894);
   hbadmatch_stack_1->SetBinContent(2,0.2988259);
   hbadmatch_stack_1->SetBinContent(3,0.3680257);
   hbadmatch_stack_1->SetBinContent(4,0.2988259);
   hbadmatch_stack_1->SetBinContent(5,0.3506073);
   hbadmatch_stack_1->SetBinContent(6,0.6106187);
   hbadmatch_stack_1->SetBinContent(7,0.2520894);
   hbadmatch_stack_1->SetBinContent(8,0.4373291);
   hbadmatch_stack_1->SetBinContent(9,0.3153337);
   hbadmatch_stack_1->SetBinContent(10,0.6523795);
   hbadmatch_stack_1->SetBinContent(11,0.3229342);
   hbadmatch_stack_1->SetBinContent(12,0.5947355);
   hbadmatch_stack_1->SetBinContent(13,0.6887489);
   hbadmatch_stack_1->SetBinContent(14,0.8138875);
   hbadmatch_stack_1->SetBinContent(15,0.4833197);
   hbadmatch_stack_1->SetBinContent(16,0.7823042);
   hbadmatch_stack_1->SetBinContent(17,0.6236075);
   hbadmatch_stack_1->SetBinContent(18,0.8647645);
   hbadmatch_stack_1->SetBinContent(19,1.110624);
   hbadmatch_stack_1->SetBinContent(20,0.4594874);
   hbadmatch_stack_1->SetBinContent(21,0.5232421);
   hbadmatch_stack_1->SetBinContent(22,0.7648073);
   hbadmatch_stack_1->SetBinContent(23,0.9421584);
   hbadmatch_stack_1->SetBinContent(24,0.7282016);
   hbadmatch_stack_1->SetBinContent(25,0.4312347);
   hbadmatch_stack_1->SetBinError(1,0.1240184);
   hbadmatch_stack_1->SetBinError(2,0.1265093);
   hbadmatch_stack_1->SetBinError(3,0.1441985);
   hbadmatch_stack_1->SetBinError(4,0.1265093);
   hbadmatch_stack_1->SetBinError(5,0.1405451);
   hbadmatch_stack_1->SetBinError(6,0.1877439);
   hbadmatch_stack_1->SetBinError(7,0.1113448);
   hbadmatch_stack_1->SetBinError(8,0.1496841);
   hbadmatch_stack_1->SetBinError(9,0.1156223);
   hbadmatch_stack_1->SetBinError(10,0.2039192);
   hbadmatch_stack_1->SetBinError(11,0.1213439);
   hbadmatch_stack_1->SetBinError(12,0.1751822);
   hbadmatch_stack_1->SetBinError(13,0.1902848);
   hbadmatch_stack_1->SetBinError(14,0.2100448);
   hbadmatch_stack_1->SetBinError(15,0.164902);
   hbadmatch_stack_1->SetBinError(16,0.2143457);
   hbadmatch_stack_1->SetBinError(17,0.1748359);
   hbadmatch_stack_1->SetBinError(18,0.2224631);
   hbadmatch_stack_1->SetBinError(19,0.5104951);
   hbadmatch_stack_1->SetBinError(20,0.1607444);
   hbadmatch_stack_1->SetBinError(21,0.1705018);
   hbadmatch_stack_1->SetBinError(22,0.2033417);
   hbadmatch_stack_1->SetBinError(23,0.3329432);
   hbadmatch_stack_1->SetBinError(24,0.2000033);
   hbadmatch_stack_1->SetBinError(25,0.1444205);
   hbadmatch_stack_1->SetEntries(380);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hext_stack_2->SetBinContent(0,0.02453971);
   hext_stack_2->SetBinContent(1,1.004784);
   hext_stack_2->SetBinContent(2,1.139752);
   hext_stack_2->SetBinContent(3,1.638741);
   hext_stack_2->SetBinContent(4,1.387881);
   hext_stack_2->SetBinContent(5,1.749169);
   hext_stack_2->SetBinContent(6,1.761439);
   hext_stack_2->SetBinContent(7,1.55012);
   hext_stack_2->SetBinContent(8,0.793465);
   hext_stack_2->SetBinContent(9,1.761439);
   hext_stack_2->SetBinContent(10,1.899139);
   hext_stack_2->SetBinContent(11,3.004813);
   hext_stack_2->SetBinContent(12,2.496286);
   hext_stack_2->SetBinContent(13,1.636009);
   hext_stack_2->SetBinContent(14,2.557636);
   hext_stack_2->SetBinContent(15,1.56239);
   hext_stack_2->SetBinContent(16,2.419936);
   hext_stack_2->SetBinContent(17,2.095457);
   hext_stack_2->SetBinContent(18,1.61147);
   hext_stack_2->SetBinContent(19,2.931194);
   hext_stack_2->SetBinContent(20,2.569906);
   hext_stack_2->SetBinContent(21,2.643525);
   hext_stack_2->SetBinContent(22,3.82555);
   hext_stack_2->SetBinContent(23,2.469015);
   hext_stack_2->SetBinContent(24,2.594445);
   hext_stack_2->SetBinContent(25,1.130214);
   hext_stack_2->SetBinContent(26,0.1990491);
   hext_stack_2->SetBinError(0,0.01735219);
   hext_stack_2->SetBinError(1,0.4012998);
   hext_stack_2->SetBinError(2,0.4033579);
   hext_stack_2->SetBinError(3,0.5294854);
   hext_stack_2->SetBinError(4,0.4504668);
   hext_stack_2->SetBinError(5,0.5307634);
   hext_stack_2->SetBinError(6,0.5309052);
   hext_stack_2->SetBinError(7,0.4920256);
   hext_stack_2->SetBinError(8,0.348239);
   hext_stack_2->SetBinError(9,0.5309052);
   hext_stack_2->SetBinError(10,0.5663286);
   hext_stack_2->SetBinError(11,0.7212391);
   hext_stack_2->SetBinError(12,0.6630156);
   hext_stack_2->SetBinError(13,0.4930954);
   hext_stack_2->SetBinError(14,0.6635831);
   hext_stack_2->SetBinError(15,0.4921786);
   hext_stack_2->SetBinError(16,0.6336203);
   hext_stack_2->SetBinError(17,0.5684513);
   hext_stack_2->SetBinError(18,0.49279);
   hext_stack_2->SetBinError(19,0.7206126);
   hext_stack_2->SetBinError(20,0.6636965);
   hext_stack_2->SetBinError(21,0.6643767);
   hext_stack_2->SetBinError(22,0.8239958);
   hext_stack_2->SetBinError(23,0.6340953);
   hext_stack_2->SetBinError(24,0.6639233);
   hext_stack_2->SetBinError(25,0.4469438);
   hext_stack_2->SetBinError(26,0.1990491);
   hext_stack_2->SetEntries(946);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hdirt_stack_3->SetBinContent(0,0.008219617);
   hdirt_stack_3->SetBinContent(1,0.1288343);
   hdirt_stack_3->SetBinContent(2,0.1975105);
   hdirt_stack_3->SetBinContent(3,0.3978173);
   hdirt_stack_3->SetBinContent(4,0.3746087);
   hdirt_stack_3->SetBinContent(5,0.5755288);
   hdirt_stack_3->SetBinContent(6,0.2374846);
   hdirt_stack_3->SetBinContent(7,0.2150776);
   hdirt_stack_3->SetBinContent(8,0.2260483);
   hdirt_stack_3->SetBinContent(9,0.1687705);
   hdirt_stack_3->SetBinContent(10,0.02622191);
   hdirt_stack_3->SetBinContent(11,0.139252);
   hdirt_stack_3->SetBinContent(12,0.05242869);
   hdirt_stack_3->SetBinContent(13,0.2443242);
   hdirt_stack_3->SetBinContent(14,0.1225251);
   hdirt_stack_3->SetBinContent(15,0.1504257);
   hdirt_stack_3->SetBinContent(16,0.3369088);
   hdirt_stack_3->SetBinContent(17,0.2284);
   hdirt_stack_3->SetBinContent(18,0.2473308);
   hdirt_stack_3->SetBinContent(19,0.2644639);
   hdirt_stack_3->SetBinContent(20,0.4573327);
   hdirt_stack_3->SetBinContent(21,0.3370868);
   hdirt_stack_3->SetBinContent(22,0.3978326);
   hdirt_stack_3->SetBinContent(23,0.4404569);
   hdirt_stack_3->SetBinContent(24,0.2358514);
   hdirt_stack_3->SetBinContent(25,0.1736154);
   hdirt_stack_3->SetBinError(0,0.008219618);
   hdirt_stack_3->SetBinError(1,0.06902369);
   hdirt_stack_3->SetBinError(2,0.08257018);
   hdirt_stack_3->SetBinError(3,0.1266699);
   hdirt_stack_3->SetBinError(4,0.1279705);
   hdirt_stack_3->SetBinError(5,0.3156027);
   hdirt_stack_3->SetBinError(6,0.09953559);
   hdirt_stack_3->SetBinError(7,0.09210341);
   hdirt_stack_3->SetBinError(8,0.09840629);
   hdirt_stack_3->SetBinError(9,0.08391929);
   hdirt_stack_3->SetBinError(10,0.01519293);
   hdirt_stack_3->SetBinError(11,0.07133701);
   hdirt_stack_3->SetBinError(12,0.0449667);
   hdirt_stack_3->SetBinError(13,0.1062335);
   hdirt_stack_3->SetBinError(14,0.06481386);
   hdirt_stack_3->SetBinError(15,0.07759877);
   hdirt_stack_3->SetBinError(16,0.1183561);
   hdirt_stack_3->SetBinError(17,0.09091264);
   hdirt_stack_3->SetBinError(18,0.1000207);
   hdirt_stack_3->SetBinError(19,0.1007516);
   hdirt_stack_3->SetBinError(20,0.2248827);
   hdirt_stack_3->SetBinError(21,0.1166951);
   hdirt_stack_3->SetBinError(22,0.1234766);
   hdirt_stack_3->SetBinError(23,0.1372469);
   hdirt_stack_3->SetBinError(24,0.0911247);
   hdirt_stack_3->SetBinError(25,0.08228302);
   hdirt_stack_3->SetEntries(237);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   houtFV_stack_4->SetBinContent(0,0.8858826);
   houtFV_stack_4->SetBinContent(1,7.399396);
   houtFV_stack_4->SetBinContent(2,3.137274);
   houtFV_stack_4->SetBinContent(3,3.355879);
   houtFV_stack_4->SetBinContent(4,1.962499);
   houtFV_stack_4->SetBinContent(5,2.601243);
   houtFV_stack_4->SetBinContent(6,1.441923);
   houtFV_stack_4->SetBinContent(7,2.15426);
   houtFV_stack_4->SetBinContent(8,1.982815);
   houtFV_stack_4->SetBinContent(9,1.630799);
   houtFV_stack_4->SetBinContent(10,1.797265);
   houtFV_stack_4->SetBinContent(11,1.710148);
   houtFV_stack_4->SetBinContent(12,1.614192);
   houtFV_stack_4->SetBinContent(13,1.771292);
   houtFV_stack_4->SetBinContent(14,2.018568);
   houtFV_stack_4->SetBinContent(15,1.574521);
   houtFV_stack_4->SetBinContent(16,1.835584);
   houtFV_stack_4->SetBinContent(17,1.888177);
   houtFV_stack_4->SetBinContent(18,2.784662);
   houtFV_stack_4->SetBinContent(19,2.443564);
   houtFV_stack_4->SetBinContent(20,1.948481);
   houtFV_stack_4->SetBinContent(21,2.247036);
   houtFV_stack_4->SetBinContent(22,3.345767);
   houtFV_stack_4->SetBinContent(23,3.959451);
   houtFV_stack_4->SetBinContent(24,3.795624);
   houtFV_stack_4->SetBinContent(25,4.694647);
   houtFV_stack_4->SetBinContent(26,0.4520771);
   houtFV_stack_4->SetBinError(0,0.2230645);
   houtFV_stack_4->SetBinError(1,0.6325335);
   houtFV_stack_4->SetBinError(2,0.4050686);
   houtFV_stack_4->SetBinError(3,0.4359418);
   houtFV_stack_4->SetBinError(4,0.3210438);
   houtFV_stack_4->SetBinError(5,0.384795);
   houtFV_stack_4->SetBinError(6,0.2723446);
   houtFV_stack_4->SetBinError(7,0.3505145);
   houtFV_stack_4->SetBinError(8,0.3233858);
   houtFV_stack_4->SetBinError(9,0.293518);
   houtFV_stack_4->SetBinError(10,0.3252658);
   houtFV_stack_4->SetBinError(11,0.3033055);
   houtFV_stack_4->SetBinError(12,0.2974654);
   houtFV_stack_4->SetBinError(13,0.3128423);
   houtFV_stack_4->SetBinError(14,0.3383271);
   houtFV_stack_4->SetBinError(15,0.2966839);
   houtFV_stack_4->SetBinError(16,0.3212892);
   houtFV_stack_4->SetBinError(17,0.3073338);
   houtFV_stack_4->SetBinError(18,0.4006639);
   houtFV_stack_4->SetBinError(19,0.3648591);
   houtFV_stack_4->SetBinError(20,0.3221145);
   houtFV_stack_4->SetBinError(21,0.3405396);
   houtFV_stack_4->SetBinError(22,0.4313764);
   houtFV_stack_4->SetBinError(23,0.4761372);
   houtFV_stack_4->SetBinError(24,0.4598253);
   houtFV_stack_4->SetBinError(25,0.5083745);
   houtFV_stack_4->SetBinError(26,0.1553045);
   houtFV_stack_4->SetEntries(1718);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hNCpi0inFV_stack_5->SetBinContent(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinContent(1,3.937533);
   hNCpi0inFV_stack_5->SetBinContent(2,10.22204);
   hNCpi0inFV_stack_5->SetBinContent(3,12.71106);
   hNCpi0inFV_stack_5->SetBinContent(4,13.2358);
   hNCpi0inFV_stack_5->SetBinContent(5,14.57513);
   hNCpi0inFV_stack_5->SetBinContent(6,13.74222);
   hNCpi0inFV_stack_5->SetBinContent(7,14.43305);
   hNCpi0inFV_stack_5->SetBinContent(8,16.79082);
   hNCpi0inFV_stack_5->SetBinContent(9,16.69241);
   hNCpi0inFV_stack_5->SetBinContent(10,15.11262);
   hNCpi0inFV_stack_5->SetBinContent(11,16.11073);
   hNCpi0inFV_stack_5->SetBinContent(12,14.82655);
   hNCpi0inFV_stack_5->SetBinContent(13,15.67382);
   hNCpi0inFV_stack_5->SetBinContent(14,14.64287);
   hNCpi0inFV_stack_5->SetBinContent(15,13.85895);
   hNCpi0inFV_stack_5->SetBinContent(16,15.27497);
   hNCpi0inFV_stack_5->SetBinContent(17,14.93232);
   hNCpi0inFV_stack_5->SetBinContent(18,14.65186);
   hNCpi0inFV_stack_5->SetBinContent(19,14.07032);
   hNCpi0inFV_stack_5->SetBinContent(20,15.42259);
   hNCpi0inFV_stack_5->SetBinContent(21,13.94461);
   hNCpi0inFV_stack_5->SetBinContent(22,13.89182);
   hNCpi0inFV_stack_5->SetBinContent(23,12.53242);
   hNCpi0inFV_stack_5->SetBinContent(24,9.98158);
   hNCpi0inFV_stack_5->SetBinContent(25,2.266695);
   hNCpi0inFV_stack_5->SetBinContent(26,0.1129571);
   hNCpi0inFV_stack_5->SetBinError(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(1,0.4535243);
   hNCpi0inFV_stack_5->SetBinError(2,0.7402668);
   hNCpi0inFV_stack_5->SetBinError(3,0.8266703);
   hNCpi0inFV_stack_5->SetBinError(4,0.8416448);
   hNCpi0inFV_stack_5->SetBinError(5,0.8885178);
   hNCpi0inFV_stack_5->SetBinError(6,0.8490702);
   hNCpi0inFV_stack_5->SetBinError(7,0.8806359);
   hNCpi0inFV_stack_5->SetBinError(8,0.9535058);
   hNCpi0inFV_stack_5->SetBinError(9,0.9496427);
   hNCpi0inFV_stack_5->SetBinError(10,0.9025568);
   hNCpi0inFV_stack_5->SetBinError(11,0.9381854);
   hNCpi0inFV_stack_5->SetBinError(12,0.8937375);
   hNCpi0inFV_stack_5->SetBinError(13,0.9182073);
   hNCpi0inFV_stack_5->SetBinError(14,0.8751997);
   hNCpi0inFV_stack_5->SetBinError(15,0.8606395);
   hNCpi0inFV_stack_5->SetBinError(16,0.9187581);
   hNCpi0inFV_stack_5->SetBinError(17,0.9029721);
   hNCpi0inFV_stack_5->SetBinError(18,0.8909096);
   hNCpi0inFV_stack_5->SetBinError(19,0.8674914);
   hNCpi0inFV_stack_5->SetBinError(20,0.9247402);
   hNCpi0inFV_stack_5->SetBinError(21,0.8648062);
   hNCpi0inFV_stack_5->SetBinError(22,0.8661786);
   hNCpi0inFV_stack_5->SetBinError(23,0.8290109);
   hNCpi0inFV_stack_5->SetBinError(24,0.7361253);
   hNCpi0inFV_stack_5->SetBinError(25,0.3469288);
   hNCpi0inFV_stack_5->SetBinError(26,0.0669989);
   hNCpi0inFV_stack_5->SetEntries(8770);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hCCpi0inFV_stack_6->SetBinContent(0,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(1,1.942369);
   hCCpi0inFV_stack_6->SetBinContent(2,3.763724);
   hCCpi0inFV_stack_6->SetBinContent(3,3.927599);
   hCCpi0inFV_stack_6->SetBinContent(4,4.396922);
   hCCpi0inFV_stack_6->SetBinContent(5,3.472954);
   hCCpi0inFV_stack_6->SetBinContent(6,3.75903);
   hCCpi0inFV_stack_6->SetBinContent(7,4.690703);
   hCCpi0inFV_stack_6->SetBinContent(8,4.013464);
   hCCpi0inFV_stack_6->SetBinContent(9,5.398749);
   hCCpi0inFV_stack_6->SetBinContent(10,4.251751);
   hCCpi0inFV_stack_6->SetBinContent(11,4.004869);
   hCCpi0inFV_stack_6->SetBinContent(12,4.254004);
   hCCpi0inFV_stack_6->SetBinContent(13,4.235522);
   hCCpi0inFV_stack_6->SetBinContent(14,4.374811);
   hCCpi0inFV_stack_6->SetBinContent(15,5.049811);
   hCCpi0inFV_stack_6->SetBinContent(16,4.126588);
   hCCpi0inFV_stack_6->SetBinContent(17,5.193674);
   hCCpi0inFV_stack_6->SetBinContent(18,4.98185);
   hCCpi0inFV_stack_6->SetBinContent(19,4.5679);
   hCCpi0inFV_stack_6->SetBinContent(20,5.935216);
   hCCpi0inFV_stack_6->SetBinContent(21,4.782757);
   hCCpi0inFV_stack_6->SetBinContent(22,5.054407);
   hCCpi0inFV_stack_6->SetBinContent(23,5.884421);
   hCCpi0inFV_stack_6->SetBinContent(24,4.187542);
   hCCpi0inFV_stack_6->SetBinContent(25,1.768682);
   hCCpi0inFV_stack_6->SetBinContent(26,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(0,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(1,0.3225366);
   hCCpi0inFV_stack_6->SetBinError(2,0.4511531);
   hCCpi0inFV_stack_6->SetBinError(3,0.453433);
   hCCpi0inFV_stack_6->SetBinError(4,0.4920514);
   hCCpi0inFV_stack_6->SetBinError(5,0.4330893);
   hCCpi0inFV_stack_6->SetBinError(6,0.4510082);
   hCCpi0inFV_stack_6->SetBinError(7,0.5109324);
   hCCpi0inFV_stack_6->SetBinError(8,0.4592128);
   hCCpi0inFV_stack_6->SetBinError(9,0.5432306);
   hCCpi0inFV_stack_6->SetBinError(10,0.4816781);
   hCCpi0inFV_stack_6->SetBinError(11,0.4631194);
   hCCpi0inFV_stack_6->SetBinError(12,0.4763057);
   hCCpi0inFV_stack_6->SetBinError(13,0.4837097);
   hCCpi0inFV_stack_6->SetBinError(14,0.4806795);
   hCCpi0inFV_stack_6->SetBinError(15,0.5315152);
   hCCpi0inFV_stack_6->SetBinError(16,0.4658106);
   hCCpi0inFV_stack_6->SetBinError(17,0.5410505);
   hCCpi0inFV_stack_6->SetBinError(18,0.5201042);
   hCCpi0inFV_stack_6->SetBinError(19,0.497816);
   hCCpi0inFV_stack_6->SetBinError(20,0.5755368);
   hCCpi0inFV_stack_6->SetBinError(21,0.5103046);
   hCCpi0inFV_stack_6->SetBinError(22,0.5290678);
   hCCpi0inFV_stack_6->SetBinError(23,0.5726112);
   hCCpi0inFV_stack_6->SetBinError(24,0.4766541);
   hCCpi0inFV_stack_6->SetBinError(25,0.3014687);
   hCCpi0inFV_stack_6->SetBinError(26,0.0127502);
   hCCpi0inFV_stack_6->SetEntries(2809);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hNCinFV_stack_7->SetBinContent(1,0.3607822);
   hNCinFV_stack_7->SetBinContent(2,0.8855224);
   hNCinFV_stack_7->SetBinContent(3,1.330172);
   hNCinFV_stack_7->SetBinContent(4,1.095097);
   hNCinFV_stack_7->SetBinContent(5,0.8363162);
   hNCinFV_stack_7->SetBinContent(6,1.120597);
   hNCinFV_stack_7->SetBinContent(7,1.169803);
   hNCinFV_stack_7->SetBinContent(8,1.528791);
   hNCinFV_stack_7->SetBinContent(9,0.7871101);
   hNCinFV_stack_7->SetBinContent(10,1.259055);
   hNCinFV_stack_7->SetBinContent(11,1.184348);
   hNCinFV_stack_7->SetBinContent(12,0.7998604);
   hNCinFV_stack_7->SetBinContent(13,1.319216);
   hNCinFV_stack_7->SetBinContent(14,1.133348);
   hNCinFV_stack_7->SetBinContent(15,1.468629);
   hNCinFV_stack_7->SetBinContent(16,0.9602288);
   hNCinFV_stack_7->SetBinContent(17,1.567042);
   hNCinFV_stack_7->SetBinContent(18,1.322771);
   hNCinFV_stack_7->SetBinContent(19,1.430379);
   hNCinFV_stack_7->SetBinContent(20,1.404878);
   hNCinFV_stack_7->SetBinContent(21,0.9602288);
   hNCinFV_stack_7->SetBinContent(22,1.333761);
   hNCinFV_stack_7->SetBinContent(23,1.118803);
   hNCinFV_stack_7->SetBinContent(24,0.9201835);
   hNCinFV_stack_7->SetBinContent(25,0.2113693);
   hNCinFV_stack_7->SetBinContent(26,0.07470649);
   hNCinFV_stack_7->SetBinError(1,0.1408658);
   hNCinFV_stack_7->SetBinError(2,0.2117203);
   hNCinFV_stack_7->SetBinError(3,0.2736492);
   hNCinFV_stack_7->SetBinError(4,0.2443197);
   hNCinFV_stack_7->SetBinError(5,0.2028533);
   hNCinFV_stack_7->SetBinError(6,0.2449842);
   hNCinFV_stack_7->SetBinError(7,0.2523752);
   hNCinFV_stack_7->SetBinError(8,0.2942145);
   hNCinFV_stack_7->SetBinError(9,0.1935806);
   hNCinFV_stack_7->SetBinError(10,0.2546198);
   hNCinFV_stack_7->SetBinError(11,0.2466375);
   hNCinFV_stack_7->SetBinError(12,0.1940001);
   hNCinFV_stack_7->SetBinError(13,0.2677603);
   hNCinFV_stack_7->SetBinError(14,0.2453157);
   hNCinFV_stack_7->SetBinError(15,0.2823081);
   hNCinFV_stack_7->SetBinError(16,0.2209675);
   hNCinFV_stack_7->SetBinError(17,0.2950422);
   hNCinFV_stack_7->SetBinError(18,0.2620552);
   hNCinFV_stack_7->SetBinError(19,0.281443);
   hNCinFV_stack_7->SetBinError(20,0.2808648);
   hNCinFV_stack_7->SetBinError(21,0.2209675);
   hNCinFV_stack_7->SetBinError(22,0.2623593);
   hNCinFV_stack_7->SetBinError(23,0.2510836);
   hNCinFV_stack_7->SetBinError(24,0.2266378);
   hNCinFV_stack_7->SetBinError(25,0.1088158);
   hNCinFV_stack_7->SetBinError(26,0.06325464);
   hNCinFV_stack_7->SetEntries(744);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hnumuCCinFV_stack_8->SetBinContent(1,0.6748107);
   hnumuCCinFV_stack_8->SetBinContent(2,1.292457);
   hnumuCCinFV_stack_8->SetBinContent(3,1.646891);
   hnumuCCinFV_stack_8->SetBinContent(4,1.243528);
   hnumuCCinFV_stack_8->SetBinContent(5,1.191455);
   hnumuCCinFV_stack_8->SetBinContent(6,1.285218);
   hnumuCCinFV_stack_8->SetBinContent(7,1.427928);
   hnumuCCinFV_stack_8->SetBinContent(8,1.543254);
   hnumuCCinFV_stack_8->SetBinContent(9,1.578133);
   hnumuCCinFV_stack_8->SetBinContent(10,2.178002);
   hnumuCCinFV_stack_8->SetBinContent(11,1.76784);
   hnumuCCinFV_stack_8->SetBinContent(12,2.855827);
   hnumuCCinFV_stack_8->SetBinContent(13,1.696741);
   hnumuCCinFV_stack_8->SetBinContent(14,2.037456);
   hnumuCCinFV_stack_8->SetBinContent(15,3.016604);
   hnumuCCinFV_stack_8->SetBinContent(16,1.569529);
   hnumuCCinFV_stack_8->SetBinContent(17,2.121771);
   hnumuCCinFV_stack_8->SetBinContent(18,3.481622);
   hnumuCCinFV_stack_8->SetBinContent(19,1.914488);
   hnumuCCinFV_stack_8->SetBinContent(20,2.02046);
   hnumuCCinFV_stack_8->SetBinContent(21,2.5288);
   hnumuCCinFV_stack_8->SetBinContent(22,2.329455);
   hnumuCCinFV_stack_8->SetBinContent(23,2.427481);
   hnumuCCinFV_stack_8->SetBinContent(24,2.438727);
   hnumuCCinFV_stack_8->SetBinContent(25,0.8361843);
   hnumuCCinFV_stack_8->SetBinContent(26,0.162328);
   hnumuCCinFV_stack_8->SetBinError(1,0.1899445);
   hnumuCCinFV_stack_8->SetBinError(2,0.2818287);
   hnumuCCinFV_stack_8->SetBinError(3,0.5502997);
   hnumuCCinFV_stack_8->SetBinError(4,0.2912878);
   hnumuCCinFV_stack_8->SetBinError(5,0.2695655);
   hnumuCCinFV_stack_8->SetBinError(6,0.2741455);
   hnumuCCinFV_stack_8->SetBinError(7,0.2916336);
   hnumuCCinFV_stack_8->SetBinError(8,0.3144346);
   hnumuCCinFV_stack_8->SetBinError(9,0.5010593);
   hnumuCCinFV_stack_8->SetBinError(10,0.4502422);
   hnumuCCinFV_stack_8->SetBinError(11,0.4190089);
   hnumuCCinFV_stack_8->SetBinError(12,0.4783574);
   hnumuCCinFV_stack_8->SetBinError(13,0.3596903);
   hnumuCCinFV_stack_8->SetBinError(14,0.3629638);
   hnumuCCinFV_stack_8->SetBinError(15,0.635992);
   hnumuCCinFV_stack_8->SetBinError(16,0.2948253);
   hnumuCCinFV_stack_8->SetBinError(17,0.3565569);
   hnumuCCinFV_stack_8->SetBinError(18,0.6508379);
   hnumuCCinFV_stack_8->SetBinError(19,0.3440429);
   hnumuCCinFV_stack_8->SetBinError(20,0.3642483);
   hnumuCCinFV_stack_8->SetBinError(21,0.4588618);
   hnumuCCinFV_stack_8->SetBinError(22,0.3608668);
   hnumuCCinFV_stack_8->SetBinError(23,0.3847081);
   hnumuCCinFV_stack_8->SetBinError(24,0.5513693);
   hnumuCCinFV_stack_8->SetBinError(25,0.2317893);
   hnumuCCinFV_stack_8->SetBinError(26,0.1148969);
   hnumuCCinFV_stack_8->SetEntries(1106);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hnueCCinFV_stack_9->SetBinContent(1,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(2,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(3,0.1980937);
   hnueCCinFV_stack_9->SetBinContent(4,0.2452152);
   hnueCCinFV_stack_9->SetBinContent(5,0.08029817);
   hnueCCinFV_stack_9->SetBinContent(6,0.1400927);
   hnueCCinFV_stack_9->SetBinContent(7,0.05236269);
   hnueCCinFV_stack_9->SetBinContent(8,0.1464233);
   hnueCCinFV_stack_9->SetBinContent(9,0.1707372);
   hnueCCinFV_stack_9->SetBinContent(10,0.1557857);
   hnueCCinFV_stack_9->SetBinContent(11,0.349032);
   hnueCCinFV_stack_9->SetBinContent(12,0.3331371);
   hnueCCinFV_stack_9->SetBinContent(13,0.165542);
   hnueCCinFV_stack_9->SetBinContent(14,0.1986191);
   hnueCCinFV_stack_9->SetBinContent(15,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(16,0.5795518);
   hnueCCinFV_stack_9->SetBinContent(17,0.1787679);
   hnueCCinFV_stack_9->SetBinContent(18,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(19,0.08205506);
   hnueCCinFV_stack_9->SetBinContent(20,0.1002069);
   hnueCCinFV_stack_9->SetBinContent(21,0.1887932);
   hnueCCinFV_stack_9->SetBinContent(22,0.163243);
   hnueCCinFV_stack_9->SetBinContent(23,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(24,0.02808221);
   hnueCCinFV_stack_9->SetBinError(1,0.0127502);
   hnueCCinFV_stack_9->SetBinError(2,0.01528837);
   hnueCCinFV_stack_9->SetBinError(3,0.1015182);
   hnueCCinFV_stack_9->SetBinError(4,0.1446561);
   hnueCCinFV_stack_9->SetBinError(5,0.06461038);
   hnueCCinFV_stack_9->SetBinError(6,0.08910085);
   hnueCCinFV_stack_9->SetBinError(7,0.03145979);
   hnueCCinFV_stack_9->SetBinError(8,0.07769621);
   hnueCCinFV_stack_9->SetBinError(9,0.09179615);
   hnueCCinFV_stack_9->SetBinError(10,0.1021292);
   hnueCCinFV_stack_9->SetBinError(11,0.1456409);
   hnueCCinFV_stack_9->SetBinError(12,0.1427997);
   hnueCCinFV_stack_9->SetBinError(13,0.09665379);
   hnueCCinFV_stack_9->SetBinError(14,0.1080662);
   hnueCCinFV_stack_9->SetBinError(15,0.02785392);
   hnueCCinFV_stack_9->SetBinError(16,0.4745741);
   hnueCCinFV_stack_9->SetBinError(17,0.1062323);
   hnueCCinFV_stack_9->SetBinError(18,0.06195629);
   hnueCCinFV_stack_9->SetBinError(19,0.03365627);
   hnueCCinFV_stack_9->SetBinError(20,0.0657745);
   hnueCCinFV_stack_9->SetBinError(21,0.1110074);
   hnueCCinFV_stack_9->SetBinError(22,0.09053386);
   hnueCCinFV_stack_9->SetBinError(23,0.06195629);
   hnueCCinFV_stack_9->SetBinError(24,0.01994087);
   hnueCCinFV_stack_9->SetEntries(88);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);
   hmcerror__5->SetBinContent(0,0.9441423);
   hmcerror__5->SetBinContent(1,15.74495);
   hmcerror__5->SetBinContent(2,20.95239);
   hmcerror__5->SetBinContent(3,25.57427);
   hmcerror__5->SetBinContent(4,24.24038);
   hmcerror__5->SetBinContent(5,25.4327);
   hmcerror__5->SetBinContent(6,24.09862);
   hmcerror__5->SetBinContent(7,25.94539);
   hmcerror__5->SetBinContent(8,27.46241);
   hmcerror__5->SetBinContent(9,28.50348);
   hmcerror__5->SetBinContent(10,27.33222);
   hmcerror__5->SetBinContent(11,28.59397);
   hmcerror__5->SetBinContent(12,27.82702);
   hmcerror__5->SetBinContent(13,27.43121);
   hmcerror__5->SetBinContent(14,27.89972);
   hmcerror__5->SetBinContent(15,27.1925);
   hmcerror__5->SetBinContent(16,27.8856);
   hmcerror__5->SetBinContent(17,28.82922);
   hmcerror__5->SetBinContent(18,30.00829);
   hmcerror__5->SetBinContent(19,28.81499);
   hmcerror__5->SetBinContent(20,30.31856);
   hmcerror__5->SetBinContent(21,28.15608);
   hmcerror__5->SetBinContent(22,31.10664);
   hmcerror__5->SetBinContent(23,29.83616);
   hmcerror__5->SetBinContent(24,24.91023);
   hmcerror__5->SetBinContent(25,11.51264);
   hmcerror__5->SetBinContent(26,1.013868);
   hmcerror__5->SetBinError(0,0.2246142);
   hmcerror__5->SetBinError(1,4.243658);
   hmcerror__5->SetBinError(2,5.761814);
   hmcerror__5->SetBinError(3,6.910711);
   hmcerror__5->SetBinError(4,6.526161);
   hmcerror__5->SetBinError(5,6.809871);
   hmcerror__5->SetBinError(6,5.727044);
   hmcerror__5->SetBinError(7,6.671487);
   hmcerror__5->SetBinError(8,6.819669);
   hmcerror__5->SetBinError(9,6.794853);
   hmcerror__5->SetBinError(10,6.837044);
   hmcerror__5->SetBinError(11,7.650901);
   hmcerror__5->SetBinError(12,6.619828);
   hmcerror__5->SetBinError(13,8.134092);
   hmcerror__5->SetBinError(14,6.533356);
   hmcerror__5->SetBinError(15,7.329023);
   hmcerror__5->SetBinError(16,6.491444);
   hmcerror__5->SetBinError(17,7.096188);
   hmcerror__5->SetBinError(18,9.101111);
   hmcerror__5->SetBinError(19,7.154636);
   hmcerror__5->SetBinError(20,7.484747);
   hmcerror__5->SetBinError(21,7.655549);
   hmcerror__5->SetBinError(22,6.79386);
   hmcerror__5->SetBinError(23,7.245619);
   hmcerror__5->SetBinError(24,5.723542);
   hmcerror__5->SetBinError(25,3.405706);
   hmcerror__5->SetBinError(26,0.8263962);
   hmcerror__5->SetEntries(648.6285);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3005[25] = {
   11,
   20,
   23,
   17,
   16,
   20,
   25,
   22,
   32,
   22,
   20,
   29,
   17,
   26,
   27,
   22,
   27,
   27,
   22,
   24,
   19,
   25,
   29,
   17,
   6};
   Double_t _felx3005[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3005[25] = {
   3.4975,
   4.6266,
   4.9457,
   4.2835,
   4.1628,
   4.6266,
   5.1474,
   4.8417,
   5.7977,
   4.8417,
   4.6266,
   5.5285,
   4.2835,
   5.2453,
   5.3414,
   4.8417,
   5.3414,
   5.3414,
   4.8417,
   5.0476,
   4.5151,
   5.1474,
   5.5285,
   4.2835,
   2.67925};
   Double_t _fehx3005[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3005[25] = {
   3.27,
   4.4133,
   4.7346,
   4.0673,
   3.9454,
   4.4133,
   4.9374,
   4.6299,
   5.5904,
   4.6299,
   4.4133,
   5.3201,
   4.0673,
   5.0358,
   5.1322,
   4.6299,
   5.1322,
   5.1322,
   4.6299,
   4.837,
   4.3011,
   4.9374,
   5.3201,
   4.0673,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(2.988675);
   Graph_Graph3005->SetMaximum(41.01737);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.83#pm0.04(data err)#pm0.16(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.08/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 545.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 14.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 50.2","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.4","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 65.1","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  333.5","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 108.0","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 27.5","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 47.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.7","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3006[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3006[25] = {
   0.269525,
   0.2749955,
   0.2702212,
   0.2692269,
   0.2677604,
   0.2376503,
   0.2571357,
   0.2483274,
   0.2383867,
   0.2501459,
   0.2675705,
   0.2378921,
   0.2965269,
   0.2341728,
   0.2695236,
   0.2327884,
   0.2461457,
   0.3032866,
   0.2482956,
   0.2468702,
   0.2718968,
   0.2184055,
   0.2428469,
   0.2297667,
   0.2958232};
   Double_t _fehx3006[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3006[25] = {
   0.269525,
   0.2749955,
   0.2702212,
   0.2692269,
   0.2677604,
   0.2376503,
   0.2571357,
   0.2483274,
   0.2383867,
   0.2501459,
   0.2675705,
   0.2378921,
   0.2965269,
   0.2341728,
   0.2695236,
   0.2327884,
   0.2461457,
   0.3032866,
   0.2482956,
   0.2468702,
   0.2718968,
   0.2184055,
   0.2428469,
   0.2297667,
   0.2958232};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3007[25] = {
   0.1965588,
   0.1958719,
   0.2059389,
   0.2089737,
   0.2068093,
   0.2053531,
   0.2104522,
   0.2125216,
   0.1991235,
   0.1941207,
   0.2045157,
   0.1943269,
   0.1874983,
   0.204222,
   0.1991493,
   0.1944364,
   0.1972767,
   0.1965386,
   0.1974665,
   0.1983424,
   0.1995574,
   0.1848732,
   0.185445,
   0.179964,
   0.1871409};
   Double_t _fehx3007[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3007[25] = {
   0.1965588,
   0.1958719,
   0.2059389,
   0.2089737,
   0.2068093,
   0.2053531,
   0.2104522,
   0.2125216,
   0.1991235,
   0.1941207,
   0.2045157,
   0.1943269,
   0.1874983,
   0.204222,
   0.1991493,
   0.1944364,
   0.1972767,
   0.1965386,
   0.1974665,
   0.1983424,
   0.1995574,
   0.1848732,
   0.185445,
   0.179964,
   0.1871409};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3008[25] = {
   0.6986368,
   0.9545448,
   0.8993413,
   0.7013093,
   0.6291113,
   0.829923,
   0.9635621,
   0.8010949,
   1.12267,
   0.8049108,
   0.6994483,
   1.042153,
   0.619732,
   0.9319091,
   0.9929207,
   0.7889376,
   0.9365498,
   0.8997514,
   0.7634916,
   0.7915944,
   0.6748098,
   0.803687,
   0.971975,
   0.6824504,
   0.5211662};
   Double_t _felx3008[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3008[25] = {
   0.2221347,
   0.2208149,
   0.1933857,
   0.1767093,
   0.163679,
   0.1919861,
   0.1983936,
   0.1763028,
   0.2034032,
   0.1771426,
   0.1618034,
   0.1986738,
   0.1561542,
   0.1880055,
   0.1964291,
   0.1736272,
   0.1852773,
   0.1779975,
   0.1680271,
   0.1664855,
   0.1603597,
   0.1654759,
   0.1852953,
   0.1719574,
   0.2327224};
   Double_t _fehx3008[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3008[25] = {
   0.2076857,
   0.2106346,
   0.1851314,
   0.1677903,
   0.155131,
   0.183135,
   0.1902997,
   0.1685904,
   0.1961304,
   0.1693935,
   0.1543438,
   0.1911847,
   0.1482727,
   0.1804965,
   0.1887358,
   0.1660319,
   0.1780208,
   0.1710261,
   0.1606768,
   0.1595393,
   0.1527592,
   0.158725,
   0.1783105,
   0.1632783,
   0.2100804};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.1854081);
   Graph_Graph3008->SetMaximum(1.421836);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_bnb_10_reco_nuvtxX_all",25,0,260);

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
   TLine *line = new TLine(0,1,260,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
