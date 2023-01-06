#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 16:54:36 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-230.7692,-8.838362,1692.308,977.3368);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hmc__10->SetBinContent(2,30.70749);
   hmc__10->SetBinContent(3,171.4048);
   hmc__10->SetBinContent(4,336.0681);
   hmc__10->SetBinContent(5,441.9181);
   hmc__10->SetBinContent(6,404.9323);
   hmc__10->SetBinContent(7,309.1481);
   hmc__10->SetBinContent(8,226.7165);
   hmc__10->SetBinContent(9,172.9778);
   hmc__10->SetBinContent(10,149.8021);
   hmc__10->SetBinContent(11,115.4886);
   hmc__10->SetBinContent(12,77.22041);
   hmc__10->SetBinContent(13,61.33716);
   hmc__10->SetBinContent(14,46.97313);
   hmc__10->SetBinContent(15,37.0641);
   hmc__10->SetBinContent(16,27.43661);
   hmc__10->SetBinContent(17,29.33046);
   hmc__10->SetBinContent(18,15.28277);
   hmc__10->SetBinContent(19,16.73501);
   hmc__10->SetBinContent(20,12.61425);
   hmc__10->SetBinContent(21,9.595814);
   hmc__10->SetBinContent(22,6.924086);
   hmc__10->SetBinContent(23,4.766219);
   hmc__10->SetBinContent(24,3.909558);
   hmc__10->SetBinContent(25,1.323755);
   hmc__10->SetBinContent(26,10.77412);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,6.884507);
   hmc__10->SetBinError(3,33.90672);
   hmc__10->SetBinError(4,68.06302);
   hmc__10->SetBinError(5,89.56119);
   hmc__10->SetBinError(6,86.44874);
   hmc__10->SetBinError(7,66.2103);
   hmc__10->SetBinError(8,49.28825);
   hmc__10->SetBinError(9,39.2357);
   hmc__10->SetBinError(10,31.28729);
   hmc__10->SetBinError(11,25.96108);
   hmc__10->SetBinError(12,18.83115);
   hmc__10->SetBinError(13,15.04787);
   hmc__10->SetBinError(14,11.81535);
   hmc__10->SetBinError(15,9.341558);
   hmc__10->SetBinError(16,6.9753);
   hmc__10->SetBinError(17,7.412743);
   hmc__10->SetBinError(18,3.993713);
   hmc__10->SetBinError(19,4.248632);
   hmc__10->SetBinError(20,5.082136);
   hmc__10->SetBinError(21,3.882501);
   hmc__10->SetBinError(22,2.353693);
   hmc__10->SetBinError(23,1.627357);
   hmc__10->SetBinError(24,1.49081);
   hmc__10->SetBinError(25,0.8063886);
   hmc__10->SetBinError(26,2.91766);
   hmc__10->SetMinimum(-8.838362);
   hmc__10->SetMaximum(928.0281);
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
   hs4_stack_4->SetMinimum(-1.202048e-08);
   hs4_stack_4->SetMaximum(464.014);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,2.156524);
   hbadmatch_stack_1->SetBinContent(4,2.629215);
   hbadmatch_stack_1->SetBinContent(5,4.143551);
   hbadmatch_stack_1->SetBinContent(6,1.557523);
   hbadmatch_stack_1->SetBinContent(7,2.143932);
   hbadmatch_stack_1->SetBinContent(9,1.268811);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.756365);
   hbadmatch_stack_1->SetBinError(4,0.7972879);
   hbadmatch_stack_1->SetBinError(5,1.231853);
   hbadmatch_stack_1->SetBinError(6,0.6032024);
   hbadmatch_stack_1->SetBinError(7,0.6985567);
   hbadmatch_stack_1->SetBinError(9,0.5889569);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,2.192989);
   hext_stack_2->SetBinContent(3,9.888008);
   hext_stack_2->SetBinContent(4,7.671841);
   hext_stack_2->SetBinContent(5,10.27143);
   hext_stack_2->SetBinContent(6,11.53312);
   hext_stack_2->SetBinContent(7,6.075805);
   hext_stack_2->SetBinContent(8,1.614806);
   hext_stack_2->SetBinContent(9,2.021405);
   hext_stack_2->SetBinContent(10,8.374115);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(2,0.9009267);
   hext_stack_2->SetBinError(3,2.070304);
   hext_stack_2->SetBinError(4,1.899118);
   hext_stack_2->SetBinError(5,2.140944);
   hext_stack_2->SetBinError(6,2.451649);
   hext_stack_2->SetBinError(7,1.616168);
   hext_stack_2->SetBinError(8,0.8528597);
   hext_stack_2->SetBinError(9,0.9448239);
   hext_stack_2->SetBinError(10,2.163795);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(3,0.4422882);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.9099721);
   hdirt_stack_3->SetBinContent(6,0.9390919);
   hdirt_stack_3->SetBinContent(7,1.464118);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(3,0.256382);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.4799114);
   hdirt_stack_3->SetBinError(6,0.5551728);
   hdirt_stack_3->SetBinError(7,0.5817952);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,0.9286332);
   houtFV_stack_4->SetBinContent(3,5.88267);
   houtFV_stack_4->SetBinContent(4,4.918178);
   houtFV_stack_4->SetBinContent(5,5.27655);
   houtFV_stack_4->SetBinContent(6,4.320444);
   houtFV_stack_4->SetBinContent(7,2.40469);
   houtFV_stack_4->SetBinContent(8,3.589263);
   houtFV_stack_4->SetBinContent(9,0.8137078);
   houtFV_stack_4->SetBinContent(10,0.4265028);
   houtFV_stack_4->SetBinContent(11,2.07374);
   houtFV_stack_4->SetBinContent(12,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.785171);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(2,0.48078);
   houtFV_stack_4->SetBinError(3,1.202623);
   houtFV_stack_4->SetBinError(4,1.025382);
   houtFV_stack_4->SetBinError(5,1.240279);
   houtFV_stack_4->SetBinError(6,1.14933);
   houtFV_stack_4->SetBinError(7,0.7428639);
   houtFV_stack_4->SetBinError(8,1.803383);
   houtFV_stack_4->SetBinError(9,0.4077613);
   houtFV_stack_4->SetBinError(10,0.3024884);
   houtFV_stack_4->SetBinError(11,0.717904);
   houtFV_stack_4->SetBinError(12,0.1950249);
   houtFV_stack_4->SetBinError(13,0.3925882);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08770081);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06592986);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4263256);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.240152);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.8562999);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.493918);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.205362);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.01413);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.943396);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.769735);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.818657);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.104161);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5749021);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.328006);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.119213);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2382377);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7169385);
   hNCpi0inFVres_stack_7->SetBinError(4,1.079082);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9534607);
   hNCpi0inFVres_stack_7->SetBinError(6,0.707518);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9372431);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4435025);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3470441);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2413235);
   hNCpi0inFVres_stack_7->SetBinError(11,0.472416);
   hNCpi0inFVres_stack_7->SetBinError(12,0.08429639);
   hNCpi0inFVres_stack_7->SetBinError(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3621513);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.641088);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.330725);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.694944);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.381874);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.953795);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.386864);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.221834);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5136461);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3779537);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4260674);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1308975);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05785787);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1294583);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6218445);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.107169);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.230571);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.076803);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8009353);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6799752);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5551974);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1555009);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1435371);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3723638);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.09425787);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.05785787);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,15.75034);
   hCCpi0inFV_stack_10->SetBinContent(3,97.36275);
   hCCpi0inFV_stack_10->SetBinContent(4,227.1569);
   hCCpi0inFV_stack_10->SetBinContent(5,301.0263);
   hCCpi0inFV_stack_10->SetBinContent(6,280.4296);
   hCCpi0inFV_stack_10->SetBinContent(7,224.0605);
   hCCpi0inFV_stack_10->SetBinContent(8,179.0539);
   hCCpi0inFV_stack_10->SetBinContent(9,136.0007);
   hCCpi0inFV_stack_10->SetBinContent(10,109.181);
   hCCpi0inFV_stack_10->SetBinContent(11,91.38617);
   hCCpi0inFV_stack_10->SetBinContent(12,57.14948);
   hCCpi0inFV_stack_10->SetBinContent(13,48.16075);
   hCCpi0inFV_stack_10->SetBinContent(14,37.6532);
   hCCpi0inFV_stack_10->SetBinContent(15,26.53294);
   hCCpi0inFV_stack_10->SetBinContent(16,20.56048);
   hCCpi0inFV_stack_10->SetBinContent(17,23.97456);
   hCCpi0inFV_stack_10->SetBinContent(18,13.10568);
   hCCpi0inFV_stack_10->SetBinContent(19,12.93602);
   hCCpi0inFV_stack_10->SetBinContent(20,7.582063);
   hCCpi0inFV_stack_10->SetBinContent(21,7.649312);
   hCCpi0inFV_stack_10->SetBinContent(22,4.925048);
   hCCpi0inFV_stack_10->SetBinContent(23,3.224131);
   hCCpi0inFV_stack_10->SetBinContent(24,3.321102);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(26,9.406301);
   hCCpi0inFV_stack_10->SetBinError(2,1.958177);
   hCCpi0inFV_stack_10->SetBinError(3,4.941718);
   hCCpi0inFV_stack_10->SetBinError(4,7.594785);
   hCCpi0inFV_stack_10->SetBinError(5,8.710902);
   hCCpi0inFV_stack_10->SetBinError(6,8.413805);
   hCCpi0inFV_stack_10->SetBinError(7,7.531458);
   hCCpi0inFV_stack_10->SetBinError(8,6.722043);
   hCCpi0inFV_stack_10->SetBinError(9,5.880896);
   hCCpi0inFV_stack_10->SetBinError(10,5.218724);
   hCCpi0inFV_stack_10->SetBinError(11,4.835614);
   hCCpi0inFV_stack_10->SetBinError(12,3.721714);
   hCCpi0inFV_stack_10->SetBinError(13,3.42551);
   hCCpi0inFV_stack_10->SetBinError(14,3.141414);
   hCCpi0inFV_stack_10->SetBinError(15,2.534953);
   hCCpi0inFV_stack_10->SetBinError(16,2.314225);
   hCCpi0inFV_stack_10->SetBinError(17,2.474043);
   hCCpi0inFV_stack_10->SetBinError(18,1.777294);
   hCCpi0inFV_stack_10->SetBinError(19,1.76962);
   hCCpi0inFV_stack_10->SetBinError(20,1.31589);
   hCCpi0inFV_stack_10->SetBinError(21,1.448021);
   hCCpi0inFV_stack_10->SetBinError(22,1.081688);
   hCCpi0inFV_stack_10->SetBinError(23,0.8539343);
   hCCpi0inFV_stack_10->SetBinError(24,0.9204367);
   hCCpi0inFV_stack_10->SetBinError(25,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(26,1.524142);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,0.5884556);
   hNCinFV_stack_11->SetBinContent(3,2.498975);
   hNCinFV_stack_11->SetBinContent(4,4.448141);
   hNCinFV_stack_11->SetBinContent(5,5.625052);
   hNCinFV_stack_11->SetBinContent(6,3.319412);
   hNCinFV_stack_11->SetBinContent(7,1.125349);
   hNCinFV_stack_11->SetBinContent(8,0.7336084);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.7319179);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3397478);
   hNCinFV_stack_11->SetBinError(3,0.7344388);
   hNCinFV_stack_11->SetBinError(4,1.057219);
   hNCinFV_stack_11->SetBinError(5,1.161279);
   hNCinFV_stack_11->SetBinError(6,0.9200768);
   hNCinFV_stack_11->SetBinError(7,0.5194673);
   hNCinFV_stack_11->SetBinError(8,0.4394482);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.438694);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,9.245198);
   hnumuCCinFV_stack_12->SetBinContent(3,42.91724);
   hnumuCCinFV_stack_12->SetBinContent(4,69.47962);
   hnumuCCinFV_stack_12->SetBinContent(5,95.78256);
   hnumuCCinFV_stack_12->SetBinContent(6,88.09567);
   hnumuCCinFV_stack_12->SetBinContent(7,61.95511);
   hnumuCCinFV_stack_12->SetBinContent(8,37.25297);
   hnumuCCinFV_stack_12->SetBinContent(9,28.87225);
   hnumuCCinFV_stack_12->SetBinContent(10,29.99834);
   hnumuCCinFV_stack_12->SetBinContent(11,15.11655);
   hnumuCCinFV_stack_12->SetBinContent(12,18.38307);
   hnumuCCinFV_stack_12->SetBinContent(13,11.5122);
   hnumuCCinFV_stack_12->SetBinContent(14,8.079893);
   hnumuCCinFV_stack_12->SetBinContent(15,9.758773);
   hnumuCCinFV_stack_12->SetBinContent(16,5.881553);
   hnumuCCinFV_stack_12->SetBinContent(17,4.9214);
   hnumuCCinFV_stack_12->SetBinContent(18,1.757447);
   hnumuCCinFV_stack_12->SetBinContent(19,3.798982);
   hnumuCCinFV_stack_12->SetBinContent(20,4.088842);
   hnumuCCinFV_stack_12->SetBinContent(21,1.525171);
   hnumuCCinFV_stack_12->SetBinContent(22,1.999038);
   hnumuCCinFV_stack_12->SetBinContent(23,1.542088);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,0.9303237);
   hnumuCCinFV_stack_12->SetBinError(2,1.579161);
   hnumuCCinFV_stack_12->SetBinError(3,3.461851);
   hnumuCCinFV_stack_12->SetBinError(4,4.274038);
   hnumuCCinFV_stack_12->SetBinError(5,5.641091);
   hnumuCCinFV_stack_12->SetBinError(6,5.111858);
   hnumuCCinFV_stack_12->SetBinError(7,4.272923);
   hnumuCCinFV_stack_12->SetBinError(8,3.366144);
   hnumuCCinFV_stack_12->SetBinError(9,3.0133);
   hnumuCCinFV_stack_12->SetBinError(10,2.893984);
   hnumuCCinFV_stack_12->SetBinError(11,1.93121);
   hnumuCCinFV_stack_12->SetBinError(12,2.272151);
   hnumuCCinFV_stack_12->SetBinError(13,1.745771);
   hnumuCCinFV_stack_12->SetBinError(14,1.514447);
   hnumuCCinFV_stack_12->SetBinError(15,2.699767);
   hnumuCCinFV_stack_12->SetBinError(16,1.230396);
   hnumuCCinFV_stack_12->SetBinError(17,1.109079);
   hnumuCCinFV_stack_12->SetBinError(18,0.6311129);
   hnumuCCinFV_stack_12->SetBinError(19,0.9893188);
   hnumuCCinFV_stack_12->SetBinError(20,2.455787);
   hnumuCCinFV_stack_12->SetBinError(21,0.5914351);
   hnumuCCinFV_stack_12->SetBinError(22,0.7339349);
   hnumuCCinFV_stack_12->SetBinError(23,0.5976023);
   hnumuCCinFV_stack_12->SetBinError(24,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.4814682);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(3,1.91221);
   hnueCCinFV_stack_13->SetBinContent(4,2.827634);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,1.412273);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.3921167);
   hnueCCinFV_stack_13->SetBinError(3,0.6516395);
   hnueCCinFV_stack_13->SetBinError(4,0.8435696);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.6510715);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);
   hmcerror__11->SetBinContent(2,30.70749);
   hmcerror__11->SetBinContent(3,171.4048);
   hmcerror__11->SetBinContent(4,336.0681);
   hmcerror__11->SetBinContent(5,441.9181);
   hmcerror__11->SetBinContent(6,404.9323);
   hmcerror__11->SetBinContent(7,309.1481);
   hmcerror__11->SetBinContent(8,226.7165);
   hmcerror__11->SetBinContent(9,172.9778);
   hmcerror__11->SetBinContent(10,149.8021);
   hmcerror__11->SetBinContent(11,115.4886);
   hmcerror__11->SetBinContent(12,77.22041);
   hmcerror__11->SetBinContent(13,61.33716);
   hmcerror__11->SetBinContent(14,46.97313);
   hmcerror__11->SetBinContent(15,37.0641);
   hmcerror__11->SetBinContent(16,27.43661);
   hmcerror__11->SetBinContent(17,29.33046);
   hmcerror__11->SetBinContent(18,15.28277);
   hmcerror__11->SetBinContent(19,16.73501);
   hmcerror__11->SetBinContent(20,12.61425);
   hmcerror__11->SetBinContent(21,9.595814);
   hmcerror__11->SetBinContent(22,6.924086);
   hmcerror__11->SetBinContent(23,4.766219);
   hmcerror__11->SetBinContent(24,3.909558);
   hmcerror__11->SetBinContent(25,1.323755);
   hmcerror__11->SetBinContent(26,10.77412);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,6.884507);
   hmcerror__11->SetBinError(3,33.90672);
   hmcerror__11->SetBinError(4,68.06302);
   hmcerror__11->SetBinError(5,89.56119);
   hmcerror__11->SetBinError(6,86.44874);
   hmcerror__11->SetBinError(7,66.2103);
   hmcerror__11->SetBinError(8,49.28825);
   hmcerror__11->SetBinError(9,39.2357);
   hmcerror__11->SetBinError(10,31.28729);
   hmcerror__11->SetBinError(11,25.96108);
   hmcerror__11->SetBinError(12,18.83115);
   hmcerror__11->SetBinError(13,15.04787);
   hmcerror__11->SetBinError(14,11.81535);
   hmcerror__11->SetBinError(15,9.341558);
   hmcerror__11->SetBinError(16,6.9753);
   hmcerror__11->SetBinError(17,7.412743);
   hmcerror__11->SetBinError(18,3.993713);
   hmcerror__11->SetBinError(19,4.248632);
   hmcerror__11->SetBinError(20,5.082136);
   hmcerror__11->SetBinError(21,3.882501);
   hmcerror__11->SetBinError(22,2.353693);
   hmcerror__11->SetBinError(23,1.627357);
   hmcerror__11->SetBinError(24,1.49081);
   hmcerror__11->SetBinError(25,0.8063886);
   hmcerror__11->SetBinError(26,2.91766);
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
   0,
   40,
   154,
   337,
   433,
   413,
   325,
   242,
   185,
   132,
   103,
   103,
   84,
   45,
   40,
   21,
   21,
   15,
   12,
   10,
   12,
   7,
   7,
   2,
   3};
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
   0,
   6.4604,
   12.40967,
   18.35756,
   20.80865,
   20.3224,
   18.02776,
   15.55635,
   13.60147,
   11.48913,
   10.14889,
   10.14889,
   9.2886,
   6.8416,
   6.4604,
   4.7354,
   4.7354,
   4.0385,
   3.64022,
   3.34883,
   3.64022,
   2.85954,
   2.85954,
   2,
   2.143368};
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
   1.1478,
   6.2549,
   12.40967,
   18.35756,
   20.80865,
   20.3224,
   18.02776,
   15.55635,
   13.60147,
   11.48913,
   10.14889,
   10.14889,
   9.0869,
   6.637,
   6.2549,
   4.5229,
   4.5229,
   3.8197,
   3.4155,
   3.1179,
   3.4155,
   2.61053,
   2.61053,
   1.51917,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(499.1895);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=26.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2746.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 66.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1929.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 553.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_Emuon_all");
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
   0,
   0.2241964,
   0.1978167,
   0.2025274,
   0.2026647,
   0.2134893,
   0.2141702,
   0.2174004,
   0.226825,
   0.2088575,
   0.2247934,
   0.2438624,
   0.2453305,
   0.2515342,
   0.2520379,
   0.2542333,
   0.2527319,
   0.2613213,
   0.2538769,
   0.4028884,
   0.4046036,
   0.3399284,
   0.3414357,
   0.3813245,
   0.6091677};
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
   0,
   0.2241964,
   0.1978167,
   0.2025274,
   0.2026647,
   0.2134893,
   0.2141702,
   0.2174004,
   0.226825,
   0.2088575,
   0.2247934,
   0.2438624,
   0.2453305,
   0.2515342,
   0.2520379,
   0.2542333,
   0.2527319,
   0.2613213,
   0.2538769,
   0.4028884,
   0.4046036,
   0.3399284,
   0.3414357,
   0.3813245,
   0.6091677};
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
   Graph_Graph3014->GetXaxis()->SetTitle("Muon Energy [MeV]");
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
   0,
   0.2241964,
   0.1978167,
   0.2025274,
   0.2026647,
   0.2134893,
   0.2141702,
   0.2174004,
   0.226825,
   0.2088575,
   0.2247934,
   0.2438624,
   0.2453305,
   0.2515342,
   0.2520379,
   0.2542333,
   0.2527319,
   0.2613213,
   0.2538769,
   0.4028884,
   0.4046036,
   0.3399284,
   0.3414357,
   0.3813245,
   0.6091677};
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
   0,
   0.2241964,
   0.1978167,
   0.2025274,
   0.2026647,
   0.2134893,
   0.2141702,
   0.2174004,
   0.226825,
   0.2088575,
   0.2247934,
   0.2438624,
   0.2453305,
   0.2515342,
   0.2520379,
   0.2542333,
   0.2527319,
   0.2613213,
   0.2538769,
   0.4028884,
   0.4046036,
   0.3399284,
   0.3414357,
   0.3813245,
   0.6091677};
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
   10,
   1.302614,
   0.8984581,
   1.002773,
   0.9798195,
   1.019923,
   1.051276,
   1.067412,
   1.069501,
   0.8811624,
   0.8918628,
   1.333844,
   1.36948,
   0.9579945,
   1.079211,
   0.7654006,
   0.7159792,
   0.9814976,
   0.7170598,
   0.7927542,
   1.250545,
   1.010964,
   1.46867,
   0.5115668,
   2.266281};
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
   0,
   0.2103852,
   0.07239982,
   0.05462452,
   0.04708712,
   0.05018715,
   0.0583143,
   0.06861586,
   0.07863129,
   0.07669534,
   0.08787786,
   0.1314276,
   0.1514351,
   0.1456492,
   0.1743034,
   0.1725942,
   0.1614499,
   0.2642519,
   0.2175213,
   0.2654799,
   0.379355,
   0.4129845,
   0.5999599,
   0.5115668,
   1.619158};
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
   0,
   0.203693,
   0.07239982,
   0.05462452,
   0.04708712,
   0.05018715,
   0.0583143,
   0.06861586,
   0.07863129,
   0.07669534,
   0.08787786,
   0.1314276,
   0.1481467,
   0.1412935,
   0.168759,
   0.1648491,
   0.1542049,
   0.2499351,
   0.2040931,
   0.2471728,
   0.3559365,
   0.3770216,
   0.5477151,
   0.3885785,
   1.302522};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
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
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_Emuon_all",25,0,1500);

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
