#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Feb 17 21:15:02 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-2.384809,1241.026,263.7096);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__16->SetBinContent(0,1.30681);
   hmc__16->SetBinContent(1,74.14537);
   hmc__16->SetBinContent(2,103.5972);
   hmc__16->SetBinContent(3,109.2877);
   hmc__16->SetBinContent(4,94.5787);
   hmc__16->SetBinContent(5,108.4189);
   hmc__16->SetBinContent(6,106.4261);
   hmc__16->SetBinContent(7,97.64349);
   hmc__16->SetBinContent(8,101.8684);
   hmc__16->SetBinContent(9,96.7364);
   hmc__16->SetBinContent(10,87.96347);
   hmc__16->SetBinContent(11,89.28154);
   hmc__16->SetBinContent(12,91.40433);
   hmc__16->SetBinContent(13,94.76616);
   hmc__16->SetBinContent(14,110.3559);
   hmc__16->SetBinContent(15,111.4432);
   hmc__16->SetBinContent(16,96.7102);
   hmc__16->SetBinContent(17,98.56184);
   hmc__16->SetBinContent(18,101.0695);
   hmc__16->SetBinContent(19,98.18673);
   hmc__16->SetBinContent(20,96.87164);
   hmc__16->SetBinContent(21,119.2404);
   hmc__16->SetBinContent(22,98.09707);
   hmc__16->SetBinContent(23,93.56661);
   hmc__16->SetBinContent(24,104.5374);
   hmc__16->SetBinContent(25,98.17508);
   hmc__16->SetBinContent(26,111.1261);
   hmc__16->SetBinContent(27,101.1177);
   hmc__16->SetBinContent(28,102.2718);
   hmc__16->SetBinContent(29,88.21323);
   hmc__16->SetBinContent(30,57.81744);
   hmc__16->SetBinContent(31,1.320648);
   hmc__16->SetBinError(0,0.5308723);
   hmc__16->SetBinError(1,23.48766);
   hmc__16->SetBinError(2,29.72923);
   hmc__16->SetBinError(3,38.4063);
   hmc__16->SetBinError(4,25.78008);
   hmc__16->SetBinError(5,31.95085);
   hmc__16->SetBinError(6,33.65065);
   hmc__16->SetBinError(7,26.16786);
   hmc__16->SetBinError(8,30.48402);
   hmc__16->SetBinError(9,28.65428);
   hmc__16->SetBinError(10,23.90274);
   hmc__16->SetBinError(11,26.35684);
   hmc__16->SetBinError(12,26.535);
   hmc__16->SetBinError(13,25.98214);
   hmc__16->SetBinError(14,29.60575);
   hmc__16->SetBinError(15,36.66957);
   hmc__16->SetBinError(16,31.71341);
   hmc__16->SetBinError(17,26.15441);
   hmc__16->SetBinError(18,26.10705);
   hmc__16->SetBinError(19,24.74534);
   hmc__16->SetBinError(20,25.92276);
   hmc__16->SetBinError(21,31.97037);
   hmc__16->SetBinError(22,29.57968);
   hmc__16->SetBinError(23,27.82712);
   hmc__16->SetBinError(24,31.10466);
   hmc__16->SetBinError(25,28.88407);
   hmc__16->SetBinError(26,32.4893);
   hmc__16->SetBinError(27,30.00791);
   hmc__16->SetBinError(28,26.22829);
   hmc__16->SetBinError(29,27.7179);
   hmc__16->SetBinError(30,19.86979);
   hmc__16->SetBinError(31,2.724607);
   hmc__16->SetBinError(32,0.3895343);
   hmc__16->SetBinError(33,0.3895343);
   hmc__16->SetMinimum(-2.384809);
   hmc__16->SetMaximum(250.4049);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",32,0,1100);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(125.2025);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.554428);
   hbadmatch_stack_1->SetBinContent(2,2.376844);
   hbadmatch_stack_1->SetBinContent(3,1.560596);
   hbadmatch_stack_1->SetBinContent(4,3.165624);
   hbadmatch_stack_1->SetBinContent(5,2.700921);
   hbadmatch_stack_1->SetBinContent(6,4.131493);
   hbadmatch_stack_1->SetBinContent(7,0.9718649);
   hbadmatch_stack_1->SetBinContent(8,1.411723);
   hbadmatch_stack_1->SetBinContent(9,2.617671);
   hbadmatch_stack_1->SetBinContent(10,1.89147);
   hbadmatch_stack_1->SetBinContent(11,1.125359);
   hbadmatch_stack_1->SetBinContent(12,1.848925);
   hbadmatch_stack_1->SetBinContent(13,0.5850745);
   hbadmatch_stack_1->SetBinContent(14,4.047935);
   hbadmatch_stack_1->SetBinContent(15,1.671208);
   hbadmatch_stack_1->SetBinContent(16,2.711275);
   hbadmatch_stack_1->SetBinContent(17,1.180292);
   hbadmatch_stack_1->SetBinContent(18,1.802323);
   hbadmatch_stack_1->SetBinContent(19,0.8290086);
   hbadmatch_stack_1->SetBinContent(20,2.806424);
   hbadmatch_stack_1->SetBinContent(21,6.344657);
   hbadmatch_stack_1->SetBinContent(22,2.427149);
   hbadmatch_stack_1->SetBinContent(23,1.716547);
   hbadmatch_stack_1->SetBinContent(24,3.183061);
   hbadmatch_stack_1->SetBinContent(25,1.515398);
   hbadmatch_stack_1->SetBinContent(26,1.318683);
   hbadmatch_stack_1->SetBinContent(27,2.930985);
   hbadmatch_stack_1->SetBinContent(28,1.985604);
   hbadmatch_stack_1->SetBinContent(29,1.888952);
   hbadmatch_stack_1->SetBinContent(30,1.861376);
   hbadmatch_stack_1->SetBinError(1,0.6020097);
   hbadmatch_stack_1->SetBinError(2,0.7716723);
   hbadmatch_stack_1->SetBinError(3,0.6047651);
   hbadmatch_stack_1->SetBinError(4,0.985234);
   hbadmatch_stack_1->SetBinError(5,0.8520871);
   hbadmatch_stack_1->SetBinError(6,1.275991);
   hbadmatch_stack_1->SetBinError(7,0.500027);
   hbadmatch_stack_1->SetBinError(8,0.6558471);
   hbadmatch_stack_1->SetBinError(9,0.8682475);
   hbadmatch_stack_1->SetBinError(10,0.7505371);
   hbadmatch_stack_1->SetBinError(11,0.5194673);
   hbadmatch_stack_1->SetBinError(12,0.7839384);
   hbadmatch_stack_1->SetBinError(13,0.337793);
   hbadmatch_stack_1->SetBinError(14,1.79437);
   hbadmatch_stack_1->SetBinError(15,0.6448738);
   hbadmatch_stack_1->SetBinError(16,0.8499078);
   hbadmatch_stack_1->SetBinError(17,0.4818523);
   hbadmatch_stack_1->SetBinError(18,0.7070809);
   hbadmatch_stack_1->SetBinError(19,0.4162863);
   hbadmatch_stack_1->SetBinError(20,0.8789959);
   hbadmatch_stack_1->SetBinError(21,1.348055);
   hbadmatch_stack_1->SetBinError(22,0.7519548);
   hbadmatch_stack_1->SetBinError(23,0.7311049);
   hbadmatch_stack_1->SetBinError(24,0.9503338);
   hbadmatch_stack_1->SetBinError(25,0.588146);
   hbadmatch_stack_1->SetBinError(26,0.5542732);
   hbadmatch_stack_1->SetBinError(27,1.766244);
   hbadmatch_stack_1->SetBinError(28,0.8113273);
   hbadmatch_stack_1->SetBinError(29,0.8063317);
   hbadmatch_stack_1->SetBinError(30,0.7363857);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,5.669206);
   hext_stack_2->SetBinContent(2,7.925626);
   hext_stack_2->SetBinContent(3,14.27834);
   hext_stack_2->SetBinContent(4,8.649442);
   hext_stack_2->SetBinContent(5,12.61005);
   hext_stack_2->SetBinContent(6,10.99524);
   hext_stack_2->SetBinContent(7,7.187449);
   hext_stack_2->SetBinContent(8,9.794217);
   hext_stack_2->SetBinContent(9,6.578966);
   hext_stack_2->SetBinContent(10,7.392164);
   hext_stack_2->SetBinContent(11,12.2757);
   hext_stack_2->SetBinContent(12,4.628173);
   hext_stack_2->SetBinContent(13,7.309962);
   hext_stack_2->SetBinContent(14,13.30074);
   hext_stack_2->SetBinContent(15,11.49123);
   hext_stack_2->SetBinContent(16,7.380575);
   hext_stack_2->SetBinContent(17,7.448415);
   hext_stack_2->SetBinContent(18,11.24185);
   hext_stack_2->SetBinContent(19,13.96112);
   hext_stack_2->SetBinContent(20,8.600371);
   hext_stack_2->SetBinContent(21,17.57144);
   hext_stack_2->SetBinContent(22,15.8716);
   hext_stack_2->SetBinContent(23,10.67526);
   hext_stack_2->SetBinContent(24,6.560196);
   hext_stack_2->SetBinContent(25,3.889996);
   hext_stack_2->SetBinContent(26,12.18909);
   hext_stack_2->SetBinContent(27,7.455595);
   hext_stack_2->SetBinContent(28,9.787037);
   hext_stack_2->SetBinContent(29,3.248382);
   hext_stack_2->SetBinContent(30,2.357392);
   hext_stack_2->SetBinError(1,1.564185);
   hext_stack_2->SetBinError(2,1.893598);
   hext_stack_2->SetBinError(3,2.715701);
   hext_stack_2->SetBinError(4,2.014317);
   hext_stack_2->SetBinError(5,2.404738);
   hext_stack_2->SetBinError(6,2.248421);
   hext_stack_2->SetBinError(7,1.875196);
   hext_stack_2->SetBinError(8,2.07175);
   hext_stack_2->SetBinError(9,1.560451);
   hext_stack_2->SetBinError(10,1.663025);
   hext_stack_2->SetBinError(11,2.493002);
   hext_stack_2->SetBinError(12,1.291697);
   hext_stack_2->SetBinError(13,1.64486);
   hext_stack_2->SetBinError(14,2.631389);
   hext_stack_2->SetBinError(15,2.253798);
   hext_stack_2->SetBinError(16,1.682775);
   hext_stack_2->SetBinError(17,1.814999);
   hext_stack_2->SetBinError(18,2.288157);
   hext_stack_2->SetBinError(19,2.658683);
   hext_stack_2->SetBinError(20,1.824198);
   hext_stack_2->SetBinError(21,2.797629);
   hext_stack_2->SetBinError(22,2.950594);
   hext_stack_2->SetBinError(23,2.255058);
   hext_stack_2->SetBinError(24,1.643863);
   hext_stack_2->SetBinError(25,1.264566);
   hext_stack_2->SetBinError(26,2.453538);
   hext_stack_2->SetBinError(27,1.758699);
   hext_stack_2->SetBinError(28,2.119752);
   hext_stack_2->SetBinError(29,1.089706);
   hext_stack_2->SetBinError(30,0.9653222);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,5.555319);
   hdirt_stack_3->SetBinContent(2,4.960975);
   hdirt_stack_3->SetBinContent(3,3.641063);
   hdirt_stack_3->SetBinContent(4,1.228641);
   hdirt_stack_3->SetBinContent(5,0.5105644);
   hdirt_stack_3->SetBinContent(6,1.174751);
   hdirt_stack_3->SetBinContent(7,1.096754);
   hdirt_stack_3->SetBinContent(8,1.132946);
   hdirt_stack_3->SetBinContent(9,1.471133);
   hdirt_stack_3->SetBinContent(10,0.9707304);
   hdirt_stack_3->SetBinContent(11,0.4950385);
   hdirt_stack_3->SetBinContent(12,0.3695036);
   hdirt_stack_3->SetBinContent(13,1.512961);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,0.7207426);
   hdirt_stack_3->SetBinContent(16,1.023377);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.7567513);
   hdirt_stack_3->SetBinContent(20,0.6610426);
   hdirt_stack_3->SetBinContent(21,1.276893);
   hdirt_stack_3->SetBinContent(22,1.07357);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,1.983438);
   hdirt_stack_3->SetBinContent(27,0.7524016);
   hdirt_stack_3->SetBinContent(28,0.7759784);
   hdirt_stack_3->SetBinContent(29,0.6951543);
   hdirt_stack_3->SetBinContent(30,0.3569671);
   hdirt_stack_3->SetBinError(1,1.272591);
   hdirt_stack_3->SetBinError(2,1.150517);
   hdirt_stack_3->SetBinError(3,0.9730668);
   hdirt_stack_3->SetBinError(4,0.5169031);
   hdirt_stack_3->SetBinError(5,0.3646725);
   hdirt_stack_3->SetBinError(6,0.5995074);
   hdirt_stack_3->SetBinError(7,0.5690882);
   hdirt_stack_3->SetBinError(8,0.526479);
   hdirt_stack_3->SetBinError(9,0.6257402);
   hdirt_stack_3->SetBinError(10,0.7172737);
   hdirt_stack_3->SetBinError(11,0.2933304);
   hdirt_stack_3->SetBinError(12,0.2657029);
   hdirt_stack_3->SetBinError(13,0.7120011);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.4348223);
   hdirt_stack_3->SetBinError(16,0.5655242);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.4605545);
   hdirt_stack_3->SetBinError(20,0.3370462);
   hdirt_stack_3->SetBinError(21,0.5924964);
   hdirt_stack_3->SetBinError(22,0.5046897);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.209415);
   hdirt_stack_3->SetBinError(27,0.4142002);
   hdirt_stack_3->SetBinError(28,0.458477);
   hdirt_stack_3->SetBinError(29,0.4258516);
   hdirt_stack_3->SetBinError(30,0.258803);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.536893);
   houtFV_stack_4->SetBinContent(1,18.40109);
   houtFV_stack_4->SetBinContent(2,14.74248);
   houtFV_stack_4->SetBinContent(3,8.76523);
   houtFV_stack_4->SetBinContent(4,9.018116);
   houtFV_stack_4->SetBinContent(5,8.38141);
   houtFV_stack_4->SetBinContent(6,10.89353);
   houtFV_stack_4->SetBinContent(7,9.822442);
   houtFV_stack_4->SetBinContent(8,9.618847);
   houtFV_stack_4->SetBinContent(9,8.376726);
   houtFV_stack_4->SetBinContent(10,7.964268);
   houtFV_stack_4->SetBinContent(11,7.723835);
   houtFV_stack_4->SetBinContent(12,7.76741);
   houtFV_stack_4->SetBinContent(13,6.335209);
   houtFV_stack_4->SetBinContent(14,9.443069);
   houtFV_stack_4->SetBinContent(15,11.04013);
   houtFV_stack_4->SetBinContent(16,8.897973);
   houtFV_stack_4->SetBinContent(17,10.30598);
   houtFV_stack_4->SetBinContent(18,9.907619);
   houtFV_stack_4->SetBinContent(19,8.307219);
   houtFV_stack_4->SetBinContent(20,10.80738);
   houtFV_stack_4->SetBinContent(21,8.841339);
   houtFV_stack_4->SetBinContent(22,9.225684);
   houtFV_stack_4->SetBinContent(23,8.897973);
   houtFV_stack_4->SetBinContent(24,8.843029);
   houtFV_stack_4->SetBinContent(25,12.21241);
   houtFV_stack_4->SetBinContent(26,8.895168);
   houtFV_stack_4->SetBinContent(27,12.51384);
   houtFV_stack_4->SetBinContent(28,8.887329);
   houtFV_stack_4->SetBinContent(29,13.39378);
   houtFV_stack_4->SetBinContent(30,12.84749);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.3929602);
   houtFV_stack_4->SetBinError(1,2.166841);
   houtFV_stack_4->SetBinError(2,1.922124);
   houtFV_stack_4->SetBinError(3,1.491594);
   houtFV_stack_4->SetBinError(4,1.513615);
   houtFV_stack_4->SetBinError(5,1.404894);
   houtFV_stack_4->SetBinError(6,1.642216);
   houtFV_stack_4->SetBinError(7,1.526092);
   houtFV_stack_4->SetBinError(8,1.576516);
   houtFV_stack_4->SetBinError(9,1.396799);
   houtFV_stack_4->SetBinError(10,1.415256);
   houtFV_stack_4->SetBinError(11,1.344592);
   houtFV_stack_4->SetBinError(12,1.37408);
   houtFV_stack_4->SetBinError(13,1.261952);
   houtFV_stack_4->SetBinError(14,1.52306);
   houtFV_stack_4->SetBinError(15,1.647541);
   houtFV_stack_4->SetBinError(16,1.495355);
   houtFV_stack_4->SetBinError(17,1.563849);
   houtFV_stack_4->SetBinError(18,1.624963);
   houtFV_stack_4->SetBinError(19,1.386134);
   houtFV_stack_4->SetBinError(20,1.668618);
   houtFV_stack_4->SetBinError(21,1.507677);
   houtFV_stack_4->SetBinError(22,1.506778);
   houtFV_stack_4->SetBinError(23,1.495355);
   houtFV_stack_4->SetBinError(24,1.507896);
   houtFV_stack_4->SetBinError(25,1.772744);
   houtFV_stack_4->SetBinError(26,1.504714);
   houtFV_stack_4->SetBinError(27,1.744139);
   houtFV_stack_4->SetBinError(28,1.497163);
   houtFV_stack_4->SetBinError(29,1.917039);
   houtFV_stack_4->SetBinError(30,1.793453);
   houtFV_stack_4->SetBinError(31,0.3929602);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.910994);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.537916);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.355898);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.385462);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.193402);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.610238);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.03862);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.606997);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.06752);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.899616);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.843816);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.136602);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.36097);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.624024);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.55527);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.179952);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.552862);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.627352);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.180616);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.189162);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.245794);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.732048);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.838912);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.193066);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.464025);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,3.847392);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.15446);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,3.849888);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.366772);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.6980042);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4871906);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5548575);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4939998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5323031);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6047022);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5820726);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.562232);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5010404);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6073782);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5157142);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5142026);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5586438);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.634897);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6153885);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5970912);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6255303);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5366722);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6751058);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6146506);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4752605);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4966846);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4780499);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3716245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5478567);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7470814);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.6462888);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.6775032);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.6895562);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3422756);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.3431282);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.3764861);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.36966);
   hNCpi0inFVres_stack_7->SetBinContent(2,39.27671);
   hNCpi0inFVres_stack_7->SetBinContent(3,42.39623);
   hNCpi0inFVres_stack_7->SetBinContent(4,34.38173);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.19758);
   hNCpi0inFVres_stack_7->SetBinContent(6,41.84917);
   hNCpi0inFVres_stack_7->SetBinContent(7,37.62976);
   hNCpi0inFVres_stack_7->SetBinContent(8,39.96509);
   hNCpi0inFVres_stack_7->SetBinContent(9,41.53496);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.99305);
   hNCpi0inFVres_stack_7->SetBinContent(11,36.89407);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.57706);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.78482);
   hNCpi0inFVres_stack_7->SetBinContent(14,45.75597);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.79248);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.40708);
   hNCpi0inFVres_stack_7->SetBinContent(17,42.55099);
   hNCpi0inFVres_stack_7->SetBinContent(18,41.62682);
   hNCpi0inFVres_stack_7->SetBinContent(19,37.89748);
   hNCpi0inFVres_stack_7->SetBinContent(20,38.52109);
   hNCpi0inFVres_stack_7->SetBinContent(21,38.64014);
   hNCpi0inFVres_stack_7->SetBinContent(22,35.45838);
   hNCpi0inFVres_stack_7->SetBinContent(23,39.10997);
   hNCpi0inFVres_stack_7->SetBinContent(24,44.48992);
   hNCpi0inFVres_stack_7->SetBinContent(25,37.46181);
   hNCpi0inFVres_stack_7->SetBinContent(26,43.51525);
   hNCpi0inFVres_stack_7->SetBinContent(27,38.84392);
   hNCpi0inFVres_stack_7->SetBinContent(28,42.45932);
   hNCpi0inFVres_stack_7->SetBinContent(29,38.03749);
   hNCpi0inFVres_stack_7->SetBinContent(30,18.9113);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1952999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2236377);
   hNCpi0inFVres_stack_7->SetBinError(1,1.458617);
   hNCpi0inFVres_stack_7->SetBinError(2,2.046568);
   hNCpi0inFVres_stack_7->SetBinError(3,2.179496);
   hNCpi0inFVres_stack_7->SetBinError(4,1.884609);
   hNCpi0inFVres_stack_7->SetBinError(5,2.060797);
   hNCpi0inFVres_stack_7->SetBinError(6,2.122895);
   hNCpi0inFVres_stack_7->SetBinError(7,1.958109);
   hNCpi0inFVres_stack_7->SetBinError(8,2.088687);
   hNCpi0inFVres_stack_7->SetBinError(9,2.087459);
   hNCpi0inFVres_stack_7->SetBinError(10,1.946113);
   hNCpi0inFVres_stack_7->SetBinError(11,1.970756);
   hNCpi0inFVres_stack_7->SetBinError(12,2.07568);
   hNCpi0inFVres_stack_7->SetBinError(13,2.045014);
   hNCpi0inFVres_stack_7->SetBinError(14,2.231234);
   hNCpi0inFVres_stack_7->SetBinError(15,2.217514);
   hNCpi0inFVres_stack_7->SetBinError(16,2.050004);
   hNCpi0inFVres_stack_7->SetBinError(17,2.139544);
   hNCpi0inFVres_stack_7->SetBinError(18,2.159688);
   hNCpi0inFVres_stack_7->SetBinError(19,2.001101);
   hNCpi0inFVres_stack_7->SetBinError(20,2.018771);
   hNCpi0inFVres_stack_7->SetBinError(21,1.971118);
   hNCpi0inFVres_stack_7->SetBinError(22,1.926599);
   hNCpi0inFVres_stack_7->SetBinError(23,2.006426);
   hNCpi0inFVres_stack_7->SetBinError(24,2.276494);
   hNCpi0inFVres_stack_7->SetBinError(25,1.906289);
   hNCpi0inFVres_stack_7->SetBinError(26,2.11278);
   hNCpi0inFVres_stack_7->SetBinError(27,2.009625);
   hNCpi0inFVres_stack_7->SetBinError(28,2.127382);
   hNCpi0inFVres_stack_7->SetBinError(29,2.026469);
   hNCpi0inFVres_stack_7->SetBinError(30,1.465095);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07381642);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.743192);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.315217);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.282021);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.47208);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.629271);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.65393);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.061476);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.792429);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.462454);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.471168);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.386804);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.222971);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.318289);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.13844);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.87913);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.147088);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.921055);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.251703);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.686238);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.344782);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.27994);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.49898);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.266649);
   hNCpi0inFVdis_stack_8->SetBinContent(24,7.765362);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.34114);
   hNCpi0inFVdis_stack_8->SetBinContent(26,8.198143);
   hNCpi0inFVdis_stack_8->SetBinContent(27,8.28218);
   hNCpi0inFVdis_stack_8->SetBinContent(28,8.630934);
   hNCpi0inFVdis_stack_8->SetBinContent(29,4.783701);
   hNCpi0inFVdis_stack_8->SetBinContent(30,4.002174);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.77374);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.765394);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.984514);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8848161);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9491893);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9022038);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9534515);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8751221);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9161528);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8486295);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8551781);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8575638);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8005225);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8448753);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9613788);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.012994);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9468969);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8691722);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9936303);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7906572);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9065078);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.855367);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8576773);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.885622);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9504531);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.8886199);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.9260121);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.9692743);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.640339);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6835563);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,8.451289);
   hCCpi0inFV_stack_10->SetBinContent(2,10.9929);
   hCCpi0inFV_stack_10->SetBinContent(3,14.01633);
   hCCpi0inFV_stack_10->SetBinContent(4,14.04554);
   hCCpi0inFV_stack_10->SetBinContent(5,16.08314);
   hCCpi0inFV_stack_10->SetBinContent(6,13.25591);
   hCCpi0inFV_stack_10->SetBinContent(7,13.43616);
   hCCpi0inFV_stack_10->SetBinContent(8,13.32999);
   hCCpi0inFV_stack_10->SetBinContent(9,12.71101);
   hCCpi0inFV_stack_10->SetBinContent(10,12.31098);
   hCCpi0inFV_stack_10->SetBinContent(11,12.14364);
   hCCpi0inFV_stack_10->SetBinContent(12,12.87222);
   hCCpi0inFV_stack_10->SetBinContent(13,16.13925);
   hCCpi0inFV_stack_10->SetBinContent(14,13.1969);
   hCCpi0inFV_stack_10->SetBinContent(15,16.84724);
   hCCpi0inFV_stack_10->SetBinContent(16,12.21509);
   hCCpi0inFV_stack_10->SetBinContent(17,10.84376);
   hCCpi0inFV_stack_10->SetBinContent(18,12.35916);
   hCCpi0inFV_stack_10->SetBinContent(19,12.05255);
   hCCpi0inFV_stack_10->SetBinContent(20,13.2553);
   hCCpi0inFV_stack_10->SetBinContent(21,13.40241);
   hCCpi0inFV_stack_10->SetBinContent(22,12.2303);
   hCCpi0inFV_stack_10->SetBinContent(23,13.24238);
   hCCpi0inFV_stack_10->SetBinContent(24,17.23233);
   hCCpi0inFV_stack_10->SetBinContent(25,12.89267);
   hCCpi0inFV_stack_10->SetBinContent(26,16.15883);
   hCCpi0inFV_stack_10->SetBinContent(27,14.71838);
   hCCpi0inFV_stack_10->SetBinContent(28,12.74769);
   hCCpi0inFV_stack_10->SetBinContent(29,9.972024);
   hCCpi0inFV_stack_10->SetBinContent(30,8.392964);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.482235);
   hCCpi0inFV_stack_10->SetBinError(2,1.598829);
   hCCpi0inFV_stack_10->SetBinError(3,1.892424);
   hCCpi0inFV_stack_10->SetBinError(4,1.787717);
   hCCpi0inFV_stack_10->SetBinError(5,1.987359);
   hCCpi0inFV_stack_10->SetBinError(6,1.799569);
   hCCpi0inFV_stack_10->SetBinError(7,1.825468);
   hCCpi0inFV_stack_10->SetBinError(8,1.846107);
   hCCpi0inFV_stack_10->SetBinError(9,1.772503);
   hCCpi0inFV_stack_10->SetBinError(10,1.78866);
   hCCpi0inFV_stack_10->SetBinError(11,1.781464);
   hCCpi0inFV_stack_10->SetBinError(12,1.802315);
   hCCpi0inFV_stack_10->SetBinError(13,1.998555);
   hCCpi0inFV_stack_10->SetBinError(14,1.848386);
   hCCpi0inFV_stack_10->SetBinError(15,2.023545);
   hCCpi0inFV_stack_10->SetBinError(16,1.69804);
   hCCpi0inFV_stack_10->SetBinError(17,1.677222);
   hCCpi0inFV_stack_10->SetBinError(18,1.777355);
   hCCpi0inFV_stack_10->SetBinError(19,1.78763);
   hCCpi0inFV_stack_10->SetBinError(20,1.743508);
   hCCpi0inFV_stack_10->SetBinError(21,1.80083);
   hCCpi0inFV_stack_10->SetBinError(22,1.699794);
   hCCpi0inFV_stack_10->SetBinError(23,1.798096);
   hCCpi0inFV_stack_10->SetBinError(24,2.090012);
   hCCpi0inFV_stack_10->SetBinError(25,1.819913);
   hCCpi0inFV_stack_10->SetBinError(26,2.048646);
   hCCpi0inFV_stack_10->SetBinError(27,1.88948);
   hCCpi0inFV_stack_10->SetBinError(28,1.815464);
   hCCpi0inFV_stack_10->SetBinError(29,1.620261);
   hCCpi0inFV_stack_10->SetBinError(30,1.494443);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,1.91221);
   hNCinFV_stack_11->SetBinContent(2,6.055439);
   hNCinFV_stack_11->SetBinContent(3,6.055439);
   hNCinFV_stack_11->SetBinContent(4,4.876838);
   hNCinFV_stack_11->SetBinContent(5,7.480628);
   hNCinFV_stack_11->SetBinContent(6,5.271958);
   hNCinFV_stack_11->SetBinContent(7,8.834577);
   hNCinFV_stack_11->SetBinContent(8,7.866215);
   hNCinFV_stack_11->SetBinContent(9,5.336437);
   hNCinFV_stack_11->SetBinContent(10,6.592332);
   hNCinFV_stack_11->SetBinContent(11,5.433409);
   hNCinFV_stack_11->SetBinContent(12,7.866215);
   hNCinFV_stack_11->SetBinContent(13,7.230659);
   hNCinFV_stack_11->SetBinContent(14,6.445489);
   hNCinFV_stack_11->SetBinContent(15,6.298645);
   hNCinFV_stack_11->SetBinContent(16,8.402499);
   hNCinFV_stack_11->SetBinContent(17,6.739175);
   hNCinFV_stack_11->SetBinContent(18,6.403461);
   hNCinFV_stack_11->SetBinContent(19,6.987453);
   hNCinFV_stack_11->SetBinContent(20,6.351899);
   hNCinFV_stack_11->SetBinContent(21,10.50804);
   hNCinFV_stack_11->SetBinContent(22,5.22486);
   hNCinFV_stack_11->SetBinContent(23,6.016793);
   hNCinFV_stack_11->SetBinContent(24,5.626743);
   hNCinFV_stack_11->SetBinContent(25,8.731451);
   hNCinFV_stack_11->SetBinContent(26,7.6224);
   hNCinFV_stack_11->SetBinContent(27,6.931901);
   hNCinFV_stack_11->SetBinContent(28,7.607918);
   hNCinFV_stack_11->SetBinContent(29,7.28114);
   hNCinFV_stack_11->SetBinContent(30,3.57107);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.6516395);
   hNCinFV_stack_11->SetBinError(2,1.256838);
   hNCinFV_stack_11->SetBinError(3,1.256838);
   hNCinFV_stack_11->SetBinError(4,1.161086);
   hNCinFV_stack_11->SetBinError(5,1.345439);
   hNCinFV_stack_11->SetBinError(6,1.194227);
   hNCinFV_stack_11->SetBinError(7,1.506798);
   hNCinFV_stack_11->SetBinError(8,1.443231);
   hNCinFV_stack_11->SetBinError(9,1.092639);
   hNCinFV_stack_11->SetBinError(10,1.316837);
   hNCinFV_stack_11->SetBinError(11,1.145364);
   hNCinFV_stack_11->SetBinError(12,1.443231);
   hNCinFV_stack_11->SetBinError(13,1.345301);
   hNCinFV_stack_11->SetBinError(14,1.286744);
   hNCinFV_stack_11->SetBinError(15,1.255931);
   hNCinFV_stack_11->SetBinError(16,1.427833);
   hNCinFV_stack_11->SetBinError(17,1.346257);
   hNCinFV_stack_11->SetBinError(18,1.224764);
   hNCinFV_stack_11->SetBinError(19,1.346148);
   hNCinFV_stack_11->SetBinError(20,1.240579);
   hNCinFV_stack_11->SetBinError(21,1.581364);
   hNCinFV_stack_11->SetBinError(22,1.126289);
   hNCinFV_stack_11->SetBinError(23,1.19386);
   hNCinFV_stack_11->SetBinError(24,1.161564);
   hNCinFV_stack_11->SetBinError(25,1.532455);
   hNCinFV_stack_11->SetBinError(26,1.373524);
   hNCinFV_stack_11->SetBinError(27,1.284972);
   hNCinFV_stack_11->SetBinError(28,1.393339);
   hNCinFV_stack_11->SetBinError(29,1.403143);
   hNCinFV_stack_11->SetBinError(30,0.9206376);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,5.24377);
   hnumuCCinFV_stack_12->SetBinContent(2,7.292089);
   hnumuCCinFV_stack_12->SetBinContent(3,7.602047);
   hnumuCCinFV_stack_12->SetBinContent(4,7.337333);
   hnumuCCinFV_stack_12->SetBinContent(5,5.449762);
   hnumuCCinFV_stack_12->SetBinContent(6,6.555052);
   hnumuCCinFV_stack_12->SetBinContent(7,6.728057);
   hnumuCCinFV_stack_12->SetBinContent(8,6.862811);
   hnumuCCinFV_stack_12->SetBinContent(9,5.294412);
   hnumuCCinFV_stack_12->SetBinContent(10,4.198531);
   hnumuCCinFV_stack_12->SetBinContent(11,3.659922);
   hnumuCCinFV_stack_12->SetBinContent(12,4.146935);
   hnumuCCinFV_stack_12->SetBinContent(13,5.417044);
   hnumuCCinFV_stack_12->SetBinContent(14,5.307568);
   hnumuCCinFV_stack_12->SetBinContent(15,5.423989);
   hnumuCCinFV_stack_12->SetBinContent(16,3.566779);
   hnumuCCinFV_stack_12->SetBinContent(17,6.217955);
   hnumuCCinFV_stack_12->SetBinContent(18,5.108275);
   hnumuCCinFV_stack_12->SetBinContent(19,4.067761);
   hnumuCCinFV_stack_12->SetBinContent(20,6.34145);
   hnumuCCinFV_stack_12->SetBinContent(21,10.72033);
   hnumuCCinFV_stack_12->SetBinContent(22,4.98822);
   hnumuCCinFV_stack_12->SetBinContent(23,4.164598);
   hnumuCCinFV_stack_12->SetBinContent(24,5.967929);
   hnumuCCinFV_stack_12->SetBinContent(25,5.812602);
   hnumuCCinFV_stack_12->SetBinContent(26,6.134299);
   hnumuCCinFV_stack_12->SetBinContent(27,3.370608);
   hnumuCCinFV_stack_12->SetBinContent(28,4.993323);
   hnumuCCinFV_stack_12->SetBinContent(29,6.545301);
   hnumuCCinFV_stack_12->SetBinContent(30,4.498453);
   hnumuCCinFV_stack_12->SetBinError(1,1.508264);
   hnumuCCinFV_stack_12->SetBinError(2,1.474261);
   hnumuCCinFV_stack_12->SetBinError(3,1.521753);
   hnumuCCinFV_stack_12->SetBinError(4,1.381934);
   hnumuCCinFV_stack_12->SetBinError(5,1.191551);
   hnumuCCinFV_stack_12->SetBinError(6,1.488321);
   hnumuCCinFV_stack_12->SetBinError(7,1.922072);
   hnumuCCinFV_stack_12->SetBinError(8,1.343108);
   hnumuCCinFV_stack_12->SetBinError(9,1.291748);
   hnumuCCinFV_stack_12->SetBinError(10,1.327033);
   hnumuCCinFV_stack_12->SetBinError(11,0.9740414);
   hnumuCCinFV_stack_12->SetBinError(12,1.548981);
   hnumuCCinFV_stack_12->SetBinError(13,1.308629);
   hnumuCCinFV_stack_12->SetBinError(14,1.210037);
   hnumuCCinFV_stack_12->SetBinError(15,1.273783);
   hnumuCCinFV_stack_12->SetBinError(16,0.9568029);
   hnumuCCinFV_stack_12->SetBinError(17,1.392005);
   hnumuCCinFV_stack_12->SetBinError(18,1.140331);
   hnumuCCinFV_stack_12->SetBinError(19,1.24797);
   hnumuCCinFV_stack_12->SetBinError(20,1.882962);
   hnumuCCinFV_stack_12->SetBinError(21,1.740353);
   hnumuCCinFV_stack_12->SetBinError(22,1.15682);
   hnumuCCinFV_stack_12->SetBinError(23,0.9823385);
   hnumuCCinFV_stack_12->SetBinError(24,1.324685);
   hnumuCCinFV_stack_12->SetBinError(25,1.188281);
   hnumuCCinFV_stack_12->SetBinError(26,1.347403);
   hnumuCCinFV_stack_12->SetBinError(27,0.9288772);
   hnumuCCinFV_stack_12->SetBinError(28,1.136011);
   hnumuCCinFV_stack_12->SetBinError(29,1.536203);
   hnumuCCinFV_stack_12->SetBinError(30,1.433396);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.5913461);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,0.6968117);
   hnueCCinFV_stack_13->SetBinContent(8,1.375494);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(11,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(12,0.4244309);
   hnueCCinFV_stack_13->SetBinContent(13,0.6882274);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.47188);
   hnueCCinFV_stack_13->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_13->SetBinContent(17,0.4679016);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.321025);
   hnueCCinFV_stack_13->SetBinContent(20,0.8811529);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.170972);
   hnueCCinFV_stack_13->SetBinContent(23,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.012306);
   hnueCCinFV_stack_13->SetBinContent(27,0.9960555);
   hnueCCinFV_stack_13->SetBinContent(28,0.3099382);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.4417072);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.5383537);
   hnueCCinFV_stack_13->SetBinError(8,0.5767193);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(11,0.2441371);
   hnueCCinFV_stack_13->SetBinError(12,0.4244309);
   hnueCCinFV_stack_13->SetBinError(13,0.5294158);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6336633);
   hnueCCinFV_stack_13->SetBinError(16,0.3532401);
   hnueCCinFV_stack_13->SetBinError(17,0.4679016);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.7882246);
   hnueCCinFV_stack_13->SetBinError(20,0.4997561);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.706044);
   hnueCCinFV_stack_13->SetBinError(23,0.3041673);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.453559);
   hnueCCinFV_stack_13->SetBinError(27,0.6227151);
   hnueCCinFV_stack_13->SetBinError(28,0.3099382);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.1950249);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__17->SetBinContent(0,1.30681);
   hmcerror__17->SetBinContent(1,74.14537);
   hmcerror__17->SetBinContent(2,103.5972);
   hmcerror__17->SetBinContent(3,109.2877);
   hmcerror__17->SetBinContent(4,94.5787);
   hmcerror__17->SetBinContent(5,108.4189);
   hmcerror__17->SetBinContent(6,106.4261);
   hmcerror__17->SetBinContent(7,97.64349);
   hmcerror__17->SetBinContent(8,101.8684);
   hmcerror__17->SetBinContent(9,96.7364);
   hmcerror__17->SetBinContent(10,87.96347);
   hmcerror__17->SetBinContent(11,89.28154);
   hmcerror__17->SetBinContent(12,91.40433);
   hmcerror__17->SetBinContent(13,94.76616);
   hmcerror__17->SetBinContent(14,110.3559);
   hmcerror__17->SetBinContent(15,111.4432);
   hmcerror__17->SetBinContent(16,96.7102);
   hmcerror__17->SetBinContent(17,98.56184);
   hmcerror__17->SetBinContent(18,101.0695);
   hmcerror__17->SetBinContent(19,98.18673);
   hmcerror__17->SetBinContent(20,96.87164);
   hmcerror__17->SetBinContent(21,119.2404);
   hmcerror__17->SetBinContent(22,98.09707);
   hmcerror__17->SetBinContent(23,93.56661);
   hmcerror__17->SetBinContent(24,104.5374);
   hmcerror__17->SetBinContent(25,98.17508);
   hmcerror__17->SetBinContent(26,111.1261);
   hmcerror__17->SetBinContent(27,101.1177);
   hmcerror__17->SetBinContent(28,102.2718);
   hmcerror__17->SetBinContent(29,88.21323);
   hmcerror__17->SetBinContent(30,57.81744);
   hmcerror__17->SetBinContent(31,1.320648);
   hmcerror__17->SetBinError(0,0.5308723);
   hmcerror__17->SetBinError(1,23.48766);
   hmcerror__17->SetBinError(2,29.72923);
   hmcerror__17->SetBinError(3,38.4063);
   hmcerror__17->SetBinError(4,25.78008);
   hmcerror__17->SetBinError(5,31.95085);
   hmcerror__17->SetBinError(6,33.65065);
   hmcerror__17->SetBinError(7,26.16786);
   hmcerror__17->SetBinError(8,30.48402);
   hmcerror__17->SetBinError(9,28.65428);
   hmcerror__17->SetBinError(10,23.90274);
   hmcerror__17->SetBinError(11,26.35684);
   hmcerror__17->SetBinError(12,26.535);
   hmcerror__17->SetBinError(13,25.98214);
   hmcerror__17->SetBinError(14,29.60575);
   hmcerror__17->SetBinError(15,36.66957);
   hmcerror__17->SetBinError(16,31.71341);
   hmcerror__17->SetBinError(17,26.15441);
   hmcerror__17->SetBinError(18,26.10705);
   hmcerror__17->SetBinError(19,24.74534);
   hmcerror__17->SetBinError(20,25.92276);
   hmcerror__17->SetBinError(21,31.97037);
   hmcerror__17->SetBinError(22,29.57968);
   hmcerror__17->SetBinError(23,27.82712);
   hmcerror__17->SetBinError(24,31.10466);
   hmcerror__17->SetBinError(25,28.88407);
   hmcerror__17->SetBinError(26,32.4893);
   hmcerror__17->SetBinError(27,30.00791);
   hmcerror__17->SetBinError(28,26.22829);
   hmcerror__17->SetBinError(29,27.7179);
   hmcerror__17->SetBinError(30,19.86979);
   hmcerror__17->SetBinError(31,2.724607);
   hmcerror__17->SetBinError(32,0.3895343);
   hmcerror__17->SetBinError(33,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3021[32] = {
   70,
   109,
   108,
   91,
   107,
   112,
   97,
   106,
   119,
   88,
   98,
   91,
   99,
   94,
   118,
   101,
   105,
   106,
   103,
   103,
   98,
   108,
   104,
   78,
   101,
   102,
   94,
   82,
   92,
   53,
   1,
   0};
   Double_t _felx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3021[32] = {
   8.4925,
   10.44031,
   10.3923,
   9.6617,
   10.34408,
   10.58301,
   9.9704,
   10.29563,
   10.90871,
   9.5036,
   10.0209,
   9.6617,
   10.0712,
   9.8173,
   10.86278,
   10.04988,
   10.24695,
   10.29563,
   10.14889,
   10.14889,
   10.0209,
   10.3923,
   10.19804,
   8.9562,
   10.04988,
   10.0995,
   9.8173,
   9.1791,
   9.7138,
   7.4105,
   1,
   0};
   Double_t _fehx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3021[32] = {
   8.2902,
   10.44031,
   10.3923,
   9.46,
   10.34408,
   10.58301,
   9.769,
   10.29563,
   10.90871,
   9.3021,
   9.82,
   9.46,
   9.87,
   9.616,
   10.86278,
   10.04988,
   10.24695,
   10.29563,
   10.14889,
   10.14889,
   9.82,
   10.3923,
   10.19804,
   8.7542,
   10.04988,
   10.0995,
   9.616,
   8.9774,
   9.513,
   7.2068,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1210);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(142.8996);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.1/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 301.6","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.5","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.6","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3022[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3022[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3022[32] = {
   0.3167785,
   0.2869696,
   0.3514238,
   0.2725781,
   0.294698,
   0.3161878,
   0.267994,
   0.2992492,
   0.2962099,
   0.2717349,
   0.2952104,
   0.2903035,
   0.2741711,
   0.2682752,
   0.3290426,
   0.3279221,
   0.2653604,
   0.258308,
   0.2520233,
   0.2675991,
   0.2681168,
   0.3015348,
   0.2974044,
   0.2975457,
   0.2942097,
   0.2923643,
   0.2967621,
   0.2564568,
   0.3142148,
   0.3436644,
   2.063083,
   0};
   Double_t _fehx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3022[32] = {
   0.3167785,
   0.2869696,
   0.3514238,
   0.2725781,
   0.294698,
   0.3161878,
   0.267994,
   0.2992492,
   0.2962099,
   0.2717349,
   0.2952104,
   0.2903035,
   0.2741711,
   0.2682752,
   0.3290426,
   0.3279221,
   0.2653604,
   0.258308,
   0.2520233,
   0.2675991,
   0.2681168,
   0.3015348,
   0.2974044,
   0.2975457,
   0.2942097,
   0.2923643,
   0.2967621,
   0.2564568,
   0.3142148,
   0.3436644,
   2.063083,
   0};
   grae = new TGraphAsymmErrors(32,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1210);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3023[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3023[32] = {
   0.2051811,
   0.2063695,
   0.2033997,
   0.2083471,
   0.2085414,
   0.2085131,
   0.2112783,
   0.2126957,
   0.2163124,
   0.2119144,
   0.2032322,
   0.2220829,
   0.2047286,
   0.2075127,
   0.2135734,
   0.2194419,
   0.2190906,
   0.2069626,
   0.1989436,
   0.2122967,
   0.2009648,
   0.1932219,
   0.2152332,
   0.2117602,
   0.2282067,
   0.2064446,
   0.2127858,
   0.2107441,
   0.2320958,
   0.2406568,
   0.6001536,
   0};
   Double_t _fehx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3023[32] = {
   0.2051811,
   0.2063695,
   0.2033997,
   0.2083471,
   0.2085414,
   0.2085131,
   0.2112783,
   0.2126957,
   0.2163124,
   0.2119144,
   0.2032322,
   0.2220829,
   0.2047286,
   0.2075127,
   0.2135734,
   0.2194419,
   0.2190906,
   0.2069626,
   0.1989436,
   0.2122967,
   0.2009648,
   0.1932219,
   0.2152332,
   0.2117602,
   0.2282067,
   0.2064446,
   0.2127858,
   0.2107441,
   0.2320958,
   0.2406568,
   0.6001536,
   0};
   grae = new TGraphAsymmErrors(32,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1210);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3024[32] = {
   0.9440913,
   1.052152,
   0.9882173,
   0.9621616,
   0.9869125,
   1.052373,
   0.9934098,
   1.040559,
   1.230147,
   1.000415,
   1.097651,
   0.9955765,
   1.044677,
   0.8517894,
   1.058835,
   1.044357,
   1.065321,
   1.048784,
   1.049022,
   1.063263,
   0.8218688,
   1.10095,
   1.111508,
   0.7461442,
   1.028774,
   0.9178762,
   0.9296094,
   0.8017852,
   1.042928,
   0.9166785,
   0.7572038,
   10};
   Double_t _felx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3024[32] = {
   0.1145385,
   0.1007779,
   0.09509125,
   0.1021551,
   0.09540843,
   0.09943991,
   0.1021102,
   0.101068,
   0.1127674,
   0.1080403,
   0.1122393,
   0.1057029,
   0.1062742,
   0.08896035,
   0.09747369,
   0.1039174,
   0.1039647,
   0.1018669,
   0.1033632,
   0.1047664,
   0.08403944,
   0.105939,
   0.1089923,
   0.08567458,
   0.1023669,
   0.09088329,
   0.09708781,
   0.08975204,
   0.1101173,
   0.1281707,
   0.7572038,
   0};
   Double_t _fehx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3024[32] = {
   0.1118101,
   0.1007779,
   0.09509125,
   0.1000225,
   0.09540843,
   0.09943991,
   0.1000476,
   0.101068,
   0.1127674,
   0.1057496,
   0.1099891,
   0.1034962,
   0.1041511,
   0.08713625,
   0.09747369,
   0.1039174,
   0.1039647,
   0.1018669,
   0.1033632,
   0.1047664,
   0.08235461,
   0.105939,
   0.1089923,
   0.08374225,
   0.1023669,
   0.09088329,
   0.09509707,
   0.08777984,
   0.107841,
   0.1246475,
   1.029578,
   0};
   grae = new TGraphAsymmErrors(32,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1210);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(11);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,1100,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
