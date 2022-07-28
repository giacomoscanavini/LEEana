#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Jun  8 11:41:05 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-342.3077,-7.420555,1260.256,820.5572);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__13->SetBinContent(0,0.1967154);
   hmc__13->SetBinContent(1,0.4623989);
   hmc__13->SetBinContent(2,0.3917402);
   hmc__13->SetBinContent(3,3.835807);
   hmc__13->SetBinContent(4,28.39329);
   hmc__13->SetBinContent(5,227.9667);
   hmc__13->SetBinContent(6,371.0278);
   hmc__13->SetBinContent(7,341.8168);
   hmc__13->SetBinContent(8,350.1209);
   hmc__13->SetBinContent(9,345.1658);
   hmc__13->SetBinContent(10,299.9016);
   hmc__13->SetBinContent(11,265.3548);
   hmc__13->SetBinContent(12,241.6249);
   hmc__13->SetBinContent(13,191.5958);
   hmc__13->SetBinContent(14,147.5723);
   hmc__13->SetBinContent(15,128.7871);
   hmc__13->SetBinContent(16,100.098);
   hmc__13->SetBinContent(17,82.5627);
   hmc__13->SetBinContent(18,60.1517);
   hmc__13->SetBinContent(19,50.03855);
   hmc__13->SetBinContent(20,37.5624);
   hmc__13->SetBinContent(21,28.03345);
   hmc__13->SetBinContent(22,25.29534);
   hmc__13->SetBinContent(23,19.60594);
   hmc__13->SetBinContent(24,14.67105);
   hmc__13->SetBinContent(25,12.6518);
   hmc__13->SetBinContent(26,68.71198);
   hmc__13->SetBinError(0,0.1967154);
   hmc__13->SetBinError(1,0.6720578);
   hmc__13->SetBinError(2,0.8408822);
   hmc__13->SetBinError(3,2.047756);
   hmc__13->SetBinError(4,8.589044);
   hmc__13->SetBinError(5,57.08538);
   hmc__13->SetBinError(6,93.98424);
   hmc__13->SetBinError(7,82.72468);
   hmc__13->SetBinError(8,88.33737);
   hmc__13->SetBinError(9,80.44469);
   hmc__13->SetBinError(10,76.0583);
   hmc__13->SetBinError(11,60.91303);
   hmc__13->SetBinError(12,58.69549);
   hmc__13->SetBinError(13,45.51733);
   hmc__13->SetBinError(14,38.59744);
   hmc__13->SetBinError(15,34.00354);
   hmc__13->SetBinError(16,25.02436);
   hmc__13->SetBinError(17,25.22256);
   hmc__13->SetBinError(18,18.07548);
   hmc__13->SetBinError(19,14.04417);
   hmc__13->SetBinError(20,13.81836);
   hmc__13->SetBinError(21,11.43772);
   hmc__13->SetBinError(22,11.90393);
   hmc__13->SetBinError(23,8.640323);
   hmc__13->SetBinError(24,7.231868);
   hmc__13->SetBinError(25,8.826584);
   hmc__13->SetBinError(26,26.41192);
   hmc__13->SetMinimum(-7.420555);
   hmc__13->SetMaximum(779.1583);
   hmc__13->SetEntries(3396.741);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-150,1100);
   hs5_stack_5->SetMinimum(-1.244044e-08);
   hs5_stack_5->SetMaximum(389.5791);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,2.946911);
   hbadmatch_stack_1->SetBinContent(6,5.907772);
   hbadmatch_stack_1->SetBinContent(7,4.696915);
   hbadmatch_stack_1->SetBinContent(8,9.447306);
   hbadmatch_stack_1->SetBinContent(9,6.799254);
   hbadmatch_stack_1->SetBinContent(10,7.34904);
   hbadmatch_stack_1->SetBinContent(11,8.513861);
   hbadmatch_stack_1->SetBinContent(12,5.207134);
   hbadmatch_stack_1->SetBinContent(13,5.97457);
   hbadmatch_stack_1->SetBinContent(14,5.26049);
   hbadmatch_stack_1->SetBinContent(15,1.805704);
   hbadmatch_stack_1->SetBinContent(16,3.910733);
   hbadmatch_stack_1->SetBinContent(17,2.308936);
   hbadmatch_stack_1->SetBinContent(18,2.195754);
   hbadmatch_stack_1->SetBinContent(19,2.628727);
   hbadmatch_stack_1->SetBinContent(20,1.707518);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.785171);
   hbadmatch_stack_1->SetBinContent(23,0.5640803);
   hbadmatch_stack_1->SetBinContent(24,0.8753801);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,2.109743);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.9590874);
   hbadmatch_stack_1->SetBinError(6,1.436149);
   hbadmatch_stack_1->SetBinError(7,1.118943);
   hbadmatch_stack_1->SetBinError(8,2.541135);
   hbadmatch_stack_1->SetBinError(9,1.469498);
   hbadmatch_stack_1->SetBinError(10,1.394959);
   hbadmatch_stack_1->SetBinError(11,1.44857);
   hbadmatch_stack_1->SetBinError(12,1.14951);
   hbadmatch_stack_1->SetBinError(13,1.298865);
   hbadmatch_stack_1->SetBinError(14,1.186218);
   hbadmatch_stack_1->SetBinError(15,0.7080169);
   hbadmatch_stack_1->SetBinError(16,0.97361);
   hbadmatch_stack_1->SetBinError(17,0.9006691);
   hbadmatch_stack_1->SetBinError(18,0.7598403);
   hbadmatch_stack_1->SetBinError(19,0.8689146);
   hbadmatch_stack_1->SetBinError(20,0.6663138);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.3925882);
   hbadmatch_stack_1->SetBinError(23,0.4072508);
   hbadmatch_stack_1->SetBinError(24,0.5191111);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.7254221);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(3,0.8131978);
   hext_stack_2->SetBinContent(4,3.946247);
   hext_stack_2->SetBinContent(5,14.35613);
   hext_stack_2->SetBinContent(6,29.42171);
   hext_stack_2->SetBinContent(7,16.96731);
   hext_stack_2->SetBinContent(8,17.2614);
   hext_stack_2->SetBinContent(9,31.01781);
   hext_stack_2->SetBinContent(10,17.29888);
   hext_stack_2->SetBinContent(11,22.87153);
   hext_stack_2->SetBinContent(12,22.26739);
   hext_stack_2->SetBinContent(13,19.26839);
   hext_stack_2->SetBinContent(14,11.3803);
   hext_stack_2->SetBinContent(15,12.06223);
   hext_stack_2->SetBinContent(16,13.07013);
   hext_stack_2->SetBinContent(17,6.635217);
   hext_stack_2->SetBinContent(18,4.628173);
   hext_stack_2->SetBinContent(19,6.303639);
   hext_stack_2->SetBinContent(20,2.028585);
   hext_stack_2->SetBinContent(21,2.345802);
   hext_stack_2->SetBinContent(22,1.78639);
   hext_stack_2->SetBinContent(23,2.752401);
   hext_stack_2->SetBinContent(24,2.028585);
   hext_stack_2->SetBinContent(25,1.137595);
   hext_stack_2->SetBinContent(26,14.83775);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(3,0.5750177);
   hext_stack_2->SetBinError(4,1.458663);
   hext_stack_2->SetBinError(5,2.701851);
   hext_stack_2->SetBinError(6,3.93372);
   hext_stack_2->SetBinError(7,2.865469);
   hext_stack_2->SetBinError(8,2.705382);
   hext_stack_2->SetBinError(9,3.890809);
   hext_stack_2->SetBinError(10,2.848674);
   hext_stack_2->SetBinError(11,3.30211);
   hext_stack_2->SetBinError(12,3.359779);
   hext_stack_2->SetBinError(13,3.153506);
   hext_stack_2->SetBinError(14,2.413364);
   hext_stack_2->SetBinError(15,2.31627);
   hext_stack_2->SetBinError(16,2.610169);
   hext_stack_2->SetBinError(17,1.721504);
   hext_stack_2->SetBinError(18,1.291697);
   hext_stack_2->SetBinError(19,1.749156);
   hext_stack_2->SetBinError(20,0.8315593);
   hext_stack_2->SetBinError(21,0.9989624);
   hext_stack_2->SetBinError(22,0.8039566);
   hext_stack_2->SetBinError(23,1.07854);
   hext_stack_2->SetBinError(24,0.8315593);
   hext_stack_2->SetBinError(25,0.6602113);
   hext_stack_2->SetBinError(26,2.779678);
   hext_stack_2->SetEntries(621);

   ci = 1491;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(5,1.321688);
   hdirt_stack_3->SetBinContent(6,2.529132);
   hdirt_stack_3->SetBinContent(7,2.322826);
   hdirt_stack_3->SetBinContent(8,2.565223);
   hdirt_stack_3->SetBinContent(9,0.5136149);
   hdirt_stack_3->SetBinContent(10,2.28393);
   hdirt_stack_3->SetBinContent(11,1.266927);
   hdirt_stack_3->SetBinContent(12,1.179425);
   hdirt_stack_3->SetBinContent(13,0.2620342);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinError(5,0.5492171);
   hdirt_stack_3->SetBinError(6,0.892137);
   hdirt_stack_3->SetBinError(7,0.8068634);
   hdirt_stack_3->SetBinError(8,1.118935);
   hdirt_stack_3->SetBinError(9,0.3632549);
   hdirt_stack_3->SetBinError(10,0.7293632);
   hdirt_stack_3->SetBinError(11,0.5702468);
   hdirt_stack_3->SetBinError(12,0.5462103);
   hdirt_stack_3->SetBinError(13,0.2620342);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetEntries(69);

   ci = 1492;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(3,0.2153807);
   houtFV_stack_4->SetBinContent(4,4.990473);
   houtFV_stack_4->SetBinContent(5,16.15179);
   houtFV_stack_4->SetBinContent(6,29.52636);
   houtFV_stack_4->SetBinContent(7,22.54229);
   houtFV_stack_4->SetBinContent(8,23.16189);
   houtFV_stack_4->SetBinContent(9,20.368);
   houtFV_stack_4->SetBinContent(10,16.07343);
   houtFV_stack_4->SetBinContent(11,15.18438);
   houtFV_stack_4->SetBinContent(12,12.99167);
   houtFV_stack_4->SetBinContent(13,14.15378);
   houtFV_stack_4->SetBinContent(14,8.555062);
   houtFV_stack_4->SetBinContent(15,7.864524);
   houtFV_stack_4->SetBinContent(16,3.999767);
   houtFV_stack_4->SetBinContent(17,3.712842);
   houtFV_stack_4->SetBinContent(18,3.856305);
   houtFV_stack_4->SetBinContent(19,3.253342);
   houtFV_stack_4->SetBinContent(20,1.465526);
   houtFV_stack_4->SetBinContent(21,1.853885);
   houtFV_stack_4->SetBinContent(22,1.608988);
   houtFV_stack_4->SetBinContent(23,0.785171);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,0.785171);
   houtFV_stack_4->SetBinContent(26,2.535931);
   houtFV_stack_4->SetBinError(3,0.2153807);
   houtFV_stack_4->SetBinError(4,1.102442);
   houtFV_stack_4->SetBinError(5,2.036513);
   houtFV_stack_4->SetBinError(6,2.734701);
   houtFV_stack_4->SetBinError(7,2.362111);
   houtFV_stack_4->SetBinError(8,2.389998);
   houtFV_stack_4->SetBinError(9,2.205816);
   houtFV_stack_4->SetBinError(10,1.967347);
   houtFV_stack_4->SetBinError(11,1.967066);
   houtFV_stack_4->SetBinError(12,1.798764);
   houtFV_stack_4->SetBinError(13,1.977355);
   houtFV_stack_4->SetBinError(14,1.476862);
   houtFV_stack_4->SetBinError(15,1.443002);
   houtFV_stack_4->SetBinError(16,1.03826);
   houtFV_stack_4->SetBinError(17,0.9612155);
   houtFV_stack_4->SetBinError(18,1.000479);
   houtFV_stack_4->SetBinError(19,0.9414268);
   houtFV_stack_4->SetBinError(20,0.6209405);
   houtFV_stack_4->SetBinError(21,0.6789509);
   houtFV_stack_4->SetBinError(22,0.6801404);
   houtFV_stack_4->SetBinError(23,0.3925882);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,0.3925882);
   houtFV_stack_4->SetBinError(26,0.8325131);
   houtFV_stack_4->SetEntries(931);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8637398);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.11584);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2896119);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3780289);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1494;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.273862);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.035212);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.715358);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.60783);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.004568);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.11484);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.10139);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5293703);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4422429);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4079068);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5199112);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2465393);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3014643);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3413269);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1495;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.823054);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.83165);
   hNCpi0inFVres_stack_7->SetBinContent(5,146.4666);
   hNCpi0inFVres_stack_7->SetBinContent(6,213.0632);
   hNCpi0inFVres_stack_7->SetBinContent(7,192.0815);
   hNCpi0inFVres_stack_7->SetBinContent(8,177.6341);
   hNCpi0inFVres_stack_7->SetBinContent(9,160.8926);
   hNCpi0inFVres_stack_7->SetBinContent(10,129.8622);
   hNCpi0inFVres_stack_7->SetBinContent(11,106.7633);
   hNCpi0inFVres_stack_7->SetBinContent(12,82.20438);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.11072);
   hNCpi0inFVres_stack_7->SetBinContent(14,44.42262);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.22799);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.98754);
   hNCpi0inFVres_stack_7->SetBinContent(17,20.96513);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.24151);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.995466);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.782644);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.299191);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.584666);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.124984);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.898208);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.687626);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.751781);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3085891);
   hNCpi0inFVres_stack_7->SetBinError(4,1.224728);
   hNCpi0inFVres_stack_7->SetBinError(5,3.948797);
   hNCpi0inFVres_stack_7->SetBinError(6,4.813474);
   hNCpi0inFVres_stack_7->SetBinError(7,4.604042);
   hNCpi0inFVres_stack_7->SetBinError(8,4.309568);
   hNCpi0inFVres_stack_7->SetBinError(9,4.119233);
   hNCpi0inFVres_stack_7->SetBinError(10,3.725031);
   hNCpi0inFVres_stack_7->SetBinError(11,3.394412);
   hNCpi0inFVres_stack_7->SetBinError(12,2.987716);
   hNCpi0inFVres_stack_7->SetBinError(13,2.542574);
   hNCpi0inFVres_stack_7->SetBinError(14,2.157509);
   hNCpi0inFVres_stack_7->SetBinError(15,2.061868);
   hNCpi0inFVres_stack_7->SetBinError(16,1.65873);
   hNCpi0inFVres_stack_7->SetBinError(17,1.569973);
   hNCpi0inFVres_stack_7->SetBinError(18,1.159232);
   hNCpi0inFVres_stack_7->SetBinError(19,1.010398);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9664598);
   hNCpi0inFVres_stack_7->SetBinError(21,0.714277);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6025527);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6395291);
   hNCpi0inFVres_stack_7->SetBinError(24,0.499485);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4453858);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9775437);
   hNCpi0inFVres_stack_7->SetEntries(26811);

   ci = 1496;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.338872);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.06474);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.02924);
   hNCpi0inFVdis_stack_8->SetBinContent(7,25.54654);
   hNCpi0inFVdis_stack_8->SetBinContent(8,31.03671);
   hNCpi0inFVdis_stack_8->SetBinContent(9,28.22014);
   hNCpi0inFVdis_stack_8->SetBinContent(10,26.19753);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.05346);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.5363);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.60563);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.37196);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.982256);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.922383);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.30892);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.304769);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.560005);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.722342);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.923939);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.244298);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.88243);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.226608);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.143572);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.363537);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3411366);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.342477);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.760057);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.671611);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.823557);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.753633);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.640193);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.514965);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.468478);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.283234);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.183789);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9890493);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9325387);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9581342);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.876086);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.670864);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6634749);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3368302);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4908382);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.500069);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3560243);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3330545);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5998546);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1497;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1498;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1499;
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
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(2,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(3,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(4,1.073786);
   hCCpi0inFV_stack_11->SetBinContent(5,8.249689);
   hCCpi0inFV_stack_11->SetBinContent(6,18.36744);
   hCCpi0inFV_stack_11->SetBinContent(7,28.76795);
   hCCpi0inFV_stack_11->SetBinContent(8,35.77682);
   hCCpi0inFV_stack_11->SetBinContent(9,43.65723);
   hCCpi0inFV_stack_11->SetBinContent(10,50.60577);
   hCCpi0inFV_stack_11->SetBinContent(11,47.35143);
   hCCpi0inFV_stack_11->SetBinContent(12,50.87878);
   hCCpi0inFV_stack_11->SetBinContent(13,46.04081);
   hCCpi0inFV_stack_11->SetBinContent(14,36.86359);
   hCCpi0inFV_stack_11->SetBinContent(15,34.57353);
   hCCpi0inFV_stack_11->SetBinContent(16,25.99537);
   hCCpi0inFV_stack_11->SetBinContent(17,24.74372);
   hCCpi0inFV_stack_11->SetBinContent(18,21.21916);
   hCCpi0inFV_stack_11->SetBinContent(19,13.84337);
   hCCpi0inFV_stack_11->SetBinContent(20,15.67936);
   hCCpi0inFV_stack_11->SetBinContent(21,10.87696);
   hCCpi0inFV_stack_11->SetBinContent(22,9.471822);
   hCCpi0inFV_stack_11->SetBinContent(23,8.157464);
   hCCpi0inFV_stack_11->SetBinContent(24,4.693038);
   hCCpi0inFV_stack_11->SetBinContent(25,4.638094);
   hCCpi0inFV_stack_11->SetBinContent(26,24.13005);
   hCCpi0inFV_stack_11->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(2,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(3,0.48078);
   hCCpi0inFV_stack_11->SetBinError(4,0.5557297);
   hCCpi0inFV_stack_11->SetBinError(5,1.472371);
   hCCpi0inFV_stack_11->SetBinError(6,2.204356);
   hCCpi0inFV_stack_11->SetBinError(7,2.712252);
   hCCpi0inFV_stack_11->SetBinError(8,3.033671);
   hCCpi0inFV_stack_11->SetBinError(9,3.323275);
   hCCpi0inFV_stack_11->SetBinError(10,3.526366);
   hCCpi0inFV_stack_11->SetBinError(11,3.38139);
   hCCpi0inFV_stack_11->SetBinError(12,3.511184);
   hCCpi0inFV_stack_11->SetBinError(13,3.39456);
   hCCpi0inFV_stack_11->SetBinError(14,3.064186);
   hCCpi0inFV_stack_11->SetBinError(15,2.986825);
   hCCpi0inFV_stack_11->SetBinError(16,2.577308);
   hCCpi0inFV_stack_11->SetBinError(17,2.481459);
   hCCpi0inFV_stack_11->SetBinError(18,2.347825);
   hCCpi0inFV_stack_11->SetBinError(19,1.890908);
   hCCpi0inFV_stack_11->SetBinError(20,2.017966);
   hCCpi0inFV_stack_11->SetBinError(21,1.647952);
   hCCpi0inFV_stack_11->SetBinError(22,1.595049);
   hCCpi0inFV_stack_11->SetBinError(23,1.482057);
   hCCpi0inFV_stack_11->SetBinError(24,1.056454);
   hCCpi0inFV_stack_11->SetBinError(25,1.074132);
   hCCpi0inFV_stack_11->SetBinError(26,2.453813);
   hCCpi0inFV_stack_11->SetEntries(2425);

   ci = 1500;
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
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(3,0.7336084);
   hNCinFV_stack_12->SetBinContent(4,1.26712);
   hNCinFV_stack_12->SetBinContent(5,5.033216);
   hNCinFV_stack_12->SetBinContent(6,11.76394);
   hNCinFV_stack_12->SetBinContent(7,13.43463);
   hNCinFV_stack_12->SetBinContent(8,14.66926);
   hNCinFV_stack_12->SetBinContent(9,14.51288);
   hNCinFV_stack_12->SetBinContent(10,14.99652);
   hNCinFV_stack_12->SetBinContent(11,12.74413);
   hNCinFV_stack_12->SetBinContent(12,13.34273);
   hNCinFV_stack_12->SetBinContent(13,9.146251);
   hNCinFV_stack_12->SetBinContent(14,9.419651);
   hNCinFV_stack_12->SetBinContent(15,8.155912);
   hNCinFV_stack_12->SetBinContent(16,4.839881);
   hNCinFV_stack_12->SetBinContent(17,4.53835);
   hNCinFV_stack_12->SetBinContent(18,2.699071);
   hNCinFV_stack_12->SetBinContent(19,2.587494);
   hNCinFV_stack_12->SetBinContent(20,1.707502);
   hNCinFV_stack_12->SetBinContent(21,1.608988);
   hNCinFV_stack_12->SetBinContent(22,3.896642);
   hNCinFV_stack_12->SetBinContent(23,1.518779);
   hNCinFV_stack_12->SetBinContent(24,0.6803553);
   hNCinFV_stack_12->SetBinContent(25,1.217248);
   hNCinFV_stack_12->SetBinContent(26,3.129458);
   hNCinFV_stack_12->SetBinError(3,0.4394482);
   hNCinFV_stack_12->SetBinError(4,0.5883944);
   hNCinFV_stack_12->SetBinError(5,1.109872);
   hNCinFV_stack_12->SetBinError(6,1.743821);
   hNCinFV_stack_12->SetBinError(7,1.862388);
   hNCinFV_stack_12->SetBinError(8,1.861284);
   hNCinFV_stack_12->SetBinError(9,1.892269);
   hNCinFV_stack_12->SetBinError(10,1.942531);
   hNCinFV_stack_12->SetBinError(11,1.798075);
   hNCinFV_stack_12->SetBinError(12,1.830976);
   hNCinFV_stack_12->SetBinError(13,1.495257);
   hNCinFV_stack_12->SetBinError(14,1.544197);
   hNCinFV_stack_12->SetBinError(15,1.428167);
   hNCinFV_stack_12->SetBinError(16,1.092906);
   hNCinFV_stack_12->SetBinError(17,1.110434);
   hNCinFV_stack_12->SetBinError(18,0.7611976);
   hNCinFV_stack_12->SetBinError(19,0.8087577);
   hNCinFV_stack_12->SetBinError(20,0.6525383);
   hNCinFV_stack_12->SetBinError(21,0.6801404);
   hNCinFV_stack_12->SetBinError(22,1.075156);
   hNCinFV_stack_12->SetBinError(23,0.5892709);
   hNCinFV_stack_12->SetBinError(24,0.4810838);
   hNCinFV_stack_12->SetBinError(25,0.6211758);
   hNCinFV_stack_12->SetBinError(26,0.9002741);
   hNCinFV_stack_12->SetEntries(671);

   ci = 1501;
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
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(4,1.471782);
   hnumuCCinFV_stack_13->SetBinContent(5,13.92397);
   hnumuCCinFV_stack_13->SetBinContent(6,26.1253);
   hnumuCCinFV_stack_13->SetBinContent(7,31.50807);
   hnumuCCinFV_stack_13->SetBinContent(8,33.38057);
   hnumuCCinFV_stack_13->SetBinContent(9,34.56684);
   hnumuCCinFV_stack_13->SetBinContent(10,31.81684);
   hnumuCCinFV_stack_13->SetBinContent(11,27.1053);
   hnumuCCinFV_stack_13->SetBinContent(12,28.17592);
   hnumuCCinFV_stack_13->SetBinContent(13,19.85105);
   hnumuCCinFV_stack_13->SetBinContent(14,15.9351);
   hnumuCCinFV_stack_13->SetBinContent(15,14.10329);
   hnumuCCinFV_stack_13->SetBinContent(16,12.82591);
   hnumuCCinFV_stack_13->SetBinContent(17,10.47718);
   hnumuCCinFV_stack_13->SetBinContent(18,6.136793);
   hnumuCCinFV_stack_13->SetBinContent(19,7.253428);
   hnumuCCinFV_stack_13->SetBinContent(20,3.092437);
   hnumuCCinFV_stack_13->SetBinContent(21,3.509572);
   hnumuCCinFV_stack_13->SetBinContent(22,1.917361);
   hnumuCCinFV_stack_13->SetBinContent(23,0.7927238);
   hnumuCCinFV_stack_13->SetBinContent(24,2.341937);
   hnumuCCinFV_stack_13->SetBinContent(25,0.8355629);
   hnumuCCinFV_stack_13->SetBinContent(26,8.08164);
   hnumuCCinFV_stack_13->SetBinError(2,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(3,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(4,0.6641497);
   hnumuCCinFV_stack_13->SetBinError(5,2.282087);
   hnumuCCinFV_stack_13->SetBinError(6,2.990343);
   hnumuCCinFV_stack_13->SetBinError(7,4.278058);
   hnumuCCinFV_stack_13->SetBinError(8,3.405293);
   hnumuCCinFV_stack_13->SetBinError(9,3.73091);
   hnumuCCinFV_stack_13->SetBinError(10,3.118468);
   hnumuCCinFV_stack_13->SetBinError(11,2.94839);
   hnumuCCinFV_stack_13->SetBinError(12,3.117317);
   hnumuCCinFV_stack_13->SetBinError(13,2.674616);
   hnumuCCinFV_stack_13->SetBinError(14,2.398248);
   hnumuCCinFV_stack_13->SetBinError(15,2.14172);
   hnumuCCinFV_stack_13->SetBinError(16,1.94996);
   hnumuCCinFV_stack_13->SetBinError(17,1.751669);
   hnumuCCinFV_stack_13->SetBinError(18,1.30625);
   hnumuCCinFV_stack_13->SetBinError(19,1.450465);
   hnumuCCinFV_stack_13->SetBinError(20,0.8834258);
   hnumuCCinFV_stack_13->SetBinError(21,0.9317191);
   hnumuCCinFV_stack_13->SetBinError(22,0.664198);
   hnumuCCinFV_stack_13->SetBinError(23,0.4688999);
   hnumuCCinFV_stack_13->SetBinError(24,0.7805765);
   hnumuCCinFV_stack_13->SetBinError(25,0.419905);
   hnumuCCinFV_stack_13->SetBinError(26,1.535087);
   hnumuCCinFV_stack_13->SetEntries(1290);

   ci = 1502;
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
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(5,0.6678257);
   hnueCCinFV_stack_14->SetBinContent(6,1.541049);
   hnueCCinFV_stack_14->SetBinContent(7,1.034645);
   hnueCCinFV_stack_14->SetBinContent(8,2.621269);
   hnueCCinFV_stack_14->SetBinContent(9,1.452257);
   hnueCCinFV_stack_14->SetBinContent(10,1.674289);
   hnueCCinFV_stack_14->SetBinContent(11,0.7302274);
   hnueCCinFV_stack_14->SetBinContent(12,3.281301);
   hnueCCinFV_stack_14->SetBinContent(13,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(14,1.164804);
   hnueCCinFV_stack_14->SetBinContent(15,0.989252);
   hnueCCinFV_stack_14->SetBinContent(16,0.6404051);
   hnueCCinFV_stack_14->SetBinContent(17,0.5948316);
   hnueCCinFV_stack_14->SetBinContent(18,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,1.744196);
   hnueCCinFV_stack_14->SetBinError(5,0.4856034);
   hnueCCinFV_stack_14->SetBinError(6,0.6437626);
   hnueCCinFV_stack_14->SetBinError(7,0.4653459);
   hnueCCinFV_stack_14->SetBinError(8,1.639163);
   hnueCCinFV_stack_14->SetBinError(9,0.6038576);
   hnueCCinFV_stack_14->SetBinError(10,0.6616115);
   hnueCCinFV_stack_14->SetBinError(11,0.4379386);
   hnueCCinFV_stack_14->SetBinError(12,1.141424);
   hnueCCinFV_stack_14->SetBinError(13,0.438694);
   hnueCCinFV_stack_14->SetBinError(14,0.5906321);
   hnueCCinFV_stack_14->SetBinError(15,0.5083978);
   hnueCCinFV_stack_14->SetBinError(16,0.3722443);
   hnueCCinFV_stack_14->SetBinError(17,0.3495737);
   hnueCCinFV_stack_14->SetBinError(18,0.3921167);
   hnueCCinFV_stack_14->SetBinError(19,0.2502081);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,1.20599);
   hnueCCinFV_stack_14->SetEntries(72);

   ci = 1503;
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
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__14->SetBinContent(0,0.1967154);
   hmcerror__14->SetBinContent(1,0.4623989);
   hmcerror__14->SetBinContent(2,0.3917402);
   hmcerror__14->SetBinContent(3,3.835807);
   hmcerror__14->SetBinContent(4,28.39329);
   hmcerror__14->SetBinContent(5,227.9667);
   hmcerror__14->SetBinContent(6,371.0278);
   hmcerror__14->SetBinContent(7,341.8168);
   hmcerror__14->SetBinContent(8,350.1209);
   hmcerror__14->SetBinContent(9,345.1658);
   hmcerror__14->SetBinContent(10,299.9016);
   hmcerror__14->SetBinContent(11,265.3548);
   hmcerror__14->SetBinContent(12,241.6249);
   hmcerror__14->SetBinContent(13,191.5958);
   hmcerror__14->SetBinContent(14,147.5723);
   hmcerror__14->SetBinContent(15,128.7871);
   hmcerror__14->SetBinContent(16,100.098);
   hmcerror__14->SetBinContent(17,82.5627);
   hmcerror__14->SetBinContent(18,60.1517);
   hmcerror__14->SetBinContent(19,50.03855);
   hmcerror__14->SetBinContent(20,37.5624);
   hmcerror__14->SetBinContent(21,28.03345);
   hmcerror__14->SetBinContent(22,25.29534);
   hmcerror__14->SetBinContent(23,19.60594);
   hmcerror__14->SetBinContent(24,14.67105);
   hmcerror__14->SetBinContent(25,12.6518);
   hmcerror__14->SetBinContent(26,68.71198);
   hmcerror__14->SetBinError(0,0.1967154);
   hmcerror__14->SetBinError(1,0.6720578);
   hmcerror__14->SetBinError(2,0.8408822);
   hmcerror__14->SetBinError(3,2.047756);
   hmcerror__14->SetBinError(4,8.589044);
   hmcerror__14->SetBinError(5,57.08538);
   hmcerror__14->SetBinError(6,93.98424);
   hmcerror__14->SetBinError(7,82.72468);
   hmcerror__14->SetBinError(8,88.33737);
   hmcerror__14->SetBinError(9,80.44469);
   hmcerror__14->SetBinError(10,76.0583);
   hmcerror__14->SetBinError(11,60.91303);
   hmcerror__14->SetBinError(12,58.69549);
   hmcerror__14->SetBinError(13,45.51733);
   hmcerror__14->SetBinError(14,38.59744);
   hmcerror__14->SetBinError(15,34.00354);
   hmcerror__14->SetBinError(16,25.02436);
   hmcerror__14->SetBinError(17,25.22256);
   hmcerror__14->SetBinError(18,18.07548);
   hmcerror__14->SetBinError(19,14.04417);
   hmcerror__14->SetBinError(20,13.81836);
   hmcerror__14->SetBinError(21,11.43772);
   hmcerror__14->SetBinError(22,11.90393);
   hmcerror__14->SetBinError(23,8.640323);
   hmcerror__14->SetBinError(24,7.231868);
   hmcerror__14->SetBinError(25,8.826584);
   hmcerror__14->SetBinError(26,26.41192);
   hmcerror__14->SetEntries(3396.741);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3017[25] = {
   1,
   0,
   1,
   17,
   152,
   277,
   284,
   290,
   285,
   239,
   203,
   182,
   140,
   107,
   88,
   65,
   55,
   51,
   29,
   21,
   25,
   19,
   16,
   16,
   10};
   Double_t _felx3017[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3017[25] = {
   1,
   0,
   1,
   4.2835,
   12.32883,
   16.64332,
   16.8523,
   17.02939,
   16.88194,
   15.45962,
   14.24781,
   13.49074,
   11.83216,
   10.34408,
   9.5036,
   8.1893,
   7.546,
   7.2725,
   5.5285,
   4.7354,
   5.1474,
   4.5151,
   4.1628,
   4.1628,
   3.34883};
   Double_t _fehx3017[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3017[25] = {
   1.35971,
   1.1478,
   1.35971,
   4.0673,
   12.32883,
   16.64332,
   16.8523,
   17.02939,
   16.88194,
   15.45962,
   14.24781,
   13.49074,
   11.83216,
   10.34408,
   9.3021,
   7.9866,
   7.3425,
   7.0686,
   5.3201,
   4.5229,
   4.9374,
   4.3011,
   3.9454,
   3.9454,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-275,1225);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(337.7323);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2573.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 79.5","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 262.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 213.8","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1456.0","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  279.4","F");

   ci = 1497;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1498;
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

   ci = 1499;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 542.6","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 154.5","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 327.5","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 18.6","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3018[25] = {
   1.453416,
   2.14653,
   0.5338527,
   0.3025026,
   0.250411,
   0.2533078,
   0.2420147,
   0.2523054,
   0.233061,
   0.2536109,
   0.2295531,
   0.2429198,
   0.2375696,
   0.2615494,
   0.2640291,
   0.2499987,
   0.3054958,
   0.3004982,
   0.280667,
   0.3678773,
   0.4080025,
   0.4705976,
   0.4406993,
   0.4929344,
   0.6976545};
   Double_t _fehx3018[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3018[25] = {
   1.453416,
   2.14653,
   0.5338527,
   0.3025026,
   0.250411,
   0.2533078,
   0.2420147,
   0.2523054,
   0.233061,
   0.2536109,
   0.2295531,
   0.2429198,
   0.2375696,
   0.2615494,
   0.2640291,
   0.2499987,
   0.3054958,
   0.3004982,
   0.280667,
   0.3678773,
   0.4080025,
   0.4705976,
   0.4406993,
   0.4929344,
   0.6976545};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-275,1225);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3019[25] = {
   1.263558,
   1.349812,
   0.3259492,
   0.2208278,
   0.2343929,
   0.2240446,
   0.2311559,
   0.2290307,
   0.2226483,
   0.2338931,
   0.2183905,
   0.2139974,
   0.217765,
   0.2270322,
   0.2152155,
   0.2169876,
   0.2184784,
   0.2198639,
   0.2130766,
   0.234229,
   0.2256905,
   0.2654365,
   0.2404856,
   0.2252466,
   0.2365223};
   Double_t _fehx3019[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3019[25] = {
   1.263558,
   1.349812,
   0.3259492,
   0.2208278,
   0.2343929,
   0.2240446,
   0.2311559,
   0.2290307,
   0.2226483,
   0.2338931,
   0.2183905,
   0.2139974,
   0.217765,
   0.2270322,
   0.2152155,
   0.2169876,
   0.2184784,
   0.2198639,
   0.2130766,
   0.234229,
   0.2256905,
   0.2654365,
   0.2404856,
   0.2252466,
   0.2365223};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-275,1225);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3020[25] = {
   2.162635,
   0,
   0.2607013,
   0.598733,
   0.666764,
   0.7465748,
   0.8308545,
   0.8282854,
   0.8256901,
   0.7969281,
   0.7650134,
   0.7532335,
   0.730705,
   0.7250683,
   0.6832982,
   0.6493638,
   0.6661604,
   0.8478563,
   0.5795531,
   0.5590696,
   0.8917919,
   0.7511265,
   0.8160794,
   1.090583,
   0.7904015};
   Double_t _felx3020[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3020[25] = {
   2.162635,
   0,
   0.2607013,
   0.1508631,
   0.0540817,
   0.04485733,
   0.04930214,
   0.04863859,
   0.04890966,
   0.05154899,
   0.05369341,
   0.05583338,
   0.06175585,
   0.070095,
   0.0737931,
   0.08181285,
   0.09139721,
   0.1209027,
   0.1104848,
   0.1260675,
   0.1836164,
   0.1784953,
   0.2123235,
   0.2837424,
   0.264692};
   Double_t _fehx3020[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3020[25] = {
   2.940557,
   2.930003,
   0.3544782,
   0.1432486,
   0.0540817,
   0.04485733,
   0.04930214,
   0.04863859,
   0.04890966,
   0.05154899,
   0.05369341,
   0.05583338,
   0.06175585,
   0.070095,
   0.0722285,
   0.07978783,
   0.08893241,
   0.1175129,
   0.10632,
   0.1204103,
   0.1761253,
   0.1700353,
   0.201235,
   0.2689241,
   0.2464393};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-275,1225);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(5.613511);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
