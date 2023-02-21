#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Jan 16 04:37:10 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-1.307692,-18.48,1.25641,2043.499);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,70.77302);
   hmc__10->SetBinContent(2,60.30516);
   hmc__10->SetBinContent(3,54.59607);
   hmc__10->SetBinContent(4,47.32395);
   hmc__10->SetBinContent(5,55.77526);
   hmc__10->SetBinContent(6,48.82532);
   hmc__10->SetBinContent(7,44.83788);
   hmc__10->SetBinContent(8,49.50084);
   hmc__10->SetBinContent(9,58.64939);
   hmc__10->SetBinContent(10,71.27709);
   hmc__10->SetBinContent(11,69.60628);
   hmc__10->SetBinContent(12,85.38736);
   hmc__10->SetBinContent(13,109.501);
   hmc__10->SetBinContent(14,119.118);
   hmc__10->SetBinContent(15,157.0099);
   hmc__10->SetBinContent(16,209.1273);
   hmc__10->SetBinContent(17,272.4021);
   hmc__10->SetBinContent(18,361.4759);
   hmc__10->SetBinContent(19,506.7686);
   hmc__10->SetBinContent(20,813.0334);
   hmc__10->SetBinError(1,28.23276);
   hmc__10->SetBinError(2,21.65944);
   hmc__10->SetBinError(3,20.11246);
   hmc__10->SetBinError(4,19.8109);
   hmc__10->SetBinError(5,20.82364);
   hmc__10->SetBinError(6,19.9494);
   hmc__10->SetBinError(7,16.95676);
   hmc__10->SetBinError(8,19.95294);
   hmc__10->SetBinError(9,21.41301);
   hmc__10->SetBinError(10,26.94438);
   hmc__10->SetBinError(11,23.38794);
   hmc__10->SetBinError(12,31.00748);
   hmc__10->SetBinError(13,39.95299);
   hmc__10->SetBinError(14,39.75382);
   hmc__10->SetBinError(15,49.49483);
   hmc__10->SetBinError(16,61.50758);
   hmc__10->SetBinError(17,79.34226);
   hmc__10->SetBinError(18,101.1821);
   hmc__10->SetBinError(19,117.1273);
   hmc__10->SetBinError(20,195.0919);
   hmc__10->SetBinError(21,0.4673072);
   hmc__10->SetMinimum(-18.48);
   hmc__10->SetMaximum(1940.4);
   hmc__10->SetEntries(3224.636);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,-1,1);
   hs4_stack_4->SetMinimum(-1.028562e-08);
   hs4_stack_4->SetMaximum(853.6851);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.102202);
   hbadmatch_stack_1->SetBinContent(2,2.71175);
   hbadmatch_stack_1->SetBinContent(3,3.256937);
   hbadmatch_stack_1->SetBinContent(4,1.428844);
   hbadmatch_stack_1->SetBinContent(5,2.325483);
   hbadmatch_stack_1->SetBinContent(6,3.375679);
   hbadmatch_stack_1->SetBinContent(7,0.7001932);
   hbadmatch_stack_1->SetBinContent(8,1.767168);
   hbadmatch_stack_1->SetBinContent(9,4.109879);
   hbadmatch_stack_1->SetBinContent(10,1.767422);
   hbadmatch_stack_1->SetBinContent(11,6.121304);
   hbadmatch_stack_1->SetBinContent(12,4.975173);
   hbadmatch_stack_1->SetBinContent(13,3.588196);
   hbadmatch_stack_1->SetBinContent(14,4.398095);
   hbadmatch_stack_1->SetBinContent(15,3.606971);
   hbadmatch_stack_1->SetBinContent(16,5.854033);
   hbadmatch_stack_1->SetBinContent(17,7.212736);
   hbadmatch_stack_1->SetBinContent(18,9.261003);
   hbadmatch_stack_1->SetBinContent(19,8.146755);
   hbadmatch_stack_1->SetBinContent(20,20.21886);
   hbadmatch_stack_1->SetBinError(1,1.222871);
   hbadmatch_stack_1->SetBinError(2,2.046432);
   hbadmatch_stack_1->SetBinError(3,1.029223);
   hbadmatch_stack_1->SetBinError(4,0.5839013);
   hbadmatch_stack_1->SetBinError(5,0.9883579);
   hbadmatch_stack_1->SetBinError(6,1.164672);
   hbadmatch_stack_1->SetBinError(7,0.4042567);
   hbadmatch_stack_1->SetBinError(8,0.7453844);
   hbadmatch_stack_1->SetBinError(9,1.264391);
   hbadmatch_stack_1->SetBinError(10,0.8334327);
   hbadmatch_stack_1->SetBinError(11,2.32385);
   hbadmatch_stack_1->SetBinError(12,1.497881);
   hbadmatch_stack_1->SetBinError(13,1.225082);
   hbadmatch_stack_1->SetBinError(14,1.335888);
   hbadmatch_stack_1->SetBinError(15,1.160558);
   hbadmatch_stack_1->SetBinError(16,1.501549);
   hbadmatch_stack_1->SetBinError(17,1.617677);
   hbadmatch_stack_1->SetBinError(18,1.845446);
   hbadmatch_stack_1->SetBinError(19,1.760242);
   hbadmatch_stack_1->SetBinError(20,2.755823);
   hbadmatch_stack_1->SetEntries(287);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,11.62175);
   houtFV_stack_4->SetBinContent(2,13.73826);
   houtFV_stack_4->SetBinContent(3,11.35114);
   houtFV_stack_4->SetBinContent(4,11.11022);
   houtFV_stack_4->SetBinContent(5,12.52366);
   houtFV_stack_4->SetBinContent(6,10.87432);
   houtFV_stack_4->SetBinContent(7,9.360496);
   houtFV_stack_4->SetBinContent(8,8.321209);
   houtFV_stack_4->SetBinContent(9,9.599354);
   houtFV_stack_4->SetBinContent(10,13.547);
   houtFV_stack_4->SetBinContent(11,12.28288);
   houtFV_stack_4->SetBinContent(12,17.26824);
   houtFV_stack_4->SetBinContent(13,17.27884);
   houtFV_stack_4->SetBinContent(14,21.53343);
   houtFV_stack_4->SetBinContent(15,27.7835);
   houtFV_stack_4->SetBinContent(16,35.44452);
   houtFV_stack_4->SetBinContent(17,42.18141);
   houtFV_stack_4->SetBinContent(18,59.00513);
   houtFV_stack_4->SetBinContent(19,67.90791);
   houtFV_stack_4->SetBinContent(20,75.10112);
   houtFV_stack_4->SetBinError(1,2.035155);
   houtFV_stack_4->SetBinError(2,2.154373);
   houtFV_stack_4->SetBinError(3,1.892162);
   houtFV_stack_4->SetBinError(4,1.808792);
   houtFV_stack_4->SetBinError(5,2.084336);
   houtFV_stack_4->SetBinError(6,2.44497);
   houtFV_stack_4->SetBinError(7,1.769848);
   houtFV_stack_4->SetBinError(8,1.680974);
   houtFV_stack_4->SetBinError(9,1.788013);
   houtFV_stack_4->SetBinError(10,2.14669);
   houtFV_stack_4->SetBinError(11,2.037957);
   houtFV_stack_4->SetBinError(12,2.453681);
   houtFV_stack_4->SetBinError(13,2.473389);
   houtFV_stack_4->SetBinError(14,2.669455);
   houtFV_stack_4->SetBinError(15,3.073199);
   houtFV_stack_4->SetBinError(16,3.557048);
   houtFV_stack_4->SetBinError(17,3.763274);
   houtFV_stack_4->SetBinError(18,4.666991);
   houtFV_stack_4->SetBinError(19,4.878537);
   houtFV_stack_4->SetBinError(20,5.101128);
   houtFV_stack_4->SetEntries(1578);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.299104);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8434762);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3972314);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2648209);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3886355);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4879434);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3224303);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4548407);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7110658);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9096814);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.934582);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.349398);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.475674);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,14.70451);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,61.36565);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.789769);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3771742);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1146708);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.09362833);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2646402);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2707799);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2604666);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2687489);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3713183);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3800684);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6380103);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7148851);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.978553);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.483861);
   hNCpi0inFVcoh_stack_5->SetBinError(20,3.019998);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4217381);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1986157);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9758867);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.430334);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.720055);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.587645);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.192088);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2667025);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08108451);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3829406);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1193532);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5344311);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.5303145);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.494037);
   hNCpi0inFVqe_stack_6->SetEntries(163);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,24.13235);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.41072);
   hNCpi0inFVres_stack_7->SetBinContent(3,18.79076);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.46665);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.34402);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.45934);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.36042);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.21378);
   hNCpi0inFVres_stack_7->SetBinContent(9,21.678);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.65583);
   hNCpi0inFVres_stack_7->SetBinContent(11,28.31059);
   hNCpi0inFVres_stack_7->SetBinContent(12,34.41482);
   hNCpi0inFVres_stack_7->SetBinContent(13,43.47853);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.97051);
   hNCpi0inFVres_stack_7->SetBinContent(15,65.25584);
   hNCpi0inFVres_stack_7->SetBinContent(16,87.01943);
   hNCpi0inFVres_stack_7->SetBinContent(17,116.1528);
   hNCpi0inFVres_stack_7->SetBinContent(18,143.8246);
   hNCpi0inFVres_stack_7->SetBinContent(19,201.604);
   hNCpi0inFVres_stack_7->SetBinContent(20,272.6907);
   hNCpi0inFVres_stack_7->SetBinError(1,1.912413);
   hNCpi0inFVres_stack_7->SetBinError(2,1.597876);
   hNCpi0inFVres_stack_7->SetBinError(3,1.637109);
   hNCpi0inFVres_stack_7->SetBinError(4,1.623667);
   hNCpi0inFVres_stack_7->SetBinError(5,1.785749);
   hNCpi0inFVres_stack_7->SetBinError(6,1.569887);
   hNCpi0inFVres_stack_7->SetBinError(7,1.632753);
   hNCpi0inFVres_stack_7->SetBinError(8,1.588276);
   hNCpi0inFVres_stack_7->SetBinError(9,1.716744);
   hNCpi0inFVres_stack_7->SetBinError(10,2.013344);
   hNCpi0inFVres_stack_7->SetBinError(11,1.991768);
   hNCpi0inFVres_stack_7->SetBinError(12,2.177361);
   hNCpi0inFVres_stack_7->SetBinError(13,2.486831);
   hNCpi0inFVres_stack_7->SetBinError(14,2.731553);
   hNCpi0inFVres_stack_7->SetBinError(15,3.022387);
   hNCpi0inFVres_stack_7->SetBinError(16,3.613413);
   hNCpi0inFVres_stack_7->SetBinError(17,4.140867);
   hNCpi0inFVres_stack_7->SetBinError(18,4.544679);
   hNCpi0inFVres_stack_7->SetBinError(19,5.492751);
   hNCpi0inFVres_stack_7->SetBinError(20,6.334589);
   hNCpi0inFVres_stack_7->SetEntries(21056);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.970146);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.060464);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.002461);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.795643);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.572127);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.002068);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.481809);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.994259);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.490405);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.225977);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.333487);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.854927);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.906008);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.402154);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.24681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.02654);
   hNCpi0inFVdis_stack_8->SetBinContent(17,21.80053);
   hNCpi0inFVdis_stack_8->SetBinContent(18,29.16998);
   hNCpi0inFVdis_stack_8->SetBinContent(19,40.47736);
   hNCpi0inFVdis_stack_8->SetBinContent(20,72.04279);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8907244);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8055669);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6206747);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8001074);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6090911);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4249856);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7179442);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8042055);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6771698);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8089604);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6294402);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.821728);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9858049);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8852252);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.240869);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.437033);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.799199);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.055302);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.360181);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.267169);
   hNCpi0inFVdis_stack_8->SetEntries(4175);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1324105);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2583545);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,11.67359);
   hCCpi0inFV_stack_10->SetBinContent(2,9.694826);
   hCCpi0inFV_stack_10->SetBinContent(3,9.460726);
   hCCpi0inFV_stack_10->SetBinContent(4,5.030344);
   hCCpi0inFV_stack_10->SetBinContent(5,8.295913);
   hCCpi0inFV_stack_10->SetBinContent(6,7.535076);
   hCCpi0inFV_stack_10->SetBinContent(7,5.946185);
   hCCpi0inFV_stack_10->SetBinContent(8,7.142777);
   hCCpi0inFV_stack_10->SetBinContent(9,7.768474);
   hCCpi0inFV_stack_10->SetBinContent(10,13.75851);
   hCCpi0inFV_stack_10->SetBinContent(11,11.46107);
   hCCpi0inFV_stack_10->SetBinContent(12,13.66977);
   hCCpi0inFV_stack_10->SetBinContent(13,19.33766);
   hCCpi0inFV_stack_10->SetBinContent(14,15.74946);
   hCCpi0inFV_stack_10->SetBinContent(15,26.33091);
   hCCpi0inFV_stack_10->SetBinContent(16,31.06371);
   hCCpi0inFV_stack_10->SetBinContent(17,45.84837);
   hCCpi0inFV_stack_10->SetBinContent(18,59.75882);
   hCCpi0inFV_stack_10->SetBinContent(19,97.23098);
   hCCpi0inFV_stack_10->SetBinContent(20,152.0714);
   hCCpi0inFV_stack_10->SetBinError(1,1.940875);
   hCCpi0inFV_stack_10->SetBinError(2,1.771308);
   hCCpi0inFV_stack_10->SetBinError(3,1.76622);
   hCCpi0inFV_stack_10->SetBinError(4,1.283702);
   hCCpi0inFV_stack_10->SetBinError(5,1.646874);
   hCCpi0inFV_stack_10->SetBinError(6,1.586437);
   hCCpi0inFV_stack_10->SetBinError(7,1.469161);
   hCCpi0inFV_stack_10->SetBinError(8,1.609933);
   hCCpi0inFV_stack_10->SetBinError(9,1.603514);
   hCCpi0inFV_stack_10->SetBinError(10,2.133325);
   hCCpi0inFV_stack_10->SetBinError(11,1.903321);
   hCCpi0inFV_stack_10->SetBinError(12,2.169498);
   hCCpi0inFV_stack_10->SetBinError(13,2.605323);
   hCCpi0inFV_stack_10->SetBinError(14,2.299322);
   hCCpi0inFV_stack_10->SetBinError(15,3.099584);
   hCCpi0inFV_stack_10->SetBinError(16,3.222227);
   hCCpi0inFV_stack_10->SetBinError(17,4.004705);
   hCCpi0inFV_stack_10->SetBinError(18,4.516671);
   hCCpi0inFV_stack_10->SetBinError(19,5.816934);
   hCCpi0inFV_stack_10->SetBinError(20,7.245123);
   hCCpi0inFV_stack_10->SetEntries(1805);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.67172);
   hNCinFV_stack_11->SetBinContent(2,4.563549);
   hNCinFV_stack_11->SetBinContent(3,4.351032);
   hNCinFV_stack_11->SetBinContent(4,3.375679);
   hNCinFV_stack_11->SetBinContent(5,4.117635);
   hNCinFV_stack_11->SetBinContent(6,2.079698);
   hNCinFV_stack_11->SetBinContent(7,3.163163);
   hNCinFV_stack_11->SetBinContent(8,1.592022);
   hNCinFV_stack_11->SetBinContent(9,4.096754);
   hNCinFV_stack_11->SetBinContent(10,3.438323);
   hNCinFV_stack_11->SetBinContent(11,3.417441);
   hNCinFV_stack_11->SetBinContent(12,5.709657);
   hNCinFV_stack_11->SetBinContent(13,5.476259);
   hNCinFV_stack_11->SetBinContent(14,6.601485);
   hNCinFV_stack_11->SetBinContent(15,9.593893);
   hNCinFV_stack_11->SetBinContent(16,15.02839);
   hNCinFV_stack_11->SetBinContent(17,15.00751);
   hNCinFV_stack_11->SetBinContent(18,23.56341);
   hNCinFV_stack_11->SetBinContent(19,35.40405);
   hNCinFV_stack_11->SetBinContent(20,72.38316);
   hNCinFV_stack_11->SetBinError(1,1.068299);
   hNCinFV_stack_11->SetBinError(2,1.240541);
   hNCinFV_stack_11->SetBinError(3,1.180922);
   hNCinFV_stack_11->SetBinError(4,1.164672);
   hNCinFV_stack_11->SetBinError(5,1.157628);
   hNCinFV_stack_11->SetBinError(6,0.7616831);
   hNCinFV_stack_11->SetBinError(7,1.100952);
   hNCinFV_stack_11->SetBinError(8,0.7490679);
   hNCinFV_stack_11->SetBinError(9,1.195824);
   hNCinFV_stack_11->SetBinError(10,1.042492);
   hNCinFV_stack_11->SetBinError(11,1.084749);
   hNCinFV_stack_11->SetBinError(12,1.378842);
   hNCinFV_stack_11->SetBinError(13,1.358945);
   hNCinFV_stack_11->SetBinError(14,1.516208);
   hNCinFV_stack_11->SetBinError(15,1.785171);
   hNCinFV_stack_11->SetBinError(16,2.283276);
   hNCinFV_stack_11->SetBinError(17,2.302876);
   hNCinFV_stack_11->SetBinError(18,2.95324);
   hNCinFV_stack_11->SetBinError(19,3.43067);
   hNCinFV_stack_11->SetBinError(20,5.043254);
   hNCinFV_stack_11->SetEntries(725);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.417501);
   hnumuCCinFV_stack_12->SetBinContent(2,4.668119);
   hnumuCCinFV_stack_12->SetBinContent(3,3.022498);
   hnumuCCinFV_stack_12->SetBinContent(4,3.09609);
   hnumuCCinFV_stack_12->SetBinContent(5,4.939534);
   hnumuCCinFV_stack_12->SetBinContent(6,4.544636);
   hnumuCCinFV_stack_12->SetBinContent(7,3.593884);
   hnumuCCinFV_stack_12->SetBinContent(8,6.849278);
   hnumuCCinFV_stack_12->SetBinContent(9,6.393557);
   hnumuCCinFV_stack_12->SetBinContent(10,7.495405);
   hnumuCCinFV_stack_12->SetBinContent(11,4.214383);
   hnumuCCinFV_stack_12->SetBinContent(12,3.90601);
   hnumuCCinFV_stack_12->SetBinContent(13,12.52568);
   hnumuCCinFV_stack_12->SetBinContent(14,11.11531);
   hnumuCCinFV_stack_12->SetBinContent(15,10.98033);
   hnumuCCinFV_stack_12->SetBinContent(16,16.41188);
   hnumuCCinFV_stack_12->SetBinContent(17,19.18668);
   hnumuCCinFV_stack_12->SetBinContent(18,25.47847);
   hnumuCCinFV_stack_12->SetBinContent(19,37.58565);
   hnumuCCinFV_stack_12->SetBinContent(20,71.03584);
   hnumuCCinFV_stack_12->SetBinError(1,1.31129);
   hnumuCCinFV_stack_12->SetBinError(2,1.379735);
   hnumuCCinFV_stack_12->SetBinError(3,0.9889786);
   hnumuCCinFV_stack_12->SetBinError(4,1.03609);
   hnumuCCinFV_stack_12->SetBinError(5,1.336718);
   hnumuCCinFV_stack_12->SetBinError(6,1.633697);
   hnumuCCinFV_stack_12->SetBinError(7,1.523136);
   hnumuCCinFV_stack_12->SetBinError(8,2.525588);
   hnumuCCinFV_stack_12->SetBinError(9,1.447326);
   hnumuCCinFV_stack_12->SetBinError(10,1.829416);
   hnumuCCinFV_stack_12->SetBinError(11,1.325289);
   hnumuCCinFV_stack_12->SetBinError(12,1.146175);
   hnumuCCinFV_stack_12->SetBinError(13,2.203258);
   hnumuCCinFV_stack_12->SetBinError(14,2.155759);
   hnumuCCinFV_stack_12->SetBinError(15,2.044199);
   hnumuCCinFV_stack_12->SetBinError(16,3.004557);
   hnumuCCinFV_stack_12->SetBinError(17,2.685233);
   hnumuCCinFV_stack_12->SetBinError(18,3.052745);
   hnumuCCinFV_stack_12->SetBinError(19,4.322941);
   hnumuCCinFV_stack_12->SetBinError(20,5.665673);
   hnumuCCinFV_stack_12->SetEntries(793);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.595328);
   hnueCCinFV_stack_13->SetBinContent(2,1.192261);
   hnueCCinFV_stack_13->SetBinContent(3,0.6739545);
   hnueCCinFV_stack_13->SetBinContent(4,1.722552);
   hnueCCinFV_stack_13->SetBinContent(5,0.3589667);
   hnueCCinFV_stack_13->SetBinContent(6,0.5658709);
   hnueCCinFV_stack_13->SetBinContent(9,0.9919206);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.2908368);
   hnueCCinFV_stack_13->SetBinContent(13,0.3557058);
   hnueCCinFV_stack_13->SetBinContent(14,1.470966);
   hnueCCinFV_stack_13->SetBinContent(15,2.136391);
   hnueCCinFV_stack_13->SetBinContent(16,1.335174);
   hnueCCinFV_stack_13->SetBinContent(17,1.232278);
   hnueCCinFV_stack_13->SetBinContent(18,3.218737);
   hnueCCinFV_stack_13->SetBinContent(19,1.987263);
   hnueCCinFV_stack_13->SetBinContent(20,13.64248);
   hnueCCinFV_stack_13->SetBinError(1,0.8796341);
   hnueCCinFV_stack_13->SetBinError(2,0.5336742);
   hnueCCinFV_stack_13->SetBinError(3,0.4777558);
   hnueCCinFV_stack_13->SetBinError(4,1.352274);
   hnueCCinFV_stack_13->SetBinError(5,0.3589667);
   hnueCCinFV_stack_13->SetBinError(6,0.5658708);
   hnueCCinFV_stack_13->SetBinError(9,0.5890672);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.2908368);
   hnueCCinFV_stack_13->SetBinError(13,0.3557058);
   hnueCCinFV_stack_13->SetBinError(14,0.7699044);
   hnueCCinFV_stack_13->SetBinError(15,1.701766);
   hnueCCinFV_stack_13->SetBinError(16,0.8135793);
   hnueCCinFV_stack_13->SetBinError(17,0.766843);
   hnueCCinFV_stack_13->SetBinError(18,1.283293);
   hnueCCinFV_stack_13->SetBinError(19,0.705071);
   hnueCCinFV_stack_13->SetBinError(20,2.665226);
   hnueCCinFV_stack_13->SetEntries(90);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,70.77302);
   hmcerror__11->SetBinContent(2,60.30516);
   hmcerror__11->SetBinContent(3,54.59607);
   hmcerror__11->SetBinContent(4,47.32395);
   hmcerror__11->SetBinContent(5,55.77526);
   hmcerror__11->SetBinContent(6,48.82532);
   hmcerror__11->SetBinContent(7,44.83788);
   hmcerror__11->SetBinContent(8,49.50084);
   hmcerror__11->SetBinContent(9,58.64939);
   hmcerror__11->SetBinContent(10,71.27709);
   hmcerror__11->SetBinContent(11,69.60628);
   hmcerror__11->SetBinContent(12,85.38736);
   hmcerror__11->SetBinContent(13,109.501);
   hmcerror__11->SetBinContent(14,119.118);
   hmcerror__11->SetBinContent(15,157.0099);
   hmcerror__11->SetBinContent(16,209.1273);
   hmcerror__11->SetBinContent(17,272.4021);
   hmcerror__11->SetBinContent(18,361.4759);
   hmcerror__11->SetBinContent(19,506.7686);
   hmcerror__11->SetBinContent(20,813.0334);
   hmcerror__11->SetBinError(1,28.23276);
   hmcerror__11->SetBinError(2,21.65944);
   hmcerror__11->SetBinError(3,20.11246);
   hmcerror__11->SetBinError(4,19.8109);
   hmcerror__11->SetBinError(5,20.82364);
   hmcerror__11->SetBinError(6,19.9494);
   hmcerror__11->SetBinError(7,16.95676);
   hmcerror__11->SetBinError(8,19.95294);
   hmcerror__11->SetBinError(9,21.41301);
   hmcerror__11->SetBinError(10,26.94438);
   hmcerror__11->SetBinError(11,23.38794);
   hmcerror__11->SetBinError(12,31.00748);
   hmcerror__11->SetBinError(13,39.95299);
   hmcerror__11->SetBinError(14,39.75382);
   hmcerror__11->SetBinError(15,49.49483);
   hmcerror__11->SetBinError(16,61.50758);
   hmcerror__11->SetBinError(17,79.34226);
   hmcerror__11->SetBinError(18,101.1821);
   hmcerror__11->SetBinError(19,117.1273);
   hmcerror__11->SetBinError(20,195.0919);
   hmcerror__11->SetBinError(21,0.4673072);
   hmcerror__11->SetEntries(3224.636);

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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   62,
   74,
   47,
   47,
   46,
   61,
   45,
   56,
   52,
   63,
   81,
   91,
   107,
   148,
   167,
   207,
   271,
   399,
   575,
   924};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   8.0018,
   8.7275,
   6.9882,
   6.9882,
   6.9153,
   7.9383,
   6.8416,
   7.6127,
   7.3419,
   8.0648,
   9.1239,
   9.6617,
   10.34408,
   12.16553,
   12.92285,
   14.38749,
   16.46208,
   19.97498,
   23.97916,
   30.39737};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   7.7989,
   8.5253,
   6.7839,
   6.7839,
   6.7108,
   7.7354,
   6.637,
   7.4094,
   7.1381,
   7.862,
   8.9221,
   9.46,
   10.34408,
   12.16553,
   12.92285,
   14.38749,
   16.46208,
   19.97498,
   23.97916,
   30.39737};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(34.34256);
   Graph_Graph3013->SetMaximum(1046.021);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.08#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3523.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 487.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  97.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  9.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1246.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  244.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 558.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 226.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 33.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.3989198,
   0.359164,
   0.3683866,
   0.418623,
   0.373349,
   0.4085871,
   0.3781793,
   0.4030829,
   0.365102,
   0.378023,
   0.3360033,
   0.363139,
   0.3648641,
   0.3337348,
   0.3152339,
   0.2941155,
   0.2912689,
   0.2799138,
   0.2311259,
   0.2399556};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.3989198,
   0.359164,
   0.3683866,
   0.418623,
   0.373349,
   0.4085871,
   0.3781793,
   0.4030829,
   0.365102,
   0.378023,
   0.3360033,
   0.363139,
   0.3648641,
   0.3337348,
   0.3152339,
   0.2941155,
   0.2912689,
   0.2799138,
   0.2311259,
   0.2399556};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.2203997,
   0.2098825,
   0.2171817,
   0.2491245,
   0.2313758,
   0.2222587,
   0.2365057,
   0.2343517,
   0.225157,
   0.2332987,
   0.2437,
   0.2506757,
   0.2600402,
   0.2565108,
   0.272171,
   0.2523518,
   0.2510373,
   0.2219743,
   0.2060358,
   0.2137634};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.2203997,
   0.2098825,
   0.2171817,
   0.2491245,
   0.2313758,
   0.2222587,
   0.2365057,
   0.2343517,
   0.225157,
   0.2332987,
   0.2437,
   0.2506757,
   0.2600402,
   0.2565108,
   0.272171,
   0.2523518,
   0.2510373,
   0.2219743,
   0.2060358,
   0.2137634};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   0.8760401,
   1.227092,
   0.8608679,
   0.9931546,
   0.8247384,
   1.249352,
   1.003616,
   1.131294,
   0.8866248,
   0.8838744,
   1.163688,
   1.065732,
   0.9771598,
   1.242465,
   1.063627,
   0.9898279,
   0.9948528,
   1.103808,
   1.13464,
   1.136485};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.1130629,
   0.1447223,
   0.1279982,
   0.1476673,
   0.1239851,
   0.1625857,
   0.1525853,
   0.1537893,
   0.1251829,
   0.1131472,
   0.1310787,
   0.1131514,
   0.09446561,
   0.10213,
   0.08230597,
   0.06879779,
   0.06043301,
   0.05525952,
   0.04731777,
   0.0373876};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.110196,
   0.1413693,
   0.1242562,
   0.1433502,
   0.1203186,
   0.1584301,
   0.1480222,
   0.1496823,
   0.121708,
   0.1103019,
   0.1281795,
   0.1107892,
   0.09446561,
   0.10213,
   0.08230597,
   0.06879779,
   0.06043301,
   0.05525952,
   0.04731777,
   0.0373876};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.6300505);
   Graph_Graph3016->SetMaximum(1.478485);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_6_pi0_costheta_all",20,-1,1);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
