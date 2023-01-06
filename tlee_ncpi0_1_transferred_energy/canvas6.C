#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Oct 21 19:09:16 2022) by ROOT version 6.26/00
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
   pad1->Range(-276.9231,-11.84,2030.769,1309.255);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__16->SetBinContent(2,8.903138);
   hmc__16->SetBinContent(3,203.347);
   hmc__16->SetBinContent(4,473.4229);
   hmc__16->SetBinContent(5,468.9459);
   hmc__16->SetBinContent(6,392.6234);
   hmc__16->SetBinContent(7,309.5381);
   hmc__16->SetBinContent(8,205.5346);
   hmc__16->SetBinContent(9,175.0284);
   hmc__16->SetBinContent(10,136.8736);
   hmc__16->SetBinContent(11,111.645);
   hmc__16->SetBinContent(12,81.17025);
   hmc__16->SetBinContent(13,54.90596);
   hmc__16->SetBinContent(14,42.68383);
   hmc__16->SetBinContent(15,32.21985);
   hmc__16->SetBinContent(16,18.99279);
   hmc__16->SetBinContent(17,17.1911);
   hmc__16->SetBinContent(18,14.58426);
   hmc__16->SetBinContent(19,8.229914);
   hmc__16->SetBinContent(20,8.266667);
   hmc__16->SetBinContent(21,6.136772);
   hmc__16->SetBinContent(22,3.54909);
   hmc__16->SetBinContent(23,2.798847);
   hmc__16->SetBinContent(24,4.105172);
   hmc__16->SetBinContent(25,1.194938);
   hmc__16->SetBinContent(26,14.00411);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,7.941632);
   hmc__16->SetBinError(3,44.64891);
   hmc__16->SetBinError(4,132.2269);
   hmc__16->SetBinError(5,119.8262);
   hmc__16->SetBinError(6,100.0559);
   hmc__16->SetBinError(7,105.4214);
   hmc__16->SetBinError(8,84.38376);
   hmc__16->SetBinError(9,68.00754);
   hmc__16->SetBinError(10,38.07919);
   hmc__16->SetBinError(11,31.83709);
   hmc__16->SetBinError(12,29.34373);
   hmc__16->SetBinError(13,24.18598);
   hmc__16->SetBinError(14,30.16661);
   hmc__16->SetBinError(15,22.40113);
   hmc__16->SetBinError(16,16.03765);
   hmc__16->SetBinError(17,9.918535);
   hmc__16->SetBinError(18,12.36358);
   hmc__16->SetBinError(19,7.854056);
   hmc__16->SetBinError(20,8.57763);
   hmc__16->SetBinError(21,8.777965);
   hmc__16->SetBinError(22,5.47156);
   hmc__16->SetBinError(23,4.607581);
   hmc__16->SetBinError(24,12.90868);
   hmc__16->SetBinError(25,2.91559);
   hmc__16->SetBinError(26,13.56568);
   hmc__16->SetMinimum(-11.84);
   hmc__16->SetMaximum(1243.2);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,1800);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(497.0941);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,6.889878);
   hbadmatch_stack_1->SetBinContent(4,15.82112);
   hbadmatch_stack_1->SetBinContent(5,9.862175);
   hbadmatch_stack_1->SetBinContent(6,5.463601);
   hbadmatch_stack_1->SetBinContent(7,6.958122);
   hbadmatch_stack_1->SetBinContent(8,3.233304);
   hbadmatch_stack_1->SetBinContent(9,3.940358);
   hbadmatch_stack_1->SetBinContent(10,3.52945);
   hbadmatch_stack_1->SetBinContent(11,3.067044);
   hbadmatch_stack_1->SetBinContent(12,1.265836);
   hbadmatch_stack_1->SetBinContent(13,1.336223);
   hbadmatch_stack_1->SetBinContent(14,0.6991542);
   hbadmatch_stack_1->SetBinContent(15,0.1298672);
   hbadmatch_stack_1->SetBinContent(17,0.3193472);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.5610657);
   hbadmatch_stack_1->SetBinContent(26,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.344937);
   hbadmatch_stack_1->SetBinError(4,2.692485);
   hbadmatch_stack_1->SetBinError(5,1.746675);
   hbadmatch_stack_1->SetBinError(6,1.138097);
   hbadmatch_stack_1->SetBinError(7,1.27862);
   hbadmatch_stack_1->SetBinError(8,0.875385);
   hbadmatch_stack_1->SetBinError(9,1.060523);
   hbadmatch_stack_1->SetBinError(10,1.075038);
   hbadmatch_stack_1->SetBinError(11,1.74796);
   hbadmatch_stack_1->SetBinError(12,0.6789318);
   hbadmatch_stack_1->SetBinError(13,0.5944742);
   hbadmatch_stack_1->SetBinError(14,0.4327246);
   hbadmatch_stack_1->SetBinError(15,0.1298672);
   hbadmatch_stack_1->SetBinError(17,0.2318092);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.5610657);
   hbadmatch_stack_1->SetBinError(26,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.454812);
   hext_stack_2->SetBinContent(3,50.42471);
   hext_stack_2->SetBinContent(4,67.84169);
   hext_stack_2->SetBinContent(5,48.56008);
   hext_stack_2->SetBinContent(6,37.24207);
   hext_stack_2->SetBinContent(7,27.2531);
   hext_stack_2->SetBinContent(8,14.57243);
   hext_stack_2->SetBinContent(9,7.836244);
   hext_stack_2->SetBinContent(10,6.496764);
   hext_stack_2->SetBinContent(11,3.076798);
   hext_stack_2->SetBinContent(12,1.544194);
   hext_stack_2->SetBinContent(13,1.868591);
   hext_stack_2->SetBinContent(14,3.379654);
   hext_stack_2->SetBinContent(15,1.048213);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,2.103607);
   hext_stack_2->SetBinContent(18,2.566457);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinError(2,0.8615765);
   hext_stack_2->SetBinError(3,4.933684);
   hext_stack_2->SetBinError(4,5.6134);
   hext_stack_2->SetBinError(5,4.600032);
   hext_stack_2->SetBinError(6,4.058462);
   hext_stack_2->SetBinError(7,3.520248);
   hext_stack_2->SetBinError(8,2.546215);
   hext_stack_2->SetBinError(9,1.930499);
   hext_stack_2->SetBinError(10,1.541077);
   hext_stack_2->SetBinError(11,1.126269);
   hext_stack_2->SetBinError(12,0.7753719);
   hext_stack_2->SetBinError(13,0.840497);
   hext_stack_2->SetBinError(14,1.406172);
   hext_stack_2->SetBinError(15,0.7595995);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.9761052);
   hext_stack_2->SetBinError(18,1.283228);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(26,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,6.335244);
   hdirt_stack_3->SetBinContent(4,11.20422);
   hdirt_stack_3->SetBinContent(5,6.684439);
   hdirt_stack_3->SetBinContent(6,4.488545);
   hdirt_stack_3->SetBinContent(7,3.428947);
   hdirt_stack_3->SetBinContent(8,1.535189);
   hdirt_stack_3->SetBinContent(9,0.63311);
   hdirt_stack_3->SetBinContent(10,0.496214);
   hdirt_stack_3->SetBinContent(11,2.162274);
   hdirt_stack_3->SetBinContent(12,0.2863297);
   hdirt_stack_3->SetBinContent(15,0.3937887);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.329328);
   hdirt_stack_3->SetBinError(4,1.784654);
   hdirt_stack_3->SetBinError(5,1.310239);
   hdirt_stack_3->SetBinError(6,1.113115);
   hdirt_stack_3->SetBinError(7,0.9563609);
   hdirt_stack_3->SetBinError(8,0.6609654);
   hdirt_stack_3->SetBinError(9,0.3242013);
   hdirt_stack_3->SetBinError(10,0.3732868);
   hdirt_stack_3->SetBinError(11,1.253978);
   hdirt_stack_3->SetBinError(12,0.2025938);
   hdirt_stack_3->SetBinError(15,0.3937887);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,2.985337);
   houtFV_stack_4->SetBinContent(3,30.7298);
   houtFV_stack_4->SetBinContent(4,67.72498);
   houtFV_stack_4->SetBinContent(5,58.0254);
   houtFV_stack_4->SetBinContent(6,37.70038);
   houtFV_stack_4->SetBinContent(7,28.07553);
   houtFV_stack_4->SetBinContent(8,15.68807);
   houtFV_stack_4->SetBinContent(9,14.53689);
   houtFV_stack_4->SetBinContent(10,7.48292);
   houtFV_stack_4->SetBinContent(11,7.938767);
   houtFV_stack_4->SetBinContent(12,5.470053);
   houtFV_stack_4->SetBinContent(13,1.793805);
   houtFV_stack_4->SetBinContent(14,1.634406);
   houtFV_stack_4->SetBinContent(15,1.323754);
   houtFV_stack_4->SetBinContent(16,0.5884556);
   houtFV_stack_4->SetBinContent(17,1.138176);
   houtFV_stack_4->SetBinContent(19,0.7319179);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.1967154);
   houtFV_stack_4->SetBinError(2,0.8562984);
   houtFV_stack_4->SetBinError(3,2.707448);
   houtFV_stack_4->SetBinError(4,4.184123);
   houtFV_stack_4->SetBinError(5,3.831514);
   houtFV_stack_4->SetBinError(6,3.080237);
   houtFV_stack_4->SetBinError(7,2.671519);
   houtFV_stack_4->SetBinError(8,1.900791);
   houtFV_stack_4->SetBinError(9,1.856393);
   houtFV_stack_4->SetBinError(10,1.298996);
   houtFV_stack_4->SetBinError(11,1.508388);
   houtFV_stack_4->SetBinError(12,1.168515);
   houtFV_stack_4->SetBinError(13,0.6989558);
   houtFV_stack_4->SetBinError(14,0.7482515);
   houtFV_stack_4->SetBinError(15,0.5560625);
   houtFV_stack_4->SetBinError(16,0.3397478);
   houtFV_stack_4->SetBinError(17,0.524506);
   houtFV_stack_4->SetBinError(19,0.438694);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(25,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.191492);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.6503);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,17.20727);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,18.839);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,14.1547);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.143579);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.641914);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.836651);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.695436);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.634991);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.627124);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.639509);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9337107);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.91506);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3201582);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.499626);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1123267);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4920899);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.262105);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.557858);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.627409);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.37228);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7938401);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6286371);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5103666);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7763108);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8240322);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8427709);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.844071);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3773541);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5778452);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1057287);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2498462);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05616689);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1155977);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3579299);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.38823);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.212039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.172646);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2678293);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4162276);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2663195);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1445808);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2890263);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02981365);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3637687);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1078714);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4002708);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3592707);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2697304);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07911763);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1869027);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.144791);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05936331);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2193124);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02108645);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2180538);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08308727);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.59163);
   hNCpi0inFVres_stack_7->SetBinContent(3,66.48585);
   hNCpi0inFVres_stack_7->SetBinContent(4,206.7507);
   hNCpi0inFVres_stack_7->SetBinContent(5,225.9596);
   hNCpi0inFVres_stack_7->SetBinContent(6,173.8123);
   hNCpi0inFVres_stack_7->SetBinContent(7,111.3993);
   hNCpi0inFVres_stack_7->SetBinContent(8,71.13981);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.12366);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.76237);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.65081);
   hNCpi0inFVres_stack_7->SetBinContent(12,22.1708);
   hNCpi0inFVres_stack_7->SetBinContent(13,13.54533);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.392336);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.061622);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.970402);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.71028);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.845971);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.040902);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.9683552);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5317744);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4577621);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.3636528);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.2206336);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.7874826);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4457668);
   hNCpi0inFVres_stack_7->SetBinError(3,2.772464);
   hNCpi0inFVres_stack_7->SetBinError(4,5.059039);
   hNCpi0inFVres_stack_7->SetBinError(5,5.408255);
   hNCpi0inFVres_stack_7->SetBinError(6,4.457444);
   hNCpi0inFVres_stack_7->SetBinError(7,3.239623);
   hNCpi0inFVres_stack_7->SetBinError(8,2.596214);
   hNCpi0inFVres_stack_7->SetBinError(9,2.303225);
   hNCpi0inFVres_stack_7->SetBinError(10,1.975432);
   hNCpi0inFVres_stack_7->SetBinError(11,1.909201);
   hNCpi0inFVres_stack_7->SetBinError(12,2.061841);
   hNCpi0inFVres_stack_7->SetBinError(13,1.601239);
   hNCpi0inFVres_stack_7->SetBinError(14,1.00133);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7711283);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9215185);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6442255);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5196056);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3571669);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5837582);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2423871);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2754149);
   hNCpi0inFVres_stack_7->SetBinError(23,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(24,0.214714);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1970814);
   hNCpi0inFVres_stack_7->SetBinError(26,0.593639);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6183873);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.23391);
   hNCpi0inFVdis_stack_8->SetBinContent(4,26.50013);
   hNCpi0inFVdis_stack_8->SetBinContent(5,28.16545);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.97469);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.93798);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.25364);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.31022);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.57488);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.22911);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.60901);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.672664);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.130888);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.830515);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.047825);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.499232);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.231103);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.002012);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.24357);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3636719);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.1826539);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2504359);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.143378);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.324524);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2523197);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.337061);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.754907);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.886621);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.844827);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.290783);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.074886);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.225438);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.325407);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.220863);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.455379);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.002266);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7723006);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6365546);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.427489);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4097211);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4190087);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3911112);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4850163);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1413093);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.0903455);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1431726);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.07678997);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4548159);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1660867);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1197701);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1316759);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.07700002);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02337297);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(3,4.547885);
   hCCpi0inFV_stack_10->SetBinContent(4,15.7329);
   hCCpi0inFV_stack_10->SetBinContent(5,29.91893);
   hCCpi0inFV_stack_10->SetBinContent(6,43.02818);
   hCCpi0inFV_stack_10->SetBinContent(7,60.8355);
   hCCpi0inFV_stack_10->SetBinContent(8,47.62083);
   hCCpi0inFV_stack_10->SetBinContent(9,47.69613);
   hCCpi0inFV_stack_10->SetBinContent(10,34.37931);
   hCCpi0inFV_stack_10->SetBinContent(11,29.49033);
   hCCpi0inFV_stack_10->SetBinContent(12,19.53825);
   hCCpi0inFV_stack_10->SetBinContent(13,14.55998);
   hCCpi0inFV_stack_10->SetBinContent(14,9.229698);
   hCCpi0inFV_stack_10->SetBinContent(15,8.59137);
   hCCpi0inFV_stack_10->SetBinContent(16,4.391848);
   hCCpi0inFV_stack_10->SetBinContent(17,5.53972);
   hCCpi0inFV_stack_10->SetBinContent(18,3.907867);
   hCCpi0inFV_stack_10->SetBinContent(19,2.287653);
   hCCpi0inFV_stack_10->SetBinContent(20,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(21,1.568651);
   hCCpi0inFV_stack_10->SetBinContent(22,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(23,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(24,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(26,3.124387);
   hCCpi0inFV_stack_10->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(3,1.019024);
   hCCpi0inFV_stack_10->SetBinError(4,1.941453);
   hCCpi0inFV_stack_10->SetBinError(5,2.677343);
   hCCpi0inFV_stack_10->SetBinError(6,3.237343);
   hCCpi0inFV_stack_10->SetBinError(7,3.865048);
   hCCpi0inFV_stack_10->SetBinError(8,3.423003);
   hCCpi0inFV_stack_10->SetBinError(9,3.470518);
   hCCpi0inFV_stack_10->SetBinError(10,2.964821);
   hCCpi0inFV_stack_10->SetBinError(11,2.7827);
   hCCpi0inFV_stack_10->SetBinError(12,2.237815);
   hCCpi0inFV_stack_10->SetBinError(13,1.933477);
   hCCpi0inFV_stack_10->SetBinError(14,1.53248);
   hCCpi0inFV_stack_10->SetBinError(15,1.507554);
   hCCpi0inFV_stack_10->SetBinError(16,1.038525);
   hCCpi0inFV_stack_10->SetBinError(17,1.139388);
   hCCpi0inFV_stack_10->SetBinError(18,0.9808007);
   hCCpi0inFV_stack_10->SetBinError(19,0.8326886);
   hCCpi0inFV_stack_10->SetBinError(20,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(21,0.5546069);
   hCCpi0inFV_stack_10->SetBinError(22,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(23,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(24,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(26,0.89917);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,9.879027);
   hNCinFV_stack_11->SetBinContent(4,21.7252);
   hNCinFV_stack_11->SetBinContent(5,21.5752);
   hNCinFV_stack_11->SetBinContent(6,19.82244);
   hNCinFV_stack_11->SetBinContent(7,21.50336);
   hNCinFV_stack_11->SetBinContent(8,16.1295);
   hNCinFV_stack_11->SetBinContent(9,14.56159);
   hNCinFV_stack_11->SetBinContent(10,14.5329);
   hNCinFV_stack_11->SetBinContent(11,11.503);
   hNCinFV_stack_11->SetBinContent(12,9.366564);
   hNCinFV_stack_11->SetBinContent(13,8.049458);
   hNCinFV_stack_11->SetBinContent(14,7.25231);
   hNCinFV_stack_11->SetBinContent(15,5.70869);
   hNCinFV_stack_11->SetBinContent(16,3.417639);
   hNCinFV_stack_11->SetBinContent(17,1.89976);
   hNCinFV_stack_11->SetBinContent(18,2.622719);
   hNCinFV_stack_11->SetBinContent(19,0.9158747);
   hNCinFV_stack_11->SetBinContent(20,1.904875);
   hNCinFV_stack_11->SetBinContent(21,1.378054);
   hNCinFV_stack_11->SetBinContent(22,0.5758606);
   hNCinFV_stack_11->SetBinContent(23,0.1950248);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,2.144191);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,1.558391);
   hNCinFV_stack_11->SetBinError(4,2.399772);
   hNCinFV_stack_11->SetBinError(5,2.339655);
   hNCinFV_stack_11->SetBinError(6,2.148061);
   hNCinFV_stack_11->SetBinError(7,2.248624);
   hNCinFV_stack_11->SetBinError(8,1.9806);
   hNCinFV_stack_11->SetBinError(9,2.049785);
   hNCinFV_stack_11->SetBinError(10,2.083724);
   hNCinFV_stack_11->SetBinError(11,1.872021);
   hNCinFV_stack_11->SetBinError(12,1.825961);
   hNCinFV_stack_11->SetBinError(13,1.489647);
   hNCinFV_stack_11->SetBinError(14,1.648343);
   hNCinFV_stack_11->SetBinError(15,1.525187);
   hNCinFV_stack_11->SetBinError(16,1.141223);
   hNCinFV_stack_11->SetBinError(17,0.8610477);
   hNCinFV_stack_11->SetBinError(18,1.069947);
   hNCinFV_stack_11->SetBinError(19,0.4713702);
   hNCinFV_stack_11->SetBinError(20,0.7412219);
   hNCinFV_stack_11->SetBinError(21,0.7218881);
   hNCinFV_stack_11->SetBinError(22,0.5758606);
   hNCinFV_stack_11->SetBinError(23,0.1950249);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.7850774);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_12->SetBinContent(3,7.874817);
   hnumuCCinFV_stack_12->SetBinContent(4,24.47059);
   hnumuCCinFV_stack_12->SetBinContent(5,18.66455);
   hnumuCCinFV_stack_12->SetBinContent(6,20.9734);
   hnumuCCinFV_stack_12->SetBinContent(7,15.32002);
   hnumuCCinFV_stack_12->SetBinContent(8,11.89887);
   hnumuCCinFV_stack_12->SetBinContent(9,12.15596);
   hnumuCCinFV_stack_12->SetBinContent(10,13.27146);
   hnumuCCinFV_stack_12->SetBinContent(11,9.858607);
   hnumuCCinFV_stack_12->SetBinContent(12,6.532537);
   hnumuCCinFV_stack_12->SetBinContent(13,4.870775);
   hnumuCCinFV_stack_12->SetBinContent(14,4.919725);
   hnumuCCinFV_stack_12->SetBinContent(15,4.841572);
   hnumuCCinFV_stack_12->SetBinContent(16,1.860647);
   hnumuCCinFV_stack_12->SetBinContent(17,1.660551);
   hnumuCCinFV_stack_12->SetBinContent(18,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(19,2.195754);
   hnumuCCinFV_stack_12->SetBinContent(20,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(21,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(23,1.1854);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(26,2.250697);
   hnumuCCinFV_stack_12->SetBinError(2,0.300021);
   hnumuCCinFV_stack_12->SetBinError(3,2.0666);
   hnumuCCinFV_stack_12->SetBinError(4,3.33438);
   hnumuCCinFV_stack_12->SetBinError(5,2.424032);
   hnumuCCinFV_stack_12->SetBinError(6,2.600103);
   hnumuCCinFV_stack_12->SetBinError(7,2.36227);
   hnumuCCinFV_stack_12->SetBinError(8,1.717355);
   hnumuCCinFV_stack_12->SetBinError(9,1.799936);
   hnumuCCinFV_stack_12->SetBinError(10,1.890939);
   hnumuCCinFV_stack_12->SetBinError(11,1.596559);
   hnumuCCinFV_stack_12->SetBinError(12,1.544248);
   hnumuCCinFV_stack_12->SetBinError(13,1.09823);
   hnumuCCinFV_stack_12->SetBinError(14,1.209296);
   hnumuCCinFV_stack_12->SetBinError(15,1.093209);
   hnumuCCinFV_stack_12->SetBinError(16,0.6808988);
   hnumuCCinFV_stack_12->SetBinError(17,0.650847);
   hnumuCCinFV_stack_12->SetBinError(18,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(19,0.7598403);
   hnumuCCinFV_stack_12->SetBinError(20,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(21,0.48078);
   hnumuCCinFV_stack_12->SetBinError(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(23,0.5452408);
   hnumuCCinFV_stack_12->SetBinError(24,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(26,0.7346377);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,2.36194);
   hnueCCinFV_stack_13->SetBinContent(4,1.612893);
   hnueCCinFV_stack_13->SetBinContent(5,2.944628);
   hnueCCinFV_stack_13->SetBinContent(6,1.986292);
   hnueCCinFV_stack_13->SetBinContent(7,1.370687);
   hnueCCinFV_stack_13->SetBinContent(8,2.903158);
   hnueCCinFV_stack_13->SetBinContent(9,1.32606);
   hnueCCinFV_stack_13->SetBinContent(10,1.36614);
   hnueCCinFV_stack_13->SetBinContent(11,1.683804);
   hnueCCinFV_stack_13->SetBinContent(12,0.7218604);
   hnueCCinFV_stack_13->SetBinContent(13,0.2182412);
   hnueCCinFV_stack_13->SetBinContent(14,1.369944);
   hnueCCinFV_stack_13->SetBinContent(15,1.356749);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.0002655144);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.8615913);
   hnueCCinFV_stack_13->SetBinContent(21,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,1.11635);
   hnueCCinFV_stack_13->SetBinContent(26,3.614897);
   hnueCCinFV_stack_13->SetBinError(3,1.426612);
   hnueCCinFV_stack_13->SetBinError(4,0.7779582);
   hnueCCinFV_stack_13->SetBinError(5,0.9817506);
   hnueCCinFV_stack_13->SetBinError(6,0.7844684);
   hnueCCinFV_stack_13->SetBinError(7,0.5658243);
   hnueCCinFV_stack_13->SetBinError(8,0.9466802);
   hnueCCinFV_stack_13->SetBinError(9,0.5554811);
   hnueCCinFV_stack_13->SetBinError(10,0.7138187);
   hnueCCinFV_stack_13->SetBinError(11,1.167133);
   hnueCCinFV_stack_13->SetBinError(12,0.5428116);
   hnueCCinFV_stack_13->SetBinError(13,0.2182412);
   hnueCCinFV_stack_13->SetBinError(14,0.6420344);
   hnueCCinFV_stack_13->SetBinError(15,0.6369262);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.0002655145);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.4332246);
   hnueCCinFV_stack_13->SetBinError(21,0.3582875);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.8660013);
   hnueCCinFV_stack_13->SetBinError(26,1.742515);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__17->SetBinContent(2,8.903138);
   hmcerror__17->SetBinContent(3,203.347);
   hmcerror__17->SetBinContent(4,473.4229);
   hmcerror__17->SetBinContent(5,468.9459);
   hmcerror__17->SetBinContent(6,392.6234);
   hmcerror__17->SetBinContent(7,309.5381);
   hmcerror__17->SetBinContent(8,205.5346);
   hmcerror__17->SetBinContent(9,175.0284);
   hmcerror__17->SetBinContent(10,136.8736);
   hmcerror__17->SetBinContent(11,111.645);
   hmcerror__17->SetBinContent(12,81.17025);
   hmcerror__17->SetBinContent(13,54.90596);
   hmcerror__17->SetBinContent(14,42.68383);
   hmcerror__17->SetBinContent(15,32.21985);
   hmcerror__17->SetBinContent(16,18.99279);
   hmcerror__17->SetBinContent(17,17.1911);
   hmcerror__17->SetBinContent(18,14.58426);
   hmcerror__17->SetBinContent(19,8.229914);
   hmcerror__17->SetBinContent(20,8.266667);
   hmcerror__17->SetBinContent(21,6.136772);
   hmcerror__17->SetBinContent(22,3.54909);
   hmcerror__17->SetBinContent(23,2.798847);
   hmcerror__17->SetBinContent(24,4.105172);
   hmcerror__17->SetBinContent(25,1.194938);
   hmcerror__17->SetBinContent(26,14.00411);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,7.941632);
   hmcerror__17->SetBinError(3,44.64891);
   hmcerror__17->SetBinError(4,132.2269);
   hmcerror__17->SetBinError(5,119.8262);
   hmcerror__17->SetBinError(6,100.0559);
   hmcerror__17->SetBinError(7,105.4214);
   hmcerror__17->SetBinError(8,84.38376);
   hmcerror__17->SetBinError(9,68.00754);
   hmcerror__17->SetBinError(10,38.07919);
   hmcerror__17->SetBinError(11,31.83709);
   hmcerror__17->SetBinError(12,29.34373);
   hmcerror__17->SetBinError(13,24.18598);
   hmcerror__17->SetBinError(14,30.16661);
   hmcerror__17->SetBinError(15,22.40113);
   hmcerror__17->SetBinError(16,16.03765);
   hmcerror__17->SetBinError(17,9.918535);
   hmcerror__17->SetBinError(18,12.36358);
   hmcerror__17->SetBinError(19,7.854056);
   hmcerror__17->SetBinError(20,8.57763);
   hmcerror__17->SetBinError(21,8.777965);
   hmcerror__17->SetBinError(22,5.47156);
   hmcerror__17->SetBinError(23,4.607581);
   hmcerror__17->SetBinError(24,12.90868);
   hmcerror__17->SetBinError(25,2.91559);
   hmcerror__17->SetBinError(26,13.56568);
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
   
   Double_t _fx3021[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3021[25] = {
   0,
   5,
   244,
   592,
   565,
   411,
   302,
   189,
   188,
   118,
   90,
   72,
   39,
   27,
   19,
   17,
   15,
   14,
   9,
   3,
   8,
   0,
   4,
   1,
   0};
   Double_t _felx3021[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3021[25] = {
   0,
   2.48995,
   15.6205,
   24.33105,
   23.76973,
   20.27313,
   17.37815,
   13.74773,
   13.71131,
   10.86278,
   9.6093,
   8.6108,
   6.3813,
   5.3414,
   4.5151,
   4.2835,
   4.0385,
   3.9102,
   3.19354,
   2.143368,
   3.0307,
   0,
   2.29683,
   1,
   0};
   Double_t _fehx3021[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3021[25] = {
   1.1478,
   2.21064,
   15.6205,
   24.33105,
   23.76973,
   20.27313,
   17.37815,
   13.74773,
   13.71131,
   10.86278,
   9.4079,
   8.4085,
   6.1757,
   5.1322,
   4.3011,
   4.0673,
   3.8197,
   3.6898,
   2.9582,
   1.72422,
   2.7896,
   1.1478,
   1.98186,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1980);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(677.9642);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  203.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 389.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 195.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 166.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3022[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3022[25] = {
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
   1,
   1};
   Double_t _felx3022[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3022[25] = {
   0,
   0.8920036,
   0.2195701,
   0.2792997,
   0.2555225,
   0.2548395,
   0.3405766,
   0.4105575,
   0.3885514,
   0.2782069,
   0.2851636,
   0.3615084,
   0.4404983,
   0.7067455,
   0.6952585,
   0.8444073,
   0.5769577,
   0.8477345,
   0.9543303,
   1.037616,
   1.430388,
   1.54168,
   1.646242,
   3.144491,
   2.439951};
   Double_t _fehx3022[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3022[25] = {
   0,
   0.8920036,
   0.2195701,
   0.2792997,
   0.2555225,
   0.2548395,
   0.3405766,
   0.4105575,
   0.3885514,
   0.2782069,
   0.2851636,
   0.3615084,
   0.4404983,
   0.7067455,
   0.6952585,
   0.8444073,
   0.5769577,
   0.8477345,
   0.9543303,
   1.037616,
   1.430388,
   1.54168,
   1.646242,
   3.144491,
   2.439951};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1980);
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
   
   Double_t _fx3023[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3023[25] = {
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
   1,
   1};
   Double_t _felx3023[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3023[25] = {
   0,
   0.2571223,
   0.1659195,
   0.2112975,
   0.2311997,
   0.2313192,
   0.3192798,
   0.378298,
   0.3160457,
   0.236117,
   0.2212533,
   0.2514107,
   0.2596985,
   0.2567558,
   0.2890823,
   0.3004414,
   0.2615452,
   0.3067442,
   0.3509669,
   0.3508536,
   0.3911105,
   0.5325627,
   0.5369907,
   0.4288456,
   0.7102983};
   Double_t _fehx3023[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3023[25] = {
   0,
   0.2571223,
   0.1659195,
   0.2112975,
   0.2311997,
   0.2313192,
   0.3192798,
   0.378298,
   0.3160457,
   0.236117,
   0.2212533,
   0.2514107,
   0.2596985,
   0.2567558,
   0.2890823,
   0.3004414,
   0.2615452,
   0.3067442,
   0.3509669,
   0.3508536,
   0.3911105,
   0.5325627,
   0.5369907,
   0.4288456,
   0.7102983};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1980);
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
   
   Double_t _fx3024[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3024[25] = {
   10,
   0.5615997,
   1.19992,
   1.250467,
   1.20483,
   1.046805,
   0.9756473,
   0.9195532,
   1.074111,
   0.862109,
   0.8061266,
   0.8870245,
   0.7103054,
   0.632558,
   0.5896985,
   0.8950764,
   0.8725447,
   0.9599389,
   1.093572,
   0.3629032,
   1.303617,
   0,
   1.42916,
   0.2435951,
   0};
   Double_t _felx3024[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3024[25] = {
   0,
   0.2796711,
   0.07681698,
   0.0513939,
   0.05068758,
   0.05163507,
   0.05614219,
   0.06688765,
   0.07833761,
   0.07936357,
   0.08607014,
   0.1060832,
   0.1162223,
   0.1251387,
   0.1401341,
   0.2255329,
   0.2349181,
   0.2681109,
   0.3880405,
   0.2592784,
   0.493859,
   0,
   0.8206342,
   0.2435951,
   0};
   Double_t _fehx3024[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3024[25] = {
   0,
   0.248299,
   0.07681698,
   0.0513939,
   0.05068758,
   0.05163507,
   0.05614219,
   0.06688765,
   0.07833761,
   0.07936357,
   0.0842662,
   0.1035909,
   0.1124778,
   0.1202376,
   0.1334922,
   0.2141497,
   0.2221906,
   0.2529987,
   0.3594448,
   0.208575,
   0.4545712,
   0.3234069,
   0.7080986,
   0.3312188,
   0.960552};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1980);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(11);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
