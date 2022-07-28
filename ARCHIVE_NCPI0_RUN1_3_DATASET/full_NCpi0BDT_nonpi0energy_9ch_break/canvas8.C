#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Jun  5 00:41:48 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-153.8462,-5.101653,1128.205,564.1354);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__22->SetBinContent(0,35.58012);
   hmc__22->SetBinContent(1,255.0826);
   hmc__22->SetBinContent(2,152.0964);
   hmc__22->SetBinContent(3,118.1406);
   hmc__22->SetBinContent(4,100.0843);
   hmc__22->SetBinContent(5,78.45446);
   hmc__22->SetBinContent(6,57.04509);
   hmc__22->SetBinContent(7,38.9062);
   hmc__22->SetBinContent(8,28.48532);
   hmc__22->SetBinContent(9,15.73465);
   hmc__22->SetBinContent(10,14.34066);
   hmc__22->SetBinContent(11,14.69479);
   hmc__22->SetBinContent(12,5.759538);
   hmc__22->SetBinContent(13,3.931384);
   hmc__22->SetBinContent(14,4.100392);
   hmc__22->SetBinContent(15,5.072294);
   hmc__22->SetBinContent(16,15.11484);
   hmc__22->SetBinError(0,3.677995);
   hmc__22->SetBinError(1,45.39431);
   hmc__22->SetBinError(2,26.59885);
   hmc__22->SetBinError(3,24.10486);
   hmc__22->SetBinError(4,24.41138);
   hmc__22->SetBinError(5,19.37125);
   hmc__22->SetBinError(6,14.90897);
   hmc__22->SetBinError(7,15.27942);
   hmc__22->SetBinError(8,11.24061);
   hmc__22->SetBinError(9,7.775601);
   hmc__22->SetBinError(10,6.883195);
   hmc__22->SetBinError(11,10.64622);
   hmc__22->SetBinError(12,7.238323);
   hmc__22->SetBinError(13,4.385876);
   hmc__22->SetBinError(14,12.19698);
   hmc__22->SetBinError(15,5.329199);
   hmc__22->SetBinError(16,9.333332);
   hmc__22->SetMinimum(-5.101653);
   hmc__22->SetMaximum(535.6735);
   hmc__22->SetEntries(926.8397);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",15,0,1000);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(267.8368);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,1.214546);
   hbadmatch_stack_1->SetBinContent(1,5.793173);
   hbadmatch_stack_1->SetBinContent(2,3.779595);
   hbadmatch_stack_1->SetBinContent(3,3.78338);
   hbadmatch_stack_1->SetBinContent(4,5.998596);
   hbadmatch_stack_1->SetBinContent(5,3.071134);
   hbadmatch_stack_1->SetBinContent(6,3.143105);
   hbadmatch_stack_1->SetBinContent(7,1.114261);
   hbadmatch_stack_1->SetBinContent(8,0.7319179);
   hbadmatch_stack_1->SetBinContent(9,1.489511);
   hbadmatch_stack_1->SetBinContent(10,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,1.125349);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.9557772);
   hbadmatch_stack_1->SetBinError(0,0.6522134);
   hbadmatch_stack_1->SetBinError(1,1.2965);
   hbadmatch_stack_1->SetBinError(2,1.044335);
   hbadmatch_stack_1->SetBinError(3,1.111578);
   hbadmatch_stack_1->SetBinError(4,1.594905);
   hbadmatch_stack_1->SetBinError(5,0.9202356);
   hbadmatch_stack_1->SetBinError(6,0.9366287);
   hbadmatch_stack_1->SetBinError(7,0.5713123);
   hbadmatch_stack_1->SetBinError(8,0.438694);
   hbadmatch_stack_1->SetBinError(9,0.6289506);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.5194673);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.4924161);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,19.94313);
   hext_stack_2->SetBinContent(1,50.68844);
   hext_stack_2->SetBinContent(2,34.93653);
   hext_stack_2->SetBinContent(3,22.76898);
   hext_stack_2->SetBinContent(4,18.18269);
   hext_stack_2->SetBinContent(5,9.808578);
   hext_stack_2->SetBinContent(6,14.17301);
   hext_stack_2->SetBinContent(7,6.653987);
   hext_stack_2->SetBinContent(8,7.109657);
   hext_stack_2->SetBinContent(9,1.626396);
   hext_stack_2->SetBinContent(10,2.517386);
   hext_stack_2->SetBinContent(11,2.834603);
   hext_stack_2->SetBinContent(12,1.055394);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,0.8131978);
   hext_stack_2->SetBinContent(16,5.276968);
   hext_stack_2->SetBinError(0,3.112328);
   hext_stack_2->SetBinError(1,4.876759);
   hext_stack_2->SetBinError(2,3.991581);
   hext_stack_2->SetBinError(3,3.051109);
   hext_stack_2->SetBinError(4,2.927756);
   hext_stack_2->SetBinError(5,1.972244);
   hext_stack_2->SetBinError(6,2.473194);
   hext_stack_2->SetBinError(7,1.642041);
   hext_stack_2->SetBinError(8,1.895097);
   hext_stack_2->SetBinError(9,0.8131978);
   hext_stack_2->SetBinError(10,0.9575503);
   hext_stack_2->SetBinError(11,1.106046);
   hext_stack_2->SetBinError(12,0.6130171);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,0.5750177);
   hext_stack_2->SetBinError(16,1.370748);
   hext_stack_2->SetEntries(479);

   ci = 1533;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,0.3988295);
   hdirt_stack_3->SetBinContent(1,5.496103);
   hdirt_stack_3->SetBinContent(2,4.887982);
   hdirt_stack_3->SetBinContent(3,3.630974);
   hdirt_stack_3->SetBinContent(4,1.117287);
   hdirt_stack_3->SetBinContent(5,1.100919);
   hdirt_stack_3->SetBinContent(6,0.4950385);
   hdirt_stack_3->SetBinContent(7,0.5570828);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.3895662);
   hdirt_stack_3->SetBinError(0,0.3988295);
   hdirt_stack_3->SetBinError(1,1.239849);
   hdirt_stack_3->SetBinError(2,1.125428);
   hdirt_stack_3->SetBinError(3,1.281845);
   hdirt_stack_3->SetBinError(4,0.5410672);
   hdirt_stack_3->SetBinError(5,0.4626424);
   hdirt_stack_3->SetBinError(6,0.2933304);
   hdirt_stack_3->SetBinError(7,0.4028472);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3895662);
   hdirt_stack_3->SetEntries(82);

   ci = 1534;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,2.934433);
   houtFV_stack_4->SetBinContent(1,58.21555);
   houtFV_stack_4->SetBinContent(2,37.34001);
   houtFV_stack_4->SetBinContent(3,30.17436);
   houtFV_stack_4->SetBinContent(4,23.60622);
   houtFV_stack_4->SetBinContent(5,17.71365);
   houtFV_stack_4->SetBinContent(6,11.29153);
   houtFV_stack_4->SetBinContent(7,7.01005);
   houtFV_stack_4->SetBinContent(8,5.78152);
   houtFV_stack_4->SetBinContent(9,1.558908);
   houtFV_stack_4->SetBinContent(10,2.502224);
   houtFV_stack_4->SetBinContent(11,2.144191);
   houtFV_stack_4->SetBinContent(12,0.785171);
   houtFV_stack_4->SetBinContent(13,0.6036918);
   houtFV_stack_4->SetBinContent(15,0.8770706);
   houtFV_stack_4->SetBinContent(16,1.17353);
   houtFV_stack_4->SetBinError(0,0.8788963);
   houtFV_stack_4->SetBinError(1,3.853381);
   houtFV_stack_4->SetBinError(2,3.000978);
   houtFV_stack_4->SetBinError(3,3.040224);
   houtFV_stack_4->SetBinError(4,2.594191);
   houtFV_stack_4->SetBinError(5,2.184974);
   houtFV_stack_4->SetBinError(6,1.647611);
   houtFV_stack_4->SetBinError(7,1.373426);
   houtFV_stack_4->SetBinError(8,1.218729);
   houtFV_stack_4->SetBinError(9,0.6038531);
   houtFV_stack_4->SetBinError(10,0.775418);
   houtFV_stack_4->SetBinError(11,0.7850774);
   houtFV_stack_4->SetBinError(12,0.3925882);
   houtFV_stack_4->SetBinError(13,0.4520251);
   houtFV_stack_4->SetBinError(15,0.5197486);
   houtFV_stack_4->SetBinError(16,0.4790957);
   houtFV_stack_4->SetEntries(862);

   ci = 1535;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.001683);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.11908);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.617544);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9186626);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4802842);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4507425);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1536;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1537;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,3.234584);
   hNCpi0inFVres_stack_7->SetBinContent(1,57.42921);
   hNCpi0inFVres_stack_7->SetBinContent(2,21.34408);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.24068);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.31665);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.505875);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.1577);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.039115);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.257748);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.142076);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.018522);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.3062359);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2504359);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3764861);
   hNCpi0inFVres_stack_7->SetBinError(0,0.5550324);
   hNCpi0inFVres_stack_7->SetBinError(1,2.440394);
   hNCpi0inFVres_stack_7->SetBinError(2,1.485257);
   hNCpi0inFVres_stack_7->SetBinError(3,1.286465);
   hNCpi0inFVres_stack_7->SetBinError(4,1.163421);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9041427);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7394442);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5194739);
   hNCpi0inFVres_stack_7->SetBinError(8,0.464003);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3242713);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3652876);
   hNCpi0inFVres_stack_7->SetBinError(11,0.14851);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1431726);
   hNCpi0inFVres_stack_7->SetBinError(14,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2236377);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1538;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.64157);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.3604);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.461528);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.747162);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.105126);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.701076);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.128458);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.446568);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3909362);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.124954);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8580936);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7073415);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4913662);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3975167);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4156262);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3130755);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2126346);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2764336);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1539;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1540;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,2.639056);
   hCCpi0inFV_stack_11->SetBinContent(1,26.53936);
   hCCpi0inFV_stack_11->SetBinContent(2,24.82408);
   hCCpi0inFV_stack_11->SetBinContent(3,23.38174);
   hCCpi0inFV_stack_11->SetBinContent(4,27.17097);
   hCCpi0inFV_stack_11->SetBinContent(5,25.90249);
   hCCpi0inFV_stack_11->SetBinContent(6,14.69172);
   hCCpi0inFV_stack_11->SetBinContent(7,13.87625);
   hCCpi0inFV_stack_11->SetBinContent(8,8.680847);
   hCCpi0inFV_stack_11->SetBinContent(9,7.987002);
   hCCpi0inFV_stack_11->SetBinContent(10,6.450561);
   hCCpi0inFV_stack_11->SetBinContent(11,6.133202);
   hCCpi0inFV_stack_11->SetBinContent(12,2.78759);
   hCCpi0inFV_stack_11->SetBinContent(13,2.076466);
   hCCpi0inFV_stack_11->SetBinContent(14,2.590875);
   hCCpi0inFV_stack_11->SetBinContent(15,1.805704);
   hCCpi0inFV_stack_11->SetBinContent(16,5.461912);
   hCCpi0inFV_stack_11->SetBinError(0,0.784283);
   hCCpi0inFV_stack_11->SetBinError(1,2.591879);
   hCCpi0inFV_stack_11->SetBinError(2,2.507977);
   hCCpi0inFV_stack_11->SetBinError(3,2.434401);
   hCCpi0inFV_stack_11->SetBinError(4,2.61319);
   hCCpi0inFV_stack_11->SetBinError(5,2.560088);
   hCCpi0inFV_stack_11->SetBinError(6,1.959841);
   hCCpi0inFV_stack_11->SetBinError(7,1.872316);
   hCCpi0inFV_stack_11->SetBinError(8,1.499906);
   hCCpi0inFV_stack_11->SetBinError(9,1.448196);
   hCCpi0inFV_stack_11->SetBinError(10,1.287516);
   hCCpi0inFV_stack_11->SetBinError(11,1.245689);
   hCCpi0inFV_stack_11->SetBinError(12,0.8331329);
   hCCpi0inFV_stack_11->SetBinError(13,0.7145695);
   hCCpi0inFV_stack_11->SetBinError(14,0.8095761);
   hCCpi0inFV_stack_11->SetBinError(15,0.7080169);
   hCCpi0inFV_stack_11->SetBinError(16,1.209225);
   hCCpi0inFV_stack_11->SetEntries(859);

   ci = 1542;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,0.5884556);
   hNCinFV_stack_12->SetBinContent(1,5.270268);
   hNCinFV_stack_12->SetBinContent(2,3.034178);
   hNCinFV_stack_12->SetBinContent(3,1.125349);
   hNCinFV_stack_12->SetBinContent(4,1.268811);
   hNCinFV_stack_12->SetBinContent(5,1.713804);
   hNCinFV_stack_12->SetBinContent(6,0.3401776);
   hNCinFV_stack_12->SetBinContent(7,0.9801958);
   hNCinFV_stack_12->SetBinContent(9,0.1967154);
   hNCinFV_stack_12->SetBinContent(11,0.3917402);
   hNCinFV_stack_12->SetBinError(0,0.3397478);
   hNCinFV_stack_12->SetBinError(1,1.19395);
   hNCinFV_stack_12->SetBinError(2,0.8325598);
   hNCinFV_stack_12->SetBinError(3,0.5194673);
   hNCinFV_stack_12->SetBinError(4,0.5889569);
   hNCinFV_stack_12->SetBinError(5,0.6207051);
   hNCinFV_stack_12->SetBinError(6,0.3401776);
   hNCinFV_stack_12->SetBinError(7,0.4383608);
   hNCinFV_stack_12->SetBinError(9,0.1967154);
   hNCinFV_stack_12->SetBinError(11,0.2770047);
   hNCinFV_stack_12->SetEntries(65);

   ci = 1543;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,3.177274);
   hnumuCCinFV_stack_13->SetBinContent(1,23.23092);
   hnumuCCinFV_stack_13->SetBinContent(2,10.90587);
   hnumuCCinFV_stack_13->SetBinContent(3,10.47896);
   hnumuCCinFV_stack_13->SetBinContent(4,6.313033);
   hnumuCCinFV_stack_13->SetBinContent(5,7.6588);
   hnumuCCinFV_stack_13->SetBinContent(6,5.814901);
   hnumuCCinFV_stack_13->SetBinContent(7,4.29429);
   hnumuCCinFV_stack_13->SetBinContent(8,2.443723);
   hnumuCCinFV_stack_13->SetBinContent(9,0.8566139);
   hnumuCCinFV_stack_13->SetBinContent(10,0.8165004);
   hnumuCCinFV_stack_13->SetBinContent(11,1.355087);
   hnumuCCinFV_stack_13->SetBinContent(12,1.019783);
   hnumuCCinFV_stack_13->SetBinContent(13,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(14,0.4329366);
   hnumuCCinFV_stack_13->SetBinContent(15,0.8770706);
   hnumuCCinFV_stack_13->SetBinContent(16,1.81437);
   hnumuCCinFV_stack_13->SetBinError(0,1.145681);
   hnumuCCinFV_stack_13->SetBinError(1,3.095484);
   hnumuCCinFV_stack_13->SetBinError(2,1.837364);
   hnumuCCinFV_stack_13->SetBinError(3,2.688647);
   hnumuCCinFV_stack_13->SetBinError(4,1.280275);
   hnumuCCinFV_stack_13->SetBinError(5,1.399783);
   hnumuCCinFV_stack_13->SetBinError(6,1.2518);
   hnumuCCinFV_stack_13->SetBinError(7,1.043015);
   hnumuCCinFV_stack_13->SetBinError(8,0.7661473);
   hnumuCCinFV_stack_13->SetBinError(9,0.4299814);
   hnumuCCinFV_stack_13->SetBinError(10,0.4091858);
   hnumuCCinFV_stack_13->SetBinError(11,0.6324519);
   hnumuCCinFV_stack_13->SetBinError(12,0.549065);
   hnumuCCinFV_stack_13->SetBinError(13,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(14,0.3074043);
   hnumuCCinFV_stack_13->SetBinError(15,0.5197486);
   hnumuCCinFV_stack_13->SetBinError(16,1.248034);
   hnumuCCinFV_stack_13->SetEntries(320);

   ci = 1544;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(1,1.302738);
   hnueCCinFV_stack_14->SetBinContent(2,2.536656);
   hnueCCinFV_stack_14->SetBinContent(3,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(5,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(1,0.636632);
   hnueCCinFV_stack_14->SetBinError(2,1.033014);
   hnueCCinFV_stack_14->SetBinError(3,0.2781975);
   hnueCCinFV_stack_14->SetBinError(5,0.2463303);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1545;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__23->SetBinContent(0,35.58012);
   hmcerror__23->SetBinContent(1,255.0826);
   hmcerror__23->SetBinContent(2,152.0964);
   hmcerror__23->SetBinContent(3,118.1406);
   hmcerror__23->SetBinContent(4,100.0843);
   hmcerror__23->SetBinContent(5,78.45446);
   hmcerror__23->SetBinContent(6,57.04509);
   hmcerror__23->SetBinContent(7,38.9062);
   hmcerror__23->SetBinContent(8,28.48532);
   hmcerror__23->SetBinContent(9,15.73465);
   hmcerror__23->SetBinContent(10,14.34066);
   hmcerror__23->SetBinContent(11,14.69479);
   hmcerror__23->SetBinContent(12,5.759538);
   hmcerror__23->SetBinContent(13,3.931384);
   hmcerror__23->SetBinContent(14,4.100392);
   hmcerror__23->SetBinContent(15,5.072294);
   hmcerror__23->SetBinContent(16,15.11484);
   hmcerror__23->SetBinError(0,3.677995);
   hmcerror__23->SetBinError(1,45.39431);
   hmcerror__23->SetBinError(2,26.59885);
   hmcerror__23->SetBinError(3,24.10486);
   hmcerror__23->SetBinError(4,24.41138);
   hmcerror__23->SetBinError(5,19.37125);
   hmcerror__23->SetBinError(6,14.90897);
   hmcerror__23->SetBinError(7,15.27942);
   hmcerror__23->SetBinError(8,11.24061);
   hmcerror__23->SetBinError(9,7.775601);
   hmcerror__23->SetBinError(10,6.883195);
   hmcerror__23->SetBinError(11,10.64622);
   hmcerror__23->SetBinError(12,7.238323);
   hmcerror__23->SetBinError(13,4.385876);
   hmcerror__23->SetBinError(14,12.19698);
   hmcerror__23->SetBinError(15,5.329199);
   hmcerror__23->SetBinError(16,9.333332);
   hmcerror__23->SetEntries(926.8397);

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
   
   Double_t _fx3029[15] = {
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
   966.6667};
   Double_t _fy3029[15] = {
   216,
   119,
   111,
   82,
   60,
   56,
   39,
   26,
   18,
   7,
   8,
   9,
   6,
   3,
   4};
   Double_t _felx3029[15] = {
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
   Double_t _fely3029[15] = {
   14.69694,
   10.90871,
   10.53565,
   9.1791,
   7.8743,
   7.6127,
   6.3813,
   5.2453,
   4.4008,
   2.85954,
   3.0307,
   3.19354,
   2.67925,
   2.143368,
   2.29683};
   Double_t _fehx3029[15] = {
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
   Double_t _fehy3029[15] = {
   14.69694,
   10.90871,
   10.53565,
   8.9774,
   7.6713,
   7.4094,
   6.1757,
   5.0358,
   4.1858,
   2.61053,
   2.7896,
   2.9582,
   2.41858,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1100);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(253.681);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 764.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 30.6","F");

   ci = 1532;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 173.9","F");

   ci = 1533;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.8","F");

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 199.6","F");

   ci = 1535;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.9","F");

   ci = 1536;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1537;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  130.2","F");

   ci = 1538;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.6","F");

   ci = 1539;
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

   ci = 1540;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 194.9","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 77.0","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3030[15] = {
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
   966.6667};
   Double_t _fy3030[15] = {
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
   Double_t _felx3030[15] = {
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
   Double_t _fely3030[15] = {
   0.1779592,
   0.1748815,
   0.2040353,
   0.2439081,
   0.2469107,
   0.2613542,
   0.3927245,
   0.3946107,
   0.4941706,
   0.4799775,
   0.724489,
   1.256754,
   1.115606,
   2.974589,
   1.050649};
   Double_t _fehx3030[15] = {
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
   Double_t _fehy3030[15] = {
   0.1779592,
   0.1748815,
   0.2040353,
   0.2439081,
   0.2469107,
   0.2613542,
   0.3927245,
   0.3946107,
   0.4941706,
   0.4799775,
   0.724489,
   1.256754,
   1.115606,
   2.974589,
   1.050649};
   grae = new TGraphAsymmErrors(15,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1100);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3031[15] = {
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
   966.6667};
   Double_t _fy3031[15] = {
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
   Double_t _felx3031[15] = {
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
   Double_t _fely3031[15] = {
   0.1565492,
   0.1561159,
   0.1729771,
   0.1818993,
   0.1803588,
   0.1725307,
   0.1847901,
   0.2045043,
   0.2293592,
   0.2360776,
   0.229244,
   0.316386,
   0.3953681,
   0.3882655,
   0.3661317};
   Double_t _fehx3031[15] = {
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
   Double_t _fehy3031[15] = {
   0.1565492,
   0.1561159,
   0.1729771,
   0.1818993,
   0.1803588,
   0.1725307,
   0.1847901,
   0.2045043,
   0.2293592,
   0.2360776,
   0.229244,
   0.316386,
   0.3953681,
   0.3882655,
   0.3661317};
   grae = new TGraphAsymmErrors(15,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1100);
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
   
   Double_t _fx3032[15] = {
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
   966.6667};
   Double_t _fy3032[15] = {
   0.8467844,
   0.7823987,
   0.9395583,
   0.8193093,
   0.7647749,
   0.9816797,
   1.002411,
   0.9127508,
   1.143972,
   0.4881226,
   0.5444105,
   1.562625,
   1.52618,
   0.7316374,
   0.7885978};
   Double_t _felx3032[15] = {
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
   Double_t _fely3032[15] = {
   0.05761638,
   0.07172238,
   0.08917892,
   0.09171369,
   0.1003678,
   0.1334506,
   0.1640175,
   0.1841405,
   0.2796885,
   0.1994009,
   0.2062431,
   0.5544785,
   0.681503,
   0.5227227,
   0.4528188};
   Double_t _fehx3032[15] = {
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
   Double_t _fehy3032[15] = {
   0.05761638,
   0.07172238,
   0.08917892,
   0.08969839,
   0.09778029,
   0.1298867,
   0.158733,
   0.1767858,
   0.2660244,
   0.1820369,
   0.189836,
   0.5136176,
   0.6151981,
   0.4205013,
   0.3907226};
   grae = new TGraphAsymmErrors(15,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1100);
   Graph_Graph3032->SetMinimum(0.0156683);
   Graph_Graph3032->SetMaximum(2.334625);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nonpi0_energy_all",15,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
