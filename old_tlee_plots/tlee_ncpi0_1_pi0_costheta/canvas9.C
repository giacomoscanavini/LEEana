#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 10:30:54 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",190,172,1200,900);
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
   pad1->Range(-1.307692,-2.024473,1.25641,223.8641);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__25->SetBinContent(1,28.04694);
   hmc__25->SetBinContent(2,13.53454);
   hmc__25->SetBinContent(3,11.79472);
   hmc__25->SetBinContent(4,16.15873);
   hmc__25->SetBinContent(5,11.00696);
   hmc__25->SetBinContent(6,9.993978);
   hmc__25->SetBinContent(7,14.60973);
   hmc__25->SetBinContent(8,11.85695);
   hmc__25->SetBinContent(9,13.33451);
   hmc__25->SetBinContent(10,16.34222);
   hmc__25->SetBinContent(11,13.94424);
   hmc__25->SetBinContent(12,17.61195);
   hmc__25->SetBinContent(13,15.39436);
   hmc__25->SetBinContent(14,16.99142);
   hmc__25->SetBinContent(15,18.04933);
   hmc__25->SetBinContent(16,18.03424);
   hmc__25->SetBinContent(17,25.98629);
   hmc__25->SetBinContent(18,27.60252);
   hmc__25->SetBinContent(19,27.30544);
   hmc__25->SetBinContent(20,29.90091);
   hmc__25->SetBinContent(21,43.09649);
   hmc__25->SetBinContent(22,45.65607);
   hmc__25->SetBinContent(23,47.88606);
   hmc__25->SetBinContent(24,65.22692);
   hmc__25->SetBinContent(25,101.2236);
   hmc__25->SetBinError(1,12.65365);
   hmc__25->SetBinError(2,11.59818);
   hmc__25->SetBinError(3,11.56987);
   hmc__25->SetBinError(4,9.063396);
   hmc__25->SetBinError(5,10.20838);
   hmc__25->SetBinError(6,7.272498);
   hmc__25->SetBinError(7,8.093649);
   hmc__25->SetBinError(8,7.121074);
   hmc__25->SetBinError(9,11.55177);
   hmc__25->SetBinError(10,7.823974);
   hmc__25->SetBinError(11,8.718921);
   hmc__25->SetBinError(12,9.637583);
   hmc__25->SetBinError(13,8.601791);
   hmc__25->SetBinError(14,9.871137);
   hmc__25->SetBinError(15,11.1188);
   hmc__25->SetBinError(16,8.849677);
   hmc__25->SetBinError(17,11.68152);
   hmc__25->SetBinError(18,14.30283);
   hmc__25->SetBinError(19,14.59618);
   hmc__25->SetBinError(20,22.13667);
   hmc__25->SetBinError(21,18.06757);
   hmc__25->SetBinError(22,22.98334);
   hmc__25->SetBinError(23,22.45463);
   hmc__25->SetBinError(24,24.84721);
   hmc__25->SetBinError(25,38.79519);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-2.024473);
   hmc__25->SetMaximum(212.5696);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-1,1);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(106.2848);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.314352);
   hbadmatch_stack_1->SetBinContent(2,0.3401776);
   hbadmatch_stack_1->SetBinContent(3,0.6747024);
   hbadmatch_stack_1->SetBinContent(4,0.7319179);
   hbadmatch_stack_1->SetBinContent(6,0.4687016);
   hbadmatch_stack_1->SetBinContent(7,0.4244257);
   hbadmatch_stack_1->SetBinContent(8,0.350779);
   hbadmatch_stack_1->SetBinContent(9,0.9027843);
   hbadmatch_stack_1->SetBinContent(10,0.4117681);
   hbadmatch_stack_1->SetBinContent(11,2.035308);
   hbadmatch_stack_1->SetBinContent(12,0.5541217);
   hbadmatch_stack_1->SetBinContent(13,0.327681);
   hbadmatch_stack_1->SetBinContent(14,1.087798);
   hbadmatch_stack_1->SetBinContent(15,0.9357482);
   hbadmatch_stack_1->SetBinContent(16,0.4578882);
   hbadmatch_stack_1->SetBinContent(17,1.085496);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,1.497144);
   hbadmatch_stack_1->SetBinContent(20,1.086111);
   hbadmatch_stack_1->SetBinContent(21,1.681116);
   hbadmatch_stack_1->SetBinContent(22,0.766006);
   hbadmatch_stack_1->SetBinContent(23,1.268106);
   hbadmatch_stack_1->SetBinContent(24,0.3511956);
   hbadmatch_stack_1->SetBinContent(25,2.094536);
   hbadmatch_stack_1->SetBinError(1,0.5624496);
   hbadmatch_stack_1->SetBinError(2,0.3401776);
   hbadmatch_stack_1->SetBinError(3,0.4220077);
   hbadmatch_stack_1->SetBinError(4,0.438694);
   hbadmatch_stack_1->SetBinError(6,0.3636471);
   hbadmatch_stack_1->SetBinError(7,0.301097);
   hbadmatch_stack_1->SetBinError(8,0.2567406);
   hbadmatch_stack_1->SetBinError(9,0.398976);
   hbadmatch_stack_1->SetBinError(10,0.2914526);
   hbadmatch_stack_1->SetBinError(11,0.8144911);
   hbadmatch_stack_1->SetBinError(12,0.3268138);
   hbadmatch_stack_1->SetBinError(13,0.2358651);
   hbadmatch_stack_1->SetBinError(14,0.4802346);
   hbadmatch_stack_1->SetBinError(15,0.4037163);
   hbadmatch_stack_1->SetBinError(16,0.3244737);
   hbadmatch_stack_1->SetBinError(17,0.6757059);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.6570239);
   hbadmatch_stack_1->SetBinError(20,0.6293483);
   hbadmatch_stack_1->SetBinError(21,0.6909619);
   hbadmatch_stack_1->SetBinError(22,0.3636232);
   hbadmatch_stack_1->SetBinError(23,0.5825115);
   hbadmatch_stack_1->SetBinError(24,0.2573038);
   hbadmatch_stack_1->SetBinError(25,0.7055618);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,5.654845);
   hext_stack_2->SetBinContent(2,1.379791);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,0.9660115);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,3.864046);
   hext_stack_2->SetBinContent(8,1.779209);
   hext_stack_2->SetBinContent(9,2.021405);
   hext_stack_2->SetBinContent(10,4.841647);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(12,4.994461);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,2.919576);
   hext_stack_2->SetBinContent(15,2.185808);
   hext_stack_2->SetBinContent(16,4.110651);
   hext_stack_2->SetBinContent(17,6.684288);
   hext_stack_2->SetBinContent(18,4.345666);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,5.076662);
   hext_stack_2->SetBinContent(21,6.456453);
   hext_stack_2->SetBinContent(22,7.105247);
   hext_stack_2->SetBinContent(23,6.049854);
   hext_stack_2->SetBinContent(24,4.759445);
   hext_stack_2->SetBinContent(25,4.378797);
   hext_stack_2->SetBinError(1,1.687921);
   hext_stack_2->SetBinError(2,0.6935586);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,0.7189592);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,1.437918);
   hext_stack_2->SetBinError(8,0.9206235);
   hext_stack_2->SetBinError(9,0.9448239);
   hext_stack_2->SetBinError(10,1.586957);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(12,1.644594);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.973192);
   hext_stack_2->SetBinError(15,1.006415);
   hext_stack_2->SetBinError(16,1.499292);
   hext_stack_2->SetBinError(17,1.921809);
   hext_stack_2->SetBinError(18,1.579311);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,1.662762);
   hext_stack_2->SetBinError(21,1.801611);
   hext_stack_2->SetBinError(22,1.859105);
   hext_stack_2->SetBinError(23,1.75513);
   hext_stack_2->SetBinError(24,1.567911);
   hext_stack_2->SetBinError(25,1.350755);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(3,0.4049124);
   hdirt_stack_3->SetBinContent(6,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2620035);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2623434);
   hdirt_stack_3->SetBinContent(19,0.2669376);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(22,0.4008912);
   hdirt_stack_3->SetBinContent(23,0.6338169);
   hdirt_stack_3->SetBinContent(25,1.199692);
   hdirt_stack_3->SetBinError(3,0.4049124);
   hdirt_stack_3->SetBinError(6,0.3652866);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2620035);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2623434);
   hdirt_stack_3->SetBinError(19,0.2645965);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(22,0.2968804);
   hdirt_stack_3->SetBinError(23,0.4691215);
   hdirt_stack_3->SetBinError(25,0.6007778);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,8.339864);
   houtFV_stack_4->SetBinContent(2,4.115068);
   houtFV_stack_4->SetBinContent(3,3.12766);
   houtFV_stack_4->SetBinContent(4,4.294155);
   houtFV_stack_4->SetBinContent(5,3.584769);
   houtFV_stack_4->SetBinContent(6,1.890193);
   houtFV_stack_4->SetBinContent(7,2.198945);
   houtFV_stack_4->SetBinContent(8,2.315104);
   houtFV_stack_4->SetBinContent(9,2.478407);
   houtFV_stack_4->SetBinContent(10,2.697479);
   houtFV_stack_4->SetBinContent(11,3.647128);
   houtFV_stack_4->SetBinContent(12,2.995339);
   houtFV_stack_4->SetBinContent(13,2.562768);
   houtFV_stack_4->SetBinContent(14,2.359506);
   houtFV_stack_4->SetBinContent(15,2.187813);
   houtFV_stack_4->SetBinContent(16,1.441315);
   houtFV_stack_4->SetBinContent(17,2.066867);
   houtFV_stack_4->SetBinContent(18,4.641808);
   houtFV_stack_4->SetBinContent(19,4.494287);
   houtFV_stack_4->SetBinContent(20,3.92212);
   houtFV_stack_4->SetBinContent(21,5.250008);
   houtFV_stack_4->SetBinContent(22,6.903067);
   houtFV_stack_4->SetBinContent(23,8.607568);
   houtFV_stack_4->SetBinContent(24,12.35382);
   houtFV_stack_4->SetBinContent(25,17.77221);
   houtFV_stack_4->SetBinError(1,1.50537);
   houtFV_stack_4->SetBinError(2,1.073609);
   houtFV_stack_4->SetBinError(3,0.8282058);
   houtFV_stack_4->SetBinError(4,0.9862782);
   houtFV_stack_4->SetBinError(5,1.047119);
   houtFV_stack_4->SetBinError(6,0.652424);
   houtFV_stack_4->SetBinError(7,0.6419583);
   houtFV_stack_4->SetBinError(8,0.8069671);
   houtFV_stack_4->SetBinError(9,0.7691912);
   houtFV_stack_4->SetBinError(10,0.8152119);
   houtFV_stack_4->SetBinError(11,0.9637409);
   houtFV_stack_4->SetBinError(12,0.8178372);
   houtFV_stack_4->SetBinError(13,0.8638078);
   houtFV_stack_4->SetBinError(14,0.7241438);
   houtFV_stack_4->SetBinError(15,0.6686569);
   houtFV_stack_4->SetBinError(16,0.5676771);
   houtFV_stack_4->SetBinError(17,0.629013);
   houtFV_stack_4->SetBinError(18,1.102885);
   houtFV_stack_4->SetBinError(19,1.014682);
   houtFV_stack_4->SetBinError(20,1.119072);
   houtFV_stack_4->SetBinError(21,1.152828);
   houtFV_stack_4->SetBinError(22,1.297124);
   houtFV_stack_4->SetBinError(23,1.372891);
   houtFV_stack_4->SetBinError(24,1.844029);
   houtFV_stack_4->SetBinError(25,2.397724);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.7485337);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2776807);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.03723348);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04620773);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.07055053);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.09921952);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3772815);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02632953);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03337039);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06078975);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04381243);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1813704);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.35756);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.273404);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.699546);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.751208);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.298009);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.397409);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.210145);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.496126);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.132247);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.57485);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.705891);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.759219);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.016169);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.960256);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.859675);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.111996);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.817782);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.819757);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.728814);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.833465);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.618454);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.163657);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.98917);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.53909);
   hNCpi0inFVres_stack_7->SetBinContent(25,15.41648);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4999068);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2768671);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3336331);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4100018);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2821515);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2846354);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4573246);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3468662);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4451679);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3386719);
   hNCpi0inFVres_stack_7->SetBinError(11,0.291259);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4536513);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3379818);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3697079);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6150868);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5157348);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5207521);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5946906);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5942211);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7528722);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7749811);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9966351);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9589943);
   hNCpi0inFVres_stack_7->SetBinError(24,1.038492);
   hNCpi0inFVres_stack_7->SetBinError(25,1.259322);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.082653);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3940792);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.2355034);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.3922246);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5807395);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1795131);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4598669);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5315905);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1851651);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9098278);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3296939);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.556168);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.16584);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6969513);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2518603);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9107325);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5760653);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6768698);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.528991);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.308556);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.152762);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.763494);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.956703);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.96007);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.095155);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4789378);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.147071);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.08960614);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1525807);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3056484);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.08337383);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2763369);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2497269);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.09992811);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5816532);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1616553);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2148047);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3199285);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2902638);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.07871093);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3341087);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1657313);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2315277);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4574877);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5563517);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5024606);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.679397);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3956651);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.039091);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.265249);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.71188);
   hCCpi0inFV_stack_10->SetBinContent(2,3.7393);
   hCCpi0inFV_stack_10->SetBinContent(3,1.370245);
   hCCpi0inFV_stack_10->SetBinContent(4,3.374355);
   hCCpi0inFV_stack_10->SetBinContent(5,1.564724);
   hCCpi0inFV_stack_10->SetBinContent(6,3.195443);
   hCCpi0inFV_stack_10->SetBinContent(7,2.732646);
   hCCpi0inFV_stack_10->SetBinContent(8,2.426256);
   hCCpi0inFV_stack_10->SetBinContent(9,2.640747);
   hCCpi0inFV_stack_10->SetBinContent(10,3.90961);
   hCCpi0inFV_stack_10->SetBinContent(11,2.534629);
   hCCpi0inFV_stack_10->SetBinContent(12,2.22367);
   hCCpi0inFV_stack_10->SetBinContent(13,2.666974);
   hCCpi0inFV_stack_10->SetBinContent(14,3.57107);
   hCCpi0inFV_stack_10->SetBinContent(15,2.894096);
   hCCpi0inFV_stack_10->SetBinContent(16,3.3119);
   hCCpi0inFV_stack_10->SetBinContent(17,4.54987);
   hCCpi0inFV_stack_10->SetBinContent(18,5.421931);
   hCCpi0inFV_stack_10->SetBinContent(19,6.09445);
   hCCpi0inFV_stack_10->SetBinContent(20,5.642988);
   hCCpi0inFV_stack_10->SetBinContent(21,10.01792);
   hCCpi0inFV_stack_10->SetBinContent(22,8.222209);
   hCCpi0inFV_stack_10->SetBinContent(23,10.76098);
   hCCpi0inFV_stack_10->SetBinContent(24,11.33839);
   hCCpi0inFV_stack_10->SetBinContent(25,22.19156);
   hCCpi0inFV_stack_10->SetBinError(1,1.209378);
   hCCpi0inFV_stack_10->SetBinError(2,0.9670784);
   hCCpi0inFV_stack_10->SetBinError(3,0.5179089);
   hCCpi0inFV_stack_10->SetBinError(4,0.8993757);
   hCCpi0inFV_stack_10->SetBinError(5,0.6062906);
   hCCpi0inFV_stack_10->SetBinError(6,0.8375249);
   hCCpi0inFV_stack_10->SetBinError(7,0.8554385);
   hCCpi0inFV_stack_10->SetBinError(8,0.7599029);
   hCCpi0inFV_stack_10->SetBinError(9,0.784705);
   hCCpi0inFV_stack_10->SetBinError(10,1.050484);
   hCCpi0inFV_stack_10->SetBinError(11,0.7447001);
   hCCpi0inFV_stack_10->SetBinError(12,0.7676066);
   hCCpi0inFV_stack_10->SetBinError(13,0.7917468);
   hCCpi0inFV_stack_10->SetBinError(14,0.9206376);
   hCCpi0inFV_stack_10->SetBinError(15,0.785784);
   hCCpi0inFV_stack_10->SetBinError(16,0.9509849);
   hCCpi0inFV_stack_10->SetBinError(17,1.049358);
   hCCpi0inFV_stack_10->SetBinError(18,1.137356);
   hCCpi0inFV_stack_10->SetBinError(19,1.262857);
   hCCpi0inFV_stack_10->SetBinError(20,1.200166);
   hCCpi0inFV_stack_10->SetBinError(21,1.668329);
   hCCpi0inFV_stack_10->SetBinError(22,1.447148);
   hCCpi0inFV_stack_10->SetBinError(23,1.680881);
   hCCpi0inFV_stack_10->SetBinError(24,1.66753);
   hCCpi0inFV_stack_10->SetBinError(25,2.418287);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.168072);
   hNCinFV_stack_11->SetBinContent(2,0.4041919);
   hNCinFV_stack_11->SetBinContent(3,0.7708855);
   hNCinFV_stack_11->SetBinContent(4,0.4612781);
   hNCinFV_stack_11->SetBinContent(5,0.4062578);
   hNCinFV_stack_11->SetBinContent(6,0.3188656);
   hNCinFV_stack_11->SetBinContent(7,0.536893);
   hNCinFV_stack_11->SetBinContent(8,0.6480912);
   hNCinFV_stack_11->SetBinContent(9,0.5838439);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.5421356);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,0.3401776);
   hNCinFV_stack_11->SetBinContent(14,0.6863534);
   hNCinFV_stack_11->SetBinContent(15,0.4244257);
   hNCinFV_stack_11->SetBinContent(16,1.221843);
   hNCinFV_stack_11->SetBinContent(17,0.7973693);
   hNCinFV_stack_11->SetBinContent(18,1.440289);
   hNCinFV_stack_11->SetBinContent(19,1.085921);
   hNCinFV_stack_11->SetBinContent(20,1.198182);
   hNCinFV_stack_11->SetBinContent(21,0.779798);
   hNCinFV_stack_11->SetBinContent(22,2.902599);
   hNCinFV_stack_11->SetBinContent(23,4.034911);
   hNCinFV_stack_11->SetBinContent(24,6.541492);
   hNCinFV_stack_11->SetBinContent(25,7.75518);
   hNCinFV_stack_11->SetBinError(1,0.5065469);
   hNCinFV_stack_11->SetBinError(2,0.2859817);
   hNCinFV_stack_11->SetBinError(3,0.6079886);
   hNCinFV_stack_11->SetBinError(4,0.3610902);
   hNCinFV_stack_11->SetBinError(5,0.2874962);
   hNCinFV_stack_11->SetBinError(6,0.2315548);
   hNCinFV_stack_11->SetBinError(7,0.3929602);
   hNCinFV_stack_11->SetBinError(8,0.3311038);
   hNCinFV_stack_11->SetBinError(9,0.3957551);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.3189802);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,0.3401776);
   hNCinFV_stack_11->SetBinError(14,0.423806);
   hNCinFV_stack_11->SetBinError(15,0.301097);
   hNCinFV_stack_11->SetBinError(16,0.7689385);
   hNCinFV_stack_11->SetBinError(17,0.4339838);
   hNCinFV_stack_11->SetBinError(18,1.036321);
   hNCinFV_stack_11->SetBinError(19,0.4381424);
   hNCinFV_stack_11->SetBinError(20,0.5175858);
   hNCinFV_stack_11->SetBinError(21,0.3902419);
   hNCinFV_stack_11->SetBinError(22,0.8254194);
   hNCinFV_stack_11->SetBinError(23,1.145707);
   hNCinFV_stack_11->SetBinError(24,1.314146);
   hNCinFV_stack_11->SetBinError(25,1.546691);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,1.993368);
   hnumuCCinFV_stack_12->SetBinContent(2,1.870225);
   hnumuCCinFV_stack_12->SetBinContent(3,1.70606);
   hnumuCCinFV_stack_12->SetBinContent(4,1.893279);
   hnumuCCinFV_stack_12->SetBinContent(5,2.411426);
   hnumuCCinFV_stack_12->SetBinContent(6,1.465526);
   hnumuCCinFV_stack_12->SetBinContent(7,2.163946);
   hnumuCCinFV_stack_12->SetBinContent(8,2.309793);
   hnumuCCinFV_stack_12->SetBinContent(9,2.389911);
   hnumuCCinFV_stack_12->SetBinContent(10,1.781506);
   hnumuCCinFV_stack_12->SetBinContent(11,2.17626);
   hnumuCCinFV_stack_12->SetBinContent(12,2.827602);
   hnumuCCinFV_stack_12->SetBinContent(13,4.35574);
   hnumuCCinFV_stack_12->SetBinContent(14,3.672682);
   hnumuCCinFV_stack_12->SetBinContent(15,5.309904);
   hnumuCCinFV_stack_12->SetBinContent(16,3.443515);
   hnumuCCinFV_stack_12->SetBinContent(17,6.024158);
   hnumuCCinFV_stack_12->SetBinContent(18,5.609713);
   hnumuCCinFV_stack_12->SetBinContent(19,6.31759);
   hnumuCCinFV_stack_12->SetBinContent(20,5.675939);
   hnumuCCinFV_stack_12->SetBinContent(21,9.139981);
   hnumuCCinFV_stack_12->SetBinContent(22,8.358347);
   hnumuCCinFV_stack_12->SetBinContent(23,5.171713);
   hnumuCCinFV_stack_12->SetBinContent(24,12.70659);
   hnumuCCinFV_stack_12->SetBinContent(25,15.54391);
   hnumuCCinFV_stack_12->SetBinError(1,0.7228038);
   hnumuCCinFV_stack_12->SetBinError(2,0.6744417);
   hnumuCCinFV_stack_12->SetBinError(3,0.6062509);
   hnumuCCinFV_stack_12->SetBinError(4,0.7962296);
   hnumuCCinFV_stack_12->SetBinError(5,0.8303771);
   hnumuCCinFV_stack_12->SetBinError(6,0.6209405);
   hnumuCCinFV_stack_12->SetBinError(7,0.7516066);
   hnumuCCinFV_stack_12->SetBinError(8,0.834508);
   hnumuCCinFV_stack_12->SetBinError(9,0.8767601);
   hnumuCCinFV_stack_12->SetBinError(10,0.7493742);
   hnumuCCinFV_stack_12->SetBinError(11,0.735264);
   hnumuCCinFV_stack_12->SetBinError(12,1.344714);
   hnumuCCinFV_stack_12->SetBinError(13,1.107015);
   hnumuCCinFV_stack_12->SetBinError(14,1.086169);
   hnumuCCinFV_stack_12->SetBinError(15,1.227716);
   hnumuCCinFV_stack_12->SetBinError(16,0.9507562);
   hnumuCCinFV_stack_12->SetBinError(17,1.541632);
   hnumuCCinFV_stack_12->SetBinError(18,1.317483);
   hnumuCCinFV_stack_12->SetBinError(19,1.386435);
   hnumuCCinFV_stack_12->SetBinError(20,1.42675);
   hnumuCCinFV_stack_12->SetBinError(21,1.581706);
   hnumuCCinFV_stack_12->SetBinError(22,1.482175);
   hnumuCCinFV_stack_12->SetBinError(23,1.091156);
   hnumuCCinFV_stack_12->SetBinError(24,2.330787);
   hnumuCCinFV_stack_12->SetBinError(25,2.548016);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(4,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.5593877);
   hnueCCinFV_stack_13->SetBinContent(25,4.634607);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(4,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.1529246);
   hnueCCinFV_stack_13->SetBinError(19,0.2171002);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.4046898);
   hnueCCinFV_stack_13->SetBinError(25,2.09217);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__26->SetBinContent(1,28.04694);
   hmcerror__26->SetBinContent(2,13.53454);
   hmcerror__26->SetBinContent(3,11.79472);
   hmcerror__26->SetBinContent(4,16.15873);
   hmcerror__26->SetBinContent(5,11.00696);
   hmcerror__26->SetBinContent(6,9.993978);
   hmcerror__26->SetBinContent(7,14.60973);
   hmcerror__26->SetBinContent(8,11.85695);
   hmcerror__26->SetBinContent(9,13.33451);
   hmcerror__26->SetBinContent(10,16.34222);
   hmcerror__26->SetBinContent(11,13.94424);
   hmcerror__26->SetBinContent(12,17.61195);
   hmcerror__26->SetBinContent(13,15.39436);
   hmcerror__26->SetBinContent(14,16.99142);
   hmcerror__26->SetBinContent(15,18.04933);
   hmcerror__26->SetBinContent(16,18.03424);
   hmcerror__26->SetBinContent(17,25.98629);
   hmcerror__26->SetBinContent(18,27.60252);
   hmcerror__26->SetBinContent(19,27.30544);
   hmcerror__26->SetBinContent(20,29.90091);
   hmcerror__26->SetBinContent(21,43.09649);
   hmcerror__26->SetBinContent(22,45.65607);
   hmcerror__26->SetBinContent(23,47.88606);
   hmcerror__26->SetBinContent(24,65.22692);
   hmcerror__26->SetBinContent(25,101.2236);
   hmcerror__26->SetBinError(1,12.65365);
   hmcerror__26->SetBinError(2,11.59818);
   hmcerror__26->SetBinError(3,11.56987);
   hmcerror__26->SetBinError(4,9.063396);
   hmcerror__26->SetBinError(5,10.20838);
   hmcerror__26->SetBinError(6,7.272498);
   hmcerror__26->SetBinError(7,8.093649);
   hmcerror__26->SetBinError(8,7.121074);
   hmcerror__26->SetBinError(9,11.55177);
   hmcerror__26->SetBinError(10,7.823974);
   hmcerror__26->SetBinError(11,8.718921);
   hmcerror__26->SetBinError(12,9.637583);
   hmcerror__26->SetBinError(13,8.601791);
   hmcerror__26->SetBinError(14,9.871137);
   hmcerror__26->SetBinError(15,11.1188);
   hmcerror__26->SetBinError(16,8.849677);
   hmcerror__26->SetBinError(17,11.68152);
   hmcerror__26->SetBinError(18,14.30283);
   hmcerror__26->SetBinError(19,14.59618);
   hmcerror__26->SetBinError(20,22.13667);
   hmcerror__26->SetBinError(21,18.06757);
   hmcerror__26->SetBinError(22,22.98334);
   hmcerror__26->SetBinError(23,22.45463);
   hmcerror__26->SetBinError(24,24.84721);
   hmcerror__26->SetBinError(25,38.79519);
   hmcerror__26->SetBinError(26,0.3895343);
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
   
   Double_t _fx3033[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3033[25] = {
   25,
   20,
   6,
   15,
   11,
   12,
   11,
   13,
   11,
   9,
   13,
   20,
   13,
   22,
   17,
   19,
   18,
   19,
   23,
   29,
   26,
   35,
   44,
   63,
   91};
   Double_t _felx3033[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3033[25] = {
   5.1474,
   4.6266,
   2.67925,
   4.0385,
   3.4975,
   3.64022,
   3.4975,
   3.77763,
   3.4975,
   3.19354,
   3.77763,
   4.6266,
   3.77763,
   4.8417,
   4.2835,
   4.5151,
   4.4008,
   4.5151,
   4.9457,
   5.5285,
   5.2453,
   6.0548,
   6.7671,
   8.0648,
   9.6617};
   Double_t _fehx3033[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3033[25] = {
   4.9374,
   4.4133,
   2.41858,
   3.8197,
   3.27,
   3.4155,
   3.27,
   3.5552,
   3.27,
   2.9582,
   3.5552,
   4.4133,
   3.5552,
   4.6299,
   4.0673,
   4.3011,
   4.1858,
   4.3011,
   4.7346,
   5.3201,
   5.0358,
   5.8483,
   6.5623,
   7.862,
   9.46};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(2.988675);
   Graph_Graph3033->SetMaximum(110.1739);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3034[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3034[25] = {
   0.4511596,
   0.856932,
   0.9809366,
   0.5608979,
   0.9274474,
   0.727688,
   0.5539904,
   0.6005823,
   0.8663062,
   0.4787584,
   0.6252705,
   0.5472185,
   0.5587624,
   0.5809481,
   0.616023,
   0.4907154,
   0.4495264,
   0.5181713,
   0.5345522,
   0.7403343,
   0.4192352,
   0.5034015,
   0.4689179,
   0.380935,
   0.3832622};
   Double_t _fehx3034[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3034[25] = {
   0.4511596,
   0.856932,
   0.9809366,
   0.5608979,
   0.9274474,
   0.727688,
   0.5539904,
   0.6005823,
   0.8663062,
   0.4787584,
   0.6252705,
   0.5472185,
   0.5587624,
   0.5809481,
   0.616023,
   0.4907154,
   0.4495264,
   0.5181713,
   0.5345522,
   0.7403343,
   0.4192352,
   0.5034015,
   0.4689179,
   0.380935,
   0.3832622};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-1.2,1.2);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3035[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3035[25] = {
   0.2328111,
   0.3176257,
   0.2813017,
   0.2735315,
   0.3168416,
   0.3401929,
   0.2651412,
   0.286983,
   0.3098447,
   0.2602434,
   0.315288,
   0.2837735,
   0.3308357,
   0.3005779,
   0.3431213,
   0.2936191,
   0.2707657,
   0.2951456,
   0.3248274,
   0.2754185,
   0.2684013,
   0.2723897,
   0.2764681,
   0.2615085,
   0.206814};
   Double_t _fehx3035[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3035[25] = {
   0.2328111,
   0.3176257,
   0.2813017,
   0.2735315,
   0.3168416,
   0.3401929,
   0.2651412,
   0.286983,
   0.3098447,
   0.2602434,
   0.315288,
   0.2837735,
   0.3308357,
   0.3005779,
   0.3431213,
   0.2936191,
   0.2707657,
   0.2951456,
   0.3248274,
   0.2754185,
   0.2684013,
   0.2723897,
   0.2764681,
   0.2615085,
   0.206814};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-1.2,1.2);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3036[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3036[25] = {
   0.8913627,
   1.4777,
   0.5087022,
   0.928291,
   0.9993675,
   1.200723,
   0.7529229,
   1.096403,
   0.8249272,
   0.5507209,
   0.9322847,
   1.135593,
   0.844465,
   1.294771,
   0.9418631,
   1.053552,
   0.6926729,
   0.6883429,
   0.8423229,
   0.9698702,
   0.6032974,
   0.7666012,
   0.9188477,
   0.9658589,
   0.8989995};
   Double_t _felx3036[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3036[25] = {
   0.183528,
   0.3418364,
   0.2271567,
   0.2499269,
   0.3177534,
   0.3642414,
   0.2393953,
   0.3186005,
   0.2622893,
   0.1954166,
   0.2709098,
   0.2626967,
   0.2453905,
   0.2849496,
   0.2373218,
   0.2503627,
   0.1693508,
   0.1635756,
   0.1811251,
   0.184894,
   0.1217106,
   0.1326176,
   0.1413167,
   0.1236422,
   0.09544905};
   Double_t _fehx3036[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3036[25] = {
   0.1760406,
   0.3260767,
   0.2050562,
   0.2363862,
   0.2970847,
   0.3417558,
   0.2238235,
   0.299841,
   0.2452283,
   0.1810158,
   0.2549584,
   0.2505856,
   0.2309417,
   0.2724845,
   0.2253435,
   0.2384964,
   0.1610772,
   0.1558227,
   0.173394,
   0.1779244,
   0.1168494,
   0.1280947,
   0.1370399,
   0.1205331,
   0.09345644};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.1293223);
   Graph_Graph3036->SetMaximum(1.956);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
