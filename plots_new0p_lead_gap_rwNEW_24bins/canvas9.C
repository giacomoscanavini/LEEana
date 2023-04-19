#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 15:31:59 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-1.516768,101.5385,167.7226);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__25->SetBinContent(1,75.83842);
   hmc__25->SetBinContent(2,67.08092);
   hmc__25->SetBinContent(3,63.32134);
   hmc__25->SetBinContent(4,45.0633);
   hmc__25->SetBinContent(5,38.14221);
   hmc__25->SetBinContent(6,31.93294);
   hmc__25->SetBinContent(7,29.52741);
   hmc__25->SetBinContent(8,17.74852);
   hmc__25->SetBinContent(9,15.86145);
   hmc__25->SetBinContent(10,12.4256);
   hmc__25->SetBinContent(11,10.24726);
   hmc__25->SetBinContent(12,11.47717);
   hmc__25->SetBinContent(13,9.601135);
   hmc__25->SetBinContent(14,8.807779);
   hmc__25->SetBinContent(15,5.388357);
   hmc__25->SetBinContent(16,5.203368);
   hmc__25->SetBinContent(17,4.601821);
   hmc__25->SetBinContent(18,4.776425);
   hmc__25->SetBinContent(19,2.602239);
   hmc__25->SetBinContent(20,2.573009);
   hmc__25->SetBinContent(21,0.7702267);
   hmc__25->SetBinContent(22,2.041641);
   hmc__25->SetBinContent(23,1.487239);
   hmc__25->SetBinContent(24,1.483664);
   hmc__25->SetBinContent(25,12.53197);
   hmc__25->SetBinError(1,26.98919);
   hmc__25->SetBinError(2,25.504);
   hmc__25->SetBinError(3,24.0306);
   hmc__25->SetBinError(4,23.21512);
   hmc__25->SetBinError(5,15.23578);
   hmc__25->SetBinError(6,16.62104);
   hmc__25->SetBinError(7,13.86628);
   hmc__25->SetBinError(8,11.32895);
   hmc__25->SetBinError(9,11.13155);
   hmc__25->SetBinError(10,6.408263);
   hmc__25->SetBinError(11,6.569419);
   hmc__25->SetBinError(12,6.94806);
   hmc__25->SetBinError(13,11.23963);
   hmc__25->SetBinError(14,7.388873);
   hmc__25->SetBinError(15,7.306257);
   hmc__25->SetBinError(16,6.205699);
   hmc__25->SetBinError(17,5.61457);
   hmc__25->SetBinError(18,4.677516);
   hmc__25->SetBinError(19,3.343825);
   hmc__25->SetBinError(20,3.489899);
   hmc__25->SetBinError(21,1.298494);
   hmc__25->SetBinError(22,3.259454);
   hmc__25->SetBinError(23,3.051854);
   hmc__25->SetBinError(24,4.41679);
   hmc__25->SetBinError(25,12.9967);
   hmc__25->SetMinimum(-1.516768);
   hmc__25->SetMaximum(159.2607);
   hmc__25->SetEntries(469.1651);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,90);
   hs9_stack_9->SetMinimum(-1.959049e-08);
   hs9_stack_9->SetMaximum(79.63035);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,1.193361);
   hbadmatch_stack_1->SetBinContent(2,1.465526);
   hbadmatch_stack_1->SetBinContent(3,1.949166);
   hbadmatch_stack_1->SetBinContent(4,1.123658);
   hbadmatch_stack_1->SetBinContent(5,0.8073083);
   hbadmatch_stack_1->SetBinContent(6,1.348408);
   hbadmatch_stack_1->SetBinContent(7,0.7868615);
   hbadmatch_stack_1->SetBinContent(8,0.2507246);
   hbadmatch_stack_1->SetBinContent(9,0.9278559);
   hbadmatch_stack_1->SetBinContent(10,0.439009);
   hbadmatch_stack_1->SetBinContent(11,1.070405);
   hbadmatch_stack_1->SetBinContent(12,0.9779288);
   hbadmatch_stack_1->SetBinContent(13,0.6156429);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.4161119);
   hbadmatch_stack_1->SetBinContent(17,0.8140947);
   hbadmatch_stack_1->SetBinContent(18,0.2150528);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.5094033);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,1.43734);
   hbadmatch_stack_1->SetBinError(1,0.5466668);
   hbadmatch_stack_1->SetBinError(2,0.6209405);
   hbadmatch_stack_1->SetBinError(3,0.7604681);
   hbadmatch_stack_1->SetBinError(4,0.5188295);
   hbadmatch_stack_1->SetBinError(5,0.404135);
   hbadmatch_stack_1->SetBinError(6,0.5654173);
   hbadmatch_stack_1->SetBinError(7,0.3934307);
   hbadmatch_stack_1->SetBinError(8,0.2507246);
   hbadmatch_stack_1->SetBinError(9,0.5543192);
   hbadmatch_stack_1->SetBinError(10,0.3123507);
   hbadmatch_stack_1->SetBinError(11,0.5545368);
   hbadmatch_stack_1->SetBinError(12,0.5907033);
   hbadmatch_stack_1->SetBinError(13,0.3561798);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.2946723);
   hbadmatch_stack_1->SetBinError(17,0.505089);
   hbadmatch_stack_1->SetBinError(18,0.2150528);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.5094033);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.5986252);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,2.021405);
   hext_stack_2->SetBinContent(2,4.53161);
   hext_stack_2->SetBinContent(3,3.960608);
   hext_stack_2->SetBinContent(4,1.868591);
   hext_stack_2->SetBinContent(5,3.394015);
   hext_stack_2->SetBinContent(6,1.779209);
   hext_stack_2->SetBinContent(7,3.972198);
   hext_stack_2->SetBinContent(8,1.219797);
   hext_stack_2->SetBinContent(9,1.290409);
   hext_stack_2->SetBinContent(10,1.861411);
   hext_stack_2->SetBinContent(11,1.055394);
   hext_stack_2->SetBinContent(12,1.37261);
   hext_stack_2->SetBinContent(13,1.614806);
   hext_stack_2->SetBinContent(14,1.37261);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,1.704188);
   hext_stack_2->SetBinError(1,0.9448239);
   hext_stack_2->SetBinError(2,1.418025);
   hext_stack_2->SetBinError(3,1.313505);
   hext_stack_2->SetBinError(4,0.840497);
   hext_stack_2->SetBinError(5,1.254957);
   hext_stack_2->SetBinError(6,0.9206235);
   hext_stack_2->SetBinError(7,1.288106);
   hext_stack_2->SetBinError(8,0.7042499);
   hext_stack_2->SetBinError(9,0.788756);
   hext_stack_2->SetBinError(10,0.9526997);
   hext_stack_2->SetBinError(11,0.6130171);
   hext_stack_2->SetBinError(12,0.8259691);
   hext_stack_2->SetBinError(13,0.8528597);
   hext_stack_2->SetBinError(14,0.8259691);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.7656743);
   hext_stack_2->SetEntries(92);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,0.8175788);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.7430996);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.002351481);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.2623434);
   hdirt_stack_3->SetBinError(1,0.5111058);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(6,0.5275648);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.002351481);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.2623434);
   hdirt_stack_3->SetEntries(11);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,8.267753);
   houtFV_stack_4->SetBinContent(2,9.352736);
   houtFV_stack_4->SetBinContent(3,8.624613);
   houtFV_stack_4->SetBinContent(4,7.228425);
   houtFV_stack_4->SetBinContent(5,6.491846);
   houtFV_stack_4->SetBinContent(6,6.498742);
   houtFV_stack_4->SetBinContent(7,5.813315);
   houtFV_stack_4->SetBinContent(8,3.889786);
   houtFV_stack_4->SetBinContent(9,3.428178);
   houtFV_stack_4->SetBinContent(10,2.342597);
   houtFV_stack_4->SetBinContent(11,2.587494);
   houtFV_stack_4->SetBinContent(12,2.586771);
   houtFV_stack_4->SetBinContent(13,1.891554);
   houtFV_stack_4->SetBinContent(14,1.565919);
   houtFV_stack_4->SetBinContent(15,1.125349);
   houtFV_stack_4->SetBinContent(16,0.785171);
   houtFV_stack_4->SetBinContent(17,0.5867651);
   houtFV_stack_4->SetBinContent(18,0.9286332);
   houtFV_stack_4->SetBinContent(19,0.536893);
   houtFV_stack_4->SetBinContent(20,0.536893);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinContent(23,0.3917402);
   houtFV_stack_4->SetBinContent(24,0.6803553);
   houtFV_stack_4->SetBinContent(25,2.60362);
   houtFV_stack_4->SetBinError(1,1.371387);
   houtFV_stack_4->SetBinError(2,1.514946);
   houtFV_stack_4->SetBinError(3,1.440879);
   houtFV_stack_4->SetBinError(4,1.326846);
   houtFV_stack_4->SetBinError(5,1.301723);
   houtFV_stack_4->SetBinError(6,1.271764);
   houtFV_stack_4->SetBinError(7,1.176416);
   houtFV_stack_4->SetBinError(8,1.00739);
   houtFV_stack_4->SetBinError(9,0.9647132);
   houtFV_stack_4->SetBinError(10,0.8097566);
   houtFV_stack_4->SetBinError(11,0.8087577);
   houtFV_stack_4->SetBinError(12,0.9012343);
   houtFV_stack_4->SetBinError(13,0.6905419);
   houtFV_stack_4->SetBinError(14,0.6069138);
   houtFV_stack_4->SetBinError(15,0.5194673);
   houtFV_stack_4->SetBinError(16,0.3925882);
   houtFV_stack_4->SetBinError(17,0.3387718);
   houtFV_stack_4->SetBinError(18,0.48078);
   houtFV_stack_4->SetBinError(19,0.3929602);
   houtFV_stack_4->SetBinError(20,0.3929602);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetBinError(23,0.2770047);
   houtFV_stack_4->SetBinError(24,0.4810838);
   houtFV_stack_4->SetBinError(25,0.8619736);
   houtFV_stack_4->SetEntries(344);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,16.56886);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.11232);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.47791);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.28128);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.888105);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.616236);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.649521);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.623687);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.9624);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.466993);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.481948);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.965962);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.14798);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.93823);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.5438859);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.088772);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8087721);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.8790222);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3620359);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.3485861);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.362868);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.11584);
   hNCpi0inFVres_stack_7->SetBinError(1,1.36998);
   hNCpi0inFVres_stack_7->SetBinError(2,1.369932);
   hNCpi0inFVres_stack_7->SetBinError(3,1.256441);
   hNCpi0inFVres_stack_7->SetBinError(4,1.126827);
   hNCpi0inFVres_stack_7->SetBinError(5,1.07591);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9148065);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8008874);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5596295);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7357505);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3858402);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5230212);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4686633);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5324251);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5016232);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2338466);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4017382);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3187231);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3599208);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1536621);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2218905);
   hNCpi0inFVres_stack_7->SetBinError(21,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2070706);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(24,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3780289);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.948039);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.672278);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.765356);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.843984);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.57569);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.301098);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.07349);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.9753399);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.878854);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7800399);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7100879);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7643348);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6737109);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5451268);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3601903);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5426823);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3401847);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2949384);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3111014);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2855518);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,15.74997);
   hCCpi0inFV_stack_10->SetBinContent(2,11.32837);
   hCCpi0inFV_stack_10->SetBinContent(3,11.86482);
   hCCpi0inFV_stack_10->SetBinContent(4,10.19476);
   hCCpi0inFV_stack_10->SetBinContent(5,7.445415);
   hCCpi0inFV_stack_10->SetBinContent(6,6.068355);
   hCCpi0inFV_stack_10->SetBinContent(7,5.752252);
   hCCpi0inFV_stack_10->SetBinContent(8,4.945312);
   hCCpi0inFV_stack_10->SetBinContent(9,2.442341);
   hCCpi0inFV_stack_10->SetBinContent(10,2.250697);
   hCCpi0inFV_stack_10->SetBinContent(11,1.356317);
   hCCpi0inFV_stack_10->SetBinContent(12,1.853339);
   hCCpi0inFV_stack_10->SetBinContent(13,1.610679);
   hCCpi0inFV_stack_10->SetBinContent(14,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(15,0.7817899);
   hCCpi0inFV_stack_10->SetBinContent(16,1.020533);
   hCCpi0inFV_stack_10->SetBinContent(17,1.156355);
   hCCpi0inFV_stack_10->SetBinContent(18,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(19,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(20,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(22,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(23,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(25,1.723434);
   hCCpi0inFV_stack_10->SetBinError(1,2.047977);
   hCCpi0inFV_stack_10->SetBinError(2,1.689783);
   hCCpi0inFV_stack_10->SetBinError(3,1.681145);
   hCCpi0inFV_stack_10->SetBinError(4,1.587571);
   hCCpi0inFV_stack_10->SetBinError(5,1.392999);
   hCCpi0inFV_stack_10->SetBinError(6,1.177417);
   hCCpi0inFV_stack_10->SetBinError(7,1.214852);
   hCCpi0inFV_stack_10->SetBinError(8,1.182658);
   hCCpi0inFV_stack_10->SetBinError(9,0.759212);
   hCCpi0inFV_stack_10->SetBinError(10,0.7346377);
   hCCpi0inFV_stack_10->SetBinError(11,0.5672283);
   hCCpi0inFV_stack_10->SetBinError(12,0.7227021);
   hCCpi0inFV_stack_10->SetBinError(13,0.6806271);
   hCCpi0inFV_stack_10->SetBinError(14,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(15,0.3908977);
   hCCpi0inFV_stack_10->SetBinError(16,0.5892049);
   hCCpi0inFV_stack_10->SetBinError(17,0.5319836);
   hCCpi0inFV_stack_10->SetBinError(18,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(19,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(20,0.48078);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(22,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(23,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(25,0.6847986);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,4.53666);
   hNCinFV_stack_11->SetBinContent(2,2.250697);
   hNCinFV_stack_11->SetBinContent(3,1.960392);
   hNCinFV_stack_11->SetBinContent(4,2.00411);
   hNCinFV_stack_11->SetBinContent(5,3.219667);
   hNCinFV_stack_11->SetBinContent(6,2.835772);
   hNCinFV_stack_11->SetBinContent(7,2.589184);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(10,1.217248);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.3917402);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.110135);
   hNCinFV_stack_11->SetBinError(2,0.7346377);
   hNCinFV_stack_11->SetBinError(3,0.6199358);
   hNCinFV_stack_11->SetBinError(4,0.7352871);
   hNCinFV_stack_11->SetBinError(5,0.962208);
   hNCinFV_stack_11->SetBinError(6,0.808577);
   hNCinFV_stack_11->SetBinError(7,0.809167);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(10,0.6211758);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.2770047);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,18.7989);
   hnumuCCinFV_stack_12->SetBinContent(2,14.83961);
   hnumuCCinFV_stack_12->SetBinContent(3,15.30167);
   hnumuCCinFV_stack_12->SetBinContent(4,8.406888);
   hnumuCCinFV_stack_12->SetBinContent(5,5.320167);
   hnumuCCinFV_stack_12->SetBinContent(6,2.658325);
   hnumuCCinFV_stack_12->SetBinContent(7,2.639323);
   hnumuCCinFV_stack_12->SetBinContent(8,1.918087);
   hnumuCCinFV_stack_12->SetBinContent(9,1.903518);
   hnumuCCinFV_stack_12->SetBinContent(10,1.273507);
   hnumuCCinFV_stack_12->SetBinContent(11,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(12,1.940524);
   hnumuCCinFV_stack_12->SetBinContent(13,1.175341);
   hnumuCCinFV_stack_12->SetBinContent(14,1.365506);
   hnumuCCinFV_stack_12->SetBinContent(15,1.221903);
   hnumuCCinFV_stack_12->SetBinContent(16,0.9127283);
   hnumuCCinFV_stack_12->SetBinContent(17,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(18,0.4516767);
   hnumuCCinFV_stack_12->SetBinContent(21,0.2389865);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9168544);
   hnumuCCinFV_stack_12->SetBinContent(23,0.4228995);
   hnumuCCinFV_stack_12->SetBinContent(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinContent(25,3.639235);
   hnumuCCinFV_stack_12->SetBinError(1,2.379667);
   hnumuCCinFV_stack_12->SetBinError(2,2.357034);
   hnumuCCinFV_stack_12->SetBinError(3,2.581553);
   hnumuCCinFV_stack_12->SetBinError(4,1.710181);
   hnumuCCinFV_stack_12->SetBinError(5,1.322674);
   hnumuCCinFV_stack_12->SetBinError(6,0.7617281);
   hnumuCCinFV_stack_12->SetBinError(7,0.813553);
   hnumuCCinFV_stack_12->SetBinError(8,0.6986282);
   hnumuCCinFV_stack_12->SetBinError(9,0.6954125);
   hnumuCCinFV_stack_12->SetBinError(10,0.601695);
   hnumuCCinFV_stack_12->SetBinError(11,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(12,0.7060863);
   hnumuCCinFV_stack_12->SetBinError(13,0.5913117);
   hnumuCCinFV_stack_12->SetBinError(14,0.5724284);
   hnumuCCinFV_stack_12->SetBinError(15,0.6380371);
   hnumuCCinFV_stack_12->SetBinError(16,0.5342648);
   hnumuCCinFV_stack_12->SetBinError(17,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(18,0.3220283);
   hnumuCCinFV_stack_12->SetBinError(21,0.2389865);
   hnumuCCinFV_stack_12->SetBinError(22,0.5435619);
   hnumuCCinFV_stack_12->SetBinError(23,0.2997603);
   hnumuCCinFV_stack_12->SetBinError(24,0.2280863);
   hnumuCCinFV_stack_12->SetBinError(25,1.062879);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,3.740605);
   hnueCCinFV_stack_13->SetBinContent(2,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.761461);
   hnueCCinFV_stack_13->SetBinError(2,0.2502081);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__26->SetBinContent(1,75.83842);
   hmcerror__26->SetBinContent(2,67.08092);
   hmcerror__26->SetBinContent(3,63.32134);
   hmcerror__26->SetBinContent(4,45.0633);
   hmcerror__26->SetBinContent(5,38.14221);
   hmcerror__26->SetBinContent(6,31.93294);
   hmcerror__26->SetBinContent(7,29.52741);
   hmcerror__26->SetBinContent(8,17.74852);
   hmcerror__26->SetBinContent(9,15.86145);
   hmcerror__26->SetBinContent(10,12.4256);
   hmcerror__26->SetBinContent(11,10.24726);
   hmcerror__26->SetBinContent(12,11.47717);
   hmcerror__26->SetBinContent(13,9.601135);
   hmcerror__26->SetBinContent(14,8.807779);
   hmcerror__26->SetBinContent(15,5.388357);
   hmcerror__26->SetBinContent(16,5.203368);
   hmcerror__26->SetBinContent(17,4.601821);
   hmcerror__26->SetBinContent(18,4.776425);
   hmcerror__26->SetBinContent(19,2.602239);
   hmcerror__26->SetBinContent(20,2.573009);
   hmcerror__26->SetBinContent(21,0.7702267);
   hmcerror__26->SetBinContent(22,2.041641);
   hmcerror__26->SetBinContent(23,1.487239);
   hmcerror__26->SetBinContent(24,1.483664);
   hmcerror__26->SetBinContent(25,12.53197);
   hmcerror__26->SetBinError(1,26.98919);
   hmcerror__26->SetBinError(2,25.504);
   hmcerror__26->SetBinError(3,24.0306);
   hmcerror__26->SetBinError(4,23.21512);
   hmcerror__26->SetBinError(5,15.23578);
   hmcerror__26->SetBinError(6,16.62104);
   hmcerror__26->SetBinError(7,13.86628);
   hmcerror__26->SetBinError(8,11.32895);
   hmcerror__26->SetBinError(9,11.13155);
   hmcerror__26->SetBinError(10,6.408263);
   hmcerror__26->SetBinError(11,6.569419);
   hmcerror__26->SetBinError(12,6.94806);
   hmcerror__26->SetBinError(13,11.23963);
   hmcerror__26->SetBinError(14,7.388873);
   hmcerror__26->SetBinError(15,7.306257);
   hmcerror__26->SetBinError(16,6.205699);
   hmcerror__26->SetBinError(17,5.61457);
   hmcerror__26->SetBinError(18,4.677516);
   hmcerror__26->SetBinError(19,3.343825);
   hmcerror__26->SetBinError(20,3.489899);
   hmcerror__26->SetBinError(21,1.298494);
   hmcerror__26->SetBinError(22,3.259454);
   hmcerror__26->SetBinError(23,3.051854);
   hmcerror__26->SetBinError(24,4.41679);
   hmcerror__26->SetBinError(25,12.9967);
   hmcerror__26->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3033[24] = {
   56,
   60,
   45,
   41,
   38,
   28,
   21,
   18,
   15,
   13,
   9,
   3,
   8,
   7,
   1,
   5,
   5,
   5,
   3,
   2,
   2,
   0,
   1,
   1};
   Double_t _felx3033[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3033[24] = {
   7.6127,
   7.8743,
   6.8416,
   6.5384,
   6.3013,
   5.4358,
   4.7354,
   4.4008,
   4.0385,
   3.77763,
   3.19354,
   2.143368,
   3.0307,
   2.85954,
   1,
   2.48995,
   2.48995,
   2.48995,
   2.143368,
   2,
   2,
   0,
   1,
   1};
   Double_t _fehx3033[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3033[24] = {
   7.4094,
   7.6713,
   6.637,
   6.3331,
   6.0955,
   5.2271,
   4.5229,
   4.1858,
   3.8197,
   3.5552,
   2.9582,
   1.72422,
   2.7896,
   2.61053,
   1.35971,
   2.21064,
   2.21064,
   2.21064,
   1.72422,
   1.51917,
   1.51917,
   1.1478,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,99);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(74.43843);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 387.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.8","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 35.2","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 76.3","F");

   ci = 1541;
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

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  110.0","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.5","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 91.5","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.7","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 83.0","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3034[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3034[24] = {
   0.3558775,
   0.3801975,
   0.3795023,
   0.5151668,
   0.3994466,
   0.5204982,
   0.4696071,
   0.6383037,
   0.7017986,
   0.5157306,
   0.6410901,
   0.6053807,
   1.170657,
   0.8389031,
   1.355934,
   1.192631,
   1.220076,
   0.9792921,
   1.28498,
   1.35635,
   1.685859,
   1.596487,
   2.052027,
   2.976948};
   Double_t _fehx3034[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3034[24] = {
   0.3558775,
   0.3801975,
   0.3795023,
   0.5151668,
   0.3994466,
   0.5204982,
   0.4696071,
   0.6383037,
   0.7017986,
   0.5157306,
   0.6410901,
   0.6053807,
   1.170657,
   0.8389031,
   1.355934,
   1.192631,
   1.220076,
   0.9792921,
   1.28498,
   1.35635,
   1.685859,
   1.596487,
   2.052027,
   2.976948};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,99);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3035[24] = {
   0.2519256,
   0.2945194,
   0.2743225,
   0.2700985,
   0.2712359,
   0.2951069,
   0.2700685,
   0.2747321,
   0.2877104,
   0.27957,
   0.3026149,
   0.2617739,
   0.3295493,
   0.2536579,
   0.3666955,
   0.397197,
   0.3294533,
   0.3492553,
   0.4386826,
   0.4502164,
   0.7635331,
   0.4907018,
   0.5762014,
   0.6788016};
   Double_t _fehx3035[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3035[24] = {
   0.2519256,
   0.2945194,
   0.2743225,
   0.2700985,
   0.2712359,
   0.2951069,
   0.2700685,
   0.2747321,
   0.2877104,
   0.27957,
   0.3026149,
   0.2617739,
   0.3295493,
   0.2536579,
   0.3666955,
   0.397197,
   0.3294533,
   0.3492553,
   0.4386826,
   0.4502164,
   0.7635331,
   0.4907018,
   0.5762014,
   0.6788016};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,99);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3036[24] = {
   0.738412,
   0.894442,
   0.7106609,
   0.9098313,
   0.9962715,
   0.8768374,
   0.7112035,
   1.014169,
   0.9456888,
   1.046227,
   0.8782833,
   0.2613884,
   0.8332348,
   0.794752,
   0.1855853,
   0.9609161,
   1.086526,
   1.046808,
   1.152854,
   0.7773002,
   2.596638,
   0,
   0.6723871,
   0.6740072};
   Double_t _felx3036[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3036[24] = {
   0.1003805,
   0.1173851,
   0.1080457,
   0.1450937,
   0.1652054,
   0.1702255,
   0.160373,
   0.247953,
   0.2546109,
   0.3040199,
   0.3116481,
   0.1867505,
   0.3156606,
   0.3246607,
   0.1855853,
   0.4785266,
   0.5410793,
   0.5212999,
   0.8236631,
   0.7773002,
   2.596638,
   0,
   0.6723871,
   0.6740072};
   Double_t _fehx3036[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3036[24] = {
   0.09769982,
   0.1143589,
   0.1048146,
   0.1405379,
   0.1598098,
   0.1636899,
   0.1531763,
   0.2358393,
   0.2408165,
   0.286119,
   0.288682,
   0.1502304,
   0.290549,
   0.2963891,
   0.2523422,
   0.4248479,
   0.4803837,
   0.4628231,
   0.662591,
   0.5904256,
   1.972367,
   0.5621948,
   0.9142515,
   0.9164543};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,99);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(5.025906);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
