#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 17:16:34 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",242,172,1200,900);
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
   pad1->Range(-230.7692,-5.375695,1692.308,594.4387);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hmc__22->SetBinContent(1,22.07734);
   hmc__22->SetBinContent(2,69.11311);
   hmc__22->SetBinContent(3,150.1199);
   hmc__22->SetBinContent(4,225.7168);
   hmc__22->SetBinContent(5,268.7848);
   hmc__22->SetBinContent(6,225.0648);
   hmc__22->SetBinContent(7,177.7929);
   hmc__22->SetBinContent(8,133.4226);
   hmc__22->SetBinContent(9,105.0266);
   hmc__22->SetBinContent(10,91.51631);
   hmc__22->SetBinContent(11,74.27219);
   hmc__22->SetBinContent(12,46.60844);
   hmc__22->SetBinContent(13,39.12448);
   hmc__22->SetBinContent(14,24.1988);
   hmc__22->SetBinContent(15,21.82595);
   hmc__22->SetBinContent(16,17.56053);
   hmc__22->SetBinContent(17,18.42054);
   hmc__22->SetBinContent(18,8.577229);
   hmc__22->SetBinContent(19,9.623228);
   hmc__22->SetBinContent(20,8.913209);
   hmc__22->SetBinContent(21,5.673103);
   hmc__22->SetBinContent(22,4.338283);
   hmc__22->SetBinContent(23,3.644251);
   hmc__22->SetBinContent(24,2.782518);
   hmc__22->SetBinContent(25,1.127039);
   hmc__22->SetBinContent(26,9.356428);
   hmc__22->SetBinError(1,5.447954);
   hmc__22->SetBinError(2,14.45837);
   hmc__22->SetBinError(3,29.99518);
   hmc__22->SetBinError(4,47.21774);
   hmc__22->SetBinError(5,56.05592);
   hmc__22->SetBinError(6,49.5923);
   hmc__22->SetBinError(7,41.79537);
   hmc__22->SetBinError(8,28.43331);
   hmc__22->SetBinError(9,25.4218);
   hmc__22->SetBinError(10,20.02626);
   hmc__22->SetBinError(11,16.89751);
   hmc__22->SetBinError(12,11.91536);
   hmc__22->SetBinError(13,9.795236);
   hmc__22->SetBinError(14,6.370885);
   hmc__22->SetBinError(15,5.797009);
   hmc__22->SetBinError(16,4.513056);
   hmc__22->SetBinError(17,4.890386);
   hmc__22->SetBinError(18,2.544984);
   hmc__22->SetBinError(19,2.942193);
   hmc__22->SetBinError(20,2.819612);
   hmc__22->SetBinError(21,1.970335);
   hmc__22->SetBinError(22,1.785646);
   hmc__22->SetBinError(23,1.432034);
   hmc__22->SetBinError(24,1.247537);
   hmc__22->SetBinError(25,0.7445956);
   hmc__22->SetBinError(26,2.71825);
   hmc__22->SetMinimum(-5.375695);
   hmc__22->SetMaximum(564.448);
   hmc__22->SetEntries(1748.127);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1500);
   hs8_stack_8->SetMinimum(-1.202048e-08);
   hs8_stack_8->SetMaximum(282.224);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.9472268);
   hbadmatch_stack_1->SetBinContent(3,0.8195629);
   hbadmatch_stack_1->SetBinContent(4,1.927465);
   hbadmatch_stack_1->SetBinContent(5,1.730756);
   hbadmatch_stack_1->SetBinContent(6,0.7466091);
   hbadmatch_stack_1->SetBinContent(7,1.631091);
   hbadmatch_stack_1->SetBinContent(8,0.7336084);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.488618);
   hbadmatch_stack_1->SetBinError(3,0.4107589);
   hbadmatch_stack_1->SetBinError(4,0.770091);
   hbadmatch_stack_1->SetBinError(5,0.8549935);
   hbadmatch_stack_1->SetBinError(6,0.3821578);
   hbadmatch_stack_1->SetBinError(7,0.6297496);
   hbadmatch_stack_1->SetBinError(8,0.4394482);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,1.868591);
   hext_stack_2->SetBinContent(2,4.296596);
   hext_stack_2->SetBinContent(3,7.669069);
   hext_stack_2->SetBinContent(4,5.671978);
   hext_stack_2->SetBinContent(5,10.57428);
   hext_stack_2->SetBinContent(6,5.807659);
   hext_stack_2->SetBinContent(7,3.483397);
   hext_stack_2->SetBinContent(8,1.939204);
   hext_stack_2->SetBinContent(9,2.338622);
   hext_stack_2->SetBinContent(10,7.001504);
   hext_stack_2->SetBinContent(11,4.263464);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(1,0.840497);
   hext_stack_2->SetBinError(2,1.328326);
   hext_stack_2->SetBinError(3,1.985692);
   hext_stack_2->SetBinError(4,1.452705);
   hext_stack_2->SetBinError(5,2.300539);
   hext_stack_2->SetBinError(6,1.742221);
   hext_stack_2->SetBinError(7,1.197416);
   hext_stack_2->SetBinError(8,0.912471);
   hext_stack_2->SetBinError(9,1.095047);
   hext_stack_2->SetBinError(10,1.999946);
   hext_stack_2->SetBinError(11,1.560171);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.3042167);
   hdirt_stack_3->SetBinContent(4,0.536227);
   hdirt_stack_3->SetBinContent(5,0.8582678);
   hdirt_stack_3->SetBinContent(6,0.7759784);
   hdirt_stack_3->SetBinContent(7,0.9878123);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.2160277);
   hdirt_stack_3->SetBinError(4,0.3148224);
   hdirt_stack_3->SetBinError(5,0.5285502);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.4736141);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.9286332);
   houtFV_stack_4->SetBinContent(2,2.399284);
   houtFV_stack_4->SetBinContent(3,5.520435);
   houtFV_stack_4->SetBinContent(4,2.989479);
   houtFV_stack_4->SetBinContent(5,2.910842);
   houtFV_stack_4->SetBinContent(6,3.904626);
   houtFV_stack_4->SetBinContent(7,1.712114);
   houtFV_stack_4->SetBinContent(8,3.199213);
   houtFV_stack_4->SetBinContent(9,0.6186829);
   houtFV_stack_4->SetBinContent(10,0.6215277);
   houtFV_stack_4->SetBinContent(11,1.682);
   houtFV_stack_4->SetBinContent(12,0.5884556);
   houtFV_stack_4->SetBinContent(13,0.3917402);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinError(1,0.48078);
   houtFV_stack_4->SetBinError(2,0.7866123);
   houtFV_stack_4->SetBinError(3,1.143826);
   houtFV_stack_4->SetBinError(4,0.8762436);
   houtFV_stack_4->SetBinError(5,0.9945759);
   houtFV_stack_4->SetBinError(6,1.011091);
   houtFV_stack_4->SetBinError(7,0.6201715);
   houtFV_stack_4->SetBinError(8,1.782168);
   houtFV_stack_4->SetBinError(9,0.3580986);
   houtFV_stack_4->SetBinError(10,0.3599082);
   houtFV_stack_4->SetBinError(11,0.66231);
   houtFV_stack_4->SetBinError(12,0.3397478);
   houtFV_stack_4->SetBinError(13,0.2770047);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03076306);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05967807);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2389644);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1695136);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3382878);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.118694);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.066384);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.565084);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.122849);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.76943);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.669186);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7478848);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.2489546);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.3854615);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1109873);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1412735);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2875488);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5857311);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8371678);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4938399);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6128116);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6178798);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2329311);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1398593);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2612429);
   hNCpi0inFVres_stack_7->SetBinError(11,0.08764647);
   hNCpi0inFVres_stack_7->SetBinError(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.1086498);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.007911);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.026886);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.674869);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.604112);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.358859);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.991173);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3885576);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6382153);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.302649);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1353755);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.06595394);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2584125);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4612679);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.01746);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9080943);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.744714);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5314367);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1496746);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2388222);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1364541);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.08882048);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,10.31524);
   hCCpi0inFV_stack_10->SetBinContent(2,37.84515);
   hCCpi0inFV_stack_10->SetBinContent(3,92.60317);
   hCCpi0inFV_stack_10->SetBinContent(4,151.3463);
   hCCpi0inFV_stack_10->SetBinContent(5,181.0014);
   hCCpi0inFV_stack_10->SetBinContent(6,159.4344);
   hCCpi0inFV_stack_10->SetBinContent(7,133.386);
   hCCpi0inFV_stack_10->SetBinContent(8,98.83185);
   hCCpi0inFV_stack_10->SetBinContent(9,81.19016);
   hCCpi0inFV_stack_10->SetBinContent(10,62.83778);
   hCCpi0inFV_stack_10->SetBinContent(11,55.8969);
   hCCpi0inFV_stack_10->SetBinContent(12,32.86617);
   hCCpi0inFV_stack_10->SetBinContent(13,29.5098);
   hCCpi0inFV_stack_10->SetBinContent(14,19.50067);
   hCCpi0inFV_stack_10->SetBinContent(15,15.58775);
   hCCpi0inFV_stack_10->SetBinContent(16,12.94592);
   hCCpi0inFV_stack_10->SetBinContent(17,15.03348);
   hCCpi0inFV_stack_10->SetBinContent(18,6.801963);
   hCCpi0inFV_stack_10->SetBinContent(19,6.970795);
   hCCpi0inFV_stack_10->SetBinContent(20,6.796892);
   hCCpi0inFV_stack_10->SetBinContent(21,4.521545);
   hCCpi0inFV_stack_10->SetBinContent(22,3.069472);
   hCCpi0inFV_stack_10->SetBinContent(23,2.297188);
   hCCpi0inFV_stack_10->SetBinContent(24,2.390778);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(26,8.282642);
   hCCpi0inFV_stack_10->SetBinError(1,1.58806);
   hCCpi0inFV_stack_10->SetBinError(2,3.074247);
   hCCpi0inFV_stack_10->SetBinError(3,4.881846);
   hCCpi0inFV_stack_10->SetBinError(4,6.147628);
   hCCpi0inFV_stack_10->SetBinError(5,6.70397);
   hCCpi0inFV_stack_10->SetBinError(6,6.3813);
   hCCpi0inFV_stack_10->SetBinError(7,5.776433);
   hCCpi0inFV_stack_10->SetBinError(8,5.013087);
   hCCpi0inFV_stack_10->SetBinError(9,4.532603);
   hCCpi0inFV_stack_10->SetBinError(10,3.934496);
   hCCpi0inFV_stack_10->SetBinError(11,3.797575);
   hCCpi0inFV_stack_10->SetBinError(12,2.786759);
   hCCpi0inFV_stack_10->SetBinError(13,2.708879);
   hCCpi0inFV_stack_10->SetBinError(14,2.296324);
   hCCpi0inFV_stack_10->SetBinError(15,1.921341);
   hCCpi0inFV_stack_10->SetBinError(16,1.809352);
   hCCpi0inFV_stack_10->SetBinError(17,1.981692);
   hCCpi0inFV_stack_10->SetBinError(18,1.256752);
   hCCpi0inFV_stack_10->SetBinError(19,1.291226);
   hCCpi0inFV_stack_10->SetBinError(20,1.255962);
   hCCpi0inFV_stack_10->SetBinError(21,1.134431);
   hCCpi0inFV_stack_10->SetBinError(22,0.8416724);
   hCCpi0inFV_stack_10->SetBinError(23,0.7061988);
   hCCpi0inFV_stack_10->SetBinError(24,0.7844693);
   hCCpi0inFV_stack_10->SetBinError(25,0.340721);
   hCCpi0inFV_stack_10->SetBinError(26,1.433117);
   hCCpi0inFV_stack_10->SetEntries(5273);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,1.320373);
   hNCinFV_stack_11->SetBinContent(3,1.663932);
   hNCinFV_stack_11->SetBinContent(4,2.449103);
   hNCinFV_stack_11->SetBinContent(5,1.463836);
   hNCinFV_stack_11->SetBinContent(6,1.121968);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.7319179);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.5548703);
   hNCinFV_stack_11->SetBinError(3,0.6518637);
   hNCinFV_stack_11->SetBinError(4,0.7609545);
   hNCinFV_stack_11->SetBinError(5,0.620407);
   hNCinFV_stack_11->SetBinError(6,0.5181909);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.438694);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetEntries(43);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,7.54859);
   hnumuCCinFV_stack_12->SetBinContent(2,19.44965);
   hnumuCCinFV_stack_12->SetBinContent(3,34.70295);
   hnumuCCinFV_stack_12->SetBinContent(4,50.23758);
   hnumuCCinFV_stack_12->SetBinContent(5,61.74259);
   hnumuCCinFV_stack_12->SetBinContent(6,46.80515);
   hnumuCCinFV_stack_12->SetBinContent(7,32.93217);
   hnumuCCinFV_stack_12->SetBinContent(8,27.11909);
   hnumuCCinFV_stack_12->SetBinContent(9,19.45506);
   hnumuCCinFV_stack_12->SetBinContent(10,19.83049);
   hnumuCCinFV_stack_12->SetBinContent(11,10.91633);
   hnumuCCinFV_stack_12->SetBinContent(12,12.55175);
   hnumuCCinFV_stack_12->SetBinContent(13,8.570719);
   hnumuCCinFV_stack_12->SetBinContent(14,4.177015);
   hnumuCCinFV_stack_12->SetBinContent(15,5.493718);
   hnumuCCinFV_stack_12->SetBinContent(16,3.874598);
   hnumuCCinFV_stack_12->SetBinContent(17,2.783751);
   hnumuCCinFV_stack_12->SetBinContent(18,1.580242);
   hnumuCCinFV_stack_12->SetBinContent(19,2.652433);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9935806);
   hnumuCCinFV_stack_12->SetBinContent(21,1.123658);
   hnumuCCinFV_stack_12->SetBinContent(22,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(23,1.347063);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7336084);
   hnumuCCinFV_stack_12->SetBinError(1,1.430682);
   hnumuCCinFV_stack_12->SetBinError(2,2.271693);
   hnumuCCinFV_stack_12->SetBinError(3,3.092363);
   hnumuCCinFV_stack_12->SetBinError(4,4.006387);
   hnumuCCinFV_stack_12->SetBinError(5,4.430655);
   hnumuCCinFV_stack_12->SetBinError(6,3.894307);
   hnumuCCinFV_stack_12->SetBinError(7,2.884664);
   hnumuCCinFV_stack_12->SetBinError(8,3.041372);
   hnumuCCinFV_stack_12->SetBinError(9,2.251457);
   hnumuCCinFV_stack_12->SetBinError(10,2.2552);
   hnumuCCinFV_stack_12->SetBinError(11,1.633017);
   hnumuCCinFV_stack_12->SetBinError(12,1.905357);
   hnumuCCinFV_stack_12->SetBinError(13,1.523787);
   hnumuCCinFV_stack_12->SetBinError(14,1.094481);
   hnumuCCinFV_stack_12->SetBinError(15,1.243351);
   hnumuCCinFV_stack_12->SetBinError(16,0.9778452);
   hnumuCCinFV_stack_12->SetBinError(17,0.8684198);
   hnumuCCinFV_stack_12->SetBinError(18,0.6063523);
   hnumuCCinFV_stack_12->SetBinError(19,0.8367716);
   hnumuCCinFV_stack_12->SetBinError(20,0.5105881);
   hnumuCCinFV_stack_12->SetBinError(21,0.5188295);
   hnumuCCinFV_stack_12->SetBinError(22,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(23,0.5648839);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.4394482);
   hnumuCCinFV_stack_12->SetEntries(1565);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(3,1.562205);
   hnueCCinFV_stack_13->SetBinContent(4,1.318683);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(3,0.6050322);
   hnueCCinFV_stack_13->SetBinError(4,0.5542732);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__23->SetBinContent(1,22.07734);
   hmcerror__23->SetBinContent(2,69.11311);
   hmcerror__23->SetBinContent(3,150.1199);
   hmcerror__23->SetBinContent(4,225.7168);
   hmcerror__23->SetBinContent(5,268.7848);
   hmcerror__23->SetBinContent(6,225.0648);
   hmcerror__23->SetBinContent(7,177.7929);
   hmcerror__23->SetBinContent(8,133.4226);
   hmcerror__23->SetBinContent(9,105.0266);
   hmcerror__23->SetBinContent(10,91.51631);
   hmcerror__23->SetBinContent(11,74.27219);
   hmcerror__23->SetBinContent(12,46.60844);
   hmcerror__23->SetBinContent(13,39.12448);
   hmcerror__23->SetBinContent(14,24.1988);
   hmcerror__23->SetBinContent(15,21.82595);
   hmcerror__23->SetBinContent(16,17.56053);
   hmcerror__23->SetBinContent(17,18.42054);
   hmcerror__23->SetBinContent(18,8.577229);
   hmcerror__23->SetBinContent(19,9.623228);
   hmcerror__23->SetBinContent(20,8.913209);
   hmcerror__23->SetBinContent(21,5.673103);
   hmcerror__23->SetBinContent(22,4.338283);
   hmcerror__23->SetBinContent(23,3.644251);
   hmcerror__23->SetBinContent(24,2.782518);
   hmcerror__23->SetBinContent(25,1.127039);
   hmcerror__23->SetBinContent(26,9.356428);
   hmcerror__23->SetBinError(1,5.447954);
   hmcerror__23->SetBinError(2,14.45837);
   hmcerror__23->SetBinError(3,29.99518);
   hmcerror__23->SetBinError(4,47.21774);
   hmcerror__23->SetBinError(5,56.05592);
   hmcerror__23->SetBinError(6,49.5923);
   hmcerror__23->SetBinError(7,41.79537);
   hmcerror__23->SetBinError(8,28.43331);
   hmcerror__23->SetBinError(9,25.4218);
   hmcerror__23->SetBinError(10,20.02626);
   hmcerror__23->SetBinError(11,16.89751);
   hmcerror__23->SetBinError(12,11.91536);
   hmcerror__23->SetBinError(13,9.795236);
   hmcerror__23->SetBinError(14,6.370885);
   hmcerror__23->SetBinError(15,5.797009);
   hmcerror__23->SetBinError(16,4.513056);
   hmcerror__23->SetBinError(17,4.890386);
   hmcerror__23->SetBinError(18,2.544984);
   hmcerror__23->SetBinError(19,2.942193);
   hmcerror__23->SetBinError(20,2.819612);
   hmcerror__23->SetBinError(21,1.970335);
   hmcerror__23->SetBinError(22,1.785646);
   hmcerror__23->SetBinError(23,1.432034);
   hmcerror__23->SetBinError(24,1.247537);
   hmcerror__23->SetBinError(25,0.7445956);
   hmcerror__23->SetBinError(26,2.71825);
   hmcerror__23->SetEntries(1748.127);

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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3029[25] = {
   29,
   64,
   141,
   226,
   264,
   251,
   199,
   130,
   114,
   76,
   67,
   60,
   50,
   23,
   26,
   12,
   13,
   7,
   8,
   7,
   7,
   4,
   7,
   2,
   1};
   Double_t _felx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3029[25] = {
   5.5285,
   8.1273,
   11.87434,
   15.0333,
   16.24808,
   15.84298,
   14.10674,
   11.40175,
   10.67708,
   8.8425,
   8.3119,
   7.8743,
   7.2025,
   4.9457,
   5.2453,
   3.64022,
   3.77763,
   2.85954,
   3.0307,
   2.85954,
   2.85954,
   2.29683,
   2.85954,
   2,
   1};
   Double_t _fehx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3029[25] = {
   5.3201,
   7.9246,
   11.87434,
   15.0333,
   16.24808,
   15.84298,
   14.10674,
   11.40175,
   10.67708,
   8.6406,
   8.1094,
   7.6713,
   6.9985,
   4.7346,
   5.0358,
   3.4155,
   3.5552,
   2.61053,
   2.7896,
   2.61053,
   2.61053,
   1.98186,
   2.61053,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1650);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(308.2729);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1788.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1223.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 378.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_muon_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3030[25] = {
   0.2467667,
   0.2091987,
   0.1998082,
   0.2091902,
   0.2085532,
   0.2203467,
   0.235079,
   0.2131071,
   0.242051,
   0.2188272,
   0.2275079,
   0.255648,
   0.2503608,
   0.2632728,
   0.2656017,
   0.257,
   0.2654854,
   0.296714,
   0.3057387,
   0.3163408,
   0.3473117,
   0.4116019,
   0.392957,
   0.4483481,
   0.6606652};
   Double_t _fehx3030[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3030[25] = {
   0.2467667,
   0.2091987,
   0.1998082,
   0.2091902,
   0.2085532,
   0.2203467,
   0.235079,
   0.2131071,
   0.242051,
   0.2188272,
   0.2275079,
   0.255648,
   0.2503608,
   0.2632728,
   0.2656017,
   0.257,
   0.2654854,
   0.296714,
   0.3057387,
   0.3163408,
   0.3473117,
   0.4116019,
   0.392957,
   0.4483481,
   0.6606652};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1650);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3031[25] = {
   0.2467667,
   0.2091987,
   0.1998082,
   0.2091902,
   0.2085532,
   0.2203467,
   0.235079,
   0.2131071,
   0.242051,
   0.2188272,
   0.2275079,
   0.255648,
   0.2503608,
   0.2632728,
   0.2656017,
   0.257,
   0.2654854,
   0.296714,
   0.3057387,
   0.3163408,
   0.3473117,
   0.4116019,
   0.392957,
   0.4483481,
   0.6606652};
   Double_t _fehx3031[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3031[25] = {
   0.2467667,
   0.2091987,
   0.1998082,
   0.2091902,
   0.2085532,
   0.2203467,
   0.235079,
   0.2131071,
   0.242051,
   0.2188272,
   0.2275079,
   0.255648,
   0.2503608,
   0.2632728,
   0.2656017,
   0.257,
   0.2654854,
   0.296714,
   0.3057387,
   0.3163408,
   0.3473117,
   0.4116019,
   0.392957,
   0.4483481,
   0.6606652};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1650);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3032[25] = {
   1.313564,
   0.9260183,
   0.9392494,
   1.001255,
   0.9821985,
   1.115234,
   1.11928,
   0.9743476,
   1.085439,
   0.830453,
   0.9020874,
   1.287321,
   1.277972,
   0.9504605,
   1.191243,
   0.6833508,
   0.7057338,
   0.8161143,
   0.8313219,
   0.7853513,
   1.233893,
   0.9220238,
   1.920834,
   0.7187733,
   0.8872806};
   Double_t _felx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3032[25] = {
   0.2504151,
   0.1175942,
   0.07909907,
   0.06660248,
   0.06045014,
   0.07039295,
   0.07934363,
   0.08545594,
   0.1016607,
   0.09662212,
   0.1119113,
   0.1689458,
   0.1840919,
   0.2043779,
   0.240324,
   0.2072956,
   0.205077,
   0.3333874,
   0.3149359,
   0.3208205,
   0.5040522,
   0.529433,
   0.7846716,
   0.7187733,
   0.8872806};
   Double_t _fehx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3032[25] = {
   0.2409755,
   0.1146613,
   0.07909907,
   0.06660248,
   0.06045014,
   0.07039295,
   0.07934363,
   0.08545594,
   0.1016607,
   0.09441596,
   0.1091849,
   0.1645904,
   0.1788778,
   0.1956544,
   0.2307253,
   0.1944987,
   0.1930019,
   0.3043559,
   0.2898819,
   0.2928833,
   0.4601591,
   0.4568305,
   0.716342,
   0.5459694,
   1.206444};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1650);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.900893);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_muon_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
