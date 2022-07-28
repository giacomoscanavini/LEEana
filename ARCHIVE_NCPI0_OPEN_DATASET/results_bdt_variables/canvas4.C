void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Jan  2 12:47:03 2022) by ROOT version 6.24/02
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-61.53846,-1.154902,451.2821,6.894445);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetLogy();
   pad1->SetLeftMargin(0.12);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TH1F *hmc__10 = new TH1F("hmc__10","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hmc__10->SetBinContent(1,14745.82);
   hmc__10->SetBinContent(2,718.29);
   hmc__10->SetBinContent(3,438.1544);
   hmc__10->SetBinContent(4,346.9628);
   hmc__10->SetBinContent(5,295.803);
   hmc__10->SetBinContent(6,263.491);
   hmc__10->SetBinContent(7,211.2306);
   hmc__10->SetBinContent(8,188.0418);
   hmc__10->SetBinContent(9,149.6948);
   hmc__10->SetBinContent(10,124.5607);
   hmc__10->SetBinContent(11,106.7704);
   hmc__10->SetBinContent(12,88.9697);
   hmc__10->SetBinContent(13,77.33832);
   hmc__10->SetBinContent(14,64.05582);
   hmc__10->SetBinContent(15,56.29571);
   hmc__10->SetBinContent(16,46.29601);
   hmc__10->SetBinContent(17,40.45835);
   hmc__10->SetBinContent(18,38.23359);
   hmc__10->SetBinContent(19,28.05002);
   hmc__10->SetBinContent(20,24.96651);
   hmc__10->SetBinContent(21,248.8752);
   hmc__10->SetBinError(1,1995.583);
   hmc__10->SetBinError(2,105.471);
   hmc__10->SetBinError(3,68.79432);
   hmc__10->SetBinError(4,58.31232);
   hmc__10->SetBinError(5,56.88945);
   hmc__10->SetBinError(6,48.67557);
   hmc__10->SetBinError(7,43.30176);
   hmc__10->SetBinError(8,35.35933);
   hmc__10->SetBinError(9,29.87549);
   hmc__10->SetBinError(10,26.51844);
   hmc__10->SetBinError(11,22.60499);
   hmc__10->SetBinError(12,19.09407);
   hmc__10->SetBinError(13,19.19469);
   hmc__10->SetBinError(14,13.24695);
   hmc__10->SetBinError(15,14.00802);
   hmc__10->SetBinError(16,10.86732);
   hmc__10->SetBinError(17,10.15912);
   hmc__10->SetBinError(18,10.06119);
   hmc__10->SetBinError(19,7.228627);
   hmc__10->SetBinError(20,7.164747);
   hmc__10->SetBinError(21,52.93997);
   hmc__10->SetMinimum(0.07);
   hmc__10->SetMaximum(3104400);
   hmc__10->SetEntries(16299.7);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,400);
   hs4_stack_4->SetMinimum(0.01157546);
   hs4_stack_4->SetMaximum(31052.92);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hbadmatch_stack_1->SetBinContent(1,410.0225);
   hbadmatch_stack_1->SetBinContent(2,22.78699);
   hbadmatch_stack_1->SetBinContent(3,11.62646);
   hbadmatch_stack_1->SetBinContent(4,8.697825);
   hbadmatch_stack_1->SetBinContent(5,6.902303);
   hbadmatch_stack_1->SetBinContent(6,4.988642);
   hbadmatch_stack_1->SetBinContent(7,5.066895);
   hbadmatch_stack_1->SetBinContent(8,3.742807);
   hbadmatch_stack_1->SetBinContent(9,3.020349);
   hbadmatch_stack_1->SetBinContent(10,1.754567);
   hbadmatch_stack_1->SetBinContent(11,3.403318);
   hbadmatch_stack_1->SetBinContent(12,2.040481);
   hbadmatch_stack_1->SetBinContent(13,1.698534);
   hbadmatch_stack_1->SetBinContent(14,0.8431125);
   hbadmatch_stack_1->SetBinContent(15,1.072815);
   hbadmatch_stack_1->SetBinContent(16,0.9346105);
   hbadmatch_stack_1->SetBinContent(17,0.3249177);
   hbadmatch_stack_1->SetBinContent(18,0.316596);
   hbadmatch_stack_1->SetBinContent(19,0.5508152);
   hbadmatch_stack_1->SetBinContent(20,0.115244);
   hbadmatch_stack_1->SetBinContent(21,4.585271);
   hbadmatch_stack_1->SetBinError(1,5.726517);
   hbadmatch_stack_1->SetBinError(2,1.93833);
   hbadmatch_stack_1->SetBinError(3,1.0446);
   hbadmatch_stack_1->SetBinError(4,0.692599);
   hbadmatch_stack_1->SetBinError(5,0.6162023);
   hbadmatch_stack_1->SetBinError(6,0.5196393);
   hbadmatch_stack_1->SetBinError(7,0.6405549);
   hbadmatch_stack_1->SetBinError(8,0.4496678);
   hbadmatch_stack_1->SetBinError(9,0.5419953);
   hbadmatch_stack_1->SetBinError(10,0.3020987);
   hbadmatch_stack_1->SetBinError(11,0.6670365);
   hbadmatch_stack_1->SetBinError(12,0.3307789);
   hbadmatch_stack_1->SetBinError(13,0.3149045);
   hbadmatch_stack_1->SetBinError(14,0.196019);
   hbadmatch_stack_1->SetBinError(15,0.2420211);
   hbadmatch_stack_1->SetBinError(16,0.2214161);
   hbadmatch_stack_1->SetBinError(17,0.1150071);
   hbadmatch_stack_1->SetBinError(18,0.1011725);
   hbadmatch_stack_1->SetBinError(19,0.4284437);
   hbadmatch_stack_1->SetBinError(20,0.06682381);
   hbadmatch_stack_1->SetBinError(21,0.4983165);
   hbadmatch_stack_1->SetEntries(12603);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1461;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hext_stack_2->SetBinContent(1,1676.412);
   hext_stack_2->SetBinContent(2,127.6056);
   hext_stack_2->SetBinContent(3,68.52193);
   hext_stack_2->SetBinContent(4,46.28786);
   hext_stack_2->SetBinContent(5,35.01299);
   hext_stack_2->SetBinContent(6,32.44199);
   hext_stack_2->SetBinContent(7,19.56801);
   hext_stack_2->SetBinContent(8,21.44637);
   hext_stack_2->SetBinContent(9,18.08143);
   hext_stack_2->SetBinContent(10,11.6474);
   hext_stack_2->SetBinContent(11,9.98019);
   hext_stack_2->SetBinContent(12,7.965318);
   hext_stack_2->SetBinContent(13,6.597787);
   hext_stack_2->SetBinContent(14,6.403526);
   hext_stack_2->SetBinContent(15,5.272011);
   hext_stack_2->SetBinContent(16,4.690707);
   hext_stack_2->SetBinContent(17,4.140497);
   hext_stack_2->SetBinContent(18,4.26043);
   hext_stack_2->SetBinContent(19,2.663694);
   hext_stack_2->SetBinContent(20,2.977889);
   hext_stack_2->SetBinContent(21,46.94735);
   hext_stack_2->SetBinError(1,16.76573);
   hext_stack_2->SetBinError(2,4.635815);
   hext_stack_2->SetBinError(3,3.384882);
   hext_stack_2->SetBinError(4,2.769583);
   hext_stack_2->SetBinError(5,2.403177);
   hext_stack_2->SetBinError(6,2.365246);
   hext_stack_2->SetBinError(7,1.78697);
   hext_stack_2->SetBinError(8,1.924174);
   hext_stack_2->SetBinError(9,1.771383);
   hext_stack_2->SetBinError(10,1.337018);
   hext_stack_2->SetBinError(11,1.28652);
   hext_stack_2->SetBinError(12,1.137518);
   hext_stack_2->SetBinError(13,1.02609);
   hext_stack_2->SetBinError(14,1.02494);
   hext_stack_2->SetBinError(15,0.9217896);
   hext_stack_2->SetBinError(16,0.8762482);
   hext_stack_2->SetBinError(17,0.8055369);
   hext_stack_2->SetBinError(18,0.851571);
   hext_stack_2->SetBinError(19,0.6375558);
   hext_stack_2->SetBinError(20,0.6965052);
   hext_stack_2->SetBinError(21,2.791208);
   hext_stack_2->SetEntries(39405);

   ci = 1462;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hdirt_stack_3->SetBinContent(1,539.4866);
   hdirt_stack_3->SetBinContent(2,20.96266);
   hdirt_stack_3->SetBinContent(3,10.4159);
   hdirt_stack_3->SetBinContent(4,6.587523);
   hdirt_stack_3->SetBinContent(5,5.431787);
   hdirt_stack_3->SetBinContent(6,3.415297);
   hdirt_stack_3->SetBinContent(7,4.218049);
   hdirt_stack_3->SetBinContent(8,2.336345);
   hdirt_stack_3->SetBinContent(9,1.39678);
   hdirt_stack_3->SetBinContent(10,1.817517);
   hdirt_stack_3->SetBinContent(11,1.143652);
   hdirt_stack_3->SetBinContent(12,0.7285393);
   hdirt_stack_3->SetBinContent(13,0.8784393);
   hdirt_stack_3->SetBinContent(14,0.6159647);
   hdirt_stack_3->SetBinContent(15,0.5140111);
   hdirt_stack_3->SetBinContent(16,0.4260604);
   hdirt_stack_3->SetBinContent(17,0.3045794);
   hdirt_stack_3->SetBinContent(18,0.4081053);
   hdirt_stack_3->SetBinContent(19,0.3875594);
   hdirt_stack_3->SetBinContent(20,0.3044987);
   hdirt_stack_3->SetBinContent(21,2.72613);
   hdirt_stack_3->SetBinError(1,5.94917);
   hdirt_stack_3->SetBinError(2,1.260441);
   hdirt_stack_3->SetBinError(3,0.7969408);
   hdirt_stack_3->SetBinError(4,0.5887075);
   hdirt_stack_3->SetBinError(5,0.7457552);
   hdirt_stack_3->SetBinError(6,0.3700354);
   hdirt_stack_3->SetBinError(7,0.7470066);
   hdirt_stack_3->SetBinError(8,0.429696);
   hdirt_stack_3->SetBinError(9,0.2329355);
   hdirt_stack_3->SetBinError(10,0.4007772);
   hdirt_stack_3->SetBinError(11,0.2106408);
   hdirt_stack_3->SetBinError(12,0.1696633);
   hdirt_stack_3->SetBinError(13,0.1865449);
   hdirt_stack_3->SetBinError(14,0.152612);
   hdirt_stack_3->SetBinError(15,0.1383103);
   hdirt_stack_3->SetBinError(16,0.1302389);
   hdirt_stack_3->SetBinError(17,0.1024489);
   hdirt_stack_3->SetBinError(18,0.1487229);
   hdirt_stack_3->SetBinError(19,0.1299608);
   hdirt_stack_3->SetBinError(20,0.1130093);
   hdirt_stack_3->SetBinError(21,0.3364228);
   hdirt_stack_3->SetEntries(20777);

   ci = 1463;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   houtFV_stack_4->SetBinContent(1,757.3123);
   houtFV_stack_4->SetBinContent(2,63.81516);
   houtFV_stack_4->SetBinContent(3,36.27018);
   houtFV_stack_4->SetBinContent(4,28.56704);
   houtFV_stack_4->SetBinContent(5,23.68822);
   houtFV_stack_4->SetBinContent(6,19.5183);
   houtFV_stack_4->SetBinContent(7,13.51423);
   houtFV_stack_4->SetBinContent(8,12.51908);
   houtFV_stack_4->SetBinContent(9,10.80019);
   houtFV_stack_4->SetBinContent(10,10.58202);
   houtFV_stack_4->SetBinContent(11,7.642457);
   houtFV_stack_4->SetBinContent(12,6.656616);
   houtFV_stack_4->SetBinContent(13,5.782195);
   houtFV_stack_4->SetBinContent(14,5.29076);
   houtFV_stack_4->SetBinContent(15,5.097166);
   houtFV_stack_4->SetBinContent(16,4.116533);
   houtFV_stack_4->SetBinContent(17,2.34558);
   houtFV_stack_4->SetBinContent(18,2.868162);
   houtFV_stack_4->SetBinContent(19,2.149838);
   houtFV_stack_4->SetBinContent(20,2.108296);
   houtFV_stack_4->SetBinContent(21,15.76739);
   houtFV_stack_4->SetBinError(1,7.883208);
   houtFV_stack_4->SetBinError(2,2.206402);
   houtFV_stack_4->SetBinError(3,1.42091);
   houtFV_stack_4->SetBinError(4,1.354107);
   houtFV_stack_4->SetBinError(5,1.155654);
   houtFV_stack_4->SetBinError(6,1.11767);
   houtFV_stack_4->SetBinError(7,0.8384185);
   houtFV_stack_4->SetBinError(8,0.8100314);
   houtFV_stack_4->SetBinError(9,0.7586606);
   houtFV_stack_4->SetBinError(10,0.7548741);
   houtFV_stack_4->SetBinError(11,0.6351203);
   houtFV_stack_4->SetBinError(12,0.5919903);
   houtFV_stack_4->SetBinError(13,0.5667295);
   houtFV_stack_4->SetBinError(14,0.8308477);
   houtFV_stack_4->SetBinError(15,0.8153578);
   houtFV_stack_4->SetBinError(16,0.4784856);
   houtFV_stack_4->SetBinError(17,0.350663);
   houtFV_stack_4->SetBinError(18,0.3974905);
   houtFV_stack_4->SetBinError(19,0.3982736);
   houtFV_stack_4->SetBinError(20,0.5171175);
   houtFV_stack_4->SetBinError(21,1.05264);
   houtFV_stack_4->SetEntries(25890);

   ci = 1464;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,180.1977);
   hNCpi0inFV_stack_5->SetBinContent(2,62.00277);
   hNCpi0inFV_stack_5->SetBinContent(3,57.66755);
   hNCpi0inFV_stack_5->SetBinContent(4,51.30077);
   hNCpi0inFV_stack_5->SetBinContent(5,45.30881);
   hNCpi0inFV_stack_5->SetBinContent(6,40.30709);
   hNCpi0inFV_stack_5->SetBinContent(7,32.73331);
   hNCpi0inFV_stack_5->SetBinContent(8,29.76512);
   hNCpi0inFV_stack_5->SetBinContent(9,25.08372);
   hNCpi0inFV_stack_5->SetBinContent(10,19.76331);
   hNCpi0inFV_stack_5->SetBinContent(11,18.45606);
   hNCpi0inFV_stack_5->SetBinContent(12,14.46837);
   hNCpi0inFV_stack_5->SetBinContent(13,12.42372);
   hNCpi0inFV_stack_5->SetBinContent(14,10.77839);
   hNCpi0inFV_stack_5->SetBinContent(15,8.14672);
   hNCpi0inFV_stack_5->SetBinContent(16,7.047103);
   hNCpi0inFV_stack_5->SetBinContent(17,6.416929);
   hNCpi0inFV_stack_5->SetBinContent(18,6.151512);
   hNCpi0inFV_stack_5->SetBinContent(19,4.228759);
   hNCpi0inFV_stack_5->SetBinContent(20,3.920821);
   hNCpi0inFV_stack_5->SetBinContent(21,26.40146);
   hNCpi0inFV_stack_5->SetBinError(1,3.099874);
   hNCpi0inFV_stack_5->SetBinError(2,1.816013);
   hNCpi0inFV_stack_5->SetBinError(3,1.747435);
   hNCpi0inFV_stack_5->SetBinError(4,1.655655);
   hNCpi0inFV_stack_5->SetBinError(5,1.548503);
   hNCpi0inFV_stack_5->SetBinError(6,1.461797);
   hNCpi0inFV_stack_5->SetBinError(7,1.310046);
   hNCpi0inFV_stack_5->SetBinError(8,1.257468);
   hNCpi0inFV_stack_5->SetBinError(9,1.144729);
   hNCpi0inFV_stack_5->SetBinError(10,1.007385);
   hNCpi0inFV_stack_5->SetBinError(11,0.9946328);
   hNCpi0inFV_stack_5->SetBinError(12,0.871115);
   hNCpi0inFV_stack_5->SetBinError(13,0.8154649);
   hNCpi0inFV_stack_5->SetBinError(14,0.7581796);
   hNCpi0inFV_stack_5->SetBinError(15,0.6608192);
   hNCpi0inFV_stack_5->SetBinError(16,0.5982298);
   hNCpi0inFV_stack_5->SetBinError(17,0.5839505);
   hNCpi0inFV_stack_5->SetBinError(18,0.5785015);
   hNCpi0inFV_stack_5->SetBinError(19,0.4740689);
   hNCpi0inFV_stack_5->SetBinError(20,0.4572021);
   hNCpi0inFV_stack_5->SetBinError(21,1.189811);
   hNCpi0inFV_stack_5->SetEntries(17646);

   ci = 1465;
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
   hs4->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,292.0759);
   hCCpi0inFV_stack_6->SetBinContent(2,109.2264);
   hCCpi0inFV_stack_6->SetBinContent(3,110.2414);
   hCCpi0inFV_stack_6->SetBinContent(4,110.7281);
   hCCpi0inFV_stack_6->SetBinContent(5,103.4515);
   hCCpi0inFV_stack_6->SetBinContent(6,96.24515);
   hCCpi0inFV_stack_6->SetBinContent(7,80.11672);
   hCCpi0inFV_stack_6->SetBinContent(8,71.85959);
   hCCpi0inFV_stack_6->SetBinContent(9,55.83102);
   hCCpi0inFV_stack_6->SetBinContent(10,47.86512);
   hCCpi0inFV_stack_6->SetBinContent(11,40.54666);
   hCCpi0inFV_stack_6->SetBinContent(12,33.96713);
   hCCpi0inFV_stack_6->SetBinContent(13,30.97085);
   hCCpi0inFV_stack_6->SetBinContent(14,22.0662);
   hCCpi0inFV_stack_6->SetBinContent(15,21.29789);
   hCCpi0inFV_stack_6->SetBinContent(16,15.38146);
   hCCpi0inFV_stack_6->SetBinContent(17,14.96727);
   hCCpi0inFV_stack_6->SetBinContent(18,13.74483);
   hCCpi0inFV_stack_6->SetBinContent(19,9.782046);
   hCCpi0inFV_stack_6->SetBinContent(20,8.413101);
   hCCpi0inFV_stack_6->SetBinContent(21,79.87634);
   hCCpi0inFV_stack_6->SetBinError(1,3.959518);
   hCCpi0inFV_stack_6->SetBinError(2,2.425582);
   hCCpi0inFV_stack_6->SetBinError(3,2.436393);
   hCCpi0inFV_stack_6->SetBinError(4,2.420651);
   hCCpi0inFV_stack_6->SetBinError(5,2.339966);
   hCCpi0inFV_stack_6->SetBinError(6,2.264195);
   hCCpi0inFV_stack_6->SetBinError(7,2.060078);
   hCCpi0inFV_stack_6->SetBinError(8,1.954369);
   hCCpi0inFV_stack_6->SetBinError(9,1.710174);
   hCCpi0inFV_stack_6->SetBinError(10,1.586758);
   hCCpi0inFV_stack_6->SetBinError(11,1.463391);
   hCCpi0inFV_stack_6->SetBinError(12,1.348932);
   hCCpi0inFV_stack_6->SetBinError(13,1.284284);
   hCCpi0inFV_stack_6->SetBinError(14,1.085057);
   hCCpi0inFV_stack_6->SetBinError(15,1.054024);
   hCCpi0inFV_stack_6->SetBinError(16,0.8930723);
   hCCpi0inFV_stack_6->SetBinError(17,0.8865331);
   hCCpi0inFV_stack_6->SetBinError(18,0.8654469);
   hCCpi0inFV_stack_6->SetBinError(19,0.7112547);
   hCCpi0inFV_stack_6->SetBinError(20,0.6643596);
   hCCpi0inFV_stack_6->SetBinError(21,2.054278);
   hCCpi0inFV_stack_6->SetEntries(36558);

   ci = 1466;
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
   hs4->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hNCinFV_stack_7->SetBinContent(1,1022.577);
   hNCinFV_stack_7->SetBinContent(2,23.59992);
   hNCinFV_stack_7->SetBinContent(3,13.53496);
   hNCinFV_stack_7->SetBinContent(4,8.216742);
   hNCinFV_stack_7->SetBinContent(5,8.582409);
   hNCinFV_stack_7->SetBinContent(6,7.17333);
   hNCinFV_stack_7->SetBinContent(7,6.247993);
   hNCinFV_stack_7->SetBinContent(8,5.769783);
   hNCinFV_stack_7->SetBinContent(9,4.85649);
   hNCinFV_stack_7->SetBinContent(10,3.249649);
   hNCinFV_stack_7->SetBinContent(11,2.306005);
   hNCinFV_stack_7->SetBinContent(12,2.435092);
   hNCinFV_stack_7->SetBinContent(13,2.18817);
   hNCinFV_stack_7->SetBinContent(14,1.63617);
   hNCinFV_stack_7->SetBinContent(15,1.231751);
   hNCinFV_stack_7->SetBinContent(16,1.335288);
   hNCinFV_stack_7->SetBinContent(17,0.7506818);
   hNCinFV_stack_7->SetBinContent(18,1.167876);
   hNCinFV_stack_7->SetBinContent(19,0.7506818);
   hNCinFV_stack_7->SetBinContent(20,0.7506818);
   hNCinFV_stack_7->SetBinContent(21,4.837579);
   hNCinFV_stack_7->SetBinError(1,7.350726);
   hNCinFV_stack_7->SetBinError(2,1.115752);
   hNCinFV_stack_7->SetBinError(3,0.8497961);
   hNCinFV_stack_7->SetBinError(4,0.6479942);
   hNCinFV_stack_7->SetBinError(5,0.6738113);
   hNCinFV_stack_7->SetBinError(6,0.6117259);
   hNCinFV_stack_7->SetBinError(7,0.5846224);
   hNCinFV_stack_7->SetBinError(8,0.5613112);
   hNCinFV_stack_7->SetBinError(9,0.5091955);
   hNCinFV_stack_7->SetBinError(10,0.4099778);
   hNCinFV_stack_7->SetBinError(11,0.3388491);
   hNCinFV_stack_7->SetBinError(12,0.3581082);
   hNCinFV_stack_7->SetBinError(13,0.3409645);
   hNCinFV_stack_7->SetBinError(14,0.2926731);
   hNCinFV_stack_7->SetBinError(15,0.2506601);
   hNCinFV_stack_7->SetBinError(16,0.2755484);
   hNCinFV_stack_7->SetBinError(17,0.1975456);
   hNCinFV_stack_7->SetBinError(18,0.2490271);
   hNCinFV_stack_7->SetBinError(19,0.1975456);
   hNCinFV_stack_7->SetBinError(20,0.1975456);
   hNCinFV_stack_7->SetBinError(21,0.5001796);
   hNCinFV_stack_7->SetEntries(30215);

   ci = 1467;
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
   hs4->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,9820.55);
   hnumuCCinFV_stack_8->SetBinContent(2,279.786);
   hnumuCCinFV_stack_8->SetBinContent(3,125.8542);
   hnumuCCinFV_stack_8->SetBinContent(4,83.39888);
   hnumuCCinFV_stack_8->SetBinContent(5,65.40115);
   hnumuCCinFV_stack_8->SetBinContent(6,57.24955);
   hnumuCCinFV_stack_8->SetBinContent(7,48.37132);
   hnumuCCinFV_stack_8->SetBinContent(8,39.18636);
   hnumuCCinFV_stack_8->SetBinContent(9,29.38556);
   hnumuCCinFV_stack_8->SetBinContent(10,26.50281);
   hnumuCCinFV_stack_8->SetBinContent(11,22.58257);
   hnumuCCinFV_stack_8->SetBinContent(12,19.75367);
   hnumuCCinFV_stack_8->SetBinContent(13,16.19183);
   hnumuCCinFV_stack_8->SetBinContent(14,15.92351);
   hnumuCCinFV_stack_8->SetBinContent(15,13.16499);
   hnumuCCinFV_stack_8->SetBinContent(16,11.81714);
   hnumuCCinFV_stack_8->SetBinContent(17,10.793);
   hnumuCCinFV_stack_8->SetBinContent(18,8.809874);
   hnumuCCinFV_stack_8->SetBinContent(19,7.225765);
   hnumuCCinFV_stack_8->SetBinContent(20,6.244181);
   hnumuCCinFV_stack_8->SetBinContent(21,63.29789);
   hnumuCCinFV_stack_8->SetBinError(1,32.38904);
   hnumuCCinFV_stack_8->SetBinError(2,4.938537);
   hnumuCCinFV_stack_8->SetBinError(3,3.484958);
   hnumuCCinFV_stack_8->SetBinError(4,2.587095);
   hnumuCCinFV_stack_8->SetBinError(5,2.393524);
   hnumuCCinFV_stack_8->SetBinError(6,2.262888);
   hnumuCCinFV_stack_8->SetBinError(7,1.834496);
   hnumuCCinFV_stack_8->SetBinError(8,1.774948);
   hnumuCCinFV_stack_8->SetBinError(9,1.478999);
   hnumuCCinFV_stack_8->SetBinError(10,1.400512);
   hnumuCCinFV_stack_8->SetBinError(11,1.359758);
   hnumuCCinFV_stack_8->SetBinError(12,1.058293);
   hnumuCCinFV_stack_8->SetBinError(13,1.011367);
   hnumuCCinFV_stack_8->SetBinError(14,1.121841);
   hnumuCCinFV_stack_8->SetBinError(15,0.9015144);
   hnumuCCinFV_stack_8->SetBinError(16,0.8630579);
   hnumuCCinFV_stack_8->SetBinError(17,0.9909062);
   hnumuCCinFV_stack_8->SetBinError(18,0.9332372);
   hnumuCCinFV_stack_8->SetBinError(19,0.6846928);
   hnumuCCinFV_stack_8->SetBinError(20,0.6236464);
   hnumuCCinFV_stack_8->SetBinError(21,2.396862);
   hnumuCCinFV_stack_8->SetEntries(241430);

   ci = 1468;
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
   hs4->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,47.18388);
   hnueCCinFV_stack_9->SetBinContent(2,8.504505);
   hnueCCinFV_stack_9->SetBinContent(3,4.021841);
   hnueCCinFV_stack_9->SetBinContent(4,3.178067);
   hnueCCinFV_stack_9->SetBinContent(5,2.02375);
   hnueCCinFV_stack_9->SetBinContent(6,2.151618);
   hnueCCinFV_stack_9->SetBinContent(7,1.394063);
   hnueCCinFV_stack_9->SetBinContent(8,1.416306);
   hnueCCinFV_stack_9->SetBinContent(9,1.239244);
   hnueCCinFV_stack_9->SetBinContent(10,1.378279);
   hnueCCinFV_stack_9->SetBinContent(11,0.7094513);
   hnueCCinFV_stack_9->SetBinContent(12,0.9544808);
   hnueCCinFV_stack_9->SetBinContent(13,0.6067964);
   hnueCCinFV_stack_9->SetBinContent(14,0.4981874);
   hnueCCinFV_stack_9->SetBinContent(15,0.4983654);
   hnueCCinFV_stack_9->SetBinContent(16,0.5471066);
   hnueCCinFV_stack_9->SetBinContent(17,0.4148999);
   hnueCCinFV_stack_9->SetBinContent(18,0.5062132);
   hnueCCinFV_stack_9->SetBinContent(19,0.3108627);
   hnueCCinFV_stack_9->SetBinContent(20,0.1317974);
   hnueCCinFV_stack_9->SetBinContent(21,4.435812);
   hnueCCinFV_stack_9->SetBinError(1,2.181193);
   hnueCCinFV_stack_9->SetBinError(2,0.9932646);
   hnueCCinFV_stack_9->SetBinError(3,0.495932);
   hnueCCinFV_stack_9->SetBinError(4,0.4299412);
   hnueCCinFV_stack_9->SetBinError(5,0.3325327);
   hnueCCinFV_stack_9->SetBinError(6,0.407045);
   hnueCCinFV_stack_9->SetBinError(7,0.329045);
   hnueCCinFV_stack_9->SetBinError(8,0.2790421);
   hnueCCinFV_stack_9->SetBinError(9,0.2582751);
   hnueCCinFV_stack_9->SetBinError(10,0.2717555);
   hnueCCinFV_stack_9->SetBinError(11,0.1999662);
   hnueCCinFV_stack_9->SetBinError(12,0.2321923);
   hnueCCinFV_stack_9->SetBinError(13,0.1869408);
   hnueCCinFV_stack_9->SetBinError(14,0.1656754);
   hnueCCinFV_stack_9->SetBinError(15,0.1691197);
   hnueCCinFV_stack_9->SetBinError(16,0.1746328);
   hnueCCinFV_stack_9->SetBinError(17,0.157674);
   hnueCCinFV_stack_9->SetBinError(18,0.1586586);
   hnueCCinFV_stack_9->SetBinError(19,0.1313534);
   hnueCCinFV_stack_9->SetBinError(20,0.06856444);
   hnueCCinFV_stack_9->SetBinError(21,0.5020953);
   hnueCCinFV_stack_9->SetEntries(1998);

   ci = 1469;
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
   hs4->Add(hnueCCinFV_stack_9,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);
   hmcerror__11->SetBinContent(1,14745.82);
   hmcerror__11->SetBinContent(2,718.29);
   hmcerror__11->SetBinContent(3,438.1544);
   hmcerror__11->SetBinContent(4,346.9628);
   hmcerror__11->SetBinContent(5,295.803);
   hmcerror__11->SetBinContent(6,263.491);
   hmcerror__11->SetBinContent(7,211.2306);
   hmcerror__11->SetBinContent(8,188.0418);
   hmcerror__11->SetBinContent(9,149.6948);
   hmcerror__11->SetBinContent(10,124.5607);
   hmcerror__11->SetBinContent(11,106.7704);
   hmcerror__11->SetBinContent(12,88.9697);
   hmcerror__11->SetBinContent(13,77.33832);
   hmcerror__11->SetBinContent(14,64.05582);
   hmcerror__11->SetBinContent(15,56.29571);
   hmcerror__11->SetBinContent(16,46.29601);
   hmcerror__11->SetBinContent(17,40.45835);
   hmcerror__11->SetBinContent(18,38.23359);
   hmcerror__11->SetBinContent(19,28.05002);
   hmcerror__11->SetBinContent(20,24.96651);
   hmcerror__11->SetBinContent(21,248.8752);
   hmcerror__11->SetBinError(1,1995.583);
   hmcerror__11->SetBinError(2,105.471);
   hmcerror__11->SetBinError(3,68.79432);
   hmcerror__11->SetBinError(4,58.31232);
   hmcerror__11->SetBinError(5,56.88945);
   hmcerror__11->SetBinError(6,48.67557);
   hmcerror__11->SetBinError(7,43.30176);
   hmcerror__11->SetBinError(8,35.35933);
   hmcerror__11->SetBinError(9,29.87549);
   hmcerror__11->SetBinError(10,26.51844);
   hmcerror__11->SetBinError(11,22.60499);
   hmcerror__11->SetBinError(12,19.09407);
   hmcerror__11->SetBinError(13,19.19469);
   hmcerror__11->SetBinError(14,13.24695);
   hmcerror__11->SetBinError(15,14.00802);
   hmcerror__11->SetBinError(16,10.86732);
   hmcerror__11->SetBinError(17,10.15912);
   hmcerror__11->SetBinError(18,10.06119);
   hmcerror__11->SetBinError(19,7.228627);
   hmcerror__11->SetBinError(20,7.164747);
   hmcerror__11->SetBinError(21,52.93997);
   hmcerror__11->SetEntries(16299.7);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3013[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3013[20] = {
   15522,
   715,
   440,
   365,
   299,
   268,
   233,
   141,
   122,
   129,
   111,
   84,
   69,
   35,
   48,
   41,
   39,
   26,
   30,
   29};
   Double_t _felx3013[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3013[20] = {
   124.5873,
   26.73948,
   20.97618,
   19.10497,
   17.29162,
   16.37071,
   15.26434,
   11.87434,
   11.04536,
   11.35782,
   10.53565,
   9.2886,
   8.4327,
   6.0548,
   7.0604,
   6.5384,
   6.3813,
   5.2453,
   5.6197,
   5.5285};
   Double_t _fehx3013[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3013[20] = {
   124.5873,
   26.73948,
   20.97618,
   19.10497,
   17.29162,
   16.37071,
   15.26434,
   11.87434,
   11.04536,
   11.35782,
   10.53565,
   9.0869,
   8.2304,
   5.8483,
   6.8561,
   6.3331,
   6.1757,
   5.0358,
   5.4117,
   5.3201};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(18.67923);
   Graph_Graph3013->SetMaximum(17209.17);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.04#pm0.01(data err)#pm0.14(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.36/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18746.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 489.9","F");

   ci = 1461;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 2112.0","F");

   ci = 1462;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 601.8","F");

   ci = 1463;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1020.6","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  636.2","F");

   ci = 1465;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1288.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1118.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10708.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 77.7","F");

   ci = 1469;
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
   TText *pt_LaTex = pt->AddText("generic3_bnb_14_kine_pio_energy_2_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3014[20] = {
   0.1353321,
   0.1468362,
   0.1570093,
   0.168065,
   0.1923221,
   0.1847334,
   0.2049975,
   0.1880398,
   0.199576,
   0.2128958,
   0.211716,
   0.2146132,
   0.2481912,
   0.2068032,
   0.2488293,
   0.2347355,
   0.2511007,
   0.2631504,
   0.2577049,
   0.2869743};
   Double_t _fehx3014[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3014[20] = {
   0.1353321,
   0.1468362,
   0.1570093,
   0.168065,
   0.1923221,
   0.1847334,
   0.2049975,
   0.1880398,
   0.199576,
   0.2128958,
   0.211716,
   0.2146132,
   0.2481912,
   0.2068032,
   0.2488293,
   0.2347355,
   0.2511007,
   0.2631504,
   0.2577049,
   0.2869743};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Reco neutrino energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3015[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3015[20] = {
   0.1337017,
   0.1326697,
   0.1433566,
   0.1526138,
   0.1615375,
   0.1626384,
   0.1741902,
   0.1731551,
   0.1734362,
   0.1819966,
   0.1833009,
   0.1846535,
   0.1877618,
   0.17606,
   0.1766324,
   0.1739522,
   0.1772653,
   0.1748596,
   0.1709474,
   0.1687306};
   Double_t _fehx3015[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3015[20] = {
   0.1337017,
   0.1326697,
   0.1433566,
   0.1526138,
   0.1615375,
   0.1626384,
   0.1741902,
   0.1731551,
   0.1734362,
   0.1819966,
   0.1833009,
   0.1846535,
   0.1877618,
   0.17606,
   0.1766324,
   0.1739522,
   0.1772653,
   0.1748596,
   0.1709474,
   0.1687306};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t _fy3016[20] = {
   1.052637,
   0.9954196,
   1.004212,
   1.051986,
   1.010808,
   1.017113,
   1.10306,
   0.7498334,
   0.8149916,
   1.03564,
   1.039614,
   0.9441416,
   0.8921839,
   0.5463985,
   0.8526405,
   0.8856054,
   0.9639543,
   0.6800303,
   1.069518,
   1.161556};
   Double_t _felx3016[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3016[20] = {
   0.008448993,
   0.03722658,
   0.04787393,
   0.05506346,
   0.05845653,
   0.06213004,
   0.07226385,
   0.06314736,
   0.07378587,
   0.09118299,
   0.09867582,
   0.1044018,
   0.1090365,
   0.09452381,
   0.1254163,
   0.1412303,
   0.1577252,
   0.1371909,
   0.2003457,
   0.2214366};
   Double_t _fehx3016[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3016[20] = {
   0.008448993,
   0.03722658,
   0.04787393,
   0.05506346,
   0.05845653,
   0.06213004,
   0.07226385,
   0.06314736,
   0.07378587,
   0.09118299,
   0.09867582,
   0.1021348,
   0.1064207,
   0.09130006,
   0.1217873,
   0.1367958,
   0.1526434,
   0.1317114,
   0.1929303,
   0.2130895};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0.3595976);
   Graph_Graph3016->SetMaximum(1.466923);
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
   
   TH1F *hist__12 = new TH1F("hist__12","generic3_bnb_14_kine_pio_energy_2_all",20,0,400);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
