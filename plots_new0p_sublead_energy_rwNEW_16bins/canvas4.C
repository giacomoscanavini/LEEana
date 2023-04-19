#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 20:02:46 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-21.66,451.2821,2395.14);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__10->SetBinContent(1,796.4697);
   hmc__10->SetBinContent(2,1072.663);
   hmc__10->SetBinContent(3,908.5503);
   hmc__10->SetBinContent(4,687.0303);
   hmc__10->SetBinContent(5,486.0824);
   hmc__10->SetBinContent(6,325.3312);
   hmc__10->SetBinContent(7,203.5152);
   hmc__10->SetBinContent(8,133.4631);
   hmc__10->SetBinContent(9,77.79867);
   hmc__10->SetBinContent(10,48.17562);
   hmc__10->SetBinContent(11,34.36471);
   hmc__10->SetBinContent(12,24.55074);
   hmc__10->SetBinContent(13,13.55347);
   hmc__10->SetBinContent(14,7.891845);
   hmc__10->SetBinContent(15,5.911817);
   hmc__10->SetBinContent(16,4.080399);
   hmc__10->SetBinContent(17,7.830821);
   hmc__10->SetBinError(1,181.6493);
   hmc__10->SetBinError(2,213.8612);
   hmc__10->SetBinError(3,193.1028);
   hmc__10->SetBinError(4,157.8646);
   hmc__10->SetBinError(5,122.0965);
   hmc__10->SetBinError(6,89.25491);
   hmc__10->SetBinError(7,59.86582);
   hmc__10->SetBinError(8,46.95771);
   hmc__10->SetBinError(9,28.67719);
   hmc__10->SetBinError(10,21.42735);
   hmc__10->SetBinError(11,17.48275);
   hmc__10->SetBinError(12,12.75556);
   hmc__10->SetBinError(13,10.67738);
   hmc__10->SetBinError(14,5.9692);
   hmc__10->SetBinError(15,5.971939);
   hmc__10->SetBinError(16,6.418479);
   hmc__10->SetBinError(17,7.163759);
   hmc__10->SetMinimum(-21.66);
   hmc__10->SetMaximum(2274.3);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",16,0,400);
   hs4_stack_4->SetMinimum(-9.474605e-09);
   hs4_stack_4->SetMaximum(1126.296);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,18.77211);
   hbadmatch_stack_1->SetBinContent(2,29.26286);
   hbadmatch_stack_1->SetBinContent(3,29.28302);
   hbadmatch_stack_1->SetBinContent(4,20.3066);
   hbadmatch_stack_1->SetBinContent(5,9.935714);
   hbadmatch_stack_1->SetBinContent(6,6.511844);
   hbadmatch_stack_1->SetBinContent(7,3.030875);
   hbadmatch_stack_1->SetBinContent(8,1.364538);
   hbadmatch_stack_1->SetBinContent(9,1.217248);
   hbadmatch_stack_1->SetBinContent(10,1.26712);
   hbadmatch_stack_1->SetBinContent(11,0.592916);
   hbadmatch_stack_1->SetBinContent(12,0.6803553);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,2.420458);
   hbadmatch_stack_1->SetBinError(2,3.278559);
   hbadmatch_stack_1->SetBinError(3,3.46145);
   hbadmatch_stack_1->SetBinError(4,2.338898);
   hbadmatch_stack_1->SetBinError(5,1.597683);
   hbadmatch_stack_1->SetBinError(6,2.063233);
   hbadmatch_stack_1->SetBinError(7,0.8680213);
   hbadmatch_stack_1->SetBinError(8,0.5718896);
   hbadmatch_stack_1->SetBinError(9,0.6211758);
   hbadmatch_stack_1->SetBinError(10,0.5883944);
   hbadmatch_stack_1->SetBinError(11,0.4423482);
   hbadmatch_stack_1->SetBinError(12,0.4810838);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,108.473);
   hext_stack_2->SetBinContent(2,155.8237);
   hext_stack_2->SetBinContent(3,92.48215);
   hext_stack_2->SetBinContent(4,52.417);
   hext_stack_2->SetBinContent(5,35.47723);
   hext_stack_2->SetBinContent(6,14.90401);
   hext_stack_2->SetBinContent(7,10.60742);
   hext_stack_2->SetBinContent(8,7.455595);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(10,1.219797);
   hext_stack_2->SetBinContent(11,1.379791);
   hext_stack_2->SetBinContent(12,0.6416141);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,6.74397);
   hext_stack_2->SetBinError(2,8.178457);
   hext_stack_2->SetBinError(3,6.207158);
   hext_stack_2->SetBinError(4,4.700925);
   hext_stack_2->SetBinError(5,3.901431);
   hext_stack_2->SetBinError(6,2.5273);
   hext_stack_2->SetBinError(7,2.150068);
   hext_stack_2->SetBinError(8,1.758699);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(10,0.7042499);
   hext_stack_2->SetBinError(11,0.6935586);
   hext_stack_2->SetBinError(12,0.6416141);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,12.05633);
   hdirt_stack_3->SetBinContent(2,21.88044);
   hdirt_stack_3->SetBinContent(3,15.62879);
   hdirt_stack_3->SetBinContent(4,6.473478);
   hdirt_stack_3->SetBinContent(5,4.805026);
   hdirt_stack_3->SetBinContent(6,1.39485);
   hdirt_stack_3->SetBinContent(7,0.8366207);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,1.776605);
   hdirt_stack_3->SetBinError(2,2.513084);
   hdirt_stack_3->SetBinError(3,2.238906);
   hdirt_stack_3->SetBinError(4,1.388084);
   hdirt_stack_3->SetBinError(5,1.477126);
   hdirt_stack_3->SetBinError(6,0.6314456);
   hdirt_stack_3->SetBinError(7,0.5048718);
   hdirt_stack_3->SetBinError(8,0.4142698);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,110.1182);
   houtFV_stack_4->SetBinContent(2,158.1093);
   houtFV_stack_4->SetBinContent(3,125.9136);
   houtFV_stack_4->SetBinContent(4,82.97498);
   houtFV_stack_4->SetBinContent(5,41.4053);
   houtFV_stack_4->SetBinContent(6,26.72625);
   houtFV_stack_4->SetBinContent(7,17.3802);
   houtFV_stack_4->SetBinContent(8,9.506751);
   houtFV_stack_4->SetBinContent(9,4.988415);
   houtFV_stack_4->SetBinContent(10,4.449832);
   houtFV_stack_4->SetBinContent(11,3.217977);
   houtFV_stack_4->SetBinContent(12,0.8753801);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.447765);
   houtFV_stack_4->SetBinContent(17,0.4057469);
   houtFV_stack_4->SetBinError(1,5.219906);
   houtFV_stack_4->SetBinError(2,6.366115);
   houtFV_stack_4->SetBinError(3,5.789757);
   houtFV_stack_4->SetBinError(4,4.538654);
   houtFV_stack_4->SetBinError(5,3.215112);
   houtFV_stack_4->SetBinError(6,2.622654);
   houtFV_stack_4->SetBinError(7,2.155404);
   houtFV_stack_4->SetBinError(8,1.559625);
   houtFV_stack_4->SetBinError(9,1.128474);
   houtFV_stack_4->SetBinError(10,1.057532);
   houtFV_stack_4->SetBinError(11,0.9618638);
   houtFV_stack_4->SetBinError(12,0.5191111);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.3189402);
   houtFV_stack_4->SetBinError(17,0.2870385);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,17.23464);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,18.75086);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,18.13707);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.72942);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.86752);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.758648);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.9678);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.156788);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.988893);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7526357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.417478);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.360262);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.406313);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.104382);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.162585);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.003763);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7882745);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6957372);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7250045);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.185768);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.255004);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.54282);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.01288);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.817748);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.05904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2850966);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.658913);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5546234);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5787203);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2988711);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,272.7383);
   hNCpi0inFVres_stack_7->SetBinContent(2,373.9377);
   hNCpi0inFVres_stack_7->SetBinContent(3,325.4621);
   hNCpi0inFVres_stack_7->SetBinContent(4,249.2775);
   hNCpi0inFVres_stack_7->SetBinContent(5,177.0561);
   hNCpi0inFVres_stack_7->SetBinContent(6,120.0311);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.07236);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.62805);
   hNCpi0inFVres_stack_7->SetBinContent(9,25.13965);
   hNCpi0inFVres_stack_7->SetBinContent(10,14.19118);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.135134);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.18984);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.095252);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.70274);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.14374);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.6691039);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4879178);
   hNCpi0inFVres_stack_7->SetBinError(1,5.396321);
   hNCpi0inFVres_stack_7->SetBinError(2,6.339616);
   hNCpi0inFVres_stack_7->SetBinError(3,5.923899);
   hNCpi0inFVres_stack_7->SetBinError(4,5.111332);
   hNCpi0inFVres_stack_7->SetBinError(5,4.362472);
   hNCpi0inFVres_stack_7->SetBinError(6,3.625038);
   hNCpi0inFVres_stack_7->SetBinError(7,2.686283);
   hNCpi0inFVres_stack_7->SetBinError(8,2.16844);
   hNCpi0inFVres_stack_7->SetBinError(9,1.60183);
   hNCpi0inFVres_stack_7->SetBinError(10,1.149453);
   hNCpi0inFVres_stack_7->SetBinError(11,1.028375);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8290647);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5804548);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4596494);
   hNCpi0inFVres_stack_7->SetBinError(15,0.379057);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2548204);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1427183);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,47.89368);
   hNCpi0inFVdis_stack_8->SetBinContent(2,68.50191);
   hNCpi0inFVdis_stack_8->SetBinContent(3,60.4705);
   hNCpi0inFVdis_stack_8->SetBinContent(4,51.17628);
   hNCpi0inFVdis_stack_8->SetBinContent(5,36.63435);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.51315);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.81122);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.11819);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.947717);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.992124);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.305834);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.372012);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9344858);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.491494);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5583361);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8223901);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.753636);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.216021);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.697813);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.522337);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.343635);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.996331);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.606123);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.257859);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.141838);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9558637);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6847409);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6229323);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5558506);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2560898);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4167175);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2847561);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3297271);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2941681);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,96.99257);
   hCCpi0inFV_stack_10->SetBinContent(2,123.1996);
   hCCpi0inFV_stack_10->SetBinContent(3,125.0408);
   hCCpi0inFV_stack_10->SetBinContent(4,113.6972);
   hCCpi0inFV_stack_10->SetBinContent(5,90.23307);
   hCCpi0inFV_stack_10->SetBinContent(6,65.11764);
   hCCpi0inFV_stack_10->SetBinContent(7,36.72456);
   hCCpi0inFV_stack_10->SetBinContent(8,25.96667);
   hCCpi0inFV_stack_10->SetBinContent(9,16.41218);
   hCCpi0inFV_stack_10->SetBinContent(10,12.08042);
   hCCpi0inFV_stack_10->SetBinContent(11,8.909199);
   hCCpi0inFV_stack_10->SetBinContent(12,3.967882);
   hCCpi0inFV_stack_10->SetBinContent(13,3.609608);
   hCCpi0inFV_stack_10->SetBinContent(14,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(15,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(16,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(17,2.245626);
   hCCpi0inFV_stack_10->SetBinError(1,4.98627);
   hCCpi0inFV_stack_10->SetBinError(2,5.555511);
   hCCpi0inFV_stack_10->SetBinError(3,5.556796);
   hCCpi0inFV_stack_10->SetBinError(4,5.376674);
   hCCpi0inFV_stack_10->SetBinError(5,4.765273);
   hCCpi0inFV_stack_10->SetBinError(6,4.063797);
   hCCpi0inFV_stack_10->SetBinError(7,3.023621);
   hCCpi0inFV_stack_10->SetBinError(8,2.569261);
   hCCpi0inFV_stack_10->SetBinError(9,2.04906);
   hCCpi0inFV_stack_10->SetBinError(10,1.694377);
   hCCpi0inFV_stack_10->SetBinError(11,1.429019);
   hCCpi0inFV_stack_10->SetBinError(12,0.9624406);
   hCCpi0inFV_stack_10->SetBinError(13,0.9294975);
   hCCpi0inFV_stack_10->SetBinError(14,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(15,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(16,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(17,0.7332843);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,47.90831);
   hNCinFV_stack_11->SetBinContent(2,44.56087);
   hNCinFV_stack_11->SetBinContent(3,46.28189);
   hNCinFV_stack_11->SetBinContent(4,41.03798);
   hNCinFV_stack_11->SetBinContent(5,37.86541);
   hNCinFV_stack_11->SetBinContent(6,28.83086);
   hNCinFV_stack_11->SetBinContent(7,22.70913);
   hNCinFV_stack_11->SetBinContent(8,14.98699);
   hNCinFV_stack_11->SetBinContent(9,6.505504);
   hNCinFV_stack_11->SetBinContent(10,5.180059);
   hNCinFV_stack_11->SetBinContent(11,4.593294);
   hNCinFV_stack_11->SetBinContent(12,4.946388);
   hNCinFV_stack_11->SetBinContent(13,2.484368);
   hNCinFV_stack_11->SetBinContent(14,1.318683);
   hNCinFV_stack_11->SetBinContent(15,1.413964);
   hNCinFV_stack_11->SetBinContent(16,0.5901461);
   hNCinFV_stack_11->SetBinContent(17,1.518779);
   hNCinFV_stack_11->SetBinError(1,3.533182);
   hNCinFV_stack_11->SetBinError(2,3.330146);
   hNCinFV_stack_11->SetBinError(3,3.394256);
   hNCinFV_stack_11->SetBinError(4,3.194055);
   hNCinFV_stack_11->SetBinError(5,3.071448);
   hNCinFV_stack_11->SetBinError(6,2.643008);
   hNCinFV_stack_11->SetBinError(7,2.403195);
   hNCinFV_stack_11->SetBinError(8,1.992004);
   hNCinFV_stack_11->SetBinError(9,1.272805);
   hNCinFV_stack_11->SetBinError(10,1.144624);
   hNCinFV_stack_11->SetBinError(11,1.093343);
   hNCinFV_stack_11->SetBinError(12,1.057256);
   hNCinFV_stack_11->SetBinError(13,0.8556093);
   hNCinFV_stack_11->SetBinError(14,0.5542732);
   hNCinFV_stack_11->SetBinError(15,0.6515799);
   hNCinFV_stack_11->SetBinError(16,0.340721);
   hNCinFV_stack_11->SetBinError(17,0.5892709);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,51.05059);
   hnumuCCinFV_stack_12->SetBinContent(2,67.94887);
   hnumuCCinFV_stack_12->SetBinContent(3,61.14371);
   hnumuCCinFV_stack_12->SetBinContent(4,49.05096);
   hnumuCCinFV_stack_12->SetBinContent(5,37.8306);
   hnumuCCinFV_stack_12->SetBinContent(6,25.6659);
   hnumuCCinFV_stack_12->SetBinContent(7,19.73364);
   hnumuCCinFV_stack_12->SetBinContent(8,10.91309);
   hnumuCCinFV_stack_12->SetBinContent(9,9.378869);
   hnumuCCinFV_stack_12->SetBinContent(10,3.370974);
   hnumuCCinFV_stack_12->SetBinContent(11,2.435579);
   hnumuCCinFV_stack_12->SetBinContent(12,2.815269);
   hnumuCCinFV_stack_12->SetBinContent(13,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(14,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,1.718483);
   hnumuCCinFV_stack_12->SetBinError(1,4.083443);
   hnumuCCinFV_stack_12->SetBinError(2,4.844669);
   hnumuCCinFV_stack_12->SetBinError(3,4.671164);
   hnumuCCinFV_stack_12->SetBinError(4,3.922025);
   hnumuCCinFV_stack_12->SetBinError(5,4.294379);
   hnumuCCinFV_stack_12->SetBinError(6,2.702476);
   hnumuCCinFV_stack_12->SetBinError(7,2.284983);
   hnumuCCinFV_stack_12->SetBinError(8,1.644689);
   hnumuCCinFV_stack_12->SetBinError(9,1.562322);
   hnumuCCinFV_stack_12->SetBinError(10,0.8986391);
   hnumuCCinFV_stack_12->SetBinError(11,0.7574654);
   hnumuCCinFV_stack_12->SetBinError(12,0.840099);
   hnumuCCinFV_stack_12->SetBinError(13,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(14,0.340721);
   hnumuCCinFV_stack_12->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.6829145);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,11.94907);
   hnueCCinFV_stack_13->SetBinContent(2,6.808924);
   hnueCCinFV_stack_13->SetBinContent(3,5.554261);
   hnueCCinFV_stack_13->SetBinContent(4,5.015409);
   hnueCCinFV_stack_13->SetBinContent(5,1.91303);
   hnueCCinFV_stack_13->SetBinContent(6,1.360998);
   hnueCCinFV_stack_13->SetBinContent(7,1.125349);
   hnueCCinFV_stack_13->SetBinContent(8,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(9,1.32013);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(12,1.281124);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.552444);
   hnueCCinFV_stack_13->SetBinError(2,1.75054);
   hnueCCinFV_stack_13->SetBinError(3,1.327624);
   hnueCCinFV_stack_13->SetBinError(4,1.595042);
   hnueCCinFV_stack_13->SetBinError(5,0.7604535);
   hnueCCinFV_stack_13->SetBinError(6,0.5622915);
   hnueCCinFV_stack_13->SetBinError(7,0.5194673);
   hnueCCinFV_stack_13->SetBinError(8,0.340721);
   hnueCCinFV_stack_13->SetBinError(9,1.103342);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(12,0.6891595);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__11->SetBinContent(1,796.4697);
   hmcerror__11->SetBinContent(2,1072.663);
   hmcerror__11->SetBinContent(3,908.5503);
   hmcerror__11->SetBinContent(4,687.0303);
   hmcerror__11->SetBinContent(5,486.0824);
   hmcerror__11->SetBinContent(6,325.3312);
   hmcerror__11->SetBinContent(7,203.5152);
   hmcerror__11->SetBinContent(8,133.4631);
   hmcerror__11->SetBinContent(9,77.79867);
   hmcerror__11->SetBinContent(10,48.17562);
   hmcerror__11->SetBinContent(11,34.36471);
   hmcerror__11->SetBinContent(12,24.55074);
   hmcerror__11->SetBinContent(13,13.55347);
   hmcerror__11->SetBinContent(14,7.891845);
   hmcerror__11->SetBinContent(15,5.911817);
   hmcerror__11->SetBinContent(16,4.080399);
   hmcerror__11->SetBinContent(17,7.830821);
   hmcerror__11->SetBinError(1,181.6493);
   hmcerror__11->SetBinError(2,213.8612);
   hmcerror__11->SetBinError(3,193.1028);
   hmcerror__11->SetBinError(4,157.8646);
   hmcerror__11->SetBinError(5,122.0965);
   hmcerror__11->SetBinError(6,89.25491);
   hmcerror__11->SetBinError(7,59.86582);
   hmcerror__11->SetBinError(8,46.95771);
   hmcerror__11->SetBinError(9,28.67719);
   hmcerror__11->SetBinError(10,21.42735);
   hmcerror__11->SetBinError(11,17.48275);
   hmcerror__11->SetBinError(12,12.75556);
   hmcerror__11->SetBinError(13,10.67738);
   hmcerror__11->SetBinError(14,5.9692);
   hmcerror__11->SetBinError(15,5.971939);
   hmcerror__11->SetBinError(16,6.418479);
   hmcerror__11->SetBinError(17,7.163759);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[16] = {
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
   Double_t _fy3013[16] = {
   791,
   1083,
   902,
   684,
   422,
   257,
   176,
   89,
   69,
   40,
   22,
   24,
   13,
   8,
   1,
   4};
   Double_t _felx3013[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3013[16] = {
   28.12472,
   32.90897,
   30.03331,
   26.15339,
   20.54264,
   16.03122,
   13.2665,
   9.5566,
   8.4327,
   6.4604,
   4.8417,
   5.0476,
   3.77763,
   3.0307,
   1,
   2.29683};
   Double_t _fehx3013[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3013[16] = {
   28.12472,
   32.90897,
   30.03331,
   26.15339,
   20.54264,
   16.03122,
   13.2665,
   9.3552,
   8.2304,
   6.2549,
   4.6299,
   4.837,
   3.5552,
   2.7896,
   1.35971,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1227.5);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 586.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1693.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  341.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 725.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 311.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 344.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all");
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
   
   Double_t _fx3014[16] = {
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
   Double_t _fy3014[16] = {
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
   Double_t _felx3014[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3014[16] = {
   0.228068,
   0.1993741,
   0.2125395,
   0.2297782,
   0.2511848,
   0.2743509,
   0.294159,
   0.3518403,
   0.3686077,
   0.4447758,
   0.5087415,
   0.5195591,
   0.7877968,
   0.7563758,
   1.01017,
   1.573003};
   Double_t _fehx3014[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3014[16] = {
   0.228068,
   0.1993741,
   0.2125395,
   0.2297782,
   0.2511848,
   0.2743509,
   0.294159,
   0.3518403,
   0.3686077,
   0.4447758,
   0.5087415,
   0.5195591,
   0.7877968,
   0.7563758,
   1.01017,
   1.573003};
   grae = new TGraphAsymmErrors(16,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[16] = {
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
   Double_t _fy3015[16] = {
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
   Double_t _felx3015[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3015[16] = {
   0.1919299,
   0.187483,
   0.198085,
   0.2125948,
   0.2292297,
   0.2517591,
   0.2621026,
   0.3005593,
   0.3056524,
   0.2954368,
   0.2630636,
   0.2712151,
   0.2956997,
   0.3389357,
   0.2997221,
   0.3355231};
   Double_t _fehx3015[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3015[16] = {
   0.1919299,
   0.187483,
   0.198085,
   0.2125948,
   0.2292297,
   0.2517591,
   0.2621026,
   0.3005593,
   0.3056524,
   0.2954368,
   0.2630636,
   0.2712151,
   0.2956997,
   0.3389357,
   0.2997221,
   0.3355231};
   grae = new TGraphAsymmErrors(16,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[16] = {
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
   Double_t _fy3016[16] = {
   0.9931325,
   1.009637,
   0.9927904,
   0.9955892,
   0.8681656,
   0.7899642,
   0.8648004,
   0.6668509,
   0.8869046,
   0.8302955,
   0.6401916,
   0.9775674,
   0.9591636,
   1.013705,
   0.1691527,
   0.9802964};
   Double_t _felx3016[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3016[16] = {
   0.03531173,
   0.03067969,
   0.0330563,
   0.03806731,
   0.04226164,
   0.04927661,
   0.06518678,
   0.0716048,
   0.1083913,
   0.134101,
   0.1408916,
   0.2055987,
   0.2787204,
   0.3840293,
   0.1691527,
   0.5628935};
   Double_t _fehx3016[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3016[16] = {
   0.03531173,
   0.03067969,
   0.0330563,
   0.03806731,
   0.04226164,
   0.04927661,
   0.06518678,
   0.07009577,
   0.105791,
   0.1298354,
   0.1347283,
   0.1970206,
   0.2623091,
   0.3534788,
   0.2299987,
   0.4857026};
   grae = new TGraphAsymmErrors(16,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.612599);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
