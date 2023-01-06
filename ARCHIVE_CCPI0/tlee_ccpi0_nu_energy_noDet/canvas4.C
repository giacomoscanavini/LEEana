#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 17:41:25 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
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
   pad1->Range(-384.6154,-7.32,2820.513,809.4379);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__10->SetBinContent(3,1.77103);
   hmc__10->SetBinContent(4,25.10838);
   hmc__10->SetBinContent(5,80.26921);
   hmc__10->SetBinContent(6,166.6997);
   hmc__10->SetBinContent(7,263.9815);
   hmc__10->SetBinContent(8,318.3085);
   hmc__10->SetBinContent(9,330.8357);
   hmc__10->SetBinContent(10,314.6246);
   hmc__10->SetBinContent(11,269.0442);
   hmc__10->SetBinContent(12,228.2233);
   hmc__10->SetBinContent(13,171.7003);
   hmc__10->SetBinContent(14,133.5);
   hmc__10->SetBinContent(15,105.425);
   hmc__10->SetBinContent(16,73.83794);
   hmc__10->SetBinContent(17,49.72391);
   hmc__10->SetBinContent(18,41.99515);
   hmc__10->SetBinContent(19,30.14343);
   hmc__10->SetBinContent(20,26.15007);
   hmc__10->SetBinContent(21,19.95881);
   hmc__10->SetBinContent(22,13.93902);
   hmc__10->SetBinContent(23,9.206204);
   hmc__10->SetBinContent(24,7.956069);
   hmc__10->SetBinContent(25,8.370823);
   hmc__10->SetBinContent(26,29.67861);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,0.3895343);
   hmc__10->SetBinError(3,0.9820913);
   hmc__10->SetBinError(4,5.089325);
   hmc__10->SetBinError(5,16.27092);
   hmc__10->SetBinError(6,36.92225);
   hmc__10->SetBinError(7,57.57507);
   hmc__10->SetBinError(8,68.63325);
   hmc__10->SetBinError(9,68.44741);
   hmc__10->SetBinError(10,71.13122);
   hmc__10->SetBinError(11,59.91282);
   hmc__10->SetBinError(12,51.17713);
   hmc__10->SetBinError(13,40.09544);
   hmc__10->SetBinError(14,29.8425);
   hmc__10->SetBinError(15,24.05949);
   hmc__10->SetBinError(16,17.23932);
   hmc__10->SetBinError(17,12.03774);
   hmc__10->SetBinError(18,9.708553);
   hmc__10->SetBinError(19,9.047087);
   hmc__10->SetBinError(20,6.211883);
   hmc__10->SetBinError(21,4.887067);
   hmc__10->SetBinError(22,3.668117);
   hmc__10->SetBinError(23,3.097136);
   hmc__10->SetBinError(24,2.393732);
   hmc__10->SetBinError(25,2.438526);
   hmc__10->SetBinError(26,5.125249);
   hmc__10->SetMinimum(-7.32);
   hmc__10->SetMaximum(768.6);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,2500);
   hs4_stack_4->SetMinimum(-1.131173e-08);
   hs4_stack_4->SetMaximum(347.3774);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(4,0.5915521);
   hbadmatch_stack_1->SetBinContent(5,0.8691199);
   hbadmatch_stack_1->SetBinContent(6,0.973565);
   hbadmatch_stack_1->SetBinContent(7,1.344815);
   hbadmatch_stack_1->SetBinContent(8,1.125349);
   hbadmatch_stack_1->SetBinContent(9,0.9997355);
   hbadmatch_stack_1->SetBinContent(10,1.764045);
   hbadmatch_stack_1->SetBinContent(11,1.338349);
   hbadmatch_stack_1->SetBinContent(12,1.2531);
   hbadmatch_stack_1->SetBinContent(13,0.9856285);
   hbadmatch_stack_1->SetBinContent(14,0.5352025);
   hbadmatch_stack_1->SetBinContent(15,1.242026);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.7336084);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinError(4,0.4411269);
   hbadmatch_stack_1->SetBinError(5,0.4664973);
   hbadmatch_stack_1->SetBinError(6,0.5002352);
   hbadmatch_stack_1->SetBinError(7,0.5639986);
   hbadmatch_stack_1->SetBinError(8,0.5194673);
   hbadmatch_stack_1->SetBinError(9,0.4474701);
   hbadmatch_stack_1->SetBinError(10,0.6374366);
   hbadmatch_stack_1->SetBinError(11,0.6328702);
   hbadmatch_stack_1->SetBinError(12,0.5904053);
   hbadmatch_stack_1->SetBinError(13,0.5220126);
   hbadmatch_stack_1->SetBinError(14,0.3921167);
   hbadmatch_stack_1->SetBinError(15,0.7883425);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.4394482);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(3,0.6416141);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,2.345802);
   hext_stack_2->SetBinContent(6,2.599588);
   hext_stack_2->SetBinContent(7,4.296596);
   hext_stack_2->SetBinContent(8,11.40184);
   hext_stack_2->SetBinContent(9,14.0505);
   hext_stack_2->SetBinContent(10,5.669206);
   hext_stack_2->SetBinContent(11,5.553873);
   hext_stack_2->SetBinContent(12,2.898035);
   hext_stack_2->SetBinContent(13,2.923985);
   hext_stack_2->SetBinContent(14,2.345802);
   hext_stack_2->SetBinContent(15,1.950793);
   hext_stack_2->SetBinContent(16,1.048213);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(26,3.946247);
   hext_stack_2->SetBinError(3,0.6416141);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,0.9989624);
   hext_stack_2->SetBinError(6,0.9884288);
   hext_stack_2->SetBinError(7,1.328326);
   hext_stack_2->SetBinError(8,2.284889);
   hext_stack_2->SetBinError(9,2.632011);
   hext_stack_2->SetBinError(10,1.564185);
   hext_stack_2->SetBinError(11,1.748219);
   hext_stack_2->SetBinError(12,1.245274);
   hext_stack_2->SetBinError(13,1.040301);
   hext_stack_2->SetBinError(14,0.9989624);
   hext_stack_2->SetBinError(15,0.8755137);
   hext_stack_2->SetBinError(16,0.7595995);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(26,1.458663);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.4337134);
   hdirt_stack_3->SetBinContent(7,1.132946);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.6951543);
   hdirt_stack_3->SetBinContent(11,0.4045523);
   hdirt_stack_3->SetBinContent(13,0.292658);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(15,0.3820091);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinContent(18,2.407774e-08);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3112566);
   hdirt_stack_3->SetBinError(7,0.526479);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.4258516);
   hdirt_stack_3->SetBinError(11,0.3001263);
   hdirt_stack_3->SetBinError(13,0.2072697);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(15,0.3820091);
   hdirt_stack_3->SetBinError(16,0.2574102);
   hdirt_stack_3->SetBinError(18,2.407774e-08);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,2.528347);
   houtFV_stack_4->SetBinContent(6,4.105301);
   houtFV_stack_4->SetBinContent(7,2.635065);
   houtFV_stack_4->SetBinContent(8,5.644244);
   houtFV_stack_4->SetBinContent(9,4.036993);
   houtFV_stack_4->SetBinContent(10,3.734523);
   houtFV_stack_4->SetBinContent(11,3.06004);
   houtFV_stack_4->SetBinContent(12,1.940747);
   houtFV_stack_4->SetBinContent(13,1.176911);
   houtFV_stack_4->SetBinContent(14,1.712114);
   houtFV_stack_4->SetBinContent(15,0.5352025);
   houtFV_stack_4->SetBinContent(17,0.7834804);
   houtFV_stack_4->SetBinContent(20,0.3616262);
   houtFV_stack_4->SetBinContent(26,0.1967154);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.8385489);
   houtFV_stack_4->SetBinError(6,1.060612);
   houtFV_stack_4->SetBinError(7,0.7472471);
   houtFV_stack_4->SetBinError(8,1.937434);
   houtFV_stack_4->SetBinError(9,1.020289);
   houtFV_stack_4->SetBinError(10,0.9530938);
   houtFV_stack_4->SetBinError(11,0.9242267);
   houtFV_stack_4->SetBinError(12,0.6608917);
   houtFV_stack_4->SetBinError(13,0.4804759);
   houtFV_stack_4->SetBinError(14,0.6201715);
   houtFV_stack_4->SetBinError(15,0.3921167);
   houtFV_stack_4->SetBinError(17,0.3917439);
   houtFV_stack_4->SetBinError(20,0.3616262);
   houtFV_stack_4->SetBinError(26,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1569961);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1141589);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04659828);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1691327);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5131778);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.646986);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.005611);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.341393);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.787098);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.745346);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.082266);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.337806);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.660385);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.155072);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7888485);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.35679);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.386667);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2230735);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.4246438);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1346062);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4560135);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6016569);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6120257);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4992928);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7507644);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8912752);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8936193);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6159964);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6433812);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2754203);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5565913);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2587743);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1108488);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2406839);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(25,0.097318);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.06886437);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.169768);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.593905);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.6366);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.724361);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.928452);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.151449);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.81238);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.054582);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.192778);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.929149);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.603701);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.016308);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8462696);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5369797);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8370023);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.222536);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.05563199);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3469074);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6349247);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5027541);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9312828);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6391239);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5279621);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7460108);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7257587);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4519891);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7731597);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9181612);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3718905);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4618241);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2982958);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6095785);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1404279);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.07381642);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(3,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(4,7.179097);
   hCCpi0inFV_stack_10->SetBinContent(5,39.71143);
   hCCpi0inFV_stack_10->SetBinContent(6,105.7753);
   hCCpi0inFV_stack_10->SetBinContent(7,175.9516);
   hCCpi0inFV_stack_10->SetBinContent(8,228.9799);
   hCCpi0inFV_stack_10->SetBinContent(9,227.7798);
   hCCpi0inFV_stack_10->SetBinContent(10,236.6899);
   hCCpi0inFV_stack_10->SetBinContent(11,203.0574);
   hCCpi0inFV_stack_10->SetBinContent(12,168.1945);
   hCCpi0inFV_stack_10->SetBinContent(13,133.581);
   hCCpi0inFV_stack_10->SetBinContent(14,101.5455);
   hCCpi0inFV_stack_10->SetBinContent(15,80.52646);
   hCCpi0inFV_stack_10->SetBinContent(16,56.19373);
   hCCpi0inFV_stack_10->SetBinContent(17,37.06126);
   hCCpi0inFV_stack_10->SetBinContent(18,30.90174);
   hCCpi0inFV_stack_10->SetBinContent(19,21.08524);
   hCCpi0inFV_stack_10->SetBinContent(20,19.18627);
   hCCpi0inFV_stack_10->SetBinContent(21,16.08829);
   hCCpi0inFV_stack_10->SetBinContent(22,9.911743);
   hCCpi0inFV_stack_10->SetBinContent(23,6.438818);
   hCCpi0inFV_stack_10->SetBinContent(24,6.458405);
   hCCpi0inFV_stack_10->SetBinContent(25,6.543616);
   hCCpi0inFV_stack_10->SetBinContent(26,18.99798);
   hCCpi0inFV_stack_10->SetBinError(3,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(4,1.359715);
   hCCpi0inFV_stack_10->SetBinError(5,3.193603);
   hCCpi0inFV_stack_10->SetBinError(6,5.186311);
   hCCpi0inFV_stack_10->SetBinError(7,6.689431);
   hCCpi0inFV_stack_10->SetBinError(8,7.615248);
   hCCpi0inFV_stack_10->SetBinError(9,7.569489);
   hCCpi0inFV_stack_10->SetBinError(10,7.688979);
   hCCpi0inFV_stack_10->SetBinError(11,7.107764);
   hCCpi0inFV_stack_10->SetBinError(12,6.56695);
   hCCpi0inFV_stack_10->SetBinError(13,5.779485);
   hCCpi0inFV_stack_10->SetBinError(14,5.018162);
   hCCpi0inFV_stack_10->SetBinError(15,4.520482);
   hCCpi0inFV_stack_10->SetBinError(16,3.839355);
   hCCpi0inFV_stack_10->SetBinError(17,3.064861);
   hCCpi0inFV_stack_10->SetBinError(18,2.752551);
   hCCpi0inFV_stack_10->SetBinError(19,2.243234);
   hCCpi0inFV_stack_10->SetBinError(20,2.17938);
   hCCpi0inFV_stack_10->SetBinError(21,1.972542);
   hCCpi0inFV_stack_10->SetBinError(22,1.606425);
   hCCpi0inFV_stack_10->SetBinError(23,1.230717);
   hCCpi0inFV_stack_10->SetBinError(24,1.20929);
   hCCpi0inFV_stack_10->SetBinError(25,1.305101);
   hCCpi0inFV_stack_10->SetBinError(26,2.202742);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,2.108925);
   hNCinFV_stack_11->SetBinContent(7,2.834081);
   hNCinFV_stack_11->SetBinContent(8,2.587494);
   hNCinFV_stack_11->SetBinContent(9,3.517817);
   hNCinFV_stack_11->SetBinContent(10,1.767057);
   hNCinFV_stack_11->SetBinContent(11,1.52047);
   hNCinFV_stack_11->SetBinContent(12,0.8753801);
   hNCinFV_stack_11->SetBinContent(13,1.713804);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.8770706);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.6806842);
   hNCinFV_stack_11->SetBinError(7,0.8081673);
   hNCinFV_stack_11->SetBinError(8,0.8087577);
   hNCinFV_stack_11->SetBinError(9,0.9412229);
   hNCinFV_stack_11->SetBinError(10,0.5890229);
   hNCinFV_stack_11->SetBinError(11,0.5898325);
   hNCinFV_stack_11->SetBinError(12,0.5191111);
   hNCinFV_stack_11->SetBinError(13,0.6207051);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.5197486);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(3,0.426378);
   hnumuCCinFV_stack_12->SetBinContent(4,12.87754);
   hnumuCCinFV_stack_12->SetBinContent(5,29.94805);
   hnumuCCinFV_stack_12->SetBinContent(6,42.74512);
   hnumuCCinFV_stack_12->SetBinContent(7,66.66447);
   hnumuCCinFV_stack_12->SetBinContent(8,59.5107);
   hnumuCCinFV_stack_12->SetBinContent(9,68.70703);
   hnumuCCinFV_stack_12->SetBinContent(10,56.37273);
   hnumuCCinFV_stack_12->SetBinContent(11,45.07204);
   hnumuCCinFV_stack_12->SetBinContent(12,46.42285);
   hnumuCCinFV_stack_12->SetBinContent(13,26.28503);
   hnumuCCinFV_stack_12->SetBinContent(14,22.55482);
   hnumuCCinFV_stack_12->SetBinContent(15,16.09444);
   hnumuCCinFV_stack_12->SetBinContent(16,14.00868);
   hnumuCCinFV_stack_12->SetBinContent(17,8.400808);
   hnumuCCinFV_stack_12->SetBinContent(18,9.20146);
   hnumuCCinFV_stack_12->SetBinContent(19,6.350208);
   hnumuCCinFV_stack_12->SetBinContent(20,4.334877);
   hnumuCCinFV_stack_12->SetBinContent(21,3.424227);
   hnumuCCinFV_stack_12->SetBinContent(22,3.464564);
   hnumuCCinFV_stack_12->SetBinContent(23,2.542771);
   hnumuCCinFV_stack_12->SetBinContent(24,1.073786);
   hnumuCCinFV_stack_12->SetBinContent(25,1.729888);
   hnumuCCinFV_stack_12->SetBinContent(26,5.807161);
   hnumuCCinFV_stack_12->SetBinError(3,0.3025871);
   hnumuCCinFV_stack_12->SetBinError(4,1.944597);
   hnumuCCinFV_stack_12->SetBinError(5,3.501107);
   hnumuCCinFV_stack_12->SetBinError(6,3.538358);
   hnumuCCinFV_stack_12->SetBinError(7,5.000682);
   hnumuCCinFV_stack_12->SetBinError(8,3.999545);
   hnumuCCinFV_stack_12->SetBinError(9,4.324354);
   hnumuCCinFV_stack_12->SetBinError(10,3.775563);
   hnumuCCinFV_stack_12->SetBinError(11,3.429264);
   hnumuCCinFV_stack_12->SetBinError(12,4.25325);
   hnumuCCinFV_stack_12->SetBinError(13,2.620489);
   hnumuCCinFV_stack_12->SetBinError(14,2.781615);
   hnumuCCinFV_stack_12->SetBinError(15,2.005779);
   hnumuCCinFV_stack_12->SetBinError(16,1.875179);
   hnumuCCinFV_stack_12->SetBinError(17,1.382385);
   hnumuCCinFV_stack_12->SetBinError(18,2.689745);
   hnumuCCinFV_stack_12->SetBinError(19,1.240312);
   hnumuCCinFV_stack_12->SetBinError(20,1.026244);
   hnumuCCinFV_stack_12->SetBinError(21,0.8770549);
   hnumuCCinFV_stack_12->SetBinError(22,0.9613675);
   hnumuCCinFV_stack_12->SetBinError(23,0.8341245);
   hnumuCCinFV_stack_12->SetBinError(24,0.5557297);
   hnumuCCinFV_stack_12->SetBinError(25,0.7388992);
   hnumuCCinFV_stack_12->SetBinError(26,1.256954);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,1.362108);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(12,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.5352025);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.5710014);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.4379386);
   hnueCCinFV_stack_13->SetBinError(12,0.5197486);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.5197486);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.3921167);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__11->SetBinContent(3,1.77103);
   hmcerror__11->SetBinContent(4,25.10838);
   hmcerror__11->SetBinContent(5,80.26921);
   hmcerror__11->SetBinContent(6,166.6997);
   hmcerror__11->SetBinContent(7,263.9815);
   hmcerror__11->SetBinContent(8,318.3085);
   hmcerror__11->SetBinContent(9,330.8357);
   hmcerror__11->SetBinContent(10,314.6246);
   hmcerror__11->SetBinContent(11,269.0442);
   hmcerror__11->SetBinContent(12,228.2233);
   hmcerror__11->SetBinContent(13,171.7003);
   hmcerror__11->SetBinContent(14,133.5);
   hmcerror__11->SetBinContent(15,105.425);
   hmcerror__11->SetBinContent(16,73.83794);
   hmcerror__11->SetBinContent(17,49.72391);
   hmcerror__11->SetBinContent(18,41.99515);
   hmcerror__11->SetBinContent(19,30.14343);
   hmcerror__11->SetBinContent(20,26.15007);
   hmcerror__11->SetBinContent(21,19.95881);
   hmcerror__11->SetBinContent(22,13.93902);
   hmcerror__11->SetBinContent(23,9.206204);
   hmcerror__11->SetBinContent(24,7.956069);
   hmcerror__11->SetBinContent(25,8.370823);
   hmcerror__11->SetBinContent(26,29.67861);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,0.3895343);
   hmcerror__11->SetBinError(3,0.9820913);
   hmcerror__11->SetBinError(4,5.089325);
   hmcerror__11->SetBinError(5,16.27092);
   hmcerror__11->SetBinError(6,36.92225);
   hmcerror__11->SetBinError(7,57.57507);
   hmcerror__11->SetBinError(8,68.63325);
   hmcerror__11->SetBinError(9,68.44741);
   hmcerror__11->SetBinError(10,71.13122);
   hmcerror__11->SetBinError(11,59.91282);
   hmcerror__11->SetBinError(12,51.17713);
   hmcerror__11->SetBinError(13,40.09544);
   hmcerror__11->SetBinError(14,29.8425);
   hmcerror__11->SetBinError(15,24.05949);
   hmcerror__11->SetBinError(16,17.23932);
   hmcerror__11->SetBinError(17,12.03774);
   hmcerror__11->SetBinError(18,9.708553);
   hmcerror__11->SetBinError(19,9.047087);
   hmcerror__11->SetBinError(20,6.211883);
   hmcerror__11->SetBinError(21,4.887067);
   hmcerror__11->SetBinError(22,3.668117);
   hmcerror__11->SetBinError(23,3.097136);
   hmcerror__11->SetBinError(24,2.393732);
   hmcerror__11->SetBinError(25,2.438526);
   hmcerror__11->SetBinError(26,5.125249);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3013[25] = {
   0,
   0,
   0,
   24,
   120,
   246,
   316,
   366,
   318,
   306,
   286,
   167,
   156,
   107,
   84,
   64,
   54,
   32,
   21,
   21,
   18,
   9,
   8,
   8,
   6};
   Double_t _felx3013[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[25] = {
   0,
   0,
   0,
   5.0476,
   10.95445,
   15.68439,
   17.77639,
   19.13113,
   17.83255,
   17.49286,
   16.91153,
   12.92285,
   12.49,
   10.34408,
   9.2886,
   8.1273,
   7.4785,
   5.7977,
   4.7354,
   4.7354,
   4.4008,
   3.19354,
   3.0307,
   3.0307,
   2.67925};
   Double_t _fehx3013[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[25] = {
   1.1478,
   1.1478,
   1.1478,
   4.837,
   10.95445,
   15.68439,
   17.77639,
   19.13113,
   17.83255,
   17.49286,
   16.91153,
   12.92285,
   12.49,
   10.34408,
   9.0869,
   7.9246,
   7.275,
   5.5904,
   4.5229,
   4.5229,
   4.1858,
   2.9582,
   2.7896,
   2.7896,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,2750);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(423.6442);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=37.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2737.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 62.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1919.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 548.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[25] = {
   0,
   0,
   0.554531,
   0.2026943,
   0.2027044,
   0.2214897,
   0.2181026,
   0.2156186,
   0.2068925,
   0.2260828,
   0.2226877,
   0.2242414,
   0.2335199,
   0.2235393,
   0.2282142,
   0.233475,
   0.2420915,
   0.2311827,
   0.3001346,
   0.2375474,
   0.2448576,
   0.2631546,
   0.3364183,
   0.3008686,
   0.2913126};
   Double_t _fehx3014[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[25] = {
   0,
   0,
   0.554531,
   0.2026943,
   0.2027044,
   0.2214897,
   0.2181026,
   0.2156186,
   0.2068925,
   0.2260828,
   0.2226877,
   0.2242414,
   0.2335199,
   0.2235393,
   0.2282142,
   0.233475,
   0.2420915,
   0.2311827,
   0.3001346,
   0.2375474,
   0.2448576,
   0.2631546,
   0.3364183,
   0.3008686,
   0.2913126};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,2750);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[25] = {
   0,
   0,
   0.554531,
   0.2026943,
   0.2027044,
   0.2214897,
   0.2181026,
   0.2156186,
   0.2068925,
   0.2260828,
   0.2226877,
   0.2242414,
   0.2335199,
   0.2235393,
   0.2282142,
   0.233475,
   0.2420915,
   0.2311827,
   0.3001346,
   0.2375474,
   0.2448576,
   0.2631546,
   0.3364183,
   0.3008686,
   0.2913126};
   Double_t _fehx3015[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[25] = {
   0,
   0,
   0.554531,
   0.2026943,
   0.2027044,
   0.2214897,
   0.2181026,
   0.2156186,
   0.2068925,
   0.2260828,
   0.2226877,
   0.2242414,
   0.2335199,
   0.2235393,
   0.2282142,
   0.233475,
   0.2420915,
   0.2311827,
   0.3001346,
   0.2375474,
   0.2448576,
   0.2631546,
   0.3364183,
   0.3008686,
   0.2913126};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,2750);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3016[25] = {
   10,
   10,
   0,
   0.9558563,
   1.494969,
   1.475708,
   1.197053,
   1.149828,
   0.9612023,
   0.9725876,
   1.063023,
   0.7317394,
   0.9085598,
   0.801498,
   0.7967746,
   0.866763,
   1.085997,
   0.7619928,
   0.6966691,
   0.803057,
   0.9018572,
   0.6456694,
   0.8689792,
   1.005522,
   0.7167754};
   Double_t _felx3016[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[25] = {
   0,
   0,
   0,
   0.2010325,
   0.1364714,
   0.0940877,
   0.06733952,
   0.06010247,
   0.05390155,
   0.05559913,
   0.06285784,
   0.0566237,
   0.072743,
   0.07748374,
   0.0881062,
   0.1100694,
   0.1504005,
   0.1380564,
   0.1570956,
   0.1810855,
   0.2204941,
   0.2291079,
   0.3292019,
   0.3809293,
   0.3200701};
   Double_t _fehx3016[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[25] = {
   0,
   0,
   0.6480973,
   0.1926449,
   0.1364714,
   0.0940877,
   0.06733952,
   0.06010247,
   0.05390155,
   0.05559913,
   0.06285784,
   0.0566237,
   0.072743,
   0.07748374,
   0.08619299,
   0.1073242,
   0.1463079,
   0.1331201,
   0.1500459,
   0.1729594,
   0.2097219,
   0.2122244,
   0.303013,
   0.3506254,
   0.2889298};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,2750);
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
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_cc_nu_energy_all",25,0,2500);

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
   TLine *line = new TLine(0,1,2500,1);
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
