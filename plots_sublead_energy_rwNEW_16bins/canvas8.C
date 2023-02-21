#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 15:23:27 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-4.591168,451.2821,507.6865);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__22->SetBinContent(1,164.1904);
   hmc__22->SetBinContent(2,229.5584);
   hmc__22->SetBinContent(3,178.0315);
   hmc__22->SetBinContent(4,142.4759);
   hmc__22->SetBinContent(5,84.60393);
   hmc__22->SetBinContent(6,69.91569);
   hmc__22->SetBinContent(7,37.87494);
   hmc__22->SetBinContent(8,20.96339);
   hmc__22->SetBinContent(9,10.96783);
   hmc__22->SetBinContent(10,9.048945);
   hmc__22->SetBinContent(11,5.685148);
   hmc__22->SetBinContent(12,4.392785);
   hmc__22->SetBinContent(13,1.978072);
   hmc__22->SetBinContent(14,0.9620038);
   hmc__22->SetBinContent(15,0.5578929);
   hmc__22->SetBinContent(16,0.6184307);
   hmc__22->SetBinContent(17,2.172687);
   hmc__22->SetBinError(1,38.36484);
   hmc__22->SetBinError(2,54.76514);
   hmc__22->SetBinError(3,49.7458);
   hmc__22->SetBinError(4,37.34966);
   hmc__22->SetBinError(5,31.92645);
   hmc__22->SetBinError(6,25.7802);
   hmc__22->SetBinError(7,16.52364);
   hmc__22->SetBinError(8,10.35682);
   hmc__22->SetBinError(9,8.687976);
   hmc__22->SetBinError(10,7.788186);
   hmc__22->SetBinError(11,4.833409);
   hmc__22->SetBinError(12,4.409695);
   hmc__22->SetBinError(13,3.896739);
   hmc__22->SetBinError(14,2.150096);
   hmc__22->SetBinError(15,1.525999);
   hmc__22->SetBinError(16,1.123236);
   hmc__22->SetBinError(17,4.690603);
   hmc__22->SetMinimum(-4.591168);
   hmc__22->SetMaximum(482.0726);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",16,0,400);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(241.0363);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,5.009061);
   hbadmatch_stack_1->SetBinContent(2,7.515229);
   hbadmatch_stack_1->SetBinContent(3,7.90049);
   hbadmatch_stack_1->SetBinContent(4,4.616045);
   hbadmatch_stack_1->SetBinContent(5,3.093068);
   hbadmatch_stack_1->SetBinContent(6,1.434161);
   hbadmatch_stack_1->SetBinContent(7,1.073786);
   hbadmatch_stack_1->SetBinContent(8,0.3401776);
   hbadmatch_stack_1->SetBinContent(9,0.6803553);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.3962007);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinError(1,1.478829);
   hbadmatch_stack_1->SetBinError(2,1.418331);
   hbadmatch_stack_1->SetBinError(3,1.600019);
   hbadmatch_stack_1->SetBinError(4,1.116057);
   hbadmatch_stack_1->SetBinError(5,0.8947364);
   hbadmatch_stack_1->SetBinError(6,0.6580155);
   hbadmatch_stack_1->SetBinError(7,0.5557297);
   hbadmatch_stack_1->SetBinError(8,0.3401776);
   hbadmatch_stack_1->SetBinError(9,0.4810838);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.3962007);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,46.21428);
   hext_stack_2->SetBinContent(2,68.19481);
   hext_stack_2->SetBinContent(3,34.44495);
   hext_stack_2->SetBinContent(4,25.16108);
   hext_stack_2->SetBinContent(5,10.54398);
   hext_stack_2->SetBinContent(6,6.952434);
   hext_stack_2->SetBinContent(7,2.759582);
   hext_stack_2->SetBinContent(8,2.420823);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,0.6416141);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinError(1,4.490253);
   hext_stack_2->SetBinError(2,5.550738);
   hext_stack_2->SetBinError(3,4.00545);
   hext_stack_2->SetBinError(4,3.37243);
   hext_stack_2->SetBinError(5,2.072541);
   hext_stack_2->SetBinError(6,1.808318);
   hext_stack_2->SetBinError(7,0.98084);
   hext_stack_2->SetBinError(8,1.122148);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.6416141);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(16,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,3.06282);
   hdirt_stack_3->SetBinContent(2,6.335607);
   hdirt_stack_3->SetBinContent(3,5.227662);
   hdirt_stack_3->SetBinContent(4,2.148791);
   hdirt_stack_3->SetBinContent(5,1.300249);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.6177251);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,0.8922944);
   hdirt_stack_3->SetBinError(2,1.510377);
   hdirt_stack_3->SetBinError(3,1.185235);
   hdirt_stack_3->SetBinError(4,0.7545756);
   hdirt_stack_3->SetBinError(5,0.6151544);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.4549508);
   hdirt_stack_3->SetBinError(8,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,37.18812);
   houtFV_stack_4->SetBinContent(2,57.53625);
   houtFV_stack_4->SetBinContent(3,41.48764);
   houtFV_stack_4->SetBinContent(4,27.74724);
   houtFV_stack_4->SetBinContent(5,12.32139);
   houtFV_stack_4->SetBinContent(6,12.09848);
   houtFV_stack_4->SetBinContent(7,6.252154);
   houtFV_stack_4->SetBinContent(8,3.596465);
   houtFV_stack_4->SetBinContent(9,1.663932);
   houtFV_stack_4->SetBinContent(10,1.662242);
   houtFV_stack_4->SetBinContent(11,1.413964);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(17,0.2090315);
   houtFV_stack_4->SetBinError(1,3.010289);
   houtFV_stack_4->SetBinError(2,3.965073);
   houtFV_stack_4->SetBinError(3,3.456246);
   houtFV_stack_4->SetBinError(4,2.624853);
   houtFV_stack_4->SetBinError(5,1.774894);
   houtFV_stack_4->SetBinError(6,1.763801);
   houtFV_stack_4->SetBinError(7,1.272139);
   houtFV_stack_4->SetBinError(8,0.9646108);
   houtFV_stack_4->SetBinError(9,0.6518637);
   houtFV_stack_4->SetBinError(10,0.6513556);
   houtFV_stack_4->SetBinError(11,0.6515799);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(17,0.2090315);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.035212);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.010888);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.60567);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.338208);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.22744);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.102222);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6968357);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4422429);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5899875);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5272825);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3603705);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3821249);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3684702);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1815295);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.09878);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.58017);
   hNCpi0inFVres_stack_7->SetBinContent(3,25.9456);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.3093);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.08912);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.51602);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.0226);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.386037);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.966794);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.199372);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5996859);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.613304);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.09731799);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,1.383127);
   hNCpi0inFVres_stack_7->SetBinError(2,1.730546);
   hNCpi0inFVres_stack_7->SetBinError(3,1.632164);
   hNCpi0inFVres_stack_7->SetBinError(4,1.547793);
   hNCpi0inFVres_stack_7->SetBinError(5,1.103735);
   hNCpi0inFVres_stack_7->SetBinError(6,1.065641);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7555848);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5296755);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4887857);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3353836);
   hNCpi0inFVres_stack_7->SetBinError(11,0.237152);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2517472);
   hNCpi0inFVres_stack_7->SetBinError(13,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.097318);
   hNCpi0inFVres_stack_7->SetBinError(17,0.05579997);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.600028);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.477049);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.262082);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.935996);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.335974);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.708724);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.064112);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.225608);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3485861);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6724574);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6911525);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8214796);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7391373);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6515865);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6580755);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4983797);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2733645);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2218905);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,27.73431);
   hCCpi0inFV_stack_10->SetBinContent(2,29.16179);
   hCCpi0inFV_stack_10->SetBinContent(3,31.81554);
   hCCpi0inFV_stack_10->SetBinContent(4,32.45099);
   hCCpi0inFV_stack_10->SetBinContent(5,19.04956);
   hCCpi0inFV_stack_10->SetBinContent(6,20.44712);
   hCCpi0inFV_stack_10->SetBinContent(7,9.900537);
   hCCpi0inFV_stack_10->SetBinContent(8,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(9,3.907867);
   hCCpi0inFV_stack_10->SetBinContent(10,3.614529);
   hCCpi0inFV_stack_10->SetBinContent(11,1.176911);
   hCCpi0inFV_stack_10->SetBinContent(12,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(13,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(14,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5867651);
   hCCpi0inFV_stack_10->SetBinError(1,2.748592);
   hCCpi0inFV_stack_10->SetBinError(2,2.701744);
   hCCpi0inFV_stack_10->SetBinError(3,2.850724);
   hCCpi0inFV_stack_10->SetBinError(4,2.876687);
   hCCpi0inFV_stack_10->SetBinError(5,2.162192);
   hCCpi0inFV_stack_10->SetBinError(6,2.319122);
   hCCpi0inFV_stack_10->SetBinError(7,1.581051);
   hCCpi0inFV_stack_10->SetBinError(8,1.144335);
   hCCpi0inFV_stack_10->SetBinError(9,0.9808007);
   hCCpi0inFV_stack_10->SetBinError(10,0.9308921);
   hCCpi0inFV_stack_10->SetBinError(11,0.4804759);
   hCCpi0inFV_stack_10->SetBinError(12,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(13,0.340721);
   hCCpi0inFV_stack_10->SetBinError(14,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.3387718);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,3.804742);
   hNCinFV_stack_11->SetBinContent(2,4.694729);
   hNCinFV_stack_11->SetBinContent(3,4.499704);
   hNCinFV_stack_11->SetBinContent(4,5.321831);
   hNCinFV_stack_11->SetBinContent(5,5.702345);
   hNCinFV_stack_11->SetBinContent(6,4.588223);
   hNCinFV_stack_11->SetBinContent(7,3.319412);
   hNCinFV_stack_11->SetBinContent(8,2.002419);
   hNCinFV_stack_11->SetBinContent(9,0.3917402);
   hNCinFV_stack_11->SetBinContent(10,0.5867651);
   hNCinFV_stack_11->SetBinContent(11,0.3900497);
   hNCinFV_stack_11->SetBinContent(12,0.5901461);
   hNCinFV_stack_11->SetBinContent(14,0.1950248);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.019779);
   hNCinFV_stack_11->SetBinError(2,1.056768);
   hNCinFV_stack_11->SetBinError(3,1.038616);
   hNCinFV_stack_11->SetBinError(4,1.177508);
   hNCinFV_stack_11->SetBinError(5,1.287342);
   hNCinFV_stack_11->SetBinError(6,1.092434);
   hNCinFV_stack_11->SetBinError(7,0.9200768);
   hNCinFV_stack_11->SetBinError(8,0.7348366);
   hNCinFV_stack_11->SetBinError(9,0.2770047);
   hNCinFV_stack_11->SetBinError(10,0.3387718);
   hNCinFV_stack_11->SetBinError(11,0.2758068);
   hNCinFV_stack_11->SetBinError(12,0.340721);
   hNCinFV_stack_11->SetBinError(14,0.1950249);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,13.39984);
   hnumuCCinFV_stack_12->SetBinContent(2,18.05627);
   hnumuCCinFV_stack_12->SetBinContent(3,17.28378);
   hnumuCCinFV_stack_12->SetBinContent(4,15.17004);
   hnumuCCinFV_stack_12->SetBinContent(5,13.9129);
   hnumuCCinFV_stack_12->SetBinContent(6,8.459284);
   hnumuCCinFV_stack_12->SetBinContent(7,4.971479);
   hnumuCCinFV_stack_12->SetBinContent(8,1.897521);
   hnumuCCinFV_stack_12->SetBinContent(9,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(10,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(11,0.5850745);
   hnumuCCinFV_stack_12->SetBinContent(12,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(13,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,0.9848747);
   hnumuCCinFV_stack_12->SetBinError(1,2.139886);
   hnumuCCinFV_stack_12->SetBinError(2,2.26749);
   hnumuCCinFV_stack_12->SetBinError(3,2.354612);
   hnumuCCinFV_stack_12->SetBinError(4,1.981367);
   hnumuCCinFV_stack_12->SetBinError(5,3.34848);
   hnumuCCinFV_stack_12->SetBinError(6,1.446949);
   hnumuCCinFV_stack_12->SetBinError(7,1.113933);
   hnumuCCinFV_stack_12->SetBinError(8,0.6924524);
   hnumuCCinFV_stack_12->SetBinError(9,0.620407);
   hnumuCCinFV_stack_12->SetBinError(10,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(11,0.337793);
   hnumuCCinFV_stack_12->SetBinError(12,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(13,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(15,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.5227405);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.01527);
   hnueCCinFV_stack_13->SetBinContent(2,0.9118721);
   hnueCCinFV_stack_13->SetBinContent(4,1.108967);
   hnueCCinFV_stack_13->SetBinContent(6,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.9631611);
   hnueCCinFV_stack_13->SetBinError(2,0.5735532);
   hnueCCinFV_stack_13->SetBinError(4,0.5044524);
   hnueCCinFV_stack_13->SetBinError(6,0.3152389);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__23->SetBinContent(1,164.1904);
   hmcerror__23->SetBinContent(2,229.5584);
   hmcerror__23->SetBinContent(3,178.0315);
   hmcerror__23->SetBinContent(4,142.4759);
   hmcerror__23->SetBinContent(5,84.60393);
   hmcerror__23->SetBinContent(6,69.91569);
   hmcerror__23->SetBinContent(7,37.87494);
   hmcerror__23->SetBinContent(8,20.96339);
   hmcerror__23->SetBinContent(9,10.96783);
   hmcerror__23->SetBinContent(10,9.048945);
   hmcerror__23->SetBinContent(11,5.685148);
   hmcerror__23->SetBinContent(12,4.392785);
   hmcerror__23->SetBinContent(13,1.978072);
   hmcerror__23->SetBinContent(14,0.9620038);
   hmcerror__23->SetBinContent(15,0.5578929);
   hmcerror__23->SetBinContent(16,0.6184307);
   hmcerror__23->SetBinContent(17,2.172687);
   hmcerror__23->SetBinError(1,38.36484);
   hmcerror__23->SetBinError(2,54.76514);
   hmcerror__23->SetBinError(3,49.7458);
   hmcerror__23->SetBinError(4,37.34966);
   hmcerror__23->SetBinError(5,31.92645);
   hmcerror__23->SetBinError(6,25.7802);
   hmcerror__23->SetBinError(7,16.52364);
   hmcerror__23->SetBinError(8,10.35682);
   hmcerror__23->SetBinError(9,8.687976);
   hmcerror__23->SetBinError(10,7.788186);
   hmcerror__23->SetBinError(11,4.833409);
   hmcerror__23->SetBinError(12,4.409695);
   hmcerror__23->SetBinError(13,3.896739);
   hmcerror__23->SetBinError(14,2.150096);
   hmcerror__23->SetBinError(15,1.525999);
   hmcerror__23->SetBinError(16,1.123236);
   hmcerror__23->SetBinError(17,4.690603);
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
   
   Double_t _fx3029[16] = {
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
   387.5};
   Double_t _fy3029[16] = {
   158,
   196,
   192,
   125,
   82,
   47,
   31,
   15,
   21,
   8,
   3,
   2,
   2,
   1,
   0,
   0};
   Double_t _felx3029[16] = {
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
   Double_t _fely3029[16] = {
   12.56981,
   14,
   13.85641,
   11.18034,
   9.1791,
   6.9882,
   5.7094,
   4.0385,
   4.7354,
   3.0307,
   2.143368,
   2,
   2,
   1,
   0,
   0};
   Double_t _fehx3029[16] = {
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
   Double_t _fehy3029[16] = {
   12.56981,
   14,
   13.85641,
   11.18034,
   8.9774,
   6.7839,
   5.5017,
   3.8197,
   4.5229,
   2.7896,
   1.72422,
   1.51917,
   1.51917,
   1.35971,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,440);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(231);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 883.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 186.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 97.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3030[16] = {
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
   387.5};
   Double_t _fy3030[16] = {
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
   Double_t _felx3030[16] = {
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
   Double_t _fely3030[16] = {
   0.2336607,
   0.2385674,
   0.2794214,
   0.2621473,
   0.3773637,
   0.3687326,
   0.4362685,
   0.4940433,
   0.7921327,
   0.8606733,
   0.8501817,
   1.00385,
   1.969968,
   2.235019,
   2.73529,
   1.816269};
   Double_t _fehx3030[16] = {
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
   Double_t _fehy3030[16] = {
   0.2336607,
   0.2385674,
   0.2794214,
   0.2621473,
   0.3773637,
   0.3687326,
   0.4362685,
   0.4940433,
   0.7921327,
   0.8606733,
   0.8501817,
   1.00385,
   1.969968,
   2.235019,
   2.73529,
   1.816269};
   grae = new TGraphAsymmErrors(16,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,440);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3031[16] = {
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
   387.5};
   Double_t _fy3031[16] = {
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
   Double_t _felx3031[16] = {
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
   Double_t _fely3031[16] = {
   0.1518405,
   0.1427191,
   0.1538508,
   0.1689447,
   0.1968114,
   0.2080584,
   0.2036112,
   0.2549678,
   0.3000474,
   0.2897396,
   0.3227883,
   0.386325,
   0.5087551,
   0.739264,
   0.9243236,
   1.002405};
   Double_t _fehx3031[16] = {
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
   Double_t _fehy3031[16] = {
   0.1518405,
   0.1427191,
   0.1538508,
   0.1689447,
   0.1968114,
   0.2080584,
   0.2036112,
   0.2549678,
   0.3000474,
   0.2897396,
   0.3227883,
   0.386325,
   0.5087551,
   0.739264,
   0.9243236,
   1.002405};
   grae = new TGraphAsymmErrors(16,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,440);
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
   
   Double_t _fx3032[16] = {
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
   387.5};
   Double_t _fy3032[16] = {
   0.9622976,
   0.8538133,
   1.078461,
   0.8773415,
   0.9692221,
   0.6722383,
   0.8184832,
   0.715533,
   1.914691,
   0.8840809,
   0.5276907,
   0.4552921,
   1.011085,
   1.039497,
   0,
   0};
   Double_t _felx3032[16] = {
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
   Double_t _fely3032[16] = {
   0.07655629,
   0.06098666,
   0.07783122,
   0.07847181,
   0.108495,
   0.09995182,
   0.1507435,
   0.1926453,
   0.4317536,
   0.334923,
   0.3770118,
   0.4552921,
   1.011085,
   1.039497,
   0,
   0};
   Double_t _fehx3032[16] = {
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
   Double_t _fehy3032[16] = {
   0.07655629,
   0.06098666,
   0.07783122,
   0.07847181,
   0.1061109,
   0.09702973,
   0.1452596,
   0.1822081,
   0.4123788,
   0.308279,
   0.303285,
   0.345833,
   0.7680053,
   1.413414,
   2.057384,
   1.855988};
   grae = new TGraphAsymmErrors(16,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.698202);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
