#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 21:31:45 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-184.6154,-11.3814,1353.846,1258.543);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,173.3313);
   hmc__4->SetBinContent(2,569.0701);
   hmc__4->SetBinContent(3,431.4667);
   hmc__4->SetBinContent(4,277.5232);
   hmc__4->SetBinContent(5,178.4477);
   hmc__4->SetBinContent(6,96.34622);
   hmc__4->SetBinContent(7,53.86348);
   hmc__4->SetBinContent(8,34.92231);
   hmc__4->SetBinContent(9,21.43538);
   hmc__4->SetBinContent(10,15.72555);
   hmc__4->SetBinContent(11,15.60512);
   hmc__4->SetBinContent(12,15.15608);
   hmc__4->SetBinContent(13,133.6136);
   hmc__4->SetBinError(1,58.99388);
   hmc__4->SetBinError(2,216.4001);
   hmc__4->SetBinError(3,181.7192);
   hmc__4->SetBinError(4,118.4147);
   hmc__4->SetBinError(5,75.3617);
   hmc__4->SetBinError(6,37.07863);
   hmc__4->SetBinError(7,24.48107);
   hmc__4->SetBinError(8,13.21661);
   hmc__4->SetBinError(9,11.05852);
   hmc__4->SetBinError(10,9.194841);
   hmc__4->SetBinError(11,9.688891);
   hmc__4->SetBinError(12,10.42762);
   hmc__4->SetBinError(13,42.04266);
   hmc__4->SetMinimum(-11.3814);
   hmc__4->SetMaximum(1195.047);
   hmc__4->SetEntries(1993.425);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1200);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(597.5236);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,7.699338);
   hbadmatch_stack_1->SetBinContent(2,9.005287);
   hbadmatch_stack_1->SetBinContent(3,7.292571);
   hbadmatch_stack_1->SetBinContent(4,6.019204);
   hbadmatch_stack_1->SetBinContent(5,2.487605);
   hbadmatch_stack_1->SetBinContent(6,1.379691);
   hbadmatch_stack_1->SetBinContent(7,1.548802);
   hbadmatch_stack_1->SetBinContent(8,0.8333738);
   hbadmatch_stack_1->SetBinContent(9,0.9497471);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,0.383108);
   hbadmatch_stack_1->SetBinContent(12,0.8326599);
   hbadmatch_stack_1->SetBinContent(13,2.208614);
   hbadmatch_stack_1->SetBinError(1,1.48475);
   hbadmatch_stack_1->SetBinError(2,1.772341);
   hbadmatch_stack_1->SetBinError(3,1.432154);
   hbadmatch_stack_1->SetBinError(4,1.250118);
   hbadmatch_stack_1->SetBinError(5,0.8111592);
   hbadmatch_stack_1->SetBinError(6,0.6377629);
   hbadmatch_stack_1->SetBinError(7,0.6495186);
   hbadmatch_stack_1->SetBinError(8,0.5893563);
   hbadmatch_stack_1->SetBinError(9,0.4897963);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.383108);
   hbadmatch_stack_1->SetBinError(12,0.5075997);
   hbadmatch_stack_1->SetBinError(13,0.8146316);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,10.21518);
   hext_stack_2->SetBinContent(2,25.65983);
   hext_stack_2->SetBinContent(3,17.74302);
   hext_stack_2->SetBinContent(4,11.72624);
   hext_stack_2->SetBinContent(5,5.191995);
   hext_stack_2->SetBinContent(6,5.344809);
   hext_stack_2->SetBinContent(7,3.565599);
   hext_stack_2->SetBinContent(8,3.15182);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,1.461993);
   hext_stack_2->SetBinContent(11,1.704188);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,6.560196);
   hext_stack_2->SetBinError(1,2.01372);
   hext_stack_2->SetBinError(2,3.325834);
   hext_stack_2->SetBinError(3,2.783111);
   hext_stack_2->SetBinError(4,2.307803);
   hext_stack_2->SetBinError(5,1.468055);
   hext_stack_2->SetBinError(6,1.530177);
   hext_stack_2->SetBinError(7,1.22225);
   hext_stack_2->SetBinError(8,1.23684);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,0.7356036);
   hext_stack_2->SetBinError(11,0.7656743);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,1.643863);
   hext_stack_2->SetEntries(235);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,1.207287);
   hdirt_stack_3->SetBinContent(2,2.689404);
   hdirt_stack_3->SetBinContent(3,2.084029);
   hdirt_stack_3->SetBinContent(4,0.1677351);
   hdirt_stack_3->SetBinContent(5,0.3381872);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.5388689);
   hdirt_stack_3->SetBinError(1,0.5590431);
   hdirt_stack_3->SetBinError(2,0.8419193);
   hdirt_stack_3->SetBinError(3,0.6838636);
   hdirt_stack_3->SetBinError(4,0.1651996);
   hdirt_stack_3->SetBinError(5,0.3381872);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(13,0.4239131);
   hdirt_stack_3->SetEntries(33);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.863885);
   houtFV_stack_4->SetBinContent(2,7.40601);
   houtFV_stack_4->SetBinContent(3,12.5913);
   houtFV_stack_4->SetBinContent(4,8.171183);
   houtFV_stack_4->SetBinContent(5,5.333253);
   houtFV_stack_4->SetBinContent(6,3.375108);
   houtFV_stack_4->SetBinContent(7,2.445722);
   houtFV_stack_4->SetBinContent(8,0.6330907);
   houtFV_stack_4->SetBinContent(9,1.660551);
   houtFV_stack_4->SetBinContent(10,0.5901461);
   houtFV_stack_4->SetBinContent(11,0.3401776);
   houtFV_stack_4->SetBinContent(12,1.111974);
   houtFV_stack_4->SetBinContent(13,7.517584);
   houtFV_stack_4->SetBinError(1,1.097422);
   houtFV_stack_4->SetBinError(2,1.350795);
   houtFV_stack_4->SetBinError(3,1.792417);
   houtFV_stack_4->SetBinError(4,1.437971);
   houtFV_stack_4->SetBinError(5,1.162533);
   houtFV_stack_4->SetBinError(6,0.9334708);
   houtFV_stack_4->SetBinError(7,0.7600838);
   houtFV_stack_4->SetBinError(8,0.3426673);
   houtFV_stack_4->SetBinError(9,0.650847);
   houtFV_stack_4->SetBinError(10,0.340721);
   houtFV_stack_4->SetBinError(11,0.3401776);
   houtFV_stack_4->SetBinError(12,0.5809653);
   houtFV_stack_4->SetBinError(13,1.401386);
   houtFV_stack_4->SetEntries(240);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.520385);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.365874);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.119407);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.230848);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.711454);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2862317);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7275944);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3894385);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5162804);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3035023);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,63.65395);
   hNCpi0inFVres_stack_7->SetBinContent(2,292.3266);
   hNCpi0inFVres_stack_7->SetBinContent(3,231.7481);
   hNCpi0inFVres_stack_7->SetBinContent(4,144.1309);
   hNCpi0inFVres_stack_7->SetBinContent(5,88.53954);
   hNCpi0inFVres_stack_7->SetBinContent(6,38.56792);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.09887);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.75034);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.195735);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.407552);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.120174);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.806042);
   hNCpi0inFVres_stack_7->SetBinContent(13,41.9636);
   hNCpi0inFVres_stack_7->SetBinError(1,2.61979);
   hNCpi0inFVres_stack_7->SetBinError(2,5.588652);
   hNCpi0inFVres_stack_7->SetBinError(3,4.983163);
   hNCpi0inFVres_stack_7->SetBinError(4,3.916752);
   hNCpi0inFVres_stack_7->SetBinError(5,3.145962);
   hNCpi0inFVres_stack_7->SetBinError(6,2.010561);
   hNCpi0inFVres_stack_7->SetBinError(7,1.379253);
   hNCpi0inFVres_stack_7->SetBinError(8,1.044584);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8492023);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6523328);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7761674);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6652324);
   hNCpi0inFVres_stack_7->SetBinError(13,2.118629);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,16.35461);
   hNCpi0inFVdis_stack_8->SetBinContent(2,49.84951);
   hNCpi0inFVdis_stack_8->SetBinContent(3,33.45985);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.24162);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.22882);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.133302);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.126392);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.03762);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.966626);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8365039);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8086039);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.729976);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.74546);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.297361);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.270572);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.815696);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.571294);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.294483);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9931078);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6522831);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5138868);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4540403);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2638255);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2623461);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4749196);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.177141);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.711454);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3035023);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,28.83109);
   hCCpi0inFV_stack_10->SetBinContent(2,85.30858);
   hCCpi0inFV_stack_10->SetBinContent(3,56.68443);
   hCCpi0inFV_stack_10->SetBinContent(4,36.64442);
   hCCpi0inFV_stack_10->SetBinContent(5,20.77536);
   hCCpi0inFV_stack_10->SetBinContent(6,14.44756);
   hCCpi0inFV_stack_10->SetBinContent(7,6.744668);
   hCCpi0inFV_stack_10->SetBinContent(8,3.764405);
   hCCpi0inFV_stack_10->SetBinContent(9,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(10,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(11,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(12,1.903757);
   hCCpi0inFV_stack_10->SetBinContent(13,12.28912);
   hCCpi0inFV_stack_10->SetBinError(1,2.708051);
   hCCpi0inFV_stack_10->SetBinError(2,4.641615);
   hCCpi0inFV_stack_10->SetBinError(3,3.783584);
   hCCpi0inFV_stack_10->SetBinError(4,3.040552);
   hCCpi0inFV_stack_10->SetBinError(5,2.220134);
   hCCpi0inFV_stack_10->SetBinError(6,1.916894);
   hCCpi0inFV_stack_10->SetBinError(7,1.376785);
   hCCpi0inFV_stack_10->SetBinError(8,0.9407157);
   hCCpi0inFV_stack_10->SetBinError(9,0.809167);
   hCCpi0inFV_stack_10->SetBinError(10,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(11,0.620407);
   hCCpi0inFV_stack_10->SetBinError(12,0.6490939);
   hCCpi0inFV_stack_10->SetBinError(13,1.83491);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,21.35349);
   hNCinFV_stack_11->SetBinContent(2,47.93245);
   hNCinFV_stack_11->SetBinContent(3,31.26017);
   hNCinFV_stack_11->SetBinContent(4,16.91549);
   hNCinFV_stack_11->SetBinContent(5,14.69837);
   hNCinFV_stack_11->SetBinContent(6,10.30179);
   hNCinFV_stack_11->SetBinContent(7,7.227279);
   hNCinFV_stack_11->SetBinContent(8,3.806432);
   hNCinFV_stack_11->SetBinContent(9,1.123658);
   hNCinFV_stack_11->SetBinContent(10,2.732646);
   hNCinFV_stack_11->SetBinContent(11,1.710423);
   hNCinFV_stack_11->SetBinContent(12,1.997348);
   hNCinFV_stack_11->SetBinContent(13,15.3838);
   hNCinFV_stack_11->SetBinError(1,2.305309);
   hNCinFV_stack_11->SetBinError(2,3.477938);
   hNCinFV_stack_11->SetBinError(3,2.809459);
   hNCinFV_stack_11->SetBinError(4,2.049563);
   hNCinFV_stack_11->SetBinError(5,1.952785);
   hNCinFV_stack_11->SetBinError(6,1.629929);
   hNCinFV_stack_11->SetBinError(7,1.344809);
   hNCinFV_stack_11->SetBinError(8,1.020103);
   hNCinFV_stack_11->SetBinError(9,0.5188295);
   hNCinFV_stack_11->SetBinError(10,0.8554385);
   hNCinFV_stack_11->SetBinError(11,0.6196373);
   hNCinFV_stack_11->SetBinError(12,0.7334836);
   hNCinFV_stack_11->SetBinError(13,2.011666);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,16.36635);
   hnumuCCinFV_stack_12->SetBinContent(2,42.51874);
   hnumuCCinFV_stack_12->SetBinContent(3,34.55421);
   hnumuCCinFV_stack_12->SetBinContent(4,27.36432);
   hnumuCCinFV_stack_12->SetBinContent(5,24.66863);
   hnumuCCinFV_stack_12->SetBinContent(6,13.44621);
   hnumuCCinFV_stack_12->SetBinContent(7,9.577758);
   hnumuCCinFV_stack_12->SetBinContent(8,8.7106);
   hnumuCCinFV_stack_12->SetBinContent(9,4.542192);
   hnumuCCinFV_stack_12->SetBinContent(10,2.72935);
   hnumuCCinFV_stack_12->SetBinContent(11,4.074613);
   hnumuCCinFV_stack_12->SetBinContent(12,2.286578);
   hnumuCCinFV_stack_12->SetBinContent(13,30.52367);
   hnumuCCinFV_stack_12->SetBinError(1,2.222958);
   hnumuCCinFV_stack_12->SetBinError(2,3.736035);
   hnumuCCinFV_stack_12->SetBinError(3,3.107683);
   hnumuCCinFV_stack_12->SetBinError(4,3.011858);
   hnumuCCinFV_stack_12->SetBinError(5,3.096473);
   hnumuCCinFV_stack_12->SetBinError(6,3.043846);
   hnumuCCinFV_stack_12->SetBinError(7,2.05478);
   hnumuCCinFV_stack_12->SetBinError(8,1.80756);
   hnumuCCinFV_stack_12->SetBinError(9,1.214578);
   hnumuCCinFV_stack_12->SetBinError(10,0.8001459);
   hnumuCCinFV_stack_12->SetBinError(11,1.044824);
   hnumuCCinFV_stack_12->SetBinError(12,0.8425767);
   hnumuCCinFV_stack_12->SetBinError(13,3.227884);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(2,1.073786);
   hnueCCinFV_stack_13->SetBinContent(3,1.580938);
   hnueCCinFV_stack_13->SetBinContent(4,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(12,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(13,4.059657);
   hnueCCinFV_stack_13->SetBinError(1,0.4810838);
   hnueCCinFV_stack_13->SetBinError(2,0.5557297);
   hnueCCinFV_stack_13->SetBinError(3,0.7815444);
   hnueCCinFV_stack_13->SetBinError(4,0.4379386);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.2346262);
   hnueCCinFV_stack_13->SetBinError(12,0.5410961);
   hnueCCinFV_stack_13->SetBinError(13,1.052206);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,173.3313);
   hmcerror__5->SetBinContent(2,569.0701);
   hmcerror__5->SetBinContent(3,431.4667);
   hmcerror__5->SetBinContent(4,277.5232);
   hmcerror__5->SetBinContent(5,178.4477);
   hmcerror__5->SetBinContent(6,96.34622);
   hmcerror__5->SetBinContent(7,53.86348);
   hmcerror__5->SetBinContent(8,34.92231);
   hmcerror__5->SetBinContent(9,21.43538);
   hmcerror__5->SetBinContent(10,15.72555);
   hmcerror__5->SetBinContent(11,15.60512);
   hmcerror__5->SetBinContent(12,15.15608);
   hmcerror__5->SetBinContent(13,133.6136);
   hmcerror__5->SetBinError(1,58.99388);
   hmcerror__5->SetBinError(2,216.4001);
   hmcerror__5->SetBinError(3,181.7192);
   hmcerror__5->SetBinError(4,118.4147);
   hmcerror__5->SetBinError(5,75.3617);
   hmcerror__5->SetBinError(6,37.07863);
   hmcerror__5->SetBinError(7,24.48107);
   hmcerror__5->SetBinError(8,13.21661);
   hmcerror__5->SetBinError(9,11.05852);
   hmcerror__5->SetBinError(10,9.194841);
   hmcerror__5->SetBinError(11,9.688891);
   hmcerror__5->SetBinError(12,10.42762);
   hmcerror__5->SetBinError(13,42.04266);
   hmcerror__5->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3005[12] = {
   128,
   421,
   331,
   189,
   92,
   63,
   45,
   36,
   22,
   14,
   13,
   6};
   Double_t _felx3005[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3005[12] = {
   11.31371,
   20.51828,
   18.19341,
   13.74773,
   9.7138,
   8.0648,
   6.8416,
   6.1381,
   4.8417,
   3.9102,
   3.77763,
   2.67925};
   Double_t _fehx3005[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3005[12] = {
   11.31371,
   20.51828,
   18.19341,
   13.74773,
   9.513,
   7.862,
   6.637,
   5.9318,
   4.6299,
   3.6898,
   3.5552,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(2.988675);
   Graph_Graph3005->SetMaximum(485.338);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1360.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 38.6","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 87.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.6","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 48.5","F");

   ci = 1450;
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

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.4","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  908.3","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  159.8","F");

   ci = 1454;
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

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 261.6","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 161.1","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 190.8","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.3","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3006[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3006[12] = {
   1,
   1,
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
   Double_t _felx3006[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3006[12] = {
   0.3403533,
   0.3802696,
   0.4211661,
   0.4266841,
   0.422318,
   0.3848477,
   0.4545022,
   0.3784574,
   0.5159004,
   0.584707,
   0.6208788,
   0.6880156};
   Double_t _fehx3006[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3006[12] = {
   0.3403533,
   0.3802696,
   0.4211661,
   0.4266841,
   0.422318,
   0.3848477,
   0.4545022,
   0.3784574,
   0.5159004,
   0.584707,
   0.6208788,
   0.6880156};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3007[12] = {
   1,
   1,
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
   Double_t _felx3007[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3007[12] = {
   0.3110217,
   0.3685307,
   0.4066691,
   0.4086319,
   0.3954483,
   0.3387674,
   0.2864551,
   0.2403597,
   0.2995048,
   0.2721092,
   0.2570155,
   0.2466531};
   Double_t _fehx3007[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3007[12] = {
   0.3110217,
   0.3685307,
   0.4066691,
   0.4086319,
   0.3954483,
   0.3387674,
   0.2864551,
   0.2403597,
   0.2995048,
   0.2721092,
   0.2570155,
   0.2466531};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
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
   
   Double_t _fx3008[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3008[12] = {
   0.7384701,
   0.7398035,
   0.7671508,
   0.6810241,
   0.5155571,
   0.6538918,
   0.8354454,
   1.03086,
   1.02634,
   0.8902708,
   0.8330597,
   0.3958807};
   Double_t _felx3008[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3008[12] = {
   0.06527216,
   0.03605581,
   0.04216642,
   0.04953721,
   0.05443499,
   0.08370645,
   0.1270174,
   0.1757644,
   0.2258742,
   0.2486526,
   0.2420763,
   0.1767772};
   Double_t _fehx3008[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3008[12] = {
   0.06527216,
   0.03605581,
   0.04216642,
   0.04953721,
   0.05330973,
   0.08160154,
   0.1232189,
   0.169857,
   0.2159933,
   0.2346372,
   0.2278226,
   0.1595782};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.1167804);
   Graph_Graph3008->SetMaximum(1.344657);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
