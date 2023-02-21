#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 15:23:25 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-25.52378,451.2821,2822.393);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__4->SetBinContent(1,934.6459);
   hmc__4->SetBinContent(2,1276.189);
   hmc__4->SetBinContent(3,1140.926);
   hmc__4->SetBinContent(4,849.1212);
   hmc__4->SetBinContent(5,593.2037);
   hmc__4->SetBinContent(6,358.6157);
   hmc__4->SetBinContent(7,227.7119);
   hmc__4->SetBinContent(8,154.2636);
   hmc__4->SetBinContent(9,95.36301);
   hmc__4->SetBinContent(10,52.75588);
   hmc__4->SetBinContent(11,39.18256);
   hmc__4->SetBinContent(12,25.39738);
   hmc__4->SetBinContent(13,15.17881);
   hmc__4->SetBinContent(14,7.586225);
   hmc__4->SetBinContent(15,6.840307);
   hmc__4->SetBinContent(16,3.86932);
   hmc__4->SetBinContent(17,7.904364);
   hmc__4->SetBinError(1,206.9204);
   hmc__4->SetBinError(2,293.4234);
   hmc__4->SetBinError(3,276.7914);
   hmc__4->SetBinError(4,226.5164);
   hmc__4->SetBinError(5,171.3709);
   hmc__4->SetBinError(6,114.9163);
   hmc__4->SetBinError(7,76.9078);
   hmc__4->SetBinError(8,55.6841);
   hmc__4->SetBinError(9,37.22531);
   hmc__4->SetBinError(10,21.88199);
   hmc__4->SetBinError(11,18.58445);
   hmc__4->SetBinError(12,13.16385);
   hmc__4->SetBinError(13,8.360536);
   hmc__4->SetBinError(14,7.830896);
   hmc__4->SetBinError(15,6.424793);
   hmc__4->SetBinError(16,4.274727);
   hmc__4->SetBinError(17,7.115564);
   hmc__4->SetMinimum(-25.52378);
   hmc__4->SetMaximum(2679.997);
   hmc__4->SetEntries(5727.925);
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
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(1339.999);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,20.22875);
   hbadmatch_stack_1->SetBinContent(2,28.43877);
   hbadmatch_stack_1->SetBinContent(3,29.0936);
   hbadmatch_stack_1->SetBinContent(4,21.74189);
   hbadmatch_stack_1->SetBinContent(5,9.336336);
   hbadmatch_stack_1->SetBinContent(6,6.885091);
   hbadmatch_stack_1->SetBinContent(7,3.034178);
   hbadmatch_stack_1->SetBinContent(8,1.704715);
   hbadmatch_stack_1->SetBinContent(9,1.072095);
   hbadmatch_stack_1->SetBinContent(10,1.072095);
   hbadmatch_stack_1->SetBinContent(11,0.536893);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,2.329054);
   hbadmatch_stack_1->SetBinError(2,3.243423);
   hbadmatch_stack_1->SetBinError(3,3.415717);
   hbadmatch_stack_1->SetBinError(4,2.617131);
   hbadmatch_stack_1->SetBinError(5,1.555044);
   hbadmatch_stack_1->SetBinError(6,2.080225);
   hbadmatch_stack_1->SetBinError(7,0.8325598);
   hbadmatch_stack_1->SetBinError(8,0.665416);
   hbadmatch_stack_1->SetBinError(9,0.5551335);
   hbadmatch_stack_1->SetBinError(10,0.5551335);
   hbadmatch_stack_1->SetBinError(11,0.3929602);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,110.3479);
   hext_stack_2->SetBinContent(2,136.3234);
   hext_stack_2->SetBinContent(3,97.89632);
   hext_stack_2->SetBinContent(4,50.11026);
   hext_stack_2->SetBinContent(5,37.43678);
   hext_stack_2->SetBinContent(6,12.53226);
   hext_stack_2->SetBinContent(7,10.66367);
   hext_stack_2->SetBinContent(8,6.407382);
   hext_stack_2->SetBinContent(9,2.110787);
   hext_stack_2->SetBinContent(10,0.8131978);
   hext_stack_2->SetBinContent(11,1.055394);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,7.307188);
   hext_stack_2->SetBinError(2,7.934781);
   hext_stack_2->SetBinError(3,6.66821);
   hext_stack_2->SetBinError(4,4.868109);
   hext_stack_2->SetBinError(5,4.193846);
   hext_stack_2->SetBinError(6,2.420289);
   hext_stack_2->SetBinError(7,2.269662);
   hext_stack_2->SetBinError(8,1.5862);
   hext_stack_2->SetBinError(9,0.8669371);
   hext_stack_2->SetBinError(10,0.5750177);
   hext_stack_2->SetBinError(11,0.6130171);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,10.49979);
   hdirt_stack_3->SetBinContent(2,16.37757);
   hdirt_stack_3->SetBinContent(3,11.89112);
   hdirt_stack_3->SetBinContent(4,5.01409);
   hdirt_stack_3->SetBinContent(5,3.861744);
   hdirt_stack_3->SetBinContent(6,1.06327);
   hdirt_stack_3->SetBinContent(7,0.5570828);
   hdirt_stack_3->SetBinError(1,1.636553);
   hdirt_stack_3->SetBinError(2,2.063711);
   hdirt_stack_3->SetBinError(3,2.001431);
   hdirt_stack_3->SetBinError(4,1.231476);
   hdirt_stack_3->SetBinError(5,1.36765);
   hdirt_stack_3->SetBinError(6,0.5349963);
   hdirt_stack_3->SetBinError(7,0.4028472);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,80.51234);
   houtFV_stack_4->SetBinContent(2,103.9407);
   houtFV_stack_4->SetBinContent(3,85.12225);
   houtFV_stack_4->SetBinContent(4,57.70012);
   houtFV_stack_4->SetBinContent(5,31.63803);
   houtFV_stack_4->SetBinContent(6,12.89524);
   houtFV_stack_4->SetBinContent(7,11.4802);
   houtFV_stack_4->SetBinContent(8,6.160255);
   houtFV_stack_4->SetBinContent(9,2.931052);
   houtFV_stack_4->SetBinContent(10,2.789281);
   houtFV_stack_4->SetBinContent(11,0.9286332);
   houtFV_stack_4->SetBinContent(12,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinError(1,4.515294);
   houtFV_stack_4->SetBinError(2,5.047508);
   houtFV_stack_4->SetBinError(3,4.660555);
   houtFV_stack_4->SetBinError(4,3.780431);
   houtFV_stack_4->SetBinError(5,2.801318);
   houtFV_stack_4->SetBinError(6,1.781827);
   houtFV_stack_4->SetBinError(7,1.73541);
   houtFV_stack_4->SetBinError(8,1.225694);
   houtFV_stack_4->SetBinError(9,0.8781425);
   houtFV_stack_4->SetBinError(10,0.8335302);
   houtFV_stack_4->SetBinError(11,0.48078);
   houtFV_stack_4->SetBinError(12,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,15.38045);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,15.67055);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,15.43408);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.44701);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.58428);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.682662);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.451982);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.84972);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.262988);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6410357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6833858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.3511);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.222102);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.300084);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.044677);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.097282);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9132449);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7747449);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6653787);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6380565);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1771895);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2420254);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.579762);
   hNCpi0inFVqe_stack_6->SetBinContent(2,6.34595);
   hNCpi0inFVqe_stack_6->SetBinContent(3,6.092681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,4.644706);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.868476);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4865905);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.8425692);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7524015);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7102245);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4212073);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,344.5734);
   hNCpi0inFVres_stack_7->SetBinContent(2,564.4996);
   hNCpi0inFVres_stack_7->SetBinContent(3,516.4312);
   hNCpi0inFVres_stack_7->SetBinContent(4,389.7441);
   hNCpi0inFVres_stack_7->SetBinContent(5,258.6811);
   hNCpi0inFVres_stack_7->SetBinContent(6,161.0947);
   hNCpi0inFVres_stack_7->SetBinContent(7,93.71098);
   hNCpi0inFVres_stack_7->SetBinContent(8,60.15298);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.3442);
   hNCpi0inFVres_stack_7->SetBinContent(10,18.5994);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.86685);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.695784);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.429556);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.218726);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.813844);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5437177);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8220537);
   hNCpi0inFVres_stack_7->SetBinError(1,6.033239);
   hNCpi0inFVres_stack_7->SetBinError(2,7.789068);
   hNCpi0inFVres_stack_7->SetBinError(3,7.434976);
   hNCpi0inFVres_stack_7->SetBinError(4,6.462793);
   hNCpi0inFVres_stack_7->SetBinError(5,5.311042);
   hNCpi0inFVres_stack_7->SetBinError(6,4.189217);
   hNCpi0inFVres_stack_7->SetBinError(7,3.134973);
   hNCpi0inFVres_stack_7->SetBinError(8,2.550012);
   hNCpi0inFVres_stack_7->SetBinError(9,1.905808);
   hNCpi0inFVres_stack_7->SetBinError(10,1.370335);
   hNCpi0inFVres_stack_7->SetBinError(11,1.168373);
   hNCpi0inFVres_stack_7->SetBinError(12,0.942021);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6265144);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5149596);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5105319);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1480721);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2078513);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,61.48917);
   hNCpi0inFVdis_stack_8->SetBinContent(2,98.47326);
   hNCpi0inFVdis_stack_8->SetBinContent(3,90.82265);
   hNCpi0inFVdis_stack_8->SetBinContent(4,73.04913);
   hNCpi0inFVdis_stack_8->SetBinContent(5,51.94571);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.5487);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.19809);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.42029);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.481392);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.815346);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.59862);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.953008);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.157854);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.463594);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7538042);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8502901);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.004904);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.526629);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.206415);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.065886);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.782155);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.392301);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.780777);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.371872);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.284649);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.040072);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7725648);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6600933);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4461132);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.32337);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4157824);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3453893);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3309054);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3553864);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.5717859);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.6699361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.2355051);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2901718);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,85.65387);
   hCCpi0inFV_stack_10->SetBinContent(2,141.7258);
   hCCpi0inFV_stack_10->SetBinContent(3,149.827);
   hCCpi0inFV_stack_10->SetBinContent(4,122.7869);
   hCCpi0inFV_stack_10->SetBinContent(5,98.51246);
   hCCpi0inFV_stack_10->SetBinContent(6,63.52509);
   hCCpi0inFV_stack_10->SetBinContent(7,35.69978);
   hCCpi0inFV_stack_10->SetBinContent(8,28.27946);
   hCCpi0inFV_stack_10->SetBinContent(9,17.19735);
   hCCpi0inFV_stack_10->SetBinContent(10,10.57168);
   hCCpi0inFV_stack_10->SetBinContent(11,7.927312);
   hCCpi0inFV_stack_10->SetBinContent(12,4.111345);
   hCCpi0inFV_stack_10->SetBinContent(13,3.997967);
   hCCpi0inFV_stack_10->SetBinContent(14,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(15,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(17,2.535931);
   hCCpi0inFV_stack_10->SetBinError(1,4.652086);
   hCCpi0inFV_stack_10->SetBinError(2,5.991372);
   hCCpi0inFV_stack_10->SetBinError(3,6.067553);
   hCCpi0inFV_stack_10->SetBinError(4,5.621648);
   hCCpi0inFV_stack_10->SetBinError(5,4.941574);
   hCCpi0inFV_stack_10->SetBinError(6,3.971578);
   hCCpi0inFV_stack_10->SetBinError(7,2.988335);
   hCCpi0inFV_stack_10->SetBinError(8,2.70281);
   hCCpi0inFV_stack_10->SetBinError(9,2.08633);
   hCCpi0inFV_stack_10->SetBinError(10,1.620812);
   hCCpi0inFV_stack_10->SetBinError(11,1.35988);
   hCCpi0inFV_stack_10->SetBinError(12,1.001657);
   hCCpi0inFV_stack_10->SetBinError(13,0.9692124);
   hCCpi0inFV_stack_10->SetBinError(14,0.650338);
   hCCpi0inFV_stack_10->SetBinError(15,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(16,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(17,0.8325131);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,79.33766);
   hNCinFV_stack_11->SetBinContent(2,63.22543);
   hNCinFV_stack_11->SetBinContent(3,64.91412);
   hNCinFV_stack_11->SetBinContent(4,54.66595);
   hNCinFV_stack_11->SetBinContent(5,48.33312);
   hNCinFV_stack_11->SetBinContent(6,36.35798);
   hNCinFV_stack_11->SetBinContent(7,26.82217);
   hNCinFV_stack_11->SetBinContent(8,19.68003);
   hNCinFV_stack_11->SetBinContent(9,13.47497);
   hNCinFV_stack_11->SetBinContent(10,7.625781);
   hNCinFV_stack_11->SetBinContent(11,8.506232);
   hNCinFV_stack_11->SetBinContent(12,5.823458);
   hNCinFV_stack_11->SetBinContent(13,3.411311);
   hNCinFV_stack_11->SetBinContent(14,1.515398);
   hNCinFV_stack_11->SetBinContent(15,2.094319);
   hNCinFV_stack_11->SetBinContent(16,0.785171);
   hNCinFV_stack_11->SetBinContent(17,2.055672);
   hNCinFV_stack_11->SetBinError(1,4.560825);
   hNCinFV_stack_11->SetBinError(2,3.978552);
   hNCinFV_stack_11->SetBinError(3,4.00813);
   hNCinFV_stack_11->SetBinError(4,3.702411);
   hNCinFV_stack_11->SetBinError(5,3.432128);
   hNCinFV_stack_11->SetBinError(6,2.958838);
   hNCinFV_stack_11->SetBinError(7,2.603713);
   hNCinFV_stack_11->SetBinError(8,2.254812);
   hNCinFV_stack_11->SetBinError(9,1.903547);
   hNCinFV_stack_11->SetBinError(10,1.374006);
   hNCinFV_stack_11->SetBinError(11,1.469474);
   hNCinFV_stack_11->SetBinError(12,1.178104);
   hNCinFV_stack_11->SetBinError(13,0.9810986);
   hNCinFV_stack_11->SetBinError(14,0.588146);
   hNCinFV_stack_11->SetBinError(15,0.809937);
   hNCinFV_stack_11->SetBinError(16,0.3925882);
   hNCinFV_stack_11->SetBinError(17,0.7082781);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,111.2706);
   hnumuCCinFV_stack_12->SetBinContent(2,93.91292);
   hnumuCCinFV_stack_12->SetBinContent(3,66.74588);
   hnumuCCinFV_stack_12->SetBinContent(4,53.01692);
   hnumuCCinFV_stack_12->SetBinContent(5,37.7718);
   hnumuCCinFV_stack_12->SetBinContent(6,22.38601);
   hnumuCCinFV_stack_12->SetBinContent(7,19.37048);
   hnumuCCinFV_stack_12->SetBinContent(8,11.43283);
   hnumuCCinFV_stack_12->SetBinContent(9,9.668118);
   hnumuCCinFV_stack_12->SetBinContent(10,3.96112);
   hnumuCCinFV_stack_12->SetBinContent(11,4.05133);
   hnumuCCinFV_stack_12->SetBinContent(12,2.384883);
   hnumuCCinFV_stack_12->SetBinContent(13,1.52047);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(16,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(17,0.5884556);
   hnumuCCinFV_stack_12->SetBinError(1,6.450702);
   hnumuCCinFV_stack_12->SetBinError(2,6.058397);
   hnumuCCinFV_stack_12->SetBinError(3,4.694987);
   hnumuCCinFV_stack_12->SetBinError(4,4.076616);
   hnumuCCinFV_stack_12->SetBinError(5,3.513826);
   hnumuCCinFV_stack_12->SetBinError(6,2.536957);
   hnumuCCinFV_stack_12->SetBinError(7,2.305732);
   hnumuCCinFV_stack_12->SetBinError(8,1.7249);
   hnumuCCinFV_stack_12->SetBinError(9,1.590176);
   hnumuCCinFV_stack_12->SetBinError(10,0.9610635);
   hnumuCCinFV_stack_12->SetBinError(11,1.01931);
   hnumuCCinFV_stack_12->SetBinError(12,0.6889809);
   hnumuCCinFV_stack_12->SetBinError(13,0.5898325);
   hnumuCCinFV_stack_12->SetBinError(14,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(15,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(16,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(17,0.3397478);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,12.71645);
   hnueCCinFV_stack_13->SetBinContent(2,6.683441);
   hnueCCinFV_stack_13->SetBinContent(3,5.985602);
   hnueCCinFV_stack_13->SetBinContent(4,4.893004);
   hnueCCinFV_stack_13->SetBinContent(5,3.178116);
   hnueCCinFV_stack_13->SetBinContent(6,1.598307);
   hnueCCinFV_stack_13->SetBinContent(7,1.123658);
   hnueCCinFV_stack_13->SetBinContent(8,0.785171);
   hnueCCinFV_stack_13->SetBinContent(9,1.568795);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(12,1.279433);
   hnueCCinFV_stack_13->SetBinContent(13,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.559122);
   hnueCCinFV_stack_13->SetBinError(2,1.403337);
   hnueCCinFV_stack_13->SetBinError(3,1.362473);
   hnueCCinFV_stack_13->SetBinError(4,1.576195);
   hnueCCinFV_stack_13->SetBinError(5,0.9996749);
   hnueCCinFV_stack_13->SetBinError(6,0.6695056);
   hnueCCinFV_stack_13->SetBinError(7,0.5188295);
   hnueCCinFV_stack_13->SetBinError(8,0.3925882);
   hnueCCinFV_stack_13->SetBinError(9,1.131016);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(12,0.6886788);
   hnueCCinFV_stack_13->SetBinError(13,0.5197486);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__5->SetBinContent(1,934.6459);
   hmcerror__5->SetBinContent(2,1276.189);
   hmcerror__5->SetBinContent(3,1140.926);
   hmcerror__5->SetBinContent(4,849.1212);
   hmcerror__5->SetBinContent(5,593.2037);
   hmcerror__5->SetBinContent(6,358.6157);
   hmcerror__5->SetBinContent(7,227.7119);
   hmcerror__5->SetBinContent(8,154.2636);
   hmcerror__5->SetBinContent(9,95.36301);
   hmcerror__5->SetBinContent(10,52.75588);
   hmcerror__5->SetBinContent(11,39.18256);
   hmcerror__5->SetBinContent(12,25.39738);
   hmcerror__5->SetBinContent(13,15.17881);
   hmcerror__5->SetBinContent(14,7.586225);
   hmcerror__5->SetBinContent(15,6.840307);
   hmcerror__5->SetBinContent(16,3.86932);
   hmcerror__5->SetBinContent(17,7.904364);
   hmcerror__5->SetBinError(1,206.9204);
   hmcerror__5->SetBinError(2,293.4234);
   hmcerror__5->SetBinError(3,276.7914);
   hmcerror__5->SetBinError(4,226.5164);
   hmcerror__5->SetBinError(5,171.3709);
   hmcerror__5->SetBinError(6,114.9163);
   hmcerror__5->SetBinError(7,76.9078);
   hmcerror__5->SetBinError(8,55.6841);
   hmcerror__5->SetBinError(9,37.22531);
   hmcerror__5->SetBinError(10,21.88199);
   hmcerror__5->SetBinError(11,18.58445);
   hmcerror__5->SetBinError(12,13.16385);
   hmcerror__5->SetBinError(13,8.360536);
   hmcerror__5->SetBinError(14,7.830896);
   hmcerror__5->SetBinError(15,6.424793);
   hmcerror__5->SetBinError(16,4.274727);
   hmcerror__5->SetBinError(17,7.115564);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
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
   829,
   1176,
   987,
   740,
   497,
   287,
   177,
   94,
   61,
   40,
   23,
   26,
   14,
   9,
   3,
   3};
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
   28.79236,
   34.29286,
   31.41656,
   27.20294,
   22.2935,
   16.94107,
   13.30413,
   9.8173,
   7.9383,
   6.4604,
   4.9457,
   5.2453,
   3.9102,
   3.19354,
   2.143368,
   2.143368};
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
   28.79236,
   34.29286,
   31.41656,
   27.20294,
   22.2935,
   16.94107,
   13.30413,
   9.616,
   7.7354,
   6.2549,
   4.7346,
   5.0358,
   3.6898,
   2.9582,
   1.72422,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0.7709688);
   Graph_Graph3005->SetMaximum(1331.236);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4966.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 123.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.3","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2469.4","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  467.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 773.4","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 436.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 438.8","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all");
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
   0.2213891,
   0.2299215,
   0.2426024,
   0.2667657,
   0.2888904,
   0.3204441,
   0.3377416,
   0.3609672,
   0.3903538,
   0.4147783,
   0.4743043,
   0.5183153,
   0.5508031,
   1.032252,
   0.939255,
   1.104775};
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
   0.2213891,
   0.2299215,
   0.2426024,
   0.2667657,
   0.2888904,
   0.3204441,
   0.3377416,
   0.3609672,
   0.3903538,
   0.4147783,
   0.4743043,
   0.5183153,
   0.5508031,
   1.032252,
   0.939255,
   1.104775};
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
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   0.2047223,
   0.2253763,
   0.2381464,
   0.2622677,
   0.2803042,
   0.3048932,
   0.3124234,
   0.3345539,
   0.3306831,
   0.3143798,
   0.2780868,
   0.2737201,
   0.3087993,
   0.3493631,
   0.3264716,
   0.3605524};
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
   0.2047223,
   0.2253763,
   0.2381464,
   0.2622677,
   0.2803042,
   0.3048932,
   0.3124234,
   0.3345539,
   0.3306831,
   0.3143798,
   0.2780868,
   0.2737201,
   0.3087993,
   0.3493631,
   0.3264716,
   0.3605524};
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
   0.8869669,
   0.9214935,
   0.8650865,
   0.8714893,
   0.8378235,
   0.8002996,
   0.7772978,
   0.6093466,
   0.639661,
   0.7582093,
   0.5869959,
   1.023728,
   0.9223384,
   1.186361,
   0.4385768,
   0.77533};
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
   0.03080564,
   0.0268713,
   0.02753601,
   0.03203658,
   0.03758152,
   0.04724019,
   0.05842528,
   0.06363977,
   0.08324296,
   0.1224584,
   0.126222,
   0.2065292,
   0.2576091,
   0.4209656,
   0.3133438,
   0.5539391};
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
   0.03080564,
   0.0268713,
   0.02753601,
   0.03203658,
   0.03758152,
   0.04724019,
   0.05842528,
   0.06233486,
   0.08111531,
   0.1185631,
   0.1208344,
   0.1982803,
   0.2430889,
   0.3899436,
   0.2520676,
   0.4456131};
   grae = new TGraphAsymmErrors(16,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0.1127097);
   Graph_Graph3008->SetMaximum(1.721412);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
