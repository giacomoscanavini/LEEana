#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Oct 24 15:37:56 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-276.9231,-4.38,2030.769,484.3358);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__22->SetBinContent(0,0.3934307);
   hmc__22->SetBinContent(1,4.237212);
   hmc__22->SetBinContent(2,27.62597);
   hmc__22->SetBinContent(3,87.72066);
   hmc__22->SetBinContent(4,147.33);
   hmc__22->SetBinContent(5,175.8391);
   hmc__22->SetBinContent(6,198.5021);
   hmc__22->SetBinContent(7,182.4312);
   hmc__22->SetBinContent(8,156.8724);
   hmc__22->SetBinContent(9,138.2917);
   hmc__22->SetBinContent(10,113.883);
   hmc__22->SetBinContent(11,92.30176);
   hmc__22->SetBinContent(12,80.16917);
   hmc__22->SetBinContent(13,75.95969);
   hmc__22->SetBinContent(14,52.71384);
   hmc__22->SetBinContent(15,45.78756);
   hmc__22->SetBinContent(16,34.05223);
   hmc__22->SetBinContent(17,25.11774);
   hmc__22->SetBinContent(18,25.41116);
   hmc__22->SetBinContent(19,17.92946);
   hmc__22->SetBinContent(20,14.89394);
   hmc__22->SetBinContent(21,9.182709);
   hmc__22->SetBinContent(22,7.076437);
   hmc__22->SetBinContent(23,9.220249);
   hmc__22->SetBinContent(24,6.558293);
   hmc__22->SetBinContent(25,5.751866);
   hmc__22->SetBinContent(26,34.96795);
   hmc__22->SetBinError(0,0.2781975);
   hmc__22->SetBinError(1,3.032774);
   hmc__22->SetBinError(2,6.076064);
   hmc__22->SetBinError(3,17.22113);
   hmc__22->SetBinError(4,33.80224);
   hmc__22->SetBinError(5,40.04607);
   hmc__22->SetBinError(6,44.79214);
   hmc__22->SetBinError(7,42.90537);
   hmc__22->SetBinError(8,38.20818);
   hmc__22->SetBinError(9,30.68431);
   hmc__22->SetBinError(10,26.14327);
   hmc__22->SetBinError(11,22.42416);
   hmc__22->SetBinError(12,18.76803);
   hmc__22->SetBinError(13,18.05679);
   hmc__22->SetBinError(14,13.61969);
   hmc__22->SetBinError(15,11.8967);
   hmc__22->SetBinError(16,8.702309);
   hmc__22->SetBinError(17,7.526581);
   hmc__22->SetBinError(18,5.790947);
   hmc__22->SetBinError(19,5.580871);
   hmc__22->SetBinError(20,4.073511);
   hmc__22->SetBinError(21,2.546523);
   hmc__22->SetBinError(22,2.878726);
   hmc__22->SetBinError(23,2.60239);
   hmc__22->SetBinError(24,1.898688);
   hmc__22->SetBinError(25,2.097119);
   hmc__22->SetBinError(26,6.278506);
   hmc__22->SetMinimum(-4.38);
   hmc__22->SetMaximum(459.9);
   hmc__22->SetEntries(1753.11);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1800);
   hs8_stack_8->SetMinimum(-1.856658e-08);
   hs8_stack_8->SetMaximum(208.4272);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,0.2337684);
   hbadmatch_stack_1->SetBinContent(4,0.2211568);
   hbadmatch_stack_1->SetBinContent(5,0.5695943);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,1.011843);
   hbadmatch_stack_1->SetBinContent(8,0.3401776);
   hbadmatch_stack_1->SetBinContent(9,1.536628);
   hbadmatch_stack_1->SetBinContent(10,0.3774206);
   hbadmatch_stack_1->SetBinContent(11,0.3917402);
   hbadmatch_stack_1->SetBinContent(12,0.5537961);
   hbadmatch_stack_1->SetBinContent(13,0.8034455);
   hbadmatch_stack_1->SetBinContent(14,0.7889131);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,1.459558);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.2337684);
   hbadmatch_stack_1->SetBinError(4,0.2211568);
   hbadmatch_stack_1->SetBinError(5,0.4103082);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.4534453);
   hbadmatch_stack_1->SetBinError(8,0.3401776);
   hbadmatch_stack_1->SetBinError(9,0.5955226);
   hbadmatch_stack_1->SetBinError(10,0.2834878);
   hbadmatch_stack_1->SetBinError(11,0.2770047);
   hbadmatch_stack_1->SetBinError(12,0.4016885);
   hbadmatch_stack_1->SetBinError(13,0.4954856);
   hbadmatch_stack_1->SetBinError(14,0.4835289);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.8496542);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetEntries(43);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.614806);
   hext_stack_2->SetBinContent(3,7.072117);
   hext_stack_2->SetBinContent(4,2.27519);
   hext_stack_2->SetBinContent(5,4.994461);
   hext_stack_2->SetBinContent(6,5.40106);
   hext_stack_2->SetBinContent(7,6.519885);
   hext_stack_2->SetBinContent(8,3.807795);
   hext_stack_2->SetBinContent(9,4.139373);
   hext_stack_2->SetBinContent(10,4.136601);
   hext_stack_2->SetBinContent(11,3.006186);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,2.028585);
   hext_stack_2->SetBinContent(15,0.6416141);
   hext_stack_2->SetBinContent(16,1.219797);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(18,1.697008);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(25,0.6416141);
   hext_stack_2->SetBinContent(26,3.946247);
   hext_stack_2->SetBinError(2,0.8528597);
   hext_stack_2->SetBinError(3,2.031244);
   hext_stack_2->SetBinError(4,0.9336798);
   hext_stack_2->SetBinError(5,1.644594);
   hext_stack_2->SetBinError(6,1.694111);
   hext_stack_2->SetBinError(7,1.890284);
   hext_stack_2->SetBinError(8,1.24058);
   hext_stack_2->SetBinError(9,1.201279);
   hext_stack_2->SetBinError(10,1.33394);
   hext_stack_2->SetBinError(11,1.068791);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.8315593);
   hext_stack_2->SetBinError(15,0.6416141);
   hext_stack_2->SetBinError(16,0.7042499);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(18,0.8873887);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(25,0.6416141);
   hext_stack_2->SetBinError(26,1.458663);
   hext_stack_2->SetEntries(130);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.7551225);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.2664809);
   hdirt_stack_3->SetBinContent(10,0.2761429);
   hdirt_stack_3->SetBinContent(12,0.292658);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.3820091);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(5,0.3834428);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(9,0.2664809);
   hdirt_stack_3->SetBinError(10,0.1952625);
   hdirt_stack_3->SetBinError(12,0.2072697);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(16,0.3820091);
   hdirt_stack_3->SetEntries(20);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.156506);
   houtFV_stack_4->SetBinContent(3,0.7336084);
   houtFV_stack_4->SetBinContent(4,2.565347);
   houtFV_stack_4->SetBinContent(5,4.561807);
   houtFV_stack_4->SetBinContent(6,3.051773);
   houtFV_stack_4->SetBinContent(7,1.80182);
   houtFV_stack_4->SetBinContent(8,2.971862);
   houtFV_stack_4->SetBinContent(9,3.144641);
   houtFV_stack_4->SetBinContent(10,2.202425);
   houtFV_stack_4->SetBinContent(11,1.737977);
   houtFV_stack_4->SetBinContent(12,0.7834804);
   houtFV_stack_4->SetBinContent(13,0.5901461);
   houtFV_stack_4->SetBinContent(14,0.5352025);
   houtFV_stack_4->SetBinContent(15,1.465526);
   houtFV_stack_4->SetBinContent(16,0.3900497);
   houtFV_stack_4->SetBinContent(18,0.3616262);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.1967154);
   houtFV_stack_4->SetBinError(2,0.6105144);
   houtFV_stack_4->SetBinError(3,0.4394482);
   houtFV_stack_4->SetBinError(4,0.7951167);
   houtFV_stack_4->SetBinError(5,1.895787);
   houtFV_stack_4->SetBinError(6,0.8318935);
   houtFV_stack_4->SetBinError(7,0.6014279);
   houtFV_stack_4->SetBinError(8,0.8202283);
   houtFV_stack_4->SetBinError(9,0.8734849);
   houtFV_stack_4->SetBinError(10,0.8115881);
   houtFV_stack_4->SetBinError(11,0.7386825);
   houtFV_stack_4->SetBinError(12,0.3917439);
   houtFV_stack_4->SetBinError(13,0.340721);
   houtFV_stack_4->SetBinError(14,0.3921167);
   houtFV_stack_4->SetBinError(15,0.6209405);
   houtFV_stack_4->SetBinError(16,0.2758068);
   houtFV_stack_4->SetBinError(18,0.3616262);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(26,0.1967154);
   houtFV_stack_4->SetEntries(118);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1771563);
   hNCpi0inFVqe_stack_6->SetEntries(3);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1031326);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.478894);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.705618);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.95646);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.770323);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.469911);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.104951);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.270547);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.9501514);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.01417);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.304342);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.460235);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7101383);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1915156);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3083607);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1409451);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.05306552);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1262769);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.05238498);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2862524);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4199844);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4455451);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3832978);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3485597);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5762269);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3983446);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2421421);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3337576);
   hNCpi0inFVres_stack_7->SetBinError(12,0.601321);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6282039);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2865174);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1179296);
   hNCpi0inFVres_stack_7->SetBinError(16,0.173637);
   hNCpi0inFVres_stack_7->SetBinError(17,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1012474);
   hNCpi0inFVres_stack_7->SetBinError(20,0.03757277);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1262769);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(413);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.007068991);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.387423);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.401514);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.338654);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.402053);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.572688);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.9777685);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.04588);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9395953);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.173874);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.599533);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.327609);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.197133);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3423661);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7967395);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4171035);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.334416);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4783711);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6265001);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1136578);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8556276);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.007068991);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3567392);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.420507);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.325757);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.361122);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3906971);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2519723);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3412905);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3480657);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3752218);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1710605);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5066918);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3737823);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2525444);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.514426);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4171035);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7041228);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.284145);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3468693);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.07003108);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6189939);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.07381642);
   hNCpi0inFVdis_stack_8->SetEntries(337);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(2,10.23681);
   hCCpi0inFV_stack_10->SetBinContent(3,49.03178);
   hCCpi0inFV_stack_10->SetBinContent(4,101.5153);
   hCCpi0inFV_stack_10->SetBinContent(5,120.0166);
   hCCpi0inFV_stack_10->SetBinContent(6,138.8769);
   hCCpi0inFV_stack_10->SetBinContent(7,125.5791);
   hCCpi0inFV_stack_10->SetBinContent(8,105.3614);
   hCCpi0inFV_stack_10->SetBinContent(9,84.90286);
   hCCpi0inFV_stack_10->SetBinContent(10,74.33653);
   hCCpi0inFV_stack_10->SetBinContent(11,52.35521);
   hCCpi0inFV_stack_10->SetBinContent(12,51.4132);
   hCCpi0inFV_stack_10->SetBinContent(13,46.14701);
   hCCpi0inFV_stack_10->SetBinContent(14,29.40797);
   hCCpi0inFV_stack_10->SetBinContent(15,28.40511);
   hCCpi0inFV_stack_10->SetBinContent(16,18.14289);
   hCCpi0inFV_stack_10->SetBinContent(17,14.02478);
   hCCpi0inFV_stack_10->SetBinContent(18,12.1475);
   hCCpi0inFV_stack_10->SetBinContent(19,9.317308);
   hCCpi0inFV_stack_10->SetBinContent(20,7.248648);
   hCCpi0inFV_stack_10->SetBinContent(21,4.099511);
   hCCpi0inFV_stack_10->SetBinContent(22,3.970259);
   hCCpi0inFV_stack_10->SetBinContent(23,3.815968);
   hCCpi0inFV_stack_10->SetBinContent(24,2.885644);
   hCCpi0inFV_stack_10->SetBinContent(25,3.467945);
   hCCpi0inFV_stack_10->SetBinContent(26,14.29996);
   hCCpi0inFV_stack_10->SetBinError(1,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(2,1.65857);
   hCCpi0inFV_stack_10->SetBinError(3,3.490481);
   hCCpi0inFV_stack_10->SetBinError(4,5.105788);
   hCCpi0inFV_stack_10->SetBinError(5,5.508684);
   hCCpi0inFV_stack_10->SetBinError(6,5.867007);
   hCCpi0inFV_stack_10->SetBinError(7,5.614843);
   hCCpi0inFV_stack_10->SetBinError(8,5.147025);
   hCCpi0inFV_stack_10->SetBinError(9,4.61924);
   hCCpi0inFV_stack_10->SetBinError(10,4.323824);
   hCCpi0inFV_stack_10->SetBinError(11,3.635702);
   hCCpi0inFV_stack_10->SetBinError(12,3.57126);
   hCCpi0inFV_stack_10->SetBinError(13,3.487885);
   hCCpi0inFV_stack_10->SetBinError(14,2.726307);
   hCCpi0inFV_stack_10->SetBinError(15,2.678895);
   hCCpi0inFV_stack_10->SetBinError(16,2.1782);
   hCCpi0inFV_stack_10->SetBinError(17,1.893298);
   hCCpi0inFV_stack_10->SetBinError(18,1.784807);
   hCCpi0inFV_stack_10->SetBinError(19,1.588669);
   hCCpi0inFV_stack_10->SetBinError(20,1.2722);
   hCCpi0inFV_stack_10->SetBinError(21,0.9993399);
   hCCpi0inFV_stack_10->SetBinError(22,0.9949842);
   hCCpi0inFV_stack_10->SetBinError(23,0.9197592);
   hCCpi0inFV_stack_10->SetBinError(24,0.7836742);
   hCCpi0inFV_stack_10->SetBinError(25,0.9620561);
   hCCpi0inFV_stack_10->SetBinError(26,1.896205);
   hCCpi0inFV_stack_10->SetEntries(4745);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.536893);
   hNCinFV_stack_11->SetBinContent(4,0.8557585);
   hNCinFV_stack_11->SetBinContent(5,1.636548);
   hNCinFV_stack_11->SetBinContent(6,1.189363);
   hNCinFV_stack_11->SetBinContent(7,1.339253);
   hNCinFV_stack_11->SetBinContent(8,0.5352025);
   hNCinFV_stack_11->SetBinContent(9,0.6453016);
   hNCinFV_stack_11->SetBinContent(10,2.142363);
   hNCinFV_stack_11->SetBinContent(11,1.269613);
   hNCinFV_stack_11->SetBinContent(12,0.7100622);
   hNCinFV_stack_11->SetBinContent(13,0.2552519);
   hNCinFV_stack_11->SetBinContent(14,0.1777884);
   hNCinFV_stack_11->SetBinContent(15,0.785171);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.3934307);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.4079405);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.3929602);
   hNCinFV_stack_11->SetBinError(4,0.4561089);
   hNCinFV_stack_11->SetBinError(5,0.6947552);
   hNCinFV_stack_11->SetBinError(6,0.4857068);
   hNCinFV_stack_11->SetBinError(7,0.561784);
   hNCinFV_stack_11->SetBinError(8,0.3921167);
   hNCinFV_stack_11->SetBinError(9,0.3757964);
   hNCinFV_stack_11->SetBinError(10,0.9077066);
   hNCinFV_stack_11->SetBinError(11,0.5908409);
   hNCinFV_stack_11->SetBinError(12,0.3612073);
   hNCinFV_stack_11->SetBinError(13,0.255252);
   hNCinFV_stack_11->SetBinError(14,0.1777884);
   hNCinFV_stack_11->SetBinError(15,0.3925882);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.2781975);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.4079405);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1950249);
   hNCinFV_stack_11->SetEntries(64);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,3.453731);
   hnumuCCinFV_stack_12->SetBinContent(2,14.14479);
   hnumuCCinFV_stack_12->SetBinContent(3,27.13624);
   hnumuCCinFV_stack_12->SetBinContent(4,36.56705);
   hnumuCCinFV_stack_12->SetBinContent(5,40.00975);
   hnumuCCinFV_stack_12->SetBinContent(6,45.44951);
   hnumuCCinFV_stack_12->SetBinContent(7,42.44151);
   hnumuCCinFV_stack_12->SetBinContent(8,40.57651);
   hnumuCCinFV_stack_12->SetBinContent(9,40.36959);
   hnumuCCinFV_stack_12->SetBinContent(10,28.31239);
   hnumuCCinFV_stack_12->SetBinContent(11,31.35299);
   hnumuCCinFV_stack_12->SetBinContent(12,22.01675);
   hnumuCCinFV_stack_12->SetBinContent(13,24.56954);
   hnumuCCinFV_stack_12->SetBinContent(14,17.33321);
   hnumuCCinFV_stack_12->SetBinContent(15,13.22265);
   hnumuCCinFV_stack_12->SetBinContent(16,10.81594);
   hnumuCCinFV_stack_12->SetBinContent(17,8.501442);
   hnumuCCinFV_stack_12->SetBinContent(18,8.459167);
   hnumuCCinFV_stack_12->SetBinContent(19,7.256713);
   hnumuCCinFV_stack_12->SetBinContent(20,6.375579);
   hnumuCCinFV_stack_12->SetBinContent(21,4.449832);
   hnumuCCinFV_stack_12->SetBinContent(22,2.642437);
   hnumuCCinFV_stack_12->SetBinContent(23,3.08574);
   hnumuCCinFV_stack_12->SetBinContent(24,3.251318);
   hnumuCCinFV_stack_12->SetBinContent(25,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(26,15.76493);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.897945);
   hnumuCCinFV_stack_12->SetBinError(2,1.951251);
   hnumuCCinFV_stack_12->SetBinError(3,2.917152);
   hnumuCCinFV_stack_12->SetBinError(4,3.320742);
   hnumuCCinFV_stack_12->SetBinError(5,3.225037);
   hnumuCCinFV_stack_12->SetBinError(6,4.133135);
   hnumuCCinFV_stack_12->SetBinError(7,3.266479);
   hnumuCCinFV_stack_12->SetBinError(8,3.155592);
   hnumuCCinFV_stack_12->SetBinError(9,3.233894);
   hnumuCCinFV_stack_12->SetBinError(10,2.715815);
   hnumuCCinFV_stack_12->SetBinError(11,2.826896);
   hnumuCCinFV_stack_12->SetBinError(12,2.363519);
   hnumuCCinFV_stack_12->SetBinError(13,2.845881);
   hnumuCCinFV_stack_12->SetBinError(14,2.090756);
   hnumuCCinFV_stack_12->SetBinError(15,1.829565);
   hnumuCCinFV_stack_12->SetBinError(16,1.637187);
   hnumuCCinFV_stack_12->SetBinError(17,1.421044);
   hnumuCCinFV_stack_12->SetBinError(18,1.463382);
   hnumuCCinFV_stack_12->SetBinError(19,1.373093);
   hnumuCCinFV_stack_12->SetBinError(20,1.269336);
   hnumuCCinFV_stack_12->SetBinError(21,1.057532);
   hnumuCCinFV_stack_12->SetBinError(22,0.7851269);
   hnumuCCinFV_stack_12->SetBinError(23,0.8088057);
   hnumuCCinFV_stack_12->SetBinError(24,0.8605006);
   hnumuCCinFV_stack_12->SetBinError(25,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(26,2.067127);
   hnumuCCinFV_stack_12->SetEntries(2093);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.970368);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.536893);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(26,0.536893);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.4993105);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3929602);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
   hnueCCinFV_stack_13->SetBinError(26,0.3929602);
   hnueCCinFV_stack_13->SetEntries(23);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__23->SetBinContent(0,0.3934307);
   hmcerror__23->SetBinContent(1,4.237212);
   hmcerror__23->SetBinContent(2,27.62597);
   hmcerror__23->SetBinContent(3,87.72066);
   hmcerror__23->SetBinContent(4,147.33);
   hmcerror__23->SetBinContent(5,175.8391);
   hmcerror__23->SetBinContent(6,198.5021);
   hmcerror__23->SetBinContent(7,182.4312);
   hmcerror__23->SetBinContent(8,156.8724);
   hmcerror__23->SetBinContent(9,138.2917);
   hmcerror__23->SetBinContent(10,113.883);
   hmcerror__23->SetBinContent(11,92.30176);
   hmcerror__23->SetBinContent(12,80.16917);
   hmcerror__23->SetBinContent(13,75.95969);
   hmcerror__23->SetBinContent(14,52.71384);
   hmcerror__23->SetBinContent(15,45.78756);
   hmcerror__23->SetBinContent(16,34.05223);
   hmcerror__23->SetBinContent(17,25.11774);
   hmcerror__23->SetBinContent(18,25.41116);
   hmcerror__23->SetBinContent(19,17.92946);
   hmcerror__23->SetBinContent(20,14.89394);
   hmcerror__23->SetBinContent(21,9.182709);
   hmcerror__23->SetBinContent(22,7.076437);
   hmcerror__23->SetBinContent(23,9.220249);
   hmcerror__23->SetBinContent(24,6.558293);
   hmcerror__23->SetBinContent(25,5.751866);
   hmcerror__23->SetBinContent(26,34.96795);
   hmcerror__23->SetBinError(0,0.2781975);
   hmcerror__23->SetBinError(1,3.032774);
   hmcerror__23->SetBinError(2,6.076064);
   hmcerror__23->SetBinError(3,17.22113);
   hmcerror__23->SetBinError(4,33.80224);
   hmcerror__23->SetBinError(5,40.04607);
   hmcerror__23->SetBinError(6,44.79214);
   hmcerror__23->SetBinError(7,42.90537);
   hmcerror__23->SetBinError(8,38.20818);
   hmcerror__23->SetBinError(9,30.68431);
   hmcerror__23->SetBinError(10,26.14327);
   hmcerror__23->SetBinError(11,22.42416);
   hmcerror__23->SetBinError(12,18.76803);
   hmcerror__23->SetBinError(13,18.05679);
   hmcerror__23->SetBinError(14,13.61969);
   hmcerror__23->SetBinError(15,11.8967);
   hmcerror__23->SetBinError(16,8.702309);
   hmcerror__23->SetBinError(17,7.526581);
   hmcerror__23->SetBinError(18,5.790947);
   hmcerror__23->SetBinError(19,5.580871);
   hmcerror__23->SetBinError(20,4.073511);
   hmcerror__23->SetBinError(21,2.546523);
   hmcerror__23->SetBinError(22,2.878726);
   hmcerror__23->SetBinError(23,2.60239);
   hmcerror__23->SetBinError(24,1.898688);
   hmcerror__23->SetBinError(25,2.097119);
   hmcerror__23->SetBinError(26,6.278506);
   hmcerror__23->SetEntries(1753.11);

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
   
   Double_t _fx3029[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3029[25] = {
   1,
   40,
   128,
   190,
   219,
   183,
   162,
   157,
   130,
   112,
   78,
   74,
   55,
   46,
   37,
   38,
   18,
   25,
   17,
   11,
   9,
   12,
   5,
   12,
   6};
   Double_t _felx3029[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3029[25] = {
   1,
   6.4604,
   11.31371,
   13.78405,
   14.79865,
   13.52775,
   12.72792,
   12.52996,
   11.40175,
   10.58301,
   8.9562,
   8.7275,
   7.546,
   6.9153,
   6.2203,
   6.3013,
   4.4008,
   5.1474,
   4.2835,
   3.4975,
   3.19354,
   3.64022,
   2.48995,
   3.64022,
   2.67925};
   Double_t _fehx3029[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3029[25] = {
   1.35971,
   6.2549,
   11.31371,
   13.78405,
   14.79865,
   13.52775,
   12.72792,
   12.52996,
   11.40175,
   10.58301,
   8.7542,
   8.5253,
   7.3425,
   6.7108,
   6.0141,
   6.0955,
   4.1858,
   4.9374,
   4.0673,
   3.27,
   2.9582,
   3.4155,
   2.21064,
   3.4155,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1980);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(257.1785);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=41.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1765.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1097.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 483.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.0","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3030[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3030[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3030[25] = {
   0.7157477,
   0.2199403,
   0.1963179,
   0.2294322,
   0.2277427,
   0.2256507,
   0.2351867,
   0.2435622,
   0.2218811,
   0.2295624,
   0.2429441,
   0.2341053,
   0.2377154,
   0.2583702,
   0.2598238,
   0.2555576,
   0.299652,
   0.2278899,
   0.3112682,
   0.2735013,
   0.2773171,
   0.4068045,
   0.2822472,
   0.2895094,
   0.364598};
   Double_t _fehx3030[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3030[25] = {
   0.7157477,
   0.2199403,
   0.1963179,
   0.2294322,
   0.2277427,
   0.2256507,
   0.2351867,
   0.2435622,
   0.2218811,
   0.2295624,
   0.2429441,
   0.2341053,
   0.2377154,
   0.2583702,
   0.2598238,
   0.2555576,
   0.299652,
   0.2278899,
   0.3112682,
   0.2735013,
   0.2773171,
   0.4068045,
   0.2822472,
   0.2895094,
   0.364598};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1980);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3031[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3031[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3031[25] = {
   0.7157477,
   0.2199403,
   0.1963179,
   0.2294322,
   0.2277427,
   0.2256507,
   0.2351867,
   0.2435622,
   0.2218811,
   0.2295624,
   0.2429441,
   0.2341053,
   0.2377154,
   0.2583702,
   0.2598238,
   0.2555576,
   0.299652,
   0.2278899,
   0.3112682,
   0.2735013,
   0.2773171,
   0.4068045,
   0.2822472,
   0.2895094,
   0.364598};
   Double_t _fehx3031[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3031[25] = {
   0.7157477,
   0.2199403,
   0.1963179,
   0.2294322,
   0.2277427,
   0.2256507,
   0.2351867,
   0.2435622,
   0.2218811,
   0.2295624,
   0.2429441,
   0.2341053,
   0.2377154,
   0.2583702,
   0.2598238,
   0.2555576,
   0.299652,
   0.2278899,
   0.3112682,
   0.2735013,
   0.2773171,
   0.4068045,
   0.2822472,
   0.2895094,
   0.364598};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1980);
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
   
   Double_t _fx3032[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3032[25] = {
   0.2360043,
   1.447913,
   1.459177,
   1.289622,
   1.245457,
   0.9219045,
   0.8880062,
   1.000813,
   0.9400421,
   0.9834652,
   0.8450543,
   0.9230481,
   0.7240682,
   0.8726361,
   0.8080797,
   1.115933,
   0.716625,
   0.9838197,
   0.9481601,
   0.7385555,
   0.980103,
   1.695769,
   0.5422847,
   1.829744,
   1.04314};
   Double_t _felx3032[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3032[25] = {
   0.2360043,
   0.2338524,
   0.1289743,
   0.09355903,
   0.08416019,
   0.06814914,
   0.06976836,
   0.0798736,
   0.08244715,
   0.09292873,
   0.09703174,
   0.1088635,
   0.09934216,
   0.1311857,
   0.1358513,
   0.1850481,
   0.1752068,
   0.2025645,
   0.2389084,
   0.2348271,
   0.3477776,
   0.5144142,
   0.2700524,
   0.555056,
   0.4658053};
   Double_t _fehx3032[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3032[25] = {
   0.3208973,
   0.2264138,
   0.1289743,
   0.09355903,
   0.08416019,
   0.06814914,
   0.06976836,
   0.0798736,
   0.08244715,
   0.09292873,
   0.09484326,
   0.1063414,
   0.09666311,
   0.1273062,
   0.1313479,
   0.1790044,
   0.1666472,
   0.1943004,
   0.2268501,
   0.2195524,
   0.322149,
   0.4826582,
   0.2397592,
   0.520791,
   0.4204861};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1980);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.585589);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
