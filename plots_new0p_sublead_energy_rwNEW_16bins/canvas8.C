#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 20:02:47 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-5.402365,451.2821,597.3878);
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
   hmc__22->SetBinContent(1,188.9048);
   hmc__22->SetBinContent(2,270.1182);
   hmc__22->SetBinContent(3,210.8091);
   hmc__22->SetBinContent(4,166.9872);
   hmc__22->SetBinContent(5,103.1677);
   hmc__22->SetBinContent(6,84.26017);
   hmc__22->SetBinContent(7,49.42671);
   hmc__22->SetBinContent(8,28.63337);
   hmc__22->SetBinContent(9,14.99268);
   hmc__22->SetBinContent(10,11.69995);
   hmc__22->SetBinContent(11,8.269123);
   hmc__22->SetBinContent(12,6.880352);
   hmc__22->SetBinContent(13,2.033872);
   hmc__22->SetBinContent(14,2.421148);
   hmc__22->SetBinContent(15,1.372488);
   hmc__22->SetBinContent(16,1.166196);
   hmc__22->SetBinContent(17,3.114931);
   hmc__22->SetBinError(1,45.73861);
   hmc__22->SetBinError(2,59.57503);
   hmc__22->SetBinError(3,52.25991);
   hmc__22->SetBinError(4,43.52955);
   hmc__22->SetBinError(5,36.67647);
   hmc__22->SetBinError(6,29.96378);
   hmc__22->SetBinError(7,18.40367);
   hmc__22->SetBinError(8,13.58089);
   hmc__22->SetBinError(9,15.44483);
   hmc__22->SetBinError(10,8.378577);
   hmc__22->SetBinError(11,6.980078);
   hmc__22->SetBinError(12,6.458759);
   hmc__22->SetBinError(13,5.271132);
   hmc__22->SetBinError(14,3.493008);
   hmc__22->SetBinError(15,3.686976);
   hmc__22->SetBinError(16,2.419199);
   hmc__22->SetBinError(17,4.991461);
   hmc__22->SetMinimum(-5.402365);
   hmc__22->SetMaximum(567.2483);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",16,0,400);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(283.6241);
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
   hbadmatch_stack_1->SetBinContent(1,5.683943);
   hbadmatch_stack_1->SetBinContent(2,8.497115);
   hbadmatch_stack_1->SetBinContent(3,9.250374);
   hbadmatch_stack_1->SetBinContent(4,5.68645);
   hbadmatch_stack_1->SetBinContent(5,3.683214);
   hbadmatch_stack_1->SetBinContent(6,2.376809);
   hbadmatch_stack_1->SetBinContent(7,1.658939);
   hbadmatch_stack_1->SetBinContent(8,0.536893);
   hbadmatch_stack_1->SetBinContent(9,0.6803553);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.3962007);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinError(1,1.530864);
   hbadmatch_stack_1->SetBinError(2,1.484751);
   hbadmatch_stack_1->SetBinError(3,1.718307);
   hbadmatch_stack_1->SetBinError(4,1.246232);
   hbadmatch_stack_1->SetBinError(5,0.9574153);
   hbadmatch_stack_1->SetBinError(6,0.8672023);
   hbadmatch_stack_1->SetBinError(7,0.69611);
   hbadmatch_stack_1->SetBinError(8,0.3929602);
   hbadmatch_stack_1->SetBinError(9,0.4810838);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.3962007);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,44.41913);
   hext_stack_2->SetBinContent(2,71.64073);
   hext_stack_2->SetBinContent(3,31.5238);
   hext_stack_2->SetBinContent(4,24.38101);
   hext_stack_2->SetBinContent(5,12.47601);
   hext_stack_2->SetBinContent(6,5.758588);
   hext_stack_2->SetBinContent(7,3.490578);
   hext_stack_2->SetBinContent(8,2.420823);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,0.6416141);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,4.232655);
   hext_stack_2->SetBinError(2,5.607909);
   hext_stack_2->SetBinError(3,3.646185);
   hext_stack_2->SetBinError(4,3.220708);
   hext_stack_2->SetBinError(5,2.308512);
   hext_stack_2->SetBinError(6,1.518408);
   hext_stack_2->SetBinError(7,1.110227);
   hext_stack_2->SetBinError(8,1.122148);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.6416141);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,3.967979);
   hdirt_stack_3->SetBinContent(2,7.079326);
   hdirt_stack_3->SetBinContent(3,5.384123);
   hdirt_stack_3->SetBinContent(4,2.148791);
   hdirt_stack_3->SetBinContent(5,1.300249);
   hdirt_stack_3->SetBinContent(6,0.4762587);
   hdirt_stack_3->SetBinContent(7,0.6177251);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,1.055263);
   hdirt_stack_3->SetBinError(2,1.570629);
   hdirt_stack_3->SetBinError(3,1.195517);
   hdirt_stack_3->SetBinError(4,0.7545756);
   hdirt_stack_3->SetBinError(5,0.6151544);
   hdirt_stack_3->SetBinError(6,0.3652866);
   hdirt_stack_3->SetBinError(7,0.4549508);
   hdirt_stack_3->SetBinError(8,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,43.34706);
   houtFV_stack_4->SetBinContent(2,66.31106);
   houtFV_stack_4->SetBinContent(3,51.02873);
   houtFV_stack_4->SetBinContent(4,32.75297);
   houtFV_stack_4->SetBinContent(5,15.69237);
   houtFV_stack_4->SetBinContent(6,15.40136);
   houtFV_stack_4->SetBinContent(7,8.399727);
   houtFV_stack_4->SetBinContent(8,5.05861);
   houtFV_stack_4->SetBinContent(9,2.057363);
   houtFV_stack_4->SetBinContent(10,2.394159);
   houtFV_stack_4->SetBinContent(11,2.289344);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(15,0.2510497);
   houtFV_stack_4->SetBinContent(17,0.2090315);
   houtFV_stack_4->SetBinError(1,3.259619);
   houtFV_stack_4->SetBinError(2,4.245462);
   houtFV_stack_4->SetBinError(3,3.786645);
   houtFV_stack_4->SetBinError(4,2.873731);
   houtFV_stack_4->SetBinError(5,1.989422);
   houtFV_stack_4->SetBinError(6,2.002912);
   houtFV_stack_4->SetBinError(7,1.495329);
   houtFV_stack_4->SetBinError(8,1.146611);
   houtFV_stack_4->SetBinError(9,0.7087455);
   houtFV_stack_4->SetBinError(10,0.785313);
   houtFV_stack_4->SetBinError(11,0.8330862);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(15,0.2510497);
   houtFV_stack_4->SetBinError(17,0.2090315);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.25858);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.136106);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.758788);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.463426);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.28324);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.493158);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6968357);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4843191);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5986105);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5376379);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3743209);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3841566);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4606363);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1815295);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.5854);
   hNCpi0inFVres_stack_7->SetBinContent(2,36.79327);
   hNCpi0inFVres_stack_7->SetBinContent(3,34.00507);
   hNCpi0inFVres_stack_7->SetBinContent(4,26.51971);
   hNCpi0inFVres_stack_7->SetBinContent(5,16.65868);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.93345);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.988562);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.2683);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.88567);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.854858);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.9346539);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.8501219);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2231999);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2927861);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,1.646706);
   hNCpi0inFVres_stack_7->SetBinError(2,1.977148);
   hNCpi0inFVres_stack_7->SetBinError(3,1.86252);
   hNCpi0inFVres_stack_7->SetBinError(4,1.656642);
   hNCpi0inFVres_stack_7->SetBinError(5,1.252355);
   hNCpi0inFVres_stack_7->SetBinError(6,1.235617);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8891309);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7055964);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5812367);
   hNCpi0inFVres_stack_7->SetBinError(10,0.41265);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3135935);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2770189);
   hNCpi0inFVres_stack_7->SetBinError(13,0.07891307);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2183542);
   hNCpi0inFVres_stack_7->SetBinError(17,0.05579997);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.673349);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.211266);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.79559);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.135368);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.410295);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.279678);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.53858);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.978411);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8654041);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7674223);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7315502);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9181681);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9000803);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8116687);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7480353);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6850254);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5425626);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3768247);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3498677);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3555691);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2013529);
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
   hCCpi0inFV_stack_10->SetBinContent(1,32.65055);
   hCCpi0inFV_stack_10->SetBinContent(2,33.90837);
   hCCpi0inFV_stack_10->SetBinContent(3,39.28597);
   hCCpi0inFV_stack_10->SetBinContent(4,39.86933);
   hCCpi0inFV_stack_10->SetBinContent(5,23.37067);
   hCCpi0inFV_stack_10->SetBinContent(6,23.81979);
   hCCpi0inFV_stack_10->SetBinContent(7,12.63487);
   hCCpi0inFV_stack_10->SetBinContent(8,5.911977);
   hCCpi0inFV_stack_10->SetBinContent(9,4.44476);
   hCCpi0inFV_stack_10->SetBinContent(10,4.00796);
   hCCpi0inFV_stack_10->SetBinContent(11,2.158798);
   hCCpi0inFV_stack_10->SetBinContent(12,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(13,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(14,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5867651);
   hCCpi0inFV_stack_10->SetBinError(1,2.963494);
   hCCpi0inFV_stack_10->SetBinError(2,2.905042);
   hCCpi0inFV_stack_10->SetBinError(3,3.173789);
   hCCpi0inFV_stack_10->SetBinError(4,3.14744);
   hCCpi0inFV_stack_10->SetBinError(5,2.433414);
   hCCpi0inFV_stack_10->SetBinError(6,2.487275);
   hCCpi0inFV_stack_10->SetBinError(7,1.797821);
   hCCpi0inFV_stack_10->SetBinError(8,1.225813);
   hCCpi0inFV_stack_10->SetBinError(9,1.056592);
   hCCpi0inFV_stack_10->SetBinError(10,0.9715729);
   hCCpi0inFV_stack_10->SetBinError(11,0.6509067);
   hCCpi0inFV_stack_10->SetBinError(12,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(13,0.340721);
   hCCpi0inFV_stack_10->SetBinError(14,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.3387718);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,5.415421);
   hNCinFV_stack_11->SetBinContent(2,6.458405);
   hNCinFV_stack_11->SetBinContent(3,6.847224);
   hNCinFV_stack_11->SetBinContent(4,7.662737);
   hNCinFV_stack_11->SetBinContent(5,6.684232);
   hNCinFV_stack_11->SetBinContent(6,5.857033);
   hNCinFV_stack_11->SetBinContent(7,4.875147);
   hNCinFV_stack_11->SetBinContent(8,2.932743);
   hNCinFV_stack_11->SetBinContent(9,0.7319179);
   hNCinFV_stack_11->SetBinContent(10,1.121968);
   hNCinFV_stack_11->SetBinContent(11,0.5867651);
   hNCinFV_stack_11->SetBinContent(12,0.785171);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.226051);
   hNCinFV_stack_11->SetBinError(2,1.20929);
   hNCinFV_stack_11->SetBinError(3,1.257366);
   hNCinFV_stack_11->SetBinError(4,1.428835);
   hNCinFV_stack_11->SetBinError(5,1.360173);
   hNCinFV_stack_11->SetBinError(6,1.241081);
   hNCinFV_stack_11->SetBinError(7,1.160801);
   hNCinFV_stack_11->SetBinError(8,0.8785195);
   hNCinFV_stack_11->SetBinError(9,0.438694);
   hNCinFV_stack_11->SetBinError(10,0.5181909);
   hNCinFV_stack_11->SetBinError(11,0.3387718);
   hNCinFV_stack_11->SetBinError(12,0.3925882);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,17.48262);
   hnumuCCinFV_stack_12->SetBinContent(2,25.535);
   hnumuCCinFV_stack_12->SetBinContent(3,21.94716);
   hnumuCCinFV_stack_12->SetBinContent(4,19.09105);
   hnumuCCinFV_stack_12->SetBinContent(5,16.58081);
   hnumuCCinFV_stack_12->SetBinContent(6,10.3931);
   hnumuCCinFV_stack_12->SetBinContent(7,6.329027);
   hnumuCCinFV_stack_12->SetBinContent(8,3.41292);
   hnumuCCinFV_stack_12->SetBinContent(9,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(10,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(11,0.7800994);
   hnumuCCinFV_stack_12->SetBinContent(12,1.215558);
   hnumuCCinFV_stack_12->SetBinContent(13,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,1.325052);
   hnumuCCinFV_stack_12->SetBinError(1,2.399762);
   hnumuCCinFV_stack_12->SetBinError(2,2.799265);
   hnumuCCinFV_stack_12->SetBinError(3,2.776449);
   hnumuCCinFV_stack_12->SetBinError(4,2.239114);
   hnumuCCinFV_stack_12->SetBinError(5,3.450054);
   hnumuCCinFV_stack_12->SetBinError(6,1.63503);
   hnumuCCinFV_stack_12->SetBinError(7,1.286842);
   hnumuCCinFV_stack_12->SetBinError(8,0.9085186);
   hnumuCCinFV_stack_12->SetBinError(9,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(10,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(11,0.3900497);
   hnumuCCinFV_stack_12->SetBinError(12,0.6206425);
   hnumuCCinFV_stack_12->SetBinError(13,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.6236813);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.36491);
   hnueCCinFV_stack_13->SetBinContent(2,2.240494);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(4,1.108967);
   hnueCCinFV_stack_13->SetBinContent(6,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.9948679);
   hnueCCinFV_stack_13->SetBinError(2,1.303041);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(4,0.5044524);
   hnueCCinFV_stack_13->SetBinError(6,0.3152389);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__23->SetBinContent(1,188.9048);
   hmcerror__23->SetBinContent(2,270.1182);
   hmcerror__23->SetBinContent(3,210.8091);
   hmcerror__23->SetBinContent(4,166.9872);
   hmcerror__23->SetBinContent(5,103.1677);
   hmcerror__23->SetBinContent(6,84.26017);
   hmcerror__23->SetBinContent(7,49.42671);
   hmcerror__23->SetBinContent(8,28.63337);
   hmcerror__23->SetBinContent(9,14.99268);
   hmcerror__23->SetBinContent(10,11.69995);
   hmcerror__23->SetBinContent(11,8.269123);
   hmcerror__23->SetBinContent(12,6.880352);
   hmcerror__23->SetBinContent(13,2.033872);
   hmcerror__23->SetBinContent(14,2.421148);
   hmcerror__23->SetBinContent(15,1.372488);
   hmcerror__23->SetBinContent(16,1.166196);
   hmcerror__23->SetBinContent(17,3.114931);
   hmcerror__23->SetBinError(1,45.73861);
   hmcerror__23->SetBinError(2,59.57503);
   hmcerror__23->SetBinError(3,52.25991);
   hmcerror__23->SetBinError(4,43.52955);
   hmcerror__23->SetBinError(5,36.67647);
   hmcerror__23->SetBinError(6,29.96378);
   hmcerror__23->SetBinError(7,18.40367);
   hmcerror__23->SetBinError(8,13.58089);
   hmcerror__23->SetBinError(9,15.44483);
   hmcerror__23->SetBinError(10,8.378577);
   hmcerror__23->SetBinError(11,6.980078);
   hmcerror__23->SetBinError(12,6.458759);
   hmcerror__23->SetBinError(13,5.271132);
   hmcerror__23->SetBinError(14,3.493008);
   hmcerror__23->SetBinError(15,3.686976);
   hmcerror__23->SetBinError(16,2.419199);
   hmcerror__23->SetBinError(17,4.991461);
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
   185,
   237,
   238,
   155,
   95,
   50,
   42,
   19,
   24,
   10,
   5,
   4,
   3,
   1,
   0,
   1};
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
   13.60147,
   15.3948,
   15.42725,
   12.4499,
   9.8686,
   7.2025,
   6.6155,
   4.5151,
   5.0476,
   3.34883,
   2.48995,
   2.29683,
   2.143368,
   1,
   0,
   1};
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
   13.60147,
   15.3948,
   15.42725,
   12.4499,
   9.667,
   6.9985,
   6.4104,
   4.3011,
   4.837,
   3.1179,
   2.21064,
   1.98186,
   1.72422,
   1.35971,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,440);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(278.77);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1069.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 245.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  173.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 126.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   0.2421252,
   0.2205517,
   0.2479017,
   0.2606759,
   0.3555036,
   0.3556102,
   0.3723426,
   0.474303,
   1.030158,
   0.7161208,
   0.8441135,
   0.9387252,
   2.591673,
   1.442708,
   2.686344,
   2.074436};
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
   0.2421252,
   0.2205517,
   0.2479017,
   0.2606759,
   0.3555036,
   0.3556102,
   0.3723426,
   0.474303,
   1.030158,
   0.7161208,
   0.8441135,
   0.9387252,
   2.591673,
   1.442708,
   2.686344,
   2.074436};
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
   0.162288,
   0.152095,
   0.165684,
   0.1764532,
   0.1982213,
   0.2155512,
   0.2080931,
   0.2586266,
   0.2823223,
   0.2960828,
   0.2742814,
   0.3152494,
   0.4982039,
   0.4391541,
   0.5711332,
   0.6735823};
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
   0.162288,
   0.152095,
   0.165684,
   0.1764532,
   0.1982213,
   0.2155512,
   0.2080931,
   0.2586266,
   0.2823223,
   0.2960828,
   0.2742814,
   0.3152494,
   0.4982039,
   0.4391541,
   0.5711332,
   0.6735823};
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
   0.9793295,
   0.8773936,
   1.128984,
   0.9282147,
   0.9208312,
   0.5934002,
   0.849743,
   0.6635614,
   1.600781,
   0.8547046,
   0.604659,
   0.5813656,
   1.475019,
   0.4130273,
   0,
   0.8574887};
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
   0.07200174,
   0.05699284,
   0.07318115,
   0.074556,
   0.09565594,
   0.0854793,
   0.1338446,
   0.1576866,
   0.336671,
   0.286226,
   0.3011142,
   0.3338245,
   1.053836,
   0.4130273,
   0,
   0.8574887};
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
   0.07200174,
   0.05699284,
   0.07318115,
   0.074556,
   0.09370184,
   0.08305822,
   0.1296951,
   0.1502128,
   0.3226241,
   0.2664883,
   0.2673367,
   0.2880463,
   0.8477524,
   0.5615973,
   0.8362914,
   1.165936};
   grae = new TGraphAsymmErrors(16,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.555049);
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
