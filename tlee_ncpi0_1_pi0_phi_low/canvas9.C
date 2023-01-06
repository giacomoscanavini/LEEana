#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 23:52:15 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",164,172,1200,900);
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
   pad1->Range(-4.119231,-0.68,3.957692,75.19368);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__25->SetBinContent(1,33.72049);
   hmc__25->SetBinContent(2,27.04474);
   hmc__25->SetBinContent(3,26.96735);
   hmc__25->SetBinContent(4,24.12163);
   hmc__25->SetBinContent(5,26.03737);
   hmc__25->SetBinContent(6,25.98248);
   hmc__25->SetBinContent(7,25.62326);
   hmc__25->SetBinContent(8,20.87286);
   hmc__25->SetBinContent(9,20.80404);
   hmc__25->SetBinContent(10,24.91521);
   hmc__25->SetBinContent(11,30.36587);
   hmc__25->SetBinContent(12,28.84346);
   hmc__25->SetBinContent(13,29.67267);
   hmc__25->SetBinContent(14,24.46198);
   hmc__25->SetBinContent(15,22.3806);
   hmc__25->SetBinContent(16,28.621);
   hmc__25->SetBinContent(17,25.67355);
   hmc__25->SetBinContent(18,22.98137);
   hmc__25->SetBinContent(19,27.26809);
   hmc__25->SetBinContent(20,32.61198);
   hmc__25->SetBinContent(21,25.51966);
   hmc__25->SetBinContent(22,21.65748);
   hmc__25->SetBinContent(23,24.23781);
   hmc__25->SetBinContent(24,31.44319);
   hmc__25->SetBinContent(25,28.761);
   hmc__25->SetBinError(1,15.58456);
   hmc__25->SetBinError(2,10.6542);
   hmc__25->SetBinError(3,14.41443);
   hmc__25->SetBinError(4,11.3943);
   hmc__25->SetBinError(5,11.69358);
   hmc__25->SetBinError(6,11.55829);
   hmc__25->SetBinError(7,22.01692);
   hmc__25->SetBinError(8,12.862);
   hmc__25->SetBinError(9,11.47811);
   hmc__25->SetBinError(10,16.33618);
   hmc__25->SetBinError(11,14.98712);
   hmc__25->SetBinError(12,14.6596);
   hmc__25->SetBinError(13,14.04267);
   hmc__25->SetBinError(14,11.7682);
   hmc__25->SetBinError(15,10.96018);
   hmc__25->SetBinError(16,13.47656);
   hmc__25->SetBinError(17,15.57365);
   hmc__25->SetBinError(18,14.19835);
   hmc__25->SetBinError(19,18.16687);
   hmc__25->SetBinError(20,13.91028);
   hmc__25->SetBinError(21,11.48366);
   hmc__25->SetBinError(22,11.84801);
   hmc__25->SetBinError(23,20.26922);
   hmc__25->SetBinError(24,13.53126);
   hmc__25->SetBinError(25,13.99703);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-0.68);
   hmc__25->SetMaximum(71.4);
   hmc__25->SetEntries(704.9513);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-3.15,3.15);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(35.40652);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.19113);
   hbadmatch_stack_1->SetBinContent(2,1.366288);
   hbadmatch_stack_1->SetBinContent(3,1.057634);
   hbadmatch_stack_1->SetBinContent(4,0.5126958);
   hbadmatch_stack_1->SetBinContent(5,1.116675);
   hbadmatch_stack_1->SetBinContent(6,1.577142);
   hbadmatch_stack_1->SetBinContent(7,0.4331311);
   hbadmatch_stack_1->SetBinContent(8,0.6128272);
   hbadmatch_stack_1->SetBinContent(9,0.8587513);
   hbadmatch_stack_1->SetBinContent(10,0.1279738);
   hbadmatch_stack_1->SetBinContent(11,1.469317);
   hbadmatch_stack_1->SetBinContent(12,0.5700978);
   hbadmatch_stack_1->SetBinContent(13,0.6279932);
   hbadmatch_stack_1->SetBinContent(14,1.747231);
   hbadmatch_stack_1->SetBinContent(15,0.7791866);
   hbadmatch_stack_1->SetBinContent(16,0.1326562);
   hbadmatch_stack_1->SetBinContent(17,0.4476167);
   hbadmatch_stack_1->SetBinContent(18,1.527217);
   hbadmatch_stack_1->SetBinContent(19,0.6695492);
   hbadmatch_stack_1->SetBinContent(20,1.894632);
   hbadmatch_stack_1->SetBinContent(21,0.840767);
   hbadmatch_stack_1->SetBinContent(22,0.536893);
   hbadmatch_stack_1->SetBinContent(23,3.290153e-16);
   hbadmatch_stack_1->SetBinContent(24,0.6053502);
   hbadmatch_stack_1->SetBinContent(25,0.3418232);
   hbadmatch_stack_1->SetBinError(1,0.5658268);
   hbadmatch_stack_1->SetBinError(2,0.6514119);
   hbadmatch_stack_1->SetBinError(3,0.5425143);
   hbadmatch_stack_1->SetBinError(4,0.3022613);
   hbadmatch_stack_1->SetBinError(5,0.4937025);
   hbadmatch_stack_1->SetBinError(6,0.6829793);
   hbadmatch_stack_1->SetBinError(7,0.3075538);
   hbadmatch_stack_1->SetBinError(8,0.3543003);
   hbadmatch_stack_1->SetBinError(9,0.4564084);
   hbadmatch_stack_1->SetBinError(10,0.1279737);
   hbadmatch_stack_1->SetBinError(11,0.6316625);
   hbadmatch_stack_1->SetBinError(12,0.3424041);
   hbadmatch_stack_1->SetBinError(13,0.3083226);
   hbadmatch_stack_1->SetBinError(14,0.7431162);
   hbadmatch_stack_1->SetBinError(15,0.4618265);
   hbadmatch_stack_1->SetBinError(16,0.1326562);
   hbadmatch_stack_1->SetBinError(17,0.2649424);
   hbadmatch_stack_1->SetBinError(18,0.6663208);
   hbadmatch_stack_1->SetBinError(19,0.4147474);
   hbadmatch_stack_1->SetBinError(20,0.8095663);
   hbadmatch_stack_1->SetBinError(21,0.398707);
   hbadmatch_stack_1->SetBinError(22,0.3929602);
   hbadmatch_stack_1->SetBinError(23,3.290153e-16);
   hbadmatch_stack_1->SetBinError(24,0.3168535);
   hbadmatch_stack_1->SetBinError(25,0.2476863);
   hbadmatch_stack_1->SetEntries(97);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,2.345802);
   hext_stack_2->SetBinContent(2,4.595042);
   hext_stack_2->SetBinContent(3,2.103607);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,6.049854);
   hext_stack_2->SetBinContent(6,5.351989);
   hext_stack_2->SetBinContent(7,5.076662);
   hext_stack_2->SetBinContent(8,2.435184);
   hext_stack_2->SetBinContent(9,1.950793);
   hext_stack_2->SetBinContent(10,2.827422);
   hext_stack_2->SetBinContent(11,4.759445);
   hext_stack_2->SetBinContent(12,4.905078);
   hext_stack_2->SetBinContent(13,2.834603);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(16,8.381295);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,1.704188);
   hext_stack_2->SetBinContent(19,6.188307);
   hext_stack_2->SetBinContent(20,9.828927);
   hext_stack_2->SetBinContent(21,4.263464);
   hext_stack_2->SetBinContent(22,0.973192);
   hext_stack_2->SetBinContent(23,1.37261);
   hext_stack_2->SetBinContent(24,3.297453);
   hext_stack_2->SetBinContent(25,3.972198);
   hext_stack_2->SetBinError(1,0.9989624);
   hext_stack_2->SetBinError(2,1.529106);
   hext_stack_2->SetBinError(3,0.9761052);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,1.75513);
   hext_stack_2->SetBinError(6,1.462956);
   hext_stack_2->SetBinError(7,1.662762);
   hext_stack_2->SetBinError(8,0.9256422);
   hext_stack_2->SetBinError(9,0.8755137);
   hext_stack_2->SetBinError(10,1.193541);
   hext_stack_2->SetBinError(11,1.567911);
   hext_stack_2->SetBinError(12,1.686951);
   hext_stack_2->SetBinError(13,1.106046);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(16,2.116792);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.7656743);
   hext_stack_2->SetBinError(19,1.9155);
   hext_stack_2->SetBinError(20,2.329018);
   hext_stack_2->SetBinError(21,1.560171);
   hext_stack_2->SetBinError(22,0.5618727);
   hext_stack_2->SetBinError(23,0.8259691);
   hext_stack_2->SetBinError(24,1.384641);
   hext_stack_2->SetBinError(25,1.288106);
   hext_stack_2->SetEntries(193);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6669159);
   hdirt_stack_3->SetBinContent(4,0.566972);
   hdirt_stack_3->SetBinContent(5,0.6005306);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.002351481);
   hdirt_stack_3->SetBinContent(18,0.4192812);
   hdirt_stack_3->SetBinContent(19,0.89118);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.4026575);
   hdirt_stack_3->SetBinError(1,0.4822861);
   hdirt_stack_3->SetBinError(4,0.4505768);
   hdirt_stack_3->SetBinError(5,0.4280125);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(16,0.002351481);
   hdirt_stack_3->SetBinError(18,0.3058667);
   hdirt_stack_3->SetBinError(19,0.5528056);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetBinError(25,0.2984452);
   hdirt_stack_3->SetEntries(19);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,7.374434);
   houtFV_stack_4->SetBinContent(2,4.586889);
   houtFV_stack_4->SetBinContent(3,7.466206);
   houtFV_stack_4->SetBinContent(4,3.396383);
   houtFV_stack_4->SetBinContent(5,3.421394);
   houtFV_stack_4->SetBinContent(6,4.883312);
   houtFV_stack_4->SetBinContent(7,6.591808);
   houtFV_stack_4->SetBinContent(8,3.687119);
   houtFV_stack_4->SetBinContent(9,3.795274);
   houtFV_stack_4->SetBinContent(10,2.661993);
   houtFV_stack_4->SetBinContent(11,5.329428);
   houtFV_stack_4->SetBinContent(12,4.778038);
   houtFV_stack_4->SetBinContent(13,5.616108);
   houtFV_stack_4->SetBinContent(14,2.924066);
   houtFV_stack_4->SetBinContent(15,3.934399);
   houtFV_stack_4->SetBinContent(16,5.038598);
   houtFV_stack_4->SetBinContent(17,5.002629);
   houtFV_stack_4->SetBinContent(18,5.20768);
   houtFV_stack_4->SetBinContent(19,5.65019);
   houtFV_stack_4->SetBinContent(20,2.961367);
   houtFV_stack_4->SetBinContent(21,3.531319);
   houtFV_stack_4->SetBinContent(22,2.875675);
   houtFV_stack_4->SetBinContent(23,4.476416);
   houtFV_stack_4->SetBinContent(24,4.896132);
   houtFV_stack_4->SetBinContent(25,6.160407);
   houtFV_stack_4->SetBinError(1,1.411719);
   houtFV_stack_4->SetBinError(2,1.062418);
   houtFV_stack_4->SetBinError(3,1.571485);
   houtFV_stack_4->SetBinError(4,0.875101);
   houtFV_stack_4->SetBinError(5,0.9145534);
   houtFV_stack_4->SetBinError(6,1.138196);
   houtFV_stack_4->SetBinError(7,1.288229);
   houtFV_stack_4->SetBinError(8,0.9268139);
   houtFV_stack_4->SetBinError(9,0.8883362);
   houtFV_stack_4->SetBinError(10,0.8147983);
   houtFV_stack_4->SetBinError(11,1.290283);
   houtFV_stack_4->SetBinError(12,1.075146);
   houtFV_stack_4->SetBinError(13,1.203345);
   houtFV_stack_4->SetBinError(14,0.8114433);
   houtFV_stack_4->SetBinError(15,0.9592309);
   houtFV_stack_4->SetBinError(16,1.116538);
   houtFV_stack_4->SetBinError(17,1.123962);
   houtFV_stack_4->SetBinError(18,1.198681);
   houtFV_stack_4->SetBinError(19,1.183282);
   houtFV_stack_4->SetBinError(20,0.7682407);
   houtFV_stack_4->SetBinError(21,1.131265);
   houtFV_stack_4->SetBinError(22,1.02717);
   houtFV_stack_4->SetBinError(23,1.018202);
   houtFV_stack_4->SetBinError(24,1.110979);
   houtFV_stack_4->SetBinError(25,1.282815);
   houtFV_stack_4->SetEntries(520);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.149359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2263375);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.0895438);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1355755);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1040768);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1978906);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.0558817);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1112314);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02439346);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1121119);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1488079);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05495351);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03585128);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1470791);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1178303);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0965652);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01871117);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04737059);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1095243);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03175074);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02535645);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1296372);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.07024377);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06523096);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetEntries(33);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.596955);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.44136);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.114388);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.581985);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.901315);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.148428);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.999675);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.592966);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.270735);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.018146);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.912836);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.510369);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.441023);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.222713);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.132707);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.739245);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.385262);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.289394);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.949469);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.087554);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.485809);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.293934);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.408496);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.562239);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.443364);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8385136);
   hNCpi0inFVres_stack_7->SetBinError(2,0.732073);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6764991);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5961888);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4792436);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5891437);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5877598);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5556574);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5581457);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6038655);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3980909);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6785998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5739911);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6361923);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4541226);
   hNCpi0inFVres_stack_7->SetBinError(16,0.698131);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5933859);
   hNCpi0inFVres_stack_7->SetBinError(18,0.468494);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6377486);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5583665);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6359339);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4783283);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7055846);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7680282);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5480482);
   hNCpi0inFVres_stack_7->SetEntries(2792);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.243096);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.251912);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.224737);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.724059);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.580868);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.29445);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.213627);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.313459);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.825357);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9905177);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7017245);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.195903);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.191402);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.503844);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.100387);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8443474);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.689559);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.323004);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8616475);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.351807);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.073491);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.988277);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8344519);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.166004);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.393145);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3527583);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8241769);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4682795);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6505646);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4119905);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5626256);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3884713);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4945841);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6466489);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5692026);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1965824);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3214793);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3530612);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4041225);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3228769);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2171223);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6973242);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.385539);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2216812);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.58028);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3226343);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5915739);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2419665);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2634684);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3783791);
   hNCpi0inFVdis_stack_8->SetEntries(645);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.70103);
   hCCpi0inFV_stack_10->SetBinContent(2,4.704292);
   hCCpi0inFV_stack_10->SetBinContent(3,5.579183);
   hCCpi0inFV_stack_10->SetBinContent(4,4.424204);
   hCCpi0inFV_stack_10->SetBinContent(5,4.05302);
   hCCpi0inFV_stack_10->SetBinContent(6,4.689657);
   hCCpi0inFV_stack_10->SetBinContent(7,4.633631);
   hCCpi0inFV_stack_10->SetBinContent(8,2.592855);
   hCCpi0inFV_stack_10->SetBinContent(9,3.764405);
   hCCpi0inFV_stack_10->SetBinContent(10,4.618997);
   hCCpi0inFV_stack_10->SetBinContent(11,7.834157);
   hCCpi0inFV_stack_10->SetBinContent(12,7.338861);
   hCCpi0inFV_stack_10->SetBinContent(13,9.286752);
   hCCpi0inFV_stack_10->SetBinContent(14,6.378085);
   hCCpi0inFV_stack_10->SetBinContent(15,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(16,4.60242);
   hCCpi0inFV_stack_10->SetBinContent(17,6.075182);
   hCCpi0inFV_stack_10->SetBinContent(18,4.636073);
   hCCpi0inFV_stack_10->SetBinContent(19,3.911248);
   hCCpi0inFV_stack_10->SetBinContent(20,2.982615);
   hCCpi0inFV_stack_10->SetBinContent(21,4.838191);
   hCCpi0inFV_stack_10->SetBinContent(22,5.247424);
   hCCpi0inFV_stack_10->SetBinContent(23,5.160425);
   hCCpi0inFV_stack_10->SetBinContent(24,7.025622);
   hCCpi0inFV_stack_10->SetBinContent(25,6.368236);
   hCCpi0inFV_stack_10->SetBinError(1,1.394015);
   hCCpi0inFV_stack_10->SetBinError(2,0.9917389);
   hCCpi0inFV_stack_10->SetBinError(3,1.177419);
   hCCpi0inFV_stack_10->SetBinError(4,1.080989);
   hCCpi0inFV_stack_10->SetBinError(5,1.019635);
   hCCpi0inFV_stack_10->SetBinError(6,1.055827);
   hCCpi0inFV_stack_10->SetBinError(7,1.162067);
   hCCpi0inFV_stack_10->SetBinError(8,0.8091753);
   hCCpi0inFV_stack_10->SetBinError(9,0.9407157);
   hCCpi0inFV_stack_10->SetBinError(10,1.1261);
   hCCpi0inFV_stack_10->SetBinError(11,1.362601);
   hCCpi0inFV_stack_10->SetBinError(12,1.356838);
   hCCpi0inFV_stack_10->SetBinError(13,1.515478);
   hCCpi0inFV_stack_10->SetBinError(14,1.360306);
   hCCpi0inFV_stack_10->SetBinError(15,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(16,1.070288);
   hCCpi0inFV_stack_10->SetBinError(17,1.270206);
   hCCpi0inFV_stack_10->SetBinError(18,1.101912);
   hCCpi0inFV_stack_10->SetBinError(19,0.9814756);
   hCCpi0inFV_stack_10->SetBinError(20,0.8556548);
   hCCpi0inFV_stack_10->SetBinError(21,1.092603);
   hCCpi0inFV_stack_10->SetBinError(22,1.19321);
   hCCpi0inFV_stack_10->SetBinError(23,1.167362);
   hCCpi0inFV_stack_10->SetBinError(24,1.276711);
   hCCpi0inFV_stack_10->SetBinError(25,1.262252);
   hCCpi0inFV_stack_10->SetEntries(564);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.519579);
   hNCinFV_stack_11->SetBinContent(2,0.9502706);
   hNCinFV_stack_11->SetBinContent(3,1.500733);
   hNCinFV_stack_11->SetBinContent(4,1.490966);
   hNCinFV_stack_11->SetBinContent(5,1.990878);
   hNCinFV_stack_11->SetBinContent(6,0.5493447);
   hNCinFV_stack_11->SetBinContent(7,1.203612);
   hNCinFV_stack_11->SetBinContent(8,2.034018);
   hNCinFV_stack_11->SetBinContent(9,0.4062578);
   hNCinFV_stack_11->SetBinContent(10,2.722855);
   hNCinFV_stack_11->SetBinContent(11,0.9862008);
   hNCinFV_stack_11->SetBinContent(12,1.288225);
   hNCinFV_stack_11->SetBinContent(13,1.000143);
   hNCinFV_stack_11->SetBinContent(14,1.283798);
   hNCinFV_stack_11->SetBinContent(15,2.297359);
   hNCinFV_stack_11->SetBinContent(16,1.507365);
   hNCinFV_stack_11->SetBinContent(17,2.998893);
   hNCinFV_stack_11->SetBinContent(18,0.4551065);
   hNCinFV_stack_11->SetBinContent(19,1.515529);
   hNCinFV_stack_11->SetBinContent(20,1.937556);
   hNCinFV_stack_11->SetBinContent(21,0.4066407);
   hNCinFV_stack_11->SetBinContent(22,1.72871);
   hNCinFV_stack_11->SetBinContent(23,1.896396);
   hNCinFV_stack_11->SetBinContent(24,1.399019);
   hNCinFV_stack_11->SetBinContent(25,0.7132096);
   hNCinFV_stack_11->SetBinError(1,0.6232887);
   hNCinFV_stack_11->SetBinError(2,0.4284669);
   hNCinFV_stack_11->SetBinError(3,0.5629479);
   hNCinFV_stack_11->SetBinError(4,0.5324377);
   hNCinFV_stack_11->SetBinError(5,0.6798947);
   hNCinFV_stack_11->SetBinError(6,0.399339);
   hNCinFV_stack_11->SetBinError(7,0.5704996);
   hNCinFV_stack_11->SetBinError(8,0.7968586);
   hNCinFV_stack_11->SetBinError(9,0.2874962);
   hNCinFV_stack_11->SetBinError(10,1.177411);
   hNCinFV_stack_11->SetBinError(11,0.527672);
   hNCinFV_stack_11->SetBinError(12,0.5695358);
   hNCinFV_stack_11->SetBinError(13,0.4816836);
   hNCinFV_stack_11->SetBinError(14,0.4952312);
   hNCinFV_stack_11->SetBinError(15,0.9646862);
   hNCinFV_stack_11->SetBinError(16,0.5998922);
   hNCinFV_stack_11->SetBinError(17,0.8704454);
   hNCinFV_stack_11->SetBinError(18,0.2684787);
   hNCinFV_stack_11->SetBinError(19,0.5702705);
   hNCinFV_stack_11->SetBinError(20,1.077757);
   hNCinFV_stack_11->SetBinError(21,0.3101589);
   hNCinFV_stack_11->SetBinError(22,0.7518096);
   hNCinFV_stack_11->SetBinError(23,0.8189548);
   hNCinFV_stack_11->SetBinError(24,0.5512389);
   hNCinFV_stack_11->SetBinError(25,0.3293252);
   hNCinFV_stack_11->SetEntries(158);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.456337);
   hnumuCCinFV_stack_12->SetBinContent(2,4.036579);
   hnumuCCinFV_stack_12->SetBinContent(3,3.435328);
   hnumuCCinFV_stack_12->SetBinContent(4,5.637972);
   hnumuCCinFV_stack_12->SetBinContent(5,4.304021);
   hnumuCCinFV_stack_12->SetBinContent(6,3.085118);
   hnumuCCinFV_stack_12->SetBinContent(7,2.314685);
   hnumuCCinFV_stack_12->SetBinContent(8,4.429899);
   hnumuCCinFV_stack_12->SetBinContent(9,3.783654);
   hnumuCCinFV_stack_12->SetBinContent(10,6.892352);
   hnumuCCinFV_stack_12->SetBinContent(11,5.921303);
   hnumuCCinFV_stack_12->SetBinContent(12,4.030555);
   hnumuCCinFV_stack_12->SetBinContent(13,4.627449);
   hnumuCCinFV_stack_12->SetBinContent(14,5.26465);
   hnumuCCinFV_stack_12->SetBinContent(15,7.385741);
   hnumuCCinFV_stack_12->SetBinContent(16,4.030173);
   hnumuCCinFV_stack_12->SetBinContent(17,4.596132);
   hnumuCCinFV_stack_12->SetBinContent(18,4.301589);
   hnumuCCinFV_stack_12->SetBinContent(19,3.408047);
   hnumuCCinFV_stack_12->SetBinContent(20,4.851726);
   hnumuCCinFV_stack_12->SetBinContent(21,4.019392);
   hnumuCCinFV_stack_12->SetBinContent(22,4.673202);
   hnumuCCinFV_stack_12->SetBinContent(23,4.451134);
   hnumuCCinFV_stack_12->SetBinContent(24,6.945871);
   hnumuCCinFV_stack_12->SetBinContent(25,4.43578);
   hnumuCCinFV_stack_12->SetBinError(1,1.301037);
   hnumuCCinFV_stack_12->SetBinError(2,1.45806);
   hnumuCCinFV_stack_12->SetBinError(3,0.9505746);
   hnumuCCinFV_stack_12->SetBinError(4,1.461779);
   hnumuCCinFV_stack_12->SetBinError(5,1.042064);
   hnumuCCinFV_stack_12->SetBinError(6,1.387025);
   hnumuCCinFV_stack_12->SetBinError(7,0.7550222);
   hnumuCCinFV_stack_12->SetBinError(8,1.113077);
   hnumuCCinFV_stack_12->SetBinError(9,0.925141);
   hnumuCCinFV_stack_12->SetBinError(10,1.480313);
   hnumuCCinFV_stack_12->SetBinError(11,1.559059);
   hnumuCCinFV_stack_12->SetBinError(12,1.185339);
   hnumuCCinFV_stack_12->SetBinError(13,1.130935);
   hnumuCCinFV_stack_12->SetBinError(14,1.194938);
   hnumuCCinFV_stack_12->SetBinError(15,1.399635);
   hnumuCCinFV_stack_12->SetBinError(16,1.145691);
   hnumuCCinFV_stack_12->SetBinError(17,1.248986);
   hnumuCCinFV_stack_12->SetBinError(18,1.118613);
   hnumuCCinFV_stack_12->SetBinError(19,0.9936586);
   hnumuCCinFV_stack_12->SetBinError(20,1.149755);
   hnumuCCinFV_stack_12->SetBinError(21,1.100716);
   hnumuCCinFV_stack_12->SetBinError(22,1.183681);
   hnumuCCinFV_stack_12->SetBinError(23,1.205929);
   hnumuCCinFV_stack_12->SetBinError(24,1.839364);
   hnumuCCinFV_stack_12->SetBinError(25,1.259118);
   hnumuCCinFV_stack_12->SetEntries(444);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,1.376641);
   hnueCCinFV_stack_13->SetBinContent(21,1.919326);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(24,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(25,0.5113685);
   hnueCCinFV_stack_13->SetBinError(1,0.4494399);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3654046);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.178006);
   hnueCCinFV_stack_13->SetBinError(21,1.589338);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.2331833);
   hnueCCinFV_stack_13->SetBinError(24,0.2770047);
   hnueCCinFV_stack_13->SetBinError(25,0.3808243);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__26->SetBinContent(1,33.72049);
   hmcerror__26->SetBinContent(2,27.04474);
   hmcerror__26->SetBinContent(3,26.96735);
   hmcerror__26->SetBinContent(4,24.12163);
   hmcerror__26->SetBinContent(5,26.03737);
   hmcerror__26->SetBinContent(6,25.98248);
   hmcerror__26->SetBinContent(7,25.62326);
   hmcerror__26->SetBinContent(8,20.87286);
   hmcerror__26->SetBinContent(9,20.80404);
   hmcerror__26->SetBinContent(10,24.91521);
   hmcerror__26->SetBinContent(11,30.36587);
   hmcerror__26->SetBinContent(12,28.84346);
   hmcerror__26->SetBinContent(13,29.67267);
   hmcerror__26->SetBinContent(14,24.46198);
   hmcerror__26->SetBinContent(15,22.3806);
   hmcerror__26->SetBinContent(16,28.621);
   hmcerror__26->SetBinContent(17,25.67355);
   hmcerror__26->SetBinContent(18,22.98137);
   hmcerror__26->SetBinContent(19,27.26809);
   hmcerror__26->SetBinContent(20,32.61198);
   hmcerror__26->SetBinContent(21,25.51966);
   hmcerror__26->SetBinContent(22,21.65748);
   hmcerror__26->SetBinContent(23,24.23781);
   hmcerror__26->SetBinContent(24,31.44319);
   hmcerror__26->SetBinContent(25,28.761);
   hmcerror__26->SetBinError(1,15.58456);
   hmcerror__26->SetBinError(2,10.6542);
   hmcerror__26->SetBinError(3,14.41443);
   hmcerror__26->SetBinError(4,11.3943);
   hmcerror__26->SetBinError(5,11.69358);
   hmcerror__26->SetBinError(6,11.55829);
   hmcerror__26->SetBinError(7,22.01692);
   hmcerror__26->SetBinError(8,12.862);
   hmcerror__26->SetBinError(9,11.47811);
   hmcerror__26->SetBinError(10,16.33618);
   hmcerror__26->SetBinError(11,14.98712);
   hmcerror__26->SetBinError(12,14.6596);
   hmcerror__26->SetBinError(13,14.04267);
   hmcerror__26->SetBinError(14,11.7682);
   hmcerror__26->SetBinError(15,10.96018);
   hmcerror__26->SetBinError(16,13.47656);
   hmcerror__26->SetBinError(17,15.57365);
   hmcerror__26->SetBinError(18,14.19835);
   hmcerror__26->SetBinError(19,18.16687);
   hmcerror__26->SetBinError(20,13.91028);
   hmcerror__26->SetBinError(21,11.48366);
   hmcerror__26->SetBinError(22,11.84801);
   hmcerror__26->SetBinError(23,20.26922);
   hmcerror__26->SetBinError(24,13.53126);
   hmcerror__26->SetBinError(25,13.99703);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetEntries(704.9513);

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
   
   Double_t _fx3033[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3033[25] = {
   34,
   27,
   29,
   21,
   19,
   19,
   31,
   21,
   20,
   21,
   24,
   22,
   28,
   30,
   13,
   23,
   18,
   28,
   18,
   23,
   23,
   27,
   20,
   19,
   27};
   Double_t _felx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3033[25] = {
   5.9703,
   5.3414,
   5.5285,
   4.7354,
   4.5151,
   4.5151,
   5.7094,
   4.7354,
   4.6266,
   4.7354,
   5.0476,
   4.8417,
   5.4358,
   5.6197,
   3.77763,
   4.9457,
   4.4008,
   5.4358,
   4.4008,
   4.9457,
   4.9457,
   5.3414,
   4.6266,
   4.5151,
   5.3414};
   Double_t _fehx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3033[25] = {
   5.7635,
   5.1322,
   5.3201,
   4.5229,
   4.3011,
   4.3011,
   5.5017,
   4.5229,
   4.4133,
   4.5229,
   4.837,
   4.6299,
   5.2271,
   5.4117,
   3.5552,
   4.7346,
   4.1858,
   5.2271,
   4.1858,
   4.7346,
   4.7346,
   5.1322,
   4.4133,
   4.3011,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(6.168257);
   Graph_Graph3033->SetMaximum(42.81761);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3034[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3034[25] = {
   0.4621687,
   0.3939471,
   0.534514,
   0.4723687,
   0.4491076,
   0.4448494,
   0.8592554,
   0.6162072,
   0.5517251,
   0.6556709,
   0.4935513,
   0.508247,
   0.4732525,
   0.4810811,
   0.4897177,
   0.4708627,
   0.6066027,
   0.6178203,
   0.6662318,
   0.4265391,
   0.4499925,
   0.5470631,
   0.8362646,
   0.43034,
   0.4866669};
   Double_t _fehx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3034[25] = {
   0.4621687,
   0.3939471,
   0.534514,
   0.4723687,
   0.4491076,
   0.4448494,
   0.8592554,
   0.6162072,
   0.5517251,
   0.6556709,
   0.4935513,
   0.508247,
   0.4732525,
   0.4810811,
   0.4897177,
   0.4708627,
   0.6066027,
   0.6178203,
   0.6662318,
   0.4265391,
   0.4499925,
   0.5470631,
   0.8362646,
   0.43034,
   0.4866669};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-3.78,3.78);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3035[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3035[25] = {
   0.2655344,
   0.2450172,
   0.288931,
   0.2697307,
   0.2314694,
   0.2554578,
   0.2448865,
   0.3070933,
   0.3189811,
   0.2486558,
   0.2371806,
   0.2690203,
   0.2896503,
   0.271912,
   0.2734622,
   0.252011,
   0.2763773,
   0.2682153,
   0.2534025,
   0.2419953,
   0.2578393,
   0.2617464,
   0.3179831,
   0.2891711,
   0.2691173};
   Double_t _fehx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3035[25] = {
   0.2655344,
   0.2450172,
   0.288931,
   0.2697307,
   0.2314694,
   0.2554578,
   0.2448865,
   0.3070933,
   0.3189811,
   0.2486558,
   0.2371806,
   0.2690203,
   0.2896503,
   0.271912,
   0.2734622,
   0.252011,
   0.2763773,
   0.2682153,
   0.2534025,
   0.2419953,
   0.2578393,
   0.2617464,
   0.3179831,
   0.2891711,
   0.2691173};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-3.78,3.78);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3036[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3036[25] = {
   1.008289,
   0.9983455,
   1.075374,
   0.870588,
   0.7297204,
   0.7312621,
   1.209838,
   1.006091,
   0.9613519,
   0.8428586,
   0.7903609,
   0.7627378,
   0.9436293,
   1.226393,
   0.5808602,
   0.8036058,
   0.7011106,
   1.218378,
   0.6601122,
   0.7052624,
   0.9012659,
   1.246682,
   0.825157,
   0.6042644,
   0.9387712};
   Double_t _felx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3036[25] = {
   0.1770526,
   0.1975023,
   0.2050072,
   0.1963135,
   0.1734085,
   0.1737748,
   0.222821,
   0.2268688,
   0.2223895,
   0.1900606,
   0.1662261,
   0.1678613,
   0.1831922,
   0.229732,
   0.1687904,
   0.1727997,
   0.1714137,
   0.2365308,
   0.1613901,
   0.1516529,
   0.1937996,
   0.2466307,
   0.1908836,
   0.1435955,
   0.1857168};
   Double_t _fehx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3036[25] = {
   0.1709198,
   0.189767,
   0.1972793,
   0.1875039,
   0.1651895,
   0.1655385,
   0.2147151,
   0.2166881,
   0.2121367,
   0.1815317,
   0.1592907,
   0.1605182,
   0.1761587,
   0.221229,
   0.1588518,
   0.165424,
   0.1630394,
   0.2274495,
   0.1535054,
   0.1451798,
   0.1855275,
   0.2369712,
   0.1820833,
   0.1367895,
   0.178443};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.3049114);
   Graph_Graph3036->SetMaximum(1.590812);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
