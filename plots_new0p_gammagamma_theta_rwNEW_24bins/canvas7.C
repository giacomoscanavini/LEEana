#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 20:57:04 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-3.160271,3.553846,349.4594);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__19->SetBinContent(1,49.10617);
   hmc__19->SetBinContent(2,51.35374);
   hmc__19->SetBinContent(3,55.05557);
   hmc__19->SetBinContent(4,86.80327);
   hmc__19->SetBinContent(5,131.3065);
   hmc__19->SetBinContent(6,147.1669);
   hmc__19->SetBinContent(7,153.3423);
   hmc__19->SetBinContent(8,145.5947);
   hmc__19->SetBinContent(9,158.0135);
   hmc__19->SetBinContent(10,143.5246);
   hmc__19->SetBinContent(11,142.4969);
   hmc__19->SetBinContent(12,130.1121);
   hmc__19->SetBinContent(13,118.5839);
   hmc__19->SetBinContent(14,96.3054);
   hmc__19->SetBinContent(15,79.41186);
   hmc__19->SetBinContent(16,81.04652);
   hmc__19->SetBinContent(17,64.33971);
   hmc__19->SetBinContent(18,49.45833);
   hmc__19->SetBinContent(19,42.17041);
   hmc__19->SetBinContent(20,35.92736);
   hmc__19->SetBinContent(21,23.81301);
   hmc__19->SetBinContent(22,18.43961);
   hmc__19->SetBinContent(23,10.07554);
   hmc__19->SetBinContent(24,3.059045);
   hmc__19->SetBinError(1,18.60455);
   hmc__19->SetBinError(2,24.72401);
   hmc__19->SetBinError(3,21.71584);
   hmc__19->SetBinError(4,30.47751);
   hmc__19->SetBinError(5,52.43859);
   hmc__19->SetBinError(6,63.86091);
   hmc__19->SetBinError(7,70.17795);
   hmc__19->SetBinError(8,64.04618);
   hmc__19->SetBinError(9,64.70512);
   hmc__19->SetBinError(10,61.85527);
   hmc__19->SetBinError(11,61.48704);
   hmc__19->SetBinError(12,53.01824);
   hmc__19->SetBinError(13,45.77648);
   hmc__19->SetBinError(14,38.07518);
   hmc__19->SetBinError(15,41.55374);
   hmc__19->SetBinError(16,29.67226);
   hmc__19->SetBinError(17,25.69557);
   hmc__19->SetBinError(18,18.7399);
   hmc__19->SetBinError(19,17.23631);
   hmc__19->SetBinError(20,18.33711);
   hmc__19->SetBinError(21,12.09531);
   hmc__19->SetBinError(22,8.668468);
   hmc__19->SetBinError(23,6.853771);
   hmc__19->SetBinError(24,4.040909);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-3.160271);
   hmc__19->SetMaximum(331.8284);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,3.15);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(165.9142);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.796341);
   hbadmatch_stack_1->SetBinContent(2,2.029283);
   hbadmatch_stack_1->SetBinContent(3,0.7634552);
   hbadmatch_stack_1->SetBinContent(4,1.990742);
   hbadmatch_stack_1->SetBinContent(5,2.677917);
   hbadmatch_stack_1->SetBinContent(6,3.157976);
   hbadmatch_stack_1->SetBinContent(7,3.188326);
   hbadmatch_stack_1->SetBinContent(8,2.300356);
   hbadmatch_stack_1->SetBinContent(9,2.875145);
   hbadmatch_stack_1->SetBinContent(10,2.199135);
   hbadmatch_stack_1->SetBinContent(11,2.109596);
   hbadmatch_stack_1->SetBinContent(12,3.563873);
   hbadmatch_stack_1->SetBinContent(13,1.347449);
   hbadmatch_stack_1->SetBinContent(14,1.184916);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,2.573017);
   hbadmatch_stack_1->SetBinContent(17,2.838714);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,1.693278);
   hbadmatch_stack_1->SetBinContent(20,0.9781359);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.9945219);
   hbadmatch_stack_1->SetBinContent(23,0.7893693);
   hbadmatch_stack_1->SetBinError(1,0.4896229);
   hbadmatch_stack_1->SetBinError(2,0.7995239);
   hbadmatch_stack_1->SetBinError(3,0.4531863);
   hbadmatch_stack_1->SetBinError(4,0.7941674);
   hbadmatch_stack_1->SetBinError(5,0.8735754);
   hbadmatch_stack_1->SetBinError(6,0.8643674);
   hbadmatch_stack_1->SetBinError(7,0.9471714);
   hbadmatch_stack_1->SetBinError(8,0.7929384);
   hbadmatch_stack_1->SetBinError(9,0.9567562);
   hbadmatch_stack_1->SetBinError(10,0.7607114);
   hbadmatch_stack_1->SetBinError(11,0.7781378);
   hbadmatch_stack_1->SetBinError(12,1.352032);
   hbadmatch_stack_1->SetBinError(13,0.5648796);
   hbadmatch_stack_1->SetBinError(14,0.4818745);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.7555983);
   hbadmatch_stack_1->SetBinError(17,0.997918);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.6613909);
   hbadmatch_stack_1->SetBinError(20,0.5030664);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.529451);
   hbadmatch_stack_1->SetBinError(23,0.4672861);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.428004);
   hext_stack_2->SetBinContent(2,1.78639);
   hext_stack_2->SetBinContent(3,6.235799);
   hext_stack_2->SetBinContent(4,5.758588);
   hext_stack_2->SetBinContent(5,4.785396);
   hext_stack_2->SetBinContent(6,5.594185);
   hext_stack_2->SetBinContent(7,8.332225);
   hext_stack_2->SetBinContent(8,5.744227);
   hext_stack_2->SetBinContent(9,5.669206);
   hext_stack_2->SetBinContent(10,5.42701);
   hext_stack_2->SetBinContent(11,5.904221);
   hext_stack_2->SetBinContent(12,5.587004);
   hext_stack_2->SetBinContent(13,6.153597);
   hext_stack_2->SetBinContent(14,4.296596);
   hext_stack_2->SetBinContent(15,2.510206);
   hext_stack_2->SetBinContent(16,5.732637);
   hext_stack_2->SetBinContent(17,3.083979);
   hext_stack_2->SetBinContent(18,1.868591);
   hext_stack_2->SetBinContent(19,2.103607);
   hext_stack_2->SetBinContent(20,2.110787);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,0.9660115);
   hext_stack_2->SetBinContent(23,0.8131978);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinError(1,1.028599);
   hext_stack_2->SetBinError(2,0.8039566);
   hext_stack_2->SetBinError(3,1.611538);
   hext_stack_2->SetBinError(4,1.518408);
   hext_stack_2->SetBinError(5,1.410625);
   hext_stack_2->SetBinError(6,1.478305);
   hext_stack_2->SetBinError(7,1.936759);
   hext_stack_2->SetBinError(8,1.64559);
   hext_stack_2->SetBinError(9,1.564185);
   hext_stack_2->SetBinError(10,1.549687);
   hext_stack_2->SetBinError(11,1.641043);
   hext_stack_2->SetBinError(12,1.544858);
   hext_stack_2->SetBinError(13,1.592785);
   hext_stack_2->SetBinError(14,1.328326);
   hext_stack_2->SetBinError(15,1.057404);
   hext_stack_2->SetBinError(16,1.665546);
   hext_stack_2->SetBinError(17,1.033093);
   hext_stack_2->SetBinError(18,0.840497);
   hext_stack_2->SetBinError(19,0.9761052);
   hext_stack_2->SetBinError(20,0.8669371);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.7189592);
   hext_stack_2->SetBinError(23,0.5750177);
   hext_stack_2->SetBinError(24,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.4007975);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.5570828);
   hdirt_stack_3->SetBinContent(9,0.866941);
   hdirt_stack_3->SetBinContent(10,0.7255815);
   hdirt_stack_3->SetBinContent(11,0.4403464);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.6566868);
   hdirt_stack_3->SetBinContent(15,1.076311);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.2605212);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.2516114);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.4007975);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4028472);
   hdirt_stack_3->SetBinError(9,0.458805);
   hdirt_stack_3->SetBinError(10,0.3751078);
   hdirt_stack_3->SetBinError(11,0.3095757);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3791383);
   hdirt_stack_3->SetBinError(15,0.5870006);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(18,0.2605212);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.2516114);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.342597);
   houtFV_stack_4->SetBinContent(2,3.317721);
   houtFV_stack_4->SetBinContent(3,2.589184);
   houtFV_stack_4->SetBinContent(4,3.312799);
   houtFV_stack_4->SetBinContent(5,5.235755);
   houtFV_stack_4->SetBinContent(6,5.245985);
   houtFV_stack_4->SetBinContent(7,4.653467);
   houtFV_stack_4->SetBinContent(8,4.683398);
   houtFV_stack_4->SetBinContent(9,3.376046);
   houtFV_stack_4->SetBinContent(10,2.980925);
   houtFV_stack_4->SetBinContent(11,3.694321);
   houtFV_stack_4->SetBinContent(12,2.14081);
   houtFV_stack_4->SetBinContent(13,1.545747);
   houtFV_stack_4->SetBinContent(14,1.56725);
   houtFV_stack_4->SetBinContent(15,1.518779);
   houtFV_stack_4->SetBinContent(16,0.5354937);
   houtFV_stack_4->SetBinContent(17,1.072095);
   houtFV_stack_4->SetBinContent(18,1.047545);
   houtFV_stack_4->SetBinContent(19,0.9286332);
   houtFV_stack_4->SetBinContent(20,2.197444);
   houtFV_stack_4->SetBinContent(21,0.8770706);
   houtFV_stack_4->SetBinContent(22,0.7834804);
   houtFV_stack_4->SetBinContent(23,0.3934307);
   houtFV_stack_4->SetBinError(1,0.8097566);
   houtFV_stack_4->SetBinError(2,0.9197169);
   houtFV_stack_4->SetBinError(3,0.809167);
   houtFV_stack_4->SetBinError(4,0.9575305);
   houtFV_stack_4->SetBinError(5,1.155418);
   houtFV_stack_4->SetBinError(6,1.14032);
   houtFV_stack_4->SetBinError(7,1.041581);
   houtFV_stack_4->SetBinError(8,1.083078);
   houtFV_stack_4->SetBinError(9,0.8997438);
   houtFV_stack_4->SetBinError(10,0.8552677);
   houtFV_stack_4->SetBinError(11,0.9970511);
   houtFV_stack_4->SetBinError(12,0.7842334);
   houtFV_stack_4->SetBinError(13,0.5990704);
   houtFV_stack_4->SetBinError(14,0.6070385);
   houtFV_stack_4->SetBinError(15,0.5892709);
   houtFV_stack_4->SetBinError(16,0.3921168);
   houtFV_stack_4->SetBinError(17,0.5551335);
   houtFV_stack_4->SetBinError(18,0.4700811);
   houtFV_stack_4->SetBinError(19,0.48078);
   houtFV_stack_4->SetBinError(20,0.760276);
   houtFV_stack_4->SetBinError(21,0.5197486);
   houtFV_stack_4->SetBinError(22,0.3917439);
   houtFV_stack_4->SetBinError(23,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1974492);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9889579);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.031972);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9210359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.227608);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8501219);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3067967);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3283469);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3020022);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4228219);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2770189);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,16.38733);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.00428);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.31908);
   hNCpi0inFVres_stack_7->SetBinContent(4,30.35681);
   hNCpi0inFVres_stack_7->SetBinContent(5,61.05011);
   hNCpi0inFVres_stack_7->SetBinContent(6,75.70213);
   hNCpi0inFVres_stack_7->SetBinContent(7,78.81146);
   hNCpi0inFVres_stack_7->SetBinContent(8,77.21174);
   hNCpi0inFVres_stack_7->SetBinContent(9,77.68206);
   hNCpi0inFVres_stack_7->SetBinContent(10,78.32793);
   hNCpi0inFVres_stack_7->SetBinContent(11,72.89421);
   hNCpi0inFVres_stack_7->SetBinContent(12,72.8708);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.56591);
   hNCpi0inFVres_stack_7->SetBinContent(14,47.85316);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.32638);
   hNCpi0inFVres_stack_7->SetBinContent(16,33.63673);
   hNCpi0inFVres_stack_7->SetBinContent(17,27.19481);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.69391);
   hNCpi0inFVres_stack_7->SetBinContent(19,15.4065);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.90961);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.030743);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.512518);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.221966);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.339208);
   hNCpi0inFVres_stack_7->SetBinError(1,1.329196);
   hNCpi0inFVres_stack_7->SetBinError(2,1.24576);
   hNCpi0inFVres_stack_7->SetBinError(3,1.357518);
   hNCpi0inFVres_stack_7->SetBinError(4,1.757143);
   hNCpi0inFVres_stack_7->SetBinError(5,2.580032);
   hNCpi0inFVres_stack_7->SetBinError(6,2.831371);
   hNCpi0inFVres_stack_7->SetBinError(7,2.917506);
   hNCpi0inFVres_stack_7->SetBinError(8,2.866142);
   hNCpi0inFVres_stack_7->SetBinError(9,2.907488);
   hNCpi0inFVres_stack_7->SetBinError(10,2.951652);
   hNCpi0inFVres_stack_7->SetBinError(11,2.773435);
   hNCpi0inFVres_stack_7->SetBinError(12,2.847489);
   hNCpi0inFVres_stack_7->SetBinError(13,2.530105);
   hNCpi0inFVres_stack_7->SetBinError(14,2.225952);
   hNCpi0inFVres_stack_7->SetBinError(15,2.1001);
   hNCpi0inFVres_stack_7->SetBinError(16,1.871172);
   hNCpi0inFVres_stack_7->SetBinError(17,1.725404);
   hNCpi0inFVres_stack_7->SetBinError(18,1.478099);
   hNCpi0inFVres_stack_7->SetBinError(19,1.210744);
   hNCpi0inFVres_stack_7->SetBinError(20,1.164786);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8859881);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8338628);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5940963);
   hNCpi0inFVres_stack_7->SetBinError(24,0.426488);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.653083);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.808202);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.164773);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.364799);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.88845);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.43814);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.53919);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.20198);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.60751);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.90321);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.92025);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.36165);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.965813);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.100162);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.919143);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.162099);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.86849);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.14001);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.027578);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.983315);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.158766);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.686962);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.565453);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6594049);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8999368);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8742696);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.246411);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.149905);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.171866);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.138168);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.005086);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.106641);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.139365);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.093165);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.99614);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8908801);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8842292);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7581559);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8077029);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6577301);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6404912);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5179733);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4090178);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4602838);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.05579997);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.930771);
   hCCpi0inFV_stack_10->SetBinContent(2,5.696104);
   hCCpi0inFV_stack_10->SetBinContent(3,6.110383);
   hCCpi0inFV_stack_10->SetBinContent(4,13.14095);
   hCCpi0inFV_stack_10->SetBinContent(5,17.67338);
   hCCpi0inFV_stack_10->SetBinContent(6,21.47406);
   hCCpi0inFV_stack_10->SetBinContent(7,19.01664);
   hCCpi0inFV_stack_10->SetBinContent(8,16.29832);
   hCCpi0inFV_stack_10->SetBinContent(9,24.79884);
   hCCpi0inFV_stack_10->SetBinContent(10,20.74029);
   hCCpi0inFV_stack_10->SetBinContent(11,21.18103);
   hCCpi0inFV_stack_10->SetBinContent(12,12.57566);
   hCCpi0inFV_stack_10->SetBinContent(13,14.74317);
   hCCpi0inFV_stack_10->SetBinContent(14,13.86333);
   hCCpi0inFV_stack_10->SetBinContent(15,11.3546);
   hCCpi0inFV_stack_10->SetBinContent(16,14.30384);
   hCCpi0inFV_stack_10->SetBinContent(17,6.800273);
   hCCpi0inFV_stack_10->SetBinContent(18,7.569147);
   hCCpi0inFV_stack_10->SetBinContent(19,6.574183);
   hCCpi0inFV_stack_10->SetBinContent(20,6.203051);
   hCCpi0inFV_stack_10->SetBinContent(21,3.856305);
   hCCpi0inFV_stack_10->SetBinContent(22,2.444031);
   hCCpi0inFV_stack_10->SetBinContent(23,2.102163);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.194071);
   hCCpi0inFV_stack_10->SetBinError(2,1.231594);
   hCCpi0inFV_stack_10->SetBinError(3,1.241763);
   hCCpi0inFV_stack_10->SetBinError(4,1.819833);
   hCCpi0inFV_stack_10->SetBinError(5,2.098654);
   hCCpi0inFV_stack_10->SetBinError(6,2.320787);
   hCCpi0inFV_stack_10->SetBinError(7,2.126863);
   hCCpi0inFV_stack_10->SetBinError(8,1.983858);
   hCCpi0inFV_stack_10->SetBinError(9,2.508321);
   hCCpi0inFV_stack_10->SetBinError(10,2.321145);
   hCCpi0inFV_stack_10->SetBinError(11,2.342041);
   hCCpi0inFV_stack_10->SetBinError(12,1.675936);
   hCCpi0inFV_stack_10->SetBinError(13,1.942095);
   hCCpi0inFV_stack_10->SetBinError(14,1.923252);
   hCCpi0inFV_stack_10->SetBinError(15,1.737184);
   hCCpi0inFV_stack_10->SetBinError(16,1.970455);
   hCCpi0inFV_stack_10->SetBinError(17,1.256489);
   hCCpi0inFV_stack_10->SetBinError(18,1.387406);
   hCCpi0inFV_stack_10->SetBinError(19,1.317931);
   hCCpi0inFV_stack_10->SetBinError(20,1.23341);
   hCCpi0inFV_stack_10->SetBinError(21,1.000479);
   hCCpi0inFV_stack_10->SetBinError(22,0.759648);
   hCCpi0inFV_stack_10->SetBinError(23,0.6787356);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.038287);
   hNCinFV_stack_11->SetBinContent(2,7.703074);
   hNCinFV_stack_11->SetBinContent(3,5.905215);
   hNCinFV_stack_11->SetBinContent(4,11.58352);
   hNCinFV_stack_11->SetBinContent(5,12.35239);
   hNCinFV_stack_11->SetBinContent(6,10.20989);
   hNCinFV_stack_11->SetBinContent(7,8.802692);
   hNCinFV_stack_11->SetBinContent(8,12.68811);
   hNCinFV_stack_11->SetBinContent(9,11.33186);
   hNCinFV_stack_11->SetBinContent(10,9.078391);
   hNCinFV_stack_11->SetBinContent(11,11.92093);
   hNCinFV_stack_11->SetBinContent(12,8.565639);
   hNCinFV_stack_11->SetBinContent(13,11.8178);
   hNCinFV_stack_11->SetBinContent(14,8.347556);
   hNCinFV_stack_11->SetBinContent(15,4.207707);
   hNCinFV_stack_11->SetBinContent(16,7.417233);
   hNCinFV_stack_11->SetBinContent(17,7.737359);
   hNCinFV_stack_11->SetBinContent(18,6.787357);
   hNCinFV_stack_11->SetBinContent(19,3.124387);
   hNCinFV_stack_11->SetBinContent(20,5.66539);
   hNCinFV_stack_11->SetBinContent(21,3.127768);
   hNCinFV_stack_11->SetBinContent(22,2.243935);
   hNCinFV_stack_11->SetBinContent(23,0.7868615);
   hNCinFV_stack_11->SetBinError(1,1.110767);
   hNCinFV_stack_11->SetBinError(2,1.482084);
   hNCinFV_stack_11->SetBinError(3,1.224732);
   hNCinFV_stack_11->SetBinError(4,1.676368);
   hNCinFV_stack_11->SetBinError(5,1.776609);
   hNCinFV_stack_11->SetBinError(6,1.593944);
   hNCinFV_stack_11->SetBinError(7,1.455592);
   hNCinFV_stack_11->SetBinError(8,1.862445);
   hNCinFV_stack_11->SetBinError(9,1.67606);
   hNCinFV_stack_11->SetBinError(10,1.570601);
   hNCinFV_stack_11->SetBinError(11,1.767267);
   hNCinFV_stack_11->SetBinError(12,1.387462);
   hNCinFV_stack_11->SetBinError(13,1.789193);
   hNCinFV_stack_11->SetBinError(14,1.440962);
   hNCinFV_stack_11->SetBinError(15,0.9605668);
   hNCinFV_stack_11->SetBinError(16,1.358146);
   hNCinFV_stack_11->SetBinError(17,1.34656);
   hNCinFV_stack_11->SetBinError(18,1.3312);
   hNCinFV_stack_11->SetBinError(19,0.89917);
   hNCinFV_stack_11->SetBinError(20,1.226202);
   hNCinFV_stack_11->SetBinError(21,0.8999062);
   hNCinFV_stack_11->SetBinError(22,0.7328326);
   hNCinFV_stack_11->SetBinError(23,0.3934307);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,11.9902);
   hnumuCCinFV_stack_12->SetBinContent(2,9.262459);
   hnumuCCinFV_stack_12->SetBinContent(3,9.51873);
   hnumuCCinFV_stack_12->SetBinContent(4,12.17299);
   hnumuCCinFV_stack_12->SetBinContent(5,12.71926);
   hnumuCCinFV_stack_12->SetBinContent(6,11.84763);
   hnumuCCinFV_stack_12->SetBinContent(7,15.89773);
   hnumuCCinFV_stack_12->SetBinContent(8,12.34226);
   hnumuCCinFV_stack_12->SetBinContent(9,19.57811);
   hnumuCCinFV_stack_12->SetBinContent(10,10.77354);
   hnumuCCinFV_stack_12->SetBinContent(11,11.87663);
   hnumuCCinFV_stack_12->SetBinContent(12,11.11464);
   hnumuCCinFV_stack_12->SetBinContent(13,12.28706);
   hnumuCCinFV_stack_12->SetBinContent(14,9.816569);
   hnumuCCinFV_stack_12->SetBinContent(15,8.396091);
   hnumuCCinFV_stack_12->SetBinContent(16,9.853269);
   hnumuCCinFV_stack_12->SetBinContent(17,7.94818);
   hnumuCCinFV_stack_12->SetBinContent(18,5.913589);
   hnumuCCinFV_stack_12->SetBinContent(19,7.358469);
   hnumuCCinFV_stack_12->SetBinContent(20,2.656427);
   hnumuCCinFV_stack_12->SetBinContent(21,3.997283);
   hnumuCCinFV_stack_12->SetBinContent(22,2.389138);
   hnumuCCinFV_stack_12->SetBinContent(23,1.117768);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5352025);
   hnumuCCinFV_stack_12->SetBinError(1,1.941219);
   hnumuCCinFV_stack_12->SetBinError(2,1.682405);
   hnumuCCinFV_stack_12->SetBinError(3,1.689146);
   hnumuCCinFV_stack_12->SetBinError(4,1.855284);
   hnumuCCinFV_stack_12->SetBinError(5,2.081507);
   hnumuCCinFV_stack_12->SetBinError(6,1.778278);
   hnumuCCinFV_stack_12->SetBinError(7,2.62978);
   hnumuCCinFV_stack_12->SetBinError(8,1.888775);
   hnumuCCinFV_stack_12->SetBinError(9,3.80591);
   hnumuCCinFV_stack_12->SetBinError(10,1.724458);
   hnumuCCinFV_stack_12->SetBinError(11,1.924346);
   hnumuCCinFV_stack_12->SetBinError(12,1.774247);
   hnumuCCinFV_stack_12->SetBinError(13,2.108713);
   hnumuCCinFV_stack_12->SetBinError(14,1.628339);
   hnumuCCinFV_stack_12->SetBinError(15,1.627609);
   hnumuCCinFV_stack_12->SetBinError(16,1.800152);
   hnumuCCinFV_stack_12->SetBinError(17,1.558179);
   hnumuCCinFV_stack_12->SetBinError(18,1.296453);
   hnumuCCinFV_stack_12->SetBinError(19,1.596771);
   hnumuCCinFV_stack_12->SetBinError(20,0.7795928);
   hnumuCCinFV_stack_12->SetBinError(21,1.085454);
   hnumuCCinFV_stack_12->SetBinError(22,1.100493);
   hnumuCCinFV_stack_12->SetBinError(23,0.5729121);
   hnumuCCinFV_stack_12->SetBinError(24,0.3921167);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.03861);
   hnueCCinFV_stack_13->SetBinContent(2,2.038366);
   hnueCCinFV_stack_13->SetBinContent(3,1.114815);
   hnueCCinFV_stack_13->SetBinContent(4,0.4823022);
   hnueCCinFV_stack_13->SetBinContent(5,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(6,0.7432469);
   hnueCCinFV_stack_13->SetBinContent(8,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(9,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(10,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(11,0.6494422);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.9348773);
   hnueCCinFV_stack_13->SetBinContent(18,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.5421667);
   hnueCCinFV_stack_13->SetBinError(2,0.7425636);
   hnueCCinFV_stack_13->SetBinError(3,0.5781269);
   hnueCCinFV_stack_13->SetBinError(4,0.341164);
   hnueCCinFV_stack_13->SetBinError(5,0.4213728);
   hnueCCinFV_stack_13->SetBinError(6,0.4438896);
   hnueCCinFV_stack_13->SetBinError(8,0.3921167);
   hnueCCinFV_stack_13->SetBinError(9,0.3387718);
   hnueCCinFV_stack_13->SetBinError(10,0.2770047);
   hnueCCinFV_stack_13->SetBinError(11,0.3778196);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.6851193);
   hnueCCinFV_stack_13->SetBinError(18,0.3401776);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__20->SetBinContent(1,49.10617);
   hmcerror__20->SetBinContent(2,51.35374);
   hmcerror__20->SetBinContent(3,55.05557);
   hmcerror__20->SetBinContent(4,86.80327);
   hmcerror__20->SetBinContent(5,131.3065);
   hmcerror__20->SetBinContent(6,147.1669);
   hmcerror__20->SetBinContent(7,153.3423);
   hmcerror__20->SetBinContent(8,145.5947);
   hmcerror__20->SetBinContent(9,158.0135);
   hmcerror__20->SetBinContent(10,143.5246);
   hmcerror__20->SetBinContent(11,142.4969);
   hmcerror__20->SetBinContent(12,130.1121);
   hmcerror__20->SetBinContent(13,118.5839);
   hmcerror__20->SetBinContent(14,96.3054);
   hmcerror__20->SetBinContent(15,79.41186);
   hmcerror__20->SetBinContent(16,81.04652);
   hmcerror__20->SetBinContent(17,64.33971);
   hmcerror__20->SetBinContent(18,49.45833);
   hmcerror__20->SetBinContent(19,42.17041);
   hmcerror__20->SetBinContent(20,35.92736);
   hmcerror__20->SetBinContent(21,23.81301);
   hmcerror__20->SetBinContent(22,18.43961);
   hmcerror__20->SetBinContent(23,10.07554);
   hmcerror__20->SetBinContent(24,3.059045);
   hmcerror__20->SetBinError(1,18.60455);
   hmcerror__20->SetBinError(2,24.72401);
   hmcerror__20->SetBinError(3,21.71584);
   hmcerror__20->SetBinError(4,30.47751);
   hmcerror__20->SetBinError(5,52.43859);
   hmcerror__20->SetBinError(6,63.86091);
   hmcerror__20->SetBinError(7,70.17795);
   hmcerror__20->SetBinError(8,64.04618);
   hmcerror__20->SetBinError(9,64.70512);
   hmcerror__20->SetBinError(10,61.85527);
   hmcerror__20->SetBinError(11,61.48704);
   hmcerror__20->SetBinError(12,53.01824);
   hmcerror__20->SetBinError(13,45.77648);
   hmcerror__20->SetBinError(14,38.07518);
   hmcerror__20->SetBinError(15,41.55374);
   hmcerror__20->SetBinError(16,29.67226);
   hmcerror__20->SetBinError(17,25.69557);
   hmcerror__20->SetBinError(18,18.7399);
   hmcerror__20->SetBinError(19,17.23631);
   hmcerror__20->SetBinError(20,18.33711);
   hmcerror__20->SetBinError(21,12.09531);
   hmcerror__20->SetBinError(22,8.668468);
   hmcerror__20->SetBinError(23,6.853771);
   hmcerror__20->SetBinError(24,4.040909);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3025[24] = {
   31,
   35,
   50,
   69,
   87,
   81,
   110,
   102,
   108,
   128,
   87,
   101,
   84,
   60,
   68,
   62,
   44,
   39,
   33,
   29,
   15,
   11,
   12,
   6};
   Double_t _felx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3025[24] = {
   5.7094,
   6.0548,
   7.2025,
   8.4327,
   9.4503,
   9.1239,
   10.48809,
   10.0995,
   10.3923,
   11.31371,
   9.4503,
   10.04988,
   9.2886,
   7.8743,
   8.3726,
   8.0018,
   6.7671,
   6.3813,
   5.8847,
   5.5285,
   4.0385,
   3.4975,
   3.64022,
   2.67925};
   Double_t _fehx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3025[24] = {
   5.5017,
   5.8483,
   6.9985,
   8.2304,
   9.2488,
   8.9221,
   10.48809,
   10.0995,
   10.3923,
   11.31371,
   9.2488,
   10.04988,
   9.0869,
   7.6713,
   8.1701,
   7.7989,
   6.5623,
   6.1757,
   5.6776,
   5.3201,
   3.8197,
   3.27,
   3.4155,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(2.988675);
   Graph_Graph3025->SetMaximum(152.913);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3026[24] = {
   0.3788638,
   0.4814452,
   0.394435,
   0.3511102,
   0.3993603,
   0.4339354,
   0.4576555,
   0.4398937,
   0.409491,
   0.4309733,
   0.4314975,
   0.4074813,
   0.3860261,
   0.3953587,
   0.5232686,
   0.3661139,
   0.3993734,
   0.3789028,
   0.4087299,
   0.5103939,
   0.5079285,
   0.4701003,
   0.6802384,
   1.320971};
   Double_t _fehx3026[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3026[24] = {
   0.3788638,
   0.4814452,
   0.394435,
   0.3511102,
   0.3993603,
   0.4339354,
   0.4576555,
   0.4398937,
   0.409491,
   0.4309733,
   0.4314975,
   0.4074813,
   0.3860261,
   0.3953587,
   0.5232686,
   0.3661139,
   0.3993734,
   0.3789028,
   0.4087299,
   0.5103939,
   0.5079285,
   0.4701003,
   0.6802384,
   1.320971};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,3.465);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
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
   
   Double_t _fx3027[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3027[24] = {
   0.2686515,
   0.2424946,
   0.23597,
   0.2807679,
   0.3650458,
   0.4126126,
   0.4044064,
   0.4157086,
   0.3828219,
   0.4070604,
   0.3882065,
   0.3843183,
   0.363191,
   0.3486834,
   0.3769906,
   0.3179828,
   0.3397265,
   0.3260163,
   0.3104901,
   0.321099,
   0.3002979,
   0.292414,
   0.3824154,
   0.4931983};
   Double_t _fehx3027[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3027[24] = {
   0.2686515,
   0.2424946,
   0.23597,
   0.2807679,
   0.3650458,
   0.4126126,
   0.4044064,
   0.4157086,
   0.3828219,
   0.4070604,
   0.3882065,
   0.3843183,
   0.363191,
   0.3486834,
   0.3769906,
   0.3179828,
   0.3397265,
   0.3260163,
   0.3104901,
   0.321099,
   0.3002979,
   0.292414,
   0.3824154,
   0.4931983};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,3.465);
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
   
   Double_t _fx3028[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3028[24] = {
   0.6312852,
   0.6815472,
   0.9081733,
   0.7949009,
   0.6625721,
   0.5503956,
   0.7173494,
   0.7005752,
   0.6834858,
   0.8918332,
   0.6105397,
   0.7762539,
   0.7083592,
   0.623018,
   0.8562953,
   0.7649927,
   0.6838701,
   0.7885426,
   0.7825392,
   0.8071842,
   0.6299077,
   0.5965419,
   1.191003,
   1.961396};
   Double_t _felx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3028[24] = {
   0.1162664,
   0.1179038,
   0.1308224,
   0.09714726,
   0.07197133,
   0.06199697,
   0.06839658,
   0.06936728,
   0.06576845,
   0.07882766,
   0.06631934,
   0.07724015,
   0.07832935,
   0.08176384,
   0.1054326,
   0.09873095,
   0.1051777,
   0.1290238,
   0.1395457,
   0.1538799,
   0.1695922,
   0.1896732,
   0.3612927,
   0.8758451};
   Double_t _fehx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3028[24] = {
   0.1120368,
   0.1138826,
   0.127117,
   0.09481671,
   0.07043675,
   0.06062574,
   0.06839658,
   0.06936728,
   0.06576845,
   0.07882766,
   0.06490528,
   0.07724015,
   0.07662844,
   0.07965597,
   0.1028826,
   0.09622745,
   0.1019946,
   0.1248667,
   0.1346347,
   0.1480793,
   0.1604039,
   0.1773356,
   0.3389892,
   0.7906323};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.1723527);
   Graph_Graph3028->SetMaximum(2.986545);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
