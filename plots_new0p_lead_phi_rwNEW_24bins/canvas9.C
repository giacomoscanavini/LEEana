#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 18:06:02 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
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
   pad1->Range(-4.119231,-0.6013366,3.957692,66.49517);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__25->SetBinContent(1,23.96476);
   hmc__25->SetBinContent(2,22.08908);
   hmc__25->SetBinContent(3,17.92068);
   hmc__25->SetBinContent(4,20.61916);
   hmc__25->SetBinContent(5,14.21384);
   hmc__25->SetBinContent(6,19.42143);
   hmc__25->SetBinContent(7,17.35728);
   hmc__25->SetBinContent(8,20.03169);
   hmc__25->SetBinContent(9,18.91966);
   hmc__25->SetBinContent(10,20.01596);
   hmc__25->SetBinContent(11,22.82148);
   hmc__25->SetBinContent(12,23.18947);
   hmc__25->SetBinContent(13,24.12698);
   hmc__25->SetBinContent(14,30.06683);
   hmc__25->SetBinContent(15,20.54798);
   hmc__25->SetBinContent(16,16.94349);
   hmc__25->SetBinContent(17,21.21095);
   hmc__25->SetBinContent(18,20.0667);
   hmc__25->SetBinContent(19,16.71342);
   hmc__25->SetBinContent(20,15.00762);
   hmc__25->SetBinContent(21,18.49116);
   hmc__25->SetBinContent(22,15.96031);
   hmc__25->SetBinContent(23,18.48123);
   hmc__25->SetBinContent(24,22.35427);
   hmc__25->SetBinError(1,10.93722);
   hmc__25->SetBinError(2,11.50572);
   hmc__25->SetBinError(3,9.814525);
   hmc__25->SetBinError(4,11.26205);
   hmc__25->SetBinError(5,11.02314);
   hmc__25->SetBinError(6,15.59654);
   hmc__25->SetBinError(7,8.961656);
   hmc__25->SetBinError(8,11.18414);
   hmc__25->SetBinError(9,9.523075);
   hmc__25->SetBinError(10,10.84406);
   hmc__25->SetBinError(11,15.17974);
   hmc__25->SetBinError(12,12.95859);
   hmc__25->SetBinError(13,14.11335);
   hmc__25->SetBinError(14,25.01347);
   hmc__25->SetBinError(15,13.58829);
   hmc__25->SetBinError(16,9.845814);
   hmc__25->SetBinError(17,11.17431);
   hmc__25->SetBinError(18,13.59688);
   hmc__25->SetBinError(19,9.24862);
   hmc__25->SetBinError(20,9.35367);
   hmc__25->SetBinError(21,10.7351);
   hmc__25->SetBinError(22,9.013504);
   hmc__25->SetBinError(23,9.353234);
   hmc__25->SetBinError(24,11.53808);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.6013366);
   hmc__25->SetMaximum(63.14035);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,-3.15,3.15);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(31.57017);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9592475);
   hbadmatch_stack_1->SetBinContent(2,0.9513143);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.899208);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,0.6244727);
   hbadmatch_stack_1->SetBinContent(7,0.5867651);
   hbadmatch_stack_1->SetBinContent(8,0.685404);
   hbadmatch_stack_1->SetBinContent(9,1.465526);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(12,0.7620949);
   hbadmatch_stack_1->SetBinContent(13,0.8495809);
   hbadmatch_stack_1->SetBinContent(14,3.290153e-16);
   hbadmatch_stack_1->SetBinContent(15,0.3934307);
   hbadmatch_stack_1->SetBinContent(16,1.343267);
   hbadmatch_stack_1->SetBinContent(17,1.151693);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(19,0.9681591);
   hbadmatch_stack_1->SetBinContent(20,1.873613);
   hbadmatch_stack_1->SetBinContent(21,1.121968);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,0.3900497);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.5768891);
   hbadmatch_stack_1->SetBinError(2,0.490497);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.5285245);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.3616272);
   hbadmatch_stack_1->SetBinError(7,0.3387718);
   hbadmatch_stack_1->SetBinError(8,0.3977269);
   hbadmatch_stack_1->SetBinError(9,0.6209405);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(12,0.4529168);
   hbadmatch_stack_1->SetBinError(13,0.6125459);
   hbadmatch_stack_1->SetBinError(14,3.290153e-16);
   hbadmatch_stack_1->SetBinError(15,0.2781975);
   hbadmatch_stack_1->SetBinError(16,0.615741);
   hbadmatch_stack_1->SetBinError(17,0.5300941);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(19,0.4981252);
   hbadmatch_stack_1->SetBinError(20,0.7520608);
   hbadmatch_stack_1->SetBinError(21,0.5181909);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.2758068);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,1.932023);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,2.192989);
   hext_stack_2->SetBinContent(5,1.290409);
   hext_stack_2->SetBinContent(6,1.607626);
   hext_stack_2->SetBinContent(7,3.241202);
   hext_stack_2->SetBinContent(8,1.697008);
   hext_stack_2->SetBinContent(9,2.192989);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,0.973192);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,2.103607);
   hext_stack_2->SetBinContent(17,3.15182);
   hext_stack_2->SetBinContent(18,1.868591);
   hext_stack_2->SetBinContent(19,2.916804);
   hext_stack_2->SetBinContent(20,1.78639);
   hext_stack_2->SetBinContent(21,0.9660115);
   hext_stack_2->SetBinContent(22,0.973192);
   hext_stack_2->SetBinContent(23,1.939204);
   hext_stack_2->SetBinContent(24,0.8131978);
   hext_stack_2->SetBinError(1,1.016762);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,0.9009267);
   hext_stack_2->SetBinError(5,0.788756);
   hext_stack_2->SetBinError(6,0.9636239);
   hext_stack_2->SetBinError(7,1.178414);
   hext_stack_2->SetBinError(8,0.8873887);
   hext_stack_2->SetBinError(9,0.9009267);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(14,0.5618727);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,0.9761052);
   hext_stack_2->SetBinError(17,1.23684);
   hext_stack_2->SetBinError(18,0.840497);
   hext_stack_2->SetBinError(19,1.132884);
   hext_stack_2->SetBinError(20,0.8039566);
   hext_stack_2->SetBinError(21,0.7189592);
   hext_stack_2->SetBinError(22,0.5618727);
   hext_stack_2->SetBinError(23,0.912471);
   hext_stack_2->SetBinError(24,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.4026575);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.2623434);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.4049124);
   hdirt_stack_3->SetBinContent(18,0.002351481);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(24,0.4149213);
   hdirt_stack_3->SetBinError(2,0.2984452);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(6,0.2623434);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(15,0.4049124);
   hdirt_stack_3->SetBinError(18,0.002351481);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(24,0.4149213);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,3.619252);
   houtFV_stack_4->SetBinContent(2,3.572761);
   houtFV_stack_4->SetBinContent(3,2.975853);
   houtFV_stack_4->SetBinContent(4,4.335811);
   houtFV_stack_4->SetBinContent(5,2.444031);
   houtFV_stack_4->SetBinContent(6,3.429299);
   houtFV_stack_4->SetBinContent(7,2.890715);
   houtFV_stack_4->SetBinContent(8,2.245626);
   houtFV_stack_4->SetBinContent(9,3.753964);
   houtFV_stack_4->SetBinContent(10,3.359375);
   houtFV_stack_4->SetBinContent(11,2.915964);
   houtFV_stack_4->SetBinContent(12,5.068165);
   houtFV_stack_4->SetBinContent(13,2.745563);
   houtFV_stack_4->SetBinContent(14,4.056099);
   houtFV_stack_4->SetBinContent(15,4.254807);
   houtFV_stack_4->SetBinContent(16,2.430892);
   houtFV_stack_4->SetBinContent(17,2.87949);
   houtFV_stack_4->SetBinContent(18,4.198173);
   houtFV_stack_4->SetBinContent(19,2.784209);
   houtFV_stack_4->SetBinContent(20,2.680974);
   houtFV_stack_4->SetBinContent(21,3.503734);
   houtFV_stack_4->SetBinContent(22,2.766934);
   houtFV_stack_4->SetBinContent(23,1.993423);
   houtFV_stack_4->SetBinContent(24,4.03506);
   houtFV_stack_4->SetBinError(1,0.8984765);
   houtFV_stack_4->SetBinError(2,0.9209972);
   houtFV_stack_4->SetBinError(3,0.8541054);
   houtFV_stack_4->SetBinError(4,1.038116);
   houtFV_stack_4->SetBinError(5,0.759648);
   houtFV_stack_4->SetBinError(6,0.8781868);
   houtFV_stack_4->SetBinError(7,0.7849408);
   houtFV_stack_4->SetBinError(8,0.7332843);
   houtFV_stack_4->SetBinError(9,0.9703259);
   houtFV_stack_4->SetBinError(10,0.9774374);
   houtFV_stack_4->SetBinError(11,0.8130321);
   houtFV_stack_4->SetBinError(12,1.144009);
   houtFV_stack_4->SetBinError(13,0.7337887);
   houtFV_stack_4->SetBinError(14,1.023246);
   houtFV_stack_4->SetBinError(15,1.039394);
   houtFV_stack_4->SetBinError(16,0.7952375);
   houtFV_stack_4->SetBinError(17,0.9000686);
   houtFV_stack_4->SetBinError(18,1.057044);
   houtFV_stack_4->SetBinError(19,0.8323376);
   houtFV_stack_4->SetBinError(20,0.7957428);
   houtFV_stack_4->SetBinError(21,1.028412);
   houtFV_stack_4->SetBinError(22,0.8639007);
   houtFV_stack_4->SetBinError(23,0.6985838);
   houtFV_stack_4->SetBinError(24,1.055341);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06238626);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.241152);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.96456);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.380899);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.272628);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.614478);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.530946);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.986892);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.754146);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.988388);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.336974);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.3271);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.10406);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.046932);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.579865);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.379156);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.284582);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.494332);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.044188);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.78968);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.571048);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.581169);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.196474);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.992291);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.647946);
   hNCpi0inFVres_stack_7->SetBinError(1,0.687672);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7304859);
   hNCpi0inFVres_stack_7->SetBinError(3,0.743643);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7918056);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6918097);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7134595);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6492929);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7178103);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6537237);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6903551);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8096285);
   hNCpi0inFVres_stack_7->SetBinError(12,0.733145);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7502868);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8372792);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6863027);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7717249);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7920921);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6549134);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5489807);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5966022);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5032356);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6485931);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7082578);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7695361);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.115008);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.018354);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.9346539);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5573358);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.534012);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6141361);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.906754);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8652359);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.742762);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.868812);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.976172);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9474399);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.478708);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.115008);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.142076);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4872539);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5158178);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.031972);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.591308);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6699361);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.226608);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3516243);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.317295);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3135935);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1704726);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4833141);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2874767);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3123499);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2994136);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4619719);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4928828);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3259676);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2936159);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4310268);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3516243);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3242713);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1840142);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1454198);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3283469);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4908389);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2901718);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3560243);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,6.787661);
   hCCpi0inFV_stack_10->SetBinContent(2,4.197222);
   hCCpi0inFV_stack_10->SetBinContent(3,1.977304);
   hCCpi0inFV_stack_10->SetBinContent(4,4.908176);
   hCCpi0inFV_stack_10->SetBinContent(5,2.47702);
   hCCpi0inFV_stack_10->SetBinContent(6,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(7,2.672216);
   hCCpi0inFV_stack_10->SetBinContent(8,5.556707);
   hCCpi0inFV_stack_10->SetBinContent(9,3.372665);
   hCCpi0inFV_stack_10->SetBinContent(10,3.627179);
   hCCpi0inFV_stack_10->SetBinContent(11,3.56938);
   hCCpi0inFV_stack_10->SetBinContent(12,4.747982);
   hCCpi0inFV_stack_10->SetBinContent(13,7.571851);
   hCCpi0inFV_stack_10->SetBinContent(14,5.969265);
   hCCpi0inFV_stack_10->SetBinContent(15,4.149991);
   hCCpi0inFV_stack_10->SetBinContent(16,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(17,3.97189);
   hCCpi0inFV_stack_10->SetBinContent(18,3.716845);
   hCCpi0inFV_stack_10->SetBinContent(19,2.791261);
   hCCpi0inFV_stack_10->SetBinContent(20,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(21,3.17933);
   hCCpi0inFV_stack_10->SetBinContent(22,3.399121);
   hCCpi0inFV_stack_10->SetBinContent(23,2.702766);
   hCCpi0inFV_stack_10->SetBinContent(24,5.023681);
   hCCpi0inFV_stack_10->SetBinError(1,1.328374);
   hCCpi0inFV_stack_10->SetBinError(2,1.020579);
   hCCpi0inFV_stack_10->SetBinError(3,0.6883815);
   hCCpi0inFV_stack_10->SetBinError(4,1.106253);
   hCCpi0inFV_stack_10->SetBinError(5,0.7687096);
   hCCpi0inFV_stack_10->SetBinError(6,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(7,0.8312282);
   hCCpi0inFV_stack_10->SetBinError(8,1.20082);
   hCCpi0inFV_stack_10->SetBinError(9,0.8990075);
   hCCpi0inFV_stack_10->SetBinError(10,0.9754501);
   hCCpi0inFV_stack_10->SetBinError(11,0.9202779);
   hCCpi0inFV_stack_10->SetBinError(12,1.038475);
   hCCpi0inFV_stack_10->SetBinError(13,1.369911);
   hCCpi0inFV_stack_10->SetBinError(14,1.267864);
   hCCpi0inFV_stack_10->SetBinError(15,1.075944);
   hCCpi0inFV_stack_10->SetBinError(16,0.650847);
   hCCpi0inFV_stack_10->SetBinError(17,1.100612);
   hCCpi0inFV_stack_10->SetBinError(18,0.9602244);
   hCCpi0inFV_stack_10->SetBinError(19,0.833141);
   hCCpi0inFV_stack_10->SetBinError(20,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(21,0.8779761);
   hCCpi0inFV_stack_10->SetBinError(22,0.9052729);
   hCCpi0inFV_stack_10->SetBinError(23,0.8023709);
   hCCpi0inFV_stack_10->SetBinError(24,1.194349);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.7834804);
   hNCinFV_stack_11->SetBinContent(2,0.9269427);
   hNCinFV_stack_11->SetBinContent(3,0.9286332);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.9269427);
   hNCinFV_stack_11->SetBinContent(6,1.804013);
   hNCinFV_stack_11->SetBinContent(7,0.5901461);
   hNCinFV_stack_11->SetBinContent(8,0.9835768);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,0.5850745);
   hNCinFV_stack_11->SetBinContent(11,2.145881);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,0.7336084);
   hNCinFV_stack_11->SetBinContent(14,1.855576);
   hNCinFV_stack_11->SetBinContent(15,1.268811);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.5901461);
   hNCinFV_stack_11->SetBinContent(18,0.8753801);
   hNCinFV_stack_11->SetBinContent(19,0.7336084);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,1.463836);
   hNCinFV_stack_11->SetBinContent(22,1.557426);
   hNCinFV_stack_11->SetBinContent(23,1.518779);
   hNCinFV_stack_11->SetBinContent(24,0.3917402);
   hNCinFV_stack_11->SetBinError(1,0.3917439);
   hNCinFV_stack_11->SetBinError(2,0.4800908);
   hNCinFV_stack_11->SetBinError(3,0.48078);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.4800908);
   hNCinFV_stack_11->SetBinError(6,0.7075491);
   hNCinFV_stack_11->SetBinError(7,0.340721);
   hNCinFV_stack_11->SetBinError(8,0.4398689);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.337793);
   hNCinFV_stack_11->SetBinError(11,0.785499);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.4394482);
   hNCinFV_stack_11->SetBinError(14,0.6794384);
   hNCinFV_stack_11->SetBinError(15,0.5889569);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.340721);
   hNCinFV_stack_11->SetBinError(18,0.5191111);
   hNCinFV_stack_11->SetBinError(19,0.4394482);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.620407);
   hNCinFV_stack_11->SetBinError(22,0.7082233);
   hNCinFV_stack_11->SetBinError(23,0.5892709);
   hNCinFV_stack_11->SetBinError(24,0.2770047);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.443239);
   hnumuCCinFV_stack_12->SetBinContent(2,5.337561);
   hnumuCCinFV_stack_12->SetBinContent(3,3.952961);
   hnumuCCinFV_stack_12->SetBinContent(4,1.693197);
   hnumuCCinFV_stack_12->SetBinContent(5,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(6,2.170938);
   hnumuCCinFV_stack_12->SetBinContent(7,2.482585);
   hnumuCCinFV_stack_12->SetBinContent(8,3.077085);
   hnumuCCinFV_stack_12->SetBinContent(9,2.357656);
   hnumuCCinFV_stack_12->SetBinContent(10,5.223837);
   hnumuCCinFV_stack_12->SetBinContent(11,6.01252);
   hnumuCCinFV_stack_12->SetBinContent(12,5.705562);
   hnumuCCinFV_stack_12->SetBinContent(13,5.238096);
   hnumuCCinFV_stack_12->SetBinContent(14,9.876019);
   hnumuCCinFV_stack_12->SetBinContent(15,3.036175);
   hnumuCCinFV_stack_12->SetBinContent(16,2.412058);
   hnumuCCinFV_stack_12->SetBinContent(17,2.537156);
   hnumuCCinFV_stack_12->SetBinContent(18,4.112414);
   hnumuCCinFV_stack_12->SetBinContent(19,2.937738);
   hnumuCCinFV_stack_12->SetBinContent(20,1.002714);
   hnumuCCinFV_stack_12->SetBinContent(21,3.055902);
   hnumuCCinFV_stack_12->SetBinContent(22,1.742711);
   hnumuCCinFV_stack_12->SetBinContent(23,3.408957);
   hnumuCCinFV_stack_12->SetBinContent(24,4.293543);
   hnumuCCinFV_stack_12->SetBinError(1,1.073305);
   hnumuCCinFV_stack_12->SetBinError(2,1.314052);
   hnumuCCinFV_stack_12->SetBinError(3,1.025447);
   hnumuCCinFV_stack_12->SetBinError(4,0.8798763);
   hnumuCCinFV_stack_12->SetBinError(5,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(6,0.768923);
   hnumuCCinFV_stack_12->SetBinError(7,0.8187201);
   hnumuCCinFV_stack_12->SetBinError(8,0.9202296);
   hnumuCCinFV_stack_12->SetBinError(9,0.8656962);
   hnumuCCinFV_stack_12->SetBinError(10,1.652743);
   hnumuCCinFV_stack_12->SetBinError(11,1.462599);
   hnumuCCinFV_stack_12->SetBinError(12,1.293283);
   hnumuCCinFV_stack_12->SetBinError(13,1.170942);
   hnumuCCinFV_stack_12->SetBinError(14,2.095329);
   hnumuCCinFV_stack_12->SetBinError(15,0.912287);
   hnumuCCinFV_stack_12->SetBinError(16,0.7402571);
   hnumuCCinFV_stack_12->SetBinError(17,0.7865128);
   hnumuCCinFV_stack_12->SetBinError(18,1.408255);
   hnumuCCinFV_stack_12->SetBinError(19,0.7977497);
   hnumuCCinFV_stack_12->SetBinError(20,0.5128984);
   hnumuCCinFV_stack_12->SetBinError(21,1.101191);
   hnumuCCinFV_stack_12->SetBinError(22,0.6769466);
   hnumuCCinFV_stack_12->SetBinError(23,0.9826434);
   hnumuCCinFV_stack_12->SetBinError(24,1.224127);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,1.786786);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,1.584628);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.2502081);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2192101);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__26->SetBinContent(1,23.96476);
   hmcerror__26->SetBinContent(2,22.08908);
   hmcerror__26->SetBinContent(3,17.92068);
   hmcerror__26->SetBinContent(4,20.61916);
   hmcerror__26->SetBinContent(5,14.21384);
   hmcerror__26->SetBinContent(6,19.42143);
   hmcerror__26->SetBinContent(7,17.35728);
   hmcerror__26->SetBinContent(8,20.03169);
   hmcerror__26->SetBinContent(9,18.91966);
   hmcerror__26->SetBinContent(10,20.01596);
   hmcerror__26->SetBinContent(11,22.82148);
   hmcerror__26->SetBinContent(12,23.18947);
   hmcerror__26->SetBinContent(13,24.12698);
   hmcerror__26->SetBinContent(14,30.06683);
   hmcerror__26->SetBinContent(15,20.54798);
   hmcerror__26->SetBinContent(16,16.94349);
   hmcerror__26->SetBinContent(17,21.21095);
   hmcerror__26->SetBinContent(18,20.0667);
   hmcerror__26->SetBinContent(19,16.71342);
   hmcerror__26->SetBinContent(20,15.00762);
   hmcerror__26->SetBinContent(21,18.49116);
   hmcerror__26->SetBinContent(22,15.96031);
   hmcerror__26->SetBinContent(23,18.48123);
   hmcerror__26->SetBinContent(24,22.35427);
   hmcerror__26->SetBinError(1,10.93722);
   hmcerror__26->SetBinError(2,11.50572);
   hmcerror__26->SetBinError(3,9.814525);
   hmcerror__26->SetBinError(4,11.26205);
   hmcerror__26->SetBinError(5,11.02314);
   hmcerror__26->SetBinError(6,15.59654);
   hmcerror__26->SetBinError(7,8.961656);
   hmcerror__26->SetBinError(8,11.18414);
   hmcerror__26->SetBinError(9,9.523075);
   hmcerror__26->SetBinError(10,10.84406);
   hmcerror__26->SetBinError(11,15.17974);
   hmcerror__26->SetBinError(12,12.95859);
   hmcerror__26->SetBinError(13,14.11335);
   hmcerror__26->SetBinError(14,25.01347);
   hmcerror__26->SetBinError(15,13.58829);
   hmcerror__26->SetBinError(16,9.845814);
   hmcerror__26->SetBinError(17,11.17431);
   hmcerror__26->SetBinError(18,13.59688);
   hmcerror__26->SetBinError(19,9.24862);
   hmcerror__26->SetBinError(20,9.35367);
   hmcerror__26->SetBinError(21,10.7351);
   hmcerror__26->SetBinError(22,9.013504);
   hmcerror__26->SetBinError(23,9.353234);
   hmcerror__26->SetBinError(24,11.53808);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3033[24] = {
   27,
   24,
   13,
   10,
   19,
   15,
   21,
   17,
   20,
   23,
   18,
   20,
   26,
   10,
   16,
   16,
   11,
   12,
   13,
   13,
   13,
   3,
   24,
   13};
   Double_t _felx3033[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3033[24] = {
   5.3414,
   5.0476,
   3.77763,
   3.34883,
   4.5151,
   4.0385,
   4.7354,
   4.2835,
   4.6266,
   4.9457,
   4.4008,
   4.6266,
   5.2453,
   3.34883,
   4.1628,
   4.1628,
   3.4975,
   3.64022,
   3.77763,
   3.77763,
   3.77763,
   2.143368,
   5.0476,
   3.77763};
   Double_t _fehx3033[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3033[24] = {
   5.1322,
   4.837,
   3.5552,
   3.1179,
   4.3011,
   3.8197,
   4.5229,
   4.0673,
   4.4133,
   4.7346,
   4.1858,
   4.4133,
   5.0358,
   3.1179,
   3.9454,
   3.9454,
   3.27,
   3.4155,
   3.5552,
   3.5552,
   3.5552,
   1.72422,
   4.837,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(0.7709688);
   Graph_Graph3033->SetMaximum(35.25976);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all");
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
   
   Double_t _fx3034[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3034[24] = {
   0.4563878,
   0.5208785,
   0.5476647,
   0.5461935,
   0.7755219,
   0.803058,
   0.5163055,
   0.558322,
   0.5033427,
   0.5417707,
   0.6651513,
   0.5588135,
   0.5849611,
   0.8319291,
   0.6612954,
   0.5810972,
   0.5268182,
   0.6775844,
   0.5533649,
   0.6232614,
   0.5805533,
   0.5647451,
   0.5060938,
   0.5161466};
   Double_t _fehx3034[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3034[24] = {
   0.4563878,
   0.5208785,
   0.5476647,
   0.5461935,
   0.7755219,
   0.803058,
   0.5163055,
   0.558322,
   0.5033427,
   0.5417707,
   0.6651513,
   0.5588135,
   0.5849611,
   0.8319291,
   0.6612954,
   0.5810972,
   0.5268182,
   0.6775844,
   0.5533649,
   0.6232614,
   0.5805533,
   0.5647451,
   0.5060938,
   0.5161466};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3035[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3035[24] = {
   0.2603179,
   0.2608794,
   0.3250149,
   0.2638249,
   0.3331736,
   0.2802516,
   0.2597182,
   0.2812467,
   0.2834317,
   0.2697491,
   0.2655124,
   0.2927515,
   0.2681806,
   0.2430464,
   0.2738084,
   0.3091492,
   0.2895019,
   0.2987982,
   0.2534275,
   0.286057,
   0.2824906,
   0.3011482,
   0.2773147,
   0.2721857};
   Double_t _fehx3035[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3035[24] = {
   0.2603179,
   0.2608794,
   0.3250149,
   0.2638249,
   0.3331736,
   0.2802516,
   0.2597182,
   0.2812467,
   0.2834317,
   0.2697491,
   0.2655124,
   0.2927515,
   0.2681806,
   0.2430464,
   0.2738084,
   0.3091492,
   0.2895019,
   0.2987982,
   0.2534275,
   0.286057,
   0.2824906,
   0.3011482,
   0.2773147,
   0.2721857};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3036[24] = {
   1.126654,
   1.08651,
   0.7254189,
   0.4849858,
   1.336726,
   0.7723425,
   1.209867,
   0.8486551,
   1.057101,
   1.149083,
   0.7887307,
   0.8624605,
   1.077632,
   0.3325924,
   0.7786652,
   0.9443155,
   0.5186002,
   0.5980055,
   0.777818,
   0.8662266,
   0.7030387,
   0.1879663,
   1.298615,
   0.5815443};
   Double_t _felx3036[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3036[24] = {
   0.2228856,
   0.2285112,
   0.2107972,
   0.1624135,
   0.3176553,
   0.2079404,
   0.2728193,
   0.2138361,
   0.2445392,
   0.2470878,
   0.1928359,
   0.199513,
   0.2174039,
   0.1113795,
   0.2025892,
   0.2456873,
   0.1648913,
   0.181406,
   0.2260237,
   0.2517141,
   0.2042939,
   0.1342937,
   0.2731204,
   0.1689892};
   Double_t _fehx3036[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3036[24] = {
   0.2141561,
   0.218977,
   0.1983853,
   0.1512137,
   0.3025995,
   0.1966745,
   0.2605766,
   0.2030432,
   0.2332652,
   0.2365412,
   0.1834149,
   0.1903148,
   0.2087207,
   0.103699,
   0.1920091,
   0.2328564,
   0.1541657,
   0.1702073,
   0.2127153,
   0.236893,
   0.1922649,
   0.1080318,
   0.2617251,
   0.1590389};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.04830539);
   Graph_Graph3036->SetMaximum(1.797891);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
