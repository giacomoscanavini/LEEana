#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 18:13:02 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-61.53846,-8.553813,451.2821,945.8716);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__13->SetBinContent(1,107.5841);
   hmc__13->SetBinContent(2,117.22);
   hmc__13->SetBinContent(3,122.8831);
   hmc__13->SetBinContent(4,116.392);
   hmc__13->SetBinContent(5,131.7469);
   hmc__13->SetBinContent(6,159.5415);
   hmc__13->SetBinContent(7,169.9278);
   hmc__13->SetBinContent(8,199.18);
   hmc__13->SetBinContent(9,241.1847);
   hmc__13->SetBinContent(10,323.5302);
   hmc__13->SetBinContent(11,393.8357);
   hmc__13->SetBinContent(12,427.6906);
   hmc__13->SetBinContent(13,347.507);
   hmc__13->SetBinContent(14,184.4709);
   hmc__13->SetBinContent(15,90.34196);
   hmc__13->SetBinContent(16,62.79036);
   hmc__13->SetBinContent(17,40.98059);
   hmc__13->SetBinContent(18,33.77527);
   hmc__13->SetBinContent(19,26.37189);
   hmc__13->SetBinContent(20,25.44034);
   hmc__13->SetBinContent(21,23.39338);
   hmc__13->SetBinContent(22,17.96974);
   hmc__13->SetBinContent(23,14.7216);
   hmc__13->SetBinContent(24,18.04476);
   hmc__13->SetBinContent(25,14.23097);
   hmc__13->SetBinContent(26,14.43465);
   hmc__13->SetBinContent(27,10.67463);
   hmc__13->SetBinContent(28,11.61606);
   hmc__13->SetBinContent(29,12.11208);
   hmc__13->SetBinContent(30,10.33025);
   hmc__13->SetBinContent(31,7.711794);
   hmc__13->SetBinContent(32,8.421942);
   hmc__13->SetBinContent(33,5.862522);
   hmc__13->SetBinContent(34,5.721712);
   hmc__13->SetBinContent(35,66.06506);
   hmc__13->SetBinError(1,37.95796);
   hmc__13->SetBinError(2,35.54079);
   hmc__13->SetBinError(3,36.4063);
   hmc__13->SetBinError(4,38.0199);
   hmc__13->SetBinError(5,40.18812);
   hmc__13->SetBinError(6,48.41007);
   hmc__13->SetBinError(7,54.85861);
   hmc__13->SetBinError(8,70.52367);
   hmc__13->SetBinError(9,82.88979);
   hmc__13->SetBinError(10,123.5792);
   hmc__13->SetBinError(11,158.1349);
   hmc__13->SetBinError(12,168.7674);
   hmc__13->SetBinError(13,159.591);
   hmc__13->SetBinError(14,112.1246);
   hmc__13->SetBinError(15,61.72346);
   hmc__13->SetBinError(16,26.63907);
   hmc__13->SetBinError(17,18.53402);
   hmc__13->SetBinError(18,16.43699);
   hmc__13->SetBinError(19,18.9826);
   hmc__13->SetBinError(20,16.48523);
   hmc__13->SetBinError(21,12.60053);
   hmc__13->SetBinError(22,9.822722);
   hmc__13->SetBinError(23,10.84996);
   hmc__13->SetBinError(24,14.63744);
   hmc__13->SetBinError(25,11.8792);
   hmc__13->SetBinError(26,10.87856);
   hmc__13->SetBinError(27,9.244766);
   hmc__13->SetBinError(28,10.10174);
   hmc__13->SetBinError(29,10.42343);
   hmc__13->SetBinError(30,9.858526);
   hmc__13->SetBinError(31,8.33536);
   hmc__13->SetBinError(32,8.692541);
   hmc__13->SetBinError(33,5.63845);
   hmc__13->SetBinError(34,6.482934);
   hmc__13->SetBinError(35,45.48049);
   hmc__13->SetMinimum(-8.553813);
   hmc__13->SetMaximum(898.1504);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",34,0,400);
   hs5_stack_5->SetMinimum(-1.450578e-08);
   hs5_stack_5->SetMaximum(449.0752);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.256907);
   hbadmatch_stack_1->SetBinContent(2,3.525772);
   hbadmatch_stack_1->SetBinContent(3,4.251804);
   hbadmatch_stack_1->SetBinContent(4,2.681926);
   hbadmatch_stack_1->SetBinContent(5,3.805065);
   hbadmatch_stack_1->SetBinContent(6,3.819816);
   hbadmatch_stack_1->SetBinContent(7,4.77946);
   hbadmatch_stack_1->SetBinContent(8,4.473811);
   hbadmatch_stack_1->SetBinContent(9,6.629989);
   hbadmatch_stack_1->SetBinContent(10,7.133808);
   hbadmatch_stack_1->SetBinContent(11,7.338584);
   hbadmatch_stack_1->SetBinContent(12,5.716153);
   hbadmatch_stack_1->SetBinContent(13,5.209206);
   hbadmatch_stack_1->SetBinContent(14,2.607554);
   hbadmatch_stack_1->SetBinContent(15,4.015395);
   hbadmatch_stack_1->SetBinContent(16,2.425737);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.5352025);
   hbadmatch_stack_1->SetBinContent(20,1.164907);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinContent(22,0.5901461);
   hbadmatch_stack_1->SetBinContent(23,1.413964);
   hbadmatch_stack_1->SetBinContent(24,0.5884556);
   hbadmatch_stack_1->SetBinContent(25,1.041816);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4331311);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.3401776);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.7319179);
   hbadmatch_stack_1->SetBinError(1,1.0276);
   hbadmatch_stack_1->SetBinError(2,0.8993654);
   hbadmatch_stack_1->SetBinError(3,1.031509);
   hbadmatch_stack_1->SetBinError(4,0.848143);
   hbadmatch_stack_1->SetBinError(5,1.137341);
   hbadmatch_stack_1->SetBinError(6,1.071482);
   hbadmatch_stack_1->SetBinError(7,1.064485);
   hbadmatch_stack_1->SetBinError(8,1.104096);
   hbadmatch_stack_1->SetBinError(9,1.348138);
   hbadmatch_stack_1->SetBinError(10,1.379449);
   hbadmatch_stack_1->SetBinError(11,1.411442);
   hbadmatch_stack_1->SetBinError(12,1.234837);
   hbadmatch_stack_1->SetBinError(13,1.522048);
   hbadmatch_stack_1->SetBinError(14,0.9031258);
   hbadmatch_stack_1->SetBinError(15,2.075504);
   hbadmatch_stack_1->SetBinError(16,0.9249006);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.3921167);
   hbadmatch_stack_1->SetBinError(20,0.5358302);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetBinError(22,0.340721);
   hbadmatch_stack_1->SetBinError(23,0.6515799);
   hbadmatch_stack_1->SetBinError(24,0.3397478);
   hbadmatch_stack_1->SetBinError(25,0.6302261);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.3075538);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.3401776);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.438694);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,11.61091);
   hext_stack_2->SetBinContent(2,14.24363);
   hext_stack_2->SetBinContent(3,17.25422);
   hext_stack_2->SetBinContent(4,11.25621);
   hext_stack_2->SetBinContent(5,12.31878);
   hext_stack_2->SetBinContent(6,18.51585);
   hext_stack_2->SetBinContent(7,12.69943);
   hext_stack_2->SetBinContent(8,21.02606);
   hext_stack_2->SetBinContent(9,19.70535);
   hext_stack_2->SetBinContent(10,27.34683);
   hext_stack_2->SetBinContent(11,18.50432);
   hext_stack_2->SetBinContent(12,26.30025);
   hext_stack_2->SetBinContent(13,30.63433);
   hext_stack_2->SetBinContent(14,6.567377);
   hext_stack_2->SetBinContent(15,3.807795);
   hext_stack_2->SetBinContent(16,6.012373);
   hext_stack_2->SetBinContent(17,3.379654);
   hext_stack_2->SetBinContent(18,1.939204);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,1.544194);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,1.048213);
   hext_stack_2->SetBinContent(28,0.6487947);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,5.572643);
   hext_stack_2->SetBinError(1,2.436298);
   hext_stack_2->SetBinError(2,2.498571);
   hext_stack_2->SetBinError(3,2.742315);
   hext_stack_2->SetBinError(4,2.198468);
   hext_stack_2->SetBinError(5,2.237823);
   hext_stack_2->SetBinError(6,3.205877);
   hext_stack_2->SetBinError(7,2.375217);
   hext_stack_2->SetBinError(8,3.375759);
   hext_stack_2->SetBinError(9,3.126749);
   hext_stack_2->SetBinError(10,3.703589);
   hext_stack_2->SetBinError(11,3.002218);
   hext_stack_2->SetBinError(12,3.689312);
   hext_stack_2->SetBinError(13,4.021359);
   hext_stack_2->SetBinError(14,1.581482);
   hext_stack_2->SetBinError(15,1.24058);
   hext_stack_2->SetBinError(16,1.511499);
   hext_stack_2->SetBinError(17,1.406172);
   hext_stack_2->SetBinError(18,0.912471);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.7753719);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.7595995);
   hext_stack_2->SetBinError(28,0.4587671);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,1.670027);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.5682533);
   hdirt_stack_3->SetBinContent(4,1.212455);
   hdirt_stack_3->SetBinContent(5,1.251234);
   hdirt_stack_3->SetBinContent(6,2.618258);
   hdirt_stack_3->SetBinContent(7,1.363112);
   hdirt_stack_3->SetBinContent(8,0.9140499);
   hdirt_stack_3->SetBinContent(9,0.5868663);
   hdirt_stack_3->SetBinContent(10,1.487391);
   hdirt_stack_3->SetBinContent(11,1.741965);
   hdirt_stack_3->SetBinContent(12,1.21377);
   hdirt_stack_3->SetBinContent(13,1.277624);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.3394302);
   hdirt_stack_3->SetBinError(4,0.4730784);
   hdirt_stack_3->SetBinError(5,0.5729254);
   hdirt_stack_3->SetBinError(6,0.8576788);
   hdirt_stack_3->SetBinError(7,0.6912205);
   hdirt_stack_3->SetBinError(8,0.4788161);
   hdirt_stack_3->SetBinError(9,0.3503208);
   hdirt_stack_3->SetBinError(10,1.013785);
   hdirt_stack_3->SetBinError(11,0.6577878);
   hdirt_stack_3->SetBinError(12,0.5532013);
   hdirt_stack_3->SetBinError(13,0.5459963);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(27,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,10.26997);
   houtFV_stack_4->SetBinContent(2,12.93052);
   houtFV_stack_4->SetBinContent(3,14.67334);
   houtFV_stack_4->SetBinContent(4,10.35726);
   houtFV_stack_4->SetBinContent(5,9.490889);
   houtFV_stack_4->SetBinContent(6,13.59052);
   houtFV_stack_4->SetBinContent(7,13.52042);
   houtFV_stack_4->SetBinContent(8,12.30468);
   houtFV_stack_4->SetBinContent(9,13.1937);
   houtFV_stack_4->SetBinContent(10,16.95972);
   houtFV_stack_4->SetBinContent(11,18.44904);
   houtFV_stack_4->SetBinContent(12,19.06801);
   houtFV_stack_4->SetBinContent(13,16.06744);
   houtFV_stack_4->SetBinContent(14,10.36045);
   houtFV_stack_4->SetBinContent(15,5.143103);
   houtFV_stack_4->SetBinContent(16,3.037559);
   houtFV_stack_4->SetBinContent(17,1.517089);
   houtFV_stack_4->SetBinContent(18,1.359805);
   houtFV_stack_4->SetBinContent(19,1.219639);
   houtFV_stack_4->SetBinContent(20,0.5850745);
   houtFV_stack_4->SetBinContent(21,0.536893);
   houtFV_stack_4->SetBinContent(22,1.568651);
   houtFV_stack_4->SetBinContent(23,1.073786);
   houtFV_stack_4->SetBinContent(24,0.7817899);
   houtFV_stack_4->SetBinContent(25,0.5352025);
   houtFV_stack_4->SetBinContent(26,1.125349);
   houtFV_stack_4->SetBinContent(27,0.785171);
   houtFV_stack_4->SetBinContent(28,1.073786);
   houtFV_stack_4->SetBinContent(29,0.7319179);
   houtFV_stack_4->SetBinContent(30,0.8770706);
   houtFV_stack_4->SetBinContent(31,0.3917402);
   houtFV_stack_4->SetBinContent(32,0.3934307);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,2.003127);
   houtFV_stack_4->SetBinError(1,1.641049);
   houtFV_stack_4->SetBinError(2,1.844695);
   houtFV_stack_4->SetBinError(3,1.956911);
   houtFV_stack_4->SetBinError(4,1.618334);
   houtFV_stack_4->SetBinError(5,1.514457);
   houtFV_stack_4->SetBinError(6,1.841586);
   houtFV_stack_4->SetBinError(7,1.818344);
   houtFV_stack_4->SetBinError(8,1.794181);
   houtFV_stack_4->SetBinError(9,1.813874);
   houtFV_stack_4->SetBinError(10,2.113269);
   houtFV_stack_4->SetBinError(11,2.134125);
   houtFV_stack_4->SetBinError(12,2.196266);
   houtFV_stack_4->SetBinError(13,2.043292);
   houtFV_stack_4->SetBinError(14,1.604859);
   houtFV_stack_4->SetBinError(15,1.075401);
   houtFV_stack_4->SetBinError(16,0.8333549);
   houtFV_stack_4->SetBinError(17,0.5887087);
   houtFV_stack_4->SetBinError(18,0.5699262);
   houtFV_stack_4->SetBinError(19,0.4994929);
   houtFV_stack_4->SetBinError(20,0.337793);
   houtFV_stack_4->SetBinError(21,0.3929602);
   houtFV_stack_4->SetBinError(22,0.5546069);
   houtFV_stack_4->SetBinError(23,0.5557297);
   houtFV_stack_4->SetBinError(24,0.3908977);
   houtFV_stack_4->SetBinError(25,0.3921167);
   houtFV_stack_4->SetBinError(26,0.5194673);
   houtFV_stack_4->SetBinError(27,0.3925882);
   houtFV_stack_4->SetBinError(28,0.5557297);
   houtFV_stack_4->SetBinError(29,0.438694);
   houtFV_stack_4->SetBinError(30,0.5197486);
   houtFV_stack_4->SetBinError(31,0.2770047);
   houtFV_stack_4->SetBinError(32,0.2781975);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.7459765);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7234079);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2464078);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.1994106);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6701043);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8914717);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8923038);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.590308);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.911658);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.994358);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.217558);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.54779);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.590308);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3419921);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2278037);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2667597);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4346236);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4731405);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4173393);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4247345);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3591081);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.4346236);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,29.76029);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.88027);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.55833);
   hNCpi0inFVres_stack_7->SetBinContent(4,33.49059);
   hNCpi0inFVres_stack_7->SetBinContent(5,41.2176);
   hNCpi0inFVres_stack_7->SetBinContent(6,50.42348);
   hNCpi0inFVres_stack_7->SetBinContent(7,60.96025);
   hNCpi0inFVres_stack_7->SetBinContent(8,80.87411);
   hNCpi0inFVres_stack_7->SetBinContent(9,107.1746);
   hNCpi0inFVres_stack_7->SetBinContent(10,158.3142);
   hNCpi0inFVres_stack_7->SetBinContent(11,215.4164);
   hNCpi0inFVres_stack_7->SetBinContent(12,234.6743);
   hNCpi0inFVres_stack_7->SetBinContent(13,173.8647);
   hNCpi0inFVres_stack_7->SetBinContent(14,85.60506);
   hNCpi0inFVres_stack_7->SetBinContent(15,37.97273);
   hNCpi0inFVres_stack_7->SetBinContent(16,22.26912);
   hNCpi0inFVres_stack_7->SetBinContent(17,12.28352);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.395523);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.682662);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.084369);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.672606);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.18136);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.747994);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.235584);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.108702);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.649513);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.71619);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.827294);
   hNCpi0inFVres_stack_7->SetBinContent(29,2.187834);
   hNCpi0inFVres_stack_7->SetBinContent(30,1.17064);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.037212);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.059872);
   hNCpi0inFVres_stack_7->SetBinContent(33,1.548958);
   hNCpi0inFVres_stack_7->SetBinContent(34,1.074322);
   hNCpi0inFVres_stack_7->SetBinContent(35,6.513022);
   hNCpi0inFVres_stack_7->SetBinError(1,1.794476);
   hNCpi0inFVres_stack_7->SetBinError(2,1.743152);
   hNCpi0inFVres_stack_7->SetBinError(3,1.749448);
   hNCpi0inFVres_stack_7->SetBinError(4,1.849553);
   hNCpi0inFVres_stack_7->SetBinError(5,2.0943);
   hNCpi0inFVres_stack_7->SetBinError(6,2.329239);
   hNCpi0inFVres_stack_7->SetBinError(7,2.56873);
   hNCpi0inFVres_stack_7->SetBinError(8,2.90044);
   hNCpi0inFVres_stack_7->SetBinError(9,3.348785);
   hNCpi0inFVres_stack_7->SetBinError(10,4.108859);
   hNCpi0inFVres_stack_7->SetBinError(11,4.887434);
   hNCpi0inFVres_stack_7->SetBinError(12,4.961297);
   hNCpi0inFVres_stack_7->SetBinError(13,4.374493);
   hNCpi0inFVres_stack_7->SetBinError(14,3.137559);
   hNCpi0inFVres_stack_7->SetBinError(15,2.071833);
   hNCpi0inFVres_stack_7->SetBinError(16,1.627827);
   hNCpi0inFVres_stack_7->SetBinError(17,1.142577);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9708788);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9132449);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5650509);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7107723);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6385639);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5105947);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6000717);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5579466);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5793755);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4308761);
   hNCpi0inFVres_stack_7->SetBinError(28,0.4847881);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5028499);
   hNCpi0inFVres_stack_7->SetBinError(30,0.3040354);
   hNCpi0inFVres_stack_7->SetBinError(31,0.5473838);
   hNCpi0inFVres_stack_7->SetBinError(32,0.3295301);
   hNCpi0inFVres_stack_7->SetBinError(33,0.4623231);
   hNCpi0inFVres_stack_7->SetBinError(34,0.3674124);
   hNCpi0inFVres_stack_7->SetBinError(35,0.8908445);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.927441);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.334244);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.191168);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.470832);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.019037);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.06712);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.32762);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.8114);
   hNCpi0inFVdis_stack_8->SetBinContent(9,18.35096);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.77611);
   hNCpi0inFVdis_stack_8->SetBinContent(11,34.15903);
   hNCpi0inFVdis_stack_8->SetBinContent(12,41.57001);
   hNCpi0inFVdis_stack_8->SetBinContent(13,34.17149);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.53704);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.129398);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.768764);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.47465);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.966794);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.923612);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.714694);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.365276);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.520226);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.268958);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.29769);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.682722);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.03214);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.226776);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.7250721);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.5440542);
   hNCpi0inFVdis_stack_8->SetBinContent(35,3.708388);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7441225);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9041791);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8126271);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8091071);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9447708);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.032152);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.189393);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.326461);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.347902);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.538587);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.870634);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.113325);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.926313);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.362335);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.954981);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7579);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7441231);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4887857);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4387085);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4241235);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3337351);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4401114);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3923435);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4171068);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2684567);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3749275);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3993898);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3150384);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2957079);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.6062553);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,10.28855);
   hCCpi0inFV_stack_10->SetBinContent(2,10.74783);
   hCCpi0inFV_stack_10->SetBinContent(3,11.20371);
   hCCpi0inFV_stack_10->SetBinContent(4,14.17423);
   hCCpi0inFV_stack_10->SetBinContent(5,12.70718);
   hCCpi0inFV_stack_10->SetBinContent(6,22.50338);
   hCCpi0inFV_stack_10->SetBinContent(7,23.43315);
   hCCpi0inFV_stack_10->SetBinContent(8,26.75143);
   hCCpi0inFV_stack_10->SetBinContent(9,37.70425);
   hCCpi0inFV_stack_10->SetBinContent(10,43.87769);
   hCCpi0inFV_stack_10->SetBinContent(11,49.94223);
   hCCpi0inFV_stack_10->SetBinContent(12,60.07663);
   hCCpi0inFV_stack_10->SetBinContent(13,52.16401);
   hCCpi0inFV_stack_10->SetBinContent(14,30.76784);
   hCCpi0inFV_stack_10->SetBinContent(15,14.94003);
   hCCpi0inFV_stack_10->SetBinContent(16,11.77191);
   hCCpi0inFV_stack_10->SetBinContent(17,8.994336);
   hCCpi0inFV_stack_10->SetBinContent(18,6.094053);
   hCCpi0inFV_stack_10->SetBinContent(19,6.338935);
   hCCpi0inFV_stack_10->SetBinContent(20,5.329676);
   hCCpi0inFV_stack_10->SetBinContent(21,6.037693);
   hCCpi0inFV_stack_10->SetBinContent(22,4.681813);
   hCCpi0inFV_stack_10->SetBinContent(23,2.392469);
   hCCpi0inFV_stack_10->SetBinContent(24,4.54109);
   hCCpi0inFV_stack_10->SetBinContent(25,4.93009);
   hCCpi0inFV_stack_10->SetBinContent(26,3.379741);
   hCCpi0inFV_stack_10->SetBinContent(27,2.252388);
   hCCpi0inFV_stack_10->SetBinContent(28,2.432416);
   hCCpi0inFV_stack_10->SetBinContent(29,2.535931);
   hCCpi0inFV_stack_10->SetBinContent(30,3.095889);
   hCCpi0inFV_stack_10->SetBinContent(31,1.629293);
   hCCpi0inFV_stack_10->SetBinContent(32,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(33,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(34,1.26543);
   hCCpi0inFV_stack_10->SetBinContent(35,14.60816);
   hCCpi0inFV_stack_10->SetBinError(1,1.651854);
   hCCpi0inFV_stack_10->SetBinError(2,1.712194);
   hCCpi0inFV_stack_10->SetBinError(3,1.738205);
   hCCpi0inFV_stack_10->SetBinError(4,1.846148);
   hCCpi0inFV_stack_10->SetBinError(5,1.75482);
   hCCpi0inFV_stack_10->SetBinError(6,2.365319);
   hCCpi0inFV_stack_10->SetBinError(7,2.436465);
   hCCpi0inFV_stack_10->SetBinError(8,2.594934);
   hCCpi0inFV_stack_10->SetBinError(9,3.046814);
   hCCpi0inFV_stack_10->SetBinError(10,3.334721);
   hCCpi0inFV_stack_10->SetBinError(11,3.564843);
   hCCpi0inFV_stack_10->SetBinError(12,3.88313);
   hCCpi0inFV_stack_10->SetBinError(13,3.597536);
   hCCpi0inFV_stack_10->SetBinError(14,2.81029);
   hCCpi0inFV_stack_10->SetBinError(15,1.9764);
   hCCpi0inFV_stack_10->SetBinError(16,1.704884);
   hCCpi0inFV_stack_10->SetBinError(17,1.468148);
   hCCpi0inFV_stack_10->SetBinError(18,1.257431);
   hCCpi0inFV_stack_10->SetBinError(19,1.262621);
   hCCpi0inFV_stack_10->SetBinError(20,1.091426);
   hCCpi0inFV_stack_10->SetBinError(21,1.197664);
   hCCpi0inFV_stack_10->SetBinError(22,1.14459);
   hCCpi0inFV_stack_10->SetBinError(23,0.7848912);
   hCCpi0inFV_stack_10->SetBinError(24,1.075819);
   hCCpi0inFV_stack_10->SetBinError(25,1.144463);
   hCCpi0inFV_stack_10->SetBinError(26,0.9348349);
   hCCpi0inFV_stack_10->SetBinError(27,0.7350883);
   hCCpi0inFV_stack_10->SetBinError(28,0.7956773);
   hCCpi0inFV_stack_10->SetBinError(29,0.8325131);
   hCCpi0inFV_stack_10->SetBinError(30,0.8964181);
   hCCpi0inFV_stack_10->SetBinError(31,0.745413);
   hCCpi0inFV_stack_10->SetBinError(32,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(33,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(34,0.5878314);
   hCCpi0inFV_stack_10->SetBinError(35,1.923024);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,12.05932);
   hNCinFV_stack_11->SetBinContent(2,11.85922);
   hNCinFV_stack_11->SetBinContent(3,9.621438);
   hNCinFV_stack_11->SetBinContent(4,11.96235);
   hNCinFV_stack_11->SetBinContent(5,16.36738);
   hNCinFV_stack_11->SetBinContent(6,8.852564);
   hNCinFV_stack_11->SetBinContent(7,13.6846);
   hNCinFV_stack_11->SetBinContent(8,11.20808);
   hNCinFV_stack_11->SetBinContent(9,14.6177);
   hNCinFV_stack_11->SetBinContent(10,14.70499);
   hNCinFV_stack_11->SetBinContent(11,20.71347);
   hNCinFV_stack_11->SetBinContent(12,13.60055);
   hNCinFV_stack_11->SetBinContent(13,15.19831);
   hNCinFV_stack_11->SetBinContent(14,12.44767);
   hNCinFV_stack_11->SetBinContent(15,7.429066);
   hNCinFV_stack_11->SetBinContent(16,5.373393);
   hNCinFV_stack_11->SetBinContent(17,4.644856);
   hNCinFV_stack_11->SetBinContent(18,6.347435);
   hNCinFV_stack_11->SetBinContent(19,5.023681);
   hNCinFV_stack_11->SetBinContent(20,5.658628);
   hNCinFV_stack_11->SetBinContent(21,5.800399);
   hNCinFV_stack_11->SetBinContent(22,1.660551);
   hNCinFV_stack_11->SetBinContent(23,2.639056);
   hNCinFV_stack_11->SetBinContent(24,4.249735);
   hNCinFV_stack_11->SetBinContent(25,1.804013);
   hNCinFV_stack_11->SetBinContent(26,2.357203);
   hNCinFV_stack_11->SetBinContent(27,3.370974);
   hNCinFV_stack_11->SetBinContent(28,2.158798);
   hNCinFV_stack_11->SetBinContent(29,2.734337);
   hNCinFV_stack_11->SetBinContent(30,2.194063);
   hNCinFV_stack_11->SetBinContent(31,2.339216);
   hNCinFV_stack_11->SetBinContent(32,1.805704);
   hNCinFV_stack_11->SetBinContent(33,1.805704);
   hNCinFV_stack_11->SetBinContent(34,1.660551);
   hNCinFV_stack_11->SetBinContent(35,19.89473);
   hNCinFV_stack_11->SetBinError(1,1.788371);
   hNCinFV_stack_11->SetBinError(2,1.777146);
   hNCinFV_stack_11->SetBinError(3,1.557314);
   hNCinFV_stack_11->SetBinError(4,1.75507);
   hNCinFV_stack_11->SetBinError(5,2.059195);
   hNCinFV_stack_11->SetBinError(6,1.441908);
   hNCinFV_stack_11->SetBinError(7,1.862487);
   hNCinFV_stack_11->SetBinError(8,1.5942);
   hNCinFV_stack_11->SetBinError(9,1.871728);
   hNCinFV_stack_11->SetBinError(10,1.913262);
   hNCinFV_stack_11->SetBinError(11,2.28867);
   hNCinFV_stack_11->SetBinError(12,1.776944);
   hNCinFV_stack_11->SetBinError(13,1.952975);
   hNCinFV_stack_11->SetBinError(14,1.809331);
   hNCinFV_stack_11->SetBinError(15,1.359851);
   hNCinFV_stack_11->SetBinError(16,1.160835);
   hNCinFV_stack_11->SetBinError(17,1.075365);
   hNCinFV_stack_11->SetBinError(18,1.31745);
   hNCinFV_stack_11->SetBinError(19,1.194349);
   hNCinFV_stack_11->SetBinError(20,1.225121);
   hNCinFV_stack_11->SetBinError(21,1.2559);
   hNCinFV_stack_11->SetBinError(22,0.650847);
   hNCinFV_stack_11->SetBinError(23,0.784283);
   hNCinFV_stack_11->SetBinError(24,1.038438);
   hNCinFV_stack_11->SetBinError(25,0.7075491);
   hNCinFV_stack_11->SetBinError(26,0.6804695);
   hNCinFV_stack_11->SetBinError(27,0.8986391);
   hNCinFV_stack_11->SetBinError(28,0.6509067);
   hNCinFV_stack_11->SetBinError(29,0.8558255);
   hNCinFV_stack_11->SetBinError(30,0.7594044);
   hNCinFV_stack_11->SetBinError(31,0.8089383);
   hNCinFV_stack_11->SetBinError(32,0.7080169);
   hNCinFV_stack_11->SetBinError(33,0.7080169);
   hNCinFV_stack_11->SetBinError(34,0.650847);
   hNCinFV_stack_11->SetBinError(35,2.220705);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,21.86111);
   hnumuCCinFV_stack_12->SetBinContent(2,25.13482);
   hnumuCCinFV_stack_12->SetBinContent(3,27.45182);
   hnumuCCinFV_stack_12->SetBinContent(4,23.21281);
   hnumuCCinFV_stack_12->SetBinContent(5,24.20328);
   hnumuCCinFV_stack_12->SetBinContent(6,27.31219);
   hnumuCCinFV_stack_12->SetBinContent(7,24.08325);
   hnumuCCinFV_stack_12->SetBinContent(8,24.29547);
   hnumuCCinFV_stack_12->SetBinContent(9,19.12951);
   hnumuCCinFV_stack_12->SetBinContent(10,26.17752);
   hnumuCCinFV_stack_12->SetBinContent(11,22.97012);
   hnumuCCinFV_stack_12->SetBinContent(12,21.81128);
   hnumuCCinFV_stack_12->SetBinContent(13,15.97086);
   hnumuCCinFV_stack_12->SetBinContent(14,15.41628);
   hnumuCCinFV_stack_12->SetBinContent(15,8.149388);
   hnumuCCinFV_stack_12->SetBinContent(16,6.323561);
   hnumuCCinFV_stack_12->SetBinContent(17,4.788019);
   hnumuCCinFV_stack_12->SetBinContent(18,5.688776);
   hnumuCCinFV_stack_12->SetBinContent(19,2.681973);
   hnumuCCinFV_stack_12->SetBinContent(20,4.000684);
   hnumuCCinFV_stack_12->SetBinContent(21,3.037729);
   hnumuCCinFV_stack_12->SetBinContent(22,1.78494);
   hnumuCCinFV_stack_12->SetBinContent(23,2.298266);
   hnumuCCinFV_stack_12->SetBinContent(24,2.915915);
   hnumuCCinFV_stack_12->SetBinContent(25,1.173887);
   hnumuCCinFV_stack_12->SetBinContent(26,2.605143);
   hnumuCCinFV_stack_12->SetBinContent(27,1.504494);
   hnumuCCinFV_stack_12->SetBinContent(28,2.162818);
   hnumuCCinFV_stack_12->SetBinContent(29,2.000729);
   hnumuCCinFV_stack_12->SetBinContent(30,1.542449);
   hnumuCCinFV_stack_12->SetBinContent(31,0.9801958);
   hnumuCCinFV_stack_12->SetBinContent(32,1.770851);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(35,11.24263);
   hnumuCCinFV_stack_12->SetBinError(1,2.618013);
   hnumuCCinFV_stack_12->SetBinError(2,3.28477);
   hnumuCCinFV_stack_12->SetBinError(3,3.335002);
   hnumuCCinFV_stack_12->SetBinError(4,2.855085);
   hnumuCCinFV_stack_12->SetBinError(5,3.147329);
   hnumuCCinFV_stack_12->SetBinError(6,3.126728);
   hnumuCCinFV_stack_12->SetBinError(7,2.838113);
   hnumuCCinFV_stack_12->SetBinError(8,2.63236);
   hnumuCCinFV_stack_12->SetBinError(9,2.368663);
   hnumuCCinFV_stack_12->SetBinError(10,2.826664);
   hnumuCCinFV_stack_12->SetBinError(11,2.63234);
   hnumuCCinFV_stack_12->SetBinError(12,2.890221);
   hnumuCCinFV_stack_12->SetBinError(13,3.119461);
   hnumuCCinFV_stack_12->SetBinError(14,2.112832);
   hnumuCCinFV_stack_12->SetBinError(15,1.429872);
   hnumuCCinFV_stack_12->SetBinError(16,1.284062);
   hnumuCCinFV_stack_12->SetBinError(17,1.141533);
   hnumuCCinFV_stack_12->SetBinError(18,1.199108);
   hnumuCCinFV_stack_12->SetBinError(19,0.796132);
   hnumuCCinFV_stack_12->SetBinError(20,1.137127);
   hnumuCCinFV_stack_12->SetBinError(21,1.022856);
   hnumuCCinFV_stack_12->SetBinError(22,0.6511936);
   hnumuCCinFV_stack_12->SetBinError(23,1.123171);
   hnumuCCinFV_stack_12->SetBinError(24,0.8752848);
   hnumuCCinFV_stack_12->SetBinError(25,0.5908181);
   hnumuCCinFV_stack_12->SetBinError(26,0.890933);
   hnumuCCinFV_stack_12->SetBinError(27,0.6344715);
   hnumuCCinFV_stack_12->SetBinError(28,0.6984412);
   hnumuCCinFV_stack_12->SetBinError(29,0.7343859);
   hnumuCCinFV_stack_12->SetBinError(30,0.5977372);
   hnumuCCinFV_stack_12->SetBinError(31,0.4383608);
   hnumuCCinFV_stack_12->SetBinError(32,0.6410718);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.340721);
   hnumuCCinFV_stack_12->SetBinError(35,1.642654);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.480516);
   hnueCCinFV_stack_13->SetBinContent(2,1.700719);
   hnueCCinFV_stack_13->SetBinContent(3,1.6075);
   hnueCCinFV_stack_13->SetBinContent(4,0.9042566);
   hnueCCinFV_stack_13->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_13->SetBinContent(6,0.9313612);
   hnueCCinFV_stack_13->SetBinContent(7,0.9760798);
   hnueCCinFV_stack_13->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(9,1.694324);
   hnueCCinFV_stack_13->SetBinContent(10,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(11,1.978352);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.9409961);
   hnueCCinFV_stack_13->SetBinContent(14,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.5040739);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,1.764711);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,1.539164);
   hnueCCinFV_stack_13->SetBinError(1,0.6267061);
   hnueCCinFV_stack_13->SetBinError(2,0.6536358);
   hnueCCinFV_stack_13->SetBinError(3,0.7343427);
   hnueCCinFV_stack_13->SetBinError(4,0.4540547);
   hnueCCinFV_stack_13->SetBinError(5,0.3554931);
   hnueCCinFV_stack_13->SetBinError(6,0.4996515);
   hnueCCinFV_stack_13->SetBinError(7,0.5861572);
   hnueCCinFV_stack_13->SetBinError(8,0.2107505);
   hnueCCinFV_stack_13->SetBinError(9,1.222319);
   hnueCCinFV_stack_13->SetBinError(10,0.1711909);
   hnueCCinFV_stack_13->SetBinError(11,0.8302238);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.563664);
   hnueCCinFV_stack_13->SetBinError(14,0.4800908);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3564435);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,1.581755);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,0.5963856);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__14->SetBinContent(1,107.5841);
   hmcerror__14->SetBinContent(2,117.22);
   hmcerror__14->SetBinContent(3,122.8831);
   hmcerror__14->SetBinContent(4,116.392);
   hmcerror__14->SetBinContent(5,131.7469);
   hmcerror__14->SetBinContent(6,159.5415);
   hmcerror__14->SetBinContent(7,169.9278);
   hmcerror__14->SetBinContent(8,199.18);
   hmcerror__14->SetBinContent(9,241.1847);
   hmcerror__14->SetBinContent(10,323.5302);
   hmcerror__14->SetBinContent(11,393.8357);
   hmcerror__14->SetBinContent(12,427.6906);
   hmcerror__14->SetBinContent(13,347.507);
   hmcerror__14->SetBinContent(14,184.4709);
   hmcerror__14->SetBinContent(15,90.34196);
   hmcerror__14->SetBinContent(16,62.79036);
   hmcerror__14->SetBinContent(17,40.98059);
   hmcerror__14->SetBinContent(18,33.77527);
   hmcerror__14->SetBinContent(19,26.37189);
   hmcerror__14->SetBinContent(20,25.44034);
   hmcerror__14->SetBinContent(21,23.39338);
   hmcerror__14->SetBinContent(22,17.96974);
   hmcerror__14->SetBinContent(23,14.7216);
   hmcerror__14->SetBinContent(24,18.04476);
   hmcerror__14->SetBinContent(25,14.23097);
   hmcerror__14->SetBinContent(26,14.43465);
   hmcerror__14->SetBinContent(27,10.67463);
   hmcerror__14->SetBinContent(28,11.61606);
   hmcerror__14->SetBinContent(29,12.11208);
   hmcerror__14->SetBinContent(30,10.33025);
   hmcerror__14->SetBinContent(31,7.711794);
   hmcerror__14->SetBinContent(32,8.421942);
   hmcerror__14->SetBinContent(33,5.862522);
   hmcerror__14->SetBinContent(34,5.721712);
   hmcerror__14->SetBinContent(35,66.06506);
   hmcerror__14->SetBinError(1,37.95796);
   hmcerror__14->SetBinError(2,35.54079);
   hmcerror__14->SetBinError(3,36.4063);
   hmcerror__14->SetBinError(4,38.0199);
   hmcerror__14->SetBinError(5,40.18812);
   hmcerror__14->SetBinError(6,48.41007);
   hmcerror__14->SetBinError(7,54.85861);
   hmcerror__14->SetBinError(8,70.52367);
   hmcerror__14->SetBinError(9,82.88979);
   hmcerror__14->SetBinError(10,123.5792);
   hmcerror__14->SetBinError(11,158.1349);
   hmcerror__14->SetBinError(12,168.7674);
   hmcerror__14->SetBinError(13,159.591);
   hmcerror__14->SetBinError(14,112.1246);
   hmcerror__14->SetBinError(15,61.72346);
   hmcerror__14->SetBinError(16,26.63907);
   hmcerror__14->SetBinError(17,18.53402);
   hmcerror__14->SetBinError(18,16.43699);
   hmcerror__14->SetBinError(19,18.9826);
   hmcerror__14->SetBinError(20,16.48523);
   hmcerror__14->SetBinError(21,12.60053);
   hmcerror__14->SetBinError(22,9.822722);
   hmcerror__14->SetBinError(23,10.84996);
   hmcerror__14->SetBinError(24,14.63744);
   hmcerror__14->SetBinError(25,11.8792);
   hmcerror__14->SetBinError(26,10.87856);
   hmcerror__14->SetBinError(27,9.244766);
   hmcerror__14->SetBinError(28,10.10174);
   hmcerror__14->SetBinError(29,10.42343);
   hmcerror__14->SetBinError(30,9.858526);
   hmcerror__14->SetBinError(31,8.33536);
   hmcerror__14->SetBinError(32,8.692541);
   hmcerror__14->SetBinError(33,5.63845);
   hmcerror__14->SetBinError(34,6.482934);
   hmcerror__14->SetBinError(35,45.48049);
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
   
   Double_t _fx3017[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3017[34] = {
   84,
   85,
   98,
   109,
   104,
   116,
   163,
   127,
   189,
   255,
   277,
   356,
   230,
   96,
   76,
   27,
   23,
   29,
   19,
   17,
   14,
   20,
   8,
   11,
   6,
   7,
   10,
   10,
   3,
   6,
   3,
   5,
   3,
   3};
   Double_t _felx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3017[34] = {
   9.2886,
   9.3428,
   10.0209,
   10.44031,
   10.19804,
   10.77033,
   12.76715,
   11.26943,
   13.74773,
   15.96872,
   16.64332,
   18.86796,
   15.16575,
   9.9196,
   8.8425,
   5.3414,
   4.9457,
   5.5285,
   4.5151,
   4.2835,
   3.9102,
   4.6266,
   3.0307,
   3.4975,
   2.67925,
   2.85954,
   3.34883,
   3.34883,
   2.143368,
   2.67925,
   2.143368,
   2.48995,
   2.143368,
   2.143368};
   Double_t _fehx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3017[34] = {
   9.0869,
   9.1411,
   9.82,
   10.44031,
   10.19804,
   10.77033,
   12.76715,
   11.26943,
   13.74773,
   15.96872,
   16.64332,
   18.86796,
   15.16575,
   9.718,
   8.6406,
   5.1322,
   4.7346,
   5.3201,
   4.3011,
   4.0673,
   3.6898,
   4.4133,
   2.7896,
   3.27,
   2.41858,
   2.61053,
   3.1179,
   3.1179,
   1.72422,
   2.41858,
   1.72422,
   2.21064,
   1.72422,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(412.2691);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.1/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2589.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 80.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 271.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 214.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1457.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  280.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 258.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 375.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3018[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3018[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3018[34] = {
   0.3528211,
   0.3031973,
   0.2962676,
   0.3266539,
   0.3050404,
   0.3034325,
   0.3228349,
   0.3540701,
   0.3436777,
   0.3819711,
   0.4015252,
   0.3946015,
   0.4592455,
   0.6078169,
   0.6832202,
   0.4242542,
   0.4522633,
   0.4866576,
   0.7198043,
   0.6479957,
   0.5386367,
   0.5466256,
   0.7370093,
   0.8111739,
   0.8347429,
   0.7536424,
   0.8660507,
   0.869636,
   0.8605814,
   0.9543352,
   1.080859,
   1.03213,
   0.9617789,
   1.133041};
   Double_t _fehx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3018[34] = {
   0.3528211,
   0.3031973,
   0.2962676,
   0.3266539,
   0.3050404,
   0.3034325,
   0.3228349,
   0.3540701,
   0.3436777,
   0.3819711,
   0.4015252,
   0.3946015,
   0.4592455,
   0.6078169,
   0.6832202,
   0.4242542,
   0.4522633,
   0.4866576,
   0.7198043,
   0.6479957,
   0.5386367,
   0.5466256,
   0.7370093,
   0.8111739,
   0.8347429,
   0.7536424,
   0.8660507,
   0.869636,
   0.8605814,
   0.9543352,
   1.080859,
   1.03213,
   0.9617789,
   1.133041};
   grae = new TGraphAsymmErrors(34,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,440);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3019[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3019[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3019[34] = {
   0.2251138,
   0.2126375,
   0.2101951,
   0.2361824,
   0.256096,
   0.2561128,
   0.2670693,
   0.3031616,
   0.3265602,
   0.355116,
   0.3873281,
   0.3827322,
   0.3543082,
   0.3508773,
   0.3317718,
   0.3058393,
   0.2906483,
   0.2883266,
   0.3202294,
   0.273573,
   0.2855045,
   0.2700403,
   0.314078,
   0.2869683,
   0.3033735,
   0.2763522,
   0.3276311,
   0.2758202,
   0.3756159,
   0.3098925,
   0.3524814,
   0.2914293,
   0.3544635,
   0.3283296};
   Double_t _fehx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3019[34] = {
   0.2251138,
   0.2126375,
   0.2101951,
   0.2361824,
   0.256096,
   0.2561128,
   0.2670693,
   0.3031616,
   0.3265602,
   0.355116,
   0.3873281,
   0.3827322,
   0.3543082,
   0.3508773,
   0.3317718,
   0.3058393,
   0.2906483,
   0.2883266,
   0.3202294,
   0.273573,
   0.2855045,
   0.2700403,
   0.314078,
   0.2869683,
   0.3033735,
   0.2763522,
   0.3276311,
   0.2758202,
   0.3756159,
   0.3098925,
   0.3524814,
   0.2914293,
   0.3544635,
   0.3283296};
   grae = new TGraphAsymmErrors(34,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,440);
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
   
   Double_t _fx3020[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3020[34] = {
   0.7807842,
   0.7251322,
   0.7975057,
   0.9364904,
   0.7893926,
   0.7270837,
   0.9592311,
   0.6376143,
   0.7836319,
   0.7881798,
   0.703339,
   0.8323773,
   0.6618572,
   0.5204072,
   0.841248,
   0.4300023,
   0.5612413,
   0.8586164,
   0.7204642,
   0.6682301,
   0.5984599,
   1.112982,
   0.5434191,
   0.6095953,
   0.4216157,
   0.4849443,
   0.936801,
   0.8608771,
   0.2476866,
   0.5808182,
   0.3890145,
   0.5936873,
   0.5117251,
   0.5243186};
   Double_t _felx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3020[34] = {
   0.086338,
   0.07970312,
   0.08154821,
   0.08969951,
   0.07740632,
   0.06750803,
   0.07513278,
   0.05657912,
   0.05700083,
   0.04935773,
   0.04225954,
   0.04411591,
   0.04364157,
   0.05377324,
   0.0978781,
   0.0850672,
   0.120684,
   0.1636849,
   0.1712088,
   0.1683743,
   0.1671498,
   0.2574661,
   0.2058675,
   0.1938236,
   0.188269,
   0.1981025,
   0.3137187,
   0.2882931,
   0.1769612,
   0.2593595,
   0.2779338,
   0.2956503,
   0.3656051,
   0.3746026};
   Double_t _fehx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3020[34] = {
   0.08446319,
   0.07798243,
   0.07991333,
   0.08969951,
   0.07740632,
   0.06750803,
   0.07513278,
   0.05657912,
   0.05700083,
   0.04935773,
   0.04225954,
   0.04411591,
   0.04364157,
   0.05268038,
   0.09564326,
   0.08173548,
   0.1155327,
   0.1575147,
   0.1630941,
   0.159876,
   0.1577284,
   0.2455962,
   0.1894902,
   0.1812161,
   0.1699519,
   0.1808516,
   0.2920852,
   0.2684129,
   0.1423554,
   0.2341259,
   0.2235822,
   0.2624858,
   0.2941089,
   0.3013469};
   grae = new TGraphAsymmErrors(34,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0.06365288);
   Graph_Graph3020->SetMaximum(1.487363);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
