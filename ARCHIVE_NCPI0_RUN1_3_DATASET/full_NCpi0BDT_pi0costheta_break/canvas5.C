#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Jun  3 14:43:15 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-19.32563,1692.308,2137.008);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hmc__13->SetBinContent(2,13.02281);
   hmc__13->SetBinContent(3,350.1371);
   hmc__13->SetBinContent(4,796.8124);
   hmc__13->SetBinContent(5,946.6638);
   hmc__13->SetBinContent(6,966.2816);
   hmc__13->SetBinContent(7,880.015);
   hmc__13->SetBinContent(8,732.7663);
   hmc__13->SetBinContent(9,625.5494);
   hmc__13->SetBinContent(10,465.2771);
   hmc__13->SetBinContent(11,362.782);
   hmc__13->SetBinContent(12,266.5583);
   hmc__13->SetBinContent(13,199.871);
   hmc__13->SetBinContent(14,156.5103);
   hmc__13->SetBinContent(15,107.483);
   hmc__13->SetBinContent(16,77.23801);
   hmc__13->SetBinContent(17,68.55099);
   hmc__13->SetBinContent(18,51.15833);
   hmc__13->SetBinContent(19,38.60855);
   hmc__13->SetBinContent(20,30.49935);
   hmc__13->SetBinContent(21,128.8132);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,4.939889);
   hmc__13->SetBinError(3,71.33238);
   hmc__13->SetBinError(4,169.3593);
   hmc__13->SetBinError(5,193.6652);
   hmc__13->SetBinError(6,201.8925);
   hmc__13->SetBinError(7,184.852);
   hmc__13->SetBinError(8,157.5378);
   hmc__13->SetBinError(9,136.3198);
   hmc__13->SetBinError(10,105.135);
   hmc__13->SetBinError(11,84.68427);
   hmc__13->SetBinError(12,65.61908);
   hmc__13->SetBinError(13,50.47978);
   hmc__13->SetBinError(14,44.9498);
   hmc__13->SetBinError(15,32.94654);
   hmc__13->SetBinError(16,24.18942);
   hmc__13->SetBinError(17,22.04056);
   hmc__13->SetBinError(18,19.99044);
   hmc__13->SetBinError(19,12.7652);
   hmc__13->SetBinError(20,14.48204);
   hmc__13->SetBinError(21,32.84643);
   hmc__13->SetMinimum(-19.32563);
   hmc__13->SetMaximum(2029.191);
   hmc__13->SetEntries(7171.878);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1500);
   hs5_stack_5->SetMinimum(-5.916779e-09);
   hs5_stack_5->SetMaximum(1014.596);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,11.61559);
   hbadmatch_stack_1->SetBinContent(4,25.5416);
   hbadmatch_stack_1->SetBinContent(5,20.60053);
   hbadmatch_stack_1->SetBinContent(6,20.78987);
   hbadmatch_stack_1->SetBinContent(7,19.97465);
   hbadmatch_stack_1->SetBinContent(8,16.46712);
   hbadmatch_stack_1->SetBinContent(9,14.71303);
   hbadmatch_stack_1->SetBinContent(10,8.641478);
   hbadmatch_stack_1->SetBinContent(11,12.0195);
   hbadmatch_stack_1->SetBinContent(12,6.43504);
   hbadmatch_stack_1->SetBinContent(13,5.208138);
   hbadmatch_stack_1->SetBinContent(14,5.164556);
   hbadmatch_stack_1->SetBinContent(15,2.929362);
   hbadmatch_stack_1->SetBinContent(16,0.9835768);
   hbadmatch_stack_1->SetBinContent(17,1.221135);
   hbadmatch_stack_1->SetBinContent(18,1.805704);
   hbadmatch_stack_1->SetBinContent(19,1.295998);
   hbadmatch_stack_1->SetBinContent(20,0.6475976);
   hbadmatch_stack_1->SetBinContent(21,3.348246);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.812208);
   hbadmatch_stack_1->SetBinError(4,3.315803);
   hbadmatch_stack_1->SetBinError(5,2.466948);
   hbadmatch_stack_1->SetBinError(6,2.921522);
   hbadmatch_stack_1->SetBinError(7,2.55353);
   hbadmatch_stack_1->SetBinError(8,2.101029);
   hbadmatch_stack_1->SetBinError(9,2.015045);
   hbadmatch_stack_1->SetBinError(10,1.554079);
   hbadmatch_stack_1->SetBinError(11,2.356527);
   hbadmatch_stack_1->SetBinError(12,1.311911);
   hbadmatch_stack_1->SetBinError(13,1.187942);
   hbadmatch_stack_1->SetBinError(14,1.194281);
   hbadmatch_stack_1->SetBinError(15,0.8777653);
   hbadmatch_stack_1->SetBinError(16,0.4398689);
   hbadmatch_stack_1->SetBinError(17,0.5887711);
   hbadmatch_stack_1->SetBinError(18,0.7080169);
   hbadmatch_stack_1->SetBinError(19,0.5985864);
   hbadmatch_stack_1->SetBinError(20,0.3768218);
   hbadmatch_stack_1->SetBinError(21,0.9265678);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.15957);
   hext_stack_2->SetBinContent(3,12.42358);
   hext_stack_2->SetBinContent(4,17.07708);
   hext_stack_2->SetBinContent(5,12.59151);
   hext_stack_2->SetBinContent(6,9.467113);
   hext_stack_2->SetBinContent(7,6.41122);
   hext_stack_2->SetBinContent(8,5.445436);
   hext_stack_2->SetBinContent(9,2.995478);
   hext_stack_2->SetBinContent(10,3.569383);
   hext_stack_2->SetBinContent(11,0.9305139);
   hext_stack_2->SetBinContent(12,0.4244012);
   hext_stack_2->SetBinContent(14,0.6699317);
   hext_stack_2->SetBinContent(15,0.3895662);
   hext_stack_2->SetBinContent(18,0.1380715);
   hext_stack_2->SetBinContent(19,0.3381872);
   hext_stack_2->SetBinError(2,0.15957);
   hext_stack_2->SetBinError(3,1.932106);
   hext_stack_2->SetBinError(4,2.050028);
   hext_stack_2->SetBinError(5,1.871275);
   hext_stack_2->SetBinError(6,1.771897);
   hext_stack_2->SetBinError(7,1.294182);
   hext_stack_2->SetBinError(8,1.414481);
   hext_stack_2->SetBinError(9,0.9574338);
   hext_stack_2->SetBinError(10,1.392302);
   hext_stack_2->SetBinError(11,0.5107657);
   hext_stack_2->SetBinError(12,0.2451693);
   hext_stack_2->SetBinError(14,0.4395418);
   hext_stack_2->SetBinError(15,0.3895662);
   hext_stack_2->SetBinError(18,0.1380715);
   hext_stack_2->SetBinError(19,0.3381872);
   hext_stack_2->SetEntries(307);

   ci = 1491;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,2.592407);
   hdirt_stack_3->SetBinContent(3,86.82921);
   hdirt_stack_3->SetBinContent(4,124.4587);
   hdirt_stack_3->SetBinContent(5,122.8653);
   hdirt_stack_3->SetBinContent(6,86.48843);
   hdirt_stack_3->SetBinContent(7,74.15529);
   hdirt_stack_3->SetBinContent(8,49.07086);
   hdirt_stack_3->SetBinContent(9,47.22382);
   hdirt_stack_3->SetBinContent(10,29.51392);
   hdirt_stack_3->SetBinContent(11,31.991);
   hdirt_stack_3->SetBinContent(12,22.68558);
   hdirt_stack_3->SetBinContent(13,15.62783);
   hdirt_stack_3->SetBinContent(14,8.929177);
   hdirt_stack_3->SetBinContent(15,5.269787);
   hdirt_stack_3->SetBinContent(16,8.731644);
   hdirt_stack_3->SetBinContent(17,8.07844);
   hdirt_stack_3->SetBinContent(18,4.468179);
   hdirt_stack_3->SetBinContent(19,3.56119);
   hdirt_stack_3->SetBinContent(20,1.137595);
   hdirt_stack_3->SetBinContent(21,20.65977);
   hdirt_stack_3->SetBinError(2,1.085446);
   hdirt_stack_3->SetBinError(3,6.538505);
   hdirt_stack_3->SetBinError(4,7.552889);
   hdirt_stack_3->SetBinError(5,7.552852);
   hdirt_stack_3->SetBinError(6,6.215926);
   hdirt_stack_3->SetBinError(7,5.83372);
   hdirt_stack_3->SetBinError(8,4.8365);
   hdirt_stack_3->SetBinError(9,4.699116);
   hdirt_stack_3->SetBinError(10,3.696797);
   hdirt_stack_3->SetBinError(11,3.93117);
   hdirt_stack_3->SetBinError(12,3.374516);
   hdirt_stack_3->SetBinError(13,2.61897);
   hdirt_stack_3->SetBinError(14,1.88893);
   hdirt_stack_3->SetBinError(15,1.442273);
   hdirt_stack_3->SetBinError(16,2.029177);
   hdirt_stack_3->SetBinError(17,1.942156);
   hdirt_stack_3->SetBinError(18,1.297469);
   hdirt_stack_3->SetBinError(19,1.165664);
   hdirt_stack_3->SetBinError(20,0.6602113);
   hdirt_stack_3->SetBinError(21,3.218624);
   hdirt_stack_3->SetEntries(1757);

   ci = 1492;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,4.687967);
   houtFV_stack_4->SetBinContent(3,62.66794);
   houtFV_stack_4->SetBinContent(4,127.0845);
   houtFV_stack_4->SetBinContent(5,122.8523);
   houtFV_stack_4->SetBinContent(6,92.31926);
   houtFV_stack_4->SetBinContent(7,78.50962);
   houtFV_stack_4->SetBinContent(8,63.06421);
   houtFV_stack_4->SetBinContent(9,47.42204);
   houtFV_stack_4->SetBinContent(10,33.41473);
   houtFV_stack_4->SetBinContent(11,21.78215);
   houtFV_stack_4->SetBinContent(12,17.98751);
   houtFV_stack_4->SetBinContent(13,13.32171);
   houtFV_stack_4->SetBinContent(14,11.24825);
   houtFV_stack_4->SetBinContent(15,7.425602);
   houtFV_stack_4->SetBinContent(16,3.684821);
   houtFV_stack_4->SetBinContent(17,3.476419);
   houtFV_stack_4->SetBinContent(18,3.613098);
   houtFV_stack_4->SetBinContent(19,1.759327);
   houtFV_stack_4->SetBinContent(20,1.807394);
   houtFV_stack_4->SetBinContent(21,4.102892);
   houtFV_stack_4->SetBinError(2,1.055513);
   houtFV_stack_4->SetBinError(3,3.923492);
   houtFV_stack_4->SetBinError(4,5.649987);
   houtFV_stack_4->SetBinError(5,5.740919);
   houtFV_stack_4->SetBinError(6,4.850425);
   houtFV_stack_4->SetBinError(7,4.412683);
   houtFV_stack_4->SetBinError(8,3.979077);
   houtFV_stack_4->SetBinError(9,3.476977);
   houtFV_stack_4->SetBinError(10,2.886198);
   houtFV_stack_4->SetBinError(11,2.309362);
   houtFV_stack_4->SetBinError(12,2.171016);
   houtFV_stack_4->SetBinError(13,1.878597);
   houtFV_stack_4->SetBinError(14,1.803844);
   houtFV_stack_4->SetBinError(15,1.399967);
   houtFV_stack_4->SetBinError(16,0.8797331);
   houtFV_stack_4->SetBinError(17,1.005883);
   houtFV_stack_4->SetBinError(18,1.001618);
   houtFV_stack_4->SetBinError(19,0.6368535);
   houtFV_stack_4->SetBinError(20,0.7084844);
   houtFV_stack_4->SetBinError(21,1.000002);
   houtFV_stack_4->SetEntries(3094);

   ci = 1493;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.112278);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,13.63618);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,16.86893);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,16.82841);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,17.10909);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.91825);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.562516);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.464184);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.254443);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.203612);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.92278);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8921356);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.059208);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.756876);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6816079);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.209029);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.303273);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.320087);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.441528);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.09275);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9913755);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6681026);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.747689);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5022692);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4161718);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1959638);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3494035);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4174949);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6976678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.650844);
   hNCpi0inFVqe_stack_6->SetBinContent(5,4.461528);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.945533);
   hNCpi0inFVqe_stack_6->SetBinContent(7,3.779302);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.342776);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.204276);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.008144);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6418679);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.170976);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6980042);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2285151);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5329119);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.7073415);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5494523);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.6180707);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4366332);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4886529);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4626733);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2250829);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.397436);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3431282);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1495;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.246458);
   hNCpi0inFVres_stack_7->SetBinContent(3,107.0124);
   hNCpi0inFVres_stack_7->SetBinContent(4,326.0538);
   hNCpi0inFVres_stack_7->SetBinContent(5,434.5798);
   hNCpi0inFVres_stack_7->SetBinContent(6,444.0336);
   hNCpi0inFVres_stack_7->SetBinContent(7,390.949);
   hNCpi0inFVres_stack_7->SetBinContent(8,305.9377);
   hNCpi0inFVres_stack_7->SetBinContent(9,229.1895);
   hNCpi0inFVres_stack_7->SetBinContent(10,163.1727);
   hNCpi0inFVres_stack_7->SetBinContent(11,110.1183);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.57414);
   hNCpi0inFVres_stack_7->SetBinContent(13,47.87973);
   hNCpi0inFVres_stack_7->SetBinContent(14,34.74677);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.69526);
   hNCpi0inFVres_stack_7->SetBinContent(16,16.23606);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.88296);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.942971);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.194);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.59862);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.43069);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4829108);
   hNCpi0inFVres_stack_7->SetBinError(3,3.337055);
   hNCpi0inFVres_stack_7->SetBinError(4,5.845257);
   hNCpi0inFVres_stack_7->SetBinError(5,6.8371);
   hNCpi0inFVres_stack_7->SetBinError(6,6.850784);
   hNCpi0inFVres_stack_7->SetBinError(7,6.49315);
   hNCpi0inFVres_stack_7->SetBinError(8,5.705228);
   hNCpi0inFVres_stack_7->SetBinError(9,4.969717);
   hNCpi0inFVres_stack_7->SetBinError(10,4.211621);
   hNCpi0inFVres_stack_7->SetBinError(11,3.430473);
   hNCpi0inFVres_stack_7->SetBinError(12,3.002293);
   hNCpi0inFVres_stack_7->SetBinError(13,2.199567);
   hNCpi0inFVres_stack_7->SetBinError(14,1.931693);
   hNCpi0inFVres_stack_7->SetBinError(15,1.66652);
   hNCpi0inFVres_stack_7->SetBinError(16,1.404121);
   hNCpi0inFVres_stack_7->SetBinError(17,1.144639);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8219528);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8852566);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6600933);
   hNCpi0inFVres_stack_7->SetBinError(21,1.128328);
   hNCpi0inFVres_stack_7->SetEntries(50865);

   ci = 1496;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8222219);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.37722);
   hNCpi0inFVdis_stack_8->SetBinContent(4,41.4109);
   hNCpi0inFVdis_stack_8->SetBinContent(5,55.49265);
   hNCpi0inFVdis_stack_8->SetBinContent(6,67.01855);
   hNCpi0inFVdis_stack_8->SetBinContent(7,61.20667);
   hNCpi0inFVdis_stack_8->SetBinContent(8,57.67849);
   hNCpi0inFVdis_stack_8->SetBinContent(9,52.62376);
   hNCpi0inFVdis_stack_8->SetBinContent(10,39.26725);
   hNCpi0inFVdis_stack_8->SetBinContent(11,35.13654);
   hNCpi0inFVdis_stack_8->SetBinContent(12,26.2625);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.09056);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.61435);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.23793);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.459126);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.992124);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.214332);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.643715);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.086042);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.7564);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2756104);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.548736);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.070626);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.426306);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.65374);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.47421);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.45678);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.366551);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.033004);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.929526);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.745922);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.286667);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.29308);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.091116);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8730814);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6847409);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7533928);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7726073);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7087618);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.075969);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1497;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.6556541);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.3068998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.3009266);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.09253378);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1498;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(3,9.562521);
   hCCpi0inFV_stack_11->SetBinContent(4,34.05545);
   hCCpi0inFV_stack_11->SetBinContent(5,57.6683);
   hCCpi0inFV_stack_11->SetBinContent(6,101.904);
   hCCpi0inFV_stack_11->SetBinContent(7,129.3565);
   hCCpi0inFV_stack_11->SetBinContent(8,132.8305);
   hCCpi0inFV_stack_11->SetBinContent(9,136.4982);
   hCCpi0inFV_stack_11->SetBinContent(10,117.7867);
   hCCpi0inFV_stack_11->SetBinContent(11,90.26794);
   hCCpi0inFV_stack_11->SetBinContent(12,74.29758);
   hCCpi0inFV_stack_11->SetBinContent(13,66.65197);
   hCCpi0inFV_stack_11->SetBinContent(14,54.33302);
   hCCpi0inFV_stack_11->SetBinContent(15,37.93746);
   hCCpi0inFV_stack_11->SetBinContent(16,26.77988);
   hCCpi0inFV_stack_11->SetBinContent(17,28.73969);
   hCCpi0inFV_stack_11->SetBinContent(18,21.46302);
   hCCpi0inFV_stack_11->SetBinContent(19,14.70453);
   hCCpi0inFV_stack_11->SetBinContent(20,10.6678);
   hCCpi0inFV_stack_11->SetBinContent(21,48.12746);
   hCCpi0inFV_stack_11->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(3,1.569916);
   hCCpi0inFV_stack_11->SetBinError(4,2.884094);
   hCCpi0inFV_stack_11->SetBinError(5,3.766799);
   hCCpi0inFV_stack_11->SetBinError(6,5.03607);
   hCCpi0inFV_stack_11->SetBinError(7,5.656467);
   hCCpi0inFV_stack_11->SetBinError(8,5.783528);
   hCCpi0inFV_stack_11->SetBinError(9,5.872042);
   hCCpi0inFV_stack_11->SetBinError(10,5.45611);
   hCCpi0inFV_stack_11->SetBinError(11,4.774915);
   hCCpi0inFV_stack_11->SetBinError(12,4.341625);
   hCCpi0inFV_stack_11->SetBinError(13,4.15554);
   hCCpi0inFV_stack_11->SetBinError(14,3.780556);
   hCCpi0inFV_stack_11->SetBinError(15,3.032337);
   hCCpi0inFV_stack_11->SetBinError(16,2.532188);
   hCCpi0inFV_stack_11->SetBinError(17,2.714151);
   hCCpi0inFV_stack_11->SetBinError(18,2.378275);
   hCCpi0inFV_stack_11->SetBinError(19,1.901944);
   hCCpi0inFV_stack_11->SetBinError(20,1.544581);
   hCCpi0inFV_stack_11->SetBinError(21,3.545578);
   hCCpi0inFV_stack_11->SetEntries(5105);

   ci = 1500;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,13.44755);
   hNCinFV_stack_12->SetBinContent(4,29.3726);
   hNCinFV_stack_12->SetBinContent(5,33.38768);
   hNCinFV_stack_12->SetBinContent(6,38.79682);
   hNCinFV_stack_12->SetBinContent(7,38.63091);
   hNCinFV_stack_12->SetBinContent(8,29.6536);
   hNCinFV_stack_12->SetBinContent(9,25.64634);
   hNCinFV_stack_12->SetBinContent(10,23.36774);
   hNCinFV_stack_12->SetBinContent(11,15.57991);
   hNCinFV_stack_12->SetBinContent(12,10.50358);
   hNCinFV_stack_12->SetBinContent(13,10.15326);
   hNCinFV_stack_12->SetBinContent(14,7.36782);
   hNCinFV_stack_12->SetBinContent(15,5.763443);
   hNCinFV_stack_12->SetBinContent(16,4.79339);
   hNCinFV_stack_12->SetBinContent(17,4.198173);
   hNCinFV_stack_12->SetBinContent(18,2.789281);
   hNCinFV_stack_12->SetBinContent(19,2.537621);
   hNCinFV_stack_12->SetBinContent(20,1.660551);
   hNCinFV_stack_12->SetBinContent(21,4.540041);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,1.80974);
   hNCinFV_stack_12->SetBinError(4,2.830912);
   hNCinFV_stack_12->SetBinError(5,2.892002);
   hNCinFV_stack_12->SetBinError(6,3.076953);
   hNCinFV_stack_12->SetBinError(7,3.127075);
   hNCinFV_stack_12->SetBinError(8,2.737137);
   hNCinFV_stack_12->SetBinError(9,2.52002);
   hNCinFV_stack_12->SetBinError(10,2.420551);
   hNCinFV_stack_12->SetBinError(11,1.971514);
   hNCinFV_stack_12->SetBinError(12,1.642362);
   hNCinFV_stack_12->SetBinError(13,1.605509);
   hNCinFV_stack_12->SetBinError(14,1.388305);
   hNCinFV_stack_12->SetBinError(15,1.19315);
   hNCinFV_stack_12->SetBinError(16,1.111494);
   hNCinFV_stack_12->SetBinError(17,1.057044);
   hNCinFV_stack_12->SetBinError(18,0.8335302);
   hNCinFV_stack_12->SetBinError(19,0.8329108);
   hNCinFV_stack_12->SetBinError(20,0.650847);
   hNCinFV_stack_12->SetBinError(21,1.110732);
   hNCinFV_stack_12->SetEntries(1286);

   ci = 1501;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_13->SetBinContent(3,16.75051);
   hnumuCCinFV_stack_13->SetBinContent(4,52.46309);
   hnumuCCinFV_stack_13->SetBinContent(5,60.25213);
   hnumuCCinFV_stack_13->SetBinContent(6,82.48918);
   hnumuCCinFV_stack_13->SetBinContent(7,57.5459);
   hnumuCCinFV_stack_13->SetBinContent(8,54.7618);
   hnumuCCinFV_stack_13->SetBinContent(9,55.39701);
   hnumuCCinFV_stack_13->SetBinContent(10,37.28593);
   hnumuCCinFV_stack_13->SetBinContent(11,37.28003);
   hnumuCCinFV_stack_13->SetBinContent(12,24.99706);
   hnumuCCinFV_stack_13->SetBinContent(13,17.16718);
   hnumuCCinFV_stack_13->SetBinContent(14,16.00774);
   hnumuCCinFV_stack_13->SetBinContent(15,9.443361);
   hnumuCCinFV_stack_13->SetBinContent(16,7.021593);
   hnumuCCinFV_stack_13->SetBinContent(17,5.060522);
   hnumuCCinFV_stack_13->SetBinContent(18,3.46429);
   hnumuCCinFV_stack_13->SetBinContent(19,2.456656);
   hnumuCCinFV_stack_13->SetBinContent(20,4.069201);
   hnumuCCinFV_stack_13->SetBinContent(21,10.59256);
   hnumuCCinFV_stack_13->SetBinError(2,0.300021);
   hnumuCCinFV_stack_13->SetBinError(3,2.63938);
   hnumuCCinFV_stack_13->SetBinError(4,4.724523);
   hnumuCCinFV_stack_13->SetBinError(5,5.011393);
   hnumuCCinFV_stack_13->SetBinError(6,5.356289);
   hnumuCCinFV_stack_13->SetBinError(7,4.820981);
   hnumuCCinFV_stack_13->SetBinError(8,4.204402);
   hnumuCCinFV_stack_13->SetBinError(9,4.012928);
   hnumuCCinFV_stack_13->SetBinError(10,3.312144);
   hnumuCCinFV_stack_13->SetBinError(11,4.109926);
   hnumuCCinFV_stack_13->SetBinError(12,2.704237);
   hnumuCCinFV_stack_13->SetBinError(13,2.542016);
   hnumuCCinFV_stack_13->SetBinError(14,2.28566);
   hnumuCCinFV_stack_13->SetBinError(15,1.929619);
   hnumuCCinFV_stack_13->SetBinError(16,1.352714);
   hnumuCCinFV_stack_13->SetBinError(17,1.142332);
   hnumuCCinFV_stack_13->SetBinError(18,0.9211146);
   hnumuCCinFV_stack_13->SetBinError(19,0.8029903);
   hnumuCCinFV_stack_13->SetBinError(20,0.985819);
   hnumuCCinFV_stack_13->SetBinError(21,1.684641);
   hnumuCCinFV_stack_13->SetEntries(2136);

   ci = 1502;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,2.556965);
   hnueCCinFV_stack_14->SetBinContent(4,2.728531);
   hnueCCinFV_stack_14->SetBinContent(5,4.387265);
   hnueCCinFV_stack_14->SetBinContent(6,1.837982);
   hnueCCinFV_stack_14->SetBinContent(7,2.079979);
   hnueCCinFV_stack_14->SetBinContent(8,4.386653);
   hnueCCinFV_stack_14->SetBinContent(9,3.073345);
   hnueCCinFV_stack_14->SetBinContent(10,2.784978);
   hnueCCinFV_stack_14->SetBinContent(11,2.779852);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,4.676863);
   hnueCCinFV_stack_14->SetBinContent(14,1.838574);
   hnueCCinFV_stack_14->SetBinContent(15,1.192497);
   hnueCCinFV_stack_14->SetBinContent(16,0.9905936);
   hnueCCinFV_stack_14->SetBinContent(17,0.4694181);
   hnueCCinFV_stack_14->SetBinContent(18,0.9252522);
   hnueCCinFV_stack_14->SetBinContent(19,0.9499335);
   hnueCCinFV_stack_14->SetBinContent(20,2.085189);
   hnueCCinFV_stack_14->SetBinContent(21,13.27486);
   hnueCCinFV_stack_14->SetBinError(3,1.439881);
   hnueCCinFV_stack_14->SetBinError(4,0.9743588);
   hnueCCinFV_stack_14->SetBinError(5,1.177106);
   hnueCCinFV_stack_14->SetBinError(6,0.7341368);
   hnueCCinFV_stack_14->SetBinError(7,0.7078515);
   hnueCCinFV_stack_14->SetBinError(8,1.102194);
   hnueCCinFV_stack_14->SetBinError(9,1.010823);
   hnueCCinFV_stack_14->SetBinError(10,0.9706674);
   hnueCCinFV_stack_14->SetBinError(11,1.305757);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,1.859138);
   hnueCCinFV_stack_14->SetBinError(14,0.6632898);
   hnueCCinFV_stack_14->SetBinError(15,0.5657204);
   hnueCCinFV_stack_14->SetBinError(16,0.5144188);
   hnueCCinFV_stack_14->SetBinError(17,0.3326517);
   hnueCCinFV_stack_14->SetBinError(18,0.4794006);
   hnueCCinFV_stack_14->SetBinError(19,0.4898809);
   hnueCCinFV_stack_14->SetBinError(20,0.9677356);
   hnueCCinFV_stack_14->SetBinError(21,2.66944);
   hnueCCinFV_stack_14->SetEntries(187);

   ci = 1503;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);
   hmcerror__14->SetBinContent(2,13.02281);
   hmcerror__14->SetBinContent(3,350.1371);
   hmcerror__14->SetBinContent(4,796.8124);
   hmcerror__14->SetBinContent(5,946.6638);
   hmcerror__14->SetBinContent(6,966.2816);
   hmcerror__14->SetBinContent(7,880.015);
   hmcerror__14->SetBinContent(8,732.7663);
   hmcerror__14->SetBinContent(9,625.5494);
   hmcerror__14->SetBinContent(10,465.2771);
   hmcerror__14->SetBinContent(11,362.782);
   hmcerror__14->SetBinContent(12,266.5583);
   hmcerror__14->SetBinContent(13,199.871);
   hmcerror__14->SetBinContent(14,156.5103);
   hmcerror__14->SetBinContent(15,107.483);
   hmcerror__14->SetBinContent(16,77.23801);
   hmcerror__14->SetBinContent(17,68.55099);
   hmcerror__14->SetBinContent(18,51.15833);
   hmcerror__14->SetBinContent(19,38.60855);
   hmcerror__14->SetBinContent(20,30.49935);
   hmcerror__14->SetBinContent(21,128.8132);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,4.939889);
   hmcerror__14->SetBinError(3,71.33238);
   hmcerror__14->SetBinError(4,169.3593);
   hmcerror__14->SetBinError(5,193.6652);
   hmcerror__14->SetBinError(6,201.8925);
   hmcerror__14->SetBinError(7,184.852);
   hmcerror__14->SetBinError(8,157.5378);
   hmcerror__14->SetBinError(9,136.3198);
   hmcerror__14->SetBinError(10,105.135);
   hmcerror__14->SetBinError(11,84.68427);
   hmcerror__14->SetBinError(12,65.61908);
   hmcerror__14->SetBinError(13,50.47978);
   hmcerror__14->SetBinError(14,44.9498);
   hmcerror__14->SetBinError(15,32.94654);
   hmcerror__14->SetBinError(16,24.18942);
   hmcerror__14->SetBinError(17,22.04056);
   hmcerror__14->SetBinError(18,19.99044);
   hmcerror__14->SetBinError(19,12.7652);
   hmcerror__14->SetBinError(20,14.48204);
   hmcerror__14->SetBinError(21,32.84643);
   hmcerror__14->SetEntries(7171.878);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[20] = {
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
   Double_t _fy3017[20] = {
   0,
   14,
   399,
   901,
   932,
   909,
   726,
   572,
   512,
   351,
   274,
   207,
   154,
   102,
   75,
   78,
   59,
   40,
   24,
   25};
   Double_t _felx3017[20] = {
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
   Double_t _fely3017[20] = {
   0,
   3.9102,
   19.97498,
   30.01666,
   30.52868,
   30.14963,
   26.94439,
   23.91652,
   22.62742,
   18.73499,
   16.55295,
   14.38749,
   12.40967,
   10.0995,
   8.7852,
   8.9562,
   7.8097,
   6.4604,
   5.0476,
   5.1474};
   Double_t _fehx3017[20] = {
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
   Double_t _fehy3017[20] = {
   1.1478,
   3.6898,
   19.97498,
   30.01666,
   30.52868,
   30.14963,
   26.94439,
   23.91652,
   22.62742,
   18.73499,
   16.55295,
   14.38749,
   12.40967,
   10.0995,
   8.5831,
   8.7542,
   7.6066,
   6.2549,
   4.837,
   4.9374};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(1058.782);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6354.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 177.2","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 73.0","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 733.7","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 718.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.7","F");

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.2","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2745.0","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  527.6","F");

   ci = 1497;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1498;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1145.8","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 298.2","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 544.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 39.9","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT2_bnb_12_corrected_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
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
   Double_t _fy3018[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[20] = {
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
   Double_t _fely3018[20] = {
   0,
   0.379326,
   0.203727,
   0.212546,
   0.2045765,
   0.2089375,
   0.2100555,
   0.2149906,
   0.2179201,
   0.2259621,
   0.2334302,
   0.2461715,
   0.2525618,
   0.2872002,
   0.306528,
   0.3131803,
   0.3215206,
   0.3907563,
   0.3306315,
   0.474831};
   Double_t _fehx3018[20] = {
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
   Double_t _fehy3018[20] = {
   0,
   0.379326,
   0.203727,
   0.212546,
   0.2045765,
   0.2089375,
   0.2100555,
   0.2149906,
   0.2179201,
   0.2259621,
   0.2334302,
   0.2461715,
   0.2525618,
   0.2872002,
   0.306528,
   0.3131803,
   0.3215206,
   0.3907563,
   0.3306315,
   0.474831};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[20] = {
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
   Double_t _fy3019[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[20] = {
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
   Double_t _fely3019[20] = {
   0,
   0.2210193,
   0.1545702,
   0.188183,
   0.1980331,
   0.2050439,
   0.2061374,
   0.2112778,
   0.2133541,
   0.2163252,
   0.2069503,
   0.2099587,
   0.2088507,
   0.2104982,
   0.2232381,
   0.2017078,
   0.21126,
   0.2140996,
   0.2173692,
   0.2425101};
   Double_t _fehx3019[20] = {
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
   Double_t _fehy3019[20] = {
   0,
   0.2210193,
   0.1545702,
   0.188183,
   0.1980331,
   0.2050439,
   0.2061374,
   0.2112778,
   0.2133541,
   0.2163252,
   0.2069503,
   0.2099587,
   0.2088507,
   0.2104982,
   0.2232381,
   0.2017078,
   0.21126,
   0.2140996,
   0.2173692,
   0.2425101};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[20] = {
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
   Double_t _fy3020[20] = {
   10,
   1.075037,
   1.139554,
   1.130755,
   0.9845101,
   0.9407195,
   0.8249859,
   0.7806036,
   0.8184806,
   0.7543892,
   0.7552746,
   0.7765654,
   0.770497,
   0.6517142,
   0.6977849,
   1.009865,
   0.8606732,
   0.7818864,
   0.6216239,
   0.8196896};
   Double_t _felx3020[20] = {
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
   Double_t _fely3020[20] = {
   0,
   0.3002579,
   0.05704903,
   0.03767093,
   0.0322487,
   0.0312017,
   0.0306181,
   0.03263868,
   0.03617207,
   0.04026631,
   0.0456278,
   0.05397503,
   0.06208842,
   0.06452932,
   0.08173573,
   0.1159559,
   0.1139254,
   0.1262825,
   0.1307379,
   0.1687708};
   Double_t _fehx3020[20] = {
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
   Double_t _fehy3020[20] = {
   0,
   0.2833337,
   0.05704903,
   0.03767093,
   0.0322487,
   0.0312017,
   0.0306181,
   0.03263868,
   0.03617207,
   0.04026631,
   0.0456278,
   0.05397503,
   0.06208842,
   0.06452932,
   0.07985543,
   0.1133406,
   0.1109627,
   0.1222655,
   0.1252831,
   0.1618854};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0.4417974);
   Graph_Graph3020->SetMaximum(10.95091);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT2_bnb_12_corrected_visible_energy_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
