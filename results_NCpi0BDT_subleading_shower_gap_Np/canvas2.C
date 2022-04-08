#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 16:37:55 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-13.84615,-0.9783829,101.5385,82.44163);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmc__4->SetBinContent(1,48.91914);
   hmc__4->SetBinContent(2,34.25987);
   hmc__4->SetBinContent(3,29.94701);
   hmc__4->SetBinContent(4,29.03696);
   hmc__4->SetBinContent(5,25.35471);
   hmc__4->SetBinContent(6,20.0954);
   hmc__4->SetBinContent(7,17.52641);
   hmc__4->SetBinContent(8,14.48581);
   hmc__4->SetBinContent(9,11.29094);
   hmc__4->SetBinContent(10,10.618);
   hmc__4->SetBinContent(11,8.574454);
   hmc__4->SetBinContent(12,6.949487);
   hmc__4->SetBinContent(13,5.523924);
   hmc__4->SetBinContent(14,5.574426);
   hmc__4->SetBinContent(15,3.212921);
   hmc__4->SetBinContent(16,3.999998);
   hmc__4->SetBinContent(17,3.159126);
   hmc__4->SetBinContent(18,2.285454);
   hmc__4->SetBinContent(19,24.71108);
   hmc__4->SetBinError(1,14.39401);
   hmc__4->SetBinError(2,8.688878);
   hmc__4->SetBinError(3,7.817243);
   hmc__4->SetBinError(4,8.825477);
   hmc__4->SetBinError(5,6.56676);
   hmc__4->SetBinError(6,8.054732);
   hmc__4->SetBinError(7,4.844798);
   hmc__4->SetBinError(8,4.556462);
   hmc__4->SetBinError(9,3.696341);
   hmc__4->SetBinError(10,3.567429);
   hmc__4->SetBinError(11,2.968465);
   hmc__4->SetBinError(12,4.124981);
   hmc__4->SetBinError(13,1.929229);
   hmc__4->SetBinError(14,2.165742);
   hmc__4->SetBinError(15,1.41744);
   hmc__4->SetBinError(16,1.791863);
   hmc__4->SetBinError(17,1.629753);
   hmc__4->SetBinError(18,1.620524);
   hmc__4->SetBinError(19,7.7041);
   hmc__4->SetMinimum(-0.9783829);
   hmc__4->SetMaximum(78.27063);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",18,0,90);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(51.3651);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,0.6823835);
   hbadmatch_stack_1->SetBinContent(2,0.5351109);
   hbadmatch_stack_1->SetBinContent(3,0.72301);
   hbadmatch_stack_1->SetBinContent(4,0.3607822);
   hbadmatch_stack_1->SetBinContent(5,0.4482389);
   hbadmatch_stack_1->SetBinContent(6,0.2537954);
   hbadmatch_stack_1->SetBinContent(7,0.3356809);
   hbadmatch_stack_1->SetBinContent(8,0.2384787);
   hbadmatch_stack_1->SetBinContent(9,0.2653861);
   hbadmatch_stack_1->SetBinContent(10,0.2089204);
   hbadmatch_stack_1->SetBinContent(11,0.2241195);
   hbadmatch_stack_1->SetBinContent(12,0.1736472);
   hbadmatch_stack_1->SetBinContent(13,0.1827541);
   hbadmatch_stack_1->SetBinContent(15,0.04015407);
   hbadmatch_stack_1->SetBinContent(16,0.0426439);
   hbadmatch_stack_1->SetBinContent(17,0.1827636);
   hbadmatch_stack_1->SetBinContent(18,0.01596177);
   hbadmatch_stack_1->SetBinContent(19,0.967698);
   hbadmatch_stack_1->SetBinError(1,0.1761064);
   hbadmatch_stack_1->SetBinError(2,0.1753921);
   hbadmatch_stack_1->SetBinError(3,0.3812926);
   hbadmatch_stack_1->SetBinError(4,0.1408658);
   hbadmatch_stack_1->SetBinError(5,0.1549416);
   hbadmatch_stack_1->SetBinError(6,0.111553);
   hbadmatch_stack_1->SetBinError(7,0.145457);
   hbadmatch_stack_1->SetBinError(8,0.1104972);
   hbadmatch_stack_1->SetBinError(9,0.1121479);
   hbadmatch_stack_1->SetBinError(10,0.1142843);
   hbadmatch_stack_1->SetBinError(11,0.1095603);
   hbadmatch_stack_1->SetBinError(12,0.1062992);
   hbadmatch_stack_1->SetBinError(13,0.09267607);
   hbadmatch_stack_1->SetBinError(15,0.023235);
   hbadmatch_stack_1->SetBinError(16,0.02488041);
   hbadmatch_stack_1->SetBinError(17,0.1031635);
   hbadmatch_stack_1->SetBinError(18,0.01596177);
   hbadmatch_stack_1->SetBinError(19,0.2414195);
   hbadmatch_stack_1->SetEntries(162);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hext_stack_2->SetBinContent(1,2.980274);
   hext_stack_2->SetBinContent(2,1.353803);
   hext_stack_2->SetBinContent(3,1.053863);
   hext_stack_2->SetBinContent(4,1.83779);
   hext_stack_2->SetBinContent(5,2.024569);
   hext_stack_2->SetBinContent(6,1.130214);
   hext_stack_2->SetBinContent(7,1.78871);
   hext_stack_2->SetBinContent(8,0.5453364);
   hext_stack_2->SetBinContent(9,0.9188949);
   hext_stack_2->SetBinContent(10,0.707576);
   hext_stack_2->SetBinContent(11,0.5085269);
   hext_stack_2->SetBinContent(12,0.2603984);
   hext_stack_2->SetBinContent(13,0.5085269);
   hext_stack_2->SetBinContent(14,0.8207361);
   hext_stack_2->SetBinContent(15,0.2358586);
   hext_stack_2->SetBinContent(16,0.4839872);
   hext_stack_2->SetBinContent(17,0.03680956);
   hext_stack_2->SetBinContent(18,0.02453971);
   hext_stack_2->SetBinContent(19,1.7369);
   hext_stack_2->SetBinError(1,0.7210303);
   hext_stack_2->SetBinError(2,0.4895717);
   hext_stack_2->SetBinError(3,0.4020494);
   hext_stack_2->SetBinError(4,0.5656636);
   hext_stack_2->SetBinError(5,0.5995376);
   hext_stack_2->SetBinError(6,0.4469438);
   hext_stack_2->SetBinError(7,0.5651311);
   hext_stack_2->SetBinError(8,0.2846888);
   hext_stack_2->SetBinError(9,0.3999846);
   hext_stack_2->SetBinError(10,0.3467226);
   hext_stack_2->SetBinError(11,0.2838944);
   hext_stack_2->SetBinError(12,0.2009311);
   hext_stack_2->SetBinError(13,0.2838944);
   hext_stack_2->SetBinError(14,0.3984762);
   hext_stack_2->SetBinError(15,0.2001804);
   hext_stack_2->SetBinError(16,0.2833636);
   hext_stack_2->SetBinError(17,0.02125201);
   hext_stack_2->SetBinError(18,0.01735219);
   hext_stack_2->SetBinError(19,0.5306215);
   hext_stack_2->SetEntries(312);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,0.2029842);
   hdirt_stack_3->SetBinContent(2,0.008219618);
   hdirt_stack_3->SetBinContent(3,0.4165068);
   hdirt_stack_3->SetBinContent(4,0.2461829);
   hdirt_stack_3->SetBinContent(5,0.1085639);
   hdirt_stack_3->SetBinContent(6,0.1060859);
   hdirt_stack_3->SetBinContent(7,0.008219617);
   hdirt_stack_3->SetBinContent(8,0.008219617);
   hdirt_stack_3->SetBinContent(9,0.04430502);
   hdirt_stack_3->SetBinContent(10,0.1048574);
   hdirt_stack_3->SetBinContent(11,0.008219617);
   hdirt_stack_3->SetBinContent(12,0.01643923);
   hdirt_stack_3->SetBinContent(13,0.06383124);
   hdirt_stack_3->SetBinContent(14,0.1053507);
   hdirt_stack_3->SetBinContent(15,0.05288891);
   hdirt_stack_3->SetBinContent(16,0.009851102);
   hdirt_stack_3->SetBinContent(19,0.06064831);
   hdirt_stack_3->SetBinError(1,0.08428209);
   hdirt_stack_3->SetBinError(2,0.008219618);
   hdirt_stack_3->SetBinError(3,0.3058118);
   hdirt_stack_3->SetBinError(4,0.1035579);
   hdirt_stack_3->SetBinError(5,0.07192471);
   hdirt_stack_3->SetBinError(6,0.06376294);
   hdirt_stack_3->SetBinError(7,0.008219618);
   hdirt_stack_3->SetBinError(8,0.008219618);
   hdirt_stack_3->SetBinError(9,0.04420917);
   hdirt_stack_3->SetBinError(10,0.06359251);
   hdirt_stack_3->SetBinError(11,0.008219618);
   hdirt_stack_3->SetBinError(12,0.01162429);
   hdirt_stack_3->SetBinError(13,0.04633528);
   hdirt_stack_3->SetBinError(14,0.06944596);
   hdirt_stack_3->SetBinError(15,0.05288891);
   hdirt_stack_3->SetBinError(16,0.009851101);
   hdirt_stack_3->SetBinError(19,0.04571177);
   hdirt_stack_3->SetEntries(54);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,3.268431);
   houtFV_stack_4->SetBinContent(2,1.867875);
   houtFV_stack_4->SetBinContent(3,1.58);
   houtFV_stack_4->SetBinContent(4,1.468629);
   houtFV_stack_4->SetBinContent(5,1.148566);
   houtFV_stack_4->SetBinContent(6,1.151609);
   houtFV_stack_4->SetBinContent(7,0.8217714);
   houtFV_stack_4->SetBinContent(8,0.8257871);
   houtFV_stack_4->SetBinContent(9,1.110371);
   houtFV_stack_4->SetBinContent(10,1.066151);
   houtFV_stack_4->SetBinContent(11,0.5721624);
   houtFV_stack_4->SetBinContent(12,0.8400078);
   houtFV_stack_4->SetBinContent(13,0.3642392);
   houtFV_stack_4->SetBinContent(14,0.416141);
   houtFV_stack_4->SetBinContent(15,0.1414764);
   houtFV_stack_4->SetBinContent(16,0.5211507);
   houtFV_stack_4->SetBinContent(17,0.384488);
   houtFV_stack_4->SetBinContent(18,0.1749134);
   houtFV_stack_4->SetBinContent(19,1.960515);
   houtFV_stack_4->SetBinError(1,0.426846);
   houtFV_stack_4->SetBinError(2,0.3251218);
   houtFV_stack_4->SetBinError(3,0.3004884);
   houtFV_stack_4->SetBinError(4,0.2823081);
   houtFV_stack_4->SetBinError(5,0.2457874);
   houtFV_stack_4->SetBinError(6,0.2525307);
   houtFV_stack_4->SetBinError(7,0.2097919);
   houtFV_stack_4->SetBinError(8,0.2026042);
   houtFV_stack_4->SetBinError(9,0.2525617);
   houtFV_stack_4->SetBinError(10,0.2501401);
   houtFV_stack_4->SetBinError(11,0.1780002);
   houtFV_stack_4->SetBinError(12,0.2269388);
   houtFV_stack_4->SetBinError(13,0.1412207);
   houtFV_stack_4->SetBinError(14,0.1559468);
   houtFV_stack_4->SetBinError(15,0.0700006);
   houtFV_stack_4->SetBinError(16,0.1761641);
   houtFV_stack_4->SetBinError(17,0.152296);
   houtFV_stack_4->SetBinError(18,0.09125478);
   houtFV_stack_4->SetBinError(19,0.3230282);
   houtFV_stack_4->SetEntries(494);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,22.21315);
   hNCpi0inFV_stack_5->SetBinContent(2,20.89609);
   hNCpi0inFV_stack_5->SetBinContent(3,17.18429);
   hNCpi0inFV_stack_5->SetBinContent(4,17.45402);
   hNCpi0inFV_stack_5->SetBinContent(5,14.52054);
   hNCpi0inFV_stack_5->SetBinContent(6,12.00224);
   hNCpi0inFV_stack_5->SetBinContent(7,10.02162);
   hNCpi0inFV_stack_5->SetBinContent(8,8.921144);
   hNCpi0inFV_stack_5->SetBinContent(9,5.741673);
   hNCpi0inFV_stack_5->SetBinContent(10,5.741444);
   hNCpi0inFV_stack_5->SetBinContent(11,4.828627);
   hNCpi0inFV_stack_5->SetBinContent(12,3.908443);
   hNCpi0inFV_stack_5->SetBinContent(13,3.011965);
   hNCpi0inFV_stack_5->SetBinContent(14,2.540021);
   hNCpi0inFV_stack_5->SetBinContent(15,1.49413);
   hNCpi0inFV_stack_5->SetBinContent(16,1.694543);
   hNCpi0inFV_stack_5->SetBinContent(17,1.546925);
   hNCpi0inFV_stack_5->SetBinContent(18,1.308261);
   hNCpi0inFV_stack_5->SetBinContent(19,10.05808);
   hNCpi0inFV_stack_5->SetBinError(1,1.086111);
   hNCpi0inFV_stack_5->SetBinError(2,1.065499);
   hNCpi0inFV_stack_5->SetBinError(3,0.9577258);
   hNCpi0inFV_stack_5->SetBinError(4,0.9690044);
   hNCpi0inFV_stack_5->SetBinError(5,0.8915521);
   hNCpi0inFV_stack_5->SetBinError(6,0.8024088);
   hNCpi0inFV_stack_5->SetBinError(7,0.7343993);
   hNCpi0inFV_stack_5->SetBinError(8,0.6990905);
   hNCpi0inFV_stack_5->SetBinError(9,0.5551403);
   hNCpi0inFV_stack_5->SetBinError(10,0.5521777);
   hNCpi0inFV_stack_5->SetBinError(11,0.5126162);
   hNCpi0inFV_stack_5->SetBinError(12,0.4597941);
   hNCpi0inFV_stack_5->SetBinError(13,0.4042238);
   hNCpi0inFV_stack_5->SetBinError(14,0.3688348);
   hNCpi0inFV_stack_5->SetBinError(15,0.2828834);
   hNCpi0inFV_stack_5->SetBinError(16,0.2977844);
   hNCpi0inFV_stack_5->SetBinError(17,0.278653);
   hNCpi0inFV_stack_5->SetBinError(18,0.2617389);
   hNCpi0inFV_stack_5->SetBinError(19,0.7367875);
   hNCpi0inFV_stack_5->SetEntries(4368);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,8.266226);
   hCCpi0inFV_stack_6->SetBinContent(2,5.904984);
   hCCpi0inFV_stack_6->SetBinContent(3,6.166818);
   hCCpi0inFV_stack_6->SetBinContent(4,5.038497);
   hCCpi0inFV_stack_6->SetBinContent(5,3.685682);
   hCCpi0inFV_stack_6->SetBinContent(6,3.880356);
   hCCpi0inFV_stack_6->SetBinContent(7,3.108406);
   hCCpi0inFV_stack_6->SetBinContent(8,2.708581);
   hCCpi0inFV_stack_6->SetBinContent(9,1.671273);
   hCCpi0inFV_stack_6->SetBinContent(10,1.407353);
   hCCpi0inFV_stack_6->SetBinContent(11,1.148663);
   hCCpi0inFV_stack_6->SetBinContent(12,0.8349798);
   hCCpi0inFV_stack_6->SetBinContent(13,0.9074333);
   hCCpi0inFV_stack_6->SetBinContent(14,0.8217714);
   hCCpi0inFV_stack_6->SetBinContent(15,0.5976519);
   hCCpi0inFV_stack_6->SetBinContent(16,0.5976519);
   hCCpi0inFV_stack_6->SetBinContent(17,0.6029558);
   hCCpi0inFV_stack_6->SetBinContent(18,0.2113693);
   hCCpi0inFV_stack_6->SetBinContent(19,3.253294);
   hCCpi0inFV_stack_6->SetBinError(1,0.6730604);
   hCCpi0inFV_stack_6->SetBinError(2,0.5649312);
   hCCpi0inFV_stack_6->SetBinError(3,0.5875287);
   hCCpi0inFV_stack_6->SetBinError(4,0.5121115);
   hCCpi0inFV_stack_6->SetBinError(5,0.4517895);
   hCCpi0inFV_stack_6->SetBinError(6,0.4549848);
   hCCpi0inFV_stack_6->SetBinError(7,0.4121462);
   hCCpi0inFV_stack_6->SetBinError(8,0.3935478);
   hCCpi0inFV_stack_6->SetBinError(9,0.297342);
   hCCpi0inFV_stack_6->SetBinError(10,0.2754265);
   hCCpi0inFV_stack_6->SetBinError(11,0.249624);
   hCCpi0inFV_stack_6->SetBinError(12,0.2134103);
   hCCpi0inFV_stack_6->SetBinError(13,0.2262788);
   hCCpi0inFV_stack_6->SetBinError(14,0.2097919);
   hCCpi0inFV_stack_6->SetBinError(15,0.1789111);
   hCCpi0inFV_stack_6->SetBinError(16,0.1789111);
   hCCpi0inFV_stack_6->SetBinError(17,0.1884164);
   hCCpi0inFV_stack_6->SetBinError(18,0.1088158);
   hCCpi0inFV_stack_6->SetBinError(19,0.4264158);
   hCCpi0inFV_stack_6->SetEntries(1314);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,2.649354);
   hNCinFV_stack_7->SetBinContent(2,1.342922);
   hNCinFV_stack_7->SetBinContent(3,1.233554);
   hNCinFV_stack_7->SetBinContent(4,0.8709775);
   hNCinFV_stack_7->SetBinContent(5,1.158848);
   hNCinFV_stack_7->SetBinContent(6,0.5229454);
   hNCinFV_stack_7->SetBinContent(7,0.5484458);
   hNCinFV_stack_7->SetBinContent(8,0.5229454);
   hNCinFV_stack_7->SetBinContent(9,0.6359025);
   hNCinFV_stack_7->SetBinContent(10,0.4245332);
   hNCinFV_stack_7->SetBinContent(11,0.4482389);
   hNCinFV_stack_7->SetBinContent(12,0.2733256);
   hNCinFV_stack_7->SetBinContent(13,0.2988259);
   hNCinFV_stack_7->SetBinContent(14,0.2496199);
   hNCinFV_stack_7->SetBinContent(15,0.2860757);
   hNCinFV_stack_7->SetBinContent(16,0.2241195);
   hNCinFV_stack_7->SetBinContent(17,0.2988259);
   hNCinFV_stack_7->SetBinContent(18,0.08745668);
   hNCinFV_stack_7->SetBinContent(19,1.707294);
   hNCinFV_stack_7->SetBinError(1,0.3867923);
   hNCinFV_stack_7->SetBinError(2,0.273946);
   hNCinFV_stack_7->SetBinError(3,0.2539805);
   hNCinFV_stack_7->SetBinError(4,0.2183773);
   hNCinFV_stack_7->SetBinError(5,0.2459775);
   hNCinFV_stack_7->SetBinError(6,0.167356);
   hNCinFV_stack_7->SetBinError(7,0.1683246);
   hNCinFV_stack_7->SetBinError(8,0.167356);
   hNCinFV_stack_7->SetBinError(9,0.180269);
   hNCinFV_stack_7->SetBinError(10,0.143722);
   hNCinFV_stack_7->SetBinError(11,0.1549416);
   hNCinFV_stack_7->SetBinError(12,0.1252177);
   hNCinFV_stack_7->SetBinError(13,0.1265093);
   hNCinFV_stack_7->SetBinError(14,0.1110342);
   hNCinFV_stack_7->SetBinError(15,0.1258651);
   hNCinFV_stack_7->SetBinError(16,0.1095603);
   hNCinFV_stack_7->SetBinError(17,0.1265093);
   hNCinFV_stack_7->SetBinError(18,0.06452687);
   hNCinFV_stack_7->SetBinError(19,0.2980573);
   hNCinFV_stack_7->SetEntries(368);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,8.568881);
   hnumuCCinFV_stack_8->SetBinContent(2,2.288906);
   hnumuCCinFV_stack_8->SetBinContent(3,1.52701);
   hnumuCCinFV_stack_8->SetBinContent(4,1.685354);
   hnumuCCinFV_stack_8->SetBinContent(5,2.154714);
   hnumuCCinFV_stack_8->SetBinContent(6,0.9861923);
   hnumuCCinFV_stack_8->SetBinContent(7,0.8188461);
   hnumuCCinFV_stack_8->SetBinContent(8,0.715317);
   hnumuCCinFV_stack_8->SetBinContent(9,0.8545557);
   hnumuCCinFV_stack_8->SetBinContent(10,0.8952076);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7739403);
   hnumuCCinFV_stack_8->SetBinContent(12,0.6039948);
   hnumuCCinFV_stack_8->SetBinContent(13,0.1863485);
   hnumuCCinFV_stack_8->SetBinContent(14,0.6080366);
   hnumuCCinFV_stack_8->SetBinContent(15,0.3646857);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4260507);
   hnumuCCinFV_stack_8->SetBinContent(17,0.1063579);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3865026);
   hnumuCCinFV_stack_8->SetBinContent(19,4.610329);
   hnumuCCinFV_stack_8->SetBinError(1,0.8502395);
   hnumuCCinFV_stack_8->SetBinError(2,0.5756234);
   hnumuCCinFV_stack_8->SetBinError(3,0.3208015);
   hnumuCCinFV_stack_8->SetBinError(4,0.3373571);
   hnumuCCinFV_stack_8->SetBinError(5,0.5899506);
   hnumuCCinFV_stack_8->SetBinError(6,0.2357713);
   hnumuCCinFV_stack_8->SetBinError(7,0.2083487);
   hnumuCCinFV_stack_8->SetBinError(8,0.2361967);
   hnumuCCinFV_stack_8->SetBinError(9,0.2162368);
   hnumuCCinFV_stack_8->SetBinError(10,0.2418517);
   hnumuCCinFV_stack_8->SetBinError(11,0.2218363);
   hnumuCCinFV_stack_8->SetBinError(12,0.2871427);
   hnumuCCinFV_stack_8->SetBinError(13,0.09759772);
   hnumuCCinFV_stack_8->SetBinError(14,0.3093051);
   hnumuCCinFV_stack_8->SetBinError(15,0.1470084);
   hnumuCCinFV_stack_8->SetBinError(16,0.1745215);
   hnumuCCinFV_stack_8->SetBinError(17,0.0801716);
   hnumuCCinFV_stack_8->SetBinError(18,0.1631052);
   hnumuCCinFV_stack_8->SetBinError(19,0.5687443);
   hnumuCCinFV_stack_8->SetEntries(659);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.07472027);
   hnueCCinFV_stack_9->SetBinContent(5,0.1049875);
   hnueCCinFV_stack_9->SetBinContent(6,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(7,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(9,0.04858173);
   hnueCCinFV_stack_9->SetBinContent(10,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.03825059);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,0.07645005);
   hnueCCinFV_stack_9->SetBinContent(19,0.3563231);
   hnueCCinFV_stack_9->SetBinError(1,0.06452687);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.06325464);
   hnueCCinFV_stack_9->SetBinError(5,0.08150667);
   hnueCCinFV_stack_9->SetBinError(6,0.06195629);
   hnueCCinFV_stack_9->SetBinError(7,0.06325464);
   hnueCCinFV_stack_9->SetBinError(9,0.04858173);
   hnueCCinFV_stack_9->SetBinError(10,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.02208399);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,0.06362901);
   hnueCCinFV_stack_9->SetBinError(19,0.1354158);
   hnueCCinFV_stack_9->SetEntries(34);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmcerror__5->SetBinContent(1,48.91914);
   hmcerror__5->SetBinContent(2,34.25987);
   hmcerror__5->SetBinContent(3,29.94701);
   hmcerror__5->SetBinContent(4,29.03696);
   hmcerror__5->SetBinContent(5,25.35471);
   hmcerror__5->SetBinContent(6,20.0954);
   hmcerror__5->SetBinContent(7,17.52641);
   hmcerror__5->SetBinContent(8,14.48581);
   hmcerror__5->SetBinContent(9,11.29094);
   hmcerror__5->SetBinContent(10,10.618);
   hmcerror__5->SetBinContent(11,8.574454);
   hmcerror__5->SetBinContent(12,6.949487);
   hmcerror__5->SetBinContent(13,5.523924);
   hmcerror__5->SetBinContent(14,5.574426);
   hmcerror__5->SetBinContent(15,3.212921);
   hmcerror__5->SetBinContent(16,3.999998);
   hmcerror__5->SetBinContent(17,3.159126);
   hmcerror__5->SetBinContent(18,2.285454);
   hmcerror__5->SetBinContent(19,24.71108);
   hmcerror__5->SetBinError(1,14.39401);
   hmcerror__5->SetBinError(2,8.688878);
   hmcerror__5->SetBinError(3,7.817243);
   hmcerror__5->SetBinError(4,8.825477);
   hmcerror__5->SetBinError(5,6.56676);
   hmcerror__5->SetBinError(6,8.054732);
   hmcerror__5->SetBinError(7,4.844798);
   hmcerror__5->SetBinError(8,4.556462);
   hmcerror__5->SetBinError(9,3.696341);
   hmcerror__5->SetBinError(10,3.567429);
   hmcerror__5->SetBinError(11,2.968465);
   hmcerror__5->SetBinError(12,4.124981);
   hmcerror__5->SetBinError(13,1.929229);
   hmcerror__5->SetBinError(14,2.165742);
   hmcerror__5->SetBinError(15,1.41744);
   hmcerror__5->SetBinError(16,1.791863);
   hmcerror__5->SetBinError(17,1.629753);
   hmcerror__5->SetBinError(18,1.620524);
   hmcerror__5->SetBinError(19,7.7041);
   hmcerror__5->SetEntries(300.4418);

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
   
   Double_t _fx3005[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3005[18] = {
   37,
   12,
   24,
   24,
   11,
   11,
   18,
   10,
   7,
   8,
   5,
   3,
   5,
   2,
   7,
   2,
   2,
   2};
   Double_t _felx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3005[18] = {
   6.2203,
   3.64022,
   5.0476,
   5.0476,
   3.4975,
   3.4975,
   4.4008,
   3.34883,
   2.85954,
   3.0307,
   2.48995,
   2.143368,
   2.48995,
   2,
   2.85954,
   2,
   2,
   2};
   Double_t _fehx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3005[18] = {
   6.0141,
   3.4155,
   4.837,
   4.837,
   3.27,
   3.27,
   4.1858,
   3.1179,
   2.61053,
   2.7896,
   2.21064,
   1.72422,
   2.21064,
   1.51917,
   2.61053,
   1.51917,
   1.51917,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(47.31551);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.68#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.06/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 190.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 17.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 17.7","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  155.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 47.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 24.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3006[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3006[18] = {
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
   Double_t _felx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3006[18] = {
   0.2942408,
   0.2536168,
   0.2610359,
   0.3039395,
   0.2589956,
   0.4008246,
   0.2764284,
   0.3145466,
   0.3273722,
   0.3359794,
   0.3461987,
   0.5935663,
   0.3492497,
   0.3885138,
   0.4411686,
   0.4479659,
   0.5158874,
   0.7090601};
   Double_t _fehx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3006[18] = {
   0.2942408,
   0.2536168,
   0.2610359,
   0.3039395,
   0.2589956,
   0.4008246,
   0.2764284,
   0.3145466,
   0.3273722,
   0.3359794,
   0.3461987,
   0.5935663,
   0.3492497,
   0.3885138,
   0.4411686,
   0.4479659,
   0.5158874,
   0.7090601};
   grae = new TGraphAsymmErrors(18,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,99);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
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
   
   Double_t _fx3007[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3007[18] = {
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
   Double_t _felx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3007[18] = {
   0.2018473,
   0.226541,
   0.2182793,
   0.2189127,
   0.2030308,
   0.2303177,
   0.2166308,
   0.2273499,
   0.2260559,
   0.2080089,
   0.2149561,
   0.2352959,
   0.2274949,
   0.2526045,
   0.2592597,
   0.2475544,
   0.2535972,
   0.2687693};
   Double_t _fehx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3007[18] = {
   0.2018473,
   0.226541,
   0.2182793,
   0.2189127,
   0.2030308,
   0.2303177,
   0.2166308,
   0.2273499,
   0.2260559,
   0.2080089,
   0.2149561,
   0.2352959,
   0.2274949,
   0.2526045,
   0.2592597,
   0.2475544,
   0.2535972,
   0.2687693};
   grae = new TGraphAsymmErrors(18,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,99);
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
   
   Double_t _fx3008[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3008[18] = {
   0.7563501,
   0.350264,
   0.8014157,
   0.8265328,
   0.4338444,
   0.547389,
   1.027021,
   0.6903308,
   0.6199659,
   0.7534377,
   0.5831275,
   0.4316866,
   0.9051536,
   0.3587813,
   2.178703,
   0.5000002,
   0.6330865,
   0.8750995};
   Double_t _felx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3008[18] = {
   0.1271547,
   0.1062532,
   0.1685511,
   0.1738336,
   0.1379428,
   0.1740448,
   0.2510953,
   0.23118,
   0.2532596,
   0.2854305,
   0.2903917,
   0.3084211,
   0.4507574,
   0.3587813,
   0.8900125,
   0.5000002,
   0.6330865,
   0.8750995};
   Double_t _fehx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3008[18] = {
   0.1229396,
   0.0996939,
   0.1615186,
   0.1665808,
   0.1289701,
   0.1627238,
   0.2388281,
   0.2152382,
   0.2312057,
   0.2627237,
   0.257817,
   0.2481075,
   0.4001937,
   0.2725249,
   0.8125098,
   0.3797927,
   0.480883,
   0.6647125};
   grae = new TGraphAsymmErrors(18,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(3.290334);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_gap_low_all",18,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
