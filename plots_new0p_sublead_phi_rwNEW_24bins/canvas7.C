#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 17:36:59 2023) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-1.938027,3.957692,214.305);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__19->SetBinContent(1,91.54952);
   hmc__19->SetBinContent(2,89.9698);
   hmc__19->SetBinContent(3,86.23141);
   hmc__19->SetBinContent(4,85.29053);
   hmc__19->SetBinContent(5,76.47102);
   hmc__19->SetBinContent(6,75.50406);
   hmc__19->SetBinContent(7,77.56399);
   hmc__19->SetBinContent(8,77.25116);
   hmc__19->SetBinContent(9,76.08582);
   hmc__19->SetBinContent(10,81.32838);
   hmc__19->SetBinContent(11,87.02054);
   hmc__19->SetBinContent(12,91.04274);
   hmc__19->SetBinContent(13,96.38512);
   hmc__19->SetBinContent(14,83.00821);
   hmc__19->SetBinContent(15,81.9517);
   hmc__19->SetBinContent(16,84.81651);
   hmc__19->SetBinContent(17,85.11678);
   hmc__19->SetBinContent(18,79.98718);
   hmc__19->SetBinContent(19,86.44505);
   hmc__19->SetBinContent(20,82.54248);
   hmc__19->SetBinContent(21,83.96682);
   hmc__19->SetBinContent(22,77.5418);
   hmc__19->SetBinContent(23,82.53478);
   hmc__19->SetBinContent(24,96.90134);
   hmc__19->SetBinError(1,35.76302);
   hmc__19->SetBinError(2,36.75898);
   hmc__19->SetBinError(3,35.91226);
   hmc__19->SetBinError(4,31.55288);
   hmc__19->SetBinError(5,32.42713);
   hmc__19->SetBinError(6,31.78184);
   hmc__19->SetBinError(7,31.10848);
   hmc__19->SetBinError(8,29.7769);
   hmc__19->SetBinError(9,32.53275);
   hmc__19->SetBinError(10,35.42371);
   hmc__19->SetBinError(11,33.62391);
   hmc__19->SetBinError(12,38.01621);
   hmc__19->SetBinError(13,37.71538);
   hmc__19->SetBinError(14,32.30805);
   hmc__19->SetBinError(15,33.37236);
   hmc__19->SetBinError(16,33.65496);
   hmc__19->SetBinError(17,44.28081);
   hmc__19->SetBinError(18,33.06974);
   hmc__19->SetBinError(19,33.43731);
   hmc__19->SetBinError(20,32.9019);
   hmc__19->SetBinError(21,36.46037);
   hmc__19->SetBinError(22,31.33127);
   hmc__19->SetBinError(23,33.94693);
   hmc__19->SetBinError(24,50.51621);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-1.938027);
   hmc__19->SetMaximum(203.4928);
   hmc__19->SetEntries(1993.425);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,-3.15,3.15);
   hs7_stack_7->SetMinimum(-1.450578e-08);
   hs7_stack_7->SetMaximum(101.7464);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.934841);
   hbadmatch_stack_1->SetBinContent(2,1.125349);
   hbadmatch_stack_1->SetBinContent(3,1.633563);
   hbadmatch_stack_1->SetBinContent(4,1.924658);
   hbadmatch_stack_1->SetBinContent(5,1.364994);
   hbadmatch_stack_1->SetBinContent(6,1.268811);
   hbadmatch_stack_1->SetBinContent(7,1.323754);
   hbadmatch_stack_1->SetBinContent(8,3.01455);
   hbadmatch_stack_1->SetBinContent(9,1.307918);
   hbadmatch_stack_1->SetBinContent(10,1.196914);
   hbadmatch_stack_1->SetBinContent(11,1.974803);
   hbadmatch_stack_1->SetBinContent(12,1.99978);
   hbadmatch_stack_1->SetBinContent(13,3.066905);
   hbadmatch_stack_1->SetBinContent(14,2.036463);
   hbadmatch_stack_1->SetBinContent(15,1.941261);
   hbadmatch_stack_1->SetBinContent(16,1.123658);
   hbadmatch_stack_1->SetBinContent(17,2.184957);
   hbadmatch_stack_1->SetBinContent(18,0.9398301);
   hbadmatch_stack_1->SetBinContent(19,1.150733);
   hbadmatch_stack_1->SetBinContent(20,1.663932);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinContent(22,1.072095);
   hbadmatch_stack_1->SetBinContent(23,1.083108);
   hbadmatch_stack_1->SetBinContent(24,3.768538);
   hbadmatch_stack_1->SetBinError(1,0.7618236);
   hbadmatch_stack_1->SetBinError(2,0.5194673);
   hbadmatch_stack_1->SetBinError(3,0.6308192);
   hbadmatch_stack_1->SetBinError(4,0.7006958);
   hbadmatch_stack_1->SetBinError(5,0.5827471);
   hbadmatch_stack_1->SetBinError(6,0.5889569);
   hbadmatch_stack_1->SetBinError(7,0.5560625);
   hbadmatch_stack_1->SetBinError(8,0.9128994);
   hbadmatch_stack_1->SetBinError(9,0.6687192);
   hbadmatch_stack_1->SetBinError(10,0.5483578);
   hbadmatch_stack_1->SetBinError(11,0.6718153);
   hbadmatch_stack_1->SetBinError(12,0.7422944);
   hbadmatch_stack_1->SetBinError(13,1.300284);
   hbadmatch_stack_1->SetBinError(14,0.84263);
   hbadmatch_stack_1->SetBinError(15,0.726137);
   hbadmatch_stack_1->SetBinError(16,0.5188295);
   hbadmatch_stack_1->SetBinError(17,0.7961841);
   hbadmatch_stack_1->SetBinError(18,0.5628094);
   hbadmatch_stack_1->SetBinError(19,0.5295205);
   hbadmatch_stack_1->SetBinError(20,0.6518637);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetBinError(22,0.5551335);
   hbadmatch_stack_1->SetBinError(23,0.4928406);
   hbadmatch_stack_1->SetBinError(24,1.106199);
   hbadmatch_stack_1->SetEntries(164);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,3.159);
   hext_stack_2->SetBinContent(2,3.725593);
   hext_stack_2->SetBinContent(3,4.200033);
   hext_stack_2->SetBinContent(4,5.434191);
   hext_stack_2->SetBinContent(5,4.460999);
   hext_stack_2->SetBinContent(6,5.359169);
   hext_stack_2->SetBinContent(7,4.931029);
   hext_stack_2->SetBinContent(8,8.407247);
   hext_stack_2->SetBinContent(9,4.860416);
   hext_stack_2->SetBinContent(10,3.953428);
   hext_stack_2->SetBinContent(11,2.345802);
   hext_stack_2->SetBinContent(12,3.222432);
   hext_stack_2->SetBinContent(13,2.759582);
   hext_stack_2->SetBinContent(14,2.510206);
   hext_stack_2->SetBinContent(15,3.972198);
   hext_stack_2->SetBinContent(16,3.647801);
   hext_stack_2->SetBinContent(17,2.834603);
   hext_stack_2->SetBinContent(18,5.359169);
   hext_stack_2->SetBinContent(19,1.861411);
   hext_stack_2->SetBinContent(20,3.654981);
   hext_stack_2->SetBinContent(21,3.807795);
   hext_stack_2->SetBinContent(22,4.139373);
   hext_stack_2->SetBinContent(23,1.704188);
   hext_stack_2->SetBinContent(24,3.800614);
   hext_stack_2->SetBinError(1,1.152637);
   hext_stack_2->SetBinError(2,1.216121);
   hext_stack_2->SetBinError(3,1.45147);
   hext_stack_2->SetBinError(4,1.483351);
   hext_stack_2->SetBinError(5,1.372818);
   hext_stack_2->SetBinError(6,1.392494);
   hext_stack_2->SetBinError(7,1.541856);
   hext_stack_2->SetBinError(8,2.003079);
   hext_stack_2->SetBinError(9,1.500384);
   hext_stack_2->SetBinError(10,1.387983);
   hext_stack_2->SetBinError(11,0.9989624);
   hext_stack_2->SetBinError(12,1.286834);
   hext_stack_2->SetBinError(13,0.98084);
   hext_stack_2->SetBinError(14,1.057404);
   hext_stack_2->SetBinError(15,1.288106);
   hext_stack_2->SetBinError(16,1.246589);
   hext_stack_2->SetBinError(17,1.106046);
   hext_stack_2->SetBinError(18,1.392494);
   hext_stack_2->SetBinError(19,0.9526997);
   hext_stack_2->SetBinError(20,1.163091);
   hext_stack_2->SetBinError(21,1.24058);
   hext_stack_2->SetBinError(22,1.201279);
   hext_stack_2->SetBinError(23,0.7656743);
   hext_stack_2->SetBinError(24,1.319182);
   hext_stack_2->SetEntries(235);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4819721);
   hdirt_stack_3->SetBinContent(2,0.1652832);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,0.298264);
   hdirt_stack_3->SetBinContent(7,0.4809298);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.9467657);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.1753185);
   hdirt_stack_3->SetBinContent(17,0.5221469);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.6436294);
   hdirt_stack_3->SetBinContent(22,0.8836629);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinError(1,0.3402839);
   hdirt_stack_3->SetBinError(2,0.1652832);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.2114838);
   hdirt_stack_3->SetBinError(7,0.341434);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.494629);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.1753185);
   hdirt_stack_3->SetBinError(17,0.3070235);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4778222);
   hdirt_stack_3->SetBinError(22,0.5440046);
   hdirt_stack_3->SetBinError(23,0.4258516);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetEntries(33);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,1.960392);
   houtFV_stack_4->SetBinContent(2,2.249007);
   houtFV_stack_4->SetBinContent(3,3.216286);
   houtFV_stack_4->SetBinContent(4,3.322793);
   houtFV_stack_4->SetBinContent(5,0.3900497);
   houtFV_stack_4->SetBinContent(6,4.663786);
   houtFV_stack_4->SetBinContent(7,3.364739);
   houtFV_stack_4->SetBinContent(8,2.194063);
   houtFV_stack_4->SetBinContent(9,2.15955);
   houtFV_stack_4->SetBinContent(10,0.8332819);
   houtFV_stack_4->SetBinContent(11,1.578327);
   houtFV_stack_4->SetBinContent(12,2.435413);
   houtFV_stack_4->SetBinContent(13,1.717185);
   houtFV_stack_4->SetBinContent(14,1.125349);
   houtFV_stack_4->SetBinContent(15,1.845582);
   houtFV_stack_4->SetBinContent(16,2.585803);
   houtFV_stack_4->SetBinContent(17,2.695887);
   houtFV_stack_4->SetBinContent(18,3.214491);
   houtFV_stack_4->SetBinContent(19,3.501678);
   houtFV_stack_4->SetBinContent(20,2.843785);
   houtFV_stack_4->SetBinContent(21,1.370245);
   houtFV_stack_4->SetBinContent(22,1.123658);
   houtFV_stack_4->SetBinContent(23,3.254468);
   houtFV_stack_4->SetBinContent(24,2.394159);
   houtFV_stack_4->SetBinError(1,0.6199358);
   houtFV_stack_4->SetBinError(2,0.7341869);
   houtFV_stack_4->SetBinError(3,0.9615195);
   houtFV_stack_4->SetBinError(4,0.9207963);
   houtFV_stack_4->SetBinError(5,0.2758068);
   houtFV_stack_4->SetBinError(6,1.107196);
   houtFV_stack_4->SetBinError(7,0.9306602);
   houtFV_stack_4->SetBinError(8,0.7594044);
   houtFV_stack_4->SetBinError(9,0.6972593);
   houtFV_stack_4->SetBinError(10,0.4187702);
   houtFV_stack_4->SetBinError(11,0.6253536);
   houtFV_stack_4->SetBinError(12,0.7857381);
   houtFV_stack_4->SetBinError(13,0.6217711);
   houtFV_stack_4->SetBinError(14,0.5194673);
   houtFV_stack_4->SetBinError(15,0.7284472);
   houtFV_stack_4->SetBinError(16,0.8083481);
   houtFV_stack_4->SetBinError(17,0.858514);
   houtFV_stack_4->SetBinError(18,0.8866602);
   houtFV_stack_4->SetBinError(19,0.969516);
   houtFV_stack_4->SetBinError(20,0.848517);
   houtFV_stack_4->SetBinError(21,0.5179089);
   houtFV_stack_4->SetBinError(22,0.5188295);
   houtFV_stack_4->SetBinError(23,0.946584);
   houtFV_stack_4->SetBinError(24,0.785313);
   houtFV_stack_4->SetEntries(240);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8087721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6682718);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5151539);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.460186);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3187231);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.213699);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1861173);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2287991);
   hNCpi0inFVqe_stack_6->SetEntries(242);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,41.3257);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.6323);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.42658);
   hNCpi0inFVres_stack_7->SetBinContent(4,35.18819);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.43772);
   hNCpi0inFVres_stack_7->SetBinContent(6,38.16353);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.80007);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.06162);
   hNCpi0inFVres_stack_7->SetBinContent(9,37.56285);
   hNCpi0inFVres_stack_7->SetBinContent(10,39.41904);
   hNCpi0inFVres_stack_7->SetBinContent(11,41.81463);
   hNCpi0inFVres_stack_7->SetBinContent(12,43.57766);
   hNCpi0inFVres_stack_7->SetBinContent(13,43.38331);
   hNCpi0inFVres_stack_7->SetBinContent(14,40.01855);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.27981);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.73972);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.26999);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.46528);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.11967);
   hNCpi0inFVres_stack_7->SetBinContent(20,38.93082);
   hNCpi0inFVres_stack_7->SetBinContent(21,44.34109);
   hNCpi0inFVres_stack_7->SetBinContent(22,38.68964);
   hNCpi0inFVres_stack_7->SetBinContent(23,41.88971);
   hNCpi0inFVres_stack_7->SetBinContent(24,46.77191);
   hNCpi0inFVres_stack_7->SetBinError(1,2.068667);
   hNCpi0inFVres_stack_7->SetBinError(2,2.188095);
   hNCpi0inFVres_stack_7->SetBinError(3,1.991776);
   hNCpi0inFVres_stack_7->SetBinError(4,1.925067);
   hNCpi0inFVres_stack_7->SetBinError(5,2.001717);
   hNCpi0inFVres_stack_7->SetBinError(6,1.997889);
   hNCpi0inFVres_stack_7->SetBinError(7,1.91708);
   hNCpi0inFVres_stack_7->SetBinError(8,1.817089);
   hNCpi0inFVres_stack_7->SetBinError(9,2.006944);
   hNCpi0inFVres_stack_7->SetBinError(10,2.077414);
   hNCpi0inFVres_stack_7->SetBinError(11,2.120449);
   hNCpi0inFVres_stack_7->SetBinError(12,2.174042);
   hNCpi0inFVres_stack_7->SetBinError(13,2.196787);
   hNCpi0inFVres_stack_7->SetBinError(14,2.048072);
   hNCpi0inFVres_stack_7->SetBinError(15,2.159688);
   hNCpi0inFVres_stack_7->SetBinError(16,2.054161);
   hNCpi0inFVres_stack_7->SetBinError(17,2.065702);
   hNCpi0inFVres_stack_7->SetBinError(18,1.948744);
   hNCpi0inFVres_stack_7->SetBinError(19,1.866451);
   hNCpi0inFVres_stack_7->SetBinError(20,2.064857);
   hNCpi0inFVres_stack_7->SetBinError(21,2.221226);
   hNCpi0inFVres_stack_7->SetBinError(22,1.985643);
   hNCpi0inFVres_stack_7->SetBinError(23,2.146416);
   hNCpi0inFVres_stack_7->SetBinError(24,2.323886);
   hNCpi0inFVres_stack_7->SetEntries(17544);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.932265);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.133368);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.17907);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.527968);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.29339);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.8831);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.047171);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.057236);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.857775);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.822498);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.944635);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.625614);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.342228);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.447508);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.929522);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.829212);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.674757);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.211433);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.87705);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.984489);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.607835);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.831203);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.830708);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.648858);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9139193);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7448193);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.130707);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8796329);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8922629);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7530049);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7032937);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8770847);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8170053);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9504873);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8450673);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8391747);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.069288);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9269228);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8373946);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8247497);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7427257);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9358373);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8813273);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8267529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7750792);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7998337);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8282424);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8092671);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,14.16932);
   hCCpi0inFV_stack_10->SetBinContent(2,14.67144);
   hCCpi0inFV_stack_10->SetBinContent(3,10.10014);
   hCCpi0inFV_stack_10->SetBinContent(4,12.11257);
   hCCpi0inFV_stack_10->SetBinContent(5,10.34997);
   hCCpi0inFV_stack_10->SetBinContent(6,5.768752);
   hCCpi0inFV_stack_10->SetBinContent(7,10.4083);
   hCCpi0inFV_stack_10->SetBinContent(8,8.882917);
   hCCpi0inFV_stack_10->SetBinContent(9,7.85548);
   hCCpi0inFV_stack_10->SetBinContent(10,16.09937);
   hCCpi0inFV_stack_10->SetBinContent(11,14.90635);
   hCCpi0inFV_stack_10->SetBinContent(12,14.59932);
   hCCpi0inFV_stack_10->SetBinContent(13,13.63304);
   hCCpi0inFV_stack_10->SetBinContent(14,10.61362);
   hCCpi0inFV_stack_10->SetBinContent(15,9.531229);
   hCCpi0inFV_stack_10->SetBinContent(16,9.818922);
   hCCpi0inFV_stack_10->SetBinContent(17,12.69257);
   hCCpi0inFV_stack_10->SetBinContent(18,7.825877);
   hCCpi0inFV_stack_10->SetBinContent(19,14.10868);
   hCCpi0inFV_stack_10->SetBinContent(20,10.45479);
   hCCpi0inFV_stack_10->SetBinContent(21,11.24099);
   hCCpi0inFV_stack_10->SetBinContent(22,9.658394);
   hCCpi0inFV_stack_10->SetBinContent(23,12.21847);
   hCCpi0inFV_stack_10->SetBinContent(24,12.12174);
   hCCpi0inFV_stack_10->SetBinError(1,1.861085);
   hCCpi0inFV_stack_10->SetBinError(2,1.930227);
   hCCpi0inFV_stack_10->SetBinError(3,1.617401);
   hCCpi0inFV_stack_10->SetBinError(4,1.777623);
   hCCpi0inFV_stack_10->SetBinError(5,1.617515);
   hCCpi0inFV_stack_10->SetBinError(6,1.25947);
   hCCpi0inFV_stack_10->SetBinError(7,1.606243);
   hCCpi0inFV_stack_10->SetBinError(8,1.475641);
   hCCpi0inFV_stack_10->SetBinError(9,1.319842);
   hCCpi0inFV_stack_10->SetBinError(10,2.0615);
   hCCpi0inFV_stack_10->SetBinError(11,2.029053);
   hCCpi0inFV_stack_10->SetBinError(12,1.886082);
   hCCpi0inFV_stack_10->SetBinError(13,1.872925);
   hCCpi0inFV_stack_10->SetBinError(14,1.62249);
   hCCpi0inFV_stack_10->SetBinError(15,1.519828);
   hCCpi0inFV_stack_10->SetBinError(16,1.525528);
   hCCpi0inFV_stack_10->SetBinError(17,1.808884);
   hCCpi0inFV_stack_10->SetBinError(18,1.388493);
   hCCpi0inFV_stack_10->SetBinError(19,1.886689);
   hCCpi0inFV_stack_10->SetBinError(20,1.593436);
   hCCpi0inFV_stack_10->SetBinError(21,1.72422);
   hCCpi0inFV_stack_10->SetBinError(22,1.605897);
   hCCpi0inFV_stack_10->SetBinError(23,1.69843);
   hCCpi0inFV_stack_10->SetBinError(24,1.778662);
   hCCpi0inFV_stack_10->SetEntries(1165);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.269306);
   hNCinFV_stack_11->SetBinContent(2,7.578682);
   hNCinFV_stack_11->SetBinContent(3,10.2553);
   hNCinFV_stack_11->SetBinContent(4,7.142141);
   hNCinFV_stack_11->SetBinContent(5,6.305408);
   hNCinFV_stack_11->SetBinContent(6,6.698838);
   hNCinFV_stack_11->SetBinContent(7,8.148067);
   hNCinFV_stack_11->SetBinContent(8,5.821768);
   hNCinFV_stack_11->SetBinContent(9,6.450561);
   hNCinFV_stack_11->SetBinContent(10,6.640513);
   hNCinFV_stack_11->SetBinContent(11,7.909325);
   hNCinFV_stack_11->SetBinContent(12,8.541498);
   hNCinFV_stack_11->SetBinContent(13,7.320868);
   hNCinFV_stack_11->SetBinContent(14,8.607668);
   hNCinFV_stack_11->SetBinContent(15,7.670581);
   hNCinFV_stack_11->SetBinContent(16,8.306136);
   hNCinFV_stack_11->SetBinContent(17,6.115454);
   hNCinFV_stack_11->SetBinContent(18,6.096859);
   hNCinFV_stack_11->SetBinContent(19,8.981421);
   hNCinFV_stack_11->SetBinContent(20,5.860415);
   hNCinFV_stack_11->SetBinContent(21,7.666118);
   hNCinFV_stack_11->SetBinContent(22,7.957506);
   hNCinFV_stack_11->SetBinContent(23,6.791821);
   hNCinFV_stack_11->SetBinContent(24,6.307098);
   hNCinFV_stack_11->SetBinError(1,1.401491);
   hNCinFV_stack_11->SetBinError(2,1.315386);
   hNCinFV_stack_11->SetBinError(3,1.642451);
   hNCinFV_stack_11->SetBinError(4,1.301978);
   hNCinFV_stack_11->SetBinError(5,1.256985);
   hNCinFV_stack_11->SetBinError(6,1.287402);
   hNCinFV_stack_11->SetBinError(7,1.494984);
   hNCinFV_stack_11->SetBinError(8,1.177823);
   hNCinFV_stack_11->SetBinError(9,1.287516);
   hNCinFV_stack_11->SetBinError(10,1.30144);
   hNCinFV_stack_11->SetBinError(11,1.428501);
   hNCinFV_stack_11->SetBinError(12,1.520648);
   hNCinFV_stack_11->SetBinError(13,1.387511);
   hNCinFV_stack_11->SetBinError(14,1.442468);
   hNCinFV_stack_11->SetBinError(15,1.358769);
   hNCinFV_stack_11->SetBinError(16,1.455793);
   hNCinFV_stack_11->SetBinError(17,1.242563);
   hNCinFV_stack_11->SetBinError(18,1.239628);
   hNCinFV_stack_11->SetBinError(19,1.532576);
   hNCinFV_stack_11->SetBinError(20,1.241614);
   hNCinFV_stack_11->SetBinError(21,1.429298);
   hNCinFV_stack_11->SetBinError(22,1.41432);
   hNCinFV_stack_11->SetBinError(23,1.255171);
   hNCinFV_stack_11->SetBinError(24,1.257248);
   hNCinFV_stack_11->SetEntries(747);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,11.47383);
   hnumuCCinFV_stack_12->SetBinContent(2,9.184448);
   hnumuCCinFV_stack_12->SetBinContent(3,6.497636);
   hnumuCCinFV_stack_12->SetBinContent(4,11.29376);
   hnumuCCinFV_stack_12->SetBinContent(5,8.766361);
   hnumuCCinFV_stack_12->SetBinContent(6,6.836917);
   hnumuCCinFV_stack_12->SetBinContent(7,7.328638);
   hnumuCCinFV_stack_12->SetBinContent(8,7.157856);
   hnumuCCinFV_stack_12->SetBinContent(9,7.718604);
   hnumuCCinFV_stack_12->SetBinContent(10,5.251732);
   hnumuCCinFV_stack_12->SetBinContent(11,8.309671);
   hnumuCCinFV_stack_12->SetBinContent(12,7.880274);
   hnumuCCinFV_stack_12->SetBinContent(13,13.47462);
   hnumuCCinFV_stack_12->SetBinContent(14,10.04366);
   hnumuCCinFV_stack_12->SetBinContent(15,6.795373);
   hnumuCCinFV_stack_12->SetBinContent(16,11.80886);
   hnumuCCinFV_stack_12->SetBinContent(17,10.42939);
   hnumuCCinFV_stack_12->SetBinContent(18,10.77633);
   hnumuCCinFV_stack_12->SetBinContent(19,14.5722);
   hnumuCCinFV_stack_12->SetBinContent(20,11.3279);
   hnumuCCinFV_stack_12->SetBinContent(21,7.50257);
   hnumuCCinFV_stack_12->SetBinContent(22,5.945529);
   hnumuCCinFV_stack_12->SetBinContent(23,6.968139);
   hnumuCCinFV_stack_12->SetBinContent(24,14.01892);
   hnumuCCinFV_stack_12->SetBinError(1,1.830215);
   hnumuCCinFV_stack_12->SetBinError(2,1.711954);
   hnumuCCinFV_stack_12->SetBinError(3,1.282968);
   hnumuCCinFV_stack_12->SetBinError(4,2.034153);
   hnumuCCinFV_stack_12->SetBinError(5,1.866176);
   hnumuCCinFV_stack_12->SetBinError(6,1.431183);
   hnumuCCinFV_stack_12->SetBinError(7,1.384166);
   hnumuCCinFV_stack_12->SetBinError(8,1.379098);
   hnumuCCinFV_stack_12->SetBinError(9,1.872216);
   hnumuCCinFV_stack_12->SetBinError(10,1.247063);
   hnumuCCinFV_stack_12->SetBinError(11,1.608306);
   hnumuCCinFV_stack_12->SetBinError(12,1.54523);
   hnumuCCinFV_stack_12->SetBinError(13,2.386986);
   hnumuCCinFV_stack_12->SetBinError(14,1.746672);
   hnumuCCinFV_stack_12->SetBinError(15,1.353578);
   hnumuCCinFV_stack_12->SetBinError(16,1.85161);
   hnumuCCinFV_stack_12->SetBinError(17,1.88583);
   hnumuCCinFV_stack_12->SetBinError(18,1.698475);
   hnumuCCinFV_stack_12->SetBinError(19,2.708368);
   hnumuCCinFV_stack_12->SetBinError(20,2.940806);
   hnumuCCinFV_stack_12->SetBinError(21,1.432281);
   hnumuCCinFV_stack_12->SetBinError(22,1.185924);
   hnumuCCinFV_stack_12->SetBinError(23,1.330181);
   hnumuCCinFV_stack_12->SetBinError(24,2.279991);
   hnumuCCinFV_stack_12->SetEntries(869);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.327739);
   hnueCCinFV_stack_13->SetBinContent(2,0.4451163);
   hnueCCinFV_stack_13->SetBinContent(3,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(4,1.209333);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.2470257);
   hnueCCinFV_stack_13->SetBinContent(7,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(8,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(9,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(11,0.44716);
   hnueCCinFV_stack_13->SetBinContent(13,0.7382848);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(20,0.3198269);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.4592089);
   hnueCCinFV_stack_13->SetBinContent(23,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(24,0.3904175);
   hnueCCinFV_stack_13->SetBinError(1,0.6111685);
   hnueCCinFV_stack_13->SetBinError(2,0.3167429);
   hnueCCinFV_stack_13->SetBinError(3,0.4394482);
   hnueCCinFV_stack_13->SetBinError(4,0.6184442);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.2470257);
   hnueCCinFV_stack_13->SetBinError(7,0.4172458);
   hnueCCinFV_stack_13->SetBinError(8,0.5946997);
   hnueCCinFV_stack_13->SetBinError(9,0.5507173);
   hnueCCinFV_stack_13->SetBinError(11,0.3184642);
   hnueCCinFV_stack_13->SetBinError(13,0.4415857);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.2107505);
   hnueCCinFV_stack_13->SetBinError(20,0.3198269);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.3261381);
   hnueCCinFV_stack_13->SetBinError(23,0.4810838);
   hnueCCinFV_stack_13->SetBinError(24,0.275807);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__20->SetBinContent(1,91.54952);
   hmcerror__20->SetBinContent(2,89.9698);
   hmcerror__20->SetBinContent(3,86.23141);
   hmcerror__20->SetBinContent(4,85.29053);
   hmcerror__20->SetBinContent(5,76.47102);
   hmcerror__20->SetBinContent(6,75.50406);
   hmcerror__20->SetBinContent(7,77.56399);
   hmcerror__20->SetBinContent(8,77.25116);
   hmcerror__20->SetBinContent(9,76.08582);
   hmcerror__20->SetBinContent(10,81.32838);
   hmcerror__20->SetBinContent(11,87.02054);
   hmcerror__20->SetBinContent(12,91.04274);
   hmcerror__20->SetBinContent(13,96.38512);
   hmcerror__20->SetBinContent(14,83.00821);
   hmcerror__20->SetBinContent(15,81.9517);
   hmcerror__20->SetBinContent(16,84.81651);
   hmcerror__20->SetBinContent(17,85.11678);
   hmcerror__20->SetBinContent(18,79.98718);
   hmcerror__20->SetBinContent(19,86.44505);
   hmcerror__20->SetBinContent(20,82.54248);
   hmcerror__20->SetBinContent(21,83.96682);
   hmcerror__20->SetBinContent(22,77.5418);
   hmcerror__20->SetBinContent(23,82.53478);
   hmcerror__20->SetBinContent(24,96.90134);
   hmcerror__20->SetBinError(1,35.76302);
   hmcerror__20->SetBinError(2,36.75898);
   hmcerror__20->SetBinError(3,35.91226);
   hmcerror__20->SetBinError(4,31.55288);
   hmcerror__20->SetBinError(5,32.42713);
   hmcerror__20->SetBinError(6,31.78184);
   hmcerror__20->SetBinError(7,31.10848);
   hmcerror__20->SetBinError(8,29.7769);
   hmcerror__20->SetBinError(9,32.53275);
   hmcerror__20->SetBinError(10,35.42371);
   hmcerror__20->SetBinError(11,33.62391);
   hmcerror__20->SetBinError(12,38.01621);
   hmcerror__20->SetBinError(13,37.71538);
   hmcerror__20->SetBinError(14,32.30805);
   hmcerror__20->SetBinError(15,33.37236);
   hmcerror__20->SetBinError(16,33.65496);
   hmcerror__20->SetBinError(17,44.28081);
   hmcerror__20->SetBinError(18,33.06974);
   hmcerror__20->SetBinError(19,33.43731);
   hmcerror__20->SetBinError(20,32.9019);
   hmcerror__20->SetBinError(21,36.46037);
   hmcerror__20->SetBinError(22,31.33127);
   hmcerror__20->SetBinError(23,33.94693);
   hmcerror__20->SetBinError(24,50.51621);
   hmcerror__20->SetBinError(25,0.3895343);
   hmcerror__20->SetEntries(1993.425);

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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3025[24] = {
   69,
   72,
   66,
   62,
   50,
   57,
   61,
   48,
   59,
   68,
   68,
   63,
   70,
   65,
   67,
   55,
   62,
   49,
   50,
   55,
   54,
   65,
   61,
   56};
   Double_t _felx3025[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3025[24] = {
   8.4327,
   8.6108,
   8.2509,
   8.0018,
   7.2025,
   7.679,
   7.9383,
   7.0604,
   7.8097,
   8.3726,
   8.3726,
   8.0648,
   8.4925,
   8.1893,
   8.3119,
   7.546,
   8.0018,
   7.1318,
   7.2025,
   7.546,
   7.4785,
   8.1893,
   7.9383,
   7.6127};
   Double_t _fehx3025[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3025[24] = {
   8.2304,
   8.4085,
   8.0483,
   7.7989,
   6.9985,
   7.4757,
   7.7354,
   6.8561,
   7.6066,
   8.1701,
   8.1701,
   7.862,
   8.2902,
   7.9866,
   8.1094,
   7.3425,
   7.7989,
   6.9277,
   6.9985,
   7.3425,
   7.275,
   7.9866,
   7.7354,
   7.4094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(36.99271);
   Graph_Graph3025->SetMaximum(84.35539);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3026[24] = {
   0.3906413,
   0.4085702,
   0.4164638,
   0.3699459,
   0.4240448,
   0.4209289,
   0.4010687,
   0.3854556,
   0.4275796,
   0.4355639,
   0.3863905,
   0.4175644,
   0.3912987,
   0.3892151,
   0.4072198,
   0.3967973,
   0.520236,
   0.413438,
   0.3868042,
   0.3986057,
   0.4342235,
   0.4040565,
   0.4113045,
   0.5213159};
   Double_t _fehx3026[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3026[24] = {
   0.3906413,
   0.4085702,
   0.4164638,
   0.3699459,
   0.4240448,
   0.4209289,
   0.4010687,
   0.3854556,
   0.4275796,
   0.4355639,
   0.3863905,
   0.4175644,
   0.3912987,
   0.3892151,
   0.4072198,
   0.3967973,
   0.520236,
   0.413438,
   0.3868042,
   0.3986057,
   0.4342235,
   0.4040565,
   0.4113045,
   0.5213159};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-3.78,3.78);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3027[24] = {
   0.3560713,
   0.3510951,
   0.3766128,
   0.3184196,
   0.3496721,
   0.3629208,
   0.3469627,
   0.3493586,
   0.375418,
   0.3746589,
   0.3548041,
   0.3715491,
   0.3414126,
   0.3425381,
   0.3721392,
   0.3608405,
   0.3368491,
   0.3323908,
   0.3386928,
   0.3506472,
   0.3814292,
   0.3616437,
   0.3609185,
   0.3578409};
   Double_t _fehx3027[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3027[24] = {
   0.3560713,
   0.3510951,
   0.3766128,
   0.3184196,
   0.3496721,
   0.3629208,
   0.3469627,
   0.3493586,
   0.375418,
   0.3746589,
   0.3548041,
   0.3715491,
   0.3414126,
   0.3425381,
   0.3721392,
   0.3608405,
   0.3368491,
   0.3323908,
   0.3386928,
   0.3506472,
   0.3814292,
   0.3616437,
   0.3609185,
   0.3578409};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-3.78,3.78);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3028[24] = {
   0.7536904,
   0.8002686,
   0.7653823,
   0.7269271,
   0.6538425,
   0.7549263,
   0.7864474,
   0.6213499,
   0.7754401,
   0.8361165,
   0.7814247,
   0.6919827,
   0.7262531,
   0.7830551,
   0.8175547,
   0.6484586,
   0.7284111,
   0.6125981,
   0.5784021,
   0.6663236,
   0.6431112,
   0.8382575,
   0.7390823,
   0.5779074};
   Double_t _felx3028[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3028[24] = {
   0.0921108,
   0.09570768,
   0.09568323,
   0.09381815,
   0.09418601,
   0.1017031,
   0.1023452,
   0.09139539,
   0.1026433,
   0.1029481,
   0.09621407,
   0.08858257,
   0.08811007,
   0.09865651,
   0.1014244,
   0.08896852,
   0.09400967,
   0.08916179,
   0.08331882,
   0.09141959,
   0.08906494,
   0.1056114,
   0.09618127,
   0.07856135};
   Double_t _fehx3028[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3028[24] = {
   0.08990107,
   0.09345914,
   0.09333373,
   0.09143922,
   0.09151833,
   0.09901057,
   0.09972927,
   0.08875077,
   0.09997395,
   0.1004582,
   0.09388703,
   0.08635505,
   0.0860112,
   0.09621458,
   0.09895341,
   0.08656923,
   0.09162589,
   0.08661013,
   0.08095894,
   0.0889542,
   0.08664137,
   0.1029973,
   0.09372291,
   0.07646334};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.4504661);
   Graph_Graph3028->SetMaximum(0.9858721);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
