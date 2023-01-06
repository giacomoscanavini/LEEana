#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 20:33:13 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-7.464336,1.25641,825.3984);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__22->SetBinContent(1,22.73393);
   hmc__22->SetBinContent(2,21.08077);
   hmc__22->SetBinContent(3,25.04749);
   hmc__22->SetBinContent(4,28.47253);
   hmc__22->SetBinContent(5,32.69881);
   hmc__22->SetBinContent(6,39.3083);
   hmc__22->SetBinContent(7,36.6101);
   hmc__22->SetBinContent(8,44.37399);
   hmc__22->SetBinContent(9,44.66493);
   hmc__22->SetBinContent(10,47.99172);
   hmc__22->SetBinContent(11,59.39954);
   hmc__22->SetBinContent(12,62.15187);
   hmc__22->SetBinContent(13,68.20246);
   hmc__22->SetBinContent(14,84.07388);
   hmc__22->SetBinContent(15,100.1019);
   hmc__22->SetBinContent(16,114.7562);
   hmc__22->SetBinContent(17,134.5469);
   hmc__22->SetBinContent(18,172.8809);
   hmc__22->SetBinContent(19,252.3684);
   hmc__22->SetBinContent(20,373.2168);
   hmc__22->SetBinError(1,6.256509);
   hmc__22->SetBinError(2,5.455);
   hmc__22->SetBinError(3,6.719507);
   hmc__22->SetBinError(4,8.08751);
   hmc__22->SetBinError(5,7.363051);
   hmc__22->SetBinError(6,8.511099);
   hmc__22->SetBinError(7,9.1648);
   hmc__22->SetBinError(8,11.23897);
   hmc__22->SetBinError(9,12.38056);
   hmc__22->SetBinError(10,12.06979);
   hmc__22->SetBinError(11,13.48163);
   hmc__22->SetBinError(12,14.05144);
   hmc__22->SetBinError(13,17.68368);
   hmc__22->SetBinError(14,19.39153);
   hmc__22->SetBinError(15,25.79045);
   hmc__22->SetBinError(16,27.566);
   hmc__22->SetBinError(17,30.14873);
   hmc__22->SetBinError(18,37.60422);
   hmc__22->SetBinError(19,55.53012);
   hmc__22->SetBinError(20,74.55256);
   hmc__22->SetBinError(21,0.3895343);
   hmc__22->SetMinimum(-7.464336);
   hmc__22->SetMaximum(783.7553);
   hmc__22->SetEntries(1748.127);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,-1,1);
   hs8_stack_8->SetMinimum(-6.513502e-09);
   hs8_stack_8->SetMaximum(391.8776);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(3,0.2294167);
   hbadmatch_stack_1->SetBinContent(5,0.2211568);
   hbadmatch_stack_1->SetBinContent(7,0.3917402);
   hbadmatch_stack_1->SetBinContent(8,0.5165828);
   hbadmatch_stack_1->SetBinContent(9,1.016003e-23);
   hbadmatch_stack_1->SetBinContent(10,0.5964978);
   hbadmatch_stack_1->SetBinContent(11,0.9269427);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(13,0.1950248);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,0.5884556);
   hbadmatch_stack_1->SetBinContent(17,0.9560022);
   hbadmatch_stack_1->SetBinContent(18,0.9987894);
   hbadmatch_stack_1->SetBinContent(19,1.341604);
   hbadmatch_stack_1->SetBinContent(20,1.912594);
   hbadmatch_stack_1->SetBinError(3,0.2294167);
   hbadmatch_stack_1->SetBinError(5,0.2211568);
   hbadmatch_stack_1->SetBinError(7,0.2770047);
   hbadmatch_stack_1->SetBinError(8,0.4136081);
   hbadmatch_stack_1->SetBinError(9,1.016003e-23);
   hbadmatch_stack_1->SetBinError(10,0.4259352);
   hbadmatch_stack_1->SetBinError(11,0.4800908);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(13,0.1950249);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.3397478);
   hbadmatch_stack_1->SetBinError(17,0.7626331);
   hbadmatch_stack_1->SetBinError(18,0.4469433);
   hbadmatch_stack_1->SetBinError(19,0.5626833);
   hbadmatch_stack_1->SetBinError(20,0.7547383);
   hbadmatch_stack_1->SetEntries(43);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(2,0.6487947);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,1.37261);
   hext_stack_2->SetBinContent(5,1.37261);
   hext_stack_2->SetBinContent(6,9.727955);
   hext_stack_2->SetBinContent(7,2.27519);
   hext_stack_2->SetBinContent(8,6.195487);
   hext_stack_2->SetBinContent(9,1.137595);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,2.912395);
   hext_stack_2->SetBinContent(12,6.449273);
   hext_stack_2->SetBinContent(13,0.8131978);
   hext_stack_2->SetBinContent(14,3.814975);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,2.27519);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,4.427867);
   hext_stack_2->SetBinContent(19,3.972198);
   hext_stack_2->SetBinContent(20,2.980236);
   hext_stack_2->SetBinError(2,0.4587671);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.8259691);
   hext_stack_2->SetBinError(5,0.8259691);
   hext_stack_2->SetBinError(6,2.373081);
   hext_stack_2->SetBinError(7,0.9336798);
   hext_stack_2->SetBinError(8,1.86224);
   hext_stack_2->SetBinError(9,0.6602113);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,1.07159);
   hext_stack_2->SetBinError(12,1.856611);
   hext_stack_2->SetBinError(13,0.5750177);
   hext_stack_2->SetBinError(14,1.156649);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,0.9336798);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,1.598221);
   hext_stack_2->SetBinError(19,1.288106);
   hext_stack_2->SetBinError(20,1.269171);
   hext_stack_2->SetEntries(130);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4927738);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1661453);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.7801647);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.4853765);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3718435);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1661453);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4753739);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3448585);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetEntries(20);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,0.9161366);
   houtFV_stack_4->SetBinContent(2,0.3934307);
   houtFV_stack_4->SetBinContent(3,1.713804);
   houtFV_stack_4->SetBinContent(5,0.785171);
   houtFV_stack_4->SetBinContent(6,0.5583416);
   houtFV_stack_4->SetBinContent(7,0.1950248);
   houtFV_stack_4->SetBinContent(8,0.5901461);
   houtFV_stack_4->SetBinContent(9,1.214839);
   houtFV_stack_4->SetBinContent(10,0.7319179);
   houtFV_stack_4->SetBinContent(11,0.8564739);
   houtFV_stack_4->SetBinContent(12,0.7336084);
   houtFV_stack_4->SetBinContent(13,1.174245);
   houtFV_stack_4->SetBinContent(14,0.9836297);
   houtFV_stack_4->SetBinContent(15,2.82971);
   houtFV_stack_4->SetBinContent(17,2.468995);
   houtFV_stack_4->SetBinContent(18,3.300039);
   houtFV_stack_4->SetBinContent(19,4.571167);
   houtFV_stack_4->SetBinContent(20,4.430548);
   houtFV_stack_4->SetBinError(1,0.4135951);
   houtFV_stack_4->SetBinError(2,0.2781975);
   houtFV_stack_4->SetBinError(3,0.6207051);
   houtFV_stack_4->SetBinError(5,0.3925882);
   houtFV_stack_4->SetBinError(6,0.4116679);
   houtFV_stack_4->SetBinError(7,0.1950249);
   houtFV_stack_4->SetBinError(8,0.340721);
   houtFV_stack_4->SetBinError(9,0.5781924);
   houtFV_stack_4->SetBinError(10,0.438694);
   houtFV_stack_4->SetBinError(11,0.4327383);
   houtFV_stack_4->SetBinError(12,0.4394482);
   houtFV_stack_4->SetBinError(13,0.5402058);
   houtFV_stack_4->SetBinError(14,0.4399322);
   houtFV_stack_4->SetBinError(15,0.9395546);
   houtFV_stack_4->SetBinError(17,1.727528);
   houtFV_stack_4->SetBinError(18,0.922309);
   houtFV_stack_4->SetBinError(19,1.113271);
   houtFV_stack_4->SetBinError(20,1.057318);
   houtFV_stack_4->SetEntries(118);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03076306);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1213757);
   hNCpi0inFVqe_stack_6->SetEntries(3);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1668645);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.332812);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.08357137);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5201092);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.476555);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.1495217);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.2298545);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7535304);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.054452);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.2906245);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.045203);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.4107452);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6614026);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7164148);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.413062);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.837546);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8694993);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.83967);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.363286);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.015913);
   hNCpi0inFVres_stack_7->SetBinError(1,0.08584743);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1494603);
   hNCpi0inFVres_stack_7->SetBinError(3,0.03742148);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4075347);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1922351);
   hNCpi0inFVres_stack_7->SetBinError(6,0.05688378);
   hNCpi0inFVres_stack_7->SetBinError(7,0.09143124);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4335425);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4355398);
   hNCpi0inFVres_stack_7->SetBinError(10,0.09512226);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3191585);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1591878);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2389904);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2349047);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3606236);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6911422);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2548952);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4161046);
   hNCpi0inFVres_stack_7->SetBinError(19,0.445135);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6212111);
   hNCpi0inFVres_stack_7->SetEntries(413);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6434989);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1743051);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.2883392);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1082023);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.03314644);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3605612);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3627792);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5242841);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3997254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1365929);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.170717);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2392699);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.115543);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5139625);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6938621);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8185331);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.700871);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.410483);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.889512);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.127707);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4232994);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1353095);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1313755);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.08456804);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.02355468);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2391298);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2210201);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4093556);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1757066);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.05723649);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4511588);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.143896);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3218311);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2564732);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2039419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2302298);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5800348);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3525864);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8773071);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.957413);
   hNCpi0inFVdis_stack_8->SetEntries(337);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,16.01198);
   hCCpi0inFV_stack_10->SetBinContent(2,15.38671);
   hCCpi0inFV_stack_10->SetBinContent(3,18.0113);
   hCCpi0inFV_stack_10->SetBinContent(4,22.52702);
   hCCpi0inFV_stack_10->SetBinContent(5,22.92344);
   hCCpi0inFV_stack_10->SetBinContent(6,22.77137);
   hCCpi0inFV_stack_10->SetBinContent(7,26.72412);
   hCCpi0inFV_stack_10->SetBinContent(8,27.84039);
   hCCpi0inFV_stack_10->SetBinContent(9,32.77955);
   hCCpi0inFV_stack_10->SetBinContent(10,36.89068);
   hCCpi0inFV_stack_10->SetBinContent(11,40.82935);
   hCCpi0inFV_stack_10->SetBinContent(12,41.0625);
   hCCpi0inFV_stack_10->SetBinContent(13,50.56977);
   hCCpi0inFV_stack_10->SetBinContent(14,58.05271);
   hCCpi0inFV_stack_10->SetBinContent(15,71.9968);
   hCCpi0inFV_stack_10->SetBinContent(16,81.52187);
   hCCpi0inFV_stack_10->SetBinContent(17,96.18725);
   hCCpi0inFV_stack_10->SetBinContent(18,121.8561);
   hCCpi0inFV_stack_10->SetBinContent(19,176.5591);
   hCCpi0inFV_stack_10->SetBinContent(20,251.3515);
   hCCpi0inFV_stack_10->SetBinError(1,2.029434);
   hCCpi0inFV_stack_10->SetBinError(2,1.946441);
   hCCpi0inFV_stack_10->SetBinError(3,2.140385);
   hCCpi0inFV_stack_10->SetBinError(4,2.354566);
   hCCpi0inFV_stack_10->SetBinError(5,2.503092);
   hCCpi0inFV_stack_10->SetBinError(6,2.366948);
   hCCpi0inFV_stack_10->SetBinError(7,2.592927);
   hCCpi0inFV_stack_10->SetBinError(8,2.68091);
   hCCpi0inFV_stack_10->SetBinError(9,2.904984);
   hCCpi0inFV_stack_10->SetBinError(10,2.994758);
   hCCpi0inFV_stack_10->SetBinError(11,3.238779);
   hCCpi0inFV_stack_10->SetBinError(12,3.204882);
   hCCpi0inFV_stack_10->SetBinError(13,3.577339);
   hCCpi0inFV_stack_10->SetBinError(14,3.757459);
   hCCpi0inFV_stack_10->SetBinError(15,4.251925);
   hCCpi0inFV_stack_10->SetBinError(16,4.501711);
   hCCpi0inFV_stack_10->SetBinError(17,4.906426);
   hCCpi0inFV_stack_10->SetBinError(18,5.517196);
   hCCpi0inFV_stack_10->SetBinError(19,6.633646);
   hCCpi0inFV_stack_10->SetBinError(20,7.988945);
   hCCpi0inFV_stack_10->SetEntries(5273);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.7319179);
   hNCinFV_stack_11->SetBinContent(2,0.3917402);
   hNCinFV_stack_11->SetBinContent(4,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.1950248);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.5901461);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.3934307);
   hNCinFV_stack_11->SetBinContent(16,1.070405);
   hNCinFV_stack_11->SetBinContent(17,0.7319179);
   hNCinFV_stack_11->SetBinContent(18,0.3934307);
   hNCinFV_stack_11->SetBinContent(19,1.91052);
   hNCinFV_stack_11->SetBinContent(20,2.200825);
   hNCinFV_stack_11->SetBinError(1,0.438694);
   hNCinFV_stack_11->SetBinError(2,0.2770047);
   hNCinFV_stack_11->SetBinError(4,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.1950249);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.340721);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.2781975);
   hNCinFV_stack_11->SetBinError(16,0.5545368);
   hNCinFV_stack_11->SetBinError(17,0.438694);
   hNCinFV_stack_11->SetBinError(18,0.2781975);
   hNCinFV_stack_11->SetBinError(19,0.6511312);
   hNCinFV_stack_11->SetBinError(20,0.7611465);
   hNCinFV_stack_11->SetEntries(43);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.263527);
   hnumuCCinFV_stack_12->SetBinContent(2,3.75298);
   hnumuCCinFV_stack_12->SetBinContent(3,3.614916);
   hnumuCCinFV_stack_12->SetBinContent(4,3.256791);
   hnumuCCinFV_stack_12->SetBinContent(5,6.551943);
   hnumuCCinFV_stack_12->SetBinContent(6,5.740546);
   hnumuCCinFV_stack_12->SetBinContent(7,6.431386);
   hnumuCCinFV_stack_12->SetBinContent(8,7.592402);
   hnumuCCinFV_stack_12->SetBinContent(9,7.882045);
   hnumuCCinFV_stack_12->SetBinContent(10,7.014347);
   hnumuCCinFV_stack_12->SetBinContent(11,10.98351);
   hnumuCCinFV_stack_12->SetBinContent(12,12.38479);
   hnumuCCinFV_stack_12->SetBinContent(13,12.86423);
   hnumuCCinFV_stack_12->SetBinContent(14,18.13824);
   hnumuCCinFV_stack_12->SetBinContent(15,18.80773);
   hnumuCCinFV_stack_12->SetBinContent(16,26.15881);
   hnumuCCinFV_stack_12->SetBinContent(17,29.11506);
   hnumuCCinFV_stack_12->SetBinContent(18,38.54454);
   hnumuCCinFV_stack_12->SetBinContent(19,57.04352);
   hnumuCCinFV_stack_12->SetBinContent(20,98.67793);
   hnumuCCinFV_stack_12->SetBinError(1,1.003702);
   hnumuCCinFV_stack_12->SetBinError(2,0.9288611);
   hnumuCCinFV_stack_12->SetBinError(3,0.9277357);
   hnumuCCinFV_stack_12->SetBinError(4,0.9397223);
   hnumuCCinFV_stack_12->SetBinError(5,1.279382);
   hnumuCCinFV_stack_12->SetBinError(6,1.242961);
   hnumuCCinFV_stack_12->SetBinError(7,1.289769);
   hnumuCCinFV_stack_12->SetBinError(8,2.150989);
   hnumuCCinFV_stack_12->SetBinError(9,1.949678);
   hnumuCCinFV_stack_12->SetBinError(10,1.366898);
   hnumuCCinFV_stack_12->SetBinError(11,1.824326);
   hnumuCCinFV_stack_12->SetBinError(12,1.788803);
   hnumuCCinFV_stack_12->SetBinError(13,1.81912);
   hnumuCCinFV_stack_12->SetBinError(14,2.182884);
   hnumuCCinFV_stack_12->SetBinError(15,2.273843);
   hnumuCCinFV_stack_12->SetBinError(16,2.834578);
   hnumuCCinFV_stack_12->SetBinError(17,3.352547);
   hnumuCCinFV_stack_12->SetBinError(18,3.172504);
   hnumuCCinFV_stack_12->SetBinError(19,4.000254);
   hnumuCCinFV_stack_12->SetBinError(20,5.218774);
   hnumuCCinFV_stack_12->SetEntries(1565);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.2384502);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(20,2.88118);
   hnueCCinFV_stack_13->SetBinError(3,0.2384502);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.438694);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.3397478);
   hnueCCinFV_stack_13->SetBinError(20,0.9004364);
   hnueCCinFV_stack_13->SetEntries(23);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__23->SetBinContent(1,22.73393);
   hmcerror__23->SetBinContent(2,21.08077);
   hmcerror__23->SetBinContent(3,25.04749);
   hmcerror__23->SetBinContent(4,28.47253);
   hmcerror__23->SetBinContent(5,32.69881);
   hmcerror__23->SetBinContent(6,39.3083);
   hmcerror__23->SetBinContent(7,36.6101);
   hmcerror__23->SetBinContent(8,44.37399);
   hmcerror__23->SetBinContent(9,44.66493);
   hmcerror__23->SetBinContent(10,47.99172);
   hmcerror__23->SetBinContent(11,59.39954);
   hmcerror__23->SetBinContent(12,62.15187);
   hmcerror__23->SetBinContent(13,68.20246);
   hmcerror__23->SetBinContent(14,84.07388);
   hmcerror__23->SetBinContent(15,100.1019);
   hmcerror__23->SetBinContent(16,114.7562);
   hmcerror__23->SetBinContent(17,134.5469);
   hmcerror__23->SetBinContent(18,172.8809);
   hmcerror__23->SetBinContent(19,252.3684);
   hmcerror__23->SetBinContent(20,373.2168);
   hmcerror__23->SetBinError(1,6.256509);
   hmcerror__23->SetBinError(2,5.455);
   hmcerror__23->SetBinError(3,6.719507);
   hmcerror__23->SetBinError(4,8.08751);
   hmcerror__23->SetBinError(5,7.363051);
   hmcerror__23->SetBinError(6,8.511099);
   hmcerror__23->SetBinError(7,9.1648);
   hmcerror__23->SetBinError(8,11.23897);
   hmcerror__23->SetBinError(9,12.38056);
   hmcerror__23->SetBinError(10,12.06979);
   hmcerror__23->SetBinError(11,13.48163);
   hmcerror__23->SetBinError(12,14.05144);
   hmcerror__23->SetBinError(13,17.68368);
   hmcerror__23->SetBinError(14,19.39153);
   hmcerror__23->SetBinError(15,25.79045);
   hmcerror__23->SetBinError(16,27.566);
   hmcerror__23->SetBinError(17,30.14873);
   hmcerror__23->SetBinError(18,37.60422);
   hmcerror__23->SetBinError(19,55.53012);
   hmcerror__23->SetBinError(20,74.55256);
   hmcerror__23->SetBinError(21,0.3895343);
   hmcerror__23->SetEntries(1748.127);

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
   
   Double_t _fx3029[20] = {
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
   Double_t _fy3029[20] = {
   35,
   26,
   40,
   25,
   32,
   38,
   27,
   34,
   42,
   48,
   53,
   49,
   64,
   80,
   106,
   121,
   150,
   194,
   256,
   373};
   Double_t _felx3029[20] = {
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
   Double_t _fely3029[20] = {
   6.0548,
   5.2453,
   6.4604,
   5.1474,
   5.7977,
   6.3013,
   5.3414,
   5.9703,
   6.6155,
   7.0604,
   7.4105,
   7.1318,
   8.1273,
   9.0683,
   10.29563,
   11,
   12.24745,
   13.92839,
   16,
   19.31321};
   Double_t _fehx3029[20] = {
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
   Double_t _fehy3029[20] = {
   5.8483,
   5.0358,
   6.2549,
   4.9374,
   5.5904,
   6.0955,
   5.1322,
   5.7635,
   6.4104,
   6.8561,
   7.2068,
   6.9277,
   7.9246,
   8.8665,
   10.29563,
   11,
   12.24745,
   13.92839,
   16,
   19.31321};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(17.86734);
   Graph_Graph3029->SetMaximum(429.5593);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1793.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1231.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 378.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[20] = {
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
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[20] = {
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
   Double_t _fely3030[20] = {
   0.2752058,
   0.2587667,
   0.2682707,
   0.284046,
   0.225178,
   0.2165217,
   0.2503353,
   0.2532782,
   0.2771874,
   0.2514974,
   0.2269652,
   0.2260824,
   0.2592822,
   0.2306486,
   0.2576421,
   0.2402137,
   0.2240759,
   0.2175152,
   0.220036,
   0.1997567};
   Double_t _fehx3030[20] = {
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
   Double_t _fehy3030[20] = {
   0.2752058,
   0.2587667,
   0.2682707,
   0.284046,
   0.225178,
   0.2165217,
   0.2503353,
   0.2532782,
   0.2771874,
   0.2514974,
   0.2269652,
   0.2260824,
   0.2592822,
   0.2306486,
   0.2576421,
   0.2402137,
   0.2240759,
   0.2175152,
   0.220036,
   0.1997567};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   0.2752058,
   0.2587667,
   0.2682707,
   0.284046,
   0.225178,
   0.2165217,
   0.2503353,
   0.2532782,
   0.2771874,
   0.2514974,
   0.2269652,
   0.2260824,
   0.2592822,
   0.2306486,
   0.2576421,
   0.2402137,
   0.2240759,
   0.2175152,
   0.220036,
   0.1997567};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   0.2752058,
   0.2587667,
   0.2682707,
   0.284046,
   0.225178,
   0.2165217,
   0.2503353,
   0.2532782,
   0.2771874,
   0.2514974,
   0.2269652,
   0.2260824,
   0.2592822,
   0.2306486,
   0.2576421,
   0.2402137,
   0.2240759,
   0.2175152,
   0.220036,
   0.1997567};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
   1.539549,
   1.233352,
   1.596967,
   0.8780392,
   0.978629,
   0.966717,
   0.7375015,
   0.7662146,
   0.9403351,
   1.000173,
   0.8922627,
   0.7883914,
   0.9383826,
   0.951544,
   1.058921,
   1.054409,
   1.114853,
   1.12216,
   1.01439,
   0.9994191};
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0.2663332,
   0.2488192,
   0.2579261,
   0.1807848,
   0.1773062,
   0.1603046,
   0.1458996,
   0.134545,
   0.148114,
   0.147117,
   0.1247569,
   0.114748,
   0.1191643,
   0.1078611,
   0.1028515,
   0.0958554,
   0.09102733,
   0.08056639,
   0.06339939,
   0.05174796};
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
   0.2572499,
   0.2388812,
   0.2497217,
   0.1734092,
   0.1709665,
   0.155069,
   0.1401854,
   0.1298846,
   0.143522,
   0.1428601,
   0.1213275,
   0.1114641,
   0.1161923,
   0.1054608,
   0.1028515,
   0.0958554,
   0.09102733,
   0.08056639,
   0.06339939,
   0.05174796};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.4660932);
   Graph_Graph3032->SetMaximum(1.972197);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
