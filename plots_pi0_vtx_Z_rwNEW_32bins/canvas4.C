#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 21:15:01 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-3.443089,1241.026,380.7332);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__10->SetBinContent(0,1.895265);
   hmc__10->SetBinContent(1,106.457);
   hmc__10->SetBinContent(2,133.0126);
   hmc__10->SetBinContent(3,141.7068);
   hmc__10->SetBinContent(4,131.5331);
   hmc__10->SetBinContent(5,138.5725);
   hmc__10->SetBinContent(6,140.8253);
   hmc__10->SetBinContent(7,129.9699);
   hmc__10->SetBinContent(8,149.245);
   hmc__10->SetBinContent(9,131.4898);
   hmc__10->SetBinContent(10,112.6163);
   hmc__10->SetBinContent(11,119.4209);
   hmc__10->SetBinContent(12,119.1582);
   hmc__10->SetBinContent(13,124.4311);
   hmc__10->SetBinContent(14,139.6244);
   hmc__10->SetBinContent(15,141.4194);
   hmc__10->SetBinContent(16,123.7709);
   hmc__10->SetBinContent(17,121.9483);
   hmc__10->SetBinContent(18,120.3611);
   hmc__10->SetBinContent(19,122.6543);
   hmc__10->SetBinContent(20,127.4465);
   hmc__10->SetBinContent(21,172.1544);
   hmc__10->SetBinContent(22,133.941);
   hmc__10->SetBinContent(23,119.2957);
   hmc__10->SetBinContent(24,133.5806);
   hmc__10->SetBinContent(25,125.0784);
   hmc__10->SetBinContent(26,136.0996);
   hmc__10->SetBinContent(27,132.4859);
   hmc__10->SetBinContent(28,129.8684);
   hmc__10->SetBinContent(29,131.4648);
   hmc__10->SetBinContent(30,115.5929);
   hmc__10->SetBinContent(31,2.984515);
   hmc__10->SetBinError(0,0.6302809);
   hmc__10->SetBinError(1,34.3599);
   hmc__10->SetBinError(2,35.81207);
   hmc__10->SetBinError(3,40.7889);
   hmc__10->SetBinError(4,33.27426);
   hmc__10->SetBinError(5,39.41925);
   hmc__10->SetBinError(6,36.66238);
   hmc__10->SetBinError(7,35.91718);
   hmc__10->SetBinError(8,45.17396);
   hmc__10->SetBinError(9,34.44816);
   hmc__10->SetBinError(10,29.56075);
   hmc__10->SetBinError(11,31.29658);
   hmc__10->SetBinError(12,32.32015);
   hmc__10->SetBinError(13,31.55602);
   hmc__10->SetBinError(14,35.10569);
   hmc__10->SetBinError(15,43.52433);
   hmc__10->SetBinError(16,37.20658);
   hmc__10->SetBinError(17,32.21955);
   hmc__10->SetBinError(18,31.9937);
   hmc__10->SetBinError(19,30.55423);
   hmc__10->SetBinError(20,31.87867);
   hmc__10->SetBinError(21,43.38749);
   hmc__10->SetBinError(22,29.59854);
   hmc__10->SetBinError(23,30.58167);
   hmc__10->SetBinError(24,35.54751);
   hmc__10->SetBinError(25,33.99562);
   hmc__10->SetBinError(26,40.63616);
   hmc__10->SetBinError(27,34.61812);
   hmc__10->SetBinError(28,31.96273);
   hmc__10->SetBinError(29,34.93856);
   hmc__10->SetBinError(30,31.7616);
   hmc__10->SetBinError(31,4.077074);
   hmc__10->SetBinError(32,0.3895343);
   hmc__10->SetBinError(33,0.3895343);
   hmc__10->SetMinimum(-3.443089);
   hmc__10->SetMaximum(361.5243);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",32,0,1100);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(180.7622);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
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
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
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

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
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

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
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

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
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

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.473804);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7259042);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2438946);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3442606);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.3764861);
   hNCpi0inFVres_stack_7->SetBinContent(1,22.22726);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.66866);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.7616);
   hNCpi0inFVres_stack_7->SetBinContent(4,37.35209);
   hNCpi0inFVres_stack_7->SetBinContent(5,45.24251);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.29692);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.47011);
   hNCpi0inFVres_stack_7->SetBinContent(8,42.82236);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.4854);
   hNCpi0inFVres_stack_7->SetBinContent(10,40.51875);
   hNCpi0inFVres_stack_7->SetBinContent(11,40.14211);
   hNCpi0inFVres_stack_7->SetBinContent(12,43.78374);
   hNCpi0inFVres_stack_7->SetBinContent(13,41.92291);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.30611);
   hNCpi0inFVres_stack_7->SetBinContent(15,49.78344);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.81911);
   hNCpi0inFVres_stack_7->SetBinContent(17,46.6641);
   hNCpi0inFVres_stack_7->SetBinContent(18,45.40446);
   hNCpi0inFVres_stack_7->SetBinContent(19,41.80134);
   hNCpi0inFVres_stack_7->SetBinContent(20,42.67688);
   hNCpi0inFVres_stack_7->SetBinContent(21,43.50273);
   hNCpi0inFVres_stack_7->SetBinContent(22,39.73956);
   hNCpi0inFVres_stack_7->SetBinContent(23,42.79129);
   hNCpi0inFVres_stack_7->SetBinContent(24,47.27776);
   hNCpi0inFVres_stack_7->SetBinContent(25,41.08649);
   hNCpi0inFVres_stack_7->SetBinContent(26,47.47507);
   hNCpi0inFVres_stack_7->SetBinContent(27,43.10898);
   hNCpi0inFVres_stack_7->SetBinContent(28,47.57666);
   hNCpi0inFVres_stack_7->SetBinContent(29,48.23);
   hNCpi0inFVres_stack_7->SetBinContent(30,31.17772);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.2510999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2236377);
   hNCpi0inFVres_stack_7->SetBinError(1,1.559443);
   hNCpi0inFVres_stack_7->SetBinError(2,2.155764);
   hNCpi0inFVres_stack_7->SetBinError(3,2.276251);
   hNCpi0inFVres_stack_7->SetBinError(4,1.94921);
   hNCpi0inFVres_stack_7->SetBinError(5,2.169278);
   hNCpi0inFVres_stack_7->SetBinError(6,2.228704);
   hNCpi0inFVres_stack_7->SetBinError(7,2.099899);
   hNCpi0inFVres_stack_7->SetBinError(8,2.145086);
   hNCpi0inFVres_stack_7->SetBinError(9,2.220408);
   hNCpi0inFVres_stack_7->SetBinError(10,2.025972);
   hNCpi0inFVres_stack_7->SetBinError(11,2.041156);
   hNCpi0inFVres_stack_7->SetBinError(12,2.148425);
   hNCpi0inFVres_stack_7->SetBinError(13,2.121306);
   hNCpi0inFVres_stack_7->SetBinError(14,2.367989);
   hNCpi0inFVres_stack_7->SetBinError(15,2.333663);
   hNCpi0inFVres_stack_7->SetBinError(16,2.090239);
   hNCpi0inFVres_stack_7->SetBinError(17,2.249779);
   hNCpi0inFVres_stack_7->SetBinError(18,2.237796);
   hNCpi0inFVres_stack_7->SetBinError(19,2.100038);
   hNCpi0inFVres_stack_7->SetBinError(20,2.123079);
   hNCpi0inFVres_stack_7->SetBinError(21,2.087909);
   hNCpi0inFVres_stack_7->SetBinError(22,2.046171);
   hNCpi0inFVres_stack_7->SetBinError(23,2.100424);
   hNCpi0inFVres_stack_7->SetBinError(24,2.326481);
   hNCpi0inFVres_stack_7->SetBinError(25,1.999787);
   hNCpi0inFVres_stack_7->SetBinError(26,2.214477);
   hNCpi0inFVres_stack_7->SetBinError(27,2.109192);
   hNCpi0inFVres_stack_7->SetBinError(28,2.237158);
   hNCpi0inFVres_stack_7->SetBinError(29,2.28362);
   hNCpi0inFVres_stack_7->SetBinError(30,1.865357);
   hNCpi0inFVres_stack_7->SetBinError(31,0.08369995);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.510447);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.956421);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.48056);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.977856);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.075006);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.54557);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.051266);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.670451);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.564844);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.30684);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.98649);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.338644);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.936666);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.56118);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.283348);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.983592);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.980927);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.715466);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.048274);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.320953);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.31108);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.129973);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.227539);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.243237);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.093776);
   hNCpi0inFVdis_stack_8->SetBinContent(26,9.677515);
   hNCpi0inFVdis_stack_8->SetBinContent(27,9.59332);
   hNCpi0inFVdis_stack_8->SetBinContent(28,10.43016);
   hNCpi0inFVdis_stack_8->SetBinContent(29,7.112363);
   hNCpi0inFVdis_stack_8->SetBinContent(30,6.538258);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8320721);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8062153);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.030769);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9747798);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9627604);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9479584);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.011168);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9183444);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.003925);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8777869);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8874518);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9195447);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9291239);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9302056);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9707124);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.046786);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.002599);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9803541);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.005442);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8552156);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9540975);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9535189);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8922989);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9751124);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9684373);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.9807837);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.002922);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.068164);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.7998742);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.8389427);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,12.30928);
   hCCpi0inFV_stack_10->SetBinContent(2,16.78983);
   hCCpi0inFV_stack_10->SetBinContent(3,20.83309);
   hCCpi0inFV_stack_10->SetBinContent(4,21.47968);
   hCCpi0inFV_stack_10->SetBinContent(5,19.99439);
   hCCpi0inFV_stack_10->SetBinContent(6,18.18078);
   hCCpi0inFV_stack_10->SetBinContent(7,17.23583);
   hCCpi0inFV_stack_10->SetBinContent(8,20.81062);
   hCCpi0inFV_stack_10->SetBinContent(9,19.79144);
   hCCpi0inFV_stack_10->SetBinContent(10,19.38356);
   hCCpi0inFV_stack_10->SetBinContent(11,17.85422);
   hCCpi0inFV_stack_10->SetBinContent(12,17.90712);
   hCCpi0inFV_stack_10->SetBinContent(13,22.33717);
   hCCpi0inFV_stack_10->SetBinContent(14,17.69323);
   hCCpi0inFV_stack_10->SetBinContent(15,22.56757);
   hCCpi0inFV_stack_10->SetBinContent(16,18.26715);
   hCCpi0inFV_stack_10->SetBinContent(17,15.8842);
   hCCpi0inFV_stack_10->SetBinContent(18,16.55733);
   hCCpi0inFV_stack_10->SetBinContent(19,16.23418);
   hCCpi0inFV_stack_10->SetBinContent(20,17.70175);
   hCCpi0inFV_stack_10->SetBinContent(21,21.59733);
   hCCpi0inFV_stack_10->SetBinContent(22,20.03296);
   hCCpi0inFV_stack_10->SetBinContent(23,18.59515);
   hCCpi0inFV_stack_10->SetBinContent(24,21.52202);
   hCCpi0inFV_stack_10->SetBinContent(25,17.94173);
   hCCpi0inFV_stack_10->SetBinContent(26,22.97408);
   hCCpi0inFV_stack_10->SetBinContent(27,21.67024);
   hCCpi0inFV_stack_10->SetBinContent(28,20.91205);
   hCCpi0inFV_stack_10->SetBinContent(29,20.95614);
   hCCpi0inFV_stack_10->SetBinContent(30,22.52225);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.788475);
   hCCpi0inFV_stack_10->SetBinError(2,2.020123);
   hCCpi0inFV_stack_10->SetBinError(3,2.316517);
   hCCpi0inFV_stack_10->SetBinError(4,2.246578);
   hCCpi0inFV_stack_10->SetBinError(5,2.216504);
   hCCpi0inFV_stack_10->SetBinError(6,2.11416);
   hCCpi0inFV_stack_10->SetBinError(7,2.090525);
   hCCpi0inFV_stack_10->SetBinError(8,2.284363);
   hCCpi0inFV_stack_10->SetBinError(9,2.207245);
   hCCpi0inFV_stack_10->SetBinError(10,2.263798);
   hCCpi0inFV_stack_10->SetBinError(11,2.185599);
   hCCpi0inFV_stack_10->SetBinError(12,2.116794);
   hCCpi0inFV_stack_10->SetBinError(13,2.347905);
   hCCpi0inFV_stack_10->SetBinError(14,2.119889);
   hCCpi0inFV_stack_10->SetBinError(15,2.358102);
   hCCpi0inFV_stack_10->SetBinError(16,2.112263);
   hCCpi0inFV_stack_10->SetBinError(17,1.998269);
   hCCpi0inFV_stack_10->SetBinError(18,2.067929);
   hCCpi0inFV_stack_10->SetBinError(19,2.04154);
   hCCpi0inFV_stack_10->SetBinError(20,2.038841);
   hCCpi0inFV_stack_10->SetBinError(21,2.351362);
   hCCpi0inFV_stack_10->SetBinError(22,2.206463);
   hCCpi0inFV_stack_10->SetBinError(23,2.152348);
   hCCpi0inFV_stack_10->SetBinError(24,2.337511);
   hCCpi0inFV_stack_10->SetBinError(25,2.100858);
   hCCpi0inFV_stack_10->SetBinError(26,2.445566);
   hCCpi0inFV_stack_10->SetBinError(27,2.347959);
   hCCpi0inFV_stack_10->SetBinError(28,2.310602);
   hCCpi0inFV_stack_10->SetBinError(29,2.288837);
   hCCpi0inFV_stack_10->SetBinError(30,2.437978);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,2.108925);
   hNCinFV_stack_11->SetBinContent(2,6.643895);
   hNCinFV_stack_11->SetBinContent(3,6.645585);
   hNCinFV_stack_11->SetBinContent(4,5.270268);
   hNCinFV_stack_11->SetBinContent(5,8.409262);
   hNCinFV_stack_11->SetBinContent(6,5.808851);
   hNCinFV_stack_11->SetBinContent(7,10.05182);
   hNCinFV_stack_11->SetBinContent(8,8.648005);
   hNCinFV_stack_11->SetBinContent(9,5.676615);
   hNCinFV_stack_11->SetBinContent(10,7.32425);
   hNCinFV_stack_11->SetBinContent(11,7.380884);
   hNCinFV_stack_11->SetBinContent(12,8.45467);
   hNCinFV_stack_11->SetBinContent(13,8.207475);
   hNCinFV_stack_11->SetBinContent(14,7.372432);
   hNCinFV_stack_11->SetBinContent(15,7.280532);
   hNCinFV_stack_11->SetBinContent(16,9.579411);
   hNCinFV_stack_11->SetBinContent(17,7.912705);
   hNCinFV_stack_11->SetBinContent(18,7.475557);
   hNCinFV_stack_11->SetBinContent(19,7.522655);
   hNCinFV_stack_11->SetBinContent(20,7.280532);
   hNCinFV_stack_11->SetBinContent(21,13.09723);
   hNCinFV_stack_11->SetBinContent(22,6.49198);
   hNCinFV_stack_11->SetBinContent(23,6.947116);
   hNCinFV_stack_11->SetBinContent(24,8.111112);
   hNCinFV_stack_11->SetBinContent(25,11.07405);
   hNCinFV_stack_11->SetBinContent(26,9.086236);
   hNCinFV_stack_11->SetBinContent(27,7.520358);
   hNCinFV_stack_11->SetBinContent(28,8.680014);
   hNCinFV_stack_11->SetBinContent(29,10.06535);
   hNCinFV_stack_11->SetBinContent(30,7.379193);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.6806842);
   hNCinFV_stack_11->SetBinError(2,1.301948);
   hNCinFV_stack_11->SetBinError(3,1.302203);
   hNCinFV_stack_11->SetBinError(4,1.19395);
   hNCinFV_stack_11->SetBinError(5,1.42876);
   hNCinFV_stack_11->SetBinError(6,1.257217);
   hNCinFV_stack_11->SetBinError(7,1.629816);
   hNCinFV_stack_11->SetBinError(8,1.495231);
   hNCinFV_stack_11->SetBinError(9,1.144369);
   hNCinFV_stack_11->SetBinError(10,1.387988);
   hNCinFV_stack_11->SetBinError(11,1.374594);
   hNCinFV_stack_11->SetBinError(12,1.482681);
   hNCinFV_stack_11->SetBinError(13,1.414451);
   hNCinFV_stack_11->SetBinError(14,1.373389);
   hNCinFV_stack_11->SetBinError(15,1.330483);
   hNCinFV_stack_11->SetBinError(16,1.506507);
   hNCinFV_stack_11->SetBinError(17,1.428965);
   hNCinFV_stack_11->SetBinError(18,1.3447);
   hNCinFV_stack_11->SetBinError(19,1.402095);
   hNCinFV_stack_11->SetBinError(20,1.330483);
   hNCinFV_stack_11->SetBinError(21,1.776363);
   hNCinFV_stack_11->SetBinError(22,1.270722);
   hNCinFV_stack_11->SetBinError(23,1.287289);
   hNCinFV_stack_11->SetBinError(24,1.442671);
   hNCinFV_stack_11->SetBinError(25,1.733241);
   hNCinFV_stack_11->SetBinError(26,1.50714);
   hNCinFV_stack_11->SetBinError(27,1.329128);
   hNCinFV_stack_11->SetBinError(28,1.499856);
   hNCinFV_stack_11->SetBinError(29,1.63144);
   hNCinFV_stack_11->SetBinError(30,1.374353);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,9.278297);
   hnumuCCinFV_stack_12->SetBinContent(2,10.37384);
   hnumuCCinFV_stack_12->SetBinContent(3,9.890974);
   hnumuCCinFV_stack_12->SetBinContent(4,11.75338);
   hnumuCCinFV_stack_12->SetBinContent(5,8.79719);
   hnumuCCinFV_stack_12->SetBinContent(6,9.551065);
   hnumuCCinFV_stack_12->SetBinContent(7,11.52585);
   hnumuCCinFV_stack_12->SetBinContent(8,13.13174);
   hnumuCCinFV_stack_12->SetBinContent(9,11.31815);
   hnumuCCinFV_stack_12->SetBinContent(10,6.170019);
   hnumuCCinFV_stack_12->SetBinContent(11,6.597718);
   hnumuCCinFV_stack_12->SetBinContent(12,5.977641);
   hnumuCCinFV_stack_12->SetBinContent(13,7.626618);
   hnumuCCinFV_stack_12->SetBinContent(14,7.197592);
   hnumuCCinFV_stack_12->SetBinContent(15,7.897731);
   hnumuCCinFV_stack_12->SetBinContent(16,5.357365);
   hnumuCCinFV_stack_12->SetBinContent(17,8.878082);
   hnumuCCinFV_stack_12->SetBinContent(18,7.010317);
   hnumuCCinFV_stack_12->SetBinContent(19,7.025515);
   hnumuCCinFV_stack_12->SetBinContent(20,9.958799);
   hnumuCCinFV_stack_12->SetBinContent(21,16.157);
   hnumuCCinFV_stack_12->SetBinContent(22,9.979607);
   hnumuCCinFV_stack_12->SetBinContent(23,6.440506);
   hnumuCCinFV_stack_12->SetBinContent(24,8.88406);
   hnumuCCinFV_stack_12->SetBinContent(25,6.401057);
   hnumuCCinFV_stack_12->SetBinContent(26,8.088504);
   hnumuCCinFV_stack_12->SetBinContent(27,6.437835);
   hnumuCCinFV_stack_12->SetBinContent(28,7.635601);
   hnumuCCinFV_stack_12->SetBinContent(29,10.52715);
   hnumuCCinFV_stack_12->SetBinContent(30,10.99005);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.121376);
   hnumuCCinFV_stack_12->SetBinError(2,1.717005);
   hnumuCCinFV_stack_12->SetBinError(3,1.725567);
   hnumuCCinFV_stack_12->SetBinError(4,1.731398);
   hnumuCCinFV_stack_12->SetBinError(5,1.666794);
   hnumuCCinFV_stack_12->SetBinError(6,1.696865);
   hnumuCCinFV_stack_12->SetBinError(7,3.047773);
   hnumuCCinFV_stack_12->SetBinError(8,2.586156);
   hnumuCCinFV_stack_12->SetBinError(9,1.890207);
   hnumuCCinFV_stack_12->SetBinError(10,1.507481);
   hnumuCCinFV_stack_12->SetBinError(11,1.318438);
   hnumuCCinFV_stack_12->SetBinError(12,1.727121);
   hnumuCCinFV_stack_12->SetBinError(13,1.511295);
   hnumuCCinFV_stack_12->SetBinError(14,1.39296);
   hnumuCCinFV_stack_12->SetBinError(15,1.488371);
   hnumuCCinFV_stack_12->SetBinError(16,1.148892);
   hnumuCCinFV_stack_12->SetBinError(17,1.619486);
   hnumuCCinFV_stack_12->SetBinError(18,1.306479);
   hnumuCCinFV_stack_12->SetBinError(19,1.55239);
   hnumuCCinFV_stack_12->SetBinError(20,2.151943);
   hnumuCCinFV_stack_12->SetBinError(21,2.095098);
   hnumuCCinFV_stack_12->SetBinError(22,1.715498);
   hnumuCCinFV_stack_12->SetBinError(23,1.25575);
   hnumuCCinFV_stack_12->SetBinError(24,1.582285);
   hnumuCCinFV_stack_12->SetBinError(25,1.235896);
   hnumuCCinFV_stack_12->SetBinError(26,1.525014);
   hnumuCCinFV_stack_12->SetBinError(27,1.315889);
   hnumuCCinFV_stack_12->SetBinError(28,1.405695);
   hnumuCCinFV_stack_12->SetBinError(29,1.831187);
   hnumuCCinFV_stack_12->SetBinError(30,1.962761);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.5913461);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,1.088552);
   hnueCCinFV_stack_13->SetBinContent(8,1.375494);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(12,0.4244309);
   hnueCCinFV_stack_13->SetBinContent(13,1.423555);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.865311);
   hnueCCinFV_stack_13->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_13->SetBinContent(17,0.9245921);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.321025);
   hnueCCinFV_stack_13->SetBinContent(20,1.077868);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.367688);
   hnueCCinFV_stack_13->SetBinContent(23,0.5221299);
   hnueCCinFV_stack_13->SetBinContent(24,1.309485);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.012306);
   hnueCCinFV_stack_13->SetBinContent(27,1.418056);
   hnueCCinFV_stack_13->SetBinContent(28,0.5066535);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.4417072);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.605439);
   hnueCCinFV_stack_13->SetBinError(8,0.5767193);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.2441371);
   hnueCCinFV_stack_13->SetBinError(12,0.4244309);
   hnueCCinFV_stack_13->SetBinError(13,0.7616284);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6920427);
   hnueCCinFV_stack_13->SetBinError(16,0.3532401);
   hnueCCinFV_stack_13->SetBinError(17,0.6538334);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.7882246);
   hnueCCinFV_stack_13->SetBinError(20,0.5370783);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.7329359);
   hnueCCinFV_stack_13->SetBinError(23,0.3741997);
   hnueCCinFV_stack_13->SetBinError(24,0.8480199);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.453559);
   hnueCCinFV_stack_13->SetBinError(27,0.6908145);
   hnueCCinFV_stack_13->SetBinError(28,0.3670948);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.4102043);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__11->SetBinContent(0,1.895265);
   hmcerror__11->SetBinContent(1,106.457);
   hmcerror__11->SetBinContent(2,133.0126);
   hmcerror__11->SetBinContent(3,141.7068);
   hmcerror__11->SetBinContent(4,131.5331);
   hmcerror__11->SetBinContent(5,138.5725);
   hmcerror__11->SetBinContent(6,140.8253);
   hmcerror__11->SetBinContent(7,129.9699);
   hmcerror__11->SetBinContent(8,149.245);
   hmcerror__11->SetBinContent(9,131.4898);
   hmcerror__11->SetBinContent(10,112.6163);
   hmcerror__11->SetBinContent(11,119.4209);
   hmcerror__11->SetBinContent(12,119.1582);
   hmcerror__11->SetBinContent(13,124.4311);
   hmcerror__11->SetBinContent(14,139.6244);
   hmcerror__11->SetBinContent(15,141.4194);
   hmcerror__11->SetBinContent(16,123.7709);
   hmcerror__11->SetBinContent(17,121.9483);
   hmcerror__11->SetBinContent(18,120.3611);
   hmcerror__11->SetBinContent(19,122.6543);
   hmcerror__11->SetBinContent(20,127.4465);
   hmcerror__11->SetBinContent(21,172.1544);
   hmcerror__11->SetBinContent(22,133.941);
   hmcerror__11->SetBinContent(23,119.2957);
   hmcerror__11->SetBinContent(24,133.5806);
   hmcerror__11->SetBinContent(25,125.0784);
   hmcerror__11->SetBinContent(26,136.0996);
   hmcerror__11->SetBinContent(27,132.4859);
   hmcerror__11->SetBinContent(28,129.8684);
   hmcerror__11->SetBinContent(29,131.4648);
   hmcerror__11->SetBinContent(30,115.5929);
   hmcerror__11->SetBinContent(31,2.984515);
   hmcerror__11->SetBinError(0,0.6302809);
   hmcerror__11->SetBinError(1,34.3599);
   hmcerror__11->SetBinError(2,35.81207);
   hmcerror__11->SetBinError(3,40.7889);
   hmcerror__11->SetBinError(4,33.27426);
   hmcerror__11->SetBinError(5,39.41925);
   hmcerror__11->SetBinError(6,36.66238);
   hmcerror__11->SetBinError(7,35.91718);
   hmcerror__11->SetBinError(8,45.17396);
   hmcerror__11->SetBinError(9,34.44816);
   hmcerror__11->SetBinError(10,29.56075);
   hmcerror__11->SetBinError(11,31.29658);
   hmcerror__11->SetBinError(12,32.32015);
   hmcerror__11->SetBinError(13,31.55602);
   hmcerror__11->SetBinError(14,35.10569);
   hmcerror__11->SetBinError(15,43.52433);
   hmcerror__11->SetBinError(16,37.20658);
   hmcerror__11->SetBinError(17,32.21955);
   hmcerror__11->SetBinError(18,31.9937);
   hmcerror__11->SetBinError(19,30.55423);
   hmcerror__11->SetBinError(20,31.87867);
   hmcerror__11->SetBinError(21,43.38749);
   hmcerror__11->SetBinError(22,29.59854);
   hmcerror__11->SetBinError(23,30.58167);
   hmcerror__11->SetBinError(24,35.54751);
   hmcerror__11->SetBinError(25,33.99562);
   hmcerror__11->SetBinError(26,40.63616);
   hmcerror__11->SetBinError(27,34.61812);
   hmcerror__11->SetBinError(28,31.96273);
   hmcerror__11->SetBinError(29,34.93856);
   hmcerror__11->SetBinError(30,31.7616);
   hmcerror__11->SetBinError(31,4.077074);
   hmcerror__11->SetBinError(32,0.3895343);
   hmcerror__11->SetBinError(33,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[32] = {
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
   Double_t _fy3013[32] = {
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
   Double_t _felx3013[32] = {
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
   Double_t _fely3013[32] = {
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
   Double_t _fehx3013[32] = {
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
   Double_t _fehy3013[32] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1210);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(194.4869);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.8/32","");
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

   ci = 1473;
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

   ci = 1474;
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

   ci = 1475;
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

   ci = 1476;
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

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.4","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 233.8","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 266.9","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   canvas4->cd();
  
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
   
   Double_t _fx3014[32] = {
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
   Double_t _fy3014[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[32] = {
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
   Double_t _fely3014[32] = {
   0.3227584,
   0.2692382,
   0.2878401,
   0.2529727,
   0.2844666,
   0.2603395,
   0.27635,
   0.3026833,
   0.2619835,
   0.2624909,
   0.2620696,
   0.2712372,
   0.2536024,
   0.2514295,
   0.3077678,
   0.3006084,
   0.2642066,
   0.2658143,
   0.2491085,
   0.2501337,
   0.2520266,
   0.2209819,
   0.2563518,
   0.2661128,
   0.2717946,
   0.2985766,
   0.2612967,
   0.2461162,
   0.2657636,
   0.2747713,
   1.366076,
   0};
   Double_t _fehx3014[32] = {
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
   Double_t _fehy3014[32] = {
   0.3227584,
   0.2692382,
   0.2878401,
   0.2529727,
   0.2844666,
   0.2603395,
   0.27635,
   0.3026833,
   0.2619835,
   0.2624909,
   0.2620696,
   0.2712372,
   0.2536024,
   0.2514295,
   0.3077678,
   0.3006084,
   0.2642066,
   0.2658143,
   0.2491085,
   0.2501337,
   0.2520266,
   0.2209819,
   0.2563518,
   0.2661128,
   0.2717946,
   0.2985766,
   0.2612967,
   0.2461162,
   0.2657636,
   0.2747713,
   1.366076,
   0};
   grae = new TGraphAsymmErrors(32,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1210);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[32] = {
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
   Double_t _fy3015[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[32] = {
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
   Double_t _fely3015[32] = {
   0.1877967,
   0.1934646,
   0.1900117,
   0.1878539,
   0.1977503,
   0.1878176,
   0.1982673,
   0.1857558,
   0.1974551,
   0.198564,
   0.1861198,
   0.2035573,
   0.1875431,
   0.1985653,
   0.2081672,
   0.2078755,
   0.2102219,
   0.1989745,
   0.1897906,
   0.1991999,
   0.1804727,
   0.1865063,
   0.2053039,
   0.198781,
   0.2147281,
   0.2038126,
   0.2007348,
   0.2054675,
   0.2132768,
   0.2077777,
   0.3945174,
   0};
   Double_t _fehx3015[32] = {
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
   Double_t _fehy3015[32] = {
   0.1877967,
   0.1934646,
   0.1900117,
   0.1878539,
   0.1977503,
   0.1878176,
   0.1982673,
   0.1857558,
   0.1974551,
   0.198564,
   0.1861198,
   0.2035573,
   0.1875431,
   0.1985653,
   0.2081672,
   0.2078755,
   0.2102219,
   0.1989745,
   0.1897906,
   0.1991999,
   0.1804727,
   0.1865063,
   0.2053039,
   0.198781,
   0.2147281,
   0.2038126,
   0.2007348,
   0.2054675,
   0.2132768,
   0.2077777,
   0.3945174,
   0};
   grae = new TGraphAsymmErrors(32,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1210);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[32] = {
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
   Double_t _fy3016[32] = {
   0.9017723,
   1.172821,
   0.995012,
   0.9351262,
   0.967003,
   0.9728368,
   1.000232,
   0.9313545,
   1.102747,
   1.012287,
   1.055092,
   0.9399266,
   0.988499,
   0.9453938,
   1.039462,
   1.058407,
   1.049625,
   1.030233,
   1.035431,
   1.027882,
   0.9526329,
   1.015372,
   1.047816,
   0.77107,
   1.007369,
   0.9404876,
   0.8906609,
   0.8624112,
   0.9432182,
   0.7699437,
   0.3350628,
   10};
   Double_t _felx3016[32] = {
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
   Double_t _fely3016[32] = {
   0.09317939,
   0.09390086,
   0.08379513,
   0.08431749,
   0.08353633,
   0.08311505,
   0.08772611,
   0.07899646,
   0.09157816,
   0.09480935,
   0.09399505,
   0.08881472,
   0.08912995,
   0.08228597,
   0.08573334,
   0.09247343,
   0.09277465,
   0.09251767,
   0.09187961,
   0.08980649,
   0.07438814,
   0.08706746,
   0.09371952,
   0.07597578,
   0.08974352,
   0.08312815,
   0.08199198,
   0.0814902,
   0.08470349,
   0.08267465,
   0.3350628,
   0};
   Double_t _fehx3016[32] = {
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
   Double_t _fehy3016[32] = {
   0.09128566,
   0.09390086,
   0.08379513,
   0.08431749,
   0.08353633,
   0.08311505,
   0.08772611,
   0.07899646,
   0.09157816,
   0.09480935,
   0.09399505,
   0.08881472,
   0.08912995,
   0.08228597,
   0.08573334,
   0.09247343,
   0.09277465,
   0.09251767,
   0.09187961,
   0.08980649,
   0.07438814,
   0.08706746,
   0.09371952,
   0.07597578,
   0.08974352,
   0.08312815,
   0.08199198,
   0.0814902,
   0.08470349,
   0.08093233,
   0.4555882,
   0};
   grae = new TGraphAsymmErrors(32,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1210);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
