#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 15:03:37 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-276.9231,-8.4,2030.769,928.8632);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__10->SetBinContent(0,0.4107552);
   hmc__10->SetBinContent(1,10.02369);
   hmc__10->SetBinContent(2,88.16969);
   hmc__10->SetBinContent(3,243.073);
   hmc__10->SetBinContent(4,349.3189);
   hmc__10->SetBinContent(5,378.1941);
   hmc__10->SetBinContent(6,346.7062);
   hmc__10->SetBinContent(7,293.2176);
   hmc__10->SetBinContent(8,230.3556);
   hmc__10->SetBinContent(9,170.9758);
   hmc__10->SetBinContent(10,144.8493);
   hmc__10->SetBinContent(11,115.0962);
   hmc__10->SetBinContent(12,86.24157);
   hmc__10->SetBinContent(13,61.47434);
   hmc__10->SetBinContent(14,48.46369);
   hmc__10->SetBinContent(15,37.27925);
   hmc__10->SetBinContent(16,25.55228);
   hmc__10->SetBinContent(17,15.52885);
   hmc__10->SetBinContent(18,12.81431);
   hmc__10->SetBinContent(19,13.58015);
   hmc__10->SetBinContent(20,8.919106);
   hmc__10->SetBinContent(21,40.20713);
   hmc__10->SetBinError(0,0.2787364);
   hmc__10->SetBinError(1,9.426312);
   hmc__10->SetBinError(2,36.57198);
   hmc__10->SetBinError(3,84.01362);
   hmc__10->SetBinError(4,106.6635);
   hmc__10->SetBinError(5,130.2807);
   hmc__10->SetBinError(6,107.0304);
   hmc__10->SetBinError(7,97.60616);
   hmc__10->SetBinError(8,92.48195);
   hmc__10->SetBinError(9,63.82281);
   hmc__10->SetBinError(10,63.74568);
   hmc__10->SetBinError(11,46.21408);
   hmc__10->SetBinError(12,49.65924);
   hmc__10->SetBinError(13,41.52595);
   hmc__10->SetBinError(14,23.21219);
   hmc__10->SetBinError(15,21.15811);
   hmc__10->SetBinError(16,21.15029);
   hmc__10->SetBinError(17,13.14448);
   hmc__10->SetBinError(18,10.63701);
   hmc__10->SetBinError(19,13.52964);
   hmc__10->SetBinError(20,10.33563);
   hmc__10->SetBinError(21,20.87298);
   hmc__10->SetMinimum(-8.4);
   hmc__10->SetMaximum(882);
   hmc__10->SetEntries(2693.828);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,1800);
   hs4_stack_4->SetMinimum(-1.202048e-08);
   hs4_stack_4->SetMaximum(397.1038);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.022036);
   hbadmatch_stack_1->SetBinContent(3,0.901512);
   hbadmatch_stack_1->SetBinContent(4,0.6724045);
   hbadmatch_stack_1->SetBinContent(5,1.328252);
   hbadmatch_stack_1->SetBinContent(6,2.282344);
   hbadmatch_stack_1->SetBinContent(7,1.144888);
   hbadmatch_stack_1->SetBinContent(8,1.359307);
   hbadmatch_stack_1->SetBinContent(9,0.7319179);
   hbadmatch_stack_1->SetBinContent(10,0.9455363);
   hbadmatch_stack_1->SetBinContent(11,1.395643);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,1.654583);
   hbadmatch_stack_1->SetBinContent(14,2.336188e-18);
   hbadmatch_stack_1->SetBinContent(15,0.9980262);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.5365982);
   hbadmatch_stack_1->SetBinError(3,0.5294827);
   hbadmatch_stack_1->SetBinError(4,0.4229926);
   hbadmatch_stack_1->SetBinError(5,0.5576882);
   hbadmatch_stack_1->SetBinError(6,0.7437372);
   hbadmatch_stack_1->SetBinError(7,0.527177);
   hbadmatch_stack_1->SetBinError(8,0.5226737);
   hbadmatch_stack_1->SetBinError(9,0.438694);
   hbadmatch_stack_1->SetBinError(10,0.4879398);
   hbadmatch_stack_1->SetBinError(11,0.663784);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.8717494);
   hbadmatch_stack_1->SetBinError(14,2.336188e-18);
   hbadmatch_stack_1->SetBinError(15,0.5336373);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetEntries(67);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,3.318994);
   hext_stack_2->SetBinContent(3,8.381295);
   hext_stack_2->SetBinContent(4,7.180269);
   hext_stack_2->SetBinContent(5,8.153461);
   hext_stack_2->SetBinContent(6,8.552879);
   hext_stack_2->SetBinContent(7,6.078576);
   hext_stack_2->SetBinContent(8,7.460004);
   hext_stack_2->SetBinContent(9,2.27519);
   hext_stack_2->SetBinContent(10,2.103607);
   hext_stack_2->SetBinContent(11,1.704188);
   hext_stack_2->SetBinContent(12,1.861411);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,2.752401);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,3.539649);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,1.146136);
   hext_stack_2->SetBinError(3,2.116792);
   hext_stack_2->SetBinError(4,1.928098);
   hext_stack_2->SetBinError(5,2.008298);
   hext_stack_2->SetBinError(6,2.097566);
   hext_stack_2->SetBinError(7,1.508534);
   hext_stack_2->SetBinError(8,1.796704);
   hext_stack_2->SetBinError(9,0.9336798);
   hext_stack_2->SetBinError(10,0.9761052);
   hext_stack_2->SetBinError(11,0.7656743);
   hext_stack_2->SetBinError(12,0.9526997);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,1.07854);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,1.400848);
   hext_stack_2->SetEntries(152);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,1.009576);
   hdirt_stack_3->SetBinContent(5,1.252237);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,0.2664809);
   hdirt_stack_3->SetBinContent(8,0.2761429);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,0.1545866);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.6394193);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.4601902);
   hdirt_stack_3->SetBinError(5,0.5862043);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.2664809);
   hdirt_stack_3->SetBinError(8,0.1952625);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.1545866);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.4606419);
   hdirt_stack_3->SetEntries(23);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,1.401308);
   houtFV_stack_4->SetBinContent(3,3.648673);
   houtFV_stack_4->SetBinContent(4,5.293725);
   houtFV_stack_4->SetBinContent(5,4.461853);
   houtFV_stack_4->SetBinContent(6,3.471799);
   houtFV_stack_4->SetBinContent(7,5.051796);
   houtFV_stack_4->SetBinContent(8,2.737627);
   houtFV_stack_4->SetBinContent(9,2.01022);
   houtFV_stack_4->SetBinContent(10,1.371936);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,1.805704);
   houtFV_stack_4->SetBinContent(13,0.3900497);
   houtFV_stack_4->SetBinContent(15,0.3616262);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(2,0.6577657);
   houtFV_stack_4->SetBinError(3,0.968134);
   houtFV_stack_4->SetBinError(4,1.945883);
   houtFV_stack_4->SetBinError(5,0.9884486);
   houtFV_stack_4->SetBinError(6,0.8206793);
   houtFV_stack_4->SetBinError(7,1.117025);
   houtFV_stack_4->SetBinError(8,0.9013494);
   houtFV_stack_4->SetBinError(9,0.7681492);
   houtFV_stack_4->SetBinError(10,0.5185478);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.7080169);
   houtFV_stack_4->SetBinError(13,0.2758068);
   houtFV_stack_4->SetBinError(15,0.3616262);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(138);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.8010119);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.161463);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.881635);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.8542);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.566984);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.3463);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.804053);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.76313);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.327796);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.195595);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.95191);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4769348);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.8705081);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1136578);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1492851);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1733757);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.125218);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1687687);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5721352);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5676578);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6683842);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7304422);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7449179);
   hNCpi0inFVres_stack_7->SetBinError(8,0.672867);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5674526);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8855939);
   hNCpi0inFVres_stack_7->SetBinError(11,0.69775);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3748986);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1976138);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4642558);
   hNCpi0inFVres_stack_7->SetBinError(15,0.07003108);
   hNCpi0inFVres_stack_7->SetBinError(16,0.08422404);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1347745);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1012383);
   hNCpi0inFVres_stack_7->SetEntries(874);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8457384);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.569177);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.83188);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.274806);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.829733);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.097908);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.208512);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.745286);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.390927);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.215919);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.856238);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.591877);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.860552);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.45153);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8498682);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3385905);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6601595);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2580265);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.805274);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7048849);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7182187);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6126071);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5566782);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5930761);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5178371);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3198127);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7991967);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6208141);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.585674);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7643543);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.578976);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3991296);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1872619);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5873207);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.0882275);
   hNCpi0inFVdis_stack_8->SetEntries(672);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(2,42.93296);
   hCCpi0inFV_stack_10->SetBinContent(3,162.763);
   hCCpi0inFV_stack_10->SetBinContent(4,253.8721);
   hCCpi0inFV_stack_10->SetBinContent(5,280.9768);
   hCCpi0inFV_stack_10->SetBinContent(6,249.0356);
   hCCpi0inFV_stack_10->SetBinContent(7,210.3722);
   hCCpi0inFV_stack_10->SetBinContent(8,166.9456);
   hCCpi0inFV_stack_10->SetBinContent(9,126.9243);
   hCCpi0inFV_stack_10->SetBinContent(10,107.1519);
   hCCpi0inFV_stack_10->SetBinContent(11,91.21985);
   hCCpi0inFV_stack_10->SetBinContent(12,61.15663);
   hCCpi0inFV_stack_10->SetBinContent(13,46.08038);
   hCCpi0inFV_stack_10->SetBinContent(14,31.45749);
   hCCpi0inFV_stack_10->SetBinContent(15,26.3176);
   hCCpi0inFV_stack_10->SetBinContent(16,17.89569);
   hCCpi0inFV_stack_10->SetBinContent(17,11.05069);
   hCCpi0inFV_stack_10->SetBinContent(18,7.824187);
   hCCpi0inFV_stack_10->SetBinContent(19,8.948927);
   hCCpi0inFV_stack_10->SetBinContent(20,6.83892);
   hCCpi0inFV_stack_10->SetBinContent(21,26.89563);
   hCCpi0inFV_stack_10->SetBinError(1,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(2,3.301579);
   hCCpi0inFV_stack_10->SetBinError(3,6.426595);
   hCCpi0inFV_stack_10->SetBinError(4,8.035567);
   hCCpi0inFV_stack_10->SetBinError(5,8.372826);
   hCCpi0inFV_stack_10->SetBinError(6,7.932721);
   hCCpi0inFV_stack_10->SetBinError(7,7.269884);
   hCCpi0inFV_stack_10->SetBinError(8,6.481962);
   hCCpi0inFV_stack_10->SetBinError(9,5.644556);
   hCCpi0inFV_stack_10->SetBinError(10,5.14828);
   hCCpi0inFV_stack_10->SetBinError(11,4.856625);
   hCCpi0inFV_stack_10->SetBinError(12,3.88181);
   hCCpi0inFV_stack_10->SetBinError(13,3.442476);
   hCCpi0inFV_stack_10->SetBinError(14,2.851383);
   hCCpi0inFV_stack_10->SetBinError(15,2.590467);
   hCCpi0inFV_stack_10->SetBinError(16,2.095918);
   hCCpi0inFV_stack_10->SetBinError(17,1.64929);
   hCCpi0inFV_stack_10->SetBinError(18,1.388255);
   hCCpi0inFV_stack_10->SetBinError(19,1.413673);
   hCCpi0inFV_stack_10->SetBinError(20,1.316474);
   hCCpi0inFV_stack_10->SetBinError(21,2.622441);
   hCCpi0inFV_stack_10->SetEntries(8276);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,2.055672);
   hNCinFV_stack_11->SetBinContent(4,2.587494);
   hNCinFV_stack_11->SetBinContent(5,1.763676);
   hNCinFV_stack_11->SetBinContent(6,2.835772);
   hNCinFV_stack_11->SetBinContent(7,1.607298);
   hNCinFV_stack_11->SetBinContent(8,2.39585);
   hNCinFV_stack_11->SetBinContent(9,2.30395);
   hNCinFV_stack_11->SetBinContent(10,1.375317);
   hNCinFV_stack_11->SetBinContent(12,0.9286332);
   hNCinFV_stack_11->SetBinContent(14,0.3401776);
   hNCinFV_stack_11->SetBinContent(15,0.6803553);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.7082781);
   hNCinFV_stack_11->SetBinError(4,0.8087577);
   hNCinFV_stack_11->SetBinError(5,0.5878975);
   hNCinFV_stack_11->SetBinError(6,0.808577);
   hNCinFV_stack_11->SetBinError(7,0.6796534);
   hNCinFV_stack_11->SetBinError(8,0.7857345);
   hNCinFV_stack_11->SetBinError(9,0.7080718);
   hNCinFV_stack_11->SetBinError(10,0.5198233);
   hNCinFV_stack_11->SetBinError(12,0.48078);
   hNCinFV_stack_11->SetBinError(14,0.3401776);
   hNCinFV_stack_11->SetBinError(15,0.4810838);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetEntries(89);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,7.471554);
   hnumuCCinFV_stack_12->SetBinContent(2,37.26984);
   hnumuCCinFV_stack_12->SetBinContent(3,57.2592);
   hnumuCCinFV_stack_12->SetBinContent(4,70.98981);
   hnumuCCinFV_stack_12->SetBinContent(5,70.66672);
   hnumuCCinFV_stack_12->SetBinContent(6,70.32914);
   hnumuCCinFV_stack_12->SetBinContent(7,60.66046);
   hnumuCCinFV_stack_12->SetBinContent(8,39.98701);
   hnumuCCinFV_stack_12->SetBinContent(9,30.65159);
   hnumuCCinFV_stack_12->SetBinContent(10,26.25088);
   hnumuCCinFV_stack_12->SetBinContent(11,14.37664);
   hnumuCCinFV_stack_12->SetBinContent(12,16.60925);
   hnumuCCinFV_stack_12->SetBinContent(13,9.802769);
   hnumuCCinFV_stack_12->SetBinContent(14,10.5022);
   hnumuCCinFV_stack_12->SetBinContent(15,6.964716);
   hnumuCCinFV_stack_12->SetBinContent(16,4.995191);
   hnumuCCinFV_stack_12->SetBinContent(17,3.232584);
   hnumuCCinFV_stack_12->SetBinContent(18,3.17933);
   hnumuCCinFV_stack_12->SetBinContent(19,3.201446);
   hnumuCCinFV_stack_12->SetBinContent(20,1.323754);
   hnumuCCinFV_stack_12->SetBinContent(21,8.098816);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.201522);
   hnumuCCinFV_stack_12->SetBinError(2,3.371915);
   hnumuCCinFV_stack_12->SetBinError(3,4.107648);
   hnumuCCinFV_stack_12->SetBinError(4,5.157128);
   hnumuCCinFV_stack_12->SetBinError(5,4.893181);
   hnumuCCinFV_stack_12->SetBinError(6,4.78773);
   hnumuCCinFV_stack_12->SetBinError(7,3.968661);
   hnumuCCinFV_stack_12->SetBinError(8,3.38518);
   hnumuCCinFV_stack_12->SetBinError(9,2.78297);
   hnumuCCinFV_stack_12->SetBinError(10,2.883635);
   hnumuCCinFV_stack_12->SetBinError(11,1.998659);
   hnumuCCinFV_stack_12->SetBinError(12,2.055045);
   hnumuCCinFV_stack_12->SetBinError(13,1.580149);
   hnumuCCinFV_stack_12->SetBinError(14,1.642703);
   hnumuCCinFV_stack_12->SetBinError(15,1.315048);
   hnumuCCinFV_stack_12->SetBinError(16,1.157156);
   hnumuCCinFV_stack_12->SetBinError(17,0.8558709);
   hnumuCCinFV_stack_12->SetBinError(18,0.8779761);
   hnumuCCinFV_stack_12->SetBinError(19,0.8832399);
   hnumuCCinFV_stack_12->SetBinError(20,0.5560625);
   hnumuCCinFV_stack_12->SetBinError(21,1.493359);
   hnumuCCinFV_stack_12->SetEntries(2276);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,1.168774);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,1.072095);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.5372803);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.4379386);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.4810838);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.438694);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.5551335);
   hnueCCinFV_stack_13->SetEntries(35);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__11->SetBinContent(0,0.4107552);
   hmcerror__11->SetBinContent(1,10.02369);
   hmcerror__11->SetBinContent(2,88.16969);
   hmcerror__11->SetBinContent(3,243.073);
   hmcerror__11->SetBinContent(4,349.3189);
   hmcerror__11->SetBinContent(5,378.1941);
   hmcerror__11->SetBinContent(6,346.7062);
   hmcerror__11->SetBinContent(7,293.2176);
   hmcerror__11->SetBinContent(8,230.3556);
   hmcerror__11->SetBinContent(9,170.9758);
   hmcerror__11->SetBinContent(10,144.8493);
   hmcerror__11->SetBinContent(11,115.0962);
   hmcerror__11->SetBinContent(12,86.24157);
   hmcerror__11->SetBinContent(13,61.47434);
   hmcerror__11->SetBinContent(14,48.46369);
   hmcerror__11->SetBinContent(15,37.27925);
   hmcerror__11->SetBinContent(16,25.55228);
   hmcerror__11->SetBinContent(17,15.52885);
   hmcerror__11->SetBinContent(18,12.81431);
   hmcerror__11->SetBinContent(19,13.58015);
   hmcerror__11->SetBinContent(20,8.919106);
   hmcerror__11->SetBinContent(21,40.20713);
   hmcerror__11->SetBinError(0,0.2787364);
   hmcerror__11->SetBinError(1,9.426312);
   hmcerror__11->SetBinError(2,36.57198);
   hmcerror__11->SetBinError(3,84.01362);
   hmcerror__11->SetBinError(4,106.6635);
   hmcerror__11->SetBinError(5,130.2807);
   hmcerror__11->SetBinError(6,107.0304);
   hmcerror__11->SetBinError(7,97.60616);
   hmcerror__11->SetBinError(8,92.48195);
   hmcerror__11->SetBinError(9,63.82281);
   hmcerror__11->SetBinError(10,63.74568);
   hmcerror__11->SetBinError(11,46.21408);
   hmcerror__11->SetBinError(12,49.65924);
   hmcerror__11->SetBinError(13,41.52595);
   hmcerror__11->SetBinError(14,23.21219);
   hmcerror__11->SetBinError(15,21.15811);
   hmcerror__11->SetBinError(16,21.15029);
   hmcerror__11->SetBinError(17,13.14448);
   hmcerror__11->SetBinError(18,10.63701);
   hmcerror__11->SetBinError(19,13.52964);
   hmcerror__11->SetBinError(20,10.33563);
   hmcerror__11->SetBinError(21,20.87298);
   hmcerror__11->SetEntries(2693.828);

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
   
   Double_t _fx3013[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3013[20] = {
   9,
   147,
   411,
   420,
   361,
   315,
   250,
   201,
   162,
   110,
   80,
   72,
   46,
   42,
   26,
   23,
   16,
   13,
   9,
   8};
   Double_t _felx3013[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3013[20] = {
   3.19354,
   12.12436,
   20.27313,
   20.4939,
   19,
   17.74824,
   15.81139,
   14.17745,
   12.72792,
   10.48809,
   9.0683,
   8.6108,
   6.9153,
   6.6155,
   5.2453,
   4.9457,
   4.1628,
   3.77763,
   3.19354,
   3.0307};
   Double_t _fehx3013[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3013[20] = {
   2.9582,
   12.12436,
   20.27313,
   20.4939,
   19,
   17.74824,
   15.81139,
   14.17745,
   12.72792,
   10.48809,
   8.8665,
   8.4085,
   6.7108,
   6.4104,
   5.0358,
   4.7346,
   3.9454,
   3.5552,
   2.9582,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1980);
   Graph_Graph3013->SetMinimum(4.47237);
   Graph_Graph3013->SetMaximum(484.0464);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2721.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 62.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1911.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 545.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3014[20] = {
   0.9404037,
   0.4147909,
   0.3456313,
   0.305347,
   0.3444811,
   0.3087064,
   0.3328796,
   0.4014747,
   0.3732856,
   0.4400829,
   0.4015259,
   0.5758156,
   0.6755005,
   0.4789604,
   0.5675573,
   0.8277261,
   0.8464554,
   0.8300882,
   0.9962805,
   1.158818};
   Double_t _fehx3014[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3014[20] = {
   0.9404037,
   0.4147909,
   0.3456313,
   0.305347,
   0.3444811,
   0.3087064,
   0.3328796,
   0.4014747,
   0.3732856,
   0.4400829,
   0.4015259,
   0.5758156,
   0.6755005,
   0.4789604,
   0.5675573,
   0.8277261,
   0.8464554,
   0.8300882,
   0.9962805,
   1.158818};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1980);
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
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3015[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3015[20] = {
   0.3466673,
   0.1972245,
   0.21891,
   0.2340045,
   0.224645,
   0.2234265,
   0.2166981,
   0.2146229,
   0.2314264,
   0.2278786,
   0.2412076,
   0.2361115,
   0.2490977,
   0.2203324,
   0.241676,
   0.2679259,
   0.2682319,
   0.3062443,
   0.2552122,
   0.2867192};
   Double_t _fehx3015[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3015[20] = {
   0.3466673,
   0.1972245,
   0.21891,
   0.2340045,
   0.224645,
   0.2234265,
   0.2166981,
   0.2146229,
   0.2314264,
   0.2278786,
   0.2412076,
   0.2361115,
   0.2490977,
   0.2203324,
   0.241676,
   0.2679259,
   0.2682319,
   0.3062443,
   0.2552122,
   0.2867192};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1980);
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
   
   Double_t _fx3016[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3016[20] = {
   0.8978732,
   1.66724,
   1.69085,
   1.20234,
   0.9545363,
   0.9085503,
   0.8526091,
   0.872564,
   0.9475025,
   0.7594101,
   0.695071,
   0.8348642,
   0.7482797,
   0.8666282,
   0.6974388,
   0.9001154,
   1.03034,
   1.014491,
   0.6627321,
   0.8969508};
   Double_t _felx3016[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3016[20] = {
   0.3185993,
   0.1375116,
   0.0834035,
   0.05866818,
   0.05023875,
   0.05119101,
   0.05392374,
   0.06154592,
   0.07444283,
   0.07240691,
   0.07878891,
   0.09984512,
   0.1124908,
   0.1365043,
   0.1407029,
   0.1935522,
   0.2680687,
   0.2947977,
   0.2351624,
   0.3397986};
   Double_t _fehx3016[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3016[20] = {
   0.2951209,
   0.1375116,
   0.0834035,
   0.05866818,
   0.05023875,
   0.05119101,
   0.05392374,
   0.06154592,
   0.07444283,
   0.07240691,
   0.07703559,
   0.09749939,
   0.1091642,
   0.1322722,
   0.1350832,
   0.1852907,
   0.254069,
   0.2774397,
   0.2178327,
   0.3127668};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1980);
   Graph_Graph3016->SetMinimum(0.2898515);
   Graph_Graph3016->SetMaximum(1.942469);
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
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
