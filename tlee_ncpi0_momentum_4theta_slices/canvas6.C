#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Tue Dec  6 22:18:03 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-3.554717,1353.846,393.0769);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__16->SetBinContent(1,66.90185);
   hmc__16->SetBinContent(2,177.7359);
   hmc__16->SetBinContent(3,153.747);
   hmc__16->SetBinContent(4,91.85165);
   hmc__16->SetBinContent(5,54.4343);
   hmc__16->SetBinContent(6,27.81601);
   hmc__16->SetBinContent(7,14.20161);
   hmc__16->SetBinContent(8,9.809031);
   hmc__16->SetBinContent(9,3.797683);
   hmc__16->SetBinContent(10,3.671729);
   hmc__16->SetBinContent(11,3.768289);
   hmc__16->SetBinContent(12,3.784277);
   hmc__16->SetBinContent(13,32.5121);
   hmc__16->SetBinError(1,25.3642);
   hmc__16->SetBinError(2,85.02487);
   hmc__16->SetBinError(3,74.95055);
   hmc__16->SetBinError(4,44.12129);
   hmc__16->SetBinError(5,25.23844);
   hmc__16->SetBinError(6,10.99503);
   hmc__16->SetBinError(7,8.057953);
   hmc__16->SetBinError(8,5.850867);
   hmc__16->SetBinError(9,4.228853);
   hmc__16->SetBinError(10,3.913377);
   hmc__16->SetBinError(11,4.044261);
   hmc__16->SetBinError(12,4.654245);
   hmc__16->SetBinError(13,14.98115);
   hmc__16->SetMinimum(-3.554717);
   hmc__16->SetMaximum(373.2453);
   hmc__16->SetEntries(778.8719);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",12,0,1200);
   hs6_stack_6->SetMinimum(-4.803189e-11);
   hs6_stack_6->SetMaximum(186.6227);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.313783);
   hbadmatch_stack_1->SetBinContent(2,7.241661);
   hbadmatch_stack_1->SetBinContent(3,3.508975);
   hbadmatch_stack_1->SetBinContent(4,2.693383);
   hbadmatch_stack_1->SetBinContent(5,0.733005);
   hbadmatch_stack_1->SetBinContent(6,0.911739);
   hbadmatch_stack_1->SetBinContent(7,0.247971);
   hbadmatch_stack_1->SetBinContent(8,0.7503508);
   hbadmatch_stack_1->SetBinContent(9,3.707798e-06);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.2069172);
   hbadmatch_stack_1->SetBinContent(13,0.796341);
   hbadmatch_stack_1->SetBinError(1,0.7742291);
   hbadmatch_stack_1->SetBinError(2,2.56856);
   hbadmatch_stack_1->SetBinError(3,0.9777022);
   hbadmatch_stack_1->SetBinError(4,0.8654012);
   hbadmatch_stack_1->SetBinError(5,0.399744);
   hbadmatch_stack_1->SetBinError(6,0.5338352);
   hbadmatch_stack_1->SetBinError(7,0.247971);
   hbadmatch_stack_1->SetBinError(8,0.5328817);
   hbadmatch_stack_1->SetBinError(9,3.707798e-06);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.1969797);
   hbadmatch_stack_1->SetBinError(13,0.4896229);
   hbadmatch_stack_1->SetEntries(70);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,8.056898);
   hext_stack_2->SetBinContent(2,15.13625);
   hext_stack_2->SetBinContent(3,11.24903);
   hext_stack_2->SetBinContent(4,7.403694);
   hext_stack_2->SetBinContent(5,2.510206);
   hext_stack_2->SetBinContent(6,4.994461);
   hext_stack_2->SetBinContent(7,0.6487947);
   hext_stack_2->SetBinContent(8,1.37261);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(13,3.814975);
   hext_stack_2->SetBinError(1,2.091787);
   hext_stack_2->SetBinError(2,2.64006);
   hext_stack_2->SetBinError(3,2.243761);
   hext_stack_2->SetBinError(4,2.007482);
   hext_stack_2->SetBinError(5,1.057404);
   hext_stack_2->SetBinError(6,1.644594);
   hext_stack_2->SetBinError(7,0.4587671);
   hext_stack_2->SetBinError(8,0.8259691);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(13,1.156649);
   hext_stack_2->SetEntries(130);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.3381872);
   hdirt_stack_3->SetBinContent(2,1.912125);
   hdirt_stack_3->SetBinContent(3,1.153505);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinError(1,0.3381872);
   hdirt_stack_3->SetBinError(2,1.099163);
   hdirt_stack_3->SetBinError(3,0.5322407);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetEntries(14);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.023067);
   houtFV_stack_4->SetBinContent(2,5.539904);
   houtFV_stack_4->SetBinContent(3,6.602964);
   houtFV_stack_4->SetBinContent(4,3.413808);
   houtFV_stack_4->SetBinContent(5,2.321488);
   houtFV_stack_4->SetBinContent(6,1.047654);
   houtFV_stack_4->SetBinContent(7,0.8723536);
   houtFV_stack_4->SetBinContent(8,0.23966);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(13,1.354699);
   houtFV_stack_4->SetBinError(1,0.9748408);
   houtFV_stack_4->SetBinError(2,1.22567);
   houtFV_stack_4->SetBinError(3,1.242785);
   houtFV_stack_4->SetBinError(4,0.9228061);
   houtFV_stack_4->SetBinError(5,0.8049349);
   houtFV_stack_4->SetBinError(6,0.5010925);
   houtFV_stack_4->SetBinError(7,0.3963567);
   houtFV_stack_4->SetBinError(8,0.2000675);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(13,0.5123142);
   houtFV_stack_4->SetEntries(121);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1544502);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.07828959);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetEntries(5);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3447496);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7315123);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4323699);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2370733);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.04944948);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09327726);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1555858);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2294004);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1678885);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1275366);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02864494);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07723082);
   hNCpi0inFVqe_stack_6->SetEntries(56);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.0121);
   hNCpi0inFVres_stack_7->SetBinContent(2,73.05762);
   hNCpi0inFVres_stack_7->SetBinContent(3,72.67958);
   hNCpi0inFVres_stack_7->SetBinContent(4,42.96079);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.36567);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.16796);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.788464);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.623981);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.066652);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6826614);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.6599225);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.8816129);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.663492);
   hNCpi0inFVres_stack_7->SetBinError(1,1.16993);
   hNCpi0inFVres_stack_7->SetBinError(2,2.455373);
   hNCpi0inFVres_stack_7->SetBinError(3,2.502174);
   hNCpi0inFVres_stack_7->SetBinError(4,1.905846);
   hNCpi0inFVres_stack_7->SetBinError(5,1.4633);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9439177);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5397808);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6359593);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2221013);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1973741);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1499269);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3514074);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8494197);
   hNCpi0inFVres_stack_7->SetEntries(6985);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.408135);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.06875);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.621472);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.005641);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.817947);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.504029);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6977494);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5031137);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.319986);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1528447);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.05450993);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.771249);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7755981);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.037957);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8405297);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8936569);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9196511);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3148098);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3479188);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2029914);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1789373);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.0973866);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.04056811);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6061207);
   hNCpi0inFVdis_stack_8->SetEntries(1117);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1465236);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2119884);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1290876);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1369718);
   hNCpi0inFVmec_stack_9->SetEntries(8);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,12.69226);
   hCCpi0inFV_stack_10->SetBinContent(2,28.73943);
   hCCpi0inFV_stack_10->SetBinContent(3,22.06803);
   hCCpi0inFV_stack_10->SetBinContent(4,13.89665);
   hCCpi0inFV_stack_10->SetBinContent(5,6.888792);
   hCCpi0inFV_stack_10->SetBinContent(6,4.05302);
   hCCpi0inFV_stack_10->SetBinContent(7,2.406415);
   hCCpi0inFV_stack_10->SetBinContent(8,0.9835768);
   hCCpi0inFV_stack_10->SetBinContent(9,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5790933);
   hCCpi0inFV_stack_10->SetBinContent(12,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(13,1.607298);
   hCCpi0inFV_stack_10->SetBinError(1,1.825743);
   hCCpi0inFV_stack_10->SetBinError(2,2.721346);
   hCCpi0inFV_stack_10->SetBinError(3,2.428347);
   hCCpi0inFV_stack_10->SetBinError(4,1.820788);
   hCCpi0inFV_stack_10->SetBinError(5,1.301327);
   hCCpi0inFV_stack_10->SetBinError(6,1.019635);
   hCCpi0inFV_stack_10->SetBinError(7,0.8381505);
   hCCpi0inFV_stack_10->SetBinError(8,0.4398689);
   hCCpi0inFV_stack_10->SetBinError(9,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(11,0.415694);
   hCCpi0inFV_stack_10->SetBinError(12,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(13,0.6796534);
   hCCpi0inFV_stack_10->SetEntries(399);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,7.612704);
   hNCinFV_stack_11->SetBinContent(2,14.83904);
   hNCinFV_stack_11->SetBinContent(3,9.470623);
   hNCinFV_stack_11->SetBinContent(4,5.07576);
   hNCinFV_stack_11->SetBinContent(5,2.963716);
   hNCinFV_stack_11->SetBinContent(6,1.736392);
   hNCinFV_stack_11->SetBinContent(7,1.885109);
   hNCinFV_stack_11->SetBinContent(8,1.003904);
   hNCinFV_stack_11->SetBinContent(9,0.7319179);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.4089289);
   hNCinFV_stack_11->SetBinContent(13,2.678393);
   hNCinFV_stack_11->SetBinError(1,1.38241);
   hNCinFV_stack_11->SetBinError(2,2.179121);
   hNCinFV_stack_11->SetBinError(3,1.589372);
   hNCinFV_stack_11->SetBinError(4,1.354317);
   hNCinFV_stack_11->SetBinError(5,0.9555153);
   hNCinFV_stack_11->SetBinError(6,0.7848206);
   hNCinFV_stack_11->SetBinError(7,0.6700966);
   hNCinFV_stack_11->SetBinError(8,0.5347847);
   hNCinFV_stack_11->SetBinError(9,0.438694);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.2894644);
   hNCinFV_stack_11->SetBinError(13,0.7607299);
   hNCinFV_stack_11->SetEntries(211);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,8.458815);
   hnumuCCinFV_stack_12->SetBinContent(2,17.25758);
   hnumuCCinFV_stack_12->SetBinContent(3,16.14372);
   hnumuCCinFV_stack_12->SetBinContent(4,8.659489);
   hnumuCCinFV_stack_12->SetBinContent(5,11.10766);
   hnumuCCinFV_stack_12->SetBinContent(6,3.400756);
   hnumuCCinFV_stack_12->SetBinContent(7,3.419089);
   hnumuCCinFV_stack_12->SetBinContent(8,2.331834);
   hnumuCCinFV_stack_12->SetBinContent(9,1.092358);
   hnumuCCinFV_stack_12->SetBinContent(10,1.03144);
   hnumuCCinFV_stack_12->SetBinContent(11,0.9504368);
   hnumuCCinFV_stack_12->SetBinContent(12,2.054472);
   hnumuCCinFV_stack_12->SetBinContent(13,12.23076);
   hnumuCCinFV_stack_12->SetBinError(1,1.687583);
   hnumuCCinFV_stack_12->SetBinError(2,2.374234);
   hnumuCCinFV_stack_12->SetBinError(3,2.033501);
   hnumuCCinFV_stack_12->SetBinError(4,1.571634);
   hnumuCCinFV_stack_12->SetBinError(5,2.151129);
   hnumuCCinFV_stack_12->SetBinError(6,1.129992);
   hnumuCCinFV_stack_12->SetBinError(7,1.536432);
   hnumuCCinFV_stack_12->SetBinError(8,0.8572956);
   hnumuCCinFV_stack_12->SetBinError(9,0.5622889);
   hnumuCCinFV_stack_12->SetBinError(10,0.4632565);
   hnumuCCinFV_stack_12->SetBinError(11,0.5660057);
   hnumuCCinFV_stack_12->SetBinError(12,0.8610686);
   hnumuCCinFV_stack_12->SetBinError(13,2.293977);
   hnumuCCinFV_stack_12->SetEntries(348);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.8040096);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.501609);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.4974255);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.3546915);
   hnueCCinFV_stack_13->SetEntries(7);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__17->SetBinContent(1,66.90185);
   hmcerror__17->SetBinContent(2,177.7359);
   hmcerror__17->SetBinContent(3,153.747);
   hmcerror__17->SetBinContent(4,91.85165);
   hmcerror__17->SetBinContent(5,54.4343);
   hmcerror__17->SetBinContent(6,27.81601);
   hmcerror__17->SetBinContent(7,14.20161);
   hmcerror__17->SetBinContent(8,9.809031);
   hmcerror__17->SetBinContent(9,3.797683);
   hmcerror__17->SetBinContent(10,3.671729);
   hmcerror__17->SetBinContent(11,3.768289);
   hmcerror__17->SetBinContent(12,3.784277);
   hmcerror__17->SetBinContent(13,32.5121);
   hmcerror__17->SetBinError(1,25.3642);
   hmcerror__17->SetBinError(2,85.02487);
   hmcerror__17->SetBinError(3,74.95055);
   hmcerror__17->SetBinError(4,44.12129);
   hmcerror__17->SetBinError(5,25.23844);
   hmcerror__17->SetBinError(6,10.99503);
   hmcerror__17->SetBinError(7,8.057953);
   hmcerror__17->SetBinError(8,5.850867);
   hmcerror__17->SetBinError(9,4.228853);
   hmcerror__17->SetBinError(10,3.913377);
   hmcerror__17->SetBinError(11,4.044261);
   hmcerror__17->SetBinError(12,4.654245);
   hmcerror__17->SetBinError(13,14.98115);
   hmcerror__17->SetEntries(778.8719);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[12] = {
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
   Double_t _fy3021[12] = {
   51,
   157,
   147,
   72,
   37,
   16,
   9,
   10,
   5,
   2,
   3,
   2};
   Double_t _felx3021[12] = {
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
   Double_t _fely3021[12] = {
   7.2725,
   12.52996,
   12.12436,
   8.6108,
   6.2203,
   4.1628,
   3.19354,
   3.34883,
   2.48995,
   2,
   2.143368,
   2};
   Double_t _fehx3021[12] = {
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
   Double_t _fehy3021[12] = {
   7.0686,
   12.52996,
   12.12436,
   8.4085,
   6.0141,
   3.9454,
   2.9582,
   3.1179,
   2.21064,
   1.51917,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1320);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(186.483);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.35","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 511.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 18.9","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.1","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 24.5","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  247.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.2","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.5","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 46.3","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 75.9","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.5","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[12] = {
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
   Double_t _fy3022[12] = {
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
   Double_t _felx3022[12] = {
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
   Double_t _fely3022[12] = {
   0.3791256,
   0.4783777,
   0.4874928,
   0.4803538,
   0.4636495,
   0.3952768,
   0.5673971,
   0.5964776,
   1.113535,
   1.065813,
   1.073235,
   1.22989};
   Double_t _fehx3022[12] = {
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
   Double_t _fehy3022[12] = {
   0.3791256,
   0.4783777,
   0.4874928,
   0.4803538,
   0.4636495,
   0.3952768,
   0.5673971,
   0.5964776,
   1.113535,
   1.065813,
   1.073235,
   1.22989};
   grae = new TGraphAsymmErrors(12,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1320);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[12] = {
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
   Double_t _fy3023[12] = {
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
   Double_t _felx3023[12] = {
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
   Double_t _fely3023[12] = {
   0.3090321,
   0.4569192,
   0.4540355,
   0.4503036,
   0.4017055,
   0.3233785,
   0.3132662,
   0.2785415,
   0.5230468,
   0.4330215,
   0.3829176,
   0.3888408};
   Double_t _fehx3023[12] = {
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
   Double_t _fehy3023[12] = {
   0.3090321,
   0.4569192,
   0.4540355,
   0.4503036,
   0.4017055,
   0.3233785,
   0.3132662,
   0.2785415,
   0.5230468,
   0.4330215,
   0.3829176,
   0.3888408};
   grae = new TGraphAsymmErrors(12,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1320);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[12] = {
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
   Double_t _fy3024[12] = {
   0.7623108,
   0.8833332,
   0.9561163,
   0.7838727,
   0.6797184,
   0.5752082,
   0.6337309,
   1.019469,
   1.316592,
   0.5447026,
   0.7961173,
   0.5285025};
   Double_t _felx3024[12] = {
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
   Double_t _fely3024[12] = {
   0.108704,
   0.07049767,
   0.07885915,
   0.09374682,
   0.1142717,
   0.1496548,
   0.2248717,
   0.3414027,
   0.6556497,
   0.5447026,
   0.5687908,
   0.5285025};
   Double_t _fehx3024[12] = {
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
   Double_t _fehy3024[12] = {
   0.1056563,
   0.07049767,
   0.07885915,
   0.09154436,
   0.1104836,
   0.1418392,
   0.2083003,
   0.3178601,
   0.5821023,
   0.4137479,
   0.4575605,
   0.4014426};
   grae = new TGraphAsymmErrors(12,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1320);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.088564);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_theta1_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
