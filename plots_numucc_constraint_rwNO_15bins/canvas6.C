#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Mar 11 22:37:06 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",112,135,1200,900);
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
   pad1->Range(-230.7692,-200.26,1692.308,22144.54);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__16->SetBinContent(3,594.3499);
   hmc__16->SetBinContent(4,3716.817);
   hmc__16->SetBinContent(5,6968.531);
   hmc__16->SetBinContent(6,8837.696);
   hmc__16->SetBinContent(7,9374.263);
   hmc__16->SetBinContent(8,8867.114);
   hmc__16->SetBinContent(9,7542.556);
   hmc__16->SetBinContent(10,6048.529);
   hmc__16->SetBinContent(11,4679.901);
   hmc__16->SetBinContent(12,3434.877);
   hmc__16->SetBinContent(13,2488.561);
   hmc__16->SetBinContent(14,1753.078);
   hmc__16->SetBinContent(15,1198.86);
   hmc__16->SetBinContent(16,3134.199);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,0.3895343);
   hmc__16->SetBinError(3,127.3089);
   hmc__16->SetBinError(4,663.8698);
   hmc__16->SetBinError(5,1247.795);
   hmc__16->SetBinError(6,1584.717);
   hmc__16->SetBinError(7,1688.994);
   hmc__16->SetBinError(8,1649.42);
   hmc__16->SetBinError(9,1432.089);
   hmc__16->SetBinError(10,1198.676);
   hmc__16->SetBinError(11,1018.624);
   hmc__16->SetBinError(12,821.7636);
   hmc__16->SetBinError(13,604.9939);
   hmc__16->SetBinError(14,437.4856);
   hmc__16->SetBinError(15,349.6627);
   hmc__16->SetBinError(16,947.3878);
   hmc__16->SetMinimum(-200.26);
   hmc__16->SetMaximum(21027.3);
   hmc__16->SetEntries(56771.9);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",15,0,1500);
   hs6_stack_6->SetMinimum(-3.571482e-09);
   hs6_stack_6->SetMaximum(9842.977);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(3,2.900271);
   hbadmatch_stack_1->SetBinContent(4,15.01879);
   hbadmatch_stack_1->SetBinContent(5,23.65941);
   hbadmatch_stack_1->SetBinContent(6,21.41439);
   hbadmatch_stack_1->SetBinContent(7,27.8863);
   hbadmatch_stack_1->SetBinContent(8,26.6687);
   hbadmatch_stack_1->SetBinContent(9,21.14471);
   hbadmatch_stack_1->SetBinContent(10,14.6513);
   hbadmatch_stack_1->SetBinContent(11,19.40281);
   hbadmatch_stack_1->SetBinContent(12,11.50869);
   hbadmatch_stack_1->SetBinContent(13,11.35795);
   hbadmatch_stack_1->SetBinContent(14,7.987428);
   hbadmatch_stack_1->SetBinContent(15,7.488602);
   hbadmatch_stack_1->SetBinContent(16,27.50401);
   hbadmatch_stack_1->SetBinError(3,1.00247);
   hbadmatch_stack_1->SetBinError(4,3.186893);
   hbadmatch_stack_1->SetBinError(5,3.626401);
   hbadmatch_stack_1->SetBinError(6,2.606546);
   hbadmatch_stack_1->SetBinError(7,4.344976);
   hbadmatch_stack_1->SetBinError(8,3.735619);
   hbadmatch_stack_1->SetBinError(9,2.520859);
   hbadmatch_stack_1->SetBinError(10,2.030496);
   hbadmatch_stack_1->SetBinError(11,3.388156);
   hbadmatch_stack_1->SetBinError(12,1.912044);
   hbadmatch_stack_1->SetBinError(13,2.027215);
   hbadmatch_stack_1->SetBinError(14,1.413417);
   hbadmatch_stack_1->SetBinError(15,1.446387);
   hbadmatch_stack_1->SetBinError(16,3.845711);
   hbadmatch_stack_1->SetEntries(865);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(3,2.192989);
   hext_stack_2->SetBinContent(4,15.13462);
   hext_stack_2->SetBinContent(5,39.35009);
   hext_stack_2->SetBinContent(6,56.72796);
   hext_stack_2->SetBinContent(7,61.05762);
   hext_stack_2->SetBinContent(8,69.20119);
   hext_stack_2->SetBinContent(9,57.1042);
   hext_stack_2->SetBinContent(10,54.94157);
   hext_stack_2->SetBinContent(11,35.08499);
   hext_stack_2->SetBinContent(12,23.3328);
   hext_stack_2->SetBinContent(13,26.22642);
   hext_stack_2->SetBinContent(14,13.60919);
   hext_stack_2->SetBinContent(15,11.33841);
   hext_stack_2->SetBinContent(16,54.01581);
   hext_stack_2->SetBinError(3,0.9009267);
   hext_stack_2->SetBinError(4,2.549209);
   hext_stack_2->SetBinError(5,4.190348);
   hext_stack_2->SetBinError(6,4.843629);
   hext_stack_2->SetBinError(7,5.087821);
   hext_stack_2->SetBinError(8,5.396879);
   hext_stack_2->SetBinError(9,4.894837);
   hext_stack_2->SetBinError(10,4.776442);
   hext_stack_2->SetBinError(11,3.827981);
   hext_stack_2->SetBinError(12,3.129851);
   hext_stack_2->SetBinError(13,3.348365);
   hext_stack_2->SetBinError(14,2.372759);
   hext_stack_2->SetBinError(15,2.212092);
   hext_stack_2->SetBinError(16,4.770432);
   hext_stack_2->SetEntries(1310);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(3,0.2713922);
   hdirt_stack_3->SetBinContent(4,3.424029);
   hdirt_stack_3->SetBinContent(5,6.78068);
   hdirt_stack_3->SetBinContent(6,5.381248);
   hdirt_stack_3->SetBinContent(7,3.696818);
   hdirt_stack_3->SetBinContent(8,4.66);
   hdirt_stack_3->SetBinContent(9,6.368999);
   hdirt_stack_3->SetBinContent(10,2.682694);
   hdirt_stack_3->SetBinContent(11,1.676709);
   hdirt_stack_3->SetBinContent(12,1.67697);
   hdirt_stack_3->SetBinContent(13,0.5758626);
   hdirt_stack_3->SetBinContent(14,0.9222048);
   hdirt_stack_3->SetBinContent(15,0.4727291);
   hdirt_stack_3->SetBinContent(16,2.882503);
   hdirt_stack_3->SetBinError(3,0.2713922);
   hdirt_stack_3->SetBinError(4,0.9797711);
   hdirt_stack_3->SetBinError(5,1.460185);
   hdirt_stack_3->SetBinError(6,1.205667);
   hdirt_stack_3->SetBinError(7,1.022286);
   hdirt_stack_3->SetBinError(8,1.314852);
   hdirt_stack_3->SetBinError(9,2.249315);
   hdirt_stack_3->SetBinError(10,0.9179614);
   hdirt_stack_3->SetBinError(11,0.7217089);
   hdirt_stack_3->SetBinError(12,0.7056709);
   hdirt_stack_3->SetBinError(13,0.3389606);
   hdirt_stack_3->SetBinError(14,0.4668114);
   hdirt_stack_3->SetBinError(15,0.3351816);
   hdirt_stack_3->SetBinError(16,0.9069602);
   hdirt_stack_3->SetEntries(154);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(3,9.553386);
   houtFV_stack_4->SetBinContent(4,47.23592);
   houtFV_stack_4->SetBinContent(5,75.55249);
   houtFV_stack_4->SetBinContent(6,76.34427);
   houtFV_stack_4->SetBinContent(7,77.66451);
   houtFV_stack_4->SetBinContent(8,58.10787);
   houtFV_stack_4->SetBinContent(9,61.69775);
   houtFV_stack_4->SetBinContent(10,37.44786);
   houtFV_stack_4->SetBinContent(11,32.73353);
   houtFV_stack_4->SetBinContent(12,17.67911);
   houtFV_stack_4->SetBinContent(13,15.43283);
   houtFV_stack_4->SetBinContent(14,6.987895);
   houtFV_stack_4->SetBinContent(15,7.78613);
   houtFV_stack_4->SetBinContent(16,16.42773);
   houtFV_stack_4->SetBinError(3,1.565995);
   houtFV_stack_4->SetBinError(4,4.159714);
   houtFV_stack_4->SetBinError(5,5.763304);
   houtFV_stack_4->SetBinError(6,6.006552);
   houtFV_stack_4->SetBinError(7,5.018958);
   houtFV_stack_4->SetBinError(8,4.096659);
   houtFV_stack_4->SetBinError(9,6.530401);
   houtFV_stack_4->SetBinError(10,3.706186);
   houtFV_stack_4->SetBinError(11,3.693822);
   houtFV_stack_4->SetBinError(12,2.382506);
   houtFV_stack_4->SetBinError(13,3.154589);
   houtFV_stack_4->SetBinError(14,1.313191);
   houtFV_stack_4->SetBinError(15,1.378505);
   houtFV_stack_4->SetBinError(16,4.033283);
   houtFV_stack_4->SetEntries(2053);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04832419);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(7);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.125218);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.018354);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.331069);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.837356);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.89491);
   hNCpi0inFVres_stack_7->SetBinContent(8,15.25289);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.31383);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.74645);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.357166);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.8606);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.056125);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.058638);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.291384);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.407552);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1012383);
   hNCpi0inFVres_stack_7->SetBinError(4,0.317295);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5461369);
   hNCpi0inFVres_stack_7->SetBinError(6,0.945663);
   hNCpi0inFVres_stack_7->SetBinError(7,1.119869);
   hNCpi0inFVres_stack_7->SetBinError(8,1.28283);
   hNCpi0inFVres_stack_7->SetBinError(9,1.172502);
   hNCpi0inFVres_stack_7->SetBinError(10,1.221413);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9894431);
   hNCpi0inFVres_stack_7->SetBinError(12,0.803919);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9696774);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6747691);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6013675);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6523328);
   hNCpi0inFVres_stack_7->SetEntries(1893);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5981899);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.200204);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.253274);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.73115);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.612907);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.268394);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.504715);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.556612);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.260922);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.202794);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.978178);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.992132);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.75512);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2246499);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3629715);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6886617);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8004828);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8716686);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9042146);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9365994);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8969397);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8570724);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8414134);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7353538);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7831976);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.127022);
   hNCpi0inFVdis_stack_8->SetEntries(1474);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,3.322793);
   hCCpi0inFV_stack_10->SetBinContent(4,27.70333);
   hCCpi0inFV_stack_10->SetBinContent(5,101.3118);
   hCCpi0inFV_stack_10->SetBinContent(6,242.4383);
   hCCpi0inFV_stack_10->SetBinContent(7,421.0998);
   hCCpi0inFV_stack_10->SetBinContent(8,571.094);
   hCCpi0inFV_stack_10->SetBinContent(9,654.4545);
   hCCpi0inFV_stack_10->SetBinContent(10,642.5213);
   hCCpi0inFV_stack_10->SetBinContent(11,580.6187);
   hCCpi0inFV_stack_10->SetBinContent(12,498.9287);
   hCCpi0inFV_stack_10->SetBinContent(13,397.4044);
   hCCpi0inFV_stack_10->SetBinContent(14,317.7785);
   hCCpi0inFV_stack_10->SetBinContent(15,236.6772);
   hCCpi0inFV_stack_10->SetBinContent(16,727.0339);
   hCCpi0inFV_stack_10->SetBinError(3,0.9207963);
   hCCpi0inFV_stack_10->SetBinError(4,2.554942);
   hCCpi0inFV_stack_10->SetBinError(5,4.986931);
   hCCpi0inFV_stack_10->SetBinError(6,7.854535);
   hCCpi0inFV_stack_10->SetBinError(7,10.34128);
   hCCpi0inFV_stack_10->SetBinError(8,11.97159);
   hCCpi0inFV_stack_10->SetBinError(9,12.85721);
   hCCpi0inFV_stack_10->SetBinError(10,12.72257);
   hCCpi0inFV_stack_10->SetBinError(11,12.13809);
   hCCpi0inFV_stack_10->SetBinError(12,11.24852);
   hCCpi0inFV_stack_10->SetBinError(13,9.957306);
   hCCpi0inFV_stack_10->SetBinError(14,8.962433);
   hCCpi0inFV_stack_10->SetBinError(15,7.761282);
   hCCpi0inFV_stack_10->SetBinError(16,13.65508);
   hCCpi0inFV_stack_10->SetEntries(23176);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(3,19.37004);
   hNCinFV_stack_11->SetBinContent(4,118.0463);
   hNCinFV_stack_11->SetBinContent(5,182.163);
   hNCinFV_stack_11->SetBinContent(6,193.5677);
   hNCinFV_stack_11->SetBinContent(7,179.0275);
   hNCinFV_stack_11->SetBinContent(8,133.7891);
   hNCinFV_stack_11->SetBinContent(9,116.8199);
   hNCinFV_stack_11->SetBinContent(10,74.85944);
   hNCinFV_stack_11->SetBinContent(11,50.90282);
   hNCinFV_stack_11->SetBinContent(12,37.22342);
   hNCinFV_stack_11->SetBinContent(13,30.16429);
   hNCinFV_stack_11->SetBinContent(14,19.29674);
   hNCinFV_stack_11->SetBinContent(15,11.73374);
   hNCinFV_stack_11->SetBinContent(16,39.66801);
   hNCinFV_stack_11->SetBinError(3,2.262628);
   hNCinFV_stack_11->SetBinError(4,5.478685);
   hNCinFV_stack_11->SetBinError(5,6.749767);
   hNCinFV_stack_11->SetBinError(6,7.116448);
   hNCinFV_stack_11->SetBinError(7,6.722052);
   hNCinFV_stack_11->SetBinError(8,5.859192);
   hNCinFV_stack_11->SetBinError(9,5.424682);
   hNCinFV_stack_11->SetBinError(10,4.335673);
   hNCinFV_stack_11->SetBinError(11,3.613142);
   hNCinFV_stack_11->SetBinError(12,3.068695);
   hNCinFV_stack_11->SetBinError(13,2.798845);
   hNCinFV_stack_11->SetBinError(14,2.238472);
   hNCinFV_stack_11->SetBinError(15,1.699966);
   hNCinFV_stack_11->SetBinError(16,3.129816);
   hNCinFV_stack_11->SetEntries(5128);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(3,556.2051);
   hnumuCCinFV_stack_12->SetBinContent(4,3487.095);
   hnumuCCinFV_stack_12->SetBinContent(5,6530.895);
   hnumuCCinFV_stack_12->SetBinContent(6,8223.049);
   hnumuCCinFV_stack_12->SetBinContent(7,8582.176);
   hnumuCCinFV_stack_12->SetBinContent(8,7978.724);
   hnumuCCinFV_stack_12->SetBinContent(9,6599.154);
   hnumuCCinFV_stack_12->SetBinContent(10,5195.38);
   hnumuCCinFV_stack_12->SetBinContent(11,3939.671);
   hnumuCCinFV_stack_12->SetBinContent(12,2829.233);
   hnumuCCinFV_stack_12->SetBinContent(13,1990.523);
   hnumuCCinFV_stack_12->SetBinContent(14,1373.536);
   hnumuCCinFV_stack_12->SetBinContent(15,912.6343);
   hnumuCCinFV_stack_12->SetBinContent(16,2235.798);
   hnumuCCinFV_stack_12->SetBinError(3,16.51972);
   hnumuCCinFV_stack_12->SetBinError(4,41.84168);
   hnumuCCinFV_stack_12->SetBinError(5,59.57755);
   hnumuCCinFV_stack_12->SetBinError(6,66.36546);
   hnumuCCinFV_stack_12->SetBinError(7,68.89799);
   hnumuCCinFV_stack_12->SetBinError(8,67.13693);
   hnumuCCinFV_stack_12->SetBinError(9,60.30901);
   hnumuCCinFV_stack_12->SetBinError(10,53.74964);
   hnumuCCinFV_stack_12->SetBinError(11,46.89417);
   hnumuCCinFV_stack_12->SetBinError(12,39.5393);
   hnumuCCinFV_stack_12->SetBinError(13,33.43433);
   hnumuCCinFV_stack_12->SetBinError(14,27.32198);
   hnumuCCinFV_stack_12->SetBinError(15,22.36789);
   hnumuCCinFV_stack_12->SetBinError(16,34.40359);
   hnumuCCinFV_stack_12->SetEntries(208165);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.4086692);
   hnueCCinFV_stack_13->SetBinContent(4,1.542641);
   hnueCCinFV_stack_13->SetBinContent(5,4.287528);
   hnueCCinFV_stack_13->SetBinContent(6,5.682519);
   hnueCCinFV_stack_13->SetBinContent(7,3.861034);
   hnueCCinFV_stack_13->SetBinContent(8,1.948746);
   hnueCCinFV_stack_13->SetBinContent(9,4.23024);
   hnueCCinFV_stack_13->SetBinContent(10,3.597808);
   hnueCCinFV_stack_13->SetBinContent(11,2.8691);
   hnueCCinFV_stack_13->SetBinContent(12,2.172739);
   hnueCCinFV_stack_13->SetBinContent(13,4.617124);
   hnueCCinFV_stack_13->SetBinContent(14,3.9231);
   hnueCCinFV_stack_13->SetBinContent(15,2.445722);
   hnueCCinFV_stack_13->SetBinContent(16,12.70586);
   hnueCCinFV_stack_13->SetBinError(3,0.2892725);
   hnueCCinFV_stack_13->SetBinError(4,0.7052656);
   hnueCCinFV_stack_13->SetBinError(5,1.562761);
   hnueCCinFV_stack_13->SetBinError(6,2.618012);
   hnueCCinFV_stack_13->SetBinError(7,1.109632);
   hnueCCinFV_stack_13->SetBinError(8,0.6854446);
   hnueCCinFV_stack_13->SetBinError(9,0.957913);
   hnueCCinFV_stack_13->SetBinError(10,1.072189);
   hnueCCinFV_stack_13->SetBinError(11,0.8696035);
   hnueCCinFV_stack_13->SetBinError(12,0.7167144);
   hnueCCinFV_stack_13->SetBinError(13,1.107254);
   hnueCCinFV_stack_13->SetBinError(14,1.062221);
   hnueCCinFV_stack_13->SetBinError(15,0.7600838);
   hnueCCinFV_stack_13->SetBinError(16,1.807431);
   hnueCCinFV_stack_13->SetEntries(212);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__17->SetBinContent(3,594.3499);
   hmcerror__17->SetBinContent(4,3716.817);
   hmcerror__17->SetBinContent(5,6968.531);
   hmcerror__17->SetBinContent(6,8837.696);
   hmcerror__17->SetBinContent(7,9374.263);
   hmcerror__17->SetBinContent(8,8867.114);
   hmcerror__17->SetBinContent(9,7542.556);
   hmcerror__17->SetBinContent(10,6048.529);
   hmcerror__17->SetBinContent(11,4679.901);
   hmcerror__17->SetBinContent(12,3434.877);
   hmcerror__17->SetBinContent(13,2488.561);
   hmcerror__17->SetBinContent(14,1753.078);
   hmcerror__17->SetBinContent(15,1198.86);
   hmcerror__17->SetBinContent(16,3134.199);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,0.3895343);
   hmcerror__17->SetBinError(3,127.3089);
   hmcerror__17->SetBinError(4,663.8698);
   hmcerror__17->SetBinError(5,1247.795);
   hmcerror__17->SetBinError(6,1584.717);
   hmcerror__17->SetBinError(7,1688.994);
   hmcerror__17->SetBinError(8,1649.42);
   hmcerror__17->SetBinError(9,1432.089);
   hmcerror__17->SetBinError(10,1198.676);
   hmcerror__17->SetBinError(11,1018.624);
   hmcerror__17->SetBinError(12,821.7636);
   hmcerror__17->SetBinError(13,604.9939);
   hmcerror__17->SetBinError(14,437.4856);
   hmcerror__17->SetBinError(15,349.6627);
   hmcerror__17->SetBinError(16,947.3878);
   hmcerror__17->SetEntries(56771.9);

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
   
   Double_t _fx3021[15] = {
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
   Double_t _fy3021[15] = {
   0,
   0,
   562,
   3967,
   7435,
   9584,
   10013,
   9170,
   7589,
   5924,
   4396,
   3142,
   2065,
   1424,
   939};
   Double_t _felx3021[15] = {
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
   Double_t _fely3021[15] = {
   0,
   0,
   23.70654,
   62.98412,
   86.22645,
   97.89791,
   100.065,
   95.76012,
   87.11487,
   76.96753,
   66.30234,
   56.05355,
   45.44227,
   37.73592,
   30.64311};
   Double_t _fehx3021[15] = {
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
   Double_t _fehy3021[15] = {
   1.1478,
   1.1478,
   23.70654,
   62.98412,
   86.22645,
   97.89791,
   100.065,
   95.76012,
   87.11487,
   76.96753,
   66.30234,
   56.05355,
   45.44227,
   37.73592,
   30.64311};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1650);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(11124.37);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.4/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 66210.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 211.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 465.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 38.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 524.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  97.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 4695.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 1167.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 58198.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.6","F");

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
   TText *pt_LaTex = pt->AddText("numuCC_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[15] = {
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
   Double_t _fy3022[15] = {
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
   Double_t _felx3022[15] = {
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
   Double_t _fely3022[15] = {
   0,
   0,
   0.2141986,
   0.1786125,
   0.1790615,
   0.1793133,
   0.1801735,
   0.1860154,
   0.1898678,
   0.1981764,
   0.2176593,
   0.239241,
   0.2431099,
   0.2495528,
   0.2916626};
   Double_t _fehx3022[15] = {
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
   Double_t _fehy3022[15] = {
   0,
   0,
   0.2141986,
   0.1786125,
   0.1790615,
   0.1793133,
   0.1801735,
   0.1860154,
   0.1898678,
   0.1981764,
   0.2176593,
   0.239241,
   0.2431099,
   0.2495528,
   0.2916626};
   grae = new TGraphAsymmErrors(15,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1650);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3023[15] = {
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
   Double_t _fy3023[15] = {
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
   Double_t _felx3023[15] = {
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
   Double_t _fely3023[15] = {
   0,
   0,
   0.1885567,
   0.160022,
   0.1605797,
   0.1630998,
   0.1677725,
   0.1713913,
   0.1709968,
   0.1783535,
   0.1891891,
   0.1902694,
   0.2009623,
   0.2032575,
   0.206785};
   Double_t _fehx3023[15] = {
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
   Double_t _fehy3023[15] = {
   0,
   0,
   0.1885567,
   0.160022,
   0.1605797,
   0.1630998,
   0.1677725,
   0.1713913,
   0.1709968,
   0.1783535,
   0.1891891,
   0.1902694,
   0.2009623,
   0.2032575,
   0.206785};
   grae = new TGraphAsymmErrors(15,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1650);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3024[15] = {
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
   Double_t _fy3024[15] = {
   10,
   10,
   0.9455709,
   1.067311,
   1.066939,
   1.084446,
   1.068137,
   1.034158,
   1.006158,
   0.9794117,
   0.9393361,
   0.9147342,
   0.8297968,
   0.8122854,
   0.7832439};
   Double_t _felx3024[15] = {
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
   Double_t _fely3024[15] = {
   0,
   0,
   0.0398865,
   0.01694572,
   0.01237369,
   0.01107731,
   0.01067444,
   0.01079947,
   0.01154978,
   0.012725,
   0.01416747,
   0.01631894,
   0.01826046,
   0.02152552,
   0.0255602};
   Double_t _fehx3024[15] = {
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
   Double_t _fehy3024[15] = {
   0,
   0,
   0.0398865,
   0.01694572,
   0.01237369,
   0.01107731,
   0.01067444,
   0.01079947,
   0.01154978,
   0.012725,
   0.01416747,
   0.01631894,
   0.01826046,
   0.02152552,
   0.0255602};
   grae = new TGraphAsymmErrors(15,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1650);
   Graph_Graph3024->SetMinimum(0.6819153);
   Graph_Graph3024->SetMaximum(10.92423);
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
   
   TH1F *hist__18 = new TH1F("hist__18","numuCC_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
