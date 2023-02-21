#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 10:27:35 2022) by ROOT version 6.26/00
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
   pad1->Range(-169.2308,-1.989019,1241.026,219.9436);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__19->SetBinContent(0,0.4683926);
   hmc__19->SetBinContent(1,47.43081);
   hmc__19->SetBinContent(2,78.0731);
   hmc__19->SetBinContent(3,72.04726);
   hmc__19->SetBinContent(4,80.01711);
   hmc__19->SetBinContent(5,83.26855);
   hmc__19->SetBinContent(6,74.40878);
   hmc__19->SetBinContent(7,83.35331);
   hmc__19->SetBinContent(8,90.28403);
   hmc__19->SetBinContent(9,81.5994);
   hmc__19->SetBinContent(10,91.44361);
   hmc__19->SetBinContent(11,96.78078);
   hmc__19->SetBinContent(12,78.89566);
   hmc__19->SetBinContent(13,88.84722);
   hmc__19->SetBinContent(14,99.45093);
   hmc__19->SetBinContent(15,82.58161);
   hmc__19->SetBinContent(16,86.24567);
   hmc__19->SetBinContent(17,90.38597);
   hmc__19->SetBinContent(18,84.72247);
   hmc__19->SetBinContent(19,84.8231);
   hmc__19->SetBinContent(20,89.15699);
   hmc__19->SetBinContent(21,72.09824);
   hmc__19->SetBinContent(22,82.6615);
   hmc__19->SetBinContent(23,78.29118);
   hmc__19->SetBinContent(24,83.60844);
   hmc__19->SetBinContent(25,78.49863);
   hmc__19->SetBinContent(26,78.0078);
   hmc__19->SetBinContent(27,81.30819);
   hmc__19->SetBinContent(28,75.67976);
   hmc__19->SetBinContent(29,61.5022);
   hmc__19->SetBinContent(30,31.97756);
   hmc__19->SetBinContent(31,1.139098);
   hmc__19->SetBinError(0,0.3516553);
   hmc__19->SetBinError(1,21.55895);
   hmc__19->SetBinError(2,28.40769);
   hmc__19->SetBinError(3,27.19305);
   hmc__19->SetBinError(4,27.24375);
   hmc__19->SetBinError(5,28.64259);
   hmc__19->SetBinError(6,30.43503);
   hmc__19->SetBinError(7,32.32767);
   hmc__19->SetBinError(8,30.84124);
   hmc__19->SetBinError(9,32.61533);
   hmc__19->SetBinError(10,35.13883);
   hmc__19->SetBinError(11,32.70247);
   hmc__19->SetBinError(12,31.30828);
   hmc__19->SetBinError(13,34.65937);
   hmc__19->SetBinError(14,37.8966);
   hmc__19->SetBinError(15,36.52617);
   hmc__19->SetBinError(16,36.15762);
   hmc__19->SetBinError(17,33.87285);
   hmc__19->SetBinError(18,33.28653);
   hmc__19->SetBinError(19,34.28397);
   hmc__19->SetBinError(20,34.33986);
   hmc__19->SetBinError(21,26.37074);
   hmc__19->SetBinError(22,34.39662);
   hmc__19->SetBinError(23,31.18994);
   hmc__19->SetBinError(24,28.72707);
   hmc__19->SetBinError(25,33.76894);
   hmc__19->SetBinError(26,32.48);
   hmc__19->SetBinError(27,30.5313);
   hmc__19->SetBinError(28,32.70981);
   hmc__19->SetBinError(29,29.60774);
   hmc__19->SetBinError(30,16.61839);
   hmc__19->SetBinError(31,1.41445);
   hmc__19->SetBinError(32,0.3895343);
   hmc__19->SetBinError(33,0.3895343);
   hmc__19->SetMinimum(-1.989019);
   hmc__19->SetMaximum(208.8469);
   hmc__19->SetEntries(2811.899);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",32,0,1100);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(104.4235);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.570749);
   hbadmatch_stack_1->SetBinContent(2,0.9074);
   hbadmatch_stack_1->SetBinContent(3,0.8528734);
   hbadmatch_stack_1->SetBinContent(4,4.22085);
   hbadmatch_stack_1->SetBinContent(5,4.68348);
   hbadmatch_stack_1->SetBinContent(6,0.7365423);
   hbadmatch_stack_1->SetBinContent(7,2.814243);
   hbadmatch_stack_1->SetBinContent(8,2.740466);
   hbadmatch_stack_1->SetBinContent(9,1.428923);
   hbadmatch_stack_1->SetBinContent(10,1.302933);
   hbadmatch_stack_1->SetBinContent(11,2.267577);
   hbadmatch_stack_1->SetBinContent(12,3.322979);
   hbadmatch_stack_1->SetBinContent(13,1.264909);
   hbadmatch_stack_1->SetBinContent(14,2.085918);
   hbadmatch_stack_1->SetBinContent(15,0.8351487);
   hbadmatch_stack_1->SetBinContent(16,0.9844182);
   hbadmatch_stack_1->SetBinContent(17,2.53232);
   hbadmatch_stack_1->SetBinContent(18,1.691017);
   hbadmatch_stack_1->SetBinContent(19,2.410301);
   hbadmatch_stack_1->SetBinContent(20,2.242455);
   hbadmatch_stack_1->SetBinContent(21,2.802047);
   hbadmatch_stack_1->SetBinContent(22,1.665231);
   hbadmatch_stack_1->SetBinContent(23,1.709112);
   hbadmatch_stack_1->SetBinContent(24,1.162824);
   hbadmatch_stack_1->SetBinContent(25,1.128866);
   hbadmatch_stack_1->SetBinContent(26,1.424817);
   hbadmatch_stack_1->SetBinContent(27,1.175213);
   hbadmatch_stack_1->SetBinContent(28,1.076719);
   hbadmatch_stack_1->SetBinContent(29,0.4150724);
   hbadmatch_stack_1->SetBinContent(30,1.37482);
   hbadmatch_stack_1->SetBinError(1,0.5921869);
   hbadmatch_stack_1->SetBinError(2,0.5319689);
   hbadmatch_stack_1->SetBinError(3,0.4550634);
   hbadmatch_stack_1->SetBinError(4,1.433945);
   hbadmatch_stack_1->SetBinError(5,1.206819);
   hbadmatch_stack_1->SetBinError(6,0.3817179);
   hbadmatch_stack_1->SetBinError(7,0.9563966);
   hbadmatch_stack_1->SetBinError(8,0.8636444);
   hbadmatch_stack_1->SetBinError(9,0.6809712);
   hbadmatch_stack_1->SetBinError(10,0.6719358);
   hbadmatch_stack_1->SetBinError(11,0.8178957);
   hbadmatch_stack_1->SetBinError(12,2.09567);
   hbadmatch_stack_1->SetBinError(13,0.5417235);
   hbadmatch_stack_1->SetBinError(14,0.7362379);
   hbadmatch_stack_1->SetBinError(15,0.5115071);
   hbadmatch_stack_1->SetBinError(16,0.4175827);
   hbadmatch_stack_1->SetBinError(17,0.8917062);
   hbadmatch_stack_1->SetBinError(18,0.6608674);
   hbadmatch_stack_1->SetBinError(19,0.9387934);
   hbadmatch_stack_1->SetBinError(20,0.7637556);
   hbadmatch_stack_1->SetBinError(21,0.9995835);
   hbadmatch_stack_1->SetBinError(22,0.641188);
   hbadmatch_stack_1->SetBinError(23,0.5841464);
   hbadmatch_stack_1->SetBinError(24,0.6149252);
   hbadmatch_stack_1->SetBinError(25,0.480153);
   hbadmatch_stack_1->SetBinError(26,0.5198217);
   hbadmatch_stack_1->SetBinError(27,0.5218529);
   hbadmatch_stack_1->SetBinError(28,0.5551528);
   hbadmatch_stack_1->SetBinError(29,0.2938992);
   hbadmatch_stack_1->SetBinError(30,0.6360766);
   hbadmatch_stack_1->SetEntries(226);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.461993);
   hext_stack_2->SetBinContent(2,11.58937);
   hext_stack_2->SetBinContent(3,7.885314);
   hext_stack_2->SetBinContent(4,6.77367);
   hext_stack_2->SetBinContent(5,8.000648);
   hext_stack_2->SetBinContent(6,3.558419);
   hext_stack_2->SetBinContent(7,10.5671);
   hext_stack_2->SetBinContent(8,11.35435);
   hext_stack_2->SetBinContent(9,3.330584);
   hext_stack_2->SetBinContent(10,5.344809);
   hext_stack_2->SetBinContent(11,12.99511);
   hext_stack_2->SetBinContent(12,4.221574);
   hext_stack_2->SetBinContent(13,5.587004);
   hext_stack_2->SetBinContent(14,9.309826);
   hext_stack_2->SetBinContent(15,3.730002);
   hext_stack_2->SetBinContent(16,7.347444);
   hext_stack_2->SetBinContent(17,4.620993);
   hext_stack_2->SetBinContent(18,5.751408);
   hext_stack_2->SetBinContent(19,7.284012);
   hext_stack_2->SetBinContent(20,6.049854);
   hext_stack_2->SetBinContent(21,5.281377);
   hext_stack_2->SetBinContent(22,3.897177);
   hext_stack_2->SetBinContent(23,2.6702);
   hext_stack_2->SetBinContent(24,9.51889);
   hext_stack_2->SetBinContent(25,4.628173);
   hext_stack_2->SetBinContent(26,4.919439);
   hext_stack_2->SetBinContent(27,4.53161);
   hext_stack_2->SetBinContent(28,7.161499);
   hext_stack_2->SetBinContent(29,7.511847);
   hext_stack_2->SetBinContent(30,1.137595);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,0.7356036);
   hext_stack_2->SetBinError(2,2.557177);
   hext_stack_2->SetBinError(3,2.111066);
   hext_stack_2->SetBinError(4,1.884738);
   hext_stack_2->SetBinError(5,1.961378);
   hext_stack_2->SetBinError(6,1.301958);
   hext_stack_2->SetBinError(7,2.34386);
   hext_stack_2->SetBinError(8,2.508547);
   hext_stack_2->SetBinError(9,1.116937);
   hext_stack_2->SetBinError(10,1.530177);
   hext_stack_2->SetBinError(11,2.559628);
   hext_stack_2->SetBinError(12,1.226034);
   hext_stack_2->SetBinError(13,1.544858);
   hext_stack_2->SetBinError(14,2.049844);
   hext_stack_2->SetBinError(15,1.270461);
   hext_stack_2->SetBinError(16,1.871207);
   hext_stack_2->SetBinError(17,1.367364);
   hext_stack_2->SetBinError(18,1.583276);
   hext_stack_2->SetBinError(19,1.781585);
   hext_stack_2->SetBinError(20,1.75513);
   hext_stack_2->SetBinError(21,1.41918);
   hext_stack_2->SetBinError(22,1.182339);
   hext_stack_2->SetBinError(23,1.050314);
   hext_stack_2->SetBinError(24,2.21736);
   hext_stack_2->SetBinError(25,1.291697);
   hext_stack_2->SetBinError(26,1.563138);
   hext_stack_2->SetBinError(27,1.418025);
   hext_stack_2->SetBinError(28,1.996207);
   hext_stack_2->SetBinError(29,1.903048);
   hext_stack_2->SetBinError(30,0.6602113);
   hext_stack_2->SetBinError(31,0.4065989);
   hext_stack_2->SetEntries(428);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.6131097);
   hdirt_stack_3->SetBinContent(2,0.9419918);
   hdirt_stack_3->SetBinContent(3,1.034213);
   hdirt_stack_3->SetBinContent(4,1.200712);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.4762587);
   hdirt_stack_3->SetBinContent(8,0.185975);
   hdirt_stack_3->SetBinContent(9,0.3896828);
   hdirt_stack_3->SetBinContent(10,1.771966);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.4794168);
   hdirt_stack_3->SetBinContent(14,0.5388689);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.1601926);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.2620342);
   hdirt_stack_3->SetBinContent(27,0.4377912);
   hdirt_stack_3->SetBinContent(28,0.4413228);
   hdirt_stack_3->SetBinError(1,0.3557628);
   hdirt_stack_3->SetBinError(2,0.4286583);
   hdirt_stack_3->SetBinError(3,0.4656445);
   hdirt_stack_3->SetBinError(4,0.6249799);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.3652866);
   hdirt_stack_3->SetBinError(8,0.185975);
   hdirt_stack_3->SetBinError(9,0.2870053);
   hdirt_stack_3->SetBinError(10,1.059025);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(13,0.3402743);
   hdirt_stack_3->SetBinError(14,0.4239131);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.1601926);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(26,0.2620342);
   hdirt_stack_3->SetBinError(27,0.3095651);
   hdirt_stack_3->SetBinError(28,0.2557574);
   hdirt_stack_3->SetEntries(50);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,7.133787);
   houtFV_stack_4->SetBinContent(2,3.11489);
   houtFV_stack_4->SetBinContent(3,2.677494);
   houtFV_stack_4->SetBinContent(4,2.505323);
   houtFV_stack_4->SetBinContent(5,1.701082);
   houtFV_stack_4->SetBinContent(6,1.874771);
   houtFV_stack_4->SetBinContent(7,2.00897);
   houtFV_stack_4->SetBinContent(8,3.149467);
   houtFV_stack_4->SetBinContent(9,2.837707);
   houtFV_stack_4->SetBinContent(10,2.652154);
   houtFV_stack_4->SetBinContent(11,4.017456);
   houtFV_stack_4->SetBinContent(12,3.461328);
   houtFV_stack_4->SetBinContent(13,2.015178);
   houtFV_stack_4->SetBinContent(14,2.338055);
   houtFV_stack_4->SetBinContent(15,1.702288);
   houtFV_stack_4->SetBinContent(16,3.658565);
   houtFV_stack_4->SetBinContent(17,2.523078);
   houtFV_stack_4->SetBinContent(18,1.754657);
   houtFV_stack_4->SetBinContent(19,2.41844);
   houtFV_stack_4->SetBinContent(20,3.272321);
   houtFV_stack_4->SetBinContent(21,3.602856);
   houtFV_stack_4->SetBinContent(22,3.326108);
   houtFV_stack_4->SetBinContent(23,3.325555);
   houtFV_stack_4->SetBinContent(24,3.663607);
   houtFV_stack_4->SetBinContent(25,3.068866);
   houtFV_stack_4->SetBinContent(26,1.66002);
   houtFV_stack_4->SetBinContent(27,4.08683);
   houtFV_stack_4->SetBinContent(28,2.326363);
   houtFV_stack_4->SetBinContent(29,3.10678);
   houtFV_stack_4->SetBinContent(30,1.641631);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,1.304424);
   houtFV_stack_4->SetBinError(2,0.88484);
   houtFV_stack_4->SetBinError(3,0.7811755);
   houtFV_stack_4->SetBinError(4,0.7667631);
   houtFV_stack_4->SetBinError(5,0.6354074);
   houtFV_stack_4->SetBinError(6,0.5798);
   houtFV_stack_4->SetBinError(7,0.7545172);
   houtFV_stack_4->SetBinError(8,0.8531355);
   houtFV_stack_4->SetBinError(9,0.7490164);
   houtFV_stack_4->SetBinError(10,0.7263486);
   houtFV_stack_4->SetBinError(11,0.9598561);
   houtFV_stack_4->SetBinError(12,0.9089153);
   houtFV_stack_4->SetBinError(13,0.7607449);
   houtFV_stack_4->SetBinError(14,0.7286085);
   houtFV_stack_4->SetBinError(15,0.6035811);
   houtFV_stack_4->SetBinError(16,0.9151354);
   houtFV_stack_4->SetBinError(17,0.795684);
   houtFV_stack_4->SetBinError(18,0.595013);
   houtFV_stack_4->SetBinError(19,0.7905316);
   houtFV_stack_4->SetBinError(20,0.9047726);
   houtFV_stack_4->SetBinError(21,1.014401);
   houtFV_stack_4->SetBinError(22,0.9062752);
   houtFV_stack_4->SetBinError(23,0.9491655);
   houtFV_stack_4->SetBinError(24,0.9965776);
   houtFV_stack_4->SetBinError(25,0.8673189);
   houtFV_stack_4->SetBinError(26,0.5620767);
   houtFV_stack_4->SetBinError(27,1.049868);
   houtFV_stack_4->SetBinError(28,0.7060279);
   houtFV_stack_4->SetBinError(29,0.8664481);
   houtFV_stack_4->SetBinError(30,0.6517497);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetEntries(411);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2285056);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1963855);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1657734);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2899644);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3101375);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1536564);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5697801);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.04354476);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1064809);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08260205);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09965283);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08099589);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.06921894);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1966769);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3078851);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1615717);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1775981);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.22069);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.285418);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.3396796);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1558255);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.09581377);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1042533);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1829776);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.183731);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.07944201);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2566131);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03228062);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.0623148);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.0609878);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05049033);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05727274);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04194035);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1477068);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2582067);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1075676);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.08273252);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1659446);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1811098);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.176858);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.01491798);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2171149);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.381549);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1686638);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1367028);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2431103);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.393863);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5415764);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6109749);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2274163);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6811899);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1411373);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2476639);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.337019);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5148004);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6122324);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4800681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4724602);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.221285);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3015285);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3761616);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1983247);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6405365);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6260296);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2615994);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2932001);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.6250339);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.4246339);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.329969);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1102104);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1214282);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1749735);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07307677);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04882775);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0777834);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1634721);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2055342);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2582515);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1187615);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2445306);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05104065);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.08659173);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1019793);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.20095);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2762712);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2119473);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2072653);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06360224);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0922499);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1905828);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.09195214);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2838988);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3191433);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1165329);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1041262);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2334863);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.1869628);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1452418);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.04500982);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1290437);
   hNCpi0inFVqe_stack_6->SetEntries(314);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4683926);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.46757);
   hNCpi0inFVres_stack_7->SetBinContent(2,25.71832);
   hNCpi0inFVres_stack_7->SetBinContent(3,25.64273);
   hNCpi0inFVres_stack_7->SetBinContent(4,26.08926);
   hNCpi0inFVres_stack_7->SetBinContent(5,28.91547);
   hNCpi0inFVres_stack_7->SetBinContent(6,30.81073);
   hNCpi0inFVres_stack_7->SetBinContent(7,31.108);
   hNCpi0inFVres_stack_7->SetBinContent(8,28.49207);
   hNCpi0inFVres_stack_7->SetBinContent(9,33.53502);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.6717);
   hNCpi0inFVres_stack_7->SetBinContent(11,33.16224);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.76571);
   hNCpi0inFVres_stack_7->SetBinContent(13,37.89479);
   hNCpi0inFVres_stack_7->SetBinContent(14,36.59195);
   hNCpi0inFVres_stack_7->SetBinContent(15,33.22808);
   hNCpi0inFVres_stack_7->SetBinContent(16,36.21354);
   hNCpi0inFVres_stack_7->SetBinContent(17,38.18807);
   hNCpi0inFVres_stack_7->SetBinContent(18,34.294);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.44275);
   hNCpi0inFVres_stack_7->SetBinContent(20,33.20094);
   hNCpi0inFVres_stack_7->SetBinContent(21,26.42996);
   hNCpi0inFVres_stack_7->SetBinContent(22,28.00406);
   hNCpi0inFVres_stack_7->SetBinContent(23,33.64148);
   hNCpi0inFVres_stack_7->SetBinContent(24,28.33233);
   hNCpi0inFVres_stack_7->SetBinContent(25,32.90569);
   hNCpi0inFVres_stack_7->SetBinContent(26,32.74091);
   hNCpi0inFVres_stack_7->SetBinContent(27,32.67136);
   hNCpi0inFVres_stack_7->SetBinContent(28,34.74364);
   hNCpi0inFVres_stack_7->SetBinContent(29,25.95088);
   hNCpi0inFVres_stack_7->SetBinContent(30,10.75737);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.06409997);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3516553);
   hNCpi0inFVres_stack_7->SetBinError(1,1.060155);
   hNCpi0inFVres_stack_7->SetBinError(2,1.445461);
   hNCpi0inFVres_stack_7->SetBinError(3,1.549587);
   hNCpi0inFVres_stack_7->SetBinError(4,1.706127);
   hNCpi0inFVres_stack_7->SetBinError(5,1.558274);
   hNCpi0inFVres_stack_7->SetBinError(6,1.657049);
   hNCpi0inFVres_stack_7->SetBinError(7,1.725293);
   hNCpi0inFVres_stack_7->SetBinError(8,1.488533);
   hNCpi0inFVres_stack_7->SetBinError(9,1.85002);
   hNCpi0inFVres_stack_7->SetBinError(10,1.648267);
   hNCpi0inFVres_stack_7->SetBinError(11,1.738587);
   hNCpi0inFVres_stack_7->SetBinError(12,1.839492);
   hNCpi0inFVres_stack_7->SetBinError(13,2.020493);
   hNCpi0inFVres_stack_7->SetBinError(14,1.871485);
   hNCpi0inFVres_stack_7->SetBinError(15,1.760541);
   hNCpi0inFVres_stack_7->SetBinError(16,1.831611);
   hNCpi0inFVres_stack_7->SetBinError(17,2.036249);
   hNCpi0inFVres_stack_7->SetBinError(18,1.805779);
   hNCpi0inFVres_stack_7->SetBinError(19,1.72967);
   hNCpi0inFVres_stack_7->SetBinError(20,1.814165);
   hNCpi0inFVres_stack_7->SetBinError(21,1.642294);
   hNCpi0inFVres_stack_7->SetBinError(22,1.618354);
   hNCpi0inFVres_stack_7->SetBinError(23,1.900713);
   hNCpi0inFVres_stack_7->SetBinError(24,1.521592);
   hNCpi0inFVres_stack_7->SetBinError(25,1.698071);
   hNCpi0inFVres_stack_7->SetBinError(26,1.700055);
   hNCpi0inFVres_stack_7->SetBinError(27,1.674201);
   hNCpi0inFVres_stack_7->SetBinError(28,1.720307);
   hNCpi0inFVres_stack_7->SetBinError(29,1.488568);
   hNCpi0inFVres_stack_7->SetBinError(30,1.017511);
   hNCpi0inFVres_stack_7->SetBinError(31,0.03581041);
   hNCpi0inFVres_stack_7->SetEntries(24018);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.69123);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.126762);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.85824);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.04567);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.285286);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.909599);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.33472);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.860723);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.859422);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.18927);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.354408);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.799137);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.033918);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.464868);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.807712);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.492653);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.200279);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.576587);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.284846);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.89992);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.000715);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.436581);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.642458);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.129874);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.005243);
   hNCpi0inFVdis_stack_8->SetBinContent(26,8.449699);
   hNCpi0inFVdis_stack_8->SetBinContent(27,6.18083);
   hNCpi0inFVdis_stack_8->SetBinContent(28,6.143873);
   hNCpi0inFVdis_stack_8->SetBinContent(29,4.266076);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.207013);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.07994311);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5867068);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8650585);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8436631);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7160527);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8506852);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8156114);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8903007);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.243136);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9700332);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9272134);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8495659);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7683159);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9392421);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.014148);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9072301);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.777753);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9146023);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.077883);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7457719);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.014848);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6510848);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.141406);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7152047);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8527145);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9118361);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.034364);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.7573284);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.749807);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.6050064);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4458829);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04843715);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1755477);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.07096088);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1280213);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03556259);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.01071203);
   hNCpi0inFVmec_stack_9->SetEntries(24);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,7.062906);
   hCCpi0inFV_stack_10->SetBinContent(2,11.71321);
   hCCpi0inFV_stack_10->SetBinContent(3,10.1017);
   hCCpi0inFV_stack_10->SetBinContent(4,12.55756);
   hCCpi0inFV_stack_10->SetBinContent(5,14.43478);
   hCCpi0inFV_stack_10->SetBinContent(6,12.74421);
   hCCpi0inFV_stack_10->SetBinContent(7,11.68959);
   hCCpi0inFV_stack_10->SetBinContent(8,14.93075);
   hCCpi0inFV_stack_10->SetBinContent(9,14.15369);
   hCCpi0inFV_stack_10->SetBinContent(10,17.44795);
   hCCpi0inFV_stack_10->SetBinContent(11,14.83561);
   hCCpi0inFV_stack_10->SetBinContent(12,12.88604);
   hCCpi0inFV_stack_10->SetBinContent(13,13.97585);
   hCCpi0inFV_stack_10->SetBinContent(14,16.02091);
   hCCpi0inFV_stack_10->SetBinContent(15,15.20717);
   hCCpi0inFV_stack_10->SetBinContent(16,12.98892);
   hCCpi0inFV_stack_10->SetBinContent(17,12.36699);
   hCCpi0inFV_stack_10->SetBinContent(18,12.76932);
   hCCpi0inFV_stack_10->SetBinContent(19,11.62555);
   hCCpi0inFV_stack_10->SetBinContent(20,13.04736);
   hCCpi0inFV_stack_10->SetBinContent(21,13.79643);
   hCCpi0inFV_stack_10->SetBinContent(22,15.32822);
   hCCpi0inFV_stack_10->SetBinContent(23,10.67108);
   hCCpi0inFV_stack_10->SetBinContent(24,13.81073);
   hCCpi0inFV_stack_10->SetBinContent(25,12.88771);
   hCCpi0inFV_stack_10->SetBinContent(26,14.85481);
   hCCpi0inFV_stack_10->SetBinContent(27,10.61178);
   hCCpi0inFV_stack_10->SetBinContent(28,11.56891);
   hCCpi0inFV_stack_10->SetBinContent(29,9.527848);
   hCCpi0inFV_stack_10->SetBinContent(30,7.77517);
   hCCpi0inFV_stack_10->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.335598);
   hCCpi0inFV_stack_10->SetBinError(2,1.715378);
   hCCpi0inFV_stack_10->SetBinError(3,1.617606);
   hCCpi0inFV_stack_10->SetBinError(4,1.788393);
   hCCpi0inFV_stack_10->SetBinError(5,1.915572);
   hCCpi0inFV_stack_10->SetBinError(6,1.759394);
   hCCpi0inFV_stack_10->SetBinError(7,1.671757);
   hCCpi0inFV_stack_10->SetBinError(8,1.966564);
   hCCpi0inFV_stack_10->SetBinError(9,1.916156);
   hCCpi0inFV_stack_10->SetBinError(10,2.091913);
   hCCpi0inFV_stack_10->SetBinError(11,1.974274);
   hCCpi0inFV_stack_10->SetBinError(12,1.820123);
   hCCpi0inFV_stack_10->SetBinError(13,1.892732);
   hCCpi0inFV_stack_10->SetBinError(14,1.930109);
   hCCpi0inFV_stack_10->SetBinError(15,1.903599);
   hCCpi0inFV_stack_10->SetBinError(16,1.758837);
   hCCpi0inFV_stack_10->SetBinError(17,1.795398);
   hCCpi0inFV_stack_10->SetBinError(18,1.723184);
   hCCpi0inFV_stack_10->SetBinError(19,1.722172);
   hCCpi0inFV_stack_10->SetBinError(20,1.787489);
   hCCpi0inFV_stack_10->SetBinError(21,1.895746);
   hCCpi0inFV_stack_10->SetBinError(22,1.958592);
   hCCpi0inFV_stack_10->SetBinError(23,1.766744);
   hCCpi0inFV_stack_10->SetBinError(24,1.897221);
   hCCpi0inFV_stack_10->SetBinError(25,1.781048);
   hCCpi0inFV_stack_10->SetBinError(26,1.963417);
   hCCpi0inFV_stack_10->SetBinError(27,1.619062);
   hCCpi0inFV_stack_10->SetBinError(28,1.732881);
   hCCpi0inFV_stack_10->SetBinError(29,1.519392);
   hCCpi0inFV_stack_10->SetBinError(30,1.415027);
   hCCpi0inFV_stack_10->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1641);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,5.247762);
   hNCinFV_stack_11->SetBinContent(2,7.82187);
   hNCinFV_stack_11->SetBinContent(3,6.871406);
   hNCinFV_stack_11->SetBinContent(4,7.807802);
   hNCinFV_stack_11->SetBinContent(5,9.377185);
   hNCinFV_stack_11->SetBinContent(6,8.398896);
   hNCinFV_stack_11->SetBinContent(7,8.004994);
   hNCinFV_stack_11->SetBinContent(8,6.534731);
   hNCinFV_stack_11->SetBinContent(9,8.825973);
   hNCinFV_stack_11->SetBinContent(10,9.964482);
   hNCinFV_stack_11->SetBinContent(11,10.25155);
   hNCinFV_stack_11->SetBinContent(12,6.197395);
   hNCinFV_stack_11->SetBinContent(13,6.688318);
   hNCinFV_stack_11->SetBinContent(14,12.45109);
   hNCinFV_stack_11->SetBinContent(15,6.814219);
   hNCinFV_stack_11->SetBinContent(16,8.596544);
   hNCinFV_stack_11->SetBinContent(17,11.2954);
   hNCinFV_stack_11->SetBinContent(18,8.226292);
   hNCinFV_stack_11->SetBinContent(19,10.63849);
   hNCinFV_stack_11->SetBinContent(20,11.7187);
   hNCinFV_stack_11->SetBinContent(21,7.040335);
   hNCinFV_stack_11->SetBinContent(22,10.61973);
   hNCinFV_stack_11->SetBinContent(23,8.042496);
   hNCinFV_stack_11->SetBinContent(24,10.9664);
   hNCinFV_stack_11->SetBinContent(25,8.527441);
   hNCinFV_stack_11->SetBinContent(26,6.050384);
   hNCinFV_stack_11->SetBinContent(27,9.742943);
   hNCinFV_stack_11->SetBinContent(28,7.250933);
   hNCinFV_stack_11->SetBinContent(29,5.059448);
   hNCinFV_stack_11->SetBinContent(30,2.599265);
   hNCinFV_stack_11->SetBinError(1,1.283643);
   hNCinFV_stack_11->SetBinError(2,1.515051);
   hNCinFV_stack_11->SetBinError(3,1.422367);
   hNCinFV_stack_11->SetBinError(4,1.636553);
   hNCinFV_stack_11->SetBinError(5,1.9687);
   hNCinFV_stack_11->SetBinError(6,1.402215);
   hNCinFV_stack_11->SetBinError(7,1.581794);
   hNCinFV_stack_11->SetBinError(8,1.353047);
   hNCinFV_stack_11->SetBinError(9,1.468622);
   hNCinFV_stack_11->SetBinError(10,1.869579);
   hNCinFV_stack_11->SetBinError(11,2.013581);
   hNCinFV_stack_11->SetBinError(12,1.253396);
   hNCinFV_stack_11->SetBinError(13,1.450337);
   hNCinFV_stack_11->SetBinError(14,1.972767);
   hNCinFV_stack_11->SetBinError(15,1.343456);
   hNCinFV_stack_11->SetBinError(16,1.541404);
   hNCinFV_stack_11->SetBinError(17,1.847844);
   hNCinFV_stack_11->SetBinError(18,1.546651);
   hNCinFV_stack_11->SetBinError(19,2.024168);
   hNCinFV_stack_11->SetBinError(20,1.906602);
   hNCinFV_stack_11->SetBinError(21,1.304334);
   hNCinFV_stack_11->SetBinError(22,1.845243);
   hNCinFV_stack_11->SetBinError(23,1.469443);
   hNCinFV_stack_11->SetBinError(24,1.810643);
   hNCinFV_stack_11->SetBinError(25,1.532328);
   hNCinFV_stack_11->SetBinError(26,1.279676);
   hNCinFV_stack_11->SetBinError(27,1.880138);
   hNCinFV_stack_11->SetBinError(28,1.558783);
   hNCinFV_stack_11->SetBinError(29,1.112052);
   hNCinFV_stack_11->SetBinError(30,0.7713354);
   hNCinFV_stack_11->SetEntries(1026);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,5.671921);
   hnumuCCinFV_stack_12->SetBinContent(2,9.343228);
   hnumuCCinFV_stack_12->SetBinContent(3,10.5311);
   hnumuCCinFV_stack_12->SetBinContent(4,13.06398);
   hnumuCCinFV_stack_12->SetBinContent(5,7.521501);
   hnumuCCinFV_stack_12->SetBinContent(6,8.403939);
   hnumuCCinFV_stack_12->SetBinContent(7,7.352484);
   hnumuCCinFV_stack_12->SetBinContent(8,13.51433);
   hnumuCCinFV_stack_12->SetBinContent(9,8.857325);
   hnumuCCinFV_stack_12->SetBinContent(10,9.983311);
   hnumuCCinFV_stack_12->SetBinContent(11,10.49504);
   hnumuCCinFV_stack_12->SetBinContent(12,6.902308);
   hnumuCCinFV_stack_12->SetBinContent(13,12.28834);
   hnumuCCinFV_stack_12->SetBinContent(14,11.06652);
   hnumuCCinFV_stack_12->SetBinContent(15,11.88739);
   hnumuCCinFV_stack_12->SetBinContent(16,8.972197);
   hnumuCCinFV_stack_12->SetBinContent(17,9.675733);
   hnumuCCinFV_stack_12->SetBinContent(18,10.99982);
   hnumuCCinFV_stack_12->SetBinContent(19,8.814994);
   hnumuCCinFV_stack_12->SetBinContent(20,9.809339);
   hnumuCCinFV_stack_12->SetBinContent(21,7.750438);
   hnumuCCinFV_stack_12->SetBinContent(22,10.8299);
   hnumuCCinFV_stack_12->SetBinContent(23,10.42587);
   hnumuCCinFV_stack_12->SetBinContent(24,8.496367);
   hnumuCCinFV_stack_12->SetBinContent(25,7.680831);
   hnumuCCinFV_stack_12->SetBinContent(26,6.208319);
   hnumuCCinFV_stack_12->SetBinContent(27,10.29758);
   hnumuCCinFV_stack_12->SetBinContent(28,4.600184);
   hnumuCCinFV_stack_12->SetBinContent(29,4.612299);
   hnumuCCinFV_stack_12->SetBinContent(30,4.330021);
   hnumuCCinFV_stack_12->SetBinError(1,1.49336);
   hnumuCCinFV_stack_12->SetBinError(2,1.89859);
   hnumuCCinFV_stack_12->SetBinError(3,1.744695);
   hnumuCCinFV_stack_12->SetBinError(4,2.043641);
   hnumuCCinFV_stack_12->SetBinError(5,1.386689);
   hnumuCCinFV_stack_12->SetBinError(6,1.719058);
   hnumuCCinFV_stack_12->SetBinError(7,1.437512);
   hnumuCCinFV_stack_12->SetBinError(8,2.39534);
   hnumuCCinFV_stack_12->SetBinError(9,1.952678);
   hnumuCCinFV_stack_12->SetBinError(10,1.792476);
   hnumuCCinFV_stack_12->SetBinError(11,1.725827);
   hnumuCCinFV_stack_12->SetBinError(12,1.338825);
   hnumuCCinFV_stack_12->SetBinError(13,1.928873);
   hnumuCCinFV_stack_12->SetBinError(14,2.879828);
   hnumuCCinFV_stack_12->SetBinError(15,1.896109);
   hnumuCCinFV_stack_12->SetBinError(16,1.641723);
   hnumuCCinFV_stack_12->SetBinError(17,2.140499);
   hnumuCCinFV_stack_12->SetBinError(18,1.947775);
   hnumuCCinFV_stack_12->SetBinError(19,1.612119);
   hnumuCCinFV_stack_12->SetBinError(20,2.068499);
   hnumuCCinFV_stack_12->SetBinError(21,1.361064);
   hnumuCCinFV_stack_12->SetBinError(22,1.770369);
   hnumuCCinFV_stack_12->SetBinError(23,1.657498);
   hnumuCCinFV_stack_12->SetBinError(24,1.495803);
   hnumuCCinFV_stack_12->SetBinError(25,1.729797);
   hnumuCCinFV_stack_12->SetBinError(26,1.429091);
   hnumuCCinFV_stack_12->SetBinError(27,2.087174);
   hnumuCCinFV_stack_12->SetBinError(28,1.021837);
   hnumuCCinFV_stack_12->SetBinError(29,1.256926);
   hnumuCCinFV_stack_12->SetBinError(30,1.090596);
   hnumuCCinFV_stack_12->SetEntries(1066);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,1.165406);
   hnueCCinFV_stack_13->SetBinContent(8,0.6000535);
   hnueCCinFV_stack_13->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_13->SetBinContent(11,0.8417194);
   hnueCCinFV_stack_13->SetBinContent(12,0.9140773);
   hnueCCinFV_stack_13->SetBinContent(13,1.181465);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(19,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(20,0.536893);
   hnueCCinFV_stack_13->SetBinContent(22,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,0.9754189);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.5916525);
   hnueCCinFV_stack_13->SetBinContent(27,0.8465147);
   hnueCCinFV_stack_13->SetBinContent(29,0.591342);
   hnueCCinFV_stack_13->SetBinError(1,0.2504446);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.5359203);
   hnueCCinFV_stack_13->SetBinError(8,0.442702);
   hnueCCinFV_stack_13->SetBinError(10,0.5230935);
   hnueCCinFV_stack_13->SetBinError(11,0.4914388);
   hnueCCinFV_stack_13->SetBinError(12,0.531391);
   hnueCCinFV_stack_13->SetBinError(13,0.6844224);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.305097);
   hnueCCinFV_stack_13->SetBinError(18,0.3688623);
   hnueCCinFV_stack_13->SetBinError(19,0.3866963);
   hnueCCinFV_stack_13->SetBinError(20,0.3929602);
   hnueCCinFV_stack_13->SetBinError(22,0.2871419);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.5019055);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.4363916);
   hnueCCinFV_stack_13->SetBinError(27,0.4262983);
   hnueCCinFV_stack_13->SetBinError(29,0.4228527);
   hnueCCinFV_stack_13->SetEntries(54);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__20->SetBinContent(0,0.4683926);
   hmcerror__20->SetBinContent(1,47.43081);
   hmcerror__20->SetBinContent(2,78.0731);
   hmcerror__20->SetBinContent(3,72.04726);
   hmcerror__20->SetBinContent(4,80.01711);
   hmcerror__20->SetBinContent(5,83.26855);
   hmcerror__20->SetBinContent(6,74.40878);
   hmcerror__20->SetBinContent(7,83.35331);
   hmcerror__20->SetBinContent(8,90.28403);
   hmcerror__20->SetBinContent(9,81.5994);
   hmcerror__20->SetBinContent(10,91.44361);
   hmcerror__20->SetBinContent(11,96.78078);
   hmcerror__20->SetBinContent(12,78.89566);
   hmcerror__20->SetBinContent(13,88.84722);
   hmcerror__20->SetBinContent(14,99.45093);
   hmcerror__20->SetBinContent(15,82.58161);
   hmcerror__20->SetBinContent(16,86.24567);
   hmcerror__20->SetBinContent(17,90.38597);
   hmcerror__20->SetBinContent(18,84.72247);
   hmcerror__20->SetBinContent(19,84.8231);
   hmcerror__20->SetBinContent(20,89.15699);
   hmcerror__20->SetBinContent(21,72.09824);
   hmcerror__20->SetBinContent(22,82.6615);
   hmcerror__20->SetBinContent(23,78.29118);
   hmcerror__20->SetBinContent(24,83.60844);
   hmcerror__20->SetBinContent(25,78.49863);
   hmcerror__20->SetBinContent(26,78.0078);
   hmcerror__20->SetBinContent(27,81.30819);
   hmcerror__20->SetBinContent(28,75.67976);
   hmcerror__20->SetBinContent(29,61.5022);
   hmcerror__20->SetBinContent(30,31.97756);
   hmcerror__20->SetBinContent(31,1.139098);
   hmcerror__20->SetBinError(0,0.3516553);
   hmcerror__20->SetBinError(1,21.55895);
   hmcerror__20->SetBinError(2,28.40769);
   hmcerror__20->SetBinError(3,27.19305);
   hmcerror__20->SetBinError(4,27.24375);
   hmcerror__20->SetBinError(5,28.64259);
   hmcerror__20->SetBinError(6,30.43503);
   hmcerror__20->SetBinError(7,32.32767);
   hmcerror__20->SetBinError(8,30.84124);
   hmcerror__20->SetBinError(9,32.61533);
   hmcerror__20->SetBinError(10,35.13883);
   hmcerror__20->SetBinError(11,32.70247);
   hmcerror__20->SetBinError(12,31.30828);
   hmcerror__20->SetBinError(13,34.65937);
   hmcerror__20->SetBinError(14,37.8966);
   hmcerror__20->SetBinError(15,36.52617);
   hmcerror__20->SetBinError(16,36.15762);
   hmcerror__20->SetBinError(17,33.87285);
   hmcerror__20->SetBinError(18,33.28653);
   hmcerror__20->SetBinError(19,34.28397);
   hmcerror__20->SetBinError(20,34.33986);
   hmcerror__20->SetBinError(21,26.37074);
   hmcerror__20->SetBinError(22,34.39662);
   hmcerror__20->SetBinError(23,31.18994);
   hmcerror__20->SetBinError(24,28.72707);
   hmcerror__20->SetBinError(25,33.76894);
   hmcerror__20->SetBinError(26,32.48);
   hmcerror__20->SetBinError(27,30.5313);
   hmcerror__20->SetBinError(28,32.70981);
   hmcerror__20->SetBinError(29,29.60774);
   hmcerror__20->SetBinError(30,16.61839);
   hmcerror__20->SetBinError(31,1.41445);
   hmcerror__20->SetBinError(32,0.3895343);
   hmcerror__20->SetBinError(33,0.3895343);
   hmcerror__20->SetEntries(2811.899);

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
   
   Double_t _fx3025[32] = {
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
   Double_t _fy3025[32] = {
   48,
   58,
   66,
   63,
   64,
   79,
   72,
   74,
   84,
   69,
   81,
   72,
   67,
   69,
   62,
   70,
   78,
   84,
   65,
   61,
   65,
   66,
   82,
   54,
   74,
   71,
   71,
   80,
   54,
   32,
   1,
   0};
   Double_t _felx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3025[32] = {
   7.0604,
   7.7446,
   8.2509,
   8.0648,
   8.1273,
   9.0124,
   8.6108,
   8.7275,
   9.2886,
   8.4327,
   9.1239,
   8.6108,
   8.3119,
   8.4327,
   8.0018,
   8.4925,
   8.9562,
   9.2886,
   8.1893,
   7.9383,
   8.1893,
   8.2509,
   9.1791,
   7.4785,
   8.7275,
   8.5518,
   8.5518,
   9.0683,
   7.4785,
   5.7977,
   1,
   0};
   Double_t _fehx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3025[32] = {
   6.8561,
   7.5415,
   8.0483,
   7.862,
   7.9246,
   8.8105,
   8.4085,
   8.5253,
   9.0869,
   8.2304,
   8.9221,
   8.4085,
   8.1094,
   8.2304,
   7.7989,
   8.2902,
   8.7542,
   9.0869,
   7.9866,
   7.7354,
   7.9866,
   8.0483,
   8.9774,
   7.275,
   8.5253,
   8.3496,
   8.3496,
   8.8665,
   7.275,
   5.5904,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1210);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(102.3956);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  913.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[32] = {
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
   Double_t _fy3026[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3026[32] = {
   0.4545347,
   0.3638602,
   0.3774334,
   0.3404741,
   0.3439785,
   0.4090247,
   0.3878391,
   0.3416024,
   0.3997006,
   0.3842677,
   0.3379026,
   0.3968315,
   0.3901008,
   0.3810583,
   0.442304,
   0.4192398,
   0.3747578,
   0.392889,
   0.404182,
   0.3851617,
   0.3657613,
   0.4161141,
   0.3983839,
   0.3435905,
   0.4301851,
   0.4163686,
   0.3755009,
   0.4322134,
   0.4814095,
   0.5196891,
   1.241728,
   0};
   Double_t _fehx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3026[32] = {
   0.4545347,
   0.3638602,
   0.3774334,
   0.3404741,
   0.3439785,
   0.4090247,
   0.3878391,
   0.3416024,
   0.3997006,
   0.3842677,
   0.3379026,
   0.3968315,
   0.3901008,
   0.3810583,
   0.442304,
   0.4192398,
   0.3747578,
   0.392889,
   0.404182,
   0.3851617,
   0.3657613,
   0.4161141,
   0.3983839,
   0.3435905,
   0.4301851,
   0.4163686,
   0.3755009,
   0.4322134,
   0.4814095,
   0.5196891,
   1.241728,
   0};
   grae = new TGraphAsymmErrors(32,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1210);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3027[32] = {
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
   Double_t _fy3027[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3027[32] = {
   0.3506314,
   0.3139647,
   0.3121968,
   0.2974432,
   0.3163206,
   0.3584021,
   0.346118,
   0.2985369,
   0.3769959,
   0.3412006,
   0.304057,
   0.35948,
   0.3567094,
   0.3341006,
   0.3740284,
   0.3563894,
   0.345986,
   0.3566028,
   0.3581248,
   0.3409069,
   0.3125137,
   0.3188982,
   0.3589169,
   0.3107841,
   0.3822167,
   0.3733107,
   0.3389088,
   0.4046369,
   0.4411422,
   0.4245008,
   0.6194062,
   0};
   Double_t _fehx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3027[32] = {
   0.3506314,
   0.3139647,
   0.3121968,
   0.2974432,
   0.3163206,
   0.3584021,
   0.346118,
   0.2985369,
   0.3769959,
   0.3412006,
   0.304057,
   0.35948,
   0.3567094,
   0.3341006,
   0.3740284,
   0.3563894,
   0.345986,
   0.3566028,
   0.3581248,
   0.3409069,
   0.3125137,
   0.3188982,
   0.3589169,
   0.3107841,
   0.3822167,
   0.3733107,
   0.3389088,
   0.4046369,
   0.4411422,
   0.4245008,
   0.6194062,
   0};
   grae = new TGraphAsymmErrors(32,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1210);
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
   
   Double_t _fx3028[32] = {
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
   Double_t _fy3028[32] = {
   1.012,
   0.7428935,
   0.9160653,
   0.7873316,
   0.7685975,
   1.061703,
   0.8637929,
   0.8196355,
   1.029419,
   0.7545634,
   0.8369431,
   0.9125977,
   0.7541035,
   0.6938095,
   0.7507725,
   0.811635,
   0.8629658,
   0.9914725,
   0.7663007,
   0.6841864,
   0.9015477,
   0.798437,
   1.047372,
   0.6458678,
   0.9426916,
   0.9101653,
   0.8732208,
   1.057086,
   0.8780174,
   1.000702,
   0.8778879,
   10};
   Double_t _felx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3028[32] = {
   0.1488568,
   0.09919678,
   0.1145207,
   0.1007884,
   0.09760348,
   0.1211201,
   0.1033048,
   0.09666715,
   0.1138317,
   0.09221749,
   0.09427389,
   0.1091416,
   0.09355273,
   0.08479257,
   0.09689566,
   0.09846872,
   0.09908839,
   0.1096356,
   0.09654564,
   0.08903733,
   0.1135853,
   0.09981551,
   0.1172431,
   0.08944672,
   0.1111803,
   0.1096275,
   0.1051776,
   0.1198246,
   0.1215973,
   0.1813053,
   0.8778879,
   0};
   Double_t _fehx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3028[32] = {
   0.1445495,
   0.09659537,
   0.1117086,
   0.09825398,
   0.09516919,
   0.1184067,
   0.1008778,
   0.09442755,
   0.1113599,
   0.09000519,
   0.09218876,
   0.1065775,
   0.09127354,
   0.0827584,
   0.0944387,
   0.09612309,
   0.09685353,
   0.1072549,
   0.09415596,
   0.08676157,
   0.1107739,
   0.09736455,
   0.1146668,
   0.08701275,
   0.1086044,
   0.1070354,
   0.1026908,
   0.1171581,
   0.1182885,
   0.1748226,
   1.193673,
   0};
   grae = new TGraphAsymmErrors(32,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1210);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
