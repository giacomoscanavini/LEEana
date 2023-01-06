#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 18:59:33 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-69.23077,-35.52,507.6923,3927.764);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__1->SetBinContent(1,1418.519);
   hmc__1->SetBinContent(2,1767.692);
   hmc__1->SetBinContent(3,1367.838);
   hmc__1->SetBinContent(4,901.275);
   hmc__1->SetBinContent(5,535.4474);
   hmc__1->SetBinContent(6,312.8412);
   hmc__1->SetBinContent(7,193.5986);
   hmc__1->SetBinContent(8,109.9133);
   hmc__1->SetBinContent(9,60.27128);
   hmc__1->SetBinContent(10,47.8288);
   hmc__1->SetBinContent(11,23.22646);
   hmc__1->SetBinContent(12,16.42382);
   hmc__1->SetBinContent(13,8.844737);
   hmc__1->SetBinContent(14,3.601407);
   hmc__1->SetBinContent(15,3.924892);
   hmc__1->SetBinContent(16,7.862296);
   hmc__1->SetBinError(1,309.8399);
   hmc__1->SetBinError(2,439.4483);
   hmc__1->SetBinError(3,363.661);
   hmc__1->SetBinError(4,242.6021);
   hmc__1->SetBinError(5,147.413);
   hmc__1->SetBinError(6,90.80516);
   hmc__1->SetBinError(7,56.24605);
   hmc__1->SetBinError(8,33.85872);
   hmc__1->SetBinError(9,28.07765);
   hmc__1->SetBinError(10,19.33891);
   hmc__1->SetBinError(11,13.18787);
   hmc__1->SetBinError(12,10.22207);
   hmc__1->SetBinError(13,9.246118);
   hmc__1->SetBinError(14,3.349059);
   hmc__1->SetBinError(15,11.94577);
   hmc__1->SetBinError(16,9.526262);
   hmc__1->SetMinimum(-35.52);
   hmc__1->SetMaximum(3729.6);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",15,0,450);
   hs1_stack_1->SetMinimum(-1.427841e-08);
   hs1_stack_1->SetMaximum(1856.077);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,37.01693);
   hbadmatch_stack_1->SetBinContent(2,46.96001);
   hbadmatch_stack_1->SetBinContent(3,41.11209);
   hbadmatch_stack_1->SetBinContent(4,21.17292);
   hbadmatch_stack_1->SetBinContent(5,12.28786);
   hbadmatch_stack_1->SetBinContent(6,6.619993);
   hbadmatch_stack_1->SetBinContent(7,2.30471);
   hbadmatch_stack_1->SetBinContent(8,2.752065);
   hbadmatch_stack_1->SetBinContent(9,1.694564);
   hbadmatch_stack_1->SetBinContent(10,0.722615);
   hbadmatch_stack_1->SetBinContent(13,0.2552519);
   hbadmatch_stack_1->SetBinContent(16,0.5610657);
   hbadmatch_stack_1->SetBinError(1,3.272219);
   hbadmatch_stack_1->SetBinError(2,4.405646);
   hbadmatch_stack_1->SetBinError(3,3.59635);
   hbadmatch_stack_1->SetBinError(4,2.325039);
   hbadmatch_stack_1->SetBinError(5,2.491149);
   hbadmatch_stack_1->SetBinError(6,1.348649);
   hbadmatch_stack_1->SetBinError(7,0.7758588);
   hbadmatch_stack_1->SetBinError(8,0.9848563);
   hbadmatch_stack_1->SetBinError(9,0.7185024);
   hbadmatch_stack_1->SetBinError(10,0.4346383);
   hbadmatch_stack_1->SetBinError(13,0.255252);
   hbadmatch_stack_1->SetBinError(16,0.5610657);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,221.6311);
   hext_stack_2->SetBinContent(2,258.3947);
   hext_stack_2->SetBinContent(3,132.6916);
   hext_stack_2->SetBinContent(4,77.20059);
   hext_stack_2->SetBinContent(5,28.80888);
   hext_stack_2->SetBinContent(6,17.71266);
   hext_stack_2->SetBinContent(7,6.813981);
   hext_stack_2->SetBinContent(8,5.083842);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(10,1.614806);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinError(1,10.18333);
   hext_stack_2->SetBinError(2,11.04618);
   hext_stack_2->SetBinError(3,7.755347);
   hext_stack_2->SetBinError(4,6.036712);
   hext_stack_2->SetBinError(5,3.595451);
   hext_stack_2->SetBinError(6,2.842369);
   hext_stack_2->SetBinError(7,1.637484);
   hext_stack_2->SetBinError(8,1.601118);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(10,0.8528597);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,21.71115);
   hdirt_stack_3->SetBinContent(2,24.77617);
   hdirt_stack_3->SetBinContent(3,14.49476);
   hdirt_stack_3->SetBinContent(4,7.972783);
   hdirt_stack_3->SetBinContent(5,2.487098);
   hdirt_stack_3->SetBinContent(6,1.174808);
   hdirt_stack_3->SetBinContent(7,0.4142698);
   hdirt_stack_3->SetBinError(1,2.42922);
   hdirt_stack_3->SetBinError(2,2.65251);
   hdirt_stack_3->SetBinError(3,2.152684);
   hdirt_stack_3->SetBinError(4,1.77653);
   hdirt_stack_3->SetBinError(5,0.8153025);
   hdirt_stack_3->SetBinError(6,0.6076727);
   hdirt_stack_3->SetBinError(7,0.4142698);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,162.4163);
   houtFV_stack_4->SetBinContent(2,205.1319);
   houtFV_stack_4->SetBinContent(3,150.9855);
   houtFV_stack_4->SetBinContent(4,69.40063);
   houtFV_stack_4->SetBinContent(5,37.3186);
   houtFV_stack_4->SetBinContent(6,25.05504);
   houtFV_stack_4->SetBinContent(7,15.36577);
   houtFV_stack_4->SetBinContent(8,5.339088);
   houtFV_stack_4->SetBinContent(9,4.699412);
   houtFV_stack_4->SetBinContent(10,1.752451);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(12,1.155172);
   houtFV_stack_4->SetBinContent(13,0.2510497);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.2090315);
   houtFV_stack_4->SetBinError(1,6.375722);
   houtFV_stack_4->SetBinError(2,7.271243);
   houtFV_stack_4->SetBinError(3,6.218279);
   houtFV_stack_4->SetBinError(4,4.127511);
   houtFV_stack_4->SetBinError(5,3.039167);
   houtFV_stack_4->SetBinError(6,2.596504);
   houtFV_stack_4->SetBinError(7,2.002666);
   houtFV_stack_4->SetBinError(8,1.148187);
   houtFV_stack_4->SetBinError(9,1.210277);
   houtFV_stack_4->SetBinError(10,0.7345848);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(12,0.7216249);
   houtFV_stack_4->SetBinError(13,0.2510497);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.2090315);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,24.23336);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,25.69219);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,20.18885);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.72711);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.91058);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.555083);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.411214);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.576246);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4163124);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.128309);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8766301);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7326903);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.06518023);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.882688);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.821617);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.511552);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.35408);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.471212);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9550696);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8298281);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7288081);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1104655);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4104369);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5741882);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3936933);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04656421);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.86913);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.864337);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.441776);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.331347);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7934237);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8840539);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2565304);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.241778);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1454196);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4454186);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7053099);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.70346);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4049784);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2327385);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3390548);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1799647);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1437622);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1294067);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,406.6884);
   hNCpi0inFVres_stack_7->SetBinContent(2,590.8863);
   hNCpi0inFVres_stack_7->SetBinContent(3,463.9105);
   hNCpi0inFVres_stack_7->SetBinContent(4,310.8839);
   hNCpi0inFVres_stack_7->SetBinContent(5,179.6661);
   hNCpi0inFVres_stack_7->SetBinContent(6,94.87466);
   hNCpi0inFVres_stack_7->SetBinContent(7,53.67445);
   hNCpi0inFVres_stack_7->SetBinContent(8,32.40026);
   hNCpi0inFVres_stack_7->SetBinContent(9,15.25564);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.9002);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.352767);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.832235);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.933971);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.6277692);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.3385617);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9443766);
   hNCpi0inFVres_stack_7->SetBinError(1,6.697694);
   hNCpi0inFVres_stack_7->SetBinError(2,7.895493);
   hNCpi0inFVres_stack_7->SetBinError(3,6.774168);
   hNCpi0inFVres_stack_7->SetBinError(4,5.833048);
   hNCpi0inFVres_stack_7->SetBinError(5,4.321117);
   hNCpi0inFVres_stack_7->SetBinError(6,3.109165);
   hNCpi0inFVres_stack_7->SetBinError(7,2.392886);
   hNCpi0inFVres_stack_7->SetBinError(8,2.063917);
   hNCpi0inFVres_stack_7->SetBinError(9,1.376823);
   hNCpi0inFVres_stack_7->SetBinError(10,1.293486);
   hNCpi0inFVres_stack_7->SetBinError(11,1.234253);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6088398);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4633103);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1838252);
   hNCpi0inFVres_stack_7->SetBinError(15,0.150353);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2599474);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,80.43009);
   hNCpi0inFVdis_stack_8->SetBinContent(2,113.9201);
   hNCpi0inFVdis_stack_8->SetBinContent(3,97.37749);
   hNCpi0inFVdis_stack_8->SetBinContent(4,69.18777);
   hNCpi0inFVdis_stack_8->SetBinContent(5,38.14949);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.33393);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.41981);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.68402);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.286348);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.569273);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.989928);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.794708);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.89684);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1405505);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.175175);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9723964);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.092118);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.514122);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.427997);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.926967);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.994484);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.813057);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.51212);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.500629);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5672591);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.175818);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4896239);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8395057);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6081541);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.07701767);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5109506);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4110136);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1731557);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.5220913);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4096203);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.07291382);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1318655);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1678483);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1799834);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,160.4701);
   hCCpi0inFV_stack_10->SetBinContent(2,243.3833);
   hCCpi0inFV_stack_10->SetBinContent(3,240.385);
   hCCpi0inFV_stack_10->SetBinContent(4,174.5912);
   hCCpi0inFV_stack_10->SetBinContent(5,117.703);
   hCCpi0inFV_stack_10->SetBinContent(6,62.52089);
   hCCpi0inFV_stack_10->SetBinContent(7,38.56394);
   hCCpi0inFV_stack_10->SetBinContent(8,21.56202);
   hCCpi0inFV_stack_10->SetBinContent(9,13.88916);
   hCCpi0inFV_stack_10->SetBinContent(10,8.52422);
   hCCpi0inFV_stack_10->SetBinContent(11,4.978163);
   hCCpi0inFV_stack_10->SetBinContent(12,3.269539);
   hCCpi0inFV_stack_10->SetBinContent(13,1.713804);
   hCCpi0inFV_stack_10->SetBinContent(15,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(16,1.855576);
   hCCpi0inFV_stack_10->SetBinError(1,6.38824);
   hCCpi0inFV_stack_10->SetBinError(2,7.801886);
   hCCpi0inFV_stack_10->SetBinError(3,7.810434);
   hCCpi0inFV_stack_10->SetBinError(4,6.630446);
   hCCpi0inFV_stack_10->SetBinError(5,5.430047);
   hCCpi0inFV_stack_10->SetBinError(6,3.964277);
   hCCpi0inFV_stack_10->SetBinError(7,3.164708);
   hCCpi0inFV_stack_10->SetBinError(8,2.319723);
   hCCpi0inFV_stack_10->SetBinError(9,1.819956);
   hCCpi0inFV_stack_10->SetBinError(10,1.402859);
   hCCpi0inFV_stack_10->SetBinError(11,1.063735);
   hCCpi0inFV_stack_10->SetBinError(12,0.9413781);
   hCCpi0inFV_stack_10->SetBinError(13,0.6207051);
   hCCpi0inFV_stack_10->SetBinError(15,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(16,0.6794384);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,97.01149);
   hNCinFV_stack_11->SetBinContent(2,88.50484);
   hNCinFV_stack_11->SetBinContent(3,80.55423);
   hNCinFV_stack_11->SetBinContent(4,70.64974);
   hNCinFV_stack_11->SetBinContent(5,54.74989);
   hNCinFV_stack_11->SetBinContent(6,37.58045);
   hNCinFV_stack_11->SetBinContent(7,31.40851);
   hNCinFV_stack_11->SetBinContent(8,16.73624);
   hNCinFV_stack_11->SetBinContent(9,13.21166);
   hNCinFV_stack_11->SetBinContent(10,11.36077);
   hNCinFV_stack_11->SetBinContent(11,4.728139);
   hNCinFV_stack_11->SetBinContent(12,4.194607);
   hNCinFV_stack_11->SetBinContent(13,1.151212);
   hNCinFV_stack_11->SetBinContent(14,1.499545);
   hNCinFV_stack_11->SetBinContent(16,1.899615);
   hNCinFV_stack_11->SetBinError(1,5.046957);
   hNCinFV_stack_11->SetBinError(2,4.897014);
   hNCinFV_stack_11->SetBinError(3,4.502579);
   hNCinFV_stack_11->SetBinError(4,4.401729);
   hNCinFV_stack_11->SetBinError(5,4.150359);
   hNCinFV_stack_11->SetBinError(6,3.376206);
   hNCinFV_stack_11->SetBinError(7,3.605837);
   hNCinFV_stack_11->SetBinError(8,2.655013);
   hNCinFV_stack_11->SetBinError(9,2.259866);
   hNCinFV_stack_11->SetBinError(10,2.050609);
   hNCinFV_stack_11->SetBinError(11,1.408177);
   hNCinFV_stack_11->SetBinError(12,1.225644);
   hNCinFV_stack_11->SetBinError(13,0.6564187);
   hNCinFV_stack_11->SetBinError(14,0.7463844);
   hNCinFV_stack_11->SetBinError(16,0.8005129);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,183.8056);
   hnumuCCinFV_stack_12->SetBinContent(2,152.1672);
   hnumuCCinFV_stack_12->SetBinContent(3,115.4796);
   hnumuCCinFV_stack_12->SetBinContent(4,77.42455);
   hnumuCCinFV_stack_12->SetBinContent(5,47.00373);
   hnumuCCinFV_stack_12->SetBinContent(6,29.62075);
   hnumuCCinFV_stack_12->SetBinContent(7,22.05226);
   hnumuCCinFV_stack_12->SetBinContent(8,10.65007);
   hnumuCCinFV_stack_12->SetBinContent(9,4.886373);
   hnumuCCinFV_stack_12->SetBinContent(10,4.562921);
   hnumuCCinFV_stack_12->SetBinContent(11,2.140793);
   hnumuCCinFV_stack_12->SetBinContent(12,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(13,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(14,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(15,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(16,1.125349);
   hnumuCCinFV_stack_12->SetBinError(1,8.131109);
   hnumuCCinFV_stack_12->SetBinError(2,7.503393);
   hnumuCCinFV_stack_12->SetBinError(3,6.184482);
   hnumuCCinFV_stack_12->SetBinError(4,5.508928);
   hnumuCCinFV_stack_12->SetBinError(5,3.585695);
   hnumuCCinFV_stack_12->SetBinError(6,2.815514);
   hnumuCCinFV_stack_12->SetBinError(7,2.413793);
   hnumuCCinFV_stack_12->SetBinError(8,1.603635);
   hnumuCCinFV_stack_12->SetBinError(9,1.073996);
   hnumuCCinFV_stack_12->SetBinError(10,1.051429);
   hnumuCCinFV_stack_12->SetBinError(11,0.690568);
   hnumuCCinFV_stack_12->SetBinError(12,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(13,0.48078);
   hnumuCCinFV_stack_12->SetBinError(14,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(15,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(16,0.5194673);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,20.06205);
   hnueCCinFV_stack_13->SetBinContent(2,11.48938);
   hnueCCinFV_stack_13->SetBinContent(3,4.806867);
   hnueCCinFV_stack_13->SetBinContent(4,5.659462);
   hnueCCinFV_stack_13->SetBinContent(5,3.505188);
   hnueCCinFV_stack_13->SetBinContent(6,1.908829);
   hnueCCinFV_stack_13->SetBinContent(7,1.913113);
   hnueCCinFV_stack_13->SetBinContent(8,0.8877128);
   hnueCCinFV_stack_13->SetBinContent(10,1.693249);
   hnueCCinFV_stack_13->SetBinContent(11,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,3.331725);
   hnueCCinFV_stack_13->SetBinError(2,2.085976);
   hnueCCinFV_stack_13->SetBinError(3,1.140117);
   hnueCCinFV_stack_13->SetBinError(4,1.713729);
   hnueCCinFV_stack_13->SetBinError(5,0.9656698);
   hnueCCinFV_stack_13->SetBinError(6,0.6506224);
   hnueCCinFV_stack_13->SetBinError(7,1.155432);
   hnueCCinFV_stack_13->SetBinError(8,0.4469403);
   hnueCCinFV_stack_13->SetBinError(10,0.7484036);
   hnueCCinFV_stack_13->SetBinError(11,0.5197486);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__2->SetBinContent(1,1418.519);
   hmcerror__2->SetBinContent(2,1767.692);
   hmcerror__2->SetBinContent(3,1367.838);
   hmcerror__2->SetBinContent(4,901.275);
   hmcerror__2->SetBinContent(5,535.4474);
   hmcerror__2->SetBinContent(6,312.8412);
   hmcerror__2->SetBinContent(7,193.5986);
   hmcerror__2->SetBinContent(8,109.9133);
   hmcerror__2->SetBinContent(9,60.27128);
   hmcerror__2->SetBinContent(10,47.8288);
   hmcerror__2->SetBinContent(11,23.22646);
   hmcerror__2->SetBinContent(12,16.42382);
   hmcerror__2->SetBinContent(13,8.844737);
   hmcerror__2->SetBinContent(14,3.601407);
   hmcerror__2->SetBinContent(15,3.924892);
   hmcerror__2->SetBinContent(16,7.862296);
   hmcerror__2->SetBinError(1,309.8399);
   hmcerror__2->SetBinError(2,439.4483);
   hmcerror__2->SetBinError(3,363.661);
   hmcerror__2->SetBinError(4,242.6021);
   hmcerror__2->SetBinError(5,147.413);
   hmcerror__2->SetBinError(6,90.80516);
   hmcerror__2->SetBinError(7,56.24605);
   hmcerror__2->SetBinError(8,33.85872);
   hmcerror__2->SetBinError(9,28.07765);
   hmcerror__2->SetBinError(10,19.33891);
   hmcerror__2->SetBinError(11,13.18787);
   hmcerror__2->SetBinError(12,10.22207);
   hmcerror__2->SetBinError(13,9.246118);
   hmcerror__2->SetBinError(14,3.349059);
   hmcerror__2->SetBinError(15,11.94577);
   hmcerror__2->SetBinError(16,9.526262);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3001[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3001[15] = {
   1351,
   1776,
   1391,
   862,
   468,
   260,
   129,
   80,
   45,
   33,
   18,
   13,
   5,
   4,
   4};
   Double_t _felx3001[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3001[15] = {
   36.75595,
   42.14262,
   37.29611,
   29.35984,
   21.63331,
   16.12452,
   11.35782,
   9.0683,
   6.8416,
   5.8847,
   4.4008,
   3.77763,
   2.48995,
   2.29683,
   2.29683};
   Double_t _fehx3001[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3001[15] = {
   36.75595,
   42.14262,
   37.29611,
   29.35984,
   21.63331,
   16.12452,
   11.35782,
   8.8665,
   6.637,
   5.6776,
   4.1858,
   3.5552,
   2.21064,
   1.98186,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,495);
   Graph_Graph3001->SetMinimum(1.532853);
   Graph_Graph3001->SetMaximum(1999.787);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6439.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 172.9","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 753.9","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.5","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2171.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  472.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1093.2","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 513.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 652.6","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   
   Double_t _fx3002[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3002[15] = {
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
   Double_t _felx3002[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3002[15] = {
   0.218425,
   0.2486,
   0.2658655,
   0.2691765,
   0.275308,
   0.2902596,
   0.2905293,
   0.3080492,
   0.4658545,
   0.4043361,
   0.5677949,
   0.6223931,
   1.045381,
   0.9299308,
   3.043593};
   Double_t _fehx3002[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3002[15] = {
   0.218425,
   0.2486,
   0.2658655,
   0.2691765,
   0.275308,
   0.2902596,
   0.2905293,
   0.3080492,
   0.4658545,
   0.4043361,
   0.5677949,
   0.6223931,
   1.045381,
   0.9299308,
   3.043593};
   grae = new TGraphAsymmErrors(15,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,495);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3003[15] = {
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
   Double_t _felx3003[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3003[15] = {
   0.2065947,
   0.2451541,
   0.2632319,
   0.2640164,
   0.2609056,
   0.2576169,
   0.2629623,
   0.2437127,
   0.2402046,
   0.2476275,
   0.313715,
   0.3362853,
   0.309401,
   0.4725544,
   0.3829616};
   Double_t _fehx3003[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3003[15] = {
   0.2065947,
   0.2451541,
   0.2632319,
   0.2640164,
   0.2609056,
   0.2576169,
   0.2629623,
   0.2437127,
   0.2402046,
   0.2476275,
   0.313715,
   0.3362853,
   0.309401,
   0.4725544,
   0.3829616};
   grae = new TGraphAsymmErrors(15,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,495);
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
   
   Double_t _fx3004[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3004[15] = {
   0.9524019,
   1.0047,
   1.016933,
   0.9564229,
   0.8740355,
   0.8310926,
   0.6663273,
   0.7278462,
   0.7466242,
   0.6899608,
   0.7749782,
   0.7915334,
   0.5653079,
   1.110677,
   1.019136};
   Double_t _felx3004[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3004[15] = {
   0.0259115,
   0.02384047,
   0.02726647,
   0.03257589,
   0.0404023,
   0.05154218,
   0.05866685,
   0.08250409,
   0.1135134,
   0.1230367,
   0.1894736,
   0.2300093,
   0.2815177,
   0.6377592,
   0.5851958};
   Double_t _fehx3004[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3004[15] = {
   0.0259115,
   0.02384047,
   0.02726647,
   0.03257589,
   0.0404023,
   0.05154218,
   0.05866685,
   0.0806681,
   0.1101188,
   0.1187067,
   0.1802169,
   0.2164661,
   0.2499385,
   0.5503017,
   0.5049464};
   grae = new TGraphAsymmErrors(15,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,495);
   Graph_Graph3004->SetMinimum(0.1460714);
   Graph_Graph3004->SetMaximum(1.798698);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
