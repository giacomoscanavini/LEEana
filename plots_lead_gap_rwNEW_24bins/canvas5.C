#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 11:58:35 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-14.49078,101.5385,1602.375);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__13->SetBinContent(1,724.5388);
   hmc__13->SetBinContent(2,401.7601);
   hmc__13->SetBinContent(3,363.6621);
   hmc__13->SetBinContent(4,303.3506);
   hmc__13->SetBinContent(5,272.1075);
   hmc__13->SetBinContent(6,230.4067);
   hmc__13->SetBinContent(7,191.5112);
   hmc__13->SetBinContent(8,153.5087);
   hmc__13->SetBinContent(9,121.5706);
   hmc__13->SetBinContent(10,106.8412);
   hmc__13->SetBinContent(11,99.62447);
   hmc__13->SetBinContent(12,94.77147);
   hmc__13->SetBinContent(13,71.84411);
   hmc__13->SetBinContent(14,57.74098);
   hmc__13->SetBinContent(15,47.32508);
   hmc__13->SetBinContent(16,37.31871);
   hmc__13->SetBinContent(17,27.99353);
   hmc__13->SetBinContent(18,27.56012);
   hmc__13->SetBinContent(19,28.1745);
   hmc__13->SetBinContent(20,27.62702);
   hmc__13->SetBinContent(21,17.61881);
   hmc__13->SetBinContent(22,15.60144);
   hmc__13->SetBinContent(23,13.10641);
   hmc__13->SetBinContent(24,10.47756);
   hmc__13->SetBinContent(25,117.6642);
   hmc__13->SetBinError(1,214.6169);
   hmc__13->SetBinError(2,145.2409);
   hmc__13->SetBinError(3,127.3978);
   hmc__13->SetBinError(4,120.3194);
   hmc__13->SetBinError(5,96.37667);
   hmc__13->SetBinError(6,80.99754);
   hmc__13->SetBinError(7,68.94365);
   hmc__13->SetBinError(8,54.24532);
   hmc__13->SetBinError(9,48.02656);
   hmc__13->SetBinError(10,41.24466);
   hmc__13->SetBinError(11,34.48927);
   hmc__13->SetBinError(12,31.11143);
   hmc__13->SetBinError(13,27.29068);
   hmc__13->SetBinError(14,25.12384);
   hmc__13->SetBinError(15,29.66867);
   hmc__13->SetBinError(16,17.31938);
   hmc__13->SetBinError(17,11.99991);
   hmc__13->SetBinError(18,12.28793);
   hmc__13->SetBinError(19,13.47894);
   hmc__13->SetBinError(20,16.14073);
   hmc__13->SetBinError(21,11.96831);
   hmc__13->SetBinError(22,8.998206);
   hmc__13->SetBinError(23,8.84052);
   hmc__13->SetBinError(24,10.69954);
   hmc__13->SetBinError(25,40.39918);
   hmc__13->SetMinimum(-14.49078);
   hmc__13->SetMaximum(1521.532);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,90);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(760.7658);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,9.89446);
   hbadmatch_stack_1->SetBinContent(2,5.655863);
   hbadmatch_stack_1->SetBinContent(3,6.060511);
   hbadmatch_stack_1->SetBinContent(4,5.980341);
   hbadmatch_stack_1->SetBinContent(5,4.353176);
   hbadmatch_stack_1->SetBinContent(6,3.636513);
   hbadmatch_stack_1->SetBinContent(7,4.167106);
   hbadmatch_stack_1->SetBinContent(8,2.17484);
   hbadmatch_stack_1->SetBinContent(9,3.390424);
   hbadmatch_stack_1->SetBinContent(10,3.192097);
   hbadmatch_stack_1->SetBinContent(11,4.036056);
   hbadmatch_stack_1->SetBinContent(12,5.567933);
   hbadmatch_stack_1->SetBinContent(13,0.8123583);
   hbadmatch_stack_1->SetBinContent(14,1.286221);
   hbadmatch_stack_1->SetBinContent(15,2.303643);
   hbadmatch_stack_1->SetBinContent(16,1.787544);
   hbadmatch_stack_1->SetBinContent(17,1.404241);
   hbadmatch_stack_1->SetBinContent(18,1.636648);
   hbadmatch_stack_1->SetBinContent(19,1.152365);
   hbadmatch_stack_1->SetBinContent(20,1.642413);
   hbadmatch_stack_1->SetBinContent(21,0.9835768);
   hbadmatch_stack_1->SetBinContent(22,1.438036);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.6367154);
   hbadmatch_stack_1->SetBinContent(25,8.190277);
   hbadmatch_stack_1->SetBinError(1,1.616681);
   hbadmatch_stack_1->SetBinError(2,1.262474);
   hbadmatch_stack_1->SetBinError(3,1.257628);
   hbadmatch_stack_1->SetBinError(4,1.236836);
   hbadmatch_stack_1->SetBinError(5,1.032899);
   hbadmatch_stack_1->SetBinError(6,0.9357497);
   hbadmatch_stack_1->SetBinError(7,1.014178);
   hbadmatch_stack_1->SetBinError(8,0.8022626);
   hbadmatch_stack_1->SetBinError(9,1.391749);
   hbadmatch_stack_1->SetBinError(10,0.9481586);
   hbadmatch_stack_1->SetBinError(11,1.193239);
   hbadmatch_stack_1->SetBinError(12,2.203098);
   hbadmatch_stack_1->SetBinError(13,0.4068918);
   hbadmatch_stack_1->SetBinError(14,0.66147);
   hbadmatch_stack_1->SetBinError(15,0.7504316);
   hbadmatch_stack_1->SetBinError(16,0.7102309);
   hbadmatch_stack_1->SetBinError(17,0.6092665);
   hbadmatch_stack_1->SetBinError(18,0.6357658);
   hbadmatch_stack_1->SetBinError(19,0.6044849);
   hbadmatch_stack_1->SetBinError(20,0.7752115);
   hbadmatch_stack_1->SetBinError(21,0.4398689);
   hbadmatch_stack_1->SetBinError(22,0.7004578);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3697897);
   hbadmatch_stack_1->SetBinError(25,1.502843);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,70.60443);
   hext_stack_2->SetBinContent(2,19.30152);
   hext_stack_2->SetBinContent(3,20.7751);
   hext_stack_2->SetBinContent(4,12.94604);
   hext_stack_2->SetBinContent(5,16.07909);
   hext_stack_2->SetBinContent(6,14.90842);
   hext_stack_2->SetBinContent(7,15.13185);
   hext_stack_2->SetBinContent(8,10.00051);
   hext_stack_2->SetBinContent(9,8.816616);
   hext_stack_2->SetBinContent(10,8.221301);
   hext_stack_2->SetBinContent(11,10.0783);
   hext_stack_2->SetBinContent(12,15.94221);
   hext_stack_2->SetBinContent(13,13.21135);
   hext_stack_2->SetBinContent(14,5.669206);
   hext_stack_2->SetBinContent(15,2.923985);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,1.621987);
   hext_stack_2->SetBinContent(19,2.517386);
   hext_stack_2->SetBinContent(20,5.807659);
   hext_stack_2->SetBinContent(22,1.704188);
   hext_stack_2->SetBinContent(23,2.973055);
   hext_stack_2->SetBinContent(24,0.9660115);
   hext_stack_2->SetBinContent(25,14.58239);
   hext_stack_2->SetBinError(1,6.006332);
   hext_stack_2->SetBinError(2,3.045475);
   hext_stack_2->SetBinError(3,3.122491);
   hext_stack_2->SetBinError(4,2.412866);
   hext_stack_2->SetBinError(5,2.760249);
   hext_stack_2->SetBinError(6,2.553892);
   hext_stack_2->SetBinError(7,2.614343);
   hext_stack_2->SetBinError(8,2.311558);
   hext_stack_2->SetBinError(9,1.95993);
   hext_stack_2->SetBinError(10,2.120319);
   hext_stack_2->SetBinError(11,2.295271);
   hext_stack_2->SetBinError(12,2.971897);
   hext_stack_2->SetBinError(13,2.658067);
   hext_stack_2->SetBinError(14,1.564185);
   hext_stack_2->SetBinError(15,1.040301);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.7253745);
   hext_stack_2->SetBinError(19,0.9575503);
   hext_stack_2->SetBinError(20,1.742221);
   hext_stack_2->SetBinError(22,0.7656743);
   hext_stack_2->SetBinError(23,1.346105);
   hext_stack_2->SetBinError(24,0.7189592);
   hext_stack_2->SetBinError(25,2.438378);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,4.845615);
   hdirt_stack_3->SetBinContent(2,0.9579741);
   hdirt_stack_3->SetBinContent(3,0.7895714);
   hdirt_stack_3->SetBinContent(4,0.3840755);
   hdirt_stack_3->SetBinContent(5,0.7148321);
   hdirt_stack_3->SetBinContent(6,1.519078);
   hdirt_stack_3->SetBinContent(7,0.4403464);
   hdirt_stack_3->SetBinContent(8,0.2761429);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.3405387);
   hdirt_stack_3->SetBinContent(11,1.176084);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.6565575);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.2620035);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,2.263315);
   hdirt_stack_3->SetBinError(1,1.435364);
   hdirt_stack_3->SetBinError(2,0.5004237);
   hdirt_stack_3->SetBinError(3,0.3599815);
   hdirt_stack_3->SetBinError(4,0.2742256);
   hdirt_stack_3->SetBinError(5,0.3615969);
   hdirt_stack_3->SetBinError(6,0.6989462);
   hdirt_stack_3->SetBinError(7,0.3095757);
   hdirt_stack_3->SetBinError(8,0.1952625);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3381954);
   hdirt_stack_3->SetBinError(11,0.5458267);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(14,0.384026);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(17,0.2620035);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.7647694);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,39.24886);
   houtFV_stack_4->SetBinContent(2,17.2892);
   houtFV_stack_4->SetBinContent(3,17.89931);
   houtFV_stack_4->SetBinContent(4,12.91808);
   houtFV_stack_4->SetBinContent(5,19.34484);
   houtFV_stack_4->SetBinContent(6,16.64901);
   houtFV_stack_4->SetBinContent(7,12.94039);
   houtFV_stack_4->SetBinContent(8,11.91824);
   houtFV_stack_4->SetBinContent(9,6.513918);
   houtFV_stack_4->SetBinContent(10,8.207092);
   houtFV_stack_4->SetBinContent(11,8.694495);
   houtFV_stack_4->SetBinContent(12,5.424232);
   houtFV_stack_4->SetBinContent(13,4.878631);
   houtFV_stack_4->SetBinContent(14,4.647115);
   houtFV_stack_4->SetBinContent(15,2.929362);
   houtFV_stack_4->SetBinContent(16,4.227888);
   houtFV_stack_4->SetBinContent(17,1.855576);
   houtFV_stack_4->SetBinContent(18,2.194063);
   houtFV_stack_4->SetBinContent(19,2.343667);
   houtFV_stack_4->SetBinContent(20,1.853885);
   houtFV_stack_4->SetBinContent(21,0.9269427);
   houtFV_stack_4->SetBinContent(22,1.073786);
   houtFV_stack_4->SetBinContent(23,0.7834804);
   houtFV_stack_4->SetBinContent(24,1.458599);
   houtFV_stack_4->SetBinContent(25,10.14721);
   houtFV_stack_4->SetBinError(1,3.126498);
   houtFV_stack_4->SetBinError(2,2.073069);
   houtFV_stack_4->SetBinError(3,2.131183);
   houtFV_stack_4->SetBinError(4,1.731895);
   houtFV_stack_4->SetBinError(5,2.216568);
   houtFV_stack_4->SetBinError(6,2.067316);
   houtFV_stack_4->SetBinError(7,1.773729);
   houtFV_stack_4->SetBinError(8,1.784448);
   houtFV_stack_4->SetBinError(9,1.258904);
   houtFV_stack_4->SetBinError(10,1.43583);
   houtFV_stack_4->SetBinError(11,1.481466);
   houtFV_stack_4->SetBinError(12,1.211067);
   houtFV_stack_4->SetBinError(13,1.128261);
   houtFV_stack_4->SetBinError(14,1.040072);
   houtFV_stack_4->SetBinError(15,0.8777653);
   houtFV_stack_4->SetBinError(16,1.099721);
   houtFV_stack_4->SetBinError(17,0.6794384);
   houtFV_stack_4->SetBinError(18,0.7594044);
   houtFV_stack_4->SetBinError(19,0.7820412);
   houtFV_stack_4->SetBinError(20,0.6789509);
   houtFV_stack_4->SetBinError(21,0.4800908);
   houtFV_stack_4->SetBinError(22,0.5557297);
   houtFV_stack_4->SetBinError(23,0.3917439);
   houtFV_stack_4->SetBinError(24,0.6531069);
   houtFV_stack_4->SetBinError(25,1.606774);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.257748);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5430539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.464003);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1881969);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.46733);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.329662);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.325254);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.924276);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.421908);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.228272);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.00424);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4630232);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5308387);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3305127);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4230513);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3635961);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4065534);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3610006);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3738879);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07891307);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,279.0903);
   hNCpi0inFVres_stack_7->SetBinContent(2,182.9326);
   hNCpi0inFVres_stack_7->SetBinContent(3,159.7311);
   hNCpi0inFVres_stack_7->SetBinContent(4,142.5127);
   hNCpi0inFVres_stack_7->SetBinContent(5,118.4122);
   hNCpi0inFVres_stack_7->SetBinContent(6,96.16388);
   hNCpi0inFVres_stack_7->SetBinContent(7,85.47949);
   hNCpi0inFVres_stack_7->SetBinContent(8,62.10814);
   hNCpi0inFVres_stack_7->SetBinContent(9,54.80927);
   hNCpi0inFVres_stack_7->SetBinContent(10,45.46372);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.40634);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.99172);
   hNCpi0inFVres_stack_7->SetBinContent(13,25.68654);
   hNCpi0inFVres_stack_7->SetBinContent(14,21.99027);
   hNCpi0inFVres_stack_7->SetBinContent(15,18.83939);
   hNCpi0inFVres_stack_7->SetBinContent(16,14.12759);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.54276);
   hNCpi0inFVres_stack_7->SetBinContent(18,10.49875);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.58212);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.129903);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.998532);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.676014);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.501134);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.287312);
   hNCpi0inFVres_stack_7->SetBinContent(25,27.67145);
   hNCpi0inFVres_stack_7->SetBinError(1,5.516029);
   hNCpi0inFVres_stack_7->SetBinError(2,4.434655);
   hNCpi0inFVres_stack_7->SetBinError(3,4.116193);
   hNCpi0inFVres_stack_7->SetBinError(4,3.93256);
   hNCpi0inFVres_stack_7->SetBinError(5,3.594091);
   hNCpi0inFVres_stack_7->SetBinError(6,3.177047);
   hNCpi0inFVres_stack_7->SetBinError(7,3.024349);
   hNCpi0inFVres_stack_7->SetBinError(8,2.559166);
   hNCpi0inFVres_stack_7->SetBinError(9,2.414204);
   hNCpi0inFVres_stack_7->SetBinError(10,2.180016);
   hNCpi0inFVres_stack_7->SetBinError(11,2.042681);
   hNCpi0inFVres_stack_7->SetBinError(12,1.904843);
   hNCpi0inFVres_stack_7->SetBinError(13,1.658892);
   hNCpi0inFVres_stack_7->SetBinError(14,1.544584);
   hNCpi0inFVres_stack_7->SetBinError(15,1.442225);
   hNCpi0inFVres_stack_7->SetBinError(16,1.203085);
   hNCpi0inFVres_stack_7->SetBinError(17,1.09367);
   hNCpi0inFVres_stack_7->SetBinError(18,1.063203);
   hNCpi0inFVres_stack_7->SetBinError(19,1.100794);
   hNCpi0inFVres_stack_7->SetBinError(20,1.00512);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8634069);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7910267);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6272906);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5045885);
   hNCpi0inFVres_stack_7->SetBinError(25,1.777588);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,60.38629);
   hNCpi0inFVdis_stack_8->SetBinContent(2,31.65469);
   hNCpi0inFVdis_stack_8->SetBinContent(3,29.93665);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.52638);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.21131);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.08741);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.24707);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.24965);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.08307);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.738957);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.761042);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.291062);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.88194);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.736288);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.498806);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.85072);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.36594);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.021594);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.92278);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.115504);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.57353);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8908078);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.115008);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.244383);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.502314);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.892973);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.78378);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.800503);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.549092);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.44436);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.145468);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.248153);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.047623);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8884377);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.775289);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8781193);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7916822);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.606897);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.607004);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7033875);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.312868);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4341005);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4161718);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.278187);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.370751);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2557093);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3516243);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6450825);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,99.78502);
   hCCpi0inFV_stack_10->SetBinContent(2,52.92733);
   hCCpi0inFV_stack_10->SetBinContent(3,55.49665);
   hCCpi0inFV_stack_10->SetBinContent(4,46.59619);
   hCCpi0inFV_stack_10->SetBinContent(5,38.37667);
   hCCpi0inFV_stack_10->SetBinContent(6,39.04086);
   hCCpi0inFV_stack_10->SetBinContent(7,31.24098);
   hCCpi0inFV_stack_10->SetBinContent(8,25.09515);
   hCCpi0inFV_stack_10->SetBinContent(9,16.57133);
   hCCpi0inFV_stack_10->SetBinContent(10,15.64849);
   hCCpi0inFV_stack_10->SetBinContent(11,13.9481);
   hCCpi0inFV_stack_10->SetBinContent(12,12.25152);
   hCCpi0inFV_stack_10->SetBinContent(13,8.181252);
   hCCpi0inFV_stack_10->SetBinContent(14,10.3635);
   hCCpi0inFV_stack_10->SetBinContent(15,6.875961);
   hCCpi0inFV_stack_10->SetBinContent(16,6.291196);
   hCCpi0inFV_stack_10->SetBinContent(17,4.242095);
   hCCpi0inFV_stack_10->SetBinContent(18,4.641712);
   hCCpi0inFV_stack_10->SetBinContent(19,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(20,4.2996);
   hCCpi0inFV_stack_10->SetBinContent(21,2.726517);
   hCCpi0inFV_stack_10->SetBinContent(22,1.371936);
   hCCpi0inFV_stack_10->SetBinContent(23,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(24,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(25,14.40172);
   hCCpi0inFV_stack_10->SetBinError(1,5.047159);
   hCCpi0inFV_stack_10->SetBinError(2,3.640345);
   hCCpi0inFV_stack_10->SetBinError(3,3.805167);
   hCCpi0inFV_stack_10->SetBinError(4,3.390172);
   hCCpi0inFV_stack_10->SetBinError(5,3.083581);
   hCCpi0inFV_stack_10->SetBinError(6,3.142146);
   hCCpi0inFV_stack_10->SetBinError(7,2.793622);
   hCCpi0inFV_stack_10->SetBinError(8,2.528819);
   hCCpi0inFV_stack_10->SetBinError(9,1.97105);
   hCCpi0inFV_stack_10->SetBinError(10,1.964602);
   hCCpi0inFV_stack_10->SetBinError(11,1.880345);
   hCCpi0inFV_stack_10->SetBinError(12,1.777578);
   hCCpi0inFV_stack_10->SetBinError(13,1.413629);
   hCCpi0inFV_stack_10->SetBinError(14,1.619152);
   hCCpi0inFV_stack_10->SetBinError(15,1.322467);
   hCCpi0inFV_stack_10->SetBinError(16,1.278657);
   hCCpi0inFV_stack_10->SetBinError(17,0.9680771);
   hCCpi0inFV_stack_10->SetBinError(18,1.147064);
   hCCpi0inFV_stack_10->SetBinError(19,0.89917);
   hCCpi0inFV_stack_10->SetBinError(20,1.093102);
   hCCpi0inFV_stack_10->SetBinError(21,0.808186);
   hCCpi0inFV_stack_10->SetBinError(22,0.5185478);
   hCCpi0inFV_stack_10->SetBinError(23,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(24,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(25,1.936736);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,58.9757);
   hNCinFV_stack_11->SetBinContent(2,32.89221);
   hNCinFV_stack_11->SetBinContent(3,26.39178);
   hNCinFV_stack_11->SetBinContent(4,20.91357);
   hNCinFV_stack_11->SetBinContent(5,19.93507);
   hNCinFV_stack_11->SetBinContent(6,16.91042);
   hNCinFV_stack_11->SetBinContent(7,15.28176);
   hNCinFV_stack_11->SetBinContent(8,10.55345);
   hNCinFV_stack_11->SetBinContent(9,8.941083);
   hNCinFV_stack_11->SetBinContent(10,8.488245);
   hNCinFV_stack_11->SetBinContent(11,10.1936);
   hNCinFV_stack_11->SetBinContent(12,5.718642);
   hNCinFV_stack_11->SetBinContent(13,5.278113);
   hNCinFV_stack_11->SetBinContent(14,3.17764);
   hNCinFV_stack_11->SetBinContent(15,3.806432);
   hNCinFV_stack_11->SetBinContent(16,2.39585);
   hNCinFV_stack_11->SetBinContent(17,2.929362);
   hNCinFV_stack_11->SetBinContent(18,2.892406);
   hNCinFV_stack_11->SetBinContent(19,2.247316);
   hNCinFV_stack_11->SetBinContent(20,2.587494);
   hNCinFV_stack_11->SetBinContent(21,2.192832);
   hNCinFV_stack_11->SetBinContent(22,0.785171);
   hNCinFV_stack_11->SetBinContent(23,0.3934307);
   hNCinFV_stack_11->SetBinContent(24,1.413964);
   hNCinFV_stack_11->SetBinContent(25,12.55418);
   hNCinFV_stack_11->SetBinError(1,3.840641);
   hNCinFV_stack_11->SetBinError(2,2.857673);
   hNCinFV_stack_11->SetBinError(3,2.558955);
   hNCinFV_stack_11->SetBinError(4,2.297397);
   hNCinFV_stack_11->SetBinError(5,2.255334);
   hNCinFV_stack_11->SetBinError(6,2.049079);
   hNCinFV_stack_11->SetBinError(7,1.981619);
   hNCinFV_stack_11->SetBinError(8,1.630246);
   hNCinFV_stack_11->SetBinError(9,1.481144);
   hNCinFV_stack_11->SetBinError(10,1.533198);
   hNCinFV_stack_11->SetBinError(11,1.653076);
   hNCinFV_stack_11->SetBinError(12,1.210473);
   hNCinFV_stack_11->SetBinError(13,1.109144);
   hNCinFV_stack_11->SetBinError(14,0.8775989);
   hNCinFV_stack_11->SetBinError(15,1.020103);
   hNCinFV_stack_11->SetBinError(16,0.7857345);
   hNCinFV_stack_11->SetBinError(17,0.8777653);
   hNCinFV_stack_11->SetBinError(18,0.7853625);
   hNCinFV_stack_11->SetBinError(19,0.7337357);
   hNCinFV_stack_11->SetBinError(20,0.8087577);
   hNCinFV_stack_11->SetBinError(21,0.786901);
   hNCinFV_stack_11->SetBinError(22,0.3925882);
   hNCinFV_stack_11->SetBinError(23,0.2781975);
   hNCinFV_stack_11->SetBinError(24,0.6515799);
   hNCinFV_stack_11->SetBinError(25,1.788022);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,84.62587);
   hnumuCCinFV_stack_12->SetBinContent(2,53.73147);
   hnumuCCinFV_stack_12->SetBinContent(3,43.03331);
   hnumuCCinFV_stack_12->SetBinContent(4,29.73772);
   hnumuCCinFV_stack_12->SetBinContent(5,30.2842);
   hnumuCCinFV_stack_12->SetBinContent(6,19.92786);
   hnumuCCinFV_stack_12->SetBinContent(7,11.9785);
   hnumuCCinFV_stack_12->SetBinContent(8,15.04422);
   hnumuCCinFV_stack_12->SetBinContent(9,11.25824);
   hnumuCCinFV_stack_12->SetBinContent(10,8.550129);
   hnumuCCinFV_stack_12->SetBinContent(11,6.047053);
   hnumuCCinFV_stack_12->SetBinContent(12,7.986611);
   hnumuCCinFV_stack_12->SetBinContent(13,5.948163);
   hnumuCCinFV_stack_12->SetBinContent(14,6.130482);
   hnumuCCinFV_stack_12->SetBinContent(15,5.260939);
   hnumuCCinFV_stack_12->SetBinContent(16,3.808116);
   hnumuCCinFV_stack_12->SetBinContent(17,3.63553);
   hnumuCCinFV_stack_12->SetBinContent(18,1.773799);
   hnumuCCinFV_stack_12->SetBinContent(19,3.880924);
   hnumuCCinFV_stack_12->SetBinContent(20,2.106865);
   hnumuCCinFV_stack_12->SetBinContent(21,2.966053);
   hnumuCCinFV_stack_12->SetBinContent(22,2.577798);
   hnumuCCinFV_stack_12->SetBinContent(23,2.768807);
   hnumuCCinFV_stack_12->SetBinContent(24,1.827275);
   hnumuCCinFV_stack_12->SetBinContent(25,21.81536);
   hnumuCCinFV_stack_12->SetBinError(1,5.422164);
   hnumuCCinFV_stack_12->SetBinError(2,4.478622);
   hnumuCCinFV_stack_12->SetBinError(3,4.534907);
   hnumuCCinFV_stack_12->SetBinError(4,2.912352);
   hnumuCCinFV_stack_12->SetBinError(5,3.36479);
   hnumuCCinFV_stack_12->SetBinError(6,2.723795);
   hnumuCCinFV_stack_12->SetBinError(7,1.757825);
   hnumuCCinFV_stack_12->SetBinError(8,2.222737);
   hnumuCCinFV_stack_12->SetBinError(9,1.83389);
   hnumuCCinFV_stack_12->SetBinError(10,1.491286);
   hnumuCCinFV_stack_12->SetBinError(11,1.219161);
   hnumuCCinFV_stack_12->SetBinError(12,1.476461);
   hnumuCCinFV_stack_12->SetBinError(13,1.256624);
   hnumuCCinFV_stack_12->SetBinError(14,1.260334);
   hnumuCCinFV_stack_12->SetBinError(15,1.219445);
   hnumuCCinFV_stack_12->SetBinError(16,1.023471);
   hnumuCCinFV_stack_12->SetBinError(17,1.00932);
   hnumuCCinFV_stack_12->SetBinError(18,0.6886283);
   hnumuCCinFV_stack_12->SetBinError(19,1.092679);
   hnumuCCinFV_stack_12->SetBinError(20,0.7692799);
   hnumuCCinFV_stack_12->SetBinError(21,0.8797956);
   hnumuCCinFV_stack_12->SetBinError(22,0.9459835);
   hnumuCCinFV_stack_12->SetBinError(23,0.909257);
   hnumuCCinFV_stack_12->SetBinError(24,0.7445908);
   hnumuCCinFV_stack_12->SetBinError(25,2.530227);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,12.27352);
   hnueCCinFV_stack_13->SetBinContent(2,1.683206);
   hnueCCinFV_stack_13->SetBinContent(3,1.72117);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(8,0.6106752);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(13,1.352455);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,0.3897057);
   hnueCCinFV_stack_13->SetBinError(1,2.297795);
   hnueCCinFV_stack_13->SetBinError(2,0.8099744);
   hnueCCinFV_stack_13->SetBinError(3,0.6715063);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.3160204);
   hnueCCinFV_stack_13->SetBinError(8,0.4583227);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4243666);
   hnueCCinFV_stack_13->SetBinError(13,1.173746);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.3893381);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__14->SetBinContent(1,724.5388);
   hmcerror__14->SetBinContent(2,401.7601);
   hmcerror__14->SetBinContent(3,363.6621);
   hmcerror__14->SetBinContent(4,303.3506);
   hmcerror__14->SetBinContent(5,272.1075);
   hmcerror__14->SetBinContent(6,230.4067);
   hmcerror__14->SetBinContent(7,191.5112);
   hmcerror__14->SetBinContent(8,153.5087);
   hmcerror__14->SetBinContent(9,121.5706);
   hmcerror__14->SetBinContent(10,106.8412);
   hmcerror__14->SetBinContent(11,99.62447);
   hmcerror__14->SetBinContent(12,94.77147);
   hmcerror__14->SetBinContent(13,71.84411);
   hmcerror__14->SetBinContent(14,57.74098);
   hmcerror__14->SetBinContent(15,47.32508);
   hmcerror__14->SetBinContent(16,37.31871);
   hmcerror__14->SetBinContent(17,27.99353);
   hmcerror__14->SetBinContent(18,27.56012);
   hmcerror__14->SetBinContent(19,28.1745);
   hmcerror__14->SetBinContent(20,27.62702);
   hmcerror__14->SetBinContent(21,17.61881);
   hmcerror__14->SetBinContent(22,15.60144);
   hmcerror__14->SetBinContent(23,13.10641);
   hmcerror__14->SetBinContent(24,10.47756);
   hmcerror__14->SetBinContent(25,117.6642);
   hmcerror__14->SetBinError(1,214.6169);
   hmcerror__14->SetBinError(2,145.2409);
   hmcerror__14->SetBinError(3,127.3978);
   hmcerror__14->SetBinError(4,120.3194);
   hmcerror__14->SetBinError(5,96.37667);
   hmcerror__14->SetBinError(6,80.99754);
   hmcerror__14->SetBinError(7,68.94365);
   hmcerror__14->SetBinError(8,54.24532);
   hmcerror__14->SetBinError(9,48.02656);
   hmcerror__14->SetBinError(10,41.24466);
   hmcerror__14->SetBinError(11,34.48927);
   hmcerror__14->SetBinError(12,31.11143);
   hmcerror__14->SetBinError(13,27.29068);
   hmcerror__14->SetBinError(14,25.12384);
   hmcerror__14->SetBinError(15,29.66867);
   hmcerror__14->SetBinError(16,17.31938);
   hmcerror__14->SetBinError(17,11.99991);
   hmcerror__14->SetBinError(18,12.28793);
   hmcerror__14->SetBinError(19,13.47894);
   hmcerror__14->SetBinError(20,16.14073);
   hmcerror__14->SetBinError(21,11.96831);
   hmcerror__14->SetBinError(22,8.998206);
   hmcerror__14->SetBinError(23,8.84052);
   hmcerror__14->SetBinError(24,10.69954);
   hmcerror__14->SetBinError(25,40.39918);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3017[24] = {
   500,
   279,
   279,
   233,
   207,
   181,
   159,
   120,
   87,
   78,
   70,
   69,
   49,
   41,
   31,
   43,
   20,
   28,
   17,
   16,
   16,
   8,
   10,
   5};
   Double_t _felx3017[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3017[24] = {
   22.36068,
   16.70329,
   16.70329,
   15.26434,
   14.38749,
   13.45362,
   12.60952,
   10.95445,
   9.4503,
   8.9562,
   8.4925,
   8.4327,
   7.1318,
   6.5384,
   5.7094,
   6.6917,
   4.6266,
   5.4358,
   4.2835,
   4.1628,
   4.1628,
   3.0307,
   3.34883,
   2.48995};
   Double_t _fehx3017[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3017[24] = {
   22.36068,
   16.70329,
   16.70329,
   15.26434,
   14.38749,
   13.45362,
   12.60952,
   10.95445,
   9.2488,
   8.7542,
   8.2902,
   8.2304,
   6.9277,
   6.3331,
   5.5017,
   6.4868,
   4.4133,
   5.2271,
   4.0673,
   3.9454,
   3.9454,
   2.7896,
   3.1179,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,99);
   Graph_Graph3017->SetMinimum(2.259045);
   Graph_Graph3017->SetMaximum(574.3457);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("","BNB Data, 2546.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 73.4","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 262.3","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 13.7","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 206.2","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.5","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1436.0","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  278.5","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.5","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 265.3","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 364.9","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.0","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3018[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3018[24] = {
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
   Double_t _felx3018[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3018[24] = {
   0.2962118,
   0.3615117,
   0.3503191,
   0.3966348,
   0.354186,
   0.3515416,
   0.3599979,
   0.3533696,
   0.3950507,
   0.3860371,
   0.3461927,
   0.3282784,
   0.3798596,
   0.4351128,
   0.6269122,
   0.4640936,
   0.4286673,
   0.4458591,
   0.4784094,
   0.5842369,
   0.6792915,
   0.576755,
   0.6745188,
   1.021186};
   Double_t _fehx3018[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3018[24] = {
   0.2962118,
   0.3615117,
   0.3503191,
   0.3966348,
   0.354186,
   0.3515416,
   0.3599979,
   0.3533696,
   0.3950507,
   0.3860371,
   0.3461927,
   0.3282784,
   0.3798596,
   0.4351128,
   0.6269122,
   0.4640936,
   0.4286673,
   0.4458591,
   0.4784094,
   0.5842369,
   0.6792915,
   0.576755,
   0.6745188,
   1.021186};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,99);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3019[24] = {
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
   Double_t _felx3019[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3019[24] = {
   0.2861218,
   0.3469365,
   0.336373,
   0.3524218,
   0.3349925,
   0.3296822,
   0.3269696,
   0.3195995,
   0.3239348,
   0.3213877,
   0.3095957,
   0.273117,
   0.2890717,
   0.2854049,
   0.3150819,
   0.3305244,
   0.2897859,
   0.3169126,
   0.2719621,
   0.2589653,
   0.3145988,
   0.2820335,
   0.270274,
   0.2967196};
   Double_t _fehx3019[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3019[24] = {
   0.2861218,
   0.3469365,
   0.336373,
   0.3524218,
   0.3349925,
   0.3296822,
   0.3269696,
   0.3195995,
   0.3239348,
   0.3213877,
   0.3095957,
   0.273117,
   0.2890717,
   0.2854049,
   0.3150819,
   0.3305244,
   0.2897859,
   0.3169126,
   0.2719621,
   0.2589653,
   0.3145988,
   0.2820335,
   0.270274,
   0.2967196};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,99);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3020[24] = {
   0.6900942,
   0.6944443,
   0.7671957,
   0.7680883,
   0.7607288,
   0.7855674,
   0.8302385,
   0.7817144,
   0.7156334,
   0.7300554,
   0.7026386,
   0.7280672,
   0.6820323,
   0.7100676,
   0.6550437,
   1.152237,
   0.7144507,
   1.015961,
   0.6033826,
   0.5791431,
   0.9081205,
   0.5127733,
   0.7629855,
   0.4772102};
   Double_t _felx3020[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3020[24] = {
   0.03086195,
   0.04157529,
   0.0459308,
   0.05031913,
   0.05287431,
   0.05839076,
   0.0658422,
   0.07136044,
   0.07773507,
   0.08382721,
   0.08524512,
   0.08897931,
   0.09926771,
   0.1132367,
   0.1206422,
   0.1793122,
   0.1652739,
   0.1972342,
   0.1520347,
   0.1506786,
   0.2362703,
   0.1942578,
   0.2555109,
   0.2376459};
   Double_t _fehx3020[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3020[24] = {
   0.03086195,
   0.04157529,
   0.0459308,
   0.05031913,
   0.05287431,
   0.05839076,
   0.0658422,
   0.07136044,
   0.07607759,
   0.08193655,
   0.08321449,
   0.0868447,
   0.09642683,
   0.1096812,
   0.1162534,
   0.1738217,
   0.1576543,
   0.1896617,
   0.1443611,
   0.1428094,
   0.2239312,
   0.1788041,
   0.2378912,
   0.210988};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,99);
   Graph_Graph3020->SetMinimum(0.1309149);
   Graph_Graph3020->SetMaximum(1.434708);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
