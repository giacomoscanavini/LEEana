#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Mar 13 17:56:38 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
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
   pad1->Range(-40,-2.43949,293.3333,269.7562);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__13->SetBinContent(0,0.3243973);
   hmc__13->SetBinContent(1,51.31017);
   hmc__13->SetBinContent(2,59.93139);
   hmc__13->SetBinContent(3,70.98473);
   hmc__13->SetBinContent(4,81.30515);
   hmc__13->SetBinContent(5,83.47308);
   hmc__13->SetBinContent(6,93.03242);
   hmc__13->SetBinContent(7,90.06876);
   hmc__13->SetBinContent(8,100.074);
   hmc__13->SetBinContent(9,97.06039);
   hmc__13->SetBinContent(10,102.5246);
   hmc__13->SetBinContent(11,106.9192);
   hmc__13->SetBinContent(12,104.9336);
   hmc__13->SetBinContent(13,111.6078);
   hmc__13->SetBinContent(14,109.8841);
   hmc__13->SetBinContent(15,98.30437);
   hmc__13->SetBinContent(16,103.1922);
   hmc__13->SetBinContent(17,112.9918);
   hmc__13->SetBinContent(18,114.2398);
   hmc__13->SetBinContent(19,118.6662);
   hmc__13->SetBinContent(20,113.8346);
   hmc__13->SetBinContent(21,117.2776);
   hmc__13->SetBinContent(22,111.8104);
   hmc__13->SetBinContent(23,121.9745);
   hmc__13->SetBinContent(24,97.41253);
   hmc__13->SetBinContent(25,77.99326);
   hmc__13->SetBinContent(26,45.04866);
   hmc__13->SetBinContent(27,0.8625581);
   hmc__13->SetBinError(0,0.3243973);
   hmc__13->SetBinError(1,18.15601);
   hmc__13->SetBinError(2,21.61896);
   hmc__13->SetBinError(3,22.30846);
   hmc__13->SetBinError(4,26.69095);
   hmc__13->SetBinError(5,25.29602);
   hmc__13->SetBinError(6,26.70753);
   hmc__13->SetBinError(7,28.49349);
   hmc__13->SetBinError(8,29.6988);
   hmc__13->SetBinError(9,28.95761);
   hmc__13->SetBinError(10,29.65207);
   hmc__13->SetBinError(11,31.37796);
   hmc__13->SetBinError(12,30.53216);
   hmc__13->SetBinError(13,38.22514);
   hmc__13->SetBinError(14,31.81017);
   hmc__13->SetBinError(15,31.02199);
   hmc__13->SetBinError(16,30.2955);
   hmc__13->SetBinError(17,30.66053);
   hmc__13->SetBinError(18,29.63756);
   hmc__13->SetBinError(19,31.49998);
   hmc__13->SetBinError(20,29.46433);
   hmc__13->SetBinError(21,38.96189);
   hmc__13->SetBinError(22,31.90514);
   hmc__13->SetBinError(23,36.87291);
   hmc__13->SetBinError(24,27.87028);
   hmc__13->SetBinError(25,23.3964);
   hmc__13->SetBinError(26,17.19811);
   hmc__13->SetBinError(27,18.66685);
   hmc__13->SetMinimum(-2.43949);
   hmc__13->SetMaximum(256.1464);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",26,0,260);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(128.0732);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.344287);
   hbadmatch_stack_1->SetBinContent(2,0.7336084);
   hbadmatch_stack_1->SetBinContent(3,1.538199);
   hbadmatch_stack_1->SetBinContent(4,0.439009);
   hbadmatch_stack_1->SetBinContent(5,0.9286332);
   hbadmatch_stack_1->SetBinContent(6,1.398697);
   hbadmatch_stack_1->SetBinContent(7,1.857266);
   hbadmatch_stack_1->SetBinContent(8,1.950252);
   hbadmatch_stack_1->SetBinContent(9,2.356644);
   hbadmatch_stack_1->SetBinContent(10,2.053982);
   hbadmatch_stack_1->SetBinContent(11,2.652202);
   hbadmatch_stack_1->SetBinContent(12,2.932221);
   hbadmatch_stack_1->SetBinContent(13,4.582746);
   hbadmatch_stack_1->SetBinContent(14,2.931273);
   hbadmatch_stack_1->SetBinContent(15,2.545434);
   hbadmatch_stack_1->SetBinContent(16,1.193927);
   hbadmatch_stack_1->SetBinContent(17,2.969906);
   hbadmatch_stack_1->SetBinContent(18,2.866099);
   hbadmatch_stack_1->SetBinContent(19,3.778002);
   hbadmatch_stack_1->SetBinContent(20,1.890977);
   hbadmatch_stack_1->SetBinContent(21,2.130044);
   hbadmatch_stack_1->SetBinContent(22,2.198123);
   hbadmatch_stack_1->SetBinContent(23,4.440919);
   hbadmatch_stack_1->SetBinContent(24,1.983715);
   hbadmatch_stack_1->SetBinContent(25,1.942783);
   hbadmatch_stack_1->SetBinContent(26,1.472569);
   hbadmatch_stack_1->SetBinError(1,0.8101654);
   hbadmatch_stack_1->SetBinError(2,0.4394482);
   hbadmatch_stack_1->SetBinError(3,0.5960948);
   hbadmatch_stack_1->SetBinError(4,0.3123507);
   hbadmatch_stack_1->SetBinError(5,0.48078);
   hbadmatch_stack_1->SetBinError(6,0.527364);
   hbadmatch_stack_1->SetBinError(7,0.6799255);
   hbadmatch_stack_1->SetBinError(8,0.7644365);
   hbadmatch_stack_1->SetBinError(9,0.934473);
   hbadmatch_stack_1->SetBinError(10,0.7078105);
   hbadmatch_stack_1->SetBinError(11,0.9050919);
   hbadmatch_stack_1->SetBinError(12,0.9500989);
   hbadmatch_stack_1->SetBinError(13,1.162756);
   hbadmatch_stack_1->SetBinError(14,0.8341861);
   hbadmatch_stack_1->SetBinError(15,0.8820549);
   hbadmatch_stack_1->SetBinError(16,0.5469364);
   hbadmatch_stack_1->SetBinError(17,0.8946105);
   hbadmatch_stack_1->SetBinError(18,0.9154528);
   hbadmatch_stack_1->SetBinError(19,1.399056);
   hbadmatch_stack_1->SetBinError(20,0.6902721);
   hbadmatch_stack_1->SetBinError(21,0.7248076);
   hbadmatch_stack_1->SetBinError(22,0.7443026);
   hbadmatch_stack_1->SetBinError(23,1.133149);
   hbadmatch_stack_1->SetBinError(24,0.6753626);
   hbadmatch_stack_1->SetBinError(25,0.6616806);
   hbadmatch_stack_1->SetBinError(26,0.623231);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(1,0.6487947);
   hext_stack_2->SetBinContent(2,2.103607);
   hext_stack_2->SetBinContent(3,2.517386);
   hext_stack_2->SetBinContent(4,4.132192);
   hext_stack_2->SetBinContent(5,2.752401);
   hext_stack_2->SetBinContent(6,4.06158);
   hext_stack_2->SetBinContent(7,3.725593);
   hext_stack_2->SetBinContent(8,2.352983);
   hext_stack_2->SetBinContent(9,5.262607);
   hext_stack_2->SetBinContent(10,5.89704);
   hext_stack_2->SetBinContent(11,4.620993);
   hext_stack_2->SetBinContent(12,5.180405);
   hext_stack_2->SetBinContent(13,4.93821);
   hext_stack_2->SetBinContent(14,3.394015);
   hext_stack_2->SetBinContent(15,5.262607);
   hext_stack_2->SetBinContent(16,4.45659);
   hext_stack_2->SetBinContent(17,7.28124);
   hext_stack_2->SetBinContent(18,7.772812);
   hext_stack_2->SetBinContent(19,5.993603);
   hext_stack_2->SetBinContent(20,7.041816);
   hext_stack_2->SetBinContent(21,7.2134);
   hext_stack_2->SetBinContent(22,4.703194);
   hext_stack_2->SetBinContent(23,11.14088);
   hext_stack_2->SetBinContent(24,7.544977);
   hext_stack_2->SetBinContent(25,5.765768);
   hext_stack_2->SetBinContent(26,4.93821);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(1,0.4587671);
   hext_stack_2->SetBinError(2,0.9761052);
   hext_stack_2->SetBinError(3,0.9575503);
   hext_stack_2->SetBinError(4,1.282292);
   hext_stack_2->SetBinError(5,1.07854);
   hext_stack_2->SetBinError(6,1.232114);
   hext_stack_2->SetBinError(7,1.216121);
   hext_stack_2->SetBinError(8,0.8925942);
   hext_stack_2->SetBinError(9,1.510415);
   hext_stack_2->SetBinError(10,1.701242);
   hext_stack_2->SetBinError(11,1.367364);
   hext_stack_2->SetBinError(12,1.49039);
   hext_stack_2->SetBinError(13,1.475167);
   hext_stack_2->SetBinError(14,1.254957);
   hext_stack_2->SetBinError(15,1.510415);
   hext_stack_2->SetBinError(16,1.322689);
   hext_stack_2->SetBinError(17,1.873598);
   hext_stack_2->SetBinError(18,1.843762);
   hext_stack_2->SetBinError(19,1.59747);
   hext_stack_2->SetBinError(20,1.76887);
   hext_stack_2->SetBinError(21,1.745817);
   hext_stack_2->SetBinError(22,1.389163);
   hext_stack_2->SetBinError(23,2.332993);
   hext_stack_2->SetBinError(24,1.718112);
   hext_stack_2->SetBinError(25,1.450642);
   hext_stack_2->SetBinError(26,1.475167);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.7798856);
   hdirt_stack_3->SetBinContent(4,0.5902398);
   hdirt_stack_3->SetBinContent(5,0.6566868);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.4854208);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.2605212);
   hdirt_stack_3->SetBinContent(13,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.2516114);
   hdirt_stack_3->SetBinContent(16,0.6030744);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5381771);
   hdirt_stack_3->SetBinContent(21,1.033342);
   hdirt_stack_3->SetBinContent(22,0.4950385);
   hdirt_stack_3->SetBinContent(23,0.8251487);
   hdirt_stack_3->SetBinContent(24,0.5700923);
   hdirt_stack_3->SetBinContent(25,0.140423);
   hdirt_stack_3->SetBinContent(26,0.2645861);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(3,0.4839582);
   hdirt_stack_3->SetBinError(4,0.4504401);
   hdirt_stack_3->SetBinError(5,0.3791383);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.3678436);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2605212);
   hdirt_stack_3->SetBinError(13,0.3652866);
   hdirt_stack_3->SetBinError(14,0.2516114);
   hdirt_stack_3->SetBinError(16,0.3509261);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.3267865);
   hdirt_stack_3->SetBinError(21,0.5438016);
   hdirt_stack_3->SetBinError(22,0.2933304);
   hdirt_stack_3->SetBinError(23,0.5179639);
   hdirt_stack_3->SetBinError(24,0.4373082);
   hdirt_stack_3->SetBinError(25,0.1380915);
   hdirt_stack_3->SetBinError(26,0.2645861);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(1,24.40104);
   houtFV_stack_4->SetBinContent(2,2.929362);
   houtFV_stack_4->SetBinContent(3,4.444601);
   houtFV_stack_4->SetBinContent(4,3.234274);
   houtFV_stack_4->SetBinContent(5,4.643166);
   houtFV_stack_4->SetBinContent(6,5.665353);
   houtFV_stack_4->SetBinContent(7,3.61715);
   houtFV_stack_4->SetBinContent(8,4.781557);
   houtFV_stack_4->SetBinContent(9,2.342597);
   houtFV_stack_4->SetBinContent(10,4.746483);
   houtFV_stack_4->SetBinContent(11,3.664661);
   houtFV_stack_4->SetBinContent(12,4.014373);
   houtFV_stack_4->SetBinContent(13,4.250384);
   houtFV_stack_4->SetBinContent(14,2.865872);
   houtFV_stack_4->SetBinContent(15,3.407825);
   houtFV_stack_4->SetBinContent(16,4.431471);
   houtFV_stack_4->SetBinContent(17,4.965256);
   houtFV_stack_4->SetBinContent(18,3.229399);
   houtFV_stack_4->SetBinContent(19,4.395329);
   houtFV_stack_4->SetBinContent(20,2.927671);
   houtFV_stack_4->SetBinContent(21,4.385804);
   houtFV_stack_4->SetBinContent(22,3.068698);
   houtFV_stack_4->SetBinContent(23,4.3849);
   houtFV_stack_4->SetBinContent(24,2.984305);
   houtFV_stack_4->SetBinContent(25,3.994151);
   houtFV_stack_4->SetBinContent(26,16.76189);
   houtFV_stack_4->SetBinContent(27,0.4425796);
   houtFV_stack_4->SetBinError(1,2.451637);
   houtFV_stack_4->SetBinError(2,0.8777653);
   houtFV_stack_4->SetBinError(3,1.020183);
   houtFV_stack_4->SetBinError(4,0.8562577);
   houtFV_stack_4->SetBinError(5,1.075057);
   houtFV_stack_4->SetBinError(6,1.183273);
   houtFV_stack_4->SetBinError(7,0.9577196);
   houtFV_stack_4->SetBinError(8,1.109407);
   houtFV_stack_4->SetBinError(9,0.8097566);
   houtFV_stack_4->SetBinError(10,1.105147);
   houtFV_stack_4->SetBinError(11,0.9819618);
   houtFV_stack_4->SetBinError(12,0.9409124);
   houtFV_stack_4->SetBinError(13,1.067911);
   houtFV_stack_4->SetBinError(14,0.8163009);
   houtFV_stack_4->SetBinError(15,0.9074904);
   houtFV_stack_4->SetBinError(16,1.124081);
   houtFV_stack_4->SetBinError(17,1.118721);
   houtFV_stack_4->SetBinError(18,0.943472);
   houtFV_stack_4->SetBinError(19,1.009276);
   houtFV_stack_4->SetBinError(20,0.877388);
   houtFV_stack_4->SetBinError(21,1.062111);
   houtFV_stack_4->SetBinError(22,0.841534);
   houtFV_stack_4->SetBinError(23,1.006979);
   houtFV_stack_4->SetBinError(24,0.8560416);
   houtFV_stack_4->SetBinError(25,1.013579);
   houtFV_stack_4->SetBinError(26,2.087451);
   houtFV_stack_4->SetBinError(27,0.4425796);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9060901);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6961718);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.125218);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3332495);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2155126);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1012383);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.200055);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.22959);
   hNCpi0inFVres_stack_7->SetBinContent(3,32.59429);
   hNCpi0inFVres_stack_7->SetBinContent(4,36.23161);
   hNCpi0inFVres_stack_7->SetBinContent(5,41.01284);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.45718);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.47077);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.10963);
   hNCpi0inFVres_stack_7->SetBinContent(9,45.57317);
   hNCpi0inFVres_stack_7->SetBinContent(10,46.06572);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.80746);
   hNCpi0inFVres_stack_7->SetBinContent(12,46.35353);
   hNCpi0inFVres_stack_7->SetBinContent(13,46.58822);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.70332);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.34902);
   hNCpi0inFVres_stack_7->SetBinContent(16,47.24103);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.00266);
   hNCpi0inFVres_stack_7->SetBinContent(18,45.38816);
   hNCpi0inFVres_stack_7->SetBinContent(19,48.04151);
   hNCpi0inFVres_stack_7->SetBinContent(20,44.91502);
   hNCpi0inFVres_stack_7->SetBinContent(21,50.12938);
   hNCpi0inFVres_stack_7->SetBinContent(22,48.98048);
   hNCpi0inFVres_stack_7->SetBinContent(23,41.63926);
   hNCpi0inFVres_stack_7->SetBinContent(24,36.14193);
   hNCpi0inFVres_stack_7->SetBinContent(25,26.7049);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.335403);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.153118);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9509984);
   hNCpi0inFVres_stack_7->SetBinError(2,1.669533);
   hNCpi0inFVres_stack_7->SetBinError(3,1.812764);
   hNCpi0inFVres_stack_7->SetBinError(4,1.91938);
   hNCpi0inFVres_stack_7->SetBinError(5,2.1142);
   hNCpi0inFVres_stack_7->SetBinError(6,2.237955);
   hNCpi0inFVres_stack_7->SetBinError(7,2.096684);
   hNCpi0inFVres_stack_7->SetBinError(8,2.306812);
   hNCpi0inFVres_stack_7->SetBinError(9,2.200202);
   hNCpi0inFVres_stack_7->SetBinError(10,2.165461);
   hNCpi0inFVres_stack_7->SetBinError(11,2.447853);
   hNCpi0inFVres_stack_7->SetBinError(12,2.183079);
   hNCpi0inFVres_stack_7->SetBinError(13,2.270145);
   hNCpi0inFVres_stack_7->SetBinError(14,2.365784);
   hNCpi0inFVres_stack_7->SetBinError(15,2.229192);
   hNCpi0inFVres_stack_7->SetBinError(16,2.230755);
   hNCpi0inFVres_stack_7->SetBinError(17,2.321344);
   hNCpi0inFVres_stack_7->SetBinError(18,2.183005);
   hNCpi0inFVres_stack_7->SetBinError(19,2.291688);
   hNCpi0inFVres_stack_7->SetBinError(20,2.166225);
   hNCpi0inFVres_stack_7->SetBinError(21,2.386151);
   hNCpi0inFVres_stack_7->SetBinError(22,2.324151);
   hNCpi0inFVres_stack_7->SetBinError(23,2.107623);
   hNCpi0inFVres_stack_7->SetBinError(24,1.912744);
   hNCpi0inFVres_stack_7->SetBinError(25,1.731221);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8705145);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1050124);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.701571);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.489091);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.64329);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.891748);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.566397);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.685734);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.087711);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.518997);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.768186);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.867088);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.578711);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.491593);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.342388);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.610411);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.001515);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.522742);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.502139);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.300295);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.184198);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.253695);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.173077);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.177812);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.563428);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.81909);
   hNCpi0inFVdis_stack_8->SetBinContent(25,6.889677);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.463426);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3556593);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6599944);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7362789);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9377418);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.797681);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9428809);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.933443);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9331995);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8735642);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9830302);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.044615);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9076515);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.01568);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8378589);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9006564);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.028059);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8808851);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.013155);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9281812);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.955863);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9550829);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.002858);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.022523);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8848165);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9361499);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3743209);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,6.790738);
   hCCpi0inFV_stack_10->SetBinContent(2,10.8046);
   hCCpi0inFV_stack_10->SetBinContent(3,11.9927);
   hCCpi0inFV_stack_10->SetBinContent(4,11.96459);
   hCCpi0inFV_stack_10->SetBinContent(5,11.77239);
   hCCpi0inFV_stack_10->SetBinContent(6,11.88843);
   hCCpi0inFV_stack_10->SetBinContent(7,11.1413);
   hCCpi0inFV_stack_10->SetBinContent(8,14.65644);
   hCCpi0inFV_stack_10->SetBinContent(9,12.65475);
   hCCpi0inFV_stack_10->SetBinContent(10,14.74824);
   hCCpi0inFV_stack_10->SetBinContent(11,10.5631);
   hCCpi0inFV_stack_10->SetBinContent(12,13.81144);
   hCCpi0inFV_stack_10->SetBinContent(13,14.41145);
   hCCpi0inFV_stack_10->SetBinContent(14,16.52597);
   hCCpi0inFV_stack_10->SetBinContent(15,11.82509);
   hCCpi0inFV_stack_10->SetBinContent(16,14.50326);
   hCCpi0inFV_stack_10->SetBinContent(17,15.21391);
   hCCpi0inFV_stack_10->SetBinContent(18,20.66388);
   hCCpi0inFV_stack_10->SetBinContent(19,17.00369);
   hCCpi0inFV_stack_10->SetBinContent(20,20.16945);
   hCCpi0inFV_stack_10->SetBinContent(21,17.28559);
   hCCpi0inFV_stack_10->SetBinContent(22,17.1929);
   hCCpi0inFV_stack_10->SetBinContent(23,19.83786);
   hCCpi0inFV_stack_10->SetBinContent(24,18.26043);
   hCCpi0inFV_stack_10->SetBinContent(25,13.38782);
   hCCpi0inFV_stack_10->SetBinContent(26,7.984049);
   hCCpi0inFV_stack_10->SetBinError(1,1.331697);
   hCCpi0inFV_stack_10->SetBinError(2,1.654822);
   hCCpi0inFV_stack_10->SetBinError(3,1.782888);
   hCCpi0inFV_stack_10->SetBinError(4,1.715946);
   hCCpi0inFV_stack_10->SetBinError(5,1.74477);
   hCCpi0inFV_stack_10->SetBinError(6,1.665207);
   hCCpi0inFV_stack_10->SetBinError(7,1.604526);
   hCCpi0inFV_stack_10->SetBinError(8,1.949349);
   hCCpi0inFV_stack_10->SetBinError(9,1.721992);
   hCCpi0inFV_stack_10->SetBinError(10,1.942606);
   hCCpi0inFV_stack_10->SetBinError(11,1.588982);
   hCCpi0inFV_stack_10->SetBinError(12,1.88804);
   hCCpi0inFV_stack_10->SetBinError(13,1.912936);
   hCCpi0inFV_stack_10->SetBinError(14,2.135757);
   hCCpi0inFV_stack_10->SetBinError(15,1.757989);
   hCCpi0inFV_stack_10->SetBinError(16,1.854436);
   hCCpi0inFV_stack_10->SetBinError(17,2.004863);
   hCCpi0inFV_stack_10->SetBinError(18,2.284084);
   hCCpi0inFV_stack_10->SetBinError(19,2.078822);
   hCCpi0inFV_stack_10->SetBinError(20,2.318272);
   hCCpi0inFV_stack_10->SetBinError(21,2.062414);
   hCCpi0inFV_stack_10->SetBinError(22,2.082124);
   hCCpi0inFV_stack_10->SetBinError(23,2.256784);
   hCCpi0inFV_stack_10->SetBinError(24,2.122636);
   hCCpi0inFV_stack_10->SetBinError(25,1.81921);
   hCCpi0inFV_stack_10->SetBinError(26,1.486641);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,2.486059);
   hNCinFV_stack_11->SetBinContent(2,6.982382);
   hNCinFV_stack_11->SetBinContent(3,5.80378);
   hNCinFV_stack_11->SetBinContent(4,8.127409);
   hNCinFV_stack_11->SetBinContent(5,6.984073);
   hNCinFV_stack_11->SetBinContent(6,7.769243);
   hNCinFV_stack_11->SetBinContent(7,7.822496);
   hNCinFV_stack_11->SetBinContent(8,9.958235);
   hNCinFV_stack_11->SetBinContent(9,9.339585);
   hNCinFV_stack_11->SetBinContent(10,7.964268);
   hNCinFV_stack_11->SetBinContent(11,6.360351);
   hNCinFV_stack_11->SetBinContent(12,8.596441);
   hNCinFV_stack_11->SetBinContent(13,10.82408);
   hNCinFV_stack_11->SetBinContent(14,9.079473);
   hNCinFV_stack_11->SetBinContent(15,6.693767);
   hNCinFV_stack_11->SetBinContent(16,8.742677);
   hNCinFV_stack_11->SetBinContent(17,8.999408);
   hNCinFV_stack_11->SetBinContent(18,8.356009);
   hNCinFV_stack_11->SetBinContent(19,7.962578);
   hNCinFV_stack_11->SetBinContent(20,9.082854);
   hNCinFV_stack_11->SetBinContent(21,9.394529);
   hNCinFV_stack_11->SetBinContent(22,8.307827);
   hNCinFV_stack_11->SetBinContent(23,11.26907);
   hNCinFV_stack_11->SetBinContent(24,5.523618);
   hNCinFV_stack_11->SetBinContent(25,6.197211);
   hNCinFV_stack_11->SetBinContent(26,0.7302274);
   hNCinFV_stack_11->SetBinError(1,0.8559962);
   hNCinFV_stack_11->SetBinError(2,1.34541);
   hNCinFV_stack_11->SetBinError(3,1.256427);
   hNCinFV_stack_11->SetBinError(4,1.374516);
   hNCinFV_stack_11->SetBinError(5,1.345656);
   hNCinFV_stack_11->SetBinError(6,1.401755);
   hNCinFV_stack_11->SetBinError(7,1.388016);
   hNCinFV_stack_11->SetBinError(8,1.59362);
   hNCinFV_stack_11->SetBinError(9,1.507702);
   hNCinFV_stack_11->SetBinError(10,1.415256);
   hNCinFV_stack_11->SetBinError(11,1.241912);
   hNCinFV_stack_11->SetBinError(12,1.508213);
   hNCinFV_stack_11->SetBinError(13,1.733134);
   hNCinFV_stack_11->SetBinError(14,1.506261);
   hNCinFV_stack_11->SetBinError(15,1.286631);
   hNCinFV_stack_11->SetBinError(16,1.467797);
   hNCinFV_stack_11->SetBinError(17,1.468825);
   hNCinFV_stack_11->SetBinError(18,1.44211);
   hNCinFV_stack_11->SetBinError(19,1.415022);
   hNCinFV_stack_11->SetBinError(20,1.506701);
   hNCinFV_stack_11->SetBinError(21,1.49516);
   hNCinFV_stack_11->SetBinError(22,1.456021);
   hNCinFV_stack_11->SetBinError(23,1.744179);
   hNCinFV_stack_11->SetBinError(24,1.194659);
   hNCinFV_stack_11->SetBinError(25,1.286858);
   hNCinFV_stack_11->SetBinError(26,0.4379386);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,3.039052);
   hnumuCCinFV_stack_12->SetBinContent(2,5.217047);
   hnumuCCinFV_stack_12->SetBinContent(3,4.533555);
   hnumuCCinFV_stack_12->SetBinContent(4,7.522526);
   hnumuCCinFV_stack_12->SetBinContent(5,6.393545);
   hnumuCCinFV_stack_12->SetBinContent(6,6.222762);
   hnumuCCinFV_stack_12->SetBinContent(7,9.894271);
   hnumuCCinFV_stack_12->SetBinContent(8,8.633724);
   hnumuCCinFV_stack_12->SetBinContent(9,9.601483);
   hnumuCCinFV_stack_12->SetBinContent(10,10.89703);
   hnumuCCinFV_stack_12->SetBinContent(11,14.89218);
   hnumuCCinFV_stack_12->SetBinContent(12,15.02379);
   hnumuCCinFV_stack_12->SetBinContent(13,14.72843);
   hnumuCCinFV_stack_12->SetBinContent(14,16.1179);
   hnumuCCinFV_stack_12->SetBinContent(15,14.53609);
   hnumuCCinFV_stack_12->SetBinContent(16,12.10681);
   hnumuCCinFV_stack_12->SetBinContent(17,14.27771);
   hnumuCCinFV_stack_12->SetBinContent(18,15.16783);
   hnumuCCinFV_stack_12->SetBinContent(19,21.35569);
   hnumuCCinFV_stack_12->SetBinContent(20,16.61308);
   hnumuCCinFV_stack_12->SetBinContent(21,16.75559);
   hnumuCCinFV_stack_12->SetBinContent(22,16.53756);
   hnumuCCinFV_stack_12->SetBinContent(23,15.36493);
   hnumuCCinFV_stack_12->SetBinContent(24,16.42899);
   hnumuCCinFV_stack_12->SetBinContent(25,11.90752);
   hnumuCCinFV_stack_12->SetBinContent(26,3.973089);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,0.9156915);
   hnumuCCinFV_stack_12->SetBinError(2,1.111661);
   hnumuCCinFV_stack_12->SetBinError(3,1.085982);
   hnumuCCinFV_stack_12->SetBinError(4,1.440792);
   hnumuCCinFV_stack_12->SetBinError(5,1.626145);
   hnumuCCinFV_stack_12->SetBinError(6,1.317395);
   hnumuCCinFV_stack_12->SetBinError(7,1.822831);
   hnumuCCinFV_stack_12->SetBinError(8,1.716784);
   hnumuCCinFV_stack_12->SetBinError(9,2.000746);
   hnumuCCinFV_stack_12->SetBinError(10,1.887265);
   hnumuCCinFV_stack_12->SetBinError(11,2.2266);
   hnumuCCinFV_stack_12->SetBinError(12,2.259011);
   hnumuCCinFV_stack_12->SetBinError(13,2.184144);
   hnumuCCinFV_stack_12->SetBinError(14,2.569084);
   hnumuCCinFV_stack_12->SetBinError(15,2.091252);
   hnumuCCinFV_stack_12->SetBinError(16,2.295159);
   hnumuCCinFV_stack_12->SetBinError(17,2.007275);
   hnumuCCinFV_stack_12->SetBinError(18,2.062667);
   hnumuCCinFV_stack_12->SetBinError(19,3.025004);
   hnumuCCinFV_stack_12->SetBinError(20,2.307867);
   hnumuCCinFV_stack_12->SetBinError(21,2.194092);
   hnumuCCinFV_stack_12->SetBinError(22,2.280808);
   hnumuCCinFV_stack_12->SetBinError(23,2.114904);
   hnumuCCinFV_stack_12->SetBinError(24,2.34698);
   hnumuCCinFV_stack_12->SetBinError(25,2.960935);
   hnumuCCinFV_stack_12->SetBinError(26,1.0637);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6210482);
   hnueCCinFV_stack_13->SetBinContent(4,0.6419483);
   hnueCCinFV_stack_13->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_13->SetBinContent(6,0.4647761);
   hnueCCinFV_stack_13->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(10,0.6193069);
   hnueCCinFV_stack_13->SetBinContent(11,0.627339);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(15,0.7897245);
   hnueCCinFV_stack_13->SetBinContent(17,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,1.440728);
   hnueCCinFV_stack_13->SetBinContent(19,0.7442807);
   hnueCCinFV_stack_13->SetBinContent(20,1.020533);
   hnueCCinFV_stack_13->SetBinContent(21,0.441907);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,2.670591);
   hnueCCinFV_stack_13->SetBinContent(24,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(25,0.756103);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.4459531);
   hnueCCinFV_stack_13->SetBinError(4,0.373277);
   hnueCCinFV_stack_13->SetBinError(5,0.3147324);
   hnueCCinFV_stack_13->SetBinError(6,0.3293567);
   hnueCCinFV_stack_13->SetBinError(7,0.2871419);
   hnueCCinFV_stack_13->SetBinError(9,0.4213728);
   hnueCCinFV_stack_13->SetBinError(10,0.4458496);
   hnueCCinFV_stack_13->SetBinError(11,0.3633924);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(15,0.6258613);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.6114525);
   hnueCCinFV_stack_13->SetBinError(19,0.5282236);
   hnueCCinFV_stack_13->SetBinError(20,0.5892049);
   hnueCCinFV_stack_13->SetBinError(21,0.3143499);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,1.671681);
   hnueCCinFV_stack_13->SetBinError(24,0.305097);
   hnueCCinFV_stack_13->SetBinError(25,0.4499676);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__14->SetBinContent(0,0.3243973);
   hmcerror__14->SetBinContent(1,51.31017);
   hmcerror__14->SetBinContent(2,59.93139);
   hmcerror__14->SetBinContent(3,70.98473);
   hmcerror__14->SetBinContent(4,81.30515);
   hmcerror__14->SetBinContent(5,83.47308);
   hmcerror__14->SetBinContent(6,93.03242);
   hmcerror__14->SetBinContent(7,90.06876);
   hmcerror__14->SetBinContent(8,100.074);
   hmcerror__14->SetBinContent(9,97.06039);
   hmcerror__14->SetBinContent(10,102.5246);
   hmcerror__14->SetBinContent(11,106.9192);
   hmcerror__14->SetBinContent(12,104.9336);
   hmcerror__14->SetBinContent(13,111.6078);
   hmcerror__14->SetBinContent(14,109.8841);
   hmcerror__14->SetBinContent(15,98.30437);
   hmcerror__14->SetBinContent(16,103.1922);
   hmcerror__14->SetBinContent(17,112.9918);
   hmcerror__14->SetBinContent(18,114.2398);
   hmcerror__14->SetBinContent(19,118.6662);
   hmcerror__14->SetBinContent(20,113.8346);
   hmcerror__14->SetBinContent(21,117.2776);
   hmcerror__14->SetBinContent(22,111.8104);
   hmcerror__14->SetBinContent(23,121.9745);
   hmcerror__14->SetBinContent(24,97.41253);
   hmcerror__14->SetBinContent(25,77.99326);
   hmcerror__14->SetBinContent(26,45.04866);
   hmcerror__14->SetBinContent(27,0.8625581);
   hmcerror__14->SetBinError(0,0.3243973);
   hmcerror__14->SetBinError(1,18.15601);
   hmcerror__14->SetBinError(2,21.61896);
   hmcerror__14->SetBinError(3,22.30846);
   hmcerror__14->SetBinError(4,26.69095);
   hmcerror__14->SetBinError(5,25.29602);
   hmcerror__14->SetBinError(6,26.70753);
   hmcerror__14->SetBinError(7,28.49349);
   hmcerror__14->SetBinError(8,29.6988);
   hmcerror__14->SetBinError(9,28.95761);
   hmcerror__14->SetBinError(10,29.65207);
   hmcerror__14->SetBinError(11,31.37796);
   hmcerror__14->SetBinError(12,30.53216);
   hmcerror__14->SetBinError(13,38.22514);
   hmcerror__14->SetBinError(14,31.81017);
   hmcerror__14->SetBinError(15,31.02199);
   hmcerror__14->SetBinError(16,30.2955);
   hmcerror__14->SetBinError(17,30.66053);
   hmcerror__14->SetBinError(18,29.63756);
   hmcerror__14->SetBinError(19,31.49998);
   hmcerror__14->SetBinError(20,29.46433);
   hmcerror__14->SetBinError(21,38.96189);
   hmcerror__14->SetBinError(22,31.90514);
   hmcerror__14->SetBinError(23,36.87291);
   hmcerror__14->SetBinError(24,27.87028);
   hmcerror__14->SetBinError(25,23.3964);
   hmcerror__14->SetBinError(26,17.19811);
   hmcerror__14->SetBinError(27,18.66685);
   hmcerror__14->SetEntries(2462.59);

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
   
   Double_t _fx3017[26] = {
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
   Double_t _fy3017[26] = {
   43,
   27,
   62,
   64,
   56,
   64,
   72,
   66,
   84,
   83,
   90,
   68,
   84,
   70,
   85,
   80,
   86,
   91,
   89,
   78,
   93,
   87,
   67,
   60,
   65,
   33};
   Double_t _felx3017[26] = {
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
   Double_t _fely3017[26] = {
   6.6917,
   5.3414,
   8.0018,
   8.1273,
   7.6127,
   8.1273,
   8.6108,
   8.2509,
   9.2886,
   9.234,
   9.6093,
   8.3726,
   9.2886,
   8.4925,
   9.3428,
   9.0683,
   9.3967,
   9.6617,
   9.5566,
   8.9562,
   9.7658,
   9.4503,
   8.3119,
   7.8743,
   8.1893,
   5.8847};
   Double_t _fehx3017[26] = {
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
   Double_t _fehy3017[26] = {
   6.4868,
   5.1322,
   7.7989,
   7.9246,
   7.4094,
   7.9246,
   8.4085,
   8.0483,
   9.0869,
   9.0323,
   9.4079,
   8.1701,
   9.0869,
   8.2902,
   9.1411,
   8.8665,
   9.1951,
   9.46,
   9.3552,
   8.7542,
   9.564,
   9.2488,
   8.1094,
   7.6713,
   7.9866,
   5.6776};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,286);
   Graph_Graph3017->SetMinimum(13.56806);
   Graph_Graph3017->SetMaximum(110.6545);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1847.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 130.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 134.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 307.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[26] = {
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
   Double_t _fy3018[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[26] = {
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
   Double_t _fely3018[26] = {
   0.3538481,
   0.3607285,
   0.3142712,
   0.3282811,
   0.303044,
   0.2870777,
   0.3163527,
   0.2967683,
   0.2983463,
   0.289219,
   0.2934737,
   0.2909664,
   0.3424953,
   0.2894885,
   0.3155708,
   0.2935833,
   0.2713518,
   0.2594329,
   0.2654504,
   0.2588345,
   0.3322192,
   0.2853504,
   0.3023001,
   0.2861057,
   0.2999797,
   0.3817673};
   Double_t _fehx3018[26] = {
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
   Double_t _fehy3018[26] = {
   0.3538481,
   0.3607285,
   0.3142712,
   0.3282811,
   0.303044,
   0.2870777,
   0.3163527,
   0.2967683,
   0.2983463,
   0.289219,
   0.2934737,
   0.2909664,
   0.3424953,
   0.2894885,
   0.3155708,
   0.2935833,
   0.2713518,
   0.2594329,
   0.2654504,
   0.2588345,
   0.3322192,
   0.2853504,
   0.3023001,
   0.2861057,
   0.2999797,
   0.3817673};
   grae = new TGraphAsymmErrors(26,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,286);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3019[26] = {
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
   Double_t _fy3019[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[26] = {
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
   Double_t _fely3019[26] = {
   0.2111388,
   0.2264743,
   0.2367983,
   0.2285311,
   0.2562128,
   0.2478779,
   0.2411979,
   0.2509651,
   0.2344892,
   0.2292997,
   0.2416732,
   0.2378708,
   0.2235634,
   0.2420743,
   0.2290472,
   0.2396486,
   0.2238824,
   0.2264691,
   0.2281212,
   0.2183112,
   0.2239687,
   0.227763,
   0.2089908,
   0.2198251,
   0.2176311,
   0.2162582};
   Double_t _fehx3019[26] = {
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
   Double_t _fehy3019[26] = {
   0.2111388,
   0.2264743,
   0.2367983,
   0.2285311,
   0.2562128,
   0.2478779,
   0.2411979,
   0.2509651,
   0.2344892,
   0.2292997,
   0.2416732,
   0.2378708,
   0.2235634,
   0.2420743,
   0.2290472,
   0.2396486,
   0.2238824,
   0.2264691,
   0.2281212,
   0.2183112,
   0.2239687,
   0.227763,
   0.2089908,
   0.2198251,
   0.2176311,
   0.2162582};
   grae = new TGraphAsymmErrors(26,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,286);
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
   
   Double_t _fx3020[26] = {
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
   Double_t _fy3020[26] = {
   0.8380404,
   0.4505152,
   0.8734273,
   0.787158,
   0.670875,
   0.6879322,
   0.7993893,
   0.6595118,
   0.8654405,
   0.8095616,
   0.8417574,
   0.6480288,
   0.7526358,
   0.637035,
   0.8646615,
   0.7752526,
   0.7611171,
   0.7965701,
   0.7500032,
   0.6852044,
   0.7929901,
   0.7781029,
   0.5492952,
   0.6159372,
   0.8334053,
   0.7325411};
   Double_t _felx3020[26] = {
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
   Double_t _fely3020[26] = {
   0.1304166,
   0.08912526,
   0.1127257,
   0.09996045,
   0.09119947,
   0.08735987,
   0.09560252,
   0.08244797,
   0.09569918,
   0.09006616,
   0.08987444,
   0.0797895,
   0.08322539,
   0.077286,
   0.09503952,
   0.08787779,
   0.08316267,
   0.08457386,
   0.08053349,
   0.07867728,
   0.08327078,
   0.08452076,
   0.06814457,
   0.08083457,
   0.1050001,
   0.1306298};
   Double_t _fehx3020[26] = {
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
   Double_t _fehy3020[26] = {
   0.1264233,
   0.0856346,
   0.1098673,
   0.09746738,
   0.08876395,
   0.08518106,
   0.09335646,
   0.08042347,
   0.09362109,
   0.08809883,
   0.08799077,
   0.07785971,
   0.08141816,
   0.07544497,
   0.09298773,
   0.08592221,
   0.08137847,
   0.08280828,
   0.0788363,
   0.07690278,
   0.08155008,
   0.0827186,
   0.06648439,
   0.07875065,
   0.1024012,
   0.1260326};
   grae = new TGraphAsymmErrors(26,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,286);
   Graph_Graph3020->SetMinimum(0.2991995);
   Graph_Graph3020->SetMaximum(1.045485);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
