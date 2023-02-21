#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 23:31:33 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-0.92,3.957692,101.7326);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__22->SetBinContent(1,44.11746);
   hmc__22->SetBinContent(2,35.77874);
   hmc__22->SetBinContent(3,38.52642);
   hmc__22->SetBinContent(4,41.2052);
   hmc__22->SetBinContent(5,31.89957);
   hmc__22->SetBinContent(6,31.86307);
   hmc__22->SetBinContent(7,44.56811);
   hmc__22->SetBinContent(8,32.70823);
   hmc__22->SetBinContent(9,30.40484);
   hmc__22->SetBinContent(10,37.21998);
   hmc__22->SetBinContent(11,33.80589);
   hmc__22->SetBinContent(12,39.31709);
   hmc__22->SetBinContent(13,31.40633);
   hmc__22->SetBinContent(14,33.9075);
   hmc__22->SetBinContent(15,37.59694);
   hmc__22->SetBinContent(16,39.58804);
   hmc__22->SetBinContent(17,38.91522);
   hmc__22->SetBinContent(18,39.99739);
   hmc__22->SetBinContent(19,39.54682);
   hmc__22->SetBinContent(20,39.78362);
   hmc__22->SetBinContent(21,37.59043);
   hmc__22->SetBinContent(22,40.38601);
   hmc__22->SetBinContent(23,35.18612);
   hmc__22->SetBinContent(24,39.47233);
   hmc__22->SetBinContent(25,38.77295);
   hmc__22->SetBinError(1,17.06474);
   hmc__22->SetBinError(2,15.97254);
   hmc__22->SetBinError(3,14.53104);
   hmc__22->SetBinError(4,19.38705);
   hmc__22->SetBinError(5,13.42948);
   hmc__22->SetBinError(6,17.89711);
   hmc__22->SetBinError(7,16.19883);
   hmc__22->SetBinError(8,15.66585);
   hmc__22->SetBinError(9,14.70113);
   hmc__22->SetBinError(10,15.0856);
   hmc__22->SetBinError(11,19.68579);
   hmc__22->SetBinError(12,20.77166);
   hmc__22->SetBinError(13,14.02366);
   hmc__22->SetBinError(14,13.29472);
   hmc__22->SetBinError(15,14.25907);
   hmc__22->SetBinError(16,18.31518);
   hmc__22->SetBinError(17,17.16465);
   hmc__22->SetBinError(18,12.99772);
   hmc__22->SetBinError(19,18.66483);
   hmc__22->SetBinError(20,15.72797);
   hmc__22->SetBinError(21,14.45858);
   hmc__22->SetBinError(22,15.87446);
   hmc__22->SetBinError(23,13.63496);
   hmc__22->SetBinError(24,17.14953);
   hmc__22->SetBinError(25,16.94413);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-0.92);
   hmc__22->SetMaximum(96.6);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-3.15,3.15);
   hs8_stack_8->SetMinimum(-9.756003e-09);
   hs8_stack_8->SetMaximum(46.79652);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.577209);
   hbadmatch_stack_1->SetBinContent(2,0.8378872);
   hbadmatch_stack_1->SetBinContent(3,2.047195);
   hbadmatch_stack_1->SetBinContent(4,1.746742);
   hbadmatch_stack_1->SetBinContent(5,1.489491);
   hbadmatch_stack_1->SetBinContent(6,0.3786066);
   hbadmatch_stack_1->SetBinContent(7,2.384872);
   hbadmatch_stack_1->SetBinContent(8,0.9129313);
   hbadmatch_stack_1->SetBinContent(9,0.4973041);
   hbadmatch_stack_1->SetBinContent(10,0.2563201);
   hbadmatch_stack_1->SetBinContent(11,1.952935);
   hbadmatch_stack_1->SetBinContent(12,1.373314);
   hbadmatch_stack_1->SetBinContent(13,0.7336084);
   hbadmatch_stack_1->SetBinContent(14,0.305647);
   hbadmatch_stack_1->SetBinContent(15,1.819584);
   hbadmatch_stack_1->SetBinContent(16,2.968564);
   hbadmatch_stack_1->SetBinContent(17,0.630621);
   hbadmatch_stack_1->SetBinContent(18,2.36325);
   hbadmatch_stack_1->SetBinContent(19,1.128618);
   hbadmatch_stack_1->SetBinContent(20,0.2855402);
   hbadmatch_stack_1->SetBinContent(21,2.527724);
   hbadmatch_stack_1->SetBinContent(22,1.253497);
   hbadmatch_stack_1->SetBinContent(23,1.362225);
   hbadmatch_stack_1->SetBinContent(24,1.954185);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.7419973);
   hbadmatch_stack_1->SetBinError(2,0.4516511);
   hbadmatch_stack_1->SetBinError(3,0.800333);
   hbadmatch_stack_1->SetBinError(4,0.6565292);
   hbadmatch_stack_1->SetBinError(5,0.6559426);
   hbadmatch_stack_1->SetBinError(6,0.2679205);
   hbadmatch_stack_1->SetBinError(7,0.9443475);
   hbadmatch_stack_1->SetBinError(8,0.4880392);
   hbadmatch_stack_1->SetBinError(9,0.446535);
   hbadmatch_stack_1->SetBinError(10,0.2563201);
   hbadmatch_stack_1->SetBinError(11,0.7126392);
   hbadmatch_stack_1->SetBinError(12,0.6271674);
   hbadmatch_stack_1->SetBinError(13,0.4394482);
   hbadmatch_stack_1->SetBinError(14,0.2242141);
   hbadmatch_stack_1->SetBinError(15,0.7725288);
   hbadmatch_stack_1->SetBinError(16,1.257127);
   hbadmatch_stack_1->SetBinError(17,0.365586);
   hbadmatch_stack_1->SetBinError(18,0.8884546);
   hbadmatch_stack_1->SetBinError(19,0.530619);
   hbadmatch_stack_1->SetBinError(20,0.2855402);
   hbadmatch_stack_1->SetBinError(21,0.9643529);
   hbadmatch_stack_1->SetBinError(22,0.6335887);
   hbadmatch_stack_1->SetBinError(23,0.6691504);
   hbadmatch_stack_1->SetBinError(24,0.8540972);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.082985);
   hext_stack_2->SetBinContent(2,3.725593);
   hext_stack_2->SetBinContent(3,5.034772);
   hext_stack_2->SetBinContent(4,10.88432);
   hext_stack_2->SetBinContent(5,6.736189);
   hext_stack_2->SetBinContent(6,8.07844);
   hext_stack_2->SetBinContent(7,14.46869);
   hext_stack_2->SetBinContent(8,7.627179);
   hext_stack_2->SetBinContent(9,3.979379);
   hext_stack_2->SetBinContent(10,9.018501);
   hext_stack_2->SetBinContent(11,4.468179);
   hext_stack_2->SetBinContent(12,4.785396);
   hext_stack_2->SetBinContent(13,2.841783);
   hext_stack_2->SetBinContent(14,5.318858);
   hext_stack_2->SetBinContent(15,7.384983);
   hext_stack_2->SetBinContent(16,6.482403);
   hext_stack_2->SetBinContent(17,11.69311);
   hext_stack_2->SetBinContent(18,11.84157);
   hext_stack_2->SetBinContent(19,16.81008);
   hext_stack_2->SetBinContent(20,14.23645);
   hext_stack_2->SetBinContent(21,11.11058);
   hext_stack_2->SetBinContent(22,8.99538);
   hext_stack_2->SetBinContent(23,6.146417);
   hext_stack_2->SetBinContent(24,6.837101);
   hext_stack_2->SetBinContent(25,4.53161);
   hext_stack_2->SetBinError(1,1.552674);
   hext_stack_2->SetBinError(2,1.216121);
   hext_stack_2->SetBinError(3,1.354181);
   hext_stack_2->SetBinError(4,2.408343);
   hext_stack_2->SetBinError(5,1.660237);
   hext_stack_2->SetBinError(6,1.942156);
   hext_stack_2->SetBinError(7,2.650798);
   hext_stack_2->SetBinError(8,1.735511);
   hext_stack_2->SetBinError(9,1.207483);
   hext_stack_2->SetBinError(10,2.181136);
   hext_stack_2->SetBinError(11,1.297469);
   hext_stack_2->SetBinError(12,1.410625);
   hext_stack_2->SetBinError(13,1.011007);
   hext_stack_2->SetBinError(14,1.676283);
   hext_stack_2->SetBinError(15,1.722456);
   hext_stack_2->SetBinError(16,1.666529);
   hext_stack_2->SetBinError(17,2.448599);
   hext_stack_2->SetBinError(18,2.171718);
   hext_stack_2->SetBinError(19,2.808831);
   hext_stack_2->SetBinError(20,2.538515);
   hext_stack_2->SetBinError(21,2.108507);
   hext_stack_2->SetBinError(22,1.886558);
   hext_stack_2->SetBinError(23,1.65474);
   hext_stack_2->SetBinError(24,1.969672);
   hext_stack_2->SetBinError(25,1.418025);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.776099);
   hdirt_stack_3->SetBinContent(2,1.109369);
   hdirt_stack_3->SetBinContent(3,0.3449163);
   hdirt_stack_3->SetBinContent(4,0.3923103);
   hdirt_stack_3->SetBinContent(5,1.014562);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.7269897);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.5002366);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.4720574);
   hdirt_stack_3->SetBinContent(13,0.61753);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.9713526);
   hdirt_stack_3->SetBinContent(16,1.115656);
   hdirt_stack_3->SetBinContent(17,0.3782986);
   hdirt_stack_3->SetBinContent(18,0.9525174);
   hdirt_stack_3->SetBinContent(19,1.756037);
   hdirt_stack_3->SetBinContent(20,0.2548162);
   hdirt_stack_3->SetBinContent(21,0.9654288);
   hdirt_stack_3->SetBinContent(22,1.013654);
   hdirt_stack_3->SetBinContent(23,1.270754);
   hdirt_stack_3->SetBinContent(24,1.812369);
   hdirt_stack_3->SetBinContent(25,1.810166);
   hdirt_stack_3->SetBinError(1,0.458477);
   hdirt_stack_3->SetBinError(2,0.4884064);
   hdirt_stack_3->SetBinError(3,0.3382541);
   hdirt_stack_3->SetBinError(4,0.3923103);
   hdirt_stack_3->SetBinError(5,0.5857574);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.4419486);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3750075);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2832398);
   hdirt_stack_3->SetBinError(13,0.3672493);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.5778454);
   hdirt_stack_3->SetBinError(16,0.4902211);
   hdirt_stack_3->SetBinError(17,0.3782986);
   hdirt_stack_3->SetBinError(18,0.5165933);
   hdirt_stack_3->SetBinError(19,1.051854);
   hdirt_stack_3->SetBinError(20,0.2548162);
   hdirt_stack_3->SetBinError(21,0.5163876);
   hdirt_stack_3->SetBinError(22,0.4590478);
   hdirt_stack_3->SetBinError(23,0.5943722);
   hdirt_stack_3->SetBinError(24,0.7272816);
   hdirt_stack_3->SetBinError(25,0.7274869);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,9.471766);
   houtFV_stack_4->SetBinContent(2,5.06336);
   houtFV_stack_4->SetBinContent(3,9.690968);
   houtFV_stack_4->SetBinContent(4,9.700918);
   houtFV_stack_4->SetBinContent(5,7.141262);
   houtFV_stack_4->SetBinContent(6,7.057149);
   houtFV_stack_4->SetBinContent(7,8.276026);
   houtFV_stack_4->SetBinContent(8,7.509);
   houtFV_stack_4->SetBinContent(9,8.221863);
   houtFV_stack_4->SetBinContent(10,7.335547);
   houtFV_stack_4->SetBinContent(11,6.187429);
   houtFV_stack_4->SetBinContent(12,9.72373);
   houtFV_stack_4->SetBinContent(13,7.844328);
   houtFV_stack_4->SetBinContent(14,9.03978);
   houtFV_stack_4->SetBinContent(15,6.067187);
   houtFV_stack_4->SetBinContent(16,8.736094);
   houtFV_stack_4->SetBinContent(17,6.702771);
   houtFV_stack_4->SetBinContent(18,7.762944);
   houtFV_stack_4->SetBinContent(19,5.177892);
   houtFV_stack_4->SetBinContent(20,6.632151);
   houtFV_stack_4->SetBinContent(21,5.650045);
   houtFV_stack_4->SetBinContent(22,9.160849);
   houtFV_stack_4->SetBinContent(23,6.923374);
   houtFV_stack_4->SetBinContent(24,9.410704);
   houtFV_stack_4->SetBinContent(25,7.953007);
   houtFV_stack_4->SetBinError(1,1.470909);
   houtFV_stack_4->SetBinError(2,1.069901);
   houtFV_stack_4->SetBinError(3,1.523523);
   houtFV_stack_4->SetBinError(4,1.637666);
   houtFV_stack_4->SetBinError(5,1.355692);
   houtFV_stack_4->SetBinError(6,1.33601);
   houtFV_stack_4->SetBinError(7,1.454341);
   houtFV_stack_4->SetBinError(8,1.576672);
   houtFV_stack_4->SetBinError(9,1.42956);
   houtFV_stack_4->SetBinError(10,1.391302);
   houtFV_stack_4->SetBinError(11,1.203094);
   houtFV_stack_4->SetBinError(12,1.590354);
   houtFV_stack_4->SetBinError(13,1.511444);
   houtFV_stack_4->SetBinError(14,1.61549);
   houtFV_stack_4->SetBinError(15,1.192588);
   houtFV_stack_4->SetBinError(16,1.466988);
   houtFV_stack_4->SetBinError(17,1.223247);
   houtFV_stack_4->SetBinError(18,1.817286);
   houtFV_stack_4->SetBinError(19,1.088386);
   houtFV_stack_4->SetBinError(20,1.341328);
   houtFV_stack_4->SetBinError(21,1.136857);
   houtFV_stack_4->SetBinError(22,1.551198);
   houtFV_stack_4->SetBinError(23,1.336447);
   houtFV_stack_4->SetBinError(24,1.496213);
   houtFV_stack_4->SetBinError(25,1.439262);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3958945);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2152515);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.929504);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6235802);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3372987);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3957439);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.972997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4778559);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6272141);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7955062);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.726756);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.022011);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5191553);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6974301);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3487993);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4683748);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4216481);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.221977);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9422861);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6850245);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2575171);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7580722);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.683863);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8240155);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.312559);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1628866);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08297362);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.339226);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.243594);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2582961);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1790938);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3790194);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3359826);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2360842);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3188555);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3447819);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4583869);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3178063);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2846121);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1635274);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2090944);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2107612);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.09189308);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3635143);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3299879);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.09395753);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3422889);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2612544);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3587009);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1261379);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.174391);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05120998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1014503);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.07363392);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.133183);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0418907);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07741595);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05207117);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01822846);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.319459);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.371361);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.746449);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.265448);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.66683);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.760488);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.137414);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.872552);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.490445);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.324592);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.65966);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.739394);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.243854);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.61469);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.922018);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.209301);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.981487);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.771185);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.509571);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.81585);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.400045);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.964628);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.961745);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.300624);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.645856);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6262862);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8405114);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8074406);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7809536);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5914645);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6794274);
   hNCpi0inFVres_stack_7->SetBinError(7,0.568987);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6686434);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6538112);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6575648);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7272479);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6139431);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6571022);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6135536);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7459799);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7590144);
   hNCpi0inFVres_stack_7->SetBinError(17,0.874173);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7763066);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5833852);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8318516);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9037931);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7338281);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5819375);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7959875);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7401057);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.209846);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.66544);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.605857);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.273435);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.448225);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7580487);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8937941);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.9584015);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.155831);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.665186);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.160268);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8659592);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.570169);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9991981);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.260602);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.177143);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.471602);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5844214);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.02935);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.154631);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8967259);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.629887);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.900805);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.302103);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.430674);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3572846);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6517222);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5807168);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3899585);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4319085);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2237912);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3310916);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2324802);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3921321);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5080864);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6698665);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2266783);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4686499);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3222863);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4408223);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3206041);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5511009);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1913561);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2883686);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3754322);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2738851);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7519714);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4330972);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3495763);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.366828);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,11.64113);
   hCCpi0inFV_stack_10->SetBinContent(2,10.08766);
   hCCpi0inFV_stack_10->SetBinContent(3,8.573768);
   hCCpi0inFV_stack_10->SetBinContent(4,6.875717);
   hCCpi0inFV_stack_10->SetBinContent(5,5.516855);
   hCCpi0inFV_stack_10->SetBinContent(6,6.620222);
   hCCpi0inFV_stack_10->SetBinContent(7,7.154705);
   hCCpi0inFV_stack_10->SetBinContent(8,6.029374);
   hCCpi0inFV_stack_10->SetBinContent(9,7.570052);
   hCCpi0inFV_stack_10->SetBinContent(10,8.912503);
   hCCpi0inFV_stack_10->SetBinContent(11,7.111955);
   hCCpi0inFV_stack_10->SetBinContent(12,7.911031);
   hCCpi0inFV_stack_10->SetBinContent(13,6.404669);
   hCCpi0inFV_stack_10->SetBinContent(14,7.474814);
   hCCpi0inFV_stack_10->SetBinContent(15,7.283913);
   hCCpi0inFV_stack_10->SetBinContent(16,7.257388);
   hCCpi0inFV_stack_10->SetBinContent(17,9.226925);
   hCCpi0inFV_stack_10->SetBinContent(18,6.202282);
   hCCpi0inFV_stack_10->SetBinContent(19,5.076934);
   hCCpi0inFV_stack_10->SetBinContent(20,6.58726);
   hCCpi0inFV_stack_10->SetBinContent(21,6.93082);
   hCCpi0inFV_stack_10->SetBinContent(22,8.173206);
   hCCpi0inFV_stack_10->SetBinContent(23,7.578682);
   hCCpi0inFV_stack_10->SetBinContent(24,7.081044);
   hCCpi0inFV_stack_10->SetBinContent(25,7.705153);
   hCCpi0inFV_stack_10->SetBinError(1,1.780767);
   hCCpi0inFV_stack_10->SetBinError(2,1.610952);
   hCCpi0inFV_stack_10->SetBinError(3,1.487292);
   hCCpi0inFV_stack_10->SetBinError(4,1.322381);
   hCCpi0inFV_stack_10->SetBinError(5,1.19355);
   hCCpi0inFV_stack_10->SetBinError(6,1.321291);
   hCCpi0inFV_stack_10->SetBinError(7,1.378065);
   hCCpi0inFV_stack_10->SetBinError(8,1.230522);
   hCCpi0inFV_stack_10->SetBinError(9,1.336943);
   hCCpi0inFV_stack_10->SetBinError(10,1.499917);
   hCCpi0inFV_stack_10->SetBinError(11,1.268208);
   hCCpi0inFV_stack_10->SetBinError(12,1.37959);
   hCCpi0inFV_stack_10->SetBinError(13,1.281357);
   hCCpi0inFV_stack_10->SetBinError(14,1.292425);
   hCCpi0inFV_stack_10->SetBinError(15,1.33098);
   hCCpi0inFV_stack_10->SetBinError(16,1.381384);
   hCCpi0inFV_stack_10->SetBinError(17,1.595556);
   hCCpi0inFV_stack_10->SetBinError(18,1.287629);
   hCCpi0inFV_stack_10->SetBinError(19,1.178195);
   hCCpi0inFV_stack_10->SetBinError(20,1.316082);
   hCCpi0inFV_stack_10->SetBinError(21,1.359823);
   hCCpi0inFV_stack_10->SetBinError(22,1.409997);
   hCCpi0inFV_stack_10->SetBinError(23,1.315386);
   hCCpi0inFV_stack_10->SetBinError(24,1.388809);
   hCCpi0inFV_stack_10->SetBinError(25,1.416655);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.538835);
   hNCinFV_stack_11->SetBinContent(2,1.899231);
   hNCinFV_stack_11->SetBinContent(3,0.871542);
   hNCinFV_stack_11->SetBinContent(4,1.031519);
   hNCinFV_stack_11->SetBinContent(5,2.775009);
   hNCinFV_stack_11->SetBinContent(6,0.9545412);
   hNCinFV_stack_11->SetBinContent(7,0.5884556);
   hNCinFV_stack_11->SetBinContent(8,1.87113);
   hNCinFV_stack_11->SetBinContent(9,0.3934307);
   hNCinFV_stack_11->SetBinContent(10,0.7192292);
   hNCinFV_stack_11->SetBinContent(11,1.639575);
   hNCinFV_stack_11->SetBinContent(12,2.050431);
   hNCinFV_stack_11->SetBinContent(13,0.9303237);
   hNCinFV_stack_11->SetBinContent(14,1.008475);
   hNCinFV_stack_11->SetBinContent(15,1.148849);
   hNCinFV_stack_11->SetBinContent(16,2.418884);
   hNCinFV_stack_11->SetBinContent(17,1.045874);
   hNCinFV_stack_11->SetBinContent(18,0.8013791);
   hNCinFV_stack_11->SetBinContent(19,0.5624326);
   hNCinFV_stack_11->SetBinContent(20,0.9431508);
   hNCinFV_stack_11->SetBinContent(21,1.756164);
   hNCinFV_stack_11->SetBinContent(22,1.381367);
   hNCinFV_stack_11->SetBinContent(23,2.550534);
   hNCinFV_stack_11->SetBinContent(24,1.397362);
   hNCinFV_stack_11->SetBinContent(25,2.151225);
   hNCinFV_stack_11->SetBinError(1,0.5756087);
   hNCinFV_stack_11->SetBinError(2,0.6705926);
   hNCinFV_stack_11->SetBinError(3,0.442229);
   hNCinFV_stack_11->SetBinError(4,0.5568331);
   hNCinFV_stack_11->SetBinError(5,1.003335);
   hNCinFV_stack_11->SetBinError(6,0.4801688);
   hNCinFV_stack_11->SetBinError(7,0.3397478);
   hNCinFV_stack_11->SetBinError(8,0.7431263);
   hNCinFV_stack_11->SetBinError(9,0.2781975);
   hNCinFV_stack_11->SetBinError(10,0.3643532);
   hNCinFV_stack_11->SetBinError(11,0.6497412);
   hNCinFV_stack_11->SetBinError(12,0.9163192);
   hNCinFV_stack_11->SetBinError(13,0.4814682);
   hNCinFV_stack_11->SetBinError(14,0.5291653);
   hNCinFV_stack_11->SetBinError(15,0.5671454);
   hNCinFV_stack_11->SetBinError(16,0.9993817);
   hNCinFV_stack_11->SetBinError(17,0.5005374);
   hNCinFV_stack_11->SetBinError(18,0.4008867);
   hNCinFV_stack_11->SetBinError(19,0.4063473);
   hNCinFV_stack_11->SetBinError(20,0.4869002);
   hNCinFV_stack_11->SetBinError(21,0.6043486);
   hNCinFV_stack_11->SetBinError(22,0.6478232);
   hNCinFV_stack_11->SetBinError(23,0.8732876);
   hNCinFV_stack_11->SetBinError(24,0.7286303);
   hNCinFV_stack_11->SetBinError(25,0.67971);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.10424);
   hnumuCCinFV_stack_12->SetBinContent(2,4.803586);
   hnumuCCinFV_stack_12->SetBinContent(3,2.971595);
   hnumuCCinFV_stack_12->SetBinContent(4,3.404145);
   hnumuCCinFV_stack_12->SetBinContent(5,1.358519);
   hnumuCCinFV_stack_12->SetBinContent(6,3.704212);
   hnumuCCinFV_stack_12->SetBinContent(7,5.964167);
   hnumuCCinFV_stack_12->SetBinContent(8,2.311737);
   hnumuCCinFV_stack_12->SetBinContent(9,3.116304);
   hnumuCCinFV_stack_12->SetBinContent(10,3.681643);
   hnumuCCinFV_stack_12->SetBinContent(11,4.288984);
   hnumuCCinFV_stack_12->SetBinContent(12,7.169978);
   hnumuCCinFV_stack_12->SetBinContent(13,5.485772);
   hnumuCCinFV_stack_12->SetBinContent(14,3.829164);
   hnumuCCinFV_stack_12->SetBinContent(15,5.236978);
   hnumuCCinFV_stack_12->SetBinContent(16,3.536273);
   hnumuCCinFV_stack_12->SetBinContent(17,2.362887);
   hnumuCCinFV_stack_12->SetBinContent(18,4.444656);
   hnumuCCinFV_stack_12->SetBinContent(19,3.307285);
   hnumuCCinFV_stack_12->SetBinContent(20,4.188746);
   hnumuCCinFV_stack_12->SetBinContent(21,1.602194);
   hnumuCCinFV_stack_12->SetBinContent(22,2.055465);
   hnumuCCinFV_stack_12->SetBinContent(23,2.734088);
   hnumuCCinFV_stack_12->SetBinContent(24,3.495002);
   hnumuCCinFV_stack_12->SetBinContent(25,5.881172);
   hnumuCCinFV_stack_12->SetBinError(1,1.399142);
   hnumuCCinFV_stack_12->SetBinError(2,1.124982);
   hnumuCCinFV_stack_12->SetBinError(3,0.8060189);
   hnumuCCinFV_stack_12->SetBinError(4,0.9044513);
   hnumuCCinFV_stack_12->SetBinError(5,0.5695118);
   hnumuCCinFV_stack_12->SetBinError(6,1.028953);
   hnumuCCinFV_stack_12->SetBinError(7,2.183746);
   hnumuCCinFV_stack_12->SetBinError(8,0.7519435);
   hnumuCCinFV_stack_12->SetBinError(9,1.385093);
   hnumuCCinFV_stack_12->SetBinError(10,0.9829563);
   hnumuCCinFV_stack_12->SetBinError(11,1.12161);
   hnumuCCinFV_stack_12->SetBinError(12,2.536096);
   hnumuCCinFV_stack_12->SetBinError(13,1.221554);
   hnumuCCinFV_stack_12->SetBinError(14,1.079626);
   hnumuCCinFV_stack_12->SetBinError(15,1.229396);
   hnumuCCinFV_stack_12->SetBinError(16,0.9383);
   hnumuCCinFV_stack_12->SetBinError(17,0.9983972);
   hnumuCCinFV_stack_12->SetBinError(18,1.240935);
   hnumuCCinFV_stack_12->SetBinError(19,0.9907168);
   hnumuCCinFV_stack_12->SetBinError(20,1.012074);
   hnumuCCinFV_stack_12->SetBinError(21,0.6197307);
   hnumuCCinFV_stack_12->SetBinError(22,0.6992716);
   hnumuCCinFV_stack_12->SetBinError(23,0.8384077);
   hnumuCCinFV_stack_12->SetBinError(24,0.8861712);
   hnumuCCinFV_stack_12->SetBinError(25,1.230517);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.2261597);
   hnueCCinFV_stack_13->SetBinContent(15,1.15267);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(19,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(25,1.136579);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.2252857);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2261597);
   hnueCCinFV_stack_13->SetBinError(15,0.614407);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(19,0.2463303);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(25,0.7935128);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__23->SetBinContent(1,44.11746);
   hmcerror__23->SetBinContent(2,35.77874);
   hmcerror__23->SetBinContent(3,38.52642);
   hmcerror__23->SetBinContent(4,41.2052);
   hmcerror__23->SetBinContent(5,31.89957);
   hmcerror__23->SetBinContent(6,31.86307);
   hmcerror__23->SetBinContent(7,44.56811);
   hmcerror__23->SetBinContent(8,32.70823);
   hmcerror__23->SetBinContent(9,30.40484);
   hmcerror__23->SetBinContent(10,37.21998);
   hmcerror__23->SetBinContent(11,33.80589);
   hmcerror__23->SetBinContent(12,39.31709);
   hmcerror__23->SetBinContent(13,31.40633);
   hmcerror__23->SetBinContent(14,33.9075);
   hmcerror__23->SetBinContent(15,37.59694);
   hmcerror__23->SetBinContent(16,39.58804);
   hmcerror__23->SetBinContent(17,38.91522);
   hmcerror__23->SetBinContent(18,39.99739);
   hmcerror__23->SetBinContent(19,39.54682);
   hmcerror__23->SetBinContent(20,39.78362);
   hmcerror__23->SetBinContent(21,37.59043);
   hmcerror__23->SetBinContent(22,40.38601);
   hmcerror__23->SetBinContent(23,35.18612);
   hmcerror__23->SetBinContent(24,39.47233);
   hmcerror__23->SetBinContent(25,38.77295);
   hmcerror__23->SetBinError(1,17.06474);
   hmcerror__23->SetBinError(2,15.97254);
   hmcerror__23->SetBinError(3,14.53104);
   hmcerror__23->SetBinError(4,19.38705);
   hmcerror__23->SetBinError(5,13.42948);
   hmcerror__23->SetBinError(6,17.89711);
   hmcerror__23->SetBinError(7,16.19883);
   hmcerror__23->SetBinError(8,15.66585);
   hmcerror__23->SetBinError(9,14.70113);
   hmcerror__23->SetBinError(10,15.0856);
   hmcerror__23->SetBinError(11,19.68579);
   hmcerror__23->SetBinError(12,20.77166);
   hmcerror__23->SetBinError(13,14.02366);
   hmcerror__23->SetBinError(14,13.29472);
   hmcerror__23->SetBinError(15,14.25907);
   hmcerror__23->SetBinError(16,18.31518);
   hmcerror__23->SetBinError(17,17.16465);
   hmcerror__23->SetBinError(18,12.99772);
   hmcerror__23->SetBinError(19,18.66483);
   hmcerror__23->SetBinError(20,15.72797);
   hmcerror__23->SetBinError(21,14.45858);
   hmcerror__23->SetBinError(22,15.87446);
   hmcerror__23->SetBinError(23,13.63496);
   hmcerror__23->SetBinError(24,17.14953);
   hmcerror__23->SetBinError(25,16.94413);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3029[25] = {
   31,
   40,
   30,
   37,
   27,
   36,
   36,
   25,
   27,
   30,
   35,
   41,
   31,
   46,
   43,
   34,
   44,
   28,
   38,
   36,
   39,
   39,
   40,
   33,
   39};
   Double_t _felx3029[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3029[25] = {
   5.7094,
   6.4604,
   5.6197,
   6.2203,
   5.3414,
   6.1381,
   6.1381,
   5.1474,
   5.3414,
   5.6197,
   6.0548,
   6.5384,
   5.7094,
   6.9153,
   6.6917,
   5.9703,
   6.7671,
   5.4358,
   6.3013,
   6.1381,
   6.3813,
   6.3813,
   6.4604,
   5.8847,
   6.3813};
   Double_t _fehx3029[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3029[25] = {
   5.5017,
   6.2549,
   5.4117,
   6.0141,
   5.1322,
   5.9318,
   5.9318,
   4.9374,
   5.1322,
   5.4117,
   5.8483,
   6.3331,
   5.5017,
   6.7108,
   6.4868,
   5.7635,
   6.5623,
   5.2271,
   6.0955,
   5.9318,
   6.1757,
   6.1757,
   6.2549,
   5.6776,
   6.1757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(16.56678);
   Graph_Graph3029->SetMaximum(55.99662);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3030[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3030[25] = {
   0.3868023,
   0.4464254,
   0.3771709,
   0.4705001,
   0.4209926,
   0.5616882,
   0.3634623,
   0.4789573,
   0.4835128,
   0.4053093,
   0.5823182,
   0.5283113,
   0.4465235,
   0.3920879,
   0.3792614,
   0.4626443,
   0.441078,
   0.3249641,
   0.4719678,
   0.3953378,
   0.3846346,
   0.3930683,
   0.3875095,
   0.4344697,
   0.437009};
   Double_t _fehx3030[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3030[25] = {
   0.3868023,
   0.4464254,
   0.3771709,
   0.4705001,
   0.4209926,
   0.5616882,
   0.3634623,
   0.4789573,
   0.4835128,
   0.4053093,
   0.5823182,
   0.5283113,
   0.4465235,
   0.3920879,
   0.3792614,
   0.4626443,
   0.441078,
   0.3249641,
   0.4719678,
   0.3953378,
   0.3846346,
   0.3930683,
   0.3875095,
   0.4344697,
   0.437009};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3031[25] = {
   0.1806486,
   0.2271879,
   0.2030306,
   0.1784276,
   0.1966832,
   0.1862476,
   0.1791407,
   0.191561,
   0.2116366,
   0.1869653,
   0.1958304,
   0.2156145,
   0.1966358,
   0.1943072,
   0.1973734,
   0.2150656,
   0.186274,
   0.1747808,
   0.1694389,
   0.1720062,
   0.195719,
   0.1790044,
   0.2014602,
   0.1932763,
   0.2046539};
   Double_t _fehx3031[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3031[25] = {
   0.1806486,
   0.2271879,
   0.2030306,
   0.1784276,
   0.1966832,
   0.1862476,
   0.1791407,
   0.191561,
   0.2116366,
   0.1869653,
   0.1958304,
   0.2156145,
   0.1966358,
   0.1943072,
   0.1973734,
   0.2150656,
   0.186274,
   0.1747808,
   0.1694389,
   0.1720062,
   0.195719,
   0.1790044,
   0.2014602,
   0.1932763,
   0.2046539};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3032[25] = {
   0.7026696,
   1.117982,
   0.7786864,
   0.8979449,
   0.8464064,
   1.129835,
   0.8077525,
   0.7643336,
   0.8880166,
   0.8060187,
   1.035322,
   1.042804,
   0.9870622,
   1.356632,
   1.14371,
   0.8588452,
   1.130663,
   0.7000456,
   0.9608864,
   0.9048951,
   1.037498,
   0.965681,
   1.136812,
   0.8360287,
   1.005856};
   Double_t _felx3032[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3032[25] = {
   0.1294136,
   0.1805653,
   0.1458661,
   0.1509591,
   0.1674443,
   0.19264,
   0.137724,
   0.1573732,
   0.175676,
   0.1509861,
   0.1791049,
   0.1662992,
   0.1817914,
   0.203946,
   0.1779853,
   0.1508107,
   0.1738934,
   0.1359039,
   0.1593377,
   0.1542871,
   0.1697586,
   0.1580077,
   0.1836065,
   0.1490842,
   0.1645813};
   Double_t _fehx3032[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3032[25] = {
   0.1247057,
   0.1748217,
   0.1404672,
   0.1459549,
   0.1608862,
   0.1861654,
   0.1330952,
   0.1509528,
   0.1687955,
   0.1453977,
   0.1729965,
   0.1610776,
   0.1751781,
   0.1979149,
   0.1725353,
   0.1455869,
   0.1686307,
   0.130686,
   0.1541338,
   0.1491016,
   0.1642892,
   0.1529168,
   0.1777661,
   0.1438375,
   0.1592786};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.4651012);
   Graph_Graph3032->SetMaximum(1.653587);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
