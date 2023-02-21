#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Oct 21 19:09:17 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-276.9231,-1.44,2030.769,159.2337);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__25->SetBinContent(3,2.142554);
   hmc__25->SetBinContent(4,29.32782);
   hmc__25->SetBinContent(5,39.45449);
   hmc__25->SetBinContent(6,56.47755);
   hmc__25->SetBinContent(7,58.60252);
   hmc__25->SetBinContent(8,59.08304);
   hmc__25->SetBinContent(9,67.78903);
   hmc__25->SetBinContent(10,58.29494);
   hmc__25->SetBinContent(11,43.11759);
   hmc__25->SetBinContent(12,43.12189);
   hmc__25->SetBinContent(13,36.00133);
   hmc__25->SetBinContent(14,31.18248);
   hmc__25->SetBinContent(15,23.07086);
   hmc__25->SetBinContent(16,18.43893);
   hmc__25->SetBinContent(17,14.25654);
   hmc__25->SetBinContent(18,10.93853);
   hmc__25->SetBinContent(19,11.72869);
   hmc__25->SetBinContent(20,8.123144);
   hmc__25->SetBinContent(21,5.955489);
   hmc__25->SetBinContent(22,5.152753);
   hmc__25->SetBinContent(23,5.328195);
   hmc__25->SetBinContent(24,3.157136);
   hmc__25->SetBinContent(25,5.10792);
   hmc__25->SetBinContent(26,24.7357);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,0.3895343);
   hmc__25->SetBinError(3,3.150386);
   hmc__25->SetBinError(4,10.2309);
   hmc__25->SetBinError(5,19.70263);
   hmc__25->SetBinError(6,25.64177);
   hmc__25->SetBinError(7,28.07182);
   hmc__25->SetBinError(8,26.40708);
   hmc__25->SetBinError(9,27.43875);
   hmc__25->SetBinError(10,20.55815);
   hmc__25->SetBinError(11,18.3592);
   hmc__25->SetBinError(12,16.08959);
   hmc__25->SetBinError(13,28.63593);
   hmc__25->SetBinError(14,15.88502);
   hmc__25->SetBinError(15,15.92647);
   hmc__25->SetBinError(16,16.016);
   hmc__25->SetBinError(17,18.84865);
   hmc__25->SetBinError(18,8.89379);
   hmc__25->SetBinError(19,11.45082);
   hmc__25->SetBinError(20,10.95045);
   hmc__25->SetBinError(21,11.96049);
   hmc__25->SetBinError(22,6.43349);
   hmc__25->SetBinError(23,7.666533);
   hmc__25->SetBinError(24,7.262403);
   hmc__25->SetBinError(25,4.263445);
   hmc__25->SetBinError(26,13.78253);
   hmc__25->SetMinimum(-1.44);
   hmc__25->SetMaximum(151.2);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1800);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(71.17848);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(3,0.3917402);
   hbadmatch_stack_1->SetBinContent(4,0.1967154);
   hbadmatch_stack_1->SetBinContent(5,1.111621);
   hbadmatch_stack_1->SetBinContent(6,1.85274);
   hbadmatch_stack_1->SetBinContent(7,2.37542);
   hbadmatch_stack_1->SetBinContent(8,1.640522);
   hbadmatch_stack_1->SetBinContent(9,1.744657);
   hbadmatch_stack_1->SetBinContent(10,3.012188);
   hbadmatch_stack_1->SetBinContent(11,1.938794);
   hbadmatch_stack_1->SetBinContent(12,1.097057);
   hbadmatch_stack_1->SetBinContent(13,0.6401153);
   hbadmatch_stack_1->SetBinContent(14,1.001476);
   hbadmatch_stack_1->SetBinContent(15,1.139506);
   hbadmatch_stack_1->SetBinContent(16,0.3900497);
   hbadmatch_stack_1->SetBinContent(17,0.573692);
   hbadmatch_stack_1->SetBinContent(18,0.3229986);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.7399068);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinError(3,0.2770047);
   hbadmatch_stack_1->SetBinError(4,0.1967154);
   hbadmatch_stack_1->SetBinError(5,0.5702215);
   hbadmatch_stack_1->SetBinError(6,0.6933144);
   hbadmatch_stack_1->SetBinError(7,0.7701835);
   hbadmatch_stack_1->SetBinError(8,0.620196);
   hbadmatch_stack_1->SetBinError(9,0.5983418);
   hbadmatch_stack_1->SetBinError(10,1.009512);
   hbadmatch_stack_1->SetBinError(11,0.632382);
   hbadmatch_stack_1->SetBinError(12,0.5222189);
   hbadmatch_stack_1->SetBinError(13,0.3280207);
   hbadmatch_stack_1->SetBinError(14,0.4831568);
   hbadmatch_stack_1->SetBinError(15,0.6374448);
   hbadmatch_stack_1->SetBinError(16,0.2758068);
   hbadmatch_stack_1->SetBinError(17,0.4605543);
   hbadmatch_stack_1->SetBinError(18,0.2332637);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.4336269);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(4,10.85119);
   hext_stack_2->SetBinContent(5,6.628036);
   hext_stack_2->SetBinContent(6,4.919439);
   hext_stack_2->SetBinContent(7,4.773807);
   hext_stack_2->SetBinContent(8,3.166181);
   hext_stack_2->SetBinContent(9,7.836244);
   hext_stack_2->SetBinContent(10,7.408103);
   hext_stack_2->SetBinContent(11,6.150826);
   hext_stack_2->SetBinContent(12,7.504666);
   hext_stack_2->SetBinContent(13,5.318858);
   hext_stack_2->SetBinContent(14,3.15182);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,1.779209);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,1.704188);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,1.290409);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,2.566457);
   hext_stack_2->SetBinContent(26,8.381295);
   hext_stack_2->SetBinError(4,2.54358);
   hext_stack_2->SetBinError(5,1.778983);
   hext_stack_2->SetBinError(6,1.563138);
   hext_stack_2->SetBinError(7,1.433855);
   hext_stack_2->SetBinError(8,1.061777);
   hext_stack_2->SetBinError(9,1.930499);
   hext_stack_2->SetBinError(10,2.04086);
   hext_stack_2->SetBinError(11,1.695078);
   hext_stack_2->SetBinError(12,1.955197);
   hext_stack_2->SetBinError(13,1.676283);
   hext_stack_2->SetBinError(14,1.23684);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,0.9206235);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.7656743);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.788756);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,1.283228);
   hext_stack_2->SetBinError(26,2.116792);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(4,0.2623434);
   hdirt_stack_3->SetBinContent(5,0.8315581);
   hdirt_stack_3->SetBinContent(6,0.6001908);
   hdirt_stack_3->SetBinContent(7,0.5134285);
   hdirt_stack_3->SetBinContent(8,0.8795015);
   hdirt_stack_3->SetBinContent(9,0.4149213);
   hdirt_stack_3->SetBinContent(10,0.7430996);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.1380715);
   hdirt_stack_3->SetBinError(4,0.2623434);
   hdirt_stack_3->SetBinError(5,0.5225181);
   hdirt_stack_3->SetBinError(6,0.4278042);
   hdirt_stack_3->SetBinError(7,0.3024222);
   hdirt_stack_3->SetBinError(8,0.4707205);
   hdirt_stack_3->SetBinError(9,0.4149213);
   hdirt_stack_3->SetBinError(10,0.5275648);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(19,0.1380715);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(3,0.3917402);
   houtFV_stack_4->SetBinContent(4,5.9813);
   houtFV_stack_4->SetBinContent(5,8.965585);
   houtFV_stack_4->SetBinContent(6,10.25837);
   houtFV_stack_4->SetBinContent(7,11.93362);
   houtFV_stack_4->SetBinContent(8,10.42762);
   houtFV_stack_4->SetBinContent(9,14.27122);
   houtFV_stack_4->SetBinContent(10,12.48692);
   houtFV_stack_4->SetBinContent(11,7.001725);
   houtFV_stack_4->SetBinContent(12,5.803726);
   houtFV_stack_4->SetBinContent(13,5.28461);
   houtFV_stack_4->SetBinContent(14,6.166057);
   houtFV_stack_4->SetBinContent(15,3.988956);
   houtFV_stack_4->SetBinContent(16,4.204596);
   houtFV_stack_4->SetBinContent(17,1.967366);
   houtFV_stack_4->SetBinContent(18,1.123658);
   houtFV_stack_4->SetBinContent(19,1.897603);
   houtFV_stack_4->SetBinContent(20,0.5352025);
   houtFV_stack_4->SetBinContent(21,0.9260038);
   houtFV_stack_4->SetBinContent(22,0.972532);
   houtFV_stack_4->SetBinContent(23,0.7336084);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(25,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.1950248);
   houtFV_stack_4->SetBinError(3,0.2770047);
   houtFV_stack_4->SetBinError(4,1.263687);
   houtFV_stack_4->SetBinError(5,1.560609);
   houtFV_stack_4->SetBinError(6,1.498535);
   houtFV_stack_4->SetBinError(7,1.595541);
   houtFV_stack_4->SetBinError(8,1.544728);
   houtFV_stack_4->SetBinError(9,1.83393);
   houtFV_stack_4->SetBinError(10,1.841022);
   houtFV_stack_4->SetBinError(11,1.241864);
   houtFV_stack_4->SetBinError(12,1.156344);
   houtFV_stack_4->SetBinError(13,1.209802);
   houtFV_stack_4->SetBinError(14,1.593916);
   houtFV_stack_4->SetBinError(15,1.137391);
   houtFV_stack_4->SetBinError(16,1.222298);
   houtFV_stack_4->SetBinError(17,0.6706461);
   houtFV_stack_4->SetBinError(18,0.5188295);
   houtFV_stack_4->SetBinError(19,0.785685);
   houtFV_stack_4->SetBinError(20,0.3921167);
   houtFV_stack_4->SetBinError(21,0.6774313);
   houtFV_stack_4->SetBinError(22,0.6434678);
   houtFV_stack_4->SetBinError(23,0.4394482);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(25,0.3401776);
   houtFV_stack_4->SetBinError(26,0.1950249);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.117208);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05204101);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1052837);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03689442);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08241028);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1584557);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.0897754);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08999967);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03585128);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04474213);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.05737158);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04023288);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04027047);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02535645);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.106717);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.8268683);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.158285);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.945331);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.7829);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.16772);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.41208);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.74706);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.335917);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.886321);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.607289);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.679162);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.788818);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.181823);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.846658);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9306);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.239406);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.245582);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.7357327);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.8642813);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5880507);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.8596934);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1541769);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.4629086);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3473638);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6207308);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8629035);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9717556);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9994859);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9158585);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9239816);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7843759);
   hNCpi0inFVres_stack_7->SetBinError(11,0.625412);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7701455);
   hNCpi0inFVres_stack_7->SetBinError(13,0.426004);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6724791);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6795579);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4519905);
   hNCpi0inFVres_stack_7->SetBinError(17,0.319863);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4497749);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5837576);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3565733);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4163609);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4370136);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5866081);
   hNCpi0inFVres_stack_7->SetBinError(24,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1293223);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1781082);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.08826034);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.4632973);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.014099);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.8503);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.849782);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.206182);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.934717);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.87906);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.23013);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.069554);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.264163);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.36336);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.841347);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.0106);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.324505);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7811608);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.450785);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9030051);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7955372);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2068918);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8344191);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1694578);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.322564);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.05790339);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1648509);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2525518);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4022044);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4759262);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5050333);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3812102);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5729206);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6129121);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6601169);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6823951);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4240682);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5366454);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4553743);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5035272);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2738494);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.040026);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5163738);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4834978);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1300762);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4149598);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.0803814);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3564642);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(4,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(5,1.566961);
   hCCpi0inFV_stack_10->SetBinContent(6,6.347256);
   hCCpi0inFV_stack_10->SetBinContent(7,9.794554);
   hCCpi0inFV_stack_10->SetBinContent(8,13.54902);
   hCCpi0inFV_stack_10->SetBinContent(9,14.96041);
   hCCpi0inFV_stack_10->SetBinContent(10,11.20299);
   hCCpi0inFV_stack_10->SetBinContent(11,11.10651);
   hCCpi0inFV_stack_10->SetBinContent(12,10.22217);
   hCCpi0inFV_stack_10->SetBinContent(13,11.65915);
   hCCpi0inFV_stack_10->SetBinContent(14,9.182683);
   hCCpi0inFV_stack_10->SetBinContent(15,6.638589);
   hCCpi0inFV_stack_10->SetBinContent(16,4.107964);
   hCCpi0inFV_stack_10->SetBinContent(17,3.094507);
   hCCpi0inFV_stack_10->SetBinContent(18,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(19,2.689284);
   hCCpi0inFV_stack_10->SetBinContent(20,1.999038);
   hCCpi0inFV_stack_10->SetBinContent(21,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(22,0.6087605);
   hCCpi0inFV_stack_10->SetBinContent(23,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(24,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(26,6.734104);
   hCCpi0inFV_stack_10->SetBinError(4,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(5,0.5540095);
   hCCpi0inFV_stack_10->SetBinError(6,1.272398);
   hCCpi0inFV_stack_10->SetBinError(7,1.56164);
   hCCpi0inFV_stack_10->SetBinError(8,1.858999);
   hCCpi0inFV_stack_10->SetBinError(9,2.001723);
   hCCpi0inFV_stack_10->SetBinError(10,1.655608);
   hCCpi0inFV_stack_10->SetBinError(11,1.614346);
   hCCpi0inFV_stack_10->SetBinError(12,1.633681);
   hCCpi0inFV_stack_10->SetBinError(13,1.693957);
   hCCpi0inFV_stack_10->SetBinError(14,1.565559);
   hCCpi0inFV_stack_10->SetBinError(15,1.302954);
   hCCpi0inFV_stack_10->SetBinError(16,1.000995);
   hCCpi0inFV_stack_10->SetBinError(17,0.8488408);
   hCCpi0inFV_stack_10->SetBinError(18,0.785313);
   hCCpi0inFV_stack_10->SetBinError(19,0.798363);
   hCCpi0inFV_stack_10->SetBinError(20,0.7339349);
   hCCpi0inFV_stack_10->SetBinError(21,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(22,0.456594);
   hCCpi0inFV_stack_10->SetBinError(23,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(24,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(25,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(26,1.345519);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.6803553);
   hNCinFV_stack_11->SetBinContent(5,1.34683);
   hNCinFV_stack_11->SetBinContent(6,2.380856);
   hNCinFV_stack_11->SetBinContent(7,3.139019);
   hNCinFV_stack_11->SetBinContent(8,2.525519);
   hNCinFV_stack_11->SetBinContent(9,2.442542);
   hNCinFV_stack_11->SetBinContent(10,2.715847);
   hNCinFV_stack_11->SetBinContent(11,1.46523);
   hNCinFV_stack_11->SetBinContent(12,3.22175);
   hNCinFV_stack_11->SetBinContent(13,1.451679);
   hNCinFV_stack_11->SetBinContent(14,1.949077);
   hNCinFV_stack_11->SetBinContent(15,2.304724);
   hNCinFV_stack_11->SetBinContent(16,2.103486);
   hNCinFV_stack_11->SetBinContent(17,2.560886);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(19,1.246301);
   hNCinFV_stack_11->SetBinContent(20,1.186645);
   hNCinFV_stack_11->SetBinContent(21,0.6803553);
   hNCinFV_stack_11->SetBinContent(23,0.772576);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.5352025);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.4810838);
   hNCinFV_stack_11->SetBinError(5,0.5747001);
   hNCinFV_stack_11->SetBinError(6,0.7989123);
   hNCinFV_stack_11->SetBinError(7,0.8412761);
   hNCinFV_stack_11->SetBinError(8,0.6545263);
   hNCinFV_stack_11->SetBinError(9,0.6676834);
   hNCinFV_stack_11->SetBinError(10,0.7372851);
   hNCinFV_stack_11->SetBinError(11,0.5647418);
   hNCinFV_stack_11->SetBinError(12,1.174939);
   hNCinFV_stack_11->SetBinError(13,0.5028918);
   hNCinFV_stack_11->SetBinError(14,0.7137801);
   hNCinFV_stack_11->SetBinError(15,0.8441031);
   hNCinFV_stack_11->SetBinError(16,0.9043132);
   hNCinFV_stack_11->SetBinError(17,1.167606);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.7693124);
   hNCinFV_stack_11->SetBinError(20,0.5639351);
   hNCinFV_stack_11->SetBinError(21,0.4810838);
   hNCinFV_stack_11->SetBinError(23,0.608533);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.3921167);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(3,0.2472291);
   hnumuCCinFV_stack_12->SetBinContent(4,5.784634);
   hnumuCCinFV_stack_12->SetBinContent(5,8.962055);
   hnumuCCinFV_stack_12->SetBinContent(6,15.275);
   hnumuCCinFV_stack_12->SetBinContent(7,8.746006);
   hnumuCCinFV_stack_12->SetBinContent(8,11.23987);
   hnumuCCinFV_stack_12->SetBinContent(9,12.10453);
   hnumuCCinFV_stack_12->SetBinContent(10,8.840373);
   hnumuCCinFV_stack_12->SetBinContent(11,7.083193);
   hnumuCCinFV_stack_12->SetBinContent(12,7.559827);
   hnumuCCinFV_stack_12->SetBinContent(13,4.962751);
   hnumuCCinFV_stack_12->SetBinContent(14,4.008466);
   hnumuCCinFV_stack_12->SetBinContent(15,2.461883);
   hnumuCCinFV_stack_12->SetBinContent(16,2.735289);
   hnumuCCinFV_stack_12->SetBinContent(17,1.977591);
   hnumuCCinFV_stack_12->SetBinContent(18,2.338749);
   hnumuCCinFV_stack_12->SetBinContent(19,1.072095);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(21,1.565653);
   hnumuCCinFV_stack_12->SetBinContent(22,1.320373);
   hnumuCCinFV_stack_12->SetBinContent(23,1.250827);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5867651);
   hnumuCCinFV_stack_12->SetBinContent(26,5.32014);
   hnumuCCinFV_stack_12->SetBinError(3,0.2472291);
   hnumuCCinFV_stack_12->SetBinError(4,1.798685);
   hnumuCCinFV_stack_12->SetBinError(5,1.574806);
   hnumuCCinFV_stack_12->SetBinError(6,2.395667);
   hnumuCCinFV_stack_12->SetBinError(7,1.708049);
   hnumuCCinFV_stack_12->SetBinError(8,2.119839);
   hnumuCCinFV_stack_12->SetBinError(9,2.084114);
   hnumuCCinFV_stack_12->SetBinError(10,1.533479);
   hnumuCCinFV_stack_12->SetBinError(11,1.618823);
   hnumuCCinFV_stack_12->SetBinError(12,1.431607);
   hnumuCCinFV_stack_12->SetBinError(13,1.217988);
   hnumuCCinFV_stack_12->SetBinError(14,1.085082);
   hnumuCCinFV_stack_12->SetBinError(15,0.8033926);
   hnumuCCinFV_stack_12->SetBinError(16,0.8656454);
   hnumuCCinFV_stack_12->SetBinError(17,0.6728247);
   hnumuCCinFV_stack_12->SetBinError(18,0.854836);
   hnumuCCinFV_stack_12->SetBinError(19,0.5551335);
   hnumuCCinFV_stack_12->SetBinError(20,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(21,0.6068058);
   hnumuCCinFV_stack_12->SetBinError(22,0.5548703);
   hnumuCCinFV_stack_12->SetBinError(23,0.6401814);
   hnumuCCinFV_stack_12->SetBinError(24,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(25,0.3387718);
   hnumuCCinFV_stack_12->SetBinError(26,1.177227);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,1.72261);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(17,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(18,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(25,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(26,1.756559);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,1.577117);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.2331833);
   hnueCCinFV_stack_13->SetBinError(17,0.3654046);
   hnueCCinFV_stack_13->SetBinError(18,0.3326517);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.1711909);
   hnueCCinFV_stack_13->SetBinError(25,0.2171002);
   hnueCCinFV_stack_13->SetBinError(26,1.241362);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__26->SetBinContent(3,2.142554);
   hmcerror__26->SetBinContent(4,29.32782);
   hmcerror__26->SetBinContent(5,39.45449);
   hmcerror__26->SetBinContent(6,56.47755);
   hmcerror__26->SetBinContent(7,58.60252);
   hmcerror__26->SetBinContent(8,59.08304);
   hmcerror__26->SetBinContent(9,67.78903);
   hmcerror__26->SetBinContent(10,58.29494);
   hmcerror__26->SetBinContent(11,43.11759);
   hmcerror__26->SetBinContent(12,43.12189);
   hmcerror__26->SetBinContent(13,36.00133);
   hmcerror__26->SetBinContent(14,31.18248);
   hmcerror__26->SetBinContent(15,23.07086);
   hmcerror__26->SetBinContent(16,18.43893);
   hmcerror__26->SetBinContent(17,14.25654);
   hmcerror__26->SetBinContent(18,10.93853);
   hmcerror__26->SetBinContent(19,11.72869);
   hmcerror__26->SetBinContent(20,8.123144);
   hmcerror__26->SetBinContent(21,5.955489);
   hmcerror__26->SetBinContent(22,5.152753);
   hmcerror__26->SetBinContent(23,5.328195);
   hmcerror__26->SetBinContent(24,3.157136);
   hmcerror__26->SetBinContent(25,5.10792);
   hmcerror__26->SetBinContent(26,24.7357);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,0.3895343);
   hmcerror__26->SetBinError(3,3.150386);
   hmcerror__26->SetBinError(4,10.2309);
   hmcerror__26->SetBinError(5,19.70263);
   hmcerror__26->SetBinError(6,25.64177);
   hmcerror__26->SetBinError(7,28.07182);
   hmcerror__26->SetBinError(8,26.40708);
   hmcerror__26->SetBinError(9,27.43875);
   hmcerror__26->SetBinError(10,20.55815);
   hmcerror__26->SetBinError(11,18.3592);
   hmcerror__26->SetBinError(12,16.08959);
   hmcerror__26->SetBinError(13,28.63593);
   hmcerror__26->SetBinError(14,15.88502);
   hmcerror__26->SetBinError(15,15.92647);
   hmcerror__26->SetBinError(16,16.016);
   hmcerror__26->SetBinError(17,18.84865);
   hmcerror__26->SetBinError(18,8.89379);
   hmcerror__26->SetBinError(19,11.45082);
   hmcerror__26->SetBinError(20,10.95045);
   hmcerror__26->SetBinError(21,11.96049);
   hmcerror__26->SetBinError(22,6.43349);
   hmcerror__26->SetBinError(23,7.666533);
   hmcerror__26->SetBinError(24,7.262403);
   hmcerror__26->SetBinError(25,4.263445);
   hmcerror__26->SetBinError(26,13.78253);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3033[25] = {
   0,
   0,
   1,
   23,
   45,
   61,
   70,
   72,
   59,
   50,
   36,
   37,
   29,
   19,
   13,
   13,
   9,
   8,
   8,
   5,
   5,
   4,
   3,
   1,
   2};
   Double_t _felx3033[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3033[25] = {
   0,
   0,
   1,
   4.9457,
   6.8416,
   7.9383,
   8.4925,
   8.6108,
   7.8097,
   7.2025,
   6.1381,
   6.2203,
   5.5285,
   4.5151,
   3.77763,
   3.77763,
   3.19354,
   3.0307,
   3.0307,
   2.48995,
   2.48995,
   2.29683,
   2.143368,
   1,
   2};
   Double_t _fehx3033[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3033[25] = {
   1.1478,
   1.1478,
   1.35971,
   4.7346,
   6.637,
   7.7354,
   8.2902,
   8.4085,
   7.6066,
   6.9985,
   5.9318,
   6.0141,
   5.3201,
   4.3011,
   3.5552,
   3.5552,
   2.9582,
   2.7896,
   2.7896,
   2.21064,
   2.21064,
   1.98186,
   1.72422,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1980);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(88.44935);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 573.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 80.1","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.1","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.1","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.6","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 125.4","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.0","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.8","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3034[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3034[25] = {
   0,
   0,
   1.470388,
   0.3488461,
   0.4993762,
   0.454017,
   0.4790207,
   0.4469485,
   0.4047669,
   0.3526574,
   0.4257939,
   0.3731188,
   0.795413,
   0.5094214,
   0.6903283,
   0.8685966,
   1.322105,
   0.8130699,
   0.9763078,
   1.348055,
   2.008314,
   1.248554,
   1.438861,
   2.300314,
   0.8346735};
   Double_t _fehx3034[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3034[25] = {
   0,
   0,
   1.470388,
   0.3488461,
   0.4993762,
   0.454017,
   0.4790207,
   0.4469485,
   0.4047669,
   0.3526574,
   0.4257939,
   0.3731188,
   0.795413,
   0.5094214,
   0.6903283,
   0.8685966,
   1.322105,
   0.8130699,
   0.9763078,
   1.348055,
   2.008314,
   1.248554,
   1.438861,
   2.300314,
   0.8346735};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1980);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3035[25] = {
   0,
   0,
   0.4544635,
   0.259248,
   0.4165761,
   0.3915511,
   0.3480256,
   0.3522291,
   0.3080369,
   0.2576277,
   0.2961361,
   0.2439174,
   0.2400988,
   0.2335975,
   0.255027,
   0.2596031,
   0.3115607,
   0.305665,
   0.3618033,
   0.3380583,
   0.4892474,
   0.3580852,
   0.4226041,
   0.4051408,
   0.344165};
   Double_t _fehx3035[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3035[25] = {
   0,
   0,
   0.4544635,
   0.259248,
   0.4165761,
   0.3915511,
   0.3480256,
   0.3522291,
   0.3080369,
   0.2576277,
   0.2961361,
   0.2439174,
   0.2400988,
   0.2335975,
   0.255027,
   0.2596031,
   0.3115607,
   0.305665,
   0.3618033,
   0.3380583,
   0.4892474,
   0.3580852,
   0.4226041,
   0.4051408,
   0.344165};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1980);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3036[25] = {
   10,
   10,
   0.4667328,
   0.7842383,
   1.140555,
   1.080075,
   1.194488,
   1.218624,
   0.8703473,
   0.8577073,
   0.8349261,
   0.8580328,
   0.8055258,
   0.6093164,
   0.5634813,
   0.7050299,
   0.6312891,
   0.7313596,
   0.6820879,
   0.6155252,
   0.8395616,
   0.7762841,
   0.5630425,
   0.3167427,
   0.3915488};
   Double_t _felx3036[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3036[25] = {
   0,
   0,
   0.4667328,
   0.1686351,
   0.1734049,
   0.1405567,
   0.144917,
   0.1457406,
   0.115206,
   0.1235527,
   0.1423572,
   0.1442492,
   0.1535638,
   0.144796,
   0.1637403,
   0.2048725,
   0.2240052,
   0.2770665,
   0.2584005,
   0.3065254,
   0.4180933,
   0.4457481,
   0.4022691,
   0.3167427,
   0.3915488};
   Double_t _fehx3036[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3036[25] = {
   0,
   0,
   0.6346212,
   0.1614372,
   0.1682191,
   0.1369641,
   0.1414649,
   0.1423166,
   0.1122099,
   0.1200533,
   0.1375726,
   0.1394674,
   0.1477751,
   0.1379332,
   0.1540991,
   0.1928094,
   0.2074977,
   0.2550251,
   0.237844,
   0.2721409,
   0.3711937,
   0.3846216,
   0.323603,
   0.4306783,
   0.2974146};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1980);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,1800,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
