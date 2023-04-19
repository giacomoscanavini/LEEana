#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 13:44:48 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
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
   pad1->Range(-61.53846,-5.657029,451.2821,625.5484);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__19->SetBinContent(1,70.50043);
   hmc__19->SetBinContent(2,70.39324);
   hmc__19->SetBinContent(3,68.04463);
   hmc__19->SetBinContent(4,65.05074);
   hmc__19->SetBinContent(5,73.90366);
   hmc__19->SetBinContent(6,74.42898);
   hmc__19->SetBinContent(7,84.19052);
   hmc__19->SetBinContent(8,104.5779);
   hmc__19->SetBinContent(9,134.7401);
   hmc__19->SetBinContent(10,188.5724);
   hmc__19->SetBinContent(11,259.9261);
   hmc__19->SetBinContent(12,282.8515);
   hmc__19->SetBinContent(13,212.4665);
   hmc__19->SetBinContent(14,104.5869);
   hmc__19->SetBinContent(15,41.85896);
   hmc__19->SetBinContent(16,24.20622);
   hmc__19->SetBinContent(17,17.91177);
   hmc__19->SetBinContent(18,15.74671);
   hmc__19->SetBinContent(19,12.31865);
   hmc__19->SetBinContent(20,11.8057);
   hmc__19->SetBinContent(21,9.814383);
   hmc__19->SetBinContent(22,7.191924);
   hmc__19->SetBinContent(23,8.104819);
   hmc__19->SetBinContent(24,7.448898);
   hmc__19->SetBinContent(25,6.207912);
   hmc__19->SetBinContent(26,5.41042);
   hmc__19->SetBinContent(27,5.13966);
   hmc__19->SetBinContent(28,4.17522);
   hmc__19->SetBinContent(29,4.847726);
   hmc__19->SetBinContent(30,2.935746);
   hmc__19->SetBinContent(31,3.254285);
   hmc__19->SetBinContent(32,3.974594);
   hmc__19->SetBinContent(33,2.569241);
   hmc__19->SetBinContent(34,2.539573);
   hmc__19->SetBinContent(35,24.811);
   hmc__19->SetBinError(1,30.3436);
   hmc__19->SetBinError(2,22.73286);
   hmc__19->SetBinError(3,23.45914);
   hmc__19->SetBinError(4,21.79174);
   hmc__19->SetBinError(5,25.37537);
   hmc__19->SetBinError(6,30.72407);
   hmc__19->SetBinError(7,34.32379);
   hmc__19->SetBinError(8,47.43425);
   hmc__19->SetBinError(9,52.91984);
   hmc__19->SetBinError(10,84.655);
   hmc__19->SetBinError(11,114.0626);
   hmc__19->SetBinError(12,127.0281);
   hmc__19->SetBinError(13,114.5595);
   hmc__19->SetBinError(14,72.32785);
   hmc__19->SetBinError(15,32.64076);
   hmc__19->SetBinError(16,12.03205);
   hmc__19->SetBinError(17,11.63894);
   hmc__19->SetBinError(18,10.09134);
   hmc__19->SetBinError(19,9.609041);
   hmc__19->SetBinError(20,9.844915);
   hmc__19->SetBinError(21,8.18383);
   hmc__19->SetBinError(22,6.198605);
   hmc__19->SetBinError(23,11.25857);
   hmc__19->SetBinError(24,9.992274);
   hmc__19->SetBinError(25,8.090315);
   hmc__19->SetBinError(26,6.651507);
   hmc__19->SetBinError(27,6.621035);
   hmc__19->SetBinError(28,7.650683);
   hmc__19->SetBinError(29,8.856273);
   hmc__19->SetBinError(30,3.744876);
   hmc__19->SetBinError(31,8.488804);
   hmc__19->SetBinError(32,5.454639);
   hmc__19->SetBinError(33,4.20377);
   hmc__19->SetBinError(34,3.986587);
   hmc__19->SetBinError(35,15.66709);
   hmc__19->SetMinimum(-5.657029);
   hmc__19->SetMaximum(593.9881);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",34,0,400);
   hs7_stack_7->SetMinimum(-1.450578e-08);
   hs7_stack_7->SetMaximum(296.994);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.720014);
   hbadmatch_stack_1->SetBinContent(2,1.984312);
   hbadmatch_stack_1->SetBinContent(3,1.950979);
   hbadmatch_stack_1->SetBinContent(4,1.860737);
   hbadmatch_stack_1->SetBinContent(5,1.226705);
   hbadmatch_stack_1->SetBinContent(6,1.849629);
   hbadmatch_stack_1->SetBinContent(7,2.222891);
   hbadmatch_stack_1->SetBinContent(8,2.619926);
   hbadmatch_stack_1->SetBinContent(9,3.334686);
   hbadmatch_stack_1->SetBinContent(10,3.362718);
   hbadmatch_stack_1->SetBinContent(11,3.493284);
   hbadmatch_stack_1->SetBinContent(12,2.910225);
   hbadmatch_stack_1->SetBinContent(13,2.778702);
   hbadmatch_stack_1->SetBinContent(14,1.020533);
   hbadmatch_stack_1->SetBinContent(15,0.9613601);
   hbadmatch_stack_1->SetBinContent(16,1.692129);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.5901461);
   hbadmatch_stack_1->SetBinContent(23,1.217248);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.1967154);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.9494969);
   hbadmatch_stack_1->SetBinError(2,0.6724433);
   hbadmatch_stack_1->SetBinError(3,0.7094479);
   hbadmatch_stack_1->SetBinError(4,0.7415358);
   hbadmatch_stack_1->SetBinError(5,0.5595017);
   hbadmatch_stack_1->SetBinError(6,0.7297043);
   hbadmatch_stack_1->SetBinError(7,0.7101821);
   hbadmatch_stack_1->SetBinError(8,0.8706631);
   hbadmatch_stack_1->SetBinError(9,0.9298043);
   hbadmatch_stack_1->SetBinError(10,0.9300714);
   hbadmatch_stack_1->SetBinError(11,0.9738731);
   hbadmatch_stack_1->SetBinError(12,0.9072819);
   hbadmatch_stack_1->SetBinError(13,1.293779);
   hbadmatch_stack_1->SetBinError(14,0.5892049);
   hbadmatch_stack_1->SetBinError(15,0.4949601);
   hbadmatch_stack_1->SetBinError(16,0.8138344);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.340721);
   hbadmatch_stack_1->SetBinError(23,0.6211758);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.1967154);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,3.718413);
   hext_stack_2->SetBinContent(2,8.339405);
   hext_stack_2->SetBinContent(3,8.58601);
   hext_stack_2->SetBinContent(4,6.724599);
   hext_stack_2->SetBinContent(5,6.082985);
   hext_stack_2->SetBinContent(6,2.834603);
   hext_stack_2->SetBinContent(7,3.889996);
   hext_stack_2->SetBinContent(8,4.703194);
   hext_stack_2->SetBinContent(9,5.109793);
   hext_stack_2->SetBinContent(10,4.374388);
   hext_stack_2->SetBinContent(11,7.855014);
   hext_stack_2->SetBinContent(12,9.544841);
   hext_stack_2->SetBinContent(13,11.31246);
   hext_stack_2->SetBinContent(14,3.725593);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,1.950793);
   hext_stack_2->SetBinContent(18,0.6487947);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(35,1.137595);
   hext_stack_2->SetBinError(1,1.296206);
   hext_stack_2->SetBinError(2,1.884101);
   hext_stack_2->SetBinError(3,1.931347);
   hext_stack_2->SetBinError(4,1.680019);
   hext_stack_2->SetBinError(5,1.552674);
   hext_stack_2->SetBinError(6,1.106046);
   hext_stack_2->SetBinError(7,1.264566);
   hext_stack_2->SetBinError(8,1.389163);
   hext_stack_2->SetBinError(9,1.447444);
   hext_stack_2->SetBinError(10,1.299776);
   hext_stack_2->SetBinError(11,1.859985);
   hext_stack_2->SetBinError(12,2.109077);
   hext_stack_2->SetBinError(13,2.315563);
   hext_stack_2->SetBinError(14,1.216121);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,0.8755137);
   hext_stack_2->SetBinError(18,0.4587671);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(35,0.6602113);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.1678385);
   hdirt_stack_3->SetBinContent(4,0.6396094);
   hdirt_stack_3->SetBinContent(5,0.9842969);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.4247338);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.8320053);
   hdirt_stack_3->SetBinContent(12,0.6566868);
   hdirt_stack_3->SetBinContent(13,0.5824695);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.165303);
   hdirt_stack_3->SetBinError(4,0.3760961);
   hdirt_stack_3->SetBinError(5,0.5081655);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4247338);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.4177109);
   hdirt_stack_3->SetBinError(12,0.3791383);
   hdirt_stack_3->SetBinError(13,0.3417051);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,4.393198);
   houtFV_stack_4->SetBinContent(2,4.239741);
   houtFV_stack_4->SetBinContent(3,3.519508);
   houtFV_stack_4->SetBinContent(4,3.466255);
   houtFV_stack_4->SetBinContent(5,2.197444);
   houtFV_stack_4->SetBinContent(6,3.082736);
   houtFV_stack_4->SetBinContent(7,2.331668);
   houtFV_stack_4->SetBinContent(8,3.162928);
   houtFV_stack_4->SetBinContent(9,3.371248);
   houtFV_stack_4->SetBinContent(10,6.155379);
   houtFV_stack_4->SetBinContent(11,3.817658);
   houtFV_stack_4->SetBinContent(12,5.846977);
   houtFV_stack_4->SetBinContent(13,2.869793);
   houtFV_stack_4->SetBinContent(14,2.980925);
   houtFV_stack_4->SetBinContent(15,1.175221);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.1967154);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinContent(28,0.3401776);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,1.074885);
   houtFV_stack_4->SetBinError(2,1.071145);
   houtFV_stack_4->SetBinError(3,0.9415746);
   houtFV_stack_4->SetBinError(4,0.9617119);
   houtFV_stack_4->SetBinError(5,0.760276);
   houtFV_stack_4->SetBinError(6,0.9157018);
   houtFV_stack_4->SetBinError(7,0.8065874);
   houtFV_stack_4->SetBinError(8,0.9083807);
   houtFV_stack_4->SetBinError(9,0.9005884);
   houtFV_stack_4->SetBinError(10,1.288133);
   houtFV_stack_4->SetBinError(11,0.9201191);
   houtFV_stack_4->SetBinError(12,1.208272);
   houtFV_stack_4->SetBinError(13,0.8173683);
   houtFV_stack_4->SetBinError(14,0.8552677);
   houtFV_stack_4->SetBinError(15,0.4797863);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.1967154);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetBinError(28,0.3401776);
   houtFV_stack_4->SetBinError(31,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.26979);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.49299);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.54779);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.506103);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.17164);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4161726);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4235881);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3591081);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2971291);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3800824);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,22.32706);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.15766);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.63494);
   hNCpi0inFVres_stack_7->SetBinContent(4,18.46207);
   hNCpi0inFVres_stack_7->SetBinContent(5,23.85608);
   hNCpi0inFVres_stack_7->SetBinContent(6,27.2639);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.13346);
   hNCpi0inFVres_stack_7->SetBinContent(8,51.14688);
   hNCpi0inFVres_stack_7->SetBinContent(9,67.72136);
   hNCpi0inFVres_stack_7->SetBinContent(10,109.6752);
   hNCpi0inFVres_stack_7->SetBinContent(11,159.5072);
   hNCpi0inFVres_stack_7->SetBinContent(12,176.7115);
   hNCpi0inFVres_stack_7->SetBinContent(13,121.448);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.8577);
   hNCpi0inFVres_stack_7->SetBinContent(15,18.1864);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.358997);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.102395);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.570216);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.67808);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.36594);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.255172);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.18509);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.269622);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9060901);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.823054);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.5862361);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.5998541);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.515986);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.5566719);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.3764861);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.4746361);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(35,1.38139);
   hNCpi0inFVres_stack_7->SetBinError(1,1.534471);
   hNCpi0inFVres_stack_7->SetBinError(2,1.383995);
   hNCpi0inFVres_stack_7->SetBinError(3,1.28994);
   hNCpi0inFVres_stack_7->SetBinError(4,1.418003);
   hNCpi0inFVres_stack_7->SetBinError(5,1.57245);
   hNCpi0inFVres_stack_7->SetBinError(6,1.708857);
   hNCpi0inFVres_stack_7->SetBinError(7,1.915219);
   hNCpi0inFVres_stack_7->SetBinError(8,2.311178);
   hNCpi0inFVres_stack_7->SetBinError(9,2.637016);
   hNCpi0inFVres_stack_7->SetBinError(10,3.401019);
   hNCpi0inFVres_stack_7->SetBinError(11,4.193001);
   hNCpi0inFVres_stack_7->SetBinError(12,4.305152);
   hNCpi0inFVres_stack_7->SetBinError(13,3.63151);
   hNCpi0inFVres_stack_7->SetBinError(14,2.454641);
   hNCpi0inFVres_stack_7->SetBinError(15,1.442226);
   hNCpi0inFVres_stack_7->SetBinError(16,1.024836);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7063775);
   hNCpi0inFVres_stack_7->SetBinError(18,0.580231);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5461375);
   hNCpi0inFVres_stack_7->SetBinError(20,0.312868);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3376966);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3447308);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3747542);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3332495);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3085891);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2861196);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2983287);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2321763);
   hNCpi0inFVres_stack_7->SetBinError(29,0.2062853);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(31,0.2236377);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(33,0.2806257);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(35,0.4198967);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.741688);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.643378);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.55527);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.583834);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.018032);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.576864);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.374266);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.090288);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.10009);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.76853);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.42904);
   hNCpi0inFVdis_stack_8->SetBinContent(12,28.23674);
   hNCpi0inFVdis_stack_8->SetBinContent(13,23.27882);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.56833);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.155956);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.673344);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.159102);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7376899);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6403718);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.181018);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4180041);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.613304);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6696057);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7289748);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5970912);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5863477);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7142316);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7382148);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.905362);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9861925);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.039541);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.220456);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.616429);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.717377);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.578708);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.082521);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6817507);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4524662);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4825074);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2331516);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2118699);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1086555);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2406819);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.2517472);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,5.270823);
   hCCpi0inFV_stack_10->SetBinContent(2,6.342363);
   hCCpi0inFV_stack_10->SetBinContent(3,4.534036);
   hCCpi0inFV_stack_10->SetBinContent(4,7.055735);
   hCCpi0inFV_stack_10->SetBinContent(5,6.445489);
   hCCpi0inFV_stack_10->SetBinContent(6,9.818153);
   hCCpi0inFV_stack_10->SetBinContent(7,11.2803);
   hCCpi0inFV_stack_10->SetBinContent(8,14.41327);
   hCCpi0inFV_stack_10->SetBinContent(9,21.19505);
   hCCpi0inFV_stack_10->SetBinContent(10,25.08019);
   hCCpi0inFV_stack_10->SetBinContent(11,31.48875);
   hCCpi0inFV_stack_10->SetBinContent(12,34.56858);
   hCCpi0inFV_stack_10->SetBinContent(13,28.39427);
   hCCpi0inFV_stack_10->SetBinContent(14,16.24574);
   hCCpi0inFV_stack_10->SetBinContent(15,8.028053);
   hCCpi0inFV_stack_10->SetBinContent(16,4.784938);
   hCCpi0inFV_stack_10->SetBinContent(17,5.125115);
   hCCpi0inFV_stack_10->SetBinContent(18,2.640747);
   hCCpi0inFV_stack_10->SetBinContent(19,3.269539);
   hCCpi0inFV_stack_10->SetBinContent(20,4.007611);
   hCCpi0inFV_stack_10->SetBinContent(21,3.316031);
   hCCpi0inFV_stack_10->SetBinContent(22,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(23,0.8753801);
   hCCpi0inFV_stack_10->SetBinContent(24,2.04891);
   hCCpi0inFV_stack_10->SetBinContent(25,2.730956);
   hCCpi0inFV_stack_10->SetBinContent(26,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(27,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(28,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(29,1.410583);
   hCCpi0inFV_stack_10->SetBinContent(30,0.4304439);
   hCCpi0inFV_stack_10->SetBinContent(31,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(32,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(33,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(34,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(35,5.623362);
   hCCpi0inFV_stack_10->SetBinError(1,1.201112);
   hCCpi0inFV_stack_10->SetBinError(2,1.316696);
   hCCpi0inFV_stack_10->SetBinError(3,1.119808);
   hCCpi0inFV_stack_10->SetBinError(4,1.289289);
   hCCpi0inFV_stack_10->SetBinError(5,1.286744);
   hCCpi0inFV_stack_10->SetBinError(6,1.569689);
   hCCpi0inFV_stack_10->SetBinError(7,1.687651);
   hCCpi0inFV_stack_10->SetBinError(8,1.913109);
   hCCpi0inFV_stack_10->SetBinError(9,2.276052);
   hCCpi0inFV_stack_10->SetBinError(10,2.471166);
   hCCpi0inFV_stack_10->SetBinError(11,2.829579);
   hCCpi0inFV_stack_10->SetBinError(12,2.932083);
   hCCpi0inFV_stack_10->SetBinError(13,2.664268);
   hCCpi0inFV_stack_10->SetBinError(14,2.042884);
   hCCpi0inFV_stack_10->SetBinError(15,1.472413);
   hCCpi0inFV_stack_10->SetBinError(16,1.110004);
   hCCpi0inFV_stack_10->SetBinError(17,1.160961);
   hCCpi0inFV_stack_10->SetBinError(18,0.784705);
   hCCpi0inFV_stack_10->SetBinError(19,0.9413781);
   hCCpi0inFV_stack_10->SetBinError(20,0.9395036);
   hCCpi0inFV_stack_10->SetBinError(21,0.9193568);
   hCCpi0inFV_stack_10->SetBinError(22,0.650847);
   hCCpi0inFV_stack_10->SetBinError(23,0.5191111);
   hCCpi0inFV_stack_10->SetBinError(24,0.7064057);
   hCCpi0inFV_stack_10->SetBinError(25,0.8550514);
   hCCpi0inFV_stack_10->SetBinError(26,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(27,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(28,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(29,0.6505627);
   hCCpi0inFV_stack_10->SetBinError(30,0.305493);
   hCCpi0inFV_stack_10->SetBinError(31,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(32,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(33,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(34,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(35,1.160994);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,10.5921);
   hNCinFV_stack_11->SetBinContent(2,8.733142);
   hNCinFV_stack_11->SetBinContent(3,6.782286);
   hNCinFV_stack_11->SetBinContent(4,8.639552);
   hNCinFV_stack_11->SetBinContent(5,12.25772);
   hNCinFV_stack_11->SetBinContent(6,6.741949);
   hNCinFV_stack_11->SetBinContent(7,8.456361);
   hNCinFV_stack_11->SetBinContent(8,4.944697);
   hNCinFV_stack_11->SetBinContent(9,8.891211);
   hNCinFV_stack_11->SetBinContent(10,9.141179);
   hNCinFV_stack_11->SetBinContent(11,13.62459);
   hNCinFV_stack_11->SetBinContent(12,9.492582);
   hNCinFV_stack_11->SetBinContent(13,10.1634);
   hNCinFV_stack_11->SetBinContent(14,9.271725);
   hNCinFV_stack_11->SetBinContent(15,4.157836);
   hNCinFV_stack_11->SetBinContent(16,1.607298);
   hNCinFV_stack_11->SetBinContent(17,2.500666);
   hNCinFV_stack_11->SetBinContent(18,3.666351);
   hNCinFV_stack_11->SetBinContent(19,2.87949);
   hNCinFV_stack_11->SetBinContent(20,3.369284);
   hNCinFV_stack_11->SetBinContent(21,2.587494);
   hNCinFV_stack_11->SetBinContent(22,1.072095);
   hNCinFV_stack_11->SetBinContent(23,1.515398);
   hNCinFV_stack_11->SetBinContent(24,2.197444);
   hNCinFV_stack_11->SetBinContent(25,1.217248);
   hNCinFV_stack_11->SetBinContent(26,1.373626);
   hNCinFV_stack_11->SetBinContent(27,2.050601);
   hNCinFV_stack_11->SetBinContent(28,1.176911);
   hNCinFV_stack_11->SetBinContent(29,1.320373);
   hNCinFV_stack_11->SetBinContent(30,1.121968);
   hNCinFV_stack_11->SetBinContent(31,1.412273);
   hNCinFV_stack_11->SetBinContent(32,1.268811);
   hNCinFV_stack_11->SetBinContent(33,1.465526);
   hNCinFV_stack_11->SetBinContent(34,0.7319179);
   hNCinFV_stack_11->SetBinContent(35,10.01825);
   hNCinFV_stack_11->SetBinError(1,1.676914);
   hNCinFV_stack_11->SetBinError(2,1.532671);
   hNCinFV_stack_11->SetBinError(3,1.330454);
   hNCinFV_stack_11->SetBinError(4,1.494124);
   hNCinFV_stack_11->SetBinError(5,1.799342);
   hNCinFV_stack_11->SetBinError(6,1.270868);
   hNCinFV_stack_11->SetBinError(7,1.482905);
   hNCinFV_stack_11->SetBinError(8,1.056943);
   hNCinFV_stack_11->SetBinError(9,1.494469);
   hNCinFV_stack_11->SetBinError(10,1.494593);
   hNCinFV_stack_11->SetBinError(11,1.87204);
   hNCinFV_stack_11->SetBinError(12,1.468175);
   hNCinFV_stack_11->SetBinError(13,1.606746);
   hNCinFV_stack_11->SetBinError(14,1.582454);
   hNCinFV_stack_11->SetBinError(15,0.9809893);
   hNCinFV_stack_11->SetBinError(16,0.6796534);
   hNCinFV_stack_11->SetBinError(17,0.7348895);
   hNCinFV_stack_11->SetBinError(18,0.9822989);
   hNCinFV_stack_11->SetBinError(19,0.9000686);
   hNCinFV_stack_11->SetBinError(20,0.8982705);
   hNCinFV_stack_11->SetBinError(21,0.8087577);
   hNCinFV_stack_11->SetBinError(22,0.5551335);
   hNCinFV_stack_11->SetBinError(23,0.588146);
   hNCinFV_stack_11->SetBinError(24,0.760276);
   hNCinFV_stack_11->SetBinError(25,0.6211758);
   hNCinFV_stack_11->SetBinError(26,0.519186);
   hNCinFV_stack_11->SetBinError(27,0.7068742);
   hNCinFV_stack_11->SetBinError(28,0.4804759);
   hNCinFV_stack_11->SetBinError(29,0.5548703);
   hNCinFV_stack_11->SetBinError(30,0.5181909);
   hNCinFV_stack_11->SetBinError(31,0.6510715);
   hNCinFV_stack_11->SetBinError(32,0.5889569);
   hNCinFV_stack_11->SetBinError(33,0.6209405);
   hNCinFV_stack_11->SetBinError(34,0.438694);
   hNCinFV_stack_11->SetBinError(35,1.582386);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,14.66292);
   hnumuCCinFV_stack_12->SetBinContent(2,15.9432);
   hnumuCCinFV_stack_12->SetBinContent(3,21.41616);
   hnumuCCinFV_stack_12->SetBinContent(4,13.90867);
   hnumuCCinFV_stack_12->SetBinContent(5,15.09542);
   hnumuCCinFV_stack_12->SetBinContent(6,15.44792);
   hnumuCCinFV_stack_12->SetBinContent(7,13.50589);
   hnumuCCinFV_stack_12->SetBinContent(8,13.43945);
   hnumuCCinFV_stack_12->SetBinContent(9,12.28684);
   hnumuCCinFV_stack_12->SetBinContent(10,13.15574);
   hnumuCCinFV_stack_12->SetBinContent(11,10.97538);
   hnumuCCinFV_stack_12->SetBinContent(12,12.33949);
   hnumuCCinFV_stack_12->SetBinContent(13,9.862126);
   hnumuCCinFV_stack_12->SetBinContent(14,6.84341);
   hnumuCCinFV_stack_12->SetBinContent(15,3.70274);
   hnumuCCinFV_stack_12->SetBinContent(16,2.397541);
   hnumuCCinFV_stack_12->SetBinContent(17,1.86955);
   hnumuCCinFV_stack_12->SetBinContent(18,3.749128);
   hnumuCCinFV_stack_12->SetBinContent(19,2.095208);
   hnumuCCinFV_stack_12->SetBinContent(20,1.383379);
   hnumuCCinFV_stack_12->SetBinContent(21,1.790699);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9593096);
   hnumuCCinFV_stack_12->SetBinContent(23,1.906526);
   hnumuCCinFV_stack_12->SetBinContent(24,1.934028);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5963737);
   hnumuCCinFV_stack_12->SetBinContent(26,1.217248);
   hnumuCCinFV_stack_12->SetBinContent(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(28,0.7891917);
   hnumuCCinFV_stack_12->SetBinContent(29,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(30,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(31,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(32,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,4.911754);
   hnumuCCinFV_stack_12->SetBinError(1,2.079542);
   hnumuCCinFV_stack_12->SetBinError(2,2.519627);
   hnumuCCinFV_stack_12->SetBinError(3,3.075965);
   hnumuCCinFV_stack_12->SetBinError(4,2.343211);
   hnumuCCinFV_stack_12->SetBinError(5,2.42317);
   hnumuCCinFV_stack_12->SetBinError(6,2.174223);
   hnumuCCinFV_stack_12->SetBinError(7,2.078761);
   hnumuCCinFV_stack_12->SetBinError(8,1.991651);
   hnumuCCinFV_stack_12->SetBinError(9,1.971949);
   hnumuCCinFV_stack_12->SetBinError(10,1.93802);
   hnumuCCinFV_stack_12->SetBinError(11,1.716643);
   hnumuCCinFV_stack_12->SetBinError(12,1.995177);
   hnumuCCinFV_stack_12->SetBinError(13,2.823346);
   hnumuCCinFV_stack_12->SetBinError(14,1.355046);
   hnumuCCinFV_stack_12->SetBinError(15,1.02119);
   hnumuCCinFV_stack_12->SetBinError(16,0.7861558);
   hnumuCCinFV_stack_12->SetBinError(17,0.6932787);
   hnumuCCinFV_stack_12->SetBinError(18,1.000624);
   hnumuCCinFV_stack_12->SetBinError(19,0.7204581);
   hnumuCCinFV_stack_12->SetBinError(20,0.725594);
   hnumuCCinFV_stack_12->SetBinError(21,0.8048431);
   hnumuCCinFV_stack_12->SetBinError(22,0.5023668);
   hnumuCCinFV_stack_12->SetBinError(23,1.088477);
   hnumuCCinFV_stack_12->SetBinError(24,0.7571664);
   hnumuCCinFV_stack_12->SetBinError(25,0.4207336);
   hnumuCCinFV_stack_12->SetBinError(26,0.6211758);
   hnumuCCinFV_stack_12->SetBinError(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(28,0.4671895);
   hnumuCCinFV_stack_12->SetBinError(29,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(30,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(31,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(32,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,1.074838);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.088776);
   hnueCCinFV_stack_13->SetBinContent(2,1.230763);
   hnueCCinFV_stack_13->SetBinContent(3,0.6886892);
   hnueCCinFV_stack_13->SetBinContent(4,0.4313416);
   hnueCCinFV_stack_13->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_13->SetBinContent(6,0.5817212);
   hnueCCinFV_stack_13->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,1.783327);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,0.9286332);
   hnueCCinFV_stack_13->SetBinError(1,0.5621645);
   hnueCCinFV_stack_13->SetBinError(2,0.5628535);
   hnueCCinFV_stack_13->SetBinError(3,0.4882097);
   hnueCCinFV_stack_13->SetBinError(4,0.3061804);
   hnueCCinFV_stack_13->SetBinError(5,0.3554931);
   hnueCCinFV_stack_13->SetBinError(6,0.4330921);
   hnueCCinFV_stack_13->SetBinError(8,0.2107505);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.8069925);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,0.48078);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__20->SetBinContent(1,70.50043);
   hmcerror__20->SetBinContent(2,70.39324);
   hmcerror__20->SetBinContent(3,68.04463);
   hmcerror__20->SetBinContent(4,65.05074);
   hmcerror__20->SetBinContent(5,73.90366);
   hmcerror__20->SetBinContent(6,74.42898);
   hmcerror__20->SetBinContent(7,84.19052);
   hmcerror__20->SetBinContent(8,104.5779);
   hmcerror__20->SetBinContent(9,134.7401);
   hmcerror__20->SetBinContent(10,188.5724);
   hmcerror__20->SetBinContent(11,259.9261);
   hmcerror__20->SetBinContent(12,282.8515);
   hmcerror__20->SetBinContent(13,212.4665);
   hmcerror__20->SetBinContent(14,104.5869);
   hmcerror__20->SetBinContent(15,41.85896);
   hmcerror__20->SetBinContent(16,24.20622);
   hmcerror__20->SetBinContent(17,17.91177);
   hmcerror__20->SetBinContent(18,15.74671);
   hmcerror__20->SetBinContent(19,12.31865);
   hmcerror__20->SetBinContent(20,11.8057);
   hmcerror__20->SetBinContent(21,9.814383);
   hmcerror__20->SetBinContent(22,7.191924);
   hmcerror__20->SetBinContent(23,8.104819);
   hmcerror__20->SetBinContent(24,7.448898);
   hmcerror__20->SetBinContent(25,6.207912);
   hmcerror__20->SetBinContent(26,5.41042);
   hmcerror__20->SetBinContent(27,5.13966);
   hmcerror__20->SetBinContent(28,4.17522);
   hmcerror__20->SetBinContent(29,4.847726);
   hmcerror__20->SetBinContent(30,2.935746);
   hmcerror__20->SetBinContent(31,3.254285);
   hmcerror__20->SetBinContent(32,3.974594);
   hmcerror__20->SetBinContent(33,2.569241);
   hmcerror__20->SetBinContent(34,2.539573);
   hmcerror__20->SetBinContent(35,24.811);
   hmcerror__20->SetBinError(1,30.3436);
   hmcerror__20->SetBinError(2,22.73286);
   hmcerror__20->SetBinError(3,23.45914);
   hmcerror__20->SetBinError(4,21.79174);
   hmcerror__20->SetBinError(5,25.37537);
   hmcerror__20->SetBinError(6,30.72407);
   hmcerror__20->SetBinError(7,34.32379);
   hmcerror__20->SetBinError(8,47.43425);
   hmcerror__20->SetBinError(9,52.91984);
   hmcerror__20->SetBinError(10,84.655);
   hmcerror__20->SetBinError(11,114.0626);
   hmcerror__20->SetBinError(12,127.0281);
   hmcerror__20->SetBinError(13,114.5595);
   hmcerror__20->SetBinError(14,72.32785);
   hmcerror__20->SetBinError(15,32.64076);
   hmcerror__20->SetBinError(16,12.03205);
   hmcerror__20->SetBinError(17,11.63894);
   hmcerror__20->SetBinError(18,10.09134);
   hmcerror__20->SetBinError(19,9.609041);
   hmcerror__20->SetBinError(20,9.844915);
   hmcerror__20->SetBinError(21,8.18383);
   hmcerror__20->SetBinError(22,6.198605);
   hmcerror__20->SetBinError(23,11.25857);
   hmcerror__20->SetBinError(24,9.992274);
   hmcerror__20->SetBinError(25,8.090315);
   hmcerror__20->SetBinError(26,6.651507);
   hmcerror__20->SetBinError(27,6.621035);
   hmcerror__20->SetBinError(28,7.650683);
   hmcerror__20->SetBinError(29,8.856273);
   hmcerror__20->SetBinError(30,3.744876);
   hmcerror__20->SetBinError(31,8.488804);
   hmcerror__20->SetBinError(32,5.454639);
   hmcerror__20->SetBinError(33,4.20377);
   hmcerror__20->SetBinError(34,3.986587);
   hmcerror__20->SetBinError(35,15.66709);
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
   
   Double_t _fx3025[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3025[34] = {
   56,
   48,
   48,
   50,
   58,
   48,
   77,
   59,
   107,
   144,
   178,
   231,
   149,
   54,
   32,
   13,
   11,
   12,
   10,
   8,
   9,
   9,
   3,
   4,
   1,
   3,
   2,
   7,
   3,
   2,
   1,
   1,
   1,
   2};
   Double_t _felx3025[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3025[34] = {
   7.6127,
   7.0604,
   7.0604,
   7.2025,
   7.7446,
   7.0604,
   8.8995,
   7.8097,
   10.34408,
   12,
   13.34166,
   15.19868,
   12.20656,
   7.4785,
   5.7977,
   3.77763,
   3.4975,
   3.64022,
   3.34883,
   3.0307,
   3.19354,
   3.19354,
   2.143368,
   2.29683,
   1,
   2.143368,
   2,
   2.85954,
   2.143368,
   2,
   1,
   1,
   1,
   2};
   Double_t _fehx3025[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3025[34] = {
   7.4094,
   6.8561,
   6.8561,
   6.9985,
   7.5415,
   6.8561,
   8.6976,
   7.6066,
   10.34408,
   12,
   13.34166,
   15.19868,
   12.20656,
   7.275,
   5.5904,
   3.5552,
   3.27,
   3.4155,
   3.1179,
   2.7896,
   2.9582,
   2.9582,
   1.72422,
   1.98186,
   1.35971,
   1.72422,
   1.51917,
   2.61053,
   1.72422,
   1.51917,
   1.35971,
   1.35971,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,440);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(270.8186);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1441.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 93.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  948.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  170.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 268.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 166.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 216.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3026[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3026[34] = {
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
   Double_t _felx3026[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3026[34] = {
   0.430403,
   0.3229409,
   0.3447611,
   0.334996,
   0.3433574,
   0.4127971,
   0.4076919,
   0.4535784,
   0.392755,
   0.4489258,
   0.4388271,
   0.4490982,
   0.5391887,
   0.6915575,
   0.7797796,
   0.4970645,
   0.6497928,
   0.6408537,
   0.7800401,
   0.8339117,
   0.8338609,
   0.8618841,
   1.389121,
   1.341443,
   1.303226,
   1.229388,
   1.288224,
   1.832402,
   1.826892,
   1.275613,
   2.6085,
   1.372376,
   1.636192,
   1.569786};
   Double_t _fehx3026[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3026[34] = {
   0.430403,
   0.3229409,
   0.3447611,
   0.334996,
   0.3433574,
   0.4127971,
   0.4076919,
   0.4535784,
   0.392755,
   0.4489258,
   0.4388271,
   0.4490982,
   0.5391887,
   0.6915575,
   0.7797796,
   0.4970645,
   0.6497928,
   0.6408537,
   0.7800401,
   0.8339117,
   0.8338609,
   0.8618841,
   1.389121,
   1.341443,
   1.303226,
   1.229388,
   1.288224,
   1.832402,
   1.826892,
   1.275613,
   2.6085,
   1.372376,
   1.636192,
   1.569786};
   grae = new TGraphAsymmErrors(34,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,440);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3027[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3027[34] = {
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
   Double_t _felx3027[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3027[34] = {
   0.253267,
   0.2204585,
   0.2242973,
   0.2415704,
   0.2685517,
   0.2949741,
   0.3012726,
   0.3598063,
   0.3687919,
   0.4128433,
   0.4291742,
   0.4349019,
   0.4140261,
   0.3976794,
   0.362584,
   0.3388594,
   0.3121354,
   0.3316431,
   0.3163778,
   0.3179181,
   0.3331969,
   0.2932742,
   0.4008765,
   0.3360128,
   0.4174686,
   0.3647864,
   0.4132727,
   0.3967557,
   0.5654256,
   0.4376164,
   0.4562801,
   0.3850334,
   0.4655313,
   0.4856839};
   Double_t _fehx3027[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3027[34] = {
   0.253267,
   0.2204585,
   0.2242973,
   0.2415704,
   0.2685517,
   0.2949741,
   0.3012726,
   0.3598063,
   0.3687919,
   0.4128433,
   0.4291742,
   0.4349019,
   0.4140261,
   0.3976794,
   0.362584,
   0.3388594,
   0.3121354,
   0.3316431,
   0.3163778,
   0.3179181,
   0.3331969,
   0.2932742,
   0.4008765,
   0.3360128,
   0.4174686,
   0.3647864,
   0.4132727,
   0.3967557,
   0.5654256,
   0.4376164,
   0.4562801,
   0.3850334,
   0.4655313,
   0.4856839};
   grae = new TGraphAsymmErrors(34,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,440);
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
   
   Double_t _fx3028[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3028[34] = {
   0.7943214,
   0.6818836,
   0.7054193,
   0.7686307,
   0.7848055,
   0.6449101,
   0.9145923,
   0.564173,
   0.7941216,
   0.7636325,
   0.6848101,
   0.816683,
   0.7012872,
   0.5163171,
   0.7644719,
   0.5370519,
   0.6141214,
   0.762064,
   0.8117772,
   0.6776385,
   0.9170215,
   1.251404,
   0.3701501,
   0.5369922,
   0.1610848,
   0.5544856,
   0.3891308,
   1.676558,
   0.6188468,
   0.6812579,
   0.3072871,
   0.251598,
   0.3892201,
   0.7875339};
   Double_t _felx3028[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3028[34] = {
   0.1079809,
   0.1002994,
   0.1037613,
   0.1107213,
   0.1047932,
   0.0948609,
   0.1057067,
   0.07467833,
   0.07677063,
   0.06363604,
   0.05132869,
   0.0537338,
   0.05745168,
   0.07150514,
   0.1385056,
   0.1560603,
   0.1952627,
   0.2311734,
   0.2718504,
   0.2567149,
   0.3253939,
   0.4440453,
   0.264456,
   0.3083449,
   0.1610848,
   0.3961556,
   0.3891308,
   0.6848836,
   0.4421388,
   0.6812579,
   0.3072871,
   0.251598,
   0.3892201,
   0.7875339};
   Double_t _fehx3028[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3028[34] = {
   0.1050972,
   0.09739713,
   0.1007589,
   0.1075852,
   0.102045,
   0.092116,
   0.1033085,
   0.07273624,
   0.07677063,
   0.06363604,
   0.05132869,
   0.0537338,
   0.05745168,
   0.06955939,
   0.1335532,
   0.1468713,
   0.1825615,
   0.2169025,
   0.253104,
   0.2362926,
   0.3014148,
   0.4113225,
   0.2127401,
   0.2660608,
   0.2190286,
   0.3186851,
   0.2955779,
   0.6252436,
   0.355676,
   0.5174732,
   0.4178214,
   0.3421004,
   0.5292264,
   0.5981989};
   grae = new TGraphAsymmErrors(34,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,440);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(2.531982);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
