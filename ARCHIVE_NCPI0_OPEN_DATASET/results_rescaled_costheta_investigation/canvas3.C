#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Tue Apr 19 22:39:48 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-0.6,676.9231,50.55789);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmc__7->SetBinContent(1,0.8137034);
   hmc__7->SetBinContent(2,3.193153);
   hmc__7->SetBinContent(3,10.87542);
   hmc__7->SetBinContent(4,17.74937);
   hmc__7->SetBinContent(5,23.51218);
   hmc__7->SetBinContent(6,24.87363);
   hmc__7->SetBinContent(7,23.87918);
   hmc__7->SetBinContent(8,17.72932);
   hmc__7->SetBinContent(9,13.81083);
   hmc__7->SetBinContent(10,11.70249);
   hmc__7->SetBinContent(11,10.47217);
   hmc__7->SetBinContent(12,8.788167);
   hmc__7->SetBinContent(13,7.243917);
   hmc__7->SetBinContent(14,6.040909);
   hmc__7->SetBinContent(15,4.877708);
   hmc__7->SetBinContent(16,3.282094);
   hmc__7->SetBinContent(17,3.203097);
   hmc__7->SetBinContent(18,2.479378);
   hmc__7->SetBinContent(19,2.476825);
   hmc__7->SetBinContent(20,1.599143);
   hmc__7->SetBinContent(21,1.160318);
   hmc__7->SetBinContent(22,0.7951949);
   hmc__7->SetBinContent(23,0.7484233);
   hmc__7->SetBinContent(24,0.9395661);
   hmc__7->SetBinContent(25,5.50989);
   hmc__7->SetBinError(1,0.7929564);
   hmc__7->SetBinError(2,1.514188);
   hmc__7->SetBinError(3,3.706782);
   hmc__7->SetBinError(4,4.392571);
   hmc__7->SetBinError(5,5.83999);
   hmc__7->SetBinError(6,6.471234);
   hmc__7->SetBinError(7,6.960928);
   hmc__7->SetBinError(8,5.849358);
   hmc__7->SetBinError(9,4.232383);
   hmc__7->SetBinError(10,3.753482);
   hmc__7->SetBinError(11,3.227764);
   hmc__7->SetBinError(12,3.954492);
   hmc__7->SetBinError(13,2.499125);
   hmc__7->SetBinError(14,2.37045);
   hmc__7->SetBinError(15,2.046301);
   hmc__7->SetBinError(16,1.638544);
   hmc__7->SetBinError(17,1.867715);
   hmc__7->SetBinError(18,1.867109);
   hmc__7->SetBinError(19,1.563421);
   hmc__7->SetBinError(20,0.9015776);
   hmc__7->SetBinError(21,0.7257933);
   hmc__7->SetBinError(22,0.7594784);
   hmc__7->SetBinError(23,0.6444628);
   hmc__7->SetBinError(24,1.218546);
   hmc__7->SetBinError(25,1.862938);
   hmc__7->SetMinimum(-0.6);
   hmc__7->SetMaximum(48);
   hmc__7->SetEntries(204.2995);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,600);
   hs3_stack_3->SetMinimum(-1.1539e-09);
   hs3_stack_3->SetMaximum(26.11731);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(2,0.188666);
   hbadmatch_stack_1->SetBinContent(3,0.3212984);
   hbadmatch_stack_1->SetBinContent(4,0.3886164);
   hbadmatch_stack_1->SetBinContent(5,0.5520502);
   hbadmatch_stack_1->SetBinContent(6,0.6530108);
   hbadmatch_stack_1->SetBinContent(7,0.6223477);
   hbadmatch_stack_1->SetBinContent(8,0.3906269);
   hbadmatch_stack_1->SetBinContent(9,0.2141047);
   hbadmatch_stack_1->SetBinContent(10,0.1888439);
   hbadmatch_stack_1->SetBinContent(11,0.01734025);
   hbadmatch_stack_1->SetBinContent(12,0.08223122);
   hbadmatch_stack_1->SetBinContent(13,0.01734025);
   hbadmatch_stack_1->SetBinContent(14,0.03199482);
   hbadmatch_stack_1->SetBinContent(15,0.09916852);
   hbadmatch_stack_1->SetBinContent(18,0.01734025);
   hbadmatch_stack_1->SetBinContent(19,0.06204087);
   hbadmatch_stack_1->SetBinContent(21,0.008670123);
   hbadmatch_stack_1->SetBinContent(23,0.05080017);
   hbadmatch_stack_1->SetBinContent(25,0.09293021);
   hbadmatch_stack_1->SetBinError(2,0.08574733);
   hbadmatch_stack_1->SetBinError(3,0.1057935);
   hbadmatch_stack_1->SetBinError(4,0.1175398);
   hbadmatch_stack_1->SetBinError(5,0.1470187);
   hbadmatch_stack_1->SetBinError(6,0.2727095);
   hbadmatch_stack_1->SetBinError(7,0.1585622);
   hbadmatch_stack_1->SetBinError(8,0.1203706);
   hbadmatch_stack_1->SetBinError(9,0.08669949);
   hbadmatch_stack_1->SetBinError(10,0.0767111);
   hbadmatch_stack_1->SetBinError(11,0.01226141);
   hbadmatch_stack_1->SetBinError(12,0.04979023);
   hbadmatch_stack_1->SetBinError(13,0.01226141);
   hbadmatch_stack_1->SetBinError(14,0.01872648);
   hbadmatch_stack_1->SetBinError(15,0.06472719);
   hbadmatch_stack_1->SetBinError(18,0.01226141);
   hbadmatch_stack_1->SetBinError(19,0.04445745);
   hbadmatch_stack_1->SetBinError(21,0.008670123);
   hbadmatch_stack_1->SetBinError(23,0.04301293);
   hbadmatch_stack_1->SetBinError(25,0.06020841);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1452;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.1520396);
   hext_stack_2->SetBinContent(2,0.1168089);
   hext_stack_2->SetBinContent(3,1.807789);
   hext_stack_2->SetBinContent(4,0.7249674);
   hext_stack_2->SetBinContent(5,1.545427);
   hext_stack_2->SetBinContent(6,2.018233);
   hext_stack_2->SetBinContent(7,1.435105);
   hext_stack_2->SetBinContent(8,1.401731);
   hext_stack_2->SetBinContent(9,0.633189);
   hext_stack_2->SetBinContent(10,0.4978364);
   hext_stack_2->SetBinContent(11,0.5914716);
   hext_stack_2->SetBinContent(12,0.3457967);
   hext_stack_2->SetBinContent(13,0.1770701);
   hext_stack_2->SetBinContent(14,0.4728059);
   hext_stack_2->SetBinContent(15,0.02503047);
   hext_stack_2->SetBinContent(16,0.1353527);
   hext_stack_2->SetBinContent(17,0.1520396);
   hext_stack_2->SetBinContent(18,0.00834349);
   hext_stack_2->SetBinContent(19,0.1353527);
   hext_stack_2->SetBinContent(20,0.01668698);
   hext_stack_2->SetBinContent(21,0.2707053);
   hext_stack_2->SetBinContent(22,0.00834349);
   hext_stack_2->SetBinContent(23,0.00834349);
   hext_stack_2->SetBinContent(25,0.2104441);
   hext_stack_2->SetBinError(1,0.135866);
   hext_stack_2->SetBinError(2,0.03121848);
   hext_stack_2->SetBinError(3,0.4705057);
   hext_stack_2->SetBinError(4,0.2735194);
   hext_stack_2->SetBinError(5,0.429889);
   hext_stack_2->SetBinError(6,0.4902269);
   hext_stack_2->SetBinError(7,0.4082806);
   hext_stack_2->SetBinError(8,0.4079394);
   hext_stack_2->SetBinError(9,0.272116);
   hext_stack_2->SetBinError(10,0.2360652);
   hext_stack_2->SetBinError(11,0.2714757);
   hext_stack_2->SetBinError(12,0.1930472);
   hext_stack_2->SetBinError(13,0.1366324);
   hext_stack_2->SetBinError(14,0.2356224);
   hext_stack_2->SetBinError(15,0.01445135);
   hext_stack_2->SetBinError(16,0.1353526);
   hext_stack_2->SetBinError(17,0.135866);
   hext_stack_2->SetBinError(18,0.00834349);
   hext_stack_2->SetBinError(19,0.1353526);
   hext_stack_2->SetBinError(20,0.01179948);
   hext_stack_2->SetBinError(21,0.1914176);
   hext_stack_2->SetBinError(22,0.00834349);
   hext_stack_2->SetBinError(23,0.00834349);
   hext_stack_2->SetBinError(25,0.1376476);
   hext_stack_2->SetEntries(312);

   ci = 1453;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.1384143);
   hdirt_stack_3->SetBinContent(3,0.08624996);
   hdirt_stack_3->SetBinContent(4,0.08722402);
   hdirt_stack_3->SetBinContent(5,0.3641773);
   hdirt_stack_3->SetBinContent(6,0.106954);
   hdirt_stack_3->SetBinContent(7,0.06766382);
   hdirt_stack_3->SetBinContent(8,0.04910608);
   hdirt_stack_3->SetBinContent(9,0.02213032);
   hdirt_stack_3->SetBinContent(10,0.030062);
   hdirt_stack_3->SetBinContent(11,0.03565134);
   hdirt_stack_3->SetBinContent(12,0.04524468);
   hdirt_stack_3->SetBinContent(15,0.030062);
   hdirt_stack_3->SetBinContent(25,0.005589334);
   hdirt_stack_3->SetBinError(2,0.06388827);
   hdirt_stack_3->SetBinError(3,0.05003123);
   hdirt_stack_3->SetBinError(4,0.04981805);
   hdirt_stack_3->SetBinError(5,0.2127058);
   hdirt_stack_3->SetBinError(6,0.05296125);
   hdirt_stack_3->SetBinError(7,0.04390339);
   hdirt_stack_3->SetBinError(8,0.03202314);
   hdirt_stack_3->SetBinError(9,0.01350629);
   hdirt_stack_3->SetBinError(10,0.030062);
   hdirt_stack_3->SetBinError(11,0.03057719);
   hdirt_stack_3->SetBinError(12,0.03497105);
   hdirt_stack_3->SetBinError(15,0.030062);
   hdirt_stack_3->SetBinError(25,0.005589334);
   hdirt_stack_3->SetEntries(54);

   ci = 1454;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.05947029);
   houtFV_stack_4->SetBinContent(2,0.3820305);
   houtFV_stack_4->SetBinContent(3,1.156032);
   houtFV_stack_4->SetBinContent(4,1.196021);
   houtFV_stack_4->SetBinContent(5,1.215539);
   houtFV_stack_4->SetBinContent(6,1.428706);
   houtFV_stack_4->SetBinContent(7,1.566446);
   houtFV_stack_4->SetBinContent(8,0.9502562);
   houtFV_stack_4->SetBinContent(9,0.7694521);
   houtFV_stack_4->SetBinContent(10,0.9319121);
   houtFV_stack_4->SetBinContent(11,0.8366337);
   houtFV_stack_4->SetBinContent(12,0.836372);
   houtFV_stack_4->SetBinContent(13,0.380391);
   houtFV_stack_4->SetBinContent(14,0.4061061);
   houtFV_stack_4->SetBinContent(15,0.1637566);
   houtFV_stack_4->SetBinContent(16,0.2032007);
   houtFV_stack_4->SetBinContent(17,0.03468049);
   houtFV_stack_4->SetBinContent(18,0.08777032);
   houtFV_stack_4->SetBinContent(19,0.1634214);
   houtFV_stack_4->SetBinContent(20,0.09293021);
   houtFV_stack_4->SetBinContent(21,0.09293021);
   houtFV_stack_4->SetBinContent(22,0.04213005);
   houtFV_stack_4->SetBinContent(23,0.008670123);
   houtFV_stack_4->SetBinContent(24,0.1263901);
   houtFV_stack_4->SetBinContent(25,0.2540008);
   houtFV_stack_4->SetBinError(1,0.04387805);
   houtFV_stack_4->SetBinError(2,0.1175249);
   houtFV_stack_4->SetBinError(3,0.2181836);
   houtFV_stack_4->SetBinError(4,0.2103098);
   houtFV_stack_4->SetBinError(5,0.2091383);
   houtFV_stack_4->SetBinError(6,0.2299488);
   houtFV_stack_4->SetBinError(7,0.2438002);
   houtFV_stack_4->SetBinError(8,0.1841109);
   houtFV_stack_4->SetBinError(9,0.1709559);
   houtFV_stack_4->SetBinError(10,0.1905324);
   houtFV_stack_4->SetBinError(11,0.1818773);
   houtFV_stack_4->SetBinError(12,0.1806252);
   houtFV_stack_4->SetBinError(13,0.1207285);
   houtFV_stack_4->SetBinError(14,0.1304814);
   houtFV_stack_4->SetBinError(15,0.07536111);
   houtFV_stack_4->SetBinError(16,0.08602585);
   houtFV_stack_4->SetBinError(17,0.01734025);
   houtFV_stack_4->SetBinError(18,0.04685874);
   houtFV_stack_4->SetBinError(19,0.07531132);
   houtFV_stack_4->SetBinError(20,0.06020841);
   houtFV_stack_4->SetBinError(21,0.06020841);
   houtFV_stack_4->SetBinError(22,0.04213005);
   houtFV_stack_4->SetBinError(23,0.008670123);
   houtFV_stack_4->SetBinError(24,0.07297138);
   houtFV_stack_4->SetBinError(25,0.09617983);
   houtFV_stack_4->SetEntries(494);

   ci = 1455;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFV_stack_5->SetBinContent(1,0.1697408);
   hNCpi0inFV_stack_5->SetBinContent(2,1.212975);
   hNCpi0inFV_stack_5->SetBinContent(3,4.615366);
   hNCpi0inFV_stack_5->SetBinContent(4,9.466298);
   hNCpi0inFV_stack_5->SetBinContent(5,13.07568);
   hNCpi0inFV_stack_5->SetBinContent(6,13.46449);
   hNCpi0inFV_stack_5->SetBinContent(7,12.81889);
   hNCpi0inFV_stack_5->SetBinContent(8,9.826781);
   hNCpi0inFV_stack_5->SetBinContent(9,8.002857);
   hNCpi0inFV_stack_5->SetBinContent(10,6.798553);
   hNCpi0inFV_stack_5->SetBinContent(11,5.811127);
   hNCpi0inFV_stack_5->SetBinContent(12,4.620374);
   hNCpi0inFV_stack_5->SetBinContent(13,4.352695);
   hNCpi0inFV_stack_5->SetBinContent(14,3.284671);
   hNCpi0inFV_stack_5->SetBinContent(15,2.97987);
   hNCpi0inFV_stack_5->SetBinContent(16,1.844926);
   hNCpi0inFV_stack_5->SetBinContent(17,1.610706);
   hNCpi0inFV_stack_5->SetBinContent(18,1.698754);
   hNCpi0inFV_stack_5->SetBinContent(19,1.193194);
   hNCpi0inFV_stack_5->SetBinContent(20,1.064362);
   hNCpi0inFV_stack_5->SetBinContent(21,0.5513523);
   hNCpi0inFV_stack_5->SetBinContent(22,0.4733212);
   hNCpi0inFV_stack_5->SetBinContent(23,0.4658717);
   hNCpi0inFV_stack_5->SetBinContent(24,0.2713411);
   hNCpi0inFV_stack_5->SetBinContent(25,2.58458);
   hNCpi0inFV_stack_5->SetBinError(1,0.07550283);
   hNCpi0inFV_stack_5->SetBinError(2,0.2037875);
   hNCpi0inFV_stack_5->SetBinError(3,0.4085167);
   hNCpi0inFV_stack_5->SetBinError(4,0.5950966);
   hNCpi0inFV_stack_5->SetBinError(5,0.6907942);
   hNCpi0inFV_stack_5->SetBinError(6,0.6981987);
   hNCpi0inFV_stack_5->SetBinError(7,0.6849985);
   hNCpi0inFV_stack_5->SetBinError(8,0.601244);
   hNCpi0inFV_stack_5->SetBinError(9,0.5378606);
   hNCpi0inFV_stack_5->SetBinError(10,0.4978351);
   hNCpi0inFV_stack_5->SetBinError(11,0.4670479);
   hNCpi0inFV_stack_5->SetBinError(12,0.4137129);
   hNCpi0inFV_stack_5->SetBinError(13,0.3969385);
   hNCpi0inFV_stack_5->SetBinError(14,0.3465645);
   hNCpi0inFV_stack_5->SetBinError(15,0.330161);
   hNCpi0inFV_stack_5->SetBinError(16,0.2610622);
   hNCpi0inFV_stack_5->SetBinError(17,0.2371815);
   hNCpi0inFV_stack_5->SetBinError(18,0.2558837);
   hNCpi0inFV_stack_5->SetBinError(19,0.2101837);
   hNCpi0inFV_stack_5->SetBinError(20,0.2040846);
   hNCpi0inFV_stack_5->SetBinError(21,0.1373935);
   hNCpi0inFV_stack_5->SetBinError(22,0.134909);
   hNCpi0inFV_stack_5->SetBinError(23,0.1293297);
   hNCpi0inFV_stack_5->SetBinError(24,0.09695825);
   hNCpi0inFV_stack_5->SetBinError(25,0.3024605);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1456;
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
   hs3->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_6->SetBinContent(1,0.09542301);
   hCCpi0inFV_stack_6->SetBinContent(2,0.1697408);
   hCCpi0inFV_stack_6->SetBinContent(3,1.158766);
   hCCpi0inFV_stack_6->SetBinContent(4,2.832085);
   hCCpi0inFV_stack_6->SetBinContent(5,4.157117);
   hCCpi0inFV_stack_6->SetBinContent(6,3.928436);
   hCCpi0inFV_stack_6->SetBinContent(7,3.841842);
   hCCpi0inFV_stack_6->SetBinContent(8,2.864672);
   hCCpi0inFV_stack_6->SetBinContent(9,1.816832);
   hCCpi0inFV_stack_6->SetBinContent(10,2.128285);
   hCCpi0inFV_stack_6->SetBinContent(11,1.791984);
   hCCpi0inFV_stack_6->SetBinContent(12,1.475095);
   hCCpi0inFV_stack_6->SetBinContent(13,1.379054);
   hCCpi0inFV_stack_6->SetBinContent(14,1.175853);
   hCCpi0inFV_stack_6->SetBinContent(15,1.036041);
   hCCpi0inFV_stack_6->SetBinContent(16,0.5952967);
   hCCpi0inFV_stack_6->SetBinContent(17,0.6938621);
   hCCpi0inFV_stack_6->SetBinContent(18,0.3663544);
   hCCpi0inFV_stack_6->SetBinContent(19,0.6269423);
   hCCpi0inFV_stack_6->SetBinContent(20,0.187081);
   hCCpi0inFV_stack_6->SetBinContent(21,0.1524005);
   hCCpi0inFV_stack_6->SetBinContent(22,0.1610706);
   hCCpi0inFV_stack_6->SetBinContent(23,0.187081);
   hCCpi0inFV_stack_6->SetBinContent(24,0.4051808);
   hCCpi0inFV_stack_6->SetBinContent(25,1.326822);
   hCCpi0inFV_stack_6->SetBinError(1,0.06793438);
   hCCpi0inFV_stack_6->SetBinError(2,0.07550283);
   hCCpi0inFV_stack_6->SetBinError(3,0.2076308);
   hCCpi0inFV_stack_6->SetBinError(4,0.326617);
   hCCpi0inFV_stack_6->SetBinError(5,0.3986241);
   hCCpi0inFV_stack_6->SetBinError(6,0.3829216);
   hCCpi0inFV_stack_6->SetBinError(7,0.3832707);
   hCCpi0inFV_stack_6->SetBinError(8,0.3253541);
   hCCpi0inFV_stack_6->SetBinError(9,0.2535652);
   hCCpi0inFV_stack_6->SetBinError(10,0.2812023);
   hCCpi0inFV_stack_6->SetBinError(11,0.2520112);
   hCCpi0inFV_stack_6->SetBinError(12,0.2303327);
   hCCpi0inFV_stack_6->SetBinError(13,0.2267758);
   hCCpi0inFV_stack_6->SetBinError(14,0.2098257);
   hCCpi0inFV_stack_6->SetBinError(15,0.2065294);
   hCCpi0inFV_stack_6->SetBinError(16,0.1438286);
   hCCpi0inFV_stack_6->SetBinError(17,0.1604719);
   hCCpi0inFV_stack_6->SetBinError(18,0.1143084);
   hCCpi0inFV_stack_6->SetBinError(19,0.1495048);
   hCCpi0inFV_stack_6->SetBinError(20,0.07649196);
   hCCpi0inFV_stack_6->SetBinError(21,0.07450057);
   hCCpi0inFV_stack_6->SetBinError(22,0.07500338);
   hCCpi0inFV_stack_6->SetBinError(23,0.07649196);
   hCCpi0inFV_stack_6->SetBinError(24,0.1272791);
   hCCpi0inFV_stack_6->SetBinError(25,0.2150597);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1457;
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
   hs3->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_7->SetBinContent(1,0.1189406);
   hNCinFV_stack_7->SetBinContent(2,0.5414616);
   hNCinFV_stack_7->SetBinContent(3,0.7123991);
   hNCinFV_stack_7->SetBinContent(4,0.6702929);
   hNCinFV_stack_7->SetBinContent(5,0.8041326);
   hNCinFV_stack_7->SetBinContent(6,1.024674);
   hNCinFV_stack_7->SetBinContent(7,1.117604);
   hNCinFV_stack_7->SetBinContent(8,0.7359921);
   hNCinFV_stack_7->SetBinContent(9,0.4906614);
   hNCinFV_stack_7->SetBinContent(10,0.1276107);
   hNCinFV_stack_7->SetBinContent(11,0.3469311);
   hNCinFV_stack_7->SetBinContent(12,0.4993316);
   hNCinFV_stack_7->SetBinContent(13,0.2540008);
   hNCinFV_stack_7->SetBinContent(14,0.3543806);
   hNCinFV_stack_7->SetBinContent(15,0.2886813);
   hNCinFV_stack_7->SetBinContent(16,0.2205409);
   hNCinFV_stack_7->SetBinContent(17,0.2527803);
   hNCinFV_stack_7->SetBinContent(18,0.1524005);
   hNCinFV_stack_7->SetBinContent(19,0.1350603);
   hNCinFV_stack_7->SetBinContent(20,0.1263901);
   hNCinFV_stack_7->SetBinContent(21,0.08426009);
   hNCinFV_stack_7->SetBinContent(22,0.008670123);
   hNCinFV_stack_7->SetBinContent(23,0.008670123);
   hNCinFV_stack_7->SetBinContent(24,0.08426009);
   hNCinFV_stack_7->SetBinContent(25,0.2130914);
   hNCinFV_stack_7->SetBinError(1,0.06205293);
   hNCinFV_stack_7->SetBinError(2,0.1421298);
   hNCinFV_stack_7->SetBinError(3,0.1609441);
   hNCinFV_stack_7->SetBinError(4,0.1507566);
   hNCinFV_stack_7->SetBinError(5,0.1718331);
   hNCinFV_stack_7->SetBinError(6,0.1925549);
   hNCinFV_stack_7->SetBinError(7,0.2017485);
   hNCinFV_stack_7->SetBinError(8,0.1659101);
   hNCinFV_stack_7->SetBinError(9,0.135465);
   hNCinFV_stack_7->SetBinError(10,0.0626557);
   hNCinFV_stack_7->SetBinError(11,0.1134708);
   hNCinFV_stack_7->SetBinError(12,0.1357422);
   hNCinFV_stack_7->SetBinError(13,0.09617983);
   hNCinFV_stack_7->SetBinError(14,0.1197909);
   hNCinFV_stack_7->SetBinError(15,0.09773046);
   hNCinFV_stack_7->SetBinError(16,0.08689528);
   hNCinFV_stack_7->SetBinError(17,0.1031971);
   hNCinFV_stack_7->SetBinError(18,0.07450057);
   hNCinFV_stack_7->SetBinError(19,0.07348465);
   hNCinFV_stack_7->SetBinError(20,0.07297138);
   hNCinFV_stack_7->SetBinError(21,0.05958088);
   hNCinFV_stack_7->SetBinError(22,0.008670123);
   hNCinFV_stack_7->SetBinError(23,0.008670123);
   hNCinFV_stack_7->SetBinError(24,0.05958088);
   hNCinFV_stack_7->SetBinError(25,0.07795212);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1458;
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
   hs3->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_8->SetBinContent(1,0.2180891);
   hnumuCCinFV_stack_8->SetBinContent(2,0.4009257);
   hnumuCCinFV_stack_8->SetBinContent(3,1.017523);
   hnumuCCinFV_stack_8->SetBinContent(4,2.341737);
   hnumuCCinFV_stack_8->SetBinContent(5,1.789382);
   hnumuCCinFV_stack_8->SetBinContent(6,2.231789);
   hnumuCCinFV_stack_8->SetBinContent(7,2.382021);
   hnumuCCinFV_stack_8->SetBinContent(8,1.501487);
   hnumuCCinFV_stack_8->SetBinContent(9,1.744305);
   hnumuCCinFV_stack_8->SetBinContent(10,0.999391);
   hnumuCCinFV_stack_8->SetBinContent(11,0.9902288);
   hnumuCCinFV_stack_8->SetBinContent(12,0.8837223);
   hnumuCCinFV_stack_8->SetBinContent(13,0.6833663);
   hnumuCCinFV_stack_8->SetBinContent(14,0.3150979);
   hnumuCCinFV_stack_8->SetBinContent(15,0.255089);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2319767);
   hnumuCCinFV_stack_8->SetBinContent(17,0.3963069);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1062849);
   hnumuCCinFV_stack_8->SetBinContent(19,0.160814);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1116927);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1016594);
   hnumuCCinFV_stack_8->SetBinContent(23,0.01898678);
   hnumuCCinFV_stack_8->SetBinContent(24,0.05239403);
   hnumuCCinFV_stack_8->SetBinContent(25,0.4872711);
   hnumuCCinFV_stack_8->SetBinError(1,0.154958);
   hnumuCCinFV_stack_8->SetBinError(2,0.1230205);
   hnumuCCinFV_stack_8->SetBinError(3,0.1976501);
   hnumuCCinFV_stack_8->SetBinError(4,0.5269476);
   hnumuCCinFV_stack_8->SetBinError(5,0.3159668);
   hnumuCCinFV_stack_8->SetBinError(6,0.3089337);
   hnumuCCinFV_stack_8->SetBinError(7,0.4633737);
   hnumuCCinFV_stack_8->SetBinError(8,0.2611791);
   hnumuCCinFV_stack_8->SetBinError(9,0.2912855);
   hnumuCCinFV_stack_8->SetBinError(10,0.2143345);
   hnumuCCinFV_stack_8->SetBinError(11,0.202436);
   hnumuCCinFV_stack_8->SetBinError(12,0.2003174);
   hnumuCCinFV_stack_8->SetBinError(13,0.1846047);
   hnumuCCinFV_stack_8->SetBinError(14,0.1089286);
   hnumuCCinFV_stack_8->SetBinError(15,0.1031645);
   hnumuCCinFV_stack_8->SetBinError(16,0.09154049);
   hnumuCCinFV_stack_8->SetBinError(17,0.1273571);
   hnumuCCinFV_stack_8->SetBinError(18,0.06646081);
   hnumuCCinFV_stack_8->SetBinError(19,0.07864208);
   hnumuCCinFV_stack_8->SetBinError(20,0.06572268);
   hnumuCCinFV_stack_8->SetBinError(22,0.06083791);
   hnumuCCinFV_stack_8->SetBinError(23,0.01347607);
   hnumuCCinFV_stack_8->SetBinError(24,0.04336231);
   hnumuCCinFV_stack_8->SetBinError(25,0.1394684);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1459;
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
   hs3->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_9->SetBinContent(2,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(4,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(5,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(6,0.01734025);
   hnueCCinFV_stack_9->SetBinContent(7,0.02726332);
   hnueCCinFV_stack_9->SetBinContent(8,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(9,0.1172955);
   hnueCCinFV_stack_9->SetBinContent(11,0.05080017);
   hnueCCinFV_stack_9->SetBinContent(15,9.375129e-06);
   hnueCCinFV_stack_9->SetBinContent(16,0.05080017);
   hnueCCinFV_stack_9->SetBinContent(17,0.06272107);
   hnueCCinFV_stack_9->SetBinContent(18,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(25,0.3351616);
   hnueCCinFV_stack_9->SetBinError(2,0.04213005);
   hnueCCinFV_stack_9->SetBinError(4,0.04213005);
   hnueCCinFV_stack_9->SetBinError(5,0.008670123);
   hnueCCinFV_stack_9->SetBinError(6,0.01226141);
   hnueCCinFV_stack_9->SetBinError(7,0.0157737);
   hnueCCinFV_stack_9->SetBinError(8,0.008670123);
   hnueCCinFV_stack_9->SetBinError(9,0.06812649);
   hnueCCinFV_stack_9->SetBinError(11,0.04301293);
   hnueCCinFV_stack_9->SetBinError(15,9.375128e-06);
   hnueCCinFV_stack_9->SetBinError(16,0.04301293);
   hnueCCinFV_stack_9->SetBinError(17,0.0547419);
   hnueCCinFV_stack_9->SetBinError(18,0.04213005);
   hnueCCinFV_stack_9->SetBinError(25,0.110013);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1460;
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
   hs3->Add(hnueCCinFV_stack_9,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmcerror__8->SetBinContent(1,0.8137034);
   hmcerror__8->SetBinContent(2,3.193153);
   hmcerror__8->SetBinContent(3,10.87542);
   hmcerror__8->SetBinContent(4,17.74937);
   hmcerror__8->SetBinContent(5,23.51218);
   hmcerror__8->SetBinContent(6,24.87363);
   hmcerror__8->SetBinContent(7,23.87918);
   hmcerror__8->SetBinContent(8,17.72932);
   hmcerror__8->SetBinContent(9,13.81083);
   hmcerror__8->SetBinContent(10,11.70249);
   hmcerror__8->SetBinContent(11,10.47217);
   hmcerror__8->SetBinContent(12,8.788167);
   hmcerror__8->SetBinContent(13,7.243917);
   hmcerror__8->SetBinContent(14,6.040909);
   hmcerror__8->SetBinContent(15,4.877708);
   hmcerror__8->SetBinContent(16,3.282094);
   hmcerror__8->SetBinContent(17,3.203097);
   hmcerror__8->SetBinContent(18,2.479378);
   hmcerror__8->SetBinContent(19,2.476825);
   hmcerror__8->SetBinContent(20,1.599143);
   hmcerror__8->SetBinContent(21,1.160318);
   hmcerror__8->SetBinContent(22,0.7951949);
   hmcerror__8->SetBinContent(23,0.7484233);
   hmcerror__8->SetBinContent(24,0.9395661);
   hmcerror__8->SetBinContent(25,5.50989);
   hmcerror__8->SetBinError(1,0.7929564);
   hmcerror__8->SetBinError(2,1.514188);
   hmcerror__8->SetBinError(3,3.706782);
   hmcerror__8->SetBinError(4,4.392571);
   hmcerror__8->SetBinError(5,5.83999);
   hmcerror__8->SetBinError(6,6.471234);
   hmcerror__8->SetBinError(7,6.960928);
   hmcerror__8->SetBinError(8,5.849358);
   hmcerror__8->SetBinError(9,4.232383);
   hmcerror__8->SetBinError(10,3.753482);
   hmcerror__8->SetBinError(11,3.227764);
   hmcerror__8->SetBinError(12,3.954492);
   hmcerror__8->SetBinError(13,2.499125);
   hmcerror__8->SetBinError(14,2.37045);
   hmcerror__8->SetBinError(15,2.046301);
   hmcerror__8->SetBinError(16,1.638544);
   hmcerror__8->SetBinError(17,1.867715);
   hmcerror__8->SetBinError(18,1.867109);
   hmcerror__8->SetBinError(19,1.563421);
   hmcerror__8->SetBinError(20,0.9015776);
   hmcerror__8->SetBinError(21,0.7257933);
   hmcerror__8->SetBinError(22,0.7594784);
   hmcerror__8->SetBinError(23,0.6444628);
   hmcerror__8->SetBinError(24,1.218546);
   hmcerror__8->SetBinError(25,1.862938);
   hmcerror__8->SetEntries(204.2995);

   ci = TColor::GetColor("#666666");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
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
   Double_t _fy3009[24] = {
   1,
   2,
   12,
   23,
   23,
   30,
   17,
   22,
   18,
   16,
   11,
   9,
   2,
   1,
   4,
   5,
   0,
   4,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _felx3009[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3009[24] = {
   1,
   2,
   3.64022,
   4.9457,
   4.9457,
   5.6197,
   4.2835,
   4.8417,
   4.4008,
   4.1628,
   3.4975,
   3.19354,
   2,
   1,
   2.29683,
   2.48995,
   0,
   2.29683,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _fehx3009[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3009[24] = {
   1.35971,
   1.51917,
   3.4155,
   4.7346,
   4.7346,
   5.4117,
   4.0673,
   4.6299,
   4.1858,
   3.9454,
   3.27,
   2.9582,
   1.51917,
   1.35971,
   1.98186,
   2.21064,
   1.1478,
   1.98186,
   1.51917,
   1.1478,
   1.35971,
   1.1478,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,660);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(38.95287);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.01#pm0.07(data err)#pm0.23(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 3.623e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.07/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 204.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3.9","F");

   ci = 1452;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.7","F");

   ci = 1453;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

   ci = 1454;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 13.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  109.7","F");

   ci = 1456;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 33.2","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 9.2","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 18.9","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.5","F");

   ci = 1460;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
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
   Double_t _fy3010[24] = {
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
   Double_t _felx3010[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3010[24] = {
   0.974503,
   0.4741984,
   0.3408403,
   0.2474776,
   0.2483815,
   0.2601645,
   0.2915062,
   0.3299256,
   0.306454,
   0.3207421,
   0.3082231,
   0.4499791,
   0.3449963,
   0.3923995,
   0.4195209,
   0.4992374,
   0.5830966,
   0.7530552,
   0.6312199,
   0.5637878,
   0.6255122,
   0.9550847,
   0.8610939,
   1.296924};
   Double_t _fehx3010[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3010[24] = {
   0.974503,
   0.4741984,
   0.3408403,
   0.2474776,
   0.2483815,
   0.2601645,
   0.2915062,
   0.3299256,
   0.306454,
   0.3207421,
   0.3082231,
   0.4499791,
   0.3449963,
   0.3923995,
   0.4195209,
   0.4992374,
   0.5830966,
   0.7530552,
   0.6312199,
   0.5637878,
   0.6255122,
   0.9550847,
   0.8610939,
   1.296924};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,660);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
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
   Double_t _fy3011[24] = {
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
   Double_t _felx3011[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3011[24] = {
   0.3905608,
   0.2256568,
   0.1804029,
   0.2051981,
   0.21126,
   0.1996623,
   0.221213,
   0.2238901,
   0.2474634,
   0.2450376,
   0.2321832,
   0.2208085,
   0.2357175,
   0.2327863,
   0.2464915,
   0.2345501,
   0.2924706,
   0.2896073,
   0.2944501,
   0.2980662,
   0.3093698,
   0.3432415,
   0.3874417,
   0.3666834};
   Double_t _fehx3011[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3011[24] = {
   0.3905608,
   0.2256568,
   0.1804029,
   0.2051981,
   0.21126,
   0.1996623,
   0.221213,
   0.2238901,
   0.2474634,
   0.2450376,
   0.2321832,
   0.2208085,
   0.2357175,
   0.2327863,
   0.2464915,
   0.2345501,
   0.2924706,
   0.2896073,
   0.2944501,
   0.2980662,
   0.3093698,
   0.3432415,
   0.3874417,
   0.3666834};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,660);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
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
   Double_t _fy3012[24] = {
   1.228949,
   0.6263402,
   1.103405,
   1.295821,
   0.9782163,
   1.206097,
   0.7119173,
   1.240882,
   1.303325,
   1.36723,
   1.050403,
   1.024104,
   0.2760937,
   0.165538,
   0.8200572,
   1.523418,
   0,
   1.613308,
   0.8074853,
   0,
   0.8618323,
   0,
   0,
   1.064321};
   Double_t _felx3012[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3012[24] = {
   1.228949,
   0.6263402,
   0.3347199,
   0.2786409,
   0.2103463,
   0.2259301,
   0.1793822,
   0.27309,
   0.3186486,
   0.3557191,
   0.3339805,
   0.3633909,
   0.2760937,
   0.165538,
   0.470883,
   0.7586468,
   0,
   0.9263735,
   0.8074853,
   0,
   0.8618323,
   0,
   0,
   1.064321};
   Double_t _fehx3012[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3012[24] = {
   1.671014,
   0.4757586,
   0.3140568,
   0.2667475,
   0.201368,
   0.2175678,
   0.1703283,
   0.2611437,
   0.3030811,
   0.3371418,
   0.3122563,
   0.3366117,
   0.2097166,
   0.2250837,
   0.4063096,
   0.6735457,
   0.3583407,
   0.7993376,
   0.6133537,
   0.7177593,
   1.171842,
   1.44342,
   1.533624,
   1.447168};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,660);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(3.18996);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT2_Np_bnb_10_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
