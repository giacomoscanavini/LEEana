#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas12()
{
//=========Macro generated from canvas: canvas12/channel12
//=========  (Tue Dec  6 22:18:05 2022) by ROOT version 6.26/00
   TCanvas *canvas12 = new TCanvas("canvas12", "channel12",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas12->SetHighLightColor(2);
   canvas12->Range(0,0,1,1);
   canvas12->SetFillColor(0);
   canvas12->SetBorderMode(0);
   canvas12->SetBorderSize(2);
   canvas12->SetLeftMargin(0.12);
   canvas12->SetRightMargin(0.12);
   canvas12->SetTopMargin(0.05);
   canvas12->SetBottomMargin(0.12);
   canvas12->SetFrameLineWidth(2);
   canvas12->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-1.147407,1353.846,126.879);
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
   
   TH1F *hmc__34 = new TH1F("hmc__34","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__34->SetBinContent(1,19.60288);
   hmc__34->SetBinContent(2,51.43348);
   hmc__34->SetBinContent(3,57.37033);
   hmc__34->SetBinContent(4,45.49445);
   hmc__34->SetBinContent(5,35.99708);
   hmc__34->SetBinContent(6,30.48378);
   hmc__34->SetBinContent(7,11.51867);
   hmc__34->SetBinContent(8,12.00312);
   hmc__34->SetBinContent(9,8.012772);
   hmc__34->SetBinContent(10,3.428174);
   hmc__34->SetBinContent(11,3.578095);
   hmc__34->SetBinContent(12,2.903248);
   hmc__34->SetBinContent(13,31.33367);
   hmc__34->SetBinError(1,15.40335);
   hmc__34->SetBinError(2,20.8696);
   hmc__34->SetBinError(3,20.19249);
   hmc__34->SetBinError(4,24.20879);
   hmc__34->SetBinError(5,21.20855);
   hmc__34->SetBinError(6,14.34428);
   hmc__34->SetBinError(7,8.11547);
   hmc__34->SetBinError(8,9.306942);
   hmc__34->SetBinError(9,13.69774);
   hmc__34->SetBinError(10,4.7387);
   hmc__34->SetBinError(11,4.446033);
   hmc__34->SetBinError(12,5.008921);
   hmc__34->SetBinError(13,13.59222);
   hmc__34->SetMinimum(-1.147407);
   hmc__34->SetMaximum(120.4777);
   hmc__34->SetEntries(311.8897);
   hmc__34->SetLineWidth(5);
   hmc__34->GetXaxis()->SetLabelFont(42);
   hmc__34->GetXaxis()->SetTitleOffset(1);
   hmc__34->GetXaxis()->SetTitleFont(42);
   hmc__34->GetYaxis()->SetTitle("Event counts");
   hmc__34->GetYaxis()->SetLabelFont(132);
   hmc__34->GetYaxis()->SetLabelSize(0.04);
   hmc__34->GetYaxis()->SetTitleSize(0.05);
   hmc__34->GetYaxis()->SetTitleOffset(0.73);
   hmc__34->GetYaxis()->SetTitleFont(132);
   hmc__34->GetZaxis()->SetLabelFont(42);
   hmc__34->GetZaxis()->SetTitleOffset(1);
   hmc__34->GetZaxis()->SetTitleFont(42);
   hmc__34->Draw("hist");
   
   THStack *hs12 = new THStack();
   hs12->SetName("hs12");
   hs12->SetTitle("");
   
   TH1F *hs12_stack_12 = new TH1F("hs12_stack_12","",12,0,1200);
   hs12_stack_12->SetMinimum(-4.830136e-08);
   hs12_stack_12->SetMaximum(60.23885);
   hs12_stack_12->SetDirectory(0);
   hs12_stack_12->SetStats(0);
   hs12_stack_12->SetLineWidth(2);
   hs12_stack_12->SetMarkerStyle(20);
   hs12_stack_12->GetXaxis()->SetNdivisions(509);
   hs12_stack_12->GetXaxis()->SetLabelFont(132);
   hs12_stack_12->GetXaxis()->SetLabelOffset(0.01);
   hs12_stack_12->GetXaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetXaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetXaxis()->SetTitleOffset(0.95);
   hs12_stack_12->GetXaxis()->SetTitleFont(132);
   hs12_stack_12->GetYaxis()->SetNdivisions(509);
   hs12_stack_12->GetYaxis()->SetLabelFont(132);
   hs12_stack_12->GetYaxis()->SetLabelOffset(0.01);
   hs12_stack_12->GetYaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetYaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetYaxis()->SetTitleOffset(0.95);
   hs12_stack_12->GetYaxis()->SetTitleFont(132);
   hs12_stack_12->GetZaxis()->SetLabelFont(132);
   hs12_stack_12->GetZaxis()->SetLabelSize(0.08);
   hs12_stack_12->GetZaxis()->SetTitleSize(0.08);
   hs12_stack_12->GetZaxis()->SetTitleOffset(1.2);
   hs12_stack_12->GetZaxis()->SetTitleFont(132);
   hs12->SetHistogram(hs12_stack_12);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.8840658);
   hbadmatch_stack_1->SetBinContent(2,1.527287);
   hbadmatch_stack_1->SetBinContent(3,1.607664);
   hbadmatch_stack_1->SetBinContent(4,1.008587);
   hbadmatch_stack_1->SetBinContent(5,1.946627);
   hbadmatch_stack_1->SetBinContent(6,0.9324096);
   hbadmatch_stack_1->SetBinContent(7,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,1.335386);
   hbadmatch_stack_1->SetBinError(1,0.5224362);
   hbadmatch_stack_1->SetBinError(2,0.6791532);
   hbadmatch_stack_1->SetBinError(3,0.6609543);
   hbadmatch_stack_1->SetBinError(4,0.5361297);
   hbadmatch_stack_1->SetBinError(5,1.190398);
   hbadmatch_stack_1->SetBinError(6,0.4485452);
   hbadmatch_stack_1->SetBinError(7,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.628406);
   hbadmatch_stack_1->SetEntries(35);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1577;
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
   hs12->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,1.219797);
   hext_stack_2->SetBinContent(2,9.87201);
   hext_stack_2->SetBinContent(3,9.787037);
   hext_stack_2->SetBinContent(4,4.93821);
   hext_stack_2->SetBinContent(5,6.374251);
   hext_stack_2->SetBinContent(6,5.993603);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,0.8131978);
   hext_stack_2->SetBinContent(9,0.8131978);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(13,4.221574);
   hext_stack_2->SetBinError(1,0.7042499);
   hext_stack_2->SetBinError(2,2.053562);
   hext_stack_2->SetBinError(3,2.119752);
   hext_stack_2->SetBinError(4,1.475167);
   hext_stack_2->SetBinError(5,1.784857);
   hext_stack_2->SetBinError(6,1.59747);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.5750177);
   hext_stack_2->SetBinError(9,0.5750177);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(13,1.226034);
   hext_stack_2->SetEntries(111);

   ci = 1578;
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
   hs12->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,0.8448025);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(6,0.8130994);
   hdirt_stack_3->SetBinContent(7,0.3339859);
   hdirt_stack_3->SetBinContent(8,0.1608405);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.7374783);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.4564839);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(6,0.5750517);
   hdirt_stack_3->SetBinError(7,0.2473076);
   hdirt_stack_3->SetBinError(8,0.1608405);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(13,0.5232628);
   hdirt_stack_3->SetEntries(19);

   ci = 1579;
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
   hs12->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.069728);
   houtFV_stack_4->SetBinContent(2,6.520193);
   houtFV_stack_4->SetBinContent(3,8.268826);
   houtFV_stack_4->SetBinContent(4,7.793129);
   houtFV_stack_4->SetBinContent(5,4.434905);
   houtFV_stack_4->SetBinContent(6,4.99082);
   houtFV_stack_4->SetBinContent(7,2.785835);
   houtFV_stack_4->SetBinContent(8,4.276639);
   houtFV_stack_4->SetBinContent(9,0.7979171);
   houtFV_stack_4->SetBinContent(10,0.3917402);
   houtFV_stack_4->SetBinContent(11,0.7302274);
   houtFV_stack_4->SetBinContent(13,5.269862);
   houtFV_stack_4->SetBinError(1,1.061226);
   houtFV_stack_4->SetBinError(2,1.258742);
   houtFV_stack_4->SetBinError(3,1.499575);
   houtFV_stack_4->SetBinError(4,1.358091);
   houtFV_stack_4->SetBinError(5,1.078001);
   houtFV_stack_4->SetBinError(6,1.182189);
   houtFV_stack_4->SetBinError(7,0.7789197);
   houtFV_stack_4->SetBinError(8,0.9918248);
   houtFV_stack_4->SetBinError(9,0.3706293);
   houtFV_stack_4->SetBinError(10,0.2770047);
   houtFV_stack_4->SetBinError(11,0.4379386);
   houtFV_stack_4->SetBinError(13,1.152368);
   houtFV_stack_4->SetEntries(223);

   ci = 1580;
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
   hs12->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5994041);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.346643);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.021014);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.684771);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.255881);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.655368);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.276455);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3554156);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6234653);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.177259);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.07071795);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1468434);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.065553);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3202397);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4784204);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4900516);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3840441);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5833467);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5614303);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.09261383);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1698316);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2519971);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1077516);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04218251);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1018615);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3244452);
   hNCpi0inFVcoh_stack_5->SetEntries(206);

   ci = 1581;
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
   hs12->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.04358943);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03121001);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03200887);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02515471);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2936812);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1582;
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
   hs12->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.979203);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.754154);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.403172);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.669082);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.669231);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.601638);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.578823);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.24537);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.961403);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.4095251);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.6454363);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.5112965);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.406017);
   hNCpi0inFVres_stack_7->SetBinError(1,0.451536);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6023926);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9228602);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7714728);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8511078);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6815826);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3739552);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3974209);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5671255);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1254937);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2095887);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2507402);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7548544);
   hNCpi0inFVres_stack_7->SetEntries(869);

   ci = 1583;
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
   hs12->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5080417);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.723609);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.464244);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.092973);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.547668);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.897765);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.08857);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.050455);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.177815);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1074755);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.06045661);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4237555);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.751644);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1959392);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5128479);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3008698);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4186013);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4443803);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4243645);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.452579);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.528886);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5956947);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.08432478);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.03620173);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2229585);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7936286);
   hNCpi0inFVdis_stack_8->SetEntries(300);

   ci = 1584;
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
   hs12->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1585;
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
   hs12->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,3.587984);
   hCCpi0inFV_stack_10->SetBinContent(2,12.02699);
   hCCpi0inFV_stack_10->SetBinContent(3,13.46821);
   hCCpi0inFV_stack_10->SetBinContent(4,13.6453);
   hCCpi0inFV_stack_10->SetBinContent(5,9.720099);
   hCCpi0inFV_stack_10->SetBinContent(6,6.888792);
   hCCpi0inFV_stack_10->SetBinContent(7,3.175949);
   hCCpi0inFV_stack_10->SetBinContent(8,1.905448);
   hCCpi0inFV_stack_10->SetBinContent(9,1.754141);
   hCCpi0inFV_stack_10->SetBinContent(10,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(12,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(13,7.659437);
   hCCpi0inFV_stack_10->SetBinError(1,0.9583471);
   hCCpi0inFV_stack_10->SetBinError(2,1.78702);
   hCCpi0inFV_stack_10->SetBinError(3,1.902851);
   hCCpi0inFV_stack_10->SetBinError(4,1.86069);
   hCCpi0inFV_stack_10->SetBinError(5,1.594958);
   hCCpi0inFV_stack_10->SetBinError(6,1.301327);
   hCCpi0inFV_stack_10->SetBinError(7,0.8772215);
   hCCpi0inFV_stack_10->SetBinError(8,0.6496038);
   hCCpi0inFV_stack_10->SetBinError(9,0.7350354);
   hCCpi0inFV_stack_10->SetBinError(10,0.438694);
   hCCpi0inFV_stack_10->SetBinError(11,0.340721);
   hCCpi0inFV_stack_10->SetBinError(12,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(13,1.379464);
   hCCpi0inFV_stack_10->SetEntries(318);

   ci = 1586;
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
   hs12->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,1.737489);
   hNCinFV_stack_11->SetBinContent(2,4.475307);
   hNCinFV_stack_11->SetBinContent(3,3.781538);
   hNCinFV_stack_11->SetBinContent(4,1.697097);
   hNCinFV_stack_11->SetBinContent(5,2.15465);
   hNCinFV_stack_11->SetBinContent(6,1.146834);
   hNCinFV_stack_11->SetBinContent(7,0.6801777);
   hNCinFV_stack_11->SetBinContent(8,0.9269427);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.05405266);
   hNCinFV_stack_11->SetBinContent(13,0.5695286);
   hNCinFV_stack_11->SetBinError(1,0.6636892);
   hNCinFV_stack_11->SetBinError(2,1.18345);
   hNCinFV_stack_11->SetBinError(3,1.211244);
   hNCinFV_stack_11->SetBinError(4,0.7299909);
   hNCinFV_stack_11->SetBinError(5,0.7985822);
   hNCinFV_stack_11->SetBinError(6,0.5032767);
   hNCinFV_stack_11->SetBinError(7,0.3455739);
   hNCinFV_stack_11->SetBinError(8,0.4800908);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.05405266);
   hNCinFV_stack_11->SetBinError(13,0.3291509);
   hNCinFV_stack_11->SetEntries(74);

   ci = 1587;
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
   hs12->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,4.540909);
   hnumuCCinFV_stack_12->SetBinContent(2,9.342484);
   hnumuCCinFV_stack_12->SetBinContent(3,9.059816);
   hnumuCCinFV_stack_12->SetBinContent(4,4.851834);
   hnumuCCinFV_stack_12->SetBinContent(5,1.862558);
   hnumuCCinFV_stack_12->SetBinContent(6,2.546129);
   hnumuCCinFV_stack_12->SetBinContent(7,0.997251);
   hnumuCCinFV_stack_12->SetBinContent(8,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(9,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(10,1.195579);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(12,1.033692);
   hnumuCCinFV_stack_12->SetBinContent(13,0.9801958);
   hnumuCCinFV_stack_12->SetBinError(1,2.350237);
   hnumuCCinFV_stack_12->SetBinError(2,1.632904);
   hnumuCCinFV_stack_12->SetBinError(3,2.396877);
   hnumuCCinFV_stack_12->SetBinError(4,1.060074);
   hnumuCCinFV_stack_12->SetBinError(5,0.6815398);
   hnumuCCinFV_stack_12->SetBinError(6,0.7951971);
   hnumuCCinFV_stack_12->SetBinError(7,0.4462101);
   hnumuCCinFV_stack_12->SetBinError(8,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(9,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(10,1.195579);
   hnumuCCinFV_stack_12->SetBinError(11,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(12,0.5446248);
   hnumuCCinFV_stack_12->SetBinError(13,0.4383608);
   hnumuCCinFV_stack_12->SetEntries(144);

   ci = 1588;
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
   hs12->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(10,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(13,2.336996);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.340721);
   hnueCCinFV_stack_13->SetBinError(10,0.2179626);
   hnueCCinFV_stack_13->SetBinError(13,1.067966);
   hnueCCinFV_stack_13->SetEntries(11);

   ci = 1589;
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
   hs12->Add(hnueCCinFV_stack_13,"");
   hs12->Draw("hist same");
   
   TH1F *hmcerror__35 = new TH1F("hmcerror__35","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__35->SetBinContent(1,19.60288);
   hmcerror__35->SetBinContent(2,51.43348);
   hmcerror__35->SetBinContent(3,57.37033);
   hmcerror__35->SetBinContent(4,45.49445);
   hmcerror__35->SetBinContent(5,35.99708);
   hmcerror__35->SetBinContent(6,30.48378);
   hmcerror__35->SetBinContent(7,11.51867);
   hmcerror__35->SetBinContent(8,12.00312);
   hmcerror__35->SetBinContent(9,8.012772);
   hmcerror__35->SetBinContent(10,3.428174);
   hmcerror__35->SetBinContent(11,3.578095);
   hmcerror__35->SetBinContent(12,2.903248);
   hmcerror__35->SetBinContent(13,31.33367);
   hmcerror__35->SetBinError(1,15.40335);
   hmcerror__35->SetBinError(2,20.8696);
   hmcerror__35->SetBinError(3,20.19249);
   hmcerror__35->SetBinError(4,24.20879);
   hmcerror__35->SetBinError(5,21.20855);
   hmcerror__35->SetBinError(6,14.34428);
   hmcerror__35->SetBinError(7,8.11547);
   hmcerror__35->SetBinError(8,9.306942);
   hmcerror__35->SetBinError(9,13.69774);
   hmcerror__35->SetBinError(10,4.7387);
   hmcerror__35->SetBinError(11,4.446033);
   hmcerror__35->SetBinError(12,5.008921);
   hmcerror__35->SetBinError(13,13.59222);
   hmcerror__35->SetEntries(311.8897);

   ci = TColor::GetColor("#999999");
   hmcerror__35->SetFillColor(ci);
   hmcerror__35->SetFillStyle(3002);
   hmcerror__35->SetLineColor(12);
   hmcerror__35->SetLineWidth(0);
   hmcerror__35->SetMarkerColor(0);
   hmcerror__35->SetMarkerSize(0);
   hmcerror__35->GetXaxis()->SetLabelFont(42);
   hmcerror__35->GetXaxis()->SetTitleOffset(1);
   hmcerror__35->GetXaxis()->SetTitleFont(42);
   hmcerror__35->GetYaxis()->SetLabelFont(42);
   hmcerror__35->GetYaxis()->SetTitleFont(42);
   hmcerror__35->GetZaxis()->SetLabelFont(42);
   hmcerror__35->GetZaxis()->SetTitleOffset(1);
   hmcerror__35->GetZaxis()->SetTitleFont(42);
   hmcerror__35->Draw("same E2");
   
   Double_t _fx3045[12] = {
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
   Double_t _fy3045[12] = {
   22,
   47,
   47,
   44,
   35,
   19,
   14,
   14,
   9,
   6,
   6,
   5};
   Double_t _felx3045[12] = {
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
   Double_t _fely3045[12] = {
   4.8417,
   6.9882,
   6.9882,
   6.7671,
   6.0548,
   4.5151,
   3.9102,
   3.9102,
   3.19354,
   2.67925,
   2.67925,
   2.48995};
   Double_t _fehx3045[12] = {
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
   Double_t _fehy3045[12] = {
   4.6299,
   6.7839,
   6.7839,
   6.5623,
   5.8483,
   4.3011,
   3.6898,
   3.6898,
   2.9582,
   2.41858,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,1320);
   Graph_Graph3045->SetMinimum(2.259045);
   Graph_Graph3045->SetMaximum(58.91129);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineWidth(2);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetNdivisions(509);
   Graph_Graph3045->GetXaxis()->SetLabelFont(132);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3045->GetXaxis()->SetTitleFont(132);
   Graph_Graph3045->GetYaxis()->SetNdivisions(509);
   Graph_Graph3045->GetYaxis()->SetLabelFont(132);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3045->GetYaxis()->SetTitleFont(132);
   Graph_Graph3045->GetZaxis()->SetLabelFont(132);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3045->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3045->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.1/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 268.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 8.1","F");

   ci = 1577;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 40.9","F");

   ci = 1578;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.7","F");

   ci = 1579;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 45.1","F");

   ci = 1580;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  11.2","F");

   ci = 1581;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

   ci = 1582;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

   ci = 1583;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  13.1","F");

   ci = 1584;
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

   ci = 1585;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 68.2","F");

   ci = 1586;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 16.9","F");

   ci = 1587;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 37.4","F");

   ci = 1588;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.1","F");

   ci = 1589;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas12->cd();
  
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
   
   Double_t _fx3046[12] = {
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
   Double_t _fy3046[12] = {
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
   Double_t _felx3046[12] = {
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
   Double_t _fely3046[12] = {
   0.7857697,
   0.4057591,
   0.3519674,
   0.5321263,
   0.5891742,
   0.4705546,
   0.7045491,
   0.775377,
   1.709488,
   1.382281,
   1.24257,
   1.725282};
   Double_t _fehx3046[12] = {
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
   Double_t _fehy3046[12] = {
   0.7857697,
   0.4057591,
   0.3519674,
   0.5321263,
   0.5891742,
   0.4705546,
   0.7045491,
   0.775377,
   1.709488,
   1.382281,
   1.24257,
   1.725282};
   grae = new TGraphAsymmErrors(12,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,1320);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(2);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineWidth(2);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3046->GetXaxis()->SetRange(1,91);
   Graph_Graph3046->GetXaxis()->SetNdivisions(509);
   Graph_Graph3046->GetXaxis()->SetLabelFont(132);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3046->GetXaxis()->SetTitleFont(132);
   Graph_Graph3046->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3046->GetYaxis()->SetNdivisions(210);
   Graph_Graph3046->GetYaxis()->SetLabelFont(132);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3046->GetYaxis()->SetTitleFont(132);
   Graph_Graph3046->GetZaxis()->SetLabelFont(132);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3046->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3046->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("a2");
   
   Double_t _fx3047[12] = {
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
   Double_t _fy3047[12] = {
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
   Double_t _felx3047[12] = {
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
   Double_t _fely3047[12] = {
   0.2935222,
   0.1704316,
   0.1863331,
   0.2068792,
   0.2152239,
   0.2073191,
   0.2718207,
   0.2533981,
   0.2996786,
   0.6040513,
   0.3518714,
   0.4254745};
   Double_t _fehx3047[12] = {
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
   Double_t _fehy3047[12] = {
   0.2935222,
   0.1704316,
   0.1863331,
   0.2068792,
   0.2152239,
   0.2073191,
   0.2718207,
   0.2533981,
   0.2996786,
   0.6040513,
   0.3518714,
   0.4254745};
   grae = new TGraphAsymmErrors(12,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,1320);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(2);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineWidth(2);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetRange(1,91);
   Graph_Graph3047->GetXaxis()->SetNdivisions(509);
   Graph_Graph3047->GetXaxis()->SetLabelFont(132);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3047->GetXaxis()->SetTitleFont(132);
   Graph_Graph3047->GetYaxis()->SetNdivisions(509);
   Graph_Graph3047->GetYaxis()->SetLabelFont(132);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3047->GetYaxis()->SetTitleFont(132);
   Graph_Graph3047->GetZaxis()->SetLabelFont(132);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3047->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3047->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2 ");
   
   Double_t _fx3048[12] = {
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
   Double_t _fy3048[12] = {
   1.122284,
   0.9138017,
   0.8192387,
   0.967151,
   0.972301,
   0.6232822,
   1.215418,
   1.166364,
   1.123207,
   1.750203,
   1.67687,
   1.722209};
   Double_t _felx3048[12] = {
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
   Double_t _fely3048[12] = {
   0.2469892,
   0.1358687,
   0.1218086,
   0.1487456,
   0.1682025,
   0.1481148,
   0.3394662,
   0.3257653,
   0.3985562,
   0.7815384,
   0.7487922,
   0.8576428};
   Double_t _fehx3048[12] = {
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
   Double_t _fehy3048[12] = {
   0.2361847,
   0.1318966,
   0.1182475,
   0.144244,
   0.1624659,
   0.1410947,
   0.3203321,
   0.3074034,
   0.3691856,
   0.7055008,
   0.6759406,
   0.7614368};
   grae = new TGraphAsymmErrors(12,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,1320);
   Graph_Graph3048->SetMinimum(0.2743196);
   Graph_Graph3048->SetMaximum(2.684493);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineWidth(2);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetNdivisions(509);
   Graph_Graph3048->GetXaxis()->SetLabelFont(132);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3048->GetXaxis()->SetTitleFont(132);
   Graph_Graph3048->GetYaxis()->SetNdivisions(509);
   Graph_Graph3048->GetYaxis()->SetLabelFont(132);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3048->GetYaxis()->SetTitleFont(132);
   Graph_Graph3048->GetZaxis()->SetLabelFont(132);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3048->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3048->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p ");
   
   TH1F *hist__36 = new TH1F("hist__36","NCpi0BDT_theta3_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__36->SetLineColor(ci);
   hist__36->GetXaxis()->SetLabelFont(42);
   hist__36->GetXaxis()->SetTitleOffset(1);
   hist__36->GetXaxis()->SetTitleFont(42);
   hist__36->GetYaxis()->SetNdivisions(405);
   hist__36->GetYaxis()->SetLabelFont(42);
   hist__36->GetYaxis()->SetTitleFont(42);
   hist__36->GetZaxis()->SetLabelFont(42);
   hist__36->GetZaxis()->SetTitleOffset(1);
   hist__36->GetZaxis()->SetTitleFont(42);
   hist__36->Draw("axis same");
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
   canvas12->cd();
   canvas12->Modified();
   canvas12->cd();
   canvas12->SetSelected(canvas12);
}
