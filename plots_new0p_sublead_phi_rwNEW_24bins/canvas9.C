#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 17:37:00 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
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
   pad1->Range(-4.119231,-0.58,3.957692,64.13579);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__25->SetBinContent(1,27.28064);
   hmc__25->SetBinContent(2,17.15699);
   hmc__25->SetBinContent(3,20.40071);
   hmc__25->SetBinContent(4,19.17551);
   hmc__25->SetBinContent(5,17.6876);
   hmc__25->SetBinContent(6,19.04266);
   hmc__25->SetBinContent(7,17.70751);
   hmc__25->SetBinContent(8,14.89426);
   hmc__25->SetBinContent(9,19.39553);
   hmc__25->SetBinContent(10,17.72591);
   hmc__25->SetBinContent(11,24.12806);
   hmc__25->SetBinContent(12,22.10116);
   hmc__25->SetBinContent(13,26.74443);
   hmc__25->SetBinContent(14,19.07198);
   hmc__25->SetBinContent(15,19.51892);
   hmc__25->SetBinContent(16,17.55968);
   hmc__25->SetBinContent(17,18.56102);
   hmc__25->SetBinContent(18,21.33907);
   hmc__25->SetBinContent(19,20.93305);
   hmc__25->SetBinContent(20,20.82497);
   hmc__25->SetBinContent(21,15.82281);
   hmc__25->SetBinContent(22,18.12099);
   hmc__25->SetBinContent(23,22.75642);
   hmc__25->SetBinContent(24,22.58556);
   hmc__25->SetBinError(1,13.07473);
   hmc__25->SetBinError(2,9.614508);
   hmc__25->SetBinError(3,11.44487);
   hmc__25->SetBinError(4,11.08985);
   hmc__25->SetBinError(5,9.863013);
   hmc__25->SetBinError(6,8.930825);
   hmc__25->SetBinError(7,13.02285);
   hmc__25->SetBinError(8,9.21978);
   hmc__25->SetBinError(9,16.04516);
   hmc__25->SetBinError(10,10.0422);
   hmc__25->SetBinError(11,12.81);
   hmc__25->SetBinError(12,10.88021);
   hmc__25->SetBinError(13,15.05723);
   hmc__25->SetBinError(14,9.885294);
   hmc__25->SetBinError(15,10.36429);
   hmc__25->SetBinError(16,9.1789);
   hmc__25->SetBinError(17,10.19236);
   hmc__25->SetBinError(18,17.33183);
   hmc__25->SetBinError(19,10.93951);
   hmc__25->SetBinError(20,12.96286);
   hmc__25->SetBinError(21,14.39436);
   hmc__25->SetBinError(22,12.47194);
   hmc__25->SetBinError(23,11.62835);
   hmc__25->SetBinError(24,11.77572);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.58);
   hmc__25->SetMaximum(60.9);
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
   hs9_stack_9->SetMaximum(28.64467);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.013745);
   hbadmatch_stack_1->SetBinContent(2,1.366288);
   hbadmatch_stack_1->SetBinContent(3,0.536893);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,0.8702216);
   hbadmatch_stack_1->SetBinContent(6,1.072095);
   hbadmatch_stack_1->SetBinContent(7,0.6525276);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,1.075887);
   hbadmatch_stack_1->SetBinContent(12,1.008682);
   hbadmatch_stack_1->SetBinContent(13,2.20137);
   hbadmatch_stack_1->SetBinContent(14,0.9243394);
   hbadmatch_stack_1->SetBinContent(16,0.5884556);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.9843329);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.9801958);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.5319437);
   hbadmatch_stack_1->SetBinError(2,0.6514119);
   hbadmatch_stack_1->SetBinError(3,0.3929602);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.4359944);
   hbadmatch_stack_1->SetBinError(6,0.5551335);
   hbadmatch_stack_1->SetBinError(7,0.3777885);
   hbadmatch_stack_1->SetBinError(8,0.2781975);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.5671011);
   hbadmatch_stack_1->SetBinError(12,0.4518619);
   hbadmatch_stack_1->SetBinError(13,0.8344062);
   hbadmatch_stack_1->SetBinError(14,0.5394162);
   hbadmatch_stack_1->SetBinError(16,0.3397478);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.5059422);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.4383608);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,2.345802);
   hext_stack_2->SetBinContent(2,1.297589);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,1.055394);
   hext_stack_2->SetBinContent(5,0.8131978);
   hext_stack_2->SetBinContent(6,4.125011);
   hext_stack_2->SetBinContent(7,1.704188);
   hext_stack_2->SetBinContent(8,0.3243973);
   hext_stack_2->SetBinContent(9,1.868591);
   hext_stack_2->SetBinContent(10,1.454812);
   hext_stack_2->SetBinContent(11,2.663019);
   hext_stack_2->SetBinContent(12,2.752401);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,1.544194);
   hext_stack_2->SetBinContent(17,0.6487947);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,4.435048);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,0.6416141);
   hext_stack_2->SetBinContent(22,0.9660115);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,1.544194);
   hext_stack_2->SetBinError(1,0.9989624);
   hext_stack_2->SetBinError(2,0.6487947);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.6130171);
   hext_stack_2->SetBinError(5,0.5750177);
   hext_stack_2->SetBinError(6,1.358482);
   hext_stack_2->SetBinError(7,0.7656743);
   hext_stack_2->SetBinError(8,0.3243973);
   hext_stack_2->SetBinError(9,0.840497);
   hext_stack_2->SetBinError(10,0.8615765);
   hext_stack_2->SetBinError(11,1.142086);
   hext_stack_2->SetBinError(12,1.07854);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,0.7753719);
   hext_stack_2->SetBinError(17,0.4587671);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,1.533985);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.6416141);
   hext_stack_2->SetBinError(22,0.7189592);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.7753719);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4049124);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(5,0.2623434);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.002351481);
   hdirt_stack_3->SetBinContent(18,0.5529928);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.2645861);
   hdirt_stack_3->SetBinError(1,0.4049124);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(5,0.2623434);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(15,0.002351481);
   hdirt_stack_3->SetBinError(18,0.437291);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.2645861);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,5.938914);
   houtFV_stack_4->SetBinContent(2,3.301395);
   houtFV_stack_4->SetBinContent(3,4.300574);
   houtFV_stack_4->SetBinContent(4,2.495594);
   houtFV_stack_4->SetBinContent(5,3.122152);
   houtFV_stack_4->SetBinContent(6,3.324483);
   houtFV_stack_4->SetBinContent(7,4.401697);
   houtFV_stack_4->SetBinContent(8,2.498975);
   houtFV_stack_4->SetBinContent(9,2.34293);
   houtFV_stack_4->SetBinContent(10,1.318683);
   houtFV_stack_4->SetBinContent(11,3.379618);
   houtFV_stack_4->SetBinContent(12,2.782519);
   houtFV_stack_4->SetBinContent(13,3.758525);
   houtFV_stack_4->SetBinContent(14,3.126077);
   houtFV_stack_4->SetBinContent(15,3.267626);
   houtFV_stack_4->SetBinContent(16,2.143285);
   houtFV_stack_4->SetBinContent(17,4.552278);
   houtFV_stack_4->SetBinContent(18,4.099511);
   houtFV_stack_4->SetBinContent(19,2.442341);
   houtFV_stack_4->SetBinContent(20,3.034178);
   houtFV_stack_4->SetBinContent(21,1.662242);
   houtFV_stack_4->SetBinContent(22,2.730956);
   houtFV_stack_4->SetBinContent(23,3.946514);
   houtFV_stack_4->SetBinContent(24,4.969106);
   houtFV_stack_4->SetBinError(1,1.291213);
   houtFV_stack_4->SetBinError(2,0.8746741);
   houtFV_stack_4->SetBinError(3,1.094303);
   houtFV_stack_4->SetBinError(4,0.7335366);
   houtFV_stack_4->SetBinError(5,0.8713152);
   houtFV_stack_4->SetBinError(6,0.9211559);
   houtFV_stack_4->SetBinError(7,1.05646);
   houtFV_stack_4->SetBinError(8,0.7344388);
   houtFV_stack_4->SetBinError(9,0.7816331);
   houtFV_stack_4->SetBinError(10,0.5542732);
   houtFV_stack_4->SetBinError(11,0.9769565);
   houtFV_stack_4->SetBinError(12,0.8319397);
   houtFV_stack_4->SetBinError(13,0.9492975);
   houtFV_stack_4->SetBinError(14,0.8995382);
   houtFV_stack_4->SetBinError(15,0.8646033);
   houtFV_stack_4->SetBinError(16,0.6915773);
   houtFV_stack_4->SetBinError(17,1.049598);
   houtFV_stack_4->SetBinError(18,0.9993399);
   houtFV_stack_4->SetBinError(19,0.759212);
   houtFV_stack_4->SetBinError(20,0.8325598);
   houtFV_stack_4->SetBinError(21,0.6513556);
   houtFV_stack_4->SetBinError(22,0.8550514);
   houtFV_stack_4->SetBinError(23,1.056556);
   houtFV_stack_4->SetBinError(24,1.102418);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.383892);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.834934);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.603524);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.573792);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.82082);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.156124);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.277182);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.759948);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.3261);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.449574);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.007246);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.3261);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.353);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.376411);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.214996);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.64321);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.77026);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.532274);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.734792);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.51816);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.656323);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.703082);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.733646);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.354496);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7513667);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5922915);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7496817);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6999664);
   hNCpi0inFVres_stack_7->SetBinError(5,0.62444);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7053673);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6414524);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4788634);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7768354);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7291974);
   hNCpi0inFVres_stack_7->SetBinError(11,0.791396);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7768354);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7431195);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5805107);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7443843);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7061482);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7616993);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6942903);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6021216);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7219107);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6383605);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7792531);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8358058);
   hNCpi0inFVres_stack_7->SetBinError(24,0.746994);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.11584);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.200372);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.352826);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.9904539);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.13029);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.004904);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.059208);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.421076);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.323262);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8220537);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.366276);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.07349);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.14374);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.213822);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8507857);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.26879);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.34004);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3780289);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4055949);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.434773);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.316066);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.41147);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3553864);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3494035);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3360594);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3869325);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2078513);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4042329);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3401847);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.379057);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3726713);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2514891);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3481013);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4485066);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,5.450333);
   hCCpi0inFV_stack_10->SetBinContent(2,2.495594);
   hCCpi0inFV_stack_10->SetBinContent(3,4.74583);
   hCCpi0inFV_stack_10->SetBinContent(4,2.671753);
   hCCpi0inFV_stack_10->SetBinContent(5,3.709461);
   hCCpi0inFV_stack_10->SetBinContent(6,2.743872);
   hCCpi0inFV_stack_10->SetBinContent(7,2.681084);
   hCCpi0inFV_stack_10->SetBinContent(8,2.842824);
   hCCpi0inFV_stack_10->SetBinContent(9,3.225298);
   hCCpi0inFV_stack_10->SetBinContent(10,4.002875);
   hCCpi0inFV_stack_10->SetBinContent(11,6.376092);
   hCCpi0inFV_stack_10->SetBinContent(12,5.636673);
   hCCpi0inFV_stack_10->SetBinContent(13,6.78101);
   hCCpi0inFV_stack_10->SetBinContent(14,3.774035);
   hCCpi0inFV_stack_10->SetBinContent(15,2.803835);
   hCCpi0inFV_stack_10->SetBinContent(16,3.258352);
   hCCpi0inFV_stack_10->SetBinContent(17,3.133591);
   hCCpi0inFV_stack_10->SetBinContent(18,4.834479);
   hCCpi0inFV_stack_10->SetBinContent(19,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(20,4.302989);
   hCCpi0inFV_stack_10->SetBinContent(21,2.904828);
   hCCpi0inFV_stack_10->SetBinContent(22,3.012853);
   hCCpi0inFV_stack_10->SetBinContent(23,4.928531);
   hCCpi0inFV_stack_10->SetBinContent(24,4.306437);
   hCCpi0inFV_stack_10->SetBinError(1,1.18473);
   hCCpi0inFV_stack_10->SetBinError(2,0.7335366);
   hCCpi0inFV_stack_10->SetBinError(3,1.128053);
   hCCpi0inFV_stack_10->SetBinError(4,0.7930462);
   hCCpi0inFV_stack_10->SetBinError(5,0.9605263);
   hCCpi0inFV_stack_10->SetBinError(6,0.7333373);
   hCCpi0inFV_stack_10->SetBinError(7,0.8779318);
   hCCpi0inFV_stack_10->SetBinError(8,0.8094039);
   hCCpi0inFV_stack_10->SetBinError(9,0.8895887);
   hCCpi0inFV_stack_10->SetBinError(10,1.001926);
   hCCpi0inFV_stack_10->SetBinError(11,1.207384);
   hCCpi0inFV_stack_10->SetBinError(12,1.245928);
   hCCpi0inFV_stack_10->SetBinError(13,1.404108);
   hCCpi0inFV_stack_10->SetBinError(14,0.9841851);
   hCCpi0inFV_stack_10->SetBinError(15,0.8861583);
   hCCpi0inFV_stack_10->SetBinError(16,0.9417394);
   hCCpi0inFV_stack_10->SetBinError(17,0.9451074);
   hCCpi0inFV_stack_10->SetBinError(18,1.119629);
   hCCpi0inFV_stack_10->SetBinError(19,0.809167);
   hCCpi0inFV_stack_10->SetBinError(20,1.019817);
   hCCpi0inFV_stack_10->SetBinError(21,0.876382);
   hCCpi0inFV_stack_10->SetBinError(22,0.8631708);
   hCCpi0inFV_stack_10->SetBinError(23,1.082264);
   hCCpi0inFV_stack_10->SetBinError(24,1.050749);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.465526);
   hNCinFV_stack_11->SetBinContent(2,0.5884556);
   hNCinFV_stack_11->SetBinContent(3,0.8753801);
   hNCinFV_stack_11->SetBinContent(4,1.320373);
   hNCinFV_stack_11->SetBinContent(5,1.855576);
   hNCinFV_stack_11->SetBinContent(6,0.5352025);
   hNCinFV_stack_11->SetBinContent(7,1.465526);
   hNCinFV_stack_11->SetBinContent(8,1.26712);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,1.413964);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,1.807394);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,1.072095);
   hNCinFV_stack_11->SetBinContent(16,1.176911);
   hNCinFV_stack_11->SetBinContent(17,0.5884556);
   hNCinFV_stack_11->SetBinContent(18,0.7319179);
   hNCinFV_stack_11->SetBinContent(19,0.9286332);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,0.7319179);
   hNCinFV_stack_11->SetBinContent(22,1.270501);
   hNCinFV_stack_11->SetBinContent(23,0.9785053);
   hNCinFV_stack_11->SetBinContent(24,0.5901461);
   hNCinFV_stack_11->SetBinError(1,0.6209405);
   hNCinFV_stack_11->SetBinError(2,0.3397478);
   hNCinFV_stack_11->SetBinError(3,0.5191111);
   hNCinFV_stack_11->SetBinError(4,0.5548703);
   hNCinFV_stack_11->SetBinError(5,0.6794384);
   hNCinFV_stack_11->SetBinError(6,0.3921167);
   hNCinFV_stack_11->SetBinError(7,0.6209405);
   hNCinFV_stack_11->SetBinError(8,0.5883944);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.6515799);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.7084844);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.5551335);
   hNCinFV_stack_11->SetBinError(16,0.4804759);
   hNCinFV_stack_11->SetBinError(17,0.3397478);
   hNCinFV_stack_11->SetBinError(18,0.438694);
   hNCinFV_stack_11->SetBinError(19,0.48078);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.438694);
   hNCinFV_stack_11->SetBinError(22,0.5895188);
   hNCinFV_stack_11->SetBinError(23,0.4376048);
   hNCinFV_stack_11->SetBinError(24,0.340721);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.14851);
   hnumuCCinFV_stack_12->SetBinContent(2,3.017391);
   hnumuCCinFV_stack_12->SetBinContent(3,2.911935);
   hnumuCCinFV_stack_12->SetBinContent(4,5.006599);
   hnumuCCinFV_stack_12->SetBinContent(5,2.187574);
   hnumuCCinFV_stack_12->SetBinContent(6,1.926142);
   hnumuCCinFV_stack_12->SetBinContent(7,1.758053);
   hnumuCCinFV_stack_12->SetBinContent(8,3.4834);
   hnumuCCinFV_stack_12->SetBinContent(9,4.534414);
   hnumuCCinFV_stack_12->SetBinContent(10,4.817698);
   hnumuCCinFV_stack_12->SetBinContent(11,2.982717);
   hnumuCCinFV_stack_12->SetBinContent(12,2.774069);
   hnumuCCinFV_stack_12->SetBinContent(13,4.663162);
   hnumuCCinFV_stack_12->SetBinContent(14,5.5249);
   hnumuCCinFV_stack_12->SetBinContent(15,3.880056);
   hnumuCCinFV_stack_12->SetBinContent(16,3.508268);
   hnumuCCinFV_stack_12->SetBinContent(17,2.964471);
   hnumuCCinFV_stack_12->SetBinContent(18,3.279648);
   hnumuCCinFV_stack_12->SetBinContent(19,4.624872);
   hnumuCCinFV_stack_12->SetBinContent(20,3.690814);
   hnumuCCinFV_stack_12->SetBinContent(21,3.671882);
   hnumuCCinFV_stack_12->SetBinContent(22,3.101107);
   hnumuCCinFV_stack_12->SetBinContent(23,4.679843);
   hnumuCCinFV_stack_12->SetBinContent(24,3.508297);
   hnumuCCinFV_stack_12->SetBinError(1,1.152803);
   hnumuCCinFV_stack_12->SetBinError(2,1.362016);
   hnumuCCinFV_stack_12->SetBinError(3,0.9031391);
   hnumuCCinFV_stack_12->SetBinError(4,1.415044);
   hnumuCCinFV_stack_12->SetBinError(5,0.7046746);
   hnumuCCinFV_stack_12->SetBinError(6,0.8088058);
   hnumuCCinFV_stack_12->SetBinError(7,0.6385541);
   hnumuCCinFV_stack_12->SetBinError(8,1.007421);
   hnumuCCinFV_stack_12->SetBinError(9,1.050629);
   hnumuCCinFV_stack_12->SetBinError(10,1.43714);
   hnumuCCinFV_stack_12->SetBinError(11,1.093313);
   hnumuCCinFV_stack_12->SetBinError(12,0.7726355);
   hnumuCCinFV_stack_12->SetBinError(13,1.12191);
   hnumuCCinFV_stack_12->SetBinError(14,1.221041);
   hnumuCCinFV_stack_12->SetBinError(15,1.060044);
   hnumuCCinFV_stack_12->SetBinError(16,1.118207);
   hnumuCCinFV_stack_12->SetBinError(17,0.9235393);
   hnumuCCinFV_stack_12->SetBinError(18,0.9684882);
   hnumuCCinFV_stack_12->SetBinError(19,1.154438);
   hnumuCCinFV_stack_12->SetBinError(20,1.071481);
   hnumuCCinFV_stack_12->SetBinError(21,0.9893173);
   hnumuCCinFV_stack_12->SetBinError(22,1.029082);
   hnumuCCinFV_stack_12->SetBinError(23,1.647494);
   hnumuCCinFV_stack_12->SetBinError(24,1.163173);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(20,1.766401);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.4041031);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3654046);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.2192101);
   hnueCCinFV_stack_13->SetBinError(20,1.581964);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__26->SetBinContent(1,27.28064);
   hmcerror__26->SetBinContent(2,17.15699);
   hmcerror__26->SetBinContent(3,20.40071);
   hmcerror__26->SetBinContent(4,19.17551);
   hmcerror__26->SetBinContent(5,17.6876);
   hmcerror__26->SetBinContent(6,19.04266);
   hmcerror__26->SetBinContent(7,17.70751);
   hmcerror__26->SetBinContent(8,14.89426);
   hmcerror__26->SetBinContent(9,19.39553);
   hmcerror__26->SetBinContent(10,17.72591);
   hmcerror__26->SetBinContent(11,24.12806);
   hmcerror__26->SetBinContent(12,22.10116);
   hmcerror__26->SetBinContent(13,26.74443);
   hmcerror__26->SetBinContent(14,19.07198);
   hmcerror__26->SetBinContent(15,19.51892);
   hmcerror__26->SetBinContent(16,17.55968);
   hmcerror__26->SetBinContent(17,18.56102);
   hmcerror__26->SetBinContent(18,21.33907);
   hmcerror__26->SetBinContent(19,20.93305);
   hmcerror__26->SetBinContent(20,20.82497);
   hmcerror__26->SetBinContent(21,15.82281);
   hmcerror__26->SetBinContent(22,18.12099);
   hmcerror__26->SetBinContent(23,22.75642);
   hmcerror__26->SetBinContent(24,22.58556);
   hmcerror__26->SetBinError(1,13.07473);
   hmcerror__26->SetBinError(2,9.614508);
   hmcerror__26->SetBinError(3,11.44487);
   hmcerror__26->SetBinError(4,11.08985);
   hmcerror__26->SetBinError(5,9.863013);
   hmcerror__26->SetBinError(6,8.930825);
   hmcerror__26->SetBinError(7,13.02285);
   hmcerror__26->SetBinError(8,9.21978);
   hmcerror__26->SetBinError(9,16.04516);
   hmcerror__26->SetBinError(10,10.0422);
   hmcerror__26->SetBinError(11,12.81);
   hmcerror__26->SetBinError(12,10.88021);
   hmcerror__26->SetBinError(13,15.05723);
   hmcerror__26->SetBinError(14,9.885294);
   hmcerror__26->SetBinError(15,10.36429);
   hmcerror__26->SetBinError(16,9.1789);
   hmcerror__26->SetBinError(17,10.19236);
   hmcerror__26->SetBinError(18,17.33183);
   hmcerror__26->SetBinError(19,10.93951);
   hmcerror__26->SetBinError(20,12.96286);
   hmcerror__26->SetBinError(21,14.39436);
   hmcerror__26->SetBinError(22,12.47194);
   hmcerror__26->SetBinError(23,11.62835);
   hmcerror__26->SetBinError(24,11.77572);
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
   29,
   18,
   25,
   13,
   17,
   14,
   22,
   14,
   14,
   12,
   21,
   13,
   21,
   9,
   17,
   11,
   21,
   12,
   14,
   18,
   20,
   14,
   10,
   18};
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
   5.5285,
   4.4008,
   5.1474,
   3.77763,
   4.2835,
   3.9102,
   4.8417,
   3.9102,
   3.9102,
   3.64022,
   4.7354,
   3.77763,
   4.7354,
   3.19354,
   4.2835,
   3.4975,
   4.7354,
   3.64022,
   3.9102,
   4.4008,
   4.6266,
   3.9102,
   3.34883,
   4.4008};
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
   5.3201,
   4.1858,
   4.9374,
   3.5552,
   4.0673,
   3.6898,
   4.6299,
   3.6898,
   3.6898,
   3.4155,
   4.5229,
   3.5552,
   4.5229,
   2.9582,
   4.0673,
   3.27,
   4.5229,
   3.4155,
   3.6898,
   4.1858,
   4.4133,
   3.6898,
   3.1179,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(2.955096);
   Graph_Graph3033->SetMaximum(37.17146);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/24","");
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
   0.4792676,
   0.5603844,
   0.5610035,
   0.5783339,
   0.5576231,
   0.4689905,
   0.7354423,
   0.6190158,
   0.8272608,
   0.5665268,
   0.530917,
   0.4922913,
   0.5630044,
   0.5183151,
   0.5309871,
   0.5227259,
   0.5491274,
   0.8122111,
   0.5225954,
   0.6224672,
   0.9097222,
   0.6882593,
   0.5109921,
   0.5213826};
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
   0.4792676,
   0.5603844,
   0.5610035,
   0.5783339,
   0.5576231,
   0.4689905,
   0.7354423,
   0.6190158,
   0.8272608,
   0.5665268,
   0.530917,
   0.4922913,
   0.5630044,
   0.5183151,
   0.5309871,
   0.5227259,
   0.5491274,
   0.8122111,
   0.5225954,
   0.6224672,
   0.9097222,
   0.6882593,
   0.5109921,
   0.5213826};
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
   0.2362824,
   0.2985996,
   0.2920439,
   0.29393,
   0.2802054,
   0.2494829,
   0.291804,
   0.2846126,
   0.2914277,
   0.2750743,
   0.2620104,
   0.2765882,
   0.2548128,
   0.2533655,
   0.2651437,
   0.3124148,
   0.279619,
   0.2702022,
   0.2405883,
   0.2780419,
   0.2984989,
   0.3246939,
   0.316188,
   0.283446};
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
   0.2362824,
   0.2985996,
   0.2920439,
   0.29393,
   0.2802054,
   0.2494829,
   0.291804,
   0.2846126,
   0.2914277,
   0.2750743,
   0.2620104,
   0.2765882,
   0.2548128,
   0.2533655,
   0.2651437,
   0.3124148,
   0.279619,
   0.2702022,
   0.2405883,
   0.2780419,
   0.2984989,
   0.3246939,
   0.316188,
   0.283446};
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
   1.063025,
   1.049135,
   1.225447,
   0.6779479,
   0.9611254,
   0.7351915,
   1.242411,
   0.9399596,
   0.7218159,
   0.676975,
   0.8703558,
   0.5882044,
   0.7852101,
   0.4718965,
   0.8709499,
   0.6264351,
   1.131403,
   0.5623489,
   0.6687989,
   0.8643471,
   1.263998,
   0.7725845,
   0.4394364,
   0.7969695};
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
   0.2026529,
   0.2565019,
   0.2523147,
   0.1970028,
   0.2421753,
   0.205339,
   0.2734263,
   0.2625307,
   0.2016032,
   0.2053615,
   0.1962611,
   0.1709245,
   0.1770611,
   0.1674467,
   0.2194538,
   0.1991779,
   0.2551261,
   0.1705895,
   0.1867955,
   0.2113233,
   0.2924007,
   0.2157829,
   0.1471598,
   0.1948502};
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
   0.1950138,
   0.2439706,
   0.2420209,
   0.1854031,
   0.2299521,
   0.193765,
   0.2614653,
   0.2477331,
   0.1902397,
   0.192684,
   0.1874539,
   0.1608603,
   0.1691156,
   0.1551071,
   0.2083773,
   0.1862221,
   0.2436773,
   0.1600586,
   0.1762667,
   0.2009991,
   0.2789202,
   0.2036202,
   0.1370119,
   0.1853308};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.1672124);
   Graph_Graph3036->SetMaximum(1.667983);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
