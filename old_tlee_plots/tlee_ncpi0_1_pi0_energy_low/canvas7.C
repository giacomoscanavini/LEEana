#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 18:59:35 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-69.23077,-12.40917,507.6923,1372.193);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__19->SetBinContent(1,480.1915);
   hmc__19->SetBinContent(2,620.4587);
   hmc__19->SetBinContent(3,486.6785);
   hmc__19->SetBinContent(4,318.2347);
   hmc__19->SetBinContent(5,181.8116);
   hmc__19->SetBinContent(6,111.8143);
   hmc__19->SetBinContent(7,71.94242);
   hmc__19->SetBinContent(8,46.79633);
   hmc__19->SetBinContent(9,28.34761);
   hmc__19->SetBinContent(10,18.3909);
   hmc__19->SetBinContent(11,9.496836);
   hmc__19->SetBinContent(12,6.030792);
   hmc__19->SetBinContent(13,2.934644);
   hmc__19->SetBinContent(14,1.638255);
   hmc__19->SetBinContent(15,0.8927212);
   hmc__19->SetBinContent(16,3.394941);
   hmc__19->SetBinError(1,141.0525);
   hmc__19->SetBinError(2,243.3171);
   hmc__19->SetBinError(3,198.1905);
   hmc__19->SetBinError(4,135.8184);
   hmc__19->SetBinError(5,69.139);
   hmc__19->SetBinError(6,41.39122);
   hmc__19->SetBinError(7,28.87056);
   hmc__19->SetBinError(8,18.6386);
   hmc__19->SetBinError(9,19.11602);
   hmc__19->SetBinError(10,13.85125);
   hmc__19->SetBinError(11,8.511422);
   hmc__19->SetBinError(12,6.005734);
   hmc__19->SetBinError(13,4.534554);
   hmc__19->SetBinError(14,2.731154);
   hmc__19->SetBinError(15,4.074535);
   hmc__19->SetBinError(16,5.429789);
   hmc__19->SetMinimum(-12.40917);
   hmc__19->SetMaximum(1302.963);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",15,0,450);
   hs7_stack_7->SetMinimum(-1.427841e-08);
   hs7_stack_7->SetMaximum(651.4817);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,11.7935);
   hbadmatch_stack_1->SetBinContent(2,14.39814);
   hbadmatch_stack_1->SetBinContent(3,13.34355);
   hbadmatch_stack_1->SetBinContent(4,5.516026);
   hbadmatch_stack_1->SetBinContent(5,4.454947);
   hbadmatch_stack_1->SetBinContent(6,2.382646);
   hbadmatch_stack_1->SetBinContent(7,0.7822819);
   hbadmatch_stack_1->SetBinContent(8,0.9845625);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(10,0.3824374);
   hbadmatch_stack_1->SetBinContent(13,0.2552519);
   hbadmatch_stack_1->SetBinError(1,1.776992);
   hbadmatch_stack_1->SetBinError(2,2.722976);
   hbadmatch_stack_1->SetBinError(3,2.157313);
   hbadmatch_stack_1->SetBinError(4,1.173565);
   hbadmatch_stack_1->SetBinError(5,1.221283);
   hbadmatch_stack_1->SetBinError(6,0.8031207);
   hbadmatch_stack_1->SetBinError(7,0.4917628);
   hbadmatch_stack_1->SetBinError(8,0.728665);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(10,0.2705358);
   hbadmatch_stack_1->SetBinError(13,0.255252);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,56.18324);
   hext_stack_2->SetBinContent(2,55.14062);
   hext_stack_2->SetBinContent(3,38.61185);
   hext_stack_2->SetBinContent(4,20.1379);
   hext_stack_2->SetBinContent(5,7.840653);
   hext_stack_2->SetBinContent(6,5.650435);
   hext_stack_2->SetBinContent(7,2.428004);
   hext_stack_2->SetBinContent(8,1.055394);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinError(1,5.289349);
   hext_stack_2->SetBinError(2,5.03956);
   hext_stack_2->SetBinError(3,4.338211);
   hext_stack_2->SetBinError(4,3.077889);
   hext_stack_2->SetBinError(5,1.965184);
   hext_stack_2->SetBinError(6,1.647409);
   hext_stack_2->SetBinError(7,1.028599);
   hext_stack_2->SetBinError(8,0.6130171);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(16,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,3.044548);
   hdirt_stack_3->SetBinContent(2,4.758179);
   hdirt_stack_3->SetBinContent(3,2.457263);
   hdirt_stack_3->SetBinContent(4,0.5758626);
   hdirt_stack_3->SetBinContent(5,0.2827498);
   hdirt_stack_3->SetBinContent(6,0.3381872);
   hdirt_stack_3->SetBinError(1,0.8606195);
   hdirt_stack_3->SetBinError(2,1.116828);
   hdirt_stack_3->SetBinError(3,1.106061);
   hdirt_stack_3->SetBinError(4,0.3389606);
   hdirt_stack_3->SetBinError(5,0.1999888);
   hdirt_stack_3->SetBinError(6,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,22.60169);
   houtFV_stack_4->SetBinContent(2,23.72578);
   houtFV_stack_4->SetBinContent(3,18.48808);
   houtFV_stack_4->SetBinContent(4,9.840966);
   houtFV_stack_4->SetBinContent(5,4.381929);
   houtFV_stack_4->SetBinContent(6,3.247435);
   houtFV_stack_4->SetBinContent(7,2.183646);
   houtFV_stack_4->SetBinContent(8,0.9287637);
   houtFV_stack_4->SetBinContent(9,0.8547089);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinContent(12,0.3726301);
   houtFV_stack_4->SetBinError(1,2.375269);
   houtFV_stack_4->SetBinError(2,2.327481);
   houtFV_stack_4->SetBinError(3,2.175247);
   houtFV_stack_4->SetBinError(4,1.506346);
   houtFV_stack_4->SetBinError(5,0.9565757);
   houtFV_stack_4->SetBinError(6,0.8872823);
   houtFV_stack_4->SetBinError(7,0.7197466);
   houtFV_stack_4->SetBinError(8,0.5097151);
   houtFV_stack_4->SetBinError(9,0.4558289);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetBinError(12,0.3726301);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.431264);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4980611);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7218972);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5886778);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6681828);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3012714);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1764998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4192391);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1305876);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2227786);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2456306);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2616276);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1758487);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.110666);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03728024);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.48279);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.909656);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.071755);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.384175);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5068327);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1065019);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.190892);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2954408);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5754724);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5311807);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2894196);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.189431);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04425848);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1769124);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,144.8202);
   hNCpi0inFVres_stack_7->SetBinContent(2,263.8463);
   hNCpi0inFVres_stack_7->SetBinContent(3,203.3939);
   hNCpi0inFVres_stack_7->SetBinContent(4,132.2246);
   hNCpi0inFVres_stack_7->SetBinContent(5,70.06573);
   hNCpi0inFVres_stack_7->SetBinContent(6,40.20741);
   hNCpi0inFVres_stack_7->SetBinContent(7,24.35893);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.4012);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.723385);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.436872);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.257657);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.371949);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.9854699);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.322886);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1694538);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5546871);
   hNCpi0inFVres_stack_7->SetBinError(1,3.656086);
   hNCpi0inFVres_stack_7->SetBinError(2,4.961898);
   hNCpi0inFVres_stack_7->SetBinError(3,4.069619);
   hNCpi0inFVres_stack_7->SetBinError(4,3.580322);
   hNCpi0inFVres_stack_7->SetBinError(5,2.533226);
   hNCpi0inFVres_stack_7->SetBinError(6,1.966303);
   hNCpi0inFVres_stack_7->SetBinError(7,1.588974);
   hNCpi0inFVres_stack_7->SetBinError(8,1.599076);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9758366);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9394758);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6387434);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3821044);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3618712);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1354711);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1198997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1928224);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,33.51749);
   hNCpi0inFVdis_stack_8->SetBinContent(2,50.67812);
   hNCpi0inFVdis_stack_8->SetBinContent(3,39.84885);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.25454);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.88913);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.19057);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.024393);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.875082);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.871587);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.795847);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9332367);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.467909);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.103776);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.06410217);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3830897);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7198513);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.928159);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.271598);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.961084);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.744751);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.243097);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.070184);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.031872);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.207246);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4433625);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6450257);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4077494);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6746518);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4745968);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.04570566);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2274824);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3944205);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.362247);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.3492329);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1564808);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.177172);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03157261);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,48.52704);
   hCCpi0inFV_stack_10->SetBinContent(2,94.48157);
   hCCpi0inFV_stack_10->SetBinContent(3,91.69394);
   hCCpi0inFV_stack_10->SetBinContent(4,60.98695);
   hCCpi0inFV_stack_10->SetBinContent(5,36.67525);
   hCCpi0inFV_stack_10->SetBinContent(6,20.78992);
   hCCpi0inFV_stack_10->SetBinContent(7,12.48742);
   hCCpi0inFV_stack_10->SetBinContent(8,7.193941);
   hCCpi0inFV_stack_10->SetBinContent(9,4.357932);
   hCCpi0inFV_stack_10->SetBinContent(10,2.592565);
   hCCpi0inFV_stack_10->SetBinContent(11,1.997238);
   hCCpi0inFV_stack_10->SetBinContent(12,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(16,0.7319179);
   hCCpi0inFV_stack_10->SetBinError(1,3.541212);
   hCCpi0inFV_stack_10->SetBinError(2,4.887113);
   hCCpi0inFV_stack_10->SetBinError(3,4.81119);
   hCCpi0inFV_stack_10->SetBinError(4,3.91488);
   hCCpi0inFV_stack_10->SetBinError(5,2.99713);
   hCCpi0inFV_stack_10->SetBinError(6,2.325548);
   hCCpi0inFV_stack_10->SetBinError(7,1.758329);
   hCCpi0inFV_stack_10->SetBinError(8,1.347898);
   hCCpi0inFV_stack_10->SetBinError(9,1.00118);
   hCCpi0inFV_stack_10->SetBinError(10,0.809985);
   hCCpi0inFV_stack_10->SetBinError(11,0.6324952);
   hCCpi0inFV_stack_10->SetBinError(12,0.438694);
   hCCpi0inFV_stack_10->SetBinError(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(16,0.438694);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,49.58607);
   hNCinFV_stack_11->SetBinContent(2,42.41754);
   hNCinFV_stack_11->SetBinContent(3,33.94045);
   hNCinFV_stack_11->SetBinContent(4,29.1848);
   hNCinFV_stack_11->SetBinContent(5,27.17984);
   hNCinFV_stack_11->SetBinContent(6,17.32596);
   hNCinFV_stack_11->SetBinContent(7,15.13115);
   hNCinFV_stack_11->SetBinContent(8,10.37128);
   hNCinFV_stack_11->SetBinContent(9,10.26246);
   hNCinFV_stack_11->SetBinContent(10,5.94826);
   hNCinFV_stack_11->SetBinContent(11,2.50032);
   hNCinFV_stack_11->SetBinContent(12,2.086386);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,0.9110895);
   hNCinFV_stack_11->SetBinContent(16,0.5901461);
   hNCinFV_stack_11->SetBinError(1,3.576228);
   hNCinFV_stack_11->SetBinError(2,3.438195);
   hNCinFV_stack_11->SetBinError(3,2.959674);
   hNCinFV_stack_11->SetBinError(4,2.69544);
   hNCinFV_stack_11->SetBinError(5,3.07754);
   hNCinFV_stack_11->SetBinError(6,2.39444);
   hNCinFV_stack_11->SetBinError(7,2.501103);
   hNCinFV_stack_11->SetBinError(8,2.235437);
   hNCinFV_stack_11->SetBinError(9,2.063877);
   hNCinFV_stack_11->SetBinError(10,1.553385);
   hNCinFV_stack_11->SetBinError(11,1.036313);
   hNCinFV_stack_11->SetBinError(12,0.8378938);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.6645759);
   hNCinFV_stack_11->SetBinError(16,0.340721);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,101.8705);
   hnumuCCinFV_stack_12->SetBinContent(2,63.11944);
   hnumuCCinFV_stack_12->SetBinContent(3,40.11039);
   hnumuCCinFV_stack_12->SetBinContent(4,26.41488);
   hnumuCCinFV_stack_12->SetBinContent(5,12.7943);
   hnumuCCinFV_stack_12->SetBinContent(6,9.882206);
   hnumuCCinFV_stack_12->SetBinContent(7,6.538796);
   hnumuCCinFV_stack_12->SetBinContent(8,3.830973);
   hnumuCCinFV_stack_12->SetBinContent(9,2.250697);
   hnumuCCinFV_stack_12->SetBinContent(10,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(11,1.127039);
   hnumuCCinFV_stack_12->SetBinContent(13,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,6.169122);
   hnumuCCinFV_stack_12->SetBinError(2,5.047701);
   hnumuCCinFV_stack_12->SetBinError(3,3.512774);
   hnumuCCinFV_stack_12->SetBinError(4,2.898137);
   hnumuCCinFV_stack_12->SetBinError(5,1.800496);
   hnumuCCinFV_stack_12->SetBinError(6,1.670546);
   hnumuCCinFV_stack_12->SetBinError(7,1.283419);
   hnumuCCinFV_stack_12->SetBinError(8,0.9607673);
   hnumuCCinFV_stack_12->SetBinError(9,0.7346377);
   hnumuCCinFV_stack_12->SetBinError(10,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(11,0.5201044);
   hnumuCCinFV_stack_12->SetBinError(13,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(16,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,5.307412);
   hnueCCinFV_stack_13->SetBinContent(2,3.123112);
   hnueCCinFV_stack_13->SetBinContent(3,0.6472966);
   hnueCCinFV_stack_13->SetBinContent(4,2.070624);
   hnueCCinFV_stack_13->SetBinContent(5,1.072095);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.6404051);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,1.294512);
   hnueCCinFV_stack_13->SetBinError(2,0.9319957);
   hnueCCinFV_stack_13->SetBinError(3,0.3766189);
   hnueCCinFV_stack_13->SetBinError(4,0.7638296);
   hnueCCinFV_stack_13->SetBinError(5,0.5551335);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.3722443);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__20->SetBinContent(1,480.1915);
   hmcerror__20->SetBinContent(2,620.4587);
   hmcerror__20->SetBinContent(3,486.6785);
   hmcerror__20->SetBinContent(4,318.2347);
   hmcerror__20->SetBinContent(5,181.8116);
   hmcerror__20->SetBinContent(6,111.8143);
   hmcerror__20->SetBinContent(7,71.94242);
   hmcerror__20->SetBinContent(8,46.79633);
   hmcerror__20->SetBinContent(9,28.34761);
   hmcerror__20->SetBinContent(10,18.3909);
   hmcerror__20->SetBinContent(11,9.496836);
   hmcerror__20->SetBinContent(12,6.030792);
   hmcerror__20->SetBinContent(13,2.934644);
   hmcerror__20->SetBinContent(14,1.638255);
   hmcerror__20->SetBinContent(15,0.8927212);
   hmcerror__20->SetBinContent(16,3.394941);
   hmcerror__20->SetBinError(1,141.0525);
   hmcerror__20->SetBinError(2,243.3171);
   hmcerror__20->SetBinError(3,198.1905);
   hmcerror__20->SetBinError(4,135.8184);
   hmcerror__20->SetBinError(5,69.139);
   hmcerror__20->SetBinError(6,41.39122);
   hmcerror__20->SetBinError(7,28.87056);
   hmcerror__20->SetBinError(8,18.6386);
   hmcerror__20->SetBinError(9,19.11602);
   hmcerror__20->SetBinError(10,13.85125);
   hmcerror__20->SetBinError(11,8.511422);
   hmcerror__20->SetBinError(12,6.005734);
   hmcerror__20->SetBinError(13,4.534554);
   hmcerror__20->SetBinError(14,2.731154);
   hmcerror__20->SetBinError(15,4.074535);
   hmcerror__20->SetBinError(16,5.429789);
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
   
   Double_t _fx3025[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3025[15] = {
   402,
   555,
   464,
   266,
   166,
   85,
   39,
   21,
   16,
   9,
   6,
   4,
   1,
   1,
   0};
   Double_t _felx3025[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3025[15] = {
   20.04994,
   23.55844,
   21.54066,
   16.30951,
   12.8841,
   9.3428,
   6.3813,
   4.7354,
   4.1628,
   3.19354,
   2.67925,
   2.29683,
   1,
   1,
   0};
   Double_t _fehx3025[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3025[15] = {
   20.04994,
   23.55844,
   21.54066,
   16.30951,
   12.8841,
   9.1411,
   6.1757,
   4.5229,
   3.9454,
   2.9582,
   2.41858,
   1.98186,
   1.35971,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,495);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(636.4143);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2035.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  913.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  200.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   
   Double_t _fx3026[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3026[15] = {
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
   Double_t _felx3026[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3026[15] = {
   0.2937421,
   0.3921568,
   0.4072308,
   0.4267869,
   0.3802782,
   0.3701783,
   0.4013009,
   0.398292,
   0.6743432,
   0.7531581,
   0.8962377,
   0.9958449,
   1.545181,
   1.667111,
   4.564175};
   Double_t _fehx3026[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3026[15] = {
   0.2937421,
   0.3921568,
   0.4072308,
   0.4267869,
   0.3802782,
   0.3701783,
   0.4013009,
   0.398292,
   0.6743432,
   0.7531581,
   0.8962377,
   0.9958449,
   1.545181,
   1.667111,
   4.564175};
   grae = new TGraphAsymmErrors(15,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,495);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3027[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3027[15] = {
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
   Double_t _felx3027[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3027[15] = {
   0.2776434,
   0.3867804,
   0.3941286,
   0.3847058,
   0.3480821,
   0.3105668,
   0.2970873,
   0.2854739,
   0.2780311,
   0.3097271,
   0.3488987,
   0.3986702,
   0.4698348,
   0.7590648,
   0.7622422};
   Double_t _fehx3027[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3027[15] = {
   0.2776434,
   0.3867804,
   0.3941286,
   0.3847058,
   0.3480821,
   0.3105668,
   0.2970873,
   0.2854739,
   0.2780311,
   0.3097271,
   0.3488987,
   0.3986702,
   0.4698348,
   0.7590648,
   0.7622422};
   grae = new TGraphAsymmErrors(15,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,495);
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
   
   Double_t _fx3028[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3028[15] = {
   0.837166,
   0.8944994,
   0.9534015,
   0.8358611,
   0.9130329,
   0.7601892,
   0.5421002,
   0.4487531,
   0.5644215,
   0.4893725,
   0.6317894,
   0.6632628,
   0.3407569,
   0.6104055,
   0};
   Double_t _felx3028[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3028[15] = {
   0.04175404,
   0.03796939,
   0.04426056,
   0.05124993,
   0.0708651,
   0.08355642,
   0.0887001,
   0.1011917,
   0.1468484,
   0.1736478,
   0.2821203,
   0.3808505,
   0.3407569,
   0.6104055,
   0};
   Double_t _fehx3028[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3028[15] = {
   0.04175404,
   0.03796939,
   0.04426056,
   0.05124993,
   0.0708651,
   0.08175253,
   0.08584226,
   0.09665073,
   0.1391793,
   0.1608513,
   0.2546722,
   0.3286235,
   0.4633306,
   0.8299744,
   1.285732};
   grae = new TGraphAsymmErrors(15,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,495);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.584418);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
