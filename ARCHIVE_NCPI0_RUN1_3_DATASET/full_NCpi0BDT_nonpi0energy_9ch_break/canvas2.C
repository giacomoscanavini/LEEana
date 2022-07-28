#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Jun  5 00:41:46 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-153.8462,-23.06571,1128.205,2550.581);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__4->SetBinContent(0,80.66783);
   hmc__4->SetBinContent(1,1153.285);
   hmc__4->SetBinContent(2,875.8964);
   hmc__4->SetBinContent(3,740.5411);
   hmc__4->SetBinContent(4,645.0823);
   hmc__4->SetBinContent(5,541.4705);
   hmc__4->SetBinContent(6,417.2901);
   hmc__4->SetBinContent(7,332.95);
   hmc__4->SetBinContent(8,231.3298);
   hmc__4->SetBinContent(9,161.0279);
   hmc__4->SetBinContent(10,123.1152);
   hmc__4->SetBinContent(11,87.61311);
   hmc__4->SetBinContent(12,58.65561);
   hmc__4->SetBinContent(13,40.02952);
   hmc__4->SetBinContent(14,36.0799);
   hmc__4->SetBinContent(15,21.95063);
   hmc__4->SetBinContent(16,74.50372);
   hmc__4->SetBinError(0,4.990468);
   hmc__4->SetBinError(1,255.9114);
   hmc__4->SetBinError(2,188.551);
   hmc__4->SetBinError(3,159.4773);
   hmc__4->SetBinError(4,143.1743);
   hmc__4->SetBinError(5,122.7988);
   hmc__4->SetBinError(6,93.03413);
   hmc__4->SetBinError(7,76.20972);
   hmc__4->SetBinError(8,57.09561);
   hmc__4->SetBinError(9,40.87421);
   hmc__4->SetBinError(10,32.78598);
   hmc__4->SetBinError(11,25.81211);
   hmc__4->SetBinError(12,16.51064);
   hmc__4->SetBinError(13,14.6375);
   hmc__4->SetBinError(14,15.56919);
   hmc__4->SetBinError(15,9.404042);
   hmc__4->SetBinError(16,29.6682);
   hmc__4->SetMinimum(-23.06571);
   hmc__4->SetMaximum(2421.899);
   hmc__4->SetEntries(5560.658);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",15,0,1000);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(1210.95);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,1.150919);
   hbadmatch_stack_1->SetBinContent(1,20.05336);
   hbadmatch_stack_1->SetBinContent(2,16.85355);
   hbadmatch_stack_1->SetBinContent(3,11.28419);
   hbadmatch_stack_1->SetBinContent(4,15.73038);
   hbadmatch_stack_1->SetBinContent(5,13.18693);
   hbadmatch_stack_1->SetBinContent(6,13.20615);
   hbadmatch_stack_1->SetBinContent(7,8.993194);
   hbadmatch_stack_1->SetBinContent(8,7.093679);
   hbadmatch_stack_1->SetBinContent(9,2.144191);
   hbadmatch_stack_1->SetBinContent(10,3.941468);
   hbadmatch_stack_1->SetBinContent(11,3.159833);
   hbadmatch_stack_1->SetBinContent(12,2.238678);
   hbadmatch_stack_1->SetBinContent(13,1.749863);
   hbadmatch_stack_1->SetBinContent(14,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,2.699889);
   hbadmatch_stack_1->SetBinError(0,0.5975644);
   hbadmatch_stack_1->SetBinError(1,2.799147);
   hbadmatch_stack_1->SetBinError(2,2.28501);
   hbadmatch_stack_1->SetBinError(3,1.874336);
   hbadmatch_stack_1->SetBinError(4,2.902237);
   hbadmatch_stack_1->SetBinError(5,1.785618);
   hbadmatch_stack_1->SetBinError(6,2.403485);
   hbadmatch_stack_1->SetBinError(7,1.595553);
   hbadmatch_stack_1->SetBinError(8,1.41996);
   hbadmatch_stack_1->SetBinError(9,0.7850774);
   hbadmatch_stack_1->SetBinError(10,0.9802824);
   hbadmatch_stack_1->SetBinError(11,0.9957007);
   hbadmatch_stack_1->SetBinError(12,0.8239801);
   hbadmatch_stack_1->SetBinError(13,0.6800199);
   hbadmatch_stack_1->SetBinError(14,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.8014537);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,31.991);
   hext_stack_2->SetBinContent(1,106.2936);
   hext_stack_2->SetBinContent(2,70.77563);
   hext_stack_2->SetBinContent(3,55.01817);
   hext_stack_2->SetBinContent(4,44.84608);
   hext_stack_2->SetBinContent(5,34.2546);
   hext_stack_2->SetBinContent(6,33.00614);
   hext_stack_2->SetBinContent(7,26.5524);
   hext_stack_2->SetBinContent(8,12.35349);
   hext_stack_2->SetBinContent(9,9.716425);
   hext_stack_2->SetBinContent(10,11.69311);
   hext_stack_2->SetBinContent(11,6.318);
   hext_stack_2->SetBinContent(12,6.710238);
   hext_stack_2->SetBinContent(13,2.67738);
   hext_stack_2->SetBinContent(14,1.697008);
   hext_stack_2->SetBinContent(15,2.517386);
   hext_stack_2->SetBinContent(16,10.33209);
   hext_stack_2->SetBinError(0,3.93117);
   hext_stack_2->SetBinError(1,7.095441);
   hext_stack_2->SetBinError(2,5.66171);
   hext_stack_2->SetBinError(3,4.98774);
   hext_stack_2->SetBinError(4,4.428913);
   hext_stack_2->SetBinError(5,4.048695);
   hext_stack_2->SetBinError(6,3.920505);
   hext_stack_2->SetBinError(7,3.621967);
   hext_stack_2->SetBinError(8,2.477907);
   hext_stack_2->SetBinError(9,2.08978);
   hext_stack_2->SetBinError(10,2.448599);
   hext_stack_2->SetBinError(11,1.630074);
   hext_stack_2->SetBinError(12,1.795792);
   hext_stack_2->SetBinError(13,0.9497147);
   hext_stack_2->SetBinError(14,0.8873887);
   hext_stack_2->SetBinError(15,0.9575503);
   hext_stack_2->SetBinError(16,2.290706);
   hext_stack_2->SetEntries(1085);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,0.7139341);
   hdirt_stack_3->SetBinContent(1,15.99267);
   hdirt_stack_3->SetBinContent(2,9.82595);
   hdirt_stack_3->SetBinContent(3,7.010402);
   hdirt_stack_3->SetBinContent(4,5.400639);
   hdirt_stack_3->SetBinContent(5,3.554506);
   hdirt_stack_3->SetBinContent(6,2.758566);
   hdirt_stack_3->SetBinContent(7,1.93757);
   hdirt_stack_3->SetBinContent(8,4.167396e-09);
   hdirt_stack_3->SetBinContent(9,0.7241209);
   hdirt_stack_3->SetBinContent(10,0.7319759);
   hdirt_stack_3->SetBinContent(11,0.2761429);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinError(0,0.3660028);
   hdirt_stack_3->SetBinError(1,2.150931);
   hdirt_stack_3->SetBinError(2,1.615354);
   hdirt_stack_3->SetBinError(3,1.648529);
   hdirt_stack_3->SetBinError(4,1.40693);
   hdirt_stack_3->SetBinError(5,0.9513946);
   hdirt_stack_3->SetBinError(6,0.855458);
   hdirt_stack_3->SetBinError(7,0.7181514);
   hdirt_stack_3->SetBinError(8,4.167396e-09);
   hdirt_stack_3->SetBinError(9,0.3699659);
   hdirt_stack_3->SetBinError(10,0.5190762);
   hdirt_stack_3->SetBinError(11,0.1952625);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,4.301298);
   houtFV_stack_4->SetBinContent(1,125.0182);
   houtFV_stack_4->SetBinContent(2,88.40117);
   houtFV_stack_4->SetBinContent(3,56.02558);
   houtFV_stack_4->SetBinContent(4,40.13136);
   houtFV_stack_4->SetBinContent(5,26.30978);
   houtFV_stack_4->SetBinContent(6,20.89944);
   houtFV_stack_4->SetBinContent(7,12.26679);
   houtFV_stack_4->SetBinContent(8,6.239817);
   houtFV_stack_4->SetBinContent(9,6.139855);
   houtFV_stack_4->SetBinContent(10,3.374355);
   houtFV_stack_4->SetBinContent(11,3.164724);
   houtFV_stack_4->SetBinContent(12,1.041462);
   houtFV_stack_4->SetBinContent(13,1.123658);
   houtFV_stack_4->SetBinContent(14,0.7868615);
   houtFV_stack_4->SetBinContent(15,0.3917402);
   houtFV_stack_4->SetBinContent(16,1.607298);
   houtFV_stack_4->SetBinError(0,1.019492);
   houtFV_stack_4->SetBinError(1,5.564837);
   houtFV_stack_4->SetBinError(2,4.700556);
   houtFV_stack_4->SetBinError(3,3.748437);
   houtFV_stack_4->SetBinError(4,3.163852);
   houtFV_stack_4->SetBinError(5,2.565261);
   houtFV_stack_4->SetBinError(6,2.306401);
   houtFV_stack_4->SetBinError(7,1.784391);
   houtFV_stack_4->SetBinError(8,1.249513);
   houtFV_stack_4->SetBinError(9,1.271868);
   houtFV_stack_4->SetBinError(10,0.8993757);
   houtFV_stack_4->SetBinError(11,0.9815849);
   houtFV_stack_4->SetBinError(12,0.4690604);
   houtFV_stack_4->SetBinError(13,0.5188295);
   houtFV_stack_4->SetBinError(14,0.3934307);
   houtFV_stack_4->SetBinError(15,0.2770047);
   houtFV_stack_4->SetBinError(16,0.6796534);
   houtFV_stack_4->SetEntries(1712);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,1.561408);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,54.73206);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,13.95454);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.584176);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.898718);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.538244);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.355898);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.393176);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.3689095);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.468187);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.218674);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8600939);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8235303);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4783893);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4939998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3348993);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.697098);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.030074);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.220302);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.733712);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.122984);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.75754);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.296522);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.883094);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6208459);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6841254);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5607299);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5167825);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5522203);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4010103);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2986537);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4863911);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,19.04681);
   hNCpi0inFVres_stack_7->SetBinContent(1,563.1327);
   hNCpi0inFVres_stack_7->SetBinContent(2,459.2444);
   hNCpi0inFVres_stack_7->SetBinContent(3,379.729);
   hNCpi0inFVres_stack_7->SetBinContent(4,302.1456);
   hNCpi0inFVres_stack_7->SetBinContent(5,238.9022);
   hNCpi0inFVres_stack_7->SetBinContent(6,163.337);
   hNCpi0inFVres_stack_7->SetBinContent(7,116.6487);
   hNCpi0inFVres_stack_7->SetBinContent(8,76.09724);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.48204);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.67435);
   hNCpi0inFVres_stack_7->SetBinContent(11,22.42623);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.17699);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.897316);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.275532);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.91897);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.1845);
   hNCpi0inFVres_stack_7->SetBinError(0,1.444585);
   hNCpi0inFVres_stack_7->SetBinError(1,7.723503);
   hNCpi0inFVres_stack_7->SetBinError(2,7.000567);
   hNCpi0inFVres_stack_7->SetBinError(3,6.405396);
   hNCpi0inFVres_stack_7->SetBinError(4,5.663075);
   hNCpi0inFVres_stack_7->SetBinError(5,5.079512);
   hNCpi0inFVres_stack_7->SetBinError(6,4.159001);
   hNCpi0inFVres_stack_7->SetBinError(7,3.559023);
   hNCpi0inFVres_stack_7->SetBinError(8,2.886856);
   hNCpi0inFVres_stack_7->SetBinError(9,2.416031);
   hNCpi0inFVres_stack_7->SetBinError(10,1.880745);
   hNCpi0inFVres_stack_7->SetBinError(11,1.650582);
   hNCpi0inFVres_stack_7->SetBinError(12,1.208895);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9960755);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8057328);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6470412);
   hNCpi0inFVres_stack_7->SetBinError(16,1.180008);
   hNCpi0inFVres_stack_7->SetEntries(45534);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,2.256084);
   hNCpi0inFVdis_stack_8->SetBinContent(1,92.96085);
   hNCpi0inFVdis_stack_8->SetBinContent(2,67.60909);
   hNCpi0inFVdis_stack_8->SetBinContent(3,57.4073);
   hNCpi0inFVdis_stack_8->SetBinContent(4,56.47995);
   hNCpi0inFVdis_stack_8->SetBinContent(5,47.13094);
   hNCpi0inFVdis_stack_8->SetBinContent(6,34.32127);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.73695);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.65796);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.78316);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.67229);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.589752);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.48545);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.419842);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.067184);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.230016);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.217731);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.4204359);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.161625);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.638983);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.444962);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.437735);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.263505);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.87086);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.733168);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.513165);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.301231);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.115835);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9985472);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8448757);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6779817);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5508089);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4972718);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7372912);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.5025361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2820092);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,6.123299);
   hCCpi0inFV_stack_11->SetBinContent(1,63.58232);
   hCCpi0inFV_stack_11->SetBinContent(2,72.35581);
   hCCpi0inFV_stack_11->SetBinContent(3,86.50406);
   hCCpi0inFV_stack_11->SetBinContent(4,94.27551);
   hCCpi0inFV_stack_11->SetBinContent(5,93.64438);
   hCCpi0inFV_stack_11->SetBinContent(6,86.19498);
   hCCpi0inFV_stack_11->SetBinContent(7,80.76111);
   hCCpi0inFV_stack_11->SetBinContent(8,64.5789);
   hCCpi0inFV_stack_11->SetBinContent(9,41.96616);
   hCCpi0inFV_stack_11->SetBinContent(10,34.94109);
   hCCpi0inFV_stack_11->SetBinContent(11,28.55433);
   hCCpi0inFV_stack_11->SetBinContent(12,17.19607);
   hCCpi0inFV_stack_11->SetBinContent(13,14.65208);
   hCCpi0inFV_stack_11->SetBinContent(14,16.53897);
   hCCpi0inFV_stack_11->SetBinContent(15,9.91776);
   hCCpi0inFV_stack_11->SetBinContent(16,26.91282);
   hCCpi0inFV_stack_11->SetBinError(0,1.161313);
   hCCpi0inFV_stack_11->SetBinError(1,3.919266);
   hCCpi0inFV_stack_11->SetBinError(2,4.274104);
   hCCpi0inFV_stack_11->SetBinError(3,4.651714);
   hCCpi0inFV_stack_11->SetBinError(4,4.905156);
   hCCpi0inFV_stack_11->SetBinError(5,4.837033);
   hCCpi0inFV_stack_11->SetBinError(6,4.558948);
   hCCpi0inFV_stack_11->SetBinError(7,4.493398);
   hCCpi0inFV_stack_11->SetBinError(8,4.120776);
   hCCpi0inFV_stack_11->SetBinError(9,3.248867);
   hCCpi0inFV_stack_11->SetBinError(10,2.945453);
   hCCpi0inFV_stack_11->SetBinError(11,2.668505);
   hCCpi0inFV_stack_11->SetBinError(12,2.091769);
   hCCpi0inFV_stack_11->SetBinError(13,1.945168);
   hCCpi0inFV_stack_11->SetBinError(14,2.053775);
   hCCpi0inFV_stack_11->SetBinError(15,1.593986);
   hCCpi0inFV_stack_11->SetBinError(16,2.617253);
   hCCpi0inFV_stack_11->SetEntries(3599);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,4.643166);
   hNCinFV_stack_12->SetBinContent(1,52.31443);
   hNCinFV_stack_12->SetBinContent(2,30.77483);
   hNCinFV_stack_12->SetBinContent(3,26.91407);
   hNCinFV_stack_12->SetBinContent(4,28.43912);
   hNCinFV_stack_12->SetBinContent(5,32.0521);
   hNCinFV_stack_12->SetBinContent(6,21.14832);
   hNCinFV_stack_12->SetBinContent(7,19.83194);
   hNCinFV_stack_12->SetBinContent(8,12.99748);
   hNCinFV_stack_12->SetBinContent(9,13.61951);
   hNCinFV_stack_12->SetBinContent(10,8.644623);
   hNCinFV_stack_12->SetBinContent(11,3.967882);
   hNCinFV_stack_12->SetBinContent(12,2.979234);
   hNCinFV_stack_12->SetBinContent(13,2.052291);
   hNCinFV_stack_12->SetBinContent(14,3.949895);
   hNCinFV_stack_12->SetBinContent(15,2.053982);
   hNCinFV_stack_12->SetBinContent(16,4.881909);
   hNCinFV_stack_12->SetBinError(0,1.075057);
   hNCinFV_stack_12->SetBinError(1,3.6668);
   hNCinFV_stack_12->SetBinError(2,2.774825);
   hNCinFV_stack_12->SetBinError(3,2.625897);
   hNCinFV_stack_12->SetBinError(4,2.628452);
   hNCinFV_stack_12->SetBinError(5,2.837223);
   hNCinFV_stack_12->SetBinError(6,2.29618);
   hNCinFV_stack_12->SetBinError(7,2.272556);
   hNCinFV_stack_12->SetBinError(8,1.798546);
   hNCinFV_stack_12->SetBinError(9,1.87151);
   hNCinFV_stack_12->SetBinError(10,1.494788);
   hNCinFV_stack_12->SetBinError(11,0.9624406);
   hNCinFV_stack_12->SetBinError(12,0.8548804);
   hNCinFV_stack_12->SetBinError(13,0.7073425);
   hNCinFV_stack_12->SetBinError(14,1.057182);
   hNCinFV_stack_12->SetBinError(15,0.7078105);
   hNCinFV_stack_12->SetBinError(16,1.161942);
   hNCinFV_stack_12->SetEntries(1151);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,8.456031);
   hnumuCCinFV_stack_13->SetBinContent(1,44.69482);
   hnumuCCinFV_stack_13->SetBinContent(2,36.34335);
   hnumuCCinFV_stack_13->SetBinContent(3,44.89138);
   hnumuCCinFV_stack_13->SetBinContent(4,45.94942);
   hnumuCCinFV_stack_13->SetBinContent(5,41.92075);
   hnumuCCinFV_stack_13->SetBinContent(6,36.55849);
   hnumuCCinFV_stack_13->SetBinContent(7,30.8715);
   hnumuCCinFV_stack_13->SetBinContent(8,25.52223);
   hnumuCCinFV_stack_13->SetBinContent(9,14.79938);
   hnumuCCinFV_stack_13->SetBinContent(10,12.45597);
   hnumuCCinFV_stack_13->SetBinContent(11,10.03916);
   hnumuCCinFV_stack_13->SetBinContent(12,8.18589);
   hnumuCCinFV_stack_13->SetBinContent(13,3.47652);
   hnumuCCinFV_stack_13->SetBinContent(14,2.881967);
   hnumuCCinFV_stack_13->SetBinContent(15,0.8928754);
   hnumuCCinFV_stack_13->SetBinContent(16,8.685689);
   hnumuCCinFV_stack_13->SetBinError(0,1.70239);
   hnumuCCinFV_stack_13->SetBinError(1,4.189264);
   hnumuCCinFV_stack_13->SetBinError(2,3.44915);
   hnumuCCinFV_stack_13->SetBinError(3,4.753655);
   hnumuCCinFV_stack_13->SetBinError(4,3.927878);
   hnumuCCinFV_stack_13->SetBinError(5,3.985058);
   hnumuCCinFV_stack_13->SetBinError(6,3.307133);
   hnumuCCinFV_stack_13->SetBinError(7,3.098659);
   hnumuCCinFV_stack_13->SetBinError(8,3.057928);
   hnumuCCinFV_stack_13->SetBinError(9,2.184834);
   hnumuCCinFV_stack_13->SetBinError(10,1.915537);
   hnumuCCinFV_stack_13->SetBinError(11,1.704382);
   hnumuCCinFV_stack_13->SetBinError(12,1.663136);
   hnumuCCinFV_stack_13->SetBinError(13,0.9237707);
   hnumuCCinFV_stack_13->SetBinError(14,0.8577475);
   hnumuCCinFV_stack_13->SetBinError(15,0.4794763);
   hnumuCCinFV_stack_13->SetBinError(16,1.504904);
   hnumuCCinFV_stack_13->SetEntries(1455);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(0,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(1,10.50625);
   hnueCCinFV_stack_14->SetBinContent(2,5.463138);
   hnueCCinFV_stack_14->SetBinContent(3,4.449966);
   hnueCCinFV_stack_14->SetBinContent(4,2.77256);
   hnueCCinFV_stack_14->SetBinContent(5,4.741583);
   hnueCCinFV_stack_14->SetBinContent(6,1.537316);
   hnueCCinFV_stack_14->SetBinContent(7,3.604346);
   hnueCCinFV_stack_14->SetBinContent(8,2.250391);
   hnueCCinFV_stack_14->SetBinContent(9,1.495001);
   hnueCCinFV_stack_14->SetBinContent(10,1.539397);
   hnueCCinFV_stack_14->SetBinContent(11,0.7820846);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(13,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,1.26712);
   hnueCCinFV_stack_14->SetBinError(0,0.3401776);
   hnueCCinFV_stack_14->SetBinError(1,2.133835);
   hnueCCinFV_stack_14->SetBinError(2,1.338997);
   hnueCCinFV_stack_14->SetBinError(3,1.083722);
   hnueCCinFV_stack_14->SetBinError(4,0.7734127);
   hnueCCinFV_stack_14->SetBinError(5,1.976773);
   hnueCCinFV_stack_14->SetBinError(6,0.595902);
   hnueCCinFV_stack_14->SetBinError(7,1.205707);
   hnueCCinFV_stack_14->SetBinError(8,1.062314);
   hnueCCinFV_stack_14->SetBinError(9,0.6202474);
   hnueCCinFV_stack_14->SetBinError(10,0.8198597);
   hnueCCinFV_stack_14->SetBinError(11,0.463181);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(13,0.4531728);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,0.5883944);
   hnueCCinFV_stack_14->SetEntries(151);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__5->SetBinContent(0,80.66783);
   hmcerror__5->SetBinContent(1,1153.285);
   hmcerror__5->SetBinContent(2,875.8964);
   hmcerror__5->SetBinContent(3,740.5411);
   hmcerror__5->SetBinContent(4,645.0823);
   hmcerror__5->SetBinContent(5,541.4705);
   hmcerror__5->SetBinContent(6,417.2901);
   hmcerror__5->SetBinContent(7,332.95);
   hmcerror__5->SetBinContent(8,231.3298);
   hmcerror__5->SetBinContent(9,161.0279);
   hmcerror__5->SetBinContent(10,123.1152);
   hmcerror__5->SetBinContent(11,87.61311);
   hmcerror__5->SetBinContent(12,58.65561);
   hmcerror__5->SetBinContent(13,40.02952);
   hmcerror__5->SetBinContent(14,36.0799);
   hmcerror__5->SetBinContent(15,21.95063);
   hmcerror__5->SetBinContent(16,74.50372);
   hmcerror__5->SetBinError(0,4.990468);
   hmcerror__5->SetBinError(1,255.9114);
   hmcerror__5->SetBinError(2,188.551);
   hmcerror__5->SetBinError(3,159.4773);
   hmcerror__5->SetBinError(4,143.1743);
   hmcerror__5->SetBinError(5,122.7988);
   hmcerror__5->SetBinError(6,93.03413);
   hmcerror__5->SetBinError(7,76.20972);
   hmcerror__5->SetBinError(8,57.09561);
   hmcerror__5->SetBinError(9,40.87421);
   hmcerror__5->SetBinError(10,32.78598);
   hmcerror__5->SetBinError(11,25.81211);
   hmcerror__5->SetBinError(12,16.51064);
   hmcerror__5->SetBinError(13,14.6375);
   hmcerror__5->SetBinError(14,15.56919);
   hmcerror__5->SetBinError(15,9.404042);
   hmcerror__5->SetBinError(16,29.6682);
   hmcerror__5->SetEntries(5560.658);

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
   
   Double_t _fx3005[15] = {
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
   966.6667};
   Double_t _fy3005[15] = {
   1062,
   785,
   616,
   537,
   398,
   315,
   235,
   164,
   121,
   76,
   57,
   39,
   28,
   20,
   19};
   Double_t _felx3005[15] = {
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
   Double_t _fely3005[15] = {
   32.58834,
   28.01785,
   24.81935,
   23.17326,
   19.94994,
   17.74824,
   15.32971,
   12.80625,
   11,
   8.8425,
   7.679,
   6.3813,
   5.4358,
   4.6266,
   4.5151};
   Double_t _fehx3005[15] = {
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
   Double_t _fehy3005[15] = {
   32.58834,
   28.01785,
   24.81935,
   23.17326,
   19.94994,
   17.74824,
   15.32971,
   12.80625,
   11,
   8.6406,
   7.4757,
   6.1757,
   5.2271,
   4.4133,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1100);
   Graph_Graph3005->SetMinimum(13.03641);
   Graph_Graph3005->SetMaximum(1202.599);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4472.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 120.2","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 424.4","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 48.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 391.3","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.7","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2440.1","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  459.6","F");

   ci = 1455;
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

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 805.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 261.7","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 359.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 40.1","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3006[15] = {
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
   966.6667};
   Double_t _fy3006[15] = {
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
   Double_t _felx3006[15] = {
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
   Double_t _fely3006[15] = {
   0.2218978,
   0.2152663,
   0.2153524,
   0.2219474,
   0.2267876,
   0.2229483,
   0.2288924,
   0.2468148,
   0.2538331,
   0.2663033,
   0.2946147,
   0.2814844,
   0.3656677,
   0.4315198,
   0.4284178};
   Double_t _fehx3006[15] = {
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
   Double_t _fehy3006[15] = {
   0.2218978,
   0.2152663,
   0.2153524,
   0.2219474,
   0.2267876,
   0.2229483,
   0.2288924,
   0.2468148,
   0.2538331,
   0.2663033,
   0.2946147,
   0.2814844,
   0.3656677,
   0.4315198,
   0.4284178};
   grae = new TGraphAsymmErrors(15,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1100);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[15] = {
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
   966.6667};
   Double_t _fy3007[15] = {
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
   Double_t _felx3007[15] = {
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
   Double_t _fely3007[15] = {
   0.1996971,
   0.2114408,
   0.2131651,
   0.2187985,
   0.2196335,
   0.216018,
   0.2141642,
   0.2253376,
   0.2225149,
   0.2180543,
   0.215519,
   0.2114469,
   0.2185815,
   0.2378108,
   0.2457747};
   Double_t _fehx3007[15] = {
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
   Double_t _fehy3007[15] = {
   0.1996971,
   0.2114408,
   0.2131651,
   0.2187985,
   0.2196335,
   0.216018,
   0.2141642,
   0.2253376,
   0.2225149,
   0.2180543,
   0.215519,
   0.2114469,
   0.2185815,
   0.2378108,
   0.2457747};
   grae = new TGraphAsymmErrors(15,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1100);
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
   
   Double_t _fx3008[15] = {
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
   966.6667};
   Double_t _fy3008[15] = {
   0.9208476,
   0.8962247,
   0.8318242,
   0.832452,
   0.7350354,
   0.7548706,
   0.7058117,
   0.7089446,
   0.7514227,
   0.6173081,
   0.6505876,
   0.6648981,
   0.6994838,
   0.5543253,
   0.8655788};
   Double_t _felx3008[15] = {
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
   Double_t _fely3008[15] = {
   0.02825696,
   0.03198763,
   0.03351515,
   0.03592295,
   0.036844,
   0.04253214,
   0.04604208,
   0.05535927,
   0.06831115,
   0.07182298,
   0.0876467,
   0.1087927,
   0.1357948,
   0.1282321,
   0.2056934};
   Double_t _fehx3008[15] = {
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
   Double_t _fehy3008[15] = {
   0.02825696,
   0.03198763,
   0.03351515,
   0.03592295,
   0.036844,
   0.04253214,
   0.04604208,
   0.05535927,
   0.06831115,
   0.07018305,
   0.08532628,
   0.1052875,
   0.1305811,
   0.1223202,
   0.1959443};
   grae = new TGraphAsymmErrors(15,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1100);
   Graph_Graph3008->SetMinimum(0.3625502);
   Graph_Graph3008->SetMaximum(1.125066);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",15,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
