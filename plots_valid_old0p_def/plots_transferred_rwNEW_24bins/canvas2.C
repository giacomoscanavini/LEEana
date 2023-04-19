#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 16:15:24 2023) by ROOT version 6.26/00
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
   pad1->Range(-246.1538,-13.95964,1805.128,1543.642);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__4->SetBinContent(2,4.581041);
   hmc__4->SetBinContent(3,123.8442);
   hmc__4->SetBinContent(4,472.9601);
   hmc__4->SetBinContent(5,639.507);
   hmc__4->SetBinContent(6,680.0009);
   hmc__4->SetBinContent(7,697.982);
   hmc__4->SetBinContent(8,618.8679);
   hmc__4->SetBinContent(9,508.3758);
   hmc__4->SetBinContent(10,447.9079);
   hmc__4->SetBinContent(11,354.7387);
   hmc__4->SetBinContent(12,278.8553);
   hmc__4->SetBinContent(13,219.3665);
   hmc__4->SetBinContent(14,160.6376);
   hmc__4->SetBinContent(15,123.0464);
   hmc__4->SetBinContent(16,101.0516);
   hmc__4->SetBinContent(17,68.85485);
   hmc__4->SetBinContent(18,55.32349);
   hmc__4->SetBinContent(19,48.11711);
   hmc__4->SetBinContent(20,40.13585);
   hmc__4->SetBinContent(21,28.05491);
   hmc__4->SetBinContent(22,26.20571);
   hmc__4->SetBinContent(23,17.42214);
   hmc__4->SetBinContent(24,13.82442);
   hmc__4->SetBinContent(25,59.09401);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,4.766875);
   hmc__4->SetBinError(3,36.78294);
   hmc__4->SetBinError(4,135.9809);
   hmc__4->SetBinError(5,161.8341);
   hmc__4->SetBinError(6,176.8255);
   hmc__4->SetBinError(7,222.4825);
   hmc__4->SetBinError(8,219.6908);
   hmc__4->SetBinError(9,193.5824);
   hmc__4->SetBinError(10,161.5668);
   hmc__4->SetBinError(11,126.4163);
   hmc__4->SetBinError(12,98.80025);
   hmc__4->SetBinError(13,86.31354);
   hmc__4->SetBinError(14,57.5557);
   hmc__4->SetBinError(15,45.625);
   hmc__4->SetBinError(16,49.76022);
   hmc__4->SetBinError(17,24.83362);
   hmc__4->SetBinError(18,22.87152);
   hmc__4->SetBinError(19,20.25018);
   hmc__4->SetBinError(20,20.47234);
   hmc__4->SetBinError(21,14.6703);
   hmc__4->SetBinError(22,14.83041);
   hmc__4->SetBinError(23,11.57659);
   hmc__4->SetBinError(24,7.944918);
   hmc__4->SetBinError(25,25.31432);
   hmc__4->SetMinimum(-13.95964);
   hmc__4->SetMaximum(1465.762);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,1600);
   hs2_stack_2->SetMinimum(-3.646956e-09);
   hs2_stack_2->SetMaximum(732.8812);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(2,0.7302274);
   hbadmatch_stack_1->SetBinContent(3,5.035228);
   hbadmatch_stack_1->SetBinContent(4,16.67957);
   hbadmatch_stack_1->SetBinContent(5,14.00215);
   hbadmatch_stack_1->SetBinContent(6,12.28302);
   hbadmatch_stack_1->SetBinContent(7,15.31679);
   hbadmatch_stack_1->SetBinContent(8,9.176708);
   hbadmatch_stack_1->SetBinContent(9,10.02023);
   hbadmatch_stack_1->SetBinContent(10,8.161046);
   hbadmatch_stack_1->SetBinContent(11,6.396803);
   hbadmatch_stack_1->SetBinContent(12,6.773954);
   hbadmatch_stack_1->SetBinContent(13,4.152773);
   hbadmatch_stack_1->SetBinContent(14,4.982823);
   hbadmatch_stack_1->SetBinContent(15,1.756149);
   hbadmatch_stack_1->SetBinContent(16,2.531336);
   hbadmatch_stack_1->SetBinContent(17,0.9303237);
   hbadmatch_stack_1->SetBinContent(18,0.5901461);
   hbadmatch_stack_1->SetBinContent(19,0.5850745);
   hbadmatch_stack_1->SetBinContent(20,1.073786);
   hbadmatch_stack_1->SetBinContent(21,0.3934307);
   hbadmatch_stack_1->SetBinContent(22,0.3917402);
   hbadmatch_stack_1->SetBinContent(23,0.4508822);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,1.463836);
   hbadmatch_stack_1->SetBinError(2,0.4379386);
   hbadmatch_stack_1->SetBinError(3,1.170853);
   hbadmatch_stack_1->SetBinError(4,2.777817);
   hbadmatch_stack_1->SetBinError(5,2.001896);
   hbadmatch_stack_1->SetBinError(6,1.846213);
   hbadmatch_stack_1->SetBinError(7,2.863373);
   hbadmatch_stack_1->SetBinError(8,1.524956);
   hbadmatch_stack_1->SetBinError(9,1.640769);
   hbadmatch_stack_1->SetBinError(10,1.505344);
   hbadmatch_stack_1->SetBinError(11,1.325786);
   hbadmatch_stack_1->SetBinError(12,2.009465);
   hbadmatch_stack_1->SetBinError(13,1.131699);
   hbadmatch_stack_1->SetBinError(14,1.217671);
   hbadmatch_stack_1->SetBinError(15,0.6353958);
   hbadmatch_stack_1->SetBinError(16,0.8674328);
   hbadmatch_stack_1->SetBinError(17,0.4814682);
   hbadmatch_stack_1->SetBinError(18,0.340721);
   hbadmatch_stack_1->SetBinError(19,0.337793);
   hbadmatch_stack_1->SetBinError(20,0.5557297);
   hbadmatch_stack_1->SetBinError(21,0.2781975);
   hbadmatch_stack_1->SetBinError(22,0.2770047);
   hbadmatch_stack_1->SetBinError(23,0.3213996);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.620407);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,1.048213);
   hext_stack_2->SetBinContent(3,27.04844);
   hext_stack_2->SetBinContent(4,75.62767);
   hext_stack_2->SetBinContent(5,74.06149);
   hext_stack_2->SetBinContent(6,60.61513);
   hext_stack_2->SetBinContent(7,46.40621);
   hext_stack_2->SetBinContent(8,45.5527);
   hext_stack_2->SetBinContent(9,25.79992);
   hext_stack_2->SetBinContent(10,24.47915);
   hext_stack_2->SetBinContent(11,18.04424);
   hext_stack_2->SetBinContent(12,16.21036);
   hext_stack_2->SetBinContent(13,8.503808);
   hext_stack_2->SetBinContent(14,11.09622);
   hext_stack_2->SetBinContent(15,7.116837);
   hext_stack_2->SetBinContent(16,3.647801);
   hext_stack_2->SetBinContent(17,4.677244);
   hext_stack_2->SetBinContent(18,2.435184);
   hext_stack_2->SetBinContent(19,4.670063);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,1.868591);
   hext_stack_2->SetBinContent(22,1.461993);
   hext_stack_2->SetBinContent(24,2.566457);
   hext_stack_2->SetBinContent(25,2.435184);
   hext_stack_2->SetBinError(2,0.7595995);
   hext_stack_2->SetBinError(3,3.436923);
   hext_stack_2->SetBinError(4,6.053553);
   hext_stack_2->SetBinError(5,5.834233);
   hext_stack_2->SetBinError(6,5.169778);
   hext_stack_2->SetBinError(7,4.649293);
   hext_stack_2->SetBinError(8,4.707034);
   hext_stack_2->SetBinError(9,3.481563);
   hext_stack_2->SetBinError(10,3.439841);
   hext_stack_2->SetBinError(11,2.825437);
   hext_stack_2->SetBinError(12,2.899799);
   hext_stack_2->SetBinError(13,1.915728);
   hext_stack_2->SetBinError(14,2.201864);
   hext_stack_2->SetBinError(15,1.841247);
   hext_stack_2->SetBinError(16,1.246589);
   hext_stack_2->SetBinError(17,1.54863);
   hext_stack_2->SetBinError(18,0.9256422);
   hext_stack_2->SetBinError(19,1.612283);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,0.840497);
   hext_stack_2->SetBinError(22,0.7356036);
   hext_stack_2->SetBinError(24,1.283228);
   hext_stack_2->SetBinError(25,0.9256422);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,5.104505);
   hdirt_stack_3->SetBinContent(4,10.51313);
   hdirt_stack_3->SetBinContent(5,8.334833);
   hdirt_stack_3->SetBinContent(6,7.867343);
   hdirt_stack_3->SetBinContent(7,6.35909);
   hdirt_stack_3->SetBinContent(8,3.395924);
   hdirt_stack_3->SetBinContent(9,2.723244);
   hdirt_stack_3->SetBinContent(10,0.4950385);
   hdirt_stack_3->SetBinContent(11,2.469316);
   hdirt_stack_3->SetBinContent(12,0.845859);
   hdirt_stack_3->SetBinContent(13,0.2863297);
   hdirt_stack_3->SetBinContent(16,0.5318602);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinError(3,1.195774);
   hdirt_stack_3->SetBinError(4,1.718064);
   hdirt_stack_3->SetBinError(5,1.488228);
   hdirt_stack_3->SetBinError(6,1.426749);
   hdirt_stack_3->SetBinError(7,1.51875);
   hdirt_stack_3->SetBinError(8,0.9676503);
   hdirt_stack_3->SetBinError(9,0.7951718);
   hdirt_stack_3->SetBinError(10,0.2933304);
   hdirt_stack_3->SetBinError(11,1.262221);
   hdirt_stack_3->SetBinError(12,0.512201);
   hdirt_stack_3->SetBinError(13,0.2025938);
   hdirt_stack_3->SetBinError(16,0.4172928);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,1.462145);
   houtFV_stack_4->SetBinContent(3,19.70356);
   houtFV_stack_4->SetBinContent(4,68.84077);
   houtFV_stack_4->SetBinContent(5,75.62151);
   houtFV_stack_4->SetBinContent(6,56.34279);
   houtFV_stack_4->SetBinContent(7,45.9435);
   houtFV_stack_4->SetBinContent(8,35.6708);
   houtFV_stack_4->SetBinContent(9,28.2306);
   houtFV_stack_4->SetBinContent(10,20.09236);
   houtFV_stack_4->SetBinContent(11,10.66097);
   houtFV_stack_4->SetBinContent(12,9.405003);
   houtFV_stack_4->SetBinContent(13,8.006296);
   houtFV_stack_4->SetBinContent(14,3.936071);
   houtFV_stack_4->SetBinContent(15,3.0405);
   houtFV_stack_4->SetBinContent(16,3.521199);
   houtFV_stack_4->SetBinContent(17,1.176911);
   houtFV_stack_4->SetBinContent(18,1.120277);
   houtFV_stack_4->SetBinContent(19,1.123658);
   houtFV_stack_4->SetBinContent(20,0.7336084);
   houtFV_stack_4->SetBinContent(21,0.3917402);
   houtFV_stack_4->SetBinContent(22,0.7336084);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(25,0.9286332);
   houtFV_stack_4->SetBinError(2,0.6198731);
   houtFV_stack_4->SetBinError(3,2.120903);
   houtFV_stack_4->SetBinError(4,4.182854);
   houtFV_stack_4->SetBinError(5,4.350962);
   houtFV_stack_4->SetBinError(6,3.729594);
   houtFV_stack_4->SetBinError(7,3.432905);
   houtFV_stack_4->SetBinError(8,2.963668);
   houtFV_stack_4->SetBinError(9,2.657826);
   houtFV_stack_4->SetBinError(10,2.280572);
   houtFV_stack_4->SetBinError(11,1.602569);
   houtFV_stack_4->SetBinError(12,1.53802);
   houtFV_stack_4->SetBinError(13,1.469223);
   houtFV_stack_4->SetBinError(14,0.9866317);
   houtFV_stack_4->SetBinError(15,0.8710213);
   houtFV_stack_4->SetBinError(16,0.9419262);
   houtFV_stack_4->SetBinError(17,0.4804759);
   houtFV_stack_4->SetBinError(18,0.5175515);
   houtFV_stack_4->SetBinError(19,0.5188295);
   houtFV_stack_4->SetBinError(20,0.4394482);
   houtFV_stack_4->SetBinError(21,0.2770047);
   houtFV_stack_4->SetBinError(22,0.4394482);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(25,0.48078);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.170808);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,8.683743);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.18346);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,13.51029);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,14.30812);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,13.09181);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.486857);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.098258);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.985475);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.264316);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.384798);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.561576);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.254508);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5852358);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6825538);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3538311);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9641072);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.077957);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.149115);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.284523);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.264059);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8545705);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9074377);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5104675);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6165473);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5448296);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4109174);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3571158);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1727406);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1982678);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.325254);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.831198);
   hNCpi0inFVqe_stack_6->SetBinContent(6,4.545396);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.439093);
   hNCpi0inFVqe_stack_6->SetBinContent(8,3.026498);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.091676);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.981076);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.53434);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7250721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3305127);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5561419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.7317282);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3848301);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5610193);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4285357);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4822389);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3931691);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3150384);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.9906222);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.10316);
   hNCpi0inFVres_stack_7->SetBinContent(4,200.6808);
   hNCpi0inFVres_stack_7->SetBinContent(5,318.1923);
   hNCpi0inFVres_stack_7->SetBinContent(6,359.3696);
   hNCpi0inFVres_stack_7->SetBinContent(7,350.9143);
   hNCpi0inFVres_stack_7->SetBinContent(8,299.7623);
   hNCpi0inFVres_stack_7->SetBinContent(9,240.5383);
   hNCpi0inFVres_stack_7->SetBinContent(10,184.5574);
   hNCpi0inFVres_stack_7->SetBinContent(11,136.6652);
   hNCpi0inFVres_stack_7->SetBinContent(12,95.98869);
   hNCpi0inFVres_stack_7->SetBinContent(13,72.5747);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.37215);
   hNCpi0inFVres_stack_7->SetBinContent(15,30.65989);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.71054);
   hNCpi0inFVres_stack_7->SetBinContent(17,18.10071);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.51629);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.275126);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.361144);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.088034);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.025834);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.077066);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.908526);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.789615);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3642206);
   hNCpi0inFVres_stack_7->SetBinError(3,2.063895);
   hNCpi0inFVres_stack_7->SetBinError(4,4.556262);
   hNCpi0inFVres_stack_7->SetBinError(5,5.809223);
   hNCpi0inFVres_stack_7->SetBinError(6,6.21303);
   hNCpi0inFVres_stack_7->SetBinError(7,6.121101);
   hNCpi0inFVres_stack_7->SetBinError(8,5.684563);
   hNCpi0inFVres_stack_7->SetBinError(9,5.080703);
   hNCpi0inFVres_stack_7->SetBinError(10,4.46457);
   hNCpi0inFVres_stack_7->SetBinError(11,3.857834);
   hNCpi0inFVres_stack_7->SetBinError(12,3.218884);
   hNCpi0inFVres_stack_7->SetBinError(13,2.839196);
   hNCpi0inFVres_stack_7->SetBinError(14,2.272629);
   hNCpi0inFVres_stack_7->SetBinError(15,1.7916);
   hNCpi0inFVres_stack_7->SetBinError(16,1.63659);
   hNCpi0inFVres_stack_7->SetBinError(17,1.455389);
   hNCpi0inFVres_stack_7->SetBinError(18,1.277739);
   hNCpi0inFVres_stack_7->SetBinError(19,1.01975);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8753817);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6796066);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5729183);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5186623);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4619834);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8560882);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.342715);
   hNCpi0inFVdis_stack_8->SetBinContent(4,30.87927);
   hNCpi0inFVdis_stack_8->SetBinContent(5,39.35163);
   hNCpi0inFVdis_stack_8->SetBinContent(6,44.43589);
   hNCpi0inFVdis_stack_8->SetBinContent(7,53.45046);
   hNCpi0inFVdis_stack_8->SetBinContent(8,48.11439);
   hNCpi0inFVdis_stack_8->SetBinContent(9,42.5925);
   hNCpi0inFVdis_stack_8->SetBinContent(10,41.91577);
   hNCpi0inFVdis_stack_8->SetBinContent(11,31.62478);
   hNCpi0inFVdis_stack_8->SetBinContent(12,28.83426);
   hNCpi0inFVdis_stack_8->SetBinContent(13,23.30225);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.65329);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.53678);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.6811);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.83478);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.255513);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.988388);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.624688);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.499806);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.549702);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.134026);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.338376);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.029663);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9760102);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.784725);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.100239);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.10996);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.369865);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.204354);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.107377);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.129927);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.825921);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.735898);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.597924);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.197573);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.142264);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.122386);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.890516);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7141406);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6537237);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6043263);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6484435);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4936711);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4591547);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4032689);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8303545);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.7953222);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.356662);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,2.979234);
   hCCpi0inFV_stack_10->SetBinContent(4,13.13926);
   hCCpi0inFV_stack_10->SetBinContent(5,28.35156);
   hCCpi0inFV_stack_10->SetBinContent(6,44.85254);
   hCCpi0inFV_stack_10->SetBinContent(7,76.98874);
   hCCpi0inFV_stack_10->SetBinContent(8,79.71922);
   hCCpi0inFV_stack_10->SetBinContent(9,76.26598);
   hCCpi0inFV_stack_10->SetBinContent(10,83.62672);
   hCCpi0inFV_stack_10->SetBinContent(11,73.4688);
   hCCpi0inFV_stack_10->SetBinContent(12,62.50999);
   hCCpi0inFV_stack_10->SetBinContent(13,46.15203);
   hCCpi0inFV_stack_10->SetBinContent(14,37.24751);
   hCCpi0inFV_stack_10->SetBinContent(15,31.5079);
   hCCpi0inFV_stack_10->SetBinContent(16,27.30035);
   hCCpi0inFV_stack_10->SetBinContent(17,18.15933);
   hCCpi0inFV_stack_10->SetBinContent(18,14.14908);
   hCCpi0inFV_stack_10->SetBinContent(19,13.20566);
   hCCpi0inFV_stack_10->SetBinContent(20,12.97598);
   hCCpi0inFV_stack_10->SetBinContent(21,6.938664);
   hCCpi0inFV_stack_10->SetBinContent(22,5.678306);
   hCCpi0inFV_stack_10->SetBinContent(23,4.391507);
   hCCpi0inFV_stack_10->SetBinContent(24,4.198616);
   hCCpi0inFV_stack_10->SetBinContent(25,12.11426);
   hCCpi0inFV_stack_10->SetBinError(3,0.8548804);
   hCCpi0inFV_stack_10->SetBinError(4,1.819651);
   hCCpi0inFV_stack_10->SetBinError(5,2.594985);
   hCCpi0inFV_stack_10->SetBinError(6,3.334228);
   hCCpi0inFV_stack_10->SetBinError(7,4.396854);
   hCCpi0inFV_stack_10->SetBinError(8,4.371974);
   hCCpi0inFV_stack_10->SetBinError(9,4.375357);
   hCCpi0inFV_stack_10->SetBinError(10,4.574251);
   hCCpi0inFV_stack_10->SetBinError(11,4.337131);
   hCCpi0inFV_stack_10->SetBinError(12,3.974964);
   hCCpi0inFV_stack_10->SetBinError(13,3.428213);
   hCCpi0inFV_stack_10->SetBinError(14,3.070452);
   hCCpi0inFV_stack_10->SetBinError(15,2.846247);
   hCCpi0inFV_stack_10->SetBinError(16,2.69436);
   hCCpi0inFV_stack_10->SetBinError(17,2.141136);
   hCCpi0inFV_stack_10->SetBinError(18,1.838364);
   hCCpi0inFV_stack_10->SetBinError(19,1.80004);
   hCCpi0inFV_stack_10->SetBinError(20,1.892341);
   hCCpi0inFV_stack_10->SetBinError(21,1.286002);
   hCCpi0inFV_stack_10->SetBinError(22,1.144658);
   hCCpi0inFV_stack_10->SetBinError(23,1.074576);
   hCCpi0inFV_stack_10->SetBinError(24,1.035704);
   hCCpi0inFV_stack_10->SetBinError(25,1.777809);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,6.555376);
   hNCinFV_stack_11->SetBinContent(4,19.00305);
   hNCinFV_stack_11->SetBinContent(5,30.89923);
   hNCinFV_stack_11->SetBinContent(6,32.99195);
   hNCinFV_stack_11->SetBinContent(7,38.1097);
   hNCinFV_stack_11->SetBinContent(8,42.1073);
   hNCinFV_stack_11->SetBinContent(9,35.17999);
   hNCinFV_stack_11->SetBinContent(10,36.49348);
   hNCinFV_stack_11->SetBinContent(11,35.04824);
   hNCinFV_stack_11->SetBinContent(12,25.51978);
   hNCinFV_stack_11->SetBinContent(13,25.87663);
   hNCinFV_stack_11->SetBinContent(14,21.154);
   hNCinFV_stack_11->SetBinContent(15,17.97407);
   hNCinFV_stack_11->SetBinContent(16,11.1721);
   hNCinFV_stack_11->SetBinContent(17,10.26484);
   hNCinFV_stack_11->SetBinContent(18,11.05846);
   hNCinFV_stack_11->SetBinContent(19,7.379193);
   hNCinFV_stack_11->SetBinContent(20,5.235003);
   hNCinFV_stack_11->SetBinContent(21,4.589913);
   hNCinFV_stack_11->SetBinContent(22,7.077662);
   hNCinFV_stack_11->SetBinContent(23,3.714533);
   hNCinFV_stack_11->SetBinContent(24,1.710423);
   hNCinFV_stack_11->SetBinContent(25,9.317134);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,1.257132);
   hNCinFV_stack_11->SetBinError(4,2.203193);
   hNCinFV_stack_11->SetBinError(5,2.857619);
   hNCinFV_stack_11->SetBinError(6,2.843764);
   hNCinFV_stack_11->SetBinError(7,3.038675);
   hNCinFV_stack_11->SetBinError(8,3.272226);
   hNCinFV_stack_11->SetBinError(9,2.953274);
   hNCinFV_stack_11->SetBinError(10,3.027359);
   hNCinFV_stack_11->SetBinError(11,2.964335);
   hNCinFV_stack_11->SetBinError(12,2.506013);
   hNCinFV_stack_11->SetBinError(13,2.557646);
   hNCinFV_stack_11->SetBinError(14,2.339456);
   hNCinFV_stack_11->SetBinError(15,2.122165);
   hNCinFV_stack_11->SetBinError(16,1.710017);
   hNCinFV_stack_11->SetBinError(17,1.582085);
   hNCinFV_stack_11->SetBinError(18,1.631082);
   hNCinFV_stack_11->SetBinError(19,1.374353);
   hNCinFV_stack_11->SetBinError(20,1.128051);
   hNCinFV_stack_11->SetBinError(21,1.092737);
   hNCinFV_stack_11->SetBinError(22,1.388332);
   hNCinFV_stack_11->SetBinError(23,0.9615599);
   hNCinFV_stack_11->SetBinError(24,0.6196373);
   hNCinFV_stack_11->SetBinError(25,1.631303);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,4.57853);
   hnumuCCinFV_stack_12->SetBinContent(4,24.25671);
   hnumuCCinFV_stack_12->SetBinContent(5,33.29232);
   hnumuCCinFV_stack_12->SetBinContent(6,39.66056);
   hnumuCCinFV_stack_12->SetBinContent(7,46.34223);
   hnumuCCinFV_stack_12->SetBinContent(8,36.70687);
   hnumuCCinFV_stack_12->SetBinContent(9,34.18644);
   hnumuCCinFV_stack_12->SetBinContent(10,36.86746);
   hnumuCCinFV_stack_12->SetBinContent(11,33.0513);
   hnumuCCinFV_stack_12->SetBinContent(12,26.93503);
   hnumuCCinFV_stack_12->SetBinContent(13,26.38032);
   hnumuCCinFV_stack_12->SetBinContent(14,17.35051);
   hnumuCCinFV_stack_12->SetBinContent(15,15.15589);
   hnumuCCinFV_stack_12->SetBinContent(16,13.69913);
   hnumuCCinFV_stack_12->SetBinContent(17,6.398606);
   hnumuCCinFV_stack_12->SetBinContent(18,6.402318);
   hnumuCCinFV_stack_12->SetBinContent(19,7.625225);
   hnumuCCinFV_stack_12->SetBinContent(20,6.645585);
   hnumuCCinFV_stack_12->SetBinContent(21,5.327646);
   hnumuCCinFV_stack_12->SetBinContent(22,3.927046);
   hnumuCCinFV_stack_12->SetBinContent(23,3.126077);
   hnumuCCinFV_stack_12->SetBinContent(24,1.570342);
   hnumuCCinFV_stack_12->SetBinContent(25,9.917668);
   hnumuCCinFV_stack_12->SetBinError(3,1.139436);
   hnumuCCinFV_stack_12->SetBinError(4,3.433576);
   hnumuCCinFV_stack_12->SetBinError(5,3.71354);
   hnumuCCinFV_stack_12->SetBinError(6,3.933664);
   hnumuCCinFV_stack_12->SetBinError(7,4.095163);
   hnumuCCinFV_stack_12->SetBinError(8,3.44369);
   hnumuCCinFV_stack_12->SetBinError(9,3.135699);
   hnumuCCinFV_stack_12->SetBinError(10,3.248042);
   hnumuCCinFV_stack_12->SetBinError(11,3.161302);
   hnumuCCinFV_stack_12->SetBinError(12,2.776135);
   hnumuCCinFV_stack_12->SetBinError(13,3.658294);
   hnumuCCinFV_stack_12->SetBinError(14,2.449426);
   hnumuCCinFV_stack_12->SetBinError(15,2.199407);
   hnumuCCinFV_stack_12->SetBinError(16,1.922326);
   hnumuCCinFV_stack_12->SetBinError(17,1.248489);
   hnumuCCinFV_stack_12->SetBinError(18,1.274096);
   hnumuCCinFV_stack_12->SetBinError(19,1.417815);
   hnumuCCinFV_stack_12->SetBinError(20,1.302203);
   hnumuCCinFV_stack_12->SetBinError(21,1.14606);
   hnumuCCinFV_stack_12->SetBinError(22,0.9129779);
   hnumuCCinFV_stack_12->SetBinError(23,0.8995382);
   hnumuCCinFV_stack_12->SetBinError(24,0.5552036);
   hnumuCCinFV_stack_12->SetBinError(25,1.630285);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(3,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(4,3.247183);
   hnueCCinFV_stack_13->SetBinContent(5,3.078222);
   hnueCCinFV_stack_13->SetBinContent(6,2.73104);
   hnueCCinFV_stack_13->SetBinContent(7,1.208545);
   hnueCCinFV_stack_13->SetBinContent(8,2.404017);
   hnueCCinFV_stack_13->SetBinContent(9,3.079039);
   hnueCCinFV_stack_13->SetBinContent(10,2.140131);
   hnueCCinFV_stack_13->SetBinContent(11,2.789192);
   hnueCCinFV_stack_13->SetBinContent(12,2.107964);
   hnueCCinFV_stack_13->SetBinContent(13,0.6722553);
   hnueCCinFV_stack_13->SetBinContent(14,0.5584189);
   hnueCCinFV_stack_13->SetBinContent(15,1.513406);
   hnueCCinFV_stack_13->SetBinContent(16,2.196284);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.3920057);
   hnueCCinFV_stack_13->SetBinContent(20,0.9252522);
   hnueCCinFV_stack_13->SetBinContent(21,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(22,1.024854);
   hnueCCinFV_stack_13->SetBinContent(23,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(25,9.415462);
   hnueCCinFV_stack_13->SetBinError(3,0.545424);
   hnueCCinFV_stack_13->SetBinError(4,1.561065);
   hnueCCinFV_stack_13->SetBinError(5,0.9868784);
   hnueCCinFV_stack_13->SetBinError(6,0.8922642);
   hnueCCinFV_stack_13->SetBinError(7,0.559574);
   hnueCCinFV_stack_13->SetBinError(8,0.85647);
   hnueCCinFV_stack_13->SetBinError(9,0.888178);
   hnueCCinFV_stack_13->SetBinError(10,0.8427775);
   hnueCCinFV_stack_13->SetBinError(11,1.011204);
   hnueCCinFV_stack_13->SetBinError(12,1.246244);
   hnueCCinFV_stack_13->SetBinError(13,0.389713);
   hnueCCinFV_stack_13->SetBinError(14,0.4041659);
   hnueCCinFV_stack_13->SetBinError(15,0.6994513);
   hnueCCinFV_stack_13->SetBinError(16,0.7641242);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.2770049);
   hnueCCinFV_stack_13->SetBinError(20,0.4794006);
   hnueCCinFV_stack_13->SetBinError(21,0.3921167);
   hnueCCinFV_stack_13->SetBinError(22,0.5272749);
   hnueCCinFV_stack_13->SetBinError(23,0.3387718);
   hnueCCinFV_stack_13->SetBinError(25,2.2439);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__5->SetBinContent(2,4.581041);
   hmcerror__5->SetBinContent(3,123.8442);
   hmcerror__5->SetBinContent(4,472.9601);
   hmcerror__5->SetBinContent(5,639.507);
   hmcerror__5->SetBinContent(6,680.0009);
   hmcerror__5->SetBinContent(7,697.982);
   hmcerror__5->SetBinContent(8,618.8679);
   hmcerror__5->SetBinContent(9,508.3758);
   hmcerror__5->SetBinContent(10,447.9079);
   hmcerror__5->SetBinContent(11,354.7387);
   hmcerror__5->SetBinContent(12,278.8553);
   hmcerror__5->SetBinContent(13,219.3665);
   hmcerror__5->SetBinContent(14,160.6376);
   hmcerror__5->SetBinContent(15,123.0464);
   hmcerror__5->SetBinContent(16,101.0516);
   hmcerror__5->SetBinContent(17,68.85485);
   hmcerror__5->SetBinContent(18,55.32349);
   hmcerror__5->SetBinContent(19,48.11711);
   hmcerror__5->SetBinContent(20,40.13585);
   hmcerror__5->SetBinContent(21,28.05491);
   hmcerror__5->SetBinContent(22,26.20571);
   hmcerror__5->SetBinContent(23,17.42214);
   hmcerror__5->SetBinContent(24,13.82442);
   hmcerror__5->SetBinContent(25,59.09401);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,4.766875);
   hmcerror__5->SetBinError(3,36.78294);
   hmcerror__5->SetBinError(4,135.9809);
   hmcerror__5->SetBinError(5,161.8341);
   hmcerror__5->SetBinError(6,176.8255);
   hmcerror__5->SetBinError(7,222.4825);
   hmcerror__5->SetBinError(8,219.6908);
   hmcerror__5->SetBinError(9,193.5824);
   hmcerror__5->SetBinError(10,161.5668);
   hmcerror__5->SetBinError(11,126.4163);
   hmcerror__5->SetBinError(12,98.80025);
   hmcerror__5->SetBinError(13,86.31354);
   hmcerror__5->SetBinError(14,57.5557);
   hmcerror__5->SetBinError(15,45.625);
   hmcerror__5->SetBinError(16,49.76022);
   hmcerror__5->SetBinError(17,24.83362);
   hmcerror__5->SetBinError(18,22.87152);
   hmcerror__5->SetBinError(19,20.25018);
   hmcerror__5->SetBinError(20,20.47234);
   hmcerror__5->SetBinError(21,14.6703);
   hmcerror__5->SetBinError(22,14.83041);
   hmcerror__5->SetBinError(23,11.57659);
   hmcerror__5->SetBinError(24,7.944918);
   hmcerror__5->SetBinError(25,25.31432);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3005[24] = {
   0,
   1,
   167,
   575,
   671,
   681,
   591,
   447,
   382,
   355,
   236,
   200,
   161,
   108,
   82,
   67,
   46,
   49,
   41,
   29,
   11,
   10,
   17,
   5};
   Double_t _felx3005[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3005[24] = {
   0,
   1,
   12.92285,
   23.97916,
   25.90367,
   26.09598,
   24.31049,
   21.14237,
   19.54482,
   18.84144,
   15.36229,
   14.14214,
   12.68858,
   10.3923,
   9.1791,
   8.3119,
   6.9153,
   7.1318,
   6.5384,
   5.5285,
   3.4975,
   3.34883,
   4.2835,
   2.48995};
   Double_t _fehx3005[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3005[24] = {
   1.1478,
   1.35971,
   12.92285,
   23.97916,
   25.90367,
   26.09598,
   24.31049,
   21.14237,
   19.54482,
   18.84144,
   15.36229,
   14.14214,
   12.68858,
   10.3923,
   8.9774,
   8.1094,
   6.7108,
   6.9277,
   6.3331,
   5.3201,
   3.27,
   3.1179,
   4.0673,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1760);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(777.8056);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 464.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 396.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2464.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  461.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 763.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 429.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 429.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3006[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3006[24] = {
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
   Double_t _felx3006[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3006[24] = {
   0,
   1.040566,
   0.2970098,
   0.2875103,
   0.2530607,
   0.2600372,
   0.318751,
   0.3549881,
   0.380786,
   0.3607144,
   0.3563645,
   0.3543066,
   0.3934672,
   0.3582953,
   0.3707952,
   0.4924241,
   0.3606663,
   0.4134143,
   0.4208521,
   0.5100761,
   0.5229136,
   0.5659229,
   0.6644757,
   0.5747016};
   Double_t _fehx3006[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3006[24] = {
   0,
   1.040566,
   0.2970098,
   0.2875103,
   0.2530607,
   0.2600372,
   0.318751,
   0.3549881,
   0.380786,
   0.3607144,
   0.3563645,
   0.3543066,
   0.3934672,
   0.3582953,
   0.3707952,
   0.4924241,
   0.3606663,
   0.4134143,
   0.4208521,
   0.5100761,
   0.5229136,
   0.5659229,
   0.6644757,
   0.5747016};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1760);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3007[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3007[24] = {
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
   Double_t _felx3007[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3007[24] = {
   0,
   0.3614542,
   0.2425251,
   0.2391594,
   0.2203592,
   0.2486669,
   0.3094624,
   0.3494898,
   0.368297,
   0.3523429,
   0.3368491,
   0.3215153,
   0.3201588,
   0.3044896,
   0.2673537,
   0.2643499,
   0.2521569,
   0.2390662,
   0.2343084,
   0.2511865,
   0.2321864,
   0.2566875,
   0.2565983,
   0.252684};
   Double_t _fehx3007[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3007[24] = {
   0,
   0.3614542,
   0.2425251,
   0.2391594,
   0.2203592,
   0.2486669,
   0.3094624,
   0.3494898,
   0.368297,
   0.3523429,
   0.3368491,
   0.3215153,
   0.3201588,
   0.3044896,
   0.2673537,
   0.2643499,
   0.2521569,
   0.2390662,
   0.2343084,
   0.2511865,
   0.2321864,
   0.2566875,
   0.2565983,
   0.252684};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1760);
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
   
   Double_t _fx3008[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3008[24] = {
   10,
   0.218291,
   1.348469,
   1.215747,
   1.049246,
   1.001469,
   0.8467267,
   0.7222866,
   0.7514127,
   0.7925737,
   0.6652785,
   0.717218,
   0.7339315,
   0.6723207,
   0.6664155,
   0.6630278,
   0.668072,
   0.8856997,
   0.8520878,
   0.7225461,
   0.3920882,
   0.3815962,
   0.9757701,
   0.3616787};
   Double_t _felx3008[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3008[24] = {
   0,
   0.218291,
   0.1043476,
   0.05070017,
   0.04050569,
   0.03837639,
   0.03482968,
   0.03416298,
   0.03844562,
   0.04206544,
   0.04330594,
   0.05071497,
   0.05784191,
   0.06469409,
   0.07459871,
   0.08225404,
   0.100433,
   0.1289109,
   0.1358851,
   0.1377447,
   0.1246662,
   0.1277901,
   0.2458654,
   0.1801124};
   Double_t _fehx3008[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3008[24] = {
   0,
   0.2968124,
   0.1043476,
   0.05070017,
   0.04050569,
   0.03837639,
   0.03482968,
   0.03416298,
   0.03844562,
   0.04206544,
   0.04330594,
   0.05071497,
   0.05784191,
   0.06469409,
   0.07295949,
   0.08025012,
   0.097463,
   0.1252217,
   0.1316185,
   0.1325523,
   0.1165571,
   0.1189779,
   0.2334559,
   0.1599083};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1760);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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
