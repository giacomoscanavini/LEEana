#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 15:55:17 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.2307692,-8.84,6.641026,977.5179);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__16->SetBinContent(4,350.804);
   hmc__16->SetBinContent(5,439.5251);
   hmc__16->SetBinContent(6,411.7468);
   hmc__16->SetBinContent(7,362.4613);
   hmc__16->SetBinContent(8,307.7147);
   hmc__16->SetBinContent(9,263.2273);
   hmc__16->SetBinContent(10,216.9878);
   hmc__16->SetBinContent(11,179.2478);
   hmc__16->SetBinContent(12,145.5505);
   hmc__16->SetBinContent(13,105.3631);
   hmc__16->SetBinContent(14,74.51574);
   hmc__16->SetBinContent(15,42.69786);
   hmc__16->SetBinContent(16,27.61778);
   hmc__16->SetBinContent(17,12.56117);
   hmc__16->SetBinContent(18,4.246113);
   hmc__16->SetBinContent(19,1.282576);
   hmc__16->SetBinContent(20,0.1394999);
   hmc__16->SetBinContent(21,0.4180041);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,0.3895343);
   hmc__16->SetBinError(3,0.3895343);
   hmc__16->SetBinError(4,79.5865);
   hmc__16->SetBinError(5,98.50998);
   hmc__16->SetBinError(6,93.58203);
   hmc__16->SetBinError(7,84.42626);
   hmc__16->SetBinError(8,74.81222);
   hmc__16->SetBinError(9,72.46627);
   hmc__16->SetBinError(10,70.71979);
   hmc__16->SetBinError(11,52.05769);
   hmc__16->SetBinError(12,43.55902);
   hmc__16->SetBinError(13,36.33522);
   hmc__16->SetBinError(14,26.12388);
   hmc__16->SetBinError(15,16.62968);
   hmc__16->SetBinError(16,13.14848);
   hmc__16->SetBinError(17,8.466434);
   hmc__16->SetBinError(18,3.439379);
   hmc__16->SetBinError(19,2.498189);
   hmc__16->SetBinError(20,0.4415211);
   hmc__16->SetBinError(21,1.903303);
   hmc__16->SetMinimum(-8.84);
   hmc__16->SetMaximum(928.2);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,1,6);
   hs6_stack_6->SetMinimum(-3.646956e-09);
   hs6_stack_6->SetMaximum(461.5013);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,14.1532);
   hbadmatch_stack_1->SetBinContent(5,14.52625);
   hbadmatch_stack_1->SetBinContent(6,11.78089);
   hbadmatch_stack_1->SetBinContent(7,10.10637);
   hbadmatch_stack_1->SetBinContent(8,5.710708);
   hbadmatch_stack_1->SetBinContent(9,5.972836);
   hbadmatch_stack_1->SetBinContent(10,1.715163);
   hbadmatch_stack_1->SetBinContent(11,1.268811);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(4,2.051995);
   hbadmatch_stack_1->SetBinError(5,2.490791);
   hbadmatch_stack_1->SetBinError(6,1.929355);
   hbadmatch_stack_1->SetBinError(7,2.190047);
   hbadmatch_stack_1->SetBinError(8,1.203833);
   hbadmatch_stack_1->SetBinError(9,1.309882);
   hbadmatch_stack_1->SetBinError(10,0.6691089);
   hbadmatch_stack_1->SetBinError(11,0.5889569);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,57.26899);
   hext_stack_2->SetBinContent(5,54.61875);
   hext_stack_2->SetBinContent(6,51.34164);
   hext_stack_2->SetBinContent(7,39.44061);
   hext_stack_2->SetBinContent(8,34.67279);
   hext_stack_2->SetBinContent(9,17.9405);
   hext_stack_2->SetBinContent(10,9.00697);
   hext_stack_2->SetBinContent(11,6.165187);
   hext_stack_2->SetBinContent(12,3.897177);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinError(4,5.293359);
   hext_stack_2->SetBinError(5,4.950861);
   hext_stack_2->SetBinError(6,4.912064);
   hext_stack_2->SetBinError(7,4.075553);
   hext_stack_2->SetBinError(8,4.060933);
   hext_stack_2->SetBinError(9,2.920036);
   hext_stack_2->SetBinError(10,1.868963);
   hext_stack_2->SetBinError(11,1.571905);
   hext_stack_2->SetBinError(12,1.182339);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,6.779006);
   hdirt_stack_3->SetBinContent(5,8.368657);
   hdirt_stack_3->SetBinContent(6,7.066638);
   hdirt_stack_3->SetBinContent(7,4.524182);
   hdirt_stack_3->SetBinContent(8,3.325188);
   hdirt_stack_3->SetBinContent(9,4.18535);
   hdirt_stack_3->SetBinContent(10,0.9994081);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,1.415767);
   hdirt_stack_3->SetBinContent(13,0.6486359);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinError(4,1.398091);
   hdirt_stack_3->SetBinError(5,1.512635);
   hdirt_stack_3->SetBinError(6,1.341967);
   hdirt_stack_3->SetBinError(7,1.088119);
   hdirt_stack_3->SetBinError(8,0.9252407);
   hdirt_stack_3->SetBinError(9,1.461017);
   hdirt_stack_3->SetBinError(10,0.4774628);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.7832858);
   hdirt_stack_3->SetBinError(13,0.3899356);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,46.20024);
   houtFV_stack_4->SetBinContent(5,62.90841);
   houtFV_stack_4->SetBinContent(6,56.54156);
   houtFV_stack_4->SetBinContent(7,44.14043);
   houtFV_stack_4->SetBinContent(8,33.7021);
   houtFV_stack_4->SetBinContent(9,22.38463);
   houtFV_stack_4->SetBinContent(10,17.34342);
   houtFV_stack_4->SetBinContent(11,8.245553);
   houtFV_stack_4->SetBinContent(12,5.942487);
   houtFV_stack_4->SetBinContent(13,2.830738);
   houtFV_stack_4->SetBinContent(14,1.125349);
   houtFV_stack_4->SetBinContent(15,0.3934307);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,3.33967);
   houtFV_stack_4->SetBinError(5,3.969358);
   houtFV_stack_4->SetBinError(6,3.777351);
   houtFV_stack_4->SetBinError(7,3.310172);
   houtFV_stack_4->SetBinError(8,2.908982);
   houtFV_stack_4->SetBinError(9,2.409649);
   houtFV_stack_4->SetBinError(10,2.116201);
   houtFV_stack_4->SetBinError(11,1.420041);
   houtFV_stack_4->SetBinError(12,1.266261);
   houtFV_stack_4->SetBinError(13,0.844276);
   houtFV_stack_4->SetBinError(14,0.5194673);
   houtFV_stack_4->SetBinError(15,0.2781975);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.777142);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.3604);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.79019);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.98333);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.274204);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.750832);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.748336);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.515758);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,9.459485);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.75208);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.146985);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.397014);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.102732);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.687626);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6242841);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8580936);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8544569);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.862128);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8223082);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8452594);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8103486);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8849261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.117405);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9179917);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7495941);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.786091);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7513235);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4453858);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6410357);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4742997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.673344);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7800399);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1771895);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1150346);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4524662);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3007107);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2855518);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,86.87049);
   hNCpi0inFVres_stack_7->SetBinContent(5,127.7023);
   hNCpi0inFVres_stack_7->SetBinContent(6,128.2394);
   hNCpi0inFVres_stack_7->SetBinContent(7,125.7934);
   hNCpi0inFVres_stack_7->SetBinContent(8,116.4728);
   hNCpi0inFVres_stack_7->SetBinContent(9,121.0806);
   hNCpi0inFVres_stack_7->SetBinContent(10,108.8199);
   hNCpi0inFVres_stack_7->SetBinContent(11,98.00613);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.3894);
   hNCpi0inFVres_stack_7->SetBinContent(13,61.78179);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.2506);
   hNCpi0inFVres_stack_7->SetBinContent(15,25.64251);
   hNCpi0inFVres_stack_7->SetBinContent(16,16.63129);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.884203);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.774566);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.03214);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.4180041);
   hNCpi0inFVres_stack_7->SetBinError(4,3.051274);
   hNCpi0inFVres_stack_7->SetBinError(5,3.710567);
   hNCpi0inFVres_stack_7->SetBinError(6,3.692709);
   hNCpi0inFVres_stack_7->SetBinError(7,3.66749);
   hNCpi0inFVres_stack_7->SetBinError(8,3.46453);
   hNCpi0inFVres_stack_7->SetBinError(9,3.647862);
   hNCpi0inFVres_stack_7->SetBinError(10,3.416812);
   hNCpi0inFVres_stack_7->SetBinError(11,3.255434);
   hNCpi0inFVres_stack_7->SetBinError(12,2.838864);
   hNCpi0inFVres_stack_7->SetBinError(13,2.529579);
   hNCpi0inFVres_stack_7->SetBinError(14,2.301559);
   hNCpi0inFVres_stack_7->SetBinError(15,1.548274);
   hNCpi0inFVres_stack_7->SetBinError(16,1.345518);
   hNCpi0inFVres_stack_7->SetBinError(17,1.040821);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5370948);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3749275);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2406819);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.11889);
   hNCpi0inFVdis_stack_8->SetBinContent(5,24.44814);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.91696);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.8185);
   hNCpi0inFVdis_stack_8->SetBinContent(8,25.83617);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.66675);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.60064);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.10874);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.53728);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.64216);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.919975);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.932588);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.063112);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.004904);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.428827);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.639916);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.622718);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.7619);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.672619);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.438554);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.36438);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.312795);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.207149);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.163226);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8950573);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6525319);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4431221);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3553864);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,49.1942);
   hCCpi0inFV_stack_10->SetBinContent(5,62.50894);
   hCCpi0inFV_stack_10->SetBinContent(6,58.13192);
   hCCpi0inFV_stack_10->SetBinContent(7,56.67154);
   hCCpi0inFV_stack_10->SetBinContent(8,42.06413);
   hCCpi0inFV_stack_10->SetBinContent(9,33.57027);
   hCCpi0inFV_stack_10->SetBinContent(10,27.08608);
   hCCpi0inFV_stack_10->SetBinContent(11,23.48248);
   hCCpi0inFV_stack_10->SetBinContent(12,18.61231);
   hCCpi0inFV_stack_10->SetBinContent(13,9.474595);
   hCCpi0inFV_stack_10->SetBinContent(14,5.430027);
   hCCpi0inFV_stack_10->SetBinContent(15,3.517817);
   hCCpi0inFV_stack_10->SetBinContent(16,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(17,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(18,0.536893);
   hCCpi0inFV_stack_10->SetBinError(4,3.499409);
   hCCpi0inFV_stack_10->SetBinError(5,3.991205);
   hCCpi0inFV_stack_10->SetBinError(6,3.807243);
   hCCpi0inFV_stack_10->SetBinError(7,3.770865);
   hCCpi0inFV_stack_10->SetBinError(8,3.209243);
   hCCpi0inFV_stack_10->SetBinError(9,2.863294);
   hCCpi0inFV_stack_10->SetBinError(10,2.578367);
   hCCpi0inFV_stack_10->SetBinError(11,2.462896);
   hCCpi0inFV_stack_10->SetBinError(12,2.154071);
   hCCpi0inFV_stack_10->SetBinError(13,1.531953);
   hCCpi0inFV_stack_10->SetBinError(14,1.144786);
   hCCpi0inFV_stack_10->SetBinError(15,0.9412229);
   hCCpi0inFV_stack_10->SetBinError(16,0.620407);
   hCCpi0inFV_stack_10->SetBinError(17,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(18,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,27.41908);
   hNCinFV_stack_11->SetBinContent(5,29.23262);
   hNCinFV_stack_11->SetBinContent(6,30.65649);
   hNCinFV_stack_11->SetBinContent(7,23.16258);
   hNCinFV_stack_11->SetBinContent(8,20.6799);
   hNCinFV_stack_11->SetBinContent(9,20.03481);
   hNCinFV_stack_11->SetBinContent(10,17.80477);
   hNCinFV_stack_11->SetBinContent(11,10.46771);
   hNCinFV_stack_11->SetBinContent(12,5.668771);
   hNCinFV_stack_11->SetBinContent(13,6.252154);
   hNCinFV_stack_11->SetBinContent(14,3.356492);
   hNCinFV_stack_11->SetBinContent(15,2.344287);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.3401776);
   hNCinFV_stack_11->SetBinError(4,2.626416);
   hNCinFV_stack_11->SetBinError(5,2.684033);
   hNCinFV_stack_11->SetBinError(6,2.787772);
   hNCinFV_stack_11->SetBinError(7,2.411858);
   hNCinFV_stack_11->SetBinError(8,2.25514);
   hNCinFV_stack_11->SetBinError(9,2.237684);
   hNCinFV_stack_11->SetBinError(10,2.193905);
   hNCinFV_stack_11->SetBinError(11,1.531571);
   hNCinFV_stack_11->SetBinError(12,1.226742);
   hNCinFV_stack_11->SetBinError(13,1.272139);
   hNCinFV_stack_11->SetBinError(14,0.928644);
   hNCinFV_stack_11->SetBinError(15,0.8101654);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.3401776);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,33.41138);
   hnumuCCinFV_stack_12->SetBinContent(5,42.1745);
   hnumuCCinFV_stack_12->SetBinContent(6,30.60201);
   hnumuCCinFV_stack_12->SetBinContent(7,21.47498);
   hnumuCCinFV_stack_12->SetBinContent(8,13.15434);
   hnumuCCinFV_stack_12->SetBinContent(9,7.916892);
   hnumuCCinFV_stack_12->SetBinContent(10,6.26692);
   hnumuCCinFV_stack_12->SetBinContent(11,4.779133);
   hnumuCCinFV_stack_12->SetBinContent(12,4.736734);
   hnumuCCinFV_stack_12->SetBinContent(13,2.099929);
   hnumuCCinFV_stack_12->SetBinContent(14,0.9269427);
   hnumuCCinFV_stack_12->SetBinContent(15,1.035716);
   hnumuCCinFV_stack_12->SetBinContent(16,0.437725);
   hnumuCCinFV_stack_12->SetBinError(4,3.194254);
   hnumuCCinFV_stack_12->SetBinError(5,4.094835);
   hnumuCCinFV_stack_12->SetBinError(6,3.365721);
   hnumuCCinFV_stack_12->SetBinError(7,2.45896);
   hnumuCCinFV_stack_12->SetBinError(8,1.954935);
   hnumuCCinFV_stack_12->SetBinError(9,1.403309);
   hnumuCCinFV_stack_12->SetBinError(10,1.37039);
   hnumuCCinFV_stack_12->SetBinError(11,1.073962);
   hnumuCCinFV_stack_12->SetBinError(12,1.135433);
   hnumuCCinFV_stack_12->SetBinError(13,0.7220421);
   hnumuCCinFV_stack_12->SetBinError(14,0.4800908);
   hnumuCCinFV_stack_12->SetBinError(15,0.4657236);
   hnumuCCinFV_stack_12->SetBinError(16,0.311099);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,6.053234);
   hnueCCinFV_stack_13->SetBinContent(5,6.007113);
   hnueCCinFV_stack_13->SetBinContent(6,5.148969);
   hnueCCinFV_stack_13->SetBinContent(7,1.448738);
   hnueCCinFV_stack_13->SetBinContent(8,5.138804);
   hnueCCinFV_stack_13->SetBinContent(9,0.9287121);
   hnueCCinFV_stack_13->SetBinContent(10,0.9686154);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,0.7708256);
   hnueCCinFV_stack_13->SetBinContent(13,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,1.855518);
   hnueCCinFV_stack_13->SetBinError(5,1.480662);
   hnueCCinFV_stack_13->SetBinError(6,1.28914);
   hnueCCinFV_stack_13->SetBinError(7,0.7131367);
   hnueCCinFV_stack_13->SetBinError(8,2.017935);
   hnueCCinFV_stack_13->SetBinError(9,0.4675383);
   hnueCCinFV_stack_13->SetBinError(10,0.5837582);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.4520646);
   hnueCCinFV_stack_13->SetBinError(13,0.3041673);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__17->SetBinContent(4,350.804);
   hmcerror__17->SetBinContent(5,439.5251);
   hmcerror__17->SetBinContent(6,411.7468);
   hmcerror__17->SetBinContent(7,362.4613);
   hmcerror__17->SetBinContent(8,307.7147);
   hmcerror__17->SetBinContent(9,263.2273);
   hmcerror__17->SetBinContent(10,216.9878);
   hmcerror__17->SetBinContent(11,179.2478);
   hmcerror__17->SetBinContent(12,145.5505);
   hmcerror__17->SetBinContent(13,105.3631);
   hmcerror__17->SetBinContent(14,74.51574);
   hmcerror__17->SetBinContent(15,42.69786);
   hmcerror__17->SetBinContent(16,27.61778);
   hmcerror__17->SetBinContent(17,12.56117);
   hmcerror__17->SetBinContent(18,4.246113);
   hmcerror__17->SetBinContent(19,1.282576);
   hmcerror__17->SetBinContent(20,0.1394999);
   hmcerror__17->SetBinContent(21,0.4180041);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,0.3895343);
   hmcerror__17->SetBinError(3,0.3895343);
   hmcerror__17->SetBinError(4,79.5865);
   hmcerror__17->SetBinError(5,98.50998);
   hmcerror__17->SetBinError(6,93.58203);
   hmcerror__17->SetBinError(7,84.42626);
   hmcerror__17->SetBinError(8,74.81222);
   hmcerror__17->SetBinError(9,72.46627);
   hmcerror__17->SetBinError(10,70.71979);
   hmcerror__17->SetBinError(11,52.05769);
   hmcerror__17->SetBinError(12,43.55902);
   hmcerror__17->SetBinError(13,36.33522);
   hmcerror__17->SetBinError(14,26.12388);
   hmcerror__17->SetBinError(15,16.62968);
   hmcerror__17->SetBinError(16,13.14848);
   hmcerror__17->SetBinError(17,8.466434);
   hmcerror__17->SetBinError(18,3.439379);
   hmcerror__17->SetBinError(19,2.498189);
   hmcerror__17->SetBinError(20,0.4415211);
   hmcerror__17->SetBinError(21,1.903303);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3021[20] = {
   0,
   0,
   0,
   351,
   414,
   442,
   357,
   284,
   257,
   213,
   185,
   135,
   112,
   82,
   55,
   27,
   16,
   3,
   3,
   2};
   Double_t _felx3021[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3021[20] = {
   0,
   0,
   0,
   18.73499,
   20.34699,
   21.0238,
   18.89444,
   16.8523,
   16.03122,
   14.59452,
   13.60147,
   11.61895,
   10.58301,
   9.1791,
   7.546,
   5.3414,
   4.1628,
   2.143368,
   2.143368,
   2};
   Double_t _fehx3021[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3021[20] = {
   1.1478,
   1.1478,
   1.1478,
   18.73499,
   20.34699,
   21.0238,
   18.89444,
   16.8523,
   16.03122,
   14.59452,
   13.60147,
   11.61895,
   10.58301,
   8.9774,
   7.3425,
   5.1322,
   3.9454,
   1.72422,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0.5,6.5);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(509.3262);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.5","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3022[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3022[20] = {
   0,
   0,
   0,
   0.2268688,
   0.2241283,
   0.2272805,
   0.2329249,
   0.243122,
   0.2752992,
   0.325916,
   0.2904229,
   0.2992709,
   0.3448572,
   0.350582,
   0.3894734,
   0.4760875,
   0.6740166,
   0.8100066,
   1.94779,
   3.165027};
   Double_t _fehx3022[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3022[20] = {
   0,
   0,
   0,
   0.2268688,
   0.2241283,
   0.2272805,
   0.2329249,
   0.243122,
   0.2752992,
   0.325916,
   0.2904229,
   0.2992709,
   0.3448572,
   0.350582,
   0.3894734,
   0.4760875,
   0.6740166,
   0.8100066,
   1.94779,
   3.165027};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0.5,6.5);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3023[20] = {
   0,
   0,
   0,
   0.1834476,
   0.1892453,
   0.1901038,
   0.19311,
   0.2047589,
   0.2283171,
   0.2300065,
   0.2350548,
   0.2397792,
   0.2443687,
   0.2446648,
   0.2666324,
   0.2888565,
   0.2868895,
   0.3535143,
   0.586463,
   2.004153};
   Double_t _fehx3023[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3023[20] = {
   0,
   0,
   0,
   0.1834476,
   0.1892453,
   0.1901038,
   0.19311,
   0.2047589,
   0.2283171,
   0.2300065,
   0.2350548,
   0.2397792,
   0.2443687,
   0.2446648,
   0.2666324,
   0.2888565,
   0.2868895,
   0.3535143,
   0.586463,
   2.004153};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0.5,6.5);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3024[20] = {
   10,
   10,
   10,
   1.000559,
   0.9419258,
   1.073475,
   0.9849327,
   0.922933,
   0.9763424,
   0.981622,
   1.03209,
   0.9275133,
   1.062991,
   1.100439,
   1.288121,
   0.9776311,
   1.273767,
   0.7065286,
   2.339043,
   14.33693};
   Double_t _felx3024[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3024[20] = {
   0,
   0,
   0,
   0.05340587,
   0.04629313,
   0.05106002,
   0.05212817,
   0.05476599,
   0.06090257,
   0.06725963,
   0.0758808,
   0.07982763,
   0.1004432,
   0.1231834,
   0.1767301,
   0.1934044,
   0.3314024,
   0.5047836,
   1.671143,
   14.33693};
   Double_t _fehx3024[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3024[20] = {
   0,
   0,
   0,
   0.05340587,
   0.04629313,
   0.05106002,
   0.05212817,
   0.05476599,
   0.06090257,
   0.06725963,
   0.0758808,
   0.07982763,
   0.1004432,
   0.1204766,
   0.1719641,
   0.1858296,
   0.314095,
   0.4060702,
   1.344341,
   10.89011};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0.5,6.5);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(27.74974);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nc_pio_score_all",20,1,6);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(1,1,6,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
