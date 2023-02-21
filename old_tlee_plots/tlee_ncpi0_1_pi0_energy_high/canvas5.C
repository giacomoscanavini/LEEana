#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 18:31:53 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",60,83,1200,900);
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
   pad1->Range(-92.30769,-8.14,676.9231,900.1126);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__13->SetBinContent(1,18.49519);
   hmc__13->SetBinContent(2,94.96448);
   hmc__13->SetBinContent(3,236.9071);
   hmc__13->SetBinContent(4,376.0737);
   hmc__13->SetBinContent(5,400.8615);
   hmc__13->SetBinContent(6,380.014);
   hmc__13->SetBinContent(7,285.4789);
   hmc__13->SetBinContent(8,227.2839);
   hmc__13->SetBinContent(9,194.2212);
   hmc__13->SetBinContent(10,154.8545);
   hmc__13->SetBinContent(11,127.4515);
   hmc__13->SetBinContent(12,100.8755);
   hmc__13->SetBinContent(13,71.99776);
   hmc__13->SetBinContent(14,67.20039);
   hmc__13->SetBinContent(15,46.40577);
   hmc__13->SetBinContent(16,37.78554);
   hmc__13->SetBinContent(17,29.84857);
   hmc__13->SetBinContent(18,20.18818);
   hmc__13->SetBinContent(19,19.15846);
   hmc__13->SetBinContent(20,18.08253);
   hmc__13->SetBinContent(21,141.4962);
   hmc__13->SetBinError(1,9.657729);
   hmc__13->SetBinError(2,33.65394);
   hmc__13->SetBinError(3,86.70525);
   hmc__13->SetBinError(4,151.5699);
   hmc__13->SetBinError(5,163.7545);
   hmc__13->SetBinError(6,149.0269);
   hmc__13->SetBinError(7,114.4026);
   hmc__13->SetBinError(8,90.42759);
   hmc__13->SetBinError(9,71.67672);
   hmc__13->SetBinError(10,61.52866);
   hmc__13->SetBinError(11,44.2324);
   hmc__13->SetBinError(12,38.50683);
   hmc__13->SetBinError(13,27.04735);
   hmc__13->SetBinError(14,34.92741);
   hmc__13->SetBinError(15,18.31017);
   hmc__13->SetBinError(16,15.65375);
   hmc__13->SetBinError(17,10.4386);
   hmc__13->SetBinError(18,14.29695);
   hmc__13->SetBinError(19,13.30156);
   hmc__13->SetBinError(20,12.79453);
   hmc__13->SetBinError(21,52.45388);
   hmc__13->SetMinimum(-8.14);
   hmc__13->SetMaximum(854.7);
   hmc__13->SetEntries(3516.85);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,600);
   hs5_stack_5->SetMinimum(-9.474605e-09);
   hs5_stack_5->SetMaximum(420.9046);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.678984);
   hbadmatch_stack_1->SetBinContent(2,3.83556);
   hbadmatch_stack_1->SetBinContent(3,10.21705);
   hbadmatch_stack_1->SetBinContent(4,10.68979);
   hbadmatch_stack_1->SetBinContent(5,10.61689);
   hbadmatch_stack_1->SetBinContent(6,11.05925);
   hbadmatch_stack_1->SetBinContent(7,9.786887);
   hbadmatch_stack_1->SetBinContent(8,5.307122);
   hbadmatch_stack_1->SetBinContent(9,1.947719);
   hbadmatch_stack_1->SetBinContent(10,2.111021);
   hbadmatch_stack_1->SetBinContent(11,1.409155);
   hbadmatch_stack_1->SetBinContent(12,1.576227);
   hbadmatch_stack_1->SetBinContent(13,1.604503);
   hbadmatch_stack_1->SetBinContent(14,0.3073375);
   hbadmatch_stack_1->SetBinContent(15,0.6861275);
   hbadmatch_stack_1->SetBinContent(16,1.051766);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.4689288);
   hbadmatch_stack_1->SetBinContent(21,0.9835864);
   hbadmatch_stack_1->SetBinError(1,0.7177132);
   hbadmatch_stack_1->SetBinError(2,1.03953);
   hbadmatch_stack_1->SetBinError(3,1.717244);
   hbadmatch_stack_1->SetBinError(4,1.594934);
   hbadmatch_stack_1->SetBinError(5,2.043868);
   hbadmatch_stack_1->SetBinError(6,1.644886);
   hbadmatch_stack_1->SetBinError(7,2.44678);
   hbadmatch_stack_1->SetBinError(8,1.162431);
   hbadmatch_stack_1->SetBinError(9,0.8663269);
   hbadmatch_stack_1->SetBinError(10,0.7393844);
   hbadmatch_stack_1->SetBinError(11,0.7342126);
   hbadmatch_stack_1->SetBinError(12,0.8214992);
   hbadmatch_stack_1->SetBinError(13,0.6205903);
   hbadmatch_stack_1->SetBinError(14,0.225686);
   hbadmatch_stack_1->SetBinError(15,0.424757);
   hbadmatch_stack_1->SetBinError(16,0.5949559);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.3637275);
   hbadmatch_stack_1->SetBinError(21,0.4734238);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,5.248246);
   hext_stack_2->SetBinContent(2,20.05847);
   hext_stack_2->SetBinContent(3,30.71054);
   hext_stack_2->SetBinContent(4,38.9925);
   hext_stack_2->SetBinContent(5,36.46195);
   hext_stack_2->SetBinContent(6,44.6214);
   hext_stack_2->SetBinContent(7,24.28162);
   hext_stack_2->SetBinContent(8,15.21405);
   hext_stack_2->SetBinContent(9,15.33373);
   hext_stack_2->SetBinContent(10,8.966659);
   hext_stack_2->SetBinContent(11,10.2383);
   hext_stack_2->SetBinContent(12,3.412785);
   hext_stack_2->SetBinContent(13,5.647664);
   hext_stack_2->SetBinContent(14,3.006186);
   hext_stack_2->SetBinContent(15,0.6416141);
   hext_stack_2->SetBinContent(16,1.055394);
   hext_stack_2->SetBinContent(17,3.208071);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(20,1.461993);
   hext_stack_2->SetBinContent(21,6.870233);
   hext_stack_2->SetBinError(1,1.638217);
   hext_stack_2->SetBinError(2,3.012804);
   hext_stack_2->SetBinError(3,3.780798);
   hext_stack_2->SetBinError(4,4.410655);
   hext_stack_2->SetBinError(5,4.098926);
   hext_stack_2->SetBinError(6,4.771943);
   hext_stack_2->SetBinError(7,3.518808);
   hext_stack_2->SetBinError(8,2.625811);
   hext_stack_2->SetBinError(9,2.78403);
   hext_stack_2->SetBinError(10,2.088996);
   hext_stack_2->SetBinError(11,2.292013);
   hext_stack_2->SetBinError(12,1.14352);
   hext_stack_2->SetBinError(13,1.746505);
   hext_stack_2->SetBinError(14,1.068791);
   hext_stack_2->SetBinError(15,0.6416141);
   hext_stack_2->SetBinError(16,0.6130171);
   hext_stack_2->SetBinError(17,1.434693);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(20,0.7356036);
   hext_stack_2->SetBinError(21,1.791626);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(2,1.27781);
   hdirt_stack_3->SetBinContent(3,2.026138);
   hdirt_stack_3->SetBinContent(4,3.739629);
   hdirt_stack_3->SetBinContent(5,2.789512);
   hdirt_stack_3->SetBinContent(6,1.257105);
   hdirt_stack_3->SetBinContent(7,1.321688);
   hdirt_stack_3->SetBinContent(8,1.919721);
   hdirt_stack_3->SetBinContent(9,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.9324398);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinError(2,0.4982084);
   hdirt_stack_3->SetBinError(3,0.7683734);
   hdirt_stack_3->SetBinError(4,1.229733);
   hdirt_stack_3->SetBinError(5,0.8666231);
   hdirt_stack_3->SetBinError(6,0.6119204);
   hdirt_stack_3->SetBinError(7,0.5492171);
   hdirt_stack_3->SetBinError(8,0.8127126);
   hdirt_stack_3->SetBinError(9,0.258803);
   hdirt_stack_3->SetBinError(10,0.4844392);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,1.465526);
   houtFV_stack_4->SetBinContent(2,9.977143);
   houtFV_stack_4->SetBinContent(3,21.94163);
   houtFV_stack_4->SetBinContent(4,24.46103);
   houtFV_stack_4->SetBinContent(5,27.02335);
   houtFV_stack_4->SetBinContent(6,23.54983);
   houtFV_stack_4->SetBinContent(7,20.14537);
   houtFV_stack_4->SetBinContent(8,14.01219);
   houtFV_stack_4->SetBinContent(9,14.5929);
   houtFV_stack_4->SetBinContent(10,10.49198);
   houtFV_stack_4->SetBinContent(11,6.57267);
   houtFV_stack_4->SetBinContent(12,6.278953);
   houtFV_stack_4->SetBinContent(13,3.173617);
   houtFV_stack_4->SetBinContent(14,4.272887);
   houtFV_stack_4->SetBinContent(15,2.968129);
   houtFV_stack_4->SetBinContent(16,3.124033);
   houtFV_stack_4->SetBinContent(17,1.320373);
   houtFV_stack_4->SetBinContent(18,1.014857);
   houtFV_stack_4->SetBinContent(19,0.7709794);
   houtFV_stack_4->SetBinContent(20,1.761047);
   houtFV_stack_4->SetBinContent(21,4.151136);
   houtFV_stack_4->SetBinError(1,0.6209405);
   houtFV_stack_4->SetBinError(2,1.602504);
   houtFV_stack_4->SetBinError(3,2.298359);
   houtFV_stack_4->SetBinError(4,2.514022);
   houtFV_stack_4->SetBinError(5,2.640356);
   houtFV_stack_4->SetBinError(6,2.353177);
   houtFV_stack_4->SetBinError(7,2.217236);
   houtFV_stack_4->SetBinError(8,1.801794);
   houtFV_stack_4->SetBinError(9,1.89622);
   houtFV_stack_4->SetBinError(10,1.641613);
   houtFV_stack_4->SetBinError(11,1.23283);
   houtFV_stack_4->SetBinError(12,1.433132);
   houtFV_stack_4->SetBinError(13,0.8816559);
   houtFV_stack_4->SetBinError(14,1.031849);
   houtFV_stack_4->SetBinError(15,0.9231604);
   houtFV_stack_4->SetBinError(16,1.040287);
   houtFV_stack_4->SetBinError(17,0.5548703);
   houtFV_stack_4->SetBinError(18,0.4335247);
   houtFV_stack_4->SetBinError(19,0.6070223);
   houtFV_stack_4->SetBinError(20,0.7572234);
   houtFV_stack_4->SetBinError(21,1.056182);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2245515);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3884996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5297729);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9008006);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.8096901);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09039138);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5540656);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2747122);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2699081);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.07795165);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05299452);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05370995);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1194338);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.07368735);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04828204);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.039728);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.160106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1922251);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2188769);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3164467);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2798024);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05900839);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2812427);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1748383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.134871);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04261305);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02656728);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05370994);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1055751);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04420265);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03414056);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3343965);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.27496);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.257823);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.767005);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.451103);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.05359);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.187546);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.078479);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5903766);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8790268);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4033861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1458207);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08308554);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.198548);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2573083);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08135562);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2558988);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5233074);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2917679);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2251394);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3234483);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3272095);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.17696);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.330968);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1657731);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05216634);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05711367);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1330004);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1819453);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.106717);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.321251);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.01061);
   hNCpi0inFVres_stack_7->SetBinContent(3,66.77818);
   hNCpi0inFVres_stack_7->SetBinContent(4,129.558);
   hNCpi0inFVres_stack_7->SetBinContent(5,145.3023);
   hNCpi0inFVres_stack_7->SetBinContent(6,133.0882);
   hNCpi0inFVres_stack_7->SetBinContent(7,99.98515);
   hNCpi0inFVres_stack_7->SetBinContent(8,86.33582);
   hNCpi0inFVres_stack_7->SetBinContent(9,70.13012);
   hNCpi0inFVres_stack_7->SetBinContent(10,50.72057);
   hNCpi0inFVres_stack_7->SetBinContent(11,44.50107);
   hNCpi0inFVres_stack_7->SetBinContent(12,33.37537);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.80389);
   hNCpi0inFVres_stack_7->SetBinContent(14,18.61166);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.50681);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.31409);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.738775);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.887774);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.154469);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.99608);
   hNCpi0inFVres_stack_7->SetBinContent(21,36.55156);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2605039);
   hNCpi0inFVres_stack_7->SetBinError(2,1.282056);
   hNCpi0inFVres_stack_7->SetBinError(3,2.429094);
   hNCpi0inFVres_stack_7->SetBinError(4,3.267575);
   hNCpi0inFVres_stack_7->SetBinError(5,3.429527);
   hNCpi0inFVres_stack_7->SetBinError(6,3.312461);
   hNCpi0inFVres_stack_7->SetBinError(7,2.80915);
   hNCpi0inFVres_stack_7->SetBinError(8,2.881224);
   hNCpi0inFVres_stack_7->SetBinError(9,2.561078);
   hNCpi0inFVres_stack_7->SetBinError(10,2.159623);
   hNCpi0inFVres_stack_7->SetBinError(11,2.087634);
   hNCpi0inFVres_stack_7->SetBinError(12,1.846121);
   hNCpi0inFVres_stack_7->SetBinError(13,1.37252);
   hNCpi0inFVres_stack_7->SetBinError(14,1.28757);
   hNCpi0inFVres_stack_7->SetBinError(15,1.449787);
   hNCpi0inFVres_stack_7->SetBinError(16,1.071833);
   hNCpi0inFVres_stack_7->SetBinError(17,1.148474);
   hNCpi0inFVres_stack_7->SetBinError(18,1.01978);
   hNCpi0inFVres_stack_7->SetBinError(19,1.239733);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8987417);
   hNCpi0inFVres_stack_7->SetBinError(21,2.634239);
   hNCpi0inFVres_stack_7->SetEntries(26810);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6620433);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.531923);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.96293);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.49849);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.51196);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.07674);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.83456);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.23274);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.61749);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.28298);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.308537);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.003225);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.677814);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.709003);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.002897);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.692286);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.995812);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.654854);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.070542);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.510724);
   hNCpi0inFVdis_stack_8->SetBinContent(21,23.66109);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2150238);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4529202);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.081741);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.741932);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.342694);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.551037);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.411096);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.300181);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.352266);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.162687);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9712285);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.205333);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7636889);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.222137);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9295455);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9257325);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8654065);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6269969);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5553342);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4506912);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.161674);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07673115);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2013921);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3899702);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290714);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04881885);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1166408);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.189526);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.0731715);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.9786171);
   hCCpi0inFV_stack_10->SetBinContent(2,8.357698);
   hCCpi0inFV_stack_10->SetBinContent(3,34.48171);
   hCCpi0inFV_stack_10->SetBinContent(4,62.30067);
   hCCpi0inFV_stack_10->SetBinContent(5,75.26022);
   hCCpi0inFV_stack_10->SetBinContent(6,59.53672);
   hCCpi0inFV_stack_10->SetBinContent(7,48.67384);
   hCCpi0inFV_stack_10->SetBinContent(8,37.86358);
   hCCpi0inFV_stack_10->SetBinContent(9,35.42442);
   hCCpi0inFV_stack_10->SetBinContent(10,28.91401);
   hCCpi0inFV_stack_10->SetBinContent(11,24.69375);
   hCCpi0inFV_stack_10->SetBinContent(12,18.70587);
   hCCpi0inFV_stack_10->SetBinContent(13,12.79485);
   hCCpi0inFV_stack_10->SetBinContent(14,12.88531);
   hCCpi0inFV_stack_10->SetBinContent(15,8.814482);
   hCCpi0inFV_stack_10->SetBinContent(16,9.011494);
   hCCpi0inFV_stack_10->SetBinContent(17,4.199863);
   hCCpi0inFV_stack_10->SetBinContent(18,3.077896);
   hCCpi0inFV_stack_10->SetBinContent(19,4.680122);
   hCCpi0inFV_stack_10->SetBinContent(20,3.367593);
   hCCpi0inFV_stack_10->SetBinContent(21,21.86961);
   hCCpi0inFV_stack_10->SetBinError(1,0.5033021);
   hCCpi0inFV_stack_10->SetBinError(2,1.44234);
   hCCpi0inFV_stack_10->SetBinError(3,2.954321);
   hCCpi0inFV_stack_10->SetBinError(4,3.958257);
   hCCpi0inFV_stack_10->SetBinError(5,4.308773);
   hCCpi0inFV_stack_10->SetBinError(6,3.853467);
   hCCpi0inFV_stack_10->SetBinError(7,3.53835);
   hCCpi0inFV_stack_10->SetBinError(8,3.101613);
   hCCpi0inFV_stack_10->SetBinError(9,3.058589);
   hCCpi0inFV_stack_10->SetBinError(10,2.712502);
   hCCpi0inFV_stack_10->SetBinError(11,2.45611);
   hCCpi0inFV_stack_10->SetBinError(12,2.134968);
   hCCpi0inFV_stack_10->SetBinError(13,1.748018);
   hCCpi0inFV_stack_10->SetBinError(14,1.782927);
   hCCpi0inFV_stack_10->SetBinError(15,1.507784);
   hCCpi0inFV_stack_10->SetBinError(16,1.536797);
   hCCpi0inFV_stack_10->SetBinError(17,1.057357);
   hCCpi0inFV_stack_10->SetBinError(18,0.9216738);
   hCCpi0inFV_stack_10->SetBinError(19,1.144301);
   hCCpi0inFV_stack_10->SetBinError(20,0.8979018);
   hCCpi0inFV_stack_10->SetBinError(21,2.393611);
   hCCpi0inFV_stack_10->SetEntries(2205);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.902615);
   hNCinFV_stack_11->SetBinContent(2,12.53397);
   hNCinFV_stack_11->SetBinContent(3,18.63982);
   hNCinFV_stack_11->SetBinContent(4,26.4287);
   hNCinFV_stack_11->SetBinContent(5,31.25284);
   hNCinFV_stack_11->SetBinContent(6,28.72518);
   hNCinFV_stack_11->SetBinContent(7,24.72331);
   hNCinFV_stack_11->SetBinContent(8,19.7894);
   hNCinFV_stack_11->SetBinContent(9,14.94357);
   hNCinFV_stack_11->SetBinContent(10,15.87149);
   hNCinFV_stack_11->SetBinContent(11,13.74422);
   hNCinFV_stack_11->SetBinContent(12,13.05534);
   hNCinFV_stack_11->SetBinContent(13,11.73828);
   hNCinFV_stack_11->SetBinContent(14,9.458414);
   hNCinFV_stack_11->SetBinContent(15,6.406746);
   hNCinFV_stack_11->SetBinContent(16,3.512878);
   hNCinFV_stack_11->SetBinContent(17,4.320199);
   hNCinFV_stack_11->SetBinContent(18,2.258795);
   hNCinFV_stack_11->SetBinContent(19,1.556545);
   hNCinFV_stack_11->SetBinContent(20,2.772829);
   hNCinFV_stack_11->SetBinContent(21,18.78);
   hNCinFV_stack_11->SetBinError(1,0.9054999);
   hNCinFV_stack_11->SetBinError(2,1.830968);
   hNCinFV_stack_11->SetBinError(3,2.139245);
   hNCinFV_stack_11->SetBinError(4,2.539433);
   hNCinFV_stack_11->SetBinError(5,3.016981);
   hNCinFV_stack_11->SetBinError(6,2.734953);
   hNCinFV_stack_11->SetBinError(7,2.529657);
   hNCinFV_stack_11->SetBinError(8,2.56364);
   hNCinFV_stack_11->SetBinError(9,2.327293);
   hNCinFV_stack_11->SetBinError(10,2.20414);
   hNCinFV_stack_11->SetBinError(11,2.229117);
   hNCinFV_stack_11->SetBinError(12,2.196964);
   hNCinFV_stack_11->SetBinError(13,2.084398);
   hNCinFV_stack_11->SetBinError(14,1.875464);
   hNCinFV_stack_11->SetBinError(15,1.358174);
   hNCinFV_stack_11->SetBinError(16,0.9712068);
   hNCinFV_stack_11->SetBinError(17,1.172193);
   hNCinFV_stack_11->SetBinError(18,1.093043);
   hNCinFV_stack_11->SetBinError(19,0.6752506);
   hNCinFV_stack_11->SetBinError(20,1.071007);
   hNCinFV_stack_11->SetBinError(21,2.673987);
   hNCinFV_stack_11->SetEntries(1184);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,4.027197);
   hnumuCCinFV_stack_12->SetBinContent(2,16.00159);
   hnumuCCinFV_stack_12->SetBinContent(3,35.20962);
   hnumuCCinFV_stack_12->SetBinContent(4,47.02576);
   hnumuCCinFV_stack_12->SetBinContent(5,45.26433);
   hnumuCCinFV_stack_12->SetBinContent(6,49.7591);
   hnumuCCinFV_stack_12->SetBinContent(7,32.31321);
   hnumuCCinFV_stack_12->SetBinContent(8,30.01994);
   hnumuCCinFV_stack_12->SetBinContent(9,23.74744);
   hnumuCCinFV_stack_12->SetBinContent(10,24.40964);
   hnumuCCinFV_stack_12->SetBinContent(11,15.91705);
   hnumuCCinFV_stack_12->SetBinContent(12,14.97409);
   hnumuCCinFV_stack_12->SetBinContent(13,6.860904);
   hnumuCCinFV_stack_12->SetBinContent(14,8.856504);
   hnumuCCinFV_stack_12->SetBinContent(15,3.872922);
   hnumuCCinFV_stack_12->SetBinContent(16,3.904166);
   hnumuCCinFV_stack_12->SetBinContent(17,2.438127);
   hnumuCCinFV_stack_12->SetBinContent(18,1.783728);
   hnumuCCinFV_stack_12->SetBinContent(19,1.41628);
   hnumuCCinFV_stack_12->SetBinContent(20,2.17943);
   hnumuCCinFV_stack_12->SetBinContent(21,16.72427);
   hnumuCCinFV_stack_12->SetBinError(1,1.181258);
   hnumuCCinFV_stack_12->SetBinError(2,2.179885);
   hnumuCCinFV_stack_12->SetBinError(3,3.735061);
   hnumuCCinFV_stack_12->SetBinError(4,4.150222);
   hnumuCCinFV_stack_12->SetBinError(5,3.546863);
   hnumuCCinFV_stack_12->SetBinError(6,4.55529);
   hnumuCCinFV_stack_12->SetBinError(7,3.062078);
   hnumuCCinFV_stack_12->SetBinError(8,3.02779);
   hnumuCCinFV_stack_12->SetBinError(9,2.73547);
   hnumuCCinFV_stack_12->SetBinError(10,2.846144);
   hnumuCCinFV_stack_12->SetBinError(11,2.061104);
   hnumuCCinFV_stack_12->SetBinError(12,2.432509);
   hnumuCCinFV_stack_12->SetBinError(13,1.285301);
   hnumuCCinFV_stack_12->SetBinError(14,1.58025);
   hnumuCCinFV_stack_12->SetBinError(15,0.984088);
   hnumuCCinFV_stack_12->SetBinError(16,1.050798);
   hnumuCCinFV_stack_12->SetBinError(17,0.8206709);
   hnumuCCinFV_stack_12->SetBinError(18,0.6462772);
   hnumuCCinFV_stack_12->SetBinError(19,0.652792);
   hnumuCCinFV_stack_12->SetBinError(20,0.7713089);
   hnumuCCinFV_stack_12->SetBinError(21,3.111768);
   hnumuCCinFV_stack_12->SetEntries(1510);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.8336472);
   hnueCCinFV_stack_13->SetBinContent(5,1.268209);
   hnueCCinFV_stack_13->SetBinContent(6,2.331401);
   hnueCCinFV_stack_13->SetBinContent(7,1.416091);
   hnueCCinFV_stack_13->SetBinContent(8,0.4015895);
   hnueCCinFV_stack_13->SetBinContent(9,0.9823625);
   hnueCCinFV_stack_13->SetBinContent(11,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.8415501);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,10.53934);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.4189839);
   hnueCCinFV_stack_13->SetBinError(5,0.6391446);
   hnueCCinFV_stack_13->SetBinError(6,0.8938251);
   hnueCCinFV_stack_13->SetBinError(7,0.7235216);
   hnueCCinFV_stack_13->SetBinError(8,0.2919249);
   hnueCCinFV_stack_13->SetBinError(9,0.5051484);
   hnueCCinFV_stack_13->SetBinError(11,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.1967157);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.4913333);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.423815);
   hnueCCinFV_stack_13->SetEntries(72);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__14->SetBinContent(1,18.49519);
   hmcerror__14->SetBinContent(2,94.96448);
   hmcerror__14->SetBinContent(3,236.9071);
   hmcerror__14->SetBinContent(4,376.0737);
   hmcerror__14->SetBinContent(5,400.8615);
   hmcerror__14->SetBinContent(6,380.014);
   hmcerror__14->SetBinContent(7,285.4789);
   hmcerror__14->SetBinContent(8,227.2839);
   hmcerror__14->SetBinContent(9,194.2212);
   hmcerror__14->SetBinContent(10,154.8545);
   hmcerror__14->SetBinContent(11,127.4515);
   hmcerror__14->SetBinContent(12,100.8755);
   hmcerror__14->SetBinContent(13,71.99776);
   hmcerror__14->SetBinContent(14,67.20039);
   hmcerror__14->SetBinContent(15,46.40577);
   hmcerror__14->SetBinContent(16,37.78554);
   hmcerror__14->SetBinContent(17,29.84857);
   hmcerror__14->SetBinContent(18,20.18818);
   hmcerror__14->SetBinContent(19,19.15846);
   hmcerror__14->SetBinContent(20,18.08253);
   hmcerror__14->SetBinContent(21,141.4962);
   hmcerror__14->SetBinError(1,9.657729);
   hmcerror__14->SetBinError(2,33.65394);
   hmcerror__14->SetBinError(3,86.70525);
   hmcerror__14->SetBinError(4,151.5699);
   hmcerror__14->SetBinError(5,163.7545);
   hmcerror__14->SetBinError(6,149.0269);
   hmcerror__14->SetBinError(7,114.4026);
   hmcerror__14->SetBinError(8,90.42759);
   hmcerror__14->SetBinError(9,71.67672);
   hmcerror__14->SetBinError(10,61.52866);
   hmcerror__14->SetBinError(11,44.2324);
   hmcerror__14->SetBinError(12,38.50683);
   hmcerror__14->SetBinError(13,27.04735);
   hmcerror__14->SetBinError(14,34.92741);
   hmcerror__14->SetBinError(15,18.31017);
   hmcerror__14->SetBinError(16,15.65375);
   hmcerror__14->SetBinError(17,10.4386);
   hmcerror__14->SetBinError(18,14.29695);
   hmcerror__14->SetBinError(19,13.30156);
   hmcerror__14->SetBinError(20,12.79453);
   hmcerror__14->SetBinError(21,52.45388);
   hmcerror__14->SetEntries(3516.85);

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
   
   Double_t _fx3017[20] = {
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
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3017[20] = {
   20,
   79,
   233,
   407,
   400,
   349,
   226,
   210,
   150,
   113,
   86,
   64,
   55,
   38,
   38,
   24,
   21,
   21,
   6,
   11};
   Double_t _felx3017[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3017[20] = {
   4.6266,
   9.0124,
   15.26434,
   20.17424,
   20,
   18.68154,
   15.0333,
   14.49138,
   12.24745,
   10.63015,
   9.3967,
   8.1273,
   7.546,
   6.3013,
   6.3013,
   5.0476,
   4.7354,
   4.7354,
   2.67925,
   3.4975};
   Double_t _fehx3017[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3017[20] = {
   4.4133,
   8.8105,
   15.26434,
   20.17424,
   20,
   18.68154,
   15.0333,
   14.49138,
   12.24745,
   10.63015,
   9.1951,
   7.9246,
   7.3425,
   6.0955,
   6.0955,
   4.837,
   4.5229,
   4.5229,
   2.41858,
   3.27};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,660);
   Graph_Graph3017->SetMinimum(2.988675);
   Graph_Graph3017->SetMaximum(469.5596);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2551.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 74.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 270.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 198.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  981.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  211.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 494.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 264.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 370.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3018[20] = {
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
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3018[20] = {
   0.5221751,
   0.3543845,
   0.3659885,
   0.4030325,
   0.4085063,
   0.3921616,
   0.4007391,
   0.3978619,
   0.3690469,
   0.397332,
   0.3470529,
   0.3817262,
   0.3756693,
   0.5197501,
   0.3945666,
   0.4142789,
   0.3497187,
   0.7081843,
   0.6942916,
   0.7075633};
   Double_t _fehx3018[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3018[20] = {
   0.5221751,
   0.3543845,
   0.3659885,
   0.4030325,
   0.4085063,
   0.3921616,
   0.4007391,
   0.3978619,
   0.3690469,
   0.397332,
   0.3470529,
   0.3817262,
   0.3756693,
   0.5197501,
   0.3945666,
   0.4142789,
   0.3497187,
   0.7081843,
   0.6942916,
   0.7075633};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,660);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3019[20] = {
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
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3019[20] = {
   0.2088581,
   0.2602486,
   0.3353032,
   0.3945977,
   0.3997429,
   0.3757687,
   0.3682507,
   0.3662545,
   0.3545397,
   0.3206939,
   0.3125288,
   0.3027329,
   0.3101398,
   0.2504149,
   0.2780881,
   0.2685898,
   0.2544003,
   0.2676306,
   0.3212389,
   0.339627};
   Double_t _fehx3019[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3019[20] = {
   0.2088581,
   0.2602486,
   0.3353032,
   0.3945977,
   0.3997429,
   0.3757687,
   0.3682507,
   0.3662545,
   0.3545397,
   0.3206939,
   0.3125288,
   0.3027329,
   0.3101398,
   0.2504149,
   0.2780881,
   0.2685898,
   0.2544003,
   0.2676306,
   0.3212389,
   0.339627};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,660);
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
   
   Double_t _fx3020[20] = {
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
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3020[20] = {
   1.081362,
   0.83189,
   0.9835081,
   1.082235,
   0.9978509,
   0.9183872,
   0.7916521,
   0.9239547,
   0.7723154,
   0.7297171,
   0.6747666,
   0.6344453,
   0.7639126,
   0.5654729,
   0.8188638,
   0.6351636,
   0.7035513,
   1.040213,
   0.3131776,
   0.608322};
   Double_t _felx3020[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3020[20] = {
   0.2501515,
   0.09490285,
   0.06443175,
   0.05364438,
   0.04989255,
   0.04916014,
   0.05265991,
   0.06375893,
   0.06305929,
   0.06864601,
   0.07372767,
   0.08056761,
   0.1048088,
   0.0937688,
   0.135787,
   0.1335855,
   0.1586475,
   0.234563,
   0.1398468,
   0.1934187};
   Double_t _fehx3020[20] = {
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
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3020[20] = {
   0.2386188,
   0.0927768,
   0.06443175,
   0.05364438,
   0.04989255,
   0.04916014,
   0.05265991,
   0.06375893,
   0.06305929,
   0.06864601,
   0.07214589,
   0.0785582,
   0.1019823,
   0.09070631,
   0.1313522,
   0.1280119,
   0.1515282,
   0.2240371,
   0.1262408,
   0.1808375};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,660);
   Graph_Graph3020->SetMinimum(0.05866575);
   Graph_Graph3020->SetMaximum(1.434646);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
