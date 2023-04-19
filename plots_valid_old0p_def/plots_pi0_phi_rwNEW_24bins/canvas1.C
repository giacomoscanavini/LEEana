#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Feb 17 21:59:20 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-4.119231,-6.924456,3.957692,765.6991);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,341.7696);
   hmc__1->SetBinContent(2,346.2228);
   hmc__1->SetBinContent(3,342.6265);
   hmc__1->SetBinContent(4,300.1168);
   hmc__1->SetBinContent(5,300.8663);
   hmc__1->SetBinContent(6,291.4278);
   hmc__1->SetBinContent(7,290.7921);
   hmc__1->SetBinContent(8,274.6167);
   hmc__1->SetBinContent(9,302.3009);
   hmc__1->SetBinContent(10,289.2793);
   hmc__1->SetBinContent(11,316.9771);
   hmc__1->SetBinContent(12,302.9876);
   hmc__1->SetBinContent(13,313.0408);
   hmc__1->SetBinContent(14,324.7327);
   hmc__1->SetBinContent(15,322.885);
   hmc__1->SetBinContent(16,311.636);
   hmc__1->SetBinContent(17,302.2412);
   hmc__1->SetBinContent(18,302.2703);
   hmc__1->SetBinContent(19,291.3799);
   hmc__1->SetBinContent(20,303.799);
   hmc__1->SetBinContent(21,315.2771);
   hmc__1->SetBinContent(22,335.8971);
   hmc__1->SetBinContent(23,328.485);
   hmc__1->SetBinContent(24,322.1832);
   hmc__1->SetBinError(1,87.98063);
   hmc__1->SetBinError(2,86.7948);
   hmc__1->SetBinError(3,94.3738);
   hmc__1->SetBinError(4,83.12379);
   hmc__1->SetBinError(5,74.881);
   hmc__1->SetBinError(6,68.02563);
   hmc__1->SetBinError(7,72.1059);
   hmc__1->SetBinError(8,74.49448);
   hmc__1->SetBinError(9,81.61882);
   hmc__1->SetBinError(10,74.77758);
   hmc__1->SetBinError(11,93.73637);
   hmc__1->SetBinError(12,80.07097);
   hmc__1->SetBinError(13,83.29087);
   hmc__1->SetBinError(14,82.28228);
   hmc__1->SetBinError(15,79.54796);
   hmc__1->SetBinError(16,81.64842);
   hmc__1->SetBinError(17,73.03043);
   hmc__1->SetBinError(18,76.37331);
   hmc__1->SetBinError(19,70.67777);
   hmc__1->SetBinError(20,72.43828);
   hmc__1->SetBinError(21,77.0014);
   hmc__1->SetBinError(22,87.15065);
   hmc__1->SetBinError(23,85.75224);
   hmc__1->SetBinError(24,88.46146);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-6.924456);
   hmc__1->SetMaximum(727.0679);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(363.5339);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,7.804597);
   hbadmatch_stack_1->SetBinContent(2,9.144373);
   hbadmatch_stack_1->SetBinContent(3,7.642608);
   hbadmatch_stack_1->SetBinContent(4,7.403653);
   hbadmatch_stack_1->SetBinContent(5,9.684412);
   hbadmatch_stack_1->SetBinContent(6,10.49041);
   hbadmatch_stack_1->SetBinContent(7,6.903015);
   hbadmatch_stack_1->SetBinContent(8,4.956798);
   hbadmatch_stack_1->SetBinContent(9,9.031686);
   hbadmatch_stack_1->SetBinContent(10,6.116279);
   hbadmatch_stack_1->SetBinContent(11,7.819973);
   hbadmatch_stack_1->SetBinContent(12,5.725856);
   hbadmatch_stack_1->SetBinContent(13,6.073982);
   hbadmatch_stack_1->SetBinContent(14,9.807966);
   hbadmatch_stack_1->SetBinContent(15,6.327501);
   hbadmatch_stack_1->SetBinContent(16,10.58547);
   hbadmatch_stack_1->SetBinContent(17,8.138265);
   hbadmatch_stack_1->SetBinContent(18,6.726164);
   hbadmatch_stack_1->SetBinContent(19,6.029451);
   hbadmatch_stack_1->SetBinContent(20,7.099463);
   hbadmatch_stack_1->SetBinContent(21,5.916809);
   hbadmatch_stack_1->SetBinContent(22,10.86208);
   hbadmatch_stack_1->SetBinContent(23,4.088641);
   hbadmatch_stack_1->SetBinContent(24,6.153982);
   hbadmatch_stack_1->SetBinError(1,1.408493);
   hbadmatch_stack_1->SetBinError(2,1.624925);
   hbadmatch_stack_1->SetBinError(3,1.59744);
   hbadmatch_stack_1->SetBinError(4,1.431446);
   hbadmatch_stack_1->SetBinError(5,1.665088);
   hbadmatch_stack_1->SetBinError(6,1.756814);
   hbadmatch_stack_1->SetBinError(7,1.430807);
   hbadmatch_stack_1->SetBinError(8,1.157175);
   hbadmatch_stack_1->SetBinError(9,1.821629);
   hbadmatch_stack_1->SetBinError(10,1.271774);
   hbadmatch_stack_1->SetBinError(11,1.478304);
   hbadmatch_stack_1->SetBinError(12,1.487468);
   hbadmatch_stack_1->SetBinError(13,1.360536);
   hbadmatch_stack_1->SetBinError(14,2.629381);
   hbadmatch_stack_1->SetBinError(15,1.25464);
   hbadmatch_stack_1->SetBinError(16,2.483848);
   hbadmatch_stack_1->SetBinError(17,1.503128);
   hbadmatch_stack_1->SetBinError(18,1.384766);
   hbadmatch_stack_1->SetBinError(19,1.410085);
   hbadmatch_stack_1->SetBinError(20,1.362279);
   hbadmatch_stack_1->SetBinError(21,1.361444);
   hbadmatch_stack_1->SetBinError(22,1.776129);
   hbadmatch_stack_1->SetBinError(23,0.9577931);
   hbadmatch_stack_1->SetBinError(24,1.298466);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,31.38252);
   hext_stack_2->SetBinContent(2,25.37732);
   hext_stack_2->SetBinContent(3,29.79801);
   hext_stack_2->SetBinContent(4,25.11919);
   hext_stack_2->SetBinContent(5,41.43928);
   hext_stack_2->SetBinContent(6,44.7914);
   hext_stack_2->SetBinContent(7,38.73437);
   hext_stack_2->SetBinContent(8,25.42923);
   hext_stack_2->SetBinContent(9,32.46544);
   hext_stack_2->SetBinContent(10,23.65442);
   hext_stack_2->SetBinContent(11,24.18071);
   hext_stack_2->SetBinContent(12,16.19001);
   hext_stack_2->SetBinContent(13,19.9619);
   hext_stack_2->SetBinContent(14,17.35797);
   hext_stack_2->SetBinContent(15,32.73635);
   hext_stack_2->SetBinContent(16,37.17141);
   hext_stack_2->SetBinContent(17,34.53434);
   hext_stack_2->SetBinContent(18,50.86438);
   hext_stack_2->SetBinContent(19,42.61996);
   hext_stack_2->SetBinContent(20,45.39112);
   hext_stack_2->SetBinContent(21,36.28759);
   hext_stack_2->SetBinContent(22,36.96228);
   hext_stack_2->SetBinContent(23,21.2998);
   hext_stack_2->SetBinContent(24,20.58916);
   hext_stack_2->SetBinError(1,3.79114);
   hext_stack_2->SetBinError(2,3.44774);
   hext_stack_2->SetBinError(3,3.826542);
   hext_stack_2->SetBinError(4,3.231457);
   hext_stack_2->SetBinError(5,4.499402);
   hext_stack_2->SetBinError(6,4.5704);
   hext_stack_2->SetBinError(7,4.243734);
   hext_stack_2->SetBinError(8,3.309071);
   hext_stack_2->SetBinError(9,4.010226);
   hext_stack_2->SetBinError(10,3.199613);
   hext_stack_2->SetBinError(11,3.355412);
   hext_stack_2->SetBinError(12,2.621881);
   hext_stack_2->SetBinError(13,3.069088);
   hext_stack_2->SetBinError(14,2.641359);
   hext_stack_2->SetBinError(15,3.914364);
   hext_stack_2->SetBinError(16,4.204207);
   hext_stack_2->SetBinError(17,3.987796);
   hext_stack_2->SetBinError(18,5.016701);
   hext_stack_2->SetBinError(19,4.412854);
   hext_stack_2->SetBinError(20,4.513231);
   hext_stack_2->SetBinError(21,4.149523);
   hext_stack_2->SetBinError(22,4.276791);
   hext_stack_2->SetBinError(23,2.994888);
   hext_stack_2->SetBinError(24,3.198965);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.137562);
   hdirt_stack_3->SetBinContent(2,3.682876);
   hdirt_stack_3->SetBinContent(3,3.883694);
   hdirt_stack_3->SetBinContent(4,1.63337);
   hdirt_stack_3->SetBinContent(5,3.025375);
   hdirt_stack_3->SetBinContent(6,4.453859);
   hdirt_stack_3->SetBinContent(7,2.666754);
   hdirt_stack_3->SetBinContent(8,2.667006);
   hdirt_stack_3->SetBinContent(9,3.187774);
   hdirt_stack_3->SetBinContent(10,2.24983);
   hdirt_stack_3->SetBinContent(11,2.61554);
   hdirt_stack_3->SetBinContent(12,2.236579);
   hdirt_stack_3->SetBinContent(13,2.214468);
   hdirt_stack_3->SetBinContent(14,2.141863);
   hdirt_stack_3->SetBinContent(15,3.31302);
   hdirt_stack_3->SetBinContent(16,3.42952);
   hdirt_stack_3->SetBinContent(17,4.58476);
   hdirt_stack_3->SetBinContent(18,3.417145);
   hdirt_stack_3->SetBinContent(19,5.002948);
   hdirt_stack_3->SetBinContent(20,4.023605);
   hdirt_stack_3->SetBinContent(21,2.771569);
   hdirt_stack_3->SetBinContent(22,3.857423);
   hdirt_stack_3->SetBinContent(23,3.15489);
   hdirt_stack_3->SetBinContent(24,1.679611);
   hdirt_stack_3->SetBinError(1,0.5016758);
   hdirt_stack_3->SetBinError(2,0.9988077);
   hdirt_stack_3->SetBinError(3,1.081938);
   hdirt_stack_3->SetBinError(4,0.6494445);
   hdirt_stack_3->SetBinError(5,0.9031815);
   hdirt_stack_3->SetBinError(6,1.073125);
   hdirt_stack_3->SetBinError(7,0.8360407);
   hdirt_stack_3->SetBinError(8,0.791079);
   hdirt_stack_3->SetBinError(9,0.998672);
   hdirt_stack_3->SetBinError(10,1.215634);
   hdirt_stack_3->SetBinError(11,1.104042);
   hdirt_stack_3->SetBinError(12,0.7603093);
   hdirt_stack_3->SetBinError(13,0.6986698);
   hdirt_stack_3->SetBinError(14,0.8364271);
   hdirt_stack_3->SetBinError(15,0.9499872);
   hdirt_stack_3->SetBinError(16,0.9756944);
   hdirt_stack_3->SetBinError(17,1.185731);
   hdirt_stack_3->SetBinError(18,0.9935527);
   hdirt_stack_3->SetBinError(19,1.377905);
   hdirt_stack_3->SetBinError(20,1.051122);
   hdirt_stack_3->SetBinError(21,0.8155953);
   hdirt_stack_3->SetBinError(22,1.034555);
   hdirt_stack_3->SetBinError(23,0.9837457);
   hdirt_stack_3->SetBinError(24,0.6202613);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,34.15549);
   houtFV_stack_4->SetBinContent(2,31.86183);
   houtFV_stack_4->SetBinContent(3,33.41992);
   houtFV_stack_4->SetBinContent(4,34.74912);
   houtFV_stack_4->SetBinContent(5,27.50029);
   houtFV_stack_4->SetBinContent(6,28.8614);
   houtFV_stack_4->SetBinContent(7,29.77189);
   houtFV_stack_4->SetBinContent(8,28.74824);
   houtFV_stack_4->SetBinContent(9,31.04532);
   houtFV_stack_4->SetBinContent(10,29.52346);
   houtFV_stack_4->SetBinContent(11,30.31675);
   houtFV_stack_4->SetBinContent(12,30.80225);
   houtFV_stack_4->SetBinContent(13,29.01153);
   houtFV_stack_4->SetBinContent(14,29.62967);
   houtFV_stack_4->SetBinContent(15,28.4437);
   houtFV_stack_4->SetBinContent(16,27.01485);
   houtFV_stack_4->SetBinContent(17,31.32253);
   houtFV_stack_4->SetBinContent(18,25.93507);
   houtFV_stack_4->SetBinContent(19,28.09812);
   houtFV_stack_4->SetBinContent(20,28.19415);
   houtFV_stack_4->SetBinContent(21,31.84573);
   houtFV_stack_4->SetBinContent(22,29.24578);
   houtFV_stack_4->SetBinContent(23,34.61668);
   houtFV_stack_4->SetBinContent(24,28.11803);
   houtFV_stack_4->SetBinError(1,3.000121);
   houtFV_stack_4->SetBinError(2,2.735744);
   houtFV_stack_4->SetBinError(3,2.942903);
   houtFV_stack_4->SetBinError(4,2.973605);
   houtFV_stack_4->SetBinError(5,2.594878);
   houtFV_stack_4->SetBinError(6,2.714054);
   houtFV_stack_4->SetBinError(7,2.750373);
   houtFV_stack_4->SetBinError(8,2.673944);
   houtFV_stack_4->SetBinError(9,2.940577);
   houtFV_stack_4->SetBinError(10,2.733515);
   houtFV_stack_4->SetBinError(11,2.788498);
   houtFV_stack_4->SetBinError(12,2.736804);
   houtFV_stack_4->SetBinError(13,2.605312);
   houtFV_stack_4->SetBinError(14,2.783885);
   houtFV_stack_4->SetBinError(15,2.601197);
   houtFV_stack_4->SetBinError(16,2.654737);
   houtFV_stack_4->SetBinError(17,2.781427);
   houtFV_stack_4->SetBinError(18,2.583958);
   houtFV_stack_4->SetBinError(19,2.927043);
   houtFV_stack_4->SetBinError(20,2.677374);
   houtFV_stack_4->SetBinError(21,2.843723);
   houtFV_stack_4->SetBinError(22,2.727104);
   houtFV_stack_4->SetBinError(23,2.970287);
   houtFV_stack_4->SetBinError(24,2.662931);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.459784);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.463103);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.213252);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.144914);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.361298);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.936164);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.142674);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.457288);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.515832);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.127224);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.853296);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.420178);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.168237);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.710052);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.397926);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.722006);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.698009);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.865082);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.909928);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.271964);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.984891);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.112437);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.770092);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.778638);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6467909);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7413277);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6871058);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7476017);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5692834);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7609749);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7233024);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6004497);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7043546);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6668879);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7720193);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7246909);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5952955);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6372424);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8250252);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.612112);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6694603);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.729286);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7853896);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8002805);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5634989);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5939864);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.739883);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6288912);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.31014);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.50644);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.213654);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.05904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.590308);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9481038);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.617544);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.157358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8914717);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.39484);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.781536);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.12929);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.004072);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3103701);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.392178);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3257683);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2988711);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4346236);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2696619);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4507425);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3883553);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2278037);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.388188);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2954882);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3424653);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3271594);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,124.2872);
   hNCpi0inFVres_stack_7->SetBinContent(2,122.2865);
   hNCpi0inFVres_stack_7->SetBinContent(3,127.6588);
   hNCpi0inFVres_stack_7->SetBinContent(4,114.8485);
   hNCpi0inFVres_stack_7->SetBinContent(5,110.8043);
   hNCpi0inFVres_stack_7->SetBinContent(6,101.5622);
   hNCpi0inFVres_stack_7->SetBinContent(7,110.5961);
   hNCpi0inFVres_stack_7->SetBinContent(8,102.6597);
   hNCpi0inFVres_stack_7->SetBinContent(9,111.2971);
   hNCpi0inFVres_stack_7->SetBinContent(10,115.3263);
   hNCpi0inFVres_stack_7->SetBinContent(11,116.3604);
   hNCpi0inFVres_stack_7->SetBinContent(12,111.2265);
   hNCpi0inFVres_stack_7->SetBinContent(13,108.8645);
   hNCpi0inFVres_stack_7->SetBinContent(14,117.977);
   hNCpi0inFVres_stack_7->SetBinContent(15,120.317);
   hNCpi0inFVres_stack_7->SetBinContent(16,117.7234);
   hNCpi0inFVres_stack_7->SetBinContent(17,108.1722);
   hNCpi0inFVres_stack_7->SetBinContent(18,107.1011);
   hNCpi0inFVres_stack_7->SetBinContent(19,106.4814);
   hNCpi0inFVres_stack_7->SetBinContent(20,108.5155);
   hNCpi0inFVres_stack_7->SetBinContent(21,122.8322);
   hNCpi0inFVres_stack_7->SetBinContent(22,125.2299);
   hNCpi0inFVres_stack_7->SetBinContent(23,123.9451);
   hNCpi0inFVres_stack_7->SetBinContent(24,119.3042);
   hNCpi0inFVres_stack_7->SetBinError(1,3.6609);
   hNCpi0inFVres_stack_7->SetBinError(2,3.624832);
   hNCpi0inFVres_stack_7->SetBinError(3,3.714952);
   hNCpi0inFVres_stack_7->SetBinError(4,3.461149);
   hNCpi0inFVres_stack_7->SetBinError(5,3.41982);
   hNCpi0inFVres_stack_7->SetBinError(6,3.200055);
   hNCpi0inFVres_stack_7->SetBinError(7,3.540658);
   hNCpi0inFVres_stack_7->SetBinError(8,3.27718);
   hNCpi0inFVres_stack_7->SetBinError(9,3.411532);
   hNCpi0inFVres_stack_7->SetBinError(10,3.509142);
   hNCpi0inFVres_stack_7->SetBinError(11,3.59174);
   hNCpi0inFVres_stack_7->SetBinError(12,3.45201);
   hNCpi0inFVres_stack_7->SetBinError(13,3.305541);
   hNCpi0inFVres_stack_7->SetBinError(14,3.544759);
   hNCpi0inFVres_stack_7->SetBinError(15,3.597491);
   hNCpi0inFVres_stack_7->SetBinError(16,3.607171);
   hNCpi0inFVres_stack_7->SetBinError(17,3.346644);
   hNCpi0inFVres_stack_7->SetBinError(18,3.376151);
   hNCpi0inFVres_stack_7->SetBinError(19,3.38652);
   hNCpi0inFVres_stack_7->SetBinError(20,3.428952);
   hNCpi0inFVres_stack_7->SetBinError(21,3.642167);
   hNCpi0inFVres_stack_7->SetBinError(22,3.730513);
   hNCpi0inFVres_stack_7->SetBinError(23,3.660156);
   hNCpi0inFVres_stack_7->SetBinError(24,3.574718);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,23.18714);
   hNCpi0inFVdis_stack_8->SetBinContent(2,25.36502);
   hNCpi0inFVdis_stack_8->SetBinContent(3,25.57228);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.98039);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.81705);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.88548);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.60872);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.96137);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.2084);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.58358);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.48882);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.50301);
   hNCpi0inFVdis_stack_8->SetBinContent(13,24.39765);
   hNCpi0inFVdis_stack_8->SetBinContent(14,24.27742);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.78649);
   hNCpi0inFVdis_stack_8->SetBinContent(16,22.3048);
   hNCpi0inFVdis_stack_8->SetBinContent(17,23.40686);
   hNCpi0inFVdis_stack_8->SetBinContent(18,19.1951);
   hNCpi0inFVdis_stack_8->SetBinContent(19,19.38973);
   hNCpi0inFVdis_stack_8->SetBinContent(20,22.03429);
   hNCpi0inFVdis_stack_8->SetBinContent(21,23.85825);
   hNCpi0inFVdis_stack_8->SetBinContent(22,23.96885);
   hNCpi0inFVdis_stack_8->SetBinContent(23,25.27634);
   hNCpi0inFVdis_stack_8->SetBinContent(24,21.33428);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.515221);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.638353);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.674151);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.555673);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.430914);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.465848);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.475353);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.527395);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.494292);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.652487);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.549741);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.485715);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.62689);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.614803);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.467947);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.494595);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.575232);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.367657);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.374564);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.565711);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.615366);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.600155);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.646449);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.493206);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04832419);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,52.09686);
   hCCpi0inFV_stack_10->SetBinContent(2,49.8749);
   hCCpi0inFV_stack_10->SetBinContent(3,51.56423);
   hCCpi0inFV_stack_10->SetBinContent(4,51.25732);
   hCCpi0inFV_stack_10->SetBinContent(5,41.50748);
   hCCpi0inFV_stack_10->SetBinContent(6,39.38603);
   hCCpi0inFV_stack_10->SetBinContent(7,38.89728);
   hCCpi0inFV_stack_10->SetBinContent(8,40.81465);
   hCCpi0inFV_stack_10->SetBinContent(9,42.63296);
   hCCpi0inFV_stack_10->SetBinContent(10,42.0804);
   hCCpi0inFV_stack_10->SetBinContent(11,46.52705);
   hCCpi0inFV_stack_10->SetBinContent(12,43.724);
   hCCpi0inFV_stack_10->SetBinContent(13,55.38882);
   hCCpi0inFV_stack_10->SetBinContent(14,47.33606);
   hCCpi0inFV_stack_10->SetBinContent(15,43.34348);
   hCCpi0inFV_stack_10->SetBinContent(16,42.53056);
   hCCpi0inFV_stack_10->SetBinContent(17,43.58723);
   hCCpi0inFV_stack_10->SetBinContent(18,37.92862);
   hCCpi0inFV_stack_10->SetBinContent(19,39.95231);
   hCCpi0inFV_stack_10->SetBinContent(20,45.09809);
   hCCpi0inFV_stack_10->SetBinContent(21,48.07225);
   hCCpi0inFV_stack_10->SetBinContent(22,50.65337);
   hCCpi0inFV_stack_10->SetBinContent(23,51.72859);
   hCCpi0inFV_stack_10->SetBinContent(24,49.03461);
   hCCpi0inFV_stack_10->SetBinError(1,3.686726);
   hCCpi0inFV_stack_10->SetBinError(2,3.481228);
   hCCpi0inFV_stack_10->SetBinError(3,3.630041);
   hCCpi0inFV_stack_10->SetBinError(4,3.600533);
   hCCpi0inFV_stack_10->SetBinError(5,3.211198);
   hCCpi0inFV_stack_10->SetBinError(6,3.138686);
   hCCpi0inFV_stack_10->SetBinError(7,3.106248);
   hCCpi0inFV_stack_10->SetBinError(8,3.219919);
   hCCpi0inFV_stack_10->SetBinError(9,3.28344);
   hCCpi0inFV_stack_10->SetBinError(10,3.269501);
   hCCpi0inFV_stack_10->SetBinError(11,3.390523);
   hCCpi0inFV_stack_10->SetBinError(12,3.331896);
   hCCpi0inFV_stack_10->SetBinError(13,3.688539);
   hCCpi0inFV_stack_10->SetBinError(14,3.437876);
   hCCpi0inFV_stack_10->SetBinError(15,3.274754);
   hCCpi0inFV_stack_10->SetBinError(16,3.268191);
   hCCpi0inFV_stack_10->SetBinError(17,3.365535);
   hCCpi0inFV_stack_10->SetBinError(18,3.020556);
   hCCpi0inFV_stack_10->SetBinError(19,3.207418);
   hCCpi0inFV_stack_10->SetBinError(20,3.423264);
   hCCpi0inFV_stack_10->SetBinError(21,3.505836);
   hCCpi0inFV_stack_10->SetBinError(22,3.595696);
   hCCpi0inFV_stack_10->SetBinError(23,3.625648);
   hCCpi0inFV_stack_10->SetBinError(24,3.47821);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,21.83698);
   hNCinFV_stack_11->SetBinContent(2,23.15751);
   hNCinFV_stack_11->SetBinContent(3,23.49599);
   hNCinFV_stack_11->SetBinContent(4,20.47365);
   hNCinFV_stack_11->SetBinContent(5,24.66337);
   hNCinFV_stack_11->SetBinContent(6,18.23925);
   hNCinFV_stack_11->SetBinContent(7,18.83555);
   hNCinFV_stack_11->SetBinContent(8,19.6078);
   hNCinFV_stack_11->SetBinContent(9,21.15231);
   hNCinFV_stack_11->SetBinContent(10,15.98517);
   hNCinFV_stack_11->SetBinContent(11,19.28768);
   hNCinFV_stack_11->SetBinContent(12,24.71662);
   hNCinFV_stack_11->SetBinContent(13,20.96067);
   hNCinFV_stack_11->SetBinContent(14,27.05246);
   hNCinFV_stack_11->SetBinContent(15,26.0207);
   hNCinFV_stack_11->SetBinContent(16,21.58885);
   hNCinFV_stack_11->SetBinContent(17,20.89896);
   hNCinFV_stack_11->SetBinContent(18,21.82929);
   hNCinFV_stack_11->SetBinContent(19,20.02866);
   hNCinFV_stack_11->SetBinContent(20,17.10484);
   hNCinFV_stack_11->SetBinContent(21,19.64827);
   hNCinFV_stack_11->SetBinContent(22,23.204);
   hNCinFV_stack_11->SetBinContent(23,21.63027);
   hNCinFV_stack_11->SetBinContent(24,20.67145);
   hNCinFV_stack_11->SetBinError(1,2.313384);
   hNCinFV_stack_11->SetBinError(2,2.411447);
   hNCinFV_stack_11->SetBinError(3,2.435186);
   hNCinFV_stack_11->SetBinError(4,2.289457);
   hNCinFV_stack_11->SetBinError(5,2.52104);
   hNCinFV_stack_11->SetBinError(6,2.123656);
   hNCinFV_stack_11->SetBinError(7,2.104763);
   hNCinFV_stack_11->SetBinError(8,2.185745);
   hNCinFV_stack_11->SetBinError(9,2.339315);
   hNCinFV_stack_11->SetBinError(10,1.992209);
   hNCinFV_stack_11->SetBinError(11,2.192902);
   hNCinFV_stack_11->SetBinError(12,2.513427);
   hNCinFV_stack_11->SetBinError(13,2.331455);
   hNCinFV_stack_11->SetBinError(14,2.640147);
   hNCinFV_stack_11->SetBinError(15,2.610977);
   hNCinFV_stack_11->SetBinError(16,2.346803);
   hNCinFV_stack_11->SetBinError(17,2.338952);
   hNCinFV_stack_11->SetBinError(18,2.387993);
   hNCinFV_stack_11->SetBinError(19,2.281054);
   hNCinFV_stack_11->SetBinError(20,2.00951);
   hNCinFV_stack_11->SetBinError(21,2.189668);
   hNCinFV_stack_11->SetBinError(22,2.402935);
   hNCinFV_stack_11->SetBinError(23,2.337632);
   hNCinFV_stack_11->SetBinError(24,2.254406);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,39.66626);
   hnumuCCinFV_stack_12->SetBinContent(2,44.33049);
   hnumuCCinFV_stack_12->SetBinContent(3,30.7522);
   hnumuCCinFV_stack_12->SetBinContent(4,13.49359);
   hnumuCCinFV_stack_12->SetBinContent(5,14.95653);
   hnumuCCinFV_stack_12->SetBinContent(6,16.33875);
   hnumuCCinFV_stack_12->SetBinContent(7,16.8697);
   hnumuCCinFV_stack_12->SetBinContent(8,22.20432);
   hnumuCCinFV_stack_12->SetBinContent(9,22.56092);
   hnumuCCinFV_stack_12->SetBinContent(10,23.32187);
   hnumuCCinFV_stack_12->SetBinContent(11,38.81957);
   hnumuCCinFV_stack_12->SetBinContent(12,39.07568);
   hnumuCCinFV_stack_12->SetBinContent(13,38.14699);
   hnumuCCinFV_stack_12->SetBinContent(14,41.77279);
   hnumuCCinFV_stack_12->SetBinContent(15,30.88378);
   hnumuCCinFV_stack_12->SetBinContent(16,23.37534);
   hnumuCCinFV_stack_12->SetBinContent(17,19.92931);
   hnumuCCinFV_stack_12->SetBinContent(18,19.60337);
   hnumuCCinFV_stack_12->SetBinContent(19,17.1866);
   hnumuCCinFV_stack_12->SetBinContent(20,17.03261);
   hnumuCCinFV_stack_12->SetBinContent(21,17.55673);
   hnumuCCinFV_stack_12->SetBinContent(22,23.85076);
   hnumuCCinFV_stack_12->SetBinContent(23,34.84179);
   hnumuCCinFV_stack_12->SetBinContent(24,47.19131);
   hnumuCCinFV_stack_12->SetBinError(1,3.473618);
   hnumuCCinFV_stack_12->SetBinError(2,4.60785);
   hnumuCCinFV_stack_12->SetBinError(3,2.849586);
   hnumuCCinFV_stack_12->SetBinError(4,1.931266);
   hnumuCCinFV_stack_12->SetBinError(5,2.029313);
   hnumuCCinFV_stack_12->SetBinError(6,2.567125);
   hnumuCCinFV_stack_12->SetBinError(7,2.136727);
   hnumuCCinFV_stack_12->SetBinError(8,3.098604);
   hnumuCCinFV_stack_12->SetBinError(9,2.963995);
   hnumuCCinFV_stack_12->SetBinError(10,2.694322);
   hnumuCCinFV_stack_12->SetBinError(11,3.604583);
   hnumuCCinFV_stack_12->SetBinError(12,3.706962);
   hnumuCCinFV_stack_12->SetBinError(13,3.447805);
   hnumuCCinFV_stack_12->SetBinError(14,3.814785);
   hnumuCCinFV_stack_12->SetBinError(15,3.621036);
   hnumuCCinFV_stack_12->SetBinError(16,2.474513);
   hnumuCCinFV_stack_12->SetBinError(17,2.872049);
   hnumuCCinFV_stack_12->SetBinError(18,2.854629);
   hnumuCCinFV_stack_12->SetBinError(19,2.118704);
   hnumuCCinFV_stack_12->SetBinError(20,2.39349);
   hnumuCCinFV_stack_12->SetBinError(21,2.382378);
   hnumuCCinFV_stack_12->SetBinError(22,2.534685);
   hnumuCCinFV_stack_12->SetBinError(23,3.418117);
   hnumuCCinFV_stack_12->SetBinError(24,3.880555);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.41719);
   hnueCCinFV_stack_13->SetBinContent(2,4.144482);
   hnueCCinFV_stack_13->SetBinContent(3,3.676437);
   hnueCCinFV_stack_13->SetBinContent(4,1.771591);
   hnueCCinFV_stack_13->SetBinContent(5,2.796682);
   hnueCCinFV_stack_13->SetBinContent(6,0.8368419);
   hnueCCinFV_stack_13->SetBinContent(7,1.74772);
   hnueCCinFV_stack_13->SetBinContent(8,1.300873);
   hnueCCinFV_stack_13->SetBinContent(9,2.436122);
   hnueCCinFV_stack_13->SetBinContent(10,2.223166);
   hnueCCinFV_stack_13->SetBinContent(11,2.08973);
   hnueCCinFV_stack_13->SetBinContent(12,2.432297);
   hnueCCinFV_stack_13->SetBinContent(13,2.792146);
   hnueCCinFV_stack_13->SetBinContent(14,2.484208);
   hnueCCinFV_stack_13->SetBinContent(15,1.877872);
   hnueCCinFV_stack_13->SetBinContent(16,1.047017);
   hnueCCinFV_stack_13->SetBinContent(17,1.839424);
   hnueCCinFV_stack_13->SetBinContent(18,3.689353);
   hnueCCinFV_stack_13->SetBinContent(19,0.5371585);
   hnueCCinFV_stack_13->SetBinContent(20,2.582651);
   hnueCCinFV_stack_13->SetBinContent(21,1.497839);
   hnueCCinFV_stack_13->SetBinContent(22,2.820997);
   hnueCCinFV_stack_13->SetBinContent(23,1.933425);
   hnueCCinFV_stack_13->SetBinContent(24,3.240226);
   hnueCCinFV_stack_13->SetBinError(1,0.5883982);
   hnueCCinFV_stack_13->SetBinError(2,1.759915);
   hnueCCinFV_stack_13->SetBinError(3,1.039919);
   hnueCCinFV_stack_13->SetBinError(4,0.7476048);
   hnueCCinFV_stack_13->SetBinError(5,1.668483);
   hnueCCinFV_stack_13->SetBinError(6,0.4225599);
   hnueCCinFV_stack_13->SetBinError(7,0.8111646);
   hnueCCinFV_stack_13->SetBinError(8,0.5334005);
   hnueCCinFV_stack_13->SetBinError(9,0.9079326);
   hnueCCinFV_stack_13->SetBinError(10,1.06268);
   hnueCCinFV_stack_13->SetBinError(11,0.6642128);
   hnueCCinFV_stack_13->SetBinError(12,0.8074823);
   hnueCCinFV_stack_13->SetBinError(13,0.972299);
   hnueCCinFV_stack_13->SetBinError(14,0.8924393);
   hnueCCinFV_stack_13->SetBinError(15,0.6802658);
   hnueCCinFV_stack_13->SetBinError(16,0.5338571);
   hnueCCinFV_stack_13->SetBinError(17,0.7115105);
   hnueCCinFV_stack_13->SetBinError(18,1.604757);
   hnueCCinFV_stack_13->SetBinError(19,0.3929603);
   hnueCCinFV_stack_13->SetBinError(20,1.265061);
   hnueCCinFV_stack_13->SetBinError(21,0.6697577);
   hnueCCinFV_stack_13->SetBinError(22,1.352983);
   hnueCCinFV_stack_13->SetBinError(23,0.8382154);
   hnueCCinFV_stack_13->SetBinError(24,1.073038);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,341.7696);
   hmcerror__2->SetBinContent(2,346.2228);
   hmcerror__2->SetBinContent(3,342.6265);
   hmcerror__2->SetBinContent(4,300.1168);
   hmcerror__2->SetBinContent(5,300.8663);
   hmcerror__2->SetBinContent(6,291.4278);
   hmcerror__2->SetBinContent(7,290.7921);
   hmcerror__2->SetBinContent(8,274.6167);
   hmcerror__2->SetBinContent(9,302.3009);
   hmcerror__2->SetBinContent(10,289.2793);
   hmcerror__2->SetBinContent(11,316.9771);
   hmcerror__2->SetBinContent(12,302.9876);
   hmcerror__2->SetBinContent(13,313.0408);
   hmcerror__2->SetBinContent(14,324.7327);
   hmcerror__2->SetBinContent(15,322.885);
   hmcerror__2->SetBinContent(16,311.636);
   hmcerror__2->SetBinContent(17,302.2412);
   hmcerror__2->SetBinContent(18,302.2703);
   hmcerror__2->SetBinContent(19,291.3799);
   hmcerror__2->SetBinContent(20,303.799);
   hmcerror__2->SetBinContent(21,315.2771);
   hmcerror__2->SetBinContent(22,335.8971);
   hmcerror__2->SetBinContent(23,328.485);
   hmcerror__2->SetBinContent(24,322.1832);
   hmcerror__2->SetBinError(1,87.98063);
   hmcerror__2->SetBinError(2,86.7948);
   hmcerror__2->SetBinError(3,94.3738);
   hmcerror__2->SetBinError(4,83.12379);
   hmcerror__2->SetBinError(5,74.881);
   hmcerror__2->SetBinError(6,68.02563);
   hmcerror__2->SetBinError(7,72.1059);
   hmcerror__2->SetBinError(8,74.49448);
   hmcerror__2->SetBinError(9,81.61882);
   hmcerror__2->SetBinError(10,74.77758);
   hmcerror__2->SetBinError(11,93.73637);
   hmcerror__2->SetBinError(12,80.07097);
   hmcerror__2->SetBinError(13,83.29087);
   hmcerror__2->SetBinError(14,82.28228);
   hmcerror__2->SetBinError(15,79.54796);
   hmcerror__2->SetBinError(16,81.64842);
   hmcerror__2->SetBinError(17,73.03043);
   hmcerror__2->SetBinError(18,76.37331);
   hmcerror__2->SetBinError(19,70.67777);
   hmcerror__2->SetBinError(20,72.43828);
   hmcerror__2->SetBinError(21,77.0014);
   hmcerror__2->SetBinError(22,87.15065);
   hmcerror__2->SetBinError(23,85.75224);
   hmcerror__2->SetBinError(24,88.46146);
   hmcerror__2->SetBinError(25,0.3895343);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3001[24] = {
   298,
   321,
   245,
   321,
   290,
   267,
   245,
   224,
   226,
   303,
   258,
   238,
   271,
   312,
   272,
   263,
   273,
   232,
   258,
   249,
   279,
   257,
   278,
   264};
   Double_t _felx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3001[24] = {
   17.26268,
   17.91647,
   15.65248,
   17.91647,
   17.02939,
   16.34013,
   15.65248,
   14.96663,
   15.0333,
   17.4069,
   16.06238,
   15.42725,
   16.46208,
   17.66352,
   16.49242,
   16.21727,
   16.52271,
   15.23155,
   16.06238,
   15.77973,
   16.70329,
   16.03122,
   16.67333,
   16.24808};
   Double_t _fehx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3001[24] = {
   17.26268,
   17.91647,
   15.65248,
   17.91647,
   17.02939,
   16.34013,
   15.65248,
   14.96663,
   15.0333,
   17.4069,
   16.06238,
   15.42725,
   16.46208,
   17.66352,
   16.49242,
   16.21727,
   16.52271,
   15.23155,
   16.06238,
   15.77973,
   16.70329,
   16.03122,
   16.67333,
   16.24808};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(196.0451);
   Graph_Graph3001->SetMaximum(351.9048);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3002[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3002[24] = {
   0.2574267,
   0.2506906,
   0.2754422,
   0.2769714,
   0.2488846,
   0.2334219,
   0.2479637,
   0.2712671,
   0.2699919,
   0.2584962,
   0.2957197,
   0.2642714,
   0.2660704,
   0.2533847,
   0.2463662,
   0.2619993,
   0.2416296,
   0.2526657,
   0.2425623,
   0.2384415,
   0.2442341,
   0.2594564,
   0.2610538,
   0.2745688};
   Double_t _fehx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3002[24] = {
   0.2574267,
   0.2506906,
   0.2754422,
   0.2769714,
   0.2488846,
   0.2334219,
   0.2479637,
   0.2712671,
   0.2699919,
   0.2584962,
   0.2957197,
   0.2642714,
   0.2660704,
   0.2533847,
   0.2463662,
   0.2619993,
   0.2416296,
   0.2526657,
   0.2425623,
   0.2384415,
   0.2442341,
   0.2594564,
   0.2610538,
   0.2745688};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3003[24] = {
   0.2322116,
   0.232556,
   0.234322,
   0.2426539,
   0.2229778,
   0.2111714,
   0.2289071,
   0.2443473,
   0.2351863,
   0.2371918,
   0.235715,
   0.2417802,
   0.2336127,
   0.2295218,
   0.2296458,
   0.2315646,
   0.2267779,
   0.213444,
   0.2192661,
   0.2184044,
   0.226586,
   0.2312436,
   0.2369484,
   0.2346662};
   Double_t _fehx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3003[24] = {
   0.2322116,
   0.232556,
   0.234322,
   0.2426539,
   0.2229778,
   0.2111714,
   0.2289071,
   0.2443473,
   0.2351863,
   0.2371918,
   0.235715,
   0.2417802,
   0.2336127,
   0.2295218,
   0.2296458,
   0.2315646,
   0.2267779,
   0.213444,
   0.2192661,
   0.2184044,
   0.226586,
   0.2312436,
   0.2369484,
   0.2346662};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3004[24] = {
   0.8719324,
   0.9271486,
   0.7150643,
   1.069583,
   0.9638832,
   0.9161788,
   0.8425263,
   0.8156823,
   0.7475994,
   1.047431,
   0.8139391,
   0.7855107,
   0.8657019,
   0.9607903,
   0.8424051,
   0.8439333,
   0.9032522,
   0.7675251,
   0.8854421,
   0.819621,
   0.8849359,
   0.7651152,
   0.8463096,
   0.8194095};
   Double_t _felx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3004[24] = {
   0.05050969,
   0.05174839,
   0.04568378,
   0.05969833,
   0.05660117,
   0.05606923,
   0.05382703,
   0.05450006,
   0.04972957,
   0.06017332,
   0.05067363,
   0.05091709,
   0.05258765,
   0.05439404,
   0.05107831,
   0.05203916,
   0.05466731,
   0.05039049,
   0.05512522,
   0.05194137,
   0.05297973,
   0.04772658,
   0.05075828,
   0.05043117};
   Double_t _fehx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3004[24] = {
   0.05050969,
   0.05174839,
   0.04568378,
   0.05969833,
   0.05660117,
   0.05606923,
   0.05382703,
   0.05450006,
   0.04972957,
   0.06017332,
   0.05067363,
   0.05091709,
   0.05258765,
   0.05439404,
   0.05107831,
   0.05203916,
   0.05466731,
   0.05039049,
   0.05512522,
   0.05194137,
   0.05297973,
   0.04772658,
   0.05075828,
   0.05043117};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.6233904);
   Graph_Graph3004->SetMaximum(1.175272);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
