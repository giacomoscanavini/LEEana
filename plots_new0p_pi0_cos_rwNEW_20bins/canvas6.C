#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 13:03:48 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
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
   pad1->Range(-1.307692,-17.19114,1.25641,1900.978);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__16->SetBinContent(1,71.71552);
   hmc__16->SetBinContent(2,59.8583);
   hmc__16->SetBinContent(3,58.17279);
   hmc__16->SetBinContent(4,54.25903);
   hmc__16->SetBinContent(5,58.67828);
   hmc__16->SetBinContent(6,57.36079);
   hmc__16->SetBinContent(7,49.9712);
   hmc__16->SetBinContent(8,61.09049);
   hmc__16->SetBinContent(9,76.32533);
   hmc__16->SetBinContent(10,76.499);
   hmc__16->SetBinContent(11,86.15666);
   hmc__16->SetBinContent(12,104.6468);
   hmc__16->SetBinContent(13,127.3321);
   hmc__16->SetBinContent(14,148.8665);
   hmc__16->SetBinContent(15,188.0977);
   hmc__16->SetBinContent(16,261.1981);
   hmc__16->SetBinContent(17,328.8232);
   hmc__16->SetBinContent(18,391.3398);
   hmc__16->SetBinContent(19,563.0567);
   hmc__16->SetBinContent(20,859.5571);
   hmc__16->SetBinError(1,23.87242);
   hmc__16->SetBinError(2,21.51158);
   hmc__16->SetBinError(3,22.11207);
   hmc__16->SetBinError(4,20.08098);
   hmc__16->SetBinError(5,21.71819);
   hmc__16->SetBinError(6,22.4451);
   hmc__16->SetBinError(7,18.02969);
   hmc__16->SetBinError(8,20.48159);
   hmc__16->SetBinError(9,24.19021);
   hmc__16->SetBinError(10,27.11795);
   hmc__16->SetBinError(11,27.26004);
   hmc__16->SetBinError(12,34.27959);
   hmc__16->SetBinError(13,38.6611);
   hmc__16->SetBinError(14,45.28779);
   hmc__16->SetBinError(15,55.45407);
   hmc__16->SetBinError(16,74.3952);
   hmc__16->SetBinError(17,99.68994);
   hmc__16->SetBinError(18,109.0526);
   hmc__16->SetBinError(19,135.7497);
   hmc__16->SetBinError(20,213.8104);
   hmc__16->SetBinError(21,0.3895343);
   hmc__16->SetMinimum(-17.19114);
   hmc__16->SetMaximum(1805.07);
   hmc__16->SetEntries(3645.257);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,-1,1);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(902.5351);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.844591);
   hbadmatch_stack_1->SetBinContent(2,2.872383);
   hbadmatch_stack_1->SetBinContent(3,1.639202);
   hbadmatch_stack_1->SetBinContent(4,0.785171);
   hbadmatch_stack_1->SetBinContent(5,1.612974);
   hbadmatch_stack_1->SetBinContent(6,2.722741);
   hbadmatch_stack_1->SetBinContent(7,0.785171);
   hbadmatch_stack_1->SetBinContent(8,1.845514);
   hbadmatch_stack_1->SetBinContent(9,1.641978);
   hbadmatch_stack_1->SetBinContent(10,1.586779);
   hbadmatch_stack_1->SetBinContent(11,5.052772);
   hbadmatch_stack_1->SetBinContent(12,5.42732);
   hbadmatch_stack_1->SetBinContent(13,2.874418);
   hbadmatch_stack_1->SetBinContent(14,3.832484);
   hbadmatch_stack_1->SetBinContent(15,2.322523);
   hbadmatch_stack_1->SetBinContent(16,6.661768);
   hbadmatch_stack_1->SetBinContent(17,7.09566);
   hbadmatch_stack_1->SetBinContent(18,8.408118);
   hbadmatch_stack_1->SetBinContent(19,7.657035);
   hbadmatch_stack_1->SetBinContent(20,15.57111);
   hbadmatch_stack_1->SetBinError(1,0.9270685);
   hbadmatch_stack_1->SetBinError(2,1.780858);
   hbadmatch_stack_1->SetBinError(3,0.581143);
   hbadmatch_stack_1->SetBinError(4,0.3925882);
   hbadmatch_stack_1->SetBinError(5,0.7369783);
   hbadmatch_stack_1->SetBinError(6,0.8881148);
   hbadmatch_stack_1->SetBinError(7,0.3925882);
   hbadmatch_stack_1->SetBinError(8,0.667744);
   hbadmatch_stack_1->SetBinError(9,0.6413349);
   hbadmatch_stack_1->SetBinError(10,0.664034);
   hbadmatch_stack_1->SetBinError(11,1.892868);
   hbadmatch_stack_1->SetBinError(12,2.160962);
   hbadmatch_stack_1->SetBinError(13,0.8989642);
   hbadmatch_stack_1->SetBinError(14,1.072443);
   hbadmatch_stack_1->SetBinError(15,0.7700734);
   hbadmatch_stack_1->SetBinError(16,1.359326);
   hbadmatch_stack_1->SetBinError(17,1.506048);
   hbadmatch_stack_1->SetBinError(18,1.495327);
   hbadmatch_stack_1->SetBinError(19,1.420952);
   hbadmatch_stack_1->SetBinError(20,2.173332);
   hbadmatch_stack_1->SetEntries(316);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,4.613812);
   hext_stack_2->SetBinContent(2,4.296596);
   hext_stack_2->SetBinContent(3,4.378797);
   hext_stack_2->SetBinContent(4,5.020411);
   hext_stack_2->SetBinContent(5,4.780987);
   hext_stack_2->SetBinContent(6,7.373394);
   hext_stack_2->SetBinContent(7,3.17059);
   hext_stack_2->SetBinContent(8,5.82202);
   hext_stack_2->SetBinContent(9,12.72261);
   hext_stack_2->SetBinContent(10,9.081991);
   hext_stack_2->SetBinContent(11,10.6146);
   hext_stack_2->SetBinContent(12,12.62164);
   hext_stack_2->SetBinContent(13,15.39558);
   hext_stack_2->SetBinContent(14,17.1792);
   hext_stack_2->SetBinContent(15,24.66787);
   hext_stack_2->SetBinContent(16,23.99041);
   hext_stack_2->SetBinContent(17,23.56781);
   hext_stack_2->SetBinContent(18,23.85914);
   hext_stack_2->SetBinContent(19,35.65435);
   hext_stack_2->SetBinContent(20,34.58624);
   hext_stack_2->SetBinError(1,1.439057);
   hext_stack_2->SetBinError(2,1.328326);
   hext_stack_2->SetBinError(3,1.350755);
   hext_stack_2->SetBinError(4,1.495396);
   hext_stack_2->SetBinError(5,1.361888);
   hext_stack_2->SetBinError(6,1.741532);
   hext_stack_2->SetBinError(7,1.123607);
   hext_stack_2->SetBinError(8,1.622631);
   hext_stack_2->SetBinError(9,2.347232);
   hext_stack_2->SetBinError(10,1.937605);
   hext_stack_2->SetBinError(11,2.102758);
   hext_stack_2->SetBinError(12,2.39096);
   hext_stack_2->SetBinError(13,2.505261);
   hext_stack_2->SetBinError(14,2.694254);
   hext_stack_2->SetBinError(15,3.318547);
   hext_stack_2->SetBinError(16,3.205726);
   hext_stack_2->SetBinError(17,3.168961);
   hext_stack_2->SetBinError(18,3.080068);
   hext_stack_2->SetBinError(19,3.803616);
   hext_stack_2->SetBinError(20,3.868534);
   hext_stack_2->SetEntries(711);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.061732);
   hdirt_stack_3->SetBinContent(2,0.3671539);
   hdirt_stack_3->SetBinContent(3,1.628892);
   hdirt_stack_3->SetBinContent(4,1.09554);
   hdirt_stack_3->SetBinContent(5,0.5033248);
   hdirt_stack_3->SetBinContent(6,1.292544);
   hdirt_stack_3->SetBinContent(7,0.9140499);
   hdirt_stack_3->SetBinContent(8,1.330383);
   hdirt_stack_3->SetBinContent(9,0.742136);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,1.093975);
   hdirt_stack_3->SetBinContent(12,3.005223);
   hdirt_stack_3->SetBinContent(13,2.511211);
   hdirt_stack_3->SetBinContent(14,2.356155);
   hdirt_stack_3->SetBinContent(15,2.26692);
   hdirt_stack_3->SetBinContent(16,2.970797);
   hdirt_stack_3->SetBinContent(17,4.770689);
   hdirt_stack_3->SetBinContent(18,4.421134);
   hdirt_stack_3->SetBinContent(19,3.301553);
   hdirt_stack_3->SetBinContent(20,6.248769);
   hdirt_stack_3->SetBinError(1,0.4080244);
   hdirt_stack_3->SetBinError(2,0.2643781);
   hdirt_stack_3->SetBinError(3,0.7039956);
   hdirt_stack_3->SetBinError(4,0.5845155);
   hdirt_stack_3->SetBinError(5,0.3904789);
   hdirt_stack_3->SetBinError(6,0.5936772);
   hdirt_stack_3->SetBinError(7,0.4788161);
   hdirt_stack_3->SetBinError(8,0.6284736);
   hdirt_stack_3->SetBinError(9,0.374946);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.5705956);
   hdirt_stack_3->SetBinError(12,1.203262);
   hdirt_stack_3->SetBinError(13,0.8454443);
   hdirt_stack_3->SetBinError(14,0.7955115);
   hdirt_stack_3->SetBinError(15,0.810195);
   hdirt_stack_3->SetBinError(16,0.8036702);
   hdirt_stack_3->SetBinError(17,1.445274);
   hdirt_stack_3->SetBinError(18,1.10569);
   hdirt_stack_3->SetBinError(19,1.046667);
   hdirt_stack_3->SetBinError(20,1.314327);
   hdirt_stack_3->SetEntries(173);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,6.298645);
   houtFV_stack_4->SetBinContent(2,6.252154);
   houtFV_stack_4->SetBinContent(3,6.973813);
   houtFV_stack_4->SetBinContent(4,6.401891);
   houtFV_stack_4->SetBinContent(5,7.857762);
   houtFV_stack_4->SetBinContent(6,5.378646);
   houtFV_stack_4->SetBinContent(7,5.676615);
   houtFV_stack_4->SetBinContent(8,6.568366);
   houtFV_stack_4->SetBinContent(9,7.256623);
   houtFV_stack_4->SetBinContent(10,9.19801);
   houtFV_stack_4->SetBinContent(11,9.83299);
   houtFV_stack_4->SetBinContent(12,11.55602);
   houtFV_stack_4->SetBinContent(13,12.8484);
   houtFV_stack_4->SetBinContent(14,16.78934);
   houtFV_stack_4->SetBinContent(15,21.0084);
   houtFV_stack_4->SetBinContent(16,30.07755);
   houtFV_stack_4->SetBinContent(17,36.8592);
   houtFV_stack_4->SetBinContent(18,39.05154);
   houtFV_stack_4->SetBinContent(19,47.16628);
   houtFV_stack_4->SetBinContent(20,48.13118);
   houtFV_stack_4->SetBinError(1,1.255931);
   houtFV_stack_4->SetBinError(2,1.272139);
   houtFV_stack_4->SetBinError(3,1.324942);
   houtFV_stack_4->SetBinError(4,1.249284);
   houtFV_stack_4->SetBinError(5,1.442083);
   houtFV_stack_4->SetBinError(6,1.101088);
   houtFV_stack_4->SetBinError(7,1.144369);
   houtFV_stack_4->SetBinError(8,1.259322);
   houtFV_stack_4->SetBinError(9,1.297272);
   houtFV_stack_4->SetBinError(10,1.502618);
   houtFV_stack_4->SetBinError(11,1.59214);
   houtFV_stack_4->SetBinError(12,1.711722);
   houtFV_stack_4->SetBinError(13,1.810539);
   houtFV_stack_4->SetBinError(14,2.035445);
   houtFV_stack_4->SetBinError(15,2.262968);
   houtFV_stack_4->SetBinError(16,2.804161);
   houtFV_stack_4->SetBinError(17,2.967514);
   houtFV_stack_4->SetBinError(18,3.17454);
   houtFV_stack_4->SetBinError(19,3.450439);
   houtFV_stack_4->SetBinError(20,3.449152);
   houtFV_stack_4->SetEntries(1472);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.929685);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5151539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.119416);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.818412);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.539754);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,14.13688);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,55.81567);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6352548);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1861173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5442341);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5669431);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8423765);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.212431);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.441404);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4450719);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.176544);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.09118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,3.01288);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.198595);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5203481);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4794732);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5546234);
   hNCpi0inFVqe_stack_6->SetEntries(229);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,27.29131);
   hNCpi0inFVres_stack_7->SetBinContent(2,20.68079);
   hNCpi0inFVres_stack_7->SetBinContent(3,22.99268);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.60547);
   hNCpi0inFVres_stack_7->SetBinContent(5,23.1498);
   hNCpi0inFVres_stack_7->SetBinContent(6,22.6426);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.69815);
   hNCpi0inFVres_stack_7->SetBinContent(8,24.0097);
   hNCpi0inFVres_stack_7->SetBinContent(9,28.0519);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.48316);
   hNCpi0inFVres_stack_7->SetBinContent(11,34.49849);
   hNCpi0inFVres_stack_7->SetBinContent(12,41.74337);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.54943);
   hNCpi0inFVres_stack_7->SetBinContent(14,63.8308);
   hNCpi0inFVres_stack_7->SetBinContent(15,78.65588);
   hNCpi0inFVres_stack_7->SetBinContent(16,109.5882);
   hNCpi0inFVres_stack_7->SetBinContent(17,140.528);
   hNCpi0inFVres_stack_7->SetBinContent(18,174.3508);
   hNCpi0inFVres_stack_7->SetBinContent(19,247.5069);
   hNCpi0inFVres_stack_7->SetBinContent(20,332.0555);
   hNCpi0inFVres_stack_7->SetBinError(1,1.764016);
   hNCpi0inFVres_stack_7->SetBinError(2,1.459928);
   hNCpi0inFVres_stack_7->SetBinError(3,1.566602);
   hNCpi0inFVres_stack_7->SetBinError(4,1.599375);
   hNCpi0inFVres_stack_7->SetBinError(5,1.635044);
   hNCpi0inFVres_stack_7->SetBinError(6,1.548945);
   hNCpi0inFVres_stack_7->SetBinError(7,1.524653);
   hNCpi0inFVres_stack_7->SetBinError(8,1.561209);
   hNCpi0inFVres_stack_7->SetBinError(9,1.704923);
   hNCpi0inFVres_stack_7->SetBinError(10,1.874375);
   hNCpi0inFVres_stack_7->SetBinError(11,1.924376);
   hNCpi0inFVres_stack_7->SetBinError(12,2.066832);
   hNCpi0inFVres_stack_7->SetBinError(13,2.306739);
   hNCpi0inFVres_stack_7->SetBinError(14,2.603608);
   hNCpi0inFVres_stack_7->SetBinError(15,2.846246);
   hNCpi0inFVres_stack_7->SetBinError(16,3.459022);
   hNCpi0inFVres_stack_7->SetBinError(17,3.872033);
   hNCpi0inFVres_stack_7->SetBinError(18,4.31876);
   hNCpi0inFVres_stack_7->SetBinError(19,5.20504);
   hNCpi0inFVres_stack_7->SetBinError(20,5.973227);
   hNCpi0inFVres_stack_7->SetEntries(27989);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.412128);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.366786);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.69477);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.643546);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.745666);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.969034);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.517328);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.504542);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.029737);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.008406);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.15562);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.261082);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.560684);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.378329);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.71564);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.44122);
   hNCpi0inFVdis_stack_8->SetBinContent(17,26.35931);
   hNCpi0inFVdis_stack_8->SetBinContent(18,34.72385);
   hNCpi0inFVdis_stack_8->SetBinContent(19,49.52401);
   hNCpi0inFVdis_stack_8->SetBinContent(20,85.49522);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7942595);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.769494);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6003415);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7511079);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4854558);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5240739);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7084411);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7169515);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6344366);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7527039);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6318752);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7891791);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.954743);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8844124);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.150779);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.360977);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.720302);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.923988);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.258714);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.994612);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1994106);
   hNCpi0inFVmec_stack_9->SetEntries(14);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,9.328218);
   hCCpi0inFV_stack_10->SetBinContent(2,9.656119);
   hCCpi0inFV_stack_10->SetBinContent(3,8.17222);
   hCCpi0inFV_stack_10->SetBinContent(4,5.80197);
   hCCpi0inFV_stack_10->SetBinContent(5,9.687607);
   hCCpi0inFV_stack_10->SetBinContent(6,7.039016);
   hCCpi0inFV_stack_10->SetBinContent(7,6.051249);
   hCCpi0inFV_stack_10->SetBinContent(8,8.325644);
   hCCpi0inFV_stack_10->SetBinContent(9,8.560568);
   hCCpi0inFV_stack_10->SetBinContent(10,9.341276);
   hCCpi0inFV_stack_10->SetBinContent(11,12.40695);
   hCCpi0inFV_stack_10->SetBinContent(12,10.99845);
   hCCpi0inFV_stack_10->SetBinContent(13,17.38622);
   hCCpi0inFV_stack_10->SetBinContent(14,16.36417);
   hCCpi0inFV_stack_10->SetBinContent(15,22.55029);
   hCCpi0inFV_stack_10->SetBinContent(16,31.87211);
   hCCpi0inFV_stack_10->SetBinContent(17,48.79237);
   hCCpi0inFV_stack_10->SetBinContent(18,50.51526);
   hCCpi0inFV_stack_10->SetBinContent(19,80.76125);
   hCCpi0inFV_stack_10->SetBinContent(20,128.468);
   hCCpi0inFV_stack_10->SetBinError(1,1.526549);
   hCCpi0inFV_stack_10->SetBinError(2,1.562001);
   hCCpi0inFV_stack_10->SetBinError(3,1.359285);
   hCCpi0inFV_stack_10->SetBinError(4,1.199948);
   hCCpi0inFV_stack_10->SetBinError(5,1.481071);
   hCCpi0inFV_stack_10->SetBinError(6,1.331588);
   hCCpi0inFV_stack_10->SetBinError(7,1.200123);
   hCCpi0inFV_stack_10->SetBinError(8,1.487434);
   hCCpi0inFV_stack_10->SetBinError(9,1.386746);
   hCCpi0inFV_stack_10->SetBinError(10,1.507922);
   hCCpi0inFV_stack_10->SetBinError(11,1.726477);
   hCCpi0inFV_stack_10->SetBinError(12,1.641982);
   hCCpi0inFV_stack_10->SetBinError(13,2.141678);
   hCCpi0inFV_stack_10->SetBinError(14,2.02526);
   hCCpi0inFV_stack_10->SetBinError(15,2.374145);
   hCCpi0inFV_stack_10->SetBinError(16,2.821655);
   hCCpi0inFV_stack_10->SetBinError(17,3.5694);
   hCCpi0inFV_stack_10->SetBinError(18,3.529675);
   hCCpi0inFV_stack_10->SetBinError(19,4.526157);
   hCCpi0inFV_stack_10->SetBinError(20,5.64849);
   hCCpi0inFV_stack_10->SetEntries(2161);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,5.531462);
   hNCinFV_stack_11->SetBinContent(2,5.568418);
   hNCinFV_stack_11->SetBinContent(3,3.769477);
   hNCinFV_stack_11->SetBinContent(4,3.27123);
   hNCinFV_stack_11->SetBinContent(5,4.6998);
   hNCinFV_stack_11->SetBinContent(6,3.574452);
   hNCinFV_stack_11->SetBinContent(7,3.321102);
   hNCinFV_stack_11->SetBinContent(8,2.247316);
   hNCinFV_stack_11->SetBinContent(9,5.905215);
   hNCinFV_stack_11->SetBinContent(10,3.966192);
   hNCinFV_stack_11->SetBinContent(11,4.05133);
   hNCinFV_stack_11->SetBinContent(12,7.572528);
   hNCinFV_stack_11->SetBinContent(13,6.298645);
   hNCinFV_stack_11->SetBinContent(14,8.891211);
   hNCinFV_stack_11->SetBinContent(15,11.44175);
   hNCinFV_stack_11->SetBinContent(16,16.66553);
   hNCinFV_stack_11->SetBinContent(17,16.62012);
   hNCinFV_stack_11->SetBinContent(18,24.89197);
   hNCinFV_stack_11->SetBinContent(19,42.39156);
   hNCinFV_stack_11->SetBinContent(20,81.50612);
   hNCinFV_stack_11->SetBinError(1,1.109907);
   hNCinFV_stack_11->SetBinError(2,1.177103);
   hNCinFV_stack_11->SetBinError(3,0.9417711);
   hNCinFV_stack_11->SetBinError(4,0.9417298);
   hNCinFV_stack_11->SetBinError(5,1.057707);
   hNCinFV_stack_11->SetBinError(6,0.9213567);
   hNCinFV_stack_11->SetBinError(7,0.9204367);
   hNCinFV_stack_11->SetBinError(8,0.7337357);
   hNCinFV_stack_11->SetBinError(9,1.224732);
   hNCinFV_stack_11->SetBinError(10,0.9620965);
   hNCinFV_stack_11->SetBinError(11,1.01931);
   hNCinFV_stack_11->SetBinError(12,1.387883);
   hNCinFV_stack_11->SetBinError(13,1.255931);
   hNCinFV_stack_11->SetBinError(14,1.494469);
   hNCinFV_stack_11->SetBinError(15,1.653435);
   hNCinFV_stack_11->SetBinError(16,2.049473);
   hNCinFV_stack_11->SetBinError(17,2.010809);
   hNCinFV_stack_11->SetBinError(18,2.558521);
   hNCinFV_stack_11->SetBinError(19,3.213173);
   hNCinFV_stack_11->SetBinError(20,4.570811);
   hNCinFV_stack_11->SetEntries(1123);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.121685);
   hnumuCCinFV_stack_12->SetBinContent(2,2.988599);
   hnumuCCinFV_stack_12->SetBinContent(3,3.352703);
   hnumuCCinFV_stack_12->SetBinContent(4,2.590875);
   hnumuCCinFV_stack_12->SetBinContent(5,2.785028);
   hnumuCCinFV_stack_12->SetBinContent(6,3.518003);
   hnumuCCinFV_stack_12->SetBinContent(7,3.390376);
   hnumuCCinFV_stack_12->SetBinContent(8,5.837318);
   hnumuCCinFV_stack_12->SetBinContent(9,5.96485);
   hnumuCCinFV_stack_12->SetBinContent(10,4.959083);
   hnumuCCinFV_stack_12->SetBinContent(11,3.598013);
   hnumuCCinFV_stack_12->SetBinContent(12,4.478333);
   hnumuCCinFV_stack_12->SetBinContent(13,9.161089);
   hnumuCCinFV_stack_12->SetBinContent(14,8.477379);
   hnumuCCinFV_stack_12->SetBinContent(15,9.454528);
   hnumuCCinFV_stack_12->SetBinContent(16,17.25373);
   hnumuCCinFV_stack_12->SetBinContent(17,19.39062);
   hnumuCCinFV_stack_12->SetBinContent(18,19.59485);
   hnumuCCinFV_stack_12->SetBinContent(19,30.16745);
   hnumuCCinFV_stack_12->SetBinContent(20,55.95607);
   hnumuCCinFV_stack_12->SetBinError(1,1.105072);
   hnumuCCinFV_stack_12->SetBinError(2,0.9942791);
   hnumuCCinFV_stack_12->SetBinError(3,0.9574964);
   hnumuCCinFV_stack_12->SetBinError(4,0.8095761);
   hnumuCCinFV_stack_12->SetBinError(5,0.8690179);
   hnumuCCinFV_stack_12->SetBinError(6,1.219829);
   hnumuCCinFV_stack_12->SetBinError(7,1.327716);
   hnumuCCinFV_stack_12->SetBinError(8,1.975188);
   hnumuCCinFV_stack_12->SetBinError(9,1.383014);
   hnumuCCinFV_stack_12->SetBinError(10,1.267169);
   hnumuCCinFV_stack_12->SetBinError(11,1.004539);
   hnumuCCinFV_stack_12->SetBinError(12,1.102466);
   hnumuCCinFV_stack_12->SetBinError(13,1.660579);
   hnumuCCinFV_stack_12->SetBinError(14,1.663395);
   hnumuCCinFV_stack_12->SetBinError(15,1.579849);
   hnumuCCinFV_stack_12->SetBinError(16,3.188144);
   hnumuCCinFV_stack_12->SetBinError(17,2.588383);
   hnumuCCinFV_stack_12->SetBinError(18,2.31925);
   hnumuCCinFV_stack_12->SetBinError(19,3.041176);
   hnumuCCinFV_stack_12->SetBinError(20,3.812938);
   hnumuCCinFV_stack_12->SetEntries(859);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,0.6097559);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.610865);
   hnueCCinFV_stack_13->SetBinContent(15,1.926081);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.630365);
   hnueCCinFV_stack_13->SetBinContent(18,2.778909);
   hnueCCinFV_stack_13->SetBinContent(19,2.586656);
   hnueCCinFV_stack_13->SetBinContent(20,12.45911);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.3525088);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.7453331);
   hnueCCinFV_stack_13->SetBinError(15,1.329164);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.7116481);
   hnueCCinFV_stack_13->SetBinError(18,1.027616);
   hnueCCinFV_stack_13->SetBinError(19,0.7575927);
   hnueCCinFV_stack_13->SetBinError(20,2.472987);
   hnueCCinFV_stack_13->SetEntries(111);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__17->SetBinContent(1,71.71552);
   hmcerror__17->SetBinContent(2,59.8583);
   hmcerror__17->SetBinContent(3,58.17279);
   hmcerror__17->SetBinContent(4,54.25903);
   hmcerror__17->SetBinContent(5,58.67828);
   hmcerror__17->SetBinContent(6,57.36079);
   hmcerror__17->SetBinContent(7,49.9712);
   hmcerror__17->SetBinContent(8,61.09049);
   hmcerror__17->SetBinContent(9,76.32533);
   hmcerror__17->SetBinContent(10,76.499);
   hmcerror__17->SetBinContent(11,86.15666);
   hmcerror__17->SetBinContent(12,104.6468);
   hmcerror__17->SetBinContent(13,127.3321);
   hmcerror__17->SetBinContent(14,148.8665);
   hmcerror__17->SetBinContent(15,188.0977);
   hmcerror__17->SetBinContent(16,261.1981);
   hmcerror__17->SetBinContent(17,328.8232);
   hmcerror__17->SetBinContent(18,391.3398);
   hmcerror__17->SetBinContent(19,563.0567);
   hmcerror__17->SetBinContent(20,859.5571);
   hmcerror__17->SetBinError(1,23.87242);
   hmcerror__17->SetBinError(2,21.51158);
   hmcerror__17->SetBinError(3,22.11207);
   hmcerror__17->SetBinError(4,20.08098);
   hmcerror__17->SetBinError(5,21.71819);
   hmcerror__17->SetBinError(6,22.4451);
   hmcerror__17->SetBinError(7,18.02969);
   hmcerror__17->SetBinError(8,20.48159);
   hmcerror__17->SetBinError(9,24.19021);
   hmcerror__17->SetBinError(10,27.11795);
   hmcerror__17->SetBinError(11,27.26004);
   hmcerror__17->SetBinError(12,34.27959);
   hmcerror__17->SetBinError(13,38.6611);
   hmcerror__17->SetBinError(14,45.28779);
   hmcerror__17->SetBinError(15,55.45407);
   hmcerror__17->SetBinError(16,74.3952);
   hmcerror__17->SetBinError(17,99.68994);
   hmcerror__17->SetBinError(18,109.0526);
   hmcerror__17->SetBinError(19,135.7497);
   hmcerror__17->SetBinError(20,213.8104);
   hmcerror__17->SetBinError(21,0.3895343);
   hmcerror__17->SetEntries(3645.257);

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
   
   Double_t _fx3021[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3021[20] = {
   71,
   62,
   62,
   49,
   56,
   59,
   69,
   80,
   70,
   69,
   79,
   91,
   127,
   154,
   161,
   240,
   283,
   390,
   547,
   803};
   Double_t _felx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3021[20] = {
   8.5518,
   8.0018,
   8.0018,
   7.1318,
   7.6127,
   7.8097,
   8.4327,
   9.0683,
   8.4925,
   8.4327,
   9.0124,
   9.6617,
   11.26943,
   12.40967,
   12.68858,
   15.49193,
   16.8226,
   19.74842,
   23.38803,
   28.33725};
   Double_t _fehx3021[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3021[20] = {
   8.3496,
   7.7989,
   7.7989,
   6.9277,
   7.4094,
   7.6066,
   8.2304,
   8.8665,
   8.2902,
   8.2304,
   8.8105,
   9.46,
   11.26943,
   12.40967,
   12.68858,
   15.49193,
   16.8226,
   19.74842,
   23.38803,
   28.33725};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(37.68138);
   Graph_Graph3021->SetMaximum(910.2842);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3022[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3022[20] = {
   0.3328766,
   0.359375,
   0.3801102,
   0.3700946,
   0.3701231,
   0.3912969,
   0.3608015,
   0.3352664,
   0.3169355,
   0.3544876,
   0.3164008,
   0.3275743,
   0.3036242,
   0.3042176,
   0.2948153,
   0.2848229,
   0.3031719,
   0.2786646,
   0.2410941,
   0.2487448};
   Double_t _fehx3022[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3022[20] = {
   0.3328766,
   0.359375,
   0.3801102,
   0.3700946,
   0.3701231,
   0.3912969,
   0.3608015,
   0.3352664,
   0.3169355,
   0.3544876,
   0.3164008,
   0.3275743,
   0.3036242,
   0.3042176,
   0.2948153,
   0.2848229,
   0.3031719,
   0.2786646,
   0.2410941,
   0.2487448};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3023[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3023[20] = {
   0.2334389,
   0.2272702,
   0.2208812,
   0.2375321,
   0.2170731,
   0.2191277,
   0.2481912,
   0.2169074,
   0.2107174,
   0.2258765,
   0.2308442,
   0.2268892,
   0.2461538,
   0.2391153,
   0.2505457,
   0.2499539,
   0.2533817,
   0.2391164,
   0.2247675,
   0.2336267};
   Double_t _fehx3023[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3023[20] = {
   0.2334389,
   0.2272702,
   0.2208812,
   0.2375321,
   0.2170731,
   0.2191277,
   0.2481912,
   0.2169074,
   0.2107174,
   0.2258765,
   0.2308442,
   0.2268892,
   0.2461538,
   0.2391153,
   0.2505457,
   0.2499539,
   0.2533817,
   0.2391164,
   0.2247675,
   0.2336267};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3024[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3024[20] = {
   0.9900228,
   1.03578,
   1.06579,
   0.9030755,
   0.9543565,
   1.028577,
   1.380795,
   1.309533,
   0.9171267,
   0.9019726,
   0.9169343,
   0.8695921,
   0.9973922,
   1.034484,
   0.8559384,
   0.9188428,
   0.8606449,
   0.9965765,
   0.971483,
   0.934202};
   Double_t _felx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3024[20] = {
   0.1192462,
   0.133679,
   0.1375523,
   0.1314399,
   0.1297363,
   0.1361505,
   0.1687512,
   0.1484405,
   0.1112671,
   0.1102328,
   0.1046048,
   0.09232679,
   0.08850425,
   0.08336111,
   0.06745739,
   0.05931104,
   0.05116003,
   0.05046361,
   0.04153761,
   0.03296727};
   Double_t _fehx3024[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3024[20] = {
   0.1164267,
   0.1302894,
   0.1340644,
   0.1276783,
   0.1262716,
   0.1326098,
   0.1647029,
   0.1451372,
   0.1086166,
   0.1075883,
   0.1022614,
   0.09039935,
   0.08850425,
   0.08336111,
   0.06745739,
   0.05931104,
   0.05116003,
   0.05046361,
   0.04153761,
   0.03296727};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.6942494);
   Graph_Graph3024->SetMaximum(1.622884);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
