#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Jan 16 04:37:09 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-1.307692,-26.01019,1.25641,2876.179);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(1,191.9655);
   hmc__1->SetBinContent(2,155.6904);
   hmc__1->SetBinContent(3,145.1873);
   hmc__1->SetBinContent(4,131.2641);
   hmc__1->SetBinContent(5,133.2048);
   hmc__1->SetBinContent(6,131.7831);
   hmc__1->SetBinContent(7,124.7733);
   hmc__1->SetBinContent(8,140.6459);
   hmc__1->SetBinContent(9,154.8467);
   hmc__1->SetBinContent(10,180.0742);
   hmc__1->SetBinContent(11,192.9125);
   hmc__1->SetBinContent(12,215.3697);
   hmc__1->SetBinContent(13,240.6005);
   hmc__1->SetBinContent(14,270.454);
   hmc__1->SetBinContent(15,323.8398);
   hmc__1->SetBinContent(16,405.8611);
   hmc__1->SetBinContent(17,520.1714);
   hmc__1->SetBinContent(18,626.5382);
   hmc__1->SetBinContent(19,834.78);
   hmc__1->SetBinContent(20,1300.51);
   hmc__1->SetBinError(1,47.55305);
   hmc__1->SetBinError(2,45.86362);
   hmc__1->SetBinError(3,38.58377);
   hmc__1->SetBinError(4,40.44674);
   hmc__1->SetBinError(5,36.97925);
   hmc__1->SetBinError(6,33.24759);
   hmc__1->SetBinError(7,38.42235);
   hmc__1->SetBinError(8,39.72907);
   hmc__1->SetBinError(9,46.28767);
   hmc__1->SetBinError(10,48.96584);
   hmc__1->SetBinError(11,52.42086);
   hmc__1->SetBinError(12,60.86673);
   hmc__1->SetBinError(13,70.28959);
   hmc__1->SetBinError(14,78.80591);
   hmc__1->SetBinError(15,95.079);
   hmc__1->SetBinError(16,119.2804);
   hmc__1->SetBinError(17,142.5449);
   hmc__1->SetBinError(18,158.8041);
   hmc__1->SetBinError(19,189.6969);
   hmc__1->SetBinError(20,287.889);
   hmc__1->SetBinError(21,0.4673072);
   hmc__1->SetMinimum(-26.01019);
   hmc__1->SetMaximum(2731.07);
   hmc__1->SetEntries(6341.03);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-1.00941e-09);
   hs1_stack_1->SetMaximum(1365.535);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,9.415037);
   hbadmatch_stack_1->SetBinContent(2,4.656099);
   hbadmatch_stack_1->SetBinContent(3,6.23326);
   hbadmatch_stack_1->SetBinContent(4,3.062628);
   hbadmatch_stack_1->SetBinContent(5,4.596817);
   hbadmatch_stack_1->SetBinContent(6,6.092928);
   hbadmatch_stack_1->SetBinContent(7,2.622939);
   hbadmatch_stack_1->SetBinContent(8,5.144178);
   hbadmatch_stack_1->SetBinContent(9,7.446336);
   hbadmatch_stack_1->SetBinContent(10,5.079597);
   hbadmatch_stack_1->SetBinContent(11,11.42719);
   hbadmatch_stack_1->SetBinContent(12,13.0935);
   hbadmatch_stack_1->SetBinContent(13,6.549406);
   hbadmatch_stack_1->SetBinContent(14,8.786713);
   hbadmatch_stack_1->SetBinContent(15,7.199975);
   hbadmatch_stack_1->SetBinContent(16,10.3407);
   hbadmatch_stack_1->SetBinContent(17,14.46555);
   hbadmatch_stack_1->SetBinContent(18,15.77435);
   hbadmatch_stack_1->SetBinContent(19,13.02241);
   hbadmatch_stack_1->SetBinContent(20,27.44363);
   hbadmatch_stack_1->SetBinError(1,1.863331);
   hbadmatch_stack_1->SetBinError(2,2.218935);
   hbadmatch_stack_1->SetBinError(3,1.462763);
   hbadmatch_stack_1->SetBinError(4,0.8498601);
   hbadmatch_stack_1->SetBinError(5,1.338383);
   hbadmatch_stack_1->SetBinError(6,1.539389);
   hbadmatch_stack_1->SetBinError(7,0.84564);
   hbadmatch_stack_1->SetBinError(8,1.40758);
   hbadmatch_stack_1->SetBinError(9,1.734517);
   hbadmatch_stack_1->SetBinError(10,1.312067);
   hbadmatch_stack_1->SetBinError(11,2.709027);
   hbadmatch_stack_1->SetBinError(12,3.098831);
   hbadmatch_stack_1->SetBinError(13,1.561898);
   hbadmatch_stack_1->SetBinError(14,1.814663);
   hbadmatch_stack_1->SetBinError(15,1.673955);
   hbadmatch_stack_1->SetBinError(16,2.028728);
   hbadmatch_stack_1->SetBinError(17,2.40843);
   hbadmatch_stack_1->SetBinError(18,2.494193);
   hbadmatch_stack_1->SetBinError(19,2.152053);
   hbadmatch_stack_1->SetBinError(20,3.163289);
   hbadmatch_stack_1->SetEntries(542);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,26.34579);
   houtFV_stack_4->SetBinContent(2,21.97353);
   houtFV_stack_4->SetBinContent(3,17.96301);
   houtFV_stack_4->SetBinContent(4,18.42533);
   houtFV_stack_4->SetBinContent(5,16.90154);
   houtFV_stack_4->SetBinContent(6,16.21609);
   houtFV_stack_4->SetBinContent(7,14.39737);
   houtFV_stack_4->SetBinContent(8,14.83204);
   houtFV_stack_4->SetBinContent(9,16.79951);
   houtFV_stack_4->SetBinContent(10,18.95307);
   houtFV_stack_4->SetBinContent(11,19.29337);
   houtFV_stack_4->SetBinContent(12,22.12331);
   houtFV_stack_4->SetBinContent(13,23.03787);
   houtFV_stack_4->SetBinContent(14,30.23343);
   houtFV_stack_4->SetBinContent(15,39.53376);
   houtFV_stack_4->SetBinContent(16,46.67501);
   houtFV_stack_4->SetBinContent(17,58.36482);
   houtFV_stack_4->SetBinContent(18,75.61464);
   houtFV_stack_4->SetBinContent(19,87.7283);
   houtFV_stack_4->SetBinContent(20,106.3047);
   houtFV_stack_4->SetBinError(1,3.076711);
   houtFV_stack_4->SetBinError(2,2.705832);
   houtFV_stack_4->SetBinError(3,2.400917);
   houtFV_stack_4->SetBinError(4,2.465227);
   houtFV_stack_4->SetBinError(5,2.419397);
   houtFV_stack_4->SetBinError(6,2.778438);
   houtFV_stack_4->SetBinError(7,2.23269);
   houtFV_stack_4->SetBinError(8,2.259143);
   houtFV_stack_4->SetBinError(9,2.344036);
   houtFV_stack_4->SetBinError(10,2.506888);
   houtFV_stack_4->SetBinError(11,2.606286);
   houtFV_stack_4->SetBinError(12,2.746425);
   houtFV_stack_4->SetBinError(13,2.836256);
   houtFV_stack_4->SetBinError(14,3.221426);
   houtFV_stack_4->SetBinError(15,3.640105);
   houtFV_stack_4->SetBinError(16,4.082249);
   houtFV_stack_4->SetBinError(17,4.43153);
   houtFV_stack_4->SetBinError(18,5.210729);
   houtFV_stack_4->SetBinError(19,5.51601);
   houtFV_stack_4->SetBinError(20,6.133342);
   houtFV_stack_4->SetEntries(2242);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.365309);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8765788);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.430334);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2648209);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5210459);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1986157);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5210459);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3224303);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2648209);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4548407);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7110658);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9427841);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.967684);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.349398);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.120535);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,15.16794);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,63.88016);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7911552);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3786241);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1193532);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.09362833);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2727958);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.08108451);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2727958);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2604666);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.09362833);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2687489);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3713183);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3815072);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6388684);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7148851);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.045587);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.489022);
   hNCpi0inFVcoh_stack_5->SetBinError(20,3.071206);
   hNCpi0inFVcoh_stack_5->SetEntries(1663);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.190413);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7196617);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5872512);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2648209);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5296418);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6534564);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6203538);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5872512);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.430334);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.33142);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.108691);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.770349);
   hNCpi0inFVqe_stack_6->SetBinContent(18,4.060464);
   hNCpi0inFVqe_stack_6->SetBinContent(19,3.969752);
   hNCpi0inFVqe_stack_6->SetBinContent(20,5.574589);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5177683);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2845914);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2767835);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.09362833);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2807146);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.278756);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2767835);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1193532);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4643083);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.5963648);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4158633);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.8055669);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.7673107);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.8696143);
   hNCpi0inFVqe_stack_6->SetEntries(480);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,67.41958);
   hNCpi0inFVres_stack_7->SetBinContent(2,58.92721);
   hNCpi0inFVres_stack_7->SetBinContent(3,56.88216);
   hNCpi0inFVres_stack_7->SetBinContent(4,57.1543);
   hNCpi0inFVres_stack_7->SetBinContent(5,56.64313);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.54638);
   hNCpi0inFVres_stack_7->SetBinContent(7,57.60567);
   hNCpi0inFVres_stack_7->SetBinContent(8,60.71603);
   hNCpi0inFVres_stack_7->SetBinContent(9,67.63667);
   hNCpi0inFVres_stack_7->SetBinContent(10,80.67525);
   hNCpi0inFVres_stack_7->SetBinContent(11,85.24176);
   hNCpi0inFVres_stack_7->SetBinContent(12,97.19144);
   hNCpi0inFVres_stack_7->SetBinContent(13,104.9534);
   hNCpi0inFVres_stack_7->SetBinContent(14,126.6422);
   hNCpi0inFVres_stack_7->SetBinContent(15,142.3977);
   hNCpi0inFVres_stack_7->SetBinContent(16,185.3939);
   hNCpi0inFVres_stack_7->SetBinContent(17,228.0574);
   hNCpi0inFVres_stack_7->SetBinContent(18,273.2521);
   hNCpi0inFVres_stack_7->SetBinContent(19,349.91);
   hNCpi0inFVres_stack_7->SetBinContent(20,454.1811);
   hNCpi0inFVres_stack_7->SetBinError(1,3.163357);
   hNCpi0inFVres_stack_7->SetBinError(2,2.919785);
   hNCpi0inFVres_stack_7->SetBinError(3,2.937509);
   hNCpi0inFVres_stack_7->SetBinError(4,2.968076);
   hNCpi0inFVres_stack_7->SetBinError(5,2.906808);
   hNCpi0inFVres_stack_7->SetBinError(6,2.826478);
   hNCpi0inFVres_stack_7->SetBinError(7,2.832674);
   hNCpi0inFVres_stack_7->SetBinError(8,2.890619);
   hNCpi0inFVres_stack_7->SetBinError(9,3.109822);
   hNCpi0inFVres_stack_7->SetBinError(10,3.531771);
   hNCpi0inFVres_stack_7->SetBinError(11,3.565398);
   hNCpi0inFVres_stack_7->SetBinError(12,3.827689);
   hNCpi0inFVres_stack_7->SetBinError(13,3.875885);
   hNCpi0inFVres_stack_7->SetBinError(14,4.358796);
   hNCpi0inFVres_stack_7->SetBinError(15,4.444022);
   hNCpi0inFVres_stack_7->SetBinError(16,5.286324);
   hNCpi0inFVres_stack_7->SetBinError(17,5.826057);
   hNCpi0inFVres_stack_7->SetBinError(18,6.354076);
   hNCpi0inFVres_stack_7->SetBinError(19,7.244206);
   hNCpi0inFVres_stack_7->SetBinError(20,8.206384);
   hNCpi0inFVres_stack_7->SetEntries(44527);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.88593);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.08258);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.14019);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.83406);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.477348);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.559464);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.932583);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.53653);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.2971);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.70244);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.39641);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.65471);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.40904);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.65913);
   hNCpi0inFVdis_stack_8->SetBinContent(15,22.69431);
   hNCpi0inFVdis_stack_8->SetBinContent(16,29.3931);
   hNCpi0inFVdis_stack_8->SetBinContent(17,41.76451);
   hNCpi0inFVdis_stack_8->SetBinContent(18,54.84827);
   hNCpi0inFVdis_stack_8->SetBinContent(19,73.09604);
   hNCpi0inFVdis_stack_8->SetBinContent(20,126.223);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.523873);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.142647);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.168212);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.271364);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9662063);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.024994);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.100184);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.345782);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.194606);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.4217);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.195981);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.294849);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.605372);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.756415);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.807402);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.070947);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.5098);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.866812);
   hNCpi0inFVdis_stack_8->SetBinError(19,3.210774);
   hNCpi0inFVdis_stack_8->SetBinError(20,4.297755);
   hNCpi0inFVdis_stack_8->SetEntries(8714);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.09930784);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.3555329);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.3886355);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.5210459);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.05733541);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.2625617);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.2604666);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2646402);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2727958);
   hNCpi0inFVmec_stack_9->SetEntries(38);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,29.13482);
   hCCpi0inFV_stack_10->SetBinContent(2,28.05713);
   hCCpi0inFV_stack_10->SetBinContent(3,24.88333);
   hCCpi0inFV_stack_10->SetBinContent(4,16.56675);
   hCCpi0inFV_stack_10->SetBinContent(5,19.87239);
   hCCpi0inFV_stack_10->SetBinContent(6,21.04401);
   hCCpi0inFV_stack_10->SetBinContent(7,17.85317);
   hCCpi0inFV_stack_10->SetBinContent(8,21.12243);
   hCCpi0inFV_stack_10->SetBinContent(9,18.85592);
   hCCpi0inFV_stack_10->SetBinContent(10,26.29641);
   hCCpi0inFV_stack_10->SetBinContent(11,29.55838);
   hCCpi0inFV_stack_10->SetBinContent(12,30.85929);
   hCCpi0inFV_stack_10->SetBinContent(13,40.54699);
   hCCpi0inFV_stack_10->SetBinContent(14,37.84502);
   hCCpi0inFV_stack_10->SetBinContent(15,48.80405);
   hCCpi0inFV_stack_10->SetBinContent(16,57.40524);
   hCCpi0inFV_stack_10->SetBinContent(17,90.61029);
   hCCpi0inFV_stack_10->SetBinContent(18,99.30672);
   hCCpi0inFV_stack_10->SetBinContent(19,148.5264);
   hCCpi0inFV_stack_10->SetBinContent(20,239.4844);
   hCCpi0inFV_stack_10->SetBinError(1,3.152441);
   hCCpi0inFV_stack_10->SetBinError(2,3.14438);
   hCCpi0inFV_stack_10->SetBinError(3,2.905482);
   hCCpi0inFV_stack_10->SetBinError(4,2.325961);
   hCCpi0inFV_stack_10->SetBinError(5,2.468312);
   hCCpi0inFV_stack_10->SetBinError(6,2.711272);
   hCCpi0inFV_stack_10->SetBinError(7,2.445384);
   hCCpi0inFV_stack_10->SetBinError(8,2.725278);
   hCCpi0inFV_stack_10->SetBinError(9,2.435528);
   hCCpi0inFV_stack_10->SetBinError(10,3.000509);
   hCCpi0inFV_stack_10->SetBinError(11,3.124519);
   hCCpi0inFV_stack_10->SetBinError(12,3.252613);
   hCCpi0inFV_stack_10->SetBinError(13,3.770241);
   hCCpi0inFV_stack_10->SetBinError(14,3.634589);
   hCCpi0inFV_stack_10->SetBinError(15,4.166077);
   hCCpi0inFV_stack_10->SetBinError(16,4.422039);
   hCCpi0inFV_stack_10->SetBinError(17,5.65584);
   hCCpi0inFV_stack_10->SetBinError(18,5.828539);
   hCCpi0inFV_stack_10->SetBinError(19,7.191071);
   hCCpi0inFV_stack_10->SetBinError(20,9.144409);
   hCCpi0inFV_stack_10->SetEntries(3371);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,16.89557);
   hNCinFV_stack_11->SetBinContent(2,13.24473);
   hNCinFV_stack_11->SetBinContent(3,12.14039);
   hNCinFV_stack_11->SetBinContent(4,9.318733);
   hNCinFV_stack_11->SetBinContent(5,13.45725);
   hNCinFV_stack_11->SetBinContent(6,9.16886);
   hNCinFV_stack_11->SetBinContent(7,9.401159);
   hNCinFV_stack_11->SetBinContent(8,5.030344);
   hNCinFV_stack_11->SetBinContent(9,11.95246);
   hNCinFV_stack_11->SetBinContent(10,10.95252);
   hNCinFV_stack_11->SetBinContent(11,9.085336);
   hNCinFV_stack_11->SetBinContent(12,14.81587);
   hNCinFV_stack_11->SetBinContent(13,15.07015);
   hNCinFV_stack_11->SetBinContent(14,14.58248);
   hNCinFV_stack_11->SetBinContent(15,23.88033);
   hNCinFV_stack_11->SetBinContent(16,28.31488);
   hNCinFV_stack_11->SetBinContent(17,30.73609);
   hNCinFV_stack_11->SetBinContent(18,43.4305);
   hNCinFV_stack_11->SetBinContent(19,72.7625);
   hNCinFV_stack_11->SetBinContent(20,132.6257);
   hNCinFV_stack_11->SetBinError(1,2.376793);
   hNCinFV_stack_11->SetBinError(2,2.101901);
   hNCinFV_stack_11->SetBinError(3,1.968742);
   hNCinFV_stack_11->SetBinError(4,1.819929);
   hNCinFV_stack_11->SetBinError(5,2.135967);
   hNCinFV_stack_11->SetBinError(6,1.702382);
   hNCinFV_stack_11->SetBinError(7,1.796118);
   hNCinFV_stack_11->SetBinError(8,1.283702);
   hNCinFV_stack_11->SetBinError(9,2.164477);
   hNCinFV_stack_11->SetBinError(10,1.921838);
   hNCinFV_stack_11->SetBinError(11,1.804901);
   hNCinFV_stack_11->SetBinError(12,2.25144);
   hNCinFV_stack_11->SetBinError(13,2.243561);
   hNCinFV_stack_11->SetBinError(14,2.23931);
   hNCinFV_stack_11->SetBinError(15,2.901127);
   hNCinFV_stack_11->SetBinError(16,3.074338);
   hNCinFV_stack_11->SetBinError(17,3.268028);
   hNCinFV_stack_11->SetBinError(18,3.917731);
   hNCinFV_stack_11->SetBinError(19,4.965733);
   hNCinFV_stack_11->SetBinError(20,6.840448);
   hNCinFV_stack_11->SetEntries(1594);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,21.21786);
   hnumuCCinFV_stack_12->SetBinContent(2,15.4032);
   hnumuCCinFV_stack_12->SetBinContent(3,14.95954);
   hnumuCCinFV_stack_12->SetBinContent(4,13.32193);
   hnumuCCinFV_stack_12->SetBinContent(5,12.27644);
   hnumuCCinFV_stack_12->SetBinContent(6,12.88932);
   hnumuCCinFV_stack_12->SetBinContent(7,12.16565);
   hnumuCCinFV_stack_12->SetBinContent(8,21.05673);
   hnumuCCinFV_stack_12->SetBinContent(9,19.91545);
   hnumuCCinFV_stack_12->SetBinContent(10,24.53835);
   hnumuCCinFV_stack_12->SetBinContent(11,26.9901);
   hnumuCCinFV_stack_12->SetBinContent(12,23.15847);
   hnumuCCinFV_stack_12->SetBinContent(13,31.53653);
   hnumuCCinFV_stack_12->SetBinContent(14,27.50216);
   hnumuCCinFV_stack_12->SetBinContent(15,34.14933);
   hnumuCCinFV_stack_12->SetBinContent(16,42.60429);
   hnumuCCinFV_stack_12->SetBinContent(17,48.77398);
   hnumuCCinFV_stack_12->SetBinContent(18,48.41938);
   hnumuCCinFV_stack_12->SetBinContent(19,66.86209);
   hnumuCCinFV_stack_12->SetBinContent(20,118.9433);
   hnumuCCinFV_stack_12->SetBinError(1,2.719304);
   hnumuCCinFV_stack_12->SetBinError(2,2.464827);
   hnumuCCinFV_stack_12->SetBinError(3,2.618393);
   hnumuCCinFV_stack_12->SetBinError(4,2.213178);
   hnumuCCinFV_stack_12->SetBinError(5,2.125232);
   hnumuCCinFV_stack_12->SetBinError(6,2.354822);
   hnumuCCinFV_stack_12->SetBinError(7,2.363633);
   hnumuCCinFV_stack_12->SetBinError(8,3.556964);
   hnumuCCinFV_stack_12->SetBinError(9,2.804102);
   hnumuCCinFV_stack_12->SetBinError(10,3.458157);
   hnumuCCinFV_stack_12->SetBinError(11,3.492851);
   hnumuCCinFV_stack_12->SetBinError(12,3.050671);
   hnumuCCinFV_stack_12->SetBinError(13,3.725559);
   hnumuCCinFV_stack_12->SetBinError(14,3.253583);
   hnumuCCinFV_stack_12->SetBinError(15,3.86409);
   hnumuCCinFV_stack_12->SetBinError(16,5.332972);
   hnumuCCinFV_stack_12->SetBinError(17,4.605057);
   hnumuCCinFV_stack_12->SetBinError(18,4.376106);
   hnumuCCinFV_stack_12->SetBinError(19,5.704567);
   hnumuCCinFV_stack_12->SetBinError(20,7.094062);
   hnumuCCinFV_stack_12->SetEntries(1922);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,2.062123);
   hnueCCinFV_stack_13->SetBinContent(2,1.716572);
   hnueCCinFV_stack_13->SetBinContent(3,0.9678156);
   hnueCCinFV_stack_13->SetBinContent(4,2.017587);
   hnueCCinFV_stack_13->SetBinContent(5,0.8053632);
   hnueCCinFV_stack_13->SetBinContent(6,1.290163);
   hnueCCinFV_stack_13->SetBinContent(7,1.00891);
   hnueCCinFV_stack_13->SetBinContent(9,0.9919206);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.5879829);
   hnueCCinFV_stack_13->SetBinContent(13,0.3557058);
   hnueCCinFV_stack_13->SetBinContent(14,2.706033);
   hnueCCinFV_stack_13->SetBinContent(15,2.839889);
   hnueCCinFV_stack_13->SetBinContent(16,1.335174);
   hnueCCinFV_stack_13->SetBinContent(17,2.212795);
   hnueCCinFV_stack_13->SetBinContent(18,4.644978);
   hnueCCinFV_stack_13->SetBinContent(19,3.345887);
   hnueCCinFV_stack_13->SetBinContent(20,25.328);
   hnueCCinFV_stack_13->SetBinError(1,0.9395239);
   hnueCCinFV_stack_13->SetBinError(2,0.6510863);
   hnueCCinFV_stack_13->SetBinError(3,0.5608966);
   hnueCCinFV_stack_13->SetBinError(4,1.384084);
   hnueCCinFV_stack_13->SetBinError(5,0.5724482);
   hnueCCinFV_stack_13->SetBinError(6,0.7723624);
   hnueCCinFV_stack_13->SetBinError(7,0.7680269);
   hnueCCinFV_stack_13->SetBinError(9,0.5890672);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.4157906);
   hnueCCinFV_stack_13->SetBinError(13,0.3557058);
   hnueCCinFV_stack_13->SetBinError(14,1.059069);
   hnueCCinFV_stack_13->SetBinError(15,1.777976);
   hnueCCinFV_stack_13->SetBinError(16,0.8135793);
   hnueCCinFV_stack_13->SetBinError(17,0.9654465);
   hnueCCinFV_stack_13->SetBinError(18,1.479731);
   hnueCCinFV_stack_13->SetBinError(19,1.001875);
   hnueCCinFV_stack_13->SetBinError(20,3.943817);
   hnueCCinFV_stack_13->SetEntries(147);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(1,191.9655);
   hmcerror__2->SetBinContent(2,155.6904);
   hmcerror__2->SetBinContent(3,145.1873);
   hmcerror__2->SetBinContent(4,131.2641);
   hmcerror__2->SetBinContent(5,133.2048);
   hmcerror__2->SetBinContent(6,131.7831);
   hmcerror__2->SetBinContent(7,124.7733);
   hmcerror__2->SetBinContent(8,140.6459);
   hmcerror__2->SetBinContent(9,154.8467);
   hmcerror__2->SetBinContent(10,180.0742);
   hmcerror__2->SetBinContent(11,192.9125);
   hmcerror__2->SetBinContent(12,215.3697);
   hmcerror__2->SetBinContent(13,240.6005);
   hmcerror__2->SetBinContent(14,270.454);
   hmcerror__2->SetBinContent(15,323.8398);
   hmcerror__2->SetBinContent(16,405.8611);
   hmcerror__2->SetBinContent(17,520.1714);
   hmcerror__2->SetBinContent(18,626.5382);
   hmcerror__2->SetBinContent(19,834.78);
   hmcerror__2->SetBinContent(20,1300.51);
   hmcerror__2->SetBinError(1,47.55305);
   hmcerror__2->SetBinError(2,45.86362);
   hmcerror__2->SetBinError(3,38.58377);
   hmcerror__2->SetBinError(4,40.44674);
   hmcerror__2->SetBinError(5,36.97925);
   hmcerror__2->SetBinError(6,33.24759);
   hmcerror__2->SetBinError(7,38.42235);
   hmcerror__2->SetBinError(8,39.72907);
   hmcerror__2->SetBinError(9,46.28767);
   hmcerror__2->SetBinError(10,48.96584);
   hmcerror__2->SetBinError(11,52.42086);
   hmcerror__2->SetBinError(12,60.86673);
   hmcerror__2->SetBinError(13,70.28959);
   hmcerror__2->SetBinError(14,78.80591);
   hmcerror__2->SetBinError(15,95.079);
   hmcerror__2->SetBinError(16,119.2804);
   hmcerror__2->SetBinError(17,142.5449);
   hmcerror__2->SetBinError(18,158.8041);
   hmcerror__2->SetBinError(19,189.6969);
   hmcerror__2->SetBinError(20,287.889);
   hmcerror__2->SetBinError(21,0.4673072);
   hmcerror__2->SetEntries(6341.03);

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
   
   Double_t _fx3001[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3001[20] = {
   162,
   153,
   139,
   106,
   110,
   128,
   117,
   115,
   143,
   137,
   162,
   190,
   208,
   267,
   293,
   354,
   447,
   640,
   820,
   1270};
   Double_t _felx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3001[20] = {
   12.72792,
   12.36932,
   11.78983,
   10.29563,
   10.48809,
   11.31371,
   10.81665,
   10.72381,
   11.95826,
   11.7047,
   12.72792,
   13.78405,
   14.42221,
   16.34013,
   17.11724,
   18.81489,
   21.14237,
   25.29822,
   28.63564,
   35.63706};
   Double_t _fehx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3001[20] = {
   12.72792,
   12.36932,
   11.78983,
   10.29563,
   10.48809,
   11.31371,
   10.81665,
   10.72381,
   11.95826,
   11.7047,
   12.72792,
   13.78405,
   14.42221,
   16.34013,
   17.11724,
   18.81489,
   21.14237,
   25.29822,
   28.63564,
   35.63706};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(86.13393);
   Graph_Graph3001->SetMaximum(1426.63);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.20","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5961.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 182.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 691.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  101.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  27.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2667.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  513.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1046.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 496.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 636.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 54.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3002[20] = {
   0.2477166,
   0.2945822,
   0.2657517,
   0.3081326,
   0.277612,
   0.2522902,
   0.3079372,
   0.2824759,
   0.2989257,
   0.2719203,
   0.2717339,
   0.2826151,
   0.2921424,
   0.2913837,
   0.2935989,
   0.2938946,
   0.2740346,
   0.2534627,
   0.2272417,
   0.2213663};
   Double_t _fehx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3002[20] = {
   0.2477166,
   0.2945822,
   0.2657517,
   0.3081326,
   0.277612,
   0.2522902,
   0.3079372,
   0.2824759,
   0.2989257,
   0.2719203,
   0.2717339,
   0.2826151,
   0.2921424,
   0.2913837,
   0.2935989,
   0.2938946,
   0.2740346,
   0.2534627,
   0.2272417,
   0.2213663};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3003[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3003[20] = {
   0.2192553,
   0.2129897,
   0.2183906,
   0.2320244,
   0.2305253,
   0.2123315,
   0.2288028,
   0.2156375,
   0.2290633,
   0.2357767,
   0.2366733,
   0.2455442,
   0.2610088,
   0.2697234,
   0.2791393,
   0.2770606,
   0.2616673,
   0.239676,
   0.2151449,
   0.2089944};
   Double_t _fehx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3003[20] = {
   0.2192553,
   0.2129897,
   0.2183906,
   0.2320244,
   0.2305253,
   0.2123315,
   0.2288028,
   0.2156375,
   0.2290633,
   0.2357767,
   0.2366733,
   0.2455442,
   0.2610088,
   0.2697234,
   0.2791393,
   0.2770606,
   0.2616673,
   0.239676,
   0.2151449,
   0.2089944};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
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
   
   Double_t _fx3004[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3004[20] = {
   0.8439015,
   0.9827196,
   0.9573841,
   0.8075325,
   0.8257962,
   0.9712929,
   0.9377005,
   0.8176564,
   0.9234938,
   0.7607974,
   0.839759,
   0.8822038,
   0.8645037,
   0.9872287,
   0.9047685,
   0.8722196,
   0.8593322,
   1.021486,
   0.9822947,
   0.9765403};
   Double_t _felx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3004[20] = {
   0.06630316,
   0.07944817,
   0.08120426,
   0.07843449,
   0.07873658,
   0.08585097,
   0.08669044,
   0.07624685,
   0.07722643,
   0.06499931,
   0.0659777,
   0.06400179,
   0.05994255,
   0.06041742,
   0.05285714,
   0.04635795,
   0.04064502,
   0.04037778,
   0.03430322,
   0.02740238};
   Double_t _fehx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3004[20] = {
   0.06630316,
   0.07944817,
   0.08120426,
   0.07843449,
   0.07873658,
   0.08585097,
   0.08669044,
   0.07624685,
   0.07722643,
   0.06499931,
   0.0659777,
   0.06400179,
   0.05994255,
   0.06041742,
   0.05285714,
   0.04635795,
   0.04064502,
   0.04037778,
   0.03430322,
   0.02740238};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.6591611);
   Graph_Graph3004->SetMaximum(1.098805);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_6_pi0_costheta_all",20,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
