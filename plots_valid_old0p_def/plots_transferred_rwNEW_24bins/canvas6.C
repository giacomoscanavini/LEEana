#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 16:15:25 2023) by ROOT version 6.26/00
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
   pad1->Range(-246.1538,-10.54,1805.128,1165.502);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__16->SetBinContent(2,4.581041);
   hmc__16->SetBinContent(3,119.4454);
   hmc__16->SetBinContent(4,411.8825);
   hmc__16->SetBinContent(5,455.4683);
   hmc__16->SetBinContent(6,408.8846);
   hmc__16->SetBinContent(7,368.2145);
   hmc__16->SetBinContent(8,290.7522);
   hmc__16->SetBinContent(9,213.2261);
   hmc__16->SetBinContent(10,172.0882);
   hmc__16->SetBinContent(11,134.5772);
   hmc__16->SetBinContent(12,91.81538);
   hmc__16->SetBinContent(13,66.80102);
   hmc__16->SetBinContent(14,48.82992);
   hmc__16->SetBinContent(15,35.14495);
   hmc__16->SetBinContent(16,29.65733);
   hmc__16->SetBinContent(17,17.61827);
   hmc__16->SetBinContent(18,12.928);
   hmc__16->SetBinContent(19,14.10427);
   hmc__16->SetBinContent(20,9.698326);
   hmc__16->SetBinContent(21,5.465204);
   hmc__16->SetBinContent(22,8.182366);
   hmc__16->SetBinContent(23,4.023136);
   hmc__16->SetBinContent(24,2.62283);
   hmc__16->SetBinContent(25,20.09594);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,4.778452);
   hmc__16->SetBinError(3,35.61185);
   hmc__16->SetBinError(4,122.9912);
   hmc__16->SetBinError(5,125.2373);
   hmc__16->SetBinError(6,98.2745);
   hmc__16->SetBinError(7,104.9051);
   hmc__16->SetBinError(8,95.41989);
   hmc__16->SetBinError(9,77.55754);
   hmc__16->SetBinError(10,62.85764);
   hmc__16->SetBinError(11,42.91919);
   hmc__16->SetBinError(12,31.16809);
   hmc__16->SetBinError(13,25.80848);
   hmc__16->SetBinError(14,19.97188);
   hmc__16->SetBinError(15,22.56432);
   hmc__16->SetBinError(16,18.64933);
   hmc__16->SetBinError(17,14.36735);
   hmc__16->SetBinError(18,7.667118);
   hmc__16->SetBinError(19,9.206006);
   hmc__16->SetBinError(20,9.107142);
   hmc__16->SetBinError(21,6.103682);
   hmc__16->SetBinError(22,8.228069);
   hmc__16->SetBinError(23,5.394938);
   hmc__16->SetBinError(24,4.797417);
   hmc__16->SetBinError(25,13.91967);
   hmc__16->SetMinimum(-10.54);
   hmc__16->SetMaximum(1106.7);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,1600);
   hs6_stack_6->SetMinimum(-1.545884e-08);
   hs6_stack_6->SetMaximum(478.2417);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(2,0.7302274);
   hbadmatch_stack_1->SetBinContent(3,5.035228);
   hbadmatch_stack_1->SetBinContent(4,14.78156);
   hbadmatch_stack_1->SetBinContent(5,10.3776);
   hbadmatch_stack_1->SetBinContent(6,5.906122);
   hbadmatch_stack_1->SetBinContent(7,7.239235);
   hbadmatch_stack_1->SetBinContent(8,5.069166);
   hbadmatch_stack_1->SetBinContent(9,4.589445);
   hbadmatch_stack_1->SetBinContent(10,1.513708);
   hbadmatch_stack_1->SetBinContent(11,3.36482);
   hbadmatch_stack_1->SetBinContent(12,2.985928);
   hbadmatch_stack_1->SetBinContent(13,1.49331);
   hbadmatch_stack_1->SetBinContent(14,1.123658);
   hbadmatch_stack_1->SetBinContent(15,0.4340853);
   hbadmatch_stack_1->SetBinContent(16,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.4379386);
   hbadmatch_stack_1->SetBinError(3,1.170853);
   hbadmatch_stack_1->SetBinError(4,2.639547);
   hbadmatch_stack_1->SetBinError(5,1.702571);
   hbadmatch_stack_1->SetBinError(6,1.27972);
   hbadmatch_stack_1->SetBinError(7,1.339971);
   hbadmatch_stack_1->SetBinError(8,1.112215);
   hbadmatch_stack_1->SetBinError(9,1.170583);
   hbadmatch_stack_1->SetBinError(10,0.5875827);
   hbadmatch_stack_1->SetBinError(11,1.001764);
   hbadmatch_stack_1->SetBinError(12,1.755549);
   hbadmatch_stack_1->SetBinError(13,0.7160255);
   hbadmatch_stack_1->SetBinError(14,0.5188295);
   hbadmatch_stack_1->SetBinError(15,0.30852);
   hbadmatch_stack_1->SetBinError(16,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,1.048213);
   hext_stack_2->SetBinContent(3,26.64184);
   hext_stack_2->SetBinContent(4,71.0817);
   hext_stack_2->SetBinContent(5,52.27131);
   hext_stack_2->SetBinContent(6,40.00443);
   hext_stack_2->SetBinContent(7,28.5551);
   hext_stack_2->SetBinContent(8,18.37305);
   hext_stack_2->SetBinContent(9,10.91745);
   hext_stack_2->SetBinContent(10,7.671841);
   hext_stack_2->SetBinContent(11,6.813981);
   hext_stack_2->SetBinContent(12,2.192989);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,1.868591);
   hext_stack_2->SetBinContent(15,2.973055);
   hext_stack_2->SetBinContent(16,1.454812);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,3.939067);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(2,0.7595995);
   hext_stack_2->SetBinError(3,3.412788);
   hext_stack_2->SetBinError(4,5.919215);
   hext_stack_2->SetBinError(5,4.800172);
   hext_stack_2->SetBinError(6,4.134832);
   hext_stack_2->SetBinError(7,3.598361);
   hext_stack_2->SetBinError(8,2.867656);
   hext_stack_2->SetBinError(9,2.265045);
   hext_stack_2->SetBinError(10,1.899118);
   hext_stack_2->SetBinError(11,1.637484);
   hext_stack_2->SetBinError(12,0.9009267);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.840497);
   hext_stack_2->SetBinError(15,1.346105);
   hext_stack_2->SetBinError(16,0.8615765);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,1.526073);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(25,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,5.104505);
   hdirt_stack_3->SetBinContent(4,9.731431);
   hdirt_stack_3->SetBinContent(5,6.52177);
   hdirt_stack_3->SetBinContent(6,6.108478);
   hdirt_stack_3->SetBinContent(7,3.567966);
   hdirt_stack_3->SetBinContent(8,2.10685);
   hdirt_stack_3->SetBinContent(9,1.328264);
   hdirt_stack_3->SetBinContent(11,2.250421);
   hdirt_stack_3->SetBinContent(12,0.4080678);
   hdirt_stack_3->SetBinContent(13,0.2863297);
   hdirt_stack_3->SetBinContent(16,0.3937887);
   hdirt_stack_3->SetBinError(3,1.195774);
   hdirt_stack_3->SetBinError(4,1.644496);
   hdirt_stack_3->SetBinError(5,1.349627);
   hdirt_stack_3->SetBinError(6,1.252173);
   hdirt_stack_3->SetBinError(7,0.9834648);
   hdirt_stack_3->SetBinError(8,0.7826822);
   hdirt_stack_3->SetBinError(9,0.5352159);
   hdirt_stack_3->SetBinError(11,1.243095);
   hdirt_stack_3->SetBinError(12,0.4080678);
   hdirt_stack_3->SetBinError(13,0.2025938);
   hdirt_stack_3->SetBinError(16,0.3937887);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,1.462145);
   houtFV_stack_4->SetBinContent(3,19.70356);
   houtFV_stack_4->SetBinContent(4,63.80794);
   houtFV_stack_4->SetBinContent(5,63.15099);
   houtFV_stack_4->SetBinContent(6,43.84044);
   houtFV_stack_4->SetBinContent(7,30.59007);
   houtFV_stack_4->SetBinContent(8,22.65186);
   houtFV_stack_4->SetBinContent(9,17.57403);
   houtFV_stack_4->SetBinContent(10,13.68842);
   houtFV_stack_4->SetBinContent(11,6.549469);
   houtFV_stack_4->SetBinContent(12,6.316819);
   houtFV_stack_4->SetBinContent(13,4.931781);
   houtFV_stack_4->SetBinContent(14,1.827146);
   houtFV_stack_4->SetBinContent(15,1.072095);
   houtFV_stack_4->SetBinContent(16,1.663932);
   houtFV_stack_4->SetBinContent(17,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.5352025);
   houtFV_stack_4->SetBinContent(19,0.7319179);
   houtFV_stack_4->SetBinContent(20,0.536893);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinContent(22,0.3401776);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.1967154);
   houtFV_stack_4->SetBinError(2,0.6198731);
   houtFV_stack_4->SetBinError(3,2.120903);
   houtFV_stack_4->SetBinError(4,4.023351);
   houtFV_stack_4->SetBinError(5,3.95912);
   houtFV_stack_4->SetBinError(6,3.267439);
   houtFV_stack_4->SetBinError(7,2.822313);
   houtFV_stack_4->SetBinError(8,2.366318);
   houtFV_stack_4->SetBinError(9,2.11762);
   houtFV_stack_4->SetBinError(10,1.865595);
   houtFV_stack_4->SetBinError(11,1.280524);
   houtFV_stack_4->SetBinError(12,1.283817);
   houtFV_stack_4->SetBinError(13,1.144752);
   houtFV_stack_4->SetBinError(14,0.7142206);
   houtFV_stack_4->SetBinError(15,0.5551335);
   houtFV_stack_4->SetBinError(16,0.6518637);
   houtFV_stack_4->SetBinError(17,0.3397478);
   houtFV_stack_4->SetBinError(18,0.3921167);
   houtFV_stack_4->SetBinError(19,0.438694);
   houtFV_stack_4->SetBinError(20,0.3929602);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetBinError(22,0.3401776);
   houtFV_stack_4->SetBinError(23,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,8.461206);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.07186);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.88337);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,13.84793);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,12.78557);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.930185);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.164268);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.59554);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.124816);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.384798);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.380558);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9538253);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.076512);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.118013);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.263982);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.255305);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8292991);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8435695);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4859904);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6133829);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5448296);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3962917);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3549294);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1658436);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.074154);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.674008);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.477708);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3197389);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4373019);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3657307);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.9906222);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.31581);
   hNCpi0inFVres_stack_7->SetBinContent(4,166.734);
   hNCpi0inFVres_stack_7->SetBinContent(5,214.7623);
   hNCpi0inFVres_stack_7->SetBinContent(6,197.3819);
   hNCpi0inFVres_stack_7->SetBinContent(7,162.4273);
   hNCpi0inFVres_stack_7->SetBinContent(8,119.772);
   hNCpi0inFVres_stack_7->SetBinContent(9,83.6324);
   hNCpi0inFVres_stack_7->SetBinContent(10,59.74377);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.50839);
   hNCpi0inFVres_stack_7->SetBinContent(12,23.62259);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.80634);
   hNCpi0inFVres_stack_7->SetBinContent(14,11.86585);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.177718);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.958487);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.698514);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.716358);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.812676);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.323926);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5581679);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4042178);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4180041);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.088772);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3642206);
   hNCpi0inFVres_stack_7->SetBinError(3,1.995826);
   hNCpi0inFVres_stack_7->SetBinError(4,4.165321);
   hNCpi0inFVres_stack_7->SetBinError(5,4.790529);
   hNCpi0inFVres_stack_7->SetBinError(6,4.608593);
   hNCpi0inFVres_stack_7->SetBinError(7,4.155209);
   hNCpi0inFVres_stack_7->SetBinError(8,3.606487);
   hNCpi0inFVres_stack_7->SetBinError(9,2.957678);
   hNCpi0inFVres_stack_7->SetBinError(10,2.523675);
   hNCpi0inFVres_stack_7->SetBinError(11,2.067742);
   hNCpi0inFVres_stack_7->SetBinError(12,1.546535);
   hNCpi0inFVres_stack_7->SetBinError(13,1.369933);
   hNCpi0inFVres_stack_7->SetBinError(14,1.145893);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8282428);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5679138);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7392251);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4673469);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4193552);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3690854);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2198343);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1342881);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2406819);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4017382);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.79883);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.90359);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.06054);
   hNCpi0inFVdis_stack_8->SetBinContent(6,26.62052);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.40199);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.79504);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.19211);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.16871);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.46504);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.38764);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.571894);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.98922);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.01288);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.30093);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.588476);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.630826);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.530268);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9906222);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9205402);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5709538);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.575521);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.947582);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.643867);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.699608);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.649008);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.76247);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.50971);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.343419);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.402086);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.127402);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.039729);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.922046);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.668297);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5546234);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5116103);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3429379);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3805083);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2180566);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3642206);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3707519);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1902537);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3114131);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,2.979234);
   hCCpi0inFV_stack_10->SetBinContent(4,11.53027);
   hCCpi0inFV_stack_10->SetBinContent(5,23.3716);
   hCCpi0inFV_stack_10->SetBinContent(6,34.75771);
   hCCpi0inFV_stack_10->SetBinContent(7,52.81806);
   hCCpi0inFV_stack_10->SetBinContent(8,50.82649);
   hCCpi0inFV_stack_10->SetBinContent(9,42.09657);
   hCCpi0inFV_stack_10->SetBinContent(10,40.23556);
   hCCpi0inFV_stack_10->SetBinContent(11,32.85509);
   hCCpi0inFV_stack_10->SetBinContent(12,24.22852);
   hCCpi0inFV_stack_10->SetBinContent(13,17.62604);
   hCCpi0inFV_stack_10->SetBinContent(14,14.36327);
   hCCpi0inFV_stack_10->SetBinContent(15,8.692805);
   hCCpi0inFV_stack_10->SetBinContent(16,7.469403);
   hCCpi0inFV_stack_10->SetBinContent(17,5.460563);
   hCCpi0inFV_stack_10->SetBinContent(18,4.561214);
   hCCpi0inFV_stack_10->SetBinContent(19,3.620943);
   hCCpi0inFV_stack_10->SetBinContent(20,3.462874);
   hCCpi0inFV_stack_10->SetBinContent(21,1.26712);
   hCCpi0inFV_stack_10->SetBinContent(22,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(23,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(24,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(25,4.878528);
   hCCpi0inFV_stack_10->SetBinError(3,0.8548804);
   hCCpi0inFV_stack_10->SetBinError(4,1.687761);
   hCCpi0inFV_stack_10->SetBinError(5,2.337478);
   hCCpi0inFV_stack_10->SetBinError(6,2.93962);
   hCCpi0inFV_stack_10->SetBinError(7,3.59351);
   hCCpi0inFV_stack_10->SetBinError(8,3.507162);
   hCCpi0inFV_stack_10->SetBinError(9,3.250399);
   hCCpi0inFV_stack_10->SetBinError(10,3.191884);
   hCCpi0inFV_stack_10->SetBinError(11,2.880352);
   hCCpi0inFV_stack_10->SetBinError(12,2.514202);
   hCCpi0inFV_stack_10->SetBinError(13,2.140836);
   hCCpi0inFV_stack_10->SetBinError(14,1.923444);
   hCCpi0inFV_stack_10->SetBinError(15,1.481242);
   hCCpi0inFV_stack_10->SetBinError(16,1.415697);
   hCCpi0inFV_stack_10->SetBinError(17,1.177023);
   hCCpi0inFV_stack_10->SetBinError(18,1.052001);
   hCCpi0inFV_stack_10->SetBinError(19,0.8988449);
   hCCpi0inFV_stack_10->SetBinError(20,0.961023);
   hCCpi0inFV_stack_10->SetBinError(21,0.5883944);
   hCCpi0inFV_stack_10->SetBinError(22,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(23,0.588146);
   hCCpi0inFV_stack_10->SetBinError(24,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(25,1.161372);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,6.555376);
   hNCinFV_stack_11->SetBinContent(4,15.88035);
   hNCinFV_stack_11->SetBinContent(5,22.49781);
   hNCinFV_stack_11->SetBinContent(6,21.11475);
   hNCinFV_stack_11->SetBinContent(7,20.13117);
   hNCinFV_stack_11->SetBinContent(8,21.80187);
   hNCinFV_stack_11->SetBinContent(9,15.07732);
   hNCinFV_stack_11->SetBinContent(10,12.60574);
   hNCinFV_stack_11->SetBinContent(11,14.52472);
   hNCinFV_stack_11->SetBinContent(12,8.506232);
   hNCinFV_stack_11->SetBinContent(13,8.345865);
   hNCinFV_stack_11->SetBinContent(14,7.522655);
   hNCinFV_stack_11->SetBinContent(15,5.658628);
   hNCinFV_stack_11->SetBinContent(16,4.733375);
   hNCinFV_stack_11->SetBinContent(17,2.300569);
   hNCinFV_stack_11->SetBinContent(18,1.855576);
   hNCinFV_stack_11->SetBinContent(19,1.715495);
   hNCinFV_stack_11->SetBinContent(20,0.5901461);
   hNCinFV_stack_11->SetBinContent(21,0.9785053);
   hNCinFV_stack_11->SetBinContent(22,1.897603);
   hNCinFV_stack_11->SetBinContent(23,0.5901461);
   hNCinFV_stack_11->SetBinContent(25,2.876109);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,1.257132);
   hNCinFV_stack_11->SetBinError(4,2.01152);
   hNCinFV_stack_11->SetBinError(5,2.435019);
   hNCinFV_stack_11->SetBinError(6,2.262761);
   hNCinFV_stack_11->SetBinError(7,2.219595);
   hNCinFV_stack_11->SetBinError(8,2.31391);
   hNCinFV_stack_11->SetBinError(9,1.986351);
   hNCinFV_stack_11->SetBinError(10,1.777086);
   hNCinFV_stack_11->SetBinError(11,1.893494);
   hNCinFV_stack_11->SetBinError(12,1.469474);
   hNCinFV_stack_11->SetBinError(13,1.440732);
   hNCinFV_stack_11->SetBinError(14,1.402095);
   hNCinFV_stack_11->SetBinError(15,1.225121);
   hNCinFV_stack_11->SetBinError(16,1.12743);
   hNCinFV_stack_11->SetBinError(17,0.7071359);
   hNCinFV_stack_11->SetBinError(18,0.6794384);
   hNCinFV_stack_11->SetBinError(19,0.6212384);
   hNCinFV_stack_11->SetBinError(20,0.340721);
   hNCinFV_stack_11->SetBinError(21,0.4376048);
   hNCinFV_stack_11->SetBinError(22,0.785685);
   hNCinFV_stack_11->SetBinError(23,0.340721);
   hNCinFV_stack_11->SetBinError(25,0.8993325);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,4.01493);
   hnumuCCinFV_stack_12->SetBinContent(4,20.03516);
   hnumuCCinFV_stack_12->SetBinContent(5,21.02341);
   hnumuCCinFV_stack_12->SetBinContent(6,16.35923);
   hnumuCCinFV_stack_12->SetBinContent(7,18.91174);
   hnumuCCinFV_stack_12->SetBinContent(8,12.00193);
   hnumuCCinFV_stack_12->SetBinContent(9,11.29992);
   hnumuCCinFV_stack_12->SetBinContent(10,11.64039);
   hnumuCCinFV_stack_12->SetBinContent(11,11.73055);
   hnumuCCinFV_stack_12->SetBinContent(12,8.162766);
   hnumuCCinFV_stack_12->SetBinContent(13,6.337512);
   hnumuCCinFV_stack_12->SetBinContent(14,4.280629);
   hnumuCCinFV_stack_12->SetBinContent(15,4.723848);
   hnumuCCinFV_stack_12->SetBinContent(16,5.090703);
   hnumuCCinFV_stack_12->SetBinContent(17,2.00411);
   hnumuCCinFV_stack_12->SetBinContent(18,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(19,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(20,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(21,1.26712);
   hnumuCCinFV_stack_12->SetBinContent(22,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(23,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5867651);
   hnumuCCinFV_stack_12->SetBinContent(25,3.726403);
   hnumuCCinFV_stack_12->SetBinError(3,1.066076);
   hnumuCCinFV_stack_12->SetBinError(4,3.234323);
   hnumuCCinFV_stack_12->SetBinError(5,2.799006);
   hnumuCCinFV_stack_12->SetBinError(6,2.242434);
   hnumuCCinFV_stack_12->SetBinError(7,2.673948);
   hnumuCCinFV_stack_12->SetBinError(8,1.79556);
   hnumuCCinFV_stack_12->SetBinError(9,1.738118);
   hnumuCCinFV_stack_12->SetBinError(10,1.764569);
   hnumuCCinFV_stack_12->SetBinError(11,1.73395);
   hnumuCCinFV_stack_12->SetBinError(12,1.452757);
   hnumuCCinFV_stack_12->SetBinError(13,1.531884);
   hnumuCCinFV_stack_12->SetBinError(14,1.04404);
   hnumuCCinFV_stack_12->SetBinError(15,1.1603);
   hnumuCCinFV_stack_12->SetBinError(16,1.12822);
   hnumuCCinFV_stack_12->SetBinError(17,0.7352871);
   hnumuCCinFV_stack_12->SetBinError(18,0.48078);
   hnumuCCinFV_stack_12->SetBinError(19,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(20,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(21,0.5883944);
   hnumuCCinFV_stack_12->SetBinError(22,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(23,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(24,0.3387718);
   hnumuCCinFV_stack_12->SetBinError(25,0.9961689);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(3,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(4,2.833223);
   hnueCCinFV_stack_13->SetBinContent(5,2.629331);
   hnueCCinFV_stack_13->SetBinContent(6,2.137158);
   hnueCCinFV_stack_13->SetBinContent(7,1.01352);
   hnueCCinFV_stack_13->SetBinContent(8,1.829213);
   hnueCCinFV_stack_13->SetBinContent(9,2.183999);
   hnueCCinFV_stack_13->SetBinContent(10,1.348715);
   hnueCCinFV_stack_13->SetBinContent(11,1.556357);
   hnueCCinFV_stack_13->SetBinContent(12,1.767419);
   hnueCCinFV_stack_13->SetBinContent(13,0.2303483);
   hnueCCinFV_stack_13->SetBinContent(14,0.2182412);
   hnueCCinFV_stack_13->SetBinContent(15,1.173228);
   hnueCCinFV_stack_13->SetBinContent(16,1.553464);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,1.024854);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,4.731247);
   hnueCCinFV_stack_13->SetBinError(3,0.545424);
   hnueCCinFV_stack_13->SetBinError(4,1.505178);
   hnueCCinFV_stack_13->SetBinError(5,0.933513);
   hnueCCinFV_stack_13->SetBinError(6,0.7848875);
   hnueCCinFV_stack_13->SetBinError(7,0.5244887);
   hnueCCinFV_stack_13->SetBinError(8,0.7501804);
   hnueCCinFV_stack_13->SetBinError(9,0.7652844);
   hnueCCinFV_stack_13->SetBinError(10,0.5638344);
   hnueCCinFV_stack_13->SetBinError(11,0.7928002);
   hnueCCinFV_stack_13->SetBinError(12,1.198918);
   hnueCCinFV_stack_13->SetBinError(13,0.2303483);
   hnueCCinFV_stack_13->SetBinError(14,0.2182412);
   hnueCCinFV_stack_13->SetBinError(15,0.6111557);
   hnueCCinFV_stack_13->SetBinError(16,0.6666123);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967155);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.5272749);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,1.945846);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__17->SetBinContent(2,4.581041);
   hmcerror__17->SetBinContent(3,119.4454);
   hmcerror__17->SetBinContent(4,411.8825);
   hmcerror__17->SetBinContent(5,455.4683);
   hmcerror__17->SetBinContent(6,408.8846);
   hmcerror__17->SetBinContent(7,368.2145);
   hmcerror__17->SetBinContent(8,290.7522);
   hmcerror__17->SetBinContent(9,213.2261);
   hmcerror__17->SetBinContent(10,172.0882);
   hmcerror__17->SetBinContent(11,134.5772);
   hmcerror__17->SetBinContent(12,91.81538);
   hmcerror__17->SetBinContent(13,66.80102);
   hmcerror__17->SetBinContent(14,48.82992);
   hmcerror__17->SetBinContent(15,35.14495);
   hmcerror__17->SetBinContent(16,29.65733);
   hmcerror__17->SetBinContent(17,17.61827);
   hmcerror__17->SetBinContent(18,12.928);
   hmcerror__17->SetBinContent(19,14.10427);
   hmcerror__17->SetBinContent(20,9.698326);
   hmcerror__17->SetBinContent(21,5.465204);
   hmcerror__17->SetBinContent(22,8.182366);
   hmcerror__17->SetBinContent(23,4.023136);
   hmcerror__17->SetBinContent(24,2.62283);
   hmcerror__17->SetBinContent(25,20.09594);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,4.778452);
   hmcerror__17->SetBinError(3,35.61185);
   hmcerror__17->SetBinError(4,122.9912);
   hmcerror__17->SetBinError(5,125.2373);
   hmcerror__17->SetBinError(6,98.2745);
   hmcerror__17->SetBinError(7,104.9051);
   hmcerror__17->SetBinError(8,95.41989);
   hmcerror__17->SetBinError(9,77.55754);
   hmcerror__17->SetBinError(10,62.85764);
   hmcerror__17->SetBinError(11,42.91919);
   hmcerror__17->SetBinError(12,31.16809);
   hmcerror__17->SetBinError(13,25.80848);
   hmcerror__17->SetBinError(14,19.97188);
   hmcerror__17->SetBinError(15,22.56432);
   hmcerror__17->SetBinError(16,18.64933);
   hmcerror__17->SetBinError(17,14.36735);
   hmcerror__17->SetBinError(18,7.667118);
   hmcerror__17->SetBinError(19,9.206006);
   hmcerror__17->SetBinError(20,9.107142);
   hmcerror__17->SetBinError(21,6.103682);
   hmcerror__17->SetBinError(22,8.228069);
   hmcerror__17->SetBinError(23,5.394938);
   hmcerror__17->SetBinError(24,4.797417);
   hmcerror__17->SetBinError(25,13.91967);
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
   
   Double_t _fx3021[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3021[24] = {
   0,
   1,
   159,
   517,
   527,
   448,
   335,
   223,
   159,
   161,
   95,
   86,
   67,
   35,
   27,
   21,
   13,
   15,
   15,
   8,
   5,
   3,
   7,
   1};
   Double_t _felx3021[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3021[24] = {
   0,
   1,
   12.60952,
   22.73763,
   22.95648,
   21.16601,
   18.30301,
   14.93318,
   12.60952,
   12.68858,
   9.8686,
   9.3967,
   8.3119,
   6.0548,
   5.3414,
   4.7354,
   3.77763,
   4.0385,
   4.0385,
   3.0307,
   2.48995,
   2.143368,
   2.85954,
   1};
   Double_t _fehx3021[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3021[24] = {
   1.1478,
   1.35971,
   12.60952,
   22.73763,
   22.95648,
   21.16601,
   18.30301,
   14.93318,
   12.60952,
   12.68858,
   9.667,
   9.1951,
   8.1094,
   5.8483,
   5.1322,
   4.5229,
   3.5552,
   3.8197,
   3.8197,
   2.7896,
   2.21064,
   1.72422,
   2.61053,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1760);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(604.9521);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2928.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  86.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1156.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  219.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 387.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 195.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 165.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 23.2","F");

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
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3022[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3022[24] = {
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
   Double_t _felx3022[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3022[24] = {
   0,
   1.043093,
   0.2981432,
   0.2986074,
   0.2749638,
   0.2403478,
   0.2849021,
   0.3281829,
   0.3637338,
   0.3652642,
   0.3189186,
   0.3394648,
   0.3863486,
   0.4090091,
   0.6420357,
   0.6288272,
   0.8154802,
   0.5930631,
   0.6527104,
   0.9390426,
   1.116826,
   1.005585,
   1.340978,
   1.829099};
   Double_t _fehx3022[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3022[24] = {
   0,
   1.043093,
   0.2981432,
   0.2986074,
   0.2749638,
   0.2403478,
   0.2849021,
   0.3281829,
   0.3637338,
   0.3652642,
   0.3189186,
   0.3394648,
   0.3863486,
   0.4090091,
   0.6420357,
   0.6288272,
   0.8154802,
   0.5930631,
   0.6527104,
   0.9390426,
   1.116826,
   1.005585,
   1.340978,
   1.829099};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1760);
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
   
   Double_t _fx3023[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3023[24] = {
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
   Double_t _felx3023[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3023[24] = {
   0,
   0.3614542,
   0.2441132,
   0.2463088,
   0.2286286,
   0.2206491,
   0.2596661,
   0.302315,
   0.3108412,
   0.2999978,
   0.2701046,
   0.2756021,
   0.2716721,
   0.2616604,
   0.2485097,
   0.2453755,
   0.2517725,
   0.2387134,
   0.2349492,
   0.2966264,
   0.3647506,
   0.3080486,
   0.4756171,
   0.4577758};
   Double_t _fehx3023[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3023[24] = {
   0,
   0.3614542,
   0.2441132,
   0.2463088,
   0.2286286,
   0.2206491,
   0.2596661,
   0.302315,
   0.3108412,
   0.2999978,
   0.2701046,
   0.2756021,
   0.2716721,
   0.2616604,
   0.2485097,
   0.2453755,
   0.2517725,
   0.2387134,
   0.2349492,
   0.2966264,
   0.3647506,
   0.3080486,
   0.4756171,
   0.4577758};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1760);
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
   
   Double_t _fx3024[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3024[24] = {
   10,
   0.218291,
   1.331152,
   1.255212,
   1.157051,
   1.095664,
   0.9097957,
   0.7669761,
   0.7456874,
   0.935567,
   0.7059143,
   0.9366622,
   1.002979,
   0.7167736,
   0.7682468,
   0.7080881,
   0.7378702,
   1.160272,
   1.063508,
   0.8248846,
   0.914879,
   0.3666421,
   1.739936,
   0.3812676};
   Double_t _felx3024[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3024[24] = {
   0,
   0.218291,
   0.1055672,
   0.05520417,
   0.05040193,
   0.05176525,
   0.04970745,
   0.05136052,
   0.05913685,
   0.073733,
   0.07333038,
   0.1023434,
   0.1244277,
   0.1239977,
   0.151982,
   0.1596705,
   0.2144154,
   0.312384,
   0.2863317,
   0.3124972,
   0.4556006,
   0.2619496,
   0.7107739,
   0.3812676};
   Double_t _fehx3024[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3024[24] = {
   0,
   0.2968124,
   0.1055672,
   0.05520417,
   0.05040193,
   0.05176525,
   0.04970745,
   0.05136052,
   0.05913685,
   0.073733,
   0.07183235,
   0.1001477,
   0.1213964,
   0.1197688,
   0.1460295,
   0.1525053,
   0.2017905,
   0.2954595,
   0.2708186,
   0.2876373,
   0.4044936,
   0.2107239,
   0.6488794,
   0.5184133};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1760);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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
