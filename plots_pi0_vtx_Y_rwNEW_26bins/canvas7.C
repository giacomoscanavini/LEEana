#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Feb 17 20:55:44 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-3.234191,163.3333,357.6334);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__19->SetBinContent(0,0.7407695);
   hmc__19->SetBinContent(1,0.9049706);
   hmc__19->SetBinContent(2,12.47792);
   hmc__19->SetBinContent(3,35.03601);
   hmc__19->SetBinContent(4,74.58171);
   hmc__19->SetBinContent(5,105.2239);
   hmc__19->SetBinContent(6,125.1295);
   hmc__19->SetBinContent(7,142.8196);
   hmc__19->SetBinContent(8,140.8605);
   hmc__19->SetBinContent(9,141.0811);
   hmc__19->SetBinContent(10,148.8439);
   hmc__19->SetBinContent(11,155.986);
   hmc__19->SetBinContent(12,151.5784);
   hmc__19->SetBinContent(13,154.9824);
   hmc__19->SetBinContent(14,161.7095);
   hmc__19->SetBinContent(15,152.3406);
   hmc__19->SetBinContent(16,145.5426);
   hmc__19->SetBinContent(17,151.1212);
   hmc__19->SetBinContent(18,143.9259);
   hmc__19->SetBinContent(19,145.7728);
   hmc__19->SetBinContent(20,141.6409);
   hmc__19->SetBinContent(21,128.0503);
   hmc__19->SetBinContent(22,112.3902);
   hmc__19->SetBinContent(23,94.55166);
   hmc__19->SetBinContent(24,52.4902);
   hmc__19->SetBinContent(25,21.88441);
   hmc__19->SetBinContent(27,0.9815497);
   hmc__19->SetBinError(0,0.3551621);
   hmc__19->SetBinError(1,25.82026);
   hmc__19->SetBinError(2,10.22039);
   hmc__19->SetBinError(3,20.22941);
   hmc__19->SetBinError(4,40.77147);
   hmc__19->SetBinError(5,42.44896);
   hmc__19->SetBinError(6,50.13847);
   hmc__19->SetBinError(7,56.77508);
   hmc__19->SetBinError(8,55.41609);
   hmc__19->SetBinError(9,54.33624);
   hmc__19->SetBinError(10,53.06642);
   hmc__19->SetBinError(11,59.31082);
   hmc__19->SetBinError(12,59.00722);
   hmc__19->SetBinError(13,56.42401);
   hmc__19->SetBinError(14,57.27524);
   hmc__19->SetBinError(15,54.05626);
   hmc__19->SetBinError(16,52.3067);
   hmc__19->SetBinError(17,51.16233);
   hmc__19->SetBinError(18,50.59761);
   hmc__19->SetBinError(19,52.01712);
   hmc__19->SetBinError(20,53.55107);
   hmc__19->SetBinError(21,42.49745);
   hmc__19->SetBinError(22,39.24443);
   hmc__19->SetBinError(23,31.72275);
   hmc__19->SetBinError(24,21.52816);
   hmc__19->SetBinError(25,9.848291);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetBinError(27,2.46772);
   hmc__19->SetMinimum(-3.234191);
   hmc__19->SetMaximum(339.59);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",26,-130,130);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(169.795);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.209723);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,3.987662);
   hbadmatch_stack_1->SetBinContent(5,1.323754);
   hbadmatch_stack_1->SetBinContent(6,1.323754);
   hbadmatch_stack_1->SetBinContent(7,1.797071);
   hbadmatch_stack_1->SetBinContent(8,2.910248);
   hbadmatch_stack_1->SetBinContent(9,2.22975);
   hbadmatch_stack_1->SetBinContent(10,2.826134);
   hbadmatch_stack_1->SetBinContent(11,3.302266);
   hbadmatch_stack_1->SetBinContent(12,3.449576);
   hbadmatch_stack_1->SetBinContent(13,3.562368);
   hbadmatch_stack_1->SetBinContent(14,4.448008);
   hbadmatch_stack_1->SetBinContent(15,2.546873);
   hbadmatch_stack_1->SetBinContent(16,4.478073);
   hbadmatch_stack_1->SetBinContent(17,1.518779);
   hbadmatch_stack_1->SetBinContent(18,0.7868615);
   hbadmatch_stack_1->SetBinContent(19,2.919129);
   hbadmatch_stack_1->SetBinContent(20,2.037677);
   hbadmatch_stack_1->SetBinContent(21,1.949166);
   hbadmatch_stack_1->SetBinContent(22,1.599483);
   hbadmatch_stack_1->SetBinContent(23,4.665092);
   hbadmatch_stack_1->SetBinContent(24,1.322064);
   hbadmatch_stack_1->SetBinContent(25,1.523326);
   hbadmatch_stack_1->SetBinError(2,0.5704779);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,2.057727);
   hbadmatch_stack_1->SetBinError(5,0.5560625);
   hbadmatch_stack_1->SetBinError(6,0.5560625);
   hbadmatch_stack_1->SetBinError(7,0.7558624);
   hbadmatch_stack_1->SetBinError(8,0.8279711);
   hbadmatch_stack_1->SetBinError(9,0.8083252);
   hbadmatch_stack_1->SetBinError(10,1.020732);
   hbadmatch_stack_1->SetBinError(11,0.9486986);
   hbadmatch_stack_1->SetBinError(12,0.9611421);
   hbadmatch_stack_1->SetBinError(13,0.9886587);
   hbadmatch_stack_1->SetBinError(14,1.096555);
   hbadmatch_stack_1->SetBinError(15,0.7489116);
   hbadmatch_stack_1->SetBinError(16,1.068504);
   hbadmatch_stack_1->SetBinError(17,0.5892709);
   hbadmatch_stack_1->SetBinError(18,0.3934307);
   hbadmatch_stack_1->SetBinError(19,0.9595196);
   hbadmatch_stack_1->SetBinError(20,0.7448657);
   hbadmatch_stack_1->SetBinError(21,0.7604681);
   hbadmatch_stack_1->SetBinError(22,0.7549185);
   hbadmatch_stack_1->SetBinError(23,1.581627);
   hbadmatch_stack_1->SetBinError(24,0.5554667);
   hbadmatch_stack_1->SetBinError(25,0.6404913);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,3.159);
   hext_stack_2->SetBinContent(6,0.6487947);
   hext_stack_2->SetBinContent(7,1.78639);
   hext_stack_2->SetBinContent(8,3.864046);
   hext_stack_2->SetBinContent(9,4.289415);
   hext_stack_2->SetBinContent(10,14.17736);
   hext_stack_2->SetBinContent(11,13.7261);
   hext_stack_2->SetBinContent(12,4.378797);
   hext_stack_2->SetBinContent(13,7.530616);
   hext_stack_2->SetBinContent(14,12.01751);
   hext_stack_2->SetBinContent(15,9.593912);
   hext_stack_2->SetBinContent(16,10.85679);
   hext_stack_2->SetBinContent(17,14.18895);
   hext_stack_2->SetBinContent(18,10.4027);
   hext_stack_2->SetBinContent(19,14.44992);
   hext_stack_2->SetBinContent(20,11.86034);
   hext_stack_2->SetBinContent(21,12.87102);
   hext_stack_2->SetBinContent(22,10.4546);
   hext_stack_2->SetBinContent(23,16.21036);
   hext_stack_2->SetBinContent(24,6.788031);
   hext_stack_2->SetBinContent(25,4.117831);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,1.152637);
   hext_stack_2->SetBinError(6,0.4587671);
   hext_stack_2->SetBinError(7,0.8039566);
   hext_stack_2->SetBinError(8,1.437918);
   hext_stack_2->SetBinError(9,1.402017);
   hext_stack_2->SetBinError(10,2.753584);
   hext_stack_2->SetBinError(11,2.611944);
   hext_stack_2->SetBinError(12,1.350755);
   hext_stack_2->SetBinError(13,1.831478);
   hext_stack_2->SetBinError(14,2.469994);
   hext_stack_2->SetBinError(15,2.275517);
   hext_stack_2->SetBinError(16,2.113466);
   hext_stack_2->SetBinError(17,2.741559);
   hext_stack_2->SetBinError(18,2.318081);
   hext_stack_2->SetBinError(19,2.700742);
   hext_stack_2->SetBinError(20,2.109284);
   hext_stack_2->SetBinError(21,2.358099);
   hext_stack_2->SetBinError(22,2.106309);
   hext_stack_2->SetBinError(23,2.899799);
   hext_stack_2->SetBinError(24,1.774777);
   hext_stack_2->SetBinError(25,1.430621);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinContent(7,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.4794168);
   hdirt_stack_3->SetBinContent(10,0.7943197);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,1.155067);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.7842561);
   hdirt_stack_3->SetBinContent(17,1.052121);
   hdirt_stack_3->SetBinContent(18,0.7017611);
   hdirt_stack_3->SetBinContent(19,0.4007975);
   hdirt_stack_3->SetBinContent(20,0.7759784);
   hdirt_stack_3->SetBinContent(21,0.6143302);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,0.5428095);
   hdirt_stack_3->SetBinContent(24,1.400816);
   hdirt_stack_3->SetBinContent(25,0.185975);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetBinError(7,0.258803);
   hdirt_stack_3->SetBinError(9,0.3402743);
   hdirt_stack_3->SetBinError(10,0.407894);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.5327083);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4973774);
   hdirt_stack_3->SetBinError(17,0.4983258);
   hdirt_stack_3->SetBinError(18,0.4280393);
   hdirt_stack_3->SetBinError(19,0.4007975);
   hdirt_stack_3->SetBinError(20,0.458477);
   hdirt_stack_3->SetBinError(21,0.39051);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.3168557);
   hdirt_stack_3->SetBinError(24,0.9882803);
   hdirt_stack_3->SetBinError(25,0.185975);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.1967154);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,8.352628);
   houtFV_stack_4->SetBinContent(3,5.862093);
   houtFV_stack_4->SetBinContent(4,4.759376);
   houtFV_stack_4->SetBinContent(5,3.720959);
   houtFV_stack_4->SetBinContent(6,2.95005);
   houtFV_stack_4->SetBinContent(7,2.1458);
   houtFV_stack_4->SetBinContent(8,2.535931);
   houtFV_stack_4->SetBinContent(9,3.469581);
   houtFV_stack_4->SetBinContent(10,2.495594);
   houtFV_stack_4->SetBinContent(11,5.268869);
   houtFV_stack_4->SetBinContent(12,3.175949);
   houtFV_stack_4->SetBinContent(13,2.387397);
   houtFV_stack_4->SetBinContent(14,2.917724);
   houtFV_stack_4->SetBinContent(15,2.088624);
   houtFV_stack_4->SetBinContent(16,2.706612);
   houtFV_stack_4->SetBinContent(17,4.156145);
   houtFV_stack_4->SetBinContent(18,3.667052);
   houtFV_stack_4->SetBinContent(19,1.710602);
   houtFV_stack_4->SetBinContent(20,3.607406);
   houtFV_stack_4->SetBinContent(21,3.612993);
   houtFV_stack_4->SetBinContent(22,4.501015);
   houtFV_stack_4->SetBinContent(23,2.552981);
   houtFV_stack_4->SetBinContent(24,6.161476);
   houtFV_stack_4->SetBinContent(25,9.727874);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,1.441651);
   houtFV_stack_4->SetBinError(3,1.125299);
   houtFV_stack_4->SetBinError(4,1.070486);
   houtFV_stack_4->SetBinError(5,0.9946747);
   houtFV_stack_4->SetBinError(6,0.8541037);
   houtFV_stack_4->SetBinError(7,0.6925365);
   houtFV_stack_4->SetBinError(8,0.8325131);
   houtFV_stack_4->SetBinError(9,0.9734161);
   houtFV_stack_4->SetBinError(10,0.7335366);
   houtFV_stack_4->SetBinError(11,1.193672);
   houtFV_stack_4->SetBinError(12,0.8772215);
   houtFV_stack_4->SetBinError(13,0.7836246);
   houtFV_stack_4->SetBinError(14,0.9093424);
   houtFV_stack_4->SetBinError(15,0.7562981);
   houtFV_stack_4->SetBinError(16,0.8154214);
   houtFV_stack_4->SetBinError(17,0.9806517);
   houtFV_stack_4->SetBinError(18,0.9098806);
   houtFV_stack_4->SetBinError(19,0.6793266);
   houtFV_stack_4->SetBinError(20,0.9779938);
   houtFV_stack_4->SetBinError(21,0.9303477);
   houtFV_stack_4->SetBinError(22,1.075398);
   houtFV_stack_4->SetBinError(23,0.7507093);
   houtFV_stack_4->SetBinError(24,1.282209);
   houtFV_stack_4->SetBinError(25,1.55246);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.51449);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2193909);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1376284);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7670858);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.521058);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5437177);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.14374);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.15719);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2468026);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4614805);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1480721);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.379057);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3435999);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07891307);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4188362);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.533508);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.40751);
   hNCpi0inFVres_stack_7->SetBinContent(4,36.72851);
   hNCpi0inFVres_stack_7->SetBinContent(5,54.53925);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.08006);
   hNCpi0inFVres_stack_7->SetBinContent(7,74.74226);
   hNCpi0inFVres_stack_7->SetBinContent(8,73.33231);
   hNCpi0inFVres_stack_7->SetBinContent(9,67.99125);
   hNCpi0inFVres_stack_7->SetBinContent(10,68.37535);
   hNCpi0inFVres_stack_7->SetBinContent(11,73.65729);
   hNCpi0inFVres_stack_7->SetBinContent(12,75.18217);
   hNCpi0inFVres_stack_7->SetBinContent(13,73.44373);
   hNCpi0inFVres_stack_7->SetBinContent(14,70.39215);
   hNCpi0inFVres_stack_7->SetBinContent(15,71.67191);
   hNCpi0inFVres_stack_7->SetBinContent(16,65.91087);
   hNCpi0inFVres_stack_7->SetBinContent(17,65.12992);
   hNCpi0inFVres_stack_7->SetBinContent(18,62.96675);
   hNCpi0inFVres_stack_7->SetBinContent(19,64.84932);
   hNCpi0inFVres_stack_7->SetBinContent(20,69.30524);
   hNCpi0inFVres_stack_7->SetBinContent(21,52.89861);
   hNCpi0inFVres_stack_7->SetBinContent(22,51.1753);
   hNCpi0inFVres_stack_7->SetBinContent(23,39.77496);
   hNCpi0inFVres_stack_7->SetBinContent(24,19.8154);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.329494);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.6413721);
   hNCpi0inFVres_stack_7->SetBinError(0,0.277838);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3678529);
   hNCpi0inFVres_stack_7->SetBinError(3,1.289362);
   hNCpi0inFVres_stack_7->SetBinError(4,1.987587);
   hNCpi0inFVres_stack_7->SetBinError(5,2.449442);
   hNCpi0inFVres_stack_7->SetBinError(6,2.497903);
   hNCpi0inFVres_stack_7->SetBinError(7,2.880479);
   hNCpi0inFVres_stack_7->SetBinError(8,2.851939);
   hNCpi0inFVres_stack_7->SetBinError(9,2.694602);
   hNCpi0inFVres_stack_7->SetBinError(10,2.646862);
   hNCpi0inFVres_stack_7->SetBinError(11,2.792836);
   hNCpi0inFVres_stack_7->SetBinError(12,2.86151);
   hNCpi0inFVres_stack_7->SetBinError(13,2.795506);
   hNCpi0inFVres_stack_7->SetBinError(14,2.734616);
   hNCpi0inFVres_stack_7->SetBinError(15,2.793731);
   hNCpi0inFVres_stack_7->SetBinError(16,2.671501);
   hNCpi0inFVres_stack_7->SetBinError(17,2.597499);
   hNCpi0inFVres_stack_7->SetBinError(18,2.581328);
   hNCpi0inFVres_stack_7->SetBinError(19,2.629108);
   hNCpi0inFVres_stack_7->SetBinError(20,2.796713);
   hNCpi0inFVres_stack_7->SetBinError(21,2.347769);
   hNCpi0inFVres_stack_7->SetBinError(22,2.39367);
   hNCpi0inFVres_stack_7->SetBinError(23,2.156397);
   hNCpi0inFVres_stack_7->SetBinError(24,1.515928);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4990299);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3113101);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4035539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.383966);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.14965);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.048265);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.8823);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.01383);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.15897);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.2974);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.79751);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.04669);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.54501);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.77668);
   hNCpi0inFVdis_stack_8->SetBinContent(14,16.11497);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.94491);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.37818);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.92115);
   hNCpi0inFVdis_stack_8->SetBinContent(18,13.39819);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.04886);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.15073);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.41421);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.667955);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.79443);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.972194);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1775557);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.526852);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8077431);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.930798);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.139735);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.263546);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.132139);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.290393);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.120418);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.071256);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.306455);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.231936);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.300383);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.241613);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.106524);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.102883);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.167734);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.133313);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.038448);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.052996);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8863171);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9326783);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5647649);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1536621);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,0.7817899);
   hCCpi0inFV_stack_10->SetBinContent(3,4.774518);
   hCCpi0inFV_stack_10->SetBinContent(4,9.084545);
   hCCpi0inFV_stack_10->SetBinContent(5,12.00612);
   hCCpi0inFV_stack_10->SetBinContent(6,18.54576);
   hCCpi0inFV_stack_10->SetBinContent(7,19.60885);
   hCCpi0inFV_stack_10->SetBinContent(8,20.84038);
   hCCpi0inFV_stack_10->SetBinContent(9,19.15651);
   hCCpi0inFV_stack_10->SetBinContent(10,20.02975);
   hCCpi0inFV_stack_10->SetBinContent(11,20.11934);
   hCCpi0inFV_stack_10->SetBinContent(12,21.6275);
   hCCpi0inFV_stack_10->SetBinContent(13,24.23247);
   hCCpi0inFV_stack_10->SetBinContent(14,22.76124);
   hCCpi0inFV_stack_10->SetBinContent(15,20.57955);
   hCCpi0inFV_stack_10->SetBinContent(16,21.81014);
   hCCpi0inFV_stack_10->SetBinContent(17,20.59027);
   hCCpi0inFV_stack_10->SetBinContent(18,23.46745);
   hCCpi0inFV_stack_10->SetBinContent(19,19.40096);
   hCCpi0inFV_stack_10->SetBinContent(20,18.08903);
   hCCpi0inFV_stack_10->SetBinContent(21,16.99446);
   hCCpi0inFV_stack_10->SetBinContent(22,12.81624);
   hCCpi0inFV_stack_10->SetBinContent(23,9.630285);
   hCCpi0inFV_stack_10->SetBinContent(24,5.623599);
   hCCpi0inFV_stack_10->SetBinContent(25,1.213747);
   hCCpi0inFV_stack_10->SetBinError(2,0.3908977);
   hCCpi0inFV_stack_10->SetBinError(3,1.043827);
   hCCpi0inFV_stack_10->SetBinError(4,1.506921);
   hCCpi0inFV_stack_10->SetBinError(5,1.760356);
   hCCpi0inFV_stack_10->SetBinError(6,2.181429);
   hCCpi0inFV_stack_10->SetBinError(7,2.244686);
   hCCpi0inFV_stack_10->SetBinError(8,2.281537);
   hCCpi0inFV_stack_10->SetBinError(9,2.176183);
   hCCpi0inFV_stack_10->SetBinError(10,2.188761);
   hCCpi0inFV_stack_10->SetBinError(11,2.23225);
   hCCpi0inFV_stack_10->SetBinError(12,2.379459);
   hCCpi0inFV_stack_10->SetBinError(13,2.487277);
   hCCpi0inFV_stack_10->SetBinError(14,2.356519);
   hCCpi0inFV_stack_10->SetBinError(15,2.228527);
   hCCpi0inFV_stack_10->SetBinError(16,2.372572);
   hCCpi0inFV_stack_10->SetBinError(17,2.351758);
   hCCpi0inFV_stack_10->SetBinError(18,2.435117);
   hCCpi0inFV_stack_10->SetBinError(19,2.206359);
   hCCpi0inFV_stack_10->SetBinError(20,2.104814);
   hCCpi0inFV_stack_10->SetBinError(21,2.113759);
   hCCpi0inFV_stack_10->SetBinError(22,1.844309);
   hCCpi0inFV_stack_10->SetBinError(23,1.513547);
   hCCpi0inFV_stack_10->SetBinError(24,1.228242);
   hCCpi0inFV_stack_10->SetBinError(25,0.4964505);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,3.034178);
   hNCinFV_stack_11->SetBinContent(4,6.484136);
   hNCinFV_stack_11->SetBinContent(5,7.728906);
   hNCinFV_stack_11->SetBinContent(6,10.11015);
   hNCinFV_stack_11->SetBinContent(7,12.70718);
   hNCinFV_stack_11->SetBinContent(8,10.79328);
   hNCinFV_stack_11->SetBinContent(9,12.25941);
   hNCinFV_stack_11->SetBinContent(10,13.15386);
   hNCinFV_stack_11->SetBinContent(11,11.42545);
   hNCinFV_stack_11->SetBinContent(12,13.67507);
   hNCinFV_stack_11->SetBinContent(13,11.81719);
   hNCinFV_stack_11->SetBinContent(14,12.89605);
   hNCinFV_stack_11->SetBinContent(15,14.17778);
   hNCinFV_stack_11->SetBinContent(16,10.85329);
   hNCinFV_stack_11->SetBinContent(17,16.66553);
   hNCinFV_stack_11->SetBinContent(18,14.98807);
   hNCinFV_stack_11->SetBinContent(19,12.21738);
   hNCinFV_stack_11->SetBinContent(20,10.61009);
   hNCinFV_stack_11->SetBinContent(21,13.48958);
   hNCinFV_stack_11->SetBinContent(22,9.619747);
   hNCinFV_stack_11->SetBinContent(23,6.495361);
   hNCinFV_stack_11->SetBinContent(24,4.199863);
   hNCinFV_stack_11->SetBinContent(25,0.536893);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.8325598);
   hNCinFV_stack_11->SetBinError(4,1.345381);
   hNCinFV_stack_11->SetBinError(5,1.34533);
   hNCinFV_stack_11->SetBinError(6,1.618629);
   hNCinFV_stack_11->SetBinError(7,1.75482);
   hNCinFV_stack_11->SetBinError(8,1.62914);
   hNCinFV_stack_11->SetBinError(9,1.799526);
   hNCinFV_stack_11->SetBinError(10,1.765917);
   hNCinFV_stack_11->SetBinError(11,1.710513);
   hNCinFV_stack_11->SetBinError(12,1.91403);
   hNCinFV_stack_11->SetBinError(13,1.732797);
   hNCinFV_stack_11->SetBinError(14,1.820277);
   hNCinFV_stack_11->SetBinError(15,1.861974);
   hNCinFV_stack_11->SetBinError(16,1.618153);
   hNCinFV_stack_11->SetBinError(17,2.049473);
   hNCinFV_stack_11->SetBinError(18,1.941679);
   hNCinFV_stack_11->SetBinError(19,1.755741);
   hNCinFV_stack_11->SetBinError(20,1.618857);
   hNCinFV_stack_11->SetBinError(21,1.852248);
   hNCinFV_stack_11->SetBinError(22,1.557102);
   hNCinFV_stack_11->SetBinError(23,1.271243);
   hNCinFV_stack_11->SetBinError(24,1.057357);
   hNCinFV_stack_11->SetBinError(25,0.3929602);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,2.297644);
   hnumuCCinFV_stack_12->SetBinContent(4,6.172769);
   hnumuCCinFV_stack_12->SetBinContent(5,12.28421);
   hnumuCCinFV_stack_12->SetBinContent(6,17.77309);
   hnumuCCinFV_stack_12->SetBinContent(7,12.31285);
   hnumuCCinFV_stack_12->SetBinContent(8,12.26277);
   hnumuCCinFV_stack_12->SetBinContent(9,12.9686);
   hnumuCCinFV_stack_12->SetBinContent(10,12.69547);
   hnumuCCinFV_stack_12->SetBinContent(11,13.59785);
   hnumuCCinFV_stack_12->SetBinContent(12,12.0614);
   hnumuCCinFV_stack_12->SetBinContent(13,15.35281);
   hnumuCCinFV_stack_12->SetBinContent(14,17.34784);
   hnumuCCinFV_stack_12->SetBinContent(15,15.78011);
   hnumuCCinFV_stack_12->SetBinContent(16,14.83144);
   hnumuCCinFV_stack_12->SetBinContent(17,14.33553);
   hnumuCCinFV_stack_12->SetBinContent(18,12.1068);
   hnumuCCinFV_stack_12->SetBinContent(19,15.65618);
   hnumuCCinFV_stack_12->SetBinContent(20,12.45296);
   hnumuCCinFV_stack_12->SetBinContent(21,13.96486);
   hnumuCCinFV_stack_12->SetBinContent(22,12.12059);
   hnumuCCinFV_stack_12->SetBinContent(23,6.411733);
   hnumuCCinFV_stack_12->SetBinContent(24,3.955651);
   hnumuCCinFV_stack_12->SetBinContent(25,1.30326);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.8013021);
   hnumuCCinFV_stack_12->SetBinError(4,1.310785);
   hnumuCCinFV_stack_12->SetBinError(5,2.348091);
   hnumuCCinFV_stack_12->SetBinError(6,2.788461);
   hnumuCCinFV_stack_12->SetBinError(7,1.892314);
   hnumuCCinFV_stack_12->SetBinError(8,1.863609);
   hnumuCCinFV_stack_12->SetBinError(9,1.864729);
   hnumuCCinFV_stack_12->SetBinError(10,1.945081);
   hnumuCCinFV_stack_12->SetBinError(11,2.220578);
   hnumuCCinFV_stack_12->SetBinError(12,2.121656);
   hnumuCCinFV_stack_12->SetBinError(13,2.09833);
   hnumuCCinFV_stack_12->SetBinError(14,2.397234);
   hnumuCCinFV_stack_12->SetBinError(15,2.229964);
   hnumuCCinFV_stack_12->SetBinError(16,1.965749);
   hnumuCCinFV_stack_12->SetBinError(17,2.062067);
   hnumuCCinFV_stack_12->SetBinError(18,2.012443);
   hnumuCCinFV_stack_12->SetBinError(19,3.067709);
   hnumuCCinFV_stack_12->SetBinError(20,2.277648);
   hnumuCCinFV_stack_12->SetBinError(21,2.102215);
   hnumuCCinFV_stack_12->SetBinError(22,2.142518);
   hnumuCCinFV_stack_12->SetBinError(23,1.540948);
   hnumuCCinFV_stack_12->SetBinError(24,1.028163);
   hnumuCCinFV_stack_12->SetBinError(25,0.6535266);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(6,0.7459182);
   hnueCCinFV_stack_13->SetBinContent(7,1.674196);
   hnueCCinFV_stack_13->SetBinContent(8,1.116924);
   hnueCCinFV_stack_13->SetBinContent(9,1.419486);
   hnueCCinFV_stack_13->SetBinContent(10,0.745953);
   hnueCCinFV_stack_13->SetBinContent(11,1.473583);
   hnueCCinFV_stack_13->SetBinContent(12,0.9808124);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.158955);
   hnueCCinFV_stack_13->SetBinContent(15,0.4334879);
   hnueCCinFV_stack_13->SetBinContent(16,0.2537049);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.4506685);
   hnueCCinFV_stack_13->SetBinContent(19,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(20,0.537618);
   hnueCCinFV_stack_13->SetBinContent(21,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2476759);
   hnueCCinFV_stack_13->SetBinError(6,0.4451478);
   hnueCCinFV_stack_13->SetBinError(7,0.701106);
   hnueCCinFV_stack_13->SetBinError(8,0.5842296);
   hnueCCinFV_stack_13->SetBinError(9,0.5377431);
   hnueCCinFV_stack_13->SetBinError(10,0.4451643);
   hnueCCinFV_stack_13->SetBinError(11,0.6230278);
   hnueCCinFV_stack_13->SetBinError(12,0.5785099);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.7264723);
   hnueCCinFV_stack_13->SetBinError(15,0.3078282);
   hnueCCinFV_stack_13->SetBinError(16,0.2537049);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3215406);
   hnueCCinFV_stack_13->SetBinError(19,0.463181);
   hnueCCinFV_stack_13->SetBinError(20,0.3933237);
   hnueCCinFV_stack_13->SetBinError(21,0.2504446);
   hnueCCinFV_stack_13->SetBinError(25,0.3893379);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__20->SetBinContent(0,0.7407695);
   hmcerror__20->SetBinContent(1,0.9049706);
   hmcerror__20->SetBinContent(2,12.47792);
   hmcerror__20->SetBinContent(3,35.03601);
   hmcerror__20->SetBinContent(4,74.58171);
   hmcerror__20->SetBinContent(5,105.2239);
   hmcerror__20->SetBinContent(6,125.1295);
   hmcerror__20->SetBinContent(7,142.8196);
   hmcerror__20->SetBinContent(8,140.8605);
   hmcerror__20->SetBinContent(9,141.0811);
   hmcerror__20->SetBinContent(10,148.8439);
   hmcerror__20->SetBinContent(11,155.986);
   hmcerror__20->SetBinContent(12,151.5784);
   hmcerror__20->SetBinContent(13,154.9824);
   hmcerror__20->SetBinContent(14,161.7095);
   hmcerror__20->SetBinContent(15,152.3406);
   hmcerror__20->SetBinContent(16,145.5426);
   hmcerror__20->SetBinContent(17,151.1212);
   hmcerror__20->SetBinContent(18,143.9259);
   hmcerror__20->SetBinContent(19,145.7728);
   hmcerror__20->SetBinContent(20,141.6409);
   hmcerror__20->SetBinContent(21,128.0503);
   hmcerror__20->SetBinContent(22,112.3902);
   hmcerror__20->SetBinContent(23,94.55166);
   hmcerror__20->SetBinContent(24,52.4902);
   hmcerror__20->SetBinContent(25,21.88441);
   hmcerror__20->SetBinContent(27,0.9815497);
   hmcerror__20->SetBinError(0,0.3551621);
   hmcerror__20->SetBinError(1,25.82026);
   hmcerror__20->SetBinError(2,10.22039);
   hmcerror__20->SetBinError(3,20.22941);
   hmcerror__20->SetBinError(4,40.77147);
   hmcerror__20->SetBinError(5,42.44896);
   hmcerror__20->SetBinError(6,50.13847);
   hmcerror__20->SetBinError(7,56.77508);
   hmcerror__20->SetBinError(8,55.41609);
   hmcerror__20->SetBinError(9,54.33624);
   hmcerror__20->SetBinError(10,53.06642);
   hmcerror__20->SetBinError(11,59.31082);
   hmcerror__20->SetBinError(12,59.00722);
   hmcerror__20->SetBinError(13,56.42401);
   hmcerror__20->SetBinError(14,57.27524);
   hmcerror__20->SetBinError(15,54.05626);
   hmcerror__20->SetBinError(16,52.3067);
   hmcerror__20->SetBinError(17,51.16233);
   hmcerror__20->SetBinError(18,50.59761);
   hmcerror__20->SetBinError(19,52.01712);
   hmcerror__20->SetBinError(20,53.55107);
   hmcerror__20->SetBinError(21,42.49745);
   hmcerror__20->SetBinError(22,39.24443);
   hmcerror__20->SetBinError(23,31.72275);
   hmcerror__20->SetBinError(24,21.52816);
   hmcerror__20->SetBinError(25,9.848291);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetBinError(27,2.46772);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[26] = {
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
   Double_t _fy3025[26] = {
   0,
   8,
   24,
   67,
   81,
   94,
   89,
   119,
   104,
   119,
   110,
   84,
   91,
   103,
   90,
   97,
   123,
   114,
   99,
   101,
   102,
   91,
   78,
   35,
   12,
   0};
   Double_t _felx3025[26] = {
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
   Double_t _fely3025[26] = {
   0,
   3.0307,
   5.0476,
   8.3119,
   9.1239,
   9.8173,
   9.5566,
   10.90871,
   10.19804,
   10.90871,
   10.48809,
   9.2886,
   9.6617,
   10.14889,
   9.6093,
   9.9704,
   11.09054,
   10.67708,
   10.0712,
   10.04988,
   10.0995,
   9.6617,
   8.9562,
   6.0548,
   3.64022,
   0};
   Double_t _fehx3025[26] = {
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
   Double_t _fehy3025[26] = {
   1.1478,
   2.7896,
   4.837,
   8.1094,
   8.9221,
   9.616,
   9.3552,
   10.90871,
   10.19804,
   10.90871,
   10.48809,
   9.0869,
   9.46,
   10.14889,
   9.4079,
   9.769,
   11.09054,
   10.67708,
   9.87,
   10.04988,
   10.0995,
   9.46,
   8.7542,
   5.8483,
   3.4155,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-156,156);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(147.4996);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2035.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 94.9","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1311.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.7","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.3","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[26] = {
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
   Double_t _fy3026[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[26] = {
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
   Double_t _fely3026[26] = {
   28.5316,
   0.8190783,
   0.5773892,
   0.5466685,
   0.4034157,
   0.4006925,
   0.3975301,
   0.3934113,
   0.385142,
   0.3565239,
   0.3802317,
   0.389285,
   0.3640672,
   0.3541859,
   0.3548381,
   0.3593911,
   0.3385516,
   0.3515531,
   0.3568369,
   0.3780763,
   0.331881,
   0.3491801,
   0.3355071,
   0.4101368,
   0.450014,
   0};
   Double_t _fehx3026[26] = {
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
   Double_t _fehy3026[26] = {
   28.5316,
   0.8190783,
   0.5773892,
   0.5466685,
   0.4034157,
   0.4006925,
   0.3975301,
   0.3934113,
   0.385142,
   0.3565239,
   0.3802317,
   0.389285,
   0.3640672,
   0.3541859,
   0.3548381,
   0.3593911,
   0.3385516,
   0.3515531,
   0.3568369,
   0.3780763,
   0.331881,
   0.3491801,
   0.3355071,
   0.4101368,
   0.450014,
   0};
   grae = new TGraphAsymmErrors(26,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-156,156);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[26] = {
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
   Double_t _fy3027[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[26] = {
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
   Double_t _fely3027[26] = {
   0.8569094,
   0.2814715,
   0.3614358,
   0.3849778,
   0.3487625,
   0.3435252,
   0.3662145,
   0.3597477,
   0.3522669,
   0.3237347,
   0.3373649,
   0.3488712,
   0.3400229,
   0.3311568,
   0.3360595,
   0.3329278,
   0.3139717,
   0.3250827,
   0.3256064,
   0.3459226,
   0.3044905,
   0.3194265,
   0.2809539,
   0.3116427,
   0.2539744,
   0};
   Double_t _fehx3027[26] = {
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
   Double_t _fehy3027[26] = {
   0.8569094,
   0.2814715,
   0.3614358,
   0.3849778,
   0.3487625,
   0.3435252,
   0.3662145,
   0.3597477,
   0.3522669,
   0.3237347,
   0.3373649,
   0.3488712,
   0.3400229,
   0.3311568,
   0.3360595,
   0.3329278,
   0.3139717,
   0.3250827,
   0.3256064,
   0.3459226,
   0.3044905,
   0.3194265,
   0.2809539,
   0.3116427,
   0.2539744,
   0};
   grae = new TGraphAsymmErrors(26,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-156,156);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[26] = {
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
   Double_t _fy3028[26] = {
   0,
   0.6411326,
   0.6850095,
   0.8983436,
   0.7697873,
   0.7512215,
   0.6231639,
   0.8448077,
   0.7371649,
   0.7994951,
   0.7051915,
   0.5541686,
   0.5871635,
   0.6369445,
   0.5907814,
   0.6664717,
   0.8139162,
   0.7920741,
   0.6791391,
   0.713071,
   0.7965621,
   0.809679,
   0.8249459,
   0.6667912,
   0.5483356,
   10};
   Double_t _felx3028[26] = {
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
   Double_t _fely3028[26] = {
   0,
   0.2428851,
   0.1440689,
   0.1114469,
   0.08670941,
   0.07845709,
   0.06691379,
   0.07744339,
   0.07228496,
   0.0732896,
   0.06723737,
   0.06127917,
   0.06234064,
   0.06276001,
   0.06307773,
   0.06850505,
   0.07338835,
   0.07418453,
   0.06908834,
   0.07095321,
   0.0788714,
   0.08596567,
   0.09472282,
   0.1153511,
   0.1663385,
   0};
   Double_t _fehx3028[26] = {
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
   Double_t _fehy3028[26] = {
   1.268328,
   0.2235629,
   0.138058,
   0.1087318,
   0.08479159,
   0.07684836,
   0.06550362,
   0.07744339,
   0.07228496,
   0.0732896,
   0.06723737,
   0.0599485,
   0.0610392,
   0.06276001,
   0.06175569,
   0.06712126,
   0.07338835,
   0.07418453,
   0.06770811,
   0.07095321,
   0.0788714,
   0.08417103,
   0.09258642,
   0.111417,
   0.15607,
   0};
   grae = new TGraphAsymmErrors(26,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-156,156);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
