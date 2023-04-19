#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 18:43:51 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-1.307692,-1.351562,1.25641,149.4544);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__25->SetBinContent(1,19.8883);
   hmc__25->SetBinContent(2,14.44362);
   hmc__25->SetBinContent(3,11.51461);
   hmc__25->SetBinContent(4,16.60041);
   hmc__25->SetBinContent(5,15.70957);
   hmc__25->SetBinContent(6,14.29967);
   hmc__25->SetBinContent(7,15.18634);
   hmc__25->SetBinContent(8,15.43727);
   hmc__25->SetBinContent(9,20.90397);
   hmc__25->SetBinContent(10,18.63648);
   hmc__25->SetBinContent(11,23.30183);
   hmc__25->SetBinContent(12,27.989);
   hmc__25->SetBinContent(13,26.04467);
   hmc__25->SetBinContent(14,30.81704);
   hmc__25->SetBinContent(15,28.0974);
   hmc__25->SetBinContent(16,28.84638);
   hmc__25->SetBinContent(17,30.04193);
   hmc__25->SetBinContent(18,33.28771);
   hmc__25->SetBinContent(19,41.74059);
   hmc__25->SetBinContent(20,44.69764);
   hmc__25->SetBinContent(21,51.33542);
   hmc__25->SetBinContent(22,66.65323);
   hmc__25->SetBinContent(23,67.57812);
   hmc__25->SetBinContent(24,58.0064);
   hmc__25->SetBinError(1,10.07607);
   hmc__25->SetBinError(2,11.53509);
   hmc__25->SetBinError(3,7.054496);
   hmc__25->SetBinError(4,10.41997);
   hmc__25->SetBinError(5,7.95378);
   hmc__25->SetBinError(6,8.935213);
   hmc__25->SetBinError(7,10.37453);
   hmc__25->SetBinError(8,9.601865);
   hmc__25->SetBinError(9,11.5292);
   hmc__25->SetBinError(10,12.49717);
   hmc__25->SetBinError(11,10.24882);
   hmc__25->SetBinError(12,14.58655);
   hmc__25->SetBinError(13,16.51262);
   hmc__25->SetBinError(14,13.83386);
   hmc__25->SetBinError(15,14.40606);
   hmc__25->SetBinError(16,16.31033);
   hmc__25->SetBinError(17,15.20932);
   hmc__25->SetBinError(18,14.32948);
   hmc__25->SetBinError(19,27.41014);
   hmc__25->SetBinError(20,21.52091);
   hmc__25->SetBinError(21,18.81803);
   hmc__25->SetBinError(22,22.69392);
   hmc__25->SetBinError(23,23.81212);
   hmc__25->SetBinError(24,28.20872);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-1.351562);
   hmc__25->SetMaximum(141.9141);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,-1,1);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(70.95703);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.536893);
   hbadmatch_stack_1->SetBinContent(2,1.625193);
   hbadmatch_stack_1->SetBinContent(3,0.7625321);
   hbadmatch_stack_1->SetBinContent(5,0.5552304);
   hbadmatch_stack_1->SetBinContent(6,0.6348748);
   hbadmatch_stack_1->SetBinContent(7,0.7319179);
   hbadmatch_stack_1->SetBinContent(8,0.769953);
   hbadmatch_stack_1->SetBinContent(9,0.6803553);
   hbadmatch_stack_1->SetBinContent(10,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,0.4346794);
   hbadmatch_stack_1->SetBinContent(12,0.5867651);
   hbadmatch_stack_1->SetBinContent(13,0.602471);
   hbadmatch_stack_1->SetBinContent(14,1.224516);
   hbadmatch_stack_1->SetBinContent(15,1.413964);
   hbadmatch_stack_1->SetBinContent(16,1.26087);
   hbadmatch_stack_1->SetBinContent(17,1.65886);
   hbadmatch_stack_1->SetBinContent(18,1.026765);
   hbadmatch_stack_1->SetBinContent(19,1.065621);
   hbadmatch_stack_1->SetBinContent(20,1.65886);
   hbadmatch_stack_1->SetBinContent(21,0.3900497);
   hbadmatch_stack_1->SetBinContent(22,3.332072);
   hbadmatch_stack_1->SetBinContent(23,0.9303237);
   hbadmatch_stack_1->SetBinContent(24,1.392014);
   hbadmatch_stack_1->SetBinError(1,0.3929602);
   hbadmatch_stack_1->SetBinError(2,0.6267778);
   hbadmatch_stack_1->SetBinError(3,0.5423136);
   hbadmatch_stack_1->SetBinError(5,0.4024531);
   hbadmatch_stack_1->SetBinError(6,0.36836);
   hbadmatch_stack_1->SetBinError(7,0.438694);
   hbadmatch_stack_1->SetBinError(8,0.4681484);
   hbadmatch_stack_1->SetBinError(9,0.4810838);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.3087456);
   hbadmatch_stack_1->SetBinError(12,0.3387718);
   hbadmatch_stack_1->SetBinError(13,0.4509263);
   hbadmatch_stack_1->SetBinError(14,0.5898948);
   hbadmatch_stack_1->SetBinError(15,0.6515799);
   hbadmatch_stack_1->SetBinError(16,0.5894874);
   hbadmatch_stack_1->SetBinError(17,0.650338);
   hbadmatch_stack_1->SetBinError(18,0.4613175);
   hbadmatch_stack_1->SetBinError(19,0.4790264);
   hbadmatch_stack_1->SetBinError(20,0.650338);
   hbadmatch_stack_1->SetBinError(21,0.2758068);
   hbadmatch_stack_1->SetBinError(22,1.014473);
   hbadmatch_stack_1->SetBinError(23,0.4814682);
   hbadmatch_stack_1->SetBinError(24,0.582076);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,3.483397);
   hext_stack_2->SetBinContent(2,2.973055);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,4.110651);
   hext_stack_2->SetBinContent(5,4.110651);
   hext_stack_2->SetBinContent(6,1.137595);
   hext_stack_2->SetBinContent(7,0.7309963);
   hext_stack_2->SetBinContent(8,1.290409);
   hext_stack_2->SetBinContent(9,3.939067);
   hext_stack_2->SetBinContent(10,2.028585);
   hext_stack_2->SetBinContent(11,3.558419);
   hext_stack_2->SetBinContent(12,4.912259);
   hext_stack_2->SetBinContent(13,4.270645);
   hext_stack_2->SetBinContent(14,5.86391);
   hext_stack_2->SetBinContent(15,4.192852);
   hext_stack_2->SetBinContent(16,1.78639);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(18,2.103607);
   hext_stack_2->SetBinContent(19,8.195351);
   hext_stack_2->SetBinContent(20,2.67738);
   hext_stack_2->SetBinContent(21,4.994461);
   hext_stack_2->SetBinContent(22,7.2134);
   hext_stack_2->SetBinContent(23,7.918446);
   hext_stack_2->SetBinContent(24,4.538791);
   hext_stack_2->SetBinError(1,1.197416);
   hext_stack_2->SetBinError(2,1.346105);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,1.499292);
   hext_stack_2->SetBinError(5,1.499292);
   hext_stack_2->SetBinError(6,0.6602113);
   hext_stack_2->SetBinError(7,0.5201503);
   hext_stack_2->SetBinError(8,0.788756);
   hext_stack_2->SetBinError(9,1.526073);
   hext_stack_2->SetBinError(10,0.8315593);
   hext_stack_2->SetBinError(11,1.301958);
   hext_stack_2->SetBinError(12,1.626223);
   hext_stack_2->SetBinError(13,1.4943);
   hext_stack_2->SetBinError(14,1.887831);
   hext_stack_2->SetBinError(15,1.519199);
   hext_stack_2->SetBinError(16,0.8039566);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(18,0.9761052);
   hext_stack_2->SetBinError(19,2.228056);
   hext_stack_2->SetBinError(20,0.9497147);
   hext_stack_2->SetBinError(21,1.644594);
   hext_stack_2->SetBinError(22,1.745817);
   hext_stack_2->SetBinError(23,1.946);
   hext_stack_2->SetBinError(24,1.345212);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,0.6917204);
   hdirt_stack_3->SetBinContent(3,0.4049124);
   hdirt_stack_3->SetBinContent(9,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.400075);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.6910642);
   hdirt_stack_3->SetBinContent(22,0.2669376);
   hdirt_stack_3->SetBinContent(23,0.4946486);
   hdirt_stack_3->SetBinContent(24,0.2623434);
   hdirt_stack_3->SetBinError(1,0.5030208);
   hdirt_stack_3->SetBinError(3,0.4049124);
   hdirt_stack_3->SetBinError(9,0.3381872);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.296158);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.3381872);
   hdirt_stack_3->SetBinError(19,0.4585707);
   hdirt_stack_3->SetBinError(22,0.2645965);
   hdirt_stack_3->SetBinError(23,0.3726269);
   hdirt_stack_3->SetBinError(24,0.2623434);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,4.35117);
   houtFV_stack_4->SetBinContent(2,1.766448);
   houtFV_stack_4->SetBinContent(3,1.771841);
   houtFV_stack_4->SetBinContent(4,2.24459);
   houtFV_stack_4->SetBinContent(5,1.513708);
   houtFV_stack_4->SetBinContent(6,0.536893);
   houtFV_stack_4->SetBinContent(7,2.839153);
   houtFV_stack_4->SetBinContent(8,2.667466);
   houtFV_stack_4->SetBinContent(9,3.752806);
   houtFV_stack_4->SetBinContent(10,1.713804);
   houtFV_stack_4->SetBinContent(11,4.090942);
   houtFV_stack_4->SetBinContent(12,4.448141);
   houtFV_stack_4->SetBinContent(13,3.767786);
   houtFV_stack_4->SetBinContent(14,4.271311);
   houtFV_stack_4->SetBinContent(15,3.66128);
   houtFV_stack_4->SetBinContent(16,4.546571);
   houtFV_stack_4->SetBinContent(17,7.127254);
   houtFV_stack_4->SetBinContent(18,5.591271);
   houtFV_stack_4->SetBinContent(19,4.402009);
   houtFV_stack_4->SetBinContent(20,8.789875);
   houtFV_stack_4->SetBinContent(21,8.463141);
   houtFV_stack_4->SetBinContent(22,10.30195);
   houtFV_stack_4->SetBinContent(23,15.00111);
   houtFV_stack_4->SetBinContent(24,13.67573);
   houtFV_stack_4->SetBinError(1,0.9998562);
   houtFV_stack_4->SetBinError(2,0.6394854);
   houtFV_stack_4->SetBinError(3,0.6543158);
   houtFV_stack_4->SetBinError(4,0.8325205);
   houtFV_stack_4->SetBinError(5,0.5875827);
   houtFV_stack_4->SetBinError(6,0.3929602);
   houtFV_stack_4->SetBinError(7,0.8093956);
   houtFV_stack_4->SetBinError(8,0.7918257);
   houtFV_stack_4->SetBinError(9,1.016257);
   houtFV_stack_4->SetBinError(10,0.6207051);
   houtFV_stack_4->SetBinError(11,1.056696);
   houtFV_stack_4->SetBinError(12,1.057219);
   houtFV_stack_4->SetBinError(13,0.9414194);
   houtFV_stack_4->SetBinError(14,1.006914);
   houtFV_stack_4->SetBinError(15,0.9812871);
   houtFV_stack_4->SetBinError(16,1.048503);
   houtFV_stack_4->SetBinError(17,1.425191);
   houtFV_stack_4->SetBinError(18,1.223048);
   houtFV_stack_4->SetBinError(19,1.057761);
   houtFV_stack_4->SetBinError(20,1.459261);
   houtFV_stack_4->SetBinError(21,1.508388);
   houtFV_stack_4->SetBinError(22,1.587211);
   houtFV_stack_4->SetBinError(23,1.967366);
   houtFV_stack_4->SetBinError(24,1.864739);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1994106);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.208684);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.437022);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.481948);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.467666);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.329494);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.025834);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.081802);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.124648);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.872379);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.08321);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.281342);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.802896);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.504037);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.31389);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.276196);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.259585);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.317714);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.066716);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.30428);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.63544);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.13955);
   hNCpi0inFVres_stack_7->SetBinContent(22,14.24914);
   hNCpi0inFVres_stack_7->SetBinContent(23,15.95373);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.09493);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6413523);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3809346);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5230212);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5290636);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4990299);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5729183);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6021222);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5860714);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5016871);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6156516);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7125954);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8212824);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6447811);
   hNCpi0inFVres_stack_7->SetBinError(14,0.782824);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7973159);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7855127);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8022634);
   hNCpi0inFVres_stack_7->SetBinError(18,1.049232);
   hNCpi0inFVres_stack_7->SetBinError(19,1.069681);
   hNCpi0inFVres_stack_7->SetBinError(20,1.196571);
   hNCpi0inFVres_stack_7->SetBinError(21,1.249218);
   hNCpi0inFVres_stack_7->SetBinError(22,1.14677);
   hNCpi0inFVres_stack_7->SetBinError(23,1.373574);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8639319);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.8654041);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6141361);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.24189);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.948272);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.15719);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.045758);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6546538);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.868812);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.855194);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.036212);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.065856);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.982652);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.631592);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.31057);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.250034);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3498677);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2874767);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4152364);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3247714);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3435999);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3843256);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1962949);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2784203);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4928828);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4855902);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4975981);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5747834);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5308381);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7717253);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6939634);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6216814);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,3.436928);
   hCCpi0inFV_stack_10->SetBinContent(2,2.155416);
   hCCpi0inFV_stack_10->SetBinContent(3,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(4,2.495048);
   hCCpi0inFV_stack_10->SetBinContent(5,2.705235);
   hCCpi0inFV_stack_10->SetBinContent(6,3.137625);
   hCCpi0inFV_stack_10->SetBinContent(7,4.730068);
   hCCpi0inFV_stack_10->SetBinContent(8,1.315302);
   hCCpi0inFV_stack_10->SetBinContent(9,3.694571);
   hCCpi0inFV_stack_10->SetBinContent(10,1.945916);
   hCCpi0inFV_stack_10->SetBinContent(11,3.999767);
   hCCpi0inFV_stack_10->SetBinContent(12,6.193082);
   hCCpi0inFV_stack_10->SetBinContent(13,5.020252);
   hCCpi0inFV_stack_10->SetBinContent(14,6.884609);
   hCCpi0inFV_stack_10->SetBinContent(15,6.247323);
   hCCpi0inFV_stack_10->SetBinContent(16,6.548614);
   hCCpi0inFV_stack_10->SetBinContent(17,5.816173);
   hCCpi0inFV_stack_10->SetBinContent(18,7.085176);
   hCCpi0inFV_stack_10->SetBinContent(19,7.614555);
   hCCpi0inFV_stack_10->SetBinContent(20,7.143282);
   hCCpi0inFV_stack_10->SetBinContent(21,10.32284);
   hCCpi0inFV_stack_10->SetBinContent(22,13.8526);
   hCCpi0inFV_stack_10->SetBinContent(23,7.152351);
   hCCpi0inFV_stack_10->SetBinContent(24,11.09572);
   hCCpi0inFV_stack_10->SetBinError(1,0.9139151);
   hCCpi0inFV_stack_10->SetBinError(2,0.6498885);
   hCCpi0inFV_stack_10->SetBinError(3,0.588146);
   hCCpi0inFV_stack_10->SetBinError(4,0.7742093);
   hCCpi0inFV_stack_10->SetBinError(5,0.8066939);
   hCCpi0inFV_stack_10->SetBinError(6,0.8594763);
   hCCpi0inFV_stack_10->SetBinError(7,1.063913);
   hCCpi0inFV_stack_10->SetBinError(8,0.5530771);
   hCCpi0inFV_stack_10->SetBinError(9,0.9606224);
   hCCpi0inFV_stack_10->SetBinError(10,0.6626844);
   hCCpi0inFV_stack_10->SetBinError(11,1.03826);
   hCCpi0inFV_stack_10->SetBinError(12,1.289001);
   hCCpi0inFV_stack_10->SetBinError(13,1.108733);
   hCCpi0inFV_stack_10->SetBinError(14,1.341751);
   hCCpi0inFV_stack_10->SetBinError(15,1.323989);
   hCCpi0inFV_stack_10->SetBinError(16,1.256078);
   hCCpi0inFV_stack_10->SetBinError(17,1.202822);
   hCCpi0inFV_stack_10->SetBinError(18,1.339127);
   hCCpi0inFV_stack_10->SetBinError(19,1.442873);
   hCCpi0inFV_stack_10->SetBinError(20,1.325631);
   hCCpi0inFV_stack_10->SetBinError(21,1.681949);
   hCCpi0inFV_stack_10->SetBinError(22,1.885821);
   hCCpi0inFV_stack_10->SetBinError(23,1.327345);
   hCCpi0inFV_stack_10->SetBinError(24,1.660102);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.467217);
   hNCinFV_stack_11->SetBinContent(2,1.123658);
   hNCinFV_stack_11->SetBinContent(3,1.215558);
   hNCinFV_stack_11->SetBinContent(4,0.3917402);
   hNCinFV_stack_11->SetBinContent(5,0.536893);
   hNCinFV_stack_11->SetBinContent(6,1.320373);
   hNCinFV_stack_11->SetBinContent(7,0.4386911);
   hNCinFV_stack_11->SetBinContent(8,1.217248);
   hNCinFV_stack_11->SetBinContent(9,0.5867651);
   hNCinFV_stack_11->SetBinContent(10,2.535931);
   hNCinFV_stack_11->SetBinContent(11,1.660551);
   hNCinFV_stack_11->SetBinContent(12,1.752451);
   hNCinFV_stack_11->SetBinContent(13,1.413964);
   hNCinFV_stack_11->SetBinContent(14,0.5867651);
   hNCinFV_stack_11->SetBinContent(15,0.8770706);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.7319179);
   hNCinFV_stack_11->SetBinContent(18,0.9801958);
   hNCinFV_stack_11->SetBinContent(19,1.662242);
   hNCinFV_stack_11->SetBinContent(20,2.590875);
   hNCinFV_stack_11->SetBinContent(21,2.835772);
   hNCinFV_stack_11->SetBinContent(22,3.230893);
   hNCinFV_stack_11->SetBinContent(23,4.501394);
   hNCinFV_stack_11->SetBinContent(24,2.7859);
   hNCinFV_stack_11->SetBinError(1,0.6214735);
   hNCinFV_stack_11->SetBinError(2,0.5188295);
   hNCinFV_stack_11->SetBinError(3,0.6206425);
   hNCinFV_stack_11->SetBinError(4,0.2770047);
   hNCinFV_stack_11->SetBinError(5,0.3929602);
   hNCinFV_stack_11->SetBinError(6,0.5548703);
   hNCinFV_stack_11->SetBinError(7,0.2809555);
   hNCinFV_stack_11->SetBinError(8,0.6211758);
   hNCinFV_stack_11->SetBinError(9,0.3387718);
   hNCinFV_stack_11->SetBinError(10,0.8325131);
   hNCinFV_stack_11->SetBinError(11,0.650847);
   hNCinFV_stack_11->SetBinError(12,0.7345848);
   hNCinFV_stack_11->SetBinError(13,0.6515799);
   hNCinFV_stack_11->SetBinError(14,0.3387718);
   hNCinFV_stack_11->SetBinError(15,0.5197486);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.438694);
   hNCinFV_stack_11->SetBinError(18,0.4383608);
   hNCinFV_stack_11->SetBinError(19,0.6513556);
   hNCinFV_stack_11->SetBinError(20,0.8095761);
   hNCinFV_stack_11->SetBinError(21,0.808577);
   hNCinFV_stack_11->SetBinError(22,0.855484);
   hNCinFV_stack_11->SetBinError(23,1.038935);
   hNCinFV_stack_11->SetBinError(24,0.8327353);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,1.763185);
   hnumuCCinFV_stack_12->SetBinContent(2,2.498258);
   hnumuCCinFV_stack_12->SetBinContent(3,1.312698);
   hnumuCCinFV_stack_12->SetBinContent(4,2.991926);
   hnumuCCinFV_stack_12->SetBinContent(5,1.816891);
   hnumuCCinFV_stack_12->SetBinContent(6,3.236687);
   hnumuCCinFV_stack_12->SetBinContent(7,1.854066);
   hnumuCCinFV_stack_12->SetBinContent(8,4.424663);
   hnumuCCinFV_stack_12->SetBinContent(9,4.063671);
   hnumuCCinFV_stack_12->SetBinContent(10,5.419614);
   hnumuCCinFV_stack_12->SetBinContent(11,3.816345);
   hnumuCCinFV_stack_12->SetBinContent(12,3.582122);
   hnumuCCinFV_stack_12->SetBinContent(13,5.196393);
   hnumuCCinFV_stack_12->SetBinContent(14,4.851415);
   hnumuCCinFV_stack_12->SetBinContent(15,4.523557);
   hnumuCCinFV_stack_12->SetBinContent(16,6.251824);
   hnumuCCinFV_stack_12->SetBinContent(17,4.985417);
   hnumuCCinFV_stack_12->SetBinContent(18,5.1848);
   hnumuCCinFV_stack_12->SetBinContent(19,5.644043);
   hnumuCCinFV_stack_12->SetBinContent(20,6.052371);
   hnumuCCinFV_stack_12->SetBinContent(21,6.084546);
   hnumuCCinFV_stack_12->SetBinContent(22,8.544754);
   hnumuCCinFV_stack_12->SetBinContent(23,9.292581);
   hnumuCCinFV_stack_12->SetBinContent(24,12.92686);
   hnumuCCinFV_stack_12->SetBinError(1,0.734383);
   hnumuCCinFV_stack_12->SetBinError(2,0.8432917);
   hnumuCCinFV_stack_12->SetBinError(3,0.5454698);
   hnumuCCinFV_stack_12->SetBinError(4,0.938134);
   hnumuCCinFV_stack_12->SetBinError(5,0.7660983);
   hnumuCCinFV_stack_12->SetBinError(6,1.354288);
   hnumuCCinFV_stack_12->SetBinError(7,0.7684039);
   hnumuCCinFV_stack_12->SetBinError(8,1.428318);
   hnumuCCinFV_stack_12->SetBinError(9,1.011122);
   hnumuCCinFV_stack_12->SetBinError(10,1.552523);
   hnumuCCinFV_stack_12->SetBinError(11,1.170348);
   hnumuCCinFV_stack_12->SetBinError(12,0.9716498);
   hnumuCCinFV_stack_12->SetBinError(13,1.299041);
   hnumuCCinFV_stack_12->SetBinError(14,1.126876);
   hnumuCCinFV_stack_12->SetBinError(15,1.127722);
   hnumuCCinFV_stack_12->SetBinError(16,1.355962);
   hnumuCCinFV_stack_12->SetBinError(17,1.166671);
   hnumuCCinFV_stack_12->SetBinError(18,1.19861);
   hnumuCCinFV_stack_12->SetBinError(19,1.739233);
   hnumuCCinFV_stack_12->SetBinError(20,1.636922);
   hnumuCCinFV_stack_12->SetBinError(21,1.288125);
   hnumuCCinFV_stack_12->SetBinError(22,1.492352);
   hnumuCCinFV_stack_12->SetBinError(23,1.515726);
   hnumuCCinFV_stack_12->SetBinError(24,2.171485);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(7,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(16,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(17,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(21,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(22,0.8767731);
   hnueCCinFV_stack_13->SetBinContent(23,1.758249);
   hnueCCinFV_stack_13->SetBinContent(24,0.6491087);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(7,0.2502081);
   hnueCCinFV_stack_13->SetBinError(16,0.1529246);
   hnueCCinFV_stack_13->SetBinError(17,0.2171002);
   hnueCCinFV_stack_13->SetBinError(21,0.4800908);
   hnueCCinFV_stack_13->SetBinError(22,0.5277762);
   hnueCCinFV_stack_13->SetBinError(23,1.241629);
   hnueCCinFV_stack_13->SetBinError(24,0.3756653);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__26->SetBinContent(1,19.8883);
   hmcerror__26->SetBinContent(2,14.44362);
   hmcerror__26->SetBinContent(3,11.51461);
   hmcerror__26->SetBinContent(4,16.60041);
   hmcerror__26->SetBinContent(5,15.70957);
   hmcerror__26->SetBinContent(6,14.29967);
   hmcerror__26->SetBinContent(7,15.18634);
   hmcerror__26->SetBinContent(8,15.43727);
   hmcerror__26->SetBinContent(9,20.90397);
   hmcerror__26->SetBinContent(10,18.63648);
   hmcerror__26->SetBinContent(11,23.30183);
   hmcerror__26->SetBinContent(12,27.989);
   hmcerror__26->SetBinContent(13,26.04467);
   hmcerror__26->SetBinContent(14,30.81704);
   hmcerror__26->SetBinContent(15,28.0974);
   hmcerror__26->SetBinContent(16,28.84638);
   hmcerror__26->SetBinContent(17,30.04193);
   hmcerror__26->SetBinContent(18,33.28771);
   hmcerror__26->SetBinContent(19,41.74059);
   hmcerror__26->SetBinContent(20,44.69764);
   hmcerror__26->SetBinContent(21,51.33542);
   hmcerror__26->SetBinContent(22,66.65323);
   hmcerror__26->SetBinContent(23,67.57812);
   hmcerror__26->SetBinContent(24,58.0064);
   hmcerror__26->SetBinError(1,10.07607);
   hmcerror__26->SetBinError(2,11.53509);
   hmcerror__26->SetBinError(3,7.054496);
   hmcerror__26->SetBinError(4,10.41997);
   hmcerror__26->SetBinError(5,7.95378);
   hmcerror__26->SetBinError(6,8.935213);
   hmcerror__26->SetBinError(7,10.37453);
   hmcerror__26->SetBinError(8,9.601865);
   hmcerror__26->SetBinError(9,11.5292);
   hmcerror__26->SetBinError(10,12.49717);
   hmcerror__26->SetBinError(11,10.24882);
   hmcerror__26->SetBinError(12,14.58655);
   hmcerror__26->SetBinError(13,16.51262);
   hmcerror__26->SetBinError(14,13.83386);
   hmcerror__26->SetBinError(15,14.40606);
   hmcerror__26->SetBinError(16,16.31033);
   hmcerror__26->SetBinError(17,15.20932);
   hmcerror__26->SetBinError(18,14.32948);
   hmcerror__26->SetBinError(19,27.41014);
   hmcerror__26->SetBinError(20,21.52091);
   hmcerror__26->SetBinError(21,18.81803);
   hmcerror__26->SetBinError(22,22.69392);
   hmcerror__26->SetBinError(23,23.81212);
   hmcerror__26->SetBinError(24,28.20872);
   hmcerror__26->SetBinError(25,0.3895343);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3033[24] = {
   14,
   13,
   10,
   12,
   10,
   9,
   7,
   13,
   14,
   24,
   16,
   18,
   17,
   23,
   29,
   25,
   36,
   22,
   46,
   42,
   34,
   47,
   56,
   48};
   Double_t _felx3033[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3033[24] = {
   3.9102,
   3.77763,
   3.34883,
   3.64022,
   3.34883,
   3.19354,
   2.85954,
   3.77763,
   3.9102,
   5.0476,
   4.1628,
   4.4008,
   4.2835,
   4.9457,
   5.5285,
   5.1474,
   6.1381,
   4.8417,
   6.9153,
   6.6155,
   5.9703,
   6.9882,
   7.6127,
   7.0604};
   Double_t _fehx3033[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3033[24] = {
   3.6898,
   3.5552,
   3.1179,
   3.4155,
   3.1179,
   2.9582,
   2.61053,
   3.5552,
   3.6898,
   4.837,
   3.9454,
   4.1858,
   4.0673,
   4.7346,
   5.3201,
   4.9374,
   5.9318,
   4.6299,
   6.7108,
   6.4104,
   5.7635,
   6.7839,
   7.4094,
   6.8561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(3.726414);
   Graph_Graph3033->SetMaximum(69.33629);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3034[24] = {
   0.506633,
   0.7986287,
   0.6126558,
   0.6276937,
   0.5063015,
   0.6248544,
   0.683149,
   0.6219923,
   0.5515314,
   0.670576,
   0.4398288,
   0.5211528,
   0.6340116,
   0.448903,
   0.5127185,
   0.5654203,
   0.5062696,
   0.4304734,
   0.6566782,
   0.4814777,
   0.3665701,
   0.3404774,
   0.3523643,
   0.4863036};
   Double_t _fehx3034[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3034[24] = {
   0.506633,
   0.7986287,
   0.6126558,
   0.6276937,
   0.5063015,
   0.6248544,
   0.683149,
   0.6219923,
   0.5515314,
   0.670576,
   0.4398288,
   0.5211528,
   0.6340116,
   0.448903,
   0.5127185,
   0.5654203,
   0.5062696,
   0.4304734,
   0.6566782,
   0.4814777,
   0.3665701,
   0.3404774,
   0.3523643,
   0.4863036};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-1.2,1.2);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Angle between photons [cosine]");
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3035[24] = {
   0.2181571,
   0.2188409,
   0.2459799,
   0.2407608,
   0.2798278,
   0.2953251,
   0.2833451,
   0.2764736,
   0.2447797,
   0.263847,
   0.2663504,
   0.2469117,
   0.2450968,
   0.241654,
   0.2678703,
   0.2631925,
   0.2958934,
   0.2846086,
   0.2587705,
   0.3028032,
   0.2713567,
   0.2526065,
   0.2461299,
   0.1942711};
   Double_t _fehx3035[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3035[24] = {
   0.2181571,
   0.2188409,
   0.2459799,
   0.2407608,
   0.2798278,
   0.2953251,
   0.2833451,
   0.2764736,
   0.2447797,
   0.263847,
   0.2663504,
   0.2469117,
   0.2450968,
   0.241654,
   0.2678703,
   0.2631925,
   0.2958934,
   0.2846086,
   0.2587705,
   0.3028032,
   0.2713567,
   0.2526065,
   0.2461299,
   0.1942711};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-1.2,1.2);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3036[24] = {
   0.7039315,
   0.9000512,
   0.8684616,
   0.7228736,
   0.6365545,
   0.6293851,
   0.4609407,
   0.8421176,
   0.6697292,
   1.287797,
   0.6866413,
   0.6431098,
   0.6527247,
   0.7463403,
   1.032124,
   0.8666598,
   1.198325,
   0.6609045,
   1.102045,
   0.939647,
   0.6623108,
   0.7051421,
   0.8286705,
   0.8274949};
   Double_t _felx3036[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3036[24] = {
   0.1966081,
   0.2615431,
   0.290833,
   0.2192849,
   0.2131713,
   0.2233296,
   0.1882969,
   0.2447084,
   0.1870554,
   0.2708452,
   0.1786469,
   0.1572332,
   0.1644674,
   0.1604859,
   0.196762,
   0.1784418,
   0.2043178,
   0.1454501,
   0.1656733,
   0.1480056,
   0.1162998,
   0.1048441,
   0.1126504,
   0.1217176};
   Double_t _fehx3036[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3036[24] = {
   0.1855262,
   0.2461432,
   0.2707776,
   0.2057479,
   0.1984713,
   0.2068719,
   0.1718999,
   0.2302997,
   0.1765119,
   0.2595448,
   0.1693172,
   0.1495516,
   0.1561663,
   0.1536358,
   0.1893449,
   0.1711618,
   0.1974507,
   0.1390874,
   0.1607739,
   0.143417,
   0.1122714,
   0.101779,
   0.109642,
   0.1181956};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.145174);
   Graph_Graph3036->SetMaximum(1.674812);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
