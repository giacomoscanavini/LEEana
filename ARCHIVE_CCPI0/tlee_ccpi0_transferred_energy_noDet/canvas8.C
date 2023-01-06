#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 16:07:00 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-276.9231,-5.5,2030.769,608.1842);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__22->SetBinContent(0,0.3934307);
   hmc__22->SetBinContent(1,7.835745);
   hmc__22->SetBinContent(2,59.2368);
   hmc__22->SetBinContent(3,160.542);
   hmc__22->SetBinContent(4,215.0533);
   hmc__22->SetBinContent(5,239.3053);
   hmc__22->SetBinContent(6,226.6909);
   hmc__22->SetBinContent(7,179.9191);
   hmc__22->SetBinContent(8,143.8318);
   hmc__22->SetBinContent(9,109.5617);
   hmc__22->SetBinContent(10,99.16599);
   hmc__22->SetBinContent(11,75.71568);
   hmc__22->SetBinContent(12,60.21563);
   hmc__22->SetBinContent(13,40.44907);
   hmc__22->SetBinContent(14,31.22964);
   hmc__22->SetBinContent(15,26.54096);
   hmc__22->SetBinContent(16,17.03644);
   hmc__22->SetBinContent(17,10.78502);
   hmc__22->SetBinContent(18,9.346368);
   hmc__22->SetBinContent(19,10.56963);
   hmc__22->SetBinContent(20,6.695453);
   hmc__22->SetBinContent(21,34.56135);
   hmc__22->SetBinError(0,0.2781975);
   hmc__22->SetBinError(1,3.230802);
   hmc__22->SetBinError(2,12.26256);
   hmc__22->SetBinError(3,34.00255);
   hmc__22->SetBinError(4,49.47412);
   hmc__22->SetBinError(5,54.58018);
   hmc__22->SetBinError(6,53.57572);
   hmc__22->SetBinError(7,40.57745);
   hmc__22->SetBinError(8,32.55142);
   hmc__22->SetBinError(9,25.78503);
   hmc__22->SetBinError(10,23.9127);
   hmc__22->SetBinError(11,19.02832);
   hmc__22->SetBinError(12,14.92739);
   hmc__22->SetBinError(13,11.25329);
   hmc__22->SetBinError(14,6.735894);
   hmc__22->SetBinError(15,7.095633);
   hmc__22->SetBinError(16,4.811446);
   hmc__22->SetBinError(17,2.820966);
   hmc__22->SetBinError(18,3.180051);
   hmc__22->SetBinError(19,2.737083);
   hmc__22->SetBinError(20,2.126869);
   hmc__22->SetBinError(21,6.266413);
   hmc__22->SetMinimum(-5.5);
   hmc__22->SetMaximum(577.5);
   hmc__22->SetEntries(1748.127);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,1800);
   hs8_stack_8->SetMinimum(-1.202048e-08);
   hs8_stack_8->SetMaximum(251.2706);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.2337684);
   hbadmatch_stack_1->SetBinContent(3,0.2211568);
   hbadmatch_stack_1->SetBinContent(4,0.5695943);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,1.156996);
   hbadmatch_stack_1->SetBinContent(7,1.144888);
   hbadmatch_stack_1->SetBinContent(8,0.7691609);
   hbadmatch_stack_1->SetBinContent(9,0.3917402);
   hbadmatch_stack_1->SetBinContent(10,0.7505114);
   hbadmatch_stack_1->SetBinContent(11,1.395643);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,1.654583);
   hbadmatch_stack_1->SetBinContent(15,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.2337684);
   hbadmatch_stack_1->SetBinError(3,0.2211568);
   hbadmatch_stack_1->SetBinError(4,0.4103082);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.5322581);
   hbadmatch_stack_1->SetBinError(7,0.527177);
   hbadmatch_stack_1->SetBinError(8,0.3963546);
   hbadmatch_stack_1->SetBinError(9,0.2770047);
   hbadmatch_stack_1->SetBinError(10,0.4472702);
   hbadmatch_stack_1->SetBinError(11,0.663784);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.8717494);
   hbadmatch_stack_1->SetBinError(15,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,2.587998);
   hext_stack_2->SetBinContent(3,7.732501);
   hext_stack_2->SetBinContent(4,5.40106);
   hext_stack_2->SetBinContent(5,6.609267);
   hext_stack_2->SetBinContent(6,7.739681);
   hext_stack_2->SetBinContent(7,5.112565);
   hext_stack_2->SetBinContent(8,6.005192);
   hext_stack_2->SetBinContent(9,1.868591);
   hext_stack_2->SetBinContent(10,2.103607);
   hext_stack_2->SetBinContent(11,1.704188);
   hext_stack_2->SetBinContent(12,1.861411);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,3.539649);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,1.021308);
   hext_stack_2->SetBinError(3,2.06648);
   hext_stack_2->SetBinError(4,1.694111);
   hext_stack_2->SetBinError(5,1.852582);
   hext_stack_2->SetBinError(6,2.017211);
   hext_stack_2->SetBinError(7,1.326187);
   hext_stack_2->SetBinError(8,1.576651);
   hext_stack_2->SetBinError(9,0.840497);
   hext_stack_2->SetBinError(10,0.9761052);
   hext_stack_2->SetBinError(11,0.7656743);
   hext_stack_2->SetBinError(12,0.9526997);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,1.400848);
   hext_stack_2->SetEntries(130);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.7551225);
   hdirt_stack_3->SetBinContent(5,1.252237);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,0.2664809);
   hdirt_stack_3->SetBinContent(8,0.2761429);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.1545866);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.3820091);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.3834428);
   hdirt_stack_3->SetBinError(5,0.5862043);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.2664809);
   hdirt_stack_3->SetBinError(8,0.1952625);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.1545866);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.3820091);
   hdirt_stack_3->SetEntries(20);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,1.156506);
   houtFV_stack_4->SetBinContent(3,3.10393);
   houtFV_stack_4->SetBinContent(4,4.756831);
   houtFV_stack_4->SetBinContent(5,4.068422);
   houtFV_stack_4->SetBinContent(6,2.489913);
   houtFV_stack_4->SetBinContent(7,4.216737);
   houtFV_stack_4->SetBinContent(8,2.397449);
   houtFV_stack_4->SetBinContent(9,1.934692);
   houtFV_stack_4->SetBinContent(10,1.176911);
   houtFV_stack_4->SetBinContent(11,0.1950248);
   houtFV_stack_4->SetBinContent(12,1.805704);
   houtFV_stack_4->SetBinContent(13,0.3900497);
   houtFV_stack_4->SetBinContent(15,0.3616262);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(2,0.6105144);
   houtFV_stack_4->SetBinError(3,0.8872939);
   houtFV_stack_4->SetBinError(4,1.905792);
   houtFV_stack_4->SetBinError(5,0.9484918);
   houtFV_stack_4->SetBinError(6,0.6933196);
   houtFV_stack_4->SetBinError(7,1.034963);
   houtFV_stack_4->SetBinError(8,0.8346916);
   houtFV_stack_4->SetBinError(9,0.7644271);
   houtFV_stack_4->SetBinError(10,0.4804759);
   houtFV_stack_4->SetBinError(11,0.1950249);
   houtFV_stack_4->SetBinError(12,0.7080169);
   houtFV_stack_4->SetBinError(13,0.2758068);
   houtFV_stack_4->SetBinError(15,0.3616262);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(118);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1771563);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.5021628);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.504481);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.23746);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.956416);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.190208);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.220863);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.198396);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.18123);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.500257);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.771196);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2277178);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.3362606);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.1109873);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.05785787);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.05306552);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1262769);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1380257);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4700831);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4685645);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3911092);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3977234);
   hNCpi0inFVres_stack_7->SetBinError(7,0.647308);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2959761);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3530949);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6198473);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6629601);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1233612);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1758642);
   hNCpi0inFVres_stack_7->SetBinError(14,0.08764647);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05785787);
   hNCpi0inFVres_stack_7->SetBinError(16,0.03757277);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1262769);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(413);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4409424);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.89103);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.802688);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.850199);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.714025);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.097874);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.275888);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.413466);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5588121);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.88097);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.787267);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7967395);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.318265);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9116251);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6265001);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1415578);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6601595);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.169494);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.476239);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3933508);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4061806);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3975613);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3391622);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3822351);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3889668);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1655821);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.553083);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3816649);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.514426);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7104042);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.495811);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3468693);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.07538409);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5873207);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.07381642);
   hNCpi0inFVdis_stack_8->SetEntries(337);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(2,30.12206);
   hCCpi0inFV_stack_10->SetBinContent(3,103.5696);
   hCCpi0inFV_stack_10->SetBinContent(4,152.197);
   hCCpi0inFV_stack_10->SetBinContent(5,173.4785);
   hCCpi0inFV_stack_10->SetBinContent(6,162.9086);
   hCCpi0inFV_stack_10->SetBinContent(7,125.916);
   hCCpi0inFV_stack_10->SetBinContent(8,105.9586);
   hCCpi0inFV_stack_10->SetBinContent(9,79.63082);
   hCCpi0inFV_stack_10->SetBinContent(10,72.77762);
   hCCpi0inFV_stack_10->SetBinContent(11,56.92152);
   hCCpi0inFV_stack_10->SetBinContent(12,41.95409);
   hCCpi0inFV_stack_10->SetBinContent(13,28.94969);
   hCCpi0inFV_stack_10->SetBinContent(14,19.29336);
   hCCpi0inFV_stack_10->SetBinContent(15,17.75981);
   hCCpi0inFV_stack_10->SetBinContent(16,11.84194);
   hCCpi0inFV_stack_10->SetBinContent(17,7.873055);
   hCCpi0inFV_stack_10->SetBinContent(18,5.286565);
   hCCpi0inFV_stack_10->SetBinContent(19,6.503205);
   hCCpi0inFV_stack_10->SetBinContent(20,5.036597);
   hCCpi0inFV_stack_10->SetBinContent(21,22.74956);
   hCCpi0inFV_stack_10->SetBinError(1,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(2,2.774956);
   hCCpi0inFV_stack_10->SetBinError(3,5.123967);
   hCCpi0inFV_stack_10->SetBinError(4,6.211901);
   hCCpi0inFV_stack_10->SetBinError(5,6.543659);
   hCCpi0inFV_stack_10->SetBinError(6,6.38803);
   hCCpi0inFV_stack_10->SetBinError(7,5.629088);
   hCCpi0inFV_stack_10->SetBinError(8,5.149006);
   hCCpi0inFV_stack_10->SetBinError(9,4.476535);
   hCCpi0inFV_stack_10->SetBinError(10,4.2758);
   hCCpi0inFV_stack_10->SetBinError(11,3.84716);
   hCCpi0inFV_stack_10->SetBinError(12,3.220713);
   hCCpi0inFV_stack_10->SetBinError(13,2.72102);
   hCCpi0inFV_stack_10->SetBinError(14,2.238176);
   hCCpi0inFV_stack_10->SetBinError(15,2.142465);
   hCCpi0inFV_stack_10->SetBinError(16,1.677466);
   hCCpi0inFV_stack_10->SetBinError(17,1.396416);
   hCCpi0inFV_stack_10->SetBinError(18,1.110635);
   hCCpi0inFV_stack_10->SetBinError(19,1.191949);
   hCCpi0inFV_stack_10->SetBinError(20,1.110469);
   hCCpi0inFV_stack_10->SetBinError(21,2.406647);
   hCCpi0inFV_stack_10->SetEntries(5273);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,0.8770706);
   hNCinFV_stack_11->SetBinContent(4,1.463836);
   hNCinFV_stack_11->SetBinContent(5,0.9801958);
   hNCinFV_stack_11->SetBinContent(6,1.320373);
   hNCinFV_stack_11->SetBinContent(7,0.7302274);
   hNCinFV_stack_11->SetBinContent(8,1.125349);
   hNCinFV_stack_11->SetBinContent(9,0.7868615);
   hNCinFV_stack_11->SetBinContent(10,0.3934307);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(14,0.3401776);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.5197486);
   hNCinFV_stack_11->SetBinError(4,0.620407);
   hNCinFV_stack_11->SetBinError(5,0.4383608);
   hNCinFV_stack_11->SetBinError(6,0.5548703);
   hNCinFV_stack_11->SetBinError(7,0.4379386);
   hNCinFV_stack_11->SetBinError(8,0.5194673);
   hNCinFV_stack_11->SetBinError(9,0.3934307);
   hNCinFV_stack_11->SetBinError(10,0.2781975);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(14,0.3401776);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetEntries(43);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,5.873757);
   hnumuCCinFV_stack_12->SetBinContent(2,23.63379);
   hnumuCCinFV_stack_12->SetBinContent(3,40.30933);
   hnumuCCinFV_stack_12->SetBinContent(4,45.86964);
   hnumuCCinFV_stack_12->SetBinContent(5,48.46788);
   hnumuCCinFV_stack_12->SetBinContent(6,46.61738);
   hnumuCCinFV_stack_12->SetBinContent(7,38.82176);
   hnumuCCinFV_stack_12->SetBinContent(8,24.03763);
   hnumuCCinFV_stack_12->SetBinContent(9,22.01955);
   hnumuCCinFV_stack_12->SetBinContent(10,19.55524);
   hnumuCCinFV_stack_12->SetBinContent(11,11.25056);
   hnumuCCinFV_stack_12->SetBinContent(12,12.11421);
   hnumuCCinFV_stack_12->SetBinContent(13,7.101401);
   hnumuCCinFV_stack_12->SetBinContent(14,7.382888);
   hnumuCCinFV_stack_12->SetBinContent(15,6.036083);
   hnumuCCinFV_stack_12->SetBinContent(16,3.924786);
   hnumuCCinFV_stack_12->SetBinContent(17,2.250697);
   hnumuCCinFV_stack_12->SetBinContent(18,2.445722);
   hnumuCCinFV_stack_12->SetBinContent(19,2.664553);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(21,7.315335);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.098637);
   hnumuCCinFV_stack_12->SetBinError(2,2.668854);
   hnumuCCinFV_stack_12->SetBinError(3,3.52031);
   hnumuCCinFV_stack_12->SetBinError(4,3.475534);
   hnumuCCinFV_stack_12->SetBinError(5,4.217656);
   hnumuCCinFV_stack_12->SetBinError(6,3.461244);
   hnumuCCinFV_stack_12->SetBinError(7,3.16216);
   hnumuCCinFV_stack_12->SetBinError(8,2.534505);
   hnumuCCinFV_stack_12->SetBinError(9,2.349936);
   hnumuCCinFV_stack_12->SetBinError(10,2.618043);
   hnumuCCinFV_stack_12->SetBinError(11,1.784788);
   hnumuCCinFV_stack_12->SetBinError(12,1.756328);
   hnumuCCinFV_stack_12->SetBinError(13,1.32506);
   hnumuCCinFV_stack_12->SetBinError(14,1.375483);
   hnumuCCinFV_stack_12->SetBinError(15,1.22401);
   hnumuCCinFV_stack_12->SetBinError(16,1.015628);
   hnumuCCinFV_stack_12->SetBinError(17,0.7346377);
   hnumuCCinFV_stack_12->SetBinError(18,0.7600838);
   hnumuCCinFV_stack_12->SetBinError(19,0.7910088);
   hnumuCCinFV_stack_12->SetBinError(20,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(21,1.441061);
   hnumuCCinFV_stack_12->SetEntries(1565);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.7753432);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.459648);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.4810838);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetEntries(23);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__23->SetBinContent(0,0.3934307);
   hmcerror__23->SetBinContent(1,7.835745);
   hmcerror__23->SetBinContent(2,59.2368);
   hmcerror__23->SetBinContent(3,160.542);
   hmcerror__23->SetBinContent(4,215.0533);
   hmcerror__23->SetBinContent(5,239.3053);
   hmcerror__23->SetBinContent(6,226.6909);
   hmcerror__23->SetBinContent(7,179.9191);
   hmcerror__23->SetBinContent(8,143.8318);
   hmcerror__23->SetBinContent(9,109.5617);
   hmcerror__23->SetBinContent(10,99.16599);
   hmcerror__23->SetBinContent(11,75.71568);
   hmcerror__23->SetBinContent(12,60.21563);
   hmcerror__23->SetBinContent(13,40.44907);
   hmcerror__23->SetBinContent(14,31.22964);
   hmcerror__23->SetBinContent(15,26.54096);
   hmcerror__23->SetBinContent(16,17.03644);
   hmcerror__23->SetBinContent(17,10.78502);
   hmcerror__23->SetBinContent(18,9.346368);
   hmcerror__23->SetBinContent(19,10.56963);
   hmcerror__23->SetBinContent(20,6.695453);
   hmcerror__23->SetBinContent(21,34.56135);
   hmcerror__23->SetBinError(0,0.2781975);
   hmcerror__23->SetBinError(1,3.230802);
   hmcerror__23->SetBinError(2,12.26256);
   hmcerror__23->SetBinError(3,34.00255);
   hmcerror__23->SetBinError(4,49.47412);
   hmcerror__23->SetBinError(5,54.58018);
   hmcerror__23->SetBinError(6,53.57572);
   hmcerror__23->SetBinError(7,40.57745);
   hmcerror__23->SetBinError(8,32.55142);
   hmcerror__23->SetBinError(9,25.78503);
   hmcerror__23->SetBinError(10,23.9127);
   hmcerror__23->SetBinError(11,19.02832);
   hmcerror__23->SetBinError(12,14.92739);
   hmcerror__23->SetBinError(13,11.25329);
   hmcerror__23->SetBinError(14,6.735894);
   hmcerror__23->SetBinError(15,7.095633);
   hmcerror__23->SetBinError(16,4.811446);
   hmcerror__23->SetBinError(17,2.820966);
   hmcerror__23->SetBinError(18,3.180051);
   hmcerror__23->SetBinError(19,2.737083);
   hmcerror__23->SetBinError(20,2.126869);
   hmcerror__23->SetBinError(21,6.266413);
   hmcerror__23->SetEntries(1748.127);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
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
   Double_t _fy3029[20] = {
   7,
   101,
   233,
   275,
   240,
   197,
   163,
   130,
   110,
   73,
   52,
   49,
   36,
   31,
   22,
   10,
   12,
   12,
   8,
   8};
   Double_t _felx3029[20] = {
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
   Double_t _fely3029[20] = {
   2.85954,
   10.04988,
   15.26434,
   16.58312,
   15.49193,
   14.03567,
   12.76715,
   11.40175,
   10.48809,
   8.6693,
   7.3419,
   7.1318,
   6.1381,
   5.7094,
   4.8417,
   3.34883,
   3.64022,
   3.64022,
   3.0307,
   3.0307};
   Double_t _fehx3029[20] = {
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
   Double_t _fehy3029[20] = {
   2.61053,
   10.04988,
   15.26434,
   16.58312,
   15.49193,
   14.03567,
   12.76715,
   11.40175,
   10.48809,
   8.4672,
   7.1381,
   6.9277,
   5.9318,
   5.5017,
   4.6299,
   3.1179,
   3.4155,
   3.4155,
   2.7896,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1980);
   Graph_Graph3029->SetMinimum(3.726414);
   Graph_Graph3029->SetMaximum(320.3274);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=46.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1769.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.3","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.9","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.3","F");

   ci = 1528;
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

   ci = 1529;
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

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.5","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1209.1","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 371.3","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.0","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[20] = {
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
   Double_t _fy3030[20] = {
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
   Double_t _felx3030[20] = {
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
   Double_t _fely3030[20] = {
   0.4123159,
   0.2070092,
   0.2117984,
   0.2300552,
   0.2280776,
   0.2363382,
   0.2255317,
   0.2263159,
   0.235347,
   0.2411381,
   0.2513128,
   0.2478989,
   0.278209,
   0.2156891,
   0.2673465,
   0.2824208,
   0.2615634,
   0.3402445,
   0.2589572,
   0.3176587};
   Double_t _fehx3030[20] = {
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
   Double_t _fehy3030[20] = {
   0.4123159,
   0.2070092,
   0.2117984,
   0.2300552,
   0.2280776,
   0.2363382,
   0.2255317,
   0.2263159,
   0.235347,
   0.2411381,
   0.2513128,
   0.2478989,
   0.278209,
   0.2156891,
   0.2673465,
   0.2824208,
   0.2615634,
   0.3402445,
   0.2589572,
   0.3176587};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1980);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   0.4123159,
   0.2070092,
   0.2117984,
   0.2300552,
   0.2280776,
   0.2363382,
   0.2255317,
   0.2263159,
   0.235347,
   0.2411381,
   0.2513128,
   0.2478989,
   0.278209,
   0.2156891,
   0.2673465,
   0.2824208,
   0.2615634,
   0.3402445,
   0.2589572,
   0.3176587};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   0.4123159,
   0.2070092,
   0.2117984,
   0.2300552,
   0.2280776,
   0.2363382,
   0.2255317,
   0.2263159,
   0.235347,
   0.2411381,
   0.2513128,
   0.2478989,
   0.278209,
   0.2156891,
   0.2673465,
   0.2824208,
   0.2615634,
   0.3402445,
   0.2589572,
   0.3176587};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1980);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
   0.893342,
   1.705021,
   1.451333,
   1.278753,
   1.002903,
   0.8690248,
   0.9059628,
   0.9038336,
   1.004,
   0.7361395,
   0.6867798,
   0.8137422,
   0.8900082,
   0.9926468,
   0.8289073,
   0.5869771,
   1.112655,
   1.283921,
   0.7568853,
   1.194841};
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0.3649353,
   0.169656,
   0.09508,
   0.07711171,
   0.06473711,
   0.06191545,
   0.07096048,
   0.07927145,
   0.09572765,
   0.08742211,
   0.09696671,
   0.1184377,
   0.1517489,
   0.1828199,
   0.1824237,
   0.1965687,
   0.3375256,
   0.3894796,
   0.2867365,
   0.4526505};
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
   0.3331566,
   0.169656,
   0.09508,
   0.07711171,
   0.06473711,
   0.06191545,
   0.07096048,
   0.07927145,
   0.09572765,
   0.08538411,
   0.09427506,
   0.1150482,
   0.1466486,
   0.1761692,
   0.1744435,
   0.1830136,
   0.3166893,
   0.3654361,
   0.2639259,
   0.416641};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1980);
   Graph_Graph3032->SetMinimum(0.2419816);
   Graph_Graph3032->SetMaximum(2.023104);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
