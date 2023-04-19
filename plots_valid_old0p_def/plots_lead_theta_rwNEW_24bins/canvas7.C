#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 12:48:28 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-4.267369,3.553846,471.8811);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__19->SetBinContent(1,36.61565);
   hmc__19->SetBinContent(2,107.9468);
   hmc__19->SetBinContent(3,156.763);
   hmc__19->SetBinContent(4,192.4);
   hmc__19->SetBinContent(5,201.713);
   hmc__19->SetBinContent(6,196.2161);
   hmc__19->SetBinContent(7,213.3684);
   hmc__19->SetBinContent(8,192.2282);
   hmc__19->SetBinContent(9,169.4198);
   hmc__19->SetBinContent(10,160.1167);
   hmc__19->SetBinContent(11,172.7008);
   hmc__19->SetBinContent(12,155.7634);
   hmc__19->SetBinContent(13,123.6459);
   hmc__19->SetBinContent(14,110.6878);
   hmc__19->SetBinContent(15,102.7374);
   hmc__19->SetBinContent(16,109.5495);
   hmc__19->SetBinContent(17,85.26673);
   hmc__19->SetBinContent(18,74.81367);
   hmc__19->SetBinContent(19,73.09389);
   hmc__19->SetBinContent(20,67.15426);
   hmc__19->SetBinContent(21,52.99226);
   hmc__19->SetBinContent(22,48.28518);
   hmc__19->SetBinContent(23,27.97992);
   hmc__19->SetBinContent(24,11.19014);
   hmc__19->SetBinError(1,15.8897);
   hmc__19->SetBinError(2,37.27828);
   hmc__19->SetBinError(3,54.83224);
   hmc__19->SetBinError(4,72.84738);
   hmc__19->SetBinError(5,71.93525);
   hmc__19->SetBinError(6,76.2937);
   hmc__19->SetBinError(7,86.19159);
   hmc__19->SetBinError(8,81.25681);
   hmc__19->SetBinError(9,69.17734);
   hmc__19->SetBinError(10,61.45619);
   hmc__19->SetBinError(11,62.86408);
   hmc__19->SetBinError(12,57.87424);
   hmc__19->SetBinError(13,48.7341);
   hmc__19->SetBinError(14,41.81098);
   hmc__19->SetBinError(15,36.70069);
   hmc__19->SetBinError(16,38.16584);
   hmc__19->SetBinError(17,32.02891);
   hmc__19->SetBinError(18,29.43206);
   hmc__19->SetBinError(19,27.69751);
   hmc__19->SetBinError(20,26.25618);
   hmc__19->SetBinError(21,23.7684);
   hmc__19->SetBinError(22,31.14479);
   hmc__19->SetBinError(23,12.65369);
   hmc__19->SetBinError(24,10.27898);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-4.267369);
   hmc__19->SetMaximum(448.0737);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,3.15);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(224.0369);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,1.115026);
   hbadmatch_stack_1->SetBinContent(3,2.510412);
   hbadmatch_stack_1->SetBinContent(4,3.01457);
   hbadmatch_stack_1->SetBinContent(5,2.218654);
   hbadmatch_stack_1->SetBinContent(6,3.751411);
   hbadmatch_stack_1->SetBinContent(7,3.974979);
   hbadmatch_stack_1->SetBinContent(8,3.219767);
   hbadmatch_stack_1->SetBinContent(9,2.065152);
   hbadmatch_stack_1->SetBinContent(10,4.296412);
   hbadmatch_stack_1->SetBinContent(11,6.15542);
   hbadmatch_stack_1->SetBinContent(12,6.477784);
   hbadmatch_stack_1->SetBinContent(13,1.748062);
   hbadmatch_stack_1->SetBinContent(14,2.834793);
   hbadmatch_stack_1->SetBinContent(15,2.700068);
   hbadmatch_stack_1->SetBinContent(16,1.540271);
   hbadmatch_stack_1->SetBinContent(17,2.473251);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.9519655);
   hbadmatch_stack_1->SetBinContent(20,2.105544);
   hbadmatch_stack_1->SetBinContent(21,1.240872);
   hbadmatch_stack_1->SetBinContent(22,1.266751);
   hbadmatch_stack_1->SetBinContent(23,1.125349);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.5824295);
   hbadmatch_stack_1->SetBinError(3,0.7779949);
   hbadmatch_stack_1->SetBinError(4,0.8342771);
   hbadmatch_stack_1->SetBinError(5,0.8537691);
   hbadmatch_stack_1->SetBinError(6,1.00041);
   hbadmatch_stack_1->SetBinError(7,1.061937);
   hbadmatch_stack_1->SetBinError(8,0.9360306);
   hbadmatch_stack_1->SetBinError(9,0.7658986);
   hbadmatch_stack_1->SetBinError(10,1.227413);
   hbadmatch_stack_1->SetBinError(11,2.203478);
   hbadmatch_stack_1->SetBinError(12,1.645048);
   hbadmatch_stack_1->SetBinError(13,0.6883532);
   hbadmatch_stack_1->SetBinError(14,0.9415347);
   hbadmatch_stack_1->SetBinError(15,0.8535952);
   hbadmatch_stack_1->SetBinError(16,0.589165);
   hbadmatch_stack_1->SetBinError(17,0.8618772);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.4907082);
   hbadmatch_stack_1->SetBinError(20,0.6797106);
   hbadmatch_stack_1->SetBinError(21,0.6022214);
   hbadmatch_stack_1->SetBinError(22,0.6385811);
   hbadmatch_stack_1->SetBinError(23,0.5194673);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,2.999006);
   hext_stack_2->SetBinContent(3,4.352847);
   hext_stack_2->SetBinContent(4,9.309826);
   hext_stack_2->SetBinContent(5,19.93318);
   hext_stack_2->SetBinContent(6,6.799621);
   hext_stack_2->SetBinContent(7,20.45228);
   hext_stack_2->SetBinContent(8,8.823797);
   hext_stack_2->SetBinContent(9,10.10425);
   hext_stack_2->SetBinContent(10,11.82557);
   hext_stack_2->SetBinContent(11,17.50518);
   hext_stack_2->SetBinContent(12,12.04346);
   hext_stack_2->SetBinContent(13,10.5671);
   hext_stack_2->SetBinContent(14,7.537797);
   hext_stack_2->SetBinContent(15,7.216171);
   hext_stack_2->SetBinContent(16,14.8637);
   hext_stack_2->SetBinContent(17,8.291914);
   hext_stack_2->SetBinContent(18,2.27519);
   hext_stack_2->SetBinContent(19,3.654981);
   hext_stack_2->SetBinContent(20,3.166181);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,3.215251);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,1.159101);
   hext_stack_2->SetBinError(3,1.514272);
   hext_stack_2->SetBinError(4,2.049844);
   hext_stack_2->SetBinError(5,3.197516);
   hext_stack_2->SetBinError(6,1.756063);
   hext_stack_2->SetBinError(7,3.383279);
   hext_stack_2->SetBinError(8,1.907911);
   hext_stack_2->SetBinError(9,2.190841);
   hext_stack_2->SetBinError(10,2.155763);
   hext_stack_2->SetBinError(11,3.027556);
   hext_stack_2->SetBinError(12,2.373265);
   hext_stack_2->SetBinError(13,2.34386);
   hext_stack_2->SetBinError(14,1.7757);
   hext_stack_2->SetBinError(15,1.646679);
   hext_stack_2->SetBinError(16,2.694092);
   hext_stack_2->SetBinError(17,2.149865);
   hext_stack_2->SetBinError(18,0.9336798);
   hext_stack_2->SetBinError(19,1.163091);
   hext_stack_2->SetBinError(20,1.061777);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,1.36277);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.5016454);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,1.284752);
   hdirt_stack_3->SetBinContent(6,1.241254);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(8,0.5135057);
   hdirt_stack_3->SetBinContent(9,0.3775263);
   hdirt_stack_3->SetBinContent(10,0.5033671);
   hdirt_stack_3->SetBinContent(11,1.114166);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.149204);
   hdirt_stack_3->SetBinContent(15,0.9525174);
   hdirt_stack_3->SetBinContent(16,0.6769404);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.3867341);
   hdirt_stack_3->SetBinContent(21,0.470507);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2964976);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.6087306);
   hdirt_stack_3->SetBinError(6,0.5150413);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(8,0.3809293);
   hdirt_stack_3->SetBinError(9,0.2703313);
   hdirt_stack_3->SetBinError(10,0.3763708);
   hdirt_stack_3->SetBinError(11,0.569712);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.9557142);
   hdirt_stack_3->SetBinError(15,0.5165933);
   hdirt_stack_3->SetBinError(16,0.4458319);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.1380715);
   hdirt_stack_3->SetBinError(20,0.2742997);
   hdirt_stack_3->SetBinError(21,0.333502);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(2,2.642437);
   houtFV_stack_4->SetBinContent(3,3.861376);
   houtFV_stack_4->SetBinContent(4,6.380191);
   houtFV_stack_4->SetBinContent(5,9.160554);
   houtFV_stack_4->SetBinContent(6,6.40533);
   houtFV_stack_4->SetBinContent(7,8.099922);
   houtFV_stack_4->SetBinContent(8,7.680509);
   houtFV_stack_4->SetBinContent(9,4.496072);
   houtFV_stack_4->SetBinContent(10,5.881047);
   houtFV_stack_4->SetBinContent(11,5.033216);
   houtFV_stack_4->SetBinContent(12,4.156145);
   houtFV_stack_4->SetBinContent(13,2.53255);
   houtFV_stack_4->SetBinContent(14,3.543247);
   houtFV_stack_4->SetBinContent(15,4.671204);
   houtFV_stack_4->SetBinContent(16,2.545395);
   houtFV_stack_4->SetBinContent(17,2.640747);
   houtFV_stack_4->SetBinContent(18,1.754432);
   houtFV_stack_4->SetBinContent(19,3.461183);
   houtFV_stack_4->SetBinContent(20,2.394159);
   houtFV_stack_4->SetBinContent(21,1.621435);
   houtFV_stack_4->SetBinContent(22,3.75487);
   houtFV_stack_4->SetBinContent(23,1.920223);
   houtFV_stack_4->SetBinContent(24,0.4353772);
   houtFV_stack_4->SetBinError(2,0.7851269);
   houtFV_stack_4->SetBinError(3,1.001472);
   houtFV_stack_4->SetBinError(4,1.24534);
   houtFV_stack_4->SetBinError(5,1.524445);
   houtFV_stack_4->SetBinError(6,1.256281);
   houtFV_stack_4->SetBinError(7,1.365019);
   houtFV_stack_4->SetBinError(8,1.36807);
   houtFV_stack_4->SetBinError(9,0.9694195);
   houtFV_stack_4->SetBinError(10,1.297728);
   houtFV_stack_4->SetBinError(11,1.109872);
   houtFV_stack_4->SetBinError(12,0.9806517);
   houtFV_stack_4->SetBinError(13,0.8317173);
   houtFV_stack_4->SetBinError(14,0.9848711);
   houtFV_stack_4->SetBinError(15,1.059847);
   houtFV_stack_4->SetBinError(16,0.7483189);
   houtFV_stack_4->SetBinError(17,0.784705);
   houtFV_stack_4->SetBinError(18,0.7350355);
   houtFV_stack_4->SetBinError(19,0.9606784);
   houtFV_stack_4->SetBinError(20,0.785313);
   houtFV_stack_4->SetBinError(21,0.6405746);
   houtFV_stack_4->SetBinError(22,1.039038);
   houtFV_stack_4->SetBinError(23,0.7005844);
   houtFV_stack_4->SetBinError(24,0.3092837);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6818899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9329897);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5432221);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2297887);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2445578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2611072);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.199372);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.449808);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.687626);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.04983);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6418679);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.088772);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5151539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6413721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3353836);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.364665);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4453858);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5047172);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2250829);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4017382);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1861173);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3113101);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,16.31826);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.23007);
   hNCpi0inFVres_stack_7->SetBinContent(3,65.5317);
   hNCpi0inFVres_stack_7->SetBinContent(4,90.34854);
   hNCpi0inFVres_stack_7->SetBinContent(5,94.25209);
   hNCpi0inFVres_stack_7->SetBinContent(6,97.339);
   hNCpi0inFVres_stack_7->SetBinContent(7,101.575);
   hNCpi0inFVres_stack_7->SetBinContent(8,96.93795);
   hNCpi0inFVres_stack_7->SetBinContent(9,83.48343);
   hNCpi0inFVres_stack_7->SetBinContent(10,77.88814);
   hNCpi0inFVres_stack_7->SetBinContent(11,73.95872);
   hNCpi0inFVres_stack_7->SetBinContent(12,66.41772);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.24035);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.76997);
   hNCpi0inFVres_stack_7->SetBinContent(15,49.75967);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.65146);
   hNCpi0inFVres_stack_7->SetBinContent(17,41.82677);
   hNCpi0inFVres_stack_7->SetBinContent(18,37.31025);
   hNCpi0inFVres_stack_7->SetBinContent(19,33.7374);
   hNCpi0inFVres_stack_7->SetBinContent(20,31.41787);
   hNCpi0inFVres_stack_7->SetBinContent(21,23.5952);
   hNCpi0inFVres_stack_7->SetBinContent(22,16.77577);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.5964);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.359474);
   hNCpi0inFVres_stack_7->SetBinError(1,1.402896);
   hNCpi0inFVres_stack_7->SetBinError(2,2.174684);
   hNCpi0inFVres_stack_7->SetBinError(3,2.602735);
   hNCpi0inFVres_stack_7->SetBinError(4,3.138912);
   hNCpi0inFVres_stack_7->SetBinError(5,3.227246);
   hNCpi0inFVres_stack_7->SetBinError(6,3.227206);
   hNCpi0inFVres_stack_7->SetBinError(7,3.365724);
   hNCpi0inFVres_stack_7->SetBinError(8,3.231274);
   hNCpi0inFVres_stack_7->SetBinError(9,2.947649);
   hNCpi0inFVres_stack_7->SetBinError(10,2.863255);
   hNCpi0inFVres_stack_7->SetBinError(11,2.847068);
   hNCpi0inFVres_stack_7->SetBinError(12,2.695914);
   hNCpi0inFVres_stack_7->SetBinError(13,2.502109);
   hNCpi0inFVres_stack_7->SetBinError(14,2.31975);
   hNCpi0inFVres_stack_7->SetBinError(15,2.27484);
   hNCpi0inFVres_stack_7->SetBinError(16,2.161668);
   hNCpi0inFVres_stack_7->SetBinError(17,2.172506);
   hNCpi0inFVres_stack_7->SetBinError(18,1.967363);
   hNCpi0inFVres_stack_7->SetBinError(19,1.951905);
   hNCpi0inFVres_stack_7->SetBinError(20,1.88944);
   hNCpi0inFVres_stack_7->SetBinError(21,1.622898);
   hNCpi0inFVres_stack_7->SetBinError(22,1.336181);
   hNCpi0inFVres_stack_7->SetBinError(23,1.097902);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6303338);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.562918);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.32737);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.74945);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.53282);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.31867);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.21056);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.64102);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.69388);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.9273);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.01256);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.24675);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.52035);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.808623);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.540993);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.838603);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.096337);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.048171);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.533513);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.246304);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.322356);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.079072);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.610902);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.440262);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.488086);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7853891);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.156908);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.354192);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.5241);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.50433);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.376499);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.421111);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.197302);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.212805);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.023473);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.239208);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.209699);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9350048);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8326555);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9076519);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8734152);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7393559);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6824631);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8218348);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6460878);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8387496);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5703646);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4825746);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2304939);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4467362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2792353);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.921638);
   hCCpi0inFV_stack_10->SetBinContent(2,19.28036);
   hCCpi0inFV_stack_10->SetBinContent(3,27.39857);
   hCCpi0inFV_stack_10->SetBinContent(4,23.90356);
   hCCpi0inFV_stack_10->SetBinContent(5,18.46509);
   hCCpi0inFV_stack_10->SetBinContent(6,33.0509);
   hCCpi0inFV_stack_10->SetBinContent(7,27.6472);
   hCCpi0inFV_stack_10->SetBinContent(8,24.29486);
   hCCpi0inFV_stack_10->SetBinContent(9,22.76751);
   hCCpi0inFV_stack_10->SetBinContent(10,20.60714);
   hCCpi0inFV_stack_10->SetBinContent(11,22.74614);
   hCCpi0inFV_stack_10->SetBinContent(12,21.08667);
   hCCpi0inFV_stack_10->SetBinContent(13,14.64434);
   hCCpi0inFV_stack_10->SetBinContent(14,11.33693);
   hCCpi0inFV_stack_10->SetBinContent(15,14.35489);
   hCCpi0inFV_stack_10->SetBinContent(16,14.5543);
   hCCpi0inFV_stack_10->SetBinContent(17,9.642807);
   hCCpi0inFV_stack_10->SetBinContent(18,12.15049);
   hCCpi0inFV_stack_10->SetBinContent(19,9.671558);
   hCCpi0inFV_stack_10->SetBinContent(20,11.77855);
   hCCpi0inFV_stack_10->SetBinContent(21,6.018483);
   hCCpi0inFV_stack_10->SetBinContent(22,6.922887);
   hCCpi0inFV_stack_10->SetBinContent(23,4.238953);
   hCCpi0inFV_stack_10->SetBinContent(24,2.300681);
   hCCpi0inFV_stack_10->SetBinError(1,1.169383);
   hCCpi0inFV_stack_10->SetBinError(2,2.233666);
   hCCpi0inFV_stack_10->SetBinError(3,2.672422);
   hCCpi0inFV_stack_10->SetBinError(4,2.427272);
   hCCpi0inFV_stack_10->SetBinError(5,2.055543);
   hCCpi0inFV_stack_10->SetBinError(6,2.955302);
   hCCpi0inFV_stack_10->SetBinError(7,2.624847);
   hCCpi0inFV_stack_10->SetBinError(8,2.531975);
   hCCpi0inFV_stack_10->SetBinError(9,2.472029);
   hCCpi0inFV_stack_10->SetBinError(10,2.275386);
   hCCpi0inFV_stack_10->SetBinError(11,2.406507);
   hCCpi0inFV_stack_10->SetBinError(12,2.247413);
   hCCpi0inFV_stack_10->SetBinError(13,1.891121);
   hCCpi0inFV_stack_10->SetBinError(14,1.676653);
   hCCpi0inFV_stack_10->SetBinError(15,1.886457);
   hCCpi0inFV_stack_10->SetBinError(16,1.880883);
   hCCpi0inFV_stack_10->SetBinError(17,1.495062);
   hCCpi0inFV_stack_10->SetBinError(18,1.725568);
   hCCpi0inFV_stack_10->SetBinError(19,1.595697);
   hCCpi0inFV_stack_10->SetBinError(20,1.687674);
   hCCpi0inFV_stack_10->SetBinError(21,1.194137);
   hCCpi0inFV_stack_10->SetBinError(22,1.306916);
   hCCpi0inFV_stack_10->SetBinError(23,1.108009);
   hCCpi0inFV_stack_10->SetBinError(24,0.7495707);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.376046);
   hNCinFV_stack_11->SetBinContent(2,13.19589);
   hNCinFV_stack_11->SetBinContent(3,20.11379);
   hNCinFV_stack_11->SetBinContent(4,21.97721);
   hNCinFV_stack_11->SetBinContent(5,20.37499);
   hNCinFV_stack_11->SetBinContent(6,17.04097);
   hNCinFV_stack_11->SetBinContent(7,16.07538);
   hNCinFV_stack_11->SetBinContent(8,14.47593);
   hNCinFV_stack_11->SetBinContent(9,12.95208);
   hNCinFV_stack_11->SetBinContent(10,8.494399);
   hNCinFV_stack_11->SetBinContent(11,10.75862);
   hNCinFV_stack_11->SetBinContent(12,7.462641);
   hNCinFV_stack_11->SetBinContent(13,9.955462);
   hNCinFV_stack_11->SetBinContent(14,5.380156);
   hNCinFV_stack_11->SetBinContent(15,7.923931);
   hNCinFV_stack_11->SetBinContent(16,8.59137);
   hNCinFV_stack_11->SetBinContent(17,6.066665);
   hNCinFV_stack_11->SetBinContent(18,7.037326);
   hNCinFV_stack_11->SetBinContent(19,7.088888);
   hNCinFV_stack_11->SetBinContent(20,3.766095);
   hNCinFV_stack_11->SetBinContent(21,6.071736);
   hNCinFV_stack_11->SetBinContent(22,6.295264);
   hNCinFV_stack_11->SetBinContent(23,3.854614);
   hNCinFV_stack_11->SetBinContent(24,2.342597);
   hNCinFV_stack_11->SetBinError(1,0.8997438);
   hNCinFV_stack_11->SetBinError(2,1.809455);
   hNCinFV_stack_11->SetBinError(3,2.305769);
   hNCinFV_stack_11->SetBinError(4,2.362815);
   hNCinFV_stack_11->SetBinError(5,2.263394);
   hNCinFV_stack_11->SetBinError(6,2.114019);
   hNCinFV_stack_11->SetBinError(7,2.020953);
   hNCinFV_stack_11->SetBinError(8,1.851217);
   hNCinFV_stack_11->SetBinError(9,1.75436);
   hNCinFV_stack_11->SetBinError(10,1.467896);
   hNCinFV_stack_11->SetBinError(11,1.643079);
   hNCinFV_stack_11->SetBinError(12,1.414761);
   hNCinFV_stack_11->SetBinError(13,1.654366);
   hNCinFV_stack_11->SetBinError(14,1.161975);
   hNCinFV_stack_11->SetBinError(15,1.359393);
   hNCinFV_stack_11->SetBinError(16,1.507554);
   hNCinFV_stack_11->SetBinError(17,1.177136);
   hNCinFV_stack_11->SetBinError(18,1.331339);
   hNCinFV_stack_11->SetBinError(19,1.316615);
   hNCinFV_stack_11->SetBinError(20,0.9410676);
   hNCinFV_stack_11->SetBinError(21,1.17798);
   hNCinFV_stack_11->SetBinError(22,1.255403);
   hNCinFV_stack_11->SetBinError(23,1.000148);
   hNCinFV_stack_11->SetBinError(24,0.8097566);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.738108);
   hnumuCCinFV_stack_12->SetBinContent(2,8.930621);
   hnumuCCinFV_stack_12->SetBinContent(3,11.51539);
   hnumuCCinFV_stack_12->SetBinContent(4,11.2931);
   hnumuCCinFV_stack_12->SetBinContent(5,12.18165);
   hnumuCCinFV_stack_12->SetBinContent(6,11.21225);
   hnumuCCinFV_stack_12->SetBinContent(7,13.96673);
   hnumuCCinFV_stack_12->SetBinContent(8,20.12117);
   hnumuCCinFV_stack_12->SetBinContent(9,18.25597);
   hnumuCCinFV_stack_12->SetBinContent(10,18.32808);
   hnumuCCinFV_stack_12->SetBinContent(11,20.90465);
   hnumuCCinFV_stack_12->SetBinContent(12,24.23516);
   hnumuCCinFV_stack_12->SetBinContent(13,15.72619);
   hnumuCCinFV_stack_12->SetBinContent(14,18.45615);
   hnumuCCinFV_stack_12->SetBinContent(15,6.493695);
   hnumuCCinFV_stack_12->SetBinContent(16,10.63126);
   hnumuCCinFV_stack_12->SetBinContent(17,7.599675);
   hnumuCCinFV_stack_12->SetBinContent(18,7.047079);
   hnumuCCinFV_stack_12->SetBinContent(19,7.588963);
   hnumuCCinFV_stack_12->SetBinContent(20,6.804998);
   hnumuCCinFV_stack_12->SetBinContent(21,5.789685);
   hnumuCCinFV_stack_12->SetBinContent(22,5.969843);
   hnumuCCinFV_stack_12->SetBinContent(23,2.68455);
   hnumuCCinFV_stack_12->SetBinContent(24,1.911625);
   hnumuCCinFV_stack_12->SetBinError(1,0.892333);
   hnumuCCinFV_stack_12->SetBinError(2,1.474692);
   hnumuCCinFV_stack_12->SetBinError(3,1.685603);
   hnumuCCinFV_stack_12->SetBinError(4,1.664024);
   hnumuCCinFV_stack_12->SetBinError(5,2.101414);
   hnumuCCinFV_stack_12->SetBinError(6,1.936994);
   hnumuCCinFV_stack_12->SetBinError(7,2.324838);
   hnumuCCinFV_stack_12->SetBinError(8,3.47615);
   hnumuCCinFV_stack_12->SetBinError(9,2.603798);
   hnumuCCinFV_stack_12->SetBinError(10,2.34046);
   hnumuCCinFV_stack_12->SetBinError(11,2.620849);
   hnumuCCinFV_stack_12->SetBinError(12,3.211319);
   hnumuCCinFV_stack_12->SetBinError(13,2.202283);
   hnumuCCinFV_stack_12->SetBinError(14,2.507545);
   hnumuCCinFV_stack_12->SetBinError(15,1.295516);
   hnumuCCinFV_stack_12->SetBinError(16,1.712634);
   hnumuCCinFV_stack_12->SetBinError(17,1.768304);
   hnumuCCinFV_stack_12->SetBinError(18,1.735922);
   hnumuCCinFV_stack_12->SetBinError(19,1.529268);
   hnumuCCinFV_stack_12->SetBinError(20,1.366644);
   hnumuCCinFV_stack_12->SetBinError(21,1.293025);
   hnumuCCinFV_stack_12->SetBinError(22,1.299224);
   hnumuCCinFV_stack_12->SetBinError(23,0.8054587);
   hnumuCCinFV_stack_12->SetBinError(24,0.6973363);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.976572);
   hnueCCinFV_stack_13->SetBinContent(2,2.705951);
   hnueCCinFV_stack_13->SetBinContent(3,1.318696);
   hnueCCinFV_stack_13->SetBinContent(4,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,1.129085);
   hnueCCinFV_stack_13->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(10,0.9315196);
   hnueCCinFV_stack_13->SetBinContent(11,0.8594293);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(15,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(16,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(18,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.6689512);
   hnueCCinFV_stack_13->SetBinError(2,0.8947704);
   hnueCCinFV_stack_13->SetBinError(3,0.6188854);
   hnueCCinFV_stack_13->SetBinError(4,0.4814682);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.5777911);
   hnueCCinFV_stack_13->SetBinError(8,0.2538659);
   hnueCCinFV_stack_13->SetBinError(10,0.5427017);
   hnueCCinFV_stack_13->SetBinError(11,0.5216512);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.5946997);
   hnueCCinFV_stack_13->SetBinError(15,0.2556436);
   hnueCCinFV_stack_13->SetBinError(16,0.4213728);
   hnueCCinFV_stack_13->SetBinError(17,0.2346262);
   hnueCCinFV_stack_13->SetBinError(18,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.2451916);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__20->SetBinContent(1,36.61565);
   hmcerror__20->SetBinContent(2,107.9468);
   hmcerror__20->SetBinContent(3,156.763);
   hmcerror__20->SetBinContent(4,192.4);
   hmcerror__20->SetBinContent(5,201.713);
   hmcerror__20->SetBinContent(6,196.2161);
   hmcerror__20->SetBinContent(7,213.3684);
   hmcerror__20->SetBinContent(8,192.2282);
   hmcerror__20->SetBinContent(9,169.4198);
   hmcerror__20->SetBinContent(10,160.1167);
   hmcerror__20->SetBinContent(11,172.7008);
   hmcerror__20->SetBinContent(12,155.7634);
   hmcerror__20->SetBinContent(13,123.6459);
   hmcerror__20->SetBinContent(14,110.6878);
   hmcerror__20->SetBinContent(15,102.7374);
   hmcerror__20->SetBinContent(16,109.5495);
   hmcerror__20->SetBinContent(17,85.26673);
   hmcerror__20->SetBinContent(18,74.81367);
   hmcerror__20->SetBinContent(19,73.09389);
   hmcerror__20->SetBinContent(20,67.15426);
   hmcerror__20->SetBinContent(21,52.99226);
   hmcerror__20->SetBinContent(22,48.28518);
   hmcerror__20->SetBinContent(23,27.97992);
   hmcerror__20->SetBinContent(24,11.19014);
   hmcerror__20->SetBinError(1,15.8897);
   hmcerror__20->SetBinError(2,37.27828);
   hmcerror__20->SetBinError(3,54.83224);
   hmcerror__20->SetBinError(4,72.84738);
   hmcerror__20->SetBinError(5,71.93525);
   hmcerror__20->SetBinError(6,76.2937);
   hmcerror__20->SetBinError(7,86.19159);
   hmcerror__20->SetBinError(8,81.25681);
   hmcerror__20->SetBinError(9,69.17734);
   hmcerror__20->SetBinError(10,61.45619);
   hmcerror__20->SetBinError(11,62.86408);
   hmcerror__20->SetBinError(12,57.87424);
   hmcerror__20->SetBinError(13,48.7341);
   hmcerror__20->SetBinError(14,41.81098);
   hmcerror__20->SetBinError(15,36.70069);
   hmcerror__20->SetBinError(16,38.16584);
   hmcerror__20->SetBinError(17,32.02891);
   hmcerror__20->SetBinError(18,29.43206);
   hmcerror__20->SetBinError(19,27.69751);
   hmcerror__20->SetBinError(20,26.25618);
   hmcerror__20->SetBinError(21,23.7684);
   hmcerror__20->SetBinError(22,31.14479);
   hmcerror__20->SetBinError(23,12.65369);
   hmcerror__20->SetBinError(24,10.27898);
   hmcerror__20->SetBinError(25,0.3895343);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3025[24] = {
   27,
   70,
   101,
   135,
   147,
   132,
   154,
   131,
   137,
   118,
   131,
   97,
   93,
   77,
   82,
   69,
   74,
   65,
   47,
   49,
   43,
   29,
   21,
   7};
   Double_t _felx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3025[24] = {
   5.3414,
   8.4925,
   10.04988,
   11.61895,
   12.12436,
   11.48913,
   12.40967,
   11.44552,
   11.7047,
   10.86278,
   11.44552,
   9.9704,
   9.7658,
   8.8995,
   9.1791,
   8.4327,
   8.7275,
   8.1893,
   6.9882,
   7.1318,
   6.6917,
   5.5285,
   4.7354,
   2.85954};
   Double_t _fehx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3025[24] = {
   5.1322,
   8.2902,
   10.04988,
   11.61895,
   12.12436,
   11.48913,
   12.40967,
   11.44552,
   11.7047,
   10.86278,
   11.44552,
   9.769,
   9.564,
   8.6976,
   8.9774,
   8.2304,
   8.5253,
   7.9866,
   6.7839,
   6.9277,
   6.4868,
   5.3201,
   4.5229,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(3.726414);
   Graph_Graph3025->SetMaximum(182.6366);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3026[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3026[24] = {
   0.4339592,
   0.3453394,
   0.3497779,
   0.3786246,
   0.3566217,
   0.3888249,
   0.4039566,
   0.4227101,
   0.4083192,
   0.3838214,
   0.3640057,
   0.3715523,
   0.3941426,
   0.3777379,
   0.3572283,
   0.3483891,
   0.375632,
   0.3934048,
   0.3789306,
   0.3909831,
   0.4485259,
   0.6450177,
   0.4522418,
   0.9185745};
   Double_t _fehx3026[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3026[24] = {
   0.4339592,
   0.3453394,
   0.3497779,
   0.3786246,
   0.3566217,
   0.3888249,
   0.4039566,
   0.4227101,
   0.4083192,
   0.3838214,
   0.3640057,
   0.3715523,
   0.3941426,
   0.3777379,
   0.3572283,
   0.3483891,
   0.375632,
   0.3934048,
   0.3789306,
   0.3909831,
   0.4485259,
   0.6450177,
   0.4522418,
   0.9185745};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,3.465);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3027[24] = {
   0.3412144,
   0.3008024,
   0.3109591,
   0.3312565,
   0.3401175,
   0.3638199,
   0.3634031,
   0.3945351,
   0.387502,
   0.3639057,
   0.3285766,
   0.345659,
   0.3234662,
   0.332044,
   0.3236952,
   0.3014466,
   0.3321456,
   0.3507465,
   0.3260517,
   0.3126241,
   0.3394868,
   0.2959887,
   0.3064073,
   0.314946};
   Double_t _fehx3027[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3027[24] = {
   0.3412144,
   0.3008024,
   0.3109591,
   0.3312565,
   0.3401175,
   0.3638199,
   0.3634031,
   0.3945351,
   0.387502,
   0.3639057,
   0.3285766,
   0.345659,
   0.3234662,
   0.332044,
   0.3236952,
   0.3014466,
   0.3321456,
   0.3507465,
   0.3260517,
   0.3126241,
   0.3394868,
   0.2959887,
   0.3064073,
   0.314946};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,3.465);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3028[24] = {
   0.7373897,
   0.6484676,
   0.6442846,
   0.7016632,
   0.728758,
   0.6727278,
   0.7217562,
   0.6814816,
   0.8086424,
   0.7369627,
   0.7585373,
   0.6227394,
   0.7521481,
   0.6956502,
   0.7981517,
   0.6298524,
   0.8678649,
   0.8688251,
   0.6430086,
   0.7296633,
   0.8114392,
   0.6005984,
   0.7505382,
   0.6255508};
   Double_t _felx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3028[24] = {
   0.1458775,
   0.07867302,
   0.06410871,
   0.06038956,
   0.06010695,
   0.05855344,
   0.05816077,
   0.05954132,
   0.06908698,
   0.06784291,
   0.06627371,
   0.0640099,
   0.07898202,
   0.0804018,
   0.0893453,
   0.07697618,
   0.1023553,
   0.1094626,
   0.09560581,
   0.1062003,
   0.1262769,
   0.1144968,
   0.1692428,
   0.2555411};
   Double_t _fehx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3028[24] = {
   0.1401641,
   0.07679895,
   0.06410871,
   0.06038956,
   0.06010695,
   0.05855344,
   0.05816077,
   0.05954132,
   0.06908698,
   0.06784291,
   0.06627371,
   0.06271692,
   0.07734994,
   0.07857775,
   0.08738204,
   0.07512953,
   0.0999839,
   0.1067532,
   0.09281077,
   0.103161,
   0.1224103,
   0.1101808,
   0.161648,
   0.2332885};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.3094529);
   Graph_Graph3028->SetMaximum(1.036135);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
