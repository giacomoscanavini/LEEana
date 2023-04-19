#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 11:38:30 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
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
   pad1->Range(-92.30769,-1.660443,676.9231,183.6101);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__25->SetBinContent(1,2.522798);
   hmc__25->SetBinContent(2,14.28007);
   hmc__25->SetBinContent(3,38.81266);
   hmc__25->SetBinContent(4,64.99147);
   hmc__25->SetBinContent(5,83.02216);
   hmc__25->SetBinContent(6,77.21088);
   hmc__25->SetBinContent(7,74.55646);
   hmc__25->SetBinContent(8,59.61069);
   hmc__25->SetBinContent(9,44.2521);
   hmc__25->SetBinContent(10,40.78765);
   hmc__25->SetBinContent(11,36.82753);
   hmc__25->SetBinContent(12,27.18493);
   hmc__25->SetBinContent(13,23.76918);
   hmc__25->SetBinContent(14,22.44431);
   hmc__25->SetBinContent(15,16.22196);
   hmc__25->SetBinContent(16,11.395);
   hmc__25->SetBinContent(17,12.02899);
   hmc__25->SetBinContent(18,8.530832);
   hmc__25->SetBinContent(19,8.778996);
   hmc__25->SetBinContent(20,5.026582);
   hmc__25->SetBinContent(21,2.619252);
   hmc__25->SetBinContent(22,2.665846);
   hmc__25->SetBinContent(23,3.072971);
   hmc__25->SetBinContent(24,3.453224);
   hmc__25->SetBinContent(25,36.99107);
   hmc__25->SetBinError(1,6.924557);
   hmc__25->SetBinError(2,7.345324);
   hmc__25->SetBinError(3,18.50282);
   hmc__25->SetBinError(4,21.90896);
   hmc__25->SetBinError(5,29.60471);
   hmc__25->SetBinError(6,29.2327);
   hmc__25->SetBinError(7,29.59457);
   hmc__25->SetBinError(8,22.33899);
   hmc__25->SetBinError(9,21.21004);
   hmc__25->SetBinError(10,17.14017);
   hmc__25->SetBinError(11,15.70678);
   hmc__25->SetBinError(12,16.46413);
   hmc__25->SetBinError(13,10.32288);
   hmc__25->SetBinError(14,15.76093);
   hmc__25->SetBinError(15,13.91431);
   hmc__25->SetBinError(16,6.758211);
   hmc__25->SetBinError(17,10.85733);
   hmc__25->SetBinError(18,9.559044);
   hmc__25->SetBinError(19,10.84263);
   hmc__25->SetBinError(20,4.053285);
   hmc__25->SetBinError(21,6.769557);
   hmc__25->SetBinError(22,3.190639);
   hmc__25->SetBinError(23,4.780857);
   hmc__25->SetBinError(24,5.642962);
   hmc__25->SetBinError(25,23.56205);
   hmc__25->SetMinimum(-1.660443);
   hmc__25->SetMaximum(174.3465);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,600);
   hs9_stack_9->SetMinimum(-1.281244e-08);
   hs9_stack_9->SetMaximum(87.17326);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.819324);
   hbadmatch_stack_1->SetBinContent(4,2.592565);
   hbadmatch_stack_1->SetBinContent(5,3.231193);
   hbadmatch_stack_1->SetBinContent(6,2.282884);
   hbadmatch_stack_1->SetBinContent(7,3.419234);
   hbadmatch_stack_1->SetBinContent(8,3.286657);
   hbadmatch_stack_1->SetBinContent(9,1.01866);
   hbadmatch_stack_1->SetBinContent(10,0.7336084);
   hbadmatch_stack_1->SetBinContent(12,1.092123);
   hbadmatch_stack_1->SetBinContent(13,0.2193965);
   hbadmatch_stack_1->SetBinContent(14,1.111874);
   hbadmatch_stack_1->SetBinContent(15,0.7607957);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.6360607);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.7205595);
   hbadmatch_stack_1->SetBinError(4,0.809985);
   hbadmatch_stack_1->SetBinError(5,0.8902357);
   hbadmatch_stack_1->SetBinError(6,0.8003354);
   hbadmatch_stack_1->SetBinError(7,0.9104219);
   hbadmatch_stack_1->SetBinError(8,0.8981146);
   hbadmatch_stack_1->SetBinError(9,0.5202509);
   hbadmatch_stack_1->SetBinError(10,0.4394482);
   hbadmatch_stack_1->SetBinError(12,0.5624822);
   hbadmatch_stack_1->SetBinError(13,0.2193965);
   hbadmatch_stack_1->SetBinError(14,0.6803134);
   hbadmatch_stack_1->SetBinError(15,0.4522722);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.4822316);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,5.173224);
   hext_stack_2->SetBinContent(3,6.691468);
   hext_stack_2->SetBinContent(4,9.02291);
   hext_stack_2->SetBinContent(5,9.03009);
   hext_stack_2->SetBinContent(6,9.768267);
   hext_stack_2->SetBinContent(7,6.165187);
   hext_stack_2->SetBinContent(8,10.15332);
   hext_stack_2->SetBinContent(9,2.517386);
   hext_stack_2->SetBinContent(10,6.430502);
   hext_stack_2->SetBinContent(11,5.166044);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,4.912259);
   hext_stack_2->SetBinContent(14,1.461993);
   hext_stack_2->SetBinContent(15,0.8131978);
   hext_stack_2->SetBinContent(16,1.544194);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,6.221437);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.556427);
   hext_stack_2->SetBinError(3,1.868729);
   hext_stack_2->SetBinError(4,2.211894);
   hext_stack_2->SetBinError(5,2.165935);
   hext_stack_2->SetBinError(6,2.181887);
   hext_stack_2->SetBinError(7,1.571905);
   hext_stack_2->SetBinError(8,2.351501);
   hext_stack_2->SetBinError(9,0.9575503);
   hext_stack_2->SetBinError(10,1.927248);
   hext_stack_2->SetBinError(11,1.619774);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,1.626223);
   hext_stack_2->SetBinError(14,0.7356036);
   hext_stack_2->SetBinError(15,0.5750177);
   hext_stack_2->SetBinError(16,0.7753719);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,1.731894);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(4,1.067807);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.4762587);
   hdirt_stack_3->SetBinContent(7,0.4172728);
   hdirt_stack_3->SetBinContent(8,0.665001);
   hdirt_stack_3->SetBinContent(9,0.4289006);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.7135442);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(4,0.5663372);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3652866);
   hdirt_stack_3->SetBinError(7,0.4149279);
   hdirt_stack_3->SetBinError(8,0.3973583);
   hdirt_stack_3->SetBinError(9,0.4289006);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(12,0.4321644);
   hdirt_stack_3->SetBinError(15,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.7319179);
   houtFV_stack_4->SetBinContent(2,2.741033);
   houtFV_stack_4->SetBinContent(3,7.778679);
   houtFV_stack_4->SetBinContent(4,11.28044);
   houtFV_stack_4->SetBinContent(5,15.23303);
   houtFV_stack_4->SetBinContent(6,13.2973);
   houtFV_stack_4->SetBinContent(7,12.79546);
   houtFV_stack_4->SetBinContent(8,10.06225);
   houtFV_stack_4->SetBinContent(9,7.087197);
   houtFV_stack_4->SetBinContent(10,6.829572);
   houtFV_stack_4->SetBinContent(11,5.472459);
   houtFV_stack_4->SetBinContent(12,6.367183);
   houtFV_stack_4->SetBinContent(13,3.216443);
   houtFV_stack_4->SetBinContent(14,3.034178);
   houtFV_stack_4->SetBinContent(15,2.307292);
   houtFV_stack_4->SetBinContent(16,2.053982);
   houtFV_stack_4->SetBinContent(17,1.413964);
   houtFV_stack_4->SetBinContent(18,2.184155);
   houtFV_stack_4->SetBinContent(19,2.039708);
   houtFV_stack_4->SetBinContent(20,0.5352025);
   houtFV_stack_4->SetBinContent(21,0.7834804);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(24,0.5884556);
   houtFV_stack_4->SetBinContent(25,2.730956);
   houtFV_stack_4->SetBinError(1,0.438694);
   houtFV_stack_4->SetBinError(2,0.8243601);
   houtFV_stack_4->SetBinError(3,1.350298);
   houtFV_stack_4->SetBinError(4,1.669995);
   houtFV_stack_4->SetBinError(5,1.979513);
   houtFV_stack_4->SetBinError(6,1.861892);
   houtFV_stack_4->SetBinError(7,1.7482);
   houtFV_stack_4->SetBinError(8,1.64629);
   houtFV_stack_4->SetBinError(9,1.316363);
   houtFV_stack_4->SetBinError(10,1.322729);
   houtFV_stack_4->SetBinError(11,1.153037);
   houtFV_stack_4->SetBinError(12,1.243142);
   houtFV_stack_4->SetBinError(13,0.8871801);
   houtFV_stack_4->SetBinError(14,0.8325598);
   houtFV_stack_4->SetBinError(15,0.8513552);
   houtFV_stack_4->SetBinError(16,0.7078105);
   houtFV_stack_4->SetBinError(17,0.6515799);
   houtFV_stack_4->SetBinError(18,0.8515802);
   houtFV_stack_4->SetBinError(19,0.8055478);
   houtFV_stack_4->SetBinError(20,0.3921167);
   houtFV_stack_4->SetBinError(21,0.3917439);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(24,0.3397478);
   houtFV_stack_4->SetBinError(25,0.8550514);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2983287);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3485861);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.547294);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.233854);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.01091);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.98952);
   hNCpi0inFVres_stack_7->SetBinContent(6,19.82818);
   hNCpi0inFVres_stack_7->SetBinContent(7,17.82237);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.2121);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.37842);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.000931);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.916736);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.233182);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.453478);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.546892);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.90652);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.886166);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.466002);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.260412);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.506608);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.26979);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5717859);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.446568);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4321178);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.390768);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.652924);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2218905);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4185812);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8677908);
   hNCpi0inFVres_stack_7->SetBinError(4,1.133685);
   hNCpi0inFVres_stack_7->SetBinError(5,1.442045);
   hNCpi0inFVres_stack_7->SetBinError(6,1.463345);
   hNCpi0inFVres_stack_7->SetBinError(7,1.448061);
   hNCpi0inFVres_stack_7->SetBinError(8,1.092126);
   hNCpi0inFVres_stack_7->SetBinError(9,1.049725);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8181956);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8446067);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7886857);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7784621);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7356627);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7044933);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5399856);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4913002);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5530427);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4319288);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4161726);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2355051);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2126346);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1371558);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2089417);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6568916);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.21299);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.90128);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.806706);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.17704);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.621448);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.233256);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.95168);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.928852);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.678416);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.213822);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.197876);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.61904);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4879178);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4746361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.473804);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8368403);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.347352);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3458579);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5518093);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6550125);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4738254);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5267288);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5788319);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4753972);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6199052);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6031451);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3726713);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3266629);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4571021);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1427183);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2806257);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2438946);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3675891);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6292524);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(2,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(3,5.954185);
   hCCpi0inFV_stack_10->SetBinContent(4,9.444168);
   hCCpi0inFV_stack_10->SetBinContent(5,15.46782);
   hCCpi0inFV_stack_10->SetBinContent(6,13.59388);
   hCCpi0inFV_stack_10->SetBinContent(7,12.65528);
   hCCpi0inFV_stack_10->SetBinContent(8,8.838716);
   hCCpi0inFV_stack_10->SetBinContent(9,9.554333);
   hCCpi0inFV_stack_10->SetBinContent(10,8.981065);
   hCCpi0inFV_stack_10->SetBinContent(11,8.031797);
   hCCpi0inFV_stack_10->SetBinContent(12,5.224982);
   hCCpi0inFV_stack_10->SetBinContent(13,4.70205);
   hCCpi0inFV_stack_10->SetBinContent(14,4.69811);
   hCCpi0inFV_stack_10->SetBinContent(15,2.692309);
   hCCpi0inFV_stack_10->SetBinContent(16,2.461967);
   hCCpi0inFV_stack_10->SetBinContent(17,2.975853);
   hCCpi0inFV_stack_10->SetBinContent(18,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(19,1.947476);
   hCCpi0inFV_stack_10->SetBinContent(20,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(21,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(23,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(24,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(25,8.185011);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(2,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(3,1.257596);
   hCCpi0inFV_stack_10->SetBinError(4,1.497662);
   hCCpi0inFV_stack_10->SetBinError(5,1.89832);
   hCCpi0inFV_stack_10->SetBinError(6,1.901688);
   hCCpi0inFV_stack_10->SetBinError(7,1.783114);
   hCCpi0inFV_stack_10->SetBinError(8,1.525475);
   hCCpi0inFV_stack_10->SetBinError(9,1.661319);
   hCCpi0inFV_stack_10->SetBinError(10,1.486738);
   hCCpi0inFV_stack_10->SetBinError(11,1.432247);
   hCCpi0inFV_stack_10->SetBinError(12,1.153065);
   hCCpi0inFV_stack_10->SetBinError(13,0.9914352);
   hCCpi0inFV_stack_10->SetBinError(14,1.057394);
   hCCpi0inFV_stack_10->SetBinError(15,0.7594556);
   hCCpi0inFV_stack_10->SetBinError(16,0.8178591);
   hCCpi0inFV_stack_10->SetBinError(17,0.8541054);
   hCCpi0inFV_stack_10->SetBinError(18,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(19,0.7600326);
   hCCpi0inFV_stack_10->SetBinError(20,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(21,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(22,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(23,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(24,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(25,1.503501);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,1.317452);
   hNCinFV_stack_11->SetBinContent(4,3.074514);
   hNCinFV_stack_11->SetBinContent(5,2.640747);
   hNCinFV_stack_11->SetBinContent(6,3.912939);
   hNCinFV_stack_11->SetBinContent(7,3.469636);
   hNCinFV_stack_11->SetBinContent(8,2.931052);
   hNCinFV_stack_11->SetBinContent(9,2.342597);
   hNCinFV_stack_11->SetBinContent(10,1.125349);
   hNCinFV_stack_11->SetBinContent(11,2.633985);
   hNCinFV_stack_11->SetBinContent(12,1.513708);
   hNCinFV_stack_11->SetBinContent(13,0.536893);
   hNCinFV_stack_11->SetBinContent(14,1.517089);
   hNCinFV_stack_11->SetBinContent(15,2.535931);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,1.375317);
   hNCinFV_stack_11->SetBinContent(18,0.8770706);
   hNCinFV_stack_11->SetBinContent(19,0.5867651);
   hNCinFV_stack_11->SetBinContent(20,0.3917402);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1950248);
   hNCinFV_stack_11->SetBinContent(24,0.536893);
   hNCinFV_stack_11->SetBinContent(25,2.195754);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,0.5913855);
   hNCinFV_stack_11->SetBinError(4,0.920955);
   hNCinFV_stack_11->SetBinError(5,0.784705);
   hNCinFV_stack_11->SetBinError(6,0.981813);
   hNCinFV_stack_11->SetBinError(7,0.9624002);
   hNCinFV_stack_11->SetBinError(8,0.8781425);
   hNCinFV_stack_11->SetBinError(9,0.8097566);
   hNCinFV_stack_11->SetBinError(10,0.5194673);
   hNCinFV_stack_11->SetBinError(11,0.7830154);
   hNCinFV_stack_11->SetBinError(12,0.5875827);
   hNCinFV_stack_11->SetBinError(13,0.3929602);
   hNCinFV_stack_11->SetBinError(14,0.5887087);
   hNCinFV_stack_11->SetBinError(15,0.8325131);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.5198233);
   hNCinFV_stack_11->SetBinError(18,0.5197486);
   hNCinFV_stack_11->SetBinError(19,0.3387718);
   hNCinFV_stack_11->SetBinError(20,0.2770047);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1950249);
   hNCinFV_stack_11->SetBinError(24,0.3929602);
   hNCinFV_stack_11->SetBinError(25,0.7598403);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.8406703);
   hnumuCCinFV_stack_12->SetBinContent(2,2.448966);
   hnumuCCinFV_stack_12->SetBinContent(3,7.693112);
   hnumuCCinFV_stack_12->SetBinContent(4,12.42947);
   hnumuCCinFV_stack_12->SetBinContent(5,14.17808);
   hnumuCCinFV_stack_12->SetBinContent(6,11.76254);
   hnumuCCinFV_stack_12->SetBinContent(7,15.07896);
   hnumuCCinFV_stack_12->SetBinContent(8,7.850595);
   hnumuCCinFV_stack_12->SetBinContent(9,7.597076);
   hnumuCCinFV_stack_12->SetBinContent(10,6.391687);
   hnumuCCinFV_stack_12->SetBinContent(11,5.140373);
   hnumuCCinFV_stack_12->SetBinContent(12,4.30652);
   hnumuCCinFV_stack_12->SetBinContent(13,3.123486);
   hnumuCCinFV_stack_12->SetBinContent(14,4.751085);
   hnumuCCinFV_stack_12->SetBinContent(15,1.393007);
   hnumuCCinFV_stack_12->SetBinContent(16,1.030451);
   hnumuCCinFV_stack_12->SetBinContent(17,2.920066);
   hnumuCCinFV_stack_12->SetBinContent(18,0.233987);
   hnumuCCinFV_stack_12->SetBinContent(19,1.152577);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6127455);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,4.793086);
   hnumuCCinFV_stack_12->SetBinError(1,0.5099247);
   hnumuCCinFV_stack_12->SetBinError(2,0.8050751);
   hnumuCCinFV_stack_12->SetBinError(3,1.751476);
   hnumuCCinFV_stack_12->SetBinError(4,2.355835);
   hnumuCCinFV_stack_12->SetBinError(5,2.260635);
   hnumuCCinFV_stack_12->SetBinError(6,1.847739);
   hnumuCCinFV_stack_12->SetBinError(7,2.3206);
   hnumuCCinFV_stack_12->SetBinError(8,1.429658);
   hnumuCCinFV_stack_12->SetBinError(9,1.450557);
   hnumuCCinFV_stack_12->SetBinError(10,1.695437);
   hnumuCCinFV_stack_12->SetBinError(11,1.197816);
   hnumuCCinFV_stack_12->SetBinError(12,1.05642);
   hnumuCCinFV_stack_12->SetBinError(13,0.8549356);
   hnumuCCinFV_stack_12->SetBinError(14,1.281548);
   hnumuCCinFV_stack_12->SetBinError(15,0.5526841);
   hnumuCCinFV_stack_12->SetBinError(16,0.4630958);
   hnumuCCinFV_stack_12->SetBinError(17,0.9534294);
   hnumuCCinFV_stack_12->SetBinError(18,0.233987);
   hnumuCCinFV_stack_12->SetBinError(19,0.5304696);
   hnumuCCinFV_stack_12->SetBinError(20,0.3544895);
   hnumuCCinFV_stack_12->SetBinError(22,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.142904);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3479495);
   hnueCCinFV_stack_13->SetBinContent(11,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(25,4.874202);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.2478319);
   hnueCCinFV_stack_13->SetBinError(11,0.438694);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.2502081);
   hnueCCinFV_stack_13->SetBinError(25,2.105627);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__26->SetBinContent(1,2.522798);
   hmcerror__26->SetBinContent(2,14.28007);
   hmcerror__26->SetBinContent(3,38.81266);
   hmcerror__26->SetBinContent(4,64.99147);
   hmcerror__26->SetBinContent(5,83.02216);
   hmcerror__26->SetBinContent(6,77.21088);
   hmcerror__26->SetBinContent(7,74.55646);
   hmcerror__26->SetBinContent(8,59.61069);
   hmcerror__26->SetBinContent(9,44.2521);
   hmcerror__26->SetBinContent(10,40.78765);
   hmcerror__26->SetBinContent(11,36.82753);
   hmcerror__26->SetBinContent(12,27.18493);
   hmcerror__26->SetBinContent(13,23.76918);
   hmcerror__26->SetBinContent(14,22.44431);
   hmcerror__26->SetBinContent(15,16.22196);
   hmcerror__26->SetBinContent(16,11.395);
   hmcerror__26->SetBinContent(17,12.02899);
   hmcerror__26->SetBinContent(18,8.530832);
   hmcerror__26->SetBinContent(19,8.778996);
   hmcerror__26->SetBinContent(20,5.026582);
   hmcerror__26->SetBinContent(21,2.619252);
   hmcerror__26->SetBinContent(22,2.665846);
   hmcerror__26->SetBinContent(23,3.072971);
   hmcerror__26->SetBinContent(24,3.453224);
   hmcerror__26->SetBinContent(25,36.99107);
   hmcerror__26->SetBinError(1,6.924557);
   hmcerror__26->SetBinError(2,7.345324);
   hmcerror__26->SetBinError(3,18.50282);
   hmcerror__26->SetBinError(4,21.90896);
   hmcerror__26->SetBinError(5,29.60471);
   hmcerror__26->SetBinError(6,29.2327);
   hmcerror__26->SetBinError(7,29.59457);
   hmcerror__26->SetBinError(8,22.33899);
   hmcerror__26->SetBinError(9,21.21004);
   hmcerror__26->SetBinError(10,17.14017);
   hmcerror__26->SetBinError(11,15.70678);
   hmcerror__26->SetBinError(12,16.46413);
   hmcerror__26->SetBinError(13,10.32288);
   hmcerror__26->SetBinError(14,15.76093);
   hmcerror__26->SetBinError(15,13.91431);
   hmcerror__26->SetBinError(16,6.758211);
   hmcerror__26->SetBinError(17,10.85733);
   hmcerror__26->SetBinError(18,9.559044);
   hmcerror__26->SetBinError(19,10.84263);
   hmcerror__26->SetBinError(20,4.053285);
   hmcerror__26->SetBinError(21,6.769557);
   hmcerror__26->SetBinError(22,3.190639);
   hmcerror__26->SetBinError(23,4.780857);
   hmcerror__26->SetBinError(24,5.642962);
   hmcerror__26->SetBinError(25,23.56205);
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
   
   Double_t _fx3033[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3033[24] = {
   3,
   16,
   47,
   51,
   78,
   65,
   64,
   38,
   39,
   39,
   20,
   27,
   15,
   11,
   9,
   9,
   9,
   8,
   3,
   5,
   2,
   1,
   0,
   4};
   Double_t _felx3033[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3033[24] = {
   2.143368,
   4.1628,
   6.9882,
   7.2725,
   8.9562,
   8.1893,
   8.1273,
   6.3013,
   6.3813,
   6.3813,
   4.6266,
   5.3414,
   4.0385,
   3.4975,
   3.19354,
   3.19354,
   3.19354,
   3.0307,
   2.143368,
   2.48995,
   2,
   1,
   0,
   2.29683};
   Double_t _fehx3033[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3033[24] = {
   1.72422,
   3.9454,
   6.7839,
   7.0686,
   8.7542,
   7.9866,
   7.9246,
   6.0955,
   6.1757,
   6.1757,
   4.4133,
   5.1322,
   3.8197,
   3.27,
   2.9582,
   2.9582,
   2.9582,
   2.7896,
   1.72422,
   2.21064,
   1.51917,
   1.35971,
   1.1478,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,660);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(95.42962);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 563.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 82.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 118.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  147.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 123.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3034[24] = {
   2.744792,
   0.5143759,
   0.4767212,
   0.3371052,
   0.356588,
   0.3786085,
   0.3969417,
   0.374748,
   0.4793001,
   0.4202294,
   0.4264956,
   0.6056346,
   0.434297,
   0.7022239,
   0.8577449,
   0.5930856,
   0.9025965,
   1.120529,
   1.235065,
   0.8063699,
   2.584538,
   1.196858,
   1.555777,
   1.634114};
   Double_t _fehx3034[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3034[24] = {
   2.744792,
   0.5143759,
   0.4767212,
   0.3371052,
   0.356588,
   0.3786085,
   0.3969417,
   0.374748,
   0.4793001,
   0.4202294,
   0.4264956,
   0.6056346,
   0.434297,
   0.7022239,
   0.8577449,
   0.5930856,
   0.9025965,
   1.120529,
   1.235065,
   0.8063699,
   2.584538,
   1.196858,
   1.555777,
   1.634114};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,660);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3035[24] = {
   0.4330677,
   0.2260214,
   0.2183136,
   0.2206131,
   0.255813,
   0.2397978,
   0.2685887,
   0.2386191,
   0.2812664,
   0.2620366,
   0.2610999,
   0.275556,
   0.2530317,
   0.2813749,
   0.3289012,
   0.2951484,
   0.2963728,
   0.3418767,
   0.3256092,
   0.3582914,
   0.4546416,
   0.4270782,
   0.3971205,
   0.3983699};
   Double_t _fehx3035[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3035[24] = {
   0.4330677,
   0.2260214,
   0.2183136,
   0.2206131,
   0.255813,
   0.2397978,
   0.2685887,
   0.2386191,
   0.2812664,
   0.2620366,
   0.2610999,
   0.275556,
   0.2530317,
   0.2813749,
   0.3289012,
   0.2951484,
   0.2963728,
   0.3418767,
   0.3256092,
   0.3582914,
   0.4546416,
   0.4270782,
   0.3971205,
   0.3983699};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,660);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3036[24] = {
   1.189156,
   1.120443,
   1.210945,
   0.7847184,
   0.9395082,
   0.8418502,
   0.8584099,
   0.6374696,
   0.8813141,
   0.9561717,
   0.543072,
   0.9931974,
   0.6310694,
   0.4901018,
   0.5548034,
   0.78982,
   0.7481922,
   0.9377749,
   0.3417247,
   0.9947117,
   0.7635767,
   0.3751155,
   0,
   1.158338};
   Double_t _felx3036[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3036[24] = {
   0.8495995,
   0.2915112,
   0.1800495,
   0.1118993,
   0.1078772,
   0.1060641,
   0.1090087,
   0.1057076,
   0.1442033,
   0.1564518,
   0.1256288,
   0.1964839,
   0.1699049,
   0.1558301,
   0.1968652,
   0.280258,
   0.2654869,
   0.3552643,
   0.2441473,
   0.4953565,
   0.7635767,
   0.3751155,
   0,
   0.6651263};
   Double_t _fehx3036[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3036[24] = {
   0.6834554,
   0.2762872,
   0.1747857,
   0.108762,
   0.1054441,
   0.1034388,
   0.1062899,
   0.1022552,
   0.1395572,
   0.151411,
   0.119837,
   0.1887884,
   0.1606997,
   0.1456939,
   0.1823577,
   0.2596051,
   0.2459225,
   0.3270021,
   0.1964029,
   0.4397899,
   0.5800014,
   0.5100482,
   0.3735147,
   0.5739159};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,660);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.059872);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
