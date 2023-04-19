#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 15:06:05 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-2.553535,676.9231,282.3672);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__22->SetBinContent(1,3.980506);
   hmc__22->SetBinContent(2,15.10166);
   hmc__22->SetBinContent(3,47.59658);
   hmc__22->SetBinContent(4,80.95688);
   hmc__22->SetBinContent(5,112.2723);
   hmc__22->SetBinContent(6,127.6768);
   hmc__22->SetBinContent(7,122.5239);
   hmc__22->SetBinContent(8,105.6621);
   hmc__22->SetBinContent(9,84.4071);
   hmc__22->SetBinContent(10,70.5547);
   hmc__22->SetBinContent(11,63.15191);
   hmc__22->SetBinContent(12,50.88445);
   hmc__22->SetBinContent(13,44.31688);
   hmc__22->SetBinContent(14,35.26655);
   hmc__22->SetBinContent(15,30.04053);
   hmc__22->SetBinContent(16,23.68311);
   hmc__22->SetBinContent(17,20.40096);
   hmc__22->SetBinContent(18,15.32354);
   hmc__22->SetBinContent(19,16.26406);
   hmc__22->SetBinContent(20,11.92729);
   hmc__22->SetBinContent(21,7.532723);
   hmc__22->SetBinContent(22,6.839383);
   hmc__22->SetBinContent(23,5.709962);
   hmc__22->SetBinContent(24,3.62431);
   hmc__22->SetBinContent(25,48.55986);
   hmc__22->SetBinError(1,28.1787);
   hmc__22->SetBinError(2,9.150719);
   hmc__22->SetBinError(3,27.00348);
   hmc__22->SetBinError(4,21.65644);
   hmc__22->SetBinError(5,37.29244);
   hmc__22->SetBinError(6,33.013);
   hmc__22->SetBinError(7,38.28054);
   hmc__22->SetBinError(8,29.26678);
   hmc__22->SetBinError(9,25.74741);
   hmc__22->SetBinError(10,24.02009);
   hmc__22->SetBinError(11,18.41559);
   hmc__22->SetBinError(12,16.86471);
   hmc__22->SetBinError(13,17.43097);
   hmc__22->SetBinError(14,14.19989);
   hmc__22->SetBinError(15,13.19702);
   hmc__22->SetBinError(16,20.59738);
   hmc__22->SetBinError(17,11.01616);
   hmc__22->SetBinError(18,9.414778);
   hmc__22->SetBinError(19,10.66471);
   hmc__22->SetBinError(20,8.348974);
   hmc__22->SetBinError(21,12.92544);
   hmc__22->SetBinError(22,6.513347);
   hmc__22->SetBinError(23,5.06543);
   hmc__22->SetBinError(24,4.69474);
   hmc__22->SetBinError(25,20.18317);
   hmc__22->SetMinimum(-2.553535);
   hmc__22->SetMaximum(268.1212);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,600);
   hs8_stack_8->SetMinimum(-3.871883e-08);
   hs8_stack_8->SetMaximum(134.0606);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.071247);
   hbadmatch_stack_1->SetBinContent(2,1.428237);
   hbadmatch_stack_1->SetBinContent(3,2.998346);
   hbadmatch_stack_1->SetBinContent(4,4.031899);
   hbadmatch_stack_1->SetBinContent(5,3.329907);
   hbadmatch_stack_1->SetBinContent(6,4.521444);
   hbadmatch_stack_1->SetBinContent(7,5.723714);
   hbadmatch_stack_1->SetBinContent(8,3.45632);
   hbadmatch_stack_1->SetBinContent(9,4.520336);
   hbadmatch_stack_1->SetBinContent(10,1.072095);
   hbadmatch_stack_1->SetBinContent(11,1.326947);
   hbadmatch_stack_1->SetBinContent(12,1.270501);
   hbadmatch_stack_1->SetBinContent(13,0.588319);
   hbadmatch_stack_1->SetBinContent(14,0.7991863);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(23,0.7363783);
   hbadmatch_stack_1->SetBinContent(25,0.7868615);
   hbadmatch_stack_1->SetBinError(1,1.071247);
   hbadmatch_stack_1->SetBinError(2,0.6591445);
   hbadmatch_stack_1->SetBinError(3,0.8980652);
   hbadmatch_stack_1->SetBinError(4,1.044772);
   hbadmatch_stack_1->SetBinError(5,0.8448574);
   hbadmatch_stack_1->SetBinError(6,1.139051);
   hbadmatch_stack_1->SetBinError(7,1.317455);
   hbadmatch_stack_1->SetBinError(8,0.9537484);
   hbadmatch_stack_1->SetBinError(9,1.252547);
   hbadmatch_stack_1->SetBinError(10,0.5551335);
   hbadmatch_stack_1->SetBinError(11,0.6095374);
   hbadmatch_stack_1->SetBinError(12,0.5895188);
   hbadmatch_stack_1->SetBinError(13,0.4382355);
   hbadmatch_stack_1->SetBinError(14,0.491967);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(23,0.5222028);
   hbadmatch_stack_1->SetBinError(25,0.3934307);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.3243973);
   hext_stack_2->SetBinContent(2,6.482403);
   hext_stack_2->SetBinContent(3,15.39281);
   hext_stack_2->SetBinContent(4,21.80297);
   hext_stack_2->SetBinContent(5,20.97263);
   hext_stack_2->SetBinContent(6,27.44622);
   hext_stack_2->SetBinContent(7,19.78597);
   hext_stack_2->SetBinContent(8,18.59647);
   hext_stack_2->SetBinContent(9,12.99353);
   hext_stack_2->SetBinContent(10,10.26425);
   hext_stack_2->SetBinContent(11,11.00683);
   hext_stack_2->SetBinContent(12,7.537797);
   hext_stack_2->SetBinContent(13,4.933801);
   hext_stack_2->SetBinContent(14,5.109793);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,2.745221);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,1.950793);
   hext_stack_2->SetBinContent(19,1.048213);
   hext_stack_2->SetBinContent(20,1.219797);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.9660115);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,4.874778);
   hext_stack_2->SetBinError(1,0.3243973);
   hext_stack_2->SetBinError(2,1.666529);
   hext_stack_2->SetBinError(3,2.571509);
   hext_stack_2->SetBinError(4,2.965192);
   hext_stack_2->SetBinError(5,3.033223);
   hext_stack_2->SetBinError(6,3.421625);
   hext_stack_2->SetBinError(7,2.834571);
   hext_stack_2->SetBinError(8,2.921622);
   hext_stack_2->SetBinError(9,2.179412);
   hext_stack_2->SetBinError(10,2.187428);
   hext_stack_2->SetBinError(11,2.233678);
   hext_stack_2->SetBinError(12,1.7757);
   hext_stack_2->SetBinError(13,1.428634);
   hext_stack_2->SetBinError(14,1.447444);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,1.168097);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,0.8755137);
   hext_stack_2->SetBinError(19,0.7595995);
   hext_stack_2->SetBinError(20,0.7042499);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7189592);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.359687);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.2761429);
   hdirt_stack_3->SetBinContent(3,1.629463);
   hdirt_stack_3->SetBinContent(4,2.093315);
   hdirt_stack_3->SetBinContent(5,3.915828);
   hdirt_stack_3->SetBinContent(6,4.146621);
   hdirt_stack_3->SetBinContent(7,1.885121);
   hdirt_stack_3->SetBinContent(8,1.358039);
   hdirt_stack_3->SetBinContent(9,0.8668123);
   hdirt_stack_3->SetBinContent(10,0.8494049);
   hdirt_stack_3->SetBinContent(12,1.051731);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,1.066189);
   hdirt_stack_3->SetBinContent(16,0.165479);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.399291);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.1952625);
   hdirt_stack_3->SetBinError(3,0.6454604);
   hdirt_stack_3->SetBinError(4,0.7404203);
   hdirt_stack_3->SetBinError(5,1.017452);
   hdirt_stack_3->SetBinError(6,1.063188);
   hdirt_stack_3->SetBinError(7,0.7236492);
   hdirt_stack_3->SetBinError(8,0.6345893);
   hdirt_stack_3->SetBinError(9,0.5289483);
   hdirt_stack_3->SetBinError(10,0.5084893);
   hdirt_stack_3->SetBinError(12,0.5487592);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.9383312);
   hdirt_stack_3->SetBinError(16,0.165479);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.399291);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.073786);
   houtFV_stack_4->SetBinContent(2,4.332701);
   houtFV_stack_4->SetBinContent(3,14.50247);
   houtFV_stack_4->SetBinContent(4,19.60747);
   houtFV_stack_4->SetBinContent(5,29.96956);
   houtFV_stack_4->SetBinContent(6,30.6794);
   houtFV_stack_4->SetBinContent(7,31.13151);
   houtFV_stack_4->SetBinContent(8,23.96511);
   houtFV_stack_4->SetBinContent(9,17.22815);
   houtFV_stack_4->SetBinContent(10,13.78761);
   houtFV_stack_4->SetBinContent(11,9.56464);
   houtFV_stack_4->SetBinContent(12,9.461311);
   houtFV_stack_4->SetBinContent(13,8.377941);
   houtFV_stack_4->SetBinContent(14,4.498013);
   houtFV_stack_4->SetBinContent(15,5.109879);
   houtFV_stack_4->SetBinContent(16,4.741583);
   houtFV_stack_4->SetBinContent(17,2.617664);
   houtFV_stack_4->SetBinContent(18,2.537621);
   houtFV_stack_4->SetBinContent(19,3.199134);
   houtFV_stack_4->SetBinContent(20,1.999038);
   houtFV_stack_4->SetBinContent(21,1.135974);
   houtFV_stack_4->SetBinContent(22,1.702266);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,3.916725);
   houtFV_stack_4->SetBinError(1,0.5557297);
   houtFV_stack_4->SetBinError(2,1.025824);
   houtFV_stack_4->SetBinError(3,1.902599);
   houtFV_stack_4->SetBinError(4,2.373998);
   houtFV_stack_4->SetBinError(5,2.778856);
   houtFV_stack_4->SetBinError(6,3.037444);
   houtFV_stack_4->SetBinError(7,2.78461);
   houtFV_stack_4->SetBinError(8,2.525978);
   houtFV_stack_4->SetBinError(9,2.12542);
   houtFV_stack_4->SetBinError(10,1.859078);
   houtFV_stack_4->SetBinError(11,1.524376);
   houtFV_stack_4->SetBinError(12,1.597728);
   houtFV_stack_4->SetBinError(13,1.439932);
   houtFV_stack_4->SetBinError(14,1.038297);
   houtFV_stack_4->SetBinError(15,1.191947);
   houtFV_stack_4->SetBinError(16,1.066409);
   houtFV_stack_4->SetBinError(17,0.8164991);
   houtFV_stack_4->SetBinError(18,0.8329108);
   houtFV_stack_4->SetBinError(19,0.9292355);
   houtFV_stack_4->SetBinError(20,0.7339349);
   houtFV_stack_4->SetBinError(21,0.5236232);
   houtFV_stack_4->SetBinError(22,0.6646458);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,0.993377);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.711454);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.426652);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9338218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3068998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7249039);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.017858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6422043);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5153221);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.14598);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3035023);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.608499);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2812022);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.09253378);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2578571);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3833116);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3408521);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2596123);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4235873);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.488086);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.17099);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.939578);
   hNCpi0inFVres_stack_7->SetBinContent(5,17.19245);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.64767);
   hNCpi0inFVres_stack_7->SetBinContent(7,17.90207);
   hNCpi0inFVres_stack_7->SetBinContent(8,14.74951);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.57383);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.29423);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.896555);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.083631);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.420015);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.895222);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.769092);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.197137);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.306578);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.649348);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.137938);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.39484);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.799394);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.81218);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.031804);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5573358);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.856199);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2304939);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7955651);
   hNCpi0inFVres_stack_7->SetBinError(4,1.014913);
   hNCpi0inFVres_stack_7->SetBinError(5,1.367587);
   hNCpi0inFVres_stack_7->SetBinError(6,1.492598);
   hNCpi0inFVres_stack_7->SetBinError(7,1.375178);
   hNCpi0inFVres_stack_7->SetBinError(8,1.121517);
   hNCpi0inFVres_stack_7->SetBinError(9,1.25365);
   hNCpi0inFVres_stack_7->SetBinError(10,1.070439);
   hNCpi0inFVres_stack_7->SetBinError(11,0.93372);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7872446);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9071153);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7539088);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7038479);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6381068);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6465393);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5274672);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6554585);
   hNCpi0inFVres_stack_7->SetBinError(20,0.388188);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4839846);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4712859);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2739576);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1704726);
   hNCpi0inFVres_stack_7->SetBinError(25,0.786297);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.115008);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.035212);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.010384);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.682152);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.192402);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.621111);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.55627);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.093587);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.868644);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.022594);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.677248);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.47754);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.020761);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7670858);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.854362);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.353658);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.03114);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7259042);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6971721);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.966392);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3516243);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4422429);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4998085);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6366314);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5600354);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4603535);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6391737);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5462558);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4584479);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4903757);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5282045);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.317805);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4113113);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2468026);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4653296);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4563921);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.297566);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3442606);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3138005);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7777537);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(2,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(3,1.94241);
   hCCpi0inFV_stack_10->SetBinContent(4,12.3828);
   hCCpi0inFV_stack_10->SetBinContent(5,15.58624);
   hCCpi0inFV_stack_10->SetBinContent(6,19.80426);
   hCCpi0inFV_stack_10->SetBinContent(7,17.63307);
   hCCpi0inFV_stack_10->SetBinContent(8,21.97903);
   hCCpi0inFV_stack_10->SetBinContent(9,17.27963);
   hCCpi0inFV_stack_10->SetBinContent(10,17.61604);
   hCCpi0inFV_stack_10->SetBinContent(11,16.13817);
   hCCpi0inFV_stack_10->SetBinContent(12,13.84403);
   hCCpi0inFV_stack_10->SetBinContent(13,11.19471);
   hCCpi0inFV_stack_10->SetBinContent(14,10.00767);
   hCCpi0inFV_stack_10->SetBinContent(15,7.342238);
   hCCpi0inFV_stack_10->SetBinContent(16,5.645461);
   hCCpi0inFV_stack_10->SetBinContent(17,4.641476);
   hCCpi0inFV_stack_10->SetBinContent(18,3.75656);
   hCCpi0inFV_stack_10->SetBinContent(19,4.728303);
   hCCpi0inFV_stack_10->SetBinContent(20,3.742089);
   hCCpi0inFV_stack_10->SetBinContent(21,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(22,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(23,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(24,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(25,12.46062);
   hCCpi0inFV_stack_10->SetBinError(1,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(2,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(3,0.6614647);
   hCCpi0inFV_stack_10->SetBinError(4,1.776762);
   hCCpi0inFV_stack_10->SetBinError(5,1.983591);
   hCCpi0inFV_stack_10->SetBinError(6,2.268775);
   hCCpi0inFV_stack_10->SetBinError(7,2.109169);
   hCCpi0inFV_stack_10->SetBinError(8,2.426949);
   hCCpi0inFV_stack_10->SetBinError(9,2.113573);
   hCCpi0inFV_stack_10->SetBinError(10,2.114389);
   hCCpi0inFV_stack_10->SetBinError(11,1.962465);
   hCCpi0inFV_stack_10->SetBinError(12,1.906853);
   hCCpi0inFV_stack_10->SetBinError(13,1.672278);
   hCCpi0inFV_stack_10->SetBinError(14,1.556638);
   hCCpi0inFV_stack_10->SetBinError(15,1.317258);
   hCCpi0inFV_stack_10->SetBinError(16,1.164976);
   hCCpi0inFV_stack_10->SetBinError(17,1.074749);
   hCCpi0inFV_stack_10->SetBinError(18,1.039357);
   hCCpi0inFV_stack_10->SetBinError(19,1.126548);
   hCCpi0inFV_stack_10->SetBinError(20,0.9675733);
   hCCpi0inFV_stack_10->SetBinError(21,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(22,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(23,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(24,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(25,1.77251);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,0.975584);
   hNCinFV_stack_11->SetBinContent(4,2.640747);
   hNCinFV_stack_11->SetBinContent(5,3.464564);
   hNCinFV_stack_11->SetBinContent(6,3.909558);
   hNCinFV_stack_11->SetBinContent(7,5.128496);
   hNCinFV_stack_11->SetBinContent(8,4.249735);
   hNCinFV_stack_11->SetBinContent(9,4.30637);
   hNCinFV_stack_11->SetBinContent(10,3.072824);
   hNCinFV_stack_11->SetBinContent(11,4.435225);
   hNCinFV_stack_11->SetBinContent(12,1.712114);
   hNCinFV_stack_11->SetBinContent(13,2.340906);
   hNCinFV_stack_11->SetBinContent(14,2.197444);
   hNCinFV_stack_11->SetBinContent(15,1.65886);
   hNCinFV_stack_11->SetBinContent(16,1.802323);
   hNCinFV_stack_11->SetBinContent(17,1.515398);
   hNCinFV_stack_11->SetBinContent(18,0.9286332);
   hNCinFV_stack_11->SetBinContent(19,0.9768147);
   hNCinFV_stack_11->SetBinContent(20,0.9801958);
   hNCinFV_stack_11->SetBinContent(21,0.7319179);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,2.732646);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.483067);
   hNCinFV_stack_11->SetBinError(4,0.784705);
   hNCinFV_stack_11->SetBinError(5,0.9613675);
   hNCinFV_stack_11->SetBinError(6,0.9811382);
   hNCinFV_stack_11->SetBinError(7,1.161531);
   hNCinFV_stack_11->SetBinError(8,1.038438);
   hNCinFV_stack_11->SetBinError(9,1.020466);
   hNCinFV_stack_11->SetBinError(10,0.9205954);
   hNCinFV_stack_11->SetBinError(11,1.145007);
   hNCinFV_stack_11->SetBinError(12,0.6201715);
   hNCinFV_stack_11->SetBinError(13,0.8093475);
   hNCinFV_stack_11->SetBinError(14,0.760276);
   hNCinFV_stack_11->SetBinError(15,0.650338);
   hNCinFV_stack_11->SetBinError(16,0.7070809);
   hNCinFV_stack_11->SetBinError(17,0.588146);
   hNCinFV_stack_11->SetBinError(18,0.48078);
   hNCinFV_stack_11->SetBinError(19,0.4368475);
   hNCinFV_stack_11->SetBinError(20,0.4383608);
   hNCinFV_stack_11->SetBinError(21,0.438694);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.8554385);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.4778093);
   hnumuCCinFV_stack_12->SetBinContent(2,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(3,3.744277);
   hnumuCCinFV_stack_12->SetBinContent(4,5.683983);
   hnumuCCinFV_stack_12->SetBinContent(5,13.90891);
   hnumuCCinFV_stack_12->SetBinContent(6,13.04428);
   hnumuCCinFV_stack_12->SetBinContent(7,17.3007);
   hnumuCCinFV_stack_12->SetBinContent(8,14.25461);
   hnumuCCinFV_stack_12->SetBinContent(9,7.967521);
   hnumuCCinFV_stack_12->SetBinContent(10,8.459069);
   hnumuCCinFV_stack_12->SetBinContent(11,8.071108);
   hnumuCCinFV_stack_12->SetBinContent(12,5.980371);
   hnumuCCinFV_stack_12->SetBinContent(13,4.381376);
   hnumuCCinFV_stack_12->SetBinContent(14,4.132531);
   hnumuCCinFV_stack_12->SetBinContent(15,4.800795);
   hnumuCCinFV_stack_12->SetBinContent(16,2.179629);
   hnumuCCinFV_stack_12->SetBinContent(17,2.727673);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(19,1.50031);
   hnumuCCinFV_stack_12->SetBinContent(20,1.136061);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,6.101685);
   hnumuCCinFV_stack_12->SetBinError(1,0.3378631);
   hnumuCCinFV_stack_12->SetBinError(2,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(3,1.439071);
   hnumuCCinFV_stack_12->SetBinError(4,1.21807);
   hnumuCCinFV_stack_12->SetBinError(5,2.245179);
   hnumuCCinFV_stack_12->SetBinError(6,1.858004);
   hnumuCCinFV_stack_12->SetBinError(7,3.101791);
   hnumuCCinFV_stack_12->SetBinError(8,2.666184);
   hnumuCCinFV_stack_12->SetBinError(9,1.696174);
   hnumuCCinFV_stack_12->SetBinError(10,1.478188);
   hnumuCCinFV_stack_12->SetBinError(11,1.51241);
   hnumuCCinFV_stack_12->SetBinError(12,1.269087);
   hnumuCCinFV_stack_12->SetBinError(13,1.037242);
   hnumuCCinFV_stack_12->SetBinError(14,0.9990958);
   hnumuCCinFV_stack_12->SetBinError(15,1.078138);
   hnumuCCinFV_stack_12->SetBinError(16,0.7212073);
   hnumuCCinFV_stack_12->SetBinError(17,0.8086818);
   hnumuCCinFV_stack_12->SetBinError(18,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(19,0.6328209);
   hnumuCCinFV_stack_12->SetBinError(20,0.5964762);
   hnumuCCinFV_stack_12->SetBinError(22,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.275531);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(9,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,4.523341);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(9,0.1529246);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.641671);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__23->SetBinContent(1,3.980506);
   hmcerror__23->SetBinContent(2,15.10166);
   hmcerror__23->SetBinContent(3,47.59658);
   hmcerror__23->SetBinContent(4,80.95688);
   hmcerror__23->SetBinContent(5,112.2723);
   hmcerror__23->SetBinContent(6,127.6768);
   hmcerror__23->SetBinContent(7,122.5239);
   hmcerror__23->SetBinContent(8,105.6621);
   hmcerror__23->SetBinContent(9,84.4071);
   hmcerror__23->SetBinContent(10,70.5547);
   hmcerror__23->SetBinContent(11,63.15191);
   hmcerror__23->SetBinContent(12,50.88445);
   hmcerror__23->SetBinContent(13,44.31688);
   hmcerror__23->SetBinContent(14,35.26655);
   hmcerror__23->SetBinContent(15,30.04053);
   hmcerror__23->SetBinContent(16,23.68311);
   hmcerror__23->SetBinContent(17,20.40096);
   hmcerror__23->SetBinContent(18,15.32354);
   hmcerror__23->SetBinContent(19,16.26406);
   hmcerror__23->SetBinContent(20,11.92729);
   hmcerror__23->SetBinContent(21,7.532723);
   hmcerror__23->SetBinContent(22,6.839383);
   hmcerror__23->SetBinContent(23,5.709962);
   hmcerror__23->SetBinContent(24,3.62431);
   hmcerror__23->SetBinContent(25,48.55986);
   hmcerror__23->SetBinError(1,28.1787);
   hmcerror__23->SetBinError(2,9.150719);
   hmcerror__23->SetBinError(3,27.00348);
   hmcerror__23->SetBinError(4,21.65644);
   hmcerror__23->SetBinError(5,37.29244);
   hmcerror__23->SetBinError(6,33.013);
   hmcerror__23->SetBinError(7,38.28054);
   hmcerror__23->SetBinError(8,29.26678);
   hmcerror__23->SetBinError(9,25.74741);
   hmcerror__23->SetBinError(10,24.02009);
   hmcerror__23->SetBinError(11,18.41559);
   hmcerror__23->SetBinError(12,16.86471);
   hmcerror__23->SetBinError(13,17.43097);
   hmcerror__23->SetBinError(14,14.19989);
   hmcerror__23->SetBinError(15,13.19702);
   hmcerror__23->SetBinError(16,20.59738);
   hmcerror__23->SetBinError(17,11.01616);
   hmcerror__23->SetBinError(18,9.414778);
   hmcerror__23->SetBinError(19,10.66471);
   hmcerror__23->SetBinError(20,8.348974);
   hmcerror__23->SetBinError(21,12.92544);
   hmcerror__23->SetBinError(22,6.513347);
   hmcerror__23->SetBinError(23,5.06543);
   hmcerror__23->SetBinError(24,4.69474);
   hmcerror__23->SetBinError(25,20.18317);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3029[24] = {
   1,
   17,
   47,
   116,
   108,
   127,
   106,
   85,
   83,
   65,
   53,
   51,
   35,
   28,
   17,
   26,
   18,
   19,
   9,
   5,
   5,
   4,
   2,
   8};
   Double_t _felx3029[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3029[24] = {
   1,
   4.2835,
   6.9882,
   10.77033,
   10.3923,
   11.26943,
   10.29563,
   9.3428,
   9.234,
   8.1893,
   7.4105,
   7.2725,
   6.0548,
   5.4358,
   4.2835,
   5.2453,
   4.4008,
   4.5151,
   3.19354,
   2.48995,
   2.48995,
   2.29683,
   2,
   3.0307};
   Double_t _fehx3029[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3029[24] = {
   1.35971,
   4.0673,
   6.7839,
   10.77033,
   10.3923,
   11.26943,
   10.29563,
   9.1411,
   9.0323,
   7.9866,
   7.2068,
   7.0686,
   5.8483,
   5.2271,
   4.0673,
   5.0358,
   4.1858,
   4.3011,
   2.9582,
   2.21064,
   2.21064,
   1.98186,
   1.51917,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,660);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(152.0964);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1035.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 38.4","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 195.5","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 242.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.5","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  168.2","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  40.8","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 213.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 47.8","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 121.6","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.6","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3030[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3030[24] = {
   7.079175,
   0.6059415,
   0.5673407,
   0.2675059,
   0.3321608,
   0.258567,
   0.3124333,
   0.2769847,
   0.3050385,
   0.3404464,
   0.2916078,
   0.3314315,
   0.3933258,
   0.4026447,
   0.4393071,
   0.8697077,
   0.5399822,
   0.6143998,
   0.6557224,
   0.6999889,
   1.715905,
   0.9523297,
   0.8871214,
   1.295347};
   Double_t _fehx3030[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3030[24] = {
   7.079175,
   0.6059415,
   0.5673407,
   0.2675059,
   0.3321608,
   0.258567,
   0.3124333,
   0.2769847,
   0.3050385,
   0.3404464,
   0.2916078,
   0.3314315,
   0.3933258,
   0.4026447,
   0.4393071,
   0.8697077,
   0.5399822,
   0.6143998,
   0.6557224,
   0.6999889,
   1.715905,
   0.9523297,
   0.8871214,
   1.295347};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,660);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3031[24] = {
   0.6844334,
   0.2001893,
   0.158537,
   0.1673286,
   0.1766212,
   0.1633606,
   0.1747773,
   0.1854257,
   0.1992888,
   0.2008374,
   0.1891148,
   0.1877741,
   0.227448,
   0.2220699,
   0.2474926,
   0.2584201,
   0.2514232,
   0.2866215,
   0.2843232,
   0.2685496,
   0.3645554,
   0.3242698,
   0.3275438,
   0.3903763};
   Double_t _fehx3031[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3031[24] = {
   0.6844334,
   0.2001893,
   0.158537,
   0.1673286,
   0.1766212,
   0.1633606,
   0.1747773,
   0.1854257,
   0.1992888,
   0.2008374,
   0.1891148,
   0.1877741,
   0.227448,
   0.2220699,
   0.2474926,
   0.2584201,
   0.2514232,
   0.2866215,
   0.2843232,
   0.2685496,
   0.3645554,
   0.3242698,
   0.3275438,
   0.3903763};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,660);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3032[24] = {
   0.2512243,
   1.125704,
   0.9874659,
   1.432862,
   0.9619473,
   0.9946994,
   0.8651376,
   0.8044515,
   0.9833296,
   0.9212711,
   0.8392462,
   1.002271,
   0.7897669,
   0.7939534,
   0.5659021,
   1.097829,
   0.8823115,
   1.239923,
   0.5533675,
   0.4192065,
   0.6637706,
   0.5848481,
   0.350265,
   2.207316};
   Double_t _felx3032[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3032[24] = {
   0.2512243,
   0.2836444,
   0.1468215,
   0.1330379,
   0.09256342,
   0.0882653,
   0.0840296,
   0.08842152,
   0.1093984,
   0.1160702,
   0.117344,
   0.1429219,
   0.1366252,
   0.1541347,
   0.1425907,
   0.2214785,
   0.2157153,
   0.2946513,
   0.1963557,
   0.2087607,
   0.3305511,
   0.3358242,
   0.350265,
   0.8362142};
   Double_t _fehx3032[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3032[24] = {
   0.3415922,
   0.2693281,
   0.1425291,
   0.1330379,
   0.09256342,
   0.0882653,
   0.0840296,
   0.08651261,
   0.1070088,
   0.1131973,
   0.1141185,
   0.1389148,
   0.1319655,
   0.1482169,
   0.1353937,
   0.2126326,
   0.2051766,
   0.2806859,
   0.1818857,
   0.185343,
   0.2934715,
   0.2897718,
   0.266056,
   0.7696912};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,660);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(3.274708);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
