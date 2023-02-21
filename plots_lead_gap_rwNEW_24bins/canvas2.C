#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 11:58:34 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-13.84615,-38.06929,101.5385,4209.662);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__4->SetBinContent(1,1903.464);
   hmc__4->SetBinContent(2,510.282);
   hmc__4->SetBinContent(3,464.0042);
   hmc__4->SetBinContent(4,409.5819);
   hmc__4->SetBinContent(5,362.2351);
   hmc__4->SetBinContent(6,318.8871);
   hmc__4->SetBinContent(7,271.5426);
   hmc__4->SetBinContent(8,223.2081);
   hmc__4->SetBinContent(9,183.9206);
   hmc__4->SetBinContent(10,147.6813);
   hmc__4->SetBinContent(11,142.2988);
   hmc__4->SetBinContent(12,128.0197);
   hmc__4->SetBinContent(13,99.25979);
   hmc__4->SetBinContent(14,82.07511);
   hmc__4->SetBinContent(15,71.05274);
   hmc__4->SetBinContent(16,52.13681);
   hmc__4->SetBinContent(17,41.16102);
   hmc__4->SetBinContent(18,40.7578);
   hmc__4->SetBinContent(19,40.68216);
   hmc__4->SetBinContent(20,32.84343);
   hmc__4->SetBinContent(21,27.06327);
   hmc__4->SetBinContent(22,21.92854);
   hmc__4->SetBinContent(23,19.96222);
   hmc__4->SetBinContent(24,12.65899);
   hmc__4->SetBinContent(25,182.0479);
   hmc__4->SetBinError(1,462.4876);
   hmc__4->SetBinError(2,151.2403);
   hmc__4->SetBinError(3,136.5815);
   hmc__4->SetBinError(4,123.1209);
   hmc__4->SetBinError(5,107.3421);
   hmc__4->SetBinError(6,89.32506);
   hmc__4->SetBinError(7,73.64278);
   hmc__4->SetBinError(8,62.58223);
   hmc__4->SetBinError(9,53.5765);
   hmc__4->SetBinError(10,50.2471);
   hmc__4->SetBinError(11,42.48964);
   hmc__4->SetBinError(12,37.32005);
   hmc__4->SetBinError(13,29.9352);
   hmc__4->SetBinError(14,25.09997);
   hmc__4->SetBinError(15,23.08645);
   hmc__4->SetBinError(16,19.02769);
   hmc__4->SetBinError(17,15.81719);
   hmc__4->SetBinError(18,15.79322);
   hmc__4->SetBinError(19,14.12725);
   hmc__4->SetBinError(20,14.21468);
   hmc__4->SetBinError(21,13.66801);
   hmc__4->SetBinError(22,11.07328);
   hmc__4->SetBinError(23,11.89759);
   hmc__4->SetBinError(24,8.670374);
   hmc__4->SetBinError(25,53.71944);
   hmc__4->SetMinimum(-38.06929);
   hmc__4->SetMaximum(3997.275);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,90);
   hs2_stack_2->SetMinimum(-1.033322e-08);
   hs2_stack_2->SetMaximum(1998.638);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,34.54283);
   hbadmatch_stack_1->SetBinContent(2,5.600102);
   hbadmatch_stack_1->SetBinContent(3,6.816591);
   hbadmatch_stack_1->SetBinContent(4,7.328869);
   hbadmatch_stack_1->SetBinContent(5,5.106959);
   hbadmatch_stack_1->SetBinContent(6,5.127688);
   hbadmatch_stack_1->SetBinContent(7,4.600993);
   hbadmatch_stack_1->SetBinContent(8,3.684948);
   hbadmatch_stack_1->SetBinContent(9,4.751912);
   hbadmatch_stack_1->SetBinContent(10,3.825183);
   hbadmatch_stack_1->SetBinContent(11,2.965651);
   hbadmatch_stack_1->SetBinContent(12,5.823492);
   hbadmatch_stack_1->SetBinContent(13,1.320042);
   hbadmatch_stack_1->SetBinContent(14,2.632057);
   hbadmatch_stack_1->SetBinContent(15,2.945352);
   hbadmatch_stack_1->SetBinContent(16,1.566457);
   hbadmatch_stack_1->SetBinContent(17,0.7868615);
   hbadmatch_stack_1->SetBinContent(18,2.935303);
   hbadmatch_stack_1->SetBinContent(19,1.177229);
   hbadmatch_stack_1->SetBinContent(20,1.839129);
   hbadmatch_stack_1->SetBinContent(21,1.946168);
   hbadmatch_stack_1->SetBinContent(22,2.056526);
   hbadmatch_stack_1->SetBinContent(23,0.6261855);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,13.87149);
   hbadmatch_stack_1->SetBinError(1,3.185192);
   hbadmatch_stack_1->SetBinError(2,1.188207);
   hbadmatch_stack_1->SetBinError(3,2.014087);
   hbadmatch_stack_1->SetBinError(4,1.383503);
   hbadmatch_stack_1->SetBinError(5,1.126668);
   hbadmatch_stack_1->SetBinError(6,1.128362);
   hbadmatch_stack_1->SetBinError(7,1.060092);
   hbadmatch_stack_1->SetBinError(8,1.032646);
   hbadmatch_stack_1->SetBinError(9,1.524378);
   hbadmatch_stack_1->SetBinError(10,1.053383);
   hbadmatch_stack_1->SetBinError(11,1.056555);
   hbadmatch_stack_1->SetBinError(12,2.19763);
   hbadmatch_stack_1->SetBinError(13,0.607989);
   hbadmatch_stack_1->SetBinError(14,0.867322);
   hbadmatch_stack_1->SetBinError(15,0.8001557);
   hbadmatch_stack_1->SetBinError(16,0.6750044);
   hbadmatch_stack_1->SetBinError(17,0.3934307);
   hbadmatch_stack_1->SetBinError(18,0.8385725);
   hbadmatch_stack_1->SetBinError(19,0.620839);
   hbadmatch_stack_1->SetBinError(20,0.7997811);
   hbadmatch_stack_1->SetBinError(21,0.6626819);
   hbadmatch_stack_1->SetBinError(22,0.7622846);
   hbadmatch_stack_1->SetBinError(23,0.362724);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,2.532502);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,193.6546);
   hext_stack_2->SetBinContent(2,25.63829);
   hext_stack_2->SetBinContent(3,25.75362);
   hext_stack_2->SetBinContent(4,22.02362);
   hext_stack_2->SetBinContent(5,17.75298);
   hext_stack_2->SetBinContent(6,18.09337);
   hext_stack_2->SetBinContent(7,21.98772);
   hext_stack_2->SetBinContent(8,17.52672);
   hext_stack_2->SetBinContent(9,17.60451);
   hext_stack_2->SetBinContent(10,5.814838);
   hext_stack_2->SetBinContent(11,11.15965);
   hext_stack_2->SetBinContent(12,20.28788);
   hext_stack_2->SetBinContent(13,13.23289);
   hext_stack_2->SetBinContent(14,8.000648);
   hext_stack_2->SetBinContent(15,4.385977);
   hext_stack_2->SetBinContent(16,1.697008);
   hext_stack_2->SetBinContent(17,2.752401);
   hext_stack_2->SetBinContent(18,2.014225);
   hext_stack_2->SetBinContent(19,5.083842);
   hext_stack_2->SetBinContent(20,2.681789);
   hext_stack_2->SetBinContent(22,2.028585);
   hext_stack_2->SetBinContent(23,3.62185);
   hext_stack_2->SetBinContent(24,1.048213);
   hext_stack_2->SetBinContent(25,22.90743);
   hext_stack_2->SetBinError(1,9.597684);
   hext_stack_2->SetBinError(2,3.415374);
   hext_stack_2->SetBinError(3,3.324934);
   hext_stack_2->SetBinError(4,3.072639);
   hext_stack_2->SetBinError(5,2.684805);
   hext_stack_2->SetBinError(6,2.717068);
   hext_stack_2->SetBinError(7,3.2322);
   hext_stack_2->SetBinError(8,2.926173);
   hext_stack_2->SetBinError(9,2.913324);
   hext_stack_2->SetBinError(10,1.683489);
   hext_stack_2->SetBinError(11,2.274989);
   hext_stack_2->SetBinError(12,3.365471);
   hext_stack_2->SetBinError(13,2.541991);
   hext_stack_2->SetBinError(14,1.961378);
   hext_stack_2->SetBinError(15,1.274103);
   hext_stack_2->SetBinError(16,0.8873887);
   hext_stack_2->SetBinError(17,1.07854);
   hext_stack_2->SetBinError(18,1.045894);
   hext_stack_2->SetBinError(19,1.601118);
   hext_stack_2->SetBinError(20,1.018372);
   hext_stack_2->SetBinError(22,0.8315593);
   hext_stack_2->SetBinError(23,1.422134);
   hext_stack_2->SetBinError(24,0.7595995);
   hext_stack_2->SetBinError(25,3.146097);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,21.59294);
   hdirt_stack_3->SetBinContent(2,2.559862);
   hdirt_stack_3->SetBinContent(3,1.773751);
   hdirt_stack_3->SetBinContent(4,2.404663);
   hdirt_stack_3->SetBinContent(5,3.097785);
   hdirt_stack_3->SetBinContent(6,1.725163);
   hdirt_stack_3->SetBinContent(7,1.873539);
   hdirt_stack_3->SetBinContent(8,1.681872);
   hdirt_stack_3->SetBinContent(9,0.7751814);
   hdirt_stack_3->SetBinContent(10,1.257509);
   hdirt_stack_3->SetBinContent(11,1.038013);
   hdirt_stack_3->SetBinContent(12,1.472855);
   hdirt_stack_3->SetBinContent(13,0.2524148);
   hdirt_stack_3->SetBinContent(14,1.137847);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,4.423472);
   hdirt_stack_3->SetBinError(1,2.733414);
   hdirt_stack_3->SetBinError(2,0.7524229);
   hdirt_stack_3->SetBinError(3,0.5784357);
   hdirt_stack_3->SetBinError(4,0.8419124);
   hdirt_stack_3->SetBinError(5,0.8396956);
   hdirt_stack_3->SetBinError(6,0.6391258);
   hdirt_stack_3->SetBinError(7,0.7301906);
   hdirt_stack_3->SetBinError(8,0.6672434);
   hdirt_stack_3->SetBinError(9,0.4918152);
   hdirt_stack_3->SetBinError(10,0.6355609);
   hdirt_stack_3->SetBinError(11,0.5280749);
   hdirt_stack_3->SetBinError(12,0.6412515);
   hdirt_stack_3->SetBinError(13,0.2524148);
   hdirt_stack_3->SetBinError(14,0.5432688);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,1.143512);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,147.7062);
   houtFV_stack_4->SetBinContent(2,16.35836);
   houtFV_stack_4->SetBinContent(3,19.69314);
   houtFV_stack_4->SetBinContent(4,15.01256);
   houtFV_stack_4->SetBinContent(5,21.73937);
   houtFV_stack_4->SetBinContent(6,23.36411);
   houtFV_stack_4->SetBinContent(7,20.03493);
   houtFV_stack_4->SetBinContent(8,17.69147);
   houtFV_stack_4->SetBinContent(9,11.40479);
   houtFV_stack_4->SetBinContent(10,12.50839);
   houtFV_stack_4->SetBinContent(11,13.72602);
   houtFV_stack_4->SetBinContent(12,7.427375);
   houtFV_stack_4->SetBinContent(13,7.582505);
   houtFV_stack_4->SetBinContent(14,7.558963);
   houtFV_stack_4->SetBinContent(15,6.886693);
   houtFV_stack_4->SetBinContent(16,5.824724);
   houtFV_stack_4->SetBinContent(17,3.514436);
   houtFV_stack_4->SetBinContent(18,4.635503);
   houtFV_stack_4->SetBinContent(19,3.718984);
   houtFV_stack_4->SetBinContent(20,3.96705);
   houtFV_stack_4->SetBinContent(21,3.122696);
   houtFV_stack_4->SetBinContent(22,2.812596);
   houtFV_stack_4->SetBinContent(23,1.125349);
   houtFV_stack_4->SetBinContent(24,1.510161);
   houtFV_stack_4->SetBinContent(25,18.29702);
   houtFV_stack_4->SetBinError(1,6.054979);
   houtFV_stack_4->SetBinError(2,1.990517);
   houtFV_stack_4->SetBinError(3,2.247175);
   houtFV_stack_4->SetBinError(4,1.835235);
   houtFV_stack_4->SetBinError(5,2.363717);
   houtFV_stack_4->SetBinError(6,2.433569);
   houtFV_stack_4->SetBinError(7,2.216073);
   houtFV_stack_4->SetBinError(8,2.147604);
   houtFV_stack_4->SetBinError(9,1.606291);
   houtFV_stack_4->SetBinError(10,1.760958);
   houtFV_stack_4->SetBinError(11,1.850917);
   houtFV_stack_4->SetBinError(12,1.359608);
   houtFV_stack_4->SetBinError(13,1.389381);
   houtFV_stack_4->SetBinError(14,1.357811);
   houtFV_stack_4->SetBinError(15,1.347448);
   houtFV_stack_4->SetBinError(16,1.314445);
   houtFV_stack_4->SetBinError(17,0.940519);
   houtFV_stack_4->SetBinError(18,1.101787);
   houtFV_stack_4->SetBinError(19,0.9390446);
   houtFV_stack_4->SetBinError(20,0.9934837);
   houtFV_stack_4->SetBinError(21,0.8988017);
   houtFV_stack_4->SetBinError(22,0.8898348);
   houtFV_stack_4->SetBinError(23,0.5194673);
   houtFV_stack_4->SetBinError(24,0.6225427);
   houtFV_stack_4->SetBinError(25,2.192724);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,44.74831);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.787614);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.315465);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.3251);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.33631);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.654252);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.736456);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.895712);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.956584);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.325086);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.520058);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6976678);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.658894);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.925444);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.227875);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7929923);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8136634);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7425955);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7000592);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6360197);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.633311);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4378204);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5935503);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2765497);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4011722);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2285151);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4222841);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1427183);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5135722);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,5.968296);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.747666);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.72964);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.259244);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.811844);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.799394);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.269622);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.227272);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.324926);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.75837);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5828529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4000385);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4701832);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3957178);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4839846);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3747542);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3365421);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4338769);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.08369995);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,771.7579);
   hNCpi0inFVres_stack_7->SetBinContent(2,248.4464);
   hNCpi0inFVres_stack_7->SetBinContent(3,221.7901);
   hNCpi0inFVres_stack_7->SetBinContent(4,199.1407);
   hNCpi0inFVres_stack_7->SetBinContent(5,169.236);
   hNCpi0inFVres_stack_7->SetBinContent(6,138.0484);
   hNCpi0inFVres_stack_7->SetBinContent(7,121.3187);
   hNCpi0inFVres_stack_7->SetBinContent(8,95.50291);
   hNCpi0inFVres_stack_7->SetBinContent(9,80.39167);
   hNCpi0inFVres_stack_7->SetBinContent(10,66.12325);
   hNCpi0inFVres_stack_7->SetBinContent(11,59.44751);
   hNCpi0inFVres_stack_7->SetBinContent(12,47.87063);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.4877);
   hNCpi0inFVres_stack_7->SetBinContent(14,31.5992);
   hNCpi0inFVres_stack_7->SetBinContent(15,29.81061);
   hNCpi0inFVres_stack_7->SetBinContent(16,21.02888);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.69034);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.42693);
   hNCpi0inFVres_stack_7->SetBinContent(19,14.44429);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.1334);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.981352);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.184366);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.096346);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.969697);
   hNCpi0inFVres_stack_7->SetBinContent(25,48.29511);
   hNCpi0inFVres_stack_7->SetBinError(1,9.083894);
   hNCpi0inFVres_stack_7->SetBinError(2,5.178353);
   hNCpi0inFVres_stack_7->SetBinError(3,4.877446);
   hNCpi0inFVres_stack_7->SetBinError(4,4.640038);
   hNCpi0inFVres_stack_7->SetBinError(5,4.277535);
   hNCpi0inFVres_stack_7->SetBinError(6,3.814757);
   hNCpi0inFVres_stack_7->SetBinError(7,3.590688);
   hNCpi0inFVres_stack_7->SetBinError(8,3.179782);
   hNCpi0inFVres_stack_7->SetBinError(9,2.920355);
   hNCpi0inFVres_stack_7->SetBinError(10,2.610574);
   hNCpi0inFVres_stack_7->SetBinError(11,2.536443);
   hNCpi0inFVres_stack_7->SetBinError(12,2.298231);
   hNCpi0inFVres_stack_7->SetBinError(13,2.001328);
   hNCpi0inFVres_stack_7->SetBinError(14,1.832553);
   hNCpi0inFVres_stack_7->SetBinError(15,1.815733);
   hNCpi0inFVres_stack_7->SetBinError(16,1.492272);
   hNCpi0inFVres_stack_7->SetBinError(17,1.358521);
   hNCpi0inFVres_stack_7->SetBinError(18,1.176286);
   hNCpi0inFVres_stack_7->SetBinError(19,1.255718);
   hNCpi0inFVres_stack_7->SetBinError(20,1.204379);
   hNCpi0inFVres_stack_7->SetBinError(21,1.029572);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9456634);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8418377);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5110389);
   hNCpi0inFVres_stack_7->SetBinError(25,2.305783);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,151.7173);
   hNCpi0inFVdis_stack_8->SetBinContent(2,42.90208);
   hNCpi0inFVdis_stack_8->SetBinContent(3,41.37471);
   hNCpi0inFVdis_stack_8->SetBinContent(4,39.76814);
   hNCpi0inFVdis_stack_8->SetBinContent(5,30.92495);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.19462);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.30938);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.0767);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.26842);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.28668);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.148575);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.869328);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.22522);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.78595);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.101731);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.325189);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.965626);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.802298);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.778142);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.54779);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.298602);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.434862);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.449144);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.7112858);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.759134);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.938145);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.164413);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.112035);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.112619);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.813695);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.649893);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.496808);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.430778);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.252537);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.161803);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9420205);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.001045);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9569148);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7683127);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7158645);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7353542);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3925907);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5064487);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6646471);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3591081);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4865239);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3909353);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3827183);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2436282);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.903748);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.446568);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2126346);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,232.0548);
   hCCpi0inFV_stack_10->SetBinContent(2,66.867);
   hCCpi0inFV_stack_10->SetBinContent(3,63.78775);
   hCCpi0inFV_stack_10->SetBinContent(4,57.35365);
   hCCpi0inFV_stack_10->SetBinContent(5,51.50856);
   hCCpi0inFV_stack_10->SetBinContent(6,53.30516);
   hCCpi0inFV_stack_10->SetBinContent(7,38.93921);
   hCCpi0inFV_stack_10->SetBinContent(8,33.60822);
   hCCpi0inFV_stack_10->SetBinContent(9,25.33044);
   hCCpi0inFV_stack_10->SetBinContent(10,23.02215);
   hCCpi0inFV_stack_10->SetBinContent(11,19.82582);
   hCCpi0inFV_stack_10->SetBinContent(12,14.84968);
   hCCpi0inFV_stack_10->SetBinContent(13,14.092);
   hCCpi0inFV_stack_10->SetBinContent(14,12.93639);
   hCCpi0inFV_stack_10->SetBinContent(15,9.336215);
   hCCpi0inFV_stack_10->SetBinContent(16,8.407966);
   hCCpi0inFV_stack_10->SetBinContent(17,6.355279);
   hCCpi0inFV_stack_10->SetBinContent(18,6.066901);
   hCCpi0inFV_stack_10->SetBinContent(19,4.063148);
   hCCpi0inFV_stack_10->SetBinContent(20,4.69134);
   hCCpi0inFV_stack_10->SetBinContent(21,3.314973);
   hCCpi0inFV_stack_10->SetBinContent(22,1.566961);
   hCCpi0inFV_stack_10->SetBinContent(23,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(24,2.258955);
   hCCpi0inFV_stack_10->SetBinContent(25,21.1099);
   hCCpi0inFV_stack_10->SetBinError(1,7.643881);
   hCCpi0inFV_stack_10->SetBinError(2,4.107871);
   hCCpi0inFV_stack_10->SetBinError(3,4.048575);
   hCCpi0inFV_stack_10->SetBinError(4,3.795425);
   hCCpi0inFV_stack_10->SetBinError(5,3.540108);
   hCCpi0inFV_stack_10->SetBinError(6,3.659505);
   hCCpi0inFV_stack_10->SetBinError(7,3.122677);
   hCCpi0inFV_stack_10->SetBinError(8,2.856698);
   hCCpi0inFV_stack_10->SetBinError(9,2.430684);
   hCCpi0inFV_stack_10->SetBinError(10,2.397032);
   hCCpi0inFV_stack_10->SetBinError(11,2.241676);
   hCCpi0inFV_stack_10->SetBinError(12,1.922259);
   hCCpi0inFV_stack_10->SetBinError(13,1.887358);
   hCCpi0inFV_stack_10->SetBinError(14,1.862367);
   hCCpi0inFV_stack_10->SetBinError(15,1.507263);
   hCCpi0inFV_stack_10->SetBinError(16,1.379485);
   hCCpi0inFV_stack_10->SetBinError(17,1.241112);
   hCCpi0inFV_stack_10->SetBinError(18,1.243511);
   hCCpi0inFV_stack_10->SetBinError(19,1.060388);
   hCCpi0inFV_stack_10->SetBinError(20,1.127654);
   hCCpi0inFV_stack_10->SetBinError(21,0.8766945);
   hCCpi0inFV_stack_10->SetBinError(22,0.5540095);
   hCCpi0inFV_stack_10->SetBinError(23,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(24,0.7784621);
   hCCpi0inFV_stack_10->SetBinError(25,2.381112);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,146.5509);
   hNCinFV_stack_11->SetBinContent(2,41.85395);
   hNCinFV_stack_11->SetBinContent(3,33.33213);
   hNCinFV_stack_11->SetBinContent(4,28.33249);
   hNCinFV_stack_11->SetBinContent(5,25.4082);
   hNCinFV_stack_11->SetBinContent(6,21.35687);
   hNCinFV_stack_11->SetBinContent(7,19.19638);
   hNCinFV_stack_11->SetBinContent(8,13.38922);
   hNCinFV_stack_11->SetBinContent(9,13.2861);
   hNCinFV_stack_11->SetBinContent(10,10.39876);
   hNCinFV_stack_11->SetBinContent(11,15.12707);
   hNCinFV_stack_11->SetBinContent(12,9.663465);
   hNCinFV_stack_11->SetBinContent(13,7.762482);
   hNCinFV_stack_11->SetBinContent(14,4.693038);
   hNCinFV_stack_11->SetBinContent(15,4.736756);
   hNCinFV_stack_11->SetBinContent(16,4.201554);
   hNCinFV_stack_11->SetBinContent(17,3.714533);
   hNCinFV_stack_11->SetBinContent(18,4.21447);
   hNCinFV_stack_11->SetBinContent(19,3.321102);
   hNCinFV_stack_11->SetBinContent(20,2.980925);
   hNCinFV_stack_11->SetBinContent(21,2.732646);
   hNCinFV_stack_11->SetBinContent(22,1.178602);
   hNCinFV_stack_11->SetBinContent(23,1.127039);
   hNCinFV_stack_11->SetBinContent(24,1.949166);
   hNCinFV_stack_11->SetBinContent(25,18.12091);
   hNCinFV_stack_11->SetBinError(1,6.04098);
   hNCinFV_stack_11->SetBinError(2,3.271967);
   hNCinFV_stack_11->SetBinError(3,2.864038);
   hNCinFV_stack_11->SetBinError(4,2.668942);
   hNCinFV_stack_11->SetBinError(5,2.520866);
   hNCinFV_stack_11->SetBinError(6,2.305596);
   hNCinFV_stack_11->SetBinError(7,2.211658);
   hNCinFV_stack_11->SetBinError(8,1.819752);
   hNCinFV_stack_11->SetBinError(9,1.841053);
   hNCinFV_stack_11->SetBinError(10,1.665734);
   hNCinFV_stack_11->SetBinError(11,2.010915);
   hNCinFV_stack_11->SetBinError(12,1.606516);
   hNCinFV_stack_11->SetBinError(13,1.400809);
   hNCinFV_stack_11->SetBinError(14,1.056454);
   hNCinFV_stack_11->SetBinError(15,1.128017);
   hNCinFV_stack_11->SetBinError(16,1.05767);
   hNCinFV_stack_11->SetBinError(17,0.9615599);
   hNCinFV_stack_11->SetBinError(18,0.9619446);
   hNCinFV_stack_11->SetBinError(19,0.9204367);
   hNCinFV_stack_11->SetBinError(20,0.8552677);
   hNCinFV_stack_11->SetBinError(21,0.8554385);
   hNCinFV_stack_11->SetBinError(22,0.4811646);
   hNCinFV_stack_11->SetBinError(23,0.5201044);
   hNCinFV_stack_11->SetBinError(24,0.7604681);
   hNCinFV_stack_11->SetBinError(25,2.140545);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,127.6928);
   hnumuCCinFV_stack_12->SetBinContent(2,49.18211);
   hnumuCCinFV_stack_12->SetBinContent(3,38.37756);
   hnumuCCinFV_stack_12->SetBinContent(4,28.77484);
   hnumuCCinFV_stack_12->SetBinContent(5,29.51868);
   hnumuCCinFV_stack_12->SetBinContent(6,23.1983);
   hnumuCCinFV_stack_12->SetBinContent(7,16.49645);
   hnumuCCinFV_stack_12->SetBinContent(8,17.02);
   hnumuCCinFV_stack_12->SetBinContent(9,11.7786);
   hnumuCCinFV_stack_12->SetBinContent(10,8.756351);
   hnumuCCinFV_stack_12->SetBinContent(11,6.987579);
   hnumuCCinFV_stack_12->SetBinContent(12,8.625145);
   hnumuCCinFV_stack_12->SetBinContent(13,6.115642);
   hnumuCCinFV_stack_12->SetBinContent(14,6.497728);
   hnumuCCinFV_stack_12->SetBinContent(15,5.987326);
   hnumuCCinFV_stack_12->SetBinContent(16,4.051124);
   hnumuCCinFV_stack_12->SetBinContent(17,6.033124);
   hnumuCCinFV_stack_12->SetBinContent(18,3.83362);
   hnumuCCinFV_stack_12->SetBinContent(19,4.129202);
   hnumuCCinFV_stack_12->SetBinContent(20,1.884821);
   hnumuCCinFV_stack_12->SetBinContent(21,3.663034);
   hnumuCCinFV_stack_12->SetBinContent(22,2.244154);
   hnumuCCinFV_stack_12->SetBinContent(23,3.914215);
   hnumuCCinFV_stack_12->SetBinContent(24,1.795904);
   hnumuCCinFV_stack_12->SetBinContent(25,22.84546);
   hnumuCCinFV_stack_12->SetBinError(1,6.514026);
   hnumuCCinFV_stack_12->SetBinError(2,4.36394);
   hnumuCCinFV_stack_12->SetBinError(3,4.095277);
   hnumuCCinFV_stack_12->SetBinError(4,3.097463);
   hnumuCCinFV_stack_12->SetBinError(5,3.303645);
   hnumuCCinFV_stack_12->SetBinError(6,2.94084);
   hnumuCCinFV_stack_12->SetBinError(7,2.104517);
   hnumuCCinFV_stack_12->SetBinError(8,2.33436);
   hnumuCCinFV_stack_12->SetBinError(9,1.758573);
   hnumuCCinFV_stack_12->SetBinError(10,1.544053);
   hnumuCCinFV_stack_12->SetBinError(11,1.259393);
   hnumuCCinFV_stack_12->SetBinError(12,1.501785);
   hnumuCCinFV_stack_12->SetBinError(13,1.236262);
   hnumuCCinFV_stack_12->SetBinError(14,1.284549);
   hnumuCCinFV_stack_12->SetBinError(15,1.848756);
   hnumuCCinFV_stack_12->SetBinError(16,1.016927);
   hnumuCCinFV_stack_12->SetBinError(17,1.374427);
   hnumuCCinFV_stack_12->SetBinError(18,1.224674);
   hnumuCCinFV_stack_12->SetBinError(19,1.092545);
   hnumuCCinFV_stack_12->SetBinError(20,0.7365376);
   hnumuCCinFV_stack_12->SetBinError(21,1.006735);
   hnumuCCinFV_stack_12->SetBinError(22,0.8798925);
   hnumuCCinFV_stack_12->SetBinError(23,1.276144);
   hnumuCCinFV_stack_12->SetBinError(24,0.7355875);
   hnumuCCinFV_stack_12->SetBinError(25,2.544848);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,25.03099);
   hnueCCinFV_stack_13->SetBinContent(2,2.087336);
   hnueCCinFV_stack_13->SetBinContent(3,2.203865);
   hnueCCinFV_stack_13->SetBinContent(4,1.858039);
   hnueCCinFV_stack_13->SetBinContent(5,1.681907);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(8,0.8057001);
   hnueCCinFV_stack_13->SetBinContent(9,0.7583942);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.9856228);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,1.213498);
   hnueCCinFV_stack_13->SetBinError(1,3.301346);
   hnueCCinFV_stack_13->SetBinError(2,0.8584721);
   hnueCCinFV_stack_13->SetBinError(3,0.8124716);
   hnueCCinFV_stack_13->SetBinError(4,0.7906309);
   hnueCCinFV_stack_13->SetBinError(5,0.7074139);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.3812133);
   hnueCCinFV_stack_13->SetBinError(8,0.4980907);
   hnueCCinFV_stack_13->SetBinError(9,0.4491572);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.5067728);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.6365083);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__5->SetBinContent(1,1903.464);
   hmcerror__5->SetBinContent(2,510.282);
   hmcerror__5->SetBinContent(3,464.0042);
   hmcerror__5->SetBinContent(4,409.5819);
   hmcerror__5->SetBinContent(5,362.2351);
   hmcerror__5->SetBinContent(6,318.8871);
   hmcerror__5->SetBinContent(7,271.5426);
   hmcerror__5->SetBinContent(8,223.2081);
   hmcerror__5->SetBinContent(9,183.9206);
   hmcerror__5->SetBinContent(10,147.6813);
   hmcerror__5->SetBinContent(11,142.2988);
   hmcerror__5->SetBinContent(12,128.0197);
   hmcerror__5->SetBinContent(13,99.25979);
   hmcerror__5->SetBinContent(14,82.07511);
   hmcerror__5->SetBinContent(15,71.05274);
   hmcerror__5->SetBinContent(16,52.13681);
   hmcerror__5->SetBinContent(17,41.16102);
   hmcerror__5->SetBinContent(18,40.7578);
   hmcerror__5->SetBinContent(19,40.68216);
   hmcerror__5->SetBinContent(20,32.84343);
   hmcerror__5->SetBinContent(21,27.06327);
   hmcerror__5->SetBinContent(22,21.92854);
   hmcerror__5->SetBinContent(23,19.96222);
   hmcerror__5->SetBinContent(24,12.65899);
   hmcerror__5->SetBinContent(25,182.0479);
   hmcerror__5->SetBinError(1,462.4876);
   hmcerror__5->SetBinError(2,151.2403);
   hmcerror__5->SetBinError(3,136.5815);
   hmcerror__5->SetBinError(4,123.1209);
   hmcerror__5->SetBinError(5,107.3421);
   hmcerror__5->SetBinError(6,89.32506);
   hmcerror__5->SetBinError(7,73.64278);
   hmcerror__5->SetBinError(8,62.58223);
   hmcerror__5->SetBinError(9,53.5765);
   hmcerror__5->SetBinError(10,50.2471);
   hmcerror__5->SetBinError(11,42.48964);
   hmcerror__5->SetBinError(12,37.32005);
   hmcerror__5->SetBinError(13,29.9352);
   hmcerror__5->SetBinError(14,25.09997);
   hmcerror__5->SetBinError(15,23.08645);
   hmcerror__5->SetBinError(16,19.02769);
   hmcerror__5->SetBinError(17,15.81719);
   hmcerror__5->SetBinError(18,15.79322);
   hmcerror__5->SetBinError(19,14.12725);
   hmcerror__5->SetBinError(20,14.21468);
   hmcerror__5->SetBinError(21,13.66801);
   hmcerror__5->SetBinError(22,11.07328);
   hmcerror__5->SetBinError(23,11.89759);
   hmcerror__5->SetBinError(24,8.670374);
   hmcerror__5->SetBinError(25,53.71944);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3005[24] = {
   1716,
   384,
   402,
   366,
   280,
   303,
   238,
   184,
   150,
   131,
   117,
   107,
   71,
   67,
   54,
   70,
   28,
   46,
   29,
   31,
   27,
   14,
   7,
   9};
   Double_t _felx3005[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3005[24] = {
   41.42463,
   19.59592,
   20.04994,
   19.13113,
   16.7332,
   17.4069,
   15.42725,
   13.56466,
   12.24745,
   11.44552,
   10.81665,
   10.34408,
   8.5518,
   8.3119,
   7.4785,
   8.4925,
   5.4358,
   6.9153,
   5.5285,
   5.7094,
   5.3414,
   3.9102,
   2.85954,
   3.19354};
   Double_t _fehx3005[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3005[24] = {
   41.42463,
   19.59592,
   20.04994,
   19.13113,
   16.7332,
   17.4069,
   15.42725,
   13.56466,
   12.24745,
   11.44552,
   10.81665,
   10.34408,
   8.3496,
   8.1094,
   7.275,
   8.2902,
   5.2271,
   6.7108,
   5.3201,
   5.5017,
   5.1322,
   3.6898,
   2.61053,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(3.726414);
   Graph_Graph3005->SetMaximum(1932.753);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4831.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 110.2","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 443.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 44.8","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 378.9","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  89.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.8","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2421.9","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  459.3","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.7","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 754.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 420.5","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 416.6","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 40.5","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3006[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3006[24] = {
   0.2429715,
   0.2963857,
   0.294354,
   0.3006014,
   0.2963326,
   0.280115,
   0.2712015,
   0.2803762,
   0.2913024,
   0.3402402,
   0.2985946,
   0.291518,
   0.3015843,
   0.3058171,
   0.32492,
   0.3649569,
   0.3842759,
   0.3874895,
   0.3472591,
   0.4328015,
   0.5050391,
   0.5049712,
   0.5960057,
   0.6849181};
   Double_t _fehx3006[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3006[24] = {
   0.2429715,
   0.2963857,
   0.294354,
   0.3006014,
   0.2963326,
   0.280115,
   0.2712015,
   0.2803762,
   0.2913024,
   0.3402402,
   0.2985946,
   0.291518,
   0.3015843,
   0.3058171,
   0.32492,
   0.3649569,
   0.3842759,
   0.3874895,
   0.3472591,
   0.4328015,
   0.5050391,
   0.5049712,
   0.5960057,
   0.6849181};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,99);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3007[24] = {
   0.2353697,
   0.288715,
   0.2819001,
   0.2915187,
   0.2849252,
   0.2654349,
   0.2514314,
   0.2611372,
   0.2575318,
   0.2717734,
   0.2595639,
   0.2333254,
   0.2443361,
   0.2370674,
   0.2680485,
   0.2814179,
   0.2449525,
   0.2542061,
   0.2288479,
   0.2532813,
   0.2863712,
   0.2474424,
   0.2411724,
   0.2854584};
   Double_t _fehx3007[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3007[24] = {
   0.2353697,
   0.288715,
   0.2819001,
   0.2915187,
   0.2849252,
   0.2654349,
   0.2514314,
   0.2611372,
   0.2575318,
   0.2717734,
   0.2595639,
   0.2333254,
   0.2443361,
   0.2370674,
   0.2680485,
   0.2814179,
   0.2449525,
   0.2542061,
   0.2288479,
   0.2532813,
   0.2863712,
   0.2474424,
   0.2411724,
   0.2854584};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,99);
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
   
   Double_t _fx3008[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3008[24] = {
   0.9015141,
   0.7525251,
   0.8663716,
   0.8935942,
   0.7729786,
   0.9501795,
   0.8764738,
   0.824343,
   0.8155695,
   0.8870455,
   0.8222137,
   0.8358088,
   0.7152947,
   0.8163254,
   0.7599988,
   1.342622,
   0.6802553,
   1.128618,
   0.7128431,
   0.9438722,
   0.9976622,
   0.6384374,
   0.3506625,
   0.710957};
   Double_t _felx3008[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3008[24] = {
   0.02176275,
   0.03840213,
   0.04321069,
   0.04670891,
   0.04619431,
   0.05458639,
   0.05681336,
   0.06077137,
   0.06659097,
   0.07750153,
   0.07601369,
   0.08080068,
   0.08615573,
   0.1012719,
   0.1052528,
   0.1628888,
   0.1320618,
   0.1696681,
   0.1358949,
   0.1738369,
   0.1973671,
   0.1783156,
   0.1432476,
   0.2522744};
   Double_t _fehx3008[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3008[24] = {
   0.02176275,
   0.03840213,
   0.04321069,
   0.04670891,
   0.04619431,
   0.05458639,
   0.05681336,
   0.06077137,
   0.06659097,
   0.07750153,
   0.07601369,
   0.08080068,
   0.08411866,
   0.09880462,
   0.1023887,
   0.1590086,
   0.1269915,
   0.1646507,
   0.1307723,
   0.167513,
   0.1896371,
   0.1682647,
   0.1307736,
   0.2336837};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0.07799333);
   Graph_Graph3008->SetMaximum(1.631052);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
