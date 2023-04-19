#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 17:15:01 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",60,83,1200,900);
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
   pad1->Range(-0.4846154,-0.724635,3.553846,80.12938);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__25->SetBinContent(1,3.993447);
   hmc__25->SetBinContent(2,11.49958);
   hmc__25->SetBinContent(3,21.37407);
   hmc__25->SetBinContent(4,26.81719);
   hmc__25->SetBinContent(5,31.55754);
   hmc__25->SetBinContent(6,30.30116);
   hmc__25->SetBinContent(7,30.44379);
   hmc__25->SetBinContent(8,30.9164);
   hmc__25->SetBinContent(9,32.02124);
   hmc__25->SetBinContent(10,31.36528);
   hmc__25->SetBinContent(11,36.23175);
   hmc__25->SetBinContent(12,27.78588);
   hmc__25->SetBinContent(13,22.74602);
   hmc__25->SetBinContent(14,16.03923);
   hmc__25->SetBinContent(15,21.38181);
   hmc__25->SetBinContent(16,16.54793);
   hmc__25->SetBinContent(17,16.75426);
   hmc__25->SetBinContent(18,12.7198);
   hmc__25->SetBinContent(19,13.63355);
   hmc__25->SetBinContent(20,14.32818);
   hmc__25->SetBinContent(21,12.14579);
   hmc__25->SetBinContent(22,10.98524);
   hmc__25->SetBinContent(23,6.574936);
   hmc__25->SetBinContent(24,2.37137);
   hmc__25->SetBinError(1,3.442103);
   hmc__25->SetBinError(2,8.055622);
   hmc__25->SetBinError(3,13.37475);
   hmc__25->SetBinError(4,12.18514);
   hmc__25->SetBinError(5,15.34346);
   hmc__25->SetBinError(6,15.24486);
   hmc__25->SetBinError(7,14.26078);
   hmc__25->SetBinError(8,16.45126);
   hmc__25->SetBinError(9,15.88087);
   hmc__25->SetBinError(10,16.3265);
   hmc__25->SetBinError(11,15.8189);
   hmc__25->SetBinError(12,13.51954);
   hmc__25->SetBinError(13,11.25136);
   hmc__25->SetBinError(14,8.402361);
   hmc__25->SetBinError(15,11.28126);
   hmc__25->SetBinError(16,10.90639);
   hmc__25->SetBinError(17,10.93632);
   hmc__25->SetBinError(18,10.40704);
   hmc__25->SetBinError(19,7.992661);
   hmc__25->SetBinError(20,9.048438);
   hmc__25->SetBinError(21,14.60188);
   hmc__25->SetBinError(22,10.26343);
   hmc__25->SetBinError(23,5.670481);
   hmc__25->SetBinError(24,7.170725);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.724635);
   hmc__25->SetMaximum(76.08668);
   hmc__25->SetEntries(469.1651);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(38.04334);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(3,0.2188528);
   hbadmatch_stack_1->SetBinContent(4,1.161366);
   hbadmatch_stack_1->SetBinContent(5,0.9486612);
   hbadmatch_stack_1->SetBinContent(6,0.5352025);
   hbadmatch_stack_1->SetBinContent(7,0.7302274);
   hbadmatch_stack_1->SetBinContent(8,1.168288);
   hbadmatch_stack_1->SetBinContent(9,1.26712);
   hbadmatch_stack_1->SetBinContent(10,1.882127);
   hbadmatch_stack_1->SetBinContent(11,1.134004);
   hbadmatch_stack_1->SetBinContent(12,0.8115153);
   hbadmatch_stack_1->SetBinContent(13,0.7834804);
   hbadmatch_stack_1->SetBinContent(14,0.8770706);
   hbadmatch_stack_1->SetBinContent(15,1.677048);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.5352025);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,1.217248);
   hbadmatch_stack_1->SetBinContent(21,0.44744);
   hbadmatch_stack_1->SetBinContent(23,0.2193965);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.2188527);
   hbadmatch_stack_1->SetBinError(4,0.5340337);
   hbadmatch_stack_1->SetBinError(5,0.4892468);
   hbadmatch_stack_1->SetBinError(6,0.3921167);
   hbadmatch_stack_1->SetBinError(7,0.4379386);
   hbadmatch_stack_1->SetBinError(8,0.5370647);
   hbadmatch_stack_1->SetBinError(9,0.5883944);
   hbadmatch_stack_1->SetBinError(10,0.6878901);
   hbadmatch_stack_1->SetBinError(11,0.6249601);
   hbadmatch_stack_1->SetBinError(12,0.4065452);
   hbadmatch_stack_1->SetBinError(13,0.3917439);
   hbadmatch_stack_1->SetBinError(14,0.5197486);
   hbadmatch_stack_1->SetBinError(15,0.7341937);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3921167);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.6211758);
   hbadmatch_stack_1->SetBinError(21,0.3186844);
   hbadmatch_stack_1->SetBinError(23,0.2193965);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(71);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,1.932023);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,1.137595);
   hext_stack_2->SetBinContent(5,2.357392);
   hext_stack_2->SetBinContent(6,1.379791);
   hext_stack_2->SetBinContent(7,1.779209);
   hext_stack_2->SetBinContent(8,1.055394);
   hext_stack_2->SetBinContent(9,1.461993);
   hext_stack_2->SetBinContent(10,2.834603);
   hext_stack_2->SetBinContent(11,2.663019);
   hext_stack_2->SetBinContent(12,3.554009);
   hext_stack_2->SetBinContent(13,1.379791);
   hext_stack_2->SetBinContent(14,2.028585);
   hext_stack_2->SetBinContent(15,1.779209);
   hext_stack_2->SetBinContent(16,0.973192);
   hext_stack_2->SetBinContent(17,1.219797);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,1.932023);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,2.014225);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.016762);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,0.6602113);
   hext_stack_2->SetBinError(5,0.9653222);
   hext_stack_2->SetBinError(6,0.6935586);
   hext_stack_2->SetBinError(7,0.9206235);
   hext_stack_2->SetBinError(8,0.6130171);
   hext_stack_2->SetBinError(9,0.7356036);
   hext_stack_2->SetBinError(10,1.106046);
   hext_stack_2->SetBinError(11,1.142086);
   hext_stack_2->SetBinError(12,1.248989);
   hext_stack_2->SetBinError(13,0.6935586);
   hext_stack_2->SetBinError(14,0.8315593);
   hext_stack_2->SetBinError(15,0.9206235);
   hext_stack_2->SetBinError(16,0.5618727);
   hext_stack_2->SetBinError(17,0.7042499);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,1.016762);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,1.045894);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetEntries(92);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(5,0.4149213);
   hdirt_stack_3->SetBinContent(7,0.2645861);
   hdirt_stack_3->SetBinContent(8,0.4786102);
   hdirt_stack_3->SetBinContent(9,0.5429839);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(5,0.4149213);
   hdirt_stack_3->SetBinError(7,0.2645861);
   hdirt_stack_3->SetBinError(8,0.3652942);
   hdirt_stack_3->SetBinError(9,0.4278058);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetEntries(11);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,0.7319179);
   houtFV_stack_4->SetBinContent(2,2.103854);
   houtFV_stack_4->SetBinContent(3,3.316031);
   houtFV_stack_4->SetBinContent(4,4.156715);
   houtFV_stack_4->SetBinContent(5,5.465626);
   houtFV_stack_4->SetBinContent(6,3.931878);
   houtFV_stack_4->SetBinContent(7,4.159526);
   houtFV_stack_4->SetBinContent(8,5.191939);
   houtFV_stack_4->SetBinContent(9,5.21325);
   houtFV_stack_4->SetBinContent(10,4.021242);
   houtFV_stack_4->SetBinContent(11,5.922308);
   houtFV_stack_4->SetBinContent(12,2.887334);
   houtFV_stack_4->SetBinContent(13,4.54352);
   houtFV_stack_4->SetBinContent(14,2.642437);
   houtFV_stack_4->SetBinContent(15,4.392824);
   houtFV_stack_4->SetBinContent(16,2.339578);
   houtFV_stack_4->SetBinContent(17,3.153555);
   houtFV_stack_4->SetBinContent(18,2.199135);
   houtFV_stack_4->SetBinContent(19,2.481933);
   houtFV_stack_4->SetBinContent(20,3.162055);
   houtFV_stack_4->SetBinContent(21,1.905448);
   houtFV_stack_4->SetBinContent(22,2.78759);
   houtFV_stack_4->SetBinContent(23,1.353404);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinError(1,0.438694);
   houtFV_stack_4->SetBinError(2,0.6792233);
   houtFV_stack_4->SetBinError(3,0.9193568);
   houtFV_stack_4->SetBinError(4,1.05915);
   houtFV_stack_4->SetBinError(5,1.191132);
   houtFV_stack_4->SetBinError(6,1.017913);
   houtFV_stack_4->SetBinError(7,0.9813267);
   houtFV_stack_4->SetBinError(8,1.127927);
   houtFV_stack_4->SetBinError(9,1.150848);
   houtFV_stack_4->SetBinError(10,0.9741183);
   houtFV_stack_4->SetBinError(11,1.321996);
   houtFV_stack_4->SetBinError(12,0.7840966);
   houtFV_stack_4->SetBinError(13,1.01284);
   houtFV_stack_4->SetBinError(14,0.7851269);
   houtFV_stack_4->SetBinError(15,1.053194);
   houtFV_stack_4->SetBinError(16,0.7190603);
   houtFV_stack_4->SetBinError(17,0.8827474);
   houtFV_stack_4->SetBinError(18,0.7607114);
   houtFV_stack_4->SetBinError(19,0.7703332);
   houtFV_stack_4->SetBinError(20,0.9079541);
   houtFV_stack_4->SetBinError(21,0.6496038);
   houtFV_stack_4->SetBinError(22,0.8331329);
   houtFV_stack_4->SetBinError(23,0.641545);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetEntries(344);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8652359);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.44043);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.256682);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.769003);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.658506);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.13538);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.724507);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.6663);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.292894);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.976944);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.252536);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.68996);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.744599);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.519656);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.350087);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.087538);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.621943);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.012216);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.024338);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.789848);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.036876);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.17588);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.9627222);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2994136);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5154);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7712204);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7114099);
   hNCpi0inFVres_stack_7->SetBinError(5,1.009595);
   hNCpi0inFVres_stack_7->SetBinError(6,1.064788);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8734528);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8323833);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9178152);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9420554);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8801854);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7442098);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7843146);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7258984);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6208453);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7128231);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4808238);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5666567);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5678573);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5780474);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4838504);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5331556);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3631504);
   hNCpi0inFVres_stack_7->SetBinError(24,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5852358);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.646108);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.929853);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.116336);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.143404);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.81118);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.134362);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.231016);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.310308);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.324758);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.532676);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.25634);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.339376);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7664219);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4457358);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.502368);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6267538);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.00424);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3477539);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1727406);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.436411);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6605358);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3108926);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2795826);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.412414);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5256813);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5470872);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3592889);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3943225);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3406605);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4458957);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4633044);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2727714);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1610816);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2162644);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1943021);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3738879);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1731161);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(2,1.714094);
   hCCpi0inFV_stack_10->SetBinContent(3,4.507643);
   hCCpi0inFV_stack_10->SetBinContent(4,4.775991);
   hCCpi0inFV_stack_10->SetBinContent(5,5.385541);
   hCCpi0inFV_stack_10->SetBinContent(6,5.151563);
   hCCpi0inFV_stack_10->SetBinContent(7,5.901652);
   hCCpi0inFV_stack_10->SetBinContent(8,7.325377);
   hCCpi0inFV_stack_10->SetBinContent(9,4.558628);
   hCCpi0inFV_stack_10->SetBinContent(10,7.27911);
   hCCpi0inFV_stack_10->SetBinContent(11,7.91385);
   hCCpi0inFV_stack_10->SetBinContent(12,5.192286);
   hCCpi0inFV_stack_10->SetBinContent(13,5.352413);
   hCCpi0inFV_stack_10->SetBinContent(14,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(15,3.517332);
   hCCpi0inFV_stack_10->SetBinContent(16,3.467007);
   hCCpi0inFV_stack_10->SetBinContent(17,3.58742);
   hCCpi0inFV_stack_10->SetBinContent(18,3.030247);
   hCCpi0inFV_stack_10->SetBinContent(19,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(20,2.103854);
   hCCpi0inFV_stack_10->SetBinContent(21,2.192503);
   hCCpi0inFV_stack_10->SetBinContent(22,2.340906);
   hCCpi0inFV_stack_10->SetBinContent(23,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(24,0.5352025);
   hCCpi0inFV_stack_10->SetBinError(1,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(2,0.6196482);
   hCCpi0inFV_stack_10->SetBinError(3,1.077838);
   hCCpi0inFV_stack_10->SetBinError(4,1.127246);
   hCCpi0inFV_stack_10->SetBinError(5,1.189633);
   hCCpi0inFV_stack_10->SetBinError(6,1.114775);
   hCCpi0inFV_stack_10->SetBinError(7,1.304492);
   hCCpi0inFV_stack_10->SetBinError(8,1.366789);
   hCCpi0inFV_stack_10->SetBinError(9,1.050546);
   hCCpi0inFV_stack_10->SetBinError(10,1.435761);
   hCCpi0inFV_stack_10->SetBinError(11,1.450492);
   hCCpi0inFV_stack_10->SetBinError(12,1.112898);
   hCCpi0inFV_stack_10->SetBinError(13,1.183097);
   hCCpi0inFV_stack_10->SetBinError(14,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(15,0.8650466);
   hCCpi0inFV_stack_10->SetBinError(16,0.8877141);
   hCCpi0inFV_stack_10->SetBinError(17,0.9689299);
   hCCpi0inFV_stack_10->SetBinError(18,0.8679404);
   hCCpi0inFV_stack_10->SetBinError(19,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(20,0.6792233);
   hCCpi0inFV_stack_10->SetBinError(21,0.6619638);
   hCCpi0inFV_stack_10->SetBinError(22,0.8093475);
   hCCpi0inFV_stack_10->SetBinError(23,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(24,0.3921167);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.3917402);
   hNCinFV_stack_11->SetBinContent(3,1.947476);
   hNCinFV_stack_11->SetBinContent(4,0.9801958);
   hNCinFV_stack_11->SetBinContent(5,0.9303237);
   hNCinFV_stack_11->SetBinContent(6,1.662242);
   hNCinFV_stack_11->SetBinContent(7,2.107235);
   hNCinFV_stack_11->SetBinContent(8,1.176911);
   hNCinFV_stack_11->SetBinContent(9,2.249007);
   hNCinFV_stack_11->SetBinContent(10,2.484368);
   hNCinFV_stack_11->SetBinContent(11,0.9286332);
   hNCinFV_stack_11->SetBinContent(12,1.073786);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.5352025);
   hNCinFV_stack_11->SetBinContent(16,1.070405);
   hNCinFV_stack_11->SetBinContent(17,0.9303237);
   hNCinFV_stack_11->SetBinContent(18,1.073786);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.5884556);
   hNCinFV_stack_11->SetBinContent(21,0.5352025);
   hNCinFV_stack_11->SetBinContent(22,0.5901461);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.2770047);
   hNCinFV_stack_11->SetBinError(3,0.7600326);
   hNCinFV_stack_11->SetBinError(4,0.4383608);
   hNCinFV_stack_11->SetBinError(5,0.4814682);
   hNCinFV_stack_11->SetBinError(6,0.6513556);
   hNCinFV_stack_11->SetBinError(7,0.6801976);
   hNCinFV_stack_11->SetBinError(8,0.4804759);
   hNCinFV_stack_11->SetBinError(9,0.7341869);
   hNCinFV_stack_11->SetBinError(10,0.8556093);
   hNCinFV_stack_11->SetBinError(11,0.48078);
   hNCinFV_stack_11->SetBinError(12,0.5557297);
   hNCinFV_stack_11->SetBinError(13,0.3921167);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3921167);
   hNCinFV_stack_11->SetBinError(16,0.5545368);
   hNCinFV_stack_11->SetBinError(17,0.4814682);
   hNCinFV_stack_11->SetBinError(18,0.5557297);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.3397478);
   hNCinFV_stack_11->SetBinError(21,0.3921167);
   hNCinFV_stack_11->SetBinError(22,0.340721);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetEntries(97);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,2.194135);
   hnumuCCinFV_stack_12->SetBinContent(3,2.639088);
   hnumuCCinFV_stack_12->SetBinContent(4,4.901107);
   hnumuCCinFV_stack_12->SetBinContent(5,6.224432);
   hnumuCCinFV_stack_12->SetBinContent(6,5.526262);
   hnumuCCinFV_stack_12->SetBinContent(7,5.881965);
   hnumuCCinFV_stack_12->SetBinContent(8,5.663417);
   hnumuCCinFV_stack_12->SetBinContent(9,7.007635);
   hnumuCCinFV_stack_12->SetBinContent(10,3.3269);
   hnumuCCinFV_stack_12->SetBinContent(11,8.802401);
   hnumuCCinFV_stack_12->SetBinContent(12,7.04431);
   hnumuCCinFV_stack_12->SetBinContent(13,3.05336);
   hnumuCCinFV_stack_12->SetBinContent(14,1.176353);
   hnumuCCinFV_stack_12->SetBinContent(15,4.279985);
   hnumuCCinFV_stack_12->SetBinContent(16,3.813812);
   hnumuCCinFV_stack_12->SetBinContent(17,2.606902);
   hnumuCCinFV_stack_12->SetBinContent(18,1.186615);
   hnumuCCinFV_stack_12->SetBinContent(19,2.247397);
   hnumuCCinFV_stack_12->SetBinContent(20,2.50811);
   hnumuCCinFV_stack_12->SetBinContent(21,2.399962);
   hnumuCCinFV_stack_12->SetBinContent(22,1.956171);
   hnumuCCinFV_stack_12->SetBinContent(23,1.411265);
   hnumuCCinFV_stack_12->SetBinContent(24,0.4540665);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.9861615);
   hnumuCCinFV_stack_12->SetBinError(3,0.8257995);
   hnumuCCinFV_stack_12->SetBinError(4,1.117699);
   hnumuCCinFV_stack_12->SetBinError(5,1.754773);
   hnumuCCinFV_stack_12->SetBinError(6,1.559979);
   hnumuCCinFV_stack_12->SetBinError(7,1.280014);
   hnumuCCinFV_stack_12->SetBinError(8,1.224431);
   hnumuCCinFV_stack_12->SetBinError(9,1.571995);
   hnumuCCinFV_stack_12->SetBinError(10,0.9120622);
   hnumuCCinFV_stack_12->SetBinError(11,1.71155);
   hnumuCCinFV_stack_12->SetBinError(12,1.706029);
   hnumuCCinFV_stack_12->SetBinError(13,0.8471521);
   hnumuCCinFV_stack_12->SetBinError(14,0.6075436);
   hnumuCCinFV_stack_12->SetBinError(15,1.306838);
   hnumuCCinFV_stack_12->SetBinError(16,1.063106);
   hnumuCCinFV_stack_12->SetBinError(17,0.8042657);
   hnumuCCinFV_stack_12->SetBinError(18,0.6224966);
   hnumuCCinFV_stack_12->SetBinError(19,0.7656843);
   hnumuCCinFV_stack_12->SetBinError(20,0.8139035);
   hnumuCCinFV_stack_12->SetBinError(21,0.7774054);
   hnumuCCinFV_stack_12->SetBinError(22,0.7113108);
   hnumuCCinFV_stack_12->SetBinError(23,0.8367285);
   hnumuCCinFV_stack_12->SetBinError(24,0.4540665);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(4,0.977464);
   hnueCCinFV_stack_13->SetBinContent(6,0.7796395);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.2171002);
   hnueCCinFV_stack_13->SetBinError(4,0.5774033);
   hnueCCinFV_stack_13->SetBinError(6,0.4686238);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.3172361);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(12);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__26->SetBinContent(1,3.993447);
   hmcerror__26->SetBinContent(2,11.49958);
   hmcerror__26->SetBinContent(3,21.37407);
   hmcerror__26->SetBinContent(4,26.81719);
   hmcerror__26->SetBinContent(5,31.55754);
   hmcerror__26->SetBinContent(6,30.30116);
   hmcerror__26->SetBinContent(7,30.44379);
   hmcerror__26->SetBinContent(8,30.9164);
   hmcerror__26->SetBinContent(9,32.02124);
   hmcerror__26->SetBinContent(10,31.36528);
   hmcerror__26->SetBinContent(11,36.23175);
   hmcerror__26->SetBinContent(12,27.78588);
   hmcerror__26->SetBinContent(13,22.74602);
   hmcerror__26->SetBinContent(14,16.03923);
   hmcerror__26->SetBinContent(15,21.38181);
   hmcerror__26->SetBinContent(16,16.54793);
   hmcerror__26->SetBinContent(17,16.75426);
   hmcerror__26->SetBinContent(18,12.7198);
   hmcerror__26->SetBinContent(19,13.63355);
   hmcerror__26->SetBinContent(20,14.32818);
   hmcerror__26->SetBinContent(21,12.14579);
   hmcerror__26->SetBinContent(22,10.98524);
   hmcerror__26->SetBinContent(23,6.574936);
   hmcerror__26->SetBinContent(24,2.37137);
   hmcerror__26->SetBinError(1,3.442103);
   hmcerror__26->SetBinError(2,8.055622);
   hmcerror__26->SetBinError(3,13.37475);
   hmcerror__26->SetBinError(4,12.18514);
   hmcerror__26->SetBinError(5,15.34346);
   hmcerror__26->SetBinError(6,15.24486);
   hmcerror__26->SetBinError(7,14.26078);
   hmcerror__26->SetBinError(8,16.45126);
   hmcerror__26->SetBinError(9,15.88087);
   hmcerror__26->SetBinError(10,16.3265);
   hmcerror__26->SetBinError(11,15.8189);
   hmcerror__26->SetBinError(12,13.51954);
   hmcerror__26->SetBinError(13,11.25136);
   hmcerror__26->SetBinError(14,8.402361);
   hmcerror__26->SetBinError(15,11.28126);
   hmcerror__26->SetBinError(16,10.90639);
   hmcerror__26->SetBinError(17,10.93632);
   hmcerror__26->SetBinError(18,10.40704);
   hmcerror__26->SetBinError(19,7.992661);
   hmcerror__26->SetBinError(20,9.048438);
   hmcerror__26->SetBinError(21,14.60188);
   hmcerror__26->SetBinError(22,10.26343);
   hmcerror__26->SetBinError(23,5.670481);
   hmcerror__26->SetBinError(24,7.170725);
   hmcerror__26->SetBinError(25,0.3895343);
   hmcerror__26->SetEntries(469.1651);

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
   
   Double_t _fx3033[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3033[24] = {
   0,
   17,
   20,
   16,
   21,
   31,
   21,
   30,
   23,
   30,
   20,
   18,
   19,
   20,
   11,
   15,
   13,
   10,
   14,
   21,
   11,
   7,
   7,
   2};
   Double_t _felx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3033[24] = {
   0,
   4.2835,
   4.6266,
   4.1628,
   4.7354,
   5.7094,
   4.7354,
   5.6197,
   4.9457,
   5.6197,
   4.6266,
   4.4008,
   4.5151,
   4.6266,
   3.4975,
   4.0385,
   3.77763,
   3.34883,
   3.9102,
   4.7354,
   3.4975,
   2.85954,
   2.85954,
   2};
   Double_t _fehx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3033[24] = {
   1.1478,
   4.0673,
   4.4133,
   3.9454,
   4.5229,
   5.5017,
   4.5229,
   5.4117,
   4.7346,
   5.4117,
   4.4133,
   4.1858,
   4.3011,
   4.4133,
   3.27,
   3.8197,
   3.5552,
   3.1179,
   3.6898,
   4.5229,
   3.27,
   2.61053,
   2.61053,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(40.15187);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 397.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3034[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3034[24] = {
   0.8619378,
   0.7005143,
   0.6257466,
   0.4543778,
   0.4862058,
   0.5031114,
   0.4684298,
   0.5321207,
   0.4959481,
   0.5205278,
   0.4366032,
   0.4865617,
   0.4946519,
   0.5238632,
   0.5276103,
   0.6590788,
   0.6527482,
   0.8181769,
   0.5862496,
   0.6315136,
   1.202217,
   0.9342924,
   0.862439,
   3.023874};
   Double_t _fehx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3034[24] = {
   0.8619378,
   0.7005143,
   0.6257466,
   0.4543778,
   0.4862058,
   0.5031114,
   0.4684298,
   0.5321207,
   0.4959481,
   0.5205278,
   0.4366032,
   0.4865617,
   0.4946519,
   0.5238632,
   0.5276103,
   0.6590788,
   0.6527482,
   0.8181769,
   0.5862496,
   0.6315136,
   1.202217,
   0.9342924,
   0.862439,
   3.023874};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3035[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3035[24] = {
   0.3577792,
   0.2669169,
   0.2816484,
   0.2611276,
   0.274077,
   0.2980028,
   0.2870641,
   0.2875925,
   0.2910227,
   0.2870705,
   0.2482728,
   0.2567443,
   0.3105279,
   0.2995344,
   0.2541929,
   0.3098645,
   0.2956855,
   0.3019081,
   0.2460613,
   0.3035025,
   0.2329676,
   0.2789034,
   0.3646577,
   0.5281302};
   Double_t _fehx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3035[24] = {
   0.3577792,
   0.2669169,
   0.2816484,
   0.2611276,
   0.274077,
   0.2980028,
   0.2870641,
   0.2875925,
   0.2910227,
   0.2870705,
   0.2482728,
   0.2567443,
   0.3105279,
   0.2995344,
   0.2541929,
   0.3098645,
   0.2956855,
   0.3019081,
   0.2460613,
   0.3035025,
   0.2329676,
   0.2789034,
   0.3646577,
   0.5281302};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3036[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3036[24] = {
   0,
   1.478315,
   0.9357133,
   0.5966322,
   0.6654511,
   1.023063,
   0.6897959,
   0.9703589,
   0.7182732,
   0.9564717,
   0.552002,
   0.6478111,
   0.8353109,
   1.246943,
   0.514456,
   0.9064577,
   0.7759218,
   0.7861762,
   1.026879,
   1.465644,
   0.9056635,
   0.6372184,
   1.064649,
   0.8433942};
   Double_t _felx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3036[24] = {
   0,
   0.3724918,
   0.2164585,
   0.1552288,
   0.1500561,
   0.1884218,
   0.1555457,
   0.1817709,
   0.1544506,
   0.1791695,
   0.1276946,
   0.1583826,
   0.1985006,
   0.2884553,
   0.1635736,
   0.2440486,
   0.2254727,
   0.263277,
   0.2868073,
   0.3304957,
   0.2879598,
   0.2603074,
   0.4349153,
   0.8433942};
   Double_t _fehx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3036[24] = {
   0.2874209,
   0.3536911,
   0.2064792,
   0.147122,
   0.1433223,
   0.1815673,
   0.1485656,
   0.175043,
   0.1478581,
   0.1725379,
   0.1218075,
   0.1506449,
   0.1890924,
   0.2751567,
   0.1529337,
   0.2308264,
   0.2121967,
   0.2451219,
   0.2706413,
   0.3156648,
   0.269229,
   0.2376397,
   0.3970427,
   0.6406296};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.015206);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
