#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 10:30:53 2022) by ROOT version 6.26/00
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
   hmc__10->SetBinContent(1,67.21066);
   hmc__10->SetBinContent(2,55.95794);
   hmc__10->SetBinContent(3,53.22961);
   hmc__10->SetBinContent(4,47.44861);
   hmc__10->SetBinContent(5,47.88497);
   hmc__10->SetBinContent(6,50.49975);
   hmc__10->SetBinContent(7,53.67783);
   hmc__10->SetBinContent(8,41.43921);
   hmc__10->SetBinContent(9,44.83546);
   hmc__10->SetBinContent(10,46.77617);
   hmc__10->SetBinContent(11,61.91537);
   hmc__10->SetBinContent(12,65.71667);
   hmc__10->SetBinContent(13,68.56206);
   hmc__10->SetBinContent(14,82.66451);
   hmc__10->SetBinContent(15,81.67168);
   hmc__10->SetBinContent(16,99.82584);
   hmc__10->SetBinContent(17,119.1162);
   hmc__10->SetBinContent(18,130.4357);
   hmc__10->SetBinContent(19,163.6315);
   hmc__10->SetBinContent(20,203.6189);
   hmc__10->SetBinContent(21,240.1997);
   hmc__10->SetBinContent(22,285.9919);
   hmc__10->SetBinContent(23,378.0474);
   hmc__10->SetBinContent(24,499.0583);
   hmc__10->SetBinContent(25,740.0439);
   hmc__10->SetBinError(1,28.89313);
   hmc__10->SetBinError(2,16.15833);
   hmc__10->SetBinError(3,19.94429);
   hmc__10->SetBinError(4,24.36581);
   hmc__10->SetBinError(5,16.68835);
   hmc__10->SetBinError(6,16.36671);
   hmc__10->SetBinError(7,21.54958);
   hmc__10->SetBinError(8,15.81732);
   hmc__10->SetBinError(9,14.96347);
   hmc__10->SetBinError(10,16.50781);
   hmc__10->SetBinError(11,18.33192);
   hmc__10->SetBinError(12,19.75608);
   hmc__10->SetBinError(13,20.61891);
   hmc__10->SetBinError(14,22.89578);
   hmc__10->SetBinError(15,26.10867);
   hmc__10->SetBinError(16,33.36766);
   hmc__10->SetBinError(17,33.4614);
   hmc__10->SetBinError(18,39.46672);
   hmc__10->SetBinError(19,43.88465);
   hmc__10->SetBinError(20,54.88464);
   hmc__10->SetBinError(21,65.74137);
   hmc__10->SetBinError(22,84.38514);
   hmc__10->SetBinError(23,85.89328);
   hmc__10->SetBinError(24,117.4349);
   hmc__10->SetBinError(25,181.044);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-15.14);
   hmc__10->SetMaximum(1589.7);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-1,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(777.0463);
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
   hbadmatch_stack_1->SetBinContent(1,2.800007);
   hbadmatch_stack_1->SetBinContent(2,1.498493);
   hbadmatch_stack_1->SetBinContent(3,3.011327);
   hbadmatch_stack_1->SetBinContent(4,1.956048);
   hbadmatch_stack_1->SetBinContent(5,1.202587);
   hbadmatch_stack_1->SetBinContent(6,1.546473);
   hbadmatch_stack_1->SetBinContent(7,2.32057);
   hbadmatch_stack_1->SetBinContent(8,1.608203);
   hbadmatch_stack_1->SetBinContent(9,1.18954);
   hbadmatch_stack_1->SetBinContent(10,0.8494838);
   hbadmatch_stack_1->SetBinContent(11,2.730894);
   hbadmatch_stack_1->SetBinContent(12,2.358719);
   hbadmatch_stack_1->SetBinContent(13,0.5903452);
   hbadmatch_stack_1->SetBinContent(14,6.485606);
   hbadmatch_stack_1->SetBinContent(15,3.054344);
   hbadmatch_stack_1->SetBinContent(16,2.063639);
   hbadmatch_stack_1->SetBinContent(17,3.416768);
   hbadmatch_stack_1->SetBinContent(18,2.023703);
   hbadmatch_stack_1->SetBinContent(19,3.942513);
   hbadmatch_stack_1->SetBinContent(20,6.33116);
   hbadmatch_stack_1->SetBinContent(21,3.886194);
   hbadmatch_stack_1->SetBinContent(22,8.303057);
   hbadmatch_stack_1->SetBinContent(23,6.955308);
   hbadmatch_stack_1->SetBinContent(24,11.38948);
   hbadmatch_stack_1->SetBinContent(25,16.07083);
   hbadmatch_stack_1->SetBinError(1,0.9029756);
   hbadmatch_stack_1->SetBinError(2,0.5691965);
   hbadmatch_stack_1->SetBinError(3,1.78226);
   hbadmatch_stack_1->SetBinError(4,0.6661853);
   hbadmatch_stack_1->SetBinError(5,0.4914582);
   hbadmatch_stack_1->SetBinError(6,0.7222332);
   hbadmatch_stack_1->SetBinError(7,0.8754282);
   hbadmatch_stack_1->SetBinError(8,0.6734231);
   hbadmatch_stack_1->SetBinError(9,0.4974416);
   hbadmatch_stack_1->SetBinError(10,0.4277806);
   hbadmatch_stack_1->SetBinError(11,0.9152419);
   hbadmatch_stack_1->SetBinError(12,0.8908249);
   hbadmatch_stack_1->SetBinError(13,0.3724112);
   hbadmatch_stack_1->SetBinError(14,2.094767);
   hbadmatch_stack_1->SetBinError(15,0.9301147);
   hbadmatch_stack_1->SetBinError(16,0.711194);
   hbadmatch_stack_1->SetBinError(17,1.022859);
   hbadmatch_stack_1->SetBinError(18,0.7298784);
   hbadmatch_stack_1->SetBinError(19,1.123769);
   hbadmatch_stack_1->SetBinError(20,1.313162);
   hbadmatch_stack_1->SetBinError(21,1.023528);
   hbadmatch_stack_1->SetBinError(22,1.559458);
   hbadmatch_stack_1->SetBinError(23,1.31049);
   hbadmatch_stack_1->SetBinError(24,1.816295);
   hbadmatch_stack_1->SetBinError(25,2.464226);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,8.972198);
   houtFV_stack_4->SetBinContent(2,9.725134);
   houtFV_stack_4->SetBinContent(3,9.893068);
   houtFV_stack_4->SetBinContent(4,8.781502);
   houtFV_stack_4->SetBinContent(5,8.076585);
   houtFV_stack_4->SetBinContent(6,9.252068);
   houtFV_stack_4->SetBinContent(7,10.01218);
   houtFV_stack_4->SetBinContent(8,7.300551);
   houtFV_stack_4->SetBinContent(9,10.27423);
   houtFV_stack_4->SetBinContent(10,6.162899);
   houtFV_stack_4->SetBinContent(11,7.278309);
   houtFV_stack_4->SetBinContent(12,9.699104);
   houtFV_stack_4->SetBinContent(13,11.24198);
   houtFV_stack_4->SetBinContent(14,11.26212);
   houtFV_stack_4->SetBinContent(15,12.14254);
   houtFV_stack_4->SetBinContent(16,11.289);
   houtFV_stack_4->SetBinContent(17,17.32499);
   houtFV_stack_4->SetBinContent(18,17.98603);
   houtFV_stack_4->SetBinContent(19,22.60753);
   houtFV_stack_4->SetBinContent(20,28.47542);
   houtFV_stack_4->SetBinContent(21,33.4073);
   houtFV_stack_4->SetBinContent(22,42.00581);
   houtFV_stack_4->SetBinContent(23,49.24846);
   houtFV_stack_4->SetBinContent(24,51.75343);
   houtFV_stack_4->SetBinContent(25,62.56994);
   houtFV_stack_4->SetBinError(1,1.538096);
   houtFV_stack_4->SetBinError(2,1.528281);
   houtFV_stack_4->SetBinError(3,1.650995);
   houtFV_stack_4->SetBinError(4,1.440653);
   houtFV_stack_4->SetBinError(5,1.402507);
   houtFV_stack_4->SetBinError(6,1.504103);
   houtFV_stack_4->SetBinError(7,1.579212);
   houtFV_stack_4->SetBinError(8,1.777526);
   houtFV_stack_4->SetBinError(9,1.598842);
   houtFV_stack_4->SetBinError(10,1.214777);
   houtFV_stack_4->SetBinError(11,1.248931);
   houtFV_stack_4->SetBinError(12,1.579497);
   houtFV_stack_4->SetBinError(13,1.683822);
   houtFV_stack_4->SetBinError(14,1.707926);
   houtFV_stack_4->SetBinError(15,1.78331);
   houtFV_stack_4->SetBinError(16,1.726368);
   houtFV_stack_4->SetBinError(17,2.090035);
   houtFV_stack_4->SetBinError(18,2.076349);
   houtFV_stack_4->SetBinError(19,2.413799);
   houtFV_stack_4->SetBinError(20,2.760267);
   houtFV_stack_4->SetBinError(21,2.78165);
   houtFV_stack_4->SetBinError(22,3.47586);
   houtFV_stack_4->SetBinError(23,3.477674);
   houtFV_stack_4->SetBinError(24,3.568985);
   houtFV_stack_4->SetBinError(25,3.971533);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.503672);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.824991);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5170794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3991064);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4735402);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1874346);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2141979);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4332463);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3242805);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.432802);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3731599);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2035967);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8421998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5553988);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8004737);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.936981);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.687491);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.922371);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,8.605371);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,21.24106);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,60.77715);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6352281);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5885172);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2002159);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.143969);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1822118);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1116469);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.08847444);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2936122);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1720732);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2160395);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2313363);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.08812068);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3946496);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2051415);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3806494);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5701366);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6611003);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5986524);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.123283);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.729239);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.916162);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.09386332);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2174293);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1502678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.06689942);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0341084);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01778102);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05458213);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.07270736);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4411409);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.007666246);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05367815);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04756694);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1299303);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1786244);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4269459);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.138336);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.158716);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.019185);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.40657);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.297012);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07737124);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1232877);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1247671);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04473242);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02419538);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01283426);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04066776);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05141187);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1882292);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.007666246);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04027067);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04111027);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.07343083);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06149121);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1569389);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06180518);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3894195);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.348518);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.4031757);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3267289);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.112);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.35846);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.30137);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.40264);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.5166);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.38479);
   hNCpi0inFVres_stack_7->SetBinContent(7,12.73765);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.97691);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.07555);
   hNCpi0inFVres_stack_7->SetBinContent(10,14.03815);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.3844);
   hNCpi0inFVres_stack_7->SetBinContent(12,19.67345);
   hNCpi0inFVres_stack_7->SetBinContent(13,19.6803);
   hNCpi0inFVres_stack_7->SetBinContent(14,23.22573);
   hNCpi0inFVres_stack_7->SetBinContent(15,26.90742);
   hNCpi0inFVres_stack_7->SetBinContent(16,32.18417);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.61988);
   hNCpi0inFVres_stack_7->SetBinContent(18,46.09488);
   hNCpi0inFVres_stack_7->SetBinContent(19,52.73736);
   hNCpi0inFVres_stack_7->SetBinContent(20,69.5176);
   hNCpi0inFVres_stack_7->SetBinContent(21,86.58327);
   hNCpi0inFVres_stack_7->SetBinContent(22,99.36176);
   hNCpi0inFVres_stack_7->SetBinContent(23,122.4527);
   hNCpi0inFVres_stack_7->SetBinContent(24,159.9162);
   hNCpi0inFVres_stack_7->SetBinContent(25,204.2507);
   hNCpi0inFVres_stack_7->SetBinError(1,1.409913);
   hNCpi0inFVres_stack_7->SetBinError(2,1.195757);
   hNCpi0inFVres_stack_7->SetBinError(3,1.251492);
   hNCpi0inFVres_stack_7->SetBinError(4,1.225463);
   hNCpi0inFVres_stack_7->SetBinError(5,1.289403);
   hNCpi0inFVres_stack_7->SetBinError(6,1.38359);
   hNCpi0inFVres_stack_7->SetBinError(7,1.176607);
   hNCpi0inFVres_stack_7->SetBinError(8,1.143964);
   hNCpi0inFVres_stack_7->SetBinError(9,1.311885);
   hNCpi0inFVres_stack_7->SetBinError(10,1.20407);
   hNCpi0inFVres_stack_7->SetBinError(11,1.326524);
   hNCpi0inFVres_stack_7->SetBinError(12,1.521805);
   hNCpi0inFVres_stack_7->SetBinError(13,1.513609);
   hNCpi0inFVres_stack_7->SetBinError(14,1.633163);
   hNCpi0inFVres_stack_7->SetBinError(15,1.748538);
   hNCpi0inFVres_stack_7->SetBinError(16,1.942533);
   hNCpi0inFVres_stack_7->SetBinError(17,2.288224);
   hNCpi0inFVres_stack_7->SetBinError(18,2.299335);
   hNCpi0inFVres_stack_7->SetBinError(19,2.562194);
   hNCpi0inFVres_stack_7->SetBinError(20,2.933701);
   hNCpi0inFVres_stack_7->SetBinError(21,3.212737);
   hNCpi0inFVres_stack_7->SetBinError(22,3.377894);
   hNCpi0inFVres_stack_7->SetBinError(23,3.771757);
   hNCpi0inFVres_stack_7->SetBinError(24,4.306124);
   hNCpi0inFVres_stack_7->SetBinError(25,4.960959);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.826024);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.763736);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.432312);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.504219);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.422242);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.345785);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.116971);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.18698);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.543209);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.696083);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.689669);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.466958);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.427404);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.635395);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.188394);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.746962);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.476942);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.311282);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.283153);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.49277);
   hNCpi0inFVdis_stack_8->SetBinContent(21,15.15175);
   hNCpi0inFVdis_stack_8->SetBinContent(22,20.52138);
   hNCpi0inFVdis_stack_8->SetBinContent(23,26.37191);
   hNCpi0inFVdis_stack_8->SetBinContent(24,38.83277);
   hNCpi0inFVdis_stack_8->SetBinContent(25,60.39545);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.753835);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.837386);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4888726);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4963219);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8325281);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5349782);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2105518);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4692604);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.625023);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5885865);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5330219);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4724746);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5395551);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6658433);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5670724);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7980392);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6238844);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.72947);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.057031);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.214051);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.322995);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.65798);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.692023);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.219778);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.775178);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05931247);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1463682);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04465501);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1302015);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,10.88046);
   hCCpi0inFV_stack_10->SetBinContent(2,6.886782);
   hCCpi0inFV_stack_10->SetBinContent(3,9.092932);
   hCCpi0inFV_stack_10->SetBinContent(4,5.911977);
   hCCpi0inFV_stack_10->SetBinContent(5,4.694729);
   hCCpi0inFV_stack_10->SetBinContent(6,6.798132);
   hCCpi0inFV_stack_10->SetBinContent(7,7.22897);
   hCCpi0inFV_stack_10->SetBinContent(8,7.209441);
   hCCpi0inFV_stack_10->SetBinContent(9,4.088127);
   hCCpi0inFV_stack_10->SetBinContent(10,5.346411);
   hCCpi0inFV_stack_10->SetBinContent(11,7.135379);
   hCCpi0inFV_stack_10->SetBinContent(12,10.05013);
   hCCpi0inFV_stack_10->SetBinContent(13,9.432433);
   hCCpi0inFV_stack_10->SetBinContent(14,11.48547);
   hCCpi0inFV_stack_10->SetBinContent(15,9.484738);
   hCCpi0inFV_stack_10->SetBinContent(16,14.84184);
   hCCpi0inFV_stack_10->SetBinContent(17,16.03335);
   hCCpi0inFV_stack_10->SetBinContent(18,13.82468);
   hCCpi0inFV_stack_10->SetBinContent(19,22.83778);
   hCCpi0inFV_stack_10->SetBinContent(20,28.38049);
   hCCpi0inFV_stack_10->SetBinContent(21,35.69011);
   hCCpi0inFV_stack_10->SetBinContent(22,42.95689);
   hCCpi0inFV_stack_10->SetBinContent(23,66.87087);
   hCCpi0inFV_stack_10->SetBinContent(24,88.39336);
   hCCpi0inFV_stack_10->SetBinContent(25,133.5694);
   hCCpi0inFV_stack_10->SetBinError(1,1.621626);
   hCCpi0inFV_stack_10->SetBinError(2,1.271405);
   hCCpi0inFV_stack_10->SetBinError(3,1.488708);
   hCCpi0inFV_stack_10->SetBinError(4,1.225813);
   hCCpi0inFV_stack_10->SetBinError(5,1.056768);
   hCCpi0inFV_stack_10->SetBinError(6,1.280552);
   hCCpi0inFV_stack_10->SetBinError(7,1.345055);
   hCCpi0inFV_stack_10->SetBinError(8,1.313065);
   hCCpi0inFV_stack_10->SetBinError(9,1.026928);
   hCCpi0inFV_stack_10->SetBinError(10,1.217226);
   hCCpi0inFV_stack_10->SetBinError(11,1.300961);
   hCCpi0inFV_stack_10->SetBinError(12,1.586568);
   hCCpi0inFV_stack_10->SetBinError(13,1.500662);
   hCCpi0inFV_stack_10->SetBinError(14,1.700052);
   hCCpi0inFV_stack_10->SetBinError(15,1.533249);
   hCCpi0inFV_stack_10->SetBinError(16,1.972408);
   hCCpi0inFV_stack_10->SetBinError(17,1.982066);
   hCCpi0inFV_stack_10->SetBinError(18,1.882699);
   hCCpi0inFV_stack_10->SetBinError(19,2.407813);
   hCCpi0inFV_stack_10->SetBinError(20,2.662128);
   hCCpi0inFV_stack_10->SetBinError(21,3.020941);
   hCCpi0inFV_stack_10->SetBinError(22,3.279181);
   hCCpi0inFV_stack_10->SetBinError(23,4.128812);
   hCCpi0inFV_stack_10->SetBinError(24,4.7355);
   hCCpi0inFV_stack_10->SetBinError(25,5.786757);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.270315);
   hNCinFV_stack_11->SetBinContent(2,3.92078);
   hNCinFV_stack_11->SetBinContent(3,3.204158);
   hNCinFV_stack_11->SetBinContent(4,2.974514);
   hNCinFV_stack_11->SetBinContent(5,2.558635);
   hNCinFV_stack_11->SetBinContent(6,3.128828);
   hNCinFV_stack_11->SetBinContent(7,2.093331);
   hNCinFV_stack_11->SetBinContent(8,1.780891);
   hNCinFV_stack_11->SetBinContent(9,2.854097);
   hNCinFV_stack_11->SetBinContent(10,1.062509);
   hNCinFV_stack_11->SetBinContent(11,3.627276);
   hNCinFV_stack_11->SetBinContent(12,1.924435);
   hNCinFV_stack_11->SetBinContent(13,2.945254);
   hNCinFV_stack_11->SetBinContent(14,4.655188);
   hNCinFV_stack_11->SetBinContent(15,3.48465);
   hNCinFV_stack_11->SetBinContent(16,4.062698);
   hNCinFV_stack_11->SetBinContent(17,5.121556);
   hNCinFV_stack_11->SetBinContent(18,6.369696);
   hNCinFV_stack_11->SetBinContent(19,7.687882);
   hNCinFV_stack_11->SetBinContent(20,12.16411);
   hNCinFV_stack_11->SetBinContent(21,10.26091);
   hNCinFV_stack_11->SetBinContent(22,15.23892);
   hNCinFV_stack_11->SetBinContent(23,24.35008);
   hNCinFV_stack_11->SetBinContent(24,38.58928);
   hNCinFV_stack_11->SetBinContent(25,64.49578);
   hNCinFV_stack_11->SetBinError(1,0.8667291);
   hNCinFV_stack_11->SetBinError(2,0.9635512);
   hNCinFV_stack_11->SetBinError(3,0.9835023);
   hNCinFV_stack_11->SetBinError(4,0.8933741);
   hNCinFV_stack_11->SetBinError(5,0.947028);
   hNCinFV_stack_11->SetBinError(6,0.8790088);
   hNCinFV_stack_11->SetBinError(7,0.6505502);
   hNCinFV_stack_11->SetBinError(8,0.7015877);
   hNCinFV_stack_11->SetBinError(9,1.041324);
   hNCinFV_stack_11->SetBinError(10,0.4997685);
   hNCinFV_stack_11->SetBinError(11,0.9798851);
   hNCinFV_stack_11->SetBinError(12,0.7280003);
   hNCinFV_stack_11->SetBinError(13,0.8352326);
   hNCinFV_stack_11->SetBinError(14,1.141501);
   hNCinFV_stack_11->SetBinError(15,0.8481676);
   hNCinFV_stack_11->SetBinError(16,1.0187);
   hNCinFV_stack_11->SetBinError(17,1.10896);
   hNCinFV_stack_11->SetBinError(18,1.244003);
   hNCinFV_stack_11->SetBinError(19,1.457953);
   hNCinFV_stack_11->SetBinError(20,1.77214);
   hNCinFV_stack_11->SetBinError(21,1.545184);
   hNCinFV_stack_11->SetBinError(22,2.077824);
   hNCinFV_stack_11->SetBinError(23,2.611888);
   hNCinFV_stack_11->SetBinError(24,3.421442);
   hNCinFV_stack_11->SetBinError(25,4.418202);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.161125);
   hnumuCCinFV_stack_12->SetBinContent(2,4.398541);
   hnumuCCinFV_stack_12->SetBinContent(3,3.026042);
   hnumuCCinFV_stack_12->SetBinContent(4,3.0843);
   hnumuCCinFV_stack_12->SetBinContent(5,2.303875);
   hnumuCCinFV_stack_12->SetBinContent(6,4.236746);
   hnumuCCinFV_stack_12->SetBinContent(7,4.4414);
   hnumuCCinFV_stack_12->SetBinContent(8,3.810148);
   hnumuCCinFV_stack_12->SetBinContent(9,1.17446);
   hnumuCCinFV_stack_12->SetBinContent(10,4.594066);
   hnumuCCinFV_stack_12->SetBinContent(11,4.368452);
   hnumuCCinFV_stack_12->SetBinContent(12,5.883969);
   hnumuCCinFV_stack_12->SetBinContent(13,3.624546);
   hnumuCCinFV_stack_12->SetBinContent(14,3.371029);
   hnumuCCinFV_stack_12->SetBinContent(15,3.260782);
   hnumuCCinFV_stack_12->SetBinContent(16,9.13414);
   hnumuCCinFV_stack_12->SetBinContent(17,8.393714);
   hnumuCCinFV_stack_12->SetBinContent(18,9.405441);
   hnumuCCinFV_stack_12->SetBinContent(19,11.47594);
   hnumuCCinFV_stack_12->SetBinContent(20,16.9691);
   hnumuCCinFV_stack_12->SetBinContent(21,15.71828);
   hnumuCCinFV_stack_12->SetBinContent(22,20.01048);
   hnumuCCinFV_stack_12->SetBinContent(23,23.20518);
   hnumuCCinFV_stack_12->SetBinContent(24,37.41053);
   hnumuCCinFV_stack_12->SetBinContent(25,59.59369);
   hnumuCCinFV_stack_12->SetBinError(1,0.9944663);
   hnumuCCinFV_stack_12->SetBinError(2,1.089869);
   hnumuCCinFV_stack_12->SetBinError(3,0.9389579);
   hnumuCCinFV_stack_12->SetBinError(4,0.8744704);
   hnumuCCinFV_stack_12->SetBinError(5,0.7607236);
   hnumuCCinFV_stack_12->SetBinError(6,1.055681);
   hnumuCCinFV_stack_12->SetBinError(7,1.408686);
   hnumuCCinFV_stack_12->SetBinError(8,1.337291);
   hnumuCCinFV_stack_12->SetBinError(9,0.5398276);
   hnumuCCinFV_stack_12->SetBinError(10,1.887773);
   hnumuCCinFV_stack_12->SetBinError(11,1.021438);
   hnumuCCinFV_stack_12->SetBinError(12,1.430872);
   hnumuCCinFV_stack_12->SetBinError(13,1.017582);
   hnumuCCinFV_stack_12->SetBinError(14,0.9721066);
   hnumuCCinFV_stack_12->SetBinError(15,0.9450231);
   hnumuCCinFV_stack_12->SetBinError(16,1.648799);
   hnumuCCinFV_stack_12->SetBinError(17,1.69208);
   hnumuCCinFV_stack_12->SetBinError(18,1.63761);
   hnumuCCinFV_stack_12->SetBinError(19,1.779555);
   hnumuCCinFV_stack_12->SetBinError(20,3.244913);
   hnumuCCinFV_stack_12->SetBinError(21,2.073972);
   hnumuCCinFV_stack_12->SetBinError(22,2.337896);
   hnumuCCinFV_stack_12->SetBinError(23,2.436714);
   hnumuCCinFV_stack_12->SetBinError(24,3.745067);
   hnumuCCinFV_stack_12->SetBinError(25,4.491604);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.057646);
   hnueCCinFV_stack_13->SetBinContent(2,1.396617);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(5,1.416171);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(11,1.031049);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(17,0.2542474);
   hnueCCinFV_stack_13->SetBinContent(18,2.870429);
   hnueCCinFV_stack_13->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(20,1.035547);
   hnueCCinFV_stack_13->SetBinContent(21,1.37819);
   hnueCCinFV_stack_13->SetBinContent(22,0.8733139);
   hnueCCinFV_stack_13->SetBinContent(23,2.815796);
   hnueCCinFV_stack_13->SetBinContent(24,1.81618);
   hnueCCinFV_stack_13->SetBinContent(25,13.64244);
   hnueCCinFV_stack_13->SetBinError(1,0.6523817);
   hnueCCinFV_stack_13->SetBinError(2,0.528252);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(5,1.128487);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.4316896);
   hnueCCinFV_stack_13->SetBinError(11,0.5334159);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2451269);
   hnueCCinFV_stack_13->SetBinError(16,0.2998007);
   hnueCCinFV_stack_13->SetBinError(17,0.2542474);
   hnueCCinFV_stack_13->SetBinError(18,1.444595);
   hnueCCinFV_stack_13->SetBinError(19,0.3387718);
   hnueCCinFV_stack_13->SetBinError(20,0.6257405);
   hnueCCinFV_stack_13->SetBinError(21,0.6653251);
   hnueCCinFV_stack_13->SetBinError(22,0.5237584);
   hnueCCinFV_stack_13->SetBinError(23,1.000065);
   hnueCCinFV_stack_13->SetBinError(24,0.6070553);
   hnueCCinFV_stack_13->SetBinError(25,2.63856);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__11->SetBinContent(1,67.21066);
   hmcerror__11->SetBinContent(2,55.95794);
   hmcerror__11->SetBinContent(3,53.22961);
   hmcerror__11->SetBinContent(4,47.44861);
   hmcerror__11->SetBinContent(5,47.88497);
   hmcerror__11->SetBinContent(6,50.49975);
   hmcerror__11->SetBinContent(7,53.67783);
   hmcerror__11->SetBinContent(8,41.43921);
   hmcerror__11->SetBinContent(9,44.83546);
   hmcerror__11->SetBinContent(10,46.77617);
   hmcerror__11->SetBinContent(11,61.91537);
   hmcerror__11->SetBinContent(12,65.71667);
   hmcerror__11->SetBinContent(13,68.56206);
   hmcerror__11->SetBinContent(14,82.66451);
   hmcerror__11->SetBinContent(15,81.67168);
   hmcerror__11->SetBinContent(16,99.82584);
   hmcerror__11->SetBinContent(17,119.1162);
   hmcerror__11->SetBinContent(18,130.4357);
   hmcerror__11->SetBinContent(19,163.6315);
   hmcerror__11->SetBinContent(20,203.6189);
   hmcerror__11->SetBinContent(21,240.1997);
   hmcerror__11->SetBinContent(22,285.9919);
   hmcerror__11->SetBinContent(23,378.0474);
   hmcerror__11->SetBinContent(24,499.0583);
   hmcerror__11->SetBinContent(25,740.0439);
   hmcerror__11->SetBinError(1,28.89313);
   hmcerror__11->SetBinError(2,16.15833);
   hmcerror__11->SetBinError(3,19.94429);
   hmcerror__11->SetBinError(4,24.36581);
   hmcerror__11->SetBinError(5,16.68835);
   hmcerror__11->SetBinError(6,16.36671);
   hmcerror__11->SetBinError(7,21.54958);
   hmcerror__11->SetBinError(8,15.81732);
   hmcerror__11->SetBinError(9,14.96347);
   hmcerror__11->SetBinError(10,16.50781);
   hmcerror__11->SetBinError(11,18.33192);
   hmcerror__11->SetBinError(12,19.75608);
   hmcerror__11->SetBinError(13,20.61891);
   hmcerror__11->SetBinError(14,22.89578);
   hmcerror__11->SetBinError(15,26.10867);
   hmcerror__11->SetBinError(16,33.36766);
   hmcerror__11->SetBinError(17,33.4614);
   hmcerror__11->SetBinError(18,39.46672);
   hmcerror__11->SetBinError(19,43.88465);
   hmcerror__11->SetBinError(20,54.88464);
   hmcerror__11->SetBinError(21,65.74137);
   hmcerror__11->SetBinError(22,84.38514);
   hmcerror__11->SetBinError(23,85.89328);
   hmcerror__11->SetBinError(24,117.4349);
   hmcerror__11->SetBinError(25,181.044);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.8/25","");
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
   0.429889,
   0.2887585,
   0.3746841,
   0.51352,
   0.3485091,
   0.3240949,
   0.4014614,
   0.3816993,
   0.3337418,
   0.3529108,
   0.2960803,
   0.3006252,
   0.3007335,
   0.2769723,
   0.3196784,
   0.3342588,
   0.2809141,
   0.3025761,
   0.2681919,
   0.2695459,
   0.2736946,
   0.2950613,
   0.2272024,
   0.2353129,
   0.2446395};
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
   0.429889,
   0.2887585,
   0.3746841,
   0.51352,
   0.3485091,
   0.3240949,
   0.4014614,
   0.3816993,
   0.3337418,
   0.3529108,
   0.2960803,
   0.3006252,
   0.3007335,
   0.2769723,
   0.3196784,
   0.3342588,
   0.2809141,
   0.3025761,
   0.2681919,
   0.2695459,
   0.2736946,
   0.2950613,
   0.2272024,
   0.2353129,
   0.2446395};
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
   0.2131593,
   0.1923082,
   0.2032173,
   0.212654,
   0.2186954,
   0.2135457,
   0.2154571,
   0.2233743,
   0.2130152,
   0.2162543,
   0.1896782,
   0.2089391,
   0.2126532,
   0.1983957,
   0.2240406,
   0.2246838,
   0.2268063,
   0.241208,
   0.2361795,
   0.2287053,
   0.2345675,
   0.2240201,
   0.2092524,
   0.2090543,
   0.2127045};
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
   0.2131593,
   0.1923082,
   0.2032173,
   0.212654,
   0.2186954,
   0.2135457,
   0.2154571,
   0.2233743,
   0.2130152,
   0.2162543,
   0.1896782,
   0.2089391,
   0.2126532,
   0.1983957,
   0.2240406,
   0.2246838,
   0.2268063,
   0.241208,
   0.2361795,
   0.2287053,
   0.2345675,
   0.2240201,
   0.2092524,
   0.2090543,
   0.2127045};
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
   1.115894,
   1.036493,
   0.9581133,
   1.011621,
   0.9815188,
   0.9504997,
   0.9128536,
   1.351377,
   1.36053,
   1.517867,
   0.9852158,
   0.9282272,
   0.9626316,
   0.7621167,
   0.9672876,
   0.9516574,
   1.158533,
   0.9659934,
   0.9166937,
   1.060805,
   0.9825158,
   1.052477,
   0.9787133,
   1.082038,
   1.022912};
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
   0.1307114,
   0.1384004,
   0.1366251,
   0.148801,
   0.1459372,
   0.1398106,
   0.132863,
   0.1837076,
   0.1770541,
   0.1828239,
   0.1282121,
   0.1207958,
   0.1203421,
   0.09756062,
   0.1103491,
   0.09885818,
   0.09862088,
   0.08605754,
   0.07484772,
   0.07217866,
   0.06395633,
   0.06066378,
   0.05088088,
   0.0465635,
   0.03717838};
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
   0.1277044,
   0.1347709,
   0.1327945,
   0.1444953,
   0.1416708,
   0.135765,
   0.1290607,
   0.1788017,
   0.1725286,
   0.1785012,
   0.1249351,
   0.1177083,
   0.1173871,
   0.09510733,
   0.1078771,
   0.09683866,
   0.09862088,
   0.08605754,
   0.07484772,
   0.07217866,
   0.06395633,
   0.06066378,
   0.05088088,
   0.0465635,
   0.03717838};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.5613749);
   Graph_Graph3016->SetMaximum(1.799549);
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
