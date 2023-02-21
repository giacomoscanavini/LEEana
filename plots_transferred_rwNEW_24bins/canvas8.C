#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 16:15:26 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-246.1538,-2.595815,1805.128,287.0425);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__22->SetBinContent(2,1.604554);
   hmc__22->SetBinContent(3,33.31722);
   hmc__22->SetBinContent(4,114.446);
   hmc__22->SetBinContent(5,121.6904);
   hmc__22->SetBinContent(6,129.7908);
   hmc__22->SetBinContent(7,102.8711);
   hmc__22->SetBinContent(8,94.60406);
   hmc__22->SetBinContent(9,86.24587);
   hmc__22->SetBinContent(10,63.24005);
   hmc__22->SetBinContent(11,43.19433);
   hmc__22->SetBinContent(12,32.93825);
   hmc__22->SetBinContent(13,29.29594);
   hmc__22->SetBinContent(14,23.87766);
   hmc__22->SetBinContent(15,18.33122);
   hmc__22->SetBinContent(16,15.09647);
   hmc__22->SetBinContent(17,11.81898);
   hmc__22->SetBinContent(18,5.156162);
   hmc__22->SetBinContent(19,6.50677);
   hmc__22->SetBinContent(20,3.564377);
   hmc__22->SetBinContent(21,3.471456);
   hmc__22->SetBinContent(22,4.164606);
   hmc__22->SetBinContent(23,2.343936);
   hmc__22->SetBinContent(24,2.518322);
   hmc__22->SetBinContent(25,13.90923);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,8.337623);
   hmc__22->SetBinError(3,16.74454);
   hmc__22->SetBinError(4,29.20705);
   hmc__22->SetBinError(5,34.55781);
   hmc__22->SetBinError(6,36.54902);
   hmc__22->SetBinError(7,32.38925);
   hmc__22->SetBinError(8,35.82934);
   hmc__22->SetBinError(9,27.89553);
   hmc__22->SetBinError(10,27.78152);
   hmc__22->SetBinError(11,21.14906);
   hmc__22->SetBinError(12,12.52059);
   hmc__22->SetBinError(13,15.42023);
   hmc__22->SetBinError(14,16.0521);
   hmc__22->SetBinError(15,12.13993);
   hmc__22->SetBinError(16,10.03368);
   hmc__22->SetBinError(17,8.883765);
   hmc__22->SetBinError(18,5.007616);
   hmc__22->SetBinError(19,6.664768);
   hmc__22->SetBinError(20,5.057439);
   hmc__22->SetBinError(21,6.334537);
   hmc__22->SetBinError(22,7.194138);
   hmc__22->SetBinError(23,3.979304);
   hmc__22->SetBinError(24,9.259161);
   hmc__22->SetBinError(25,8.596047);
   hmc__22->SetMinimum(-2.595815);
   hmc__22->SetMaximum(272.5606);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,1600);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(136.2803);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(3,1.17449);
   hbadmatch_stack_1->SetBinContent(4,6.052285);
   hbadmatch_stack_1->SetBinContent(5,2.437873);
   hbadmatch_stack_1->SetBinContent(6,3.236868);
   hbadmatch_stack_1->SetBinContent(7,4.955972);
   hbadmatch_stack_1->SetBinContent(8,2.85668);
   hbadmatch_stack_1->SetBinContent(9,3.317784);
   hbadmatch_stack_1->SetBinContent(10,1.268811);
   hbadmatch_stack_1->SetBinContent(11,1.268811);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(13,1.322064);
   hbadmatch_stack_1->SetBinContent(14,1.010332);
   hbadmatch_stack_1->SetBinContent(15,1.073786);
   hbadmatch_stack_1->SetBinContent(16,0.5352025);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.8123149);
   hbadmatch_stack_1->SetBinError(3,0.5398416);
   hbadmatch_stack_1->SetBinError(4,1.663297);
   hbadmatch_stack_1->SetBinError(5,0.8460983);
   hbadmatch_stack_1->SetBinError(6,0.9268734);
   hbadmatch_stack_1->SetBinError(7,1.233502);
   hbadmatch_stack_1->SetBinError(8,0.8947266);
   hbadmatch_stack_1->SetBinError(9,0.9942584);
   hbadmatch_stack_1->SetBinError(10,0.5889569);
   hbadmatch_stack_1->SetBinError(11,0.5889569);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(13,0.5554667);
   hbadmatch_stack_1->SetBinError(14,0.5320503);
   hbadmatch_stack_1->SetBinError(15,0.5557297);
   hbadmatch_stack_1->SetBinError(16,0.3921167);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.4067552);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,12.33913);
   hext_stack_2->SetBinContent(4,35.1197);
   hext_stack_2->SetBinContent(5,31.55246);
   hext_stack_2->SetBinContent(6,34.25019);
   hext_stack_2->SetBinContent(7,19.34183);
   hext_stack_2->SetBinContent(8,13.46797);
   hext_stack_2->SetBinContent(9,11.0559);
   hext_stack_2->SetBinContent(10,10.70839);
   hext_stack_2->SetBinContent(11,5.509212);
   hext_stack_2->SetBinContent(12,7.187449);
   hext_stack_2->SetBinContent(13,2.759582);
   hext_stack_2->SetBinContent(14,2.428004);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,1.78639);
   hext_stack_2->SetBinContent(17,1.868591);
   hext_stack_2->SetBinContent(18,1.137595);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,0.8131978);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,2.923985);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,2.557817);
   hext_stack_2->SetBinError(4,3.973111);
   hext_stack_2->SetBinError(5,3.717563);
   hext_stack_2->SetBinError(6,4.031973);
   hext_stack_2->SetBinError(7,2.898971);
   hext_stack_2->SetBinError(8,2.318976);
   hext_stack_2->SetBinError(9,2.391462);
   hext_stack_2->SetBinError(10,2.101334);
   hext_stack_2->SetBinError(11,1.568955);
   hext_stack_2->SetBinError(12,1.875196);
   hext_stack_2->SetBinError(13,0.98084);
   hext_stack_2->SetBinError(14,1.028599);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,0.8039566);
   hext_stack_2->SetBinError(17,0.840497);
   hext_stack_2->SetBinError(18,0.6602113);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,0.5750177);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.040301);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,1.521847);
   hdirt_stack_3->SetBinContent(4,4.742173);
   hdirt_stack_3->SetBinContent(5,3.757841);
   hdirt_stack_3->SetBinContent(6,1.735494);
   hdirt_stack_3->SetBinContent(7,1.500129);
   hdirt_stack_3->SetBinContent(8,0.9521725);
   hdirt_stack_3->SetBinContent(9,1.980762);
   hdirt_stack_3->SetBinContent(10,1.747331);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.165479);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3895662);
   hdirt_stack_3->SetBinError(3,0.641729);
   hdirt_stack_3->SetBinError(4,1.070703);
   hdirt_stack_3->SetBinError(5,1.04509);
   hdirt_stack_3->SetBinError(6,0.7085323);
   hdirt_stack_3->SetBinError(7,0.5881756);
   hdirt_stack_3->SetBinError(8,0.5181792);
   hdirt_stack_3->SetBinError(9,1.079789);
   hdirt_stack_3->SetBinError(10,0.7376358);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(12,0.165479);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.3895662);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,0.9303237);
   houtFV_stack_4->SetBinContent(3,10.71055);
   houtFV_stack_4->SetBinContent(4,29.8216);
   houtFV_stack_4->SetBinContent(5,30.30401);
   houtFV_stack_4->SetBinContent(6,33.60831);
   houtFV_stack_4->SetBinContent(7,23.12239);
   houtFV_stack_4->SetBinContent(8,18.73503);
   houtFV_stack_4->SetBinContent(9,15.29668);
   houtFV_stack_4->SetBinContent(10,10.89532);
   houtFV_stack_4->SetBinContent(11,8.203698);
   houtFV_stack_4->SetBinContent(12,3.817658);
   houtFV_stack_4->SetBinContent(13,4.923729);
   houtFV_stack_4->SetBinContent(14,3.76132);
   houtFV_stack_4->SetBinContent(15,2.535931);
   houtFV_stack_4->SetBinContent(16,2.811289);
   houtFV_stack_4->SetBinContent(17,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.2090315);
   houtFV_stack_4->SetBinContent(19,0.9421788);
   houtFV_stack_4->SetBinContent(20,0.7336084);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.6373597);
   houtFV_stack_4->SetBinContent(24,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.3917402);
   houtFV_stack_4->SetBinError(2,0.4814682);
   houtFV_stack_4->SetBinError(3,1.61865);
   houtFV_stack_4->SetBinError(4,2.730237);
   houtFV_stack_4->SetBinError(5,2.802963);
   houtFV_stack_4->SetBinError(6,3.272334);
   houtFV_stack_4->SetBinError(7,2.451536);
   houtFV_stack_4->SetBinError(8,2.139896);
   houtFV_stack_4->SetBinError(9,1.969842);
   houtFV_stack_4->SetBinError(10,1.665558);
   houtFV_stack_4->SetBinError(11,1.41185);
   houtFV_stack_4->SetBinError(12,0.9201191);
   houtFV_stack_4->SetBinError(13,1.169688);
   houtFV_stack_4->SetBinError(14,0.9719755);
   houtFV_stack_4->SetBinError(15,0.8325131);
   houtFV_stack_4->SetBinError(16,0.9285694);
   houtFV_stack_4->SetBinError(17,0.3397478);
   houtFV_stack_4->SetBinError(18,0.2090315);
   houtFV_stack_4->SetBinError(19,0.5651418);
   houtFV_stack_4->SetBinError(20,0.4394482);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetBinError(22,0.3702169);
   houtFV_stack_4->SetBinError(24,0.1967154);
   houtFV_stack_4->SetBinError(25,0.2770047);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.283408);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.32459);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.870556);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.32459);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.12929);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4246589);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3503303);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5700237);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3503303);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3424653);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.07381642);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.322524);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.96501);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.40945);
   hNCpi0inFVres_stack_7->SetBinContent(6,22.34449);
   hNCpi0inFVres_stack_7->SetBinContent(7,17.54169);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.99654);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.62371);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.556771);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.98225);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.303833);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.703652);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.551366);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.088268);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4321178);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.7800399);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.5440542);
   hNCpi0inFVres_stack_7->SetBinError(2,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6709608);
   hNCpi0inFVres_stack_7->SetBinError(4,1.313116);
   hNCpi0inFVres_stack_7->SetBinError(5,1.59011);
   hNCpi0inFVres_stack_7->SetBinError(6,1.521501);
   hNCpi0inFVres_stack_7->SetBinError(7,1.327218);
   hNCpi0inFVres_stack_7->SetBinError(8,1.141184);
   hNCpi0inFVres_stack_7->SetBinError(9,1.057636);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8323049);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8048468);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5329112);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5234548);
   hNCpi0inFVres_stack_7->SetBinError(14,0.531266);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2512307);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1371558);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2855518);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(19,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(20,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(24,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2957079);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.8222219);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.242466);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.596956);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.156788);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.834934);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.277846);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.457288);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.843152);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.867644);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.47854);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.241722);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7259042);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4321178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5440542);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4321178);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2756104);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4118626);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6302307);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6957372);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5922915);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6308475);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6004497);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5271594);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.39768);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3911843);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3737142);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3442606);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1371558);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2957079);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1371558);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(4,6.421679);
   hCCpi0inFV_stack_10->SetBinContent(5,11.67872);
   hCCpi0inFV_stack_10->SetBinContent(6,13.5879);
   hCCpi0inFV_stack_10->SetBinContent(7,18.01022);
   hCCpi0inFV_stack_10->SetBinContent(8,22.16161);
   hCCpi0inFV_stack_10->SetBinContent(9,24.47906);
   hCCpi0inFV_stack_10->SetBinContent(10,16.91887);
   hCCpi0inFV_stack_10->SetBinContent(11,13.14817);
   hCCpi0inFV_stack_10->SetBinContent(12,10.73868);
   hCCpi0inFV_stack_10->SetBinContent(13,11.71745);
   hCCpi0inFV_stack_10->SetBinContent(14,8.755877);
   hCCpi0inFV_stack_10->SetBinContent(15,6.305408);
   hCCpi0inFV_stack_10->SetBinContent(16,5.34803);
   hCCpi0inFV_stack_10->SetBinContent(17,3.367593);
   hCCpi0inFV_stack_10->SetBinContent(18,2.442341);
   hCCpi0inFV_stack_10->SetBinContent(19,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(21,1.007752);
   hCCpi0inFV_stack_10->SetBinContent(22,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(23,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(24,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(25,4.196482);
   hCCpi0inFV_stack_10->SetBinError(3,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(4,1.307687);
   hCCpi0inFV_stack_10->SetBinError(5,1.714777);
   hCCpi0inFV_stack_10->SetBinError(6,1.863684);
   hCCpi0inFV_stack_10->SetBinError(7,2.140089);
   hCCpi0inFV_stack_10->SetBinError(8,2.371184);
   hCCpi0inFV_stack_10->SetBinError(9,2.504487);
   hCCpi0inFV_stack_10->SetBinError(10,2.049886);
   hCCpi0inFV_stack_10->SetBinError(11,1.805541);
   hCCpi0inFV_stack_10->SetBinError(12,1.659232);
   hCCpi0inFV_stack_10->SetBinError(13,1.755531);
   hCCpi0inFV_stack_10->SetBinError(14,1.563139);
   hCCpi0inFV_stack_10->SetBinError(15,1.256985);
   hCCpi0inFV_stack_10->SetBinError(16,1.182208);
   hCCpi0inFV_stack_10->SetBinError(17,0.8979018);
   hCCpi0inFV_stack_10->SetBinError(18,0.759212);
   hCCpi0inFV_stack_10->SetBinError(19,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(20,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(21,0.4513987);
   hCCpi0inFV_stack_10->SetBinError(22,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(23,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(24,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(25,1.056731);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.1950248);
   hNCinFV_stack_11->SetBinContent(4,1.467217);
   hNCinFV_stack_11->SetBinContent(5,2.734337);
   hNCinFV_stack_11->SetBinContent(6,3.911248);
   hNCinFV_stack_11->SetBinContent(7,3.267849);
   hNCinFV_stack_11->SetBinContent(8,5.218705);
   hNCinFV_stack_11->SetBinContent(9,5.073553);
   hNCinFV_stack_11->SetBinContent(10,3.030797);
   hNCinFV_stack_11->SetBinContent(11,2.732646);
   hNCinFV_stack_11->SetBinContent(12,1.712114);
   hNCinFV_stack_11->SetBinContent(13,1.463836);
   hNCinFV_stack_11->SetBinContent(14,0.9801958);
   hNCinFV_stack_11->SetBinContent(15,1.515398);
   hNCinFV_stack_11->SetBinContent(16,0.7319179);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(18,0.1950248);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.3917402);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.1950249);
   hNCinFV_stack_11->SetBinError(4,0.6214735);
   hNCinFV_stack_11->SetBinError(5,0.8558255);
   hNCinFV_stack_11->SetBinError(6,0.9814756);
   hNCinFV_stack_11->SetBinError(7,0.9410263);
   hNCinFV_stack_11->SetBinError(8,1.210167);
   hNCinFV_stack_11->SetBinError(9,1.177633);
   hNCinFV_stack_11->SetBinError(10,0.831764);
   hNCinFV_stack_11->SetBinError(11,0.8554385);
   hNCinFV_stack_11->SetBinError(12,0.6201715);
   hNCinFV_stack_11->SetBinError(13,0.620407);
   hNCinFV_stack_11->SetBinError(14,0.4383608);
   hNCinFV_stack_11->SetBinError(15,0.588146);
   hNCinFV_stack_11->SetBinError(16,0.438694);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(18,0.1950249);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.2770047);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,1.292238);
   hnumuCCinFV_stack_12->SetBinContent(4,11.05177);
   hnumuCCinFV_stack_12->SetBinContent(5,11.78257);
   hnumuCCinFV_stack_12->SetBinContent(6,9.535114);
   hnumuCCinFV_stack_12->SetBinContent(7,9.943638);
   hnumuCCinFV_stack_12->SetBinContent(8,11.41537);
   hnumuCCinFV_stack_12->SetBinContent(9,7.989191);
   hnumuCCinFV_stack_12->SetBinContent(10,7.461834);
   hnumuCCinFV_stack_12->SetBinContent(11,2.973503);
   hnumuCCinFV_stack_12->SetBinContent(12,3.45751);
   hnumuCCinFV_stack_12->SetBinContent(13,2.480535);
   hnumuCCinFV_stack_12->SetBinContent(14,3.401543);
   hnumuCCinFV_stack_12->SetBinContent(15,2.604684);
   hnumuCCinFV_stack_12->SetBinContent(16,2.075024);
   hnumuCCinFV_stack_12->SetBinContent(17,3.485864);
   hnumuCCinFV_stack_12->SetBinContent(18,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(19,1.494171);
   hnumuCCinFV_stack_12->SetBinContent(20,0.8432679);
   hnumuCCinFV_stack_12->SetBinContent(21,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(22,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,2.698679);
   hnumuCCinFV_stack_12->SetBinError(3,0.6913902);
   hnumuCCinFV_stack_12->SetBinError(4,1.882204);
   hnumuCCinFV_stack_12->SetBinError(5,2.516786);
   hnumuCCinFV_stack_12->SetBinError(6,1.605163);
   hnumuCCinFV_stack_12->SetBinError(7,1.771324);
   hnumuCCinFV_stack_12->SetBinError(8,2.706945);
   hnumuCCinFV_stack_12->SetBinError(9,1.336018);
   hnumuCCinFV_stack_12->SetBinError(10,1.460567);
   hnumuCCinFV_stack_12->SetBinError(11,0.8591611);
   hnumuCCinFV_stack_12->SetBinError(12,0.9604591);
   hnumuCCinFV_stack_12->SetBinError(13,0.7190909);
   hnumuCCinFV_stack_12->SetBinError(14,0.9515298);
   hnumuCCinFV_stack_12->SetBinError(15,0.8160528);
   hnumuCCinFV_stack_12->SetBinError(16,0.7557816);
   hnumuCCinFV_stack_12->SetBinError(17,1.441671);
   hnumuCCinFV_stack_12->SetBinError(18,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(19,0.6306007);
   hnumuCCinFV_stack_12->SetBinError(20,0.4244543);
   hnumuCCinFV_stack_12->SetBinError(21,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(22,0.438694);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.8115001);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.7868615);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(16,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(23,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(25,1.322814);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3934307);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.5270816);
   hnueCCinFV_stack_13->SetBinError(16,0.3152389);
   hnueCCinFV_stack_13->SetBinError(23,0.7431478);
   hnueCCinFV_stack_13->SetBinError(25,0.6298195);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__23->SetBinContent(2,1.604554);
   hmcerror__23->SetBinContent(3,33.31722);
   hmcerror__23->SetBinContent(4,114.446);
   hmcerror__23->SetBinContent(5,121.6904);
   hmcerror__23->SetBinContent(6,129.7908);
   hmcerror__23->SetBinContent(7,102.8711);
   hmcerror__23->SetBinContent(8,94.60406);
   hmcerror__23->SetBinContent(9,86.24587);
   hmcerror__23->SetBinContent(10,63.24005);
   hmcerror__23->SetBinContent(11,43.19433);
   hmcerror__23->SetBinContent(12,32.93825);
   hmcerror__23->SetBinContent(13,29.29594);
   hmcerror__23->SetBinContent(14,23.87766);
   hmcerror__23->SetBinContent(15,18.33122);
   hmcerror__23->SetBinContent(16,15.09647);
   hmcerror__23->SetBinContent(17,11.81898);
   hmcerror__23->SetBinContent(18,5.156162);
   hmcerror__23->SetBinContent(19,6.50677);
   hmcerror__23->SetBinContent(20,3.564377);
   hmcerror__23->SetBinContent(21,3.471456);
   hmcerror__23->SetBinContent(22,4.164606);
   hmcerror__23->SetBinContent(23,2.343936);
   hmcerror__23->SetBinContent(24,2.518322);
   hmcerror__23->SetBinContent(25,13.90923);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,8.337623);
   hmcerror__23->SetBinError(3,16.74454);
   hmcerror__23->SetBinError(4,29.20705);
   hmcerror__23->SetBinError(5,34.55781);
   hmcerror__23->SetBinError(6,36.54902);
   hmcerror__23->SetBinError(7,32.38925);
   hmcerror__23->SetBinError(8,35.82934);
   hmcerror__23->SetBinError(9,27.89553);
   hmcerror__23->SetBinError(10,27.78152);
   hmcerror__23->SetBinError(11,21.14906);
   hmcerror__23->SetBinError(12,12.52059);
   hmcerror__23->SetBinError(13,15.42023);
   hmcerror__23->SetBinError(14,16.0521);
   hmcerror__23->SetBinError(15,12.13993);
   hmcerror__23->SetBinError(16,10.03368);
   hmcerror__23->SetBinError(17,8.883765);
   hmcerror__23->SetBinError(18,5.007616);
   hmcerror__23->SetBinError(19,6.664768);
   hmcerror__23->SetBinError(20,5.057439);
   hmcerror__23->SetBinError(21,6.334537);
   hmcerror__23->SetBinError(22,7.194138);
   hmcerror__23->SetBinError(23,3.979304);
   hmcerror__23->SetBinError(24,9.259161);
   hmcerror__23->SetBinError(25,8.596047);
   hmcerror__23->SetEntries(948.2139);

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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3029[24] = {
   0,
   1,
   36,
   118,
   115,
   109,
   103,
   86,
   78,
   62,
   44,
   29,
   17,
   20,
   9,
   8,
   10,
   7,
   5,
   2,
   7,
   3,
   1,
   0};
   Double_t _felx3029[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3029[24] = {
   0,
   1,
   6.1381,
   10.86278,
   10.72381,
   10.44031,
   10.14889,
   9.3967,
   8.9562,
   8.0018,
   6.7671,
   5.5285,
   4.2835,
   4.6266,
   3.19354,
   3.0307,
   3.34883,
   2.85954,
   2.48995,
   2,
   2.85954,
   2.143368,
   1,
   0};
   Double_t _fehx3029[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3029[24] = {
   1.1478,
   1.35971,
   5.9318,
   10.86278,
   10.72381,
   10.44031,
   10.14889,
   9.1951,
   8.7542,
   7.7989,
   6.5623,
   5.3201,
   4.0673,
   4.4133,
   2.9582,
   2.7896,
   3.1179,
   2.61053,
   2.21064,
   1.51917,
   2.61053,
   1.72422,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1760);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(141.7491);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 870.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 196.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 182.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 95.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
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
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3030[24] = {
   0,
   5.196223,
   0.502579,
   0.2552037,
   0.2839814,
   0.2815995,
   0.3148527,
   0.3787294,
   0.3234419,
   0.4393026,
   0.4896257,
   0.3801232,
   0.5263606,
   0.6722644,
   0.6622546,
   0.6646375,
   0.7516522,
   0.9711906,
   1.024282,
   1.418885,
   1.824749,
   1.727448,
   1.697701,
   3.676718};
   Double_t _fehx3030[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3030[24] = {
   0,
   5.196223,
   0.502579,
   0.2552037,
   0.2839814,
   0.2815995,
   0.3148527,
   0.3787294,
   0.3234419,
   0.4393026,
   0.4896257,
   0.3801232,
   0.5263606,
   0.6722644,
   0.6622546,
   0.6646375,
   0.7516522,
   0.9711906,
   1.024282,
   1.418885,
   1.824749,
   1.727448,
   1.697701,
   3.676718};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1760);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
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
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3031[24] = {
   0,
   0.5338432,
   0.1855809,
   0.1625793,
   0.1685568,
   0.1644551,
   0.1856963,
   0.2070275,
   0.2093016,
   0.2006849,
   0.2371683,
   0.2029535,
   0.2369185,
   0.2378807,
   0.2267492,
   0.2506036,
   0.2970877,
   0.3066302,
   0.316458,
   0.3348238,
   0.3390093,
   0.3416487,
   0.8710982,
   0.4022784};
   Double_t _fehx3031[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3031[24] = {
   0,
   0.5338432,
   0.1855809,
   0.1625793,
   0.1685568,
   0.1644551,
   0.1856963,
   0.2070275,
   0.2093016,
   0.2006849,
   0.2371683,
   0.2029535,
   0.2369185,
   0.2378807,
   0.2267492,
   0.2506036,
   0.2970877,
   0.3066302,
   0.316458,
   0.3348238,
   0.3390093,
   0.3416487,
   0.8710982,
   0.4022784};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1760);
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3032[24] = {
   10,
   0.623226,
   1.080522,
   1.031054,
   0.9450211,
   0.8398132,
   1.001253,
   0.9090518,
   0.9043911,
   0.9803914,
   1.018652,
   0.8804353,
   0.5802851,
   0.8376029,
   0.4909657,
   0.5299252,
   0.8460965,
   1.357599,
   0.7684304,
   0.5611079,
   2.016445,
   0.7203563,
   0.4266327,
   0};
   Double_t _felx3032[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3032[24] = {
   0,
   0.623226,
   0.184232,
   0.09491619,
   0.08812367,
   0.08043951,
   0.09865636,
   0.0993266,
   0.103845,
   0.1265306,
   0.1566664,
   0.1678444,
   0.1462148,
   0.1937627,
   0.1742132,
   0.2007556,
   0.2833433,
   0.5545869,
   0.3826707,
   0.5611079,
   0.8237293,
   0.5146629,
   0.4266327,
   0};
   Double_t _fehx3032[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3032[24] = {
   0,
   0.8474066,
   0.1780401,
   0.09491619,
   0.08812367,
   0.08043951,
   0.09865636,
   0.09719561,
   0.1015028,
   0.1233222,
   0.151925,
   0.1615174,
   0.1388349,
   0.1848296,
   0.161375,
   0.1847849,
   0.2638044,
   0.5062933,
   0.3397446,
   0.4262091,
   0.7519986,
   0.4140176,
   0.5800968,
   0.4557796};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1760);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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
