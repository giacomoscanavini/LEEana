#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 18:06:30 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(-230.7692,-10.3,1692.308,1138.963);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__10->SetBinContent(1,56.24939);
   hmc__10->SetBinContent(2,267.8554);
   hmc__10->SetBinContent(3,383.9481);
   hmc__10->SetBinContent(4,390.5736);
   hmc__10->SetBinContent(5,358.1966);
   hmc__10->SetBinContent(6,317.9999);
   hmc__10->SetBinContent(7,226.9147);
   hmc__10->SetBinContent(8,173.6762);
   hmc__10->SetBinContent(9,129.5706);
   hmc__10->SetBinContent(10,97.95061);
   hmc__10->SetBinContent(11,61.29848);
   hmc__10->SetBinContent(12,44.5995);
   hmc__10->SetBinContent(13,34.09581);
   hmc__10->SetBinContent(14,29.55866);
   hmc__10->SetBinContent(15,19.78482);
   hmc__10->SetBinContent(16,20.21572);
   hmc__10->SetBinContent(17,15.75458);
   hmc__10->SetBinContent(18,8.752441);
   hmc__10->SetBinContent(19,7.804495);
   hmc__10->SetBinContent(20,8.274775);
   hmc__10->SetBinContent(21,5.569036);
   hmc__10->SetBinContent(22,8.685797);
   hmc__10->SetBinContent(23,4.959273);
   hmc__10->SetBinContent(24,4.70756);
   hmc__10->SetBinContent(25,4.140084);
   hmc__10->SetBinContent(26,39.3151);
   hmc__10->SetBinError(1,11.67691);
   hmc__10->SetBinError(2,49.88464);
   hmc__10->SetBinError(3,77.53489);
   hmc__10->SetBinError(4,90.46643);
   hmc__10->SetBinError(5,85.59356);
   hmc__10->SetBinError(6,76.20118);
   hmc__10->SetBinError(7,51.70504);
   hmc__10->SetBinError(8,36.36149);
   hmc__10->SetBinError(9,27.38157);
   hmc__10->SetBinError(10,22.02857);
   hmc__10->SetBinError(11,13.05654);
   hmc__10->SetBinError(12,10.15595);
   hmc__10->SetBinError(13,7.870297);
   hmc__10->SetBinError(14,6.754195);
   hmc__10->SetBinError(15,4.954174);
   hmc__10->SetBinError(16,4.822496);
   hmc__10->SetBinError(17,3.722594);
   hmc__10->SetBinError(18,2.75623);
   hmc__10->SetBinError(19,2.062478);
   hmc__10->SetBinError(20,2.341545);
   hmc__10->SetBinError(21,1.779395);
   hmc__10->SetBinError(22,2.744437);
   hmc__10->SetBinError(23,1.988056);
   hmc__10->SetBinError(24,2.168187);
   hmc__10->SetBinError(25,1.423001);
   hmc__10->SetBinError(26,7.693963);
   hmc__10->SetMinimum(-10.3);
   hmc__10->SetMaximum(1081.5);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,1500);
   hs4_stack_4->SetMinimum(-2.264013e-08);
   hs4_stack_4->SetMaximum(410.1023);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.3900497);
   hbadmatch_stack_1->SetBinContent(2,1.566566);
   hbadmatch_stack_1->SetBinContent(3,0.7397965);
   hbadmatch_stack_1->SetBinContent(4,3.455717);
   hbadmatch_stack_1->SetBinContent(5,2.818197);
   hbadmatch_stack_1->SetBinContent(6,0.4129704);
   hbadmatch_stack_1->SetBinContent(7,0.5901461);
   hbadmatch_stack_1->SetBinContent(8,1.54153);
   hbadmatch_stack_1->SetBinContent(9,1.026981);
   hbadmatch_stack_1->SetBinContent(10,0.5884556);
   hbadmatch_stack_1->SetBinContent(11,0.4103338);
   hbadmatch_stack_1->SetBinContent(13,0.5905072);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(17,0.4100147);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.2758068);
   hbadmatch_stack_1->SetBinError(2,0.6727845);
   hbadmatch_stack_1->SetBinError(3,0.4422529);
   hbadmatch_stack_1->SetBinError(4,1.100018);
   hbadmatch_stack_1->SetBinError(5,0.8193075);
   hbadmatch_stack_1->SetBinError(6,0.2923408);
   hbadmatch_stack_1->SetBinError(7,0.340721);
   hbadmatch_stack_1->SetBinError(8,0.5973201);
   hbadmatch_stack_1->SetBinError(9,0.5241807);
   hbadmatch_stack_1->SetBinError(10,0.3397478);
   hbadmatch_stack_1->SetBinError(11,0.2903959);
   hbadmatch_stack_1->SetBinError(13,0.4409546);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(17,0.4100147);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,1.379791);
   hext_stack_2->SetBinContent(2,10.49926);
   hext_stack_2->SetBinContent(3,8.649442);
   hext_stack_2->SetBinContent(4,6.881822);
   hext_stack_2->SetBinContent(5,12.96916);
   hext_stack_2->SetBinContent(6,6.393022);
   hext_stack_2->SetBinContent(7,2.923985);
   hext_stack_2->SetBinContent(8,6.042674);
   hext_stack_2->SetBinContent(9,2.827422);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,1.461993);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,1.704188);
   hext_stack_2->SetBinError(1,0.6935586);
   hext_stack_2->SetBinError(2,2.243031);
   hext_stack_2->SetBinError(3,2.014317);
   hext_stack_2->SetBinError(4,1.773089);
   hext_stack_2->SetBinError(5,2.649561);
   hext_stack_2->SetBinError(6,1.708342);
   hext_stack_2->SetBinError(7,1.040301);
   hext_stack_2->SetBinError(8,1.811541);
   hext_stack_2->SetBinError(9,1.193541);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.7356036);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.7656743);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.3569671);
   hdirt_stack_3->SetBinContent(2,0.6114205);
   hdirt_stack_3->SetBinContent(3,0.4853765);
   hdirt_stack_3->SetBinContent(4,0.6555186);
   hdirt_stack_3->SetBinContent(5,1.256781);
   hdirt_stack_3->SetBinContent(6,0.5200806);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.1545866);
   hdirt_stack_3->SetBinError(1,0.258803);
   hdirt_stack_3->SetBinError(2,0.3629402);
   hdirt_stack_3->SetBinError(3,0.3448585);
   hdirt_stack_3->SetBinError(4,0.406901);
   hdirt_stack_3->SetBinError(5,0.5424736);
   hdirt_stack_3->SetBinError(6,0.4061954);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.1545866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.908785);
   houtFV_stack_4->SetBinContent(2,5.332915);
   houtFV_stack_4->SetBinContent(3,4.365462);
   houtFV_stack_4->SetBinContent(4,3.912513);
   houtFV_stack_4->SetBinContent(5,3.115115);
   houtFV_stack_4->SetBinContent(6,2.914181);
   houtFV_stack_4->SetBinContent(7,2.807247);
   houtFV_stack_4->SetBinContent(8,1.908829);
   houtFV_stack_4->SetBinContent(9,2.009274);
   houtFV_stack_4->SetBinContent(10,2.221617);
   houtFV_stack_4->SetBinContent(11,0.3995008);
   houtFV_stack_4->SetBinContent(12,0.6272855);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.3616262);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinError(1,0.4255125);
   houtFV_stack_4->SetBinError(2,1.942686);
   houtFV_stack_4->SetBinError(3,1.033129);
   houtFV_stack_4->SetBinError(4,0.9474572);
   houtFV_stack_4->SetBinError(5,0.8662495);
   houtFV_stack_4->SetBinError(6,0.7913843);
   houtFV_stack_4->SetBinError(7,0.9309604);
   houtFV_stack_4->SetBinError(8,0.6506224);
   houtFV_stack_4->SetBinError(9,0.6370056);
   houtFV_stack_4->SetBinError(10,0.8593);
   houtFV_stack_4->SetBinError(11,0.2825688);
   houtFV_stack_4->SetBinError(12,0.4733789);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.3616262);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.2770047);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.04659828);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2905084);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2081776);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5358863);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.527746);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.780007);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.248066);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.966455);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.76278);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.015083);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.92069);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.920705);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.53973);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.309835);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6264038);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1622858);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.153746);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.3280938);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1960039);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1876993);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2533243);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.1335202);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1378285);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1389192);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.05967807);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05785787);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.6459356);
   hNCpi0inFVres_stack_7->SetBinError(1,0.166799);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6085171);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8172271);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6944925);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6471694);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5967554);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6883272);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7879693);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3856794);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3405614);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7044097);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1689537);
   hNCpi0inFVres_stack_7->SetBinError(13,0.07611698);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5041072);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2564378);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1355022);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1038539);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1452127);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1038335);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1238125);
   hNCpi0inFVres_stack_7->SetBinError(21,0.122637);
   hNCpi0inFVres_stack_7->SetBinError(22,0.05967807);
   hNCpi0inFVres_stack_7->SetBinError(24,0.05785787);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2537325);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3878009);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.710084);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.873322);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.653566);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.591161);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.498623);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.024694);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.177361);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.157802);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.578801);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.023049);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8436269);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7043812);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5169655);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.4456477);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6865314);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2855721);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.07823106);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.194636);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1653738);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.114473);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.079918);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.01822845);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.29677);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2115805);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8113642);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7023459);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6293876);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6828273);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5068922);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7752049);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7823936);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.718838);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4045476);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5944015);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3184387);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2580129);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2347136);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2252813);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.35212);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1405275);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.04522187);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1376284);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.09489914);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.09881846);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7659409);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.01822846);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6120404);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,37.16177);
   hCCpi0inFV_stack_10->SetBinContent(2,177.6431);
   hCCpi0inFV_stack_10->SetBinContent(3,263.7131);
   hCCpi0inFV_stack_10->SetBinContent(4,290.4476);
   hCCpi0inFV_stack_10->SetBinContent(5,263.7774);
   hCCpi0inFV_stack_10->SetBinContent(6,245.2842);
   hCCpi0inFV_stack_10->SetBinContent(7,175.825);
   hCCpi0inFV_stack_10->SetBinContent(8,124.559);
   hCCpi0inFV_stack_10->SetBinContent(9,90.91039);
   hCCpi0inFV_stack_10->SetBinContent(10,69.24169);
   hCCpi0inFV_stack_10->SetBinContent(11,39.49298);
   hCCpi0inFV_stack_10->SetBinContent(12,31.5925);
   hCCpi0inFV_stack_10->SetBinContent(13,21.56273);
   hCCpi0inFV_stack_10->SetBinContent(14,17.66248);
   hCCpi0inFV_stack_10->SetBinContent(15,13.09446);
   hCCpi0inFV_stack_10->SetBinContent(16,12.93747);
   hCCpi0inFV_stack_10->SetBinContent(17,8.942774);
   hCCpi0inFV_stack_10->SetBinContent(18,5.370012);
   hCCpi0inFV_stack_10->SetBinContent(19,5.028926);
   hCCpi0inFV_stack_10->SetBinContent(20,5.668771);
   hCCpi0inFV_stack_10->SetBinContent(21,4.003148);
   hCCpi0inFV_stack_10->SetBinContent(22,5.529772);
   hCCpi0inFV_stack_10->SetBinContent(23,2.498975);
   hCCpi0inFV_stack_10->SetBinContent(24,2.199135);
   hCCpi0inFV_stack_10->SetBinContent(25,2.832391);
   hCCpi0inFV_stack_10->SetBinContent(26,21.39618);
   hCCpi0inFV_stack_10->SetBinError(1,3.111416);
   hCCpi0inFV_stack_10->SetBinError(2,6.684644);
   hCCpi0inFV_stack_10->SetBinError(3,8.130612);
   hCCpi0inFV_stack_10->SetBinError(4,8.623495);
   hCCpi0inFV_stack_10->SetBinError(5,8.136266);
   hCCpi0inFV_stack_10->SetBinError(6,7.878962);
   hCCpi0inFV_stack_10->SetBinError(7,6.694955);
   hCCpi0inFV_stack_10->SetBinError(8,5.558264);
   hCCpi0inFV_stack_10->SetBinError(9,4.733025);
   hCCpi0inFV_stack_10->SetBinError(10,4.171618);
   hCCpi0inFV_stack_10->SetBinError(11,3.117935);
   hCCpi0inFV_stack_10->SetBinError(12,2.86428);
   hCCpi0inFV_stack_10->SetBinError(13,2.328266);
   hCCpi0inFV_stack_10->SetBinError(14,2.097578);
   hCCpi0inFV_stack_10->SetBinError(15,1.831056);
   hCCpi0inFV_stack_10->SetBinError(16,1.808437);
   hCCpi0inFV_stack_10->SetBinError(17,1.481367);
   hCCpi0inFV_stack_10->SetBinError(18,1.160264);
   hCCpi0inFV_stack_10->SetBinError(19,1.1363);
   hCCpi0inFV_stack_10->SetBinError(20,1.226742);
   hCCpi0inFV_stack_10->SetBinError(21,1.038897);
   hCCpi0inFV_stack_10->SetBinError(22,1.109609);
   hCCpi0inFV_stack_10->SetBinError(23,0.7344388);
   hCCpi0inFV_stack_10->SetBinError(24,0.7607114);
   hCCpi0inFV_stack_10->SetBinError(25,0.8077575);
   hCCpi0inFV_stack_10->SetBinError(26,2.235414);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.9286332);
   hNCinFV_stack_11->SetBinContent(2,1.662242);
   hNCinFV_stack_11->SetBinContent(3,3.322793);
   hNCinFV_stack_11->SetBinContent(4,2.889025);
   hNCinFV_stack_11->SetBinContent(5,3.326174);
   hNCinFV_stack_11->SetBinContent(6,1.072095);
   hNCinFV_stack_11->SetBinContent(7,1.908829);
   hNCinFV_stack_11->SetBinContent(8,1.127039);
   hNCinFV_stack_11->SetBinContent(9,0.1950248);
   hNCinFV_stack_11->SetBinContent(10,0.9269427);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(12,0.3917402);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.7319179);
   hNCinFV_stack_11->SetBinError(1,0.48078);
   hNCinFV_stack_11->SetBinError(2,0.6513556);
   hNCinFV_stack_11->SetBinError(3,0.9207963);
   hNCinFV_stack_11->SetBinError(4,0.7845188);
   hNCinFV_stack_11->SetBinError(5,0.9215152);
   hNCinFV_stack_11->SetBinError(6,0.5551335);
   hNCinFV_stack_11->SetBinError(7,0.6506224);
   hNCinFV_stack_11->SetBinError(8,0.5201044);
   hNCinFV_stack_11->SetBinError(9,0.1950249);
   hNCinFV_stack_11->SetBinError(10,0.4800908);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(12,0.2770047);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.438694);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,14.15921);
   hnumuCCinFV_stack_12->SetBinContent(2,63.28381);
   hnumuCCinFV_stack_12->SetBinContent(3,91.82204);
   hnumuCCinFV_stack_12->SetBinContent(4,73.91157);
   hnumuCCinFV_stack_12->SetBinContent(5,62.83925);
   hnumuCCinFV_stack_12->SetBinContent(6,54.18533);
   hnumuCCinFV_stack_12->SetBinContent(7,33.63845);
   hnumuCCinFV_stack_12->SetBinContent(8,28.9864);
   hnumuCCinFV_stack_12->SetBinContent(9,26.8777);
   hnumuCCinFV_stack_12->SetBinContent(10,21.20457);
   hnumuCCinFV_stack_12->SetBinContent(11,13.98214);
   hnumuCCinFV_stack_12->SetBinContent(12,9.576148);
   hnumuCCinFV_stack_12->SetBinContent(13,9.702377);
   hnumuCCinFV_stack_12->SetBinContent(14,8.185668);
   hnumuCCinFV_stack_12->SetBinContent(15,4.745357);
   hnumuCCinFV_stack_12->SetBinContent(16,5.482868);
   hnumuCCinFV_stack_12->SetBinContent(17,5.521916);
   hnumuCCinFV_stack_12->SetBinContent(18,2.168134);
   hnumuCCinFV_stack_12->SetBinContent(19,2.055672);
   hnumuCCinFV_stack_12->SetBinContent(20,1.962624);
   hnumuCCinFV_stack_12->SetBinContent(21,1.2315);
   hnumuCCinFV_stack_12->SetBinContent(22,2.204188);
   hnumuCCinFV_stack_12->SetBinContent(23,2.138108);
   hnumuCCinFV_stack_12->SetBinContent(24,1.175624);
   hnumuCCinFV_stack_12->SetBinContent(25,0.9492873);
   hnumuCCinFV_stack_12->SetBinContent(26,12.02968);
   hnumuCCinFV_stack_12->SetBinError(1,1.904372);
   hnumuCCinFV_stack_12->SetBinError(2,5.144602);
   hnumuCCinFV_stack_12->SetBinError(3,5.908206);
   hnumuCCinFV_stack_12->SetBinError(4,4.446851);
   hnumuCCinFV_stack_12->SetBinError(5,4.077544);
   hnumuCCinFV_stack_12->SetBinError(6,4.22492);
   hnumuCCinFV_stack_12->SetBinError(7,2.991352);
   hnumuCCinFV_stack_12->SetBinError(8,2.816891);
   hnumuCCinFV_stack_12->SetBinError(9,2.67537);
   hnumuCCinFV_stack_12->SetBinError(10,2.527568);
   hnumuCCinFV_stack_12->SetBinError(11,1.851465);
   hnumuCCinFV_stack_12->SetBinError(12,1.569774);
   hnumuCCinFV_stack_12->SetBinError(13,1.588172);
   hnumuCCinFV_stack_12->SetBinError(14,1.435745);
   hnumuCCinFV_stack_12->SetBinError(15,1.140559);
   hnumuCCinFV_stack_12->SetBinError(16,1.247948);
   hnumuCCinFV_stack_12->SetBinError(17,1.297537);
   hnumuCCinFV_stack_12->SetBinError(18,0.7005471);
   hnumuCCinFV_stack_12->SetBinError(19,0.7082781);
   hnumuCCinFV_stack_12->SetBinError(20,0.6686113);
   hnumuCCinFV_stack_12->SetBinError(21,0.504306);
   hnumuCCinFV_stack_12->SetBinError(22,0.7541768);
   hnumuCCinFV_stack_12->SetBinError(23,0.6897596);
   hnumuCCinFV_stack_12->SetBinError(24,0.5403539);
   hnumuCCinFV_stack_12->SetBinError(25,0.5696375);
   hnumuCCinFV_stack_12->SetBinError(26,1.763771);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,0.7834804);
   hnueCCinFV_stack_13->SetBinContent(8,1.752451);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.6301904);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,1.072095);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.2781975);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.3917439);
   hnueCCinFV_stack_13->SetBinError(8,0.7345848);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3654999);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.5551335);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__11->SetBinContent(1,56.24939);
   hmcerror__11->SetBinContent(2,267.8554);
   hmcerror__11->SetBinContent(3,383.9481);
   hmcerror__11->SetBinContent(4,390.5736);
   hmcerror__11->SetBinContent(5,358.1966);
   hmcerror__11->SetBinContent(6,317.9999);
   hmcerror__11->SetBinContent(7,226.9147);
   hmcerror__11->SetBinContent(8,173.6762);
   hmcerror__11->SetBinContent(9,129.5706);
   hmcerror__11->SetBinContent(10,97.95061);
   hmcerror__11->SetBinContent(11,61.29848);
   hmcerror__11->SetBinContent(12,44.5995);
   hmcerror__11->SetBinContent(13,34.09581);
   hmcerror__11->SetBinContent(14,29.55866);
   hmcerror__11->SetBinContent(15,19.78482);
   hmcerror__11->SetBinContent(16,20.21572);
   hmcerror__11->SetBinContent(17,15.75458);
   hmcerror__11->SetBinContent(18,8.752441);
   hmcerror__11->SetBinContent(19,7.804495);
   hmcerror__11->SetBinContent(20,8.274775);
   hmcerror__11->SetBinContent(21,5.569036);
   hmcerror__11->SetBinContent(22,8.685797);
   hmcerror__11->SetBinContent(23,4.959273);
   hmcerror__11->SetBinContent(24,4.70756);
   hmcerror__11->SetBinContent(25,4.140084);
   hmcerror__11->SetBinContent(26,39.3151);
   hmcerror__11->SetBinError(1,11.67691);
   hmcerror__11->SetBinError(2,49.88464);
   hmcerror__11->SetBinError(3,77.53489);
   hmcerror__11->SetBinError(4,90.46643);
   hmcerror__11->SetBinError(5,85.59356);
   hmcerror__11->SetBinError(6,76.20118);
   hmcerror__11->SetBinError(7,51.70504);
   hmcerror__11->SetBinError(8,36.36149);
   hmcerror__11->SetBinError(9,27.38157);
   hmcerror__11->SetBinError(10,22.02857);
   hmcerror__11->SetBinError(11,13.05654);
   hmcerror__11->SetBinError(12,10.15595);
   hmcerror__11->SetBinError(13,7.870297);
   hmcerror__11->SetBinError(14,6.754195);
   hmcerror__11->SetBinError(15,4.954174);
   hmcerror__11->SetBinError(16,4.822496);
   hmcerror__11->SetBinError(17,3.722594);
   hmcerror__11->SetBinError(18,2.75623);
   hmcerror__11->SetBinError(19,2.062478);
   hmcerror__11->SetBinError(20,2.341545);
   hmcerror__11->SetBinError(21,1.779395);
   hmcerror__11->SetBinError(22,2.744437);
   hmcerror__11->SetBinError(23,1.988056);
   hmcerror__11->SetBinError(24,2.168187);
   hmcerror__11->SetBinError(25,1.423001);
   hmcerror__11->SetBinError(26,7.693963);
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
   
   Double_t _fx3013[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3013[25] = {
   69,
   358,
   515,
   412,
   316,
   233,
   203,
   146,
   116,
   87,
   58,
   51,
   25,
   16,
   14,
   23,
   13,
   17,
   11,
   4,
   6,
   8,
   6,
   5,
   4};
   Double_t _felx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3013[25] = {
   8.4327,
   18.92089,
   22.69361,
   20.29778,
   17.77639,
   15.26434,
   14.24781,
   12.08305,
   10.77033,
   9.4503,
   7.7446,
   7.2725,
   5.1474,
   4.1628,
   3.9102,
   4.9457,
   3.77763,
   4.2835,
   3.4975,
   2.29683,
   2.67925,
   3.0307,
   2.67925,
   2.48995,
   2.29683};
   Double_t _fehx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3013[25] = {
   8.2304,
   18.92089,
   22.69361,
   20.29778,
   17.77639,
   15.26434,
   14.24781,
   12.08305,
   10.77033,
   9.2488,
   7.5415,
   7.0686,
   4.9374,
   3.9454,
   3.6898,
   4.7346,
   3.5552,
   4.0673,
   3.27,
   1.98186,
   2.41858,
   2.7896,
   2.41858,
   2.21064,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(1.532853);
   Graph_Graph3013->SetMaximum(591.2927);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=71.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2716.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 64.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  38.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1917.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 19.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 542.0","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_pi0_momentum_all");
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
   
   Double_t _fx3014[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3014[25] = {
   0.2075919,
   0.1862372,
   0.2019411,
   0.2316245,
   0.2389569,
   0.2396264,
   0.2278611,
   0.2093637,
   0.2113254,
   0.2248946,
   0.2129994,
   0.2277145,
   0.2308289,
   0.2285014,
   0.2504027,
   0.2385517,
   0.2362866,
   0.3149098,
   0.2642679,
   0.2829739,
   0.3195159,
   0.3159684,
   0.4008766,
   0.4605755,
   0.3437131};
   Double_t _fehx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3014[25] = {
   0.2075919,
   0.1862372,
   0.2019411,
   0.2316245,
   0.2389569,
   0.2396264,
   0.2278611,
   0.2093637,
   0.2113254,
   0.2248946,
   0.2129994,
   0.2277145,
   0.2308289,
   0.2285014,
   0.2504027,
   0.2385517,
   0.2362866,
   0.3149098,
   0.2642679,
   0.2829739,
   0.3195159,
   0.3159684,
   0.4008766,
   0.4605755,
   0.3437131};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3015[25] = {
   0.2075919,
   0.1862372,
   0.2019411,
   0.2316245,
   0.2389569,
   0.2396264,
   0.2278611,
   0.2093637,
   0.2113254,
   0.2248946,
   0.2129994,
   0.2277145,
   0.2308289,
   0.2285014,
   0.2504027,
   0.2385517,
   0.2362866,
   0.3149098,
   0.2642679,
   0.2829739,
   0.3195159,
   0.3159684,
   0.4008766,
   0.4605755,
   0.3437131};
   Double_t _fehx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3015[25] = {
   0.2075919,
   0.1862372,
   0.2019411,
   0.2316245,
   0.2389569,
   0.2396264,
   0.2278611,
   0.2093637,
   0.2113254,
   0.2248946,
   0.2129994,
   0.2277145,
   0.2308289,
   0.2285014,
   0.2504027,
   0.2385517,
   0.2362866,
   0.3149098,
   0.2642679,
   0.2829739,
   0.3195159,
   0.3159684,
   0.4008766,
   0.4605755,
   0.3437131};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3016[25] = {
   1.22668,
   1.336542,
   1.341327,
   1.054859,
   0.8821971,
   0.7327045,
   0.8946092,
   0.8406449,
   0.8952646,
   0.8882028,
   0.9461898,
   1.143511,
   0.7332279,
   0.5412966,
   0.7076131,
   1.137728,
   0.8251571,
   1.942315,
   1.409444,
   0.4833969,
   1.077386,
   0.9210439,
   1.209855,
   1.062121,
   0.9661639};
   Double_t _felx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3016[25] = {
   0.1499163,
   0.07063843,
   0.05910594,
   0.05196916,
   0.04962746,
   0.04800107,
   0.06278925,
   0.06957227,
   0.08312323,
   0.09648026,
   0.1263424,
   0.1630624,
   0.1509687,
   0.1408318,
   0.1976363,
   0.2446462,
   0.2397799,
   0.4894063,
   0.4481392,
   0.2775701,
   0.4810977,
   0.348926,
   0.5402506,
   0.5289259,
   0.5547786};
   Double_t _fehx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3016[25] = {
   0.1463198,
   0.07063843,
   0.05910594,
   0.05196916,
   0.04962746,
   0.04800107,
   0.06278925,
   0.06957227,
   0.08312323,
   0.0944231,
   0.1230291,
   0.1584906,
   0.1448096,
   0.133477,
   0.1864965,
   0.2342038,
   0.2256614,
   0.4647046,
   0.4189893,
   0.2395062,
   0.4342906,
   0.321168,
   0.4876884,
   0.4695936,
   0.4787004};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0.1852441);
   Graph_Graph3016->SetMaximum(2.627139);
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
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
