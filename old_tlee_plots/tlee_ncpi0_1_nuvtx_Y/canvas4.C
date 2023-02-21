#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 09:59:20 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-4.34,163.3333,479.9126);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__10->SetBinContent(0,4.054192);
   hmc__10->SetBinContent(1,1.763551);
   hmc__10->SetBinContent(2,31.20021);
   hmc__10->SetBinContent(3,85.46268);
   hmc__10->SetBinContent(4,140.8223);
   hmc__10->SetBinContent(5,164.8177);
   hmc__10->SetBinContent(6,156.1137);
   hmc__10->SetBinContent(7,165.2848);
   hmc__10->SetBinContent(8,164.1083);
   hmc__10->SetBinContent(9,156.6367);
   hmc__10->SetBinContent(10,164.4433);
   hmc__10->SetBinContent(11,159.3978);
   hmc__10->SetBinContent(12,151.6817);
   hmc__10->SetBinContent(13,168.3581);
   hmc__10->SetBinContent(14,152.4219);
   hmc__10->SetBinContent(15,153.9843);
   hmc__10->SetBinContent(16,172.6292);
   hmc__10->SetBinContent(17,170.2265);
   hmc__10->SetBinContent(18,165.9181);
   hmc__10->SetBinContent(19,178.4566);
   hmc__10->SetBinContent(20,190.9054);
   hmc__10->SetBinContent(21,201.7238);
   hmc__10->SetBinContent(22,210.9981);
   hmc__10->SetBinContent(23,186.9897);
   hmc__10->SetBinContent(24,155.489);
   hmc__10->SetBinContent(25,68.78844);
   hmc__10->SetBinContent(26,4.241354);
   hmc__10->SetBinContent(27,2.543065);
   hmc__10->SetBinError(0,1.047842);
   hmc__10->SetBinError(1,3.743137);
   hmc__10->SetBinError(2,19.70103);
   hmc__10->SetBinError(3,26.54773);
   hmc__10->SetBinError(4,40.19643);
   hmc__10->SetBinError(5,50.25959);
   hmc__10->SetBinError(6,45.44711);
   hmc__10->SetBinError(7,46.23636);
   hmc__10->SetBinError(8,45.30419);
   hmc__10->SetBinError(9,42.66344);
   hmc__10->SetBinError(10,41.19185);
   hmc__10->SetBinError(11,43.44856);
   hmc__10->SetBinError(12,45.38423);
   hmc__10->SetBinError(13,43.75169);
   hmc__10->SetBinError(14,42.71917);
   hmc__10->SetBinError(15,41.86365);
   hmc__10->SetBinError(16,42.65467);
   hmc__10->SetBinError(17,39.69666);
   hmc__10->SetBinError(18,37.78813);
   hmc__10->SetBinError(19,39.14098);
   hmc__10->SetBinError(20,42.67948);
   hmc__10->SetBinError(21,46.8812);
   hmc__10->SetBinError(22,43.46485);
   hmc__10->SetBinError(23,39.51837);
   hmc__10->SetBinError(24,30.53475);
   hmc__10->SetBinError(25,25.93147);
   hmc__10->SetBinError(26,5.675136);
   hmc__10->SetBinError(27,4.573721);
   hmc__10->SetMinimum(-4.34);
   hmc__10->SetMaximum(455.7);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",26,-130,130);
   hs4_stack_4->SetMinimum(-7.708339e-09);
   hs4_stack_4->SetMaximum(221.548);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.842803);
   hbadmatch_stack_1->SetBinContent(3,1.601123);
   hbadmatch_stack_1->SetBinContent(4,5.093287);
   hbadmatch_stack_1->SetBinContent(5,5.120584);
   hbadmatch_stack_1->SetBinContent(6,2.986826);
   hbadmatch_stack_1->SetBinContent(7,2.542956);
   hbadmatch_stack_1->SetBinContent(8,3.401386);
   hbadmatch_stack_1->SetBinContent(9,3.272247);
   hbadmatch_stack_1->SetBinContent(10,4.316445);
   hbadmatch_stack_1->SetBinContent(11,3.898834);
   hbadmatch_stack_1->SetBinContent(12,4.400838);
   hbadmatch_stack_1->SetBinContent(13,6.469825);
   hbadmatch_stack_1->SetBinContent(14,0.7588249);
   hbadmatch_stack_1->SetBinContent(15,4.093276);
   hbadmatch_stack_1->SetBinContent(16,4.043644);
   hbadmatch_stack_1->SetBinContent(17,5.508679);
   hbadmatch_stack_1->SetBinContent(18,6.39344);
   hbadmatch_stack_1->SetBinContent(19,3.805987);
   hbadmatch_stack_1->SetBinContent(20,5.347912);
   hbadmatch_stack_1->SetBinContent(21,5.556285);
   hbadmatch_stack_1->SetBinContent(22,3.385462);
   hbadmatch_stack_1->SetBinContent(23,4.907586);
   hbadmatch_stack_1->SetBinContent(24,6.684158);
   hbadmatch_stack_1->SetBinContent(25,2.152877);
   hbadmatch_stack_1->SetBinError(2,0.7279921);
   hbadmatch_stack_1->SetBinError(3,0.6373471);
   hbadmatch_stack_1->SetBinError(4,1.886809);
   hbadmatch_stack_1->SetBinError(5,1.963543);
   hbadmatch_stack_1->SetBinError(6,0.8686705);
   hbadmatch_stack_1->SetBinError(7,0.7721418);
   hbadmatch_stack_1->SetBinError(8,1.320805);
   hbadmatch_stack_1->SetBinError(9,0.9688894);
   hbadmatch_stack_1->SetBinError(10,1.14159);
   hbadmatch_stack_1->SetBinError(11,1.036385);
   hbadmatch_stack_1->SetBinError(12,1.151292);
   hbadmatch_stack_1->SetBinError(13,1.428521);
   hbadmatch_stack_1->SetBinError(14,0.3640062);
   hbadmatch_stack_1->SetBinError(15,1.165449);
   hbadmatch_stack_1->SetBinError(16,1.080194);
   hbadmatch_stack_1->SetBinError(17,1.231433);
   hbadmatch_stack_1->SetBinError(18,1.395008);
   hbadmatch_stack_1->SetBinError(19,1.095639);
   hbadmatch_stack_1->SetBinError(20,1.258094);
   hbadmatch_stack_1->SetBinError(21,1.423105);
   hbadmatch_stack_1->SetBinError(22,1.021114);
   hbadmatch_stack_1->SetBinError(23,1.110998);
   hbadmatch_stack_1->SetBinError(24,1.371797);
   hbadmatch_stack_1->SetBinError(25,0.78728);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,4.628173);
   hext_stack_2->SetBinContent(5,5.732637);
   hext_stack_2->SetBinContent(6,6.863051);
   hext_stack_2->SetBinContent(7,4.620993);
   hext_stack_2->SetBinContent(8,7.131198);
   hext_stack_2->SetBinContent(9,10.01487);
   hext_stack_2->SetBinContent(10,7.855014);
   hext_stack_2->SetBinContent(11,6.564605);
   hext_stack_2->SetBinContent(12,10.02923);
   hext_stack_2->SetBinContent(13,18.97435);
   hext_stack_2->SetBinContent(14,9.324187);
   hext_stack_2->SetBinContent(15,14.36337);
   hext_stack_2->SetBinContent(16,15.88161);
   hext_stack_2->SetBinContent(17,27.29058);
   hext_stack_2->SetBinContent(18,26.63183);
   hext_stack_2->SetBinContent(19,35.17872);
   hext_stack_2->SetBinContent(20,41.49672);
   hext_stack_2->SetBinContent(21,46.97721);
   hext_stack_2->SetBinContent(22,58.67592);
   hext_stack_2->SetBinContent(23,49.58675);
   hext_stack_2->SetBinContent(24,46.41622);
   hext_stack_2->SetBinContent(25,20.20133);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,1.291697);
   hext_stack_2->SetBinError(5,1.665546);
   hext_stack_2->SetBinError(6,1.846923);
   hext_stack_2->SetBinError(7,1.367364);
   hext_stack_2->SetBinError(8,1.728522);
   hext_stack_2->SetBinError(9,2.222813);
   hext_stack_2->SetBinError(10,1.859985);
   hext_stack_2->SetBinError(11,1.684461);
   hext_stack_2->SetBinError(12,2.130374);
   hext_stack_2->SetBinError(13,3.083181);
   hext_stack_2->SetBinError(14,1.94922);
   hext_stack_2->SetBinError(15,2.401746);
   hext_stack_2->SetBinError(16,2.61497);
   hext_stack_2->SetBinError(17,3.631528);
   hext_stack_2->SetBinError(18,3.676283);
   hext_stack_2->SetBinError(19,3.997232);
   hext_stack_2->SetBinError(20,4.316828);
   hext_stack_2->SetBinError(21,4.679896);
   hext_stack_2->SetBinError(22,5.088615);
   hext_stack_2->SetBinError(23,4.726616);
   hext_stack_2->SetBinError(24,4.443871);
   hext_stack_2->SetBinError(25,3.130618);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,2.356437);
   hdirt_stack_3->SetBinContent(4,2.435151);
   hdirt_stack_3->SetBinContent(5,1.598644);
   hdirt_stack_3->SetBinContent(6,2.938441);
   hdirt_stack_3->SetBinContent(7,3.378525);
   hdirt_stack_3->SetBinContent(8,2.147753);
   hdirt_stack_3->SetBinContent(9,2.049609);
   hdirt_stack_3->SetBinContent(10,2.518032);
   hdirt_stack_3->SetBinContent(11,0.6558546);
   hdirt_stack_3->SetBinContent(12,2.651725);
   hdirt_stack_3->SetBinContent(13,1.910232);
   hdirt_stack_3->SetBinContent(14,0.7498547);
   hdirt_stack_3->SetBinContent(15,1.512143);
   hdirt_stack_3->SetBinContent(16,3.046592);
   hdirt_stack_3->SetBinContent(17,1.128781);
   hdirt_stack_3->SetBinContent(18,1.627852);
   hdirt_stack_3->SetBinContent(19,2.048349);
   hdirt_stack_3->SetBinContent(20,4.146409);
   hdirt_stack_3->SetBinContent(21,3.528601);
   hdirt_stack_3->SetBinContent(22,5.518867);
   hdirt_stack_3->SetBinContent(23,4.981863);
   hdirt_stack_3->SetBinContent(24,0.994874);
   hdirt_stack_3->SetBinContent(25,1.932407);
   hdirt_stack_3->SetBinContent(27,0.6763744);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.8215658);
   hdirt_stack_3->SetBinError(4,0.7873049);
   hdirt_stack_3->SetBinError(5,0.6113888);
   hdirt_stack_3->SetBinError(6,0.7759919);
   hdirt_stack_3->SetBinError(7,1.222145);
   hdirt_stack_3->SetBinError(8,0.8842929);
   hdirt_stack_3->SetBinError(9,0.7108802);
   hdirt_stack_3->SetBinError(10,0.8749764);
   hdirt_stack_3->SetBinError(11,0.3345214);
   hdirt_stack_3->SetBinError(12,0.8868916);
   hdirt_stack_3->SetBinError(13,0.7492886);
   hdirt_stack_3->SetBinError(14,0.3885538);
   hdirt_stack_3->SetBinError(15,0.6657946);
   hdirt_stack_3->SetBinError(16,0.9510541);
   hdirt_stack_3->SetBinError(17,0.6077676);
   hdirt_stack_3->SetBinError(18,0.6450671);
   hdirt_stack_3->SetBinError(19,0.7481613);
   hdirt_stack_3->SetBinError(20,1.028879);
   hdirt_stack_3->SetBinError(21,1.005481);
   hdirt_stack_3->SetBinError(22,1.565017);
   hdirt_stack_3->SetBinError(23,1.144412);
   hdirt_stack_3->SetBinError(24,0.5080516);
   hdirt_stack_3->SetBinError(25,0.7716319);
   hdirt_stack_3->SetBinError(27,0.4782689);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.869665);
   houtFV_stack_4->SetBinContent(1,1.411952);
   houtFV_stack_4->SetBinContent(2,20.70287);
   houtFV_stack_4->SetBinContent(3,32.87411);
   houtFV_stack_4->SetBinContent(4,30.7189);
   houtFV_stack_4->SetBinContent(5,28.9126);
   houtFV_stack_4->SetBinContent(6,21.12221);
   houtFV_stack_4->SetBinContent(7,20.02977);
   houtFV_stack_4->SetBinContent(8,16.3591);
   houtFV_stack_4->SetBinContent(9,16.54411);
   houtFV_stack_4->SetBinContent(10,15.75098);
   houtFV_stack_4->SetBinContent(11,13.26526);
   houtFV_stack_4->SetBinContent(12,11.79544);
   houtFV_stack_4->SetBinContent(13,13.56672);
   houtFV_stack_4->SetBinContent(14,14.19546);
   houtFV_stack_4->SetBinContent(15,10.72024);
   houtFV_stack_4->SetBinContent(16,12.3135);
   houtFV_stack_4->SetBinContent(17,12.3925);
   houtFV_stack_4->SetBinContent(18,15.47656);
   houtFV_stack_4->SetBinContent(19,14.86768);
   houtFV_stack_4->SetBinContent(20,14.83143);
   houtFV_stack_4->SetBinContent(21,21.54801);
   houtFV_stack_4->SetBinContent(22,26.50007);
   houtFV_stack_4->SetBinContent(23,25.45755);
   houtFV_stack_4->SetBinContent(24,32.06839);
   houtFV_stack_4->SetBinContent(25,28.24963);
   houtFV_stack_4->SetBinContent(26,2.608346);
   houtFV_stack_4->SetBinContent(27,0.5893137);
   houtFV_stack_4->SetBinError(0,0.7364825);
   houtFV_stack_4->SetBinError(1,0.5974713);
   houtFV_stack_4->SetBinError(2,2.199769);
   houtFV_stack_4->SetBinError(3,2.89701);
   houtFV_stack_4->SetBinError(4,2.796453);
   houtFV_stack_4->SetBinError(5,2.707281);
   houtFV_stack_4->SetBinError(6,2.26344);
   houtFV_stack_4->SetBinError(7,2.212536);
   houtFV_stack_4->SetBinError(8,1.980996);
   houtFV_stack_4->SetBinError(9,2.09994);
   houtFV_stack_4->SetBinError(10,2.023579);
   houtFV_stack_4->SetBinError(11,2.046891);
   houtFV_stack_4->SetBinError(12,1.703811);
   houtFV_stack_4->SetBinError(13,1.820253);
   houtFV_stack_4->SetBinError(14,1.883472);
   houtFV_stack_4->SetBinError(15,1.673121);
   houtFV_stack_4->SetBinError(16,1.665641);
   houtFV_stack_4->SetBinError(17,1.728497);
   houtFV_stack_4->SetBinError(18,1.980594);
   houtFV_stack_4->SetBinError(19,1.948413);
   houtFV_stack_4->SetBinError(20,1.84848);
   houtFV_stack_4->SetBinError(21,2.500133);
   houtFV_stack_4->SetBinError(22,2.625214);
   houtFV_stack_4->SetBinError(23,2.590993);
   houtFV_stack_4->SetBinError(24,2.90034);
   houtFV_stack_4->SetBinError(25,2.741925);
   houtFV_stack_4->SetBinError(26,0.8084725);
   houtFV_stack_4->SetBinError(27,0.3402411);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2673994);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.82898);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.228694);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.400908);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.310021);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.050519);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.766266);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.914869);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.72756);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.540215);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.465162);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.123365);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.981183);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.073923);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.862486);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.042191);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.505747);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.776007);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.186206);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,5.129603);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.445292);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.535906);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.498222);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2120817);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2076403);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4781422);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6815155);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8759009);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9274839);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7759188);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8559736);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.778908);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9510202);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.106259);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.704714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5499433);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8086687);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7691339);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8839787);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.031109);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9169517);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8324124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6879593);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9505703);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.9053244);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.9502018);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6400453);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1360289);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08493096);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2736501);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1618691);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4161285);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.878274);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6348548);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1770121);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3485703);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4473317);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.07206501);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4530803);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2106162);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7724758);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4967967);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09801055);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1902082);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3880798);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2451389);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.184293);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05280295);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1451321);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.323154);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04484221);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1192762);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07470597);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1790051);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3271761);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3275539);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07120712);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1703901);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1903941);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03896558);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1626441);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08306637);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3552535);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1965815);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05001339);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08491543);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2290234);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1746116);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07077932);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02686657);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06500954);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1499816);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2210871);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.05458213);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.816749);
   hNCpi0inFVres_stack_7->SetBinContent(3,19.49684);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.32026);
   hNCpi0inFVres_stack_7->SetBinContent(5,54.56854);
   hNCpi0inFVres_stack_7->SetBinContent(6,57.2056);
   hNCpi0inFVres_stack_7->SetBinContent(7,63.866);
   hNCpi0inFVres_stack_7->SetBinContent(8,63.10851);
   hNCpi0inFVres_stack_7->SetBinContent(9,59.47935);
   hNCpi0inFVres_stack_7->SetBinContent(10,61.59621);
   hNCpi0inFVres_stack_7->SetBinContent(11,63.14534);
   hNCpi0inFVres_stack_7->SetBinContent(12,53.65017);
   hNCpi0inFVres_stack_7->SetBinContent(13,56.94901);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.92922);
   hNCpi0inFVres_stack_7->SetBinContent(15,57.06185);
   hNCpi0inFVres_stack_7->SetBinContent(16,58.0884);
   hNCpi0inFVres_stack_7->SetBinContent(17,57.40377);
   hNCpi0inFVres_stack_7->SetBinContent(18,49.92718);
   hNCpi0inFVres_stack_7->SetBinContent(19,52.07568);
   hNCpi0inFVres_stack_7->SetBinContent(20,52.4798);
   hNCpi0inFVres_stack_7->SetBinContent(21,55.01087);
   hNCpi0inFVres_stack_7->SetBinContent(22,50.2124);
   hNCpi0inFVres_stack_7->SetBinContent(23,40.89389);
   hNCpi0inFVres_stack_7->SetBinContent(24,26.71087);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.580544);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.08536567);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.5567043);
   hNCpi0inFVres_stack_7->SetBinError(0,0.0863692);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04066776);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7230364);
   hNCpi0inFVres_stack_7->SetBinError(3,1.510303);
   hNCpi0inFVres_stack_7->SetBinError(4,2.094064);
   hNCpi0inFVres_stack_7->SetBinError(5,2.542541);
   hNCpi0inFVres_stack_7->SetBinError(6,2.541017);
   hNCpi0inFVres_stack_7->SetBinError(7,2.81766);
   hNCpi0inFVres_stack_7->SetBinError(8,2.799905);
   hNCpi0inFVres_stack_7->SetBinError(9,2.637513);
   hNCpi0inFVres_stack_7->SetBinError(10,2.777998);
   hNCpi0inFVres_stack_7->SetBinError(11,2.755945);
   hNCpi0inFVres_stack_7->SetBinError(12,2.405735);
   hNCpi0inFVres_stack_7->SetBinError(13,2.601456);
   hNCpi0inFVres_stack_7->SetBinError(14,2.360598);
   hNCpi0inFVres_stack_7->SetBinError(15,2.670607);
   hNCpi0inFVres_stack_7->SetBinError(16,2.582057);
   hNCpi0inFVres_stack_7->SetBinError(17,2.65754);
   hNCpi0inFVres_stack_7->SetBinError(18,2.304136);
   hNCpi0inFVres_stack_7->SetBinError(19,2.422767);
   hNCpi0inFVres_stack_7->SetBinError(20,2.439258);
   hNCpi0inFVres_stack_7->SetBinError(21,2.603274);
   hNCpi0inFVres_stack_7->SetBinError(22,2.551493);
   hNCpi0inFVres_stack_7->SetBinError(23,2.195992);
   hNCpi0inFVres_stack_7->SetBinError(24,1.901064);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7424883);
   hNCpi0inFVres_stack_7->SetBinError(26,0.05645402);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1848109);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.249178);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3991742);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.601599);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.821476);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.64413);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.35154);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.76919);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.53991);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.39364);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.80344);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.34136);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.14793);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.51942);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.48067);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.63759);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.70704);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.229);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.779705);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.96701);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.54388);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.32967);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.195088);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.376069);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.513298);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.15634);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3140733);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2027129);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2238573);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6274912);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.094936);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.026395);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.362951);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.266968);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.348755);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.221109);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.189541);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.172342);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.114455);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.230183);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.180276);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.012604);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.2056);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.089706);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.122043);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.287386);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.287482);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.152972);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9959932);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.194345);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9015977);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3200366);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2964059);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1463682);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05618739);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1302015);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.04343089);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(2,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(3,12.08068);
   hCCpi0inFV_stack_10->SetBinContent(4,27.20248);
   hCCpi0inFV_stack_10->SetBinContent(5,29.93704);
   hCCpi0inFV_stack_10->SetBinContent(6,26.89359);
   hCCpi0inFV_stack_10->SetBinContent(7,22.65906);
   hCCpi0inFV_stack_10->SetBinContent(8,26.75164);
   hCCpi0inFV_stack_10->SetBinContent(9,25.63377);
   hCCpi0inFV_stack_10->SetBinContent(10,30.68416);
   hCCpi0inFV_stack_10->SetBinContent(11,27.5505);
   hCCpi0inFV_stack_10->SetBinContent(12,28.57692);
   hCCpi0inFV_stack_10->SetBinContent(13,26.60971);
   hCCpi0inFV_stack_10->SetBinContent(14,28.61448);
   hCCpi0inFV_stack_10->SetBinContent(15,26.09477);
   hCCpi0inFV_stack_10->SetBinContent(16,31.64553);
   hCCpi0inFV_stack_10->SetBinContent(17,23.7415);
   hCCpi0inFV_stack_10->SetBinContent(18,27.47655);
   hCCpi0inFV_stack_10->SetBinContent(19,28.44218);
   hCCpi0inFV_stack_10->SetBinContent(20,29.49879);
   hCCpi0inFV_stack_10->SetBinContent(21,26.55534);
   hCCpi0inFV_stack_10->SetBinContent(22,24.53898);
   hCCpi0inFV_stack_10->SetBinContent(23,23.204);
   hCCpi0inFV_stack_10->SetBinContent(24,17.04097);
   hCCpi0inFV_stack_10->SetBinContent(25,3.83422);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_10->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(2,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(3,1.734432);
   hCCpi0inFV_stack_10->SetBinError(4,2.644083);
   hCCpi0inFV_stack_10->SetBinError(5,2.7802);
   hCCpi0inFV_stack_10->SetBinError(6,2.534824);
   hCCpi0inFV_stack_10->SetBinError(7,2.337131);
   hCCpi0inFV_stack_10->SetBinError(8,2.57282);
   hCCpi0inFV_stack_10->SetBinError(9,2.570042);
   hCCpi0inFV_stack_10->SetBinError(10,2.840574);
   hCCpi0inFV_stack_10->SetBinError(11,2.704604);
   hCCpi0inFV_stack_10->SetBinError(12,2.659218);
   hCCpi0inFV_stack_10->SetBinError(13,2.553385);
   hCCpi0inFV_stack_10->SetBinError(14,2.634119);
   hCCpi0inFV_stack_10->SetBinError(15,2.580771);
   hCCpi0inFV_stack_10->SetBinError(16,2.773333);
   hCCpi0inFV_stack_10->SetBinError(17,2.475307);
   hCCpi0inFV_stack_10->SetBinError(18,2.619583);
   hCCpi0inFV_stack_10->SetBinError(19,2.718621);
   hCCpi0inFV_stack_10->SetBinError(20,2.783294);
   hCCpi0inFV_stack_10->SetBinError(21,2.509498);
   hCCpi0inFV_stack_10->SetBinError(22,2.426791);
   hCCpi0inFV_stack_10->SetBinError(23,2.402935);
   hCCpi0inFV_stack_10->SetBinError(24,2.114019);
   hCCpi0inFV_stack_10->SetBinError(25,0.956355);
   hCCpi0inFV_stack_10->SetBinError(26,0.1950249);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1702119);
   hNCinFV_stack_11->SetBinContent(2,0.7652393);
   hNCinFV_stack_11->SetBinContent(3,6.150593);
   hNCinFV_stack_11->SetBinContent(4,8.021636);
   hNCinFV_stack_11->SetBinContent(5,10.42948);
   hNCinFV_stack_11->SetBinContent(6,9.872599);
   hNCinFV_stack_11->SetBinContent(7,13.90484);
   hNCinFV_stack_11->SetBinContent(8,9.679802);
   hNCinFV_stack_11->SetBinContent(9,10.62526);
   hNCinFV_stack_11->SetBinContent(10,10.18809);
   hNCinFV_stack_11->SetBinContent(11,14.50306);
   hNCinFV_stack_11->SetBinContent(12,11.67877);
   hNCinFV_stack_11->SetBinContent(13,11.44144);
   hNCinFV_stack_11->SetBinContent(14,11.83704);
   hNCinFV_stack_11->SetBinContent(15,11.03728);
   hNCinFV_stack_11->SetBinContent(16,10.01869);
   hNCinFV_stack_11->SetBinContent(17,10.42709);
   hNCinFV_stack_11->SetBinContent(18,9.156741);
   hNCinFV_stack_11->SetBinContent(19,12.37495);
   hNCinFV_stack_11->SetBinContent(20,11.34206);
   hNCinFV_stack_11->SetBinContent(21,10.75187);
   hNCinFV_stack_11->SetBinContent(22,11.2153);
   hNCinFV_stack_11->SetBinContent(23,9.547499);
   hNCinFV_stack_11->SetBinContent(24,4.928254);
   hNCinFV_stack_11->SetBinContent(25,1.561259);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1702119);
   hNCinFV_stack_11->SetBinError(2,0.4541895);
   hNCinFV_stack_11->SetBinError(3,1.319504);
   hNCinFV_stack_11->SetBinError(4,1.405907);
   hNCinFV_stack_11->SetBinError(5,1.654941);
   hNCinFV_stack_11->SetBinError(6,1.553642);
   hNCinFV_stack_11->SetBinError(7,2.219197);
   hNCinFV_stack_11->SetBinError(8,1.506584);
   hNCinFV_stack_11->SetBinError(9,1.833114);
   hNCinFV_stack_11->SetBinError(10,1.712412);
   hNCinFV_stack_11->SetBinError(11,1.949327);
   hNCinFV_stack_11->SetBinError(12,1.740756);
   hNCinFV_stack_11->SetBinError(13,1.789214);
   hNCinFV_stack_11->SetBinError(14,1.831174);
   hNCinFV_stack_11->SetBinError(15,1.90795);
   hNCinFV_stack_11->SetBinError(16,1.539277);
   hNCinFV_stack_11->SetBinError(17,1.766208);
   hNCinFV_stack_11->SetBinError(18,1.513245);
   hNCinFV_stack_11->SetBinError(19,1.799917);
   hNCinFV_stack_11->SetBinError(20,1.886817);
   hNCinFV_stack_11->SetBinError(21,1.697807);
   hNCinFV_stack_11->SetBinError(22,1.758276);
   hNCinFV_stack_11->SetBinError(23,1.753118);
   hNCinFV_stack_11->SetBinError(24,1.25592);
   hNCinFV_stack_11->SetBinError(25,0.7411988);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(2,0.5786332);
   hnumuCCinFV_stack_12->SetBinContent(3,3.730353);
   hnumuCCinFV_stack_12->SetBinContent(4,7.806355);
   hnumuCCinFV_stack_12->SetBinContent(5,11.08617);
   hnumuCCinFV_stack_12->SetBinContent(6,9.658832);
   hnumuCCinFV_stack_12->SetBinContent(7,13.36714);
   hnumuCCinFV_stack_12->SetBinContent(8,13.85605);
   hnumuCCinFV_stack_12->SetBinContent(9,10.1926);
   hnumuCCinFV_stack_12->SetBinContent(10,12.9619);
   hnumuCCinFV_stack_12->SetBinContent(11,9.28038);
   hnumuCCinFV_stack_12->SetBinContent(12,12.47202);
   hnumuCCinFV_stack_12->SetBinContent(13,14.01694);
   hnumuCCinFV_stack_12->SetBinContent(14,14.36552);
   hnumuCCinFV_stack_12->SetBinContent(15,11.89514);
   hnumuCCinFV_stack_12->SetBinContent(16,15.62532);
   hnumuCCinFV_stack_12->SetBinContent(17,13.2062);
   hnumuCCinFV_stack_12->SetBinContent(18,13.01866);
   hnumuCCinFV_stack_12->SetBinContent(19,11.65919);
   hnumuCCinFV_stack_12->SetBinContent(20,12.49931);
   hnumuCCinFV_stack_12->SetBinContent(21,13.70837);
   hnumuCCinFV_stack_12->SetBinContent(22,15.83453);
   hnumuCCinFV_stack_12->SetBinContent(23,11.25635);
   hnumuCCinFV_stack_12->SetBinContent(24,9.980648);
   hnumuCCinFV_stack_12->SetBinContent(25,4.682675);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(2,0.4154297);
   hnumuCCinFV_stack_12->SetBinError(3,0.9751961);
   hnumuCCinFV_stack_12->SetBinError(4,1.440921);
   hnumuCCinFV_stack_12->SetBinError(5,2.010265);
   hnumuCCinFV_stack_12->SetBinError(6,1.556524);
   hnumuCCinFV_stack_12->SetBinError(7,1.99928);
   hnumuCCinFV_stack_12->SetBinError(8,2.18591);
   hnumuCCinFV_stack_12->SetBinError(9,1.631957);
   hnumuCCinFV_stack_12->SetBinError(10,1.909653);
   hnumuCCinFV_stack_12->SetBinError(11,1.583868);
   hnumuCCinFV_stack_12->SetBinError(12,1.987136);
   hnumuCCinFV_stack_12->SetBinError(13,1.936045);
   hnumuCCinFV_stack_12->SetBinError(14,2.2372);
   hnumuCCinFV_stack_12->SetBinError(15,1.815328);
   hnumuCCinFV_stack_12->SetBinError(16,2.251131);
   hnumuCCinFV_stack_12->SetBinError(17,2.673065);
   hnumuCCinFV_stack_12->SetBinError(18,1.941741);
   hnumuCCinFV_stack_12->SetBinError(19,1.730133);
   hnumuCCinFV_stack_12->SetBinError(20,2.546525);
   hnumuCCinFV_stack_12->SetBinError(21,2.011459);
   hnumuCCinFV_stack_12->SetBinError(22,3.199632);
   hnumuCCinFV_stack_12->SetBinError(23,1.812602);
   hnumuCCinFV_stack_12->SetBinError(24,1.655583);
   hnumuCCinFV_stack_12->SetBinError(25,1.358599);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.27222);
   hnueCCinFV_stack_13->SetBinContent(5,1.22512);
   hnueCCinFV_stack_13->SetBinContent(6,0.4949126);
   hnueCCinFV_stack_13->SetBinContent(7,1.071151);
   hnueCCinFV_stack_13->SetBinContent(8,1.713057);
   hnueCCinFV_stack_13->SetBinContent(9,2.339324);
   hnueCCinFV_stack_13->SetBinContent(10,1.677241);
   hnueCCinFV_stack_13->SetBinContent(11,1.186236);
   hnueCCinFV_stack_13->SetBinContent(12,1.725775);
   hnueCCinFV_stack_13->SetBinContent(13,2.323999);
   hnueCCinFV_stack_13->SetBinContent(14,1.911281);
   hnueCCinFV_stack_13->SetBinContent(15,0.7039669);
   hnueCCinFV_stack_13->SetBinContent(16,3.899607);
   hnueCCinFV_stack_13->SetBinContent(17,0.7582098);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336248);
   hnueCCinFV_stack_13->SetBinContent(19,0.8728007);
   hnueCCinFV_stack_13->SetBinContent(20,2.287719);
   hnueCCinFV_stack_13->SetBinContent(21,1.387521);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,2.079736);
   hnueCCinFV_stack_13->SetBinContent(24,1.329913);
   hnueCCinFV_stack_13->SetBinContent(25,0.2180157);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.6739543);
   hnueCCinFV_stack_13->SetBinError(5,0.6593169);
   hnueCCinFV_stack_13->SetBinError(6,0.3475576);
   hnueCCinFV_stack_13->SetBinError(7,0.5697525);
   hnueCCinFV_stack_13->SetBinError(8,0.7462591);
   hnueCCinFV_stack_13->SetBinError(9,1.066439);
   hnueCCinFV_stack_13->SetBinError(10,0.7084458);
   hnueCCinFV_stack_13->SetBinError(11,0.5448371);
   hnueCCinFV_stack_13->SetBinError(12,0.8274448);
   hnueCCinFV_stack_13->SetBinError(13,1.548703);
   hnueCCinFV_stack_13->SetBinError(14,0.7462427);
   hnueCCinFV_stack_13->SetBinError(15,0.7039669);
   hnueCCinFV_stack_13->SetBinError(16,1.393396);
   hnueCCinFV_stack_13->SetBinError(17,0.4509977);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.4390931);
   hnueCCinFV_stack_13->SetBinError(20,1.352245);
   hnueCCinFV_stack_13->SetBinError(21,0.5983931);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.9024165);
   hnueCCinFV_stack_13->SetBinError(24,0.8167221);
   hnueCCinFV_stack_13->SetBinError(25,0.2180157);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__11->SetBinContent(0,4.054192);
   hmcerror__11->SetBinContent(1,1.763551);
   hmcerror__11->SetBinContent(2,31.20021);
   hmcerror__11->SetBinContent(3,85.46268);
   hmcerror__11->SetBinContent(4,140.8223);
   hmcerror__11->SetBinContent(5,164.8177);
   hmcerror__11->SetBinContent(6,156.1137);
   hmcerror__11->SetBinContent(7,165.2848);
   hmcerror__11->SetBinContent(8,164.1083);
   hmcerror__11->SetBinContent(9,156.6367);
   hmcerror__11->SetBinContent(10,164.4433);
   hmcerror__11->SetBinContent(11,159.3978);
   hmcerror__11->SetBinContent(12,151.6817);
   hmcerror__11->SetBinContent(13,168.3581);
   hmcerror__11->SetBinContent(14,152.4219);
   hmcerror__11->SetBinContent(15,153.9843);
   hmcerror__11->SetBinContent(16,172.6292);
   hmcerror__11->SetBinContent(17,170.2265);
   hmcerror__11->SetBinContent(18,165.9181);
   hmcerror__11->SetBinContent(19,178.4566);
   hmcerror__11->SetBinContent(20,190.9054);
   hmcerror__11->SetBinContent(21,201.7238);
   hmcerror__11->SetBinContent(22,210.9981);
   hmcerror__11->SetBinContent(23,186.9897);
   hmcerror__11->SetBinContent(24,155.489);
   hmcerror__11->SetBinContent(25,68.78844);
   hmcerror__11->SetBinContent(26,4.241354);
   hmcerror__11->SetBinContent(27,2.543065);
   hmcerror__11->SetBinError(0,1.047842);
   hmcerror__11->SetBinError(1,3.743137);
   hmcerror__11->SetBinError(2,19.70103);
   hmcerror__11->SetBinError(3,26.54773);
   hmcerror__11->SetBinError(4,40.19643);
   hmcerror__11->SetBinError(5,50.25959);
   hmcerror__11->SetBinError(6,45.44711);
   hmcerror__11->SetBinError(7,46.23636);
   hmcerror__11->SetBinError(8,45.30419);
   hmcerror__11->SetBinError(9,42.66344);
   hmcerror__11->SetBinError(10,41.19185);
   hmcerror__11->SetBinError(11,43.44856);
   hmcerror__11->SetBinError(12,45.38423);
   hmcerror__11->SetBinError(13,43.75169);
   hmcerror__11->SetBinError(14,42.71917);
   hmcerror__11->SetBinError(15,41.86365);
   hmcerror__11->SetBinError(16,42.65467);
   hmcerror__11->SetBinError(17,39.69666);
   hmcerror__11->SetBinError(18,37.78813);
   hmcerror__11->SetBinError(19,39.14098);
   hmcerror__11->SetBinError(20,42.67948);
   hmcerror__11->SetBinError(21,46.8812);
   hmcerror__11->SetBinError(22,43.46485);
   hmcerror__11->SetBinError(23,39.51837);
   hmcerror__11->SetBinError(24,30.53475);
   hmcerror__11->SetBinError(25,25.93147);
   hmcerror__11->SetBinError(26,5.675136);
   hmcerror__11->SetBinError(27,4.573721);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3013[26] = {
   3,
   21,
   85,
   158,
   172,
   163,
   189,
   180,
   174,
   166,
   182,
   170,
   171,
   156,
   167,
   188,
   159,
   163,
   172,
   180,
   188,
   217,
   188,
   158,
   44,
   2};
   Double_t _felx3013[26] = {
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
   Double_t _fely3013[26] = {
   2.143368,
   4.7354,
   9.3428,
   12.56981,
   13.11488,
   12.76715,
   13.74773,
   13.41641,
   13.19091,
   12.8841,
   13.49074,
   13.0384,
   13.0767,
   12.49,
   12.92285,
   13.71131,
   12.60952,
   12.76715,
   13.11488,
   13.41641,
   13.71131,
   14.73092,
   13.71131,
   12.56981,
   6.7671,
   2};
   Double_t _fehx3013[26] = {
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
   Double_t _fehy3013[26] = {
   1.72422,
   4.5229,
   9.1411,
   12.56981,
   13.11488,
   12.76715,
   13.74773,
   13.41641,
   13.19091,
   12.8841,
   13.49074,
   13.0384,
   13.0767,
   12.49,
   12.92285,
   13.71131,
   12.60952,
   12.76715,
   13.11488,
   13.41641,
   13.71131,
   14.73092,
   13.71131,
   12.56981,
   6.5623,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-156,156);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(254.904);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3816.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.0","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 56.2","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 474.3","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1153.7","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.3","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 577.9","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 266.7","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3014[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3014[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[26] = {
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
   Double_t _fely3014[26] = {
   2.122499,
   0.6314389,
   0.3106353,
   0.2854408,
   0.3049405,
   0.2911154,
   0.2797375,
   0.2760627,
   0.272372,
   0.2504927,
   0.2725795,
   0.2992069,
   0.2598728,
   0.2802692,
   0.2718697,
   0.2470884,
   0.233199,
   0.2277517,
   0.2193305,
   0.2235635,
   0.2324028,
   0.2059964,
   0.2113398,
   0.1963789,
   0.3769742,
   1.338048};
   Double_t _fehx3014[26] = {
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
   Double_t _fehy3014[26] = {
   2.122499,
   0.6314389,
   0.3106353,
   0.2854408,
   0.3049405,
   0.2911154,
   0.2797375,
   0.2760627,
   0.272372,
   0.2504927,
   0.2725795,
   0.2992069,
   0.2598728,
   0.2802692,
   0.2718697,
   0.2470884,
   0.233199,
   0.2277517,
   0.2193305,
   0.2235635,
   0.2324028,
   0.2059964,
   0.2113398,
   0.1963789,
   0.3769742,
   1.338048};
   grae = new TGraphAsymmErrors(26,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-156,156);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3015[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[26] = {
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
   Double_t _fely3015[26] = {
   0.5047753,
   0.2590133,
   0.2280236,
   0.2320118,
   0.2138714,
   0.2344388,
   0.2304183,
   0.2290588,
   0.217615,
   0.2168964,
   0.2329916,
   0.2165886,
   0.1971624,
   0.2200751,
   0.2006898,
   0.1991956,
   0.2027963,
   0.1941443,
   0.1840794,
   0.1807775,
   0.1695167,
   0.172003,
   0.1625776,
   0.1543374,
   0.1792449,
   0.3675424};
   Double_t _fehx3015[26] = {
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
   Double_t _fehy3015[26] = {
   0.5047753,
   0.2590133,
   0.2280236,
   0.2320118,
   0.2138714,
   0.2344388,
   0.2304183,
   0.2290588,
   0.217615,
   0.2168964,
   0.2329916,
   0.2165886,
   0.1971624,
   0.2200751,
   0.2006898,
   0.1991956,
   0.2027963,
   0.1941443,
   0.1840794,
   0.1807775,
   0.1695167,
   0.172003,
   0.1625776,
   0.1543374,
   0.1792449,
   0.3675424};
   grae = new TGraphAsymmErrors(26,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-156,156);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3016[26] = {
   1.701113,
   0.6730724,
   0.9945862,
   1.121982,
   1.043577,
   1.044111,
   1.143481,
   1.096836,
   1.110851,
   1.009466,
   1.141798,
   1.120768,
   1.015692,
   1.023475,
   1.084526,
   1.089039,
   0.9340495,
   0.9824125,
   0.9638196,
   0.9428754,
   0.9319672,
   1.028445,
   1.005403,
   1.016149,
   0.6396423,
   0.4715475};
   Double_t _felx3016[26] = {
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
   Double_t _fely3016[26] = {
   1.21537,
   0.1517746,
   0.1093202,
   0.08926006,
   0.07957201,
   0.08178105,
   0.083176,
   0.08175336,
   0.0842134,
   0.07834977,
   0.08463567,
   0.08595896,
   0.07767192,
   0.08194357,
   0.08392318,
   0.07942635,
   0.07407495,
   0.07694848,
   0.07349055,
   0.07027778,
   0.06797069,
   0.06981541,
   0.07332656,
   0.08084049,
   0.09837553,
   0.4715475};
   Double_t _fehx3016[26] = {
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
   Double_t _fehy3016[26] = {
   0.9776976,
   0.1449638,
   0.1069601,
   0.08926006,
   0.07957201,
   0.08178105,
   0.083176,
   0.08175336,
   0.0842134,
   0.07834977,
   0.08463567,
   0.08595896,
   0.07767192,
   0.08194357,
   0.08392318,
   0.07942635,
   0.07407495,
   0.07694848,
   0.07349055,
   0.07027778,
   0.06797069,
   0.06981541,
   0.07332656,
   0.08084049,
   0.09539829,
   0.3581804};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-156,156);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.946691);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(-130,1,130,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
