#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 12:31:12 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-13.84615,-13.61761,101.5385,1434.15);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hmc__4->SetBinContent(1,680.8807);
   hmc__4->SetBinContent(2,376.2545);
   hmc__4->SetBinContent(3,336.8822);
   hmc__4->SetBinContent(4,286.994);
   hmc__4->SetBinContent(5,262.1429);
   hmc__4->SetBinContent(6,220.1418);
   hmc__4->SetBinContent(7,186.0715);
   hmc__4->SetBinContent(8,154.9437);
   hmc__4->SetBinContent(9,121.2371);
   hmc__4->SetBinContent(10,104.4885);
   hmc__4->SetBinContent(11,96.25548);
   hmc__4->SetBinContent(12,90.4912);
   hmc__4->SetBinContent(13,75.43942);
   hmc__4->SetBinContent(14,57.0262);
   hmc__4->SetBinContent(15,53.0567);
   hmc__4->SetBinContent(16,40.53886);
   hmc__4->SetBinContent(17,31.02116);
   hmc__4->SetBinContent(18,24.30119);
   hmc__4->SetBinContent(19,26.55536);
   hmc__4->SetBinContent(20,24.65829);
   hmc__4->SetBinContent(21,25.62874);
   hmc__4->SetBinContent(22,16.29778);
   hmc__4->SetBinContent(23,13.81409);
   hmc__4->SetBinContent(24,13.00784);
   hmc__4->SetBinContent(25,9.125856);
   hmc__4->SetBinContent(26,116.3421);
   hmc__4->SetBinError(1,145.9479);
   hmc__4->SetBinError(2,93.80321);
   hmc__4->SetBinError(3,79.52343);
   hmc__4->SetBinError(4,70.12465);
   hmc__4->SetBinError(5,66.6544);
   hmc__4->SetBinError(6,53.33534);
   hmc__4->SetBinError(7,42.58822);
   hmc__4->SetBinError(8,38.93038);
   hmc__4->SetBinError(9,32.18231);
   hmc__4->SetBinError(10,26.441);
   hmc__4->SetBinError(11,23.18744);
   hmc__4->SetBinError(12,19.88591);
   hmc__4->SetBinError(13,16.57519);
   hmc__4->SetBinError(14,14.94661);
   hmc__4->SetBinError(15,13.77321);
   hmc__4->SetBinError(16,12.97928);
   hmc__4->SetBinError(17,8.102609);
   hmc__4->SetBinError(18,7.575733);
   hmc__4->SetBinError(19,7.277803);
   hmc__4->SetBinError(20,9.788343);
   hmc__4->SetBinError(21,6.742001);
   hmc__4->SetBinError(22,6.03917);
   hmc__4->SetBinError(23,4.655383);
   hmc__4->SetBinError(24,4.157876);
   hmc__4->SetBinError(25,4.626795);
   hmc__4->SetBinError(26,36.12857);
   hmc__4->SetMinimum(-13.61761);
   hmc__4->SetMaximum(1361.761);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,90);
   hs2_stack_2->SetMinimum(-4.228303e-08);
   hs2_stack_2->SetMaximum(714.9248);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hbadmatch_stack_1->SetBinContent(1,9.697744);
   hbadmatch_stack_1->SetBinContent(2,5.459147);
   hbadmatch_stack_1->SetBinContent(3,5.720333);
   hbadmatch_stack_1->SetBinContent(4,5.641854);
   hbadmatch_stack_1->SetBinContent(5,5.425271);
   hbadmatch_stack_1->SetBinContent(6,2.679846);
   hbadmatch_stack_1->SetBinContent(7,3.155803);
   hbadmatch_stack_1->SetBinContent(8,4.142812);
   hbadmatch_stack_1->SetBinContent(9,2.772416);
   hbadmatch_stack_1->SetBinContent(10,2.990265);
   hbadmatch_stack_1->SetBinContent(11,2.240845);
   hbadmatch_stack_1->SetBinContent(12,5.715791);
   hbadmatch_stack_1->SetBinContent(13,2.860622);
   hbadmatch_stack_1->SetBinContent(14,1.508433);
   hbadmatch_stack_1->SetBinContent(15,0.8770706);
   hbadmatch_stack_1->SetBinContent(16,2.016719);
   hbadmatch_stack_1->SetBinContent(17,2.179284);
   hbadmatch_stack_1->SetBinContent(18,1.422578);
   hbadmatch_stack_1->SetBinContent(19,1.209661);
   hbadmatch_stack_1->SetBinContent(20,0.9725583);
   hbadmatch_stack_1->SetBinContent(21,1.445698);
   hbadmatch_stack_1->SetBinContent(22,1.178602);
   hbadmatch_stack_1->SetBinContent(23,1.243012);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.6367154);
   hbadmatch_stack_1->SetBinContent(26,8.190277);
   hbadmatch_stack_1->SetBinError(1,1.604668);
   hbadmatch_stack_1->SetBinError(2,1.247054);
   hbadmatch_stack_1->SetBinError(3,1.210746);
   hbadmatch_stack_1->SetBinError(4,1.189413);
   hbadmatch_stack_1->SetBinError(5,1.172627);
   hbadmatch_stack_1->SetBinError(6,0.7954008);
   hbadmatch_stack_1->SetBinError(7,0.9064474);
   hbadmatch_stack_1->SetBinError(8,1.045706);
   hbadmatch_stack_1->SetBinError(9,1.316269);
   hbadmatch_stack_1->SetBinError(10,0.9666639);
   hbadmatch_stack_1->SetBinError(11,0.772252);
   hbadmatch_stack_1->SetBinError(12,1.401327);
   hbadmatch_stack_1->SetBinError(13,1.990912);
   hbadmatch_stack_1->SetBinError(14,0.6978629);
   hbadmatch_stack_1->SetBinError(15,0.5197486);
   hbadmatch_stack_1->SetBinError(16,0.6396091);
   hbadmatch_stack_1->SetBinError(17,0.7623383);
   hbadmatch_stack_1->SetBinError(18,0.6154319);
   hbadmatch_stack_1->SetBinError(19,0.619912);
   hbadmatch_stack_1->SetBinError(20,0.5121815);
   hbadmatch_stack_1->SetBinError(21,0.7498372);
   hbadmatch_stack_1->SetBinError(22,0.4811646);
   hbadmatch_stack_1->SetBinError(23,0.6727603);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.3697897);
   hbadmatch_stack_1->SetBinError(26,1.502843);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hext_stack_2->SetBinContent(1,70.60443);
   hext_stack_2->SetBinContent(2,18.97712);
   hext_stack_2->SetBinContent(3,18.67149);
   hext_stack_2->SetBinContent(4,13.42325);
   hext_stack_2->SetBinContent(5,15.5947);
   hext_stack_2->SetBinContent(6,13.86739);
   hext_stack_2->SetBinContent(7,16.49727);
   hext_stack_2->SetBinContent(8,10.33209);
   hext_stack_2->SetBinContent(9,7.265242);
   hext_stack_2->SetBinContent(10,7.930035);
   hext_stack_2->SetBinContent(11,12.32036);
   hext_stack_2->SetBinContent(12,11.83156);
   hext_stack_2->SetBinContent(13,13.70015);
   hext_stack_2->SetBinContent(14,9.056041);
   hext_stack_2->SetBinContent(15,3.076798);
   hext_stack_2->SetBinContent(16,1.461993);
   hext_stack_2->SetBinContent(17,1.379791);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.621987);
   hext_stack_2->SetBinContent(20,2.192989);
   hext_stack_2->SetBinContent(21,5.807659);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(23,1.055394);
   hext_stack_2->SetBinContent(24,2.973055);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,14.58239);
   hext_stack_2->SetBinError(1,6.006332);
   hext_stack_2->SetBinError(2,3.028148);
   hext_stack_2->SetBinError(3,2.966002);
   hext_stack_2->SetBinError(4,2.472532);
   hext_stack_2->SetBinError(5,2.743845);
   hext_stack_2->SetBinError(6,2.396701);
   hext_stack_2->SetBinError(7,2.778168);
   hext_stack_2->SetBinError(8,2.290706);
   hext_stack_2->SetBinError(9,1.855081);
   hext_stack_2->SetBinError(10,1.928947);
   hext_stack_2->SetBinError(11,2.609542);
   hext_stack_2->SetBinError(12,2.565988);
   hext_stack_2->SetBinError(13,2.700136);
   hext_stack_2->SetBinError(14,2.054944);
   hext_stack_2->SetBinError(15,1.126269);
   hext_stack_2->SetBinError(16,0.7356036);
   hext_stack_2->SetBinError(17,0.6935586);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.7253745);
   hext_stack_2->SetBinError(20,0.9009267);
   hext_stack_2->SetBinError(21,1.742221);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(23,0.6130171);
   hext_stack_2->SetBinError(24,1.346105);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.438378);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hdirt_stack_3->SetBinContent(1,4.845615);
   hdirt_stack_3->SetBinContent(2,0.9579741);
   hdirt_stack_3->SetBinContent(3,0.7895714);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.880012);
   hdirt_stack_3->SetBinContent(6,1.519078);
   hdirt_stack_3->SetBinContent(7,0.4403464);
   hdirt_stack_3->SetBinContent(8,0.2761429);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.3405387);
   hdirt_stack_3->SetBinContent(11,0.6002214);
   hdirt_stack_3->SetBinContent(12,0.7947583);
   hdirt_stack_3->SetBinContent(13,0.3381872);
   hdirt_stack_3->SetBinContent(14,0.1753185);
   hdirt_stack_3->SetBinContent(15,0.7001346);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.2620035);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinContent(26,2.263315);
   hdirt_stack_3->SetBinError(1,1.435364);
   hdirt_stack_3->SetBinError(2,0.5004237);
   hdirt_stack_3->SetBinError(3,0.3599815);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.3975383);
   hdirt_stack_3->SetBinError(6,0.6989462);
   hdirt_stack_3->SetBinError(7,0.3095757);
   hdirt_stack_3->SetBinError(8,0.1952625);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3381954);
   hdirt_stack_3->SetBinError(11,0.427823);
   hdirt_stack_3->SetBinError(12,0.4034967);
   hdirt_stack_3->SetBinError(13,0.3381872);
   hdirt_stack_3->SetBinError(14,0.1753185);
   hdirt_stack_3->SetBinError(15,0.4057766);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.2620035);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetBinError(26,0.7647694);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   houtFV_stack_4->SetBinContent(1,38.46538);
   houtFV_stack_4->SetBinContent(2,17.33907);
   houtFV_stack_4->SetBinContent(3,16.86904);
   houtFV_stack_4->SetBinContent(4,12.77651);
   houtFV_stack_4->SetBinContent(5,16.56014);
   houtFV_stack_4->SetBinContent(6,18.89175);
   houtFV_stack_4->SetBinContent(7,11.23996);
   houtFV_stack_4->SetBinContent(8,12.31782);
   houtFV_stack_4->SetBinContent(9,7.764898);
   houtFV_stack_4->SetBinContent(10,7.915096);
   houtFV_stack_4->SetBinContent(11,6.502123);
   houtFV_stack_4->SetBinContent(12,9.085512);
   houtFV_stack_4->SetBinContent(13,4.484119);
   houtFV_stack_4->SetBinContent(14,3.47921);
   houtFV_stack_4->SetBinContent(15,4.008139);
   houtFV_stack_4->SetBinContent(16,4.227888);
   houtFV_stack_4->SetBinContent(17,2.339216);
   houtFV_stack_4->SetBinContent(18,2.050601);
   houtFV_stack_4->SetBinContent(19,2.195754);
   houtFV_stack_4->SetBinContent(20,2.146951);
   houtFV_stack_4->SetBinContent(21,1.318683);
   houtFV_stack_4->SetBinContent(22,0.9269427);
   houtFV_stack_4->SetBinContent(23,1.073786);
   houtFV_stack_4->SetBinContent(24,0.7834804);
   houtFV_stack_4->SetBinContent(25,1.458599);
   houtFV_stack_4->SetBinContent(26,10.14721);
   houtFV_stack_4->SetBinError(1,3.101859);
   houtFV_stack_4->SetBinError(2,2.063483);
   houtFV_stack_4->SetBinError(3,2.056814);
   houtFV_stack_4->SetBinError(4,1.755576);
   houtFV_stack_4->SetBinError(5,2.039441);
   houtFV_stack_4->SetBinError(6,2.20709);
   houtFV_stack_4->SetBinError(7,1.641087);
   houtFV_stack_4->SetBinError(8,1.810134);
   houtFV_stack_4->SetBinError(9,1.408938);
   houtFV_stack_4->SetBinError(10,1.380425);
   houtFV_stack_4->SetBinError(11,1.272285);
   houtFV_stack_4->SetBinError(12,1.55872);
   houtFV_stack_4->SetBinError(13,1.064389);
   houtFV_stack_4->SetBinError(14,0.9250051);
   houtFV_stack_4->SetBinError(15,0.9715412);
   houtFV_stack_4->SetBinError(16,1.099721);
   houtFV_stack_4->SetBinError(17,0.8089383);
   houtFV_stack_4->SetBinError(18,0.7068742);
   houtFV_stack_4->SetBinError(19,0.7598403);
   houtFV_stack_4->SetBinError(20,0.756896);
   houtFV_stack_4->SetBinError(21,0.5542732);
   houtFV_stack_4->SetBinError(22,0.4800908);
   houtFV_stack_4->SetBinError(23,0.5557297);
   houtFV_stack_4->SetBinError(24,0.3917439);
   houtFV_stack_4->SetBinError(25,0.6531069);
   houtFV_stack_4->SetBinError(26,1.606774);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.257748);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.464003);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,332.1683);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,212.4868);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,183.6395);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,167.8065);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,143.8573);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,115.8321);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,101.0866);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,79.81741);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,67.48955);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,54.61063);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,49.89589);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,39.44611);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,34.3306);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,26.21447);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,25.18369);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,18.6273);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,16.67929);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,10.45872);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,13.81787);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,11.50049);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,7.697776);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,7.516599);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,6.218236);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,4.770092);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,2.161094);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,33.16693);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,5.98058);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.825567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,4.394016);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.264865);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.9718);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.490217);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.264142);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.914241);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.710192);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.366715);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.369154);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.037801);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.935149);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.621698);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.701744);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.370619);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.339842);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.062196);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.266725);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.101088);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.9202855);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,0.9730821);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.8011711);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.739883);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.4385604);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,1.89287);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hCCpi0inFV_stack_7->SetBinContent(1,109.0266);
   hCCpi0inFV_stack_7->SetBinContent(2,56.49502);
   hCCpi0inFV_stack_7->SetBinContent(3,58.34534);
   hCCpi0inFV_stack_7->SetBinContent(4,49.94548);
   hCCpi0inFV_stack_7->SetBinContent(5,42.22794);
   hCCpi0inFV_stack_7->SetBinContent(6,38.16447);
   hCCpi0inFV_stack_7->SetBinContent(7,33.40758);
   hCCpi0inFV_stack_7->SetBinContent(8,28.41916);
   hCCpi0inFV_stack_7->SetBinContent(9,21.42099);
   hCCpi0inFV_stack_7->SetBinContent(10,17.6731);
   hCCpi0inFV_stack_7->SetBinContent(11,16.43234);
   hCCpi0inFV_stack_7->SetBinContent(12,14.24139);
   hCCpi0inFV_stack_7->SetBinContent(13,9.272894);
   hCCpi0inFV_stack_7->SetBinContent(14,9.065026);
   hCCpi0inFV_stack_7->SetBinContent(15,11.46925);
   hCCpi0inFV_stack_7->SetBinContent(16,7.180788);
   hCCpi0inFV_stack_7->SetBinContent(17,4.672876);
   hCCpi0inFV_stack_7->SetBinContent(18,4.448141);
   hCCpi0inFV_stack_7->SetBinContent(19,4.301535);
   hCCpi0inFV_stack_7->SetBinContent(20,3.321102);
   hCCpi0inFV_stack_7->SetBinContent(21,5.619973);
   hCCpi0inFV_stack_7->SetBinContent(22,1.941346);
   hCCpi0inFV_stack_7->SetBinContent(23,1.568651);
   hCCpi0inFV_stack_7->SetBinContent(24,1.270501);
   hCCpi0inFV_stack_7->SetBinContent(25,1.713804);
   hCCpi0inFV_stack_7->SetBinContent(26,15.33035);
   hCCpi0inFV_stack_7->SetBinError(1,5.275125);
   hCCpi0inFV_stack_7->SetBinError(2,3.754779);
   hCCpi0inFV_stack_7->SetBinError(3,3.865199);
   hCCpi0inFV_stack_7->SetBinError(4,3.525306);
   hCCpi0inFV_stack_7->SetBinError(5,3.259332);
   hCCpi0inFV_stack_7->SetBinError(6,3.066169);
   hCCpi0inFV_stack_7->SetBinError(7,2.884193);
   hCCpi0inFV_stack_7->SetBinError(8,2.702706);
   hCCpi0inFV_stack_7->SetBinError(9,2.298217);
   hCCpi0inFV_stack_7->SetBinError(10,2.065593);
   hCCpi0inFV_stack_7->SetBinError(11,2.0373);
   hCCpi0inFV_stack_7->SetBinError(12,1.921931);
   hCCpi0inFV_stack_7->SetBinError(13,1.493282);
   hCCpi0inFV_stack_7->SetBinError(14,1.552056);
   hCCpi0inFV_stack_7->SetBinError(15,1.715901);
   hCCpi0inFV_stack_7->SetBinError(16,1.359959);
   hCCpi0inFV_stack_7->SetBinError(17,1.015151);
   hCCpi0inFV_stack_7->SetBinError(18,1.057219);
   hCCpi0inFV_stack_7->SetBinError(19,1.095461);
   hCCpi0inFV_stack_7->SetBinError(20,0.9204367);
   hCCpi0inFV_stack_7->SetBinError(21,1.225868);
   hCCpi0inFV_stack_7->SetBinError(22,0.706427);
   hCCpi0inFV_stack_7->SetBinError(23,0.5546069);
   hCCpi0inFV_stack_7->SetBinError(24,0.5895188);
   hCCpi0inFV_stack_7->SetBinError(25,0.6207051);
   hCCpi0inFV_stack_7->SetBinError(26,1.995519);
   hCCpi0inFV_stack_7->SetEntries(2425);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCinFV_stack_8->SetBinContent(1,32.28408);
   hNCinFV_stack_8->SetBinContent(2,14.95788);
   hNCinFV_stack_8->SetBinContent(3,13.14433);
   hNCinFV_stack_8->SetBinContent(4,10.4083);
   hNCinFV_stack_8->SetBinContent(5,9.929731);
   hNCinFV_stack_8->SetBinContent(6,11.68049);
   hNCinFV_stack_8->SetBinContent(7,7.175716);
   hNCinFV_stack_8->SetBinContent(8,8.642933);
   hNCinFV_stack_8->SetBinContent(9,4.783247);
   hNCinFV_stack_8->SetBinContent(10,4.499704);
   hNCinFV_stack_8->SetBinContent(11,3.949895);
   hNCinFV_stack_8->SetBinContent(12,4.53835);
   hNCinFV_stack_8->SetBinContent(13,2.590875);
   hNCinFV_stack_8->SetBinContent(14,2.295498);
   hNCinFV_stack_8->SetBinContent(15,2.929362);
   hNCinFV_stack_8->SetBinContent(16,2.000729);
   hNCinFV_stack_8->SetBinContent(17,1.268811);
   hNCinFV_stack_8->SetBinContent(18,1.662242);
   hNCinFV_stack_8->SetBinContent(19,1.517089);
   hNCinFV_stack_8->SetBinContent(20,1.855576);
   hNCinFV_stack_8->SetBinContent(21,1.65717);
   hNCinFV_stack_8->SetBinContent(22,1.120737);
   hNCinFV_stack_8->SetBinContent(23,0.785171);
   hNCinFV_stack_8->SetBinContent(24,0.1967154);
   hNCinFV_stack_8->SetBinContent(25,0.536893);
   hNCinFV_stack_8->SetBinContent(26,11.23212);
   hNCinFV_stack_8->SetBinError(1,2.87081);
   hNCinFV_stack_8->SetBinError(2,1.90239);
   hNCinFV_stack_8->SetBinError(3,1.820196);
   hNCinFV_stack_8->SetBinError(4,1.606243);
   hNCinFV_stack_8->SetBinError(5,1.545722);
   hNCinFV_stack_8->SetBinError(6,1.711201);
   hNCinFV_stack_8->SetBinError(7,1.359228);
   hNCinFV_stack_8->SetBinError(8,1.494567);
   hNCinFV_stack_8->SetBinError(9,1.109705);
   hNCinFV_stack_8->SetBinError(10,1.038616);
   hNCinFV_stack_8->SetBinError(11,1.057182);
   hNCinFV_stack_8->SetBinError(12,1.110434);
   hNCinFV_stack_8->SetBinError(13,0.8095761);
   hNCinFV_stack_8->SetBinError(14,0.7057297);
   hNCinFV_stack_8->SetBinError(15,0.8777653);
   hNCinFV_stack_8->SetBinError(16,0.7343859);
   hNCinFV_stack_8->SetBinError(17,0.5889569);
   hNCinFV_stack_8->SetBinError(18,0.6513556);
   hNCinFV_stack_8->SetBinError(19,0.5887087);
   hNCinFV_stack_8->SetBinError(20,0.6794384);
   hNCinFV_stack_8->SetBinError(21,0.6498287);
   hNCinFV_stack_8->SetBinError(22,0.5577095);
   hNCinFV_stack_8->SetBinError(23,0.3925882);
   hNCinFV_stack_8->SetBinError(24,0.1967154);
   hNCinFV_stack_8->SetBinError(25,0.3929602);
   hNCinFV_stack_8->SetBinError(26,1.699553);
   hNCinFV_stack_8->SetEntries(671);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hnumuCCinFV_stack_9->SetBinContent(1,69.25745);
   hnumuCCinFV_stack_9->SetBinContent(2,48.59005);
   hnumuCCinFV_stack_9->SetBinContent(3,36.91519);
   hnumuCCinFV_stack_9->SetBinContent(4,25.749);
   hnumuCCinFV_stack_9->SetBinContent(5,26.74948);
   hnumuCCinFV_stack_9->SetBinContent(6,17.42299);
   hnumuCCinFV_stack_9->SetBinContent(7,12.91507);
   hnumuCCinFV_stack_9->SetBinContent(8,10.11995);
   hnumuCCinFV_stack_9->SetBinContent(9,9.056419);
   hnumuCCinFV_stack_9->SetBinContent(10,8.403929);
   hnumuCCinFV_stack_9->SetBinContent(11,4.230114);
   hnumuCCinFV_stack_9->SetBinContent(12,4.020487);
   hnumuCCinFV_stack_9->SetBinContent(13,7.38862);
   hnumuCCinFV_stack_9->SetBinContent(14,3.963172);
   hnumuCCinFV_stack_9->SetBinContent(15,4.812254);
   hnumuCCinFV_stack_9->SetBinContent(16,4.885371);
   hnumuCCinFV_stack_9->SetBinContent(17,2.239896);
   hnumuCCinFV_stack_9->SetBinContent(18,3.006796);
   hnumuCCinFV_stack_9->SetBinContent(19,1.863564);
   hnumuCCinFV_stack_9->SetBinContent(20,2.446093);
   hnumuCCinFV_stack_9->SetBinContent(21,2.081782);
   hnumuCCinFV_stack_9->SetBinContent(22,2.741837);
   hnumuCCinFV_stack_9->SetBinContent(23,1.869844);
   hnumuCCinFV_stack_9->SetBinContent(24,2.572092);
   hnumuCCinFV_stack_9->SetBinContent(25,1.433844);
   hnumuCCinFV_stack_9->SetBinContent(26,20.88672);
   hnumuCCinFV_stack_9->SetBinError(1,4.949859);
   hnumuCCinFV_stack_9->SetBinError(2,4.446827);
   hnumuCCinFV_stack_9->SetBinError(3,4.316886);
   hnumuCCinFV_stack_9->SetBinError(4,2.730213);
   hnumuCCinFV_stack_9->SetBinError(5,3.260385);
   hnumuCCinFV_stack_9->SetBinError(6,2.412503);
   hnumuCCinFV_stack_9->SetBinError(7,2.138472);
   hnumuCCinFV_stack_9->SetBinError(8,1.866669);
   hnumuCCinFV_stack_9->SetBinError(9,1.608857);
   hnumuCCinFV_stack_9->SetBinError(10,1.647043);
   hnumuCCinFV_stack_9->SetBinError(11,1.078792);
   hnumuCCinFV_stack_9->SetBinError(12,1.02045);
   hnumuCCinFV_stack_9->SetBinError(13,1.37591);
   hnumuCCinFV_stack_9->SetBinError(14,1.022728);
   hnumuCCinFV_stack_9->SetBinError(15,1.136334);
   hnumuCCinFV_stack_9->SetBinError(16,1.19494);
   hnumuCCinFV_stack_9->SetBinError(17,0.7723493);
   hnumuCCinFV_stack_9->SetBinError(18,0.9001446);
   hnumuCCinFV_stack_9->SetBinError(19,0.777189);
   hnumuCCinFV_stack_9->SetBinError(20,0.8629565);
   hnumuCCinFV_stack_9->SetBinError(21,0.8119265);
   hnumuCCinFV_stack_9->SetBinError(22,0.7956201);
   hnumuCCinFV_stack_9->SetBinError(23,0.8516178);
   hnumuCCinFV_stack_9->SetBinError(24,0.8877226);
   hnumuCCinFV_stack_9->SetBinError(25,0.6906675);
   hnumuCCinFV_stack_9->SetBinError(26,2.484129);
   hnumuCCinFV_stack_9->SetEntries(1290);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hnueCCinFV_stack_10->SetBinContent(1,12.27352);
   hnueCCinFV_stack_10->SetBinContent(2,0.8382982);
   hnueCCinFV_stack_10->SetBinContent(3,2.369362);
   hnueCCinFV_stack_10->SetBinContent(4,0.536893);
   hnueCCinFV_stack_10->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_10->SetBinContent(8,0.6106752);
   hnueCCinFV_stack_10->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(12,0.5938826);
   hnueCCinFV_stack_10->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(14,1.157431);
   hnueCCinFV_stack_10->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(24,0.2451916);
   hnueCCinFV_stack_10->SetBinContent(26,0.3897057);
   hnueCCinFV_stack_10->SetBinError(1,2.297795);
   hnueCCinFV_stack_10->SetBinError(2,0.4896802);
   hnueCCinFV_stack_10->SetBinError(3,0.9102173);
   hnueCCinFV_stack_10->SetBinError(4,0.3929602);
   hnueCCinFV_stack_10->SetBinError(5,0.3160204);
   hnueCCinFV_stack_10->SetBinError(8,0.4583227);
   hnueCCinFV_stack_10->SetBinError(9,0.3401776);
   hnueCCinFV_stack_10->SetBinError(12,0.4243666);
   hnueCCinFV_stack_10->SetBinError(13,0.1950249);
   hnueCCinFV_stack_10->SetBinError(14,1.157431);
   hnueCCinFV_stack_10->SetBinError(18,0.1967154);
   hnueCCinFV_stack_10->SetBinError(22,0.1950249);
   hnueCCinFV_stack_10->SetBinError(24,0.2451916);
   hnueCCinFV_stack_10->SetBinError(26,0.3893381);
   hnueCCinFV_stack_10->SetEntries(72);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);
   hmcerror__5->SetBinContent(1,680.8807);
   hmcerror__5->SetBinContent(2,376.2545);
   hmcerror__5->SetBinContent(3,336.8822);
   hmcerror__5->SetBinContent(4,286.994);
   hmcerror__5->SetBinContent(5,262.1429);
   hmcerror__5->SetBinContent(6,220.1418);
   hmcerror__5->SetBinContent(7,186.0715);
   hmcerror__5->SetBinContent(8,154.9437);
   hmcerror__5->SetBinContent(9,121.2371);
   hmcerror__5->SetBinContent(10,104.4885);
   hmcerror__5->SetBinContent(11,96.25548);
   hmcerror__5->SetBinContent(12,90.4912);
   hmcerror__5->SetBinContent(13,75.43942);
   hmcerror__5->SetBinContent(14,57.0262);
   hmcerror__5->SetBinContent(15,53.0567);
   hmcerror__5->SetBinContent(16,40.53886);
   hmcerror__5->SetBinContent(17,31.02116);
   hmcerror__5->SetBinContent(18,24.30119);
   hmcerror__5->SetBinContent(19,26.55536);
   hmcerror__5->SetBinContent(20,24.65829);
   hmcerror__5->SetBinContent(21,25.62874);
   hmcerror__5->SetBinContent(22,16.29778);
   hmcerror__5->SetBinContent(23,13.81409);
   hmcerror__5->SetBinContent(24,13.00784);
   hmcerror__5->SetBinContent(25,9.125856);
   hmcerror__5->SetBinContent(26,116.3421);
   hmcerror__5->SetBinError(1,145.9479);
   hmcerror__5->SetBinError(2,93.80321);
   hmcerror__5->SetBinError(3,79.52343);
   hmcerror__5->SetBinError(4,70.12465);
   hmcerror__5->SetBinError(5,66.6544);
   hmcerror__5->SetBinError(6,53.33534);
   hmcerror__5->SetBinError(7,42.58822);
   hmcerror__5->SetBinError(8,38.93038);
   hmcerror__5->SetBinError(9,32.18231);
   hmcerror__5->SetBinError(10,26.441);
   hmcerror__5->SetBinError(11,23.18744);
   hmcerror__5->SetBinError(12,19.88591);
   hmcerror__5->SetBinError(13,16.57519);
   hmcerror__5->SetBinError(14,14.94661);
   hmcerror__5->SetBinError(15,13.77321);
   hmcerror__5->SetBinError(16,12.97928);
   hmcerror__5->SetBinError(17,8.102609);
   hmcerror__5->SetBinError(18,7.575733);
   hmcerror__5->SetBinError(19,7.277803);
   hmcerror__5->SetBinError(20,9.788343);
   hmcerror__5->SetBinError(21,6.742001);
   hmcerror__5->SetBinError(22,6.03917);
   hmcerror__5->SetBinError(23,4.655383);
   hmcerror__5->SetBinError(24,4.157876);
   hmcerror__5->SetBinError(25,4.626795);
   hmcerror__5->SetBinError(26,36.12857);
   hmcerror__5->SetEntries(3396.741);

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
   
   Double_t _fx3005[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3005[25] = {
   485,
   272,
   271,
   216,
   212,
   175,
   163,
   125,
   89,
   94,
   57,
   63,
   63,
   44,
   41,
   29,
   33,
   22,
   23,
   17,
   15,
   14,
   8,
   10,
   5};
   Double_t _felx3005[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3005[25] = {
   22.02272,
   16.49242,
   16.46208,
   14.69694,
   14.56022,
   13.22876,
   12.76715,
   11.18034,
   9.5566,
   9.8173,
   7.679,
   8.0648,
   8.0648,
   6.7671,
   6.5384,
   5.5285,
   5.8847,
   4.8417,
   4.9457,
   4.2835,
   4.0385,
   3.9102,
   3.0307,
   3.34883,
   2.48995};
   Double_t _fehx3005[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3005[25] = {
   22.02272,
   16.49242,
   16.46208,
   14.69694,
   14.56022,
   13.22876,
   12.76715,
   11.18034,
   9.3552,
   9.616,
   7.4757,
   7.862,
   7.862,
   6.5623,
   6.3331,
   5.3201,
   5.6776,
   4.6299,
   4.7346,
   4.0673,
   3.8197,
   3.6898,
   2.7896,
   3.1179,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(2.259045);
   Graph_Graph3005->SetMaximum(557.474);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.77#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2546.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 73.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 262.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 13.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 206.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1733.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 551.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 146.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 314.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all");
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
   
   Double_t _fx3006[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3006[25] = {
   0.2143516,
   0.2493079,
   0.2360571,
   0.2443419,
   0.2542674,
   0.2422772,
   0.228881,
   0.251255,
   0.2654495,
   0.2530518,
   0.2408948,
   0.2197551,
   0.2197153,
   0.2621008,
   0.2595943,
   0.3201688,
   0.2611962,
   0.3117433,
   0.2740616,
   0.3969594,
   0.2630641,
   0.3705516,
   0.3370024,
   0.3196438,
   0.5069985};
   Double_t _fehx3006[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3006[25] = {
   0.2143516,
   0.2493079,
   0.2360571,
   0.2443419,
   0.2542674,
   0.2422772,
   0.228881,
   0.251255,
   0.2654495,
   0.2530518,
   0.2408948,
   0.2197551,
   0.2197153,
   0.2621008,
   0.2595943,
   0.3201688,
   0.2611962,
   0.3117433,
   0.2740616,
   0.3969594,
   0.2630641,
   0.3705516,
   0.3370024,
   0.3196438,
   0.5069985};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   
   Double_t _fx3007[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3007[25] = {
   0.2031116,
   0.2320047,
   0.2282383,
   0.2295031,
   0.2241498,
   0.2303371,
   0.2205653,
   0.221705,
   0.2329437,
   0.2246493,
   0.2115716,
   0.2016589,
   0.2044012,
   0.2149173,
   0.2160993,
   0.2536434,
   0.2336631,
   0.2439574,
   0.2398229,
   0.2284871,
   0.210511,
   0.2480896,
   0.2529129,
   0.2297792,
   0.2837956};
   Double_t _fehx3007[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3007[25] = {
   0.2031116,
   0.2320047,
   0.2282383,
   0.2295031,
   0.2241498,
   0.2303371,
   0.2205653,
   0.221705,
   0.2329437,
   0.2246493,
   0.2115716,
   0.2016589,
   0.2044012,
   0.2149173,
   0.2160993,
   0.2536434,
   0.2336631,
   0.2439574,
   0.2398229,
   0.2284871,
   0.210511,
   0.2480896,
   0.2529129,
   0.2297792,
   0.2837956};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3008[25] = {
   0.7123127,
   0.722915,
   0.8044355,
   0.7526291,
   0.8087191,
   0.794942,
   0.8760074,
   0.8067447,
   0.734099,
   0.8996204,
   0.5921741,
   0.6962003,
   0.8351071,
   0.7715752,
   0.7727582,
   0.7153629,
   1.06379,
   0.9053054,
   0.8661152,
   0.6894232,
   0.5852804,
   0.8590125,
   0.5791187,
   0.7687669,
   0.5478938};
   Double_t _felx3008[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3008[25] = {
   0.03234445,
   0.04383316,
   0.04886598,
   0.05120992,
   0.05554305,
   0.06009197,
   0.0686142,
   0.07215744,
   0.07882573,
   0.09395578,
   0.07977728,
   0.08912247,
   0.1069043,
   0.1186665,
   0.1232342,
   0.1363753,
   0.1896995,
   0.1992371,
   0.1862411,
   0.1737144,
   0.157577,
   0.2399222,
   0.2193919,
   0.257447,
   0.2728456};
   Double_t _fehx3008[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3008[25] = {
   0.03234445,
   0.04383316,
   0.04886598,
   0.05120992,
   0.05554305,
   0.06009197,
   0.0686142,
   0.07215744,
   0.07716452,
   0.09202925,
   0.07766519,
   0.08688137,
   0.1042161,
   0.1150752,
   0.1193648,
   0.1312346,
   0.1830234,
   0.1905215,
   0.1782917,
   0.1649465,
   0.1490397,
   0.2263989,
   0.2019387,
   0.2396938,
   0.2422392};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0.1778716);
   Graph_Graph3008->SetMaximum(1.34399);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",25,0,90);

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
