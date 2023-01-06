#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 17:41:25 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
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
   pad1->Range(-384.6154,-11.18254,2820.513,1236.553);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__13->SetBinContent(4,4.146786);
   hmc__13->SetBinContent(5,35.90464);
   hmc__13->SetBinContent(6,138.4275);
   hmc__13->SetBinContent(7,285.684);
   hmc__13->SetBinContent(8,447.7831);
   hmc__13->SetBinContent(9,545.8354);
   hmc__13->SetBinContent(10,559.1268);
   hmc__13->SetBinContent(11,534.1909);
   hmc__13->SetBinContent(12,468.7467);
   hmc__13->SetBinContent(13,402.1576);
   hmc__13->SetBinContent(14,324.3208);
   hmc__13->SetBinContent(15,237.2957);
   hmc__13->SetBinContent(16,185.5081);
   hmc__13->SetBinContent(17,144.1384);
   hmc__13->SetBinContent(18,112.7097);
   hmc__13->SetBinContent(19,92.18486);
   hmc__13->SetBinContent(20,54.14692);
   hmc__13->SetBinContent(21,46.57257);
   hmc__13->SetBinContent(22,35.06958);
   hmc__13->SetBinContent(23,35.62861);
   hmc__13->SetBinContent(24,25.54828);
   hmc__13->SetBinContent(25,18.3134);
   hmc__13->SetBinContent(26,73.61277);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.3895343);
   hmc__13->SetBinError(3,0.3895343);
   hmc__13->SetBinError(4,1.737904);
   hmc__13->SetBinError(5,9.168452);
   hmc__13->SetBinError(6,34.83964);
   hmc__13->SetBinError(7,75.21611);
   hmc__13->SetBinError(8,111.2221);
   hmc__13->SetBinError(9,141.9722);
   hmc__13->SetBinError(10,145.9306);
   hmc__13->SetBinError(11,140.3155);
   hmc__13->SetBinError(12,118.2345);
   hmc__13->SetBinError(13,99.88594);
   hmc__13->SetBinError(14,79.18278);
   hmc__13->SetBinError(15,59.36268);
   hmc__13->SetBinError(16,48.35594);
   hmc__13->SetBinError(17,35.43409);
   hmc__13->SetBinError(18,27.04728);
   hmc__13->SetBinError(19,21.91366);
   hmc__13->SetBinError(20,13.15851);
   hmc__13->SetBinError(21,10.85604);
   hmc__13->SetBinError(22,6.908868);
   hmc__13->SetBinError(23,7.312158);
   hmc__13->SetBinError(24,6.139033);
   hmc__13->SetBinError(25,4.088844);
   hmc__13->SetBinError(26,13.32662);
   hmc__13->SetMinimum(-11.18254);
   hmc__13->SetMaximum(1174.166);
   hmc__13->SetEntries(4774.494);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,2500);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(587.0831);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,0.2304034);
   hbadmatch_stack_1->SetBinContent(7,0.7817594);
   hbadmatch_stack_1->SetBinContent(8,2.054339);
   hbadmatch_stack_1->SetBinContent(9,1.515398);
   hbadmatch_stack_1->SetBinContent(10,1.370317);
   hbadmatch_stack_1->SetBinContent(11,2.59248);
   hbadmatch_stack_1->SetBinContent(12,0.9801958);
   hbadmatch_stack_1->SetBinContent(13,1.270501);
   hbadmatch_stack_1->SetBinContent(14,1.039255);
   hbadmatch_stack_1->SetBinContent(15,1.772864);
   hbadmatch_stack_1->SetBinContent(16,1.669971);
   hbadmatch_stack_1->SetBinContent(17,1.383021);
   hbadmatch_stack_1->SetBinContent(18,0.7817899);
   hbadmatch_stack_1->SetBinContent(19,1.217248);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.2304034);
   hbadmatch_stack_1->SetBinError(7,0.4415163);
   hbadmatch_stack_1->SetBinError(8,0.8032129);
   hbadmatch_stack_1->SetBinError(9,0.588146);
   hbadmatch_stack_1->SetBinError(10,0.5746171);
   hbadmatch_stack_1->SetBinError(11,0.8466961);
   hbadmatch_stack_1->SetBinError(12,0.4383608);
   hbadmatch_stack_1->SetBinError(13,0.5895188);
   hbadmatch_stack_1->SetBinError(14,0.4933423);
   hbadmatch_stack_1->SetBinError(15,0.6606825);
   hbadmatch_stack_1->SetBinError(16,0.7126004);
   hbadmatch_stack_1->SetBinError(17,0.7290233);
   hbadmatch_stack_1->SetBinError(18,0.3908977);
   hbadmatch_stack_1->SetBinError(19,0.6211758);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,1.137595);
   hext_stack_2->SetBinContent(7,0.973192);
   hext_stack_2->SetBinContent(8,10.8093);
   hext_stack_2->SetBinContent(9,8.705693);
   hext_stack_2->SetBinContent(10,8.821025);
   hext_stack_2->SetBinContent(11,3.326175);
   hext_stack_2->SetBinContent(12,6.77367);
   hext_stack_2->SetBinContent(13,6.049854);
   hext_stack_2->SetBinContent(14,6.531474);
   hext_stack_2->SetBinContent(15,1.868591);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,2.428004);
   hext_stack_2->SetBinContent(18,7.079297);
   hext_stack_2->SetBinContent(19,3.704052);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,3.856865);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,3.215251);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.6602113);
   hext_stack_2->SetBinError(7,0.5618727);
   hext_stack_2->SetBinError(8,2.353471);
   hext_stack_2->SetBinError(9,2.141505);
   hext_stack_2->SetBinError(10,1.994103);
   hext_stack_2->SetBinError(11,1.054716);
   hext_stack_2->SetBinError(12,1.884738);
   hext_stack_2->SetBinError(13,1.75513);
   hext_stack_2->SetBinError(14,1.872723);
   hext_stack_2->SetBinError(15,0.840497);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,1.028599);
   hext_stack_2->SetBinError(18,1.981099);
   hext_stack_2->SetBinError(19,1.443106);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,1.506257);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,1.36277);
   hext_stack_2->SetEntries(171);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(8,0.4494525);
   hdirt_stack_3->SetBinContent(9,0.266188);
   hdirt_stack_3->SetBinContent(12,0.2665913);
   hdirt_stack_3->SetBinContent(13,1.167841e-06);
   hdirt_stack_3->SetBinContent(15,0.165896);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(8,0.3406198);
   hdirt_stack_3->SetBinError(9,0.266188);
   hdirt_stack_3->SetBinError(12,0.2665913);
   hdirt_stack_3->SetBinError(13,1.167841e-06);
   hdirt_stack_3->SetBinError(15,0.165896);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(5,1.060933);
   houtFV_stack_4->SetBinContent(6,1.608988);
   houtFV_stack_4->SetBinContent(7,3.393234);
   houtFV_stack_4->SetBinContent(8,3.28261);
   houtFV_stack_4->SetBinContent(9,3.751687);
   houtFV_stack_4->SetBinContent(10,2.652949);
   houtFV_stack_4->SetBinContent(11,3.266773);
   houtFV_stack_4->SetBinContent(12,2.98924);
   houtFV_stack_4->SetBinContent(13,2.451005);
   houtFV_stack_4->SetBinContent(14,0.8770706);
   houtFV_stack_4->SetBinContent(15,2.113973);
   houtFV_stack_4->SetBinContent(16,1.072568);
   houtFV_stack_4->SetBinContent(17,1.259775);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.4519673);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.1950248);
   houtFV_stack_4->SetBinError(5,0.4988691);
   houtFV_stack_4->SetBinError(6,0.6801404);
   houtFV_stack_4->SetBinError(7,0.94947);
   houtFV_stack_4->SetBinError(8,0.9186256);
   houtFV_stack_4->SetBinError(9,1.054762);
   houtFV_stack_4->SetBinError(10,0.8084911);
   houtFV_stack_4->SetBinError(11,0.9127538);
   houtFV_stack_4->SetBinError(12,0.8921628);
   houtFV_stack_4->SetBinError(13,0.8015678);
   houtFV_stack_4->SetBinError(14,0.5197486);
   houtFV_stack_4->SetBinError(15,1.007091);
   houtFV_stack_4->SetBinError(16,0.4479875);
   houtFV_stack_4->SetBinError(17,0.9099152);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.3222584);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(26,0.1950249);
   houtFV_stack_4->SetEntries(129);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04631894);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1197018);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03343153);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1036537);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.06020034);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.4360887);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.726567);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.633753);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.52615);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.501858);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.002857);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.024146);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.553911);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.779269);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.640278);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.366041);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.069078);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.990576);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6255076);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3029564);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2404714);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.04467028);
   hNCpi0inFVres_stack_7->SetBinError(4,0.05359954);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1701373);
   hNCpi0inFVres_stack_7->SetBinError(6,0.458201);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6285452);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6115788);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6100238);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8389736);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9926705);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8711834);
   hNCpi0inFVres_stack_7->SetBinError(13,1.023861);
   hNCpi0inFVres_stack_7->SetBinError(14,1.265316);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8661954);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9855771);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8242242);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2466297);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1365346);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1278029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(25,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.03255229);
   hNCpi0inFVres_stack_7->SetEntries(1196);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1254655);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.1202648);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.152004);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.350055);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.214828);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.394205);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.510405);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.261621);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.000098);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.831843);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.645638);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.398027);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.694437);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.791809);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.136901);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.361402);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.254508);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3206861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4314539);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.105083);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.08881186);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.07966941);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2899433);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.412716);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5407809);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5086139);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7965912);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.009324);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7706383);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.069711);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9740727);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8703309);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3792252);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5313728);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7184935);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4149961);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3571158);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2201295);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1797343);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3604653);
   hNCpi0inFVdis_stack_8->SetEntries(964);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(4,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(5,21.9227);
   hCCpi0inFV_stack_10->SetBinContent(6,101.623);
   hCCpi0inFV_stack_10->SetBinContent(7,221.5391);
   hCCpi0inFV_stack_10->SetBinContent(8,349.4451);
   hCCpi0inFV_stack_10->SetBinContent(9,433.0953);
   hCCpi0inFV_stack_10->SetBinContent(10,455.7078);
   hCCpi0inFV_stack_10->SetBinContent(11,436.0121);
   hCCpi0inFV_stack_10->SetBinContent(12,378.0975);
   hCCpi0inFV_stack_10->SetBinContent(13,313.0219);
   hCCpi0inFV_stack_10->SetBinContent(14,258.6045);
   hCCpi0inFV_stack_10->SetBinContent(15,184.7225);
   hCCpi0inFV_stack_10->SetBinContent(16,149.8864);
   hCCpi0inFV_stack_10->SetBinContent(17,111.9995);
   hCCpi0inFV_stack_10->SetBinContent(18,82.95979);
   hCCpi0inFV_stack_10->SetBinContent(19,72.43204);
   hCCpi0inFV_stack_10->SetBinContent(20,43.44534);
   hCCpi0inFV_stack_10->SetBinContent(21,34.98888);
   hCCpi0inFV_stack_10->SetBinContent(22,26.82044);
   hCCpi0inFV_stack_10->SetBinContent(23,26.23919);
   hCCpi0inFV_stack_10->SetBinContent(24,18.99291);
   hCCpi0inFV_stack_10->SetBinContent(25,15.28852);
   hCCpi0inFV_stack_10->SetBinContent(26,55.6854);
   hCCpi0inFV_stack_10->SetBinError(4,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(5,2.28737);
   hCCpi0inFV_stack_10->SetBinError(6,5.165002);
   hCCpi0inFV_stack_10->SetBinError(7,7.460321);
   hCCpi0inFV_stack_10->SetBinError(8,9.401167);
   hCCpi0inFV_stack_10->SetBinError(9,10.45934);
   hCCpi0inFV_stack_10->SetBinError(10,10.73495);
   hCCpi0inFV_stack_10->SetBinError(11,10.58123);
   hCCpi0inFV_stack_10->SetBinError(12,9.773724);
   hCCpi0inFV_stack_10->SetBinError(13,8.811175);
   hCCpi0inFV_stack_10->SetBinError(14,8.107645);
   hCCpi0inFV_stack_10->SetBinError(15,6.830495);
   hCCpi0inFV_stack_10->SetBinError(16,6.215643);
   hCCpi0inFV_stack_10->SetBinError(17,5.350191);
   hCCpi0inFV_stack_10->SetBinError(18,4.585508);
   hCCpi0inFV_stack_10->SetBinError(19,4.302397);
   hCCpi0inFV_stack_10->SetBinError(20,3.349781);
   hCCpi0inFV_stack_10->SetBinError(21,2.98087);
   hCCpi0inFV_stack_10->SetBinError(22,2.594762);
   hCCpi0inFV_stack_10->SetBinError(23,2.669723);
   hCCpi0inFV_stack_10->SetBinError(24,2.202291);
   hCCpi0inFV_stack_10->SetBinError(25,1.982287);
   hCCpi0inFV_stack_10->SetBinError(26,3.775311);
   hCCpi0inFV_stack_10->SetEntries(16159);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(6,1.65886);
   hNCinFV_stack_11->SetBinContent(7,2.392469);
   hNCinFV_stack_11->SetBinContent(8,4.394888);
   hNCinFV_stack_11->SetBinContent(9,4.05302);
   hNCinFV_stack_11->SetBinContent(10,2.934433);
   hNCinFV_stack_11->SetBinContent(11,2.592565);
   hNCinFV_stack_11->SetBinContent(12,3.021261);
   hNCinFV_stack_11->SetBinContent(13,3.037559);
   hNCinFV_stack_11->SetBinContent(14,1.467217);
   hNCinFV_stack_11->SetBinContent(15,1.072095);
   hNCinFV_stack_11->SetBinContent(16,0.7834804);
   hNCinFV_stack_11->SetBinContent(17,1.270501);
   hNCinFV_stack_11->SetBinContent(18,1.073786);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,1.176911);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(6,0.650338);
   hNCinFV_stack_11->SetBinError(7,0.7848912);
   hNCinFV_stack_11->SetBinError(8,1.075193);
   hNCinFV_stack_11->SetBinError(9,1.019635);
   hNCinFV_stack_11->SetBinError(10,0.8788963);
   hNCinFV_stack_11->SetBinError(11,0.809985);
   hNCinFV_stack_11->SetBinError(12,0.9415334);
   hNCinFV_stack_11->SetBinError(13,0.8333549);
   hNCinFV_stack_11->SetBinError(14,0.6214735);
   hNCinFV_stack_11->SetBinError(15,0.5551335);
   hNCinFV_stack_11->SetBinError(16,0.3917439);
   hNCinFV_stack_11->SetBinError(17,0.5895188);
   hNCinFV_stack_11->SetBinError(18,0.5557297);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.4804759);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
   hNCinFV_stack_11->SetEntries(136);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(4,2.642437);
   hnumuCCinFV_stack_12->SetBinContent(5,10.82301);
   hnumuCCinFV_stack_12->SetBinContent(6,28.29004);
   hnumuCCinFV_stack_12->SetBinContent(7,49.08353);
   hnumuCCinFV_stack_12->SetBinContent(8,68.0248);
   hnumuCCinFV_stack_12->SetBinContent(9,85.15858);
   hnumuCCinFV_stack_12->SetBinContent(10,74.81059);
   hnumuCCinFV_stack_12->SetBinContent(11,72.69327);
   hnumuCCinFV_stack_12->SetBinContent(12,64.38391);
   hnumuCCinFV_stack_12->SetBinContent(13,62.37712);
   hnumuCCinFV_stack_12->SetBinContent(14,42.44331);
   hnumuCCinFV_stack_12->SetBinContent(15,36.61898);
   hnumuCCinFV_stack_12->SetBinContent(16,26.40448);
   hnumuCCinFV_stack_12->SetBinContent(17,21.28156);
   hnumuCCinFV_stack_12->SetBinContent(18,17.31898);
   hnumuCCinFV_stack_12->SetBinContent(19,11.46083);
   hnumuCCinFV_stack_12->SetBinContent(20,7.113242);
   hnumuCCinFV_stack_12->SetBinContent(21,8.782063);
   hnumuCCinFV_stack_12->SetBinContent(22,6.863458);
   hnumuCCinFV_stack_12->SetBinContent(23,4.830346);
   hnumuCCinFV_stack_12->SetBinContent(24,5.033216);
   hnumuCCinFV_stack_12->SetBinContent(25,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(26,11.70341);
   hnumuCCinFV_stack_12->SetBinError(4,0.7851269);
   hnumuCCinFV_stack_12->SetBinError(5,1.94496);
   hnumuCCinFV_stack_12->SetBinError(6,3.731524);
   hnumuCCinFV_stack_12->SetBinError(7,3.740613);
   hnumuCCinFV_stack_12->SetBinError(8,4.62808);
   hnumuCCinFV_stack_12->SetBinError(9,4.870078);
   hnumuCCinFV_stack_12->SetBinError(10,4.534201);
   hnumuCCinFV_stack_12->SetBinError(11,5.970954);
   hnumuCCinFV_stack_12->SetBinError(12,4.178061);
   hnumuCCinFV_stack_12->SetBinError(13,4.569208);
   hnumuCCinFV_stack_12->SetBinError(14,3.288063);
   hnumuCCinFV_stack_12->SetBinError(15,3.122297);
   hnumuCCinFV_stack_12->SetBinError(16,3.083593);
   hnumuCCinFV_stack_12->SetBinError(17,3.254052);
   hnumuCCinFV_stack_12->SetBinError(18,2.114172);
   hnumuCCinFV_stack_12->SetBinError(19,1.711673);
   hnumuCCinFV_stack_12->SetBinError(20,1.292719);
   hnumuCCinFV_stack_12->SetBinError(21,1.476195);
   hnumuCCinFV_stack_12->SetBinError(22,1.323684);
   hnumuCCinFV_stack_12->SetBinError(23,1.1786);
   hnumuCCinFV_stack_12->SetBinError(24,1.109872);
   hnumuCCinFV_stack_12->SetBinError(25,0.760276);
   hnumuCCinFV_stack_12->SetBinError(26,1.673423);
   hnumuCCinFV_stack_12->SetEntries(2974);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.4216878);
   hnueCCinFV_stack_13->SetBinContent(12,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(13,1.338483);
   hnueCCinFV_stack_13->SetBinContent(14,1.072095);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(19,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(20,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.9303237);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.3921167);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.4216878);
   hnueCCinFV_stack_13->SetBinError(12,0.4810838);
   hnueCCinFV_stack_13->SetBinError(13,0.6159358);
   hnueCCinFV_stack_13->SetBinError(14,0.5551335);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4394482);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.5191111);
   hnueCCinFV_stack_13->SetBinError(20,0.337793);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.4814682);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__14->SetBinContent(4,4.146786);
   hmcerror__14->SetBinContent(5,35.90464);
   hmcerror__14->SetBinContent(6,138.4275);
   hmcerror__14->SetBinContent(7,285.684);
   hmcerror__14->SetBinContent(8,447.7831);
   hmcerror__14->SetBinContent(9,545.8354);
   hmcerror__14->SetBinContent(10,559.1268);
   hmcerror__14->SetBinContent(11,534.1909);
   hmcerror__14->SetBinContent(12,468.7467);
   hmcerror__14->SetBinContent(13,402.1576);
   hmcerror__14->SetBinContent(14,324.3208);
   hmcerror__14->SetBinContent(15,237.2957);
   hmcerror__14->SetBinContent(16,185.5081);
   hmcerror__14->SetBinContent(17,144.1384);
   hmcerror__14->SetBinContent(18,112.7097);
   hmcerror__14->SetBinContent(19,92.18486);
   hmcerror__14->SetBinContent(20,54.14692);
   hmcerror__14->SetBinContent(21,46.57257);
   hmcerror__14->SetBinContent(22,35.06958);
   hmcerror__14->SetBinContent(23,35.62861);
   hmcerror__14->SetBinContent(24,25.54828);
   hmcerror__14->SetBinContent(25,18.3134);
   hmcerror__14->SetBinContent(26,73.61277);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.3895343);
   hmcerror__14->SetBinError(3,0.3895343);
   hmcerror__14->SetBinError(4,1.737904);
   hmcerror__14->SetBinError(5,9.168452);
   hmcerror__14->SetBinError(6,34.83964);
   hmcerror__14->SetBinError(7,75.21611);
   hmcerror__14->SetBinError(8,111.2221);
   hmcerror__14->SetBinError(9,141.9722);
   hmcerror__14->SetBinError(10,145.9306);
   hmcerror__14->SetBinError(11,140.3155);
   hmcerror__14->SetBinError(12,118.2345);
   hmcerror__14->SetBinError(13,99.88594);
   hmcerror__14->SetBinError(14,79.18278);
   hmcerror__14->SetBinError(15,59.36268);
   hmcerror__14->SetBinError(16,48.35594);
   hmcerror__14->SetBinError(17,35.43409);
   hmcerror__14->SetBinError(18,27.04728);
   hmcerror__14->SetBinError(19,21.91366);
   hmcerror__14->SetBinError(20,13.15851);
   hmcerror__14->SetBinError(21,10.85604);
   hmcerror__14->SetBinError(22,6.908868);
   hmcerror__14->SetBinError(23,7.312158);
   hmcerror__14->SetBinError(24,6.139033);
   hmcerror__14->SetBinError(25,4.088844);
   hmcerror__14->SetBinError(26,13.32662);
   hmcerror__14->SetEntries(4774.494);

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
   
   Double_t _fx3017[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3017[25] = {
   0,
   0,
   0,
   3,
   37,
   147,
   282,
   435,
   539,
   534,
   510,
   409,
   318,
   242,
   182,
   136,
   101,
   75,
   53,
   43,
   29,
   27,
   14,
   9,
   12};
   Double_t _felx3017[25] = {
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
   50,
   50,
   50};
   Double_t _fely3017[25] = {
   0,
   0,
   0,
   2.143368,
   6.2203,
   12.12436,
   16.79286,
   20.85665,
   23.21637,
   23.10844,
   22.58318,
   20.22375,
   17.83255,
   15.55635,
   13.49074,
   11.6619,
   10.04988,
   8.7852,
   7.4105,
   6.6917,
   5.5285,
   5.3414,
   3.9102,
   3.19354,
   3.64022};
   Double_t _fehx3017[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3017[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.72422,
   6.0141,
   12.12436,
   16.79286,
   20.85665,
   23.21637,
   23.10844,
   22.58318,
   20.22375,
   17.83255,
   15.55635,
   13.49074,
   11.6619,
   10.04988,
   8.5831,
   7.2068,
   6.4868,
   5.3201,
   5.1322,
   3.6898,
   2.9582,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,2750);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(618.438);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4137.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 74.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 31.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  63.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  54.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3738.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 32.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 708.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.4","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   
   Double_t _fx3018[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
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
   50,
   50,
   50};
   Double_t _fely3018[25] = {
   0,
   0,
   0,
   0.4190965,
   0.2553556,
   0.2516816,
   0.2632843,
   0.2483839,
   0.2601007,
   0.2609974,
   0.2626693,
   0.2522353,
   0.2483751,
   0.2441496,
   0.2501633,
   0.2606676,
   0.2458338,
   0.239973,
   0.2377143,
   0.243015,
   0.2330995,
   0.1970046,
   0.2052328,
   0.2402914,
   0.2232707};
   Double_t _fehx3018[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3018[25] = {
   0,
   0,
   0,
   0.4190965,
   0.2553556,
   0.2516816,
   0.2632843,
   0.2483839,
   0.2601007,
   0.2609974,
   0.2626693,
   0.2522353,
   0.2483751,
   0.2441496,
   0.2501633,
   0.2606676,
   0.2458338,
   0.239973,
   0.2377143,
   0.243015,
   0.2330995,
   0.1970046,
   0.2052328,
   0.2402914,
   0.2232707};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,2750);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3019[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
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
   50,
   50,
   50};
   Double_t _fely3019[25] = {
   0,
   0,
   0,
   0.4190965,
   0.2553556,
   0.2516816,
   0.2632843,
   0.2483839,
   0.2601007,
   0.2609974,
   0.2626693,
   0.2522353,
   0.2483751,
   0.2441496,
   0.2501633,
   0.2606676,
   0.2458338,
   0.239973,
   0.2377143,
   0.243015,
   0.2330995,
   0.1970046,
   0.2052328,
   0.2402914,
   0.2232707};
   Double_t _fehx3019[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3019[25] = {
   0,
   0,
   0,
   0.4190965,
   0.2553556,
   0.2516816,
   0.2632843,
   0.2483839,
   0.2601007,
   0.2609974,
   0.2626693,
   0.2522353,
   0.2483751,
   0.2441496,
   0.2501633,
   0.2606676,
   0.2458338,
   0.239973,
   0.2377143,
   0.243015,
   0.2330995,
   0.1970046,
   0.2052328,
   0.2402914,
   0.2232707};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,2750);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3020[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3020[25] = {
   10,
   10,
   10,
   0.7234518,
   1.030507,
   1.061928,
   0.9871046,
   0.9714526,
   0.9874772,
   0.9550607,
   0.954715,
   0.8725395,
   0.7907348,
   0.7461748,
   0.7669755,
   0.7331217,
   0.7007155,
   0.6654266,
   0.5749317,
   0.7941357,
   0.6226842,
   0.769898,
   0.3929426,
   0.3522742,
   0.655258};
   Double_t _felx3020[25] = {
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
   50,
   50,
   50};
   Double_t _fely3020[25] = {
   0,
   0,
   0,
   0.5168745,
   0.173245,
   0.08758634,
   0.05878122,
   0.04657759,
   0.04253365,
   0.04132952,
   0.04227549,
   0.0431443,
   0.04434221,
   0.04796594,
   0.05685201,
   0.06286467,
   0.0697238,
   0.07794541,
   0.08038739,
   0.1235841,
   0.1187072,
   0.1523086,
   0.1097489,
   0.1250002,
   0.1987736};
   Double_t _fehx3020[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3020[25] = {
   0,
   0,
   0,
   0.4157967,
   0.167502,
   0.08758634,
   0.05878122,
   0.04657759,
   0.04253365,
   0.04132952,
   0.04227549,
   0.0431443,
   0.04434221,
   0.04796594,
   0.05685201,
   0.06286467,
   0.0697238,
   0.0761523,
   0.0781777,
   0.1198,
   0.1142325,
   0.1463434,
   0.1035628,
   0.1157886,
   0.1865028};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,2750);
   Graph_Graph3020->SetMinimum(0.1859196);
   Graph_Graph3020->SetMaximum(10.97934);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   TLine *line = new TLine(0,1,2500,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
