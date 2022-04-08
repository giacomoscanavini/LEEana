#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 12:44:06 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-2.880457,451.2821,242.7164);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmc__4->SetBinContent(1,98.86739);
   hmc__4->SetBinContent(2,144.0228);
   hmc__4->SetBinContent(3,121.7862);
   hmc__4->SetBinContent(4,96.58754);
   hmc__4->SetBinContent(5,62.89507);
   hmc__4->SetBinContent(6,37.68951);
   hmc__4->SetBinContent(7,25.19867);
   hmc__4->SetBinContent(8,16.31439);
   hmc__4->SetBinContent(9,10.10638);
   hmc__4->SetBinContent(10,6.515118);
   hmc__4->SetBinContent(11,4.020745);
   hmc__4->SetBinContent(12,2.430037);
   hmc__4->SetBinContent(13,1.692968);
   hmc__4->SetBinContent(14,1.082347);
   hmc__4->SetBinContent(15,0.5683376);
   hmc__4->SetBinContent(16,0.1999334);
   hmc__4->SetBinContent(17,1.060332);
   hmc__4->SetBinError(1,20.76833);
   hmc__4->SetBinError(2,27.00727);
   hmc__4->SetBinError(3,25.11607);
   hmc__4->SetBinError(4,20.91003);
   hmc__4->SetBinError(5,14.03382);
   hmc__4->SetBinError(6,9.123119);
   hmc__4->SetBinError(7,7.020278);
   hmc__4->SetBinError(8,4.876743);
   hmc__4->SetBinError(9,4.153234);
   hmc__4->SetBinError(10,2.778586);
   hmc__4->SetBinError(11,2.105088);
   hmc__4->SetBinError(12,1.417003);
   hmc__4->SetBinError(13,1.001232);
   hmc__4->SetBinError(14,1.168743);
   hmc__4->SetBinError(15,0.7195389);
   hmc__4->SetBinError(16,0.3035995);
   hmc__4->SetBinError(17,1.083715);
   hmc__4->SetMinimum(-2.880457);
   hmc__4->SetMaximum(230.4365);
   hmc__4->SetEntries(622.1566);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",16,0,400);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(151.224);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.156611);
   hbadmatch_stack_1->SetBinContent(2,3.124055);
   hbadmatch_stack_1->SetBinContent(3,2.646183);
   hbadmatch_stack_1->SetBinContent(4,3.125453);
   hbadmatch_stack_1->SetBinContent(5,1.207878);
   hbadmatch_stack_1->SetBinContent(6,0.5706683);
   hbadmatch_stack_1->SetBinContent(7,0.3990328);
   hbadmatch_stack_1->SetBinContent(8,0.1002069);
   hbadmatch_stack_1->SetBinContent(9,0.1749134);
   hbadmatch_stack_1->SetBinContent(10,0.1621632);
   hbadmatch_stack_1->SetBinContent(11,0.04035039);
   hbadmatch_stack_1->SetBinContent(12,0.02550039);
   hbadmatch_stack_1->SetBinError(1,0.4615059);
   hbadmatch_stack_1->SetBinError(2,0.4831006);
   hbadmatch_stack_1->SetBinError(3,0.3649801);
   hbadmatch_stack_1->SetBinError(4,0.5354392);
   hbadmatch_stack_1->SetBinError(5,0.2687478);
   hbadmatch_stack_1->SetBinError(6,0.1652665);
   hbadmatch_stack_1->SetBinError(7,0.1425864);
   hbadmatch_stack_1->SetBinError(8,0.0657745);
   hbadmatch_stack_1->SetBinError(9,0.09125478);
   hbadmatch_stack_1->SetBinError(10,0.09035965);
   hbadmatch_stack_1->SetBinError(11,0.02335931);
   hbadmatch_stack_1->SetBinError(12,0.0180315);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,10.87131);
   hext_stack_2->SetBinContent(2,13.91293);
   hext_stack_2->SetBinContent(3,9.603393);
   hext_stack_2->SetBinContent(4,5.584257);
   hext_stack_2->SetBinContent(5,3.53788);
   hext_stack_2->SetBinContent(6,1.537851);
   hext_stack_2->SetBinContent(7,1.329263);
   hext_stack_2->SetBinContent(8,0.5698761);
   hext_stack_2->SetBinContent(9,0.2603984);
   hext_stack_2->SetBinContent(10,0.2358586);
   hext_stack_2->SetBinContent(11,0.02453971);
   hext_stack_2->SetBinContent(12,0.03680956);
   hext_stack_2->SetBinContent(13,0.2235888);
   hext_stack_2->SetBinContent(16,0.01226985);
   hext_stack_2->SetBinContent(17,0.01226985);
   hext_stack_2->SetBinError(1,1.344028);
   hext_stack_2->SetBinError(2,1.525466);
   hext_stack_2->SetBinError(3,1.252112);
   hext_stack_2->SetBinError(4,0.9610503);
   hext_stack_2->SetBinError(5,0.7752954);
   hext_stack_2->SetBinError(6,0.4918726);
   hext_stack_2->SetBinError(7,0.4892641);
   hext_stack_2->SetBinError(8,0.2852171);
   hext_stack_2->SetBinError(9,0.2009311);
   hext_stack_2->SetBinError(10,0.2001804);
   hext_stack_2->SetBinError(11,0.01735219);
   hext_stack_2->SetBinError(12,0.02125201);
   hext_stack_2->SetBinError(13,0.199804);
   hext_stack_2->SetBinError(16,0.01226985);
   hext_stack_2->SetBinError(17,0.01226985);
   hext_stack_2->SetEntries(893);

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,1.524843);
   hdirt_stack_3->SetBinContent(2,2.201914);
   hdirt_stack_3->SetBinContent(3,1.401718);
   hdirt_stack_3->SetBinContent(4,0.4507965);
   hdirt_stack_3->SetBinContent(5,0.338786);
   hdirt_stack_3->SetBinContent(6,0.187178);
   hdirt_stack_3->SetBinContent(7,0.01643923);
   hdirt_stack_3->SetBinError(1,0.255652);
   hdirt_stack_3->SetBinError(2,0.3416929);
   hdirt_stack_3->SetBinError(3,0.3642508);
   hdirt_stack_3->SetBinError(4,0.1314363);
   hdirt_stack_3->SetBinError(5,0.1165886);
   hdirt_stack_3->SetBinError(6,0.08987129);
   hdirt_stack_3->SetBinError(7,0.01162429);
   hdirt_stack_3->SetEntries(224);

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,12.22528);
   houtFV_stack_4->SetBinContent(2,17.47713);
   houtFV_stack_4->SetBinContent(3,12.48584);
   houtFV_stack_4->SetBinContent(4,9.904927);
   houtFV_stack_4->SetBinContent(5,4.834816);
   houtFV_stack_4->SetBinContent(6,2.220201);
   houtFV_stack_4->SetBinContent(7,1.730732);
   houtFV_stack_4->SetBinContent(8,1.19645);
   houtFV_stack_4->SetBinContent(9,0.2784874);
   houtFV_stack_4->SetBinContent(10,0.3862826);
   houtFV_stack_4->SetBinContent(11,0.2004138);
   houtFV_stack_4->SetBinContent(12,0.08745668);
   houtFV_stack_4->SetBinContent(13,0.07470649);
   houtFV_stack_4->SetBinError(1,0.8188205);
   houtFV_stack_4->SetBinError(2,0.9877438);
   houtFV_stack_4->SetBinError(3,0.8223706);
   houtFV_stack_4->SetBinError(4,0.7467083);
   houtFV_stack_4->SetBinError(5,0.5172832);
   houtFV_stack_4->SetBinError(6,0.3390964);
   houtFV_stack_4->SetBinError(7,0.297379);
   houtFV_stack_4->SetBinError(8,0.2561186);
   houtFV_stack_4->SetBinError(9,0.11292);
   houtFV_stack_4->SetBinError(10,0.1420152);
   houtFV_stack_4->SetBinError(11,0.09301919);
   houtFV_stack_4->SetBinError(12,0.06452687);
   houtFV_stack_4->SetBinError(13,0.06325464);
   houtFV_stack_4->SetEntries(1630);

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,41.93045);
   hNCpi0inFV_stack_5->SetBinContent(2,70.17669);
   hNCpi0inFV_stack_5->SetBinContent(3,63.46283);
   hNCpi0inFV_stack_5->SetBinContent(4,52.2509);
   hNCpi0inFV_stack_5->SetBinContent(5,33.58582);
   hNCpi0inFV_stack_5->SetBinContent(6,21.05254);
   hNCpi0inFV_stack_5->SetBinContent(7,13.86254);
   hNCpi0inFV_stack_5->SetBinContent(8,9.265399);
   hNCpi0inFV_stack_5->SetBinContent(9,6.100431);
   hNCpi0inFV_stack_5->SetBinContent(10,3.731735);
   hNCpi0inFV_stack_5->SetBinContent(11,1.741955);
   hNCpi0inFV_stack_5->SetBinContent(12,1.366628);
   hNCpi0inFV_stack_5->SetBinContent(13,0.6486527);
   hNCpi0inFV_stack_5->SetBinContent(14,0.6723584);
   hNCpi0inFV_stack_5->SetBinContent(15,0.1876636);
   hNCpi0inFV_stack_5->SetBinContent(16,0.08745668);
   hNCpi0inFV_stack_5->SetBinContent(17,0.4609891);
   hNCpi0inFV_stack_5->SetBinError(1,1.501348);
   hNCpi0inFV_stack_5->SetBinError(2,1.952776);
   hNCpi0inFV_stack_5->SetBinError(3,1.85237);
   hNCpi0inFV_stack_5->SetBinError(4,1.676125);
   hNCpi0inFV_stack_5->SetBinError(5,1.347363);
   hNCpi0inFV_stack_5->SetBinError(6,1.066461);
   hNCpi0inFV_stack_5->SetBinError(7,0.8571166);
   hNCpi0inFV_stack_5->SetBinError(8,0.7022228);
   hNCpi0inFV_stack_5->SetBinError(9,0.5725112);
   hNCpi0inFV_stack_5->SetBinError(10,0.4539923);
   hNCpi0inFV_stack_5->SetBinError(11,0.3088322);
   hNCpi0inFV_stack_5->SetBinError(12,0.2799952);
   hNCpi0inFV_stack_5->SetBinError(13,0.1807193);
   hNCpi0inFV_stack_5->SetBinError(14,0.1897639);
   hNCpi0inFV_stack_5->SetBinError(15,0.0921412);
   hNCpi0inFV_stack_5->SetBinError(16,0.06452687);
   hNCpi0inFV_stack_5->SetBinError(17,0.1554653);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,11.44488);
   hCCpi0inFV_stack_6->SetBinContent(2,19.52866);
   hCCpi0inFV_stack_6->SetBinContent(3,19.83948);
   hCCpi0inFV_stack_6->SetBinContent(4,16.8034);
   hCCpi0inFV_stack_6->SetBinContent(5,12.49933);
   hCCpi0inFV_stack_6->SetBinContent(6,8.2243);
   hCCpi0inFV_stack_6->SetBinContent(7,5.217508);
   hCCpi0inFV_stack_6->SetBinContent(8,3.677639);
   hCCpi0inFV_stack_6->SetBinContent(9,2.51452);
   hCCpi0inFV_stack_6->SetBinContent(10,1.359673);
   hCCpi0inFV_stack_6->SetBinContent(11,1.330172);
   hCCpi0inFV_stack_6->SetBinContent(12,0.4482389);
   hCCpi0inFV_stack_6->SetBinContent(13,0.4964004);
   hCCpi0inFV_stack_6->SetBinContent(14,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(15,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(16,0.02550039);
   hCCpi0inFV_stack_6->SetBinContent(17,0.5101952);
   hCCpi0inFV_stack_6->SetBinError(1,0.7881983);
   hCCpi0inFV_stack_6->SetBinError(2,1.036915);
   hCCpi0inFV_stack_6->SetBinError(3,1.045558);
   hCCpi0inFV_stack_6->SetBinError(4,0.9456766);
   hCCpi0inFV_stack_6->SetBinError(5,0.8268718);
   hCCpi0inFV_stack_6->SetBinError(6,0.6612392);
   hCCpi0inFV_stack_6->SetBinError(7,0.5318834);
   hCCpi0inFV_stack_6->SetBinError(8,0.4376562);
   hCCpi0inFV_stack_6->SetBinError(9,0.3683937);
   hCCpi0inFV_stack_6->SetBinError(10,0.2744577);
   hCCpi0inFV_stack_6->SetBinError(11,0.2736492);
   hCCpi0inFV_stack_6->SetBinError(12,0.1549416);
   hCCpi0inFV_stack_6->SetBinError(13,0.1706102);
   hCCpi0inFV_stack_6->SetBinError(14,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(15,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(16,0.0180315);
   hCCpi0inFV_stack_6->SetBinError(17,0.1668696);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_7->SetBinContent(1,6.233317);
   hNCinFV_stack_7->SetBinContent(2,4.941584);
   hNCinFV_stack_7->SetBinContent(3,3.959409);
   hNCinFV_stack_7->SetBinContent(4,3.188673);
   hNCinFV_stack_7->SetBinContent(5,2.674889);
   hNCinFV_stack_7->SetBinContent(6,1.541541);
   hNCinFV_stack_7->SetBinContent(7,1.133348);
   hNCinFV_stack_7->SetBinContent(8,0.7215645);
   hNCinFV_stack_7->SetBinContent(9,0.2751203);
   hNCinFV_stack_7->SetBinContent(10,0.2241195);
   hNCinFV_stack_7->SetBinContent(11,0.3735324);
   hNCinFV_stack_7->SetBinContent(12,0.149413);
   hNCinFV_stack_7->SetBinContent(13,0.1621632);
   hNCinFV_stack_7->SetBinContent(14,0.1366628);
   hNCinFV_stack_7->SetBinContent(15,0.02550039);
   hNCinFV_stack_7->SetBinError(1,0.565966);
   hNCinFV_stack_7->SetBinError(2,0.516976);
   hNCinFV_stack_7->SetBinError(3,0.4637777);
   hNCinFV_stack_7->SetBinError(4,0.4107293);
   hNCinFV_stack_7->SetBinError(5,0.3832813);
   hNCinFV_stack_7->SetBinError(6,0.2944907);
   hNCinFV_stack_7->SetBinError(7,0.2453157);
   hNCinFV_stack_7->SetBinError(8,0.1992144);
   hNCinFV_stack_7->SetBinError(9,0.1124887);
   hNCinFV_stack_7->SetBinError(10,0.1095603);
   hNCinFV_stack_7->SetBinError(11,0.1414417);
   hNCinFV_stack_7->SetBinError(12,0.08945557);
   hNCinFV_stack_7->SetBinError(13,0.09035965);
   hNCinFV_stack_7->SetBinError(14,0.08854226);
   hNCinFV_stack_7->SetBinError(15,0.0180315);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,11.39808);
   hnumuCCinFV_stack_8->SetBinContent(2,11.93748);
   hnumuCCinFV_stack_8->SetBinContent(3,8.074309);
   hnumuCCinFV_stack_8->SetBinContent(4,4.899467);
   hnumuCCinFV_stack_8->SetBinContent(5,4.059168);
   hnumuCCinFV_stack_8->SetBinContent(6,2.126288);
   hnumuCCinFV_stack_8->SetBinContent(7,1.31119);
   hnumuCCinFV_stack_8->SetBinContent(8,0.7213019);
   hnumuCCinFV_stack_8->SetBinContent(9,0.5025086);
   hnumuCCinFV_stack_8->SetBinContent(10,0.2733256);
   hnumuCCinFV_stack_8->SetBinContent(11,0.3097815);
   hnumuCCinFV_stack_8->SetBinContent(12,0.1587433);
   hnumuCCinFV_stack_8->SetBinContent(13,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(16,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(17,0.07687783);
   hnumuCCinFV_stack_8->SetBinError(1,1.027914);
   hnumuCCinFV_stack_8->SetBinError(2,1.071403);
   hnumuCCinFV_stack_8->SetBinError(3,0.8917469);
   hnumuCCinFV_stack_8->SetBinError(4,0.5914535);
   hnumuCCinFV_stack_8->SetBinError(5,0.5375882);
   hnumuCCinFV_stack_8->SetBinError(6,0.4268222);
   hnumuCCinFV_stack_8->SetBinError(7,0.298064);
   hnumuCCinFV_stack_8->SetBinError(8,0.2065872);
   hnumuCCinFV_stack_8->SetBinError(9,0.1658313);
   hnumuCCinFV_stack_8->SetBinError(10,0.1252177);
   hnumuCCinFV_stack_8->SetBinError(11,0.1385385);
   hnumuCCinFV_stack_8->SetBinError(12,0.0961535);
   hnumuCCinFV_stack_8->SetBinError(13,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(16,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(17,0.06372782);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,1.082622);
   hnueCCinFV_stack_9->SetBinContent(2,0.7223729);
   hnueCCinFV_stack_9->SetBinContent(3,0.3130621);
   hnueCCinFV_stack_9->SetBinContent(4,0.3796581);
   hnueCCinFV_stack_9->SetBinContent(5,0.156494);
   hnueCCinFV_stack_9->SetBinContent(6,0.2289377);
   hnueCCinFV_stack_9->SetBinContent(7,0.1986191);
   hnueCCinFV_stack_9->SetBinContent(8,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(10,0.1419604);
   hnueCCinFV_stack_9->SetBinContent(12,0.1572476);
   hnueCCinFV_stack_9->SetBinContent(13,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(15,0.1310542);
   hnueCCinFV_stack_9->SetBinError(1,0.5003792);
   hnueCCinFV_stack_9->SetBinError(2,0.2105308);
   hnueCCinFV_stack_9->SetBinError(3,0.1273359);
   hnueCCinFV_stack_9->SetBinError(4,0.1504934);
   hnueCCinFV_stack_9->SetBinError(5,0.07159725);
   hnueCCinFV_stack_9->SetBinError(6,0.1188604);
   hnueCCinFV_stack_9->SetBinError(7,0.1080662);
   hnueCCinFV_stack_9->SetBinError(8,0.06195629);
   hnueCCinFV_stack_9->SetBinError(10,0.1011891);
   hnueCCinFV_stack_9->SetBinError(12,0.0907556);
   hnueCCinFV_stack_9->SetBinError(13,0.0180315);
   hnueCCinFV_stack_9->SetBinError(15,0.09280681);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmcerror__5->SetBinContent(1,98.86739);
   hmcerror__5->SetBinContent(2,144.0228);
   hmcerror__5->SetBinContent(3,121.7862);
   hmcerror__5->SetBinContent(4,96.58754);
   hmcerror__5->SetBinContent(5,62.89507);
   hmcerror__5->SetBinContent(6,37.68951);
   hmcerror__5->SetBinContent(7,25.19867);
   hmcerror__5->SetBinContent(8,16.31439);
   hmcerror__5->SetBinContent(9,10.10638);
   hmcerror__5->SetBinContent(10,6.515118);
   hmcerror__5->SetBinContent(11,4.020745);
   hmcerror__5->SetBinContent(12,2.430037);
   hmcerror__5->SetBinContent(13,1.692968);
   hmcerror__5->SetBinContent(14,1.082347);
   hmcerror__5->SetBinContent(15,0.5683376);
   hmcerror__5->SetBinContent(16,0.1999334);
   hmcerror__5->SetBinContent(17,1.060332);
   hmcerror__5->SetBinError(1,20.76833);
   hmcerror__5->SetBinError(2,27.00727);
   hmcerror__5->SetBinError(3,25.11607);
   hmcerror__5->SetBinError(4,20.91003);
   hmcerror__5->SetBinError(5,14.03382);
   hmcerror__5->SetBinError(6,9.123119);
   hmcerror__5->SetBinError(7,7.020278);
   hmcerror__5->SetBinError(8,4.876743);
   hmcerror__5->SetBinError(9,4.153234);
   hmcerror__5->SetBinError(10,2.778586);
   hmcerror__5->SetBinError(11,2.105088);
   hmcerror__5->SetBinError(12,1.417003);
   hmcerror__5->SetBinError(13,1.001232);
   hmcerror__5->SetBinError(14,1.168743);
   hmcerror__5->SetBinError(15,0.7195389);
   hmcerror__5->SetBinError(16,0.3035995);
   hmcerror__5->SetBinError(17,1.083715);
   hmcerror__5->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[16] = {
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
   Double_t _fy3005[16] = {
   94,
   124,
   98,
   81,
   43,
   27,
   17,
   10,
   14,
   0,
   4,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3005[16] = {
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
   Double_t _fely3005[16] = {
   9.8173,
   11.13553,
   10.0209,
   9.1239,
   6.6917,
   5.3414,
   4.2835,
   3.34883,
   3.9102,
   0,
   2.29683,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3005[16] = {
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
   Double_t _fehy3005[16] = {
   9.616,
   11.13553,
   9.82,
   8.9221,
   6.4868,
   5.1322,
   4.0673,
   3.1179,
   3.6898,
   1.1478,
   1.98186,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(148.6491);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.98/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 512.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 63.1","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  320.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 103.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.7","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 46.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_bnb_10_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[16] = {
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
   Double_t _fy3006[16] = {
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
   Double_t _felx3006[16] = {
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
   Double_t _fely3006[16] = {
   0.2100625,
   0.1875208,
   0.2062308,
   0.2164878,
   0.2231307,
   0.2420599,
   0.2785971,
   0.2989227,
   0.4109517,
   0.4264828,
   0.5235568,
   0.58312,
   0.5914064,
   1.079824,
   1.266041,
   1.518503};
   Double_t _fehx3006[16] = {
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
   Double_t _fehy3006[16] = {
   0.2100625,
   0.1875208,
   0.2062308,
   0.2164878,
   0.2231307,
   0.2420599,
   0.2785971,
   0.2989227,
   0.4109517,
   0.4264828,
   0.5235568,
   0.58312,
   0.5914064,
   1.079824,
   1.266041,
   1.518503};
   grae = new TGraphAsymmErrors(16,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[16] = {
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
   Double_t _fy3007[16] = {
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
   Double_t _felx3007[16] = {
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
   Double_t _fely3007[16] = {
   0.1753069,
   0.1791741,
   0.1940447,
   0.2023257,
   0.204317,
   0.2056452,
   0.2066045,
   0.2263597,
   0.2349345,
   0.2507119,
   0.2724206,
   0.2725555,
   0.29966,
   0.3885313,
   0.4842288,
   0.8502106};
   Double_t _fehx3007[16] = {
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
   Double_t _fehy3007[16] = {
   0.1753069,
   0.1791741,
   0.1940447,
   0.2023257,
   0.204317,
   0.2056452,
   0.2066045,
   0.2263597,
   0.2349345,
   0.2507119,
   0.2724206,
   0.2725555,
   0.29966,
   0.3885313,
   0.4842288,
   0.8502106};
   grae = new TGraphAsymmErrors(16,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,440);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[16] = {
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
   Double_t _fy3008[16] = {
   0.9507685,
   0.8609746,
   0.8046887,
   0.8386175,
   0.6836784,
   0.7163797,
   0.6746387,
   0.6129557,
   1.385264,
   0,
   0.9948406,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3008[16] = {
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
   Double_t _fely3008[16] = {
   0.09929765,
   0.0773178,
   0.08228271,
   0.0944625,
   0.1063947,
   0.1417211,
   0.1699891,
   0.2052684,
   0.3869041,
   0,
   0.5712449,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3008[16] = {
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
   Double_t _fehy3008[16] = {
   0.09726159,
   0.0773178,
   0.08063309,
   0.0923732,
   0.1031369,
   0.1361705,
   0.1614093,
   0.1911134,
   0.3650961,
   0.1761749,
   0.4929087,
   0.4723384,
   0.6779808,
   1.060474,
   2.019574,
   5.740911};
   grae = new TGraphAsymmErrors(16,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(6.315003);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_bnb_10_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
