#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Jun  5 00:28:03 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(-1.307692,-15.14,1.25641,1674.165);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__10->SetBinContent(1,71.05737);
   hmc__10->SetBinContent(2,56.71857);
   hmc__10->SetBinContent(3,56.13891);
   hmc__10->SetBinContent(4,48.12708);
   hmc__10->SetBinContent(5,49.28477);
   hmc__10->SetBinContent(6,52.41887);
   hmc__10->SetBinContent(7,56.48603);
   hmc__10->SetBinContent(8,43.36021);
   hmc__10->SetBinContent(9,46.42889);
   hmc__10->SetBinContent(10,49.44409);
   hmc__10->SetBinContent(11,64.43467);
   hmc__10->SetBinContent(12,68.07652);
   hmc__10->SetBinContent(13,71.56153);
   hmc__10->SetBinContent(14,83.93729);
   hmc__10->SetBinContent(15,84.34251);
   hmc__10->SetBinContent(16,104.5564);
   hmc__10->SetBinContent(17,121.4526);
   hmc__10->SetBinContent(18,133.5266);
   hmc__10->SetBinContent(19,167.5488);
   hmc__10->SetBinContent(20,208.3767);
   hmc__10->SetBinContent(21,248.9541);
   hmc__10->SetBinContent(22,296.0822);
   hmc__10->SetBinContent(23,385.6378);
   hmc__10->SetBinContent(24,515.407);
   hmc__10->SetBinContent(25,737.6417);
   hmc__10->SetBinError(1,17.57099);
   hmc__10->SetBinError(2,13.56519);
   hmc__10->SetBinError(3,13.22294);
   hmc__10->SetBinError(4,12.47541);
   hmc__10->SetBinError(5,12.39879);
   hmc__10->SetBinError(6,11.95209);
   hmc__10->SetBinError(7,12.53499);
   hmc__10->SetBinError(8,11.18442);
   hmc__10->SetBinError(9,10.56458);
   hmc__10->SetBinError(10,11.25311);
   hmc__10->SetBinError(11,14.16499);
   hmc__10->SetBinError(12,15.25906);
   hmc__10->SetBinError(13,15.53486);
   hmc__10->SetBinError(14,17.46066);
   hmc__10->SetBinError(15,18.94338);
   hmc__10->SetBinError(16,24.65019);
   hmc__10->SetBinError(17,28.97441);
   hmc__10->SetBinError(18,36.22972);
   hmc__10->SetBinError(19,39.71459);
   hmc__10->SetBinError(20,47.87073);
   hmc__10->SetBinError(21,59.16901);
   hmc__10->SetBinError(22,66.86227);
   hmc__10->SetBinError(23,79.94252);
   hmc__10->SetBinError(24,104.6374);
   hmc__10->SetBinError(25,152.3992);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-15.14);
   hmc__10->SetMaximum(1589.7);
   hmc__10->SetEntries(3775.136);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-1,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(774.5238);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.907297);
   hbadmatch_stack_1->SetBinContent(2,1.498493);
   hbadmatch_stack_1->SetBinContent(3,3.079519);
   hbadmatch_stack_1->SetBinContent(4,1.956048);
   hbadmatch_stack_1->SetBinContent(5,1.202587);
   hbadmatch_stack_1->SetBinContent(6,1.614665);
   hbadmatch_stack_1->SetBinContent(7,2.145881);
   hbadmatch_stack_1->SetBinContent(8,1.507186);
   hbadmatch_stack_1->SetBinContent(9,1.254937);
   hbadmatch_stack_1->SetBinContent(10,1.00777);
   hbadmatch_stack_1->SetBinContent(11,2.448194);
   hbadmatch_stack_1->SetBinContent(12,2.420443);
   hbadmatch_stack_1->SetBinContent(13,0.7115329);
   hbadmatch_stack_1->SetBinContent(14,6.615763);
   hbadmatch_stack_1->SetBinContent(15,3.074514);
   hbadmatch_stack_1->SetBinContent(16,2.337525);
   hbadmatch_stack_1->SetBinContent(17,3.564782);
   hbadmatch_stack_1->SetBinContent(18,2.10971);
   hbadmatch_stack_1->SetBinContent(19,3.804673);
   hbadmatch_stack_1->SetBinContent(20,6.423393);
   hbadmatch_stack_1->SetBinContent(21,4.270673);
   hbadmatch_stack_1->SetBinContent(22,8.059911);
   hbadmatch_stack_1->SetBinContent(23,7.304599);
   hbadmatch_stack_1->SetBinContent(24,11.68758);
   hbadmatch_stack_1->SetBinContent(25,15.94568);
   hbadmatch_stack_1->SetBinError(1,0.9265759);
   hbadmatch_stack_1->SetBinError(2,0.5691965);
   hbadmatch_stack_1->SetBinError(3,1.788471);
   hbadmatch_stack_1->SetBinError(4,0.6661853);
   hbadmatch_stack_1->SetBinError(5,0.4914582);
   hbadmatch_stack_1->SetBinError(6,0.7374275);
   hbadmatch_stack_1->SetBinError(7,0.785499);
   hbadmatch_stack_1->SetBinError(8,0.6352565);
   hbadmatch_stack_1->SetBinError(9,0.5173424);
   hbadmatch_stack_1->SetBinError(10,0.5153956);
   hbadmatch_stack_1->SetBinError(11,0.7972159);
   hbadmatch_stack_1->SetBinError(12,0.9018636);
   hbadmatch_stack_1->SetBinError(13,0.414346);
   hbadmatch_stack_1->SetBinError(14,2.0993);
   hbadmatch_stack_1->SetBinError(15,0.920955);
   hbadmatch_stack_1->SetBinError(16,0.8085289);
   hbadmatch_stack_1->SetBinError(17,1.060672);
   hbadmatch_stack_1->SetBinError(18,0.7357394);
   hbadmatch_stack_1->SetBinError(19,1.031002);
   hbadmatch_stack_1->SetBinError(20,1.309713);
   hbadmatch_stack_1->SetBinError(21,1.071592);
   hbadmatch_stack_1->SetBinError(22,1.483101);
   hbadmatch_stack_1->SetBinError(23,1.335846);
   hbadmatch_stack_1->SetBinError(24,1.828472);
   hbadmatch_stack_1->SetBinError(25,2.39862);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,11.06308);
   hext_stack_2->SetBinContent(2,8.952297);
   hext_stack_2->SetBinContent(3,8.235662);
   hext_stack_2->SetBinContent(4,6.303639);
   hext_stack_2->SetBinContent(5,7.366213);
   hext_stack_2->SetBinContent(6,7.996238);
   hext_stack_2->SetBinContent(7,11.87905);
   hext_stack_2->SetBinContent(8,4.538791);
   hext_stack_2->SetBinContent(9,7.791582);
   hext_stack_2->SetBinContent(10,9.4251);
   hext_stack_2->SetBinContent(11,15.37845);
   hext_stack_2->SetBinContent(12,12.62164);
   hext_stack_2->SetBinContent(13,16.81726);
   hext_stack_2->SetBinContent(14,17.81641);
   hext_stack_2->SetBinContent(15,17.51954);
   hext_stack_2->SetBinContent(16,17.07823);
   hext_stack_2->SetBinContent(17,22.15489);
   hext_stack_2->SetBinContent(18,24.08691);
   hext_stack_2->SetBinContent(19,28.9661);
   hext_stack_2->SetBinContent(20,23.87785);
   hext_stack_2->SetBinContent(21,30.3343);
   hext_stack_2->SetBinContent(22,25.44799);
   hext_stack_2->SetBinContent(23,42.25808);
   hext_stack_2->SetBinContent(24,42.68181);
   hext_stack_2->SetBinContent(25,56.85363);
   hext_stack_2->SetBinError(1,2.349019);
   hext_stack_2->SetBinError(2,2.183188);
   hext_stack_2->SetBinError(3,2.023203);
   hext_stack_2->SetBinError(4,1.749156);
   hext_stack_2->SetBinError(5,1.79837);
   hext_stack_2->SetBinError(6,1.926624);
   hext_stack_2->SetBinError(7,2.34781);
   hext_stack_2->SetBinError(8,1.345212);
   hext_stack_2->SetBinError(9,1.769795);
   hext_stack_2->SetBinError(10,2.218711);
   hext_stack_2->SetBinError(11,2.648596);
   hext_stack_2->SetBinError(12,2.39096);
   hext_stack_2->SetBinError(13,2.772784);
   hext_stack_2->SetBinError(14,2.745095);
   hext_stack_2->SetBinError(15,2.960353);
   hext_stack_2->SetBinError(16,2.732434);
   hext_stack_2->SetBinError(17,3.198589);
   hext_stack_2->SetBinError(18,3.356304);
   hext_stack_2->SetBinError(19,3.639869);
   hext_stack_2->SetBinError(20,3.248069);
   hext_stack_2->SetBinError(21,3.714263);
   hext_stack_2->SetBinError(22,3.268435);
   hext_stack_2->SetBinError(23,4.309548);
   hext_stack_2->SetBinError(24,4.242499);
   hext_stack_2->SetBinError(25,5.123833);
   hext_stack_2->SetEntries(1136);

   ci = 1477;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,1.470265);
   hdirt_stack_3->SetBinContent(2,1.014672);
   hdirt_stack_3->SetBinContent(3,0.5758626);
   hdirt_stack_3->SetBinContent(4,2.099282);
   hdirt_stack_3->SetBinContent(5,2.838103);
   hdirt_stack_3->SetBinContent(6,0.3035505);
   hdirt_stack_3->SetBinContent(7,1.201819);
   hdirt_stack_3->SetBinContent(8,0.5940499);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,2.134555);
   hdirt_stack_3->SetBinContent(11,1.024993);
   hdirt_stack_3->SetBinContent(12,0.4154976);
   hdirt_stack_3->SetBinContent(13,1.407996);
   hdirt_stack_3->SetBinContent(14,0.9569958);
   hdirt_stack_3->SetBinContent(15,2.172879);
   hdirt_stack_3->SetBinContent(16,2.730107);
   hdirt_stack_3->SetBinContent(17,1.411807);
   hdirt_stack_3->SetBinContent(18,1.777273);
   hdirt_stack_3->SetBinContent(19,2.511726);
   hdirt_stack_3->SetBinContent(20,3.010908);
   hdirt_stack_3->SetBinContent(21,4.96356);
   hdirt_stack_3->SetBinContent(22,6.191235);
   hdirt_stack_3->SetBinContent(23,3.858275);
   hdirt_stack_3->SetBinContent(24,5.568253);
   hdirt_stack_3->SetBinContent(25,6.381612);
   hdirt_stack_3->SetBinError(1,0.5527524);
   hdirt_stack_3->SetBinError(2,0.4233067);
   hdirt_stack_3->SetBinError(3,0.3389606);
   hdirt_stack_3->SetBinError(4,0.8223279);
   hdirt_stack_3->SetBinError(5,1.204519);
   hdirt_stack_3->SetBinError(6,0.2155157);
   hdirt_stack_3->SetBinError(7,0.5623791);
   hdirt_stack_3->SetBinError(8,0.4343456);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.786332);
   hdirt_stack_3->SetBinError(11,0.46088);
   hdirt_stack_3->SetBinError(12,0.3031465);
   hdirt_stack_3->SetBinError(13,0.6548177);
   hdirt_stack_3->SetBinError(14,0.4393598);
   hdirt_stack_3->SetBinError(15,0.8219634);
   hdirt_stack_3->SetBinError(16,0.873322);
   hdirt_stack_3->SetBinError(17,0.6075344);
   hdirt_stack_3->SetBinError(18,0.6812184);
   hdirt_stack_3->SetBinError(19,0.7909121);
   hdirt_stack_3->SetBinError(20,0.8213555);
   hdirt_stack_3->SetBinError(21,1.476787);
   hdirt_stack_3->SetBinError(22,1.358104);
   hdirt_stack_3->SetBinError(23,0.9597299);
   hdirt_stack_3->SetBinError(24,1.341051);
   hdirt_stack_3->SetBinError(25,1.375017);
   hdirt_stack_3->SetEntries(238);

   ci = 1478;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,10.10007);
   houtFV_stack_4->SetBinContent(2,10.0878);
   houtFV_stack_4->SetBinContent(3,10.58574);
   houtFV_stack_4->SetBinContent(4,9.039021);
   houtFV_stack_4->SetBinContent(5,8.228964);
   houtFV_stack_4->SetBinContent(6,10.01825);
   houtFV_stack_4->SetBinContent(7,10.51508);
   houtFV_stack_4->SetBinContent(8,7.402411);
   houtFV_stack_4->SetBinContent(9,10.48137);
   houtFV_stack_4->SetBinContent(10,6.250219);
   houtFV_stack_4->SetBinContent(11,8.465425);
   houtFV_stack_4->SetBinContent(12,10.06282);
   houtFV_stack_4->SetBinContent(13,12.12322);
   houtFV_stack_4->SetBinContent(14,11.52127);
   houtFV_stack_4->SetBinContent(15,12.23151);
   houtFV_stack_4->SetBinContent(16,12.98552);
   houtFV_stack_4->SetBinContent(17,17.894);
   houtFV_stack_4->SetBinContent(18,19.60255);
   houtFV_stack_4->SetBinContent(19,23.29831);
   houtFV_stack_4->SetBinContent(20,29.59849);
   houtFV_stack_4->SetBinContent(21,36.21484);
   houtFV_stack_4->SetBinContent(22,43.98988);
   houtFV_stack_4->SetBinContent(23,53.42088);
   houtFV_stack_4->SetBinContent(24,55.97699);
   houtFV_stack_4->SetBinContent(25,65.76929);
   houtFV_stack_4->SetBinError(1,1.63588);
   houtFV_stack_4->SetBinError(2,1.507851);
   houtFV_stack_4->SetBinError(3,1.69423);
   houtFV_stack_4->SetBinError(4,1.436132);
   houtFV_stack_4->SetBinError(5,1.368204);
   houtFV_stack_4->SetBinError(6,1.582386);
   houtFV_stack_4->SetBinError(7,1.623451);
   houtFV_stack_4->SetBinError(8,1.773457);
   houtFV_stack_4->SetBinError(9,1.615955);
   houtFV_stack_4->SetBinError(10,1.216693);
   houtFV_stack_4->SetBinError(11,1.417596);
   houtFV_stack_4->SetBinError(12,1.60744);
   houtFV_stack_4->SetBinError(13,1.740215);
   houtFV_stack_4->SetBinError(14,1.700724);
   houtFV_stack_4->SetBinError(15,1.777225);
   houtFV_stack_4->SetBinError(16,1.86815);
   houtFV_stack_4->SetBinError(17,2.09576);
   houtFV_stack_4->SetBinError(18,2.18438);
   houtFV_stack_4->SetBinError(19,2.429897);
   houtFV_stack_4->SetBinError(20,2.782687);
   houtFV_stack_4->SetBinError(21,2.94185);
   houtFV_stack_4->SetBinError(22,3.545639);
   houtFV_stack_4->SetBinError(23,3.666144);
   houtFV_stack_4->SetBinError(24,3.751351);
   houtFV_stack_4->SetBinError(25,4.085953);
   houtFV_stack_4->SetEntries(2163);

   ci = 1479;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.13353);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.534676);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6971721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.81318);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.218726);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.665205);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,7.252704);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,19.70263);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,56.62278);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5070253);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4691479);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3138005);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5235795);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5149596);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5666561);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8986019);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.486654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.454284);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1480;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4593539);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.477044);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.632322);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1818869);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3837339);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3880207);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1481;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.41442);
   hNCpi0inFVres_stack_7->SetBinContent(2,14.06016);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.99067);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.03101);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.50721);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.79927);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.63171);
   hNCpi0inFVres_stack_7->SetBinContent(8,14.02661);
   hNCpi0inFVres_stack_7->SetBinContent(9,16.06265);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.4393);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.76531);
   hNCpi0inFVres_stack_7->SetBinContent(12,21.8619);
   hNCpi0inFVres_stack_7->SetBinContent(13,22.17954);
   hNCpi0inFVres_stack_7->SetBinContent(14,25.43194);
   hNCpi0inFVres_stack_7->SetBinContent(15,29.67093);
   hNCpi0inFVres_stack_7->SetBinContent(16,35.24846);
   hNCpi0inFVres_stack_7->SetBinContent(17,42.44089);
   hNCpi0inFVres_stack_7->SetBinContent(18,48.12899);
   hNCpi0inFVres_stack_7->SetBinContent(19,57.82647);
   hNCpi0inFVres_stack_7->SetBinContent(20,75.50269);
   hNCpi0inFVres_stack_7->SetBinContent(21,94.92793);
   hNCpi0inFVres_stack_7->SetBinContent(22,111.9912);
   hNCpi0inFVres_stack_7->SetBinContent(23,134.1336);
   hNCpi0inFVres_stack_7->SetBinContent(24,186.5638);
   hNCpi0inFVres_stack_7->SetBinContent(25,229.1071);
   hNCpi0inFVres_stack_7->SetBinError(1,1.491055);
   hNCpi0inFVres_stack_7->SetBinError(2,1.182473);
   hNCpi0inFVres_stack_7->SetBinError(3,1.299735);
   hNCpi0inFVres_stack_7->SetBinError(4,1.211574);
   hNCpi0inFVres_stack_7->SetBinError(5,1.317026);
   hNCpi0inFVres_stack_7->SetBinError(6,1.325947);
   hNCpi0inFVres_stack_7->SetBinError(7,1.311757);
   hNCpi0inFVres_stack_7->SetBinError(8,1.199954);
   hNCpi0inFVres_stack_7->SetBinError(9,1.286365);
   hNCpi0inFVres_stack_7->SetBinError(10,1.262132);
   hNCpi0inFVres_stack_7->SetBinError(11,1.369932);
   hNCpi0inFVres_stack_7->SetBinError(12,1.526822);
   hNCpi0inFVres_stack_7->SetBinError(13,1.534787);
   hNCpi0inFVres_stack_7->SetBinError(14,1.623297);
   hNCpi0inFVres_stack_7->SetBinError(15,1.72371);
   hNCpi0inFVres_stack_7->SetBinError(16,1.909758);
   hNCpi0inFVres_stack_7->SetBinError(17,2.140166);
   hNCpi0inFVres_stack_7->SetBinError(18,2.184905);
   hNCpi0inFVres_stack_7->SetBinError(19,2.473975);
   hNCpi0inFVres_stack_7->SetBinError(20,2.864252);
   hNCpi0inFVres_stack_7->SetBinError(21,3.194213);
   hNCpi0inFVres_stack_7->SetBinError(22,3.468404);
   hNCpi0inFVres_stack_7->SetBinError(23,3.723359);
   hNCpi0inFVres_stack_7->SetBinError(24,4.537216);
   hNCpi0inFVres_stack_7->SetBinError(25,4.908223);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1482;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.00367);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.652092);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.760116);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.830366);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.485524);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.523466);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.324253);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.550534);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.748994);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.068184);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.068016);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.95708);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.664462);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.858098);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.98822);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.357736);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.199545);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.983578);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.16245);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.13107);
   hNCpi0inFVdis_stack_8->SetBinContent(21,17.05328);
   hNCpi0inFVdis_stack_8->SetBinContent(22,21.83715);
   hNCpi0inFVdis_stack_8->SetBinContent(23,28.19505);
   hNCpi0inFVdis_stack_8->SetBinContent(24,40.82367);
   hNCpi0inFVdis_stack_8->SetBinContent(25,63.42542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6877664);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6420594);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5119268);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5385421);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6533269);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5305329);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2391935);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5128132);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5592245);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5961674);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5680287);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5532181);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5395652);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5079834);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6281686);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8035964);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6896964);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7879042);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.056071);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.131796);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.336933);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.54101);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.705494);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.073193);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.583787);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1483;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1484;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1485;
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
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,12.34768);
   hCCpi0inFV_stack_11->SetBinContent(2,7.863597);
   hCCpi0inFV_stack_11->SetBinContent(3,9.629825);
   hCCpi0inFV_stack_11->SetBinContent(4,6.252154);
   hCCpi0inFV_stack_11->SetBinContent(5,5.625052);
   hCCpi0inFV_stack_11->SetBinContent(6,7.189873);
   hCCpi0inFV_stack_11->SetBinContent(7,7.425685);
   hCCpi0inFV_stack_11->SetBinContent(8,7.209441);
   hCCpi0inFV_stack_11->SetBinContent(9,4.428305);
   hCCpi0inFV_stack_11->SetBinContent(10,5.686589);
   hCCpi0inFV_stack_11->SetBinContent(11,7.330404);
   hCCpi0inFV_stack_11->SetBinContent(12,10.58702);
   hCCpi0inFV_stack_11->SetBinContent(13,9.969326);
   hCCpi0inFV_stack_11->SetBinContent(14,12.16582);
   hCCpi0inFV_stack_11->SetBinContent(15,9.679763);
   hCCpi0inFV_stack_11->SetBinContent(16,16.30398);
   hCCpi0inFV_stack_11->SetBinContent(17,16.62181);
   hCCpi0inFV_stack_11->SetBinContent(18,14.70175);
   hCCpi0inFV_stack_11->SetBinContent(19,25.42696);
   hCCpi0inFV_stack_11->SetBinContent(20,29.36069);
   hCCpi0inFV_stack_11->SetBinContent(21,37.97945);
   hCCpi0inFV_stack_11->SetBinContent(22,45.2961);
   hCCpi0inFV_stack_11->SetBinContent(23,71.05531);
   hCCpi0inFV_stack_11->SetBinContent(24,96.9142);
   hCCpi0inFV_stack_11->SetBinContent(25,149.9463);
   hCCpi0inFV_stack_11->SetBinError(1,1.736635);
   hCCpi0inFV_stack_11->SetBinError(2,1.344361);
   hCCpi0inFV_stack_11->SetBinError(3,1.539698);
   hCCpi0inFV_stack_11->SetBinError(4,1.272139);
   hCCpi0inFV_stack_11->SetBinError(5,1.161279);
   hCCpi0inFV_stack_11->SetBinError(6,1.31017);
   hCCpi0inFV_stack_11->SetBinError(7,1.359364);
   hCCpi0inFV_stack_11->SetBinError(8,1.313065);
   hCCpi0inFV_stack_11->SetBinError(9,1.081805);
   hCCpi0inFV_stack_11->SetBinError(10,1.263867);
   hCCpi0inFV_stack_11->SetBinError(11,1.315497);
   hCCpi0inFV_stack_11->SetBinError(12,1.634508);
   hCCpi0inFV_stack_11->SetBinError(13,1.551259);
   hCCpi0inFV_stack_11->SetBinError(14,1.76681);
   hCCpi0inFV_stack_11->SetBinError(15,1.545603);
   hCCpi0inFV_stack_11->SetBinError(16,2.06752);
   hCCpi0inFV_stack_11->SetBinError(17,2.010973);
   hCCpi0inFV_stack_11->SetBinError(18,1.953124);
   hCCpi0inFV_stack_11->SetBinError(19,2.54014);
   hCCpi0inFV_stack_11->SetBinError(20,2.697978);
   hCCpi0inFV_stack_11->SetBinError(21,3.133706);
   hCCpi0inFV_stack_11->SetBinError(22,3.377486);
   hCCpi0inFV_stack_11->SetBinError(23,4.245068);
   hCCpi0inFV_stack_11->SetBinError(24,4.93879);
   hCCpi0inFV_stack_11->SetBinError(25,6.126352);
   hCCpi0inFV_stack_11->SetEntries(2680);

   ci = 1486;
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
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,2.642437);
   hNCinFV_stack_12->SetBinContent(2,2.929362);
   hNCinFV_stack_12->SetBinContent(3,2.194063);
   hNCinFV_stack_12->SetBinContent(4,1.467217);
   hNCinFV_stack_12->SetBinContent(5,1.754141);
   hNCinFV_stack_12->SetBinContent(6,2.589184);
   hNCinFV_stack_12->SetBinContent(7,1.518779);
   hNCinFV_stack_12->SetBinContent(8,1.413964);
   hNCinFV_stack_12->SetBinContent(9,1.999038);
   hNCinFV_stack_12->SetBinContent(10,0.7319179);
   hNCinFV_stack_12->SetBinContent(11,2.442341);
   hNCinFV_stack_12->SetBinContent(12,1.217248);
   hNCinFV_stack_12->SetBinContent(13,2.252388);
   hNCinFV_stack_12->SetBinContent(14,3.071134);
   hNCinFV_stack_12->SetBinContent(15,2.498975);
   hNCinFV_stack_12->SetBinContent(16,3.124387);
   hNCinFV_stack_12->SetBinContent(17,3.324483);
   hNCinFV_stack_12->SetBinContent(18,4.985034);
   hNCinFV_stack_12->SetBinContent(19,5.08816);
   hNCinFV_stack_12->SetBinContent(20,8.894591);
   hNCinFV_stack_12->SetBinContent(21,6.016793);
   hNCinFV_stack_12->SetBinContent(22,9.803547);
   hNCinFV_stack_12->SetBinContent(23,15.05316);
   hNCinFV_stack_12->SetBinContent(24,23.2494);
   hNCinFV_stack_12->SetBinContent(25,34.87508);
   hNCinFV_stack_12->SetBinError(1,0.7851269);
   hNCinFV_stack_12->SetBinError(2,0.8777653);
   hNCinFV_stack_12->SetBinError(3,0.7594044);
   hNCinFV_stack_12->SetBinError(4,0.6214735);
   hNCinFV_stack_12->SetBinError(5,0.7350354);
   hNCinFV_stack_12->SetBinError(6,0.809167);
   hNCinFV_stack_12->SetBinError(7,0.5892709);
   hNCinFV_stack_12->SetBinError(8,0.6515799);
   hNCinFV_stack_12->SetBinError(9,0.7339349);
   hNCinFV_stack_12->SetBinError(10,0.438694);
   hNCinFV_stack_12->SetBinError(11,0.759212);
   hNCinFV_stack_12->SetBinError(12,0.6211758);
   hNCinFV_stack_12->SetBinError(13,0.7350883);
   hNCinFV_stack_12->SetBinError(14,0.9202356);
   hNCinFV_stack_12->SetBinError(15,0.7344388);
   hNCinFV_stack_12->SetBinError(16,0.89917);
   hNCinFV_stack_12->SetBinError(17,0.9211559);
   hNCinFV_stack_12->SetBinError(18,1.127887);
   hNCinFV_stack_12->SetBinError(19,1.092772);
   hNCinFV_stack_12->SetBinError(20,1.494912);
   hNCinFV_stack_12->SetBinError(21,1.19386);
   hNCinFV_stack_12->SetBinError(22,1.629905);
   hNCinFV_stack_12->SetBinError(23,1.932983);
   hNCinFV_stack_12->SetBinError(24,2.435382);
   hNCinFV_stack_12->SetBinError(25,2.959582);
   hNCinFV_stack_12->SetEntries(615);

   ci = 1487;
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
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,2.693908);
   hnumuCCinFV_stack_13->SetBinContent(2,3.421726);
   hnumuCCinFV_stack_13->SetBinContent(3,2.489149);
   hnumuCCinFV_stack_13->SetBinContent(4,2.744122);
   hnumuCCinFV_stack_13->SetBinContent(5,1.373551);
   hnumuCCinFV_stack_13->SetBinContent(6,3.845006);
   hnumuCCinFV_stack_13->SetBinContent(7,4.244684);
   hnumuCCinFV_stack_13->SetBinContent(8,3.810148);
   hnumuCCinFV_stack_13->SetBinContent(9,0.8342819);
   hnumuCCinFV_stack_13->SetBinContent(10,4.253889);
   hnumuCCinFV_stack_13->SetBinContent(11,4.173427);
   hnumuCCinFV_stack_13->SetBinContent(12,5.347076);
   hnumuCCinFV_stack_13->SetBinContent(13,3.087653);
   hnumuCCinFV_stack_13->SetBinContent(14,2.690674);
   hnumuCCinFV_stack_13->SetBinContent(15,3.065758);
   hnumuCCinFV_stack_13->SetBinContent(16,7.671995);
   hnumuCCinFV_stack_13->SetBinContent(17,7.805258);
   hnumuCCinFV_stack_13->SetBinContent(18,8.528371);
   hnumuCCinFV_stack_13->SetBinContent(19,8.886762);
   hnumuCCinFV_stack_13->SetBinContent(20,15.98891);
   hnumuCCinFV_stack_13->SetBinContent(21,13.42894);
   hnumuCCinFV_stack_13->SetBinContent(22,17.67126);
   hnumuCCinFV_stack_13->SetBinContent(23,19.02075);
   hnumuCCinFV_stack_13->SetBinContent(24,28.88969);
   hnumuCCinFV_stack_13->SetBinContent(25,43.21678);
   hnumuCCinFV_stack_13->SetBinError(1,0.7763593);
   hnumuCCinFV_stack_13->SetBinError(2,0.9984882);
   hnumuCCinFV_stack_13->SetBinError(3,0.8527744);
   hnumuCCinFV_stack_13->SetBinError(4,0.8055915);
   hnumuCCinFV_stack_13->SetBinError(5,0.5889727);
   hnumuCCinFV_stack_13->SetBinError(6,1.018691);
   hnumuCCinFV_stack_13->SetBinError(7,1.394883);
   hnumuCCinFV_stack_13->SetBinError(8,1.337291);
   hnumuCCinFV_stack_13->SetBinError(9,0.4191576);
   hnumuCCinFV_stack_13->SetBinError(10,1.85687);
   hnumuCCinFV_stack_13->SetBinError(11,1.002647);
   hnumuCCinFV_stack_13->SetBinError(12,1.375855);
   hnumuCCinFV_stack_13->SetBinError(13,0.9386452);
   hnumuCCinFV_stack_13->SetBinError(14,0.8447187);
   hnumuCCinFV_stack_13->SetBinError(15,0.9246804);
   hnumuCCinFV_stack_13->SetBinError(16,1.52784);
   hnumuCCinFV_stack_13->SetBinError(17,1.65762);
   hnumuCCinFV_stack_13->SetBinError(18,1.552942);
   hnumuCCinFV_stack_13->SetBinError(19,1.58495);
   hnumuCCinFV_stack_13->SetBinError(20,3.215167);
   hnumuCCinFV_stack_13->SetBinError(21,1.899296);
   hnumuCCinFV_stack_13->SetBinError(22,2.193484);
   hnumuCCinFV_stack_13->SetBinError(23,2.228018);
   hnumuCCinFV_stack_13->SetBinError(24,3.472584);
   hnumuCCinFV_stack_13->SetBinError(25,4.016077);
   hnumuCCinFV_stack_13->SetEntries(846);

   ci = 1488;
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
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,1.057646);
   hnueCCinFV_stack_14->SetBinContent(2,1.396617);
   hnueCCinFV_stack_14->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_14->SetBinContent(5,1.416171);
   hnueCCinFV_stack_14->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(7,0.4316896);
   hnueCCinFV_stack_14->SetBinContent(11,1.031049);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.2451269);
   hnueCCinFV_stack_14->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_14->SetBinContent(17,0.2542474);
   hnueCCinFV_stack_14->SetBinContent(18,2.870429);
   hnueCCinFV_stack_14->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(20,1.035547);
   hnueCCinFV_stack_14->SetBinContent(21,1.37819);
   hnueCCinFV_stack_14->SetBinContent(22,0.8733139);
   hnueCCinFV_stack_14->SetBinContent(23,2.815796);
   hnueCCinFV_stack_14->SetBinContent(24,1.81618);
   hnueCCinFV_stack_14->SetBinContent(25,13.64244);
   hnueCCinFV_stack_14->SetBinError(1,0.6523817);
   hnueCCinFV_stack_14->SetBinError(2,0.528252);
   hnueCCinFV_stack_14->SetBinError(3,0.457675);
   hnueCCinFV_stack_14->SetBinError(5,1.128487);
   hnueCCinFV_stack_14->SetBinError(6,0.3025491);
   hnueCCinFV_stack_14->SetBinError(7,0.4316896);
   hnueCCinFV_stack_14->SetBinError(11,0.5334159);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(13,0.1950249);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.2451269);
   hnueCCinFV_stack_14->SetBinError(16,0.2998007);
   hnueCCinFV_stack_14->SetBinError(17,0.2542474);
   hnueCCinFV_stack_14->SetBinError(18,1.444595);
   hnueCCinFV_stack_14->SetBinError(19,0.3387718);
   hnueCCinFV_stack_14->SetBinError(20,0.6257405);
   hnueCCinFV_stack_14->SetBinError(21,0.6653251);
   hnueCCinFV_stack_14->SetBinError(22,0.5237584);
   hnueCCinFV_stack_14->SetBinError(23,1.000065);
   hnueCCinFV_stack_14->SetBinError(24,0.6070553);
   hnueCCinFV_stack_14->SetBinError(25,2.63856);
   hnueCCinFV_stack_14->SetEntries(115);

   ci = 1489;
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
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__11->SetBinContent(1,71.05737);
   hmcerror__11->SetBinContent(2,56.71857);
   hmcerror__11->SetBinContent(3,56.13891);
   hmcerror__11->SetBinContent(4,48.12708);
   hmcerror__11->SetBinContent(5,49.28477);
   hmcerror__11->SetBinContent(6,52.41887);
   hmcerror__11->SetBinContent(7,56.48603);
   hmcerror__11->SetBinContent(8,43.36021);
   hmcerror__11->SetBinContent(9,46.42889);
   hmcerror__11->SetBinContent(10,49.44409);
   hmcerror__11->SetBinContent(11,64.43467);
   hmcerror__11->SetBinContent(12,68.07652);
   hmcerror__11->SetBinContent(13,71.56153);
   hmcerror__11->SetBinContent(14,83.93729);
   hmcerror__11->SetBinContent(15,84.34251);
   hmcerror__11->SetBinContent(16,104.5564);
   hmcerror__11->SetBinContent(17,121.4526);
   hmcerror__11->SetBinContent(18,133.5266);
   hmcerror__11->SetBinContent(19,167.5488);
   hmcerror__11->SetBinContent(20,208.3767);
   hmcerror__11->SetBinContent(21,248.9541);
   hmcerror__11->SetBinContent(22,296.0822);
   hmcerror__11->SetBinContent(23,385.6378);
   hmcerror__11->SetBinContent(24,515.407);
   hmcerror__11->SetBinContent(25,737.6417);
   hmcerror__11->SetBinError(1,17.57099);
   hmcerror__11->SetBinError(2,13.56519);
   hmcerror__11->SetBinError(3,13.22294);
   hmcerror__11->SetBinError(4,12.47541);
   hmcerror__11->SetBinError(5,12.39879);
   hmcerror__11->SetBinError(6,11.95209);
   hmcerror__11->SetBinError(7,12.53499);
   hmcerror__11->SetBinError(8,11.18442);
   hmcerror__11->SetBinError(9,10.56458);
   hmcerror__11->SetBinError(10,11.25311);
   hmcerror__11->SetBinError(11,14.16499);
   hmcerror__11->SetBinError(12,15.25906);
   hmcerror__11->SetBinError(13,15.53486);
   hmcerror__11->SetBinError(14,17.46066);
   hmcerror__11->SetBinError(15,18.94338);
   hmcerror__11->SetBinError(16,24.65019);
   hmcerror__11->SetBinError(17,28.97441);
   hmcerror__11->SetBinError(18,36.22972);
   hmcerror__11->SetBinError(19,39.71459);
   hmcerror__11->SetBinError(20,47.87073);
   hmcerror__11->SetBinError(21,59.16901);
   hmcerror__11->SetBinError(22,66.86227);
   hmcerror__11->SetBinError(23,79.94252);
   hmcerror__11->SetBinError(24,104.6374);
   hmcerror__11->SetBinError(25,152.3992);
   hmcerror__11->SetBinError(26,0.3895343);
   hmcerror__11->SetEntries(3775.136);

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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3013[25] = {
   75,
   58,
   51,
   48,
   47,
   48,
   49,
   56,
   61,
   71,
   61,
   61,
   66,
   63,
   79,
   95,
   138,
   126,
   150,
   216,
   236,
   301,
   370,
   540,
   757};
   Double_t _felx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3013[25] = {
   8.7852,
   7.7446,
   7.2725,
   7.0604,
   6.9882,
   7.0604,
   7.1318,
   7.6127,
   7.9383,
   8.5518,
   7.9383,
   7.9383,
   8.2509,
   8.0648,
   9.0124,
   9.8686,
   11.74734,
   11.22497,
   12.24745,
   14.69694,
   15.36229,
   17.34935,
   19.23538,
   23.2379,
   27.51363};
   Double_t _fehx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3013[25] = {
   8.5831,
   7.5415,
   7.0686,
   6.8561,
   6.7839,
   6.8561,
   6.9277,
   7.4094,
   7.7354,
   8.3496,
   7.7354,
   7.7354,
   8.0483,
   7.862,
   8.8105,
   9.667,
   11.74734,
   11.22497,
   12.24745,
   14.69694,
   15.36229,
   17.34935,
   19.23538,
   23.2379,
   27.51363};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(36.01062);
   Graph_Graph3013->SetMaximum(858.9638);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.0/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

   ci = 1476;
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

   ci = 1477;
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

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

   ci = 1483;
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

   ci = 1484;
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

   ci = 1485;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 627.0","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 145.1","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 219.2","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_costheta_all");
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
   
   Double_t _fx3014[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3014[25] = {
   0.2472789,
   0.2391667,
   0.2355396,
   0.2592182,
   0.2515744,
   0.2280112,
   0.221913,
   0.257942,
   0.2275433,
   0.2275926,
   0.2198349,
   0.2241457,
   0.2170839,
   0.2080203,
   0.2246006,
   0.2357598,
   0.2385656,
   0.2713297,
   0.2370329,
   0.2297317,
   0.2376704,
   0.2258234,
   0.2072995,
   0.203019,
   0.2066032};
   Double_t _fehx3014[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3014[25] = {
   0.2472789,
   0.2391667,
   0.2355396,
   0.2592182,
   0.2515744,
   0.2280112,
   0.221913,
   0.257942,
   0.2275433,
   0.2275926,
   0.2198349,
   0.2241457,
   0.2170839,
   0.2080203,
   0.2246006,
   0.2357598,
   0.2385656,
   0.2713297,
   0.2370329,
   0.2297317,
   0.2376704,
   0.2258234,
   0.2072995,
   0.203019,
   0.2066032};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3015[25] = {
   0.1895903,
   0.1785716,
   0.1811919,
   0.2018798,
   0.2115947,
   0.1964692,
   0.1796028,
   0.2067137,
   0.1975183,
   0.1958301,
   0.1722261,
   0.190228,
   0.192405,
   0.1853441,
   0.206802,
   0.2106863,
   0.2128699,
   0.2231978,
   0.225374,
   0.2157588,
   0.2186971,
   0.2069664,
   0.1943752,
   0.1864518,
   0.1988843};
   Double_t _fehx3015[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3015[25] = {
   0.1895903,
   0.1785716,
   0.1811919,
   0.2018798,
   0.2115947,
   0.1964692,
   0.1796028,
   0.2067137,
   0.1975183,
   0.1958301,
   0.1722261,
   0.190228,
   0.192405,
   0.1853441,
   0.206802,
   0.2106863,
   0.2128699,
   0.2231978,
   0.225374,
   0.2157588,
   0.2186971,
   0.2069664,
   0.1943752,
   0.1864518,
   0.1988843};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3016[25] = {
   1.055485,
   1.022593,
   0.9084608,
   0.9973596,
   0.9536414,
   0.9157008,
   0.8674711,
   1.291507,
   1.313837,
   1.435965,
   0.9466953,
   0.8960506,
   0.9222832,
   0.7505604,
   0.936657,
   0.9086006,
   1.136246,
   0.9436323,
   0.8952614,
   1.036584,
   0.947966,
   1.01661,
   0.9594495,
   1.047716,
   1.026243};
   Double_t _felx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3016[25] = {
   0.1236353,
   0.1365444,
   0.1295447,
   0.1467033,
   0.1417923,
   0.134692,
   0.1262578,
   0.1755688,
   0.1709776,
   0.172959,
   0.1231992,
   0.1166085,
   0.115298,
   0.09608126,
   0.1068548,
   0.09438543,
   0.09672367,
   0.08406545,
   0.07309779,
   0.07053063,
   0.06170733,
   0.05859641,
   0.04987941,
   0.0450865,
   0.03729945};
   Double_t _fehx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3016[25] = {
   0.1207911,
   0.1329635,
   0.1259127,
   0.1424583,
   0.137647,
   0.1307945,
   0.1226445,
   0.1708802,
   0.1666075,
   0.1688695,
   0.1200503,
   0.113628,
   0.1124669,
   0.09366517,
   0.104461,
   0.09245728,
   0.09672367,
   0.08406545,
   0.07309779,
   0.07053063,
   0.06170733,
   0.05859641,
   0.04987941,
   0.0450865,
   0.03729945};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.5594435);
   Graph_Graph3016->SetMaximum(1.69987);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
