#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Mar 12 00:26:48 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(-230.7692,-335.72,1692.308,37123.56);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__10->SetBinContent(2,82.38239);
   hmc__10->SetBinContent(3,3032.221);
   hmc__10->SetBinContent(4,8024.46);
   hmc__10->SetBinContent(5,12377.8);
   hmc__10->SetBinContent(6,14499.4);
   hmc__10->SetBinContent(7,14858.67);
   hmc__10->SetBinContent(8,13937.04);
   hmc__10->SetBinContent(9,11898.09);
   hmc__10->SetBinContent(10,9601.846);
   hmc__10->SetBinContent(11,7576.555);
   hmc__10->SetBinContent(12,5694.574);
   hmc__10->SetBinContent(13,4131.184);
   hmc__10->SetBinContent(14,2965.143);
   hmc__10->SetBinContent(15,2066.961);
   hmc__10->SetBinContent(16,5892.394);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,36.92351);
   hmc__10->SetBinError(3,636.2588);
   hmc__10->SetBinError(4,1360.352);
   hmc__10->SetBinError(5,2000.174);
   hmc__10->SetBinError(6,2281.093);
   hmc__10->SetBinError(7,2332.381);
   hmc__10->SetBinError(8,2229.58);
   hmc__10->SetBinError(9,1911.237);
   hmc__10->SetBinError(10,1599.683);
   hmc__10->SetBinError(11,1403.104);
   hmc__10->SetBinError(12,1135.858);
   hmc__10->SetBinError(13,876.4004);
   hmc__10->SetBinError(14,645.9625);
   hmc__10->SetBinError(15,514.282);
   hmc__10->SetBinError(16,1503.377);
   hmc__10->SetMinimum(-335.72);
   hmc__10->SetMaximum(35250.6);
   hmc__10->SetEntries(99758.88);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",15,0,1500);
   hs4_stack_4->SetMinimum(-5.219833e-10);
   hs4_stack_4->SetMaximum(15601.61);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.175579);
   hbadmatch_stack_1->SetBinContent(3,57.84693);
   hbadmatch_stack_1->SetBinContent(4,85.54893);
   hbadmatch_stack_1->SetBinContent(5,97.97306);
   hbadmatch_stack_1->SetBinContent(6,83.05334);
   hbadmatch_stack_1->SetBinContent(7,85.88808);
   hbadmatch_stack_1->SetBinContent(8,75.31853);
   hbadmatch_stack_1->SetBinContent(9,56.82885);
   hbadmatch_stack_1->SetBinContent(10,36.47649);
   hbadmatch_stack_1->SetBinContent(11,47.9803);
   hbadmatch_stack_1->SetBinContent(12,24.22792);
   hbadmatch_stack_1->SetBinContent(13,23.21718);
   hbadmatch_stack_1->SetBinContent(14,16.4805);
   hbadmatch_stack_1->SetBinContent(15,14.32313);
   hbadmatch_stack_1->SetBinContent(16,51.20259);
   hbadmatch_stack_1->SetBinError(2,0.4797864);
   hbadmatch_stack_1->SetBinError(3,4.621686);
   hbadmatch_stack_1->SetBinError(4,5.706365);
   hbadmatch_stack_1->SetBinError(5,6.588067);
   hbadmatch_stack_1->SetBinError(6,4.99035);
   hbadmatch_stack_1->SetBinError(7,10.29842);
   hbadmatch_stack_1->SetBinError(8,5.797901);
   hbadmatch_stack_1->SetBinError(9,4.303188);
   hbadmatch_stack_1->SetBinError(10,3.236669);
   hbadmatch_stack_1->SetBinError(11,5.487381);
   hbadmatch_stack_1->SetBinError(12,2.705005);
   hbadmatch_stack_1->SetBinError(13,2.709207);
   hbadmatch_stack_1->SetBinError(14,2.239854);
   hbadmatch_stack_1->SetBinError(15,1.979114);
   hbadmatch_stack_1->SetBinError(16,4.977513);
   hbadmatch_stack_1->SetEntries(2841);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,2.110787);
   hext_stack_2->SetBinContent(3,115.2019);
   hext_stack_2->SetBinContent(4,221.124);
   hext_stack_2->SetBinContent(5,305.8497);
   hext_stack_2->SetBinContent(6,359.1649);
   hext_stack_2->SetBinContent(7,339.8361);
   hext_stack_2->SetBinContent(8,331.6999);
   hext_stack_2->SetBinContent(9,277.0656);
   hext_stack_2->SetBinContent(10,206.0796);
   hext_stack_2->SetBinContent(11,144.4577);
   hext_stack_2->SetBinContent(12,95.48387);
   hext_stack_2->SetBinContent(13,71.515);
   hext_stack_2->SetBinContent(14,44.40912);
   hext_stack_2->SetBinContent(15,37.29675);
   hext_stack_2->SetBinContent(16,133.4249);
   hext_stack_2->SetBinError(2,0.8669371);
   hext_stack_2->SetBinError(3,7.054724);
   hext_stack_2->SetBinError(4,9.542694);
   hext_stack_2->SetBinError(5,11.46873);
   hext_stack_2->SetBinError(6,12.39697);
   hext_stack_2->SetBinError(7,12.17978);
   hext_stack_2->SetBinError(8,11.92664);
   hext_stack_2->SetBinError(9,10.96696);
   hext_stack_2->SetBinError(10,9.537982);
   hext_stack_2->SetBinError(11,7.873426);
   hext_stack_2->SetBinError(12,6.392685);
   hext_stack_2->SetBinError(13,5.47596);
   hext_stack_2->SetBinError(14,4.447843);
   hext_stack_2->SetBinError(15,3.898439);
   hext_stack_2->SetBinError(16,7.580897);
   hext_stack_2->SetEntries(6678);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,2.696215);
   hdirt_stack_3->SetBinContent(3,42.43081);
   hdirt_stack_3->SetBinContent(4,80.11868);
   hdirt_stack_3->SetBinContent(5,84.05792);
   hdirt_stack_3->SetBinContent(6,82.21005);
   hdirt_stack_3->SetBinContent(7,69.35553);
   hdirt_stack_3->SetBinContent(8,56.32952);
   hdirt_stack_3->SetBinContent(9,40.39261);
   hdirt_stack_3->SetBinContent(10,30.60834);
   hdirt_stack_3->SetBinContent(11,30.31781);
   hdirt_stack_3->SetBinContent(12,21.66309);
   hdirt_stack_3->SetBinContent(13,17.59616);
   hdirt_stack_3->SetBinContent(14,12.73801);
   hdirt_stack_3->SetBinContent(15,12.51299);
   hdirt_stack_3->SetBinContent(16,39.38823);
   hdirt_stack_3->SetBinError(2,1.818472);
   hdirt_stack_3->SetBinError(3,4.001938);
   hdirt_stack_3->SetBinError(4,6.985917);
   hdirt_stack_3->SetBinError(5,5.101654);
   hdirt_stack_3->SetBinError(6,5.316921);
   hdirt_stack_3->SetBinError(7,4.533025);
   hdirt_stack_3->SetBinError(8,5.2276);
   hdirt_stack_3->SetBinError(9,4.44551);
   hdirt_stack_3->SetBinError(10,3.650915);
   hdirt_stack_3->SetBinError(11,4.534526);
   hdirt_stack_3->SetBinError(12,3.409018);
   hdirt_stack_3->SetBinError(13,2.568534);
   hdirt_stack_3->SetBinError(14,2.176862);
   hdirt_stack_3->SetBinError(15,2.27305);
   hdirt_stack_3->SetBinError(16,3.659528);
   hdirt_stack_3->SetEntries(2501);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,1.523409);
   houtFV_stack_4->SetBinContent(3,58.12828);
   houtFV_stack_4->SetBinContent(4,126.5231);
   houtFV_stack_4->SetBinContent(5,186.6869);
   houtFV_stack_4->SetBinContent(6,183.3089);
   houtFV_stack_4->SetBinContent(7,173.2095);
   houtFV_stack_4->SetBinContent(8,136.7579);
   houtFV_stack_4->SetBinContent(9,133.2554);
   houtFV_stack_4->SetBinContent(10,97.94824);
   houtFV_stack_4->SetBinContent(11,75.84316);
   houtFV_stack_4->SetBinContent(12,52.46838);
   houtFV_stack_4->SetBinContent(13,38.0054);
   houtFV_stack_4->SetBinContent(14,31.89681);
   houtFV_stack_4->SetBinContent(15,24.44978);
   houtFV_stack_4->SetBinContent(16,64.08462);
   houtFV_stack_4->SetBinError(2,0.6470716);
   houtFV_stack_4->SetBinError(3,4.296632);
   houtFV_stack_4->SetBinError(4,6.888842);
   houtFV_stack_4->SetBinError(5,8.494144);
   houtFV_stack_4->SetBinError(6,8.714592);
   houtFV_stack_4->SetBinError(7,7.909834);
   houtFV_stack_4->SetBinError(8,6.459488);
   houtFV_stack_4->SetBinError(9,8.672907);
   houtFV_stack_4->SetBinError(10,6.885007);
   houtFV_stack_4->SetBinError(11,5.360546);
   houtFV_stack_4->SetBinError(12,4.589026);
   houtFV_stack_4->SetBinError(13,4.015682);
   houtFV_stack_4->SetBinError(14,3.387991);
   houtFV_stack_4->SetBinError(15,2.643332);
   houtFV_stack_4->SetBinError(16,5.934077);
   houtFV_stack_4->SetEntries(5305);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(33);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(24);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.8644038);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.052164);
   hNCpi0inFVres_stack_7->SetBinContent(5,14.49908);
   hNCpi0inFVres_stack_7->SetBinContent(6,23.50467);
   hNCpi0inFVres_stack_7->SetBinContent(7,30.24056);
   hNCpi0inFVres_stack_7->SetBinContent(8,31.78652);
   hNCpi0inFVres_stack_7->SetBinContent(9,29.41817);
   hNCpi0inFVres_stack_7->SetBinContent(10,27.185);
   hNCpi0inFVres_stack_7->SetBinContent(11,20.03876);
   hNCpi0inFVres_stack_7->SetBinContent(12,14.82343);
   hNCpi0inFVres_stack_7->SetBinContent(13,10.99362);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.089544);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.732309);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.58427);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2652967);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7811653);
   hNCpi0inFVres_stack_7->SetBinError(5,1.175513);
   hNCpi0inFVres_stack_7->SetBinError(6,1.51659);
   hNCpi0inFVres_stack_7->SetBinError(7,1.782943);
   hNCpi0inFVres_stack_7->SetBinError(8,1.799043);
   hNCpi0inFVres_stack_7->SetBinError(9,1.752189);
   hNCpi0inFVres_stack_7->SetBinError(10,1.709711);
   hNCpi0inFVres_stack_7->SetBinError(11,1.480708);
   hNCpi0inFVres_stack_7->SetBinError(12,1.254141);
   hNCpi0inFVres_stack_7->SetBinError(13,1.221627);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9708795);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7622522);
   hNCpi0inFVres_stack_7->SetBinError(16,1.02932);
   hNCpi0inFVres_stack_7->SetEntries(4383);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.299266);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.816178);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.46107);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.37944);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.48889);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.96019);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.63494);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.89251);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.68808);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.75566);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.49742);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.917175);
   hNCpi0inFVdis_stack_8->SetBinContent(16,31.1721);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.472454);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7849347);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.276036);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.27629);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.384206);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.331609);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.28994);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.231278);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.178572);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.151709);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.075819);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.114964);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.766271);
   hNCpi0inFVdis_stack_8->SetEntries(3426);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,15.98348);
   hCCpi0inFV_stack_10->SetBinContent(4,71.77069);
   hCCpi0inFV_stack_10->SetBinContent(5,210.967);
   hCCpi0inFV_stack_10->SetBinContent(6,462.5031);
   hCCpi0inFV_stack_10->SetBinContent(7,749.0702);
   hCCpi0inFV_stack_10->SetBinContent(8,979.6206);
   hCCpi0inFV_stack_10->SetBinContent(9,1074.471);
   hCCpi0inFV_stack_10->SetBinContent(10,1070.483);
   hCCpi0inFV_stack_10->SetBinContent(11,979.2025);
   hCCpi0inFV_stack_10->SetBinContent(12,844.5571);
   hCCpi0inFV_stack_10->SetBinContent(13,672.8572);
   hCCpi0inFV_stack_10->SetBinContent(14,547.0373);
   hCCpi0inFV_stack_10->SetBinContent(15,424.6244);
   hCCpi0inFV_stack_10->SetBinContent(16,1461.134);
   hCCpi0inFV_stack_10->SetBinError(3,1.992043);
   hCCpi0inFV_stack_10->SetBinError(4,4.188403);
   hCCpi0inFV_stack_10->SetBinError(5,7.260808);
   hCCpi0inFV_stack_10->SetBinError(6,10.8405);
   hCCpi0inFV_stack_10->SetBinError(7,13.80308);
   hCCpi0inFV_stack_10->SetBinError(8,15.67906);
   hCCpi0inFV_stack_10->SetBinError(9,16.46036);
   hCCpi0inFV_stack_10->SetBinError(10,16.37683);
   hCCpi0inFV_stack_10->SetBinError(11,15.74155);
   hCCpi0inFV_stack_10->SetBinError(12,14.61199);
   hCCpi0inFV_stack_10->SetBinError(13,12.98513);
   hCCpi0inFV_stack_10->SetBinError(14,11.75878);
   hCCpi0inFV_stack_10->SetBinError(15,10.38004);
   hCCpi0inFV_stack_10->SetBinError(16,19.30553);
   hCCpi0inFV_stack_10->SetEntries(40858);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.857266);
   hNCinFV_stack_11->SetBinContent(3,103.3107);
   hNCinFV_stack_11->SetBinContent(4,243.6909);
   hNCinFV_stack_11->SetBinContent(5,303.8726);
   hNCinFV_stack_11->SetBinContent(6,309.9799);
   hNCinFV_stack_11->SetBinContent(7,277.8855);
   hNCinFV_stack_11->SetBinContent(8,217.434);
   hNCinFV_stack_11->SetBinContent(9,184.6587);
   hNCinFV_stack_11->SetBinContent(10,122.663);
   hNCinFV_stack_11->SetBinContent(11,83.83357);
   hNCinFV_stack_11->SetBinContent(12,64.50954);
   hNCinFV_stack_11->SetBinContent(13,56.33352);
   hNCinFV_stack_11->SetBinContent(14,38.25499);
   hNCinFV_stack_11->SetBinContent(15,22.90815);
   hNCinFV_stack_11->SetBinContent(16,83.54466);
   hNCinFV_stack_11->SetBinError(2,0.6799255);
   hNCinFV_stack_11->SetBinError(3,5.133579);
   hNCinFV_stack_11->SetBinError(4,7.826344);
   hNCinFV_stack_11->SetBinError(5,8.679391);
   hNCinFV_stack_11->SetBinError(6,8.939234);
   hNCinFV_stack_11->SetBinError(7,8.373496);
   hNCinFV_stack_11->SetBinError(8,7.485343);
   hNCinFV_stack_11->SetBinError(9,6.826309);
   hNCinFV_stack_11->SetBinError(10,5.576431);
   hNCinFV_stack_11->SetBinError(11,4.601853);
   hNCinFV_stack_11->SetBinError(12,4.07181);
   hNCinFV_stack_11->SetBinError(13,3.837935);
   hNCinFV_stack_11->SetBinError(14,3.147452);
   hNCinFV_stack_11->SetBinError(15,2.45221);
   hNCinFV_stack_11->SetBinError(16,4.587968);
   hNCinFV_stack_11->SetEntries(8988);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,72.99124);
   hnumuCCinFV_stack_12->SetBinContent(3,2636.761);
   hnumuCCinFV_stack_12->SetBinContent(4,7184.768);
   hnumuCCinFV_stack_12->SetBinContent(5,11161.86);
   hnumuCCinFV_stack_12->SetBinContent(6,12972.87);
   hnumuCCinFV_stack_12->SetBinContent(7,13110.51);
   hnumuCCinFV_stack_12->SetBinContent(8,12085.35);
   hnumuCCinFV_stack_12->SetBinContent(9,10076.16);
   hnumuCCinFV_stack_12->SetBinContent(10,7984.733);
   hnumuCCinFV_stack_12->SetBinContent(11,6173.783);
   hnumuCCinFV_stack_12->SetBinContent(12,4558.394);
   hnumuCCinFV_stack_12->SetBinContent(13,3217.74);
   hnumuCCinFV_stack_12->SetBinContent(14,2247.505);
   hnumuCCinFV_stack_12->SetBinContent(15,1508.953);
   hnumuCCinFV_stack_12->SetBinContent(16,3985.824);
   hnumuCCinFV_stack_12->SetBinError(2,5.620414);
   hnumuCCinFV_stack_12->SetBinError(3,34.96893);
   hnumuCCinFV_stack_12->SetBinError(4,58.34417);
   hnumuCCinFV_stack_12->SetBinError(5,74.61226);
   hnumuCCinFV_stack_12->SetBinError(6,80.64636);
   hnumuCCinFV_stack_12->SetBinError(7,81.90188);
   hnumuCCinFV_stack_12->SetBinError(8,80.10003);
   hnumuCCinFV_stack_12->SetBinError(9,72.05823);
   hnumuCCinFV_stack_12->SetBinError(10,63.44226);
   hnumuCCinFV_stack_12->SetBinError(11,56.65003);
   hnumuCCinFV_stack_12->SetBinError(12,48.74403);
   hnumuCCinFV_stack_12->SetBinError(13,41.42526);
   hnumuCCinFV_stack_12->SetBinError(14,34.05125);
   hnumuCCinFV_stack_12->SetBinError(15,27.13224);
   hnumuCCinFV_stack_12->SetBinError(16,43.82856);
   hnumuCCinFV_stack_12->SetEntries(352594);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.6053846);
   hnueCCinFV_stack_13->SetBinContent(4,2.424881);
   hnueCCinFV_stack_13->SetBinContent(5,5.8041);
   hnueCCinFV_stack_13->SetBinContent(6,7.812567);
   hnueCCinFV_stack_13->SetBinContent(7,6.669445);
   hnueCCinFV_stack_13->SetBinContent(8,4.892336);
   hnueCCinFV_stack_13->SetBinContent(9,7.649369);
   hnueCCinFV_stack_13->SetBinContent(10,8.643616);
   hnueCCinFV_stack_13->SetBinContent(11,5.99653);
   hnueCCinFV_stack_13->SetBinContent(12,5.703218);
   hnueCCinFV_stack_13->SetBinContent(13,10.16974);
   hnueCCinFV_stack_13->SetBinContent(14,8.20622);
   hnueCCinFV_stack_13->SetBinContent(15,6.21585);
   hnueCCinFV_stack_13->SetBinContent(16,32.00695);
   hnueCCinFV_stack_13->SetBinError(3,0.3498222);
   hnueCCinFV_stack_13->SetBinError(4,0.8332736);
   hnueCCinFV_stack_13->SetBinError(5,1.685663);
   hnueCCinFV_stack_13->SetBinError(6,2.735148);
   hnueCCinFV_stack_13->SetBinError(7,1.639069);
   hnueCCinFV_stack_13->SetBinError(8,1.437559);
   hnueCCinFV_stack_13->SetBinError(9,1.346098);
   hnueCCinFV_stack_13->SetBinError(10,1.684239);
   hnueCCinFV_stack_13->SetBinError(11,1.251395);
   hnueCCinFV_stack_13->SetBinError(12,1.277245);
   hnueCCinFV_stack_13->SetBinError(13,1.613342);
   hnueCCinFV_stack_13->SetBinError(14,1.443469);
   hnueCCinFV_stack_13->SetBinError(15,1.260004);
   hnueCCinFV_stack_13->SetBinError(16,2.829044);
   hnueCCinFV_stack_13->SetEntries(452);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__11->SetBinContent(2,82.38239);
   hmcerror__11->SetBinContent(3,3032.221);
   hmcerror__11->SetBinContent(4,8024.46);
   hmcerror__11->SetBinContent(5,12377.8);
   hmcerror__11->SetBinContent(6,14499.4);
   hmcerror__11->SetBinContent(7,14858.67);
   hmcerror__11->SetBinContent(8,13937.04);
   hmcerror__11->SetBinContent(9,11898.09);
   hmcerror__11->SetBinContent(10,9601.846);
   hmcerror__11->SetBinContent(11,7576.555);
   hmcerror__11->SetBinContent(12,5694.574);
   hmcerror__11->SetBinContent(13,4131.184);
   hmcerror__11->SetBinContent(14,2965.143);
   hmcerror__11->SetBinContent(15,2066.961);
   hmcerror__11->SetBinContent(16,5892.394);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,36.92351);
   hmcerror__11->SetBinError(3,636.2588);
   hmcerror__11->SetBinError(4,1360.352);
   hmcerror__11->SetBinError(5,2000.174);
   hmcerror__11->SetBinError(6,2281.093);
   hmcerror__11->SetBinError(7,2332.381);
   hmcerror__11->SetBinError(8,2229.58);
   hmcerror__11->SetBinError(9,1911.237);
   hmcerror__11->SetBinError(10,1599.683);
   hmcerror__11->SetBinError(11,1403.104);
   hmcerror__11->SetBinError(12,1135.858);
   hmcerror__11->SetBinError(13,876.4004);
   hmcerror__11->SetBinError(14,645.9625);
   hmcerror__11->SetBinError(15,514.282);
   hmcerror__11->SetBinError(16,1503.377);
   hmcerror__11->SetEntries(99758.88);

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
   
   Double_t _fx3013[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3013[15] = {
   0,
   137,
   3755,
   9590,
   14571,
   16786,
   16596,
   15145,
   12623,
   9911,
   7507,
   5364,
   3683,
   2493,
   1679};
   Double_t _felx3013[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[15] = {
   0,
   11.7047,
   61.27805,
   97.92855,
   120.7104,
   129.5608,
   128.8255,
   123.065,
   112.3521,
   99.55401,
   86.64295,
   73.23933,
   60.68773,
   49.92995,
   40.9756};
   Double_t _fehx3013[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[15] = {
   1.1478,
   11.7047,
   61.27805,
   97.92855,
   120.7104,
   129.5608,
   128.8255,
   123.065,
   112.3521,
   99.55401,
   86.64295,
   73.23933,
   60.68773,
   49.92995,
   40.9756};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(18607.12);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.08#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 119840.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 706.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 2551.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 583.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 1320.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  223.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  151.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 8103.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 2031.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 94992.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 80.8","F");

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
   TText *pt_LaTex = pt->AddText("numuCC_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3014[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3014[15] = {
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
   Double_t _felx3014[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[15] = {
   0,
   0.4481966,
   0.2098326,
   0.1695257,
   0.1615936,
   0.1573233,
   0.156971,
   0.1599751,
   0.160634,
   0.1666016,
   0.1851902,
   0.1994632,
   0.2121427,
   0.217852,
   0.2488106};
   Double_t _fehx3014[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[15] = {
   0,
   0.4481966,
   0.2098326,
   0.1695257,
   0.1615936,
   0.1573233,
   0.156971,
   0.1599751,
   0.160634,
   0.1666016,
   0.1851902,
   0.1994632,
   0.2121427,
   0.217852,
   0.2488106};
   grae = new TGraphAsymmErrors(15,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1650);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3015[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3015[15] = {
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
   Double_t _felx3015[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[15] = {
   0,
   0.260063,
   0.1783913,
   0.1536864,
   0.1479951,
   0.1483755,
   0.1522118,
   0.1567464,
   0.1581403,
   0.1633015,
   0.1742116,
   0.1784995,
   0.1856533,
   0.1892518,
   0.1923734};
   Double_t _fehx3015[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[15] = {
   0,
   0.260063,
   0.1783913,
   0.1536864,
   0.1479951,
   0.1483755,
   0.1522118,
   0.1567464,
   0.1581403,
   0.1633015,
   0.1742116,
   0.1784995,
   0.1856533,
   0.1892518,
   0.1923734};
   grae = new TGraphAsymmErrors(15,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1650);
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
   
   Double_t _fx3016[15] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3016[15] = {
   10,
   1.662977,
   1.238366,
   1.195096,
   1.177188,
   1.157703,
   1.116923,
   1.086672,
   1.060927,
   1.032197,
   0.9908197,
   0.9419493,
   0.8915121,
   0.8407688,
   0.8123035};
   Double_t _felx3016[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[15] = {
   0,
   0.1420777,
   0.02020897,
   0.01220376,
   0.009752166,
   0.008935597,
   0.008670051,
   0.008830066,
   0.009442874,
   0.01036822,
   0.01143566,
   0.01286125,
   0.01469015,
   0.01683897,
   0.01982408};
   Double_t _fehx3016[15] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[15] = {
   0,
   0.1420777,
   0.02020897,
   0.01220376,
   0.009752166,
   0.008935597,
   0.008670051,
   0.008830066,
   0.009442874,
   0.01036822,
   0.01143566,
   0.01286125,
   0.01469015,
   0.01683897,
   0.01982408};
   grae = new TGraphAsymmErrors(15,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0.7132315);
   Graph_Graph3016->SetMaximum(10.92075);
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
   
   TH1F *hist__12 = new TH1F("hist__12","numuCC_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
