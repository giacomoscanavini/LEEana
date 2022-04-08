#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 15:14:49 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-1.486637,451.2821,125.2687);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmc__1->SetBinContent(1,53.79712);
   hmc__1->SetBinContent(2,74.33185);
   hmc__1->SetBinContent(3,59.00723);
   hmc__1->SetBinContent(4,49.3843);
   hmc__1->SetBinContent(5,32.49546);
   hmc__1->SetBinContent(6,20.02996);
   hmc__1->SetBinContent(7,12.98322);
   hmc__1->SetBinContent(8,8.296767);
   hmc__1->SetBinContent(9,5.165492);
   hmc__1->SetBinContent(10,3.711532);
   hmc__1->SetBinContent(11,2.117107);
   hmc__1->SetBinContent(12,1.508539);
   hmc__1->SetBinContent(13,0.8969079);
   hmc__1->SetBinContent(14,0.7580204);
   hmc__1->SetBinContent(15,0.4043798);
   hmc__1->SetBinContent(16,0.1002069);
   hmc__1->SetBinContent(17,0.5246364);
   hmc__1->SetBinError(1,14.07178);
   hmc__1->SetBinError(2,16.25998);
   hmc__1->SetBinError(3,12.78552);
   hmc__1->SetBinError(4,12.92202);
   hmc__1->SetBinError(5,9.224647);
   hmc__1->SetBinError(6,5.177122);
   hmc__1->SetBinError(7,3.824634);
   hmc__1->SetBinError(8,2.908246);
   hmc__1->SetBinError(9,2.046776);
   hmc__1->SetBinError(10,2.219021);
   hmc__1->SetBinError(11,1.458404);
   hmc__1->SetBinError(12,1.173073);
   hmc__1->SetBinError(13,0.7491289);
   hmc__1->SetBinError(14,1.052883);
   hmc__1->SetBinError(15,0.5648437);
   hmc__1->SetBinError(16,0.4691725);
   hmc__1->SetBinError(17,0.8014028);
   hmc__1->SetMinimum(-1.486637);
   hmc__1->SetMaximum(118.931);
   hmc__1->SetEntries(321.7148);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",16,0,400);
   hs1_stack_1->SetMinimum(-6.202043e-09);
   hs1_stack_1->SetMaximum(78.04842);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.354845);
   hbadmatch_stack_1->SetBinContent(2,1.890049);
   hbadmatch_stack_1->SetBinContent(3,1.35472);
   hbadmatch_stack_1->SetBinContent(4,1.9321);
   hbadmatch_stack_1->SetBinContent(5,0.7032398);
   hbadmatch_stack_1->SetBinContent(6,0.1898991);
   hbadmatch_stack_1->SetBinContent(7,0.149413);
   hbadmatch_stack_1->SetBinContent(8,0.07470649);
   hbadmatch_stack_1->SetBinContent(9,0.03825059);
   hbadmatch_stack_1->SetBinContent(10,0.1366628);
   hbadmatch_stack_1->SetBinContent(11,0.01485);
   hbadmatch_stack_1->SetBinContent(12,0.0127502);
   hbadmatch_stack_1->SetBinError(1,0.4097275);
   hbadmatch_stack_1->SetBinError(2,0.4005199);
   hbadmatch_stack_1->SetBinError(3,0.2606634);
   hbadmatch_stack_1->SetBinError(4,0.3433589);
   hbadmatch_stack_1->SetBinError(5,0.199368);
   hbadmatch_stack_1->SetBinError(6,0.09247705);
   hbadmatch_stack_1->SetBinError(7,0.08945557);
   hbadmatch_stack_1->SetBinError(8,0.06325464);
   hbadmatch_stack_1->SetBinError(9,0.02208399);
   hbadmatch_stack_1->SetBinError(10,0.08854226);
   hbadmatch_stack_1->SetBinError(11,0.01485);
   hbadmatch_stack_1->SetBinError(12,0.0127502);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,6.524961);
   hext_stack_2->SetBinContent(2,9.008977);
   hext_stack_2->SetBinContent(3,5.345667);
   hext_stack_2->SetBinContent(4,3.014352);
   hext_stack_2->SetBinContent(5,2.220887);
   hext_stack_2->SetBinContent(6,0.8302745);
   hext_stack_2->SetBinContent(7,1.081134);
   hext_stack_2->SetBinContent(8,0.4717173);
   hext_stack_2->SetBinContent(9,0.04907941);
   hext_stack_2->SetBinContent(11,0.01226985);
   hext_stack_2->SetBinContent(12,0.02453971);
   hext_stack_2->SetBinContent(13,0.1990491);
   hext_stack_2->SetBinContent(17,0.01226985);
   hext_stack_2->SetBinError(1,1.023081);
   hext_stack_2->SetBinError(2,1.219071);
   hext_stack_2->SetBinError(3,0.9199639);
   hext_stack_2->SetBinError(4,0.6950716);
   hext_stack_2->SetBinError(5,0.6015431);
   hext_stack_2->SetBinError(6,0.3488869);
   hext_stack_2->SetBinError(7,0.4462696);
   hext_stack_2->SetBinError(8,0.2830978);
   hext_stack_2->SetBinError(9,0.0245397);
   hext_stack_2->SetBinError(11,0.01226985);
   hext_stack_2->SetBinError(12,0.01735219);
   hext_stack_2->SetBinError(13,0.1990491);
   hext_stack_2->SetBinError(17,0.01226985);
   hext_stack_2->SetEntries(581);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,1.033784);
   hdirt_stack_3->SetBinContent(2,1.860816);
   hdirt_stack_3->SetBinContent(3,0.8313519);
   hdirt_stack_3->SetBinContent(4,0.4249091);
   hdirt_stack_3->SetBinContent(5,0.2421483);
   hdirt_stack_3->SetBinContent(6,0.1408535);
   hdirt_stack_3->SetBinContent(7,0.01643923);
   hdirt_stack_3->SetBinError(1,0.2113772);
   hdirt_stack_3->SetBinError(2,0.3245897);
   hdirt_stack_3->SetBinError(3,0.179315);
   hdirt_stack_3->SetBinError(4,0.1305799);
   hdirt_stack_3->SetBinError(5,0.09806351);
   hdirt_stack_3->SetBinError(6,0.07701226);
   hdirt_stack_3->SetBinError(7,0.01162429);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,8.598063);
   houtFV_stack_4->SetBinContent(2,12.67727);
   houtFV_stack_4->SetBinContent(3,8.775984);
   houtFV_stack_4->SetBinContent(4,6.852289);
   houtFV_stack_4->SetBinContent(5,2.979846);
   houtFV_stack_4->SetBinContent(6,1.41118);
   houtFV_stack_4->SetBinContent(7,1.060436);
   houtFV_stack_4->SetBinContent(8,0.5623422);
   houtFV_stack_4->SetBinContent(9,0.1876636);
   houtFV_stack_4->SetBinContent(10,0.1129571);
   houtFV_stack_4->SetBinContent(11,0.05100079);
   houtFV_stack_4->SetBinContent(12,0.07470649);
   houtFV_stack_4->SetBinContent(13,0.07470649);
   houtFV_stack_4->SetBinError(1,0.6887402);
   houtFV_stack_4->SetBinError(2,0.8409708);
   houtFV_stack_4->SetBinError(3,0.6850016);
   houtFV_stack_4->SetBinError(4,0.6218853);
   houtFV_stack_4->SetBinError(5,0.400005);
   houtFV_stack_4->SetBinError(6,0.2667139);
   houtFV_stack_4->SetBinError(7,0.2305492);
   houtFV_stack_4->SetBinError(8,0.1734188);
   houtFV_stack_4->SetBinError(9,0.0921412);
   houtFV_stack_4->SetBinError(10,0.0669989);
   houtFV_stack_4->SetBinError(11,0.02550039);
   houtFV_stack_4->SetBinError(12,0.06325464);
   houtFV_stack_4->SetBinError(13,0.06325464);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,22.90023);
   hNCpi0inFV_stack_5->SetBinContent(2,32.59555);
   hNCpi0inFV_stack_5->SetBinContent(3,28.02787);
   hNCpi0inFV_stack_5->SetBinContent(4,24.77526);
   hNCpi0inFV_stack_5->SetBinContent(5,17.43826);
   hNCpi0inFV_stack_5->SetBinContent(6,10.79797);
   hNCpi0inFV_stack_5->SetBinContent(7,6.284318);
   hNCpi0inFV_stack_5->SetBinContent(8,4.631802);
   hNCpi0inFV_stack_5->SetBinContent(9,2.97192);
   hNCpi0inFV_stack_5->SetBinContent(10,2.139193);
   hNCpi0inFV_stack_5->SetBinContent(11,0.99489);
   hNCpi0inFV_stack_5->SetBinContent(12,0.9438893);
   hNCpi0inFV_stack_5->SetBinContent(13,0.2988259);
   hNCpi0inFV_stack_5->SetBinContent(14,0.4846948);
   hNCpi0inFV_stack_5->SetBinContent(15,0.08745668);
   hNCpi0inFV_stack_5->SetBinContent(16,0.02550039);
   hNCpi0inFV_stack_5->SetBinContent(17,0.1002069);
   hNCpi0inFV_stack_5->SetBinError(1,1.105357);
   hNCpi0inFV_stack_5->SetBinError(2,1.336212);
   hNCpi0inFV_stack_5->SetBinError(3,1.233668);
   hNCpi0inFV_stack_5->SetBinError(4,1.153725);
   hNCpi0inFV_stack_5->SetBinError(5,0.9736275);
   hNCpi0inFV_stack_5->SetBinError(6,0.7713432);
   hNCpi0inFV_stack_5->SetBinError(7,0.5665402);
   hNCpi0inFV_stack_5->SetBinError(8,0.4980675);
   hNCpi0inFV_stack_5->SetBinError(9,0.4073511);
   hNCpi0inFV_stack_5->SetBinError(10,0.3445779);
   hNCpi0inFV_stack_5->SetBinError(11,0.2352994);
   hNCpi0inFV_stack_5->SetBinError(12,0.2339136);
   hNCpi0inFV_stack_5->SetBinError(13,0.1265093);
   hNCpi0inFV_stack_5->SetBinError(14,0.1658926);
   hNCpi0inFV_stack_5->SetBinError(15,0.06452687);
   hNCpi0inFV_stack_5->SetBinError(16,0.0180315);
   hNCpi0inFV_stack_5->SetBinError(17,0.0657745);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
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
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,7.415236);
   hCCpi0inFV_stack_6->SetBinContent(2,9.545188);
   hCCpi0inFV_stack_6->SetBinContent(3,8.94583);
   hCCpi0inFV_stack_6->SetBinContent(4,8.187569);
   hCCpi0inFV_stack_6->SetBinContent(5,6.054467);
   hCCpi0inFV_stack_6->SetBinContent(6,4.403251);
   hCCpi0inFV_stack_6->SetBinContent(7,2.886913);
   hCCpi0inFV_stack_6->SetBinContent(8,1.861053);
   hCCpi0inFV_stack_6->SetBinContent(9,1.568836);
   hCCpi0inFV_stack_6->SetBinContent(10,0.8582273);
   hCCpi0inFV_stack_6->SetBinContent(11,0.7707705);
   hCCpi0inFV_stack_6->SetBinContent(12,0.2113693);
   hCCpi0inFV_stack_6->SetBinContent(13,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(14,0.1986191);
   hCCpi0inFV_stack_6->SetBinContent(15,0.1239126);
   hCCpi0inFV_stack_6->SetBinContent(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(17,0.3352818);
   hCCpi0inFV_stack_6->SetBinError(1,0.6348716);
   hCCpi0inFV_stack_6->SetBinError(2,0.7232807);
   hCCpi0inFV_stack_6->SetBinError(3,0.7044216);
   hCCpi0inFV_stack_6->SetBinError(4,0.6562304);
   hCCpi0inFV_stack_6->SetBinError(5,0.5711111);
   hCCpi0inFV_stack_6->SetBinError(6,0.4763522);
   hCCpi0inFV_stack_6->SetBinError(7,0.4005291);
   hCCpi0inFV_stack_6->SetBinError(8,0.3064086);
   hCCpi0inFV_stack_6->SetBinError(9,0.2898692);
   hCCpi0inFV_stack_6->SetBinError(10,0.2180048);
   hCCpi0inFV_stack_6->SetBinError(11,0.2082363);
   hCCpi0inFV_stack_6->SetBinError(12,0.1088158);
   hCCpi0inFV_stack_6->SetBinError(13,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(14,0.1080662);
   hCCpi0inFV_stack_6->SetBinError(15,0.08761943);
   hCCpi0inFV_stack_6->SetBinError(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(17,0.139707);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
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
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_7->SetBinContent(1,2.394197);
   hNCinFV_stack_7->SetBinContent(2,2.439814);
   hNCinFV_stack_7->SetBinContent(3,1.745544);
   hNCinFV_stack_7->SetBinContent(4,1.854912);
   hNCinFV_stack_7->SetBinContent(5,1.171598);
   hNCinFV_stack_7->SetBinContent(6,0.7944763);
   hNCinFV_stack_7->SetBinContent(7,0.7707705);
   hNCinFV_stack_7->SetBinContent(8,0.3862826);
   hNCinFV_stack_7->SetBinContent(9,0.02550039);
   hNCinFV_stack_7->SetBinContent(10,0.06195629);
   hNCinFV_stack_7->SetBinContent(11,0.08745668);
   hNCinFV_stack_7->SetBinContent(12,0.06195629);
   hNCinFV_stack_7->SetBinContent(13,0.08745668);
   hNCinFV_stack_7->SetBinContent(14,0.07470649);
   hNCinFV_stack_7->SetBinError(1,0.3492639);
   hNCinFV_stack_7->SetBinError(2,0.3629226);
   hNCinFV_stack_7->SetBinError(3,0.2988743);
   hNCinFV_stack_7->SetBinError(4,0.3160161);
   hNCinFV_stack_7->SetBinError(5,0.2463078);
   hNCinFV_stack_7->SetBinError(6,0.2161325);
   hNCinFV_stack_7->SetBinError(7,0.2082363);
   hNCinFV_stack_7->SetBinError(8,0.1420152);
   hNCinFV_stack_7->SetBinError(9,0.0180315);
   hNCinFV_stack_7->SetBinError(10,0.06195629);
   hNCinFV_stack_7->SetBinError(11,0.06452687);
   hNCinFV_stack_7->SetBinError(12,0.06195629);
   hNCinFV_stack_7->SetBinError(13,0.06452687);
   hNCinFV_stack_7->SetBinError(14,0.06325464);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
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
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,2.705178);
   hnumuCCinFV_stack_8->SetBinContent(2,3.938797);
   hnumuCCinFV_stack_8->SetBinContent(3,3.705446);
   hnumuCCinFV_stack_8->SetBinContent(4,2.087168);
   hnumuCCinFV_stack_8->SetBinContent(5,1.643334);
   hnumuCCinFV_stack_8->SetBinContent(6,1.320571);
   hnumuCCinFV_stack_8->SetBinContent(7,0.6590905);
   hnumuCCinFV_stack_8->SetBinContent(8,0.308863);
   hnumuCCinFV_stack_8->SetBinContent(9,0.3242422);
   hnumuCCinFV_stack_8->SetBinContent(10,0.2605754);
   hnumuCCinFV_stack_8->SetBinContent(11,0.1858689);
   hnumuCCinFV_stack_8->SetBinContent(12,0.08403679);
   hnumuCCinFV_stack_8->SetBinContent(13,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(16,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(17,0.07687783);
   hnumuCCinFV_stack_8->SetBinError(1,0.4382293);
   hnumuCCinFV_stack_8->SetBinError(2,0.614192);
   hnumuCCinFV_stack_8->SetBinError(3,0.693351);
   hnumuCCinFV_stack_8->SetBinError(4,0.3418778);
   hnumuCCinFV_stack_8->SetBinError(5,0.3027067);
   hnumuCCinFV_stack_8->SetBinError(6,0.3691902);
   hnumuCCinFV_stack_8->SetBinError(7,0.1887223);
   hnumuCCinFV_stack_8->SetBinError(8,0.1375745);
   hnumuCCinFV_stack_8->SetBinError(9,0.1337799);
   hnumuCCinFV_stack_8->SetBinError(10,0.1245668);
   hnumuCCinFV_stack_8->SetBinError(11,0.1073114);
   hnumuCCinFV_stack_8->SetBinError(12,0.07241786);
   hnumuCCinFV_stack_8->SetBinError(13,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(16,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(17,0.06372782);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
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
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,0.8706192);
   hnueCCinFV_stack_9->SetBinContent(2,0.3753763);
   hnueCCinFV_stack_9->SetBinContent(3,0.2748115);
   hnueCCinFV_stack_9->SetBinContent(4,0.2557455);
   hnueCCinFV_stack_9->SetBinContent(5,0.04168055);
   hnueCCinFV_stack_9->SetBinContent(6,0.141481);
   hnueCCinFV_stack_9->SetBinContent(7,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(10,0.1419604);
   hnueCCinFV_stack_9->SetBinContent(12,0.09529126);
   hnueCCinFV_stack_9->SetBinContent(13,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(15,0.1310542);
   hnueCCinFV_stack_9->SetBinError(1,0.4897138);
   hnueCCinFV_stack_9->SetBinError(2,0.1544955);
   hnueCCinFV_stack_9->SetBinError(3,0.1254063);
   hnueCCinFV_stack_9->SetBinError(4,0.1223564);
   hnueCCinFV_stack_9->SetBinError(5,0.02422669);
   hnueCCinFV_stack_9->SetBinError(6,0.0998202);
   hnueCCinFV_stack_9->SetBinError(7,0.06325464);
   hnueCCinFV_stack_9->SetBinError(10,0.1011891);
   hnueCCinFV_stack_9->SetBinError(12,0.06631739);
   hnueCCinFV_stack_9->SetBinError(13,0.0127502);
   hnueCCinFV_stack_9->SetBinError(15,0.09280681);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
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
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmcerror__2->SetBinContent(1,53.79712);
   hmcerror__2->SetBinContent(2,74.33185);
   hmcerror__2->SetBinContent(3,59.00723);
   hmcerror__2->SetBinContent(4,49.3843);
   hmcerror__2->SetBinContent(5,32.49546);
   hmcerror__2->SetBinContent(6,20.02996);
   hmcerror__2->SetBinContent(7,12.98322);
   hmcerror__2->SetBinContent(8,8.296767);
   hmcerror__2->SetBinContent(9,5.165492);
   hmcerror__2->SetBinContent(10,3.711532);
   hmcerror__2->SetBinContent(11,2.117107);
   hmcerror__2->SetBinContent(12,1.508539);
   hmcerror__2->SetBinContent(13,0.8969079);
   hmcerror__2->SetBinContent(14,0.7580204);
   hmcerror__2->SetBinContent(15,0.4043798);
   hmcerror__2->SetBinContent(16,0.1002069);
   hmcerror__2->SetBinContent(17,0.5246364);
   hmcerror__2->SetBinError(1,14.07178);
   hmcerror__2->SetBinError(2,16.25998);
   hmcerror__2->SetBinError(3,12.78552);
   hmcerror__2->SetBinError(4,12.92202);
   hmcerror__2->SetBinError(5,9.224647);
   hmcerror__2->SetBinError(6,5.177122);
   hmcerror__2->SetBinError(7,3.824634);
   hmcerror__2->SetBinError(8,2.908246);
   hmcerror__2->SetBinError(9,2.046776);
   hmcerror__2->SetBinError(10,2.219021);
   hmcerror__2->SetBinError(11,1.458404);
   hmcerror__2->SetBinError(12,1.173073);
   hmcerror__2->SetBinError(13,0.7491289);
   hmcerror__2->SetBinError(14,1.052883);
   hmcerror__2->SetBinError(15,0.5648437);
   hmcerror__2->SetBinError(16,0.4691725);
   hmcerror__2->SetBinError(17,0.8014028);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[16] = {
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
   Double_t _fy3001[16] = {
   56,
   68,
   64,
   43,
   29,
   16,
   8,
   7,
   11,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3001[16] = {
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
   Double_t _fely3001[16] = {
   7.6127,
   8.3726,
   8.1273,
   6.6917,
   5.5285,
   4.1628,
   3.0307,
   2.85954,
   3.4975,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3001[16] = {
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
   Double_t _fehy3001[16] = {
   7.4094,
   8.1701,
   7.9246,
   6.4868,
   5.3201,
   3.9454,
   2.7896,
   2.61053,
   3.27,
   1.1478,
   1.51917,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(83.78711);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.94#pm0.05(data err)#pm0.19(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.09/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 304.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.8","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.4","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  155.4","F");

   ci = 1438;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 53.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.0","F");

   ci = 1440;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.4","F");

   ci = 1442;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[16] = {
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
   Double_t _fy3002[16] = {
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
   Double_t _felx3002[16] = {
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
   Double_t _fely3002[16] = {
   0.2615713,
   0.2187485,
   0.2166771,
   0.2616626,
   0.2838749,
   0.2584689,
   0.2945829,
   0.3505276,
   0.3962404,
   0.5978721,
   0.6888666,
   0.7776216,
   0.835235,
   1.388991,
   1.396815,
   4.682039};
   Double_t _fehx3002[16] = {
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
   Double_t _fehy3002[16] = {
   0.2615713,
   0.2187485,
   0.2166771,
   0.2616626,
   0.2838749,
   0.2584689,
   0.2945829,
   0.3505276,
   0.3962404,
   0.5978721,
   0.6888666,
   0.7776216,
   0.835235,
   1.388991,
   1.396815,
   4.682039};
   grae = new TGraphAsymmErrors(16,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[16] = {
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
   Double_t _fy3003[16] = {
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
   Double_t _felx3003[16] = {
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
   Double_t _fely3003[16] = {
   0.1765513,
   0.1752025,
   0.1848662,
   0.1946582,
   0.2029978,
   0.2004858,
   0.2016799,
   0.2136962,
   0.2410868,
   0.2746622,
   0.2988418,
   0.3332771,
   0.3871713,
   0.4646196,
   0.5997514,
   1.373059};
   Double_t _fehx3003[16] = {
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
   Double_t _fehy3003[16] = {
   0.1765513,
   0.1752025,
   0.1848662,
   0.1946582,
   0.2029978,
   0.2004858,
   0.2016799,
   0.2136962,
   0.2410868,
   0.2746622,
   0.2988418,
   0.3332771,
   0.3871713,
   0.4646196,
   0.5997514,
   1.373059};
   grae = new TGraphAsymmErrors(16,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[16] = {
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
   Double_t _fy3004[16] = {
   1.040948,
   0.9148165,
   1.084613,
   0.8707221,
   0.8924322,
   0.7988035,
   0.6161799,
   0.8437021,
   2.129516,
   0,
   0.9446854,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3004[16] = {
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
   Double_t _fely3004[16] = {
   0.1415076,
   0.1126381,
   0.137734,
   0.1355026,
   0.1701314,
   0.2078287,
   0.2334321,
   0.3446571,
   0.6770894,
   0,
   0.9446854,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3004[16] = {
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
   Double_t _fehy3004[16] = {
   0.1377286,
   0.1099139,
   0.1342988,
   0.1313535,
   0.1637182,
   0.196975,
   0.2148619,
   0.3146442,
   0.6330471,
   0.3092523,
   0.7175689,
   0.7608685,
   1.27973,
   1.514207,
   2.838421,
   11.4543};
   grae = new TGraphAsymmErrors(16,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(12.59973);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
