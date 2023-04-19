#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Mar 13 17:56:37 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-40,-6.555093,293.3333,724.8553);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,12.57775);
   hmc__1->SetBinContent(1,167.2344);
   hmc__1->SetBinContent(2,223.0107);
   hmc__1->SetBinContent(3,257.6033);
   hmc__1->SetBinContent(4,262.2542);
   hmc__1->SetBinContent(5,270.622);
   hmc__1->SetBinContent(6,278.3476);
   hmc__1->SetBinContent(7,265.7898);
   hmc__1->SetBinContent(8,291.4584);
   hmc__1->SetBinContent(9,288.8155);
   hmc__1->SetBinContent(10,290.8104);
   hmc__1->SetBinContent(11,295.0972);
   hmc__1->SetBinContent(12,295.3149);
   hmc__1->SetBinContent(13,297.3922);
   hmc__1->SetBinContent(14,304.8787);
   hmc__1->SetBinContent(15,290.1278);
   hmc__1->SetBinContent(16,297.5722);
   hmc__1->SetBinContent(17,323.7687);
   hmc__1->SetBinContent(18,318.4938);
   hmc__1->SetBinContent(19,311.1685);
   hmc__1->SetBinContent(20,319.7262);
   hmc__1->SetBinContent(21,327.7546);
   hmc__1->SetBinContent(22,319.6064);
   hmc__1->SetBinContent(23,326.4337);
   hmc__1->SetBinContent(24,304.3458);
   hmc__1->SetBinContent(25,254.9145);
   hmc__1->SetBinContent(26,128.8401);
   hmc__1->SetBinContent(27,10.34641);
   hmc__1->SetBinError(0,1.770004);
   hmc__1->SetBinError(1,41.67808);
   hmc__1->SetBinError(2,55.48155);
   hmc__1->SetBinError(3,62.42024);
   hmc__1->SetBinError(4,56.86776);
   hmc__1->SetBinError(5,73.43915);
   hmc__1->SetBinError(6,64.06032);
   hmc__1->SetBinError(7,64.6787);
   hmc__1->SetBinError(8,69.27315);
   hmc__1->SetBinError(9,66.79638);
   hmc__1->SetBinError(10,64.85574);
   hmc__1->SetBinError(11,68.60968);
   hmc__1->SetBinError(12,68.08723);
   hmc__1->SetBinError(13,68.39366);
   hmc__1->SetBinError(14,71.87511);
   hmc__1->SetBinError(15,63.51426);
   hmc__1->SetBinError(16,67.23915);
   hmc__1->SetBinError(17,69.06499);
   hmc__1->SetBinError(18,74.71797);
   hmc__1->SetBinError(19,74.01377);
   hmc__1->SetBinError(20,70.45266);
   hmc__1->SetBinError(21,80.25548);
   hmc__1->SetBinError(22,67.57275);
   hmc__1->SetBinError(23,77.71164);
   hmc__1->SetBinError(24,68.72223);
   hmc__1->SetBinError(25,56.1986);
   hmc__1->SetBinError(26,37.70366);
   hmc__1->SetBinError(27,8.280432);
   hmc__1->SetMinimum(-6.555093);
   hmc__1->SetMaximum(688.2847);
   hmc__1->SetEntries(7241.585);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(344.1424);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,6.063161);
   hbadmatch_stack_1->SetBinContent(2,2.980925);
   hbadmatch_stack_1->SetBinContent(3,3.770411);
   hbadmatch_stack_1->SetBinContent(4,3.368371);
   hbadmatch_stack_1->SetBinContent(5,5.11132);
   hbadmatch_stack_1->SetBinContent(6,5.230049);
   hbadmatch_stack_1->SetBinContent(7,4.888063);
   hbadmatch_stack_1->SetBinContent(8,5.64029);
   hbadmatch_stack_1->SetBinContent(9,5.486158);
   hbadmatch_stack_1->SetBinContent(10,7.579444);
   hbadmatch_stack_1->SetBinContent(11,6.793485);
   hbadmatch_stack_1->SetBinContent(12,8.377981);
   hbadmatch_stack_1->SetBinContent(13,8.051418);
   hbadmatch_stack_1->SetBinContent(14,9.190762);
   hbadmatch_stack_1->SetBinContent(15,5.910825);
   hbadmatch_stack_1->SetBinContent(16,7.76073);
   hbadmatch_stack_1->SetBinContent(17,8.115949);
   hbadmatch_stack_1->SetBinContent(18,9.702183);
   hbadmatch_stack_1->SetBinContent(19,10.70903);
   hbadmatch_stack_1->SetBinContent(20,8.916918);
   hbadmatch_stack_1->SetBinContent(21,7.230106);
   hbadmatch_stack_1->SetBinContent(22,7.603841);
   hbadmatch_stack_1->SetBinContent(23,10.96655);
   hbadmatch_stack_1->SetBinContent(24,6.877869);
   hbadmatch_stack_1->SetBinContent(25,8.407928);
   hbadmatch_stack_1->SetBinContent(26,5.406234);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,2.023876);
   hbadmatch_stack_1->SetBinError(2,0.8552677);
   hbadmatch_stack_1->SetBinError(3,0.973774);
   hbadmatch_stack_1->SetBinError(4,0.9316839);
   hbadmatch_stack_1->SetBinError(5,2.122127);
   hbadmatch_stack_1->SetBinError(6,1.129204);
   hbadmatch_stack_1->SetBinError(7,1.074304);
   hbadmatch_stack_1->SetBinError(8,1.192323);
   hbadmatch_stack_1->SetBinError(9,1.297333);
   hbadmatch_stack_1->SetBinError(10,2.044859);
   hbadmatch_stack_1->SetBinError(11,1.402788);
   hbadmatch_stack_1->SetBinError(12,1.646739);
   hbadmatch_stack_1->SetBinError(13,1.53499);
   hbadmatch_stack_1->SetBinError(14,1.64293);
   hbadmatch_stack_1->SetBinError(15,1.252123);
   hbadmatch_stack_1->SetBinError(16,1.475895);
   hbadmatch_stack_1->SetBinError(17,1.422958);
   hbadmatch_stack_1->SetBinError(18,1.633794);
   hbadmatch_stack_1->SetBinError(19,2.228237);
   hbadmatch_stack_1->SetBinError(20,1.589199);
   hbadmatch_stack_1->SetBinError(21,1.419166);
   hbadmatch_stack_1->SetBinError(22,1.406955);
   hbadmatch_stack_1->SetBinError(23,1.774333);
   hbadmatch_stack_1->SetBinError(24,1.507391);
   hbadmatch_stack_1->SetBinError(25,1.521134);
   hbadmatch_stack_1->SetBinError(26,1.26936);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,1.055394);
   hext_stack_2->SetBinContent(1,11.66999);
   hext_stack_2->SetBinContent(2,16.85757);
   hext_stack_2->SetBinContent(3,19.68941);
   hext_stack_2->SetBinContent(4,21.81015);
   hext_stack_2->SetBinContent(5,20.58758);
   hext_stack_2->SetBinContent(6,23.0906);
   hext_stack_2->SetBinContent(7,18.15516);
   hext_stack_2->SetBinContent(8,16.19442);
   hext_stack_2->SetBinContent(9,16.85757);
   hext_stack_2->SetBinContent(10,24.93047);
   hext_stack_2->SetBinContent(11,23.94846);
   hext_stack_2->SetBinContent(12,24.47039);
   hext_stack_2->SetBinContent(13,22.59739);
   hext_stack_2->SetBinContent(14,21.06202);
   hext_stack_2->SetBinContent(15,26.05925);
   hext_stack_2->SetBinContent(16,24.25415);
   hext_stack_2->SetBinContent(17,30.78121);
   hext_stack_2->SetBinContent(18,31.15033);
   hext_stack_2->SetBinContent(19,19.43839);
   hext_stack_2->SetBinContent(20,27.89912);
   hext_stack_2->SetBinContent(21,31.035);
   hext_stack_2->SetBinContent(22,31.01623);
   hext_stack_2->SetBinContent(23,34.54152);
   hext_stack_2->SetBinContent(24,32.89641);
   hext_stack_2->SetBinContent(25,29.18518);
   hext_stack_2->SetBinContent(26,12.55103);
   hext_stack_2->SetBinContent(27,1.048213);
   hext_stack_2->SetBinError(0,0.6130171);
   hext_stack_2->SetBinError(1,2.190293);
   hext_stack_2->SetBinError(2,2.611024);
   hext_stack_2->SetBinError(3,2.894323);
   hext_stack_2->SetBinError(4,2.931068);
   hext_stack_2->SetBinError(5,2.903707);
   hext_stack_2->SetBinError(6,3.122631);
   hext_stack_2->SetBinError(7,2.690424);
   hext_stack_2->SetBinError(8,2.647523);
   hext_stack_2->SetBinError(9,2.611024);
   hext_stack_2->SetBinError(10,3.3559);
   hext_stack_2->SetBinError(11,3.267433);
   hext_stack_2->SetBinError(12,3.198726);
   hext_stack_2->SetBinError(13,3.064358);
   hext_stack_2->SetBinError(14,3.009872);
   hext_stack_2->SetBinError(15,3.380488);
   hext_stack_2->SetBinError(16,3.117406);
   hext_stack_2->SetBinError(17,3.618037);
   hext_stack_2->SetBinError(18,3.529824);
   hext_stack_2->SetBinError(19,2.839316);
   hext_stack_2->SetBinError(20,3.597074);
   hext_stack_2->SetBinError(21,3.615142);
   hext_stack_2->SetBinError(22,3.651922);
   hext_stack_2->SetBinError(23,3.962488);
   hext_stack_2->SetBinError(24,3.738568);
   hext_stack_2->SetBinError(25,3.477864);
   hext_stack_2->SetBinError(26,2.364428);
   hext_stack_2->SetBinError(27,0.7595995);
   hext_stack_2->SetEntries(1541);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,1.360397);
   hdirt_stack_3->SetBinContent(2,3.998235);
   hdirt_stack_3->SetBinContent(3,4.456168);
   hdirt_stack_3->SetBinContent(4,3.226929);
   hdirt_stack_3->SetBinContent(5,3.418409);
   hdirt_stack_3->SetBinContent(6,1.128149);
   hdirt_stack_3->SetBinContent(7,1.540917);
   hdirt_stack_3->SetBinContent(8,2.471296);
   hdirt_stack_3->SetBinContent(9,2.72485);
   hdirt_stack_3->SetBinContent(10,1.507954);
   hdirt_stack_3->SetBinContent(11,2.234208);
   hdirt_stack_3->SetBinContent(12,0.8329533);
   hdirt_stack_3->SetBinContent(13,1.335073);
   hdirt_stack_3->SetBinContent(14,1.980107);
   hdirt_stack_3->SetBinContent(15,1.209201);
   hdirt_stack_3->SetBinContent(16,2.26936);
   hdirt_stack_3->SetBinContent(17,2.290459);
   hdirt_stack_3->SetBinContent(18,3.169384);
   hdirt_stack_3->SetBinContent(19,2.393588);
   hdirt_stack_3->SetBinContent(20,2.36631);
   hdirt_stack_3->SetBinContent(21,6.75603);
   hdirt_stack_3->SetBinContent(22,4.044919);
   hdirt_stack_3->SetBinContent(23,4.45025);
   hdirt_stack_3->SetBinContent(24,4.558557);
   hdirt_stack_3->SetBinContent(25,3.934348);
   hdirt_stack_3->SetBinContent(26,2.815911);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5846869);
   hdirt_stack_3->SetBinError(2,1.051472);
   hdirt_stack_3->SetBinError(3,1.107243);
   hdirt_stack_3->SetBinError(4,0.8668545);
   hdirt_stack_3->SetBinError(5,1.234219);
   hdirt_stack_3->SetBinError(6,0.4372061);
   hdirt_stack_3->SetBinError(7,0.6207914);
   hdirt_stack_3->SetBinError(8,0.7778078);
   hdirt_stack_3->SetBinError(9,0.8263428);
   hdirt_stack_3->SetBinError(10,0.6925614);
   hdirt_stack_3->SetBinError(11,1.227807);
   hdirt_stack_3->SetBinError(12,0.3836916);
   hdirt_stack_3->SetBinError(13,0.5844386);
   hdirt_stack_3->SetBinError(14,0.7351041);
   hdirt_stack_3->SetBinError(15,0.5724416);
   hdirt_stack_3->SetBinError(16,0.6966686);
   hdirt_stack_3->SetBinError(17,0.7353631);
   hdirt_stack_3->SetBinError(18,0.9560859);
   hdirt_stack_3->SetBinError(19,0.8231756);
   hdirt_stack_3->SetBinError(20,0.7685293);
   hdirt_stack_3->SetBinError(21,1.696233);
   hdirt_stack_3->SetBinError(22,1.095126);
   hdirt_stack_3->SetBinError(23,1.085353);
   hdirt_stack_3->SetBinError(24,1.088286);
   hdirt_stack_3->SetBinError(25,1.074048);
   hdirt_stack_3->SetBinError(26,0.9016098);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,8.739723);
   houtFV_stack_4->SetBinContent(1,82.85117);
   houtFV_stack_4->SetBinContent(2,35.84148);
   houtFV_stack_4->SetBinContent(3,33.63095);
   houtFV_stack_4->SetBinContent(4,26.09712);
   houtFV_stack_4->SetBinContent(5,22.35486);
   houtFV_stack_4->SetBinContent(6,22.42447);
   houtFV_stack_4->SetBinContent(7,21.85689);
   houtFV_stack_4->SetBinContent(8,22.98299);
   houtFV_stack_4->SetBinContent(9,17.74559);
   houtFV_stack_4->SetBinContent(10,18.4548);
   houtFV_stack_4->SetBinContent(11,15.55194);
   houtFV_stack_4->SetBinContent(12,19.93584);
   houtFV_stack_4->SetBinContent(13,18.72901);
   houtFV_stack_4->SetBinContent(14,17.82037);
   houtFV_stack_4->SetBinContent(15,18.80474);
   houtFV_stack_4->SetBinContent(16,16.68598);
   houtFV_stack_4->SetBinContent(17,23.41916);
   houtFV_stack_4->SetBinContent(18,21.57313);
   houtFV_stack_4->SetBinContent(19,20.13273);
   houtFV_stack_4->SetBinContent(20,24.57943);
   houtFV_stack_4->SetBinContent(21,20.85097);
   houtFV_stack_4->SetBinContent(22,26.11251);
   houtFV_stack_4->SetBinContent(23,34.56112);
   houtFV_stack_4->SetBinContent(24,35.60011);
   houtFV_stack_4->SetBinContent(25,38.9904);
   houtFV_stack_4->SetBinContent(26,49.81801);
   houtFV_stack_4->SetBinContent(27,6.086297);
   houtFV_stack_4->SetBinError(0,1.488147);
   houtFV_stack_4->SetBinError(1,4.596951);
   houtFV_stack_4->SetBinError(2,3.039258);
   houtFV_stack_4->SetBinError(3,2.949522);
   houtFV_stack_4->SetBinError(4,2.556063);
   houtFV_stack_4->SetBinError(5,2.332705);
   houtFV_stack_4->SetBinError(6,2.391057);
   houtFV_stack_4->SetBinError(7,2.34797);
   houtFV_stack_4->SetBinError(8,2.538606);
   houtFV_stack_4->SetBinError(9,2.179956);
   houtFV_stack_4->SetBinError(10,2.123714);
   houtFV_stack_4->SetBinError(11,1.94917);
   houtFV_stack_4->SetBinError(12,2.216684);
   houtFV_stack_4->SetBinError(13,2.165777);
   houtFV_stack_4->SetBinError(14,2.069809);
   houtFV_stack_4->SetBinError(15,2.163212);
   houtFV_stack_4->SetBinError(16,2.040494);
   houtFV_stack_4->SetBinError(17,2.450927);
   houtFV_stack_4->SetBinError(18,2.42534);
   houtFV_stack_4->SetBinError(19,2.139066);
   houtFV_stack_4->SetBinError(20,2.581601);
   houtFV_stack_4->SetBinError(21,2.312083);
   houtFV_stack_4->SetBinError(22,2.58288);
   houtFV_stack_4->SetBinError(23,3.178479);
   houtFV_stack_4->SetBinError(24,2.910505);
   houtFV_stack_4->SetBinError(25,3.106514);
   houtFV_stack_4->SetBinError(26,3.532176);
   houtFV_stack_4->SetBinError(27,1.245848);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.156358);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.695106);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.559678);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.374084);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.583001);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.822564);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.555765);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.44367);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.503878);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.625024);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.698346);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.308242);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.523401);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.754146);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.986724);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.183856);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.312482);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.524392);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.614478);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.184936);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,5.117678);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.431627);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.682152);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.146578);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.08197);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5583361);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3143162);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6526314);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7273713);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5585275);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5696818);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6869636);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5570155);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5944781);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7263003);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6562988);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7167251);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6756815);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8443769);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7178103);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6235562);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6823214);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.772229);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7876986);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6918097);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7490319);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7379954);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6288906);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6366314);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7729429);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6287369);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2847561);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03945654);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.11584);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.198708);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.39584);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.38139);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.729144);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.297522);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8771898);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7813678);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.714694);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6553177);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.604758);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.11484);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.18509);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.240722);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.548958);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4463997);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.125218);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3780289);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3549294);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4502389);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4198967);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4541833);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3757913);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2413539);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2335688);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4241235);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1582371);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4640037);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3014643);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3447308);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2960358);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4623231);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1012383);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.143908);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.22469);
   hNCpi0inFVres_stack_7->SetBinContent(2,73.72892);
   hNCpi0inFVres_stack_7->SetBinContent(3,94.3643);
   hNCpi0inFVres_stack_7->SetBinContent(4,101.9482);
   hNCpi0inFVres_stack_7->SetBinContent(5,113.9092);
   hNCpi0inFVres_stack_7->SetBinContent(6,118.5384);
   hNCpi0inFVres_stack_7->SetBinContent(7,115.7523);
   hNCpi0inFVres_stack_7->SetBinContent(8,124.8278);
   hNCpi0inFVres_stack_7->SetBinContent(9,126.211);
   hNCpi0inFVres_stack_7->SetBinContent(10,115.0589);
   hNCpi0inFVres_stack_7->SetBinContent(11,129.9866);
   hNCpi0inFVres_stack_7->SetBinContent(12,121.2346);
   hNCpi0inFVres_stack_7->SetBinContent(13,120.6403);
   hNCpi0inFVres_stack_7->SetBinContent(14,127.2857);
   hNCpi0inFVres_stack_7->SetBinContent(15,119.0999);
   hNCpi0inFVres_stack_7->SetBinContent(16,125.5518);
   hNCpi0inFVres_stack_7->SetBinContent(17,124.6919);
   hNCpi0inFVres_stack_7->SetBinContent(18,117.4221);
   hNCpi0inFVres_stack_7->SetBinContent(19,122.5898);
   hNCpi0inFVres_stack_7->SetBinContent(20,113.6586);
   hNCpi0inFVres_stack_7->SetBinContent(21,121.2718);
   hNCpi0inFVres_stack_7->SetBinContent(22,119.3139);
   hNCpi0inFVres_stack_7->SetBinContent(23,103.6825);
   hNCpi0inFVres_stack_7->SetBinContent(24,92.17928);
   hNCpi0inFVres_stack_7->SetBinContent(25,66.29067);
   hNCpi0inFVres_stack_7->SetBinContent(26,18.72463);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.045422);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4200514);
   hNCpi0inFVres_stack_7->SetBinError(1,1.63127);
   hNCpi0inFVres_stack_7->SetBinError(2,2.799732);
   hNCpi0inFVres_stack_7->SetBinError(3,3.145405);
   hNCpi0inFVres_stack_7->SetBinError(4,3.262729);
   hNCpi0inFVres_stack_7->SetBinError(5,3.502102);
   hNCpi0inFVres_stack_7->SetBinError(6,3.562402);
   hNCpi0inFVres_stack_7->SetBinError(7,3.492846);
   hNCpi0inFVres_stack_7->SetBinError(8,3.662469);
   hNCpi0inFVres_stack_7->SetBinError(9,3.7498);
   hNCpi0inFVres_stack_7->SetBinError(10,3.452582);
   hNCpi0inFVres_stack_7->SetBinError(11,3.78159);
   hNCpi0inFVres_stack_7->SetBinError(12,3.515357);
   hNCpi0inFVres_stack_7->SetBinError(13,3.59391);
   hNCpi0inFVres_stack_7->SetBinError(14,3.737974);
   hNCpi0inFVres_stack_7->SetBinError(15,3.58733);
   hNCpi0inFVres_stack_7->SetBinError(16,3.68731);
   hNCpi0inFVres_stack_7->SetBinError(17,3.646421);
   hNCpi0inFVres_stack_7->SetBinError(18,3.507848);
   hNCpi0inFVres_stack_7->SetBinError(19,3.656778);
   hNCpi0inFVres_stack_7->SetBinError(20,3.473749);
   hNCpi0inFVres_stack_7->SetBinError(21,3.630608);
   hNCpi0inFVres_stack_7->SetBinError(22,3.627086);
   hNCpi0inFVres_stack_7->SetBinError(23,3.338348);
   hNCpi0inFVres_stack_7->SetBinError(24,3.054577);
   hNCpi0inFVres_stack_7->SetBinError(25,2.680748);
   hNCpi0inFVres_stack_7->SetBinError(26,1.425691);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2866851);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.120581);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.44412);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.60105);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.17454);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.28453);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.78046);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.94284);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.65821);
   hNCpi0inFVdis_stack_8->SetBinContent(9,23.50699);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.91039);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.23324);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.7654);
   hNCpi0inFVdis_stack_8->SetBinContent(13,25.12937);
   hNCpi0inFVdis_stack_8->SetBinContent(14,23.07372);
   hNCpi0inFVdis_stack_8->SetBinContent(15,23.79896);
   hNCpi0inFVdis_stack_8->SetBinContent(16,22.57118);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.04424);
   hNCpi0inFVdis_stack_8->SetBinContent(18,24.08595);
   hNCpi0inFVdis_stack_8->SetBinContent(19,23.49106);
   hNCpi0inFVdis_stack_8->SetBinContent(20,24.71851);
   hNCpi0inFVdis_stack_8->SetBinContent(21,24.81035);
   hNCpi0inFVdis_stack_8->SetBinContent(22,22.45161);
   hNCpi0inFVdis_stack_8->SetBinContent(23,22.53349);
   hNCpi0inFVdis_stack_8->SetBinContent(24,19.31203);
   hNCpi0inFVdis_stack_8->SetBinContent(25,15.01774);
   hNCpi0inFVdis_stack_8->SetBinContent(26,3.401152);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7529186);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.242605);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.280653);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.621678);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.420699);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.668951);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.433518);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.538145);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.524823);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.571108);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.629002);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.482043);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.660006);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.538187);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.580515);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.512114);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.521843);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.666578);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.56123);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.651662);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.657014);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.494596);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.566498);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.433428);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.292603);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5417243);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1155977);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(1,17.92757);
   hCCpi0inFV_stack_10->SetBinContent(2,35.95633);
   hCCpi0inFV_stack_10->SetBinContent(3,42.77321);
   hCCpi0inFV_stack_10->SetBinContent(4,38.65036);
   hCCpi0inFV_stack_10->SetBinContent(5,39.57104);
   hCCpi0inFV_stack_10->SetBinContent(6,39.45435);
   hCCpi0inFV_stack_10->SetBinContent(7,38.88064);
   hCCpi0inFV_stack_10->SetBinContent(8,44.7691);
   hCCpi0inFV_stack_10->SetBinContent(9,46.89067);
   hCCpi0inFV_stack_10->SetBinContent(10,45.08318);
   hCCpi0inFV_stack_10->SetBinContent(11,35.09932);
   hCCpi0inFV_stack_10->SetBinContent(12,42.21341);
   hCCpi0inFV_stack_10->SetBinContent(13,39.94414);
   hCCpi0inFV_stack_10->SetBinContent(14,47.44484);
   hCCpi0inFV_stack_10->SetBinContent(15,41.50733);
   hCCpi0inFV_stack_10->SetBinContent(16,41.74579);
   hCCpi0inFV_stack_10->SetBinContent(17,48.1733);
   hCCpi0inFV_stack_10->SetBinContent(18,51.77889);
   hCCpi0inFV_stack_10->SetBinContent(19,44.3952);
   hCCpi0inFV_stack_10->SetBinContent(20,52.67006);
   hCCpi0inFV_stack_10->SetBinContent(21,50.25011);
   hCCpi0inFV_stack_10->SetBinContent(22,48.17593);
   hCCpi0inFV_stack_10->SetBinContent(23,45.47926);
   hCCpi0inFV_stack_10->SetBinContent(24,55.67152);
   hCCpi0inFV_stack_10->SetBinContent(25,41.73906);
   hCCpi0inFV_stack_10->SetBinContent(26,17.50205);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(1,2.131798);
   hCCpi0inFV_stack_10->SetBinError(2,2.972402);
   hCCpi0inFV_stack_10->SetBinError(3,3.328507);
   hCCpi0inFV_stack_10->SetBinError(4,3.111711);
   hCCpi0inFV_stack_10->SetBinError(5,3.152468);
   hCCpi0inFV_stack_10->SetBinError(6,3.122391);
   hCCpi0inFV_stack_10->SetBinError(7,3.082899);
   hCCpi0inFV_stack_10->SetBinError(8,3.405511);
   hCCpi0inFV_stack_10->SetBinError(9,3.43837);
   hCCpi0inFV_stack_10->SetBinError(10,3.390929);
   hCCpi0inFV_stack_10->SetBinError(11,2.951467);
   hCCpi0inFV_stack_10->SetBinError(12,3.304085);
   hCCpi0inFV_stack_10->SetBinError(13,3.121873);
   hCCpi0inFV_stack_10->SetBinError(14,3.48193);
   hCCpi0inFV_stack_10->SetBinError(15,3.276189);
   hCCpi0inFV_stack_10->SetBinError(16,3.189009);
   hCCpi0inFV_stack_10->SetBinError(17,3.476349);
   hCCpi0inFV_stack_10->SetBinError(18,3.610044);
   hCCpi0inFV_stack_10->SetBinError(19,3.324979);
   hCCpi0inFV_stack_10->SetBinError(20,3.709286);
   hCCpi0inFV_stack_10->SetBinError(21,3.530816);
   hCCpi0inFV_stack_10->SetBinError(22,3.477637);
   hCCpi0inFV_stack_10->SetBinError(23,3.341501);
   hCCpi0inFV_stack_10->SetBinError(24,3.718087);
   hCCpi0inFV_stack_10->SetBinError(25,3.275428);
   hCCpi0inFV_stack_10->SetBinError(26,2.153656);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,6.927438);
   hNCinFV_stack_11->SetBinContent(2,19.00305);
   hNCinFV_stack_11->SetBinContent(3,17.43379);
   hNCinFV_stack_11->SetBinContent(4,20.52183);
   hNCinFV_stack_11->SetBinContent(5,20.10715);
   hNCinFV_stack_11->SetBinContent(6,19.28828);
   hNCinFV_stack_11->SetBinContent(7,19.30796);
   hNCinFV_stack_11->SetBinContent(8,24.21439);
   hNCinFV_stack_11->SetBinContent(9,22.4262);
   hNCinFV_stack_11->SetBinContent(10,21.39214);
   hNCinFV_stack_11->SetBinContent(11,23.06283);
   hNCinFV_stack_11->SetBinContent(12,20.96236);
   hNCinFV_stack_11->SetBinContent(13,22.50964);
   hNCinFV_stack_11->SetBinContent(14,19.89581);
   hNCinFV_stack_11->SetBinContent(15,17.6793);
   hNCinFV_stack_11->SetBinContent(16,22.18854);
   hNCinFV_stack_11->SetBinContent(17,22.00196);
   hNCinFV_stack_11->SetBinContent(18,20.5654);
   hNCinFV_stack_11->SetBinContent(19,21.55021);
   hNCinFV_stack_11->SetBinContent(20,23.90234);
   hNCinFV_stack_11->SetBinContent(21,21.94195);
   hNCinFV_stack_11->SetBinContent(22,18.61976);
   hNCinFV_stack_11->SetBinContent(23,24.16451);
   hNCinFV_stack_11->SetBinContent(24,19.17404);
   hNCinFV_stack_11->SetBinContent(25,18.41121);
   hNCinFV_stack_11->SetBinContent(26,4.106273);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.359335);
   hNCinFV_stack_11->SetBinError(2,2.203193);
   hNCinFV_stack_11->SetBinError(3,2.085148);
   hNCinFV_stack_11->SetBinError(4,2.280636);
   hNCinFV_stack_11->SetBinError(5,2.275101);
   hNCinFV_stack_11->SetBinError(6,2.237732);
   hNCinFV_stack_11->SetBinError(7,2.194713);
   hNCinFV_stack_11->SetBinError(8,2.473315);
   hNCinFV_stack_11->SetBinError(9,2.412727);
   hNCinFV_stack_11->SetBinError(10,2.338544);
   hNCinFV_stack_11->SetBinError(11,2.428243);
   hNCinFV_stack_11->SetBinError(12,2.331597);
   hNCinFV_stack_11->SetBinError(13,2.43597);
   hNCinFV_stack_11->SetBinError(14,2.175676);
   hNCinFV_stack_11->SetBinError(15,2.131866);
   hNCinFV_stack_11->SetBinError(16,2.330005);
   hNCinFV_stack_11->SetBinError(17,2.322542);
   hNCinFV_stack_11->SetBinError(18,2.280829);
   hNCinFV_stack_11->SetBinError(19,2.313687);
   hNCinFV_stack_11->SetBinError(20,2.411265);
   hNCinFV_stack_11->SetBinError(21,2.33021);
   hNCinFV_stack_11->SetBinError(22,2.186467);
   hNCinFV_stack_11->SetBinError(23,2.481318);
   hNCinFV_stack_11->SetBinError(24,2.131921);
   hNCinFV_stack_11->SetBinError(25,2.176535);
   hNCinFV_stack_11->SetBinError(26,1.000664);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,7.425491);
   hnumuCCinFV_stack_12->SetBinContent(2,15.65067);
   hnumuCCinFV_stack_12->SetBinContent(3,17.98665);
   hnumuCCinFV_stack_12->SetBinContent(4,16.50164);
   hnumuCCinFV_stack_12->SetBinContent(5,19.37991);
   hnumuCCinFV_stack_12->SetBinContent(6,15.96273);
   hnumuCCinFV_stack_12->SetBinContent(7,18.14964);
   hnumuCCinFV_stack_12->SetBinContent(8,19.7776);
   hnumuCCinFV_stack_12->SetBinContent(9,16.99358);
   hnumuCCinFV_stack_12->SetBinContent(10,24.95209);
   hnumuCCinFV_stack_12->SetBinContent(11,26.76494);
   hnumuCCinFV_stack_12->SetBinContent(12,28.6552);
   hnumuCCinFV_stack_12->SetBinContent(13,27.53531);
   hnumuCCinFV_stack_12->SetBinContent(14,30.67908);
   hnumuCCinFV_stack_12->SetBinContent(15,27.39163);
   hnumuCCinFV_stack_12->SetBinContent(16,28.39363);
   hnumuCCinFV_stack_12->SetBinContent(17,32.0708);
   hnumuCCinFV_stack_12->SetBinContent(18,29.80695);
   hnumuCCinFV_stack_12->SetBinContent(19,38.42222);
   hnumuCCinFV_stack_12->SetBinContent(20,31.21395);
   hnumuCCinFV_stack_12->SetBinContent(21,35.65159);
   hnumuCCinFV_stack_12->SetBinContent(22,34.89928);
   hnumuCCinFV_stack_12->SetBinContent(23,36.84209);
   hnumuCCinFV_stack_12->SetBinContent(24,30.92888);
   hnumuCCinFV_stack_12->SetBinContent(25,27.82312);
   hnumuCCinFV_stack_12->SetBinContent(26,13.63576);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,1.411106);
   hnumuCCinFV_stack_12->SetBinError(2,1.967418);
   hnumuCCinFV_stack_12->SetBinError(3,2.579056);
   hnumuCCinFV_stack_12->SetBinError(4,2.15759);
   hnumuCCinFV_stack_12->SetBinError(5,2.491076);
   hnumuCCinFV_stack_12->SetBinError(6,2.068152);
   hnumuCCinFV_stack_12->SetBinError(7,2.414985);
   hnumuCCinFV_stack_12->SetBinError(8,2.53186);
   hnumuCCinFV_stack_12->SetBinError(9,2.397319);
   hnumuCCinFV_stack_12->SetBinError(10,2.708683);
   hnumuCCinFV_stack_12->SetBinError(11,2.827058);
   hnumuCCinFV_stack_12->SetBinError(12,3.272179);
   hnumuCCinFV_stack_12->SetBinError(13,2.948994);
   hnumuCCinFV_stack_12->SetBinError(14,3.291156);
   hnumuCCinFV_stack_12->SetBinError(15,2.804796);
   hnumuCCinFV_stack_12->SetBinError(16,3.151644);
   hnumuCCinFV_stack_12->SetBinError(17,3.221914);
   hnumuCCinFV_stack_12->SetBinError(18,2.989532);
   hnumuCCinFV_stack_12->SetBinError(19,3.784439);
   hnumuCCinFV_stack_12->SetBinError(20,3.343669);
   hnumuCCinFV_stack_12->SetBinError(21,3.169542);
   hnumuCCinFV_stack_12->SetBinError(22,3.758984);
   hnumuCCinFV_stack_12->SetBinError(23,3.853662);
   hnumuCCinFV_stack_12->SetBinError(24,3.212586);
   hnumuCCinFV_stack_12->SetBinError(25,3.81456);
   hnumuCCinFV_stack_12->SetBinError(26,2.478024);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,1.4588);
   hnueCCinFV_stack_13->SetBinContent(4,2.437208);
   hnueCCinFV_stack_13->SetBinContent(5,1.032564);
   hnueCCinFV_stack_13->SetBinContent(6,2.231684);
   hnueCCinFV_stack_13->SetBinContent(7,1.588087);
   hnueCCinFV_stack_13->SetBinContent(8,3.041458);
   hnueCCinFV_stack_13->SetBinContent(9,3.684051);
   hnueCCinFV_stack_13->SetBinContent(10,2.86539);
   hnueCCinFV_stack_13->SetBinContent(11,1.623242);
   hnueCCinFV_stack_13->SetBinContent(12,1.72139);
   hnueCCinFV_stack_13->SetBinContent(13,3.626661);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,3.019368);
   hnueCCinFV_stack_13->SetBinContent(16,0.8523195);
   hnueCCinFV_stack_13->SetBinContent(17,3.932542);
   hnueCCinFV_stack_13->SetBinContent(18,2.613865);
   hnueCCinFV_stack_13->SetBinContent(19,2.204338);
   hnueCCinFV_stack_13->SetBinContent(20,3.375159);
   hnueCCinFV_stack_13->SetBinContent(21,2.127757);
   hnueCCinFV_stack_13->SetBinContent(22,1.612348);
   hnueCCinFV_stack_13->SetBinContent(23,3.729996);
   hnueCCinFV_stack_13->SetBinContent(24,1.093734);
   hnueCCinFV_stack_13->SetBinContent(25,1.558595);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.6664575);
   hnueCCinFV_stack_13->SetBinError(4,1.380611);
   hnueCCinFV_stack_13->SetBinError(5,0.4638397);
   hnueCCinFV_stack_13->SetBinError(6,0.8460623);
   hnueCCinFV_stack_13->SetBinError(7,0.5830615);
   hnueCCinFV_stack_13->SetBinError(8,1.060865);
   hnueCCinFV_stack_13->SetBinError(9,1.18647);
   hnueCCinFV_stack_13->SetBinError(10,1.35873);
   hnueCCinFV_stack_13->SetBinError(11,0.5749614);
   hnueCCinFV_stack_13->SetBinError(12,0.6799435);
   hnueCCinFV_stack_13->SetBinError(13,1.413126);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,1.159416);
   hnueCCinFV_stack_13->SetBinError(16,0.4301776);
   hnueCCinFV_stack_13->SetBinError(17,1.724362);
   hnueCCinFV_stack_13->SetBinError(18,0.8886617);
   hnueCCinFV_stack_13->SetBinError(19,1.055046);
   hnueCCinFV_stack_13->SetBinError(20,1.038082);
   hnueCCinFV_stack_13->SetBinError(21,0.7300175);
   hnueCCinFV_stack_13->SetBinError(22,0.6262438);
   hnueCCinFV_stack_13->SetBinError(23,1.762662);
   hnueCCinFV_stack_13->SetBinError(24,0.4936907);
   hnueCCinFV_stack_13->SetBinError(25,0.6687268);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,12.57775);
   hmcerror__2->SetBinContent(1,167.2344);
   hmcerror__2->SetBinContent(2,223.0107);
   hmcerror__2->SetBinContent(3,257.6033);
   hmcerror__2->SetBinContent(4,262.2542);
   hmcerror__2->SetBinContent(5,270.622);
   hmcerror__2->SetBinContent(6,278.3476);
   hmcerror__2->SetBinContent(7,265.7898);
   hmcerror__2->SetBinContent(8,291.4584);
   hmcerror__2->SetBinContent(9,288.8155);
   hmcerror__2->SetBinContent(10,290.8104);
   hmcerror__2->SetBinContent(11,295.0972);
   hmcerror__2->SetBinContent(12,295.3149);
   hmcerror__2->SetBinContent(13,297.3922);
   hmcerror__2->SetBinContent(14,304.8787);
   hmcerror__2->SetBinContent(15,290.1278);
   hmcerror__2->SetBinContent(16,297.5722);
   hmcerror__2->SetBinContent(17,323.7687);
   hmcerror__2->SetBinContent(18,318.4938);
   hmcerror__2->SetBinContent(19,311.1685);
   hmcerror__2->SetBinContent(20,319.7262);
   hmcerror__2->SetBinContent(21,327.7546);
   hmcerror__2->SetBinContent(22,319.6064);
   hmcerror__2->SetBinContent(23,326.4337);
   hmcerror__2->SetBinContent(24,304.3458);
   hmcerror__2->SetBinContent(25,254.9145);
   hmcerror__2->SetBinContent(26,128.8401);
   hmcerror__2->SetBinContent(27,10.34641);
   hmcerror__2->SetBinError(0,1.770004);
   hmcerror__2->SetBinError(1,41.67808);
   hmcerror__2->SetBinError(2,55.48155);
   hmcerror__2->SetBinError(3,62.42024);
   hmcerror__2->SetBinError(4,56.86776);
   hmcerror__2->SetBinError(5,73.43915);
   hmcerror__2->SetBinError(6,64.06032);
   hmcerror__2->SetBinError(7,64.6787);
   hmcerror__2->SetBinError(8,69.27315);
   hmcerror__2->SetBinError(9,66.79638);
   hmcerror__2->SetBinError(10,64.85574);
   hmcerror__2->SetBinError(11,68.60968);
   hmcerror__2->SetBinError(12,68.08723);
   hmcerror__2->SetBinError(13,68.39366);
   hmcerror__2->SetBinError(14,71.87511);
   hmcerror__2->SetBinError(15,63.51426);
   hmcerror__2->SetBinError(16,67.23915);
   hmcerror__2->SetBinError(17,69.06499);
   hmcerror__2->SetBinError(18,74.71797);
   hmcerror__2->SetBinError(19,74.01377);
   hmcerror__2->SetBinError(20,70.45266);
   hmcerror__2->SetBinError(21,80.25548);
   hmcerror__2->SetBinError(22,67.57275);
   hmcerror__2->SetBinError(23,77.71164);
   hmcerror__2->SetBinError(24,68.72223);
   hmcerror__2->SetBinError(25,56.1986);
   hmcerror__2->SetBinError(26,37.70366);
   hmcerror__2->SetBinError(27,8.280432);
   hmcerror__2->SetEntries(7241.585);

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
   
   Double_t _fx3001[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3001[26] = {
   150,
   186,
   229,
   227,
   220,
   226,
   244,
   246,
   283,
   272,
   284,
   270,
   292,
   262,
   265,
   277,
   270,
   269,
   254,
   269,
   299,
   295,
   284,
   225,
   221,
   108};
   Double_t _felx3001[26] = {
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
   Double_t _fely3001[26] = {
   12.24745,
   13.63818,
   15.13275,
   15.06652,
   14.8324,
   15.0333,
   15.6205,
   15.68439,
   16.8226,
   16.49242,
   16.8523,
   16.43168,
   17.08801,
   16.18641,
   16.27882,
   16.64332,
   16.43168,
   16.40122,
   15.93738,
   16.40122,
   17.29162,
   17.17556,
   16.8523,
   15,
   14.86607,
   10.3923};
   Double_t _fehx3001[26] = {
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
   Double_t _fehy3001[26] = {
   12.24745,
   13.63818,
   15.13275,
   15.06652,
   14.8324,
   15.0333,
   15.6205,
   15.68439,
   16.8226,
   16.49242,
   16.8523,
   16.43168,
   17.08801,
   16.18641,
   16.27882,
   16.64332,
   16.43168,
   16.40122,
   15.93738,
   16.40122,
   17.29162,
   17.17556,
   16.8523,
   15,
   14.86607,
   10.3923};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(75.7393);
   Graph_Graph3001->SetMaximum(338.16);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6427.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 612.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 72.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 707.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2753.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  538.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1093.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 511.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3002[26] = {
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
   Double_t _felx3002[26] = {
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
   Double_t _fely3002[26] = {
   0.2492195,
   0.2487842,
   0.2423115,
   0.2168422,
   0.2713717,
   0.230145,
   0.2433453,
   0.2376777,
   0.231277,
   0.2230173,
   0.2324985,
   0.230558,
   0.229978,
   0.2357499,
   0.2189182,
   0.2259591,
   0.2133158,
   0.2345979,
   0.2378576,
   0.2203531,
   0.2448645,
   0.2114249,
   0.2380626,
   0.2258032,
   0.2204606,
   0.2926393};
   Double_t _fehx3002[26] = {
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
   Double_t _fehy3002[26] = {
   0.2492195,
   0.2487842,
   0.2423115,
   0.2168422,
   0.2713717,
   0.230145,
   0.2433453,
   0.2376777,
   0.231277,
   0.2230173,
   0.2324985,
   0.230558,
   0.229978,
   0.2357499,
   0.2189182,
   0.2259591,
   0.2133158,
   0.2345979,
   0.2378576,
   0.2203531,
   0.2448645,
   0.2114249,
   0.2380626,
   0.2258032,
   0.2204606,
   0.2926393};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3003[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3003[26] = {
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
   Double_t _felx3003[26] = {
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
   Double_t _fely3003[26] = {
   0.1892775,
   0.1956071,
   0.2059805,
   0.2009467,
   0.2144577,
   0.2114719,
   0.2142754,
   0.2152847,
   0.2110267,
   0.198413,
   0.216839,
   0.2072832,
   0.1982166,
   0.211176,
   0.2025294,
   0.2050059,
   0.1947288,
   0.2017543,
   0.2084398,
   0.2016158,
   0.1987656,
   0.1929297,
   0.1893768,
   0.1939967,
   0.1803517,
   0.1906879};
   Double_t _fehx3003[26] = {
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
   Double_t _fehy3003[26] = {
   0.1892775,
   0.1956071,
   0.2059805,
   0.2009467,
   0.2144577,
   0.2114719,
   0.2142754,
   0.2152847,
   0.2110267,
   0.198413,
   0.216839,
   0.2072832,
   0.1982166,
   0.211176,
   0.2025294,
   0.2050059,
   0.1947288,
   0.2017543,
   0.2084398,
   0.2016158,
   0.1987656,
   0.1929297,
   0.1893768,
   0.1939967,
   0.1803517,
   0.1906879};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
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
   
   Double_t _fx3004[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3004[26] = {
   0.8969445,
   0.8340407,
   0.8889639,
   0.8655726,
   0.8129421,
   0.8119344,
   0.9180188,
   0.8440312,
   0.9798643,
   0.9353173,
   0.9623947,
   0.9142782,
   0.9818686,
   0.8593583,
   0.9133907,
   0.9308665,
   0.8339287,
   0.8446005,
   0.8162781,
   0.8413449,
   0.9122678,
   0.9230104,
   0.8700083,
   0.7392907,
   0.8669573,
   0.8382486};
   Double_t _felx3004[26] = {
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
   Double_t _fely3004[26] = {
   0.07323521,
   0.06115483,
   0.05874439,
   0.05745007,
   0.05480855,
   0.05400908,
   0.05877013,
   0.05381347,
   0.05824689,
   0.05671194,
   0.05710762,
   0.0556412,
   0.05745951,
   0.05309133,
   0.05610914,
   0.05593035,
   0.05075129,
   0.0514962,
   0.05121784,
   0.0512977,
   0.05275781,
   0.05373975,
   0.0516255,
   0.04928605,
   0.05831786,
   0.08066051};
   Double_t _fehx3004[26] = {
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
   Double_t _fehy3004[26] = {
   0.07323521,
   0.06115483,
   0.05874439,
   0.05745007,
   0.05480855,
   0.05400908,
   0.05877013,
   0.05381347,
   0.05824689,
   0.05671194,
   0.05710762,
   0.0556412,
   0.05745951,
   0.05309133,
   0.05610914,
   0.05593035,
   0.05075129,
   0.0514962,
   0.05121784,
   0.0512977,
   0.05275781,
   0.05373975,
   0.0516255,
   0.04928605,
   0.05831786,
   0.08066051};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.6550723);
   Graph_Graph3004->SetMaximum(1.07426);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
