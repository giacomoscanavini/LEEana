#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 16:49:11 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-3.371769,1241.026,284.1159);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,1.69855);
   hmc__1->SetBinContent(1,105.135);
   hmc__1->SetBinContent(2,131.0152);
   hmc__1->SetBinContent(3,140.2413);
   hmc__1->SetBinContent(4,129.8725);
   hmc__1->SetBinContent(5,136.2668);
   hmc__1->SetBinContent(6,138.1941);
   hmc__1->SetBinContent(7,126.4134);
   hmc__1->SetBinContent(8,146.4591);
   hmc__1->SetBinContent(9,129.0458);
   hmc__1->SetBinContent(10,109.6354);
   hmc__1->SetBinContent(11,115.7047);
   hmc__1->SetBinContent(12,116.7641);
   hmc__1->SetBinContent(13,121.3067);
   hmc__1->SetBinContent(14,137.0386);
   hmc__1->SetBinContent(15,138.7803);
   hmc__1->SetBinContent(16,121.2787);
   hmc__1->SetBinContent(17,119.1125);
   hmc__1->SetBinContent(18,116.9918);
   hmc__1->SetBinContent(19,119.9183);
   hmc__1->SetBinContent(20,124.8058);
   hmc__1->SetBinContent(21,168.5885);
   hmc__1->SetBinContent(22,131.2101);
   hmc__1->SetBinContent(23,115.5246);
   hmc__1->SetBinContent(24,130.3609);
   hmc__1->SetBinContent(25,120.6353);
   hmc__1->SetBinContent(26,132.2416);
   hmc__1->SetBinContent(27,128.9199);
   hmc__1->SetBinContent(28,127.1795);
   hmc__1->SetBinContent(29,127.2117);
   hmc__1->SetBinContent(30,110.4661);
   hmc__1->SetBinContent(31,2.984515);
   hmc__1->SetBinError(0,0.5987963);
   hmc__1->SetBinError(1,21.53501);
   hmc__1->SetBinError(2,28.37847);
   hmc__1->SetBinError(3,28.78176);
   hmc__1->SetBinError(4,28.51077);
   hmc__1->SetBinError(5,28.82817);
   hmc__1->SetBinError(6,27.92571);
   hmc__1->SetBinError(7,26.582);
   hmc__1->SetBinError(8,29.98389);
   hmc__1->SetBinError(9,26.23863);
   hmc__1->SetBinError(10,23.16603);
   hmc__1->SetBinError(11,22.53074);
   hmc__1->SetBinError(12,23.84144);
   hmc__1->SetBinError(13,24.96158);
   hmc__1->SetBinError(14,28.62985);
   hmc__1->SetBinError(15,29.42209);
   hmc__1->SetBinError(16,27.51024);
   hmc__1->SetBinError(17,26.16421);
   hmc__1->SetBinError(18,24.68242);
   hmc__1->SetBinError(19,22.91631);
   hmc__1->SetBinError(20,25.0887);
   hmc__1->SetBinError(21,32.25096);
   hmc__1->SetBinError(22,24.72433);
   hmc__1->SetBinError(23,23.81641);
   hmc__1->SetBinError(24,28.76001);
   hmc__1->SetBinError(25,28.08625);
   hmc__1->SetBinError(26,28.04496);
   hmc__1->SetBinError(27,29.31966);
   hmc__1->SetBinError(28,26.70139);
   hmc__1->SetBinError(29,27.63897);
   hmc__1->SetBinError(30,23.76802);
   hmc__1->SetBinError(31,1.971096);
   hmc__1->SetBinError(32,0.4212968);
   hmc__1->SetBinError(33,0.4212968);
   hmc__1->SetMinimum(-3.371769);
   hmc__1->SetMaximum(269.7416);
   hmc__1->SetEntries(3775.136);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(177.0179);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,2.483061);
   hbadmatch_stack_1->SetBinContent(2,3.985832);
   hbadmatch_stack_1->SetBinContent(3,2.543181);
   hbadmatch_stack_1->SetBinContent(4,4.826175);
   hbadmatch_stack_1->SetBinContent(5,3.237813);
   hbadmatch_stack_1->SetBinContent(6,5.147664);
   hbadmatch_stack_1->SetBinContent(7,2.504463);
   hbadmatch_stack_1->SetBinContent(8,3.606628);
   hbadmatch_stack_1->SetBinContent(9,3.011101);
   hbadmatch_stack_1->SetBinContent(10,2.283211);
   hbadmatch_stack_1->SetBinContent(11,1.889409);
   hbadmatch_stack_1->SetBinContent(12,2.385818);
   hbadmatch_stack_1->SetBinContent(13,1.121968);
   hbadmatch_stack_1->SetBinContent(14,6.13702);
   hbadmatch_stack_1->SetBinContent(15,3.672618);
   hbadmatch_stack_1->SetBinContent(16,3.588346);
   hbadmatch_stack_1->SetBinContent(17,1.717185);
   hbadmatch_stack_1->SetBinContent(18,1.997348);
   hbadmatch_stack_1->SetBinContent(19,1.662728);
   hbadmatch_stack_1->SetBinContent(20,3.001449);
   hbadmatch_stack_1->SetBinContent(21,7.779007);
   hbadmatch_stack_1->SetBinContent(22,4.484533);
   hbadmatch_stack_1->SetBinContent(23,1.913263);
   hbadmatch_stack_1->SetBinContent(24,4.543771);
   hbadmatch_stack_1->SetBinContent(25,3.100329);
   hbadmatch_stack_1->SetBinContent(26,1.943387);
   hbadmatch_stack_1->SetBinContent(27,4.201486);
   hbadmatch_stack_1->SetBinContent(28,2.229771);
   hbadmatch_stack_1->SetBinContent(29,3.596604);
   hbadmatch_stack_1->SetBinContent(30,4.358191);
   hbadmatch_stack_1->SetBinError(1,0.7704318);
   hbadmatch_stack_1->SetBinError(2,1.028625);
   hbadmatch_stack_1->SetBinError(3,0.8378079);
   hbadmatch_stack_1->SetBinError(4,1.1808);
   hbadmatch_stack_1->SetBinError(5,0.9383337);
   hbadmatch_stack_1->SetBinError(6,1.384157);
   hbadmatch_stack_1->SetBinError(7,0.8162438);
   hbadmatch_stack_1->SetBinError(8,1.359003);
   hbadmatch_stack_1->SetBinError(9,0.9117278);
   hbadmatch_stack_1->SetBinError(10,0.8000235);
   hbadmatch_stack_1->SetBinError(11,0.6898293);
   hbadmatch_stack_1->SetBinError(12,0.8769134);
   hbadmatch_stack_1->SetBinError(13,0.5181909);
   hbadmatch_stack_1->SetBinError(14,1.932792);
   hbadmatch_stack_1->SetBinError(15,0.9980142);
   hbadmatch_stack_1->SetBinError(16,0.9962338);
   hbadmatch_stack_1->SetBinError(17,0.6217711);
   hbadmatch_stack_1->SetBinError(18,0.7334836);
   hbadmatch_stack_1->SetBinError(19,0.5908022);
   hbadmatch_stack_1->SetBinError(20,0.9003713);
   hbadmatch_stack_1->SetBinError(21,1.571243);
   hbadmatch_stack_1->SetBinError(22,1.06242);
   hbadmatch_stack_1->SetBinError(23,0.7571072);
   hbadmatch_stack_1->SetBinError(24,1.168768);
   hbadmatch_stack_1->SetBinError(25,0.9498905);
   hbadmatch_stack_1->SetBinError(26,0.6619838);
   hbadmatch_stack_1->SetBinError(27,1.862029);
   hbadmatch_stack_1->SetBinError(28,0.8472716);
   hbadmatch_stack_1->SetBinError(29,1.046118);
   hbadmatch_stack_1->SetBinError(30,1.166279);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,11.17401);
   hext_stack_2->SetBinContent(2,13.66544);
   hext_stack_2->SetBinContent(3,21.9949);
   hext_stack_2->SetBinContent(4,18.35428);
   hext_stack_2->SetBinContent(5,19.85375);
   hext_stack_2->SetBinContent(6,20.98417);
   hext_stack_2->SetBinContent(7,13.42766);
   hext_stack_2->SetBinContent(8,26.25836);
   hext_stack_2->SetBinContent(9,15.1578);
   hext_stack_2->SetBinContent(10,11.68876);
   hext_stack_2->SetBinContent(11,18.60088);
   hext_stack_2->SetBinContent(12,12.62441);
   hext_stack_2->SetBinContent(13,14.81463);
   hext_stack_2->SetBinContent(14,20.3166);
   hext_stack_2->SetBinContent(15,14.0864);
   hext_stack_2->SetBinContent(16,13.38136);
   hext_stack_2->SetBinContent(17,9.399208);
   hext_stack_2->SetBinContent(18,14.07645);
   hext_stack_2->SetBinContent(19,19.32029);
   hext_stack_2->SetBinContent(20,16.9326);
   hext_stack_2->SetBinContent(21,33.94462);
   hext_stack_2->SetBinContent(22,21.54799);
   hext_stack_2->SetBinContent(23,14.48305);
   hext_stack_2->SetBinContent(24,13.43761);
   hext_stack_2->SetBinContent(25,9.477);
   hext_stack_2->SetBinContent(26,14.2927);
   hext_stack_2->SetBinContent(27,13.46797);
   hext_stack_2->SetBinContent(28,12.70384);
   hext_stack_2->SetBinContent(29,7.467185);
   hext_stack_2->SetBinContent(30,9.779857);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,2.184759);
   hext_stack_2->SetBinError(2,2.481644);
   hext_stack_2->SetBinError(3,3.200924);
   hext_stack_2->SetBinError(4,2.913886);
   hext_stack_2->SetBinError(5,3.134916);
   hext_stack_2->SetBinError(6,3.234931);
   hext_stack_2->SetBinError(7,2.499707);
   hext_stack_2->SetBinError(8,3.560906);
   hext_stack_2->SetBinError(9,2.523155);
   hext_stack_2->SetBinError(10,2.128404);
   hext_stack_2->SetBinError(11,2.944656);
   hext_stack_2->SetBinError(12,2.319561);
   hext_stack_2->SetBinError(13,2.555065);
   hext_stack_2->SetBinError(14,3.2437);
   hext_stack_2->SetBinError(15,2.433408);
   hext_stack_2->SetBinError(16,2.276497);
   hext_stack_2->SetBinError(17,2.01513);
   hext_stack_2->SetBinError(18,2.541457);
   hext_stack_2->SetBinError(19,3.001272);
   hext_stack_2->SetBinError(20,2.660589);
   hext_stack_2->SetBinError(21,3.814955);
   hext_stack_2->SetBinError(22,3.309302);
   hext_stack_2->SetBinError(23,2.573776);
   hext_stack_2->SetBinError(24,2.389772);
   hext_stack_2->SetBinError(25,1.996425);
   hext_stack_2->SetBinError(26,2.640573);
   hext_stack_2->SetBinError(27,2.318976);
   hext_stack_2->SetBinError(28,2.403493);
   hext_stack_2->SetBinError(29,1.739811);
   hext_stack_2->SetBinError(30,2.166691);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(1136);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,7.90552);
   hdirt_stack_3->SetBinContent(2,6.05631);
   hdirt_stack_3->SetBinContent(3,5.304185);
   hdirt_stack_3->SetBinContent(4,1.525042);
   hdirt_stack_3->SetBinContent(5,1.64474);
   hdirt_stack_3->SetBinContent(6,2.370142);
   hdirt_stack_3->SetBinContent(7,1.715061);
   hdirt_stack_3->SetBinContent(8,2.628517);
   hdirt_stack_3->SetBinContent(9,2.565611);
   hdirt_stack_3->SetBinContent(10,1.556007);
   hdirt_stack_3->SetBinContent(11,1.370127);
   hdirt_stack_3->SetBinContent(12,1.231962);
   hdirt_stack_3->SetBinContent(13,2.146071);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,1.296605);
   hdirt_stack_3->SetBinContent(16,2.188922);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.982376);
   hdirt_stack_3->SetBinContent(20,0.6610426);
   hdirt_stack_3->SetBinContent(21,2.551899);
   hdirt_stack_3->SetBinContent(22,1.349713);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.678592);
   hdirt_stack_3->SetBinContent(27,0.9712972);
   hdirt_stack_3->SetBinContent(28,0.7759784);
   hdirt_stack_3->SetBinContent(29,1.171413);
   hdirt_stack_3->SetBinContent(30,0.5758626);
   hdirt_stack_3->SetBinError(1,1.484524);
   hdirt_stack_3->SetBinError(2,1.273644);
   hdirt_stack_3->SetBinError(3,1.41656);
   hdirt_stack_3->SetBinError(4,0.5579614);
   hdirt_stack_3->SetBinError(5,0.6966965);
   hdirt_stack_3->SetBinError(6,0.8254631);
   hdirt_stack_3->SetBinError(7,0.7288416);
   hdirt_stack_3->SetBinError(8,0.8770977);
   hdirt_stack_3->SetBinError(9,0.7944351);
   hdirt_stack_3->SetBinError(10,0.8306053);
   hdirt_stack_3->SetBinError(11,0.6152577);
   hdirt_stack_3->SetBinError(12,0.5942915);
   hdirt_stack_3->SetBinError(13,0.7823375);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.5513299);
   hdirt_stack_3->SetBinError(16,0.8257001);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.5099715);
   hdirt_stack_3->SetBinError(20,0.3370462);
   hdirt_stack_3->SetBinError(21,0.837552);
   hdirt_stack_3->SetBinError(22,0.5411461);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.282199);
   hdirt_stack_3->SetBinError(27,0.4684838);
   hdirt_stack_3->SetBinError(28,0.458477);
   hdirt_stack_3->SetBinError(29,0.5610561);
   hdirt_stack_3->SetBinError(30,0.3389606);
   hdirt_stack_3->SetEntries(238);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.9286332);
   houtFV_stack_4->SetBinContent(1,29.99248);
   houtFV_stack_4->SetBinContent(2,20.76675);
   houtFV_stack_4->SetBinContent(3,15.39493);
   houtFV_stack_4->SetBinContent(4,17.28387);
   houtFV_stack_4->SetBinContent(5,15.52355);
   houtFV_stack_4->SetBinContent(6,19.12759);
   houtFV_stack_4->SetBinContent(7,17.06634);
   houtFV_stack_4->SetBinContent(8,18.35102);
   houtFV_stack_4->SetBinContent(9,13.11964);
   houtFV_stack_4->SetBinContent(10,12.36819);
   houtFV_stack_4->SetBinContent(11,15.00872);
   houtFV_stack_4->SetBinContent(12,14.20982);
   houtFV_stack_4->SetBinContent(13,12.24042);
   houtFV_stack_4->SetBinContent(14,14.60879);
   houtFV_stack_4->SetBinContent(15,19.90293);
   houtFV_stack_4->SetBinContent(16,15.3546);
   houtFV_stack_4->SetBinContent(17,16.21288);
   houtFV_stack_4->SetBinContent(18,13.70011);
   houtFV_stack_4->SetBinContent(19,14.3042);
   houtFV_stack_4->SetBinContent(20,18.32496);
   houtFV_stack_4->SetBinContent(21,19.28938);
   houtFV_stack_4->SetBinContent(22,16.1088);
   houtFV_stack_4->SetBinContent(23,16.58098);
   houtFV_stack_4->SetBinContent(24,14.48605);
   houtFV_stack_4->SetBinContent(25,19.01437);
   houtFV_stack_4->SetBinContent(26,14.0621);
   houtFV_stack_4->SetBinContent(27,19.14757);
   houtFV_stack_4->SetBinContent(28,13.89889);
   houtFV_stack_4->SetBinContent(29,18.67527);
   houtFV_stack_4->SetBinContent(30,19.73628);
   houtFV_stack_4->SetBinContent(31,1.073786);
   houtFV_stack_4->SetBinError(0,0.48078);
   houtFV_stack_4->SetBinError(1,2.779689);
   houtFV_stack_4->SetBinError(2,2.280601);
   houtFV_stack_4->SetBinError(3,1.947804);
   houtFV_stack_4->SetBinError(4,2.27364);
   houtFV_stack_4->SetBinError(5,1.915431);
   houtFV_stack_4->SetBinError(6,2.235391);
   houtFV_stack_4->SetBinError(7,2.037233);
   houtFV_stack_4->SetBinError(8,2.212638);
   houtFV_stack_4->SetBinError(9,1.739969);
   houtFV_stack_4->SetBinError(10,1.783759);
   houtFV_stack_4->SetBinError(11,1.892246);
   houtFV_stack_4->SetBinError(12,1.87813);
   houtFV_stack_4->SetBinError(13,1.758548);
   houtFV_stack_4->SetBinError(14,1.936529);
   houtFV_stack_4->SetBinError(15,2.204435);
   houtFV_stack_4->SetBinError(16,2.031678);
   houtFV_stack_4->SetBinError(17,1.986518);
   houtFV_stack_4->SetBinError(18,1.897089);
   houtFV_stack_4->SetBinError(19,1.843652);
   houtFV_stack_4->SetBinError(20,2.17903);
   houtFV_stack_4->SetBinError(21,2.20924);
   houtFV_stack_4->SetBinError(22,2.005647);
   houtFV_stack_4->SetBinError(23,2.36329);
   houtFV_stack_4->SetBinError(24,1.941722);
   houtFV_stack_4->SetBinError(25,2.173027);
   houtFV_stack_4->SetBinError(26,1.90527);
   houtFV_stack_4->SetBinError(27,2.143518);
   houtFV_stack_4->SetBinError(28,1.880089);
   houtFV_stack_4->SetBinError(29,2.215076);
   houtFV_stack_4->SetBinError(30,2.215836);
   houtFV_stack_4->SetBinError(31,0.5557297);
   houtFV_stack_4->SetEntries(2163);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.938894);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.956752);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.495398);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.69253);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.61207);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.749738);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.693442);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.746498);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.26282);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.54082);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.206684);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.276102);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.569888);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.335646);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.50371);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.47257);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.040948);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.683152);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.264316);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.39808);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.514752);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.51292);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.242466);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.429883);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.035978);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,4.558014);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.753482);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,4.226206);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.41153);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.687794);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4879888);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6205327);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4979235);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5697964);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6403904);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5854063);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6224109);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5049094);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6118473);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5745573);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5543307);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5621164);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6447314);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7096306);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.703387);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6373443);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5840757);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6762578);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6165473);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4883206);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6329526);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5738795);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4118626);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5599194);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8039603);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.7003832);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.7271481);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7019563);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.461339);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4807571);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.3764861);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,28.21151);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,51.18258);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,56.40956);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,46.69282);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,54.94527);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,55.17663);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,51.66087);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,51.68811);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,55.77615);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,48.10476);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,47.2681);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,52.66627);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,50.94328);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,60.06258);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,58.34596);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,51.9701);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,56.92337);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,54.14782);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,51.01701);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,50.10943);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,52.42795);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,49.06483);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,51.21413);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,57.34339);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,50.55676);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,57.40369);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,52.8976);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,58.29944);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,55.71884);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,37.86909);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,0.2510999);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.2236377);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.78429);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.314978);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.499695);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.189177);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.392165);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.42664);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.331508);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.334566);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.461014);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.217119);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.226607);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.348611);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.316365);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.545212);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.53551);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.338703);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.467385);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.443277);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.329322);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.289535);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.313506);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.258642);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.283293);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.544028);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.233167);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.423396);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,2.336663);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,2.48209);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,2.429966);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,2.048025);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.08369995);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(1,13.04289);
   hCCpi0inFV_stack_7->SetBinContent(2,17.86193);
   hCCpi0inFV_stack_7->SetBinContent(3,22.98066);
   hCCpi0inFV_stack_7->SetBinContent(4,23.67712);
   hCCpi0inFV_stack_7->SetBinContent(5,22.33699);
   hCCpi0inFV_stack_7->SetBinContent(6,19.94615);
   hCCpi0inFV_stack_7->SetBinContent(7,18.19106);
   hCCpi0inFV_stack_7->SetBinContent(8,22.80965);
   hCCpi0inFV_stack_7->SetBinContent(9,21.1152);
   hCCpi0inFV_stack_7->SetBinContent(10,21.0475);
   hCCpi0inFV_stack_7->SetBinContent(11,19.03113);
   hCCpi0inFV_stack_7->SetBinContent(12,18.83407);
   hCCpi0inFV_stack_7->SetBinContent(13,23.80101);
   hCCpi0inFV_stack_7->SetBinContent(14,18.96204);
   hCCpi0inFV_stack_7->SetBinContent(15,24.22643);
   hCCpi0inFV_stack_7->SetBinContent(16,18.66058);
   hCCpi0inFV_stack_7->SetBinContent(17,17.49318);
   hCCpi0inFV_stack_7->SetBinContent(18,18.75477);
   hCCpi0inFV_stack_7->SetBinContent(19,17.94967);
   hCCpi0inFV_stack_7->SetBinContent(20,19.50745);
   hCCpi0inFV_stack_7->SetBinContent(21,23.50616);
   hCCpi0inFV_stack_7->SetBinContent(22,21.54836);
   hCCpi0inFV_stack_7->SetBinContent(23,20.79428);
   hCCpi0inFV_stack_7->SetBinContent(24,23.57431);
   hCCpi0inFV_stack_7->SetBinContent(25,19.65215);
   hCCpi0inFV_stack_7->SetBinContent(26,24.77978);
   hCCpi0inFV_stack_7->SetBinContent(27,22.25532);
   hCCpi0inFV_stack_7->SetBinContent(28,22.57598);
   hCCpi0inFV_stack_7->SetBinContent(29,22.47323);
   hCCpi0inFV_stack_7->SetBinContent(30,25.01954);
   hCCpi0inFV_stack_7->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_7->SetBinError(1,1.841672);
   hCCpi0inFV_stack_7->SetBinError(2,2.09501);
   hCCpi0inFV_stack_7->SetBinError(3,2.446205);
   hCCpi0inFV_stack_7->SetBinError(4,2.371737);
   hCCpi0inFV_stack_7->SetBinError(5,2.359787);
   hCCpi0inFV_stack_7->SetBinError(6,2.194529);
   hCCpi0inFV_stack_7->SetBinError(7,2.1477);
   hCCpi0inFV_stack_7->SetBinError(8,2.39937);
   hCCpi0inFV_stack_7->SetBinError(9,2.276211);
   hCCpi0inFV_stack_7->SetBinError(10,2.355782);
   hCCpi0inFV_stack_7->SetBinError(11,2.237789);
   hCCpi0inFV_stack_7->SetBinError(12,2.170554);
   hCCpi0inFV_stack_7->SetBinError(13,2.42849);
   hCCpi0inFV_stack_7->SetBinError(14,2.200182);
   hCCpi0inFV_stack_7->SetBinError(15,2.446136);
   hCCpi0inFV_stack_7->SetBinError(16,2.130504);
   hCCpi0inFV_stack_7->SetBinError(17,2.110846);
   hCCpi0inFV_stack_7->SetBinError(18,2.203259);
   hCCpi0inFV_stack_7->SetBinError(19,2.133969);
   hCCpi0inFV_stack_7->SetBinError(20,2.158277);
   hCCpi0inFV_stack_7->SetBinError(21,2.439716);
   hCCpi0inFV_stack_7->SetBinError(22,2.283505);
   hCCpi0inFV_stack_7->SetBinError(23,2.282824);
   hCCpi0inFV_stack_7->SetBinError(24,2.44219);
   hCCpi0inFV_stack_7->SetBinError(25,2.190332);
   hCCpi0inFV_stack_7->SetBinError(26,2.545994);
   hCCpi0inFV_stack_7->SetBinError(27,2.372133);
   hCCpi0inFV_stack_7->SetBinError(28,2.400793);
   hCCpi0inFV_stack_7->SetBinError(29,2.363335);
   hCCpi0inFV_stack_7->SetBinError(30,2.54607);
   hCCpi0inFV_stack_7->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,0.1967154);
   hNCinFV_stack_8->SetBinContent(1,0.7868615);
   hNCinFV_stack_8->SetBinContent(2,4.646547);
   hNCinFV_stack_8->SetBinContent(3,5.180059);
   hNCinFV_stack_8->SetBinContent(4,3.609717);
   hNCinFV_stack_8->SetBinContent(5,6.103621);
   hNCinFV_stack_8->SetBinContent(6,3.17764);
   hNCinFV_stack_8->SetBinContent(7,6.495361);
   hNCinFV_stack_8->SetBinContent(8,5.862105);
   hNCinFV_stack_8->SetBinContent(9,3.232584);
   hNCinFV_stack_8->SetBinContent(10,4.343326);
   hNCinFV_stack_8->SetBinContent(11,3.664661);
   hNCinFV_stack_8->SetBinContent(12,6.060511);
   hNCinFV_stack_8->SetBinContent(13,5.083088);
   hNCinFV_stack_8->SetBinContent(14,4.786628);
   hNCinFV_stack_8->SetBinContent(15,4.641476);
   hNCinFV_stack_8->SetBinContent(16,7.087197);
   hNCinFV_stack_8->SetBinContent(17,5.076934);
   hNCinFV_stack_8->SetBinContent(18,4.106273);
   hNCinFV_stack_8->SetBinContent(19,4.786628);
   hNCinFV_stack_8->SetBinContent(20,4.639785);
   hNCinFV_stack_8->SetBinContent(21,9.531229);
   hNCinFV_stack_8->SetBinContent(22,3.761024);
   hNCinFV_stack_8->SetBinContent(23,3.175949);
   hNCinFV_stack_8->SetBinContent(24,4.891444);
   hNCinFV_stack_8->SetBinContent(25,6.630979);
   hNCinFV_stack_8->SetBinContent(26,5.22824);
   hNCinFV_stack_8->SetBinContent(27,3.954358);
   hNCinFV_stack_8->SetBinContent(28,5.991085);
   hNCinFV_stack_8->SetBinContent(29,5.812233);
   hNCinFV_stack_8->SetBinContent(30,2.252388);
   hNCinFV_stack_8->SetBinContent(31,0.3401776);
   hNCinFV_stack_8->SetBinError(0,0.1967154);
   hNCinFV_stack_8->SetBinError(1,0.3934307);
   hNCinFV_stack_8->SetBinError(2,1.075673);
   hNCinFV_stack_8->SetBinError(3,1.144624);
   hNCinFV_stack_8->SetBinError(4,1.000956);
   hNCinFV_stack_8->SetBinError(5,1.240696);
   hNCinFV_stack_8->SetBinError(6,0.8775989);
   hNCinFV_stack_8->SetBinError(7,1.271243);
   hNCinFV_stack_8->SetBinError(8,1.241881);
   hNCinFV_stack_8->SetBinError(9,0.8558709);
   hNCinFV_stack_8->SetBinError(10,1.093173);
   hNCinFV_stack_8->SetBinError(11,0.9819618);
   hNCinFV_stack_8->SetBinError(12,1.257628);
   hNCinFV_stack_8->SetBinError(13,1.091863);
   hNCinFV_stack_8->SetBinError(14,1.110302);
   hNCinFV_stack_8->SetBinError(15,1.074749);
   hNCinFV_stack_8->SetBinError(16,1.316363);
   hNCinFV_stack_8->SetBinError(17,1.178195);
   hNCinFV_stack_8->SetBinError(18,1.000664);
   hNCinFV_stack_8->SetBinError(19,1.110302);
   hNCinFV_stack_8->SetBinError(20,1.074441);
   hNCinFV_stack_8->SetBinError(21,1.519828);
   hNCinFV_stack_8->SetBinError(22,0.9400115);
   hNCinFV_stack_8->SetBinError(23,0.8772215);
   hNCinFV_stack_8->SetBinError(24,1.074921);
   hNCinFV_stack_8->SetBinError(25,1.37419);
   hNCinFV_stack_8->SetBinError(26,1.126877);
   hNCinFV_stack_8->SetBinError(27,0.9596843);
   hNCinFV_stack_8->SetBinError(28,1.293878);
   hNCinFV_stack_8->SetBinError(29,1.257744);
   hNCinFV_stack_8->SetBinError(30,0.7350883);
   hNCinFV_stack_8->SetBinError(31,0.3401776);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(1,8.544689);
   hnumuCCinFV_stack_9->SetBinContent(2,9.301745);
   hnumuCCinFV_stack_9->SetBinContent(3,7.743402);
   hnumuCCinFV_stack_9->SetBinContent(4,9.555935);
   hnumuCCinFV_stack_9->SetBinContent(5,6.454593);
   hnumuCCinFV_stack_9->SetBinContent(6,7.785699);
   hnumuCCinFV_stack_9->SetBinContent(7,10.57062);
   hnumuCCinFV_stack_9->SetBinContent(8,11.1327);
   hnumuCCinFV_stack_9->SetBinContent(9,9.994396);
   hnumuCCinFV_stack_9->SetBinContent(10,4.506087);
   hnumuCCinFV_stack_9->SetBinContent(11,5.420807);
   hnumuCCinFV_stack_9->SetBinContent(12,5.050699);
   hnumuCCinFV_stack_9->SetBinContent(13,6.162783);
   hnumuCCinFV_stack_9->SetBinContent(14,5.928782);
   hnumuCCinFV_stack_9->SetBinContent(15,6.238871);
   hnumuCCinFV_stack_9->SetBinContent(16,4.963934);
   hnumuCCinFV_stack_9->SetBinContent(17,7.269094);
   hnumuCCinFV_stack_9->SetBinContent(18,4.812872);
   hnumuCCinFV_stack_9->SetBinContent(19,5.31002);
   hnumuCCinFV_stack_9->SetBinContent(20,8.153096);
   hnumuCCinFV_stack_9->SetBinContent(21,14.24817);
   hnumuCCinFV_stack_9->SetBinContent(22,8.464209);
   hnumuCCinFV_stack_9->SetBinContent(23,4.241371);
   hnumuCCinFV_stack_9->SetBinContent(24,6.831769);
   hnumuCCinFV_stack_9->SetBinContent(25,4.690634);
   hnumuCCinFV_stack_9->SetBinContent(26,6.2828);
   hnumuCCinFV_stack_9->SetBinContent(27,5.852761);
   hnumuCCinFV_stack_9->SetBinContent(28,5.971669);
   hnumuCCinFV_stack_9->SetBinContent(29,9.010065);
   hnumuCCinFV_stack_9->SetBinContent(30,8.492768);
   hnumuCCinFV_stack_9->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(1,2.075361);
   hnumuCCinFV_stack_9->SetBinError(2,1.624787);
   hnumuCCinFV_stack_9->SetBinError(3,1.5362);
   hnumuCCinFV_stack_9->SetBinError(4,1.555544);
   hnumuCCinFV_stack_9->SetBinError(5,1.456879);
   hnumuCCinFV_stack_9->SetBinError(6,1.591561);
   hnumuCCinFV_stack_9->SetBinError(7,3.007757);
   hnumuCCinFV_stack_9->SetBinError(8,2.479828);
   hnumuCCinFV_stack_9->SetBinError(9,1.806565);
   hnumuCCinFV_stack_9->SetBinError(10,1.359255);
   hnumuCCinFV_stack_9->SetBinError(11,1.227771);
   hnumuCCinFV_stack_9->SetBinError(12,1.659053);
   hnumuCCinFV_stack_9->SetBinError(13,1.378082);
   hnumuCCinFV_stack_9->SetBinError(14,1.262326);
   hnumuCCinFV_stack_9->SetBinError(15,1.338771);
   hnumuCCinFV_stack_9->SetBinError(16,1.114701);
   hnumuCCinFV_stack_9->SetBinError(17,1.469743);
   hnumuCCinFV_stack_9->SetBinError(18,1.062482);
   hnumuCCinFV_stack_9->SetBinError(19,1.422665);
   hnumuCCinFV_stack_9->SetBinError(20,2.032134);
   hnumuCCinFV_stack_9->SetBinError(21,1.991514);
   hnumuCCinFV_stack_9->SetBinError(22,1.611526);
   hnumuCCinFV_stack_9->SetBinError(23,0.9991128);
   hnumuCCinFV_stack_9->SetBinError(24,1.415377);
   hnumuCCinFV_stack_9->SetBinError(25,1.069341);
   hnumuCCinFV_stack_9->SetBinError(26,1.350697);
   hnumuCCinFV_stack_9->SetBinError(27,1.271794);
   hnumuCCinFV_stack_9->SetBinError(28,1.245413);
   hnumuCCinFV_stack_9->SetBinError(29,1.733975);
   hnumuCCinFV_stack_9->SetBinError(30,1.820355);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(1,1.055049);
   hnueCCinFV_stack_10->SetBinContent(2,0.5913461);
   hnueCCinFV_stack_10->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(4,1.655022);
   hnueCCinFV_stack_10->SetBinContent(5,2.554448);
   hnueCCinFV_stack_10->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_10->SetBinContent(7,1.088552);
   hnueCCinFV_stack_10->SetBinContent(8,1.375494);
   hnueCCinFV_stack_10->SetBinContent(9,1.810476);
   hnueCCinFV_stack_10->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(11,0.2441371);
   hnueCCinFV_stack_10->SetBinContent(12,0.4244309);
   hnueCCinFV_stack_10->SetBinContent(13,1.423555);
   hnueCCinFV_stack_10->SetBinContent(14,1.185365);
   hnueCCinFV_stack_10->SetBinContent(15,1.865311);
   hnueCCinFV_stack_10->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_10->SetBinContent(17,0.9245921);
   hnueCCinFV_stack_10->SetBinContent(18,1.23324);
   hnueCCinFV_stack_10->SetBinContent(19,1.321025);
   hnueCCinFV_stack_10->SetBinContent(20,1.077868);
   hnueCCinFV_stack_10->SetBinContent(21,1.795308);
   hnueCCinFV_stack_10->SetBinContent(22,1.367688);
   hnueCCinFV_stack_10->SetBinContent(23,0.5221299);
   hnueCCinFV_stack_10->SetBinContent(24,1.309485);
   hnueCCinFV_stack_10->SetBinContent(25,1.767228);
   hnueCCinFV_stack_10->SetBinContent(26,1.012306);
   hnueCCinFV_stack_10->SetBinContent(27,1.418056);
   hnueCCinFV_stack_10->SetBinContent(28,0.5066535);
   hnueCCinFV_stack_10->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_10->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_10->SetBinError(1,0.5556116);
   hnueCCinFV_stack_10->SetBinError(2,0.4417072);
   hnueCCinFV_stack_10->SetBinError(3,0.1950249);
   hnueCCinFV_stack_10->SetBinError(4,0.7099917);
   hnueCCinFV_stack_10->SetBinError(5,1.828548);
   hnueCCinFV_stack_10->SetBinError(6,0.436143);
   hnueCCinFV_stack_10->SetBinError(7,0.605439);
   hnueCCinFV_stack_10->SetBinError(8,0.5767193);
   hnueCCinFV_stack_10->SetBinError(9,1.332829);
   hnueCCinFV_stack_10->SetBinError(10,0.1967154);
   hnueCCinFV_stack_10->SetBinError(11,0.2441371);
   hnueCCinFV_stack_10->SetBinError(12,0.4244309);
   hnueCCinFV_stack_10->SetBinError(13,0.7616284);
   hnueCCinFV_stack_10->SetBinError(14,0.6143989);
   hnueCCinFV_stack_10->SetBinError(15,0.6920427);
   hnueCCinFV_stack_10->SetBinError(16,0.3532401);
   hnueCCinFV_stack_10->SetBinError(17,0.6538334);
   hnueCCinFV_stack_10->SetBinError(18,0.8846879);
   hnueCCinFV_stack_10->SetBinError(19,0.7882246);
   hnueCCinFV_stack_10->SetBinError(20,0.5370783);
   hnueCCinFV_stack_10->SetBinError(21,0.690824);
   hnueCCinFV_stack_10->SetBinError(22,0.7329359);
   hnueCCinFV_stack_10->SetBinError(23,0.3741997);
   hnueCCinFV_stack_10->SetBinError(24,0.8480199);
   hnueCCinFV_stack_10->SetBinError(25,0.8069208);
   hnueCCinFV_stack_10->SetBinError(26,0.453559);
   hnueCCinFV_stack_10->SetBinError(27,0.6908145);
   hnueCCinFV_stack_10->SetBinError(28,0.3670948);
   hnueCCinFV_stack_10->SetBinError(29,0.441077);
   hnueCCinFV_stack_10->SetBinError(30,0.4102043);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,1.69855);
   hmcerror__2->SetBinContent(1,105.135);
   hmcerror__2->SetBinContent(2,131.0152);
   hmcerror__2->SetBinContent(3,140.2413);
   hmcerror__2->SetBinContent(4,129.8725);
   hmcerror__2->SetBinContent(5,136.2668);
   hmcerror__2->SetBinContent(6,138.1941);
   hmcerror__2->SetBinContent(7,126.4134);
   hmcerror__2->SetBinContent(8,146.4591);
   hmcerror__2->SetBinContent(9,129.0458);
   hmcerror__2->SetBinContent(10,109.6354);
   hmcerror__2->SetBinContent(11,115.7047);
   hmcerror__2->SetBinContent(12,116.7641);
   hmcerror__2->SetBinContent(13,121.3067);
   hmcerror__2->SetBinContent(14,137.0386);
   hmcerror__2->SetBinContent(15,138.7803);
   hmcerror__2->SetBinContent(16,121.2787);
   hmcerror__2->SetBinContent(17,119.1125);
   hmcerror__2->SetBinContent(18,116.9918);
   hmcerror__2->SetBinContent(19,119.9183);
   hmcerror__2->SetBinContent(20,124.8058);
   hmcerror__2->SetBinContent(21,168.5885);
   hmcerror__2->SetBinContent(22,131.2101);
   hmcerror__2->SetBinContent(23,115.5246);
   hmcerror__2->SetBinContent(24,130.3609);
   hmcerror__2->SetBinContent(25,120.6353);
   hmcerror__2->SetBinContent(26,132.2416);
   hmcerror__2->SetBinContent(27,128.9199);
   hmcerror__2->SetBinContent(28,127.1795);
   hmcerror__2->SetBinContent(29,127.2117);
   hmcerror__2->SetBinContent(30,110.4661);
   hmcerror__2->SetBinContent(31,2.984515);
   hmcerror__2->SetBinError(0,0.5987963);
   hmcerror__2->SetBinError(1,21.53501);
   hmcerror__2->SetBinError(2,28.37847);
   hmcerror__2->SetBinError(3,28.78176);
   hmcerror__2->SetBinError(4,28.51077);
   hmcerror__2->SetBinError(5,28.82817);
   hmcerror__2->SetBinError(6,27.92571);
   hmcerror__2->SetBinError(7,26.582);
   hmcerror__2->SetBinError(8,29.98389);
   hmcerror__2->SetBinError(9,26.23863);
   hmcerror__2->SetBinError(10,23.16603);
   hmcerror__2->SetBinError(11,22.53074);
   hmcerror__2->SetBinError(12,23.84144);
   hmcerror__2->SetBinError(13,24.96158);
   hmcerror__2->SetBinError(14,28.62985);
   hmcerror__2->SetBinError(15,29.42209);
   hmcerror__2->SetBinError(16,27.51024);
   hmcerror__2->SetBinError(17,26.16421);
   hmcerror__2->SetBinError(18,24.68242);
   hmcerror__2->SetBinError(19,22.91631);
   hmcerror__2->SetBinError(20,25.0887);
   hmcerror__2->SetBinError(21,32.25096);
   hmcerror__2->SetBinError(22,24.72433);
   hmcerror__2->SetBinError(23,23.81641);
   hmcerror__2->SetBinError(24,28.76001);
   hmcerror__2->SetBinError(25,28.08625);
   hmcerror__2->SetBinError(26,28.04496);
   hmcerror__2->SetBinError(27,29.31966);
   hmcerror__2->SetBinError(28,26.70139);
   hmcerror__2->SetBinError(29,27.63897);
   hmcerror__2->SetBinError(30,23.76802);
   hmcerror__2->SetBinError(31,1.971096);
   hmcerror__2->SetBinError(32,0.4212968);
   hmcerror__2->SetBinError(33,0.4212968);
   hmcerror__2->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3001[32] = {
   96,
   156,
   141,
   123,
   134,
   137,
   130,
   139,
   145,
   114,
   126,
   112,
   123,
   132,
   147,
   131,
   128,
   124,
   127,
   131,
   164,
   136,
   125,
   103,
   126,
   128,
   118,
   112,
   124,
   89,
   1,
   0};
   Double_t _felx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3001[32] = {
   9.9196,
   12.49,
   11.87434,
   11.09054,
   11.57584,
   11.7047,
   11.40175,
   11.78983,
   12.04159,
   10.67708,
   11.22497,
   10.58301,
   11.09054,
   11.48913,
   12.12436,
   11.44552,
   11.31371,
   11.13553,
   11.26943,
   11.44552,
   12.80625,
   11.6619,
   11.18034,
   10.14889,
   11.22497,
   11.31371,
   10.86278,
   10.58301,
   11.13553,
   9.5566,
   1,
   0};
   Double_t _fehx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3001[32] = {
   9.718,
   12.49,
   11.87434,
   11.09054,
   11.57584,
   11.7047,
   11.40175,
   11.78983,
   12.04159,
   10.67708,
   11.22497,
   10.58301,
   11.09054,
   11.48913,
   12.12436,
   11.44552,
   11.31371,
   11.13553,
   11.26943,
   11.44552,
   12.80625,
   11.6619,
   11.18034,
   10.14889,
   11.22497,
   11.31371,
   10.86278,
   10.58301,
   11.13553,
   9.3552,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(194.4869);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3822.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 504.9","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.3","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 144.9","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.0","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3002[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3002[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3002[32] = {
   0.2048321,
   0.2166043,
   0.2052303,
   0.2195289,
   0.2115567,
   0.202076,
   0.2102782,
   0.2047253,
   0.2033281,
   0.2113007,
   0.1947263,
   0.2041847,
   0.2057725,
   0.2089182,
   0.2120048,
   0.2268348,
   0.2196597,
   0.2109757,
   0.1910995,
   0.201022,
   0.1912999,
   0.1884332,
   0.2061588,
   0.2206183,
   0.2328195,
   0.2120736,
   0.2274254,
   0.2099504,
   0.2172676,
   0.2151612,
   0.6604411,
   0};
   Double_t _fehx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3002[32] = {
   0.2048321,
   0.2166043,
   0.2052303,
   0.2195289,
   0.2115567,
   0.202076,
   0.2102782,
   0.2047253,
   0.2033281,
   0.2113007,
   0.1947263,
   0.2041847,
   0.2057725,
   0.2089182,
   0.2120048,
   0.2268348,
   0.2196597,
   0.2109757,
   0.1910995,
   0.201022,
   0.1912999,
   0.1884332,
   0.2061588,
   0.2206183,
   0.2328195,
   0.2120736,
   0.2274254,
   0.2099504,
   0.2172676,
   0.2151612,
   0.6604411,
   0};
   grae = new TGraphAsymmErrors(32,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1210);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3003[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3003[32] = {
   0.1820637,
   0.1839714,
   0.1786527,
   0.1753099,
   0.1876024,
   0.1771717,
   0.187465,
   0.1777955,
   0.1862267,
   0.1883342,
   0.1769421,
   0.1925516,
   0.1783856,
   0.1890717,
   0.1975437,
   0.1983202,
   0.2016444,
   0.1894014,
   0.1795117,
   0.188601,
   0.1707475,
   0.1759755,
   0.1944956,
   0.189247,
   0.2057793,
   0.1950307,
   0.191562,
   0.1967535,
   0.2029553,
   0.1965834,
   0.3916947,
   0};
   Double_t _fehx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3003[32] = {
   0.1820637,
   0.1839714,
   0.1786527,
   0.1753099,
   0.1876024,
   0.1771717,
   0.187465,
   0.1777955,
   0.1862267,
   0.1883342,
   0.1769421,
   0.1925516,
   0.1783856,
   0.1890717,
   0.1975437,
   0.1983202,
   0.2016444,
   0.1894014,
   0.1795117,
   0.188601,
   0.1707475,
   0.1759755,
   0.1944956,
   0.189247,
   0.2057793,
   0.1950307,
   0.191562,
   0.1967535,
   0.2029553,
   0.1965834,
   0.3916947,
   0};
   grae = new TGraphAsymmErrors(32,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1210);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3004[32] = {
   0.913112,
   1.190701,
   1.00541,
   0.9470826,
   0.9833647,
   0.9913595,
   1.028372,
   0.9490704,
   1.123632,
   1.03981,
   1.08898,
   0.9591991,
   1.013959,
   0.9632325,
   1.059228,
   1.080157,
   1.074614,
   1.059903,
   1.059055,
   1.049631,
   0.972783,
   1.036506,
   1.082021,
   0.790114,
   1.04447,
   0.9679253,
   0.915297,
   0.880645,
   0.9747532,
   0.8056773,
   0.3350628,
   10};
   Double_t _felx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3004[32] = {
   0.0943511,
   0.0953324,
   0.08467079,
   0.08539556,
   0.08494977,
   0.08469756,
   0.09019416,
   0.0804991,
   0.09331258,
   0.09738716,
   0.09701401,
   0.09063579,
   0.09142559,
   0.08383863,
   0.08736366,
   0.09437372,
   0.09498338,
   0.09518213,
   0.09397591,
   0.09170669,
   0.07596159,
   0.08887965,
   0.09677888,
   0.07785225,
   0.09304882,
   0.08555332,
   0.08425992,
   0.08321313,
   0.08753542,
   0.08651164,
   0.3350628,
   0};
   Double_t _fehx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3004[32] = {
   0.09243357,
   0.0953324,
   0.08467079,
   0.08539556,
   0.08494977,
   0.08469756,
   0.09019416,
   0.0804991,
   0.09331258,
   0.09738716,
   0.09701401,
   0.09063579,
   0.09142559,
   0.08383863,
   0.08736366,
   0.09437372,
   0.09498338,
   0.09518213,
   0.09397591,
   0.09170669,
   0.07596159,
   0.08887965,
   0.09677888,
   0.07785225,
   0.09304882,
   0.08555332,
   0.08425992,
   0.08321313,
   0.08753542,
   0.08468845,
   0.4555882,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,1100,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
