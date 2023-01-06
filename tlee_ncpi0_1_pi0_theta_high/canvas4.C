#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 22:48:01 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",190,172,1200,900);
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
   pad1->Range(-0.4846154,-8.1,3.553846,895.6895);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__10->SetBinContent(1,91.00262);
   hmc__10->SetBinContent(2,223.8472);
   hmc__10->SetBinContent(3,324.5754);
   hmc__10->SetBinContent(4,365.8001);
   hmc__10->SetBinContent(5,355.6015);
   hmc__10->SetBinContent(6,332.6075);
   hmc__10->SetBinContent(7,298.7488);
   hmc__10->SetBinContent(8,273.8221);
   hmc__10->SetBinContent(9,217.8817);
   hmc__10->SetBinContent(10,184.5813);
   hmc__10->SetBinContent(11,151.7384);
   hmc__10->SetBinContent(12,124.8138);
   hmc__10->SetBinContent(13,110.72);
   hmc__10->SetBinContent(14,80.05804);
   hmc__10->SetBinContent(15,83.5575);
   hmc__10->SetBinContent(16,76.63553);
   hmc__10->SetBinContent(17,72.72208);
   hmc__10->SetBinContent(18,65.97916);
   hmc__10->SetBinContent(19,65.97188);
   hmc__10->SetBinContent(20,57.64604);
   hmc__10->SetBinContent(21,54.29031);
   hmc__10->SetBinContent(22,47.94758);
   hmc__10->SetBinContent(23,36.69617);
   hmc__10->SetBinContent(24,24.78654);
   hmc__10->SetBinContent(25,7.428654);
   hmc__10->SetBinError(1,34.34415);
   hmc__10->SetBinError(2,60.95596);
   hmc__10->SetBinError(3,78.65968);
   hmc__10->SetBinError(4,97.64345);
   hmc__10->SetBinError(5,84.28044);
   hmc__10->SetBinError(6,85.20598);
   hmc__10->SetBinError(7,76.65997);
   hmc__10->SetBinError(8,77.25779);
   hmc__10->SetBinError(9,59.55758);
   hmc__10->SetBinError(10,48.22218);
   hmc__10->SetBinError(11,37.44447);
   hmc__10->SetBinError(12,30.325);
   hmc__10->SetBinError(13,35.21627);
   hmc__10->SetBinError(14,23.34638);
   hmc__10->SetBinError(15,23.86918);
   hmc__10->SetBinError(16,25.64566);
   hmc__10->SetBinError(17,20.68032);
   hmc__10->SetBinError(18,25.56708);
   hmc__10->SetBinError(19,25.30257);
   hmc__10->SetBinError(20,20.0839);
   hmc__10->SetBinError(21,21.94603);
   hmc__10->SetBinError(22,18.18795);
   hmc__10->SetBinError(23,18.08062);
   hmc__10->SetBinError(24,13.51496);
   hmc__10->SetBinError(25,5.987643);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-8.1);
   hmc__10->SetMaximum(850.5);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,3.15);
   hs4_stack_4->SetMinimum(-8.530416e-09);
   hs4_stack_4->SetMaximum(384.0901);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.298434);
   hbadmatch_stack_1->SetBinContent(2,4.669215);
   hbadmatch_stack_1->SetBinContent(3,6.681055);
   hbadmatch_stack_1->SetBinContent(4,7.849291);
   hbadmatch_stack_1->SetBinContent(5,6.639909);
   hbadmatch_stack_1->SetBinContent(6,6.51624);
   hbadmatch_stack_1->SetBinContent(7,6.007127);
   hbadmatch_stack_1->SetBinContent(8,7.219361);
   hbadmatch_stack_1->SetBinContent(9,7.267725);
   hbadmatch_stack_1->SetBinContent(10,3.994934);
   hbadmatch_stack_1->SetBinContent(11,5.704669);
   hbadmatch_stack_1->SetBinContent(12,3.001273);
   hbadmatch_stack_1->SetBinContent(13,3.909206);
   hbadmatch_stack_1->SetBinContent(14,1.790583);
   hbadmatch_stack_1->SetBinContent(15,3.41811);
   hbadmatch_stack_1->SetBinContent(16,4.475298);
   hbadmatch_stack_1->SetBinContent(17,3.374632);
   hbadmatch_stack_1->SetBinContent(18,1.103321);
   hbadmatch_stack_1->SetBinContent(19,1.714849);
   hbadmatch_stack_1->SetBinContent(20,1.860647);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,3.734872);
   hbadmatch_stack_1->SetBinContent(23,1.407531);
   hbadmatch_stack_1->SetBinContent(24,1.751975);
   hbadmatch_stack_1->SetBinError(1,1.226679);
   hbadmatch_stack_1->SetBinError(2,1.16239);
   hbadmatch_stack_1->SetBinError(3,1.684043);
   hbadmatch_stack_1->SetBinError(4,1.48316);
   hbadmatch_stack_1->SetBinError(5,1.33606);
   hbadmatch_stack_1->SetBinError(6,1.320668);
   hbadmatch_stack_1->SetBinError(7,1.343346);
   hbadmatch_stack_1->SetBinError(8,1.403948);
   hbadmatch_stack_1->SetBinError(9,1.496744);
   hbadmatch_stack_1->SetBinError(10,1.048868);
   hbadmatch_stack_1->SetBinError(11,1.374261);
   hbadmatch_stack_1->SetBinError(12,0.9087207);
   hbadmatch_stack_1->SetBinError(13,1.804223);
   hbadmatch_stack_1->SetBinError(14,0.7840992);
   hbadmatch_stack_1->SetBinError(15,0.9431145);
   hbadmatch_stack_1->SetBinError(16,1.134905);
   hbadmatch_stack_1->SetBinError(17,1.016598);
   hbadmatch_stack_1->SetBinError(18,0.6168591);
   hbadmatch_stack_1->SetBinError(19,0.6904795);
   hbadmatch_stack_1->SetBinError(20,0.6808988);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,1.796738);
   hbadmatch_stack_1->SetBinError(23,0.5806769);
   hbadmatch_stack_1->SetBinError(24,0.7614325);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,3.793434);
   hext_stack_2->SetBinContent(2,9.331367);
   hext_stack_2->SetBinContent(3,26.45149);
   hext_stack_2->SetBinContent(4,27.67406);
   hext_stack_2->SetBinContent(5,30.83747);
   hext_stack_2->SetBinContent(6,37.73088);
   hext_stack_2->SetBinContent(7,35.2841);
   hext_stack_2->SetBinContent(8,41.8084);
   hext_stack_2->SetBinContent(9,29.15482);
   hext_stack_2->SetBinContent(10,38.08117);
   hext_stack_2->SetBinContent(11,35.41096);
   hext_stack_2->SetBinContent(12,30.2824);
   hext_stack_2->SetBinContent(13,18.18111);
   hext_stack_2->SetBinContent(14,15.29184);
   hext_stack_2->SetBinContent(15,20.70449);
   hext_stack_2->SetBinContent(16,13.40448);
   hext_stack_2->SetBinContent(17,14.21049);
   hext_stack_2->SetBinContent(18,12.09536);
   hext_stack_2->SetBinContent(19,9.664523);
   hext_stack_2->SetBinContent(20,7.754043);
   hext_stack_2->SetBinContent(21,9.869238);
   hext_stack_2->SetBinContent(22,4.028449);
   hext_stack_2->SetBinContent(23,2.827422);
   hext_stack_2->SetBinContent(24,2.841783);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinError(1,1.393356);
   hext_stack_2->SetBinError(2,1.896907);
   hext_stack_2->SetBinError(3,3.463441);
   hext_stack_2->SetBinError(4,3.486412);
   hext_stack_2->SetBinError(5,3.69036);
   hext_stack_2->SetBinError(6,4.086138);
   hext_stack_2->SetBinError(7,3.988207);
   hext_stack_2->SetBinError(8,4.428779);
   hext_stack_2->SetBinError(9,3.525464);
   hext_stack_2->SetBinError(10,4.202819);
   hext_stack_2->SetBinError(11,4.069463);
   hext_stack_2->SetBinError(12,3.838322);
   hext_stack_2->SetBinError(13,2.601903);
   hext_stack_2->SetBinError(14,2.611484);
   hext_stack_2->SetBinError(15,3.102222);
   hext_stack_2->SetBinError(16,2.526003);
   hext_stack_2->SetBinError(17,2.629171);
   hext_stack_2->SetBinError(18,2.166893);
   hext_stack_2->SetBinError(19,2.303073);
   hext_stack_2->SetBinError(20,1.914873);
   hext_stack_2->SetBinError(21,2.133879);
   hext_stack_2->SetBinError(22,1.479117);
   hext_stack_2->SetBinError(23,1.193541);
   hext_stack_2->SetBinError(24,1.011007);
   hext_stack_2->SetBinError(25,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4532775);
   hdirt_stack_3->SetBinContent(2,1.850057);
   hdirt_stack_3->SetBinContent(3,3.474425);
   hdirt_stack_3->SetBinContent(4,4.625927);
   hdirt_stack_3->SetBinContent(5,4.133145);
   hdirt_stack_3->SetBinContent(6,5.050715);
   hdirt_stack_3->SetBinContent(7,6.198238);
   hdirt_stack_3->SetBinContent(8,2.587658);
   hdirt_stack_3->SetBinContent(9,4.767782);
   hdirt_stack_3->SetBinContent(10,3.638584);
   hdirt_stack_3->SetBinContent(11,0.9350516);
   hdirt_stack_3->SetBinContent(12,2.198194);
   hdirt_stack_3->SetBinContent(13,1.593987);
   hdirt_stack_3->SetBinContent(14,1.195944);
   hdirt_stack_3->SetBinContent(15,1.62771);
   hdirt_stack_3->SetBinContent(16,2.138235);
   hdirt_stack_3->SetBinContent(17,1.323097);
   hdirt_stack_3->SetBinContent(18,1.333216);
   hdirt_stack_3->SetBinContent(19,3.444708);
   hdirt_stack_3->SetBinContent(20,1.070309);
   hdirt_stack_3->SetBinContent(21,0.7465333);
   hdirt_stack_3->SetBinContent(22,0.5091542);
   hdirt_stack_3->SetBinContent(23,0.9857053);
   hdirt_stack_3->SetBinContent(24,0.8332258);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.3572343);
   hdirt_stack_3->SetBinError(2,0.6829576);
   hdirt_stack_3->SetBinError(3,0.9948003);
   hdirt_stack_3->SetBinError(4,1.257209);
   hdirt_stack_3->SetBinError(5,1.006531);
   hdirt_stack_3->SetBinError(6,1.159727);
   hdirt_stack_3->SetBinError(7,1.645857);
   hdirt_stack_3->SetBinError(8,0.7781477);
   hdirt_stack_3->SetBinError(9,1.116076);
   hdirt_stack_3->SetBinError(10,0.9483584);
   hdirt_stack_3->SetBinError(11,0.4360798);
   hdirt_stack_3->SetBinError(12,0.8242715);
   hdirt_stack_3->SetBinError(13,0.6832557);
   hdirt_stack_3->SetBinError(14,0.6109736);
   hdirt_stack_3->SetBinError(15,0.6394631);
   hdirt_stack_3->SetBinError(16,0.7303374);
   hdirt_stack_3->SetBinError(17,0.6297496);
   hdirt_stack_3->SetBinError(18,0.5849634);
   hdirt_stack_3->SetBinError(19,1.258882);
   hdirt_stack_3->SetBinError(20,0.5675301);
   hdirt_stack_3->SetBinError(21,0.4676974);
   hdirt_stack_3->SetBinError(22,0.2982867);
   hdirt_stack_3->SetBinError(23,0.4729306);
   hdirt_stack_3->SetBinError(24,0.4476755);
   hdirt_stack_3->SetBinError(25,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,6.618382);
   houtFV_stack_4->SetBinContent(2,20.22412);
   houtFV_stack_4->SetBinContent(3,32.79842);
   houtFV_stack_4->SetBinContent(4,37.81349);
   houtFV_stack_4->SetBinContent(5,37.32638);
   houtFV_stack_4->SetBinContent(6,45.2071);
   houtFV_stack_4->SetBinContent(7,40.86749);
   houtFV_stack_4->SetBinContent(8,41.34801);
   houtFV_stack_4->SetBinContent(9,27.03824);
   houtFV_stack_4->SetBinContent(10,23.97373);
   houtFV_stack_4->SetBinContent(11,19.68962);
   houtFV_stack_4->SetBinContent(12,16.83519);
   houtFV_stack_4->SetBinContent(13,17.12658);
   houtFV_stack_4->SetBinContent(14,12.15602);
   houtFV_stack_4->SetBinContent(15,12.35054);
   houtFV_stack_4->SetBinContent(16,11.96706);
   houtFV_stack_4->SetBinContent(17,10.2118);
   houtFV_stack_4->SetBinContent(18,14.24421);
   houtFV_stack_4->SetBinContent(19,10.52068);
   houtFV_stack_4->SetBinContent(20,9.191072);
   houtFV_stack_4->SetBinContent(21,10.75727);
   houtFV_stack_4->SetBinContent(22,8.936835);
   houtFV_stack_4->SetBinContent(23,5.951781);
   houtFV_stack_4->SetBinContent(24,2.187266);
   houtFV_stack_4->SetBinContent(25,1.401111);
   houtFV_stack_4->SetBinError(1,1.296632);
   houtFV_stack_4->SetBinError(2,2.264451);
   houtFV_stack_4->SetBinError(3,2.833044);
   houtFV_stack_4->SetBinError(4,3.108005);
   houtFV_stack_4->SetBinError(5,2.954027);
   houtFV_stack_4->SetBinError(6,3.441708);
   houtFV_stack_4->SetBinError(7,3.174103);
   houtFV_stack_4->SetBinError(8,3.419346);
   houtFV_stack_4->SetBinError(9,2.575534);
   houtFV_stack_4->SetBinError(10,2.430293);
   houtFV_stack_4->SetBinError(11,2.239196);
   houtFV_stack_4->SetBinError(12,2.02292);
   houtFV_stack_4->SetBinError(13,2.127387);
   houtFV_stack_4->SetBinError(14,1.735616);
   houtFV_stack_4->SetBinError(15,1.736004);
   houtFV_stack_4->SetBinError(16,2.106787);
   houtFV_stack_4->SetBinError(17,1.561848);
   houtFV_stack_4->SetBinError(18,1.958189);
   houtFV_stack_4->SetBinError(19,1.568342);
   houtFV_stack_4->SetBinError(20,1.379053);
   houtFV_stack_4->SetBinError(21,1.625817);
   houtFV_stack_4->SetBinError(22,1.633326);
   houtFV_stack_4->SetBinError(23,1.272688);
   houtFV_stack_4->SetBinError(24,0.7305366);
   houtFV_stack_4->SetBinError(25,0.6038139);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.131551);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,19.98734);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.15891);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.82063);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.00795);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.363782);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.275833);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.6169);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.354502);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.735813);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7097455);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5528694);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2262865);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3012902);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1494983);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5725113);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.110645);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7843217);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9220799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.431641);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.262125);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.04192);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4555764);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.17223);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.662129);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.756927);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.539854);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.355162);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9724378);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9614851);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5927646);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3776886);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5309377);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3360649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2330651);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.09310761);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2089325);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.07184377);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.24653);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3826694);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3600104);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3051976);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4625324);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4638706);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3897309);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2943632);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5067778);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3000578);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.981266);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.281733);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.075245);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2762522);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7391766);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2270149);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.09672254);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2545989);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2897359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05832467);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2824675);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06853444);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07339665);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1039409);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06086722);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1366079);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1741744);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2801204);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1100517);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2663359);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4162847);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3789054);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.08397452);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2696241);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09784979);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0673052);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09136749);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.161062);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03366467);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1136635);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04533176);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04480907);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.08041814);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03641055);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1223278);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1190906);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,23.97948);
   hNCpi0inFVres_stack_7->SetBinContent(2,61.5542);
   hNCpi0inFVres_stack_7->SetBinContent(3,94.80534);
   hNCpi0inFVres_stack_7->SetBinContent(4,114.7495);
   hNCpi0inFVres_stack_7->SetBinContent(5,118.1659);
   hNCpi0inFVres_stack_7->SetBinContent(6,114.4064);
   hNCpi0inFVres_stack_7->SetBinContent(7,99.18168);
   hNCpi0inFVres_stack_7->SetBinContent(8,93.50214);
   hNCpi0inFVres_stack_7->SetBinContent(9,75.96062);
   hNCpi0inFVres_stack_7->SetBinContent(10,56.46246);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.45118);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.3652);
   hNCpi0inFVres_stack_7->SetBinContent(13,32.6871);
   hNCpi0inFVres_stack_7->SetBinContent(14,26.37374);
   hNCpi0inFVres_stack_7->SetBinContent(15,20.88934);
   hNCpi0inFVres_stack_7->SetBinContent(16,20.30713);
   hNCpi0inFVres_stack_7->SetBinContent(17,22.68396);
   hNCpi0inFVres_stack_7->SetBinContent(18,18.19558);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.65385);
   hNCpi0inFVres_stack_7->SetBinContent(20,14.42122);
   hNCpi0inFVres_stack_7->SetBinContent(21,12.24638);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.34761);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.728508);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.595626);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.779939);
   hNCpi0inFVres_stack_7->SetBinError(1,1.755893);
   hNCpi0inFVres_stack_7->SetBinError(2,2.614938);
   hNCpi0inFVres_stack_7->SetBinError(3,3.315596);
   hNCpi0inFVres_stack_7->SetBinError(4,3.706953);
   hNCpi0inFVres_stack_7->SetBinError(5,3.77249);
   hNCpi0inFVres_stack_7->SetBinError(6,3.677219);
   hNCpi0inFVres_stack_7->SetBinError(7,3.363924);
   hNCpi0inFVres_stack_7->SetBinError(8,3.381518);
   hNCpi0inFVres_stack_7->SetBinError(9,3.117933);
   hNCpi0inFVres_stack_7->SetBinError(10,2.597306);
   hNCpi0inFVres_stack_7->SetBinError(11,2.202011);
   hNCpi0inFVres_stack_7->SetBinError(12,2.162186);
   hNCpi0inFVres_stack_7->SetBinError(13,1.987137);
   hNCpi0inFVres_stack_7->SetBinError(14,1.7838);
   hNCpi0inFVres_stack_7->SetBinError(15,1.544806);
   hNCpi0inFVres_stack_7->SetBinError(16,1.481768);
   hNCpi0inFVres_stack_7->SetBinError(17,1.685813);
   hNCpi0inFVres_stack_7->SetBinError(18,1.41292);
   hNCpi0inFVres_stack_7->SetBinError(19,1.592839);
   hNCpi0inFVres_stack_7->SetBinError(20,1.271474);
   hNCpi0inFVres_stack_7->SetBinError(21,1.07238);
   hNCpi0inFVres_stack_7->SetBinError(22,1.31313);
   hNCpi0inFVres_stack_7->SetBinError(23,1.008831);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8490584);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3578205);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.341032);
   hNCpi0inFVdis_stack_8->SetBinContent(2,17.95054);
   hNCpi0inFVdis_stack_8->SetBinContent(3,28.94087);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.13939);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.14995);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.13934);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.15188);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.42091);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.74467);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.068574);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.544984);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.038663);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.98271);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.321198);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.656064);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.66344);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.079297);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.185158);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.187349);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.308671);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.448847);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.710418);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.833836);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.70601);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1159715);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.120019);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.491801);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.956695);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.002636);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.635208);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.492507);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.430661);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.380784);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.248804);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9615243);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9006706);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6830335);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.09259);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5495);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5989488);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6569533);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5724479);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5319704);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7952766);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6183271);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6295573);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8549833);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.362199);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5741145);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.06622012);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1620577);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1311434);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.69755);
   hCCpi0inFV_stack_10->SetBinContent(2,43.92014);
   hCCpi0inFV_stack_10->SetBinContent(3,57.14702);
   hCCpi0inFV_stack_10->SetBinContent(4,67.76868);
   hCCpi0inFV_stack_10->SetBinContent(5,61.49656);
   hCCpi0inFV_stack_10->SetBinContent(6,47.12838);
   hCCpi0inFV_stack_10->SetBinContent(7,49.29351);
   hCCpi0inFV_stack_10->SetBinContent(8,39.57214);
   hCCpi0inFV_stack_10->SetBinContent(9,32.21954);
   hCCpi0inFV_stack_10->SetBinContent(10,24.5029);
   hCCpi0inFV_stack_10->SetBinContent(11,19.34431);
   hCCpi0inFV_stack_10->SetBinContent(12,10.36493);
   hCCpi0inFV_stack_10->SetBinContent(13,14.24514);
   hCCpi0inFV_stack_10->SetBinContent(14,8.875795);
   hCCpi0inFV_stack_10->SetBinContent(15,11.48868);
   hCCpi0inFV_stack_10->SetBinContent(16,13.42095);
   hCCpi0inFV_stack_10->SetBinContent(17,8.822578);
   hCCpi0inFV_stack_10->SetBinContent(18,8.462515);
   hCCpi0inFV_stack_10->SetBinContent(19,8.062322);
   hCCpi0inFV_stack_10->SetBinContent(20,9.685352);
   hCCpi0inFV_stack_10->SetBinContent(21,6.842756);
   hCCpi0inFV_stack_10->SetBinContent(22,5.380156);
   hCCpi0inFV_stack_10->SetBinContent(23,7.587747);
   hCCpi0inFV_stack_10->SetBinContent(24,5.083088);
   hCCpi0inFV_stack_10->SetBinContent(25,1.712114);
   hCCpi0inFV_stack_10->SetBinError(1,2.003821);
   hCCpi0inFV_stack_10->SetBinError(2,3.319172);
   hCCpi0inFV_stack_10->SetBinError(3,3.774861);
   hCCpi0inFV_stack_10->SetBinError(4,4.173031);
   hCCpi0inFV_stack_10->SetBinError(5,3.920155);
   hCCpi0inFV_stack_10->SetBinError(6,3.491963);
   hCCpi0inFV_stack_10->SetBinError(7,3.537261);
   hCCpi0inFV_stack_10->SetBinError(8,3.177064);
   hCCpi0inFV_stack_10->SetBinError(9,2.839167);
   hCCpi0inFV_stack_10->SetBinError(10,2.490603);
   hCCpi0inFV_stack_10->SetBinError(11,2.152528);
   hCCpi0inFV_stack_10->SetBinError(12,1.576381);
   hCCpi0inFV_stack_10->SetBinError(13,1.869788);
   hCCpi0inFV_stack_10->SetBinError(14,1.512641);
   hCCpi0inFV_stack_10->SetBinError(15,1.781939);
   hCCpi0inFV_stack_10->SetBinError(16,1.823486);
   hCCpi0inFV_stack_10->SetBinError(17,1.486609);
   hCCpi0inFV_stack_10->SetBinError(18,1.415284);
   hCCpi0inFV_stack_10->SetBinError(19,1.386717);
   hCCpi0inFV_stack_10->SetBinError(20,1.572069);
   hCCpi0inFV_stack_10->SetBinError(21,1.287891);
   hCCpi0inFV_stack_10->SetBinError(22,1.161975);
   hCCpi0inFV_stack_10->SetBinError(23,1.362445);
   hCCpi0inFV_stack_10->SetBinError(24,1.091863);
   hCCpi0inFV_stack_10->SetBinError(25,0.6201715);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.376405);
   hNCinFV_stack_11->SetBinContent(2,20.83488);
   hNCinFV_stack_11->SetBinContent(3,22.64436);
   hNCinFV_stack_11->SetBinContent(4,28.03404);
   hNCinFV_stack_11->SetBinContent(5,32.44115);
   hNCinFV_stack_11->SetBinContent(6,20.80507);
   hNCinFV_stack_11->SetBinContent(7,13.51835);
   hNCinFV_stack_11->SetBinContent(8,11.27716);
   hNCinFV_stack_11->SetBinContent(9,11.20482);
   hNCinFV_stack_11->SetBinContent(10,8.583361);
   hNCinFV_stack_11->SetBinContent(11,4.94475);
   hNCinFV_stack_11->SetBinContent(12,7.446911);
   hNCinFV_stack_11->SetBinContent(13,5.960253);
   hNCinFV_stack_11->SetBinContent(14,5.860704);
   hNCinFV_stack_11->SetBinContent(15,2.739344);
   hNCinFV_stack_11->SetBinContent(16,2.662417);
   hNCinFV_stack_11->SetBinContent(17,2.786504);
   hNCinFV_stack_11->SetBinContent(18,2.250882);
   hNCinFV_stack_11->SetBinContent(19,4.958134);
   hNCinFV_stack_11->SetBinContent(20,3.922955);
   hNCinFV_stack_11->SetBinContent(21,4.969782);
   hNCinFV_stack_11->SetBinContent(22,2.221464);
   hNCinFV_stack_11->SetBinContent(23,1.554821);
   hNCinFV_stack_11->SetBinContent(24,2.524838);
   hNCinFV_stack_11->SetBinContent(25,0.3024228);
   hNCinFV_stack_11->SetBinError(1,1.391074);
   hNCinFV_stack_11->SetBinError(2,2.482468);
   hNCinFV_stack_11->SetBinError(3,2.591345);
   hNCinFV_stack_11->SetBinError(4,2.73329);
   hNCinFV_stack_11->SetBinError(5,3.32505);
   hNCinFV_stack_11->SetBinError(6,2.383083);
   hNCinFV_stack_11->SetBinError(7,1.844755);
   hNCinFV_stack_11->SetBinError(8,1.752363);
   hNCinFV_stack_11->SetBinError(9,1.903498);
   hNCinFV_stack_11->SetBinError(10,1.420412);
   hNCinFV_stack_11->SetBinError(11,1.039232);
   hNCinFV_stack_11->SetBinError(12,1.402207);
   hNCinFV_stack_11->SetBinError(13,1.225389);
   hNCinFV_stack_11->SetBinError(14,1.227087);
   hNCinFV_stack_11->SetBinError(15,0.7546124);
   hNCinFV_stack_11->SetBinError(16,0.8003395);
   hNCinFV_stack_11->SetBinError(17,0.7843395);
   hNCinFV_stack_11->SetBinError(18,0.6978104);
   hNCinFV_stack_11->SetBinError(19,1.249021);
   hNCinFV_stack_11->SetBinError(20,1.055277);
   hNCinFV_stack_11->SetBinError(21,1.167174);
   hNCinFV_stack_11->SetBinError(22,0.8711033);
   hNCinFV_stack_11->SetBinError(23,0.6043858);
   hNCinFV_stack_11->SetBinError(24,0.8369227);
   hNCinFV_stack_11->SetBinError(25,0.222641);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.243731);
   hnumuCCinFV_stack_12->SetBinContent(2,16.45868);
   hnumuCCinFV_stack_12->SetBinContent(3,24.63262);
   hnumuCCinFV_stack_12->SetBinContent(4,29.01642);
   hnumuCCinFV_stack_12->SetBinContent(5,23.18445);
   hnumuCCinFV_stack_12->SetBinContent(6,23.37946);
   hnumuCCinFV_stack_12->SetBinContent(7,22.29892);
   hnumuCCinFV_stack_12->SetBinContent(8,16.55039);
   hnumuCCinFV_stack_12->SetBinContent(9,13.7601);
   hnumuCCinFV_stack_12->SetBinContent(10,14.30542);
   hnumuCCinFV_stack_12->SetBinContent(11,11.29769);
   hnumuCCinFV_stack_12->SetBinContent(12,7.996622);
   hnumuCCinFV_stack_12->SetBinContent(13,10.74931);
   hnumuCCinFV_stack_12->SetBinContent(14,4.23388);
   hnumuCCinFV_stack_12->SetBinContent(15,5.448472);
   hnumuCCinFV_stack_12->SetBinContent(16,4.162914);
   hnumuCCinFV_stack_12->SetBinContent(17,6.14514);
   hnumuCCinFV_stack_12->SetBinContent(18,5.218164);
   hnumuCCinFV_stack_12->SetBinContent(19,3.950398);
   hnumuCCinFV_stack_12->SetBinContent(20,4.564392);
   hnumuCCinFV_stack_12->SetBinContent(21,2.595589);
   hnumuCCinFV_stack_12->SetBinContent(22,4.58174);
   hnumuCCinFV_stack_12->SetBinContent(23,2.665052);
   hnumuCCinFV_stack_12->SetBinContent(24,1.024094);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5923367);
   hnumuCCinFV_stack_12->SetBinError(1,1.817854);
   hnumuCCinFV_stack_12->SetBinError(2,2.085974);
   hnumuCCinFV_stack_12->SetBinError(3,3.262568);
   hnumuCCinFV_stack_12->SetBinError(4,3.275526);
   hnumuCCinFV_stack_12->SetBinError(5,2.7299);
   hnumuCCinFV_stack_12->SetBinError(6,2.529987);
   hnumuCCinFV_stack_12->SetBinError(7,2.717554);
   hnumuCCinFV_stack_12->SetBinError(8,2.528129);
   hnumuCCinFV_stack_12->SetBinError(9,1.958339);
   hnumuCCinFV_stack_12->SetBinError(10,2.306994);
   hnumuCCinFV_stack_12->SetBinError(11,1.92787);
   hnumuCCinFV_stack_12->SetBinError(12,1.545182);
   hnumuCCinFV_stack_12->SetBinError(13,1.980159);
   hnumuCCinFV_stack_12->SetBinError(14,1.102035);
   hnumuCCinFV_stack_12->SetBinError(15,1.769499);
   hnumuCCinFV_stack_12->SetBinError(16,1.034639);
   hnumuCCinFV_stack_12->SetBinError(17,1.481077);
   hnumuCCinFV_stack_12->SetBinError(18,1.170199);
   hnumuCCinFV_stack_12->SetBinError(19,1.376237);
   hnumuCCinFV_stack_12->SetBinError(20,1.078289);
   hnumuCCinFV_stack_12->SetBinError(21,0.8479931);
   hnumuCCinFV_stack_12->SetBinError(22,1.100857);
   hnumuCCinFV_stack_12->SetBinError(23,0.8919555);
   hnumuCCinFV_stack_12->SetBinError(24,0.4597369);
   hnumuCCinFV_stack_12->SetBinError(25,0.3968523);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.03316);
   hnueCCinFV_stack_13->SetBinContent(2,6.559882);
   hnueCCinFV_stack_13->SetBinContent(3,4.378785);
   hnueCCinFV_stack_13->SetBinContent(4,1.308548);
   hnueCCinFV_stack_13->SetBinContent(5,1.896349);
   hnueCCinFV_stack_13->SetBinContent(6,1.78755);
   hnueCCinFV_stack_13->SetBinContent(7,1.376628);
   hnueCCinFV_stack_13->SetBinContent(8,1.179834);
   hnueCCinFV_stack_13->SetBinContent(9,2.181895);
   hnueCCinFV_stack_13->SetBinContent(10,1.137683);
   hnueCCinFV_stack_13->SetBinContent(11,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(14,0.6609475);
   hnueCCinFV_stack_13->SetBinContent(15,0.8649266);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,1.075993);
   hnueCCinFV_stack_13->SetBinContent(21,1.635953);
   hnueCCinFV_stack_13->SetBinContent(22,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(23,0.7174687);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.121907);
   hnueCCinFV_stack_13->SetBinError(2,2.087047);
   hnueCCinFV_stack_13->SetBinError(3,1.203195);
   hnueCCinFV_stack_13->SetBinError(4,0.5472872);
   hnueCCinFV_stack_13->SetBinError(5,0.6973809);
   hnueCCinFV_stack_13->SetBinError(6,0.85338);
   hnueCCinFV_stack_13->SetBinError(7,0.6648272);
   hnueCCinFV_stack_13->SetBinError(8,0.5572556);
   hnueCCinFV_stack_13->SetBinError(9,1.353507);
   hnueCCinFV_stack_13->SetBinError(10,0.5979562);
   hnueCCinFV_stack_13->SetBinError(11,0.4325931);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(14,0.4693692);
   hnueCCinFV_stack_13->SetBinError(15,0.4383379);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.3025491);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,1.075993);
   hnueCCinFV_stack_13->SetBinError(21,0.6942983);
   hnueCCinFV_stack_13->SetBinError(22,0.48078);
   hnueCCinFV_stack_13->SetBinError(23,0.5566696);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__11->SetBinContent(1,91.00262);
   hmcerror__11->SetBinContent(2,223.8472);
   hmcerror__11->SetBinContent(3,324.5754);
   hmcerror__11->SetBinContent(4,365.8001);
   hmcerror__11->SetBinContent(5,355.6015);
   hmcerror__11->SetBinContent(6,332.6075);
   hmcerror__11->SetBinContent(7,298.7488);
   hmcerror__11->SetBinContent(8,273.8221);
   hmcerror__11->SetBinContent(9,217.8817);
   hmcerror__11->SetBinContent(10,184.5813);
   hmcerror__11->SetBinContent(11,151.7384);
   hmcerror__11->SetBinContent(12,124.8138);
   hmcerror__11->SetBinContent(13,110.72);
   hmcerror__11->SetBinContent(14,80.05804);
   hmcerror__11->SetBinContent(15,83.5575);
   hmcerror__11->SetBinContent(16,76.63553);
   hmcerror__11->SetBinContent(17,72.72208);
   hmcerror__11->SetBinContent(18,65.97916);
   hmcerror__11->SetBinContent(19,65.97188);
   hmcerror__11->SetBinContent(20,57.64604);
   hmcerror__11->SetBinContent(21,54.29031);
   hmcerror__11->SetBinContent(22,47.94758);
   hmcerror__11->SetBinContent(23,36.69617);
   hmcerror__11->SetBinContent(24,24.78654);
   hmcerror__11->SetBinContent(25,7.428654);
   hmcerror__11->SetBinError(1,34.34415);
   hmcerror__11->SetBinError(2,60.95596);
   hmcerror__11->SetBinError(3,78.65968);
   hmcerror__11->SetBinError(4,97.64345);
   hmcerror__11->SetBinError(5,84.28044);
   hmcerror__11->SetBinError(6,85.20598);
   hmcerror__11->SetBinError(7,76.65997);
   hmcerror__11->SetBinError(8,77.25779);
   hmcerror__11->SetBinError(9,59.55758);
   hmcerror__11->SetBinError(10,48.22218);
   hmcerror__11->SetBinError(11,37.44447);
   hmcerror__11->SetBinError(12,30.325);
   hmcerror__11->SetBinError(13,35.21627);
   hmcerror__11->SetBinError(14,23.34638);
   hmcerror__11->SetBinError(15,23.86918);
   hmcerror__11->SetBinError(16,25.64566);
   hmcerror__11->SetBinError(17,20.68032);
   hmcerror__11->SetBinError(18,25.56708);
   hmcerror__11->SetBinError(19,25.30257);
   hmcerror__11->SetBinError(20,20.0839);
   hmcerror__11->SetBinError(21,21.94603);
   hmcerror__11->SetBinError(22,18.18795);
   hmcerror__11->SetBinError(23,18.08062);
   hmcerror__11->SetBinError(24,13.51496);
   hmcerror__11->SetBinError(25,5.987643);
   hmcerror__11->SetBinError(26,0.3895343);
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
   
   Double_t _fx3013[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3013[25] = {
   86,
   210,
   360,
   379,
   405,
   342,
   298,
   255,
   220,
   171,
   135,
   117,
   104,
   107,
   88,
   79,
   80,
   61,
   69,
   75,
   57,
   58,
   34,
   25,
   8};
   Double_t _felx3013[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3013[25] = {
   9.3967,
   14.49138,
   18.97367,
   19.46792,
   20.12461,
   18.49324,
   17.26268,
   15.96872,
   14.8324,
   13.0767,
   11.61895,
   10.81665,
   10.19804,
   10.34408,
   9.5036,
   9.0124,
   9.0683,
   7.9383,
   8.4327,
   8.7852,
   7.679,
   7.7446,
   5.9703,
   5.1474,
   3.0307};
   Double_t _fehx3013[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3013[25] = {
   9.1951,
   14.49138,
   18.97367,
   19.46792,
   20.12461,
   18.49324,
   17.26268,
   15.96872,
   14.8324,
   13.0767,
   11.61895,
   10.81665,
   10.19804,
   10.34408,
   9.3021,
   8.8105,
   8.8665,
   7.7354,
   8.2304,
   8.5831,
   7.4757,
   7.5415,
   5.7635,
   4.9374,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(4.47237);
   Graph_Graph3013->SetMaximum(467.1401);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3014[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3014[25] = {
   0.3773974,
   0.2723106,
   0.2423464,
   0.2669312,
   0.2370081,
   0.2561758,
   0.2566034,
   0.2821459,
   0.2733482,
   0.2612517,
   0.2467699,
   0.2429618,
   0.318066,
   0.2916182,
   0.2856618,
   0.3346446,
   0.2843747,
   0.3875024,
   0.3835357,
   0.3484003,
   0.4042347,
   0.3793298,
   0.4927112,
   0.5452541,
   0.8060199};
   Double_t _fehx3014[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3014[25] = {
   0.3773974,
   0.2723106,
   0.2423464,
   0.2669312,
   0.2370081,
   0.2561758,
   0.2566034,
   0.2821459,
   0.2733482,
   0.2612517,
   0.2467699,
   0.2429618,
   0.318066,
   0.2916182,
   0.2856618,
   0.3346446,
   0.2843747,
   0.3875024,
   0.3835357,
   0.3484003,
   0.4042347,
   0.3793298,
   0.4927112,
   0.5452541,
   0.8060199};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,3.465);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3015[25] = {
   0.2418544,
   0.2235345,
   0.212934,
   0.2048784,
   0.2085413,
   0.2142826,
   0.2211467,
   0.2229899,
   0.2305481,
   0.2229236,
   0.2078185,
   0.2019026,
   0.2082919,
   0.2099567,
   0.2141269,
   0.2165669,
   0.1974383,
   0.1952302,
   0.2120712,
   0.2035685,
   0.2068707,
   0.218478,
   0.2320814,
   0.2252019,
   0.3095965};
   Double_t _fehx3015[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3015[25] = {
   0.2418544,
   0.2235345,
   0.212934,
   0.2048784,
   0.2085413,
   0.2142826,
   0.2211467,
   0.2229899,
   0.2305481,
   0.2229236,
   0.2078185,
   0.2019026,
   0.2082919,
   0.2099567,
   0.2141269,
   0.2165669,
   0.1974383,
   0.1952302,
   0.2120712,
   0.2035685,
   0.2068707,
   0.218478,
   0.2320814,
   0.2252019,
   0.3095965};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,3.465);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3016[25] = {
   0.9450277,
   0.9381399,
   1.109141,
   1.036085,
   1.138915,
   1.028239,
   0.9974934,
   0.9312616,
   1.009722,
   0.9264209,
   0.8896893,
   0.9373961,
   0.9393063,
   1.33653,
   1.053167,
   1.030853,
   1.100079,
   0.9245344,
   1.0459,
   1.301043,
   1.049911,
   1.209654,
   0.9265271,
   1.008612,
   1.076911};
   Double_t _felx3016[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3016[25] = {
   0.1032575,
   0.0647378,
   0.05845688,
   0.05322011,
   0.05659316,
   0.0556008,
   0.05778324,
   0.05831787,
   0.06807545,
   0.07084518,
   0.07657226,
   0.0866623,
   0.09210656,
   0.1292073,
   0.1137373,
   0.1176008,
   0.124698,
   0.1203153,
   0.1278226,
   0.152399,
   0.1414433,
   0.1615222,
   0.1626954,
   0.2076692,
   0.4079743};
   Double_t _fehx3016[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3016[25] = {
   0.1010421,
   0.0647378,
   0.05845688,
   0.05322011,
   0.05659316,
   0.0556008,
   0.05778324,
   0.05831787,
   0.06807545,
   0.07084518,
   0.07657226,
   0.0866623,
   0.09210656,
   0.1292073,
   0.1113257,
   0.1149663,
   0.1219231,
   0.1172401,
   0.1247562,
   0.1488931,
   0.1376986,
   0.1572863,
   0.15706,
   0.1991968,
   0.3755189};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.5892567);
   Graph_Graph3016->SetMaximum(1.545418);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
