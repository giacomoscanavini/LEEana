#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  1 18:01:19 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-158.3865,1241.026,16680.6);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,355.5986);
   hmc__4->SetBinContent(1,7919.326);
   hmc__4->SetBinContent(2,4891.45);
   hmc__4->SetBinContent(3,4610.664);
   hmc__4->SetBinContent(4,4618.506);
   hmc__4->SetBinContent(5,4659.968);
   hmc__4->SetBinContent(6,4486.428);
   hmc__4->SetBinContent(7,4375.171);
   hmc__4->SetBinContent(8,4698.759);
   hmc__4->SetBinContent(9,4513.811);
   hmc__4->SetBinContent(10,4528.885);
   hmc__4->SetBinContent(11,4273.497);
   hmc__4->SetBinContent(12,4248.042);
   hmc__4->SetBinContent(13,4312.424);
   hmc__4->SetBinContent(14,4270.335);
   hmc__4->SetBinContent(15,4333.333);
   hmc__4->SetBinContent(16,4451.919);
   hmc__4->SetBinContent(17,4201.596);
   hmc__4->SetBinContent(18,4289.019);
   hmc__4->SetBinContent(19,4458.119);
   hmc__4->SetBinContent(20,4414.874);
   hmc__4->SetBinContent(21,5295.033);
   hmc__4->SetBinContent(22,4736.535);
   hmc__4->SetBinContent(23,4456.115);
   hmc__4->SetBinContent(24,4414.073);
   hmc__4->SetBinContent(25,4644.575);
   hmc__4->SetBinContent(26,4638.988);
   hmc__4->SetBinContent(27,4730.506);
   hmc__4->SetBinContent(28,4887.816);
   hmc__4->SetBinContent(29,5287.699);
   hmc__4->SetBinContent(30,4869.405);
   hmc__4->SetBinContent(31,193.0807);
   hmc__4->SetBinError(0,11.53778);
   hmc__4->SetBinError(1,1072.846);
   hmc__4->SetBinError(2,622.4612);
   hmc__4->SetBinError(3,584.9685);
   hmc__4->SetBinError(4,592.0769);
   hmc__4->SetBinError(5,600.9732);
   hmc__4->SetBinError(6,584.5633);
   hmc__4->SetBinError(7,563.0317);
   hmc__4->SetBinError(8,576.1142);
   hmc__4->SetBinError(9,580.7709);
   hmc__4->SetBinError(10,602.001);
   hmc__4->SetBinError(11,546.2655);
   hmc__4->SetBinError(12,554.033);
   hmc__4->SetBinError(13,587.6901);
   hmc__4->SetBinError(14,562.8686);
   hmc__4->SetBinError(15,551.8329);
   hmc__4->SetBinError(16,602.5802);
   hmc__4->SetBinError(17,551.5999);
   hmc__4->SetBinError(18,570.778);
   hmc__4->SetBinError(19,589.4033);
   hmc__4->SetBinError(20,592.1333);
   hmc__4->SetBinError(21,617.0395);
   hmc__4->SetBinError(22,615.4179);
   hmc__4->SetBinError(23,584.4976);
   hmc__4->SetBinError(24,602.2661);
   hmc__4->SetBinError(25,639.4965);
   hmc__4->SetBinError(26,637.9413);
   hmc__4->SetBinError(27,671.7817);
   hmc__4->SetBinError(28,694.7356);
   hmc__4->SetBinError(29,753.9606);
   hmc__4->SetBinError(30,646.9332);
   hmc__4->SetBinError(31,49.80309);
   hmc__4->SetBinError(32,0.4212968);
   hmc__4->SetBinError(33,0.4212968);
   hmc__4->SetMinimum(-158.3865);
   hmc__4->SetMaximum(15838.65);
   hmc__4->SetEntries(125394.8);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",32,0,1100);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(8315.292);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,43.7663);
   hbadmatch_stack_1->SetBinContent(1,368.5331);
   hbadmatch_stack_1->SetBinContent(2,173.4233);
   hbadmatch_stack_1->SetBinContent(3,136.4878);
   hbadmatch_stack_1->SetBinContent(4,118.7181);
   hbadmatch_stack_1->SetBinContent(5,108.6056);
   hbadmatch_stack_1->SetBinContent(6,98.49373);
   hbadmatch_stack_1->SetBinContent(7,101.9976);
   hbadmatch_stack_1->SetBinContent(8,109.5739);
   hbadmatch_stack_1->SetBinContent(9,99.67636);
   hbadmatch_stack_1->SetBinContent(10,95.7205);
   hbadmatch_stack_1->SetBinContent(11,89.34413);
   hbadmatch_stack_1->SetBinContent(12,87.82944);
   hbadmatch_stack_1->SetBinContent(13,72.82555);
   hbadmatch_stack_1->SetBinContent(14,81.188);
   hbadmatch_stack_1->SetBinContent(15,71.63551);
   hbadmatch_stack_1->SetBinContent(16,65.85216);
   hbadmatch_stack_1->SetBinContent(17,63.07354);
   hbadmatch_stack_1->SetBinContent(18,75.48516);
   hbadmatch_stack_1->SetBinContent(19,70.88667);
   hbadmatch_stack_1->SetBinContent(20,87.00186);
   hbadmatch_stack_1->SetBinContent(21,128.804);
   hbadmatch_stack_1->SetBinContent(22,87.58611);
   hbadmatch_stack_1->SetBinContent(23,71.48383);
   hbadmatch_stack_1->SetBinContent(24,78.5899);
   hbadmatch_stack_1->SetBinContent(25,88.82317);
   hbadmatch_stack_1->SetBinContent(26,93.72174);
   hbadmatch_stack_1->SetBinContent(27,99.03148);
   hbadmatch_stack_1->SetBinContent(28,121.6275);
   hbadmatch_stack_1->SetBinContent(29,199.805);
   hbadmatch_stack_1->SetBinContent(30,298.0363);
   hbadmatch_stack_1->SetBinContent(31,15.78178);
   hbadmatch_stack_1->SetBinError(0,4.008284);
   hbadmatch_stack_1->SetBinError(1,12.43174);
   hbadmatch_stack_1->SetBinError(2,9.051154);
   hbadmatch_stack_1->SetBinError(3,6.977602);
   hbadmatch_stack_1->SetBinError(4,7.322639);
   hbadmatch_stack_1->SetBinError(5,6.068514);
   hbadmatch_stack_1->SetBinError(6,6.313448);
   hbadmatch_stack_1->SetBinError(7,6.497973);
   hbadmatch_stack_1->SetBinError(8,5.952539);
   hbadmatch_stack_1->SetBinError(9,5.72168);
   hbadmatch_stack_1->SetBinError(10,5.580941);
   hbadmatch_stack_1->SetBinError(11,6.086551);
   hbadmatch_stack_1->SetBinError(12,5.804405);
   hbadmatch_stack_1->SetBinError(13,4.932637);
   hbadmatch_stack_1->SetBinError(14,6.13343);
   hbadmatch_stack_1->SetBinError(15,5.020909);
   hbadmatch_stack_1->SetBinError(16,5.928251);
   hbadmatch_stack_1->SetBinError(17,4.599545);
   hbadmatch_stack_1->SetBinError(18,5.837977);
   hbadmatch_stack_1->SetBinError(19,4.541774);
   hbadmatch_stack_1->SetBinError(20,6.034929);
   hbadmatch_stack_1->SetBinError(21,6.138512);
   hbadmatch_stack_1->SetBinError(22,5.732043);
   hbadmatch_stack_1->SetBinError(23,5.109562);
   hbadmatch_stack_1->SetBinError(24,5.165835);
   hbadmatch_stack_1->SetBinError(25,6.64916);
   hbadmatch_stack_1->SetBinError(26,6.349626);
   hbadmatch_stack_1->SetBinError(27,6.040029);
   hbadmatch_stack_1->SetBinError(28,6.276943);
   hbadmatch_stack_1->SetBinError(29,7.929352);
   hbadmatch_stack_1->SetBinError(30,12.66355);
   hbadmatch_stack_1->SetBinError(31,2.241898);
   hbadmatch_stack_1->SetEntries(13347);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,134.6455);
   hext_stack_2->SetBinContent(1,1580.027);
   hext_stack_2->SetBinContent(2,945.5471);
   hext_stack_2->SetBinContent(3,914.2205);
   hext_stack_2->SetBinContent(4,932.4089);
   hext_stack_2->SetBinContent(5,900.2428);
   hext_stack_2->SetBinContent(6,781.1074);
   hext_stack_2->SetBinContent(7,777.0681);
   hext_stack_2->SetBinContent(8,983.753);
   hext_stack_2->SetBinContent(9,783.4828);
   hext_stack_2->SetBinContent(10,717.2659);
   hext_stack_2->SetBinContent(11,687.1671);
   hext_stack_2->SetBinContent(12,618.0294);
   hext_stack_2->SetBinContent(13,619.2456);
   hext_stack_2->SetBinContent(14,637.0513);
   hext_stack_2->SetBinContent(15,703.535);
   hext_stack_2->SetBinContent(16,700.8402);
   hext_stack_2->SetBinContent(17,586.5446);
   hext_stack_2->SetBinContent(18,603.0289);
   hext_stack_2->SetBinContent(19,615.8022);
   hext_stack_2->SetBinContent(20,654.6515);
   hext_stack_2->SetBinContent(21,1494.978);
   hext_stack_2->SetBinContent(22,936.2814);
   hext_stack_2->SetBinContent(23,611.7496);
   hext_stack_2->SetBinContent(24,617.7973);
   hext_stack_2->SetBinContent(25,531.0242);
   hext_stack_2->SetBinContent(26,557.6736);
   hext_stack_2->SetBinContent(27,474.2584);
   hext_stack_2->SetBinContent(28,481.4287);
   hext_stack_2->SetBinContent(29,555.6721);
   hext_stack_2->SetBinContent(30,645.7951);
   hext_stack_2->SetBinContent(31,54.7671);
   hext_stack_2->SetBinError(0,7.24657);
   hext_stack_2->SetBinError(1,27.3169);
   hext_stack_2->SetBinError(2,21.04174);
   hext_stack_2->SetBinError(3,20.61482);
   hext_stack_2->SetBinError(4,20.67724);
   hext_stack_2->SetBinError(5,20.40965);
   hext_stack_2->SetBinError(6,19.09158);
   hext_stack_2->SetBinError(7,18.91082);
   hext_stack_2->SetBinError(8,21.72442);
   hext_stack_2->SetBinError(9,19.1451);
   hext_stack_2->SetBinError(10,18.38138);
   hext_stack_2->SetBinError(11,18.00763);
   hext_stack_2->SetBinError(12,16.77848);
   hext_stack_2->SetBinError(13,16.98316);
   hext_stack_2->SetBinError(14,17.35652);
   hext_stack_2->SetBinError(15,18.0457);
   hext_stack_2->SetBinError(16,18.20745);
   hext_stack_2->SetBinError(17,16.51836);
   hext_stack_2->SetBinError(18,16.93428);
   hext_stack_2->SetBinError(19,17.13128);
   hext_stack_2->SetBinError(20,17.55764);
   hext_stack_2->SetBinError(21,27.15687);
   hext_stack_2->SetBinError(22,21.2249);
   hext_stack_2->SetBinError(23,16.95689);
   hext_stack_2->SetBinError(24,17.05584);
   hext_stack_2->SetBinError(25,15.81166);
   hext_stack_2->SetBinError(26,16.29094);
   hext_stack_2->SetBinError(27,14.89336);
   hext_stack_2->SetBinError(28,15.07971);
   hext_stack_2->SetBinError(29,16.27136);
   hext_stack_2->SetBinError(30,17.45118);
   hext_stack_2->SetBinError(31,5.088474);
   hext_stack_2->SetEntries(52689);

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,21.82412);
   hdirt_stack_3->SetBinContent(1,1717.699);
   hdirt_stack_3->SetBinContent(2,317.8812);
   hdirt_stack_3->SetBinContent(3,212.7158);
   hdirt_stack_3->SetBinContent(4,177.0221);
   hdirt_stack_3->SetBinContent(5,152.2346);
   hdirt_stack_3->SetBinContent(6,133.0517);
   hdirt_stack_3->SetBinContent(7,137.9294);
   hdirt_stack_3->SetBinContent(8,123.6653);
   hdirt_stack_3->SetBinContent(9,109.8635);
   hdirt_stack_3->SetBinContent(10,110.7312);
   hdirt_stack_3->SetBinContent(11,88.91037);
   hdirt_stack_3->SetBinContent(12,100.0901);
   hdirt_stack_3->SetBinContent(13,92.62412);
   hdirt_stack_3->SetBinContent(14,90.62839);
   hdirt_stack_3->SetBinContent(15,97.90468);
   hdirt_stack_3->SetBinContent(16,93.69186);
   hdirt_stack_3->SetBinContent(17,87.82867);
   hdirt_stack_3->SetBinContent(18,79.66579);
   hdirt_stack_3->SetBinContent(19,95.55431);
   hdirt_stack_3->SetBinContent(20,104.5506);
   hdirt_stack_3->SetBinContent(21,159.4365);
   hdirt_stack_3->SetBinContent(22,103.8711);
   hdirt_stack_3->SetBinContent(23,75.78903);
   hdirt_stack_3->SetBinContent(24,76.05125);
   hdirt_stack_3->SetBinContent(25,58.02823);
   hdirt_stack_3->SetBinContent(26,72.58337);
   hdirt_stack_3->SetBinContent(27,58.0272);
   hdirt_stack_3->SetBinContent(28,74.57792);
   hdirt_stack_3->SetBinContent(29,82.43475);
   hdirt_stack_3->SetBinContent(30,89.04474);
   hdirt_stack_3->SetBinContent(31,4.21965);
   hdirt_stack_3->SetBinError(0,2.812274);
   hdirt_stack_3->SetBinError(1,27.03979);
   hdirt_stack_3->SetBinError(2,11.24974);
   hdirt_stack_3->SetBinError(3,9.097186);
   hdirt_stack_3->SetBinError(4,7.828242);
   hdirt_stack_3->SetBinError(5,7.566628);
   hdirt_stack_3->SetBinError(6,6.757378);
   hdirt_stack_3->SetBinError(7,8.687614);
   hdirt_stack_3->SetBinError(8,6.545795);
   hdirt_stack_3->SetBinError(9,6.373317);
   hdirt_stack_3->SetBinError(10,6.816107);
   hdirt_stack_3->SetBinError(11,5.633762);
   hdirt_stack_3->SetBinError(12,6.361937);
   hdirt_stack_3->SetBinError(13,6.459688);
   hdirt_stack_3->SetBinError(14,5.95744);
   hdirt_stack_3->SetBinError(15,6.470394);
   hdirt_stack_3->SetBinError(16,5.586623);
   hdirt_stack_3->SetBinError(17,6.456639);
   hdirt_stack_3->SetBinError(18,4.988118);
   hdirt_stack_3->SetBinError(19,7.682225);
   hdirt_stack_3->SetBinError(20,6.695919);
   hdirt_stack_3->SetBinError(21,8.256065);
   hdirt_stack_3->SetBinError(22,5.840291);
   hdirt_stack_3->SetBinError(23,5.208802);
   hdirt_stack_3->SetBinError(24,5.834019);
   hdirt_stack_3->SetBinError(25,4.137631);
   hdirt_stack_3->SetBinError(26,5.525348);
   hdirt_stack_3->SetBinError(27,4.768634);
   hdirt_stack_3->SetBinError(28,5.698048);
   hdirt_stack_3->SetBinError(29,5.674044);
   hdirt_stack_3->SetBinError(30,5.045318);
   hdirt_stack_3->SetBinError(31,1.044816);
   hdirt_stack_3->SetEntries(20115);

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,36.76438);
   houtFV_stack_4->SetBinContent(1,1502.96);
   houtFV_stack_4->SetBinContent(2,340.6453);
   houtFV_stack_4->SetBinContent(3,300.6357);
   houtFV_stack_4->SetBinContent(4,304.8896);
   houtFV_stack_4->SetBinContent(5,313.7786);
   houtFV_stack_4->SetBinContent(6,286.6461);
   houtFV_stack_4->SetBinContent(7,290.182);
   houtFV_stack_4->SetBinContent(8,306.7959);
   houtFV_stack_4->SetBinContent(9,269.791);
   houtFV_stack_4->SetBinContent(10,286.9595);
   houtFV_stack_4->SetBinContent(11,271.6331);
   houtFV_stack_4->SetBinContent(12,278.8515);
   houtFV_stack_4->SetBinContent(13,258.8383);
   houtFV_stack_4->SetBinContent(14,266.7853);
   houtFV_stack_4->SetBinContent(15,314.5269);
   houtFV_stack_4->SetBinContent(16,298.7724);
   houtFV_stack_4->SetBinContent(17,268.2312);
   houtFV_stack_4->SetBinContent(18,265.9196);
   houtFV_stack_4->SetBinContent(19,301.6959);
   houtFV_stack_4->SetBinContent(20,296.3271);
   houtFV_stack_4->SetBinContent(21,377.543);
   houtFV_stack_4->SetBinContent(22,305.6537);
   houtFV_stack_4->SetBinContent(23,253.4925);
   houtFV_stack_4->SetBinContent(24,238.0568);
   houtFV_stack_4->SetBinContent(25,236.9774);
   houtFV_stack_4->SetBinContent(26,232.7332);
   houtFV_stack_4->SetBinContent(27,210.571);
   houtFV_stack_4->SetBinContent(28,196.2106);
   houtFV_stack_4->SetBinContent(29,172.313);
   houtFV_stack_4->SetBinContent(30,168.9592);
   houtFV_stack_4->SetBinContent(31,15.32031);
   houtFV_stack_4->SetBinError(0,3.069337);
   houtFV_stack_4->SetBinError(1,23.70399);
   houtFV_stack_4->SetBinError(2,11.78497);
   houtFV_stack_4->SetBinError(3,10.80079);
   houtFV_stack_4->SetBinError(4,9.98173);
   houtFV_stack_4->SetBinError(5,11.59672);
   houtFV_stack_4->SetBinError(6,10.66226);
   houtFV_stack_4->SetBinError(7,10.23872);
   houtFV_stack_4->SetBinError(8,10.10961);
   houtFV_stack_4->SetBinError(9,9.901872);
   houtFV_stack_4->SetBinError(10,10.54271);
   houtFV_stack_4->SetBinError(11,9.525502);
   houtFV_stack_4->SetBinError(12,10.31487);
   houtFV_stack_4->SetBinError(13,9.676991);
   houtFV_stack_4->SetBinError(14,9.82387);
   houtFV_stack_4->SetBinError(15,11.91941);
   houtFV_stack_4->SetBinError(16,11.73127);
   houtFV_stack_4->SetBinError(17,9.303954);
   houtFV_stack_4->SetBinError(18,9.605431);
   houtFV_stack_4->SetBinError(19,10.81677);
   houtFV_stack_4->SetBinError(20,11.20311);
   houtFV_stack_4->SetBinError(21,11.16619);
   houtFV_stack_4->SetBinError(22,11.15841);
   houtFV_stack_4->SetBinError(23,8.583228);
   houtFV_stack_4->SetBinError(24,9.942617);
   houtFV_stack_4->SetBinError(25,9.134667);
   houtFV_stack_4->SetBinError(26,9.069819);
   houtFV_stack_4->SetBinError(27,7.84581);
   houtFV_stack_4->SetBinError(28,7.643983);
   houtFV_stack_4->SetBinError(29,7.069012);
   houtFV_stack_4->SetBinError(30,7.36825);
   houtFV_stack_4->SetBinError(31,2.055013);
   houtFV_stack_4->SetEntries(37487);

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.465427);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9338218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.55269);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.03114);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.240226);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5995177);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.115672);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.367108);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7807039);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.129458);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.631162);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.9753399);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.226608);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.608166);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.048998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.127626);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.283408);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.253676);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.8507857);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.620616);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,2.605502);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4941319);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2812022);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4749379);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1427183);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.297566);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3659082);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1532389);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3318839);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4273996);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2608584);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3873518);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4585896);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2949384);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3560243);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5795045);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4852559);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2806245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4246589);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3290372);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2514891);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.5081112);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4952454);
   hNCpi0inFVcoh_stack_5->SetEntries(638);

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,4.12887);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,50.7048);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,40.95389);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,41.62125);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,40.34074);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,38.16253);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,38.27761);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,44.09083);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,40.3125);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,39.15149);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,40.74393);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,37.29946);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,38.75361);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,35.16426);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,42.9509);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,40.13483);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,35.3406);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,36.67354);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,41.55008);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,37.63344);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,38.76554);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,49.79373);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,42.23225);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,39.11646);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,35.72988);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,37.427);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,43.04906);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,39.34196);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,48.41384);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,72.50212);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,89.09886);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,1.897208);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.4406984);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.350558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.137406);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.10749);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.096034);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,1.984827);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,1.976852);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.223984);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.045125);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.008398);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.08146);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.996672);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.096019);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.921221);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.165342);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.129988);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.884631);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.992037);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.124835);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.030099);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.018129);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.318632);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.262862);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.071629);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,1.844354);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.969126);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.171968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,1.989038);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,2.28156);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,2.829848);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,3.131785);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.4443649);
   hNCpi0inFVnoncoh_stack_6->SetEntries(23937);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(0,13.83113);
   hCCpi0inFV_stack_7->SetBinContent(1,255.2006);
   hCCpi0inFV_stack_7->SetBinContent(2,311.6043);
   hCCpi0inFV_stack_7->SetBinContent(3,296.2048);
   hCCpi0inFV_stack_7->SetBinContent(4,311.3164);
   hCCpi0inFV_stack_7->SetBinContent(5,309.9274);
   hCCpi0inFV_stack_7->SetBinContent(6,301.3866);
   hCCpi0inFV_stack_7->SetBinContent(7,312.8874);
   hCCpi0inFV_stack_7->SetBinContent(8,307.0911);
   hCCpi0inFV_stack_7->SetBinContent(9,311.9625);
   hCCpi0inFV_stack_7->SetBinContent(10,320.4539);
   hCCpi0inFV_stack_7->SetBinContent(11,315.9966);
   hCCpi0inFV_stack_7->SetBinContent(12,319.0758);
   hCCpi0inFV_stack_7->SetBinContent(13,305.4574);
   hCCpi0inFV_stack_7->SetBinContent(14,304.4536);
   hCCpi0inFV_stack_7->SetBinContent(15,316.956);
   hCCpi0inFV_stack_7->SetBinContent(16,326.2261);
   hCCpi0inFV_stack_7->SetBinContent(17,314.8924);
   hCCpi0inFV_stack_7->SetBinContent(18,308.2477);
   hCCpi0inFV_stack_7->SetBinContent(19,327.1398);
   hCCpi0inFV_stack_7->SetBinContent(20,311.5562);
   hCCpi0inFV_stack_7->SetBinContent(21,320.6263);
   hCCpi0inFV_stack_7->SetBinContent(22,322.9608);
   hCCpi0inFV_stack_7->SetBinContent(23,327.806);
   hCCpi0inFV_stack_7->SetBinContent(24,326.3478);
   hCCpi0inFV_stack_7->SetBinContent(25,352.3143);
   hCCpi0inFV_stack_7->SetBinContent(26,352.5519);
   hCCpi0inFV_stack_7->SetBinContent(27,370.5765);
   hCCpi0inFV_stack_7->SetBinContent(28,390.7559);
   hCCpi0inFV_stack_7->SetBinContent(29,428.0999);
   hCCpi0inFV_stack_7->SetBinContent(30,357.5459);
   hCCpi0inFV_stack_7->SetBinContent(31,11.22519);
   hCCpi0inFV_stack_7->SetBinError(0,1.917213);
   hCCpi0inFV_stack_7->SetBinError(1,8.036426);
   hCCpi0inFV_stack_7->SetBinError(2,8.88586);
   hCCpi0inFV_stack_7->SetBinError(3,8.659253);
   hCCpi0inFV_stack_7->SetBinError(4,8.81877);
   hCCpi0inFV_stack_7->SetBinError(5,8.841287);
   hCCpi0inFV_stack_7->SetBinError(6,8.746441);
   hCCpi0inFV_stack_7->SetBinError(7,8.813586);
   hCCpi0inFV_stack_7->SetBinError(8,8.829133);
   hCCpi0inFV_stack_7->SetBinError(9,8.921864);
   hCCpi0inFV_stack_7->SetBinError(10,8.995064);
   hCCpi0inFV_stack_7->SetBinError(11,8.954552);
   hCCpi0inFV_stack_7->SetBinError(12,8.976379);
   hCCpi0inFV_stack_7->SetBinError(13,8.787317);
   hCCpi0inFV_stack_7->SetBinError(14,8.777386);
   hCCpi0inFV_stack_7->SetBinError(15,8.929379);
   hCCpi0inFV_stack_7->SetBinError(16,9.084872);
   hCCpi0inFV_stack_7->SetBinError(17,8.859976);
   hCCpi0inFV_stack_7->SetBinError(18,8.829052);
   hCCpi0inFV_stack_7->SetBinError(19,9.111065);
   hCCpi0inFV_stack_7->SetBinError(20,8.777381);
   hCCpi0inFV_stack_7->SetBinError(21,9.064314);
   hCCpi0inFV_stack_7->SetBinError(22,9.015779);
   hCCpi0inFV_stack_7->SetBinError(23,9.09735);
   hCCpi0inFV_stack_7->SetBinError(24,9.045758);
   hCCpi0inFV_stack_7->SetBinError(25,9.452128);
   hCCpi0inFV_stack_7->SetBinError(26,9.501887);
   hCCpi0inFV_stack_7->SetBinError(27,9.771587);
   hCCpi0inFV_stack_7->SetBinError(28,9.894657);
   hCCpi0inFV_stack_7->SetBinError(29,10.31144);
   hCCpi0inFV_stack_7->SetBinError(30,9.510787);
   hCCpi0inFV_stack_7->SetBinError(31,1.716735);
   hCCpi0inFV_stack_7->SetEntries(41686);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,7.13081);
   hNCinFV_stack_8->SetBinContent(1,91.93396);
   hNCinFV_stack_8->SetBinContent(2,74.08611);
   hNCinFV_stack_8->SetBinContent(3,72.65631);
   hNCinFV_stack_8->SetBinContent(4,80.58856);
   hNCinFV_stack_8->SetBinContent(5,72.68106);
   hNCinFV_stack_8->SetBinContent(6,80.37122);
   hNCinFV_stack_8->SetBinContent(7,82.1972);
   hNCinFV_stack_8->SetBinContent(8,81.15242);
   hNCinFV_stack_8->SetBinContent(9,91.18038);
   hNCinFV_stack_8->SetBinContent(10,79.75489);
   hNCinFV_stack_8->SetBinContent(11,77.74846);
   hNCinFV_stack_8->SetBinContent(12,74.27544);
   hNCinFV_stack_8->SetBinContent(13,80.73047);
   hNCinFV_stack_8->SetBinContent(14,75.11386);
   hNCinFV_stack_8->SetBinContent(15,77.93906);
   hNCinFV_stack_8->SetBinContent(16,83.42339);
   hNCinFV_stack_8->SetBinContent(17,74.90322);
   hNCinFV_stack_8->SetBinContent(18,86.86304);
   hNCinFV_stack_8->SetBinContent(19,82.09615);
   hNCinFV_stack_8->SetBinContent(20,79.65184);
   hNCinFV_stack_8->SetBinContent(21,96.86818);
   hNCinFV_stack_8->SetBinContent(22,85.87962);
   hNCinFV_stack_8->SetBinContent(23,74.84145);
   hNCinFV_stack_8->SetBinContent(24,86.40862);
   hNCinFV_stack_8->SetBinContent(25,81.24062);
   hNCinFV_stack_8->SetBinContent(26,78.68054);
   hNCinFV_stack_8->SetBinContent(27,103.3392);
   hNCinFV_stack_8->SetBinContent(28,111.2185);
   hNCinFV_stack_8->SetBinContent(29,149.7511);
   hNCinFV_stack_8->SetBinContent(30,222.183);
   hNCinFV_stack_8->SetBinContent(31,5.625052);
   hNCinFV_stack_8->SetBinError(0,1.350841);
   hNCinFV_stack_8->SetBinError(1,4.820258);
   hNCinFV_stack_8->SetBinError(2,4.30409);
   hNCinFV_stack_8->SetBinError(3,4.244929);
   hNCinFV_stack_8->SetBinError(4,4.464482);
   hNCinFV_stack_8->SetBinError(5,4.222645);
   hNCinFV_stack_8->SetBinError(6,4.496736);
   hNCinFV_stack_8->SetBinError(7,4.553006);
   hNCinFV_stack_8->SetBinError(8,4.438701);
   hNCinFV_stack_8->SetBinError(9,4.731742);
   hNCinFV_stack_8->SetBinError(10,4.474131);
   hNCinFV_stack_8->SetBinError(11,4.406079);
   hNCinFV_stack_8->SetBinError(12,4.299534);
   hNCinFV_stack_8->SetBinError(13,4.466212);
   hNCinFV_stack_8->SetBinError(14,4.312979);
   hNCinFV_stack_8->SetBinError(15,4.394619);
   hNCinFV_stack_8->SetBinError(16,4.552191);
   hNCinFV_stack_8->SetBinError(17,4.228896);
   hNCinFV_stack_8->SetBinError(18,4.67979);
   hNCinFV_stack_8->SetBinError(19,4.598505);
   hNCinFV_stack_8->SetBinError(20,4.415554);
   hNCinFV_stack_8->SetBinError(21,4.918832);
   hNCinFV_stack_8->SetBinError(22,4.652084);
   hNCinFV_stack_8->SetBinError(23,4.357683);
   hNCinFV_stack_8->SetBinError(24,4.662);
   hNCinFV_stack_8->SetBinError(25,4.578476);
   hNCinFV_stack_8->SetBinError(26,4.348968);
   hNCinFV_stack_8->SetBinError(27,5.137911);
   hNCinFV_stack_8->SetBinError(28,5.269389);
   hNCinFV_stack_8->SetBinError(29,6.192321);
   hNCinFV_stack_8->SetBinError(30,7.541642);
   hNCinFV_stack_8->SetBinError(31,1.161279);
   hNCinFV_stack_8->SetEntries(11587);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,92.80042);
   hnumuCCinFV_stack_9->SetBinContent(1,2340.117);
   hnumuCCinFV_stack_9->SetBinContent(2,2670.418);
   hnumuCCinFV_stack_9->SetBinContent(3,2623.794);
   hnumuCCinFV_stack_9->SetBinContent(4,2635.683);
   hnumuCCinFV_stack_9->SetBinContent(5,2751.172);
   hnumuCCinFV_stack_9->SetBinContent(6,2757.483);
   hnumuCCinFV_stack_9->SetBinContent(7,2612.702);
   hnumuCCinFV_stack_9->SetBinContent(8,2729.986);
   hnumuCCinFV_stack_9->SetBinContent(9,2795.685);
   hnumuCCinFV_stack_9->SetBinContent(10,2862.514);
   hnumuCCinFV_stack_9->SetBinContent(11,2692.191);
   hnumuCCinFV_stack_9->SetBinContent(12,2715.699);
   hnumuCCinFV_stack_9->SetBinContent(13,2832.688);
   hnumuCCinFV_stack_9->SetBinContent(14,2753.766);
   hnumuCCinFV_stack_9->SetBinContent(15,2695.762);
   hnumuCCinFV_stack_9->SetBinContent(16,2835.101);
   hnumuCCinFV_stack_9->SetBinContent(17,2755.26);
   hnumuCCinFV_stack_9->SetBinContent(18,2814.626);
   hnumuCCinFV_stack_9->SetBinContent(19,2908.864);
   hnumuCCinFV_stack_9->SetBinContent(20,2825.233);
   hnumuCCinFV_stack_9->SetBinContent(21,2650.51);
   hnumuCCinFV_stack_9->SetBinContent(22,2836.967);
   hnumuCCinFV_stack_9->SetBinContent(23,2987.201);
   hnumuCCinFV_stack_9->SetBinContent(24,2940.937);
   hnumuCCinFV_stack_9->SetBinContent(25,3244.394);
   hnumuCCinFV_stack_9->SetBinContent(26,3193.729);
   hnumuCCinFV_stack_9->SetBinContent(27,3358.748);
   hnumuCCinFV_stack_9->SetBinContent(28,3441.747);
   hnumuCCinFV_stack_9->SetBinContent(29,3594.2);
   hnumuCCinFV_stack_9->SetBinContent(30,2980.732);
   hnumuCCinFV_stack_9->SetBinContent(31,83.79677);
   hnumuCCinFV_stack_9->SetBinError(0,6.42812);
   hnumuCCinFV_stack_9->SetBinError(1,34.65054);
   hnumuCCinFV_stack_9->SetBinError(2,35.77597);
   hnumuCCinFV_stack_9->SetBinError(3,36.694);
   hnumuCCinFV_stack_9->SetBinError(4,36.67952);
   hnumuCCinFV_stack_9->SetBinError(5,37.17987);
   hnumuCCinFV_stack_9->SetBinError(6,37.13741);
   hnumuCCinFV_stack_9->SetBinError(7,35.60656);
   hnumuCCinFV_stack_9->SetBinError(8,36.6261);
   hnumuCCinFV_stack_9->SetBinError(9,37.08556);
   hnumuCCinFV_stack_9->SetBinError(10,37.93612);
   hnumuCCinFV_stack_9->SetBinError(11,35.56093);
   hnumuCCinFV_stack_9->SetBinError(12,36.02552);
   hnumuCCinFV_stack_9->SetBinError(13,37.99067);
   hnumuCCinFV_stack_9->SetBinError(14,36.33838);
   hnumuCCinFV_stack_9->SetBinError(15,35.09601);
   hnumuCCinFV_stack_9->SetBinError(16,38.51743);
   hnumuCCinFV_stack_9->SetBinError(17,35.96404);
   hnumuCCinFV_stack_9->SetBinError(18,36.99415);
   hnumuCCinFV_stack_9->SetBinError(19,36.97265);
   hnumuCCinFV_stack_9->SetBinError(20,38.71486);
   hnumuCCinFV_stack_9->SetBinError(21,35.35686);
   hnumuCCinFV_stack_9->SetBinError(22,38.09176);
   hnumuCCinFV_stack_9->SetBinError(23,38.08566);
   hnumuCCinFV_stack_9->SetBinError(24,38.791);
   hnumuCCinFV_stack_9->SetBinError(25,40.93381);
   hnumuCCinFV_stack_9->SetBinError(26,40.34224);
   hnumuCCinFV_stack_9->SetBinError(27,42.36499);
   hnumuCCinFV_stack_9->SetBinError(28,42.28603);
   hnumuCCinFV_stack_9->SetBinError(29,44.10575);
   hnumuCCinFV_stack_9->SetBinError(30,38.02226);
   hnumuCCinFV_stack_9->SetBinError(31,6.416184);
   hnumuCCinFV_stack_9->SetEntries(308279);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(0,0.6233681);
   hnueCCinFV_stack_10->SetBinContent(1,11.857);
   hnueCCinFV_stack_10->SetBinContent(2,15.42497);
   hnueCCinFV_stack_10->SetBinContent(3,11.44825);
   hnueCCinFV_stack_10->SetBinContent(4,16.60439);
   hnueCCinFV_stack_10->SetBinContent(5,11.61022);
   hnueCCinFV_stack_10->SetBinContent(6,9.122491);
   hnueCCinFV_stack_10->SetBinContent(7,15.08493);
   hnueCCinFV_stack_10->SetBinContent(8,15.18784);
   hnueCCinFV_stack_10->SetBinContent(9,12.4179);
   hnueCCinFV_stack_10->SetBinContent(10,13.62593);
   hnueCCinFV_stack_10->SetBinContent(11,12.23042);
   hnueCCinFV_stack_10->SetBinContent(12,14.07);
   hnueCCinFV_stack_10->SetBinContent(13,14.06911);
   hnueCCinFV_stack_10->SetBinContent(14,17.26833);
   hnueCCinFV_stack_10->SetBinContent(15,13.30777);
   hnueCCinFV_stack_10->SetBinContent(16,11.69555);
   hnueCCinFV_stack_10->SetBinContent(17,13.51976);
   hnueCCinFV_stack_10->SetBinContent(18,13.28406);
   hnueCCinFV_stack_10->SetBinContent(19,17.76339);
   hnueCCinFV_stack_10->SetBinContent(20,15.90909);
   hnueCCinFV_stack_10->SetBinContent(21,13.86508);
   hnueCCinFV_stack_10->SetBinContent(22,13.05318);
   hnueCCinFV_stack_10->SetBinContent(23,13.50697);
   hnueCCinFV_stack_10->SetBinContent(24,13.49993);
   hnueCCinFV_stack_10->SetBinContent(25,13.06288);
   hnueCCinFV_stack_10->SetBinContent(26,13.0113);
   hnueCCinFV_stack_10->SetBinContent(27,15.56717);
   hnueCCinFV_stack_10->SetBinContent(28,20.98598);
   hnueCCinFV_stack_10->SetBinContent(29,30.30085);
   hnueCCinFV_stack_10->SetBinContent(30,15.40394);
   hnueCCinFV_stack_10->SetBinContent(31,0.4476171);
   hnueCCinFV_stack_10->SetBinError(0,0.4402989);
   hnueCCinFV_stack_10->SetBinError(1,1.710938);
   hnueCCinFV_stack_10->SetBinError(2,3.717654);
   hnueCCinFV_stack_10->SetBinError(3,1.878735);
   hnueCCinFV_stack_10->SetBinError(4,3.423218);
   hnueCCinFV_stack_10->SetBinError(5,2.876302);
   hnueCCinFV_stack_10->SetBinError(6,1.459813);
   hnueCCinFV_stack_10->SetBinError(7,3.126208);
   hnueCCinFV_stack_10->SetBinError(8,2.333472);
   hnueCCinFV_stack_10->SetBinError(9,1.829741);
   hnueCCinFV_stack_10->SetBinError(10,2.732009);
   hnueCCinFV_stack_10->SetBinError(11,1.939297);
   hnueCCinFV_stack_10->SetBinError(12,2.100842);
   hnueCCinFV_stack_10->SetBinError(13,2.243699);
   hnueCCinFV_stack_10->SetBinError(14,2.876269);
   hnueCCinFV_stack_10->SetBinError(15,2.51937);
   hnueCCinFV_stack_10->SetBinError(16,2.226125);
   hnueCCinFV_stack_10->SetBinError(17,2.04192);
   hnueCCinFV_stack_10->SetBinError(18,3.092641);
   hnueCCinFV_stack_10->SetBinError(19,3.1384);
   hnueCCinFV_stack_10->SetBinError(20,2.628774);
   hnueCCinFV_stack_10->SetBinError(21,1.945442);
   hnueCCinFV_stack_10->SetBinError(22,2.460354);
   hnueCCinFV_stack_10->SetBinError(23,1.860103);
   hnueCCinFV_stack_10->SetBinError(24,3.248166);
   hnueCCinFV_stack_10->SetBinError(25,2.42552);
   hnueCCinFV_stack_10->SetBinError(26,1.950031);
   hnueCCinFV_stack_10->SetBinError(27,2.535646);
   hnueCCinFV_stack_10->SetBinError(28,4.865972);
   hnueCCinFV_stack_10->SetBinError(29,4.165246);
   hnueCCinFV_stack_10->SetBinError(30,2.055015);
   hnueCCinFV_stack_10->SetBinError(31,0.3188238);
   hnueCCinFV_stack_10->SetEntries(1603);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,355.5986);
   hmcerror__5->SetBinContent(1,7919.326);
   hmcerror__5->SetBinContent(2,4891.45);
   hmcerror__5->SetBinContent(3,4610.664);
   hmcerror__5->SetBinContent(4,4618.506);
   hmcerror__5->SetBinContent(5,4659.968);
   hmcerror__5->SetBinContent(6,4486.428);
   hmcerror__5->SetBinContent(7,4375.171);
   hmcerror__5->SetBinContent(8,4698.759);
   hmcerror__5->SetBinContent(9,4513.811);
   hmcerror__5->SetBinContent(10,4528.885);
   hmcerror__5->SetBinContent(11,4273.497);
   hmcerror__5->SetBinContent(12,4248.042);
   hmcerror__5->SetBinContent(13,4312.424);
   hmcerror__5->SetBinContent(14,4270.335);
   hmcerror__5->SetBinContent(15,4333.333);
   hmcerror__5->SetBinContent(16,4451.919);
   hmcerror__5->SetBinContent(17,4201.596);
   hmcerror__5->SetBinContent(18,4289.019);
   hmcerror__5->SetBinContent(19,4458.119);
   hmcerror__5->SetBinContent(20,4414.874);
   hmcerror__5->SetBinContent(21,5295.033);
   hmcerror__5->SetBinContent(22,4736.535);
   hmcerror__5->SetBinContent(23,4456.115);
   hmcerror__5->SetBinContent(24,4414.073);
   hmcerror__5->SetBinContent(25,4644.575);
   hmcerror__5->SetBinContent(26,4638.988);
   hmcerror__5->SetBinContent(27,4730.506);
   hmcerror__5->SetBinContent(28,4887.816);
   hmcerror__5->SetBinContent(29,5287.699);
   hmcerror__5->SetBinContent(30,4869.405);
   hmcerror__5->SetBinContent(31,193.0807);
   hmcerror__5->SetBinError(0,11.53778);
   hmcerror__5->SetBinError(1,1072.846);
   hmcerror__5->SetBinError(2,622.4612);
   hmcerror__5->SetBinError(3,584.9685);
   hmcerror__5->SetBinError(4,592.0769);
   hmcerror__5->SetBinError(5,600.9732);
   hmcerror__5->SetBinError(6,584.5633);
   hmcerror__5->SetBinError(7,563.0317);
   hmcerror__5->SetBinError(8,576.1142);
   hmcerror__5->SetBinError(9,580.7709);
   hmcerror__5->SetBinError(10,602.001);
   hmcerror__5->SetBinError(11,546.2655);
   hmcerror__5->SetBinError(12,554.033);
   hmcerror__5->SetBinError(13,587.6901);
   hmcerror__5->SetBinError(14,562.8686);
   hmcerror__5->SetBinError(15,551.8329);
   hmcerror__5->SetBinError(16,602.5802);
   hmcerror__5->SetBinError(17,551.5999);
   hmcerror__5->SetBinError(18,570.778);
   hmcerror__5->SetBinError(19,589.4033);
   hmcerror__5->SetBinError(20,592.1333);
   hmcerror__5->SetBinError(21,617.0395);
   hmcerror__5->SetBinError(22,615.4179);
   hmcerror__5->SetBinError(23,584.4976);
   hmcerror__5->SetBinError(24,602.2661);
   hmcerror__5->SetBinError(25,639.4965);
   hmcerror__5->SetBinError(26,637.9413);
   hmcerror__5->SetBinError(27,671.7817);
   hmcerror__5->SetBinError(28,694.7356);
   hmcerror__5->SetBinError(29,753.9606);
   hmcerror__5->SetBinError(30,646.9332);
   hmcerror__5->SetBinError(31,49.80309);
   hmcerror__5->SetBinError(32,0.4212968);
   hmcerror__5->SetBinError(33,0.4212968);
   hmcerror__5->SetEntries(125394.8);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[32] = {
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
   Double_t _fy3005[32] = {
   6764,
   4815,
   4432,
   4633,
   4698,
   4486,
   4542,
   4621,
   4435,
   4426,
   4354,
   4321,
   4254,
   4400,
   4445,
   4391,
   4233,
   4354,
   4303,
   4287,
   5090,
   4659,
   4434,
   4468,
   4580,
   4709,
   4875,
   4807,
   5193,
   4657,
   160,
   0};
   Double_t _felx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3005[32] = {
   82.24354,
   69.3902,
   66.57327,
   68.06614,
   68.54196,
   66.97761,
   67.39436,
   67.97794,
   66.5958,
   66.52819,
   65.98485,
   65.73431,
   65.2227,
   66.3325,
   66.67083,
   66.26462,
   65.06151,
   65.98485,
   65.59726,
   65.47519,
   71.34424,
   68.25687,
   66.58829,
   66.8431,
   67.6757,
   68.62215,
   69.8212,
   69.33253,
   72.06247,
   68.24222,
   12.64911,
   0};
   Double_t _fehx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3005[32] = {
   82.24354,
   69.3902,
   66.57327,
   68.06614,
   68.54196,
   66.97761,
   67.39436,
   67.97794,
   66.5958,
   66.52819,
   65.98485,
   65.73431,
   65.2227,
   66.3325,
   66.67083,
   66.26462,
   65.06151,
   65.98485,
   65.59726,
   65.47519,
   71.34424,
   68.25687,
   66.58829,
   66.8431,
   67.6757,
   68.62215,
   69.8212,
   69.33253,
   72.06247,
   68.24222,
   12.64911,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(7530.868);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.99#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.9/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 138826.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3459.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22702.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4978.3","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9432.7","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.5","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1297.2","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9748.8","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 2695.4","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 85921.7","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 438.2","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[32] = {
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
   Double_t _fy3006[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3006[32] = {
   0.1354719,
   0.1272549,
   0.126873,
   0.1281966,
   0.1289651,
   0.1302959,
   0.1286879,
   0.1226099,
   0.1286653,
   0.1329248,
   0.1278263,
   0.1304208,
   0.1362784,
   0.131809,
   0.127346,
   0.1353529,
   0.1312834,
   0.1330789,
   0.132209,
   0.1341224,
   0.1165318,
   0.12993,
   0.1311675,
   0.1364423,
   0.1376868,
   0.1375173,
   0.1420105,
   0.1421362,
   0.1425877,
   0.1328567,
   0.2579393,
   0};
   Double_t _fehx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3006[32] = {
   0.1354719,
   0.1272549,
   0.126873,
   0.1281966,
   0.1289651,
   0.1302959,
   0.1286879,
   0.1226099,
   0.1286653,
   0.1329248,
   0.1278263,
   0.1304208,
   0.1362784,
   0.131809,
   0.127346,
   0.1353529,
   0.1312834,
   0.1330789,
   0.132209,
   0.1341224,
   0.1165318,
   0.12993,
   0.1311675,
   0.1364423,
   0.1376868,
   0.1375173,
   0.1420105,
   0.1421362,
   0.1425877,
   0.1328567,
   0.2579393,
   0};
   grae = new TGraphAsymmErrors(32,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1210);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[32] = {
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
   Double_t _fy3007[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3007[32] = {
   0.1333461,
   0.1237276,
   0.1244975,
   0.1226315,
   0.1268697,
   0.1266031,
   0.1252911,
   0.118254,
   0.1262422,
   0.1301284,
   0.1258549,
   0.1263378,
   0.1336121,
   0.1292989,
   0.1246505,
   0.1332696,
   0.1282541,
   0.1309342,
   0.129443,
   0.1318572,
   0.1089426,
   0.1266818,
   0.1292705,
   0.1338643,
   0.1359763,
   0.13567,
   0.1404757,
   0.1381108,
   0.1399745,
   0.1290559,
   0.1245964,
   0};
   Double_t _fehx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3007[32] = {
   0.1333461,
   0.1237276,
   0.1244975,
   0.1226315,
   0.1268697,
   0.1266031,
   0.1252911,
   0.118254,
   0.1262422,
   0.1301284,
   0.1258549,
   0.1263378,
   0.1336121,
   0.1292989,
   0.1246505,
   0.1332696,
   0.1282541,
   0.1309342,
   0.129443,
   0.1318572,
   0.1089426,
   0.1266818,
   0.1292705,
   0.1338643,
   0.1359763,
   0.13567,
   0.1404757,
   0.1381108,
   0.1399745,
   0.1290559,
   0.1245964,
   0};
   grae = new TGraphAsymmErrors(32,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1210);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[32] = {
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
   Double_t _fy3008[32] = {
   0.8541131,
   0.9843706,
   0.9612499,
   1.003138,
   1.008161,
   0.9999047,
   1.038131,
   0.9834512,
   0.9825401,
   0.9772824,
   1.018838,
   1.017175,
   0.9864522,
   1.030364,
   1.025769,
   0.9863163,
   1.007474,
   1.015151,
   0.9652053,
   0.9710356,
   0.9612783,
   0.9836305,
   0.9950372,
   1.012217,
   0.9860966,
   1.015092,
   1.030545,
   0.9834658,
   0.9820907,
   0.9563796,
   0.8286691,
   10};
   Double_t _felx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3008[32] = {
   0.01038517,
   0.01418602,
   0.01443898,
   0.0147377,
   0.01470868,
   0.01492894,
   0.01540382,
   0.01446721,
   0.01475379,
   0.01468975,
   0.01544048,
   0.01547403,
   0.01512437,
   0.01553332,
   0.01538558,
   0.01488451,
   0.01548495,
   0.0153846,
   0.01471411,
   0.01483059,
   0.0134738,
   0.01441072,
   0.01494313,
   0.01514318,
   0.01457091,
   0.01479248,
   0.01475977,
   0.01418477,
   0.01362832,
   0.01401449,
   0.06551204,
   0};
   Double_t _fehx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3008[32] = {
   0.01038517,
   0.01418602,
   0.01443898,
   0.0147377,
   0.01470868,
   0.01492894,
   0.01540382,
   0.01446721,
   0.01475379,
   0.01468975,
   0.01544048,
   0.01547403,
   0.01512437,
   0.01553332,
   0.01538558,
   0.01488451,
   0.01548495,
   0.0153846,
   0.01471411,
   0.01483059,
   0.0134738,
   0.01441072,
   0.01494313,
   0.01514318,
   0.01457091,
   0.01479248,
   0.01475977,
   0.01418477,
   0.01362832,
   0.01401449,
   0.06551204,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0.6868413);
   Graph_Graph3008->SetMaximum(10.92368);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
