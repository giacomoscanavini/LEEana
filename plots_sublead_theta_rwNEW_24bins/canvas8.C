#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 14:17:36 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-1.62,3.553846,179.1379);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__22->SetBinContent(1,12.85955);
   hmc__22->SetBinContent(2,44.00662);
   hmc__22->SetBinContent(3,59.40174);
   hmc__22->SetBinContent(4,77.8231);
   hmc__22->SetBinContent(5,75.17776);
   hmc__22->SetBinContent(6,70.71085);
   hmc__22->SetBinContent(7,69.35085);
   hmc__22->SetBinContent(8,64.03162);
   hmc__22->SetBinContent(9,55.51201);
   hmc__22->SetBinContent(10,54.64199);
   hmc__22->SetBinContent(11,41.14845);
   hmc__22->SetBinContent(12,40.09495);
   hmc__22->SetBinContent(13,32.16611);
   hmc__22->SetBinContent(14,33.69842);
   hmc__22->SetBinContent(15,37.19277);
   hmc__22->SetBinContent(16,30.96222);
   hmc__22->SetBinContent(17,28.36889);
   hmc__22->SetBinContent(18,23.3203);
   hmc__22->SetBinContent(19,22.47221);
   hmc__22->SetBinContent(20,25.07037);
   hmc__22->SetBinContent(21,27.55632);
   hmc__22->SetBinContent(22,20.54171);
   hmc__22->SetBinContent(23,12.33883);
   hmc__22->SetBinContent(24,5.550173);
   hmc__22->SetBinError(1,7.603202);
   hmc__22->SetBinError(2,18.74224);
   hmc__22->SetBinError(3,18.61944);
   hmc__22->SetBinError(4,26.00065);
   hmc__22->SetBinError(5,23.15174);
   hmc__22->SetBinError(6,21.13453);
   hmc__22->SetBinError(7,21.21823);
   hmc__22->SetBinError(8,20.28017);
   hmc__22->SetBinError(9,20.69478);
   hmc__22->SetBinError(10,20.74033);
   hmc__22->SetBinError(11,18.39909);
   hmc__22->SetBinError(12,17.75246);
   hmc__22->SetBinError(13,13.14184);
   hmc__22->SetBinError(14,15.23369);
   hmc__22->SetBinError(15,16.67535);
   hmc__22->SetBinError(16,18.83376);
   hmc__22->SetBinError(17,13.05842);
   hmc__22->SetBinError(18,10.70243);
   hmc__22->SetBinError(19,16.22801);
   hmc__22->SetBinError(20,16.13135);
   hmc__22->SetBinError(21,14.31298);
   hmc__22->SetBinError(22,18.9526);
   hmc__22->SetBinError(23,10.20577);
   hmc__22->SetBinError(24,10.22663);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.62);
   hmc__22->SetMaximum(170.1);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,3.15);
   hs8_stack_8->SetMinimum(-3.571482e-09);
   hs8_stack_8->SetMaximum(81.71425);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,1.65886);
   hbadmatch_stack_1->SetBinContent(3,3.810893);
   hbadmatch_stack_1->SetBinContent(4,1.65886);
   hbadmatch_stack_1->SetBinContent(5,4.450674);
   hbadmatch_stack_1->SetBinContent(6,1.26712);
   hbadmatch_stack_1->SetBinContent(7,2.04952);
   hbadmatch_stack_1->SetBinContent(8,2.41769);
   hbadmatch_stack_1->SetBinContent(9,1.607977);
   hbadmatch_stack_1->SetBinContent(10,0.5867651);
   hbadmatch_stack_1->SetBinContent(11,1.625079);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,1.25106);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,1.470853);
   hbadmatch_stack_1->SetBinContent(16,1.412273);
   hbadmatch_stack_1->SetBinContent(17,1.116811);
   hbadmatch_stack_1->SetBinContent(18,1.123524);
   hbadmatch_stack_1->SetBinContent(19,1.974842);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.7683758);
   hbadmatch_stack_1->SetBinContent(23,1.217248);
   hbadmatch_stack_1->SetBinError(2,0.650338);
   hbadmatch_stack_1->SetBinError(3,1.058704);
   hbadmatch_stack_1->SetBinError(4,0.650338);
   hbadmatch_stack_1->SetBinError(5,1.399441);
   hbadmatch_stack_1->SetBinError(6,0.5883944);
   hbadmatch_stack_1->SetBinError(7,0.7487155);
   hbadmatch_stack_1->SetBinError(8,0.8549861);
   hbadmatch_stack_1->SetBinError(9,0.7090672);
   hbadmatch_stack_1->SetBinError(10,0.3387718);
   hbadmatch_stack_1->SetBinError(11,0.6889791);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.5867854);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.8072299);
   hbadmatch_stack_1->SetBinError(16,0.6510715);
   hbadmatch_stack_1->SetBinError(17,0.5753189);
   hbadmatch_stack_1->SetBinError(18,0.5880526);
   hbadmatch_stack_1->SetBinError(19,0.7674541);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.4560724);
   hbadmatch_stack_1->SetBinError(23,0.6211758);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.185808);
   hext_stack_2->SetBinContent(2,8.254432);
   hext_stack_2->SetBinContent(3,8.99979);
   hext_stack_2->SetBinContent(4,15.13185);
   hext_stack_2->SetBinContent(5,13.44202);
   hext_stack_2->SetBinContent(6,11.76655);
   hext_stack_2->SetBinContent(7,13.6136);
   hext_stack_2->SetBinContent(8,11.24462);
   hext_stack_2->SetBinContent(9,11.99439);
   hext_stack_2->SetBinContent(10,14.37931);
   hext_stack_2->SetBinContent(11,5.601365);
   hext_stack_2->SetBinContent(12,9.216035);
   hext_stack_2->SetBinContent(13,10.01764);
   hext_stack_2->SetBinContent(14,10.98088);
   hext_stack_2->SetBinContent(15,11.70029);
   hext_stack_2->SetBinContent(16,8.746004);
   hext_stack_2->SetBinContent(17,4.545971);
   hext_stack_2->SetBinContent(18,5.330447);
   hext_stack_2->SetBinContent(19,3.897177);
   hext_stack_2->SetBinContent(20,4.028449);
   hext_stack_2->SetBinContent(21,9.422328);
   hext_stack_2->SetBinContent(22,2.110787);
   hext_stack_2->SetBinContent(23,1.290409);
   hext_stack_2->SetBinContent(24,1.219797);
   hext_stack_2->SetBinError(1,1.006415);
   hext_stack_2->SetBinError(2,1.956034);
   hext_stack_2->SetBinError(3,1.922036);
   hext_stack_2->SetBinError(4,2.614343);
   hext_stack_2->SetBinError(5,2.417878);
   hext_stack_2->SetBinError(6,2.110703);
   hext_stack_2->SetBinError(7,2.401064);
   hext_stack_2->SetBinError(8,2.213445);
   hext_stack_2->SetBinError(9,2.214185);
   hext_stack_2->SetBinError(10,2.677282);
   hext_stack_2->SetBinError(11,1.40861);
   hext_stack_2->SetBinError(12,2.051304);
   hext_stack_2->SetBinError(13,2.145827);
   hext_stack_2->SetBinError(14,2.336194);
   hext_stack_2->SetBinError(15,2.407163);
   hext_stack_2->SetBinError(16,1.927474);
   hext_stack_2->SetBinError(17,1.268224);
   hext_stack_2->SetBinError(18,1.656455);
   hext_stack_2->SetBinError(19,1.182339);
   hext_stack_2->SetBinError(20,1.479117);
   hext_stack_2->SetBinError(21,2.293251);
   hext_stack_2->SetBinError(22,0.8669371);
   hext_stack_2->SetBinError(23,0.788756);
   hext_stack_2->SetBinError(24,0.7042499);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,1.646113);
   hdirt_stack_3->SetBinContent(5,0.414335);
   hdirt_stack_3->SetBinContent(6,2.15951);
   hdirt_stack_3->SetBinContent(7,2.7056);
   hdirt_stack_3->SetBinContent(8,1.349596);
   hdirt_stack_3->SetBinContent(9,0.7139341);
   hdirt_stack_3->SetBinContent(10,1.751069);
   hdirt_stack_3->SetBinContent(11,1.384904);
   hdirt_stack_3->SetBinContent(12,0.6773466);
   hdirt_stack_3->SetBinContent(13,0.8361835);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinContent(15,0.9068468);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.2761429);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.4801876);
   hdirt_stack_3->SetBinContent(21,0.8010461);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.7294421);
   hdirt_stack_3->SetBinError(5,0.2391468);
   hdirt_stack_3->SetBinError(6,0.8095689);
   hdirt_stack_3->SetBinError(7,0.8974286);
   hdirt_stack_3->SetBinError(8,0.6021519);
   hdirt_stack_3->SetBinError(9,0.3660028);
   hdirt_stack_3->SetBinError(10,1.018503);
   hdirt_stack_3->SetBinError(11,0.6139598);
   hdirt_stack_3->SetBinError(12,0.3439585);
   hdirt_stack_3->SetBinError(13,0.4992755);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetBinError(15,0.5334985);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.1952625);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.3653078);
   hdirt_stack_3->SetBinError(21,0.4056913);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.681084);
   houtFV_stack_4->SetBinContent(2,8.192113);
   houtFV_stack_4->SetBinContent(3,14.89669);
   houtFV_stack_4->SetBinContent(4,15.76108);
   houtFV_stack_4->SetBinContent(5,15.71871);
   houtFV_stack_4->SetBinContent(6,14.37395);
   houtFV_stack_4->SetBinContent(7,13.35191);
   houtFV_stack_4->SetBinContent(8,12.99926);
   houtFV_stack_4->SetBinContent(9,12.16199);
   houtFV_stack_4->SetBinContent(10,9.103154);
   houtFV_stack_4->SetBinContent(11,7.792195);
   houtFV_stack_4->SetBinContent(12,9.132161);
   houtFV_stack_4->SetBinContent(13,4.958058);
   houtFV_stack_4->SetBinContent(14,7.463967);
   houtFV_stack_4->SetBinContent(15,6.539079);
   houtFV_stack_4->SetBinContent(16,6.086718);
   houtFV_stack_4->SetBinContent(17,7.092045);
   houtFV_stack_4->SetBinContent(18,6.528805);
   houtFV_stack_4->SetBinContent(19,5.765134);
   houtFV_stack_4->SetBinContent(20,9.493725);
   houtFV_stack_4->SetBinContent(21,4.755387);
   houtFV_stack_4->SetBinContent(22,3.998311);
   houtFV_stack_4->SetBinContent(23,3.939643);
   houtFV_stack_4->SetBinContent(24,0.9269427);
   houtFV_stack_4->SetBinError(1,0.8779318);
   houtFV_stack_4->SetBinError(2,1.433517);
   houtFV_stack_4->SetBinError(3,1.982475);
   houtFV_stack_4->SetBinError(4,2.166661);
   houtFV_stack_4->SetBinError(5,1.971188);
   houtFV_stack_4->SetBinError(6,1.87637);
   houtFV_stack_4->SetBinError(7,1.852744);
   houtFV_stack_4->SetBinError(8,1.804445);
   houtFV_stack_4->SetBinError(9,1.744892);
   houtFV_stack_4->SetBinError(10,1.570337);
   houtFV_stack_4->SetBinError(11,1.434489);
   houtFV_stack_4->SetBinError(12,1.910839);
   houtFV_stack_4->SetBinError(13,1.098477);
   houtFV_stack_4->SetBinError(14,1.401285);
   houtFV_stack_4->SetBinError(15,1.33131);
   houtFV_stack_4->SetBinError(16,1.262111);
   houtFV_stack_4->SetBinError(17,1.26884);
   houtFV_stack_4->SetBinError(18,1.27676);
   houtFV_stack_4->SetBinError(19,1.193427);
   houtFV_stack_4->SetBinError(20,1.579712);
   houtFV_stack_4->SetBinError(21,1.06904);
   houtFV_stack_4->SetBinError(22,1.002128);
   houtFV_stack_4->SetBinError(23,1.030689);
   houtFV_stack_4->SetBinError(24,0.4800908);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.659062);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.26879);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.616544);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.40829);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9491041);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9329897);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4594375);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3481013);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3887721);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3536475);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3531893);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2445578);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1994106);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.589476);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.408631);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.079166);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.68459);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.53321);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.32818);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.7364);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.22274);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.114443);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.540161);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.841413);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.899293);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.158195);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.42922);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.919802);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.124064);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.21947);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.705148);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.80313);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.522961);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.411698);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.134194);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.7949858);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.6420361);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4118635);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7218202);
   hNCpi0inFVres_stack_7->SetBinError(3,1.011553);
   hNCpi0inFVres_stack_7->SetBinError(4,1.193205);
   hNCpi0inFVres_stack_7->SetBinError(5,1.138425);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9679341);
   hNCpi0inFVres_stack_7->SetBinError(7,1.078439);
   hNCpi0inFVres_stack_7->SetBinError(8,1.064971);
   hNCpi0inFVres_stack_7->SetBinError(9,0.887305);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8210048);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7254953);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8218344);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7074787);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5718413);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6617617);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6327982);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5432788);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5289409);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5251252);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4280051);
   hNCpi0inFVres_stack_7->SetBinError(21,0.495573);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4935402);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2483746);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2888274);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5581679);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.036876);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.134026);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.996102);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.900616);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.109534);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.498638);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.245794);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.28224);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.576026);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.495566);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.12929);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.08694);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.225944);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.18509);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.129458);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.03214);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6682718);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2198343);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4838504);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4591547);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5061281);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5639027);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5749527);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5793918);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4966846);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3091135);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4418765);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5297988);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3424653);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3001705);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3744943);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3447308);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3873518);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3749275);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.213699);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.808139);
   hCCpi0inFV_stack_10->SetBinContent(2,8.80752);
   hCCpi0inFV_stack_10->SetBinContent(3,10.70553);
   hCCpi0inFV_stack_10->SetBinContent(4,14.61833);
   hCCpi0inFV_stack_10->SetBinContent(5,14.78343);
   hCCpi0inFV_stack_10->SetBinContent(6,14.97203);
   hCCpi0inFV_stack_10->SetBinContent(7,13.51625);
   hCCpi0inFV_stack_10->SetBinContent(8,13.64258);
   hCCpi0inFV_stack_10->SetBinContent(9,11.82057);
   hCCpi0inFV_stack_10->SetBinContent(10,11.61256);
   hCCpi0inFV_stack_10->SetBinContent(11,10.21773);
   hCCpi0inFV_stack_10->SetBinContent(12,7.130916);
   hCCpi0inFV_stack_10->SetBinContent(13,4.396579);
   hCCpi0inFV_stack_10->SetBinContent(14,3.957739);
   hCCpi0inFV_stack_10->SetBinContent(15,6.200208);
   hCCpi0inFV_stack_10->SetBinContent(16,5.901834);
   hCCpi0inFV_stack_10->SetBinContent(17,6.782286);
   hCCpi0inFV_stack_10->SetBinContent(18,4.322215);
   hCCpi0inFV_stack_10->SetBinContent(19,3.364569);
   hCCpi0inFV_stack_10->SetBinContent(20,3.08574);
   hCCpi0inFV_stack_10->SetBinContent(21,4.449832);
   hCCpi0inFV_stack_10->SetBinContent(22,4.752348);
   hCCpi0inFV_stack_10->SetBinContent(23,2.530128);
   hCCpi0inFV_stack_10->SetBinContent(24,1.608988);
   hCCpi0inFV_stack_10->SetBinError(1,0.9504019);
   hCCpi0inFV_stack_10->SetBinError(2,1.505685);
   hCCpi0inFV_stack_10->SetBinError(3,1.61826);
   hCCpi0inFV_stack_10->SetBinError(4,1.962414);
   hCCpi0inFV_stack_10->SetBinError(5,1.932604);
   hCCpi0inFV_stack_10->SetBinError(6,1.996689);
   hCCpi0inFV_stack_10->SetBinError(7,1.908218);
   hCCpi0inFV_stack_10->SetBinError(8,1.854033);
   hCCpi0inFV_stack_10->SetBinError(9,1.733179);
   hCCpi0inFV_stack_10->SetBinError(10,1.698087);
   hCCpi0inFV_stack_10->SetBinError(11,1.632668);
   hCCpi0inFV_stack_10->SetBinError(12,1.374459);
   hCCpi0inFV_stack_10->SetBinError(13,1.075501);
   hCCpi0inFV_stack_10->SetBinError(14,0.9603742);
   hCCpi0inFV_stack_10->SetBinError(15,1.232794);
   hCCpi0inFV_stack_10->SetBinError(16,1.224191);
   hCCpi0inFV_stack_10->SetBinError(17,1.330454);
   hCCpi0inFV_stack_10->SetBinError(18,1.053266);
   hCCpi0inFV_stack_10->SetBinError(19,0.8163631);
   hCCpi0inFV_stack_10->SetBinError(20,0.8088057);
   hCCpi0inFV_stack_10->SetBinError(21,1.057532);
   hCCpi0inFV_stack_10->SetBinError(22,1.168125);
   hCCpi0inFV_stack_10->SetBinError(23,0.7434637);
   hCCpi0inFV_stack_10->SetBinError(24,0.6801404);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,1.999038);
   hNCinFV_stack_11->SetBinContent(3,1.947476);
   hNCinFV_stack_11->SetBinContent(4,3.374355);
   hNCinFV_stack_11->SetBinContent(5,2.107235);
   hNCinFV_stack_11->SetBinContent(6,1.999038);
   hNCinFV_stack_11->SetBinContent(7,2.053982);
   hNCinFV_stack_11->SetBinContent(8,2.291034);
   hNCinFV_stack_11->SetBinContent(9,2.585803);
   hNCinFV_stack_11->SetBinContent(10,1.072095);
   hNCinFV_stack_11->SetBinContent(11,1.608988);
   hNCinFV_stack_11->SetBinContent(12,1.176911);
   hNCinFV_stack_11->SetBinContent(13,0.9286332);
   hNCinFV_stack_11->SetBinContent(14,1.123658);
   hNCinFV_stack_11->SetBinContent(15,1.462145);
   hNCinFV_stack_11->SetBinContent(16,1.318683);
   hNCinFV_stack_11->SetBinContent(17,1.662242);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(19,1.073786);
   hNCinFV_stack_11->SetBinContent(20,2.050601);
   hNCinFV_stack_11->SetBinContent(21,1.805704);
   hNCinFV_stack_11->SetBinContent(22,1.318683);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.7339349);
   hNCinFV_stack_11->SetBinError(3,0.7600326);
   hNCinFV_stack_11->SetBinError(4,0.8993757);
   hNCinFV_stack_11->SetBinError(5,0.6801976);
   hNCinFV_stack_11->SetBinError(6,0.7339349);
   hNCinFV_stack_11->SetBinError(7,0.7078105);
   hNCinFV_stack_11->SetBinError(8,0.8334836);
   hNCinFV_stack_11->SetBinError(9,0.8083481);
   hNCinFV_stack_11->SetBinError(10,0.5551335);
   hNCinFV_stack_11->SetBinError(11,0.6801404);
   hNCinFV_stack_11->SetBinError(12,0.4804759);
   hNCinFV_stack_11->SetBinError(13,0.48078);
   hNCinFV_stack_11->SetBinError(14,0.5188295);
   hNCinFV_stack_11->SetBinError(15,0.6198731);
   hNCinFV_stack_11->SetBinError(16,0.5542732);
   hNCinFV_stack_11->SetBinError(17,0.6513556);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(19,0.5557297);
   hNCinFV_stack_11->SetBinError(20,0.7068742);
   hNCinFV_stack_11->SetBinError(21,0.7080169);
   hNCinFV_stack_11->SetBinError(22,0.5542732);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.421492);
   hnumuCCinFV_stack_12->SetBinContent(2,4.44966);
   hnumuCCinFV_stack_12->SetBinContent(3,5.094047);
   hnumuCCinFV_stack_12->SetBinContent(4,8.251581);
   hnumuCCinFV_stack_12->SetBinContent(5,7.884083);
   hnumuCCinFV_stack_12->SetBinContent(6,9.042689);
   hnumuCCinFV_stack_12->SetBinContent(7,5.810865);
   hnumuCCinFV_stack_12->SetBinContent(8,6.381379);
   hnumuCCinFV_stack_12->SetBinContent(9,4.520042);
   hnumuCCinFV_stack_12->SetBinContent(10,6.393098);
   hnumuCCinFV_stack_12->SetBinContent(11,4.106575);
   hnumuCCinFV_stack_12->SetBinContent(12,3.88107);
   hnumuCCinFV_stack_12->SetBinContent(13,3.3518);
   hnumuCCinFV_stack_12->SetBinContent(14,3.932735);
   hnumuCCinFV_stack_12->SetBinContent(15,3.627437);
   hnumuCCinFV_stack_12->SetBinContent(16,1.717223);
   hnumuCCinFV_stack_12->SetBinContent(17,2.976922);
   hnumuCCinFV_stack_12->SetBinContent(18,1.737194);
   hnumuCCinFV_stack_12->SetBinContent(19,1.944251);
   hnumuCCinFV_stack_12->SetBinContent(20,2.218879);
   hnumuCCinFV_stack_12->SetBinContent(21,2.348456);
   hnumuCCinFV_stack_12->SetBinContent(22,5.333664);
   hnumuCCinFV_stack_12->SetBinContent(23,0.9929213);
   hnumuCCinFV_stack_12->SetBinContent(24,0.6207258);
   hnumuCCinFV_stack_12->SetBinError(1,0.6207945);
   hnumuCCinFV_stack_12->SetBinError(2,1.057062);
   hnumuCCinFV_stack_12->SetBinError(3,1.160591);
   hnumuCCinFV_stack_12->SetBinError(4,1.467859);
   hnumuCCinFV_stack_12->SetBinError(5,1.927995);
   hnumuCCinFV_stack_12->SetBinError(6,2.3454);
   hnumuCCinFV_stack_12->SetBinError(7,1.328929);
   hnumuCCinFV_stack_12->SetBinError(8,1.265117);
   hnumuCCinFV_stack_12->SetBinError(9,1.089332);
   hnumuCCinFV_stack_12->SetBinError(10,1.341945);
   hnumuCCinFV_stack_12->SetBinError(11,1.052495);
   hnumuCCinFV_stack_12->SetBinError(12,1.05438);
   hnumuCCinFV_stack_12->SetBinError(13,1.024603);
   hnumuCCinFV_stack_12->SetBinError(14,1.065737);
   hnumuCCinFV_stack_12->SetBinError(15,1.047872);
   hnumuCCinFV_stack_12->SetBinError(16,0.6112767);
   hnumuCCinFV_stack_12->SetBinError(17,0.8810141);
   hnumuCCinFV_stack_12->SetBinError(18,0.6111839);
   hnumuCCinFV_stack_12->SetBinError(19,0.7072761);
   hnumuCCinFV_stack_12->SetBinError(20,0.7706155);
   hnumuCCinFV_stack_12->SetBinError(21,0.7751056);
   hnumuCCinFV_stack_12->SetBinError(22,2.38062);
   hnumuCCinFV_stack_12->SetBinError(23,0.5965343);
   hnumuCCinFV_stack_12->SetBinError(24,0.3593967);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,1.046837);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(5,0.4514454);
   hnueCCinFV_stack_13->SetBinContent(6,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(7,0.8577237);
   hnueCCinFV_stack_13->SetBinContent(8,0.4975739);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.5697868);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(5,0.3192207);
   hnueCCinFV_stack_13->SetBinError(6,0.7431478);
   hnueCCinFV_stack_13->SetBinError(7,0.4307902);
   hnueCCinFV_stack_13->SetBinError(8,0.3599592);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__23->SetBinContent(1,12.85955);
   hmcerror__23->SetBinContent(2,44.00662);
   hmcerror__23->SetBinContent(3,59.40174);
   hmcerror__23->SetBinContent(4,77.8231);
   hmcerror__23->SetBinContent(5,75.17776);
   hmcerror__23->SetBinContent(6,70.71085);
   hmcerror__23->SetBinContent(7,69.35085);
   hmcerror__23->SetBinContent(8,64.03162);
   hmcerror__23->SetBinContent(9,55.51201);
   hmcerror__23->SetBinContent(10,54.64199);
   hmcerror__23->SetBinContent(11,41.14845);
   hmcerror__23->SetBinContent(12,40.09495);
   hmcerror__23->SetBinContent(13,32.16611);
   hmcerror__23->SetBinContent(14,33.69842);
   hmcerror__23->SetBinContent(15,37.19277);
   hmcerror__23->SetBinContent(16,30.96222);
   hmcerror__23->SetBinContent(17,28.36889);
   hmcerror__23->SetBinContent(18,23.3203);
   hmcerror__23->SetBinContent(19,22.47221);
   hmcerror__23->SetBinContent(20,25.07037);
   hmcerror__23->SetBinContent(21,27.55632);
   hmcerror__23->SetBinContent(22,20.54171);
   hmcerror__23->SetBinContent(23,12.33883);
   hmcerror__23->SetBinContent(24,5.550173);
   hmcerror__23->SetBinError(1,7.603202);
   hmcerror__23->SetBinError(2,18.74224);
   hmcerror__23->SetBinError(3,18.61944);
   hmcerror__23->SetBinError(4,26.00065);
   hmcerror__23->SetBinError(5,23.15174);
   hmcerror__23->SetBinError(6,21.13453);
   hmcerror__23->SetBinError(7,21.21823);
   hmcerror__23->SetBinError(8,20.28017);
   hmcerror__23->SetBinError(9,20.69478);
   hmcerror__23->SetBinError(10,20.74033);
   hmcerror__23->SetBinError(11,18.39909);
   hmcerror__23->SetBinError(12,17.75246);
   hmcerror__23->SetBinError(13,13.14184);
   hmcerror__23->SetBinError(14,15.23369);
   hmcerror__23->SetBinError(15,16.67535);
   hmcerror__23->SetBinError(16,18.83376);
   hmcerror__23->SetBinError(17,13.05842);
   hmcerror__23->SetBinError(18,10.70243);
   hmcerror__23->SetBinError(19,16.22801);
   hmcerror__23->SetBinError(20,16.13135);
   hmcerror__23->SetBinError(21,14.31298);
   hmcerror__23->SetBinError(22,18.9526);
   hmcerror__23->SetBinError(23,10.20577);
   hmcerror__23->SetBinError(24,10.22663);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3029[24] = {
   17,
   46,
   63,
   81,
   69,
   59,
   54,
   68,
   52,
   48,
   35,
   34,
   36,
   29,
   33,
   29,
   18,
   21,
   19,
   20,
   15,
   20,
   16,
   3};
   Double_t _felx3029[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3029[24] = {
   4.2835,
   6.9153,
   8.0648,
   9.1239,
   8.4327,
   7.8097,
   7.4785,
   8.3726,
   7.3419,
   7.0604,
   6.0548,
   5.9703,
   6.1381,
   5.5285,
   5.8847,
   5.5285,
   4.4008,
   4.7354,
   4.5151,
   4.6266,
   4.0385,
   4.6266,
   4.1628,
   2.143368};
   Double_t _fehx3029[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3029[24] = {
   4.0673,
   6.7108,
   7.862,
   8.9221,
   8.2304,
   7.6066,
   7.275,
   8.1701,
   7.1381,
   6.8561,
   5.8483,
   5.7635,
   5.9318,
   5.3201,
   5.6776,
   5.3201,
   4.1858,
   4.5229,
   4.3011,
   4.4133,
   3.8197,
   4.4133,
   3.9454,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(98.82865);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3030[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3030[24] = {
   0.5912495,
   0.4258959,
   0.3134494,
   0.3340993,
   0.3079599,
   0.2988867,
   0.3059549,
   0.3167212,
   0.3727983,
   0.3795677,
   0.4471393,
   0.4427606,
   0.4085617,
   0.4520594,
   0.4483493,
   0.608282,
   0.4603079,
   0.4589318,
   0.7221367,
   0.6434428,
   0.5194084,
   0.9226398,
   0.8271263,
   1.842579};
   Double_t _fehx3030[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3030[24] = {
   0.5912495,
   0.4258959,
   0.3134494,
   0.3340993,
   0.3079599,
   0.2988867,
   0.3059549,
   0.3167212,
   0.3727983,
   0.3795677,
   0.4471393,
   0.4427606,
   0.4085617,
   0.4520594,
   0.4483493,
   0.608282,
   0.4603079,
   0.4589318,
   0.7221367,
   0.6434428,
   0.5194084,
   0.9226398,
   0.8271263,
   1.842579};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3031[24] = {
   0.221751,
   0.1835323,
   0.1817082,
   0.1689593,
   0.1745663,
   0.1791984,
   0.1793835,
   0.1796852,
   0.1799959,
   0.1661361,
   0.1867265,
   0.1849904,
   0.1801751,
   0.17809,
   0.1675778,
   0.1836956,
   0.2105996,
   0.2070978,
   0.195855,
   0.2079761,
   0.1823189,
   0.2834319,
   0.2426153,
   0.3062646};
   Double_t _fehx3031[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3031[24] = {
   0.221751,
   0.1835323,
   0.1817082,
   0.1689593,
   0.1745663,
   0.1791984,
   0.1793835,
   0.1796852,
   0.1799959,
   0.1661361,
   0.1867265,
   0.1849904,
   0.1801751,
   0.17809,
   0.1675778,
   0.1836956,
   0.2105996,
   0.2070978,
   0.195855,
   0.2079761,
   0.1823189,
   0.2834319,
   0.2426153,
   0.3062646};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3032[24] = {
   1.321975,
   1.045297,
   1.060575,
   1.040822,
   0.9178246,
   0.8343839,
   0.7786495,
   1.061975,
   0.9367343,
   0.8784454,
   0.8505788,
   0.8479871,
   1.11919,
   0.8605745,
   0.8872693,
   0.9366253,
   0.6344978,
   0.900503,
   0.8454887,
   0.7977544,
   0.5443398,
   0.973629,
   1.296719,
   0.5405237};
   Double_t _felx3032[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3032[24] = {
   0.3330988,
   0.1571423,
   0.1357671,
   0.117239,
   0.1121701,
   0.1104456,
   0.1078357,
   0.1307573,
   0.1322579,
   0.129212,
   0.1471453,
   0.148904,
   0.1908251,
   0.1640581,
   0.1582216,
   0.1785563,
   0.1551277,
   0.2030591,
   0.2009193,
   0.1845445,
   0.1465544,
   0.2252296,
   0.3373739,
   0.3861804};
   Double_t _fehx3032[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3032[24] = {
   0.3162864,
   0.1524952,
   0.132353,
   0.1146459,
   0.1094792,
   0.1075733,
   0.1049014,
   0.1275948,
   0.1285866,
   0.1254731,
   0.1421269,
   0.1437463,
   0.1844115,
   0.1578739,
   0.1526533,
   0.1718255,
   0.1475489,
   0.1939469,
   0.1913964,
   0.1760365,
   0.1386143,
   0.2148458,
   0.3197547,
   0.3106606};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.005951521);
   Graph_Graph3032->SetMaximum(1.786653);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
