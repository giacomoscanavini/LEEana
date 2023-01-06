#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 22:15:16 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-27.12137,1.25641,2999.053);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hmc__1->SetBinContent(1,38.02002);
   hmc__1->SetBinContent(2,35.06537);
   hmc__1->SetBinContent(3,36.98551);
   hmc__1->SetBinContent(4,49.83921);
   hmc__1->SetBinContent(5,49.30699);
   hmc__1->SetBinContent(6,54.48311);
   hmc__1->SetBinContent(7,61.31116);
   hmc__1->SetBinContent(8,73.23515);
   hmc__1->SetBinContent(9,73.4989);
   hmc__1->SetBinContent(10,93.25409);
   hmc__1->SetBinContent(11,94.1815);
   hmc__1->SetBinContent(12,115.511);
   hmc__1->SetBinContent(13,145.8253);
   hmc__1->SetBinContent(14,162.0826);
   hmc__1->SetBinContent(15,170.1757);
   hmc__1->SetBinContent(16,210.2491);
   hmc__1->SetBinContent(17,262.2107);
   hmc__1->SetBinContent(18,276.6752);
   hmc__1->SetBinContent(19,341.8201);
   hmc__1->SetBinContent(20,432.5353);
   hmc__1->SetBinContent(21,535.4254);
   hmc__1->SetBinContent(22,660.0057);
   hmc__1->SetBinContent(23,916.3635);
   hmc__1->SetBinContent(24,1283.375);
   hmc__1->SetBinContent(25,1356.068);
   hmc__1->SetBinError(1,8.545668);
   hmc__1->SetBinError(2,8.529541);
   hmc__1->SetBinError(3,9.651841);
   hmc__1->SetBinError(4,12.02059);
   hmc__1->SetBinError(5,13.62064);
   hmc__1->SetBinError(6,14.09668);
   hmc__1->SetBinError(7,15.31816);
   hmc__1->SetBinError(8,19.31127);
   hmc__1->SetBinError(9,19.36077);
   hmc__1->SetBinError(10,26.37242);
   hmc__1->SetBinError(11,23.69371);
   hmc__1->SetBinError(12,28.95145);
   hmc__1->SetBinError(13,35.62683);
   hmc__1->SetBinError(14,43.23968);
   hmc__1->SetBinError(15,42.72304);
   hmc__1->SetBinError(16,54.08102);
   hmc__1->SetBinError(17,64.73068);
   hmc__1->SetBinError(18,69.08531);
   hmc__1->SetBinError(19,81.18624);
   hmc__1->SetBinError(20,102.9793);
   hmc__1->SetBinError(21,126.9272);
   hmc__1->SetBinError(22,150.4865);
   hmc__1->SetBinError(23,210.8545);
   hmc__1->SetBinError(24,291.6223);
   hmc__1->SetBinError(25,293.9195);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-27.12137);
   hmc__1->SetMaximum(2847.744);
   hmc__1->SetEntries(7468.322);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-1,1);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(1423.872);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.5613344);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.3917402);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.6353733);
   hbadmatch_stack_1->SetBinContent(11,0.5514397);
   hbadmatch_stack_1->SetBinContent(12,0.3900497);
   hbadmatch_stack_1->SetBinContent(13,0.9998762);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,1.040946);
   hbadmatch_stack_1->SetBinContent(16,0.4982925);
   hbadmatch_stack_1->SetBinContent(17,1.248056);
   hbadmatch_stack_1->SetBinContent(18,1.913901);
   hbadmatch_stack_1->SetBinContent(19,2.581022);
   hbadmatch_stack_1->SetBinContent(20,3.134127);
   hbadmatch_stack_1->SetBinContent(21,4.101527);
   hbadmatch_stack_1->SetBinContent(22,4.227457);
   hbadmatch_stack_1->SetBinContent(23,3.174143);
   hbadmatch_stack_1->SetBinContent(24,4.439301);
   hbadmatch_stack_1->SetBinContent(25,4.424654);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.4057476);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.2770047);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.368687);
   hbadmatch_stack_1->SetBinError(11,0.400425);
   hbadmatch_stack_1->SetBinError(12,0.2758068);
   hbadmatch_stack_1->SetBinError(13,0.6016999);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.494013);
   hbadmatch_stack_1->SetBinError(16,0.4086273);
   hbadmatch_stack_1->SetBinError(17,0.5117543);
   hbadmatch_stack_1->SetBinError(18,0.6521474);
   hbadmatch_stack_1->SetBinError(19,0.8637108);
   hbadmatch_stack_1->SetBinError(20,0.9365823);
   hbadmatch_stack_1->SetBinError(21,1.070127);
   hbadmatch_stack_1->SetBinError(22,1.229207);
   hbadmatch_stack_1->SetBinError(23,0.9369577);
   hbadmatch_stack_1->SetBinError(24,1.030032);
   hbadmatch_stack_1->SetBinError(25,1.120609);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,1.697008);
   hext_stack_2->SetBinContent(2,2.345802);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,5.86391);
   hext_stack_2->SetBinContent(5,1.461993);
   hext_stack_2->SetBinContent(6,2.439593);
   hext_stack_2->SetBinContent(7,2.6702);
   hext_stack_2->SetBinContent(8,5.166044);
   hext_stack_2->SetBinContent(9,2.752401);
   hext_stack_2->SetBinContent(10,7.112428);
   hext_stack_2->SetBinContent(11,5.318858);
   hext_stack_2->SetBinContent(12,8.637853);
   hext_stack_2->SetBinContent(13,10.60023);
   hext_stack_2->SetBinContent(14,7.063358);
   hext_stack_2->SetBinContent(15,6.139236);
   hext_stack_2->SetBinContent(16,4.550381);
   hext_stack_2->SetBinContent(17,11.83874);
   hext_stack_2->SetBinContent(18,3.062438);
   hext_stack_2->SetBinContent(19,9.589502);
   hext_stack_2->SetBinContent(20,11.09339);
   hext_stack_2->SetBinContent(21,10.51085);
   hext_stack_2->SetBinContent(22,7.511847);
   hext_stack_2->SetBinContent(23,6.616447);
   hext_stack_2->SetBinContent(24,6.449273);
   hext_stack_2->SetBinContent(25,3.647801);
   hext_stack_2->SetBinError(1,0.8873887);
   hext_stack_2->SetBinError(2,0.9989624);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.887831);
   hext_stack_2->SetBinError(5,0.7356036);
   hext_stack_2->SetBinError(6,0.9959598);
   hext_stack_2->SetBinError(7,1.050314);
   hext_stack_2->SetBinError(8,1.619774);
   hext_stack_2->SetBinError(9,1.07854);
   hext_stack_2->SetBinError(10,1.804181);
   hext_stack_2->SetBinError(11,1.676283);
   hext_stack_2->SetBinError(12,2.030653);
   hext_stack_2->SetBinError(13,2.19636);
   hext_stack_2->SetBinError(14,1.589118);
   hext_stack_2->SetBinError(15,1.714458);
   hext_stack_2->SetBinError(16,1.320423);
   hext_stack_2->SetBinError(17,2.526479);
   hext_stack_2->SetBinError(18,1.292627);
   hext_stack_2->SetBinError(19,2.24563);
   hext_stack_2->SetBinError(20,2.552438);
   hext_stack_2->SetBinError(21,2.228252);
   hext_stack_2->SetBinError(22,1.903048);
   hext_stack_2->SetBinError(23,1.797459);
   hext_stack_2->SetBinError(24,1.856611);
   hext_stack_2->SetBinError(25,1.246589);
   hext_stack_2->SetEntries(323);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.311381);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.5823706);
   hdirt_stack_3->SetBinContent(9,0.3820091);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,1.167841e-06);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2665913);
   hdirt_stack_3->SetBinContent(17,0.3042167);
   hdirt_stack_3->SetBinContent(20,0.165896);
   hdirt_stack_3->SetBinContent(21,0.3981555);
   hdirt_stack_3->SetBinContent(22,0.9525645);
   hdirt_stack_3->SetBinContent(23,0.8852987);
   hdirt_stack_3->SetBinContent(24,0.6707404);
   hdirt_stack_3->SetBinContent(25,0.7139341);
   hdirt_stack_3->SetBinError(1,0.311381);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(6,0.4171284);
   hdirt_stack_3->SetBinError(9,0.3820091);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,1.167841e-06);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2665913);
   hdirt_stack_3->SetBinError(17,0.2160277);
   hdirt_stack_3->SetBinError(20,0.165896);
   hdirt_stack_3->SetBinError(21,0.28293);
   hdirt_stack_3->SetBinError(22,0.4976039);
   hdirt_stack_3->SetBinError(23,0.4712514);
   hdirt_stack_3->SetBinError(24,0.4011631);
   hdirt_stack_3->SetBinError(25,0.3660028);
   hdirt_stack_3->SetEntries(30);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.310595);
   houtFV_stack_4->SetBinContent(2,1.212142);
   houtFV_stack_4->SetBinContent(3,1.517089);
   houtFV_stack_4->SetBinContent(4,0.4641484);
   houtFV_stack_4->SetBinContent(5,0.6434152);
   houtFV_stack_4->SetBinContent(6,1.798794);
   houtFV_stack_4->SetBinContent(7,0.7807996);
   houtFV_stack_4->SetBinContent(8,1.349204);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,1.120277);
   houtFV_stack_4->SetBinContent(11,0.7181281);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.9767196);
   houtFV_stack_4->SetBinContent(14,1.573776);
   houtFV_stack_4->SetBinContent(15,1.45303);
   houtFV_stack_4->SetBinContent(16,2.227319);
   houtFV_stack_4->SetBinContent(17,1.805704);
   houtFV_stack_4->SetBinContent(18,1.528419);
   houtFV_stack_4->SetBinContent(19,1.338423);
   houtFV_stack_4->SetBinContent(20,3.642548);
   houtFV_stack_4->SetBinContent(21,4.4895);
   houtFV_stack_4->SetBinContent(22,5.5369);
   houtFV_stack_4->SetBinContent(23,8.065921);
   houtFV_stack_4->SetBinContent(24,10.97093);
   houtFV_stack_4->SetBinContent(25,9.088936);
   houtFV_stack_4->SetBinError(1,0.6040812);
   houtFV_stack_4->SetBinError(2,0.6309589);
   houtFV_stack_4->SetBinError(3,0.5887087);
   houtFV_stack_4->SetBinError(4,0.33199);
   houtFV_stack_4->SetBinError(5,0.3740135);
   houtFV_stack_4->SetBinError(6,0.7151227);
   houtFV_stack_4->SetBinError(7,0.4625021);
   houtFV_stack_4->SetBinError(8,0.5656477);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.5175515);
   houtFV_stack_4->SetBinError(11,0.4135145);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.5023747);
   houtFV_stack_4->SetBinError(14,0.5564451);
   houtFV_stack_4->SetBinError(15,0.5705074);
   houtFV_stack_4->SetBinError(16,0.7383221);
   houtFV_stack_4->SetBinError(17,0.7080169);
   houtFV_stack_4->SetBinError(18,0.5682929);
   houtFV_stack_4->SetBinError(19,0.6159098);
   houtFV_stack_4->SetBinError(20,0.9888847);
   houtFV_stack_4->SetBinError(21,1.051468);
   houtFV_stack_4->SetBinError(22,1.165477);
   houtFV_stack_4->SetBinError(23,2.080188);
   houtFV_stack_4->SetBinError(24,1.876965);
   houtFV_stack_4->SetBinError(25,1.686174);
   houtFV_stack_4->SetEntries(267);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1062763);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.07571573);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03076306);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.655179);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.8496211);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4194947);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.4024537);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.8759266);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.267717);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.7293128);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.580485);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.244033);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.887239);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.727746);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.69945);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.55863);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.184963);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.358047);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.284354);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.873741);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.422911);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.8929);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.428186);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.675417);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.103871);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.94886);
   hNCpi0inFVres_stack_7->SetBinContent(24,19.75375);
   hNCpi0inFVres_stack_7->SetBinContent(25,20.85226);
   hNCpi0inFVres_stack_7->SetBinError(1,0.215091);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3435036);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1653557);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1231423);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2571176);
   hNCpi0inFVres_stack_7->SetBinError(6,0.354213);
   hNCpi0inFVres_stack_7->SetBinError(7,0.2884623);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4322012);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3422391);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5161356);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1716172);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4115812);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6871982);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5205313);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5226623);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3963941);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3464865);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7319459);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6748579);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7465255);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9244413);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8791268);
   hNCpi0inFVres_stack_7->SetBinError(23,1.233942);
   hNCpi0inFVres_stack_7->SetBinError(24,1.727706);
   hNCpi0inFVres_stack_7->SetBinError(25,1.871109);
   hNCpi0inFVres_stack_7->SetEntries(2070);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6500095);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6951046);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5721841);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.47749);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.368536);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.9259179);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.081188);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.4898557);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6879468);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.87994);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.057142);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.305467);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.573707);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.256938);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.728128);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.676358);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.579358);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.241982);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.636937);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.275735);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.566077);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.715936);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.998787);
   hNCpi0inFVdis_stack_8->SetBinContent(24,17.03053);
   hNCpi0inFVdis_stack_8->SetBinContent(25,25.3671);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.204175);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3544903);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2278331);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5427828);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4165877);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3168386);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3550916);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2238483);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3225927);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3301924);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3410783);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3806102);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.416614);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3505112);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9510182);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4125943);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3750778);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5396579);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.70031);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6048089);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7524053);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.069172);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.228068);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.453307);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.025405);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_muon_costheta_all",25,-1,1);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,17.58473);
   hCCpi0inFV_stack_10->SetBinContent(2,19.10508);
   hCCpi0inFV_stack_10->SetBinContent(3,24.99548);
   hCCpi0inFV_stack_10->SetBinContent(4,30.38776);
   hCCpi0inFV_stack_10->SetBinContent(5,30.45365);
   hCCpi0inFV_stack_10->SetBinContent(6,37.9563);
   hCCpi0inFV_stack_10->SetBinContent(7,40.21564);
   hCCpi0inFV_stack_10->SetBinContent(8,49.17341);
   hCCpi0inFV_stack_10->SetBinContent(9,50.10988);
   hCCpi0inFV_stack_10->SetBinContent(10,62.90784);
   hCCpi0inFV_stack_10->SetBinContent(11,66.5619);
   hCCpi0inFV_stack_10->SetBinContent(12,82.99773);
   hCCpi0inFV_stack_10->SetBinContent(13,99.49617);
   hCCpi0inFV_stack_10->SetBinContent(14,119.7378);
   hCCpi0inFV_stack_10->SetBinContent(15,124.7386);
   hCCpi0inFV_stack_10->SetBinContent(16,160.8387);
   hCCpi0inFV_stack_10->SetBinContent(17,195.6233);
   hCCpi0inFV_stack_10->SetBinContent(18,209.7691);
   hCCpi0inFV_stack_10->SetBinContent(19,262.1582);
   hCCpi0inFV_stack_10->SetBinContent(20,328.4765);
   hCCpi0inFV_stack_10->SetBinContent(21,406.257);
   hCCpi0inFV_stack_10->SetBinContent(22,506.5855);
   hCCpi0inFV_stack_10->SetBinContent(23,719.9182);
   hCCpi0inFV_stack_10->SetBinContent(24,1009.133);
   hCCpi0inFV_stack_10->SetBinContent(25,1077.043);
   hCCpi0inFV_stack_10->SetBinError(1,2.141868);
   hCCpi0inFV_stack_10->SetBinError(2,2.198451);
   hCCpi0inFV_stack_10->SetBinError(3,2.561104);
   hCCpi0inFV_stack_10->SetBinError(4,2.775851);
   hCCpi0inFV_stack_10->SetBinError(5,2.838495);
   hCCpi0inFV_stack_10->SetBinError(6,3.141348);
   hCCpi0inFV_stack_10->SetBinError(7,3.19832);
   hCCpi0inFV_stack_10->SetBinError(8,3.57366);
   hCCpi0inFV_stack_10->SetBinError(9,3.544004);
   hCCpi0inFV_stack_10->SetBinError(10,3.990438);
   hCCpi0inFV_stack_10->SetBinError(11,4.098623);
   hCCpi0inFV_stack_10->SetBinError(12,4.580453);
   hCCpi0inFV_stack_10->SetBinError(13,5.028135);
   hCCpi0inFV_stack_10->SetBinError(14,5.485477);
   hCCpi0inFV_stack_10->SetBinError(15,5.619125);
   hCCpi0inFV_stack_10->SetBinError(16,6.364874);
   hCCpi0inFV_stack_10->SetBinError(17,7.169844);
   hCCpi0inFV_stack_10->SetBinError(18,7.273929);
   hCCpi0inFV_stack_10->SetBinError(19,8.120945);
   hCCpi0inFV_stack_10->SetBinError(20,9.111177);
   hCCpi0inFV_stack_10->SetBinError(21,10.12831);
   hCCpi0inFV_stack_10->SetBinError(22,11.30447);
   hCCpi0inFV_stack_10->SetBinError(23,13.51036);
   hCCpi0inFV_stack_10->SetBinError(24,15.95859);
   hCCpi0inFV_stack_10->SetBinError(25,16.47508);
   hCCpi0inFV_stack_10->SetEntries(24435);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.5884556);
   hNCinFV_stack_11->SetBinContent(3,0.3934307);
   hNCinFV_stack_11->SetBinContent(4,0.3934307);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(7,0.9801958);
   hNCinFV_stack_11->SetBinContent(8,1.125349);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(10,1.127039);
   hNCinFV_stack_11->SetBinContent(11,1.752451);
   hNCinFV_stack_11->SetBinContent(12,0.7868615);
   hNCinFV_stack_11->SetBinContent(13,2.000729);
   hNCinFV_stack_11->SetBinContent(14,1.518779);
   hNCinFV_stack_11->SetBinContent(15,0.6803553);
   hNCinFV_stack_11->SetBinContent(16,1.217248);
   hNCinFV_stack_11->SetBinContent(17,0.9303237);
   hNCinFV_stack_11->SetBinContent(18,2.053982);
   hNCinFV_stack_11->SetBinContent(19,1.807394);
   hNCinFV_stack_11->SetBinContent(20,2.197444);
   hNCinFV_stack_11->SetBinContent(21,2.589184);
   hNCinFV_stack_11->SetBinContent(22,5.036597);
   hNCinFV_stack_11->SetBinContent(23,6.110383);
   hNCinFV_stack_11->SetBinContent(24,10.26315);
   hNCinFV_stack_11->SetBinContent(25,8.449598);
   hNCinFV_stack_11->SetBinError(1,0.3397478);
   hNCinFV_stack_11->SetBinError(3,0.2781975);
   hNCinFV_stack_11->SetBinError(4,0.2781975);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(7,0.4383608);
   hNCinFV_stack_11->SetBinError(8,0.5194673);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.5201044);
   hNCinFV_stack_11->SetBinError(11,0.7345848);
   hNCinFV_stack_11->SetBinError(12,0.3934307);
   hNCinFV_stack_11->SetBinError(13,0.7343859);
   hNCinFV_stack_11->SetBinError(14,0.5892709);
   hNCinFV_stack_11->SetBinError(15,0.4810838);
   hNCinFV_stack_11->SetBinError(16,0.6211758);
   hNCinFV_stack_11->SetBinError(17,0.4814682);
   hNCinFV_stack_11->SetBinError(18,0.7078105);
   hNCinFV_stack_11->SetBinError(19,0.7084844);
   hNCinFV_stack_11->SetBinError(20,0.760276);
   hNCinFV_stack_11->SetBinError(21,0.809167);
   hNCinFV_stack_11->SetBinError(22,1.110469);
   hNCinFV_stack_11->SetBinError(23,1.241763);
   hNCinFV_stack_11->SetBinError(24,1.581875);
   hNCinFV_stack_11->SetBinError(25,1.482011);
   hNCinFV_stack_11->SetEntries(225);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,15.02594);
   hnumuCCinFV_stack_12->SetBinContent(2,10.85762);
   hnumuCCinFV_stack_12->SetBinContent(3,8.423259);
   hnumuCCinFV_stack_12->SetBinContent(4,10.06979);
   hnumuCCinFV_stack_12->SetBinContent(5,13.91501);
   hnumuCCinFV_stack_12->SetBinContent(6,8.97552);
   hnumuCCinFV_stack_12->SetBinContent(7,14.26367);
   hnumuCCinFV_stack_12->SetBinContent(8,13.95906);
   hnumuCCinFV_stack_12->SetBinContent(9,17.05552);
   hnumuCCinFV_stack_12->SetBinContent(10,17.00826);
   hnumuCCinFV_stack_12->SetBinContent(11,17.33823);
   hnumuCCinFV_stack_12->SetBinContent(12,18.3742);
   hnumuCCinFV_stack_12->SetBinContent(13,27.4242);
   hnumuCCinFV_stack_12->SetBinContent(14,27.1451);
   hnumuCCinFV_stack_12->SetBinContent(15,29.50053);
   hnumuCCinFV_stack_12->SetBinContent(16,36.08821);
   hnumuCCinFV_stack_12->SetBinContent(17,47.00729);
   hnumuCCinFV_stack_12->SetBinContent(18,51.67062);
   hnumuCCinFV_stack_12->SetBinContent(19,55.10048);
   hnumuCCinFV_stack_12->SetBinContent(20,74.16659);
   hnumuCCinFV_stack_12->SetBinContent(21,93.2401);
   hnumuCCinFV_stack_12->SetBinContent(22,112.8678);
   hnumuCCinFV_stack_12->SetBinContent(23,149.8106);
   hnumuCCinFV_stack_12->SetBinContent(24,201.1922);
   hnumuCCinFV_stack_12->SetBinContent(25,203.8784);
   hnumuCCinFV_stack_12->SetBinError(1,2.445124);
   hnumuCCinFV_stack_12->SetBinError(2,1.652669);
   hnumuCCinFV_stack_12->SetBinError(3,1.593971);
   hnumuCCinFV_stack_12->SetBinError(4,1.672733);
   hnumuCCinFV_stack_12->SetBinError(5,2.175678);
   hnumuCCinFV_stack_12->SetBinError(6,1.540708);
   hnumuCCinFV_stack_12->SetBinError(7,1.937222);
   hnumuCCinFV_stack_12->SetBinError(8,1.990928);
   hnumuCCinFV_stack_12->SetBinError(9,2.155029);
   hnumuCCinFV_stack_12->SetBinError(10,2.14054);
   hnumuCCinFV_stack_12->SetBinError(11,2.115871);
   hnumuCCinFV_stack_12->SetBinError(12,2.300538);
   hnumuCCinFV_stack_12->SetBinError(13,2.89731);
   hnumuCCinFV_stack_12->SetBinError(14,2.837881);
   hnumuCCinFV_stack_12->SetBinError(15,2.879651);
   hnumuCCinFV_stack_12->SetBinError(16,3.127955);
   hnumuCCinFV_stack_12->SetBinError(17,3.720726);
   hnumuCCinFV_stack_12->SetBinError(18,3.857892);
   hnumuCCinFV_stack_12->SetBinError(19,3.819183);
   hnumuCCinFV_stack_12->SetBinError(20,4.399755);
   hnumuCCinFV_stack_12->SetBinError(21,6.785335);
   hnumuCCinFV_stack_12->SetBinError(22,5.464156);
   hnumuCCinFV_stack_12->SetBinError(23,6.920778);
   hnumuCCinFV_stack_12->SetBinError(24,8.069845);
   hnumuCCinFV_stack_12->SetBinError(25,8.296936);
   hnumuCCinFV_stack_12->SetEntries(5250);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(15,0.536893);
   hnueCCinFV_stack_13->SetBinContent(16,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(18,1.011834);
   hnueCCinFV_stack_13->SetBinContent(19,1.608988);
   hnueCCinFV_stack_13->SetBinContent(20,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(21,2.476231);
   hnueCCinFV_stack_13->SetBinContent(22,1.467217);
   hnueCCinFV_stack_13->SetBinContent(23,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(24,3.300565);
   hnueCCinFV_stack_13->SetBinContent(25,2.392469);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.5197486);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.438694);
   hnueCCinFV_stack_13->SetBinError(15,0.3929602);
   hnueCCinFV_stack_13->SetBinError(16,0.3387718);
   hnueCCinFV_stack_13->SetBinError(18,0.542136);
   hnueCCinFV_stack_13->SetBinError(19,0.6801404);
   hnueCCinFV_stack_13->SetBinError(20,0.4800908);
   hnueCCinFV_stack_13->SetBinError(21,0.8887521);
   hnueCCinFV_stack_13->SetBinError(22,0.6214735);
   hnueCCinFV_stack_13->SetBinError(23,0.340721);
   hnueCCinFV_stack_13->SetBinError(24,0.8742766);
   hnueCCinFV_stack_13->SetBinError(25,0.7848912);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__2->SetBinContent(1,38.02002);
   hmcerror__2->SetBinContent(2,35.06537);
   hmcerror__2->SetBinContent(3,36.98551);
   hmcerror__2->SetBinContent(4,49.83921);
   hmcerror__2->SetBinContent(5,49.30699);
   hmcerror__2->SetBinContent(6,54.48311);
   hmcerror__2->SetBinContent(7,61.31116);
   hmcerror__2->SetBinContent(8,73.23515);
   hmcerror__2->SetBinContent(9,73.4989);
   hmcerror__2->SetBinContent(10,93.25409);
   hmcerror__2->SetBinContent(11,94.1815);
   hmcerror__2->SetBinContent(12,115.511);
   hmcerror__2->SetBinContent(13,145.8253);
   hmcerror__2->SetBinContent(14,162.0826);
   hmcerror__2->SetBinContent(15,170.1757);
   hmcerror__2->SetBinContent(16,210.2491);
   hmcerror__2->SetBinContent(17,262.2107);
   hmcerror__2->SetBinContent(18,276.6752);
   hmcerror__2->SetBinContent(19,341.8201);
   hmcerror__2->SetBinContent(20,432.5353);
   hmcerror__2->SetBinContent(21,535.4254);
   hmcerror__2->SetBinContent(22,660.0057);
   hmcerror__2->SetBinContent(23,916.3635);
   hmcerror__2->SetBinContent(24,1283.375);
   hmcerror__2->SetBinContent(25,1356.068);
   hmcerror__2->SetBinError(1,8.545668);
   hmcerror__2->SetBinError(2,8.529541);
   hmcerror__2->SetBinError(3,9.651841);
   hmcerror__2->SetBinError(4,12.02059);
   hmcerror__2->SetBinError(5,13.62064);
   hmcerror__2->SetBinError(6,14.09668);
   hmcerror__2->SetBinError(7,15.31816);
   hmcerror__2->SetBinError(8,19.31127);
   hmcerror__2->SetBinError(9,19.36077);
   hmcerror__2->SetBinError(10,26.37242);
   hmcerror__2->SetBinError(11,23.69371);
   hmcerror__2->SetBinError(12,28.95145);
   hmcerror__2->SetBinError(13,35.62683);
   hmcerror__2->SetBinError(14,43.23968);
   hmcerror__2->SetBinError(15,42.72304);
   hmcerror__2->SetBinError(16,54.08102);
   hmcerror__2->SetBinError(17,64.73068);
   hmcerror__2->SetBinError(18,69.08531);
   hmcerror__2->SetBinError(19,81.18624);
   hmcerror__2->SetBinError(20,102.9793);
   hmcerror__2->SetBinError(21,126.9272);
   hmcerror__2->SetBinError(22,150.4865);
   hmcerror__2->SetBinError(23,210.8545);
   hmcerror__2->SetBinError(24,291.6223);
   hmcerror__2->SetBinError(25,293.9195);
   hmcerror__2->SetBinError(26,0.3895343);
   hmcerror__2->SetEntries(7468.322);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3001[25] = {
   28,
   29,
   37,
   48,
   49,
   44,
   66,
   76,
   86,
   95,
   131,
   108,
   149,
   156,
   200,
   228,
   236,
   275,
   347,
   442,
   494,
   610,
   786,
   1127,
   1103};
   Double_t _felx3001[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3001[25] = {
   5.4358,
   5.5285,
   6.2203,
   7.0604,
   7.1318,
   6.7671,
   8.2509,
   8.8425,
   9.3967,
   9.8686,
   11.44552,
   10.3923,
   12.20656,
   12.49,
   14.14214,
   15.09967,
   15.36229,
   16.58312,
   18.62794,
   21.0238,
   22.22611,
   24.69818,
   28.03569,
   33.57082,
   33.21144};
   Double_t _fehx3001[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3001[25] = {
   5.2271,
   5.3201,
   6.0141,
   6.8561,
   6.9277,
   6.5623,
   8.0483,
   8.6406,
   9.1951,
   9.667,
   11.44552,
   10.3923,
   12.20656,
   12.49,
   14.14214,
   15.09967,
   15.36229,
   16.58312,
   18.62794,
   21.0238,
   22.22611,
   24.69818,
   28.03569,
   33.57082,
   33.21144};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(20.30778);
   Graph_Graph3001->SetMaximum(1274.371);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6950.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 36.0","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 144.5","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 64.1","F");

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  94.8","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5732.2","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 52.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1274.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.7","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3002[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3002[25] = {
   0.2247676,
   0.2432468,
   0.2609628,
   0.2411875,
   0.2762415,
   0.2587348,
   0.2498429,
   0.2636886,
   0.2634157,
   0.2828018,
   0.251575,
   0.2506379,
   0.2443118,
   0.2667756,
   0.2510525,
   0.2572236,
   0.2468651,
   0.2496982,
   0.2375116,
   0.2380829,
   0.2370585,
   0.2280078,
   0.2300992,
   0.2272308,
   0.2167439};
   Double_t _fehx3002[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3002[25] = {
   0.2247676,
   0.2432468,
   0.2609628,
   0.2411875,
   0.2762415,
   0.2587348,
   0.2498429,
   0.2636886,
   0.2634157,
   0.2828018,
   0.251575,
   0.2506379,
   0.2443118,
   0.2667756,
   0.2510525,
   0.2572236,
   0.2468651,
   0.2496982,
   0.2375116,
   0.2380829,
   0.2370585,
   0.2280078,
   0.2300992,
   0.2272308,
   0.2167439};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3003[25] = {
   0.2247676,
   0.2432468,
   0.2609628,
   0.2411875,
   0.2762415,
   0.2587348,
   0.2498429,
   0.2636886,
   0.2634157,
   0.2828018,
   0.251575,
   0.2506379,
   0.2443118,
   0.2667756,
   0.2510525,
   0.2572236,
   0.2468651,
   0.2496982,
   0.2375116,
   0.2380829,
   0.2370585,
   0.2280078,
   0.2300992,
   0.2272308,
   0.2167439};
   Double_t _fehx3003[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3003[25] = {
   0.2247676,
   0.2432468,
   0.2609628,
   0.2411875,
   0.2762415,
   0.2587348,
   0.2498429,
   0.2636886,
   0.2634157,
   0.2828018,
   0.251575,
   0.2506379,
   0.2443118,
   0.2667756,
   0.2510525,
   0.2572236,
   0.2468651,
   0.2496982,
   0.2375116,
   0.2380829,
   0.2370585,
   0.2280078,
   0.2300992,
   0.2272308,
   0.2167439};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3004[25] = {
   0.7364542,
   0.8270267,
   1.000392,
   0.963097,
   0.993774,
   0.8075897,
   1.076476,
   1.037753,
   1.170086,
   1.018722,
   1.390931,
   0.9349756,
   1.021771,
   0.9624721,
   1.175256,
   1.084428,
   0.9000396,
   0.9939452,
   1.015154,
   1.021882,
   0.9226308,
   0.9242344,
   0.8577382,
   0.8781533,
   0.8133808};
   Double_t _felx3004[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3004[25] = {
   0.1429721,
   0.1576627,
   0.1681821,
   0.1416635,
   0.1446408,
   0.1242055,
   0.1345742,
   0.1207412,
   0.1278482,
   0.1058248,
   0.1215262,
   0.08996807,
   0.08370671,
   0.07705944,
   0.08310313,
   0.071818,
   0.05858759,
   0.05993715,
   0.05449632,
   0.04860596,
   0.04151112,
   0.03742116,
   0.03059451,
   0.02615823,
   0.02449098};
   Double_t _fehx3004[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3004[25] = {
   0.1374828,
   0.1517195,
   0.1626069,
   0.1375644,
   0.1405014,
   0.1204465,
   0.1312697,
   0.1179843,
   0.1251053,
   0.103663,
   0.1215262,
   0.08996807,
   0.08370671,
   0.07705944,
   0.08310313,
   0.071818,
   0.05858759,
   0.05993715,
   0.05449632,
   0.04860596,
   0.04151112,
   0.03742116,
   0.03059451,
   0.02615823,
   0.02449098};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.5015846);
   Graph_Graph3004->SetMaximum(1.604355);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_muon_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
