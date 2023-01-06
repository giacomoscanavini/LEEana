#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Oct 21 23:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-40,-2.88,293.3333,318.4674);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__16->SetBinContent(0,6.002784);
   hmc__16->SetBinContent(1,46.48783);
   hmc__16->SetBinContent(2,82.67734);
   hmc__16->SetBinContent(3,102.0263);
   hmc__16->SetBinContent(4,108.8969);
   hmc__16->SetBinContent(5,110.4778);
   hmc__16->SetBinContent(6,122.6582);
   hmc__16->SetBinContent(7,111.262);
   hmc__16->SetBinContent(8,117.7546);
   hmc__16->SetBinContent(9,122.3596);
   hmc__16->SetBinContent(10,121.1291);
   hmc__16->SetBinContent(11,110.9186);
   hmc__16->SetBinContent(12,115.4802);
   hmc__16->SetBinContent(13,108.2747);
   hmc__16->SetBinContent(14,121.076);
   hmc__16->SetBinContent(15,119.5397);
   hmc__16->SetBinContent(16,118.1228);
   hmc__16->SetBinContent(17,129.0717);
   hmc__16->SetBinContent(18,118.1742);
   hmc__16->SetBinContent(19,112.5329);
   hmc__16->SetBinContent(20,130.4051);
   hmc__16->SetBinContent(21,115.1023);
   hmc__16->SetBinContent(22,120.8302);
   hmc__16->SetBinContent(23,109.9725);
   hmc__16->SetBinContent(24,104.7779);
   hmc__16->SetBinContent(25,79.48114);
   hmc__16->SetBinContent(26,27.09166);
   hmc__16->SetBinContent(27,3.312249);
   hmc__16->SetBinError(0,1.155276);
   hmc__16->SetBinError(1,16.48381);
   hmc__16->SetBinError(2,23.62583);
   hmc__16->SetBinError(3,33.70403);
   hmc__16->SetBinError(4,32.31467);
   hmc__16->SetBinError(5,33.98519);
   hmc__16->SetBinError(6,33.72755);
   hmc__16->SetBinError(7,31.08675);
   hmc__16->SetBinError(8,33.88436);
   hmc__16->SetBinError(9,40.3693);
   hmc__16->SetBinError(10,32.73763);
   hmc__16->SetBinError(11,31.38467);
   hmc__16->SetBinError(12,31.37588);
   hmc__16->SetBinError(13,29.38049);
   hmc__16->SetBinError(14,33.49077);
   hmc__16->SetBinError(15,32.41945);
   hmc__16->SetBinError(16,32.20447);
   hmc__16->SetBinError(17,33.48352);
   hmc__16->SetBinError(18,35.99234);
   hmc__16->SetBinError(19,31.36317);
   hmc__16->SetBinError(20,33.22561);
   hmc__16->SetBinError(21,32.51495);
   hmc__16->SetBinError(22,31.01937);
   hmc__16->SetBinError(23,31.36406);
   hmc__16->SetBinError(24,27.65498);
   hmc__16->SetBinError(25,26.43856);
   hmc__16->SetBinError(26,13.101);
   hmc__16->SetBinError(27,3.522329);
   hmc__16->SetMinimum(-2.88);
   hmc__16->SetMaximum(302.4);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",26,0,260);
   hs6_stack_6->SetMinimum(-1.398517e-09);
   hs6_stack_6->SetMaximum(136.9254);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.409722);
   hbadmatch_stack_1->SetBinContent(2,1.914148);
   hbadmatch_stack_1->SetBinContent(3,1.201205);
   hbadmatch_stack_1->SetBinContent(4,1.17686);
   hbadmatch_stack_1->SetBinContent(5,1.323754);
   hbadmatch_stack_1->SetBinContent(6,2.909543);
   hbadmatch_stack_1->SetBinContent(7,1.948189);
   hbadmatch_stack_1->SetBinContent(8,1.713583);
   hbadmatch_stack_1->SetBinContent(9,1.202608);
   hbadmatch_stack_1->SetBinContent(10,4.468657);
   hbadmatch_stack_1->SetBinContent(11,2.267614);
   hbadmatch_stack_1->SetBinContent(12,2.681849);
   hbadmatch_stack_1->SetBinContent(13,1.376045);
   hbadmatch_stack_1->SetBinContent(14,3.188026);
   hbadmatch_stack_1->SetBinContent(15,1.848495);
   hbadmatch_stack_1->SetBinContent(16,3.823916);
   hbadmatch_stack_1->SetBinContent(17,3.192448);
   hbadmatch_stack_1->SetBinContent(18,2.959941);
   hbadmatch_stack_1->SetBinContent(19,3.736106);
   hbadmatch_stack_1->SetBinContent(20,3.392807);
   hbadmatch_stack_1->SetBinContent(21,3.615446);
   hbadmatch_stack_1->SetBinContent(22,2.038982);
   hbadmatch_stack_1->SetBinContent(23,2.151829);
   hbadmatch_stack_1->SetBinContent(24,3.392278);
   hbadmatch_stack_1->SetBinContent(25,3.8592);
   hbadmatch_stack_1->SetBinContent(26,0.8074455);
   hbadmatch_stack_1->SetBinError(1,1.722588);
   hbadmatch_stack_1->SetBinError(2,0.6960662);
   hbadmatch_stack_1->SetBinError(3,0.5701502);
   hbadmatch_stack_1->SetBinError(4,0.6241687);
   hbadmatch_stack_1->SetBinError(5,0.5560625);
   hbadmatch_stack_1->SetBinError(6,0.9545115);
   hbadmatch_stack_1->SetBinError(7,0.7020131);
   hbadmatch_stack_1->SetBinError(8,0.6060836);
   hbadmatch_stack_1->SetBinError(9,0.5215686);
   hbadmatch_stack_1->SetBinError(10,1.850921);
   hbadmatch_stack_1->SetBinError(11,0.7907045);
   hbadmatch_stack_1->SetBinError(12,0.9252426);
   hbadmatch_stack_1->SetBinError(13,0.5906411);
   hbadmatch_stack_1->SetBinError(14,1.025897);
   hbadmatch_stack_1->SetBinError(15,0.6185393);
   hbadmatch_stack_1->SetBinError(16,1.028975);
   hbadmatch_stack_1->SetBinError(17,0.8819164);
   hbadmatch_stack_1->SetBinError(18,0.9268885);
   hbadmatch_stack_1->SetBinError(19,0.9759957);
   hbadmatch_stack_1->SetBinError(20,1.040623);
   hbadmatch_stack_1->SetBinError(21,1.042818);
   hbadmatch_stack_1->SetBinError(22,0.6700616);
   hbadmatch_stack_1->SetBinError(23,0.7945205);
   hbadmatch_stack_1->SetBinError(24,1.229308);
   hbadmatch_stack_1->SetBinError(25,1.067565);
   hbadmatch_stack_1->SetBinError(26,0.4451481);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,2.923985);
   hext_stack_2->SetBinContent(2,9.141014);
   hext_stack_2->SetBinContent(3,7.683431);
   hext_stack_2->SetBinContent(4,8.771955);
   hext_stack_2->SetBinContent(5,10.36081);
   hext_stack_2->SetBinContent(6,13.71892);
   hext_stack_2->SetBinContent(7,8.264384);
   hext_stack_2->SetBinContent(8,8.58601);
   hext_stack_2->SetBinContent(9,6.496764);
   hext_stack_2->SetBinContent(10,11.57784);
   hext_stack_2->SetBinContent(11,8.007828);
   hext_stack_2->SetBinContent(12,12.54662);
   hext_stack_2->SetBinContent(13,8.884457);
   hext_stack_2->SetBinContent(14,11.15965);
   hext_stack_2->SetBinContent(15,13.65826);
   hext_stack_2->SetBinContent(16,11.65563);
   hext_stack_2->SetBinContent(17,13.84862);
   hext_stack_2->SetBinContent(18,10.63337);
   hext_stack_2->SetBinContent(19,7.380575);
   hext_stack_2->SetBinContent(20,21.50768);
   hext_stack_2->SetBinContent(21,10.78618);
   hext_stack_2->SetBinContent(22,18.4293);
   hext_stack_2->SetBinContent(23,15.86001);
   hext_stack_2->SetBinContent(24,15.66972);
   hext_stack_2->SetBinContent(25,9.552021);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(1,1.040301);
   hext_stack_2->SetBinError(2,1.986595);
   hext_stack_2->SetBinError(3,1.88164);
   hext_stack_2->SetBinError(4,1.801853);
   hext_stack_2->SetBinError(5,2.10773);
   hext_stack_2->SetBinError(6,2.65018);
   hext_stack_2->SetBinError(7,1.813434);
   hext_stack_2->SetBinError(8,1.931347);
   hext_stack_2->SetBinError(9,1.541077);
   hext_stack_2->SetBinError(10,2.296697);
   hext_stack_2->SetBinError(11,1.909398);
   hext_stack_2->SetBinError(12,2.335679);
   hext_stack_2->SetBinError(13,2.074564);
   hext_stack_2->SetBinError(14,2.274989);
   hext_stack_2->SetBinError(15,2.521856);
   hext_stack_2->SetBinError(16,2.280304);
   hext_stack_2->SetBinError(17,2.451827);
   hext_stack_2->SetBinError(18,2.038213);
   hext_stack_2->SetBinError(19,1.682775);
   hext_stack_2->SetBinError(20,3.438366);
   hext_stack_2->SetBinError(21,2.083403);
   hext_stack_2->SetBinError(22,2.958382);
   hext_stack_2->SetBinError(23,2.96177);
   hext_stack_2->SetBinError(24,2.791053);
   hext_stack_2->SetBinError(25,2.060826);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.7222204);
   hdirt_stack_3->SetBinContent(2,1.834457);
   hdirt_stack_3->SetBinContent(3,2.893575);
   hdirt_stack_3->SetBinContent(4,2.360547);
   hdirt_stack_3->SetBinContent(5,1.532501);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.8457623);
   hdirt_stack_3->SetBinContent(8,1.340898);
   hdirt_stack_3->SetBinContent(9,1.882463);
   hdirt_stack_3->SetBinContent(10,0.9508715);
   hdirt_stack_3->SetBinContent(11,1.6355);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.8588142);
   hdirt_stack_3->SetBinContent(14,1.390309);
   hdirt_stack_3->SetBinContent(15,1.07113);
   hdirt_stack_3->SetBinContent(16,0.9523512);
   hdirt_stack_3->SetBinContent(17,0.8153751);
   hdirt_stack_3->SetBinContent(18,1.530947);
   hdirt_stack_3->SetBinContent(19,1.717339);
   hdirt_stack_3->SetBinContent(20,1.781033);
   hdirt_stack_3->SetBinContent(21,2.918321);
   hdirt_stack_3->SetBinContent(22,2.624463);
   hdirt_stack_3->SetBinContent(23,1.882007);
   hdirt_stack_3->SetBinContent(24,0.8357875);
   hdirt_stack_3->SetBinContent(25,1.645191);
   hdirt_stack_3->SetBinContent(26,0.5149939);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4476483);
   hdirt_stack_3->SetBinError(2,0.6863089);
   hdirt_stack_3->SetBinError(3,0.8840387);
   hdirt_stack_3->SetBinError(4,0.714432);
   hdirt_stack_3->SetBinError(5,0.6849406);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4516994);
   hdirt_stack_3->SetBinError(8,0.5902479);
   hdirt_stack_3->SetBinError(9,0.6932204);
   hdirt_stack_3->SetBinError(10,0.5633431);
   hdirt_stack_3->SetBinError(11,1.151203);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.4562172);
   hdirt_stack_3->SetBinError(14,0.6022451);
   hdirt_stack_3->SetBinError(15,0.5555408);
   hdirt_stack_3->SetBinError(16,0.4777447);
   hdirt_stack_3->SetBinError(17,0.3706094);
   hdirt_stack_3->SetBinError(18,0.6490876);
   hdirt_stack_3->SetBinError(19,0.7428089);
   hdirt_stack_3->SetBinError(20,0.6443707);
   hdirt_stack_3->SetBinError(21,1.080598);
   hdirt_stack_3->SetBinError(22,0.8887432);
   hdirt_stack_3->SetBinError(23,0.730541);
   hdirt_stack_3->SetBinError(24,0.4229826);
   hdirt_stack_3->SetBinError(25,0.7057255);
   hdirt_stack_3->SetBinError(26,0.303235);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,4.468621);
   houtFV_stack_4->SetBinContent(1,22.1179);
   houtFV_stack_4->SetBinContent(2,14.66845);
   houtFV_stack_4->SetBinContent(3,15.06902);
   houtFV_stack_4->SetBinContent(4,11.99143);
   houtFV_stack_4->SetBinContent(5,10.13248);
   houtFV_stack_4->SetBinContent(6,11.3594);
   houtFV_stack_4->SetBinContent(7,8.792299);
   houtFV_stack_4->SetBinContent(8,8.896297);
   houtFV_stack_4->SetBinContent(9,7.201574);
   houtFV_stack_4->SetBinContent(10,6.444962);
   houtFV_stack_4->SetBinContent(11,8.472364);
   houtFV_stack_4->SetBinContent(12,7.429974);
   houtFV_stack_4->SetBinContent(13,7.327479);
   houtFV_stack_4->SetBinContent(14,7.20035);
   houtFV_stack_4->SetBinContent(15,8.157418);
   houtFV_stack_4->SetBinContent(16,4.103255);
   houtFV_stack_4->SetBinContent(17,9.274935);
   houtFV_stack_4->SetBinContent(18,8.349384);
   houtFV_stack_4->SetBinContent(19,8.052683);
   houtFV_stack_4->SetBinContent(20,10.11122);
   houtFV_stack_4->SetBinContent(21,7.928528);
   houtFV_stack_4->SetBinContent(22,12.47736);
   houtFV_stack_4->SetBinContent(23,17.11542);
   houtFV_stack_4->SetBinContent(24,16.79236);
   houtFV_stack_4->SetBinContent(25,17.68762);
   houtFV_stack_4->SetBinContent(26,11.18454);
   houtFV_stack_4->SetBinContent(27,1.494899);
   houtFV_stack_4->SetBinError(0,1.009035);
   houtFV_stack_4->SetBinError(1,2.346911);
   houtFV_stack_4->SetBinError(2,1.883061);
   houtFV_stack_4->SetBinError(3,1.981877);
   houtFV_stack_4->SetBinError(4,1.659111);
   houtFV_stack_4->SetBinError(5,1.538734);
   houtFV_stack_4->SetBinError(6,1.751952);
   houtFV_stack_4->SetBinError(7,1.427657);
   houtFV_stack_4->SetBinError(8,1.567786);
   houtFV_stack_4->SetBinError(9,1.355647);
   houtFV_stack_4->SetBinError(10,1.203639);
   houtFV_stack_4->SetBinError(11,1.494197);
   houtFV_stack_4->SetBinError(12,1.326812);
   houtFV_stack_4->SetBinError(13,1.375392);
   houtFV_stack_4->SetBinError(14,1.3183);
   houtFV_stack_4->SetBinError(15,1.4098);
   houtFV_stack_4->SetBinError(16,0.9329294);
   houtFV_stack_4->SetBinError(17,1.553948);
   houtFV_stack_4->SetBinError(18,1.516192);
   houtFV_stack_4->SetBinError(19,1.380232);
   houtFV_stack_4->SetBinError(20,1.688368);
   houtFV_stack_4->SetBinError(21,1.437136);
   houtFV_stack_4->SetBinError(22,1.803556);
   houtFV_stack_4->SetBinError(23,2.144718);
   houtFV_stack_4->SetBinError(24,2.065659);
   houtFV_stack_4->SetBinError(25,2.082446);
   houtFV_stack_4->SetBinError(26,1.607963);
   houtFV_stack_4->SetBinError(27,0.6063433);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9065614);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.437816);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.542177);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.966249);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.341287);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.367662);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.213939);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.456972);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.906695);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.82992);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.454357);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.97649);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.256336);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.913517);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.610968);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.214175);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.84299);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.654456);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.825169);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.516439);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.765354);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.042718);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.173603);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.240858);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.533776);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.366877);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3054837);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7653302);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.676022);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5670726);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6009536);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8760243);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5506347);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.675837);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7119477);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6541386);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8332152);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6923925);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.053194);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8256142);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7016993);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7661011);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6533246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.015688);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8455081);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.77129);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6152259);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6739122);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7142245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8796973);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4252361);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2754121);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1145903);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06498046);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6952194);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.259059);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2940838);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2078504);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4512879);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.162664);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3950093);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1009275);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2194257);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5071623);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1838442);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.131122);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.364798);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1800347);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3171044);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1071548);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2734843);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2361552);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3211368);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4144286);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06001433);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04627183);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3881751);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1233798);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2217923);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1474623);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.233648);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05793279);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1644023);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07274482);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.09615666);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1772168);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09644469);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07005889);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1360834);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1144993);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1444717);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04722771);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.138747);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1144326);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1007955);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2423541);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.0151491);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.5715572);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.938002);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.26464);
   hNCpi0inFVres_stack_7->SetBinContent(3,34.84675);
   hNCpi0inFVres_stack_7->SetBinContent(4,43.37869);
   hNCpi0inFVres_stack_7->SetBinContent(5,45.20496);
   hNCpi0inFVres_stack_7->SetBinContent(6,48.3033);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.05809);
   hNCpi0inFVres_stack_7->SetBinContent(8,47.00961);
   hNCpi0inFVres_stack_7->SetBinContent(9,54.80515);
   hNCpi0inFVres_stack_7->SetBinContent(10,45.96867);
   hNCpi0inFVres_stack_7->SetBinContent(11,48.13441);
   hNCpi0inFVres_stack_7->SetBinContent(12,47.56773);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.0001);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.71499);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.01924);
   hNCpi0inFVres_stack_7->SetBinContent(16,49.38857);
   hNCpi0inFVres_stack_7->SetBinContent(17,46.53493);
   hNCpi0inFVres_stack_7->SetBinContent(18,46.55484);
   hNCpi0inFVres_stack_7->SetBinContent(19,45.02969);
   hNCpi0inFVres_stack_7->SetBinContent(20,40.75354);
   hNCpi0inFVres_stack_7->SetBinContent(21,43.02899);
   hNCpi0inFVres_stack_7->SetBinContent(22,42.0362);
   hNCpi0inFVres_stack_7->SetBinContent(23,34.94829);
   hNCpi0inFVres_stack_7->SetBinContent(24,28.83143);
   hNCpi0inFVres_stack_7->SetBinContent(25,16.82226);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.723202);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3622839);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2402144);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9700432);
   hNCpi0inFVres_stack_7->SetBinError(2,1.74689);
   hNCpi0inFVres_stack_7->SetBinError(3,1.996933);
   hNCpi0inFVres_stack_7->SetBinError(4,2.319622);
   hNCpi0inFVres_stack_7->SetBinError(5,2.279122);
   hNCpi0inFVres_stack_7->SetBinError(6,2.418342);
   hNCpi0inFVres_stack_7->SetBinError(7,2.455941);
   hNCpi0inFVres_stack_7->SetBinError(8,2.213734);
   hNCpi0inFVres_stack_7->SetBinError(9,2.754343);
   hNCpi0inFVres_stack_7->SetBinError(10,2.374738);
   hNCpi0inFVres_stack_7->SetBinError(11,2.33936);
   hNCpi0inFVres_stack_7->SetBinError(12,2.355772);
   hNCpi0inFVres_stack_7->SetBinError(13,2.140698);
   hNCpi0inFVres_stack_7->SetBinError(14,2.425273);
   hNCpi0inFVres_stack_7->SetBinError(15,2.405055);
   hNCpi0inFVres_stack_7->SetBinError(16,2.582439);
   hNCpi0inFVres_stack_7->SetBinError(17,2.346656);
   hNCpi0inFVres_stack_7->SetBinError(18,2.40167);
   hNCpi0inFVres_stack_7->SetBinError(19,2.338706);
   hNCpi0inFVres_stack_7->SetBinError(20,2.191259);
   hNCpi0inFVres_stack_7->SetBinError(21,2.162546);
   hNCpi0inFVres_stack_7->SetBinError(22,2.336866);
   hNCpi0inFVres_stack_7->SetBinError(23,2.086593);
   hNCpi0inFVres_stack_7->SetBinError(24,1.716158);
   hNCpi0inFVres_stack_7->SetBinError(25,1.331992);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5875913);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1082878);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2958449);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.315462);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.970757);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.272357);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.736208);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.624786);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.86067);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.874013);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.775483);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.04897);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.121291);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.223856);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.727731);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.976269);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.368183);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.713439);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.698417);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.909264);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.298117);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.425244);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.862701);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.15335);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.183064);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.979361);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.859604);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.632738);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.7040429);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1509363);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2958449);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6049725);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7535514);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8197065);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.080087);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.120741);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.237044);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.02703);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.082687);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.142532);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8771441);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.066322);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9779838);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.095727);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.028248);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.07396);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.033832);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.102324);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.04183);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9651049);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.048021);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.130633);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9446206);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9176512);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7484647);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5944725);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1623153);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1065622);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1040807);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07538465);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1290437);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,4.494632);
   hCCpi0inFV_stack_10->SetBinContent(2,10.28283);
   hCCpi0inFV_stack_10->SetBinContent(3,14.07803);
   hCCpi0inFV_stack_10->SetBinContent(4,13.16062);
   hCCpi0inFV_stack_10->SetBinContent(5,16.27701);
   hCCpi0inFV_stack_10->SetBinContent(6,13.87963);
   hCCpi0inFV_stack_10->SetBinContent(7,16.01367);
   hCCpi0inFV_stack_10->SetBinContent(8,16.80899);
   hCCpi0inFV_stack_10->SetBinContent(9,19.28997);
   hCCpi0inFV_stack_10->SetBinContent(10,19.29951);
   hCCpi0inFV_stack_10->SetBinContent(11,13.45599);
   hCCpi0inFV_stack_10->SetBinContent(12,17.27844);
   hCCpi0inFV_stack_10->SetBinContent(13,13.55067);
   hCCpi0inFV_stack_10->SetBinContent(14,19.29968);
   hCCpi0inFV_stack_10->SetBinContent(15,18.21112);
   hCCpi0inFV_stack_10->SetBinContent(16,14.01142);
   hCCpi0inFV_stack_10->SetBinContent(17,19.54982);
   hCCpi0inFV_stack_10->SetBinContent(18,16.70695);
   hCCpi0inFV_stack_10->SetBinContent(19,15.57956);
   hCCpi0inFV_stack_10->SetBinContent(20,18.42265);
   hCCpi0inFV_stack_10->SetBinContent(21,16.25294);
   hCCpi0inFV_stack_10->SetBinContent(22,17.97285);
   hCCpi0inFV_stack_10->SetBinContent(23,12.3064);
   hCCpi0inFV_stack_10->SetBinContent(24,17.30216);
   hCCpi0inFV_stack_10->SetBinContent(25,13.27125);
   hCCpi0inFV_stack_10->SetBinContent(26,4.50289);
   hCCpi0inFV_stack_10->SetBinContent(27,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.037659);
   hCCpi0inFV_stack_10->SetBinError(2,1.520411);
   hCCpi0inFV_stack_10->SetBinError(3,1.883149);
   hCCpi0inFV_stack_10->SetBinError(4,1.766666);
   hCCpi0inFV_stack_10->SetBinError(5,1.997027);
   hCCpi0inFV_stack_10->SetBinError(6,1.87267);
   hCCpi0inFV_stack_10->SetBinError(7,2.029597);
   hCCpi0inFV_stack_10->SetBinError(8,2.068179);
   hCCpi0inFV_stack_10->SetBinError(9,2.23788);
   hCCpi0inFV_stack_10->SetBinError(10,2.193958);
   hCCpi0inFV_stack_10->SetBinError(11,1.832829);
   hCCpi0inFV_stack_10->SetBinError(12,2.127384);
   hCCpi0inFV_stack_10->SetBinError(13,1.788066);
   hCCpi0inFV_stack_10->SetBinError(14,2.176433);
   hCCpi0inFV_stack_10->SetBinError(15,2.167322);
   hCCpi0inFV_stack_10->SetBinError(16,1.855224);
   hCCpi0inFV_stack_10->SetBinError(17,2.176612);
   hCCpi0inFV_stack_10->SetBinError(18,2.038965);
   hCCpi0inFV_stack_10->SetBinError(19,1.952093);
   hCCpi0inFV_stack_10->SetBinError(20,2.196646);
   hCCpi0inFV_stack_10->SetBinError(21,2.009592);
   hCCpi0inFV_stack_10->SetBinError(22,2.108295);
   hCCpi0inFV_stack_10->SetBinError(23,1.691436);
   hCCpi0inFV_stack_10->SetBinError(24,2.067717);
   hCCpi0inFV_stack_10->SetBinError(25,1.89999);
   hCCpi0inFV_stack_10->SetBinError(26,1.069134);
   hCCpi0inFV_stack_10->SetBinError(27,0.3401776);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1298672);
   hNCinFV_stack_11->SetBinContent(1,1.877551);
   hNCinFV_stack_11->SetBinContent(2,6.058553);
   hNCinFV_stack_11->SetBinContent(3,7.185879);
   hNCinFV_stack_11->SetBinContent(4,8.004507);
   hNCinFV_stack_11->SetBinContent(5,7.083622);
   hNCinFV_stack_11->SetBinContent(6,8.277172);
   hNCinFV_stack_11->SetBinContent(7,8.677272);
   hNCinFV_stack_11->SetBinContent(8,10.80377);
   hNCinFV_stack_11->SetBinContent(9,10.04383);
   hNCinFV_stack_11->SetBinContent(10,10.21128);
   hNCinFV_stack_11->SetBinContent(11,9.495991);
   hNCinFV_stack_11->SetBinContent(12,6.928059);
   hNCinFV_stack_11->SetBinContent(13,6.781063);
   hNCinFV_stack_11->SetBinContent(14,6.431305);
   hNCinFV_stack_11->SetBinContent(15,7.496797);
   hNCinFV_stack_11->SetBinContent(16,11.21378);
   hNCinFV_stack_11->SetBinContent(17,8.751181);
   hNCinFV_stack_11->SetBinContent(18,8.123151);
   hNCinFV_stack_11->SetBinContent(19,10.0001);
   hNCinFV_stack_11->SetBinContent(20,9.769878);
   hNCinFV_stack_11->SetBinContent(21,7.893711);
   hNCinFV_stack_11->SetBinContent(22,6.733027);
   hNCinFV_stack_11->SetBinContent(23,7.597735);
   hNCinFV_stack_11->SetBinContent(24,6.400028);
   hNCinFV_stack_11->SetBinContent(25,4.357319);
   hNCinFV_stack_11->SetBinContent(26,0.8753801);
   hNCinFV_stack_11->SetBinContent(27,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1298672);
   hNCinFV_stack_11->SetBinError(1,0.6565366);
   hNCinFV_stack_11->SetBinError(2,1.260278);
   hNCinFV_stack_11->SetBinError(3,1.328938);
   hNCinFV_stack_11->SetBinError(4,1.503442);
   hNCinFV_stack_11->SetBinError(5,1.250343);
   hNCinFV_stack_11->SetBinError(6,1.637639);
   hNCinFV_stack_11->SetBinError(7,1.591879);
   hNCinFV_stack_11->SetBinError(8,1.726633);
   hNCinFV_stack_11->SetBinError(9,1.913545);
   hNCinFV_stack_11->SetBinError(10,1.726873);
   hNCinFV_stack_11->SetBinError(11,1.66829);
   hNCinFV_stack_11->SetBinError(12,1.324237);
   hNCinFV_stack_11->SetBinError(13,1.405771);
   hNCinFV_stack_11->SetBinError(14,1.205013);
   hNCinFV_stack_11->SetBinError(15,1.368323);
   hNCinFV_stack_11->SetBinError(16,1.836196);
   hNCinFV_stack_11->SetBinError(17,1.477367);
   hNCinFV_stack_11->SetBinError(18,1.677865);
   hNCinFV_stack_11->SetBinError(19,1.643977);
   hNCinFV_stack_11->SetBinError(20,1.478386);
   hNCinFV_stack_11->SetBinError(21,1.487324);
   hNCinFV_stack_11->SetBinError(22,1.65675);
   hNCinFV_stack_11->SetBinError(23,1.470931);
   hNCinFV_stack_11->SetBinError(24,1.177937);
   hNCinFV_stack_11->SetBinError(25,1.08714);
   hNCinFV_stack_11->SetBinError(26,0.5191111);
   hNCinFV_stack_11->SetBinError(27,0.1950249);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,0.7817899);
   hnumuCCinFV_stack_12->SetBinContent(2,3.566498);
   hnumuCCinFV_stack_12->SetBinContent(3,8.634911);
   hnumuCCinFV_stack_12->SetBinContent(4,4.843642);
   hnumuCCinFV_stack_12->SetBinContent(5,5.928411);
   hnumuCCinFV_stack_12->SetBinContent(6,6.029114);
   hnumuCCinFV_stack_12->SetBinContent(7,4.57765);
   hnumuCCinFV_stack_12->SetBinContent(8,6.567389);
   hnumuCCinFV_stack_12->SetBinContent(9,4.646547);
   hnumuCCinFV_stack_12->SetBinContent(10,8.668396);
   hnumuCCinFV_stack_12->SetBinContent(11,5.884569);
   hnumuCCinFV_stack_12->SetBinContent(12,8.354436);
   hnumuCCinFV_stack_12->SetBinContent(13,5.716429);
   hnumuCCinFV_stack_12->SetBinContent(14,8.386084);
   hnumuCCinFV_stack_12->SetBinContent(15,7.331906);
   hnumuCCinFV_stack_12->SetBinContent(16,9.040939);
   hnumuCCinFV_stack_12->SetBinContent(17,10.60106);
   hnumuCCinFV_stack_12->SetBinContent(18,7.069535);
   hnumuCCinFV_stack_12->SetBinContent(19,8.612646);
   hnumuCCinFV_stack_12->SetBinContent(20,8.641731);
   hnumuCCinFV_stack_12->SetBinContent(21,7.374397);
   hnumuCCinFV_stack_12->SetBinContent(22,5.494628);
   hnumuCCinFV_stack_12->SetBinContent(23,7.151659);
   hnumuCCinFV_stack_12->SetBinContent(24,4.953498);
   hnumuCCinFV_stack_12->SetBinContent(25,6.689285);
   hnumuCCinFV_stack_12->SetBinContent(26,3.470045);
   hnumuCCinFV_stack_12->SetBinError(1,0.3908977);
   hnumuCCinFV_stack_12->SetBinError(2,0.9484507);
   hnumuCCinFV_stack_12->SetBinError(3,2.054317);
   hnumuCCinFV_stack_12->SetBinError(4,1.244086);
   hnumuCCinFV_stack_12->SetBinError(5,1.272232);
   hnumuCCinFV_stack_12->SetBinError(6,1.271978);
   hnumuCCinFV_stack_12->SetBinError(7,1.199543);
   hnumuCCinFV_stack_12->SetBinError(8,1.522439);
   hnumuCCinFV_stack_12->SetBinError(9,1.075673);
   hnumuCCinFV_stack_12->SetBinError(10,1.525877);
   hnumuCCinFV_stack_12->SetBinError(11,1.2792);
   hnumuCCinFV_stack_12->SetBinError(12,2.018356);
   hnumuCCinFV_stack_12->SetBinError(13,1.285019);
   hnumuCCinFV_stack_12->SetBinError(14,1.636153);
   hnumuCCinFV_stack_12->SetBinError(15,1.404904);
   hnumuCCinFV_stack_12->SetBinError(16,1.638528);
   hnumuCCinFV_stack_12->SetBinError(17,1.822708);
   hnumuCCinFV_stack_12->SetBinError(18,1.616304);
   hnumuCCinFV_stack_12->SetBinError(19,1.675021);
   hnumuCCinFV_stack_12->SetBinError(20,1.699355);
   hnumuCCinFV_stack_12->SetBinError(21,1.442893);
   hnumuCCinFV_stack_12->SetBinError(22,1.212769);
   hnumuCCinFV_stack_12->SetBinError(23,1.402606);
   hnumuCCinFV_stack_12->SetBinError(24,1.152021);
   hnumuCCinFV_stack_12->SetBinError(25,1.769552);
   hnumuCCinFV_stack_12->SetBinError(26,1.385665);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(4,1.795259);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,1.082886);
   hnueCCinFV_stack_13->SetBinContent(7,0.7888809);
   hnueCCinFV_stack_13->SetBinContent(8,2.344344);
   hnueCCinFV_stack_13->SetBinContent(9,2.672333);
   hnueCCinFV_stack_13->SetBinContent(10,1.088653);
   hnueCCinFV_stack_13->SetBinContent(11,0.7851874);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinContent(13,3.039896);
   hnueCCinFV_stack_13->SetBinContent(14,0.8401043);
   hnueCCinFV_stack_13->SetBinContent(15,1.28978);
   hnueCCinFV_stack_13->SetBinContent(16,0.6556042);
   hnueCCinFV_stack_13->SetBinContent(17,2.571053);
   hnueCCinFV_stack_13->SetBinContent(18,0.976422);
   hnueCCinFV_stack_13->SetBinContent(19,1.066627);
   hnueCCinFV_stack_13->SetBinContent(20,2.354626);
   hnueCCinFV_stack_13->SetBinContent(21,1.148957);
   hnueCCinFV_stack_13->SetBinContent(22,0.4394275);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(25,0.409061);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.3921167);
   hnueCCinFV_stack_13->SetBinError(4,1.329192);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.5746241);
   hnueCCinFV_stack_13->SetBinError(7,0.4244012);
   hnueCCinFV_stack_13->SetBinError(8,0.9811861);
   hnueCCinFV_stack_13->SetBinError(9,1.067853);
   hnueCCinFV_stack_13->SetBinError(10,0.5547245);
   hnueCCinFV_stack_13->SetBinError(11,0.3925882);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
   hnueCCinFV_stack_13->SetBinError(13,1.371918);
   hnueCCinFV_stack_13->SetBinError(14,0.4210972);
   hnueCCinFV_stack_13->SetBinError(15,0.6013122);
   hnueCCinFV_stack_13->SetBinError(16,0.3825648);
   hnueCCinFV_stack_13->SetBinError(17,1.594502);
   hnueCCinFV_stack_13->SetBinError(18,0.6141242);
   hnueCCinFV_stack_13->SetBinError(19,0.8698897);
   hnueCCinFV_stack_13->SetBinError(20,0.8546649);
   hnueCCinFV_stack_13->SetBinError(21,0.5288592);
   hnueCCinFV_stack_13->SetBinError(22,0.3124703);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
   hnueCCinFV_stack_13->SetBinError(25,0.409061);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__17->SetBinContent(0,6.002784);
   hmcerror__17->SetBinContent(1,46.48783);
   hmcerror__17->SetBinContent(2,82.67734);
   hmcerror__17->SetBinContent(3,102.0263);
   hmcerror__17->SetBinContent(4,108.8969);
   hmcerror__17->SetBinContent(5,110.4778);
   hmcerror__17->SetBinContent(6,122.6582);
   hmcerror__17->SetBinContent(7,111.262);
   hmcerror__17->SetBinContent(8,117.7546);
   hmcerror__17->SetBinContent(9,122.3596);
   hmcerror__17->SetBinContent(10,121.1291);
   hmcerror__17->SetBinContent(11,110.9186);
   hmcerror__17->SetBinContent(12,115.4802);
   hmcerror__17->SetBinContent(13,108.2747);
   hmcerror__17->SetBinContent(14,121.076);
   hmcerror__17->SetBinContent(15,119.5397);
   hmcerror__17->SetBinContent(16,118.1228);
   hmcerror__17->SetBinContent(17,129.0717);
   hmcerror__17->SetBinContent(18,118.1742);
   hmcerror__17->SetBinContent(19,112.5329);
   hmcerror__17->SetBinContent(20,130.4051);
   hmcerror__17->SetBinContent(21,115.1023);
   hmcerror__17->SetBinContent(22,120.8302);
   hmcerror__17->SetBinContent(23,109.9725);
   hmcerror__17->SetBinContent(24,104.7779);
   hmcerror__17->SetBinContent(25,79.48114);
   hmcerror__17->SetBinContent(26,27.09166);
   hmcerror__17->SetBinContent(27,3.312249);
   hmcerror__17->SetBinError(0,1.155276);
   hmcerror__17->SetBinError(1,16.48381);
   hmcerror__17->SetBinError(2,23.62583);
   hmcerror__17->SetBinError(3,33.70403);
   hmcerror__17->SetBinError(4,32.31467);
   hmcerror__17->SetBinError(5,33.98519);
   hmcerror__17->SetBinError(6,33.72755);
   hmcerror__17->SetBinError(7,31.08675);
   hmcerror__17->SetBinError(8,33.88436);
   hmcerror__17->SetBinError(9,40.3693);
   hmcerror__17->SetBinError(10,32.73763);
   hmcerror__17->SetBinError(11,31.38467);
   hmcerror__17->SetBinError(12,31.37588);
   hmcerror__17->SetBinError(13,29.38049);
   hmcerror__17->SetBinError(14,33.49077);
   hmcerror__17->SetBinError(15,32.41945);
   hmcerror__17->SetBinError(16,32.20447);
   hmcerror__17->SetBinError(17,33.48352);
   hmcerror__17->SetBinError(18,35.99234);
   hmcerror__17->SetBinError(19,31.36317);
   hmcerror__17->SetBinError(20,33.22561);
   hmcerror__17->SetBinError(21,32.51495);
   hmcerror__17->SetBinError(22,31.01937);
   hmcerror__17->SetBinError(23,31.36406);
   hmcerror__17->SetBinError(24,27.65498);
   hmcerror__17->SetBinError(25,26.43856);
   hmcerror__17->SetBinError(26,13.101);
   hmcerror__17->SetBinError(27,3.522329);
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
   
   Double_t _fx3021[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3021[26] = {
   46,
   82,
   97,
   101,
   111,
   116,
   109,
   121,
   144,
   136,
   136,
   132,
   143,
   131,
   119,
   131,
   129,
   122,
   100,
   127,
   130,
   141,
   142,
   77,
   76,
   31};
   Double_t _felx3021[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3021[26] = {
   6.9153,
   9.1791,
   9.9704,
   10.04988,
   10.53565,
   10.77033,
   10.44031,
   11,
   12,
   11.6619,
   11.6619,
   11.48913,
   11.95826,
   11.44552,
   10.90871,
   11.44552,
   11.35782,
   11.04536,
   10.1212,
   11.26943,
   11.40175,
   11.87434,
   11.91638,
   8.8995,
   8.8425,
   5.7094};
   Double_t _fehx3021[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3021[26] = {
   6.7108,
   8.9774,
   9.769,
   10.04988,
   10.53565,
   10.77033,
   10.44031,
   11,
   12,
   11.6619,
   11.6619,
   11.48913,
   11.95826,
   11.44552,
   10.90871,
   11.44552,
   11.35782,
   11.04536,
   9.92,
   11.26943,
   11.40175,
   11.87434,
   11.91638,
   8.6976,
   8.6406,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,286);
   Graph_Graph3021->SetMinimum(12.21966);
   Graph_Graph3021->SetMaximum(169.0709);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.1/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2930.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 277.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 278.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1036.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 391.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3022[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3022[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3022[26] = {
   0.3545833,
   0.2857595,
   0.3303464,
   0.2967456,
   0.3076201,
   0.2749717,
   0.2794013,
   0.2877539,
   0.3299235,
   0.2702705,
   0.2829523,
   0.2716991,
   0.2713513,
   0.2766094,
   0.2712024,
   0.2726354,
   0.2594179,
   0.3045702,
   0.2787022,
   0.2547876,
   0.2824873,
   0.2567187,
   0.2851992,
   0.2639391,
   0.3326395,
   0.4835806};
   Double_t _fehx3022[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3022[26] = {
   0.3545833,
   0.2857595,
   0.3303464,
   0.2967456,
   0.3076201,
   0.2749717,
   0.2794013,
   0.2877539,
   0.3299235,
   0.2702705,
   0.2829523,
   0.2716991,
   0.2713513,
   0.2766094,
   0.2712024,
   0.2726354,
   0.2594179,
   0.3045702,
   0.2787022,
   0.2547876,
   0.2824873,
   0.2567187,
   0.2851992,
   0.2639391,
   0.3326395,
   0.4835806};
   grae = new TGraphAsymmErrors(26,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,286);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3023[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3023[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3023[26] = {
   0.2425416,
   0.2129824,
   0.220476,
   0.2245254,
   0.2262585,
   0.2148779,
   0.2288415,
   0.2331234,
   0.2210698,
   0.2104955,
   0.2379156,
   0.2250532,
   0.2219055,
   0.2174526,
   0.2163027,
   0.2137154,
   0.1967599,
   0.2184469,
   0.2202187,
   0.2000641,
   0.2227368,
   0.1888551,
   0.2012369,
   0.2059225,
   0.2010822,
   0.2783094};
   Double_t _fehx3023[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3023[26] = {
   0.2425416,
   0.2129824,
   0.220476,
   0.2245254,
   0.2262585,
   0.2148779,
   0.2288415,
   0.2331234,
   0.2210698,
   0.2104955,
   0.2379156,
   0.2250532,
   0.2219055,
   0.2174526,
   0.2163027,
   0.2137154,
   0.1967599,
   0.2184469,
   0.2202187,
   0.2000641,
   0.2227368,
   0.1888551,
   0.2012369,
   0.2059225,
   0.2010822,
   0.2783094};
   grae = new TGraphAsymmErrors(26,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,286);
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
   
   Double_t _fx3024[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3024[26] = {
   0.9895063,
   0.9918075,
   0.9507349,
   0.9274829,
   1.004727,
   0.9457171,
   0.9796697,
   1.02756,
   1.176859,
   1.122769,
   1.226124,
   1.143053,
   1.320715,
   1.081965,
   0.9954853,
   1.109015,
   0.9994444,
   1.032374,
   0.8886289,
   0.9738882,
   1.12943,
   1.166927,
   1.291232,
   0.734888,
   0.9562017,
   1.144263};
   Double_t _felx3024[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3024[26] = {
   0.1487551,
   0.1110232,
   0.09772379,
   0.092288,
   0.09536444,
   0.08780763,
   0.09383534,
   0.09341458,
   0.09807161,
   0.09627662,
   0.1051393,
   0.09948997,
   0.1104437,
   0.0945317,
   0.09125599,
   0.09689508,
   0.08799617,
   0.09346676,
   0.08993991,
   0.08641861,
   0.09905754,
   0.09827297,
   0.1083578,
   0.08493682,
   0.1112528,
   0.2107438};
   Double_t _fehx3024[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3024[26] = {
   0.1443561,
   0.1085836,
   0.09574979,
   0.092288,
   0.09536444,
   0.08780763,
   0.09383534,
   0.09341458,
   0.09807161,
   0.09627662,
   0.1051393,
   0.09948997,
   0.1104437,
   0.0945317,
   0.09125599,
   0.09689508,
   0.08799617,
   0.09346676,
   0.08815199,
   0.08641861,
   0.09905754,
   0.09827297,
   0.1083578,
   0.08300989,
   0.1087126,
   0.2030772};
   grae = new TGraphAsymmErrors(26,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,286);
   Graph_Graph3024->SetMinimum(0.5718304);
   Graph_Graph3024->SetMaximum(1.509279);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
