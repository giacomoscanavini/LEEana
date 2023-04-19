#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 15:06:05 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-5.072625,676.9231,560.9255);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__19->SetBinContent(1,7.862462);
   hmc__19->SetBinContent(2,38.39454);
   hmc__19->SetBinContent(3,94.38323);
   hmc__19->SetBinContent(4,181.8638);
   hmc__19->SetBinContent(5,252.6566);
   hmc__19->SetBinContent(6,253.6312);
   hmc__19->SetBinContent(7,229.7861);
   hmc__19->SetBinContent(8,177.5698);
   hmc__19->SetBinContent(9,145.0039);
   hmc__19->SetBinContent(10,119.4536);
   hmc__19->SetBinContent(11,91.99811);
   hmc__19->SetBinContent(12,83.1836);
   hmc__19->SetBinContent(13,65.14163);
   hmc__19->SetBinContent(14,52.34868);
   hmc__19->SetBinContent(15,36.22224);
   hmc__19->SetBinContent(16,33.24655);
   hmc__19->SetBinContent(17,24.69098);
   hmc__19->SetBinContent(18,20.49189);
   hmc__19->SetBinContent(19,15.64085);
   hmc__19->SetBinContent(20,11.82895);
   hmc__19->SetBinContent(21,6.669743);
   hmc__19->SetBinContent(22,9.122885);
   hmc__19->SetBinContent(23,7.075348);
   hmc__19->SetBinContent(24,6.552229);
   hmc__19->SetBinContent(25,51.68788);
   hmc__19->SetBinError(1,6.920071);
   hmc__19->SetBinError(2,14.44632);
   hmc__19->SetBinError(3,32.59381);
   hmc__19->SetBinError(4,63.26687);
   hmc__19->SetBinError(5,93.53265);
   hmc__19->SetBinError(6,96.09373);
   hmc__19->SetBinError(7,95.96939);
   hmc__19->SetBinError(8,80.01841);
   hmc__19->SetBinError(9,62.66002);
   hmc__19->SetBinError(10,57.93237);
   hmc__19->SetBinError(11,42.8583);
   hmc__19->SetBinError(12,41.83585);
   hmc__19->SetBinError(13,31.3862);
   hmc__19->SetBinError(14,25.43255);
   hmc__19->SetBinError(15,18.41301);
   hmc__19->SetBinError(16,17.17015);
   hmc__19->SetBinError(17,15.53014);
   hmc__19->SetBinError(18,12.92788);
   hmc__19->SetBinError(19,10.13175);
   hmc__19->SetBinError(20,7.351891);
   hmc__19->SetBinError(21,4.515844);
   hmc__19->SetBinError(22,7.214657);
   hmc__19->SetBinError(23,5.228469);
   hmc__19->SetBinError(24,5.408265);
   hmc__19->SetBinError(25,23.03364);
   hmc__19->SetMinimum(-5.072625);
   hmc__19->SetMaximum(532.6256);
   hmc__19->SetEntries(1993.425);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,600);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(266.3128);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,2.828738);
   hbadmatch_stack_1->SetBinContent(3,3.45547);
   hbadmatch_stack_1->SetBinContent(4,6.719901);
   hbadmatch_stack_1->SetBinContent(5,3.633667);
   hbadmatch_stack_1->SetBinContent(6,5.216825);
   hbadmatch_stack_1->SetBinContent(7,4.193981);
   hbadmatch_stack_1->SetBinContent(8,3.764712);
   hbadmatch_stack_1->SetBinContent(9,3.047338);
   hbadmatch_stack_1->SetBinContent(10,2.606621);
   hbadmatch_stack_1->SetBinContent(11,0.8770706);
   hbadmatch_stack_1->SetBinContent(12,0.6293261);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(25,0.7319179);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9259);
   hbadmatch_stack_1->SetBinError(3,1.006705);
   hbadmatch_stack_1->SetBinError(4,1.26069);
   hbadmatch_stack_1->SetBinError(5,0.9301766);
   hbadmatch_stack_1->SetBinError(6,1.589242);
   hbadmatch_stack_1->SetBinError(7,1.051929);
   hbadmatch_stack_1->SetBinError(8,1.053223);
   hbadmatch_stack_1->SetBinError(9,0.9201759);
   hbadmatch_stack_1->SetBinError(10,0.8633791);
   hbadmatch_stack_1->SetBinError(11,0.5197486);
   hbadmatch_stack_1->SetBinError(12,0.4554065);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(25,0.438694);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,1.779209);
   hext_stack_2->SetBinContent(2,5.918582);
   hext_stack_2->SetBinContent(3,9.394799);
   hext_stack_2->SetBinContent(4,10.048);
   hext_stack_2->SetBinContent(5,13.35264);
   hext_stack_2->SetBinContent(6,13.1248);
   hext_stack_2->SetBinContent(7,7.373394);
   hext_stack_2->SetBinContent(8,7.276832);
   hext_stack_2->SetBinContent(9,5.173224);
   hext_stack_2->SetBinContent(10,4.296596);
   hext_stack_2->SetBinContent(11,1.297589);
   hext_stack_2->SetBinContent(12,5.509212);
   hext_stack_2->SetBinContent(13,1.614806);
   hext_stack_2->SetBinContent(14,2.110787);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(16,2.185808);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.6487947);
   hext_stack_2->SetBinError(1,0.9206235);
   hext_stack_2->SetBinError(2,1.513479);
   hext_stack_2->SetBinError(3,1.981319);
   hext_stack_2->SetBinError(4,2.066692);
   hext_stack_2->SetBinError(5,2.446885);
   hext_stack_2->SetBinError(6,2.353656);
   hext_stack_2->SetBinError(7,1.741532);
   hext_stack_2->SetBinError(8,1.837184);
   hext_stack_2->SetBinError(9,1.556427);
   hext_stack_2->SetBinError(10,1.328326);
   hext_stack_2->SetBinError(11,0.6487947);
   hext_stack_2->SetBinError(12,1.568955);
   hext_stack_2->SetBinError(13,0.8528597);
   hext_stack_2->SetBinError(14,0.8669371);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(16,1.006415);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4587671);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.9208429);
   hdirt_stack_3->SetBinContent(3,1.025273);
   hdirt_stack_3->SetBinContent(4,0.3942141);
   hdirt_stack_3->SetBinContent(5,2.212568);
   hdirt_stack_3->SetBinContent(6,0.6566868);
   hdirt_stack_3->SetBinContent(7,0.7017611);
   hdirt_stack_3->SetBinContent(9,1.114166);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(2,0.4257142);
   hdirt_stack_3->SetBinError(3,0.549452);
   hdirt_stack_3->SetBinError(4,0.2804494);
   hdirt_stack_3->SetBinError(5,0.7727052);
   hdirt_stack_3->SetBinError(6,0.3791383);
   hdirt_stack_3->SetBinError(7,0.4280393);
   hdirt_stack_3->SetBinError(9,0.569712);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,2.287653);
   houtFV_stack_4->SetBinContent(3,4.618615);
   houtFV_stack_4->SetBinContent(4,4.341635);
   houtFV_stack_4->SetBinContent(5,6.168489);
   houtFV_stack_4->SetBinContent(6,5.229931);
   houtFV_stack_4->SetBinContent(7,5.959903);
   houtFV_stack_4->SetBinContent(8,6.697652);
   houtFV_stack_4->SetBinContent(9,4.161217);
   houtFV_stack_4->SetBinContent(10,4.012683);
   houtFV_stack_4->SetBinContent(11,3.528301);
   houtFV_stack_4->SetBinContent(12,2.050601);
   houtFV_stack_4->SetBinContent(13,1.463836);
   houtFV_stack_4->SetBinContent(14,0.785171);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,0.9269427);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,0.4363754);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(25,0.3917402);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,0.8326886);
   houtFV_stack_4->SetBinError(3,1.033707);
   houtFV_stack_4->SetBinError(4,1.092871);
   houtFV_stack_4->SetBinError(5,1.27674);
   houtFV_stack_4->SetBinError(6,1.12717);
   houtFV_stack_4->SetBinError(7,1.265995);
   houtFV_stack_4->SetBinError(8,1.344707);
   houtFV_stack_4->SetBinError(9,0.9816641);
   houtFV_stack_4->SetBinError(10,0.9405604);
   houtFV_stack_4->SetBinError(11,0.9553465);
   houtFV_stack_4->SetBinError(12,0.7068742);
   houtFV_stack_4->SetBinError(13,0.620407);
   houtFV_stack_4->SetBinError(14,0.3925882);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.4800908);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.2805778);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(25,0.2770047);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6274177);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.063776);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.939558);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.532844);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9617218);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.353658);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.155758);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4276265);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4739624);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.385757);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2825829);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4563921);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5995177);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.717042);
   hNCpi0inFVres_stack_7->SetBinContent(3,36.34969);
   hNCpi0inFVres_stack_7->SetBinContent(4,82.34647);
   hNCpi0inFVres_stack_7->SetBinContent(5,129.0953);
   hNCpi0inFVres_stack_7->SetBinContent(6,130.1656);
   hNCpi0inFVres_stack_7->SetBinContent(7,120.1761);
   hNCpi0inFVres_stack_7->SetBinContent(8,88.67929);
   hNCpi0inFVres_stack_7->SetBinContent(9,73.4341);
   hNCpi0inFVres_stack_7->SetBinContent(10,58.30378);
   hNCpi0inFVres_stack_7->SetBinContent(11,46.43459);
   hNCpi0inFVres_stack_7->SetBinContent(12,34.28874);
   hNCpi0inFVres_stack_7->SetBinContent(13,30.30286);
   hNCpi0inFVres_stack_7->SetBinContent(14,24.58798);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.98452);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.67329);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.38831);
   hNCpi0inFVres_stack_7->SetBinContent(18,10.26243);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.0525);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.480714);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.913898);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.655084);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.32783);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.728312);
   hNCpi0inFVres_stack_7->SetBinContent(25,13.36134);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1532389);
   hNCpi0inFVres_stack_7->SetBinError(2,1.005151);
   hNCpi0inFVres_stack_7->SetBinError(3,1.968616);
   hNCpi0inFVres_stack_7->SetBinError(4,2.867171);
   hNCpi0inFVres_stack_7->SetBinError(5,3.759889);
   hNCpi0inFVres_stack_7->SetBinError(6,3.696477);
   hNCpi0inFVres_stack_7->SetBinError(7,3.617918);
   hNCpi0inFVres_stack_7->SetBinError(8,3.060005);
   hNCpi0inFVres_stack_7->SetBinError(9,2.805582);
   hNCpi0inFVres_stack_7->SetBinError(10,2.53661);
   hNCpi0inFVres_stack_7->SetBinError(11,2.245941);
   hNCpi0inFVres_stack_7->SetBinError(12,1.916082);
   hNCpi0inFVres_stack_7->SetBinError(13,1.856433);
   hNCpi0inFVres_stack_7->SetBinError(14,1.660944);
   hNCpi0inFVres_stack_7->SetBinError(15,1.32861);
   hNCpi0inFVres_stack_7->SetBinError(16,1.138909);
   hNCpi0inFVres_stack_7->SetBinError(17,1.03322);
   hNCpi0inFVres_stack_7->SetBinError(18,1.102413);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8220322);
   hNCpi0inFVres_stack_7->SetBinError(20,0.787575);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5095134);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6509895);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4588011);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4324538);
   hNCpi0inFVres_stack_7->SetBinError(25,1.245109);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.561239);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.225548);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.03009);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.99351);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.551);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.13872);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.85141);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.28666);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.991226);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.979856);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.153226);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.111773);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.137097);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.233752);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.737624);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.23068);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.53858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.674176);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.324758);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.24189);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.06004);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.016223);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.321458);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9146996);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.208035);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.572739);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.503014);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.368108);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.271656);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9638373);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9386752);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.026765);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8976268);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6052376);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5155882);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5373962);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6970415);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4835148);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5425626);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4732778);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3943225);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4152364);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3759641);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9271679);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6422043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3408521);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.4434146);
   hCCpi0inFV_stack_10->SetBinContent(2,2.340906);
   hCCpi0inFV_stack_10->SetBinContent(3,8.845802);
   hCCpi0inFV_stack_10->SetBinContent(4,24.16644);
   hCCpi0inFV_stack_10->SetBinContent(5,34.60289);
   hCCpi0inFV_stack_10->SetBinContent(6,34.84661);
   hCCpi0inFV_stack_10->SetBinContent(7,29.4287);
   hCCpi0inFV_stack_10->SetBinContent(8,24.94189);
   hCCpi0inFV_stack_10->SetBinContent(9,20.21862);
   hCCpi0inFV_stack_10->SetBinContent(10,14.41168);
   hCCpi0inFV_stack_10->SetBinContent(11,12.33779);
   hCCpi0inFV_stack_10->SetBinContent(12,13.02568);
   hCCpi0inFV_stack_10->SetBinContent(13,11.62555);
   hCCpi0inFV_stack_10->SetBinContent(14,8.247812);
   hCCpi0inFV_stack_10->SetBinContent(15,5.072096);
   hCCpi0inFV_stack_10->SetBinContent(16,5.128496);
   hCCpi0inFV_stack_10->SetBinContent(17,3.594615);
   hCCpi0inFV_stack_10->SetBinContent(18,2.390778);
   hCCpi0inFV_stack_10->SetBinContent(19,2.782519);
   hCCpi0inFV_stack_10->SetBinContent(20,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(21,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(23,2.090938);
   hCCpi0inFV_stack_10->SetBinContent(24,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(25,7.875749);
   hCCpi0inFV_stack_10->SetBinError(1,0.3155273);
   hCCpi0inFV_stack_10->SetBinError(2,0.8093475);
   hCCpi0inFV_stack_10->SetBinError(3,1.440989);
   hCCpi0inFV_stack_10->SetBinError(4,2.471143);
   hCCpi0inFV_stack_10->SetBinError(5,2.983886);
   hCCpi0inFV_stack_10->SetBinError(6,2.900221);
   hCCpi0inFV_stack_10->SetBinError(7,2.729879);
   hCCpi0inFV_stack_10->SetBinError(8,2.499958);
   hCCpi0inFV_stack_10->SetBinError(9,2.258522);
   hCCpi0inFV_stack_10->SetBinError(10,1.954481);
   hCCpi0inFV_stack_10->SetBinError(11,1.830029);
   hCCpi0inFV_stack_10->SetBinError(12,1.856269);
   hCCpi0inFV_stack_10->SetBinError(13,1.722172);
   hCCpi0inFV_stack_10->SetBinError(14,1.468221);
   hCCpi0inFV_stack_10->SetBinError(15,1.024536);
   hCCpi0inFV_stack_10->SetBinError(16,1.161531);
   hCCpi0inFV_stack_10->SetBinError(17,0.9586223);
   hCCpi0inFV_stack_10->SetBinError(18,0.7844693);
   hCCpi0inFV_stack_10->SetBinError(19,0.8319397);
   hCCpi0inFV_stack_10->SetBinError(20,0.785313);
   hCCpi0inFV_stack_10->SetBinError(21,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(22,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(23,0.8091189);
   hCCpi0inFV_stack_10->SetBinError(24,0.588146);
   hCCpi0inFV_stack_10->SetBinError(25,1.37414);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.144191);
   hNCinFV_stack_11->SetBinContent(2,6.243702);
   hNCinFV_stack_11->SetBinContent(3,10.25192);
   hNCinFV_stack_11->SetBinContent(4,13.77143);
   hNCinFV_stack_11->SetBinContent(5,17.61722);
   hNCinFV_stack_11->SetBinContent(6,17.48089);
   hNCinFV_stack_11->SetBinContent(7,17.33067);
   hNCinFV_stack_11->SetBinContent(8,13.30071);
   hNCinFV_stack_11->SetBinContent(9,10.25361);
   hNCinFV_stack_11->SetBinContent(10,11.92431);
   hNCinFV_stack_11->SetBinContent(11,6.155183);
   hNCinFV_stack_11->SetBinContent(12,6.888792);
   hNCinFV_stack_11->SetBinContent(13,6.835539);
   hNCinFV_stack_11->SetBinContent(14,6.011721);
   hNCinFV_stack_11->SetBinContent(15,5.857033);
   hNCinFV_stack_11->SetBinContent(16,4.001457);
   hNCinFV_stack_11->SetBinContent(17,3.424227);
   hNCinFV_stack_11->SetBinContent(18,2.297188);
   hNCinFV_stack_11->SetBinContent(19,2.055672);
   hNCinFV_stack_11->SetBinContent(20,0.7817899);
   hNCinFV_stack_11->SetBinContent(21,1.123658);
   hNCinFV_stack_11->SetBinContent(22,1.125349);
   hNCinFV_stack_11->SetBinContent(23,0.536893);
   hNCinFV_stack_11->SetBinContent(24,0.5867651);
   hNCinFV_stack_11->SetBinContent(25,8.443445);
   hNCinFV_stack_11->SetBinError(1,0.7850774);
   hNCinFV_stack_11->SetBinError(2,1.270837);
   hNCinFV_stack_11->SetBinError(3,1.642048);
   hNCinFV_stack_11->SetBinError(4,1.892851);
   hNCinFV_stack_11->SetBinError(5,2.059644);
   hNCinFV_stack_11->SetBinError(6,2.122615);
   hNCinFV_stack_11->SetBinError(7,2.103764);
   hNCinFV_stack_11->SetBinError(8,1.787962);
   hNCinFV_stack_11->SetBinError(9,1.642249);
   hNCinFV_stack_11->SetBinError(10,1.767642);
   hNCinFV_stack_11->SetBinError(11,1.224883);
   hNCinFV_stack_11->SetBinError(12,1.301327);
   hNCinFV_stack_11->SetBinError(13,1.315971);
   hNCinFV_stack_11->SetBinError(14,1.193027);
   hNCinFV_stack_11->SetBinError(15,1.241081);
   hNCinFV_stack_11->SetBinError(16,1.038578);
   hNCinFV_stack_11->SetBinError(17,0.8770549);
   hNCinFV_stack_11->SetBinError(18,0.7061988);
   hNCinFV_stack_11->SetBinError(19,0.7082781);
   hNCinFV_stack_11->SetBinError(20,0.3908977);
   hNCinFV_stack_11->SetBinError(21,0.5188295);
   hNCinFV_stack_11->SetBinError(22,0.5194673);
   hNCinFV_stack_11->SetBinError(23,0.3929602);
   hNCinFV_stack_11->SetBinError(24,0.3387718);
   hNCinFV_stack_11->SetBinError(25,1.546718);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,1.885601);
   hnumuCCinFV_stack_12->SetBinContent(2,6.408437);
   hnumuCCinFV_stack_12->SetBinContent(3,11.19355);
   hnumuCCinFV_stack_12->SetBinContent(4,21.06651);
   hnumuCCinFV_stack_12->SetBinContent(5,20.1397);
   hnumuCCinFV_stack_12->SetBinContent(6,23.08501);
   hnumuCCinFV_stack_12->SetBinContent(7,23.95058);
   hnumuCCinFV_stack_12->SetBinContent(8,15.39555);
   hnumuCCinFV_stack_12->SetBinContent(9,15.48143);
   hnumuCCinFV_stack_12->SetBinContent(10,14.52517);
   hnumuCCinFV_stack_12->SetBinContent(11,11.28776);
   hnumuCCinFV_stack_12->SetBinContent(12,13.12203);
   hnumuCCinFV_stack_12->SetBinContent(13,8.666067);
   hnumuCCinFV_stack_12->SetBinContent(14,6.91901);
   hnumuCCinFV_stack_12->SetBinContent(15,3.156433);
   hnumuCCinFV_stack_12->SetBinContent(16,3.581847);
   hnumuCCinFV_stack_12->SetBinContent(17,2.90152);
   hnumuCCinFV_stack_12->SetBinContent(18,2.031335);
   hnumuCCinFV_stack_12->SetBinContent(19,2.214696);
   hnumuCCinFV_stack_12->SetBinContent(20,1.203272);
   hnumuCCinFV_stack_12->SetBinContent(21,0.4633543);
   hnumuCCinFV_stack_12->SetBinContent(22,1.217874);
   hnumuCCinFV_stack_12->SetBinContent(23,1.138389);
   hnumuCCinFV_stack_12->SetBinContent(24,1.381219);
   hnumuCCinFV_stack_12->SetBinContent(25,8.946881);
   hnumuCCinFV_stack_12->SetBinError(1,0.8802727);
   hnumuCCinFV_stack_12->SetBinError(2,1.454623);
   hnumuCCinFV_stack_12->SetBinError(3,1.726916);
   hnumuCCinFV_stack_12->SetBinError(4,2.952219);
   hnumuCCinFV_stack_12->SetBinError(5,2.662495);
   hnumuCCinFV_stack_12->SetBinError(6,2.536102);
   hnumuCCinFV_stack_12->SetBinError(7,3.372261);
   hnumuCCinFV_stack_12->SetBinError(8,2.109632);
   hnumuCCinFV_stack_12->SetBinError(9,2.057097);
   hnumuCCinFV_stack_12->SetBinError(10,2.173504);
   hnumuCCinFV_stack_12->SetBinError(11,1.753896);
   hnumuCCinFV_stack_12->SetBinError(12,2.23839);
   hnumuCCinFV_stack_12->SetBinError(13,1.561693);
   hnumuCCinFV_stack_12->SetBinError(14,1.42172);
   hnumuCCinFV_stack_12->SetBinError(15,0.8607803);
   hnumuCCinFV_stack_12->SetBinError(16,0.9611894);
   hnumuCCinFV_stack_12->SetBinError(17,0.9113596);
   hnumuCCinFV_stack_12->SetBinError(18,0.7276949);
   hnumuCCinFV_stack_12->SetBinError(19,0.8175328);
   hnumuCCinFV_stack_12->SetBinError(20,0.5728706);
   hnumuCCinFV_stack_12->SetBinError(21,0.3313506);
   hnumuCCinFV_stack_12->SetBinError(22,0.621915);
   hnumuCCinFV_stack_12->SetBinError(23,0.5974629);
   hnumuCCinFV_stack_12->SetBinError(24,0.5947069);
   hnumuCCinFV_stack_12->SetBinError(25,2.76479);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(7,1.069693);
   hnueCCinFV_stack_13->SetBinContent(8,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(9,1.038389);
   hnueCCinFV_stack_13->SetBinContent(11,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(15,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.591342);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,4.243892);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.2451916);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.42079);
   hnueCCinFV_stack_13->SetBinError(7,0.6188906);
   hnueCCinFV_stack_13->SetBinError(8,0.4132436);
   hnueCCinFV_stack_13->SetBinError(9,0.6734513);
   hnueCCinFV_stack_13->SetBinError(11,0.2504446);
   hnueCCinFV_stack_13->SetBinError(15,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4228527);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,1.038032);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__20->SetBinContent(1,7.862462);
   hmcerror__20->SetBinContent(2,38.39454);
   hmcerror__20->SetBinContent(3,94.38323);
   hmcerror__20->SetBinContent(4,181.8638);
   hmcerror__20->SetBinContent(5,252.6566);
   hmcerror__20->SetBinContent(6,253.6312);
   hmcerror__20->SetBinContent(7,229.7861);
   hmcerror__20->SetBinContent(8,177.5698);
   hmcerror__20->SetBinContent(9,145.0039);
   hmcerror__20->SetBinContent(10,119.4536);
   hmcerror__20->SetBinContent(11,91.99811);
   hmcerror__20->SetBinContent(12,83.1836);
   hmcerror__20->SetBinContent(13,65.14163);
   hmcerror__20->SetBinContent(14,52.34868);
   hmcerror__20->SetBinContent(15,36.22224);
   hmcerror__20->SetBinContent(16,33.24655);
   hmcerror__20->SetBinContent(17,24.69098);
   hmcerror__20->SetBinContent(18,20.49189);
   hmcerror__20->SetBinContent(19,15.64085);
   hmcerror__20->SetBinContent(20,11.82895);
   hmcerror__20->SetBinContent(21,6.669743);
   hmcerror__20->SetBinContent(22,9.122885);
   hmcerror__20->SetBinContent(23,7.075348);
   hmcerror__20->SetBinContent(24,6.552229);
   hmcerror__20->SetBinContent(25,51.68788);
   hmcerror__20->SetBinError(1,6.920071);
   hmcerror__20->SetBinError(2,14.44632);
   hmcerror__20->SetBinError(3,32.59381);
   hmcerror__20->SetBinError(4,63.26687);
   hmcerror__20->SetBinError(5,93.53265);
   hmcerror__20->SetBinError(6,96.09373);
   hmcerror__20->SetBinError(7,95.96939);
   hmcerror__20->SetBinError(8,80.01841);
   hmcerror__20->SetBinError(9,62.66002);
   hmcerror__20->SetBinError(10,57.93237);
   hmcerror__20->SetBinError(11,42.8583);
   hmcerror__20->SetBinError(12,41.83585);
   hmcerror__20->SetBinError(13,31.3862);
   hmcerror__20->SetBinError(14,25.43255);
   hmcerror__20->SetBinError(15,18.41301);
   hmcerror__20->SetBinError(16,17.17015);
   hmcerror__20->SetBinError(17,15.53014);
   hmcerror__20->SetBinError(18,12.92788);
   hmcerror__20->SetBinError(19,10.13175);
   hmcerror__20->SetBinError(20,7.351891);
   hmcerror__20->SetBinError(21,4.515844);
   hmcerror__20->SetBinError(22,7.214657);
   hmcerror__20->SetBinError(23,5.228469);
   hmcerror__20->SetBinError(24,5.408265);
   hmcerror__20->SetBinError(25,23.03364);
   hmcerror__20->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[24] = {
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
   Double_t _fy3025[24] = {
   8,
   27,
   58,
   141,
   221,
   196,
   183,
   119,
   99,
   78,
   61,
   45,
   37,
   35,
   28,
   19,
   11,
   16,
   12,
   9,
   6,
   4,
   4,
   5};
   Double_t _felx3025[24] = {
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
   Double_t _fely3025[24] = {
   3.0307,
   5.3414,
   7.7446,
   11.87434,
   14.86607,
   14,
   13.52775,
   10.90871,
   10.0712,
   8.9562,
   7.9383,
   6.8416,
   6.2203,
   6.0548,
   5.4358,
   4.5151,
   3.4975,
   4.1628,
   3.64022,
   3.19354,
   2.67925,
   2.29683,
   2.29683,
   2.48995};
   Double_t _fehx3025[24] = {
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
   Double_t _fehy3025[24] = {
   2.7896,
   5.1322,
   7.5415,
   11.87434,
   14.86607,
   14,
   13.52775,
   10.90871,
   9.87,
   8.7542,
   7.7354,
   6.637,
   6.0141,
   5.8483,
   5.2271,
   4.3011,
   3.27,
   3.9454,
   3.4155,
   2.9582,
   2.41858,
   1.98186,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,660);
   Graph_Graph3025->SetMinimum(1.532853);
   Graph_Graph3025->SetMaximum(259.2824);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1422.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.1","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 93.5","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 55.6","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  936.9","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  164.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 266.0","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 168.0","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 212.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.1","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
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
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
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
   Double_t _fely3026[24] = {
   0.8801405,
   0.3762598,
   0.3453347,
   0.3478806,
   0.3701967,
   0.3788718,
   0.4176467,
   0.4506308,
   0.4321264,
   0.4849779,
   0.4658606,
   0.5029339,
   0.4818148,
   0.4858299,
   0.5083344,
   0.5164491,
   0.6289802,
   0.630878,
   0.6477746,
   0.6215169,
   0.6770641,
   0.7908307,
   0.7389698,
   0.8254084};
   Double_t _fehx3026[24] = {
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
   Double_t _fehy3026[24] = {
   0.8801405,
   0.3762598,
   0.3453347,
   0.3478806,
   0.3701967,
   0.3788718,
   0.4176467,
   0.4506308,
   0.4321264,
   0.4849779,
   0.4658606,
   0.5029339,
   0.4818148,
   0.4858299,
   0.5083344,
   0.5164491,
   0.6289802,
   0.630878,
   0.6477746,
   0.6215169,
   0.6770641,
   0.7908307,
   0.7389698,
   0.8254084};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,660);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[24] = {
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
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
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
   Double_t _fely3027[24] = {
   0.2750358,
   0.2194591,
   0.2787199,
   0.3269943,
   0.3544462,
   0.3621302,
   0.3877624,
   0.3958021,
   0.4055094,
   0.4167069,
   0.4188362,
   0.3582584,
   0.4025656,
   0.380374,
   0.417047,
   0.3335098,
   0.3727707,
   0.3905104,
   0.3347929,
   0.4026487,
   0.4467539,
   0.3264587,
   0.3648297,
   0.3198019};
   Double_t _fehx3027[24] = {
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
   Double_t _fehy3027[24] = {
   0.2750358,
   0.2194591,
   0.2787199,
   0.3269943,
   0.3544462,
   0.3621302,
   0.3877624,
   0.3958021,
   0.4055094,
   0.4167069,
   0.4188362,
   0.3582584,
   0.4025656,
   0.380374,
   0.417047,
   0.3335098,
   0.3727707,
   0.3905104,
   0.3347929,
   0.4026487,
   0.4467539,
   0.3264587,
   0.3648297,
   0.3198019};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,660);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   1.017493,
   0.703225,
   0.6145159,
   0.7753057,
   0.8747051,
   0.7727755,
   0.796393,
   0.6701591,
   0.6827402,
   0.6529731,
   0.6630571,
   0.540972,
   0.5679931,
   0.6685938,
   0.7730057,
   0.5714878,
   0.4455068,
   0.7807967,
   0.7672216,
   0.7608453,
   0.8995849,
   0.4384578,
   0.5653432,
   0.7630991};
   Double_t _felx3028[24] = {
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
   Double_t _fely3028[24] = {
   0.3854645,
   0.1391187,
   0.08205483,
   0.06529252,
   0.05883903,
   0.05519825,
   0.05887106,
   0.06143338,
   0.06945468,
   0.07497638,
   0.08628764,
   0.08224698,
   0.09548886,
   0.1156629,
   0.150068,
   0.1358066,
   0.1416509,
   0.2031438,
   0.2327379,
   0.2699767,
   0.4017022,
   0.2517658,
   0.3246243,
   0.3800157};
   Double_t _fehx3028[24] = {
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
   Double_t _fehy3028[24] = {
   0.3547998,
   0.1336701,
   0.07990296,
   0.06529252,
   0.05883903,
   0.05519825,
   0.05887106,
   0.06143338,
   0.06806713,
   0.07328535,
   0.08408216,
   0.07978736,
   0.09232345,
   0.1117182,
   0.1443064,
   0.1293698,
   0.132437,
   0.1925347,
   0.2183704,
   0.2500814,
   0.3626197,
   0.2172405,
   0.2801078,
   0.3373875};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,660);
   Graph_Graph3028->SetMinimum(0.06813197);
   Graph_Graph3028->SetMaximum(1.490853);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
