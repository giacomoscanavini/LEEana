#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 17:41:27 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-384.6154,-6.86,2820.513,758.5716);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__25->SetBinContent(4,3.755046);
   hmc__25->SetBinContent(5,25.42189);
   hmc__25->SetBinContent(6,91.4992);
   hmc__25->SetBinContent(7,179.6509);
   hmc__25->SetBinContent(8,283.2505);
   hmc__25->SetBinContent(9,338.1247);
   hmc__25->SetBinContent(10,337.0815);
   hmc__25->SetBinContent(11,325.3005);
   hmc__25->SetBinContent(12,286.7354);
   hmc__25->SetBinContent(13,235.8694);
   hmc__25->SetBinContent(14,193.7054);
   hmc__25->SetBinContent(15,152.3103);
   hmc__25->SetBinContent(16,118.1562);
   hmc__25->SetBinContent(17,100.9679);
   hmc__25->SetBinContent(18,78.50271);
   hmc__25->SetBinContent(19,60.56522);
   hmc__25->SetBinContent(20,42.60638);
   hmc__25->SetBinContent(21,38.41545);
   hmc__25->SetBinContent(22,26.29496);
   hmc__25->SetBinContent(23,30.24422);
   hmc__25->SetBinContent(24,20.95668);
   hmc__25->SetBinContent(25,15.4979);
   hmc__25->SetBinContent(26,61.43102);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,0.3895343);
   hmc__25->SetBinError(3,0.3895343);
   hmc__25->SetBinError(4,1.597369);
   hmc__25->SetBinError(5,6.356742);
   hmc__25->SetBinError(6,23.82221);
   hmc__25->SetBinError(7,46.50553);
   hmc__25->SetBinError(8,69.77729);
   hmc__25->SetBinError(9,87.91831);
   hmc__25->SetBinError(10,89.57398);
   hmc__25->SetBinError(11,89.88222);
   hmc__25->SetBinError(12,75.04588);
   hmc__25->SetBinError(13,61.82143);
   hmc__25->SetBinError(14,48.31944);
   hmc__25->SetBinError(15,39.24182);
   hmc__25->SetBinError(16,31.14217);
   hmc__25->SetBinError(17,25.43913);
   hmc__25->SetBinError(18,19.60313);
   hmc__25->SetBinError(19,14.18447);
   hmc__25->SetBinError(20,10.38552);
   hmc__25->SetBinError(21,9.147307);
   hmc__25->SetBinError(22,5.65072);
   hmc__25->SetBinError(23,6.355017);
   hmc__25->SetBinError(24,5.417909);
   hmc__25->SetBinError(25,3.612778);
   hmc__25->SetBinError(26,11.39496);
   hmc__25->SetMinimum(-6.86);
   hmc__25->SetMaximum(720.3);
   hmc__25->SetEntries(3014.754);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,2500);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(355.0309);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,0.2304034);
   hbadmatch_stack_1->SetBinContent(7,0.2448664);
   hbadmatch_stack_1->SetBinContent(8,1.285447);
   hbadmatch_stack_1->SetBinContent(9,0.5850745);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.413964);
   hbadmatch_stack_1->SetBinContent(12,0.3900497);
   hbadmatch_stack_1->SetBinContent(13,0.7336084);
   hbadmatch_stack_1->SetBinContent(14,0.3073375);
   hbadmatch_stack_1->SetBinContent(15,0.5040528);
   hbadmatch_stack_1->SetBinContent(16,1.473255);
   hbadmatch_stack_1->SetBinContent(17,0.644401);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.2304034);
   hbadmatch_stack_1->SetBinError(7,0.201293);
   hbadmatch_stack_1->SetBinError(8,0.6609915);
   hbadmatch_stack_1->SetBinError(9,0.337793);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.6515799);
   hbadmatch_stack_1->SetBinError(12,0.2758068);
   hbadmatch_stack_1->SetBinError(13,0.4394482);
   hbadmatch_stack_1->SetBinError(14,0.225686);
   hbadmatch_stack_1->SetBinError(15,0.2993846);
   hbadmatch_stack_1->SetBinError(16,0.6849105);
   hbadmatch_stack_1->SetBinError(17,0.4756576);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
   hbadmatch_stack_1->SetEntries(40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,1.137595);
   hext_stack_2->SetBinContent(7,0.6487947);
   hext_stack_2->SetBinContent(8,8.242843);
   hext_stack_2->SetBinContent(9,8.705693);
   hext_stack_2->SetBinContent(10,6.385841);
   hext_stack_2->SetBinContent(11,2.352983);
   hext_stack_2->SetBinContent(12,6.449273);
   hext_stack_2->SetBinContent(13,4.352847);
   hext_stack_2->SetBinContent(14,6.207077);
   hext_stack_2->SetBinContent(15,1.868591);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,2.428004);
   hext_stack_2->SetBinContent(18,4.188443);
   hext_stack_2->SetBinContent(19,2.973055);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(23,3.856865);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,3.215251);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.6602113);
   hext_stack_2->SetBinError(7,0.4587671);
   hext_stack_2->SetBinError(8,1.972853);
   hext_stack_2->SetBinError(9,2.141505);
   hext_stack_2->SetBinError(10,1.766249);
   hext_stack_2->SetBinError(11,0.8925942);
   hext_stack_2->SetBinError(12,1.856611);
   hext_stack_2->SetBinError(13,1.514272);
   hext_stack_2->SetBinError(14,1.844413);
   hext_stack_2->SetBinError(15,0.840497);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,1.028599);
   hext_stack_2->SetBinError(18,1.474057);
   hext_stack_2->SetBinError(19,1.346105);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(23,1.506257);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,1.36277);
   hext_stack_2->SetEntries(141);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
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

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(5,1.060933);
   houtFV_stack_4->SetBinContent(6,1.608988);
   houtFV_stack_4->SetBinContent(7,3.053057);
   houtFV_stack_4->SetBinContent(8,2.747408);
   houtFV_stack_4->SetBinContent(9,3.41151);
   houtFV_stack_4->SetBinContent(10,2.652949);
   houtFV_stack_4->SetBinContent(11,2.875033);
   houtFV_stack_4->SetBinContent(12,2.11386);
   houtFV_stack_4->SetBinContent(13,1.805704);
   houtFV_stack_4->SetBinContent(14,0.8770706);
   houtFV_stack_4->SetBinContent(15,1.917257);
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
   houtFV_stack_4->SetBinError(7,0.886438);
   houtFV_stack_4->SetBinError(8,0.8307331);
   houtFV_stack_4->SetBinError(9,0.9983993);
   houtFV_stack_4->SetBinError(10,0.8084911);
   houtFV_stack_4->SetBinError(11,0.8697056);
   houtFV_stack_4->SetBinError(12,0.7255882);
   houtFV_stack_4->SetBinError(13,0.7080169);
   houtFV_stack_4->SetBinError(14,0.5197486);
   houtFV_stack_4->SetBinError(15,0.987692);
   houtFV_stack_4->SetBinError(16,0.4479875);
   houtFV_stack_4->SetBinError(17,0.9099152);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.3222584);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(26,0.1950249);
   houtFV_stack_4->SetEntries(116);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.06020034);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.2840457);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.332263);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.375378);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.420812);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.26918);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.626567);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.667921);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.663393);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.975251);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.124513);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.068783);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.495208);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.637909);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1895681);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.08743493);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.08074981);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.04467028);
   hNCpi0inFVres_stack_7->SetBinError(4,0.05359954);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1476099);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3409583);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4492217);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3932828);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3933886);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4412635);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6685999);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6022243);
   hNCpi0inFVres_stack_7->SetBinError(13,0.499605);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8902353);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7037684);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6559011);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8116848);
   hNCpi0inFVres_stack_7->SetBinError(18,0.07927706);
   hNCpi0inFVres_stack_7->SetBinError(19,0.06574814);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05976214);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(25,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.03255229);
   hNCpi0inFVres_stack_7->SetEntries(536);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1254655);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.1202648);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8499179);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9536788);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.395396);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.619721);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.021422);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.533494);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.114179);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.834307);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.928883);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.354146);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.01923);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.286639);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8346459);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3803937);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5719541);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3206861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4035539);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.7422153);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.08881186);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.07966941);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.257033);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2637867);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3195585);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3260445);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4395735);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7653356);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.504868);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7141069);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5398264);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7127119);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.315534);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4804944);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3266469);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1383997);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2970212);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2201295);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1775557);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2950542);
   hNCpi0inFVdis_stack_8->SetEntries(436);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(4,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(5,14.6638);
   hCCpi0inFV_stack_10->SetBinContent(6,66.47844);
   hCCpi0inFV_stack_10->SetBinContent(7,136.0411);
   hCCpi0inFV_stack_10->SetBinContent(8,218.2641);
   hCCpi0inFV_stack_10->SetBinContent(9,257.6716);
   hCCpi0inFV_stack_10->SetBinContent(10,270.7621);
   hCCpi0inFV_stack_10->SetBinContent(11,259.9197);
   hCCpi0inFV_stack_10->SetBinContent(12,229.3178);
   hCCpi0inFV_stack_10->SetBinContent(13,182.093);
   hCCpi0inFV_stack_10->SetBinContent(14,150.1787);
   hCCpi0inFV_stack_10->SetBinContent(15,115.6421);
   hCCpi0inFV_stack_10->SetBinContent(16,94.91055);
   hCCpi0inFV_stack_10->SetBinContent(17,75.74904);
   hCCpi0inFV_stack_10->SetBinContent(18,56.6077);
   hCCpi0inFV_stack_10->SetBinContent(19,47.08325);
   hCCpi0inFV_stack_10->SetBinContent(20,34.21225);
   hCCpi0inFV_stack_10->SetBinContent(21,28.88019);
   hCCpi0inFV_stack_10->SetBinContent(22,19.68337);
   hCCpi0inFV_stack_10->SetBinContent(23,21.83923);
   hCCpi0inFV_stack_10->SetBinContent(24,15.61855);
   hCCpi0inFV_stack_10->SetBinContent(25,12.84111);
   hCCpi0inFV_stack_10->SetBinContent(26,45.97037);
   hCCpi0inFV_stack_10->SetBinError(4,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(5,1.823207);
   hCCpi0inFV_stack_10->SetBinError(6,4.236359);
   hCCpi0inFV_stack_10->SetBinError(7,5.890495);
   hCCpi0inFV_stack_10->SetBinError(8,7.430277);
   hCCpi0inFV_stack_10->SetBinError(9,8.077571);
   hCCpi0inFV_stack_10->SetBinError(10,8.287748);
   hCCpi0inFV_stack_10->SetBinError(11,8.223516);
   hCCpi0inFV_stack_10->SetBinError(12,7.617382);
   hCCpi0inFV_stack_10->SetBinError(13,6.691333);
   hCCpi0inFV_stack_10->SetBinError(14,6.209169);
   hCCpi0inFV_stack_10->SetBinError(15,5.379018);
   hCCpi0inFV_stack_10->SetBinError(16,4.906964);
   hCCpi0inFV_stack_10->SetBinError(17,4.404105);
   hCCpi0inFV_stack_10->SetBinError(18,3.817093);
   hCCpi0inFV_stack_10->SetBinError(19,3.452759);
   hCCpi0inFV_stack_10->SetBinError(20,2.978458);
   hCCpi0inFV_stack_10->SetBinError(21,2.710032);
   hCCpi0inFV_stack_10->SetBinError(22,2.244912);
   hCCpi0inFV_stack_10->SetBinError(23,2.443234);
   hCCpi0inFV_stack_10->SetBinError(24,2.010276);
   hCCpi0inFV_stack_10->SetBinError(25,1.830593);
   hCCpi0inFV_stack_10->SetBinError(26,3.422144);
   hCCpi0inFV_stack_10->SetEntries(10012);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.7319179);
   hNCinFV_stack_11->SetBinContent(8,1.610679);
   hNCinFV_stack_11->SetBinContent(9,1.662242);
   hNCinFV_stack_11->SetBinContent(10,1.860647);
   hNCinFV_stack_11->SetBinContent(11,1.465526);
   hNCinFV_stack_11->SetBinContent(12,1.804013);
   hNCinFV_stack_11->SetBinContent(13,1.662242);
   hNCinFV_stack_11->SetBinContent(14,0.3934307);
   hNCinFV_stack_11->SetBinContent(15,0.7319179);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.8770706);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.536893);
   hNCinFV_stack_11->SetBinContent(21,0.5884556);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.438694);
   hNCinFV_stack_11->SetBinError(8,0.6806271);
   hNCinFV_stack_11->SetBinError(9,0.6513556);
   hNCinFV_stack_11->SetBinError(10,0.6808988);
   hNCinFV_stack_11->SetBinError(11,0.6209405);
   hNCinFV_stack_11->SetBinError(12,0.7075491);
   hNCinFV_stack_11->SetBinError(13,0.6513556);
   hNCinFV_stack_11->SetBinError(14,0.2781975);
   hNCinFV_stack_11->SetBinError(15,0.438694);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.5197486);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.3929602);
   hNCinFV_stack_11->SetBinError(21,0.3397478);
   hNCinFV_stack_11->SetEntries(63);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(4,2.445722);
   hnumuCCinFV_stack_12->SetBinContent(5,7.751196);
   hnumuCCinFV_stack_12->SetBinContent(6,19.66488);
   hnumuCCinFV_stack_12->SetBinContent(7,35.4054);
   hnumuCCinFV_stack_12->SetBinContent(8,46.62099);
   hnumuCCinFV_stack_12->SetBinContent(9,61.73674);
   hnumuCCinFV_stack_12->SetBinContent(10,50.55762);
   hnumuCCinFV_stack_12->SetBinContent(11,51.65015);
   hnumuCCinFV_stack_12->SetBinContent(12,41.27604);
   hnumuCCinFV_stack_12->SetBinContent(13,39.07397);
   hnumuCCinFV_stack_12->SetBinContent(14,30.49166);
   hnumuCCinFV_stack_12->SetBinContent(15,26.86089);
   hnumuCCinFV_stack_12->SetBinContent(16,17.4692);
   hnumuCCinFV_stack_12->SetBinContent(17,17.56872);
   hnumuCCinFV_stack_12->SetBinContent(18,14.87664);
   hnumuCCinFV_stack_12->SetBinContent(19,8.334755);
   hnumuCCinFV_stack_12->SetBinContent(20,6.526476);
   hnumuCCinFV_stack_12->SetBinContent(21,7.629162);
   hnumuCCinFV_stack_12->SetBinContent(22,5.842925);
   hnumuCCinFV_stack_12->SetBinContent(23,3.901713);
   hnumuCCinFV_stack_12->SetBinContent(24,4.496323);
   hnumuCCinFV_stack_12->SetBinContent(25,1.857266);
   hnumuCCinFV_stack_12->SetBinContent(26,10.13644);
   hnumuCCinFV_stack_12->SetBinError(4,0.7600838);
   hnumuCCinFV_stack_12->SetBinError(5,1.715626);
   hnumuCCinFV_stack_12->SetBinError(6,3.234969);
   hnumuCCinFV_stack_12->SetBinError(7,3.175509);
   hnumuCCinFV_stack_12->SetBinError(8,3.932557);
   hnumuCCinFV_stack_12->SetBinError(9,4.209985);
   hnumuCCinFV_stack_12->SetBinError(10,3.786252);
   hnumuCCinFV_stack_12->SetBinError(11,5.485203);
   hnumuCCinFV_stack_12->SetBinError(12,3.415019);
   hnumuCCinFV_stack_12->SetBinError(13,3.827054);
   hnumuCCinFV_stack_12->SetBinError(14,2.768652);
   hnumuCCinFV_stack_12->SetBinError(15,2.669629);
   hnumuCCinFV_stack_12->SetBinError(16,2.645261);
   hnumuCCinFV_stack_12->SetBinError(17,3.108845);
   hnumuCCinFV_stack_12->SetBinError(18,1.973149);
   hnumuCCinFV_stack_12->SetBinError(19,1.456247);
   hnumuCCinFV_stack_12->SetBinError(20,1.24754);
   hnumuCCinFV_stack_12->SetBinError(21,1.374488);
   hnumuCCinFV_stack_12->SetBinError(22,1.185317);
   hnumuCCinFV_stack_12->SetBinError(23,1.07608);
   hnumuCCinFV_stack_12->SetBinError(24,1.037978);
   hnumuCCinFV_stack_12->SetBinError(25,0.6799255);
   hnumuCCinFV_stack_12->SetBinError(26,1.579056);
   hnumuCCinFV_stack_12->SetEntries(2089);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.4216878);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,1.338483);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.7336084);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.4216878);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.6159358);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.4394482);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__26->SetBinContent(4,3.755046);
   hmcerror__26->SetBinContent(5,25.42189);
   hmcerror__26->SetBinContent(6,91.4992);
   hmcerror__26->SetBinContent(7,179.6509);
   hmcerror__26->SetBinContent(8,283.2505);
   hmcerror__26->SetBinContent(9,338.1247);
   hmcerror__26->SetBinContent(10,337.0815);
   hmcerror__26->SetBinContent(11,325.3005);
   hmcerror__26->SetBinContent(12,286.7354);
   hmcerror__26->SetBinContent(13,235.8694);
   hmcerror__26->SetBinContent(14,193.7054);
   hmcerror__26->SetBinContent(15,152.3103);
   hmcerror__26->SetBinContent(16,118.1562);
   hmcerror__26->SetBinContent(17,100.9679);
   hmcerror__26->SetBinContent(18,78.50271);
   hmcerror__26->SetBinContent(19,60.56522);
   hmcerror__26->SetBinContent(20,42.60638);
   hmcerror__26->SetBinContent(21,38.41545);
   hmcerror__26->SetBinContent(22,26.29496);
   hmcerror__26->SetBinContent(23,30.24422);
   hmcerror__26->SetBinContent(24,20.95668);
   hmcerror__26->SetBinContent(25,15.4979);
   hmcerror__26->SetBinContent(26,61.43102);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,0.3895343);
   hmcerror__26->SetBinError(3,0.3895343);
   hmcerror__26->SetBinError(4,1.597369);
   hmcerror__26->SetBinError(5,6.356742);
   hmcerror__26->SetBinError(6,23.82221);
   hmcerror__26->SetBinError(7,46.50553);
   hmcerror__26->SetBinError(8,69.77729);
   hmcerror__26->SetBinError(9,87.91831);
   hmcerror__26->SetBinError(10,89.57398);
   hmcerror__26->SetBinError(11,89.88222);
   hmcerror__26->SetBinError(12,75.04588);
   hmcerror__26->SetBinError(13,61.82143);
   hmcerror__26->SetBinError(14,48.31944);
   hmcerror__26->SetBinError(15,39.24182);
   hmcerror__26->SetBinError(16,31.14217);
   hmcerror__26->SetBinError(17,25.43913);
   hmcerror__26->SetBinError(18,19.60313);
   hmcerror__26->SetBinError(19,14.18447);
   hmcerror__26->SetBinError(20,10.38552);
   hmcerror__26->SetBinError(21,9.147307);
   hmcerror__26->SetBinError(22,5.65072);
   hmcerror__26->SetBinError(23,6.355017);
   hmcerror__26->SetBinError(24,5.417909);
   hmcerror__26->SetBinError(25,3.612778);
   hmcerror__26->SetBinError(26,11.39496);
   hmcerror__26->SetEntries(3014.754);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   0,
   0,
   0,
   3,
   30,
   99,
   175,
   273,
   343,
   326,
   307,
   239,
   207,
   134,
   127,
   80,
   71,
   60,
   35,
   30,
   24,
   20,
   13,
   8,
   10};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   0,
   0,
   0,
   2.143368,
   5.6197,
   10.0712,
   13.22876,
   16.52271,
   18.52026,
   18.05547,
   17.52142,
   15.45962,
   14.38749,
   11.57584,
   11.26943,
   9.0683,
   8.5518,
   7.8743,
   6.0548,
   5.6197,
   5.0476,
   4.6266,
   3.77763,
   3.0307,
   3.34883};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.72422,
   5.4117,
   9.87,
   13.22876,
   16.52271,
   18.52026,
   18.05547,
   17.52142,
   15.45962,
   14.38749,
   11.57584,
   11.26943,
   8.8665,
   8.3496,
   7.6713,
   5.8483,
   5.4117,
   4.837,
   4.4133,
   3.5552,
   2.7896,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,2750);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(397.6723);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2614.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 61.8","F");

   ci = 1539;
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

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 27.8","F");

   ci = 1541;
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

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.6","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  24.7","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2309.6","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 502.0","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0,
   0,
   0,
   0.4253927,
   0.25005,
   0.2603543,
   0.2588661,
   0.2463448,
   0.2600174,
   0.2657339,
   0.2763052,
   0.2617252,
   0.2621002,
   0.2494481,
   0.2576439,
   0.2635679,
   0.2519526,
   0.2497128,
   0.2342016,
   0.243755,
   0.2381153,
   0.2148974,
   0.2101234,
   0.258529,
   0.233114};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0,
   0,
   0,
   0.4253927,
   0.25005,
   0.2603543,
   0.2588661,
   0.2463448,
   0.2600174,
   0.2657339,
   0.2763052,
   0.2617252,
   0.2621002,
   0.2494481,
   0.2576439,
   0.2635679,
   0.2519526,
   0.2497128,
   0.2342016,
   0.243755,
   0.2381153,
   0.2148974,
   0.2101234,
   0.258529,
   0.233114};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,2750);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0,
   0,
   0,
   0.4253927,
   0.25005,
   0.2603543,
   0.2588661,
   0.2463448,
   0.2600174,
   0.2657339,
   0.2763052,
   0.2617252,
   0.2621002,
   0.2494481,
   0.2576439,
   0.2635679,
   0.2519526,
   0.2497128,
   0.2342016,
   0.243755,
   0.2381153,
   0.2148974,
   0.2101234,
   0.258529,
   0.233114};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0,
   0,
   0,
   0.4253927,
   0.25005,
   0.2603543,
   0.2588661,
   0.2463448,
   0.2600174,
   0.2657339,
   0.2763052,
   0.2617252,
   0.2621002,
   0.2494481,
   0.2576439,
   0.2635679,
   0.2519526,
   0.2497128,
   0.2342016,
   0.243755,
   0.2381153,
   0.2148974,
   0.2101234,
   0.258529,
   0.233114};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,2750);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   10,
   10,
   10,
   0.798925,
   1.180085,
   1.081977,
   0.9741113,
   0.9638111,
   1.014419,
   0.9671253,
   0.9437428,
   0.8335211,
   0.8776042,
   0.6917723,
   0.8338242,
   0.6770701,
   0.7031937,
   0.7643048,
   0.5778894,
   0.70412,
   0.6247486,
   0.7606019,
   0.4298342,
   0.3817399,
   0.6452486};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0,
   0,
   0,
   0.5707968,
   0.2210575,
   0.1100687,
   0.07363589,
   0.0583325,
   0.05477346,
   0.05356412,
   0.05386224,
   0.053916,
   0.06099771,
   0.05976003,
   0.07398993,
   0.07674843,
   0.08469819,
   0.1003061,
   0.09997157,
   0.1318981,
   0.131395,
   0.17595,
   0.1249042,
   0.1446174,
   0.2160828};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0,
   0,
   0,
   0.4591741,
   0.2128756,
   0.1078698,
   0.07363589,
   0.0583325,
   0.05477346,
   0.05356412,
   0.05386224,
   0.053916,
   0.06099771,
   0.05976003,
   0.07398993,
   0.07504052,
   0.08269557,
   0.0977202,
   0.09656202,
   0.1270162,
   0.1259129,
   0.1678382,
   0.1175497,
   0.1331127,
   0.201182};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,2750);
   Graph_Graph3036->SetMinimum(0.2053154);
   Graph_Graph3036->SetMaximum(10.97719);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
