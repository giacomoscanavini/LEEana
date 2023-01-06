#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Oct 21 23:07:16 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-0.9518283,293.3333,105.2522);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__25->SetBinContent(0,0.717828);
   hmc__25->SetBinContent(1,33.40416);
   hmc__25->SetBinContent(2,26.94049);
   hmc__25->SetBinContent(3,21.91942);
   hmc__25->SetBinContent(4,18.46679);
   hmc__25->SetBinContent(5,16.59816);
   hmc__25->SetBinContent(6,16.25913);
   hmc__25->SetBinContent(7,14.29823);
   hmc__25->SetBinContent(8,15.15374);
   hmc__25->SetBinContent(9,16.76907);
   hmc__25->SetBinContent(10,20.59791);
   hmc__25->SetBinContent(11,15.29049);
   hmc__25->SetBinContent(12,21.33287);
   hmc__25->SetBinContent(13,19.64821);
   hmc__25->SetBinContent(14,24.66676);
   hmc__25->SetBinContent(15,18.5057);
   hmc__25->SetBinContent(16,22.74947);
   hmc__25->SetBinContent(17,25.05625);
   hmc__25->SetBinContent(18,27.41552);
   hmc__25->SetBinContent(19,24.71746);
   hmc__25->SetBinContent(20,25.69658);
   hmc__25->SetBinContent(21,31.39887);
   hmc__25->SetBinContent(22,35.64566);
   hmc__25->SetBinContent(23,47.59142);
   hmc__25->SetBinContent(24,41.46746);
   hmc__25->SetBinContent(25,41.06391);
   hmc__25->SetBinContent(26,36.03716);
   hmc__25->SetBinContent(27,1.180453);
   hmc__25->SetBinError(0,0.4273494);
   hmc__25->SetBinError(1,15.58819);
   hmc__25->SetBinError(2,15.35991);
   hmc__25->SetBinError(3,10.75785);
   hmc__25->SetBinError(4,11.45496);
   hmc__25->SetBinError(5,11.88028);
   hmc__25->SetBinError(6,7.822173);
   hmc__25->SetBinError(7,9.191838);
   hmc__25->SetBinError(8,11.2667);
   hmc__25->SetBinError(9,8.181412);
   hmc__25->SetBinError(10,12.33826);
   hmc__25->SetBinError(11,11.98853);
   hmc__25->SetBinError(12,14.18759);
   hmc__25->SetBinError(13,11.19507);
   hmc__25->SetBinError(14,9.517489);
   hmc__25->SetBinError(15,11.47379);
   hmc__25->SetBinError(16,10.89651);
   hmc__25->SetBinError(17,18.66583);
   hmc__25->SetBinError(18,17.86716);
   hmc__25->SetBinError(19,11.13702);
   hmc__25->SetBinError(20,12.99507);
   hmc__25->SetBinError(21,18.92278);
   hmc__25->SetBinError(22,15.70202);
   hmc__25->SetBinError(23,19.70905);
   hmc__25->SetBinError(24,16.3577);
   hmc__25->SetBinError(25,25.1739);
   hmc__25->SetBinError(26,15.27148);
   hmc__25->SetBinError(27,4.427382);
   hmc__25->SetMinimum(-0.9518283);
   hmc__25->SetMaximum(99.94197);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",26,0,260);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(49.97099);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,0.5305593);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.6448739);
   hbadmatch_stack_1->SetBinContent(4,0.7791866);
   hbadmatch_stack_1->SetBinContent(5,0.1274195);
   hbadmatch_stack_1->SetBinContent(6,0.7855361);
   hbadmatch_stack_1->SetBinContent(8,0.5540816);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.8208461);
   hbadmatch_stack_1->SetBinContent(11,1.122007);
   hbadmatch_stack_1->SetBinContent(12,1.362599);
   hbadmatch_stack_1->SetBinContent(13,0.8654553);
   hbadmatch_stack_1->SetBinContent(14,1.145601);
   hbadmatch_stack_1->SetBinContent(15,0.5465759);
   hbadmatch_stack_1->SetBinContent(16,0.7671555);
   hbadmatch_stack_1->SetBinContent(17,0.833322);
   hbadmatch_stack_1->SetBinContent(18,0.9543935);
   hbadmatch_stack_1->SetBinContent(19,0.4383031);
   hbadmatch_stack_1->SetBinContent(20,0.4672679);
   hbadmatch_stack_1->SetBinContent(21,0.8942994);
   hbadmatch_stack_1->SetBinContent(22,1.283579);
   hbadmatch_stack_1->SetBinContent(23,2.438771);
   hbadmatch_stack_1->SetBinContent(24,0.4117681);
   hbadmatch_stack_1->SetBinContent(25,0.7610724);
   hbadmatch_stack_1->SetBinContent(26,1.579583);
   hbadmatch_stack_1->SetBinError(1,0.3174306);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.407165);
   hbadmatch_stack_1->SetBinError(4,0.4618265);
   hbadmatch_stack_1->SetBinError(5,0.1274195);
   hbadmatch_stack_1->SetBinError(6,0.401755);
   hbadmatch_stack_1->SetBinError(8,0.4018404);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.5886953);
   hbadmatch_stack_1->SetBinError(11,0.5735623);
   hbadmatch_stack_1->SetBinError(12,0.7250442);
   hbadmatch_stack_1->SetBinError(13,0.4103903);
   hbadmatch_stack_1->SetBinError(14,0.4782503);
   hbadmatch_stack_1->SetBinError(15,0.3249309);
   hbadmatch_stack_1->SetBinError(16,0.4474079);
   hbadmatch_stack_1->SetBinError(17,0.3949018);
   hbadmatch_stack_1->SetBinError(18,0.5145413);
   hbadmatch_stack_1->SetBinError(19,0.260518);
   hbadmatch_stack_1->SetBinError(20,0.2871168);
   hbadmatch_stack_1->SetBinError(21,0.4717288);
   hbadmatch_stack_1->SetBinError(22,0.5031759);
   hbadmatch_stack_1->SetBinError(23,0.8825253);
   hbadmatch_stack_1->SetBinError(24,0.2914526);
   hbadmatch_stack_1->SetBinError(25,0.4050154);
   hbadmatch_stack_1->SetBinError(26,0.6832845);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(1,0.8131978);
   hext_stack_2->SetBinContent(2,2.420823);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,1.779209);
   hext_stack_2->SetBinContent(6,1.37261);
   hext_stack_2->SetBinContent(7,0.6416141);
   hext_stack_2->SetBinContent(8,1.290409);
   hext_stack_2->SetBinContent(9,3.532468);
   hext_stack_2->SetBinContent(10,1.779209);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,3.15182);
   hext_stack_2->SetBinContent(13,2.110787);
   hext_stack_2->SetBinContent(14,6.677107);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,3.166181);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,6.374251);
   hext_stack_2->SetBinContent(19,1.379791);
   hext_stack_2->SetBinContent(20,1.689827);
   hext_stack_2->SetBinContent(21,5.248246);
   hext_stack_2->SetBinContent(22,7.650299);
   hext_stack_2->SetBinContent(23,9.02291);
   hext_stack_2->SetBinContent(24,7.023046);
   hext_stack_2->SetBinContent(25,6.139236);
   hext_stack_2->SetBinContent(26,8.299094);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(1,0.5750177);
   hext_stack_2->SetBinError(2,1.122148);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,0.9206235);
   hext_stack_2->SetBinError(6,0.8259691);
   hext_stack_2->SetBinError(7,0.6416141);
   hext_stack_2->SetBinError(8,0.788756);
   hext_stack_2->SetBinError(9,1.47091);
   hext_stack_2->SetBinError(10,0.9206235);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,1.23684);
   hext_stack_2->SetBinError(13,0.8669371);
   hext_stack_2->SetBinError(14,1.973462);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,1.061777);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,1.784857);
   hext_stack_2->SetBinError(19,0.6935586);
   hext_stack_2->SetBinError(20,0.9943139);
   hext_stack_2->SetBinError(21,1.638217);
   hext_stack_2->SetBinError(22,2.05189);
   hext_stack_2->SetBinError(23,2.211894);
   hext_stack_2->SetBinError(24,1.842873);
   hext_stack_2->SetBinError(25,1.714458);
   hext_stack_2->SetBinError(26,2.102551);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.4192812);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.400075);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinContent(22,0.566972);
   hdirt_stack_3->SetBinContent(23,0.4004149);
   hdirt_stack_3->SetBinContent(24,0.4049124);
   hdirt_stack_3->SetBinContent(25,0.002351481);
   hdirt_stack_3->SetBinContent(26,0.6027733);
   hdirt_stack_3->SetBinError(1,0.3058667);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(17,0.296158);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetBinError(22,0.4505768);
   hdirt_stack_3->SetBinError(23,0.2964588);
   hdirt_stack_3->SetBinError(24,0.4049124);
   hdirt_stack_3->SetBinError(25,0.002351481);
   hdirt_stack_3->SetBinError(26,0.4293907);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,0.1967154);
   houtFV_stack_4->SetBinContent(1,20.56938);
   houtFV_stack_4->SetBinContent(2,3.285467);
   houtFV_stack_4->SetBinContent(3,3.291422);
   houtFV_stack_4->SetBinContent(4,3.58438);
   houtFV_stack_4->SetBinContent(5,2.820277);
   houtFV_stack_4->SetBinContent(6,2.822362);
   houtFV_stack_4->SetBinContent(7,3.004297);
   houtFV_stack_4->SetBinContent(8,2.648451);
   houtFV_stack_4->SetBinContent(9,1.333697);
   houtFV_stack_4->SetBinContent(10,3.92689);
   houtFV_stack_4->SetBinContent(11,1.607298);
   houtFV_stack_4->SetBinContent(12,3.860897);
   houtFV_stack_4->SetBinContent(13,3.48177);
   houtFV_stack_4->SetBinContent(14,2.873501);
   houtFV_stack_4->SetBinContent(15,2.634428);
   houtFV_stack_4->SetBinContent(16,3.637231);
   houtFV_stack_4->SetBinContent(17,6.225762);
   houtFV_stack_4->SetBinContent(18,3.595031);
   houtFV_stack_4->SetBinContent(19,3.390027);
   houtFV_stack_4->SetBinContent(20,4.679451);
   houtFV_stack_4->SetBinContent(21,2.247819);
   houtFV_stack_4->SetBinContent(22,2.783831);
   houtFV_stack_4->SetBinContent(23,4.043303);
   houtFV_stack_4->SetBinContent(24,4.193118);
   houtFV_stack_4->SetBinContent(25,5.47563);
   houtFV_stack_4->SetBinContent(26,13.18016);
   houtFV_stack_4->SetBinContent(27,0.8546757);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,2.224043);
   houtFV_stack_4->SetBinError(2,1.035467);
   houtFV_stack_4->SetBinError(3,0.8734033);
   houtFV_stack_4->SetBinError(4,1.093143);
   houtFV_stack_4->SetBinError(5,0.8255822);
   houtFV_stack_4->SetBinError(6,0.7636696);
   houtFV_stack_4->SetBinError(7,0.9694234);
   houtFV_stack_4->SetBinError(8,0.7650754);
   houtFV_stack_4->SetBinError(9,0.6147918);
   houtFV_stack_4->SetBinError(10,0.9836939);
   houtFV_stack_4->SetBinError(11,0.6796534);
   houtFV_stack_4->SetBinError(12,1.027279);
   houtFV_stack_4->SetBinError(13,0.9356288);
   houtFV_stack_4->SetBinError(14,0.8546316);
   houtFV_stack_4->SetBinError(15,0.7534176);
   houtFV_stack_4->SetBinError(16,1.059631);
   houtFV_stack_4->SetBinError(17,1.282296);
   houtFV_stack_4->SetBinError(18,1.145119);
   houtFV_stack_4->SetBinError(19,0.9533615);
   houtFV_stack_4->SetBinError(20,1.291733);
   houtFV_stack_4->SetBinError(21,0.7410886);
   houtFV_stack_4->SetBinError(22,0.801981);
   houtFV_stack_4->SetBinError(23,0.9375168);
   houtFV_stack_4->SetBinError(24,1.052982);
   houtFV_stack_4->SetBinError(25,1.150278);
   houtFV_stack_4->SetBinError(26,1.793087);
   houtFV_stack_4->SetBinError(27,0.5300589);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1355755);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1970609);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.117208);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1112314);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1466679);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1052837);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02414102);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02913099);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1455891);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1030432);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1183689);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.03712227);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05378138);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05593679);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02130741);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1294293);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0151491);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.0603275);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06720735);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02625185);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03105946);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03229777);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.07542);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.489963);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.436279);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.854138);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.971171);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.661002);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.282347);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.218537);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.984546);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.004182);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.9217);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.060109);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.325059);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.303627);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.921232);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.644842);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.356616);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.084904);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.276267);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.573604);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.542969);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.793412);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.432669);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.995523);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.543964);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.717371);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.0589169);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5245207);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6816777);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6600522);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5300619);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6020788);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5307326);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4933861);
   hNCpi0inFVres_stack_7->SetBinError(8,0.727164);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5906431);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3382732);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4772626);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4800852);
   hNCpi0inFVres_stack_7->SetBinError(13,0.509252);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3898613);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5974737);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3708115);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5128909);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4253072);
   hNCpi0inFVres_stack_7->SetBinError(19,0.682437);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5316124);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7666591);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9072194);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7630757);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7919507);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7496998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.4906127);
   hNCpi0inFVres_stack_7->SetBinError(27,0.04448979);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.80744);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.600318);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.435153);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.9037985);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.506376);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.087564);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8576755);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5022365);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.7108439);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.869985);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8813751);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.531265);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.106218);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6973023);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.083426);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7004238);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.574869);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6379014);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.329124);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.526349);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.395499);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.675308);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.307276);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.940878);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.058099);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.154371);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2408195);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6082559);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3837802);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3288614);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4497146);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3003003);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.319108);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1693922);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2640577);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7181855);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2645384);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7261349);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3575644);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2801365);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3360224);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1947684);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6724017);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2598265);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5074642);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5259488);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3801674);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4242606);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6078249);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5359078);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7693716);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3525746);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,3.471326);
   hCCpi0inFV_stack_10->SetBinContent(2,8.075333);
   hCCpi0inFV_stack_10->SetBinContent(3,4.407804);
   hCCpi0inFV_stack_10->SetBinContent(4,2.696858);
   hCCpi0inFV_stack_10->SetBinContent(5,3.034178);
   hCCpi0inFV_stack_10->SetBinContent(6,3.911248);
   hCCpi0inFV_stack_10->SetBinContent(7,2.350796);
   hCCpi0inFV_stack_10->SetBinContent(8,2.096761);
   hCCpi0inFV_stack_10->SetBinContent(9,3.614091);
   hCCpi0inFV_stack_10->SetBinContent(10,5.329703);
   hCCpi0inFV_stack_10->SetBinContent(11,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(12,3.741624);
   hCCpi0inFV_stack_10->SetBinContent(13,2.647509);
   hCCpi0inFV_stack_10->SetBinContent(14,6.12528);
   hCCpi0inFV_stack_10->SetBinContent(15,4.214521);
   hCCpi0inFV_stack_10->SetBinContent(16,5.478209);
   hCCpi0inFV_stack_10->SetBinContent(17,4.736971);
   hCCpi0inFV_stack_10->SetBinContent(18,7.238106);
   hCCpi0inFV_stack_10->SetBinContent(19,4.888752);
   hCCpi0inFV_stack_10->SetBinContent(20,5.158802);
   hCCpi0inFV_stack_10->SetBinContent(21,6.479487);
   hCCpi0inFV_stack_10->SetBinContent(22,6.838164);
   hCCpi0inFV_stack_10->SetBinContent(23,8.409026);
   hCCpi0inFV_stack_10->SetBinContent(24,10.1409);
   hCCpi0inFV_stack_10->SetBinContent(25,8.593351);
   hCCpi0inFV_stack_10->SetBinContent(26,5.10794);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,0.9627442);
   hCCpi0inFV_stack_10->SetBinError(2,1.417034);
   hCCpi0inFV_stack_10->SetBinError(3,0.9811778);
   hCCpi0inFV_stack_10->SetBinError(4,0.8001634);
   hCCpi0inFV_stack_10->SetBinError(5,0.8325598);
   hCCpi0inFV_stack_10->SetBinError(6,0.9814756);
   hCCpi0inFV_stack_10->SetBinError(7,0.7227205);
   hCCpi0inFV_stack_10->SetBinError(8,0.7209763);
   hCCpi0inFV_stack_10->SetBinError(9,0.9646921);
   hCCpi0inFV_stack_10->SetBinError(10,1.11922);
   hCCpi0inFV_stack_10->SetBinError(11,0.89917);
   hCCpi0inFV_stack_10->SetBinError(12,1.048684);
   hCCpi0inFV_stack_10->SetBinError(13,0.7863911);
   hCCpi0inFV_stack_10->SetBinError(14,1.274933);
   hCCpi0inFV_stack_10->SetBinError(15,1.099361);
   hCCpi0inFV_stack_10->SetBinError(16,1.127041);
   hCCpi0inFV_stack_10->SetBinError(17,1.09354);
   hCCpi0inFV_stack_10->SetBinError(18,1.391057);
   hCCpi0inFV_stack_10->SetBinError(19,1.139219);
   hCCpi0inFV_stack_10->SetBinError(20,1.144105);
   hCCpi0inFV_stack_10->SetBinError(21,1.316171);
   hCCpi0inFV_stack_10->SetBinError(22,1.28671);
   hCCpi0inFV_stack_10->SetBinError(23,1.471699);
   hCCpi0inFV_stack_10->SetBinError(24,1.555628);
   hCCpi0inFV_stack_10->SetBinError(25,1.507339);
   hCCpi0inFV_stack_10->SetBinError(26,1.183767);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,0.7190647);
   hNCinFV_stack_11->SetBinContent(2,1.825145);
   hNCinFV_stack_11->SetBinContent(3,2.921564);
   hNCinFV_stack_11->SetBinContent(4,1.033439);
   hNCinFV_stack_11->SetBinContent(5,0.7600428);
   hNCinFV_stack_11->SetBinContent(6,0.996008);
   hNCinFV_stack_11->SetBinContent(7,0.7870936);
   hNCinFV_stack_11->SetBinContent(8,0.8424499);
   hNCinFV_stack_11->SetBinContent(9,1.916255);
   hNCinFV_stack_11->SetBinContent(10,0.5459851);
   hNCinFV_stack_11->SetBinContent(11,0.8515294);
   hNCinFV_stack_11->SetBinContent(12,1.105482);
   hNCinFV_stack_11->SetBinContent(13,1.744354);
   hNCinFV_stack_11->SetBinContent(14,0.8115052);
   hNCinFV_stack_11->SetBinContent(15,0.5954295);
   hNCinFV_stack_11->SetBinContent(16,1.085854);
   hNCinFV_stack_11->SetBinContent(17,0.9785053);
   hNCinFV_stack_11->SetBinContent(18,2.163786);
   hNCinFV_stack_11->SetBinContent(19,0.1274195);
   hNCinFV_stack_11->SetBinContent(20,1.43675);
   hNCinFV_stack_11->SetBinContent(21,2.518446);
   hNCinFV_stack_11->SetBinContent(22,1.430489);
   hNCinFV_stack_11->SetBinContent(23,3.649725);
   hNCinFV_stack_11->SetBinContent(24,1.301039);
   hNCinFV_stack_11->SetBinContent(25,2.703939);
   hNCinFV_stack_11->SetBinContent(26,0.9313611);
   hNCinFV_stack_11->SetBinError(1,0.3639881);
   hNCinFV_stack_11->SetBinError(2,0.6181219);
   hNCinFV_stack_11->SetBinError(3,1.012011);
   hNCinFV_stack_11->SetBinError(4,0.5063479);
   hNCinFV_stack_11->SetBinError(5,0.3521571);
   hNCinFV_stack_11->SetBinError(6,0.6103787);
   hNCinFV_stack_11->SetBinError(7,0.6133798);
   hNCinFV_stack_11->SetBinError(8,0.4911603);
   hNCinFV_stack_11->SetBinError(9,0.8648444);
   hNCinFV_stack_11->SetBinError(10,0.3950099);
   hNCinFV_stack_11->SetBinError(11,0.3876245);
   hNCinFV_stack_11->SetBinError(12,0.5156163);
   hNCinFV_stack_11->SetBinError(13,0.7308707);
   hNCinFV_stack_11->SetBinError(14,0.5029257);
   hNCinFV_stack_11->SetBinError(15,0.4252933);
   hNCinFV_stack_11->SetBinError(16,0.5093689);
   hNCinFV_stack_11->SetBinError(17,0.4376048);
   hNCinFV_stack_11->SetBinError(18,0.7982061);
   hNCinFV_stack_11->SetBinError(19,0.1274195);
   hNCinFV_stack_11->SetBinError(20,0.6571541);
   hNCinFV_stack_11->SetBinError(21,1.12943);
   hNCinFV_stack_11->SetBinError(22,0.5514242);
   hNCinFV_stack_11->SetBinError(23,1.09167);
   hNCinFV_stack_11->SetBinError(24,0.5522742);
   hNCinFV_stack_11->SetBinError(25,0.8322293);
   hNCinFV_stack_11->SetBinError(26,0.3907248);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,2.985799);
   hnumuCCinFV_stack_12->SetBinContent(2,3.677411);
   hnumuCCinFV_stack_12->SetBinContent(3,1.885798);
   hnumuCCinFV_stack_12->SetBinContent(4,2.950141);
   hnumuCCinFV_stack_12->SetBinContent(5,2.465129);
   hnumuCCinFV_stack_12->SetBinContent(6,1.260115);
   hnumuCCinFV_stack_12->SetBinContent(7,3.374407);
   hnumuCCinFV_stack_12->SetBinContent(8,2.781918);
   hnumuCCinFV_stack_12->SetBinContent(9,2.246698);
   hnumuCCinFV_stack_12->SetBinContent(10,2.82549);
   hnumuCCinFV_stack_12->SetBinContent(11,3.790117);
   hnumuCCinFV_stack_12->SetBinContent(12,3.126605);
   hnumuCCinFV_stack_12->SetBinContent(13,4.191353);
   hnumuCCinFV_stack_12->SetBinContent(14,3.929796);
   hnumuCCinFV_stack_12->SetBinContent(15,5.048099);
   hnumuCCinFV_stack_12->SetBinContent(16,5.241669);
   hnumuCCinFV_stack_12->SetBinContent(17,5.641346);
   hnumuCCinFV_stack_12->SetBinContent(18,2.978666);
   hnumuCCinFV_stack_12->SetBinContent(19,8.010812);
   hnumuCCinFV_stack_12->SetBinContent(20,6.969057);
   hnumuCCinFV_stack_12->SetBinContent(21,6.491631);
   hnumuCCinFV_stack_12->SetBinContent(22,7.39859);
   hnumuCCinFV_stack_12->SetBinContent(23,8.69407);
   hnumuCCinFV_stack_12->SetBinContent(24,8.789732);
   hnumuCCinFV_stack_12->SetBinContent(25,6.857014);
   hnumuCCinFV_stack_12->SetBinContent(26,2.440362);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,0.9363855);
   hnumuCCinFV_stack_12->SetBinError(2,0.9451286);
   hnumuCCinFV_stack_12->SetBinError(3,0.7441957);
   hnumuCCinFV_stack_12->SetBinError(4,0.8597182);
   hnumuCCinFV_stack_12->SetBinError(5,0.7959484);
   hnumuCCinFV_stack_12->SetBinError(6,0.5738101);
   hnumuCCinFV_stack_12->SetBinError(7,1.276437);
   hnumuCCinFV_stack_12->SetBinError(8,0.9234159);
   hnumuCCinFV_stack_12->SetBinError(9,0.7643385);
   hnumuCCinFV_stack_12->SetBinError(10,0.895293);
   hnumuCCinFV_stack_12->SetBinError(11,1.169889);
   hnumuCCinFV_stack_12->SetBinError(12,1.133957);
   hnumuCCinFV_stack_12->SetBinError(13,1.071467);
   hnumuCCinFV_stack_12->SetBinError(14,1.068666);
   hnumuCCinFV_stack_12->SetBinError(15,1.26736);
   hnumuCCinFV_stack_12->SetBinError(16,1.757719);
   hnumuCCinFV_stack_12->SetBinError(17,1.184354);
   hnumuCCinFV_stack_12->SetBinError(18,0.9298155);
   hnumuCCinFV_stack_12->SetBinError(19,1.476272);
   hnumuCCinFV_stack_12->SetBinError(20,1.508372);
   hnumuCCinFV_stack_12->SetBinError(21,1.460455);
   hnumuCCinFV_stack_12->SetBinError(22,1.651305);
   hnumuCCinFV_stack_12->SetBinError(23,1.622723);
   hnumuCCinFV_stack_12->SetBinError(24,2.041929);
   hnumuCCinFV_stack_12->SetBinError(25,1.432213);
   hnumuCCinFV_stack_12->SetBinError(26,0.8090918);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(6,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(10,1.157431);
   hnueCCinFV_stack_13->SetBinContent(11,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(22,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(23,1.961426);
   hnueCCinFV_stack_13->SetBinContent(25,0.756103);
   hnueCCinFV_stack_13->SetBinError(3,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.3172361);
   hnueCCinFV_stack_13->SetBinError(6,0.2171002);
   hnueCCinFV_stack_13->SetBinError(10,1.157431);
   hnueCCinFV_stack_13->SetBinError(11,0.2331833);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.1711909);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.4494399);
   hnueCCinFV_stack_13->SetBinError(22,0.1529246);
   hnueCCinFV_stack_13->SetBinError(23,1.59394);
   hnueCCinFV_stack_13->SetBinError(25,0.4499676);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__26->SetBinContent(0,0.717828);
   hmcerror__26->SetBinContent(1,33.40416);
   hmcerror__26->SetBinContent(2,26.94049);
   hmcerror__26->SetBinContent(3,21.91942);
   hmcerror__26->SetBinContent(4,18.46679);
   hmcerror__26->SetBinContent(5,16.59816);
   hmcerror__26->SetBinContent(6,16.25913);
   hmcerror__26->SetBinContent(7,14.29823);
   hmcerror__26->SetBinContent(8,15.15374);
   hmcerror__26->SetBinContent(9,16.76907);
   hmcerror__26->SetBinContent(10,20.59791);
   hmcerror__26->SetBinContent(11,15.29049);
   hmcerror__26->SetBinContent(12,21.33287);
   hmcerror__26->SetBinContent(13,19.64821);
   hmcerror__26->SetBinContent(14,24.66676);
   hmcerror__26->SetBinContent(15,18.5057);
   hmcerror__26->SetBinContent(16,22.74947);
   hmcerror__26->SetBinContent(17,25.05625);
   hmcerror__26->SetBinContent(18,27.41552);
   hmcerror__26->SetBinContent(19,24.71746);
   hmcerror__26->SetBinContent(20,25.69658);
   hmcerror__26->SetBinContent(21,31.39887);
   hmcerror__26->SetBinContent(22,35.64566);
   hmcerror__26->SetBinContent(23,47.59142);
   hmcerror__26->SetBinContent(24,41.46746);
   hmcerror__26->SetBinContent(25,41.06391);
   hmcerror__26->SetBinContent(26,36.03716);
   hmcerror__26->SetBinContent(27,1.180453);
   hmcerror__26->SetBinError(0,0.4273494);
   hmcerror__26->SetBinError(1,15.58819);
   hmcerror__26->SetBinError(2,15.35991);
   hmcerror__26->SetBinError(3,10.75785);
   hmcerror__26->SetBinError(4,11.45496);
   hmcerror__26->SetBinError(5,11.88028);
   hmcerror__26->SetBinError(6,7.822173);
   hmcerror__26->SetBinError(7,9.191838);
   hmcerror__26->SetBinError(8,11.2667);
   hmcerror__26->SetBinError(9,8.181412);
   hmcerror__26->SetBinError(10,12.33826);
   hmcerror__26->SetBinError(11,11.98853);
   hmcerror__26->SetBinError(12,14.18759);
   hmcerror__26->SetBinError(13,11.19507);
   hmcerror__26->SetBinError(14,9.517489);
   hmcerror__26->SetBinError(15,11.47379);
   hmcerror__26->SetBinError(16,10.89651);
   hmcerror__26->SetBinError(17,18.66583);
   hmcerror__26->SetBinError(18,17.86716);
   hmcerror__26->SetBinError(19,11.13702);
   hmcerror__26->SetBinError(20,12.99507);
   hmcerror__26->SetBinError(21,18.92278);
   hmcerror__26->SetBinError(22,15.70202);
   hmcerror__26->SetBinError(23,19.70905);
   hmcerror__26->SetBinError(24,16.3577);
   hmcerror__26->SetBinError(25,25.1739);
   hmcerror__26->SetBinError(26,15.27148);
   hmcerror__26->SetBinError(27,4.427382);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[26] = {
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
   Double_t _fy3033[26] = {
   28,
   18,
   27,
   20,
   16,
   16,
   18,
   12,
   19,
   16,
   19,
   12,
   19,
   12,
   16,
   17,
   26,
   21,
   22,
   26,
   35,
   34,
   31,
   34,
   38,
   29};
   Double_t _felx3033[26] = {
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
   Double_t _fely3033[26] = {
   5.4358,
   4.4008,
   5.3414,
   4.6266,
   4.1628,
   4.1628,
   4.4008,
   3.64022,
   4.5151,
   4.1628,
   4.5151,
   3.64022,
   4.5151,
   3.64022,
   4.1628,
   4.2835,
   5.2453,
   4.7354,
   4.8417,
   5.2453,
   6.0548,
   5.9703,
   5.7094,
   5.9703,
   6.3013,
   5.5285};
   Double_t _fehx3033[26] = {
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
   Double_t _fehy3033[26] = {
   5.2271,
   4.1858,
   5.1322,
   4.4133,
   3.9454,
   3.9454,
   4.1858,
   3.4155,
   4.3011,
   3.9454,
   4.3011,
   3.4155,
   4.3011,
   3.4155,
   3.9454,
   4.0673,
   5.0358,
   4.5229,
   4.6299,
   5.0358,
   5.8483,
   5.7635,
   5.5017,
   5.7635,
   6.0955,
   5.3201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,286);
   Graph_Graph3033->SetMinimum(4.786208);
   Graph_Graph3033->SetMaximum(47.66907);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 581.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.1","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 115.2","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 131.9","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.1","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[26] = {
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
   Double_t _fy3034[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[26] = {
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
   Double_t _fely3034[26] = {
   0.4666542,
   0.5701421,
   0.4907909,
   0.6203004,
   0.7157588,
   0.481094,
   0.6428654,
   0.7434933,
   0.4878869,
   0.5990054,
   0.7840512,
   0.6650578,
   0.5697758,
   0.3858426,
   0.6200139,
   0.4789787,
   0.744957,
   0.651717,
   0.4505731,
   0.5057121,
   0.6026579,
   0.4405031,
   0.4141303,
   0.3944708,
   0.6130421,
   0.4237704};
   Double_t _fehx3034[26] = {
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
   Double_t _fehy3034[26] = {
   0.4666542,
   0.5701421,
   0.4907909,
   0.6203004,
   0.7157588,
   0.481094,
   0.6428654,
   0.7434933,
   0.4878869,
   0.5990054,
   0.7840512,
   0.6650578,
   0.5697758,
   0.3858426,
   0.6200139,
   0.4789787,
   0.744957,
   0.651717,
   0.4505731,
   0.5057121,
   0.6026579,
   0.4405031,
   0.4141303,
   0.3944708,
   0.6130421,
   0.4237704};
   grae = new TGraphAsymmErrors(26,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,286);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[26] = {
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
   Double_t _fy3035[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[26] = {
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
   Double_t _fely3035[26] = {
   0.2709511,
   0.3467152,
   0.3780376,
   0.2890487,
   0.3269214,
   0.3174578,
   0.3565715,
   0.3949294,
   0.2771741,
   0.3406492,
   0.3032206,
   0.2412682,
   0.293133,
   0.2383781,
   0.2832032,
   0.2425946,
   0.2357572,
   0.2198196,
   0.2458523,
   0.2817626,
   0.2298379,
   0.2452791,
   0.2312068,
   0.2638539,
   0.2630342,
   0.2193824};
   Double_t _fehx3035[26] = {
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
   Double_t _fehy3035[26] = {
   0.2709511,
   0.3467152,
   0.3780376,
   0.2890487,
   0.3269214,
   0.3174578,
   0.3565715,
   0.3949294,
   0.2771741,
   0.3406492,
   0.3032206,
   0.2412682,
   0.293133,
   0.2383781,
   0.2832032,
   0.2425946,
   0.2357572,
   0.2198196,
   0.2458523,
   0.2817626,
   0.2298379,
   0.2452791,
   0.2312068,
   0.2638539,
   0.2630342,
   0.2193824};
   grae = new TGraphAsymmErrors(26,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,286);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[26] = {
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
   Double_t _fy3036[26] = {
   0.838219,
   0.6681394,
   1.231785,
   1.083025,
   0.9639621,
   0.9840622,
   1.258897,
   0.7918837,
   1.133038,
   0.7767779,
   1.242602,
   0.5625122,
   0.9670094,
   0.4864846,
   0.8645983,
   0.7472703,
   1.037665,
   0.7659894,
   0.8900592,
   1.011808,
   1.11469,
   0.9538327,
   0.651378,
   0.8199201,
   0.9253868,
   0.8047249};
   Double_t _felx3036[26] = {
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
   Double_t _fely3036[26] = {
   0.1627282,
   0.1633527,
   0.2436835,
   0.2505362,
   0.2507988,
   0.2560284,
   0.3077863,
   0.2402192,
   0.2692516,
   0.2020982,
   0.2952881,
   0.170639,
   0.2297971,
   0.1475759,
   0.2249469,
   0.1882901,
   0.209341,
   0.172727,
   0.1958818,
   0.2041245,
   0.1928349,
   0.1674902,
   0.119967,
   0.1439756,
   0.1534511,
   0.1534111};
   Double_t _fehx3036[26] = {
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
   Double_t _fehy3036[26] = {
   0.1564805,
   0.1553721,
   0.2341394,
   0.2389857,
   0.237701,
   0.2426574,
   0.2927495,
   0.2253899,
   0.25649,
   0.1915437,
   0.2812925,
   0.160105,
   0.2189055,
   0.1384657,
   0.2131991,
   0.1787866,
   0.2009798,
   0.1649759,
   0.187313,
   0.1959716,
   0.1862583,
   0.1616887,
   0.1156028,
   0.1389885,
   0.1484394,
   0.1476282};
   grae = new TGraphAsymmErrors(26,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,286);
   Graph_Graph3036->SetMinimum(0.2176349);
   Graph_Graph3036->SetMaximum(1.67292);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
