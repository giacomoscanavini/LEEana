#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 17:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-4.119231,-5.14,3.957692,568.3758);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__4->SetBinContent(1,222.8054);
   hmc__4->SetBinContent(2,237.2303);
   hmc__4->SetBinContent(3,229.6255);
   hmc__4->SetBinContent(4,202.204);
   hmc__4->SetBinContent(5,200.1013);
   hmc__4->SetBinContent(6,199.2603);
   hmc__4->SetBinContent(7,192.1289);
   hmc__4->SetBinContent(8,182.1064);
   hmc__4->SetBinContent(9,197.3455);
   hmc__4->SetBinContent(10,193.1048);
   hmc__4->SetBinContent(11,205.8284);
   hmc__4->SetBinContent(12,204.3837);
   hmc__4->SetBinContent(13,213.4796);
   hmc__4->SetBinContent(14,209.5956);
   hmc__4->SetBinContent(15,211.999);
   hmc__4->SetBinContent(16,205.2659);
   hmc__4->SetBinContent(17,208.3013);
   hmc__4->SetBinContent(18,193.5917);
   hmc__4->SetBinContent(19,200.1147);
   hmc__4->SetBinContent(20,195.581);
   hmc__4->SetBinContent(21,207.2299);
   hmc__4->SetBinContent(22,204.8985);
   hmc__4->SetBinContent(23,225.1113);
   hmc__4->SetBinContent(24,226.3107);
   hmc__4->SetBinContent(25,217.3483);
   hmc__4->SetBinError(1,65.51826);
   hmc__4->SetBinError(2,66.25298);
   hmc__4->SetBinError(3,67.13695);
   hmc__4->SetBinError(4,57.33248);
   hmc__4->SetBinError(5,55.89026);
   hmc__4->SetBinError(6,56.68309);
   hmc__4->SetBinError(7,63.33637);
   hmc__4->SetBinError(8,55.53274);
   hmc__4->SetBinError(9,58.9045);
   hmc__4->SetBinError(10,55.66254);
   hmc__4->SetBinError(11,62.26857);
   hmc__4->SetBinError(12,63.35181);
   hmc__4->SetBinError(13,60.9792);
   hmc__4->SetBinError(14,59.54224);
   hmc__4->SetBinError(15,61.03572);
   hmc__4->SetBinError(16,57.19354);
   hmc__4->SetBinError(17,60.55974);
   hmc__4->SetBinError(18,53.66261);
   hmc__4->SetBinError(19,60.66073);
   hmc__4->SetBinError(20,61.27218);
   hmc__4->SetBinError(21,54.0081);
   hmc__4->SetBinError(22,58.07391);
   hmc__4->SetBinError(23,64.1801);
   hmc__4->SetBinError(24,65.34446);
   hmc__4->SetBinError(25,67.91731);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-5.14);
   hmc__4->SetMaximum(539.7);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-3.15,3.15);
   hs2_stack_2->SetMinimum(-3.955423e-09);
   hs2_stack_2->SetMaximum(249.0919);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.923756);
   hbadmatch_stack_1->SetBinContent(2,6.241733);
   hbadmatch_stack_1->SetBinContent(3,5.09622);
   hbadmatch_stack_1->SetBinContent(4,3.750946);
   hbadmatch_stack_1->SetBinContent(5,5.602035);
   hbadmatch_stack_1->SetBinContent(6,5.45157);
   hbadmatch_stack_1->SetBinContent(7,5.198895);
   hbadmatch_stack_1->SetBinContent(8,4.531171);
   hbadmatch_stack_1->SetBinContent(9,5.283547);
   hbadmatch_stack_1->SetBinContent(10,3.344659);
   hbadmatch_stack_1->SetBinContent(11,6.653564);
   hbadmatch_stack_1->SetBinContent(12,4.55715);
   hbadmatch_stack_1->SetBinContent(13,4.057143);
   hbadmatch_stack_1->SetBinContent(14,3.428827);
   hbadmatch_stack_1->SetBinContent(15,6.42026);
   hbadmatch_stack_1->SetBinContent(16,5.084774);
   hbadmatch_stack_1->SetBinContent(17,6.039578);
   hbadmatch_stack_1->SetBinContent(18,5.058714);
   hbadmatch_stack_1->SetBinContent(19,4.374477);
   hbadmatch_stack_1->SetBinContent(20,3.087423);
   hbadmatch_stack_1->SetBinContent(21,5.407361);
   hbadmatch_stack_1->SetBinContent(22,2.387087);
   hbadmatch_stack_1->SetBinContent(23,7.466044);
   hbadmatch_stack_1->SetBinContent(24,2.360485);
   hbadmatch_stack_1->SetBinContent(25,3.623504);
   hbadmatch_stack_1->SetBinError(1,1.24853);
   hbadmatch_stack_1->SetBinError(2,1.33731);
   hbadmatch_stack_1->SetBinError(3,1.334271);
   hbadmatch_stack_1->SetBinError(4,0.9191563);
   hbadmatch_stack_1->SetBinError(5,1.300354);
   hbadmatch_stack_1->SetBinError(6,1.261832);
   hbadmatch_stack_1->SetBinError(7,1.333736);
   hbadmatch_stack_1->SetBinError(8,1.079879);
   hbadmatch_stack_1->SetBinError(9,1.291492);
   hbadmatch_stack_1->SetBinError(10,1.322422);
   hbadmatch_stack_1->SetBinError(11,1.374254);
   hbadmatch_stack_1->SetBinError(12,1.148065);
   hbadmatch_stack_1->SetBinError(13,1.011665);
   hbadmatch_stack_1->SetBinError(14,0.94281);
   hbadmatch_stack_1->SetBinError(15,2.474255);
   hbadmatch_stack_1->SetBinError(16,1.154053);
   hbadmatch_stack_1->SetBinError(17,2.194394);
   hbadmatch_stack_1->SetBinError(18,1.220123);
   hbadmatch_stack_1->SetBinError(19,1.223941);
   hbadmatch_stack_1->SetBinError(20,0.888125);
   hbadmatch_stack_1->SetBinError(21,1.3146);
   hbadmatch_stack_1->SetBinError(22,0.7766913);
   hbadmatch_stack_1->SetBinError(23,1.502663);
   hbadmatch_stack_1->SetBinError(24,0.6869984);
   hbadmatch_stack_1->SetBinError(25,0.9598816);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,17.49642);
   hext_stack_2->SetBinContent(2,15.43747);
   hext_stack_2->SetBinContent(3,20.25758);
   hext_stack_2->SetBinContent(4,13.60919);
   hext_stack_2->SetBinContent(5,19.09686);
   hext_stack_2->SetBinContent(6,32.85327);
   hext_stack_2->SetBinContent(7,22.75462);
   hext_stack_2->SetBinContent(8,18.70462);
   hext_stack_2->SetBinContent(9,15.83689);
   hext_stack_2->SetBinContent(10,19.14594);
   hext_stack_2->SetBinContent(11,16.50446);
   hext_stack_2->SetBinContent(12,9.723605);
   hext_stack_2->SetBinContent(13,11.07026);
   hext_stack_2->SetBinContent(14,12.30883);
   hext_stack_2->SetBinContent(15,10.63614);
   hext_stack_2->SetBinContent(16,18.27926);
   hext_stack_2->SetBinContent(17,23.17715);
   hext_stack_2->SetBinContent(18,20.92073);
   hext_stack_2->SetBinContent(19,31.31625);
   hext_stack_2->SetBinContent(20,19.78156);
   hext_stack_2->SetBinContent(21,33.92743);
   hext_stack_2->SetBinContent(22,16.73506);
   hext_stack_2->SetBinContent(23,20.97698);
   hext_stack_2->SetBinContent(24,12.3116);
   hext_stack_2->SetBinContent(25,13.89051);
   hext_stack_2->SetBinError(1,2.750534);
   hext_stack_2->SetBinError(2,2.684643);
   hext_stack_2->SetBinError(3,3.21393);
   hext_stack_2->SetBinError(4,2.372759);
   hext_stack_2->SetBinError(5,2.948764);
   hext_stack_2->SetBinError(6,4.063805);
   hext_stack_2->SetBinError(7,3.116355);
   hext_stack_2->SetBinError(8,2.850874);
   hext_stack_2->SetBinError(9,2.752059);
   hext_stack_2->SetBinError(10,3.070013);
   hext_stack_2->SetBinError(11,2.741718);
   hext_stack_2->SetBinError(12,2.041073);
   hext_stack_2->SetBinError(13,2.305794);
   hext_stack_2->SetBinError(14,2.354862);
   hext_stack_2->SetBinError(15,1.953967);
   hext_stack_2->SetBinError(16,2.8687);
   hext_stack_2->SetBinError(17,3.358042);
   hext_stack_2->SetBinError(18,3.18393);
   hext_stack_2->SetBinError(19,3.96385);
   hext_stack_2->SetBinError(20,2.810635);
   hext_stack_2->SetBinError(21,4.077134);
   hext_stack_2->SetBinError(22,2.761927);
   hext_stack_2->SetBinError(23,3.265881);
   hext_stack_2->SetBinError(24,2.282335);
   hext_stack_2->SetBinError(25,2.634849);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6143302);
   hdirt_stack_3->SetBinContent(2,1.629031);
   hdirt_stack_3->SetBinContent(3,2.470093);
   hdirt_stack_3->SetBinContent(4,1.590424);
   hdirt_stack_3->SetBinContent(5,1.820881);
   hdirt_stack_3->SetBinContent(6,2.724173);
   hdirt_stack_3->SetBinContent(7,2.263848);
   hdirt_stack_3->SetBinContent(8,3.08201);
   hdirt_stack_3->SetBinContent(9,1.987312);
   hdirt_stack_3->SetBinContent(10,0.9467657);
   hdirt_stack_3->SetBinContent(11,2.24983);
   hdirt_stack_3->SetBinContent(12,2.12068);
   hdirt_stack_3->SetBinContent(13,0.9472378);
   hdirt_stack_3->SetBinContent(14,1.385444);
   hdirt_stack_3->SetBinContent(15,1.922967);
   hdirt_stack_3->SetBinContent(16,2.882504);
   hdirt_stack_3->SetBinContent(17,2.780604);
   hdirt_stack_3->SetBinContent(18,3.646509);
   hdirt_stack_3->SetBinContent(19,1.155338);
   hdirt_stack_3->SetBinContent(20,3.259749);
   hdirt_stack_3->SetBinContent(21,2.680408);
   hdirt_stack_3->SetBinContent(22,1.109369);
   hdirt_stack_3->SetBinContent(23,2.537116);
   hdirt_stack_3->SetBinContent(24,1.253392);
   hdirt_stack_3->SetBinContent(25,0.2046459);
   hdirt_stack_3->SetBinError(1,0.39051);
   hdirt_stack_3->SetBinError(2,0.6370611);
   hdirt_stack_3->SetBinError(3,0.8206861);
   hdirt_stack_3->SetBinError(4,0.6767614);
   hdirt_stack_3->SetBinError(5,0.7224296);
   hdirt_stack_3->SetBinError(6,0.8383714);
   hdirt_stack_3->SetBinError(7,0.7097921);
   hdirt_stack_3->SetBinError(8,0.9116632);
   hdirt_stack_3->SetBinError(9,0.8182242);
   hdirt_stack_3->SetBinError(10,0.494629);
   hdirt_stack_3->SetBinError(11,1.215634);
   hdirt_stack_3->SetBinError(12,1.064362);
   hdirt_stack_3->SetBinError(13,0.4313462);
   hdirt_stack_3->SetBinError(14,0.583897);
   hdirt_stack_3->SetBinError(15,0.8072763);
   hdirt_stack_3->SetBinError(16,0.8492593);
   hdirt_stack_3->SetBinError(17,0.8986958);
   hdirt_stack_3->SetBinError(18,1.035639);
   hdirt_stack_3->SetBinError(19,0.5340515);
   hdirt_stack_3->SetBinError(20,0.9605712);
   hdirt_stack_3->SetBinError(21,0.8265751);
   hdirt_stack_3->SetBinError(22,0.4884064);
   hdirt_stack_3->SetBinError(23,0.8302458);
   hdirt_stack_3->SetBinError(24,0.6025621);
   hdirt_stack_3->SetBinError(25,0.2046459);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,15.5598);
   houtFV_stack_4->SetBinContent(2,16.53421);
   houtFV_stack_4->SetBinContent(3,17.21351);
   houtFV_stack_4->SetBinContent(4,17.80577);
   houtFV_stack_4->SetBinContent(5,13.55378);
   houtFV_stack_4->SetBinContent(6,15.78428);
   houtFV_stack_4->SetBinContent(7,14.74756);
   houtFV_stack_4->SetBinContent(8,11.58173);
   houtFV_stack_4->SetBinContent(9,16.9763);
   houtFV_stack_4->SetBinContent(10,16.09732);
   houtFV_stack_4->SetBinContent(11,16.00578);
   houtFV_stack_4->SetBinContent(12,15.20217);
   houtFV_stack_4->SetBinContent(13,14.50788);
   houtFV_stack_4->SetBinContent(14,12.6412);
   houtFV_stack_4->SetBinContent(15,12.14452);
   houtFV_stack_4->SetBinContent(16,11.63887);
   houtFV_stack_4->SetBinContent(17,13.10067);
   houtFV_stack_4->SetBinContent(18,15.3434);
   houtFV_stack_4->SetBinContent(19,13.5286);
   houtFV_stack_4->SetBinContent(20,17.22705);
   houtFV_stack_4->SetBinContent(21,12.37015);
   houtFV_stack_4->SetBinContent(22,15.0573);
   houtFV_stack_4->SetBinContent(23,14.92173);
   houtFV_stack_4->SetBinContent(24,18.2504);
   houtFV_stack_4->SetBinContent(25,13.33058);
   houtFV_stack_4->SetBinError(1,1.980014);
   houtFV_stack_4->SetBinError(2,2.035751);
   houtFV_stack_4->SetBinError(3,2.116643);
   houtFV_stack_4->SetBinError(4,2.118378);
   houtFV_stack_4->SetBinError(5,1.87837);
   houtFV_stack_4->SetBinError(6,2.007582);
   houtFV_stack_4->SetBinError(7,1.953992);
   houtFV_stack_4->SetBinError(8,1.62623);
   houtFV_stack_4->SetBinError(9,2.135557);
   houtFV_stack_4->SetBinError(10,1.990526);
   houtFV_stack_4->SetBinError(11,2.009719);
   houtFV_stack_4->SetBinError(12,1.871669);
   houtFV_stack_4->SetBinError(13,1.779687);
   houtFV_stack_4->SetBinError(14,1.691547);
   houtFV_stack_4->SetBinError(15,1.716465);
   houtFV_stack_4->SetBinError(16,1.699309);
   houtFV_stack_4->SetBinError(17,1.77215);
   houtFV_stack_4->SetBinError(18,1.948746);
   houtFV_stack_4->SetBinError(19,1.872913);
   houtFV_stack_4->SetBinError(20,2.11417);
   houtFV_stack_4->SetBinError(21,1.726396);
   houtFV_stack_4->SetBinError(22,1.928851);
   houtFV_stack_4->SetBinError(23,1.910307);
   houtFV_stack_4->SetBinError(24,2.169795);
   houtFV_stack_4->SetBinError(25,1.834942);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.003632);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.607589);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.825174);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.869211);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.413943);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.466283);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.882703);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.278354);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.192183);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.535862);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.793042);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.472373);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.140562);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.943193);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.476524);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.078074);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.052573);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.410446);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.578735);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.502068);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.541742);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.503136);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.629095);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.65897);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.956836);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6539988);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8105614);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6673212);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.125952);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6255168);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6592919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6211809);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6573194);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5759692);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8612703);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.811944);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9460683);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6903322);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6901709);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.659295);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.798902);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.749445);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7366817);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8316084);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.9970944);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6622749);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7024616);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5890604);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.644527);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5502492);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7021958);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.015843);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5477247);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7450978);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6038789);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9551213);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9229141);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2785899);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4405167);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7169681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8758689);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8240492);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4136312);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6605152);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7330128);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7402086);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6614097);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4723539);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6237585);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8340205);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.8438861);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4212351);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6907986);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7250463);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5521764);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1891652);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3408638);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2036636);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2113487);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2187038);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3138846);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3372367);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08806615);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1721726);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2592381);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2593003);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2524774);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1639097);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2256569);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2430101);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2653778);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2093046);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1861715);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1748295);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3117049);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2715962);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.179239);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.210779);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3202934);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.17758);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,83.38157);
   hNCpi0inFVres_stack_7->SetBinContent(2,81.55085);
   hNCpi0inFVres_stack_7->SetBinContent(3,84.81077);
   hNCpi0inFVres_stack_7->SetBinContent(4,80.74792);
   hNCpi0inFVres_stack_7->SetBinContent(5,76.50584);
   hNCpi0inFVres_stack_7->SetBinContent(6,70.7702);
   hNCpi0inFVres_stack_7->SetBinContent(7,73.2216);
   hNCpi0inFVres_stack_7->SetBinContent(8,73.24902);
   hNCpi0inFVres_stack_7->SetBinContent(9,70.75841);
   hNCpi0inFVres_stack_7->SetBinContent(10,81.09515);
   hNCpi0inFVres_stack_7->SetBinContent(11,78.42955);
   hNCpi0inFVres_stack_7->SetBinContent(12,75.5085);
   hNCpi0inFVres_stack_7->SetBinContent(13,71.81128);
   hNCpi0inFVres_stack_7->SetBinContent(14,80.05383);
   hNCpi0inFVres_stack_7->SetBinContent(15,81.46472);
   hNCpi0inFVres_stack_7->SetBinContent(16,80.71597);
   hNCpi0inFVres_stack_7->SetBinContent(17,78.8256);
   hNCpi0inFVres_stack_7->SetBinContent(18,73.32877);
   hNCpi0inFVres_stack_7->SetBinContent(19,72.85216);
   hNCpi0inFVres_stack_7->SetBinContent(20,71.47527);
   hNCpi0inFVres_stack_7->SetBinContent(21,75.44518);
   hNCpi0inFVres_stack_7->SetBinContent(22,82.38509);
   hNCpi0inFVres_stack_7->SetBinContent(23,86.4156);
   hNCpi0inFVres_stack_7->SetBinContent(24,87.88843);
   hNCpi0inFVres_stack_7->SetBinContent(25,79.24979);
   hNCpi0inFVres_stack_7->SetBinError(1,2.937226);
   hNCpi0inFVres_stack_7->SetBinError(2,2.960833);
   hNCpi0inFVres_stack_7->SetBinError(3,2.938593);
   hNCpi0inFVres_stack_7->SetBinError(4,2.957776);
   hNCpi0inFVres_stack_7->SetBinError(5,2.864096);
   hNCpi0inFVres_stack_7->SetBinError(6,2.648303);
   hNCpi0inFVres_stack_7->SetBinError(7,2.849213);
   hNCpi0inFVres_stack_7->SetBinError(8,2.75263);
   hNCpi0inFVres_stack_7->SetBinError(9,2.726359);
   hNCpi0inFVres_stack_7->SetBinError(10,3.050117);
   hNCpi0inFVres_stack_7->SetBinError(11,2.861056);
   hNCpi0inFVres_stack_7->SetBinError(12,2.809912);
   hNCpi0inFVres_stack_7->SetBinError(13,2.63129);
   hNCpi0inFVres_stack_7->SetBinError(14,2.887899);
   hNCpi0inFVres_stack_7->SetBinError(15,2.992159);
   hNCpi0inFVres_stack_7->SetBinError(16,2.99522);
   hNCpi0inFVres_stack_7->SetBinError(17,2.976804);
   hNCpi0inFVres_stack_7->SetBinError(18,2.753152);
   hNCpi0inFVres_stack_7->SetBinError(19,2.848776);
   hNCpi0inFVres_stack_7->SetBinError(20,2.671842);
   hNCpi0inFVres_stack_7->SetBinError(21,2.872604);
   hNCpi0inFVres_stack_7->SetBinError(22,2.952821);
   hNCpi0inFVres_stack_7->SetBinError(23,3.203602);
   hNCpi0inFVres_stack_7->SetBinError(24,3.209683);
   hNCpi0inFVres_stack_7->SetBinError(25,2.840819);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.07089);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.47874);
   hNCpi0inFVdis_stack_8->SetBinContent(3,18.98202);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.3593);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.26942);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.16587);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.50175);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.4157);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.94671);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.78829);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.74833);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.57333);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.65739);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.78733);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.50748);
   hNCpi0inFVdis_stack_8->SetBinContent(16,16.80605);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.31714);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.10698);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.01559);
   hNCpi0inFVdis_stack_8->SetBinContent(20,14.4158);
   hNCpi0inFVdis_stack_8->SetBinContent(21,15.56703);
   hNCpi0inFVdis_stack_8->SetBinContent(22,16.52949);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.19273);
   hNCpi0inFVdis_stack_8->SetBinContent(24,18.32771);
   hNCpi0inFVdis_stack_8->SetBinContent(25,16.84864);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.426875);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.619698);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.460405);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.33913);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.19517);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.299036);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.383288);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.274438);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.555502);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.256779);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.60869);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.191396);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.30808);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.499211);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.383796);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.376657);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.34785);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.110217);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.454339);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.322831);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.257421);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.315293);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.317124);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.386254);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.602882);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1438386);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.0587264);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03664741);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1460168);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2168219);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06562697);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1478583);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.07614509);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1125211);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04441126);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02591398);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1290147);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1471308);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06562698);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1304081);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04859599);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02218823);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,32.81733);
   hCCpi0inFV_stack_10->SetBinContent(2,35.90845);
   hCCpi0inFV_stack_10->SetBinContent(3,33.19943);
   hCCpi0inFV_stack_10->SetBinContent(4,35.01438);
   hCCpi0inFV_stack_10->SetBinContent(5,35.28696);
   hCCpi0inFV_stack_10->SetBinContent(6,25.55467);
   hCCpi0inFV_stack_10->SetBinContent(7,28.2243);
   hCCpi0inFV_stack_10->SetBinContent(8,25.8102);
   hCCpi0inFV_stack_10->SetBinContent(9,28.99213);
   hCCpi0inFV_stack_10->SetBinContent(10,26.70458);
   hCCpi0inFV_stack_10->SetBinContent(11,30.18843);
   hCCpi0inFV_stack_10->SetBinContent(12,31.28647);
   hCCpi0inFV_stack_10->SetBinContent(13,37.89536);
   hCCpi0inFV_stack_10->SetBinContent(14,30.33161);
   hCCpi0inFV_stack_10->SetBinContent(15,32.69655);
   hCCpi0inFV_stack_10->SetBinContent(16,27.01762);
   hCCpi0inFV_stack_10->SetBinContent(17,27.7671);
   hCCpi0inFV_stack_10->SetBinContent(18,27.95114);
   hCCpi0inFV_stack_10->SetBinContent(19,23.62404);
   hCCpi0inFV_stack_10->SetBinContent(20,29.05541);
   hCCpi0inFV_stack_10->SetBinContent(21,31.55447);
   hCCpi0inFV_stack_10->SetBinContent(22,37.28075);
   hCCpi0inFV_stack_10->SetBinContent(23,33.68596);
   hCCpi0inFV_stack_10->SetBinContent(24,36.85971);
   hCCpi0inFV_stack_10->SetBinContent(25,31.21423);
   hCCpi0inFV_stack_10->SetBinError(1,2.909414);
   hCCpi0inFV_stack_10->SetBinError(2,2.972941);
   hCCpi0inFV_stack_10->SetBinError(3,2.8881);
   hCCpi0inFV_stack_10->SetBinError(4,2.938687);
   hCCpi0inFV_stack_10->SetBinError(5,2.989911);
   hCCpi0inFV_stack_10->SetBinError(6,2.528865);
   hCCpi0inFV_stack_10->SetBinError(7,2.683141);
   hCCpi0inFV_stack_10->SetBinError(8,2.548978);
   hCCpi0inFV_stack_10->SetBinError(9,2.712314);
   hCCpi0inFV_stack_10->SetBinError(10,2.640738);
   hCCpi0inFV_stack_10->SetBinError(11,2.756971);
   hCCpi0inFV_stack_10->SetBinError(12,2.797871);
   hCCpi0inFV_stack_10->SetBinError(13,3.083447);
   hCCpi0inFV_stack_10->SetBinError(14,2.743047);
   hCCpi0inFV_stack_10->SetBinError(15,2.782312);
   hCCpi0inFV_stack_10->SetBinError(16,2.629305);
   hCCpi0inFV_stack_10->SetBinError(17,2.61122);
   hCCpi0inFV_stack_10->SetBinError(18,2.644856);
   hCCpi0inFV_stack_10->SetBinError(19,2.350783);
   hCCpi0inFV_stack_10->SetBinError(20,2.71595);
   hCCpi0inFV_stack_10->SetBinError(21,2.872);
   hCCpi0inFV_stack_10->SetBinError(22,3.112679);
   hCCpi0inFV_stack_10->SetBinError(23,2.916681);
   hCCpi0inFV_stack_10->SetBinError(24,3.052511);
   hCCpi0inFV_stack_10->SetBinError(25,2.731485);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,18.24119);
   hNCinFV_stack_11->SetBinContent(2,18.47862);
   hNCinFV_stack_11->SetBinContent(3,19.23443);
   hNCinFV_stack_11->SetBinContent(4,17.67607);
   hNCinFV_stack_11->SetBinContent(5,18.902);
   hNCinFV_stack_11->SetBinContent(6,16.55589);
   hNCinFV_stack_11->SetBinContent(7,16.13272);
   hNCinFV_stack_11->SetBinContent(8,14.17039);
   hNCinFV_stack_11->SetBinContent(9,19.27906);
   hNCinFV_stack_11->SetBinContent(10,13.72525);
   hNCinFV_stack_11->SetBinContent(11,11.49173);
   hNCinFV_stack_11->SetBinContent(12,17.57066);
   hNCinFV_stack_11->SetBinContent(13,20.99519);
   hNCinFV_stack_11->SetBinContent(14,19.30369);
   hNCinFV_stack_11->SetBinContent(15,24.23705);
   hNCinFV_stack_11->SetBinContent(16,20.42729);
   hNCinFV_stack_11->SetBinContent(17,20.36001);
   hNCinFV_stack_11->SetBinContent(18,17.11468);
   hNCinFV_stack_11->SetBinContent(19,18.3529);
   hNCinFV_stack_11->SetBinContent(20,18.23718);
   hNCinFV_stack_11->SetBinContent(21,13.51402);
   hNCinFV_stack_11->SetBinContent(22,15.39583);
   hNCinFV_stack_11->SetBinContent(23,21.38988);
   hNCinFV_stack_11->SetBinContent(24,17.30177);
   hNCinFV_stack_11->SetBinContent(25,16.94184);
   hNCinFV_stack_11->SetBinError(1,2.258116);
   hNCinFV_stack_11->SetBinError(2,2.269683);
   hNCinFV_stack_11->SetBinError(3,2.481548);
   hNCinFV_stack_11->SetBinError(4,2.278963);
   hNCinFV_stack_11->SetBinError(5,2.39251);
   hNCinFV_stack_11->SetBinError(6,2.04962);
   hNCinFV_stack_11->SetBinError(7,2.122515);
   hNCinFV_stack_11->SetBinError(8,1.836784);
   hNCinFV_stack_11->SetBinError(9,2.419476);
   hNCinFV_stack_11->SetBinError(10,1.906355);
   hNCinFV_stack_11->SetBinError(11,1.663887);
   hNCinFV_stack_11->SetBinError(12,2.159857);
   hNCinFV_stack_11->SetBinError(13,2.35588);
   hNCinFV_stack_11->SetBinError(14,2.488624);
   hNCinFV_stack_11->SetBinError(15,2.708881);
   hNCinFV_stack_11->SetBinError(16,2.528335);
   hNCinFV_stack_11->SetBinError(17,2.695123);
   hNCinFV_stack_11->SetBinError(18,2.312672);
   hNCinFV_stack_11->SetBinError(19,2.483699);
   hNCinFV_stack_11->SetBinError(20,2.409844);
   hNCinFV_stack_11->SetBinError(21,1.851643);
   hNCinFV_stack_11->SetBinError(22,2.215962);
   hNCinFV_stack_11->SetBinError(23,2.651847);
   hNCinFV_stack_11->SetBinError(24,2.402306);
   hNCinFV_stack_11->SetBinError(25,2.040874);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,27.57712);
   hnumuCCinFV_stack_12->SetBinContent(2,32.76376);
   hnumuCCinFV_stack_12->SetBinContent(3,21.61012);
   hnumuCCinFV_stack_12->SetBinContent(4,7.61231);
   hnumuCCinFV_stack_12->SetBinContent(5,9.486294);
   hnumuCCinFV_stack_12->SetBinContent(6,11.0991);
   hnumuCCinFV_stack_12->SetBinContent(7,8.667944);
   hnumuCCinFV_stack_12->SetBinContent(8,11.74231);
   hnumuCCinFV_stack_12->SetBinContent(9,14.9905);
   hnumuCCinFV_stack_12->SetBinContent(10,10.42357);
   hnumuCCinFV_stack_12->SetBinContent(11,20.03498);
   hnumuCCinFV_stack_12->SetBinContent(12,25.79772);
   hnumuCCinFV_stack_12->SetBinContent(13,30.58111);
   hnumuCCinFV_stack_12->SetBinContent(14,25.75045);
   hnumuCCinFV_stack_12->SetBinContent(15,19.99425);
   hnumuCCinFV_stack_12->SetBinContent(16,15.61626);
   hnumuCCinFV_stack_12->SetBinContent(17,13.70266);
   hnumuCCinFV_stack_12->SetBinContent(18,9.529238);
   hnumuCCinFV_stack_12->SetBinContent(19,10.7191);
   hnumuCCinFV_stack_12->SetBinContent(20,12.1504);
   hnumuCCinFV_stack_12->SetBinContent(21,9.980373);
   hnumuCCinFV_stack_12->SetBinContent(22,11.84019);
   hnumuCCinFV_stack_12->SetBinContent(23,15.96997);
   hnumuCCinFV_stack_12->SetBinContent(24,25.36358);
   hnumuCCinFV_stack_12->SetBinContent(25,36.4005);
   hnumuCCinFV_stack_12->SetBinError(1,2.943305);
   hnumuCCinFV_stack_12->SetBinError(2,4.24092);
   hnumuCCinFV_stack_12->SetBinError(3,2.42208);
   hnumuCCinFV_stack_12->SetBinError(4,1.383753);
   hnumuCCinFV_stack_12->SetBinError(5,1.587442);
   hnumuCCinFV_stack_12->SetBinError(6,1.908036);
   hnumuCCinFV_stack_12->SetBinError(7,1.545212);
   hnumuCCinFV_stack_12->SetBinError(8,1.713062);
   hnumuCCinFV_stack_12->SetBinError(9,2.448596);
   hnumuCCinFV_stack_12->SetBinError(10,1.61607);
   hnumuCCinFV_stack_12->SetBinError(11,2.602234);
   hnumuCCinFV_stack_12->SetBinError(12,2.973564);
   hnumuCCinFV_stack_12->SetBinError(13,3.392696);
   hnumuCCinFV_stack_12->SetBinError(14,2.859406);
   hnumuCCinFV_stack_12->SetBinError(15,2.640602);
   hnumuCCinFV_stack_12->SetBinError(16,2.129984);
   hnumuCCinFV_stack_12->SetBinError(17,2.174287);
   hnumuCCinFV_stack_12->SetBinError(18,1.67154);
   hnumuCCinFV_stack_12->SetBinError(19,2.098573);
   hnumuCCinFV_stack_12->SetBinError(20,2.006392);
   hnumuCCinFV_stack_12->SetBinError(21,1.657178);
   hnumuCCinFV_stack_12->SetBinError(22,2.072717);
   hnumuCCinFV_stack_12->SetBinError(23,2.083582);
   hnumuCCinFV_stack_12->SetBinError(24,3.047993);
   hnumuCCinFV_stack_12->SetBinError(25,3.440233);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.41719);
   hnueCCinFV_stack_13->SetBinContent(2,3.584052);
   hnueCCinFV_stack_13->SetBinContent(3,2.362668);
   hnueCCinFV_stack_13->SetBinContent(4,1.404534);
   hnueCCinFV_stack_13->SetBinContent(5,1.415584);
   hnueCCinFV_stack_13->SetBinContent(6,0.8616472);
   hnueCCinFV_stack_13->SetBinContent(7,1.575573);
   hnueCCinFV_stack_13->SetBinContent(8,1.243433);
   hnueCCinFV_stack_13->SetBinContent(9,1.603173);
   hnueCCinFV_stack_13->SetBinContent(10,1.562199);
   hnueCCinFV_stack_13->SetBinContent(11,0.8161711);
   hnueCCinFV_stack_13->SetBinContent(12,2.747035);
   hnueCCinFV_stack_13->SetBinContent(13,1.377255);
   hnueCCinFV_stack_13->SetBinContent(14,2.000608);
   hnueCCinFV_stack_13->SetBinContent(15,1.619542);
   hnueCCinFV_stack_13->SetBinContent(16,0.9605757);
   hnueCCinFV_stack_13->SetBinContent(17,1.299972);
   hnueCCinFV_stack_13->SetBinContent(18,1.708685);
   hnueCCinFV_stack_13->SetBinContent(19,2.908085);
   hnueCCinFV_stack_13->SetBinContent(20,0.536893);
   hnueCCinFV_stack_13->SetBinContent(21,2.36175);
   hnueCCinFV_stack_13->SetBinContent(22,1.106099);
   hnueCCinFV_stack_13->SetBinContent(23,1.235358);
   hnueCCinFV_stack_13->SetBinContent(24,1.933425);
   hnueCCinFV_stack_13->SetBinContent(25,2.103648);
   hnueCCinFV_stack_13->SetBinError(1,0.5883982);
   hnueCCinFV_stack_13->SetBinError(2,1.710481);
   hnueCCinFV_stack_13->SetBinError(3,0.8192521);
   hnueCCinFV_stack_13->SetBinError(4,0.5777062);
   hnueCCinFV_stack_13->SetBinError(5,0.6682624);
   hnueCCinFV_stack_13->SetBinError(6,0.5056504);
   hnueCCinFV_stack_13->SetBinError(7,0.7487493);
   hnueCCinFV_stack_13->SetBinError(8,0.5741636);
   hnueCCinFV_stack_13->SetBinError(9,0.6715138);
   hnueCCinFV_stack_13->SetBinError(10,1.007563);
   hnueCCinFV_stack_13->SetBinError(11,0.5068266);
   hnueCCinFV_stack_13->SetBinError(12,0.7669398);
   hnueCCinFV_stack_13->SetBinError(13,0.5867331);
   hnueCCinFV_stack_13->SetBinError(14,0.8880846);
   hnueCCinFV_stack_13->SetBinError(15,0.7069121);
   hnueCCinFV_stack_13->SetBinError(16,0.4948238);
   hnueCCinFV_stack_13->SetBinError(17,0.5903626);
   hnueCCinFV_stack_13->SetBinError(18,0.7147977);
   hnueCCinFV_stack_13->SetBinError(19,1.536493);
   hnueCCinFV_stack_13->SetBinError(20,0.3929602);
   hnueCCinFV_stack_13->SetBinError(21,1.245659);
   hnueCCinFV_stack_13->SetBinError(22,0.6097899);
   hnueCCinFV_stack_13->SetBinError(23,0.6312753);
   hnueCCinFV_stack_13->SetBinError(24,0.8382154);
   hnueCCinFV_stack_13->SetBinError(25,0.7223215);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__5->SetBinContent(1,222.8054);
   hmcerror__5->SetBinContent(2,237.2303);
   hmcerror__5->SetBinContent(3,229.6255);
   hmcerror__5->SetBinContent(4,202.204);
   hmcerror__5->SetBinContent(5,200.1013);
   hmcerror__5->SetBinContent(6,199.2603);
   hmcerror__5->SetBinContent(7,192.1289);
   hmcerror__5->SetBinContent(8,182.1064);
   hmcerror__5->SetBinContent(9,197.3455);
   hmcerror__5->SetBinContent(10,193.1048);
   hmcerror__5->SetBinContent(11,205.8284);
   hmcerror__5->SetBinContent(12,204.3837);
   hmcerror__5->SetBinContent(13,213.4796);
   hmcerror__5->SetBinContent(14,209.5956);
   hmcerror__5->SetBinContent(15,211.999);
   hmcerror__5->SetBinContent(16,205.2659);
   hmcerror__5->SetBinContent(17,208.3013);
   hmcerror__5->SetBinContent(18,193.5917);
   hmcerror__5->SetBinContent(19,200.1147);
   hmcerror__5->SetBinContent(20,195.581);
   hmcerror__5->SetBinContent(21,207.2299);
   hmcerror__5->SetBinContent(22,204.8985);
   hmcerror__5->SetBinContent(23,225.1113);
   hmcerror__5->SetBinContent(24,226.3107);
   hmcerror__5->SetBinContent(25,217.3483);
   hmcerror__5->SetBinError(1,65.51826);
   hmcerror__5->SetBinError(2,66.25298);
   hmcerror__5->SetBinError(3,67.13695);
   hmcerror__5->SetBinError(4,57.33248);
   hmcerror__5->SetBinError(5,55.89026);
   hmcerror__5->SetBinError(6,56.68309);
   hmcerror__5->SetBinError(7,63.33637);
   hmcerror__5->SetBinError(8,55.53274);
   hmcerror__5->SetBinError(9,58.9045);
   hmcerror__5->SetBinError(10,55.66254);
   hmcerror__5->SetBinError(11,62.26857);
   hmcerror__5->SetBinError(12,63.35181);
   hmcerror__5->SetBinError(13,60.9792);
   hmcerror__5->SetBinError(14,59.54224);
   hmcerror__5->SetBinError(15,61.03572);
   hmcerror__5->SetBinError(16,57.19354);
   hmcerror__5->SetBinError(17,60.55974);
   hmcerror__5->SetBinError(18,53.66261);
   hmcerror__5->SetBinError(19,60.66073);
   hmcerror__5->SetBinError(20,61.27218);
   hmcerror__5->SetBinError(21,54.0081);
   hmcerror__5->SetBinError(22,58.07391);
   hmcerror__5->SetBinError(23,64.1801);
   hmcerror__5->SetBinError(24,65.34446);
   hmcerror__5->SetBinError(25,67.91731);
   hmcerror__5->SetBinError(26,0.3895343);
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
   
   Double_t _fx3005[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3005[25] = {
   202,
   257,
   201,
   225,
   228,
   210,
   166,
   184,
   163,
   210,
   199,
   187,
   171,
   200,
   216,
   212,
   183,
   186,
   184,
   184,
   198,
   206,
   192,
   209,
   201};
   Double_t _felx3005[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3005[25] = {
   14.21267,
   16.03122,
   14.17745,
   15,
   15.09967,
   14.49138,
   12.8841,
   13.56466,
   12.76715,
   14.49138,
   14.10674,
   13.67479,
   13.0767,
   14.14214,
   14.69694,
   14.56022,
   13.52775,
   13.63818,
   13.56466,
   13.56466,
   14.07125,
   14.3527,
   13.85641,
   14.45683,
   14.17745};
   Double_t _fehx3005[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3005[25] = {
   14.21267,
   16.03122,
   14.17745,
   15,
   15.09967,
   14.49138,
   12.8841,
   13.56466,
   12.76715,
   14.49138,
   14.10674,
   13.67479,
   13.0767,
   14.14214,
   14.69694,
   14.56022,
   13.52775,
   13.63818,
   13.56466,
   13.56466,
   14.07125,
   14.3527,
   13.85641,
   14.45683,
   14.17745};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(137.953);
   Graph_Graph3005->SetMaximum(285.3111);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3006[25] = {
   0.2940604,
   0.279277,
   0.2923759,
   0.2835379,
   0.2793098,
   0.2844675,
   0.3296556,
   0.3049467,
   0.2984842,
   0.2882505,
   0.3025267,
   0.3099651,
   0.2856442,
   0.2840816,
   0.2879056,
   0.2786315,
   0.2907315,
   0.2771948,
   0.3031298,
   0.3132829,
   0.2606192,
   0.2834278,
   0.2851039,
   0.2887379,
   0.3124815};
   Double_t _fehx3006[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3006[25] = {
   0.2940604,
   0.279277,
   0.2923759,
   0.2835379,
   0.2793098,
   0.2844675,
   0.3296556,
   0.3049467,
   0.2984842,
   0.2882505,
   0.3025267,
   0.3099651,
   0.2856442,
   0.2840816,
   0.2879056,
   0.2786315,
   0.2907315,
   0.2771948,
   0.3031298,
   0.3132829,
   0.2606192,
   0.2834278,
   0.2851039,
   0.2887379,
   0.3124815};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
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
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3007[25] = {
   0.2674081,
   0.2602071,
   0.2651407,
   0.2566328,
   0.2557506,
   0.2326825,
   0.2687813,
   0.2685075,
   0.2701942,
   0.2656897,
   0.2661866,
   0.2814275,
   0.2495066,
   0.2560808,
   0.2654526,
   0.2555582,
   0.256933,
   0.2582349,
   0.2415008,
   0.2478485,
   0.2364792,
   0.2695423,
   0.2496429,
   0.2636969,
   0.2660508};
   Double_t _fehx3007[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3007[25] = {
   0.2674081,
   0.2602071,
   0.2651407,
   0.2566328,
   0.2557506,
   0.2326825,
   0.2687813,
   0.2685075,
   0.2701942,
   0.2656897,
   0.2661866,
   0.2814275,
   0.2495066,
   0.2560808,
   0.2654526,
   0.2555582,
   0.256933,
   0.2582349,
   0.2415008,
   0.2478485,
   0.2364792,
   0.2695423,
   0.2496429,
   0.2636969,
   0.2660508};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3008[25] = {
   0.9066207,
   1.083335,
   0.8753385,
   1.112738,
   1.139423,
   1.053898,
   0.8640031,
   1.010399,
   0.8259627,
   1.087492,
   0.9668249,
   0.9149456,
   0.8010133,
   0.9542187,
   1.018873,
   1.032807,
   0.8785351,
   0.9607852,
   0.9194728,
   0.9407866,
   0.9554604,
   1.005376,
   0.8529116,
   0.9235093,
   0.924783};
   Double_t _felx3008[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3008[25] = {
   0.06378961,
   0.0675766,
   0.06174162,
   0.07418252,
   0.07546012,
   0.07272586,
   0.06705965,
   0.07448757,
   0.06469439,
   0.07504411,
   0.0685364,
   0.06690745,
   0.06125502,
   0.06747345,
   0.0693255,
   0.07093347,
   0.06494319,
   0.07044819,
   0.06778443,
   0.06935571,
   0.06790162,
   0.07004786,
   0.06155359,
   0.06388047,
   0.06522916};
   Double_t _fehx3008[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3008[25] = {
   0.06378961,
   0.0675766,
   0.06174162,
   0.07418252,
   0.07546012,
   0.07272586,
   0.06705965,
   0.07448757,
   0.06469439,
   0.07504411,
   0.0685364,
   0.06690745,
   0.06125502,
   0.06747345,
   0.0693255,
   0.07093347,
   0.06494319,
   0.07044819,
   0.06778443,
   0.06935571,
   0.06790162,
   0.07004786,
   0.06155359,
   0.06388047,
   0.06522916};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.6922458);
   Graph_Graph3008->SetMaximum(1.262395);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
