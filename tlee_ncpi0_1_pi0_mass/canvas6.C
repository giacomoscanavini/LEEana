#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sun Oct 23 14:05:13 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-61.53846,-6.24,451.2821,690.0126);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hmc__16->SetBinContent(1,48.63758);
   hmc__16->SetBinContent(2,88.05283);
   hmc__16->SetBinContent(3,94.30283);
   hmc__16->SetBinContent(4,121.9918);
   hmc__16->SetBinContent(5,114.0109);
   hmc__16->SetBinContent(6,136.3584);
   hmc__16->SetBinContent(7,134.0886);
   hmc__16->SetBinContent(8,125.357);
   hmc__16->SetBinContent(9,171.6892);
   hmc__16->SetBinContent(10,214.6508);
   hmc__16->SetBinContent(11,235.8907);
   hmc__16->SetBinContent(12,272.4563);
   hmc__16->SetBinContent(13,251.6121);
   hmc__16->SetBinContent(14,178.2372);
   hmc__16->SetBinContent(15,102.0995);
   hmc__16->SetBinContent(16,70.24061);
   hmc__16->SetBinContent(17,49.34415);
   hmc__16->SetBinContent(18,39.91033);
   hmc__16->SetBinContent(19,33.80536);
   hmc__16->SetBinContent(20,34.91604);
   hmc__16->SetBinContent(21,32.89672);
   hmc__16->SetBinContent(22,22.92423);
   hmc__16->SetBinContent(23,21.28091);
   hmc__16->SetBinContent(24,18.83055);
   hmc__16->SetBinContent(25,13.356);
   hmc__16->SetBinContent(26,14.08519);
   hmc__16->SetBinContent(27,17.33114);
   hmc__16->SetBinContent(28,9.189645);
   hmc__16->SetBinContent(29,12.56132);
   hmc__16->SetBinContent(30,12.20983);
   hmc__16->SetBinContent(31,10.74884);
   hmc__16->SetBinContent(32,9.116299);
   hmc__16->SetBinContent(33,6.655834);
   hmc__16->SetBinContent(34,6.471752);
   hmc__16->SetBinContent(35,70.58542);
   hmc__16->SetBinError(1,17.74321);
   hmc__16->SetBinError(2,26.72852);
   hmc__16->SetBinError(3,30.79409);
   hmc__16->SetBinError(4,34.04046);
   hmc__16->SetBinError(5,32.7795);
   hmc__16->SetBinError(6,32.92315);
   hmc__16->SetBinError(7,44.32241);
   hmc__16->SetBinError(8,38.1331);
   hmc__16->SetBinError(9,46.49113);
   hmc__16->SetBinError(10,64.17242);
   hmc__16->SetBinError(11,66.12557);
   hmc__16->SetBinError(12,71.71323);
   hmc__16->SetBinError(13,62.58094);
   hmc__16->SetBinError(14,46.99346);
   hmc__16->SetBinError(15,32.00085);
   hmc__16->SetBinError(16,21.7092);
   hmc__16->SetBinError(17,21.11144);
   hmc__16->SetBinError(18,16.1681);
   hmc__16->SetBinError(19,14.99021);
   hmc__16->SetBinError(20,16.23679);
   hmc__16->SetBinError(21,13.66003);
   hmc__16->SetBinError(22,11.91109);
   hmc__16->SetBinError(23,12.16342);
   hmc__16->SetBinError(24,8.685375);
   hmc__16->SetBinError(25,8.807106);
   hmc__16->SetBinError(26,9.745236);
   hmc__16->SetBinError(27,12.77068);
   hmc__16->SetBinError(28,7.293909);
   hmc__16->SetBinError(29,11.17512);
   hmc__16->SetBinError(30,8.909948);
   hmc__16->SetBinError(31,7.854791);
   hmc__16->SetBinError(32,10.52345);
   hmc__16->SetBinError(33,5.859654);
   hmc__16->SetBinError(34,7.215565);
   hmc__16->SetBinError(35,23.56143);
   hmc__16->SetMinimum(-6.24);
   hmc__16->SetMaximum(655.2);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",34,0,400);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(286.0791);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.362917);
   hbadmatch_stack_1->SetBinContent(2,3.826401);
   hbadmatch_stack_1->SetBinContent(3,3.752327);
   hbadmatch_stack_1->SetBinContent(4,2.876695);
   hbadmatch_stack_1->SetBinContent(5,2.724393);
   hbadmatch_stack_1->SetBinContent(6,5.673509);
   hbadmatch_stack_1->SetBinContent(7,6.030699);
   hbadmatch_stack_1->SetBinContent(8,2.698882);
   hbadmatch_stack_1->SetBinContent(9,3.395078);
   hbadmatch_stack_1->SetBinContent(10,4.879016);
   hbadmatch_stack_1->SetBinContent(11,2.760729);
   hbadmatch_stack_1->SetBinContent(12,7.36059);
   hbadmatch_stack_1->SetBinContent(13,2.21469);
   hbadmatch_stack_1->SetBinContent(14,6.666623);
   hbadmatch_stack_1->SetBinContent(15,1.443518);
   hbadmatch_stack_1->SetBinContent(16,1.249934);
   hbadmatch_stack_1->SetBinContent(17,1.123658);
   hbadmatch_stack_1->SetBinContent(18,1.123658);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.7698135);
   hbadmatch_stack_1->SetBinContent(23,0.1199161);
   hbadmatch_stack_1->SetBinContent(25,0.3998213);
   hbadmatch_stack_1->SetBinContent(33,0.1950248);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.5610657);
   hbadmatch_stack_1->SetBinError(1,0.9070522);
   hbadmatch_stack_1->SetBinError(2,1.065601);
   hbadmatch_stack_1->SetBinError(3,0.9856383);
   hbadmatch_stack_1->SetBinError(4,0.8070593);
   hbadmatch_stack_1->SetBinError(5,0.786302);
   hbadmatch_stack_1->SetBinError(6,1.271905);
   hbadmatch_stack_1->SetBinError(7,1.281524);
   hbadmatch_stack_1->SetBinError(8,1.059661);
   hbadmatch_stack_1->SetBinError(9,0.9698001);
   hbadmatch_stack_1->SetBinError(10,1.198582);
   hbadmatch_stack_1->SetBinError(11,0.8367519);
   hbadmatch_stack_1->SetBinError(12,2.0998);
   hbadmatch_stack_1->SetBinError(13,0.9075928);
   hbadmatch_stack_1->SetBinError(14,1.985789);
   hbadmatch_stack_1->SetBinError(15,0.6009981);
   hbadmatch_stack_1->SetBinError(16,0.6322872);
   hbadmatch_stack_1->SetBinError(17,0.5188295);
   hbadmatch_stack_1->SetBinError(18,0.5188295);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.4680361);
   hbadmatch_stack_1->SetBinError(23,0.1199161);
   hbadmatch_stack_1->SetBinError(25,0.3998213);
   hbadmatch_stack_1->SetBinError(33,0.1950249);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.5610657);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,9.112292);
   hext_stack_2->SetBinContent(2,14.1327);
   hext_stack_2->SetBinContent(3,16.28821);
   hext_stack_2->SetBinContent(4,25.50859);
   hext_stack_2->SetBinContent(5,18.77524);
   hext_stack_2->SetBinContent(6,23.59534);
   hext_stack_2->SetBinContent(7,12.34473);
   hext_stack_2->SetBinContent(8,15.19528);
   hext_stack_2->SetBinContent(9,18.21582);
   hext_stack_2->SetBinContent(10,22.49088);
   hext_stack_2->SetBinContent(11,16.74224);
   hext_stack_2->SetBinContent(12,22.00485);
   hext_stack_2->SetBinContent(13,19.29157);
   hext_stack_2->SetBinContent(14,6.978384);
   hext_stack_2->SetBinContent(15,4.628173);
   hext_stack_2->SetBinContent(16,4.703194);
   hext_stack_2->SetBinContent(17,3.323403);
   hext_stack_2->SetBinContent(18,2.510206);
   hext_stack_2->SetBinContent(19,1.939204);
   hext_stack_2->SetBinContent(20,1.950793);
   hext_stack_2->SetBinContent(21,5.483261);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,1.219797);
   hext_stack_2->SetBinContent(24,3.539649);
   hext_stack_2->SetBinContent(25,1.055394);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinContent(27,1.697008);
   hext_stack_2->SetBinContent(29,0.7309963);
   hext_stack_2->SetBinContent(30,1.048213);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinContent(35,1.137595);
   hext_stack_2->SetBinError(1,2.179763);
   hext_stack_2->SetBinError(2,2.643402);
   hext_stack_2->SetBinError(3,2.646392);
   hext_stack_2->SetBinError(4,3.560446);
   hext_stack_2->SetBinError(5,2.872917);
   hext_stack_2->SetBinError(6,3.372787);
   hext_stack_2->SetBinError(7,2.130579);
   hext_stack_2->SetBinError(8,2.676221);
   hext_stack_2->SetBinError(9,2.811063);
   hext_stack_2->SetBinError(10,3.204704);
   hext_stack_2->SetBinError(11,2.725259);
   hext_stack_2->SetBinError(12,3.115829);
   hext_stack_2->SetBinError(13,3.132482);
   hext_stack_2->SetBinError(14,1.673777);
   hext_stack_2->SetBinError(15,1.291697);
   hext_stack_2->SetBinError(16,1.389163);
   hext_stack_2->SetBinError(17,1.20364);
   hext_stack_2->SetBinError(18,1.057404);
   hext_stack_2->SetBinError(19,0.912471);
   hext_stack_2->SetBinError(20,0.8755137);
   hext_stack_2->SetBinError(21,1.711754);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.7042499);
   hext_stack_2->SetBinError(24,1.400848);
   hext_stack_2->SetBinError(25,0.6130171);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetBinError(27,0.8873887);
   hext_stack_2->SetBinError(29,0.5201503);
   hext_stack_2->SetBinError(30,0.7595995);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetBinError(35,0.6602113);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.033342);
   hdirt_stack_3->SetBinContent(2,2.496512);
   hdirt_stack_3->SetBinContent(3,2.178556);
   hdirt_stack_3->SetBinContent(4,2.60618);
   hdirt_stack_3->SetBinContent(5,3.549309);
   hdirt_stack_3->SetBinContent(6,2.531364);
   hdirt_stack_3->SetBinContent(7,2.877819);
   hdirt_stack_3->SetBinContent(8,1.948171);
   hdirt_stack_3->SetBinContent(9,1.393956);
   hdirt_stack_3->SetBinContent(10,2.85688);
   hdirt_stack_3->SetBinContent(11,2.606146);
   hdirt_stack_3->SetBinContent(12,2.772058);
   hdirt_stack_3->SetBinContent(13,2.359534);
   hdirt_stack_3->SetBinContent(14,1.033043);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,1.091433);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.4713104);
   hdirt_stack_3->SetBinContent(26,0.2761429);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5438016);
   hdirt_stack_3->SetBinError(2,0.9209462);
   hdirt_stack_3->SetBinError(3,0.8047537);
   hdirt_stack_3->SetBinError(4,0.825811);
   hdirt_stack_3->SetBinError(5,0.9880835);
   hdirt_stack_3->SetBinError(6,0.730078);
   hdirt_stack_3->SetBinError(7,0.8851887);
   hdirt_stack_3->SetBinError(8,0.7274484);
   hdirt_stack_3->SetBinError(9,0.5532053);
   hdirt_stack_3->SetBinError(10,1.270947);
   hdirt_stack_3->SetBinError(11,0.9109984);
   hdirt_stack_3->SetBinError(12,0.9201347);
   hdirt_stack_3->SetBinError(13,0.730649);
   hdirt_stack_3->SetBinError(14,0.5146942);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.552635);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.3341085);
   hdirt_stack_3->SetBinError(26,0.1952625);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,8.065242);
   houtFV_stack_4->SetBinContent(2,10.83375);
   houtFV_stack_4->SetBinContent(3,14.3438);
   houtFV_stack_4->SetBinContent(4,15.45405);
   houtFV_stack_4->SetBinContent(5,11.49958);
   houtFV_stack_4->SetBinContent(6,15.97171);
   houtFV_stack_4->SetBinContent(7,15.67597);
   houtFV_stack_4->SetBinContent(8,13.5517);
   houtFV_stack_4->SetBinContent(9,19.61469);
   houtFV_stack_4->SetBinContent(10,23.16133);
   houtFV_stack_4->SetBinContent(11,20.77752);
   houtFV_stack_4->SetBinContent(12,22.06792);
   houtFV_stack_4->SetBinContent(13,25.50333);
   houtFV_stack_4->SetBinContent(14,16.53211);
   houtFV_stack_4->SetBinContent(15,7.554385);
   houtFV_stack_4->SetBinContent(16,4.768653);
   houtFV_stack_4->SetBinContent(17,4.560666);
   houtFV_stack_4->SetBinContent(18,3.901736);
   houtFV_stack_4->SetBinContent(19,4.391212);
   houtFV_stack_4->SetBinContent(20,4.330648);
   houtFV_stack_4->SetBinContent(21,2.672202);
   houtFV_stack_4->SetBinContent(22,3.139927);
   houtFV_stack_4->SetBinContent(23,1.795994);
   houtFV_stack_4->SetBinContent(24,1.393923);
   houtFV_stack_4->SetBinContent(25,1.322064);
   houtFV_stack_4->SetBinContent(26,0.600752);
   houtFV_stack_4->SetBinContent(27,1.520479);
   houtFV_stack_4->SetBinContent(29,1.16354);
   houtFV_stack_4->SetBinContent(30,0.621141);
   houtFV_stack_4->SetBinContent(31,0.5221819);
   houtFV_stack_4->SetBinContent(32,0.5619521);
   houtFV_stack_4->SetBinContent(35,6.428065);
   houtFV_stack_4->SetBinError(1,1.531383);
   houtFV_stack_4->SetBinError(2,1.604061);
   houtFV_stack_4->SetBinError(3,1.996869);
   houtFV_stack_4->SetBinError(4,2.012508);
   houtFV_stack_4->SetBinError(5,1.671036);
   houtFV_stack_4->SetBinError(6,1.985187);
   houtFV_stack_4->SetBinError(7,1.942573);
   houtFV_stack_4->SetBinError(8,1.852024);
   houtFV_stack_4->SetBinError(9,2.27708);
   houtFV_stack_4->SetBinError(10,2.379053);
   houtFV_stack_4->SetBinError(11,2.268403);
   houtFV_stack_4->SetBinError(12,2.342304);
   houtFV_stack_4->SetBinError(13,2.514963);
   houtFV_stack_4->SetBinError(14,2.054219);
   houtFV_stack_4->SetBinError(15,1.320395);
   houtFV_stack_4->SetBinError(16,1.074808);
   houtFV_stack_4->SetBinError(17,1.036612);
   houtFV_stack_4->SetBinError(18,1.071907);
   houtFV_stack_4->SetBinError(19,0.9915741);
   houtFV_stack_4->SetBinError(20,1.033837);
   houtFV_stack_4->SetBinError(21,0.7674471);
   houtFV_stack_4->SetBinError(22,0.816344);
   houtFV_stack_4->SetBinError(23,0.6742378);
   houtFV_stack_4->SetBinError(24,0.635767);
   houtFV_stack_4->SetBinError(25,0.5554667);
   houtFV_stack_4->SetBinError(26,0.3120695);
   houtFV_stack_4->SetBinError(27,0.5898501);
   houtFV_stack_4->SetBinError(29,0.5350986);
   houtFV_stack_4->SetBinError(30,0.3596615);
   houtFV_stack_4->SetBinError(31,0.3065464);
   houtFV_stack_4->SetBinError(32,0.3251211);
   houtFV_stack_4->SetBinError(35,1.350741);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.413913);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.038496);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.123845);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.234517);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.163274);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.879672);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.404976);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.90578);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.40415);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.095683);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,10.28626);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.45971);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,12.68023);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.679415);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.869331);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.040807);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.306322);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.55621);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9847788);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8026644);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.4343);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7516923);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5930392);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1789641);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4671284);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.3844095);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.698489);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.465741);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3012904);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.4050895);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.09912433);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5951371);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.372921);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4170756);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.693337);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5212439);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6698227);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4708364);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5563118);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4673962);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5845168);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8059865);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9506967);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.236409);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.235316);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.363951);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.03495);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9011291);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.786086);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3108171);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7027722);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4095221);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.377753);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5329711);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.227316);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2457516);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1088571);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1978592);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2707058);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3217722);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1915183);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1608931);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.2852763);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.08551757);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3477713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4360033);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.109106);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1270919);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.0821306);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4075177);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.387343);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.0589169);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2822375);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4802242);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5497985);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8308913);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.076219);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6204374);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2023593);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1759195);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05813798);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2490974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.07226992);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.0365362);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0568599);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08485324);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04741518);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1730313);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.165139);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04448979);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09530386);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1720639);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1402457);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3332624);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4229289);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2512327);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1035499);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1500488);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0294588);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1332973);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05746958);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02583506);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.02971407);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,13.50152);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.64135);
   hNCpi0inFVres_stack_7->SetBinContent(3,25.9207);
   hNCpi0inFVres_stack_7->SetBinContent(4,40.78144);
   hNCpi0inFVres_stack_7->SetBinContent(5,38.27863);
   hNCpi0inFVres_stack_7->SetBinContent(6,45.41806);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.46588);
   hNCpi0inFVres_stack_7->SetBinContent(8,46.76006);
   hNCpi0inFVres_stack_7->SetBinContent(9,66.76952);
   hNCpi0inFVres_stack_7->SetBinContent(10,85.43783);
   hNCpi0inFVres_stack_7->SetBinContent(11,102.6332);
   hNCpi0inFVres_stack_7->SetBinContent(12,115.0181);
   hNCpi0inFVres_stack_7->SetBinContent(13,108.7422);
   hNCpi0inFVres_stack_7->SetBinContent(14,81.31277);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.2989);
   hNCpi0inFVres_stack_7->SetBinContent(16,26.72067);
   hNCpi0inFVres_stack_7->SetBinContent(17,16.73401);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.47648);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.99146);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.45515);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.347751);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.248144);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.510434);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.705149);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.911852);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.4731);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.416653);
   hNCpi0inFVres_stack_7->SetBinContent(28,2.915167);
   hNCpi0inFVres_stack_7->SetBinContent(29,3.49406);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.215116);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.075245);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.639617);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.195369);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.072021);
   hNCpi0inFVres_stack_7->SetBinContent(35,11.22186);
   hNCpi0inFVres_stack_7->SetBinError(1,1.284146);
   hNCpi0inFVres_stack_7->SetBinError(2,1.864863);
   hNCpi0inFVres_stack_7->SetBinError(3,1.702535);
   hNCpi0inFVres_stack_7->SetBinError(4,2.330676);
   hNCpi0inFVres_stack_7->SetBinError(5,2.123553);
   hNCpi0inFVres_stack_7->SetBinError(6,2.311168);
   hNCpi0inFVres_stack_7->SetBinError(7,2.478553);
   hNCpi0inFVres_stack_7->SetBinError(8,2.306152);
   hNCpi0inFVres_stack_7->SetBinError(9,2.760873);
   hNCpi0inFVres_stack_7->SetBinError(10,3.070701);
   hNCpi0inFVres_stack_7->SetBinError(11,3.443623);
   hNCpi0inFVres_stack_7->SetBinError(12,3.79726);
   hNCpi0inFVres_stack_7->SetBinError(13,3.62186);
   hNCpi0inFVres_stack_7->SetBinError(14,3.09358);
   hNCpi0inFVres_stack_7->SetBinError(15,2.378257);
   hNCpi0inFVres_stack_7->SetBinError(16,1.717832);
   hNCpi0inFVres_stack_7->SetBinError(17,1.346685);
   hNCpi0inFVres_stack_7->SetBinError(18,1.248785);
   hNCpi0inFVres_stack_7->SetBinError(19,1.180814);
   hNCpi0inFVres_stack_7->SetBinError(20,1.10727);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9218935);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9085456);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8142566);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5692725);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4691357);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9570576);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7774772);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6658249);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7151449);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7181923);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4412395);
   hNCpi0inFVres_stack_7->SetBinError(32,0.4836893);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5261624);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5154082);
   hNCpi0inFVres_stack_7->SetBinError(35,1.200375);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.664064);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.390964);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.018282);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.655774);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.399805);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.839726);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.700296);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.87631);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.09558);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.97922);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.15837);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.29611);
   hNCpi0inFVdis_stack_8->SetBinContent(13,19.17002);
   hNCpi0inFVdis_stack_8->SetBinContent(14,16.05038);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.200867);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.013106);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.885343);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.706331);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.042724);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.093174);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.239943);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.086761);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.649262);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.405638);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5947459);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.06128);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.53837);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.025031);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.9370769);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.6697429);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.049747);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.5126963);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.867583);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.8120477);
   hNCpi0inFVdis_stack_8->SetBinContent(35,5.07579);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3892555);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9335345);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.732316);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.717008);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8844726);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9266925);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.184309);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.14121);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.109857);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.485596);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.583567);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.599275);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.37385);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.465174);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9777827);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7782241);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6001963);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5855935);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7742985);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6563157);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2884909);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2943414);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5299204);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3003274);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1660102);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3016603);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.5246447);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.3513938);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3033897);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.1973336);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3690379);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3366242);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.4146131);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2758202);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.9361553);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,3.035868);
   hCCpi0inFV_stack_10->SetBinContent(2,7.864944);
   hCCpi0inFV_stack_10->SetBinContent(3,11.03202);
   hCCpi0inFV_stack_10->SetBinContent(4,8.259037);
   hCCpi0inFV_stack_10->SetBinContent(5,12.93835);
   hCCpi0inFV_stack_10->SetBinContent(6,12.56372);
   hCCpi0inFV_stack_10->SetBinContent(7,15.6832);
   hCCpi0inFV_stack_10->SetBinContent(8,15.75248);
   hCCpi0inFV_stack_10->SetBinContent(9,23.12833);
   hCCpi0inFV_stack_10->SetBinContent(10,29.12889);
   hCCpi0inFV_stack_10->SetBinContent(11,34.9916);
   hCCpi0inFV_stack_10->SetBinContent(12,43.87671);
   hCCpi0inFV_stack_10->SetBinContent(13,38.76468);
   hCCpi0inFV_stack_10->SetBinContent(14,24.77328);
   hCCpi0inFV_stack_10->SetBinContent(15,17.52569);
   hCCpi0inFV_stack_10->SetBinContent(16,10.06812);
   hCCpi0inFV_stack_10->SetBinContent(17,8.33333);
   hCCpi0inFV_stack_10->SetBinContent(18,6.060511);
   hCCpi0inFV_stack_10->SetBinContent(19,5.190506);
   hCCpi0inFV_stack_10->SetBinContent(20,6.540613);
   hCCpi0inFV_stack_10->SetBinContent(21,4.926126);
   hCCpi0inFV_stack_10->SetBinContent(22,4.788319);
   hCCpi0inFV_stack_10->SetBinContent(23,4.53666);
   hCCpi0inFV_stack_10->SetBinContent(24,3.074514);
   hCCpi0inFV_stack_10->SetBinContent(25,2.144191);
   hCCpi0inFV_stack_10->SetBinContent(26,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(27,4.339944);
   hCCpi0inFV_stack_10->SetBinContent(28,1.52047);
   hCCpi0inFV_stack_10->SetBinContent(29,2.994049);
   hCCpi0inFV_stack_10->SetBinContent(30,2.637366);
   hCCpi0inFV_stack_10->SetBinContent(31,1.91221);
   hCCpi0inFV_stack_10->SetBinContent(32,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(33,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(34,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(35,15.92854);
   hCCpi0inFV_stack_10->SetBinError(1,0.8329575);
   hCCpi0inFV_stack_10->SetBinError(2,1.394719);
   hCCpi0inFV_stack_10->SetBinError(3,1.687738);
   hCCpi0inFV_stack_10->SetBinError(4,1.400601);
   hCCpi0inFV_stack_10->SetBinError(5,1.770052);
   hCCpi0inFV_stack_10->SetBinError(6,1.732735);
   hCCpi0inFV_stack_10->SetBinError(7,1.967334);
   hCCpi0inFV_stack_10->SetBinError(8,2.076749);
   hCCpi0inFV_stack_10->SetBinError(9,2.364285);
   hCCpi0inFV_stack_10->SetBinError(10,2.661463);
   hCCpi0inFV_stack_10->SetBinError(11,2.970569);
   hCCpi0inFV_stack_10->SetBinError(12,3.316814);
   hCCpi0inFV_stack_10->SetBinError(13,3.108121);
   hCCpi0inFV_stack_10->SetBinError(14,2.450676);
   hCCpi0inFV_stack_10->SetBinError(15,2.112784);
   hCCpi0inFV_stack_10->SetBinError(16,1.569807);
   hCCpi0inFV_stack_10->SetBinError(17,1.411833);
   hCCpi0inFV_stack_10->SetBinError(18,1.257628);
   hCCpi0inFV_stack_10->SetBinError(19,1.181477);
   hCCpi0inFV_stack_10->SetBinError(20,1.278854);
   hCCpi0inFV_stack_10->SetBinError(21,1.081699);
   hCCpi0inFV_stack_10->SetBinError(22,1.1106);
   hCCpi0inFV_stack_10->SetBinError(23,1.110135);
   hCCpi0inFV_stack_10->SetBinError(24,0.920955);
   hCCpi0inFV_stack_10->SetBinError(25,0.7850774);
   hCCpi0inFV_stack_10->SetBinError(26,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(27,1.092568);
   hCCpi0inFV_stack_10->SetBinError(28,0.5898325);
   hCCpi0inFV_stack_10->SetBinError(29,0.9055888);
   hCCpi0inFV_stack_10->SetBinError(30,0.7838607);
   hCCpi0inFV_stack_10->SetBinError(31,0.6516395);
   hCCpi0inFV_stack_10->SetBinError(32,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(33,0.650338);
   hCCpi0inFV_stack_10->SetBinError(34,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(35,2.001475);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,4.393356);
   hNCinFV_stack_11->SetBinContent(2,4.173725);
   hNCinFV_stack_11->SetBinContent(3,5.042652);
   hNCinFV_stack_11->SetBinContent(4,8.965596);
   hNCinFV_stack_11->SetBinContent(5,10.94019);
   hNCinFV_stack_11->SetBinContent(6,8.497759);
   hNCinFV_stack_11->SetBinContent(7,9.853333);
   hNCinFV_stack_11->SetBinContent(8,6.312728);
   hNCinFV_stack_11->SetBinContent(9,10.89114);
   hNCinFV_stack_11->SetBinContent(10,9.10311);
   hNCinFV_stack_11->SetBinContent(11,12.25424);
   hNCinFV_stack_11->SetBinContent(12,14.45712);
   hNCinFV_stack_11->SetBinContent(13,11.51719);
   hNCinFV_stack_11->SetBinContent(14,8.715307);
   hNCinFV_stack_11->SetBinContent(15,6.822447);
   hNCinFV_stack_11->SetBinContent(16,6.35375);
   hNCinFV_stack_11->SetBinContent(17,4.479892);
   hNCinFV_stack_11->SetBinContent(18,2.461628);
   hNCinFV_stack_11->SetBinContent(19,3.35393);
   hNCinFV_stack_11->SetBinContent(20,2.185076);
   hNCinFV_stack_11->SetBinContent(21,4.530097);
   hNCinFV_stack_11->SetBinContent(22,1.995962);
   hNCinFV_stack_11->SetBinContent(23,3.399513);
   hNCinFV_stack_11->SetBinContent(24,2.345476);
   hNCinFV_stack_11->SetBinContent(25,1.772283);
   hNCinFV_stack_11->SetBinContent(26,1.057041);
   hNCinFV_stack_11->SetBinContent(27,1.492276);
   hNCinFV_stack_11->SetBinContent(28,2.423171);
   hNCinFV_stack_11->SetBinContent(29,2.022601);
   hNCinFV_stack_11->SetBinContent(30,2.678581);
   hNCinFV_stack_11->SetBinContent(31,2.341178);
   hNCinFV_stack_11->SetBinContent(32,2.698473);
   hNCinFV_stack_11->SetBinContent(33,0.8944137);
   hNCinFV_stack_11->SetBinContent(34,1.080337);
   hNCinFV_stack_11->SetBinContent(35,15.89125);
   hNCinFV_stack_11->SetBinError(1,1.062742);
   hNCinFV_stack_11->SetBinError(2,0.9982989);
   hNCinFV_stack_11->SetBinError(3,1.097734);
   hNCinFV_stack_11->SetBinError(4,1.494361);
   hNCinFV_stack_11->SetBinError(5,1.749203);
   hNCinFV_stack_11->SetBinError(6,1.482031);
   hNCinFV_stack_11->SetBinError(7,1.698201);
   hNCinFV_stack_11->SetBinError(8,1.225669);
   hNCinFV_stack_11->SetBinError(9,1.634319);
   hNCinFV_stack_11->SetBinError(10,1.460859);
   hNCinFV_stack_11->SetBinError(11,1.744221);
   hNCinFV_stack_11->SetBinError(12,1.921143);
   hNCinFV_stack_11->SetBinError(13,1.819605);
   hNCinFV_stack_11->SetBinError(14,1.515696);
   hNCinFV_stack_11->SetBinError(15,1.32825);
   hNCinFV_stack_11->SetBinError(16,1.518743);
   hNCinFV_stack_11->SetBinError(17,1.056402);
   hNCinFV_stack_11->SetBinError(18,0.7125284);
   hNCinFV_stack_11->SetBinError(19,0.9155703);
   hNCinFV_stack_11->SetBinError(20,0.7827532);
   hNCinFV_stack_11->SetBinError(21,1.227508);
   hNCinFV_stack_11->SetBinError(22,0.8317026);
   hNCinFV_stack_11->SetBinError(23,1.053417);
   hNCinFV_stack_11->SetBinError(24,0.7880985);
   hNCinFV_stack_11->SetBinError(25,0.866806);
   hNCinFV_stack_11->SetBinError(26,0.477619);
   hNCinFV_stack_11->SetBinError(27,0.5809607);
   hNCinFV_stack_11->SetBinError(28,1.149098);
   hNCinFV_stack_11->SetBinError(29,0.7248189);
   hNCinFV_stack_11->SetBinError(30,1.07177);
   hNCinFV_stack_11->SetBinError(31,0.9279986);
   hNCinFV_stack_11->SetBinError(32,1.191526);
   hNCinFV_stack_11->SetBinError(33,0.5730425);
   hNCinFV_stack_11->SetBinError(34,0.5092596);
   hNCinFV_stack_11->SetBinError(35,2.225248);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,2.503992);
   hnumuCCinFV_stack_12->SetBinContent(2,6.837461);
   hnumuCCinFV_stack_12->SetBinContent(3,5.282025);
   hnumuCCinFV_stack_12->SetBinContent(4,7.003003);
   hnumuCCinFV_stack_12->SetBinContent(5,5.768344);
   hnumuCCinFV_stack_12->SetBinContent(6,9.609627);
   hnumuCCinFV_stack_12->SetBinContent(7,9.726027);
   hnumuCCinFV_stack_12->SetBinContent(8,8.294449);
   hnumuCCinFV_stack_12->SetBinContent(9,10.26007);
   hnumuCCinFV_stack_12->SetBinContent(10,9.959157);
   hnumuCCinFV_stack_12->SetBinContent(11,9.692696);
   hnumuCCinFV_stack_12->SetBinContent(12,11.03642);
   hnumuCCinFV_stack_12->SetBinContent(13,10.0308);
   hnumuCCinFV_stack_12->SetBinContent(14,7.517962);
   hnumuCCinFV_stack_12->SetBinContent(15,5.562554);
   hnumuCCinFV_stack_12->SetBinContent(16,5.842098);
   hnumuCCinFV_stack_12->SetBinContent(17,4.334186);
   hnumuCCinFV_stack_12->SetBinContent(18,3.890459);
   hnumuCCinFV_stack_12->SetBinContent(19,3.515221);
   hnumuCCinFV_stack_12->SetBinContent(20,3.722562);
   hnumuCCinFV_stack_12->SetBinContent(21,2.694988);
   hnumuCCinFV_stack_12->SetBinContent(22,1.800557);
   hnumuCCinFV_stack_12->SetBinContent(23,1.030857);
   hnumuCCinFV_stack_12->SetBinContent(24,1.975936);
   hnumuCCinFV_stack_12->SetBinContent(25,2.688398);
   hnumuCCinFV_stack_12->SetBinContent(26,1.71156);
   hnumuCCinFV_stack_12->SetBinContent(27,1.323754);
   hnumuCCinFV_stack_12->SetBinContent(28,0.6433486);
   hnumuCCinFV_stack_12->SetBinContent(29,0.7888567);
   hnumuCCinFV_stack_12->SetBinContent(30,1.073786);
   hnumuCCinFV_stack_12->SetBinContent(31,1.419675);
   hnumuCCinFV_stack_12->SetBinContent(32,1.027091);
   hnumuCCinFV_stack_12->SetBinContent(33,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(35,9.719046);
   hnumuCCinFV_stack_12->SetBinError(1,0.8253359);
   hnumuCCinFV_stack_12->SetBinError(2,1.903828);
   hnumuCCinFV_stack_12->SetBinError(3,1.39246);
   hnumuCCinFV_stack_12->SetBinError(4,1.408503);
   hnumuCCinFV_stack_12->SetBinError(5,1.501188);
   hnumuCCinFV_stack_12->SetBinError(6,1.653765);
   hnumuCCinFV_stack_12->SetBinError(7,2.081672);
   hnumuCCinFV_stack_12->SetBinError(8,2.03534);
   hnumuCCinFV_stack_12->SetBinError(9,1.937437);
   hnumuCCinFV_stack_12->SetBinError(10,1.800112);
   hnumuCCinFV_stack_12->SetBinError(11,1.877354);
   hnumuCCinFV_stack_12->SetBinError(12,1.782736);
   hnumuCCinFV_stack_12->SetBinError(13,1.772634);
   hnumuCCinFV_stack_12->SetBinError(14,1.383871);
   hnumuCCinFV_stack_12->SetBinError(15,1.290651);
   hnumuCCinFV_stack_12->SetBinError(16,1.33151);
   hnumuCCinFV_stack_12->SetBinError(17,0.9893871);
   hnumuCCinFV_stack_12->SetBinError(18,1.040372);
   hnumuCCinFV_stack_12->SetBinError(19,1.011795);
   hnumuCCinFV_stack_12->SetBinError(20,1.010258);
   hnumuCCinFV_stack_12->SetBinError(21,0.9202108);
   hnumuCCinFV_stack_12->SetBinError(22,0.7056419);
   hnumuCCinFV_stack_12->SetBinError(23,0.4633127);
   hnumuCCinFV_stack_12->SetBinError(24,0.7452192);
   hnumuCCinFV_stack_12->SetBinError(25,0.9032065);
   hnumuCCinFV_stack_12->SetBinError(26,0.6679071);
   hnumuCCinFV_stack_12->SetBinError(27,0.5560625);
   hnumuCCinFV_stack_12->SetBinError(28,0.373969);
   hnumuCCinFV_stack_12->SetBinError(29,0.4834827);
   hnumuCCinFV_stack_12->SetBinError(30,0.5557297);
   hnumuCCinFV_stack_12->SetBinError(31,0.5932508);
   hnumuCCinFV_stack_12->SetBinError(32,0.4613124);
   hnumuCCinFV_stack_12->SetBinError(33,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(35,1.551281);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.516579);
   hnueCCinFV_stack_13->SetBinContent(2,1.70742);
   hnueCCinFV_stack_13->SetBinContent(3,3.193305);
   hnueCCinFV_stack_13->SetBinContent(4,1.524268);
   hnueCCinFV_stack_13->SetBinContent(5,0.8083873);
   hnueCCinFV_stack_13->SetBinContent(6,1.37042);
   hnueCCinFV_stack_13->SetBinContent(7,0.9226685);
   hnueCCinFV_stack_13->SetBinContent(8,2.002205);
   hnueCCinFV_stack_13->SetBinContent(9,1.238581);
   hnueCCinFV_stack_13->SetBinContent(10,1.044696);
   hnueCCinFV_stack_13->SetBinContent(11,1.437869);
   hnueCCinFV_stack_13->SetBinContent(12,1.257024);
   hnueCCinFV_stack_13->SetBinContent(13,0.227135);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.8811439);
   hnueCCinFV_stack_13->SetBinContent(16,1.304351);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(22,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(23,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967203);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.270652);
   hnueCCinFV_stack_13->SetBinContent(35,3.207831);
   hnueCCinFV_stack_13->SetBinError(1,0.7438288);
   hnueCCinFV_stack_13->SetBinError(2,1.496079);
   hnueCCinFV_stack_13->SetBinError(3,1.224882);
   hnueCCinFV_stack_13->SetBinError(4,0.8565368);
   hnueCCinFV_stack_13->SetBinError(5,0.4046233);
   hnueCCinFV_stack_13->SetBinError(6,0.7001518);
   hnueCCinFV_stack_13->SetBinError(7,0.4621632);
   hnueCCinFV_stack_13->SetBinError(8,1.346193);
   hnueCCinFV_stack_13->SetBinError(9,0.6282462);
   hnueCCinFV_stack_13->SetBinError(10,0.5289206);
   hnueCCinFV_stack_13->SetBinError(11,0.6946994);
   hnueCCinFV_stack_13->SetBinError(12,0.595964);
   hnueCCinFV_stack_13->SetBinError(13,0.227135);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.5378242);
   hnueCCinFV_stack_13->SetBinError(16,0.7149596);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(22,0.4316896);
   hnueCCinFV_stack_13->SetBinError(23,0.4078967);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.270652);
   hnueCCinFV_stack_13->SetBinError(35,1.275576);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__17->SetBinContent(1,48.63758);
   hmcerror__17->SetBinContent(2,88.05283);
   hmcerror__17->SetBinContent(3,94.30283);
   hmcerror__17->SetBinContent(4,121.9918);
   hmcerror__17->SetBinContent(5,114.0109);
   hmcerror__17->SetBinContent(6,136.3584);
   hmcerror__17->SetBinContent(7,134.0886);
   hmcerror__17->SetBinContent(8,125.357);
   hmcerror__17->SetBinContent(9,171.6892);
   hmcerror__17->SetBinContent(10,214.6508);
   hmcerror__17->SetBinContent(11,235.8907);
   hmcerror__17->SetBinContent(12,272.4563);
   hmcerror__17->SetBinContent(13,251.6121);
   hmcerror__17->SetBinContent(14,178.2372);
   hmcerror__17->SetBinContent(15,102.0995);
   hmcerror__17->SetBinContent(16,70.24061);
   hmcerror__17->SetBinContent(17,49.34415);
   hmcerror__17->SetBinContent(18,39.91033);
   hmcerror__17->SetBinContent(19,33.80536);
   hmcerror__17->SetBinContent(20,34.91604);
   hmcerror__17->SetBinContent(21,32.89672);
   hmcerror__17->SetBinContent(22,22.92423);
   hmcerror__17->SetBinContent(23,21.28091);
   hmcerror__17->SetBinContent(24,18.83055);
   hmcerror__17->SetBinContent(25,13.356);
   hmcerror__17->SetBinContent(26,14.08519);
   hmcerror__17->SetBinContent(27,17.33114);
   hmcerror__17->SetBinContent(28,9.189645);
   hmcerror__17->SetBinContent(29,12.56132);
   hmcerror__17->SetBinContent(30,12.20983);
   hmcerror__17->SetBinContent(31,10.74884);
   hmcerror__17->SetBinContent(32,9.116299);
   hmcerror__17->SetBinContent(33,6.655834);
   hmcerror__17->SetBinContent(34,6.471752);
   hmcerror__17->SetBinContent(35,70.58542);
   hmcerror__17->SetBinError(1,17.74321);
   hmcerror__17->SetBinError(2,26.72852);
   hmcerror__17->SetBinError(3,30.79409);
   hmcerror__17->SetBinError(4,34.04046);
   hmcerror__17->SetBinError(5,32.7795);
   hmcerror__17->SetBinError(6,32.92315);
   hmcerror__17->SetBinError(7,44.32241);
   hmcerror__17->SetBinError(8,38.1331);
   hmcerror__17->SetBinError(9,46.49113);
   hmcerror__17->SetBinError(10,64.17242);
   hmcerror__17->SetBinError(11,66.12557);
   hmcerror__17->SetBinError(12,71.71323);
   hmcerror__17->SetBinError(13,62.58094);
   hmcerror__17->SetBinError(14,46.99346);
   hmcerror__17->SetBinError(15,32.00085);
   hmcerror__17->SetBinError(16,21.7092);
   hmcerror__17->SetBinError(17,21.11144);
   hmcerror__17->SetBinError(18,16.1681);
   hmcerror__17->SetBinError(19,14.99021);
   hmcerror__17->SetBinError(20,16.23679);
   hmcerror__17->SetBinError(21,13.66003);
   hmcerror__17->SetBinError(22,11.91109);
   hmcerror__17->SetBinError(23,12.16342);
   hmcerror__17->SetBinError(24,8.685375);
   hmcerror__17->SetBinError(25,8.807106);
   hmcerror__17->SetBinError(26,9.745236);
   hmcerror__17->SetBinError(27,12.77068);
   hmcerror__17->SetBinError(28,7.293909);
   hmcerror__17->SetBinError(29,11.17512);
   hmcerror__17->SetBinError(30,8.909948);
   hmcerror__17->SetBinError(31,7.854791);
   hmcerror__17->SetBinError(32,10.52345);
   hmcerror__17->SetBinError(33,5.859654);
   hmcerror__17->SetBinError(34,7.215565);
   hmcerror__17->SetBinError(35,23.56143);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[34] = {
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
   Double_t _fy3021[34] = {
   64,
   90,
   95,
   108,
   117,
   138,
   141,
   162,
   186,
   216,
   265,
   312,
   298,
   144,
   109,
   65,
   56,
   44,
   38,
   23,
   27,
   28,
   21,
   16,
   16,
   17,
   8,
   13,
   13,
   5,
   13,
   12,
   8,
   4};
   Double_t _felx3021[34] = {
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
   Double_t _fely3021[34] = {
   8.1273,
   9.6093,
   9.8686,
   10.3923,
   10.81665,
   11.74734,
   11.87434,
   12.72792,
   13.63818,
   14.69694,
   16.27882,
   17.66352,
   17.26268,
   12,
   10.44031,
   8.1893,
   7.6127,
   6.7671,
   6.3013,
   4.9457,
   5.3414,
   5.4358,
   4.7354,
   4.1628,
   4.1628,
   4.2835,
   3.0307,
   3.77763,
   3.77763,
   2.48995,
   3.77763,
   3.64022,
   3.0307,
   2.29683};
   Double_t _fehx3021[34] = {
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
   Double_t _fehy3021[34] = {
   7.9246,
   9.4079,
   9.667,
   10.3923,
   10.81665,
   11.74734,
   11.87434,
   12.72792,
   13.63818,
   14.69694,
   16.27882,
   17.66352,
   17.26268,
   12,
   10.44031,
   7.9866,
   7.4094,
   6.5623,
   6.0955,
   4.7346,
   5.1322,
   5.2271,
   4.5229,
   3.9454,
   3.9454,
   4.0673,
   2.7896,
   3.5552,
   3.5552,
   2.21064,
   3.5552,
   3.4155,
   2.7896,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,440);
   Graph_Graph3021->SetMinimum(1.532853);
   Graph_Graph3021->SetMaximum(362.4596);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.8/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2872.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 277.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 277.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  94.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1026.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  199.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 376.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 181.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 159.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[34] = {
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
   Double_t _fy3022[34] = {
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
   Double_t _felx3022[34] = {
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
   Double_t _fely3022[34] = {
   0.3648046,
   0.303551,
   0.3265447,
   0.2790389,
   0.287512,
   0.2414457,
   0.3305456,
   0.3041961,
   0.2707866,
   0.2989619,
   0.2803229,
   0.26321,
   0.2487199,
   0.2636569,
   0.3134282,
   0.3090691,
   0.4278408,
   0.4051106,
   0.443427,
   0.465024,
   0.4152398,
   0.5195851,
   0.5715647,
   0.4612385,
   0.659412,
   0.6918781,
   0.7368631,
   0.7937096,
   0.8896456,
   0.7297359,
   0.7307568,
   1.154355,
   0.8803786,
   1.114932};
   Double_t _fehx3022[34] = {
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
   Double_t _fehy3022[34] = {
   0.3648046,
   0.303551,
   0.3265447,
   0.2790389,
   0.287512,
   0.2414457,
   0.3305456,
   0.3041961,
   0.2707866,
   0.2989619,
   0.2803229,
   0.26321,
   0.2487199,
   0.2636569,
   0.3134282,
   0.3090691,
   0.4278408,
   0.4051106,
   0.443427,
   0.465024,
   0.4152398,
   0.5195851,
   0.5715647,
   0.4612385,
   0.659412,
   0.6918781,
   0.7368631,
   0.7937096,
   0.8896456,
   0.7297359,
   0.7307568,
   1.154355,
   0.8803786,
   1.114932};
   grae = new TGraphAsymmErrors(34,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,440);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3023[34] = {
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
   Double_t _fy3023[34] = {
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
   Double_t _felx3023[34] = {
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
   Double_t _fely3023[34] = {
   0.1996802,
   0.1995522,
   0.1940152,
   0.1829403,
   0.1953815,
   0.1791171,
   0.2168341,
   0.2162537,
   0.2172872,
   0.220389,
   0.2294607,
   0.2199484,
   0.2215664,
   0.2266425,
   0.2302426,
   0.233634,
   0.2673754,
   0.2689505,
   0.2438904,
   0.2587585,
   0.2287111,
   0.2731948,
   0.2765095,
   0.2691198,
   0.291624,
   0.2791985,
   0.2566157,
   0.3323167,
   0.2760437,
   0.270369,
   0.2948016,
   0.3161661,
   0.3607378,
   0.3932634};
   Double_t _fehx3023[34] = {
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
   Double_t _fehy3023[34] = {
   0.1996802,
   0.1995522,
   0.1940152,
   0.1829403,
   0.1953815,
   0.1791171,
   0.2168341,
   0.2162537,
   0.2172872,
   0.220389,
   0.2294607,
   0.2199484,
   0.2215664,
   0.2266425,
   0.2302426,
   0.233634,
   0.2673754,
   0.2689505,
   0.2438904,
   0.2587585,
   0.2287111,
   0.2731948,
   0.2765095,
   0.2691198,
   0.291624,
   0.2791985,
   0.2566157,
   0.3323167,
   0.2760437,
   0.270369,
   0.2948016,
   0.3161661,
   0.3607378,
   0.3932634};
   grae = new TGraphAsymmErrors(34,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,440);
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
   
   Double_t _fx3024[34] = {
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
   Double_t _fy3024[34] = {
   1.315855,
   1.022114,
   1.007393,
   0.8853055,
   1.026218,
   1.012039,
   1.051543,
   1.29231,
   1.083353,
   1.006285,
   1.123402,
   1.145138,
   1.184363,
   0.8079122,
   1.067586,
   0.9253906,
   1.134886,
   1.102471,
   1.124082,
   0.6587231,
   0.8207506,
   1.221415,
   0.9867998,
   0.8496831,
   1.197964,
   1.206941,
   0.4615969,
   1.414636,
   1.034923,
   0.4095063,
   1.209432,
   1.316324,
   1.201953,
   0.6180706};
   Double_t _felx3024[34] = {
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
   Double_t _fely3024[34] = {
   0.1670992,
   0.1091311,
   0.104648,
   0.08518856,
   0.09487386,
   0.08615046,
   0.08855592,
   0.1015334,
   0.07943529,
   0.06846905,
   0.06901001,
   0.06483065,
   0.06860829,
   0.06732601,
   0.1022562,
   0.1165893,
   0.1542777,
   0.1695576,
   0.1863994,
   0.1416455,
   0.1623688,
   0.2371203,
   0.2225187,
   0.2210663,
   0.3116802,
   0.3041137,
   0.1748702,
   0.4110746,
   0.3007351,
   0.20393,
   0.3514452,
   0.399309,
   0.4553449,
   0.3549008};
   Double_t _fehx3024[34] = {
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
   Double_t _fehy3024[34] = {
   0.1629316,
   0.1068438,
   0.1025102,
   0.08518856,
   0.09487386,
   0.08615046,
   0.08855592,
   0.1015334,
   0.07943529,
   0.06846905,
   0.06901001,
   0.06483065,
   0.06860829,
   0.06732601,
   0.1022562,
   0.1137035,
   0.1501576,
   0.1644261,
   0.1803116,
   0.1355996,
   0.1560095,
   0.2280164,
   0.2125332,
   0.2095212,
   0.2954028,
   0.2887642,
   0.1609588,
   0.3868702,
   0.2830276,
   0.1810542,
   0.3307518,
   0.3746586,
   0.419121,
   0.3062324};
   grae = new TGraphAsymmErrors(34,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,440);
   Graph_Graph3024->SetMinimum(0.04598327);
   Graph_Graph3024->SetMaximum(1.961099);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_mass_all",34,0,400);

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
