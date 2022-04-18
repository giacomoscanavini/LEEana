#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr 15 13:02:45 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-58.22,1692.308,4905.801);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic1_bnb_10_visible_energy_all",20,0,1500);
   hmc__4->SetBinContent(1,916.9945);
   hmc__4->SetBinContent(2,2805.893);
   hmc__4->SetBinContent(3,2758.447);
   hmc__4->SetBinContent(4,2411.151);
   hmc__4->SetBinContent(5,2025.816);
   hmc__4->SetBinContent(6,1691.053);
   hmc__4->SetBinContent(7,1380.447);
   hmc__4->SetBinContent(8,1076.326);
   hmc__4->SetBinContent(9,815.5287);
   hmc__4->SetBinContent(10,613.6287);
   hmc__4->SetBinContent(11,446.8651);
   hmc__4->SetBinContent(12,338.4612);
   hmc__4->SetBinContent(13,259.3586);
   hmc__4->SetBinContent(14,188.0346);
   hmc__4->SetBinContent(15,145.7811);
   hmc__4->SetBinContent(16,114.4895);
   hmc__4->SetBinContent(17,85.03551);
   hmc__4->SetBinContent(18,65.87015);
   hmc__4->SetBinContent(19,55.57323);
   hmc__4->SetBinContent(20,44.62876);
   hmc__4->SetBinContent(21,269.8924);
   hmc__4->SetBinError(1,131.3223);
   hmc__4->SetBinError(2,423.063);
   hmc__4->SetBinError(3,392.7406);
   hmc__4->SetBinError(4,332.1115);
   hmc__4->SetBinError(5,276.4207);
   hmc__4->SetBinError(6,234.4735);
   hmc__4->SetBinError(7,204.2413);
   hmc__4->SetBinError(8,170.9891);
   hmc__4->SetBinError(9,142.0944);
   hmc__4->SetBinError(10,118.7535);
   hmc__4->SetBinError(11,92.60609);
   hmc__4->SetBinError(12,76.02732);
   hmc__4->SetBinError(13,65.20372);
   hmc__4->SetBinError(14,50.36353);
   hmc__4->SetBinError(15,31.9979);
   hmc__4->SetBinError(16,38.43264);
   hmc__4->SetBinError(17,22.32854);
   hmc__4->SetBinError(18,16.25091);
   hmc__4->SetBinError(19,17.11335);
   hmc__4->SetBinError(20,11.25564);
   hmc__4->SetBinError(21,68.76482);
   hmc__4->SetMinimum(-58.22);
   hmc__4->SetMaximum(4657.6);
   hmc__4->SetEntries(16480.37);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(2946.188);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic1_bnb_10_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,127.7718);
   hbadmatch_stack_1->SetBinContent(2,154.8663);
   hbadmatch_stack_1->SetBinContent(3,85.07374);
   hbadmatch_stack_1->SetBinContent(4,45.81228);
   hbadmatch_stack_1->SetBinContent(5,26.39269);
   hbadmatch_stack_1->SetBinContent(6,18.76687);
   hbadmatch_stack_1->SetBinContent(7,10.9924);
   hbadmatch_stack_1->SetBinContent(8,9.740888);
   hbadmatch_stack_1->SetBinContent(9,6.218387);
   hbadmatch_stack_1->SetBinContent(10,3.946657);
   hbadmatch_stack_1->SetBinContent(11,2.422035);
   hbadmatch_stack_1->SetBinContent(12,1.951329);
   hbadmatch_stack_1->SetBinContent(13,1.017135);
   hbadmatch_stack_1->SetBinContent(14,0.8902993);
   hbadmatch_stack_1->SetBinContent(15,0.4173167);
   hbadmatch_stack_1->SetBinContent(16,0.8844687);
   hbadmatch_stack_1->SetBinContent(17,0.1431325);
   hbadmatch_stack_1->SetBinContent(18,0.1749718);
   hbadmatch_stack_1->SetBinContent(19,0.181358);
   hbadmatch_stack_1->SetBinContent(20,0.3079886);
   hbadmatch_stack_1->SetBinContent(21,2.684245);
   hbadmatch_stack_1->SetBinError(1,3.293257);
   hbadmatch_stack_1->SetBinError(2,3.782186);
   hbadmatch_stack_1->SetBinError(3,2.612783);
   hbadmatch_stack_1->SetBinError(4,1.860553);
   hbadmatch_stack_1->SetBinError(5,1.326238);
   hbadmatch_stack_1->SetBinError(6,1.340206);
   hbadmatch_stack_1->SetBinError(7,0.9315055);
   hbadmatch_stack_1->SetBinError(8,0.8421157);
   hbadmatch_stack_1->SetBinError(9,0.8096904);
   hbadmatch_stack_1->SetBinError(10,0.5662322);
   hbadmatch_stack_1->SetBinError(11,0.3583057);
   hbadmatch_stack_1->SetBinError(12,0.3746694);
   hbadmatch_stack_1->SetBinError(13,0.2257266);
   hbadmatch_stack_1->SetBinError(14,0.2236737);
   hbadmatch_stack_1->SetBinError(15,0.1454073);
   hbadmatch_stack_1->SetBinError(16,0.2957206);
   hbadmatch_stack_1->SetBinError(17,0.09302988);
   hbadmatch_stack_1->SetBinError(18,0.09125479);
   hbadmatch_stack_1->SetBinError(19,0.1025354);
   hbadmatch_stack_1->SetBinError(20,0.135612);
   hbadmatch_stack_1->SetBinError(21,0.4030911);
   hbadmatch_stack_1->SetEntries(12616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic1_bnb_10_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,309.5052);
   hext_stack_2->SetBinContent(2,461.2126);
   hext_stack_2->SetBinContent(3,311.1382);
   hext_stack_2->SetBinContent(4,214.2098);
   hext_stack_2->SetBinContent(5,171.9108);
   hext_stack_2->SetBinContent(6,145.8246);
   hext_stack_2->SetBinContent(7,144.5623);
   hext_stack_2->SetBinContent(8,109.2612);
   hext_stack_2->SetBinContent(9,68.34312);
   hext_stack_2->SetBinContent(10,45.79885);
   hext_stack_2->SetBinContent(11,31.18789);
   hext_stack_2->SetBinContent(12,23.16596);
   hext_stack_2->SetBinContent(13,16.48284);
   hext_stack_2->SetBinContent(14,12.35054);
   hext_stack_2->SetBinContent(15,9.866523);
   hext_stack_2->SetBinContent(16,8.105083);
   hext_stack_2->SetBinContent(17,6.068244);
   hext_stack_2->SetBinContent(18,5.13708);
   hext_stack_2->SetBinContent(19,3.817355);
   hext_stack_2->SetBinContent(20,3.920977);
   hext_stack_2->SetBinContent(21,56.10024);
   hext_stack_2->SetBinError(1,7.294345);
   hext_stack_2->SetBinError(2,8.764597);
   hext_stack_2->SetBinError(3,7.12296);
   hext_stack_2->SetBinError(4,5.850626);
   hext_stack_2->SetBinError(5,5.304158);
   hext_stack_2->SetBinError(6,4.912573);
   hext_stack_2->SetBinError(7,4.963706);
   hext_stack_2->SetBinError(8,4.34184);
   hext_stack_2->SetBinError(9,3.419738);
   hext_stack_2->SetBinError(10,2.801585);
   hext_stack_2->SetBinError(11,2.316151);
   hext_stack_2->SetBinError(12,1.991203);
   hext_stack_2->SetBinError(13,1.663593);
   hext_stack_2->SetBinError(14,1.443886);
   hext_stack_2->SetBinError(15,1.282719);
   hext_stack_2->SetBinError(16,1.167694);
   hext_stack_2->SetBinError(17,1.001954);
   hext_stack_2->SetBinError(18,0.9185719);
   hext_stack_2->SetBinError(19,0.7532156);
   hext_stack_2->SetBinError(20,0.8018489);
   hext_stack_2->SetBinError(21,3.039628);
   hext_stack_2->SetEntries(39405);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic1_bnb_10_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,118.0297);
   hdirt_stack_3->SetBinContent(2,175.4449);
   hdirt_stack_3->SetBinContent(3,102.8647);
   hdirt_stack_3->SetBinContent(4,59.56447);
   hdirt_stack_3->SetBinContent(5,36.77753);
   hdirt_stack_3->SetBinContent(6,28.04942);
   hdirt_stack_3->SetBinContent(7,18.5642);
   hdirt_stack_3->SetBinContent(8,13.45786);
   hdirt_stack_3->SetBinContent(9,10.57134);
   hdirt_stack_3->SetBinContent(10,8.15887);
   hdirt_stack_3->SetBinContent(11,7.631794);
   hdirt_stack_3->SetBinContent(12,4.519668);
   hdirt_stack_3->SetBinContent(13,4.404264);
   hdirt_stack_3->SetBinContent(14,3.023514);
   hdirt_stack_3->SetBinContent(15,2.410551);
   hdirt_stack_3->SetBinContent(16,1.956434);
   hdirt_stack_3->SetBinContent(17,2.608025);
   hdirt_stack_3->SetBinContent(18,1.391166);
   hdirt_stack_3->SetBinContent(19,1.672679);
   hdirt_stack_3->SetBinContent(20,1.640836);
   hdirt_stack_3->SetBinContent(21,10.05123);
   hdirt_stack_3->SetBinError(1,2.745408);
   hdirt_stack_3->SetBinError(2,3.368055);
   hdirt_stack_3->SetBinError(3,2.815579);
   hdirt_stack_3->SetBinError(4,2.025623);
   hdirt_stack_3->SetBinError(5,1.537695);
   hdirt_stack_3->SetBinError(6,1.348497);
   hdirt_stack_3->SetBinError(7,1.015495);
   hdirt_stack_3->SetBinError(8,0.8747214);
   hdirt_stack_3->SetBinError(9,0.8854829);
   hdirt_stack_3->SetBinError(10,0.8178771);
   hdirt_stack_3->SetBinError(11,0.926205);
   hdirt_stack_3->SetBinError(12,0.5857929);
   hdirt_stack_3->SetBinError(13,0.553977);
   hdirt_stack_3->SetBinError(14,0.3535364);
   hdirt_stack_3->SetBinError(15,0.3314879);
   hdirt_stack_3->SetBinError(16,0.2769384);
   hdirt_stack_3->SetBinError(17,0.5132018);
   hdirt_stack_3->SetBinError(18,0.2457802);
   hdirt_stack_3->SetBinError(19,0.3629915);
   hdirt_stack_3->SetBinError(20,0.3954704);
   hdirt_stack_3->SetBinError(21,0.7024434);
   hdirt_stack_3->SetEntries(20994);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic1_bnb_10_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,99.49934);
   houtFV_stack_4->SetBinContent(2,286.5773);
   houtFV_stack_4->SetBinContent(3,189.871);
   houtFV_stack_4->SetBinContent(4,129.5431);
   houtFV_stack_4->SetBinContent(5,85.37587);
   houtFV_stack_4->SetBinContent(6,63.76958);
   houtFV_stack_4->SetBinContent(7,41.90964);
   houtFV_stack_4->SetBinContent(8,35.78949);
   houtFV_stack_4->SetBinContent(9,25.71902);
   houtFV_stack_4->SetBinContent(10,19.11033);
   houtFV_stack_4->SetBinContent(11,17.9745);
   houtFV_stack_4->SetBinContent(12,11.77048);
   houtFV_stack_4->SetBinContent(13,7.994345);
   houtFV_stack_4->SetBinContent(14,6.423326);
   houtFV_stack_4->SetBinContent(15,6.28838);
   houtFV_stack_4->SetBinContent(16,3.583325);
   houtFV_stack_4->SetBinContent(17,2.709847);
   houtFV_stack_4->SetBinContent(18,2.403757);
   houtFV_stack_4->SetBinContent(19,1.49626);
   houtFV_stack_4->SetBinContent(20,2.299469);
   houtFV_stack_4->SetBinContent(21,9.747275);
   houtFV_stack_4->SetBinError(1,2.399021);
   houtFV_stack_4->SetBinError(2,4.424736);
   houtFV_stack_4->SetBinError(3,3.680024);
   houtFV_stack_4->SetBinError(4,3.114603);
   houtFV_stack_4->SetBinError(5,2.428161);
   houtFV_stack_4->SetBinError(6,2.708931);
   houtFV_stack_4->SetBinError(7,1.915962);
   houtFV_stack_4->SetBinError(8,1.876307);
   houtFV_stack_4->SetBinError(9,1.605854);
   houtFV_stack_4->SetBinError(10,1.420984);
   houtFV_stack_4->SetBinError(11,1.871708);
   houtFV_stack_4->SetBinError(12,1.288898);
   houtFV_stack_4->SetBinError(13,0.7890638);
   houtFV_stack_4->SetBinError(14,0.6074146);
   houtFV_stack_4->SetBinError(15,0.8339025);
   houtFV_stack_4->SetBinError(16,0.5487683);
   houtFV_stack_4->SetBinError(17,0.4373896);
   houtFV_stack_4->SetBinError(18,0.3947214);
   houtFV_stack_4->SetBinError(19,0.2856745);
   houtFV_stack_4->SetBinError(20,0.4928446);
   houtFV_stack_4->SetBinError(21,1.187643);
   houtFV_stack_4->SetEntries(25917);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic1_bnb_10_visible_energy_all",20,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(1,54.22872);
   hNCpi0inFV_stack_5->SetBinContent(2,203.4742);
   hNCpi0inFV_stack_5->SetBinContent(3,146.447);
   hNCpi0inFV_stack_5->SetBinContent(4,87.20241);
   hNCpi0inFV_stack_5->SetBinContent(5,50.58901);
   hNCpi0inFV_stack_5->SetBinContent(6,36.2408);
   hNCpi0inFV_stack_5->SetBinContent(7,23.82778);
   hNCpi0inFV_stack_5->SetBinContent(8,16.20233);
   hNCpi0inFV_stack_5->SetBinContent(9,11.32989);
   hNCpi0inFV_stack_5->SetBinContent(10,8.610466);
   hNCpi0inFV_stack_5->SetBinContent(11,6.162388);
   hNCpi0inFV_stack_5->SetBinContent(12,4.677419);
   hNCpi0inFV_stack_5->SetBinContent(13,3.363587);
   hNCpi0inFV_stack_5->SetBinContent(14,2.682067);
   hNCpi0inFV_stack_5->SetBinContent(15,2.330446);
   hNCpi0inFV_stack_5->SetBinContent(16,1.780205);
   hNCpi0inFV_stack_5->SetBinContent(17,1.887779);
   hNCpi0inFV_stack_5->SetBinContent(18,1.259055);
   hNCpi0inFV_stack_5->SetBinContent(19,0.9711843);
   hNCpi0inFV_stack_5->SetBinContent(20,0.8727722);
   hNCpi0inFV_stack_5->SetBinContent(21,7.082572);
   hNCpi0inFV_stack_5->SetBinError(1,1.704405);
   hNCpi0inFV_stack_5->SetBinError(2,3.314263);
   hNCpi0inFV_stack_5->SetBinError(3,2.823988);
   hNCpi0inFV_stack_5->SetBinError(4,2.159443);
   hNCpi0inFV_stack_5->SetBinError(5,1.641267);
   hNCpi0inFV_stack_5->SetBinError(6,1.39814);
   hNCpi0inFV_stack_5->SetBinError(7,1.144952);
   hNCpi0inFV_stack_5->SetBinError(8,0.939882);
   hNCpi0inFV_stack_5->SetBinError(9,0.7796471);
   hNCpi0inFV_stack_5->SetBinError(10,0.6814785);
   hNCpi0inFV_stack_5->SetBinError(11,0.5758539);
   hNCpi0inFV_stack_5->SetBinError(12,0.5077389);
   hNCpi0inFV_stack_5->SetBinError(13,0.4207446);
   hNCpi0inFV_stack_5->SetBinError(14,0.3671533);
   hNCpi0inFV_stack_5->SetBinError(15,0.3480983);
   hNCpi0inFV_stack_5->SetBinError(16,0.3096208);
   hNCpi0inFV_stack_5->SetBinError(17,0.3308037);
   hNCpi0inFV_stack_5->SetBinError(18,0.2546198);
   hNCpi0inFV_stack_5->SetBinError(19,0.2280678);
   hNCpi0inFV_stack_5->SetBinError(20,0.211336);
   hNCpi0inFV_stack_5->SetBinError(21,0.6188476);
   hNCpi0inFV_stack_5->SetEntries(17673);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic1_bnb_10_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(1,7.621804);
   hCCpi0inFV_stack_6->SetBinContent(2,76.81668);
   hCCpi0inFV_stack_6->SetBinContent(3,132.2113);
   hCCpi0inFV_stack_6->SetBinContent(4,160.8334);
   hCCpi0inFV_stack_6->SetBinContent(5,159.6706);
   hCCpi0inFV_stack_6->SetBinContent(6,144.7349);
   hCCpi0inFV_stack_6->SetBinContent(7,133.6459);
   hCCpi0inFV_stack_6->SetBinContent(8,108.5496);
   hCCpi0inFV_stack_6->SetBinContent(9,92.9894);
   hCCpi0inFV_stack_6->SetBinContent(10,69.61064);
   hCCpi0inFV_stack_6->SetBinContent(11,53.16405);
   hCCpi0inFV_stack_6->SetBinContent(12,43.05064);
   hCCpi0inFV_stack_6->SetBinContent(13,31.88265);
   hCCpi0inFV_stack_6->SetBinContent(14,25.84696);
   hCCpi0inFV_stack_6->SetBinContent(15,21.25163);
   hCCpi0inFV_stack_6->SetBinContent(16,17.66136);
   hCCpi0inFV_stack_6->SetBinContent(17,13.16459);
   hCCpi0inFV_stack_6->SetBinContent(18,12.64396);
   hCCpi0inFV_stack_6->SetBinContent(19,9.646481);
   hCCpi0inFV_stack_6->SetBinContent(20,9.275493);
   hCCpi0inFV_stack_6->SetBinContent(21,62.08278);
   hCCpi0inFV_stack_6->SetBinError(1,0.6330618);
   hCCpi0inFV_stack_6->SetBinError(2,2.041041);
   hCCpi0inFV_stack_6->SetBinError(3,2.674599);
   hCCpi0inFV_stack_6->SetBinError(4,2.953366);
   hCCpi0inFV_stack_6->SetBinError(5,2.938116);
   hCCpi0inFV_stack_6->SetBinError(6,2.800464);
   hCCpi0inFV_stack_6->SetBinError(7,2.699);
   hCCpi0inFV_stack_6->SetBinError(8,2.426422);
   hCCpi0inFV_stack_6->SetBinError(9,2.256435);
   hCCpi0inFV_stack_6->SetBinError(10,1.944939);
   hCCpi0inFV_stack_6->SetBinError(11,1.687799);
   hCCpi0inFV_stack_6->SetBinError(12,1.517085);
   hCCpi0inFV_stack_6->SetBinError(13,1.301978);
   hCCpi0inFV_stack_6->SetBinError(14,1.179749);
   hCCpi0inFV_stack_6->SetBinError(15,1.068803);
   hCCpi0inFV_stack_6->SetBinError(16,0.9756547);
   hCCpi0inFV_stack_6->SetBinError(17,0.8381392);
   hCCpi0inFV_stack_6->SetBinError(18,0.8227568);
   hCCpi0inFV_stack_6->SetBinError(19,0.7201076);
   hCCpi0inFV_stack_6->SetBinError(20,0.7112124);
   hCCpi0inFV_stack_6->SetBinError(21,1.825517);
   hCCpi0inFV_stack_6->SetEntries(36603);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic1_bnb_10_visible_energy_all",20,0,1500);
   hNCinFV_stack_7->SetBinContent(1,55.60061);
   hNCinFV_stack_7->SetBinContent(2,434.1741);
   hNCinFV_stack_7->SetBinContent(3,287.5566);
   hNCinFV_stack_7->SetBinContent(4,150.4997);
   hNCinFV_stack_7->SetBinContent(5,84.86325);
   hNCinFV_stack_7->SetBinContent(6,48.75693);
   hNCinFV_stack_7->SetBinContent(7,27.79283);
   hNCinFV_stack_7->SetBinContent(8,14.8301);
   hNCinFV_stack_7->SetBinContent(9,11.22052);
   hNCinFV_stack_7->SetBinContent(10,5.047174);
   hNCinFV_stack_7->SetBinContent(11,4.638429);
   hNCinFV_stack_7->SetBinContent(12,2.973715);
   hNCinFV_stack_7->SetBinContent(13,1.656293);
   hNCinFV_stack_7->SetBinContent(14,1.767455);
   hNCinFV_stack_7->SetBinContent(15,1.122392);
   hNCinFV_stack_7->SetBinContent(16,1.009435);
   hNCinFV_stack_7->SetBinContent(17,0.6741531);
   hNCinFV_stack_7->SetBinContent(18,0.6341078);
   hNCinFV_stack_7->SetBinContent(19,0.4609891);
   hNCinFV_stack_7->SetBinContent(20,0.3097815);
   hNCinFV_stack_7->SetBinContent(21,1.829412);
   hNCinFV_stack_7->SetBinError(1,1.724565);
   hNCinFV_stack_7->SetBinError(2,4.832545);
   hNCinFV_stack_7->SetBinError(3,3.929015);
   hNCinFV_stack_7->SetBinError(4,2.844727);
   hNCinFV_stack_7->SetBinError(5,2.137836);
   hNCinFV_stack_7->SetBinError(6,1.619144);
   hNCinFV_stack_7->SetBinError(7,1.223377);
   hNCinFV_stack_7->SetBinError(8,0.8879556);
   hNCinFV_stack_7->SetBinError(9,0.7728578);
   hNCinFV_stack_7->SetBinError(10,0.5123605);
   hNCinFV_stack_7->SetBinError(11,0.4951688);
   hNCinFV_stack_7->SetBinError(12,0.4036201);
   hNCinFV_stack_7->SetBinError(13,0.2969644);
   hNCinFV_stack_7->SetBinError(14,0.3093581);
   hNCinFV_stack_7->SetBinError(15,0.2387289);
   hNCinFV_stack_7->SetBinError(16,0.2291346);
   hNCinFV_stack_7->SetBinError(17,0.1816166);
   hNCinFV_stack_7->SetBinError(18,0.1884745);
   hNCinFV_stack_7->SetBinError(19,0.1554653);
   hNCinFV_stack_7->SetBinError(20,0.1385385);
   hNCinFV_stack_7->SetBinError(21,0.3155012);
   hNCinFV_stack_7->SetEntries(30232);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic1_bnb_10_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(1,144.1962);
   hnumuCCinFV_stack_8->SetBinContent(2,1009.334);
   hnumuCCinFV_stack_8->SetBinContent(3,1497.9);
   hnumuCCinFV_stack_8->SetBinContent(4,1557.115);
   hnumuCCinFV_stack_8->SetBinContent(5,1404.851);
   hnumuCCinFV_stack_8->SetBinContent(6,1198.214);
   hnumuCCinFV_stack_8->SetBinContent(7,974.1044);
   hnumuCCinFV_stack_8->SetBinContent(8,762.4193);
   hnumuCCinFV_stack_8->SetBinContent(9,584.6649);
   hnumuCCinFV_stack_8->SetBinContent(10,448.7614);
   hnumuCCinFV_stack_8->SetBinContent(11,319.3638);
   hnumuCCinFV_stack_8->SetBinContent(12,243.5744);
   hnumuCCinFV_stack_8->SetBinContent(13,189.518);
   hnumuCCinFV_stack_8->SetBinContent(14,131.2925);
   hnumuCCinFV_stack_8->SetBinContent(15,99.47243);
   hnumuCCinFV_stack_8->SetBinContent(16,77.85879);
   hnumuCCinFV_stack_8->SetBinContent(17,56.01728);
   hnumuCCinFV_stack_8->SetBinContent(18,40.6626);
   hnumuCCinFV_stack_8->SetBinContent(19,36.40429);
   hnumuCCinFV_stack_8->SetBinContent(20,24.72046);
   hnumuCCinFV_stack_8->SetBinContent(21,109.3823);
   hnumuCCinFV_stack_8->SetBinError(1,3.837769);
   hnumuCCinFV_stack_8->SetBinError(2,10.66483);
   hnumuCCinFV_stack_8->SetBinError(3,12.69331);
   hnumuCCinFV_stack_8->SetBinError(4,12.49828);
   hnumuCCinFV_stack_8->SetBinError(5,11.65473);
   hnumuCCinFV_stack_8->SetBinError(6,10.97656);
   hnumuCCinFV_stack_8->SetBinError(7,10.02828);
   hnumuCCinFV_stack_8->SetBinError(8,9.018283);
   hnumuCCinFV_stack_8->SetBinError(9,7.875485);
   hnumuCCinFV_stack_8->SetBinError(10,7.24324);
   hnumuCCinFV_stack_8->SetBinError(11,5.887397);
   hnumuCCinFV_stack_8->SetBinError(12,5.531403);
   hnumuCCinFV_stack_8->SetBinError(13,5.176051);
   hnumuCCinFV_stack_8->SetBinError(14,3.928933);
   hnumuCCinFV_stack_8->SetBinError(15,3.563414);
   hnumuCCinFV_stack_8->SetBinError(16,3.26048);
   hnumuCCinFV_stack_8->SetBinError(17,2.714529);
   hnumuCCinFV_stack_8->SetBinError(18,2.186882);
   hnumuCCinFV_stack_8->SetBinError(19,2.368332);
   hnumuCCinFV_stack_8->SetBinError(20,1.608025);
   hnumuCCinFV_stack_8->SetBinError(21,3.605576);
   hnumuCCinFV_stack_8->SetEntries(241660);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic1_bnb_10_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_9->SetBinContent(1,0.5411321);
   hnueCCinFV_stack_9->SetBinContent(2,3.992967);
   hnueCCinFV_stack_9->SetBinContent(3,5.384509);
   hnueCCinFV_stack_9->SetBinContent(4,6.370781);
   hnueCCinFV_stack_9->SetBinContent(5,5.385356);
   hnueCCinFV_stack_9->SetBinContent(6,6.695815);
   hnueCCinFV_stack_9->SetBinContent(7,5.047748);
   hnueCCinFV_stack_9->SetBinContent(8,6.074875);
   hnueCCinFV_stack_9->SetBinContent(9,4.472234);
   hnueCCinFV_stack_9->SetBinContent(10,4.584186);
   hnueCCinFV_stack_9->SetBinContent(11,4.320211);
   hnueCCinFV_stack_9->SetBinContent(12,2.777619);
   hnueCCinFV_stack_9->SetBinContent(13,3.039522);
   hnueCCinFV_stack_9->SetBinContent(14,3.757913);
   hnueCCinFV_stack_9->SetBinContent(15,2.621452);
   hnueCCinFV_stack_9->SetBinContent(16,1.650398);
   hnueCCinFV_stack_9->SetBinContent(17,1.762469);
   hnueCCinFV_stack_9->SetBinContent(18,1.563455);
   hnueCCinFV_stack_9->SetBinContent(19,0.9226351);
   hnueCCinFV_stack_9->SetBinContent(20,1.280983);
   hnueCCinFV_stack_9->SetBinContent(21,10.93236);
   hnueCCinFV_stack_9->SetBinError(1,0.2048235);
   hnueCCinFV_stack_9->SetBinError(2,0.5351671);
   hnueCCinFV_stack_9->SetBinError(3,0.5784799);
   hnueCCinFV_stack_9->SetBinError(4,0.7431926);
   hnueCCinFV_stack_9->SetBinError(5,0.7260231);
   hnueCCinFV_stack_9->SetBinError(6,0.7473263);
   hnueCCinFV_stack_9->SetBinError(7,0.5464091);
   hnueCCinFV_stack_9->SetBinError(8,0.9257633);
   hnueCCinFV_stack_9->SetBinError(9,0.5078079);
   hnueCCinFV_stack_9->SetBinError(10,0.6452787);
   hnueCCinFV_stack_9->SetBinError(11,0.7269798);
   hnueCCinFV_stack_9->SetBinError(12,0.4195975);
   hnueCCinFV_stack_9->SetBinError(13,0.4122984);
   hnueCCinFV_stack_9->SetBinError(14,0.9136699);
   hnueCCinFV_stack_9->SetBinError(15,0.7184766);
   hnueCCinFV_stack_9->SetBinError(16,0.315287);
   hnueCCinFV_stack_9->SetBinError(17,0.3232825);
   hnueCCinFV_stack_9->SetBinError(18,0.3016783);
   hnueCCinFV_stack_9->SetBinError(19,0.215748);
   hnueCCinFV_stack_9->SetBinError(20,0.2707948);
   hnueCCinFV_stack_9->SetBinError(21,0.8733247);
   hnueCCinFV_stack_9->SetEntries(2003);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic1_bnb_10_visible_energy_all",20,0,1500);
   hmcerror__5->SetBinContent(1,916.9945);
   hmcerror__5->SetBinContent(2,2805.893);
   hmcerror__5->SetBinContent(3,2758.447);
   hmcerror__5->SetBinContent(4,2411.151);
   hmcerror__5->SetBinContent(5,2025.816);
   hmcerror__5->SetBinContent(6,1691.053);
   hmcerror__5->SetBinContent(7,1380.447);
   hmcerror__5->SetBinContent(8,1076.326);
   hmcerror__5->SetBinContent(9,815.5287);
   hmcerror__5->SetBinContent(10,613.6287);
   hmcerror__5->SetBinContent(11,446.8651);
   hmcerror__5->SetBinContent(12,338.4612);
   hmcerror__5->SetBinContent(13,259.3586);
   hmcerror__5->SetBinContent(14,188.0346);
   hmcerror__5->SetBinContent(15,145.7811);
   hmcerror__5->SetBinContent(16,114.4895);
   hmcerror__5->SetBinContent(17,85.03551);
   hmcerror__5->SetBinContent(18,65.87015);
   hmcerror__5->SetBinContent(19,55.57323);
   hmcerror__5->SetBinContent(20,44.62876);
   hmcerror__5->SetBinContent(21,269.8924);
   hmcerror__5->SetBinError(1,131.3223);
   hmcerror__5->SetBinError(2,423.063);
   hmcerror__5->SetBinError(3,392.7406);
   hmcerror__5->SetBinError(4,332.1115);
   hmcerror__5->SetBinError(5,276.4207);
   hmcerror__5->SetBinError(6,234.4735);
   hmcerror__5->SetBinError(7,204.2413);
   hmcerror__5->SetBinError(8,170.9891);
   hmcerror__5->SetBinError(9,142.0944);
   hmcerror__5->SetBinError(10,118.7535);
   hmcerror__5->SetBinError(11,92.60609);
   hmcerror__5->SetBinError(12,76.02732);
   hmcerror__5->SetBinError(13,65.20372);
   hmcerror__5->SetBinError(14,50.36353);
   hmcerror__5->SetBinError(15,31.9979);
   hmcerror__5->SetBinError(16,38.43264);
   hmcerror__5->SetBinError(17,22.32854);
   hmcerror__5->SetBinError(18,16.25091);
   hmcerror__5->SetBinError(19,17.11335);
   hmcerror__5->SetBinError(20,11.25564);
   hmcerror__5->SetBinError(21,68.76482);
   hmcerror__5->SetEntries(16480.37);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3005[20] = {
   1013,
   2886,
   2911,
   2598,
   2215,
   1787,
   1429,
   1086,
   744,
   561,
   407,
   297,
   210,
   149,
   133,
   89,
   65,
   54,
   56,
   31};
   Double_t _felx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3005[20] = {
   31.82766,
   53.7215,
   53.95368,
   50.97058,
   47.06379,
   42.27292,
   37.80212,
   32.95451,
   27.27636,
   23.68544,
   20.17424,
   17.23369,
   14.49138,
   12.20656,
   11.53256,
   9.5566,
   8.1893,
   7.4785,
   7.6127,
   5.7094};
   Double_t _fehx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3005[20] = {
   31.82766,
   53.7215,
   53.95368,
   50.97058,
   47.06379,
   42.27292,
   37.80212,
   32.95451,
   27.27636,
   23.68544,
   20.17424,
   17.23369,
   14.49138,
   12.20656,
   11.53256,
   9.3552,
   7.9866,
   7.275,
   7.4094,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(22.76154);
   Graph_Graph3005->SetMaximum(3258.92);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.03#pm0.01(data err)#pm0.13(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.99/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18721.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 498.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 2101.9","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 602.7","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1040.1","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  664.1","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1324.3","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1135.6","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10800.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 72.2","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("generic1_bnb_10_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3006[20] = {
   0.1432094,
   0.1507766,
   0.1423774,
   0.1377398,
   0.1364491,
   0.1386554,
   0.147953,
   0.1588638,
   0.1742359,
   0.1935266,
   0.207235,
   0.2246264,
   0.2514037,
   0.2678418,
   0.2194927,
   0.335687,
   0.262579,
   0.2467114,
   0.3079423,
   0.252206};
   Double_t _fehx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3006[20] = {
   0.1432094,
   0.1507766,
   0.1423774,
   0.1377398,
   0.1364491,
   0.1386554,
   0.147953,
   0.1588638,
   0.1742359,
   0.1935266,
   0.207235,
   0.2246264,
   0.2514037,
   0.2678418,
   0.2194927,
   0.335687,
   0.262579,
   0.2467114,
   0.3079423,
   0.252206};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3007[20] = {
   0.09830407,
   0.1282864,
   0.1317799,
   0.1335236,
   0.1347773,
   0.1365615,
   0.1414754,
   0.148341,
   0.1530707,
   0.1647851,
   0.1652415,
   0.1791695,
   0.1905123,
   0.1687501,
   0.1845689,
   0.1909955,
   0.1887719,
   0.1681379,
   0.1940542,
   0.1800249};
   Double_t _fehx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3007[20] = {
   0.09830407,
   0.1282864,
   0.1317799,
   0.1335236,
   0.1347773,
   0.1365615,
   0.1414754,
   0.148341,
   0.1530707,
   0.1647851,
   0.1652415,
   0.1791695,
   0.1905123,
   0.1687501,
   0.1845689,
   0.1909955,
   0.1887719,
   0.1681379,
   0.1940542,
   0.1800249};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3008[20] = {
   1.104696,
   1.02855,
   1.055304,
   1.077494,
   1.093387,
   1.056738,
   1.035172,
   1.008988,
   0.9122916,
   0.9142337,
   0.9107894,
   0.8775008,
   0.8096896,
   0.7924073,
   0.9123267,
   0.7773638,
   0.7643865,
   0.8197947,
   1.007679,
   0.6946194};
   Double_t _felx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3008[20] = {
   0.03470867,
   0.01914596,
   0.01955944,
   0.02113953,
   0.02323201,
   0.02499799,
   0.02738396,
   0.03061761,
   0.03344623,
   0.03859898,
   0.04514615,
   0.05091776,
   0.05587389,
   0.06491654,
   0.07910876,
   0.08347141,
   0.09630447,
   0.113534,
   0.136985,
   0.127931};
   Double_t _fehx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3008[20] = {
   0.03470867,
   0.01914596,
   0.01955944,
   0.02113953,
   0.02323201,
   0.02499799,
   0.02738396,
   0.03061761,
   0.03344623,
   0.03859898,
   0.04514615,
   0.05091776,
   0.05587389,
   0.06491654,
   0.07910876,
   0.0817123,
   0.09392076,
   0.1104446,
   0.1333268,
   0.123277};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.5092566);
   Graph_Graph3008->SetMaximum(1.198438);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic1_bnb_10_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
