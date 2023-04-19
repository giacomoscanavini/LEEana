#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 21:59:22 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
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
   pad1->Range(-4.119231,-0.7572345,3.957692,83.73419);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__25->SetBinContent(1,37.86172);
   hmc__25->SetBinContent(2,31.526);
   hmc__25->SetBinContent(3,31.84057);
   hmc__25->SetBinContent(4,25.01395);
   hmc__25->SetBinContent(5,27.93147);
   hmc__25->SetBinContent(6,28.44534);
   hmc__25->SetBinContent(7,29.58046);
   hmc__25->SetBinContent(8,28.38746);
   hmc__25->SetBinContent(9,26.88992);
   hmc__25->SetBinContent(10,28.57367);
   hmc__25->SetBinContent(11,31.14214);
   hmc__25->SetBinContent(12,29.84067);
   hmc__25->SetBinContent(13,32.57938);
   hmc__25->SetBinContent(14,37.33825);
   hmc__25->SetBinContent(15,32.72153);
   hmc__25->SetBinContent(16,31.24023);
   hmc__25->SetBinContent(17,26.78383);
   hmc__25->SetBinContent(18,29.43776);
   hmc__25->SetBinContent(19,30.07993);
   hmc__25->SetBinContent(20,25.90398);
   hmc__25->SetBinContent(21,29.6523);
   hmc__25->SetBinContent(22,30.4117);
   hmc__25->SetBinContent(23,29.0584);
   hmc__25->SetBinContent(24,28.81697);
   hmc__25->SetBinError(1,13.83689);
   hmc__25->SetBinError(2,14.74213);
   hmc__25->SetBinError(3,19.18818);
   hmc__25->SetBinError(4,16.88522);
   hmc__25->SetBinError(5,12.17084);
   hmc__25->SetBinError(6,12.88495);
   hmc__25->SetBinError(7,11.90499);
   hmc__25->SetBinError(8,13.38266);
   hmc__25->SetBinError(9,15.35272);
   hmc__25->SetBinError(10,14.74618);
   hmc__25->SetBinError(11,13.56051);
   hmc__25->SetBinError(12,16.68476);
   hmc__25->SetBinError(13,14.66902);
   hmc__25->SetBinError(14,16.30654);
   hmc__25->SetBinError(15,20.39472);
   hmc__25->SetBinError(16,15.76124);
   hmc__25->SetBinError(17,22.52479);
   hmc__25->SetBinError(18,24.83342);
   hmc__25->SetBinError(19,11.67057);
   hmc__25->SetBinError(20,12.09353);
   hmc__25->SetBinError(21,14.50715);
   hmc__25->SetBinError(22,13.68035);
   hmc__25->SetBinError(23,14.19949);
   hmc__25->SetBinError(24,13.48941);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.7572345);
   hmc__25->SetMaximum(79.50962);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,-3.15,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(39.75481);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9801958);
   hbadmatch_stack_1->SetBinContent(2,0.9286332);
   hbadmatch_stack_1->SetBinContent(3,1.096467);
   hbadmatch_stack_1->SetBinContent(4,0.7625321);
   hbadmatch_stack_1->SetBinContent(5,1.123658);
   hbadmatch_stack_1->SetBinContent(6,1.609897);
   hbadmatch_stack_1->SetBinContent(7,0.6731914);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,1.955905);
   hbadmatch_stack_1->SetBinContent(10,0.785171);
   hbadmatch_stack_1->SetBinContent(12,0.6169422);
   hbadmatch_stack_1->SetBinContent(13,1.386474);
   hbadmatch_stack_1->SetBinContent(14,0.785171);
   hbadmatch_stack_1->SetBinContent(15,1.003937);
   hbadmatch_stack_1->SetBinContent(16,1.099283);
   hbadmatch_stack_1->SetBinContent(17,1.322064);
   hbadmatch_stack_1->SetBinContent(18,0.9303237);
   hbadmatch_stack_1->SetBinContent(19,0.5747284);
   hbadmatch_stack_1->SetBinContent(20,1.438383);
   hbadmatch_stack_1->SetBinContent(21,1.027024);
   hbadmatch_stack_1->SetBinContent(22,1.957551);
   hbadmatch_stack_1->SetBinContent(23,0.536893);
   hbadmatch_stack_1->SetBinContent(24,0.8770706);
   hbadmatch_stack_1->SetBinError(1,0.4383608);
   hbadmatch_stack_1->SetBinError(2,0.48078);
   hbadmatch_stack_1->SetBinError(3,0.5641572);
   hbadmatch_stack_1->SetBinError(4,0.5423136);
   hbadmatch_stack_1->SetBinError(5,0.5188295);
   hbadmatch_stack_1->SetBinError(6,0.6296898);
   hbadmatch_stack_1->SetBinError(7,0.3949005);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.7111393);
   hbadmatch_stack_1->SetBinError(10,0.3925882);
   hbadmatch_stack_1->SetBinError(12,0.3569979);
   hbadmatch_stack_1->SetBinError(13,0.727757);
   hbadmatch_stack_1->SetBinError(14,0.3925882);
   hbadmatch_stack_1->SetBinError(15,0.5136112);
   hbadmatch_stack_1->SetBinError(16,0.5653395);
   hbadmatch_stack_1->SetBinError(17,0.5554667);
   hbadmatch_stack_1->SetBinError(18,0.4814682);
   hbadmatch_stack_1->SetBinError(19,0.4132007);
   hbadmatch_stack_1->SetBinError(20,0.5453121);
   hbadmatch_stack_1->SetBinError(21,0.6208054);
   hbadmatch_stack_1->SetBinError(22,0.7668467);
   hbadmatch_stack_1->SetBinError(23,0.3929602);
   hbadmatch_stack_1->SetBinError(24,0.5197486);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.74772);
   hext_stack_2->SetBinContent(2,3.539649);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,2.192989);
   hext_stack_2->SetBinContent(5,5.967652);
   hext_stack_2->SetBinContent(6,5.490441);
   hext_stack_2->SetBinContent(7,5.953291);
   hext_stack_2->SetBinContent(8,5.483261);
   hext_stack_2->SetBinContent(9,1.544194);
   hext_stack_2->SetBinContent(10,1.950793);
   hext_stack_2->SetBinContent(11,1.461993);
   hext_stack_2->SetBinContent(12,1.055394);
   hext_stack_2->SetBinContent(13,2.25642);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,4.677244);
   hext_stack_2->SetBinContent(16,4.53161);
   hext_stack_2->SetBinContent(17,2.510206);
   hext_stack_2->SetBinContent(18,4.752265);
   hext_stack_2->SetBinContent(19,9.892359);
   hext_stack_2->SetBinContent(20,4.143782);
   hext_stack_2->SetBinContent(21,4.345666);
   hext_stack_2->SetBinContent(22,3.083979);
   hext_stack_2->SetBinContent(23,2.6702);
   hext_stack_2->SetBinContent(24,1.461993);
   hext_stack_2->SetBinError(1,2.005173);
   hext_stack_2->SetBinError(2,1.400848);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,0.9009267);
   hext_stack_2->SetBinError(5,1.737927);
   hext_stack_2->SetBinError(6,1.651938);
   hext_stack_2->SetBinError(7,1.850079);
   hext_stack_2->SetBinError(8,1.711754);
   hext_stack_2->SetBinError(9,0.7753719);
   hext_stack_2->SetBinError(10,0.8755137);
   hext_stack_2->SetBinError(11,0.7356036);
   hext_stack_2->SetBinError(12,0.6130171);
   hext_stack_2->SetBinError(13,1.067257);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,1.54863);
   hext_stack_2->SetBinError(16,1.418025);
   hext_stack_2->SetBinError(17,1.057404);
   hext_stack_2->SetBinError(18,1.630811);
   hext_stack_2->SetBinError(19,2.398269);
   hext_stack_2->SetBinError(20,1.256262);
   hext_stack_2->SetBinError(21,1.579311);
   hext_stack_2->SetBinError(22,1.033093);
   hext_stack_2->SetBinError(23,1.050314);
   hext_stack_2->SetBinError(24,0.7356036);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.2645861);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.6632347);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.4049124);
   hdirt_stack_3->SetBinContent(17,0.002351481);
   hdirt_stack_3->SetBinContent(18,0.7670878);
   hdirt_stack_3->SetBinContent(19,0.4326043);
   hdirt_stack_3->SetBinContent(22,0.4149213);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(24,0.400075);
   hdirt_stack_3->SetBinError(2,0.2645861);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3961844);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(16,0.4049124);
   hdirt_stack_3->SetBinError(17,0.002351481);
   hdirt_stack_3->SetBinError(18,0.5461925);
   hdirt_stack_3->SetBinError(19,0.2502152);
   hdirt_stack_3->SetBinError(22,0.4149213);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(24,0.296158);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,6.285689);
   houtFV_stack_4->SetBinContent(2,5.465059);
   houtFV_stack_4->SetBinContent(3,5.643704);
   houtFV_stack_4->SetBinContent(4,6.567569);
   houtFV_stack_4->SetBinContent(5,3.56769);
   houtFV_stack_4->SetBinContent(6,5.233312);
   houtFV_stack_4->SetBinContent(7,3.769477);
   houtFV_stack_4->SetBinContent(8,5.373393);
   houtFV_stack_4->SetBinContent(9,4.53835);
   houtFV_stack_4->SetBinContent(10,3.907867);
   houtFV_stack_4->SetBinContent(11,5.351385);
   houtFV_stack_4->SetBinContent(12,4.874495);
   houtFV_stack_4->SetBinContent(13,4.793794);
   houtFV_stack_4->SetBinContent(14,6.224004);
   houtFV_stack_4->SetBinContent(15,7.780469);
   houtFV_stack_4->SetBinContent(16,4.234905);
   houtFV_stack_4->SetBinContent(17,4.790009);
   houtFV_stack_4->SetBinContent(18,4.812737);
   houtFV_stack_4->SetBinContent(19,4.891444);
   houtFV_stack_4->SetBinContent(20,4.472217);
   houtFV_stack_4->SetBinContent(21,5.546669);
   houtFV_stack_4->SetBinContent(22,4.63299);
   houtFV_stack_4->SetBinContent(23,3.764405);
   houtFV_stack_4->SetBinContent(24,4.774623);
   houtFV_stack_4->SetBinError(1,1.296062);
   houtFV_stack_4->SetBinError(2,1.151377);
   houtFV_stack_4->SetBinError(3,1.224726);
   houtFV_stack_4->SetBinError(4,1.243055);
   houtFV_stack_4->SetBinError(5,0.919918);
   houtFV_stack_4->SetBinError(6,1.127758);
   houtFV_stack_4->SetBinError(7,0.9417711);
   houtFV_stack_4->SetBinError(8,1.160835);
   houtFV_stack_4->SetBinError(9,1.110434);
   houtFV_stack_4->SetBinError(10,0.9808007);
   houtFV_stack_4->SetBinError(11,1.155396);
   houtFV_stack_4->SetBinError(12,1.151344);
   houtFV_stack_4->SetBinError(13,1.048196);
   houtFV_stack_4->SetBinError(14,1.261394);
   houtFV_stack_4->SetBinError(15,1.330761);
   houtFV_stack_4->SetBinError(16,1.064438);
   houtFV_stack_4->SetBinError(17,1.110898);
   houtFV_stack_4->SetBinError(18,1.142799);
   houtFV_stack_4->SetBinError(19,1.074921);
   houtFV_stack_4->SetBinError(20,1.102444);
   houtFV_stack_4->SetBinError(21,1.286317);
   houtFV_stack_4->SetBinError(22,1.111324);
   houtFV_stack_4->SetBinError(23,0.9407157);
   houtFV_stack_4->SetBinError(24,1.14281);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.586008);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.637736);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.438467);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.841582);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.934827);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.81169);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.869818);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.89855);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.6609);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.081064);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.377595);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.876634);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.764955);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.42441);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.016382);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.457886);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.354328);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.692376);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.142002);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.968632);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.286654);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.04229);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.893806);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.253536);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9005847);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8399859);
   hNCpi0inFVres_stack_7->SetBinError(3,1.02828);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7477315);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6793673);
   hNCpi0inFVres_stack_7->SetBinError(6,0.773823);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7908215);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8033948);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7828245);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8142621);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9469663);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9308333);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9054699);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7214158);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8647953);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8823573);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7247352);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8757154);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6262034);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8004017);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7736552);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8883285);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6382588);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9092588);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.812844);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.47854);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.618208);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.31214);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.09218);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.813676);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.478708);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.687626);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.394008);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.464922);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.06428);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.408458);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.019602);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.21199);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.129122);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.379726);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.106462);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.35349);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.630826);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.743594);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.31114);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4567469);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3911843);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4355182);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.447638);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.530961);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4773719);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4310268);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4453858);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3625241);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.381955);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5302275);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3972726);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4784573);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2599858);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2907294);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3711885);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5249404);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4189688);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3805083);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4823735);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3851684);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.045845);
   hCCpi0inFV_stack_10->SetBinContent(2,4.591571);
   hCCpi0inFV_stack_10->SetBinContent(3,6.426661);
   hCCpi0inFV_stack_10->SetBinContent(4,4.335685);
   hCCpi0inFV_stack_10->SetBinContent(5,3.8313);
   hCCpi0inFV_stack_10->SetBinContent(6,3.878658);
   hCCpi0inFV_stack_10->SetBinContent(7,5.961849);
   hCCpi0inFV_stack_10->SetBinContent(8,5.60996);
   hCCpi0inFV_stack_10->SetBinContent(9,3.622633);
   hCCpi0inFV_stack_10->SetBinContent(10,5.231041);
   hCCpi0inFV_stack_10->SetBinContent(11,5.142578);
   hCCpi0inFV_stack_10->SetBinContent(12,5.720333);
   hCCpi0inFV_stack_10->SetBinContent(13,9.048381);
   hCCpi0inFV_stack_10->SetBinContent(14,7.097157);
   hCCpi0inFV_stack_10->SetBinContent(15,5.212017);
   hCCpi0inFV_stack_10->SetBinContent(16,5.58533);
   hCCpi0inFV_stack_10->SetBinContent(17,6.070672);
   hCCpi0inFV_stack_10->SetBinContent(18,4.240926);
   hCCpi0inFV_stack_10->SetBinContent(19,4.795371);
   hCCpi0inFV_stack_10->SetBinContent(20,3.302698);
   hCCpi0inFV_stack_10->SetBinContent(21,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(22,5.249965);
   hCCpi0inFV_stack_10->SetBinContent(23,8.028272);
   hCCpi0inFV_stack_10->SetBinContent(24,6.900573);
   hCCpi0inFV_stack_10->SetBinError(1,1.355912);
   hCCpi0inFV_stack_10->SetBinError(2,1.020729);
   hCCpi0inFV_stack_10->SetBinError(3,1.307071);
   hCCpi0inFV_stack_10->SetBinError(4,1.026571);
   hCCpi0inFV_stack_10->SetBinError(5,0.9558576);
   hCCpi0inFV_stack_10->SetBinError(6,0.9981368);
   hCCpi0inFV_stack_10->SetBinError(7,1.209531);
   hCCpi0inFV_stack_10->SetBinError(8,1.184754);
   hCCpi0inFV_stack_10->SetBinError(9,0.8992132);
   hCCpi0inFV_stack_10->SetBinError(10,1.06489);
   hCCpi0inFV_stack_10->SetBinError(11,1.139043);
   hCCpi0inFV_stack_10->SetBinError(12,1.210746);
   hCCpi0inFV_stack_10->SetBinError(13,1.496542);
   hCCpi0inFV_stack_10->SetBinError(14,1.40229);
   hCCpi0inFV_stack_10->SetBinError(15,1.150649);
   hCCpi0inFV_stack_10->SetBinError(16,1.214545);
   hCCpi0inFV_stack_10->SetBinError(17,1.292557);
   hCCpi0inFV_stack_10->SetBinError(18,0.9678027);
   hCCpi0inFV_stack_10->SetBinError(19,1.111202);
   hCCpi0inFV_stack_10->SetBinError(20,0.8815674);
   hCCpi0inFV_stack_10->SetBinError(21,1.144335);
   hCCpi0inFV_stack_10->SetBinError(22,1.157632);
   hCCpi0inFV_stack_10->SetBinError(23,1.446973);
   hCCpi0inFV_stack_10->SetBinError(24,1.407572);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.8321218);
   hNCinFV_stack_11->SetBinContent(2,1.660551);
   hNCinFV_stack_11->SetBinContent(3,1.65886);
   hNCinFV_stack_11->SetBinContent(4,1.412273);
   hNCinFV_stack_11->SetBinContent(5,2.100473);
   hNCinFV_stack_11->SetBinContent(6,0.5901461);
   hNCinFV_stack_11->SetBinContent(7,2.197444);
   hNCinFV_stack_11->SetBinContent(8,1.322064);
   hNCinFV_stack_11->SetBinContent(9,1.52047);
   hNCinFV_stack_11->SetBinContent(10,1.176911);
   hNCinFV_stack_11->SetBinContent(11,1.607298);
   hNCinFV_stack_11->SetBinContent(12,1.660551);
   hNCinFV_stack_11->SetBinContent(13,1.073786);
   hNCinFV_stack_11->SetBinContent(14,2.929362);
   hNCinFV_stack_11->SetBinContent(15,1.465526);
   hNCinFV_stack_11->SetBinContent(16,1.805704);
   hNCinFV_stack_11->SetBinContent(17,1.515398);
   hNCinFV_stack_11->SetBinContent(18,1.322064);
   hNCinFV_stack_11->SetBinContent(19,1.270501);
   hNCinFV_stack_11->SetBinContent(20,1.072095);
   hNCinFV_stack_11->SetBinContent(21,2.053982);
   hNCinFV_stack_11->SetBinContent(22,1.608988);
   hNCinFV_stack_11->SetBinContent(23,1.855576);
   hNCinFV_stack_11->SetBinContent(24,1.465526);
   hNCinFV_stack_11->SetBinError(1,0.3953857);
   hNCinFV_stack_11->SetBinError(2,0.650847);
   hNCinFV_stack_11->SetBinError(3,0.650338);
   hNCinFV_stack_11->SetBinError(4,0.6510715);
   hNCinFV_stack_11->SetBinError(5,0.6782476);
   hNCinFV_stack_11->SetBinError(6,0.340721);
   hNCinFV_stack_11->SetBinError(7,0.760276);
   hNCinFV_stack_11->SetBinError(8,0.5554667);
   hNCinFV_stack_11->SetBinError(9,0.5898325);
   hNCinFV_stack_11->SetBinError(10,0.4804759);
   hNCinFV_stack_11->SetBinError(11,0.6796534);
   hNCinFV_stack_11->SetBinError(12,0.650847);
   hNCinFV_stack_11->SetBinError(13,0.5557297);
   hNCinFV_stack_11->SetBinError(14,0.8777653);
   hNCinFV_stack_11->SetBinError(15,0.6209405);
   hNCinFV_stack_11->SetBinError(16,0.7080169);
   hNCinFV_stack_11->SetBinError(17,0.588146);
   hNCinFV_stack_11->SetBinError(18,0.5554667);
   hNCinFV_stack_11->SetBinError(19,0.5895188);
   hNCinFV_stack_11->SetBinError(20,0.5551335);
   hNCinFV_stack_11->SetBinError(21,0.7078105);
   hNCinFV_stack_11->SetBinError(22,0.6801404);
   hNCinFV_stack_11->SetBinError(23,0.6794384);
   hNCinFV_stack_11->SetBinError(24,0.6209405);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,6.431799);
   hnumuCCinFV_stack_12->SetBinContent(2,6.218225);
   hnumuCCinFV_stack_12->SetBinContent(3,4.891399);
   hnumuCCinFV_stack_12->SetBinContent(4,2.395313);
   hnumuCCinFV_stack_12->SetBinContent(5,2.688203);
   hnumuCCinFV_stack_12->SetBinContent(6,2.742627);
   hnumuCCinFV_stack_12->SetBinContent(7,3.663229);
   hnumuCCinFV_stack_12->SetBinContent(8,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(9,6.60399);
   hnumuCCinFV_stack_12->SetBinContent(10,7.019028);
   hnumuCCinFV_stack_12->SetBinContent(11,8.583918);
   hnumuCCinFV_stack_12->SetBinContent(12,6.139398);
   hnumuCCinFV_stack_12->SetBinContent(13,5.16339);
   hnumuCCinFV_stack_12->SetBinContent(14,12.18424);
   hnumuCCinFV_stack_12->SetBinContent(15,3.906235);
   hnumuCCinFV_stack_12->SetBinContent(16,5.017293);
   hnumuCCinFV_stack_12->SetBinContent(17,3.881596);
   hnumuCCinFV_stack_12->SetBinContent(18,4.595837);
   hnumuCCinFV_stack_12->SetBinContent(19,2.64539);
   hnumuCCinFV_stack_12->SetBinContent(20,2.872191);
   hnumuCCinFV_stack_12->SetBinContent(21,3.832545);
   hnumuCCinFV_stack_12->SetBinContent(22,3.302256);
   hnumuCCinFV_stack_12->SetBinContent(23,5.115866);
   hnumuCCinFV_stack_12->SetBinContent(24,4.175719);
   hnumuCCinFV_stack_12->SetBinError(1,1.339199);
   hnumuCCinFV_stack_12->SetBinError(2,1.389456);
   hnumuCCinFV_stack_12->SetBinError(3,1.112021);
   hnumuCCinFV_stack_12->SetBinError(4,0.9781184);
   hnumuCCinFV_stack_12->SetBinError(5,0.8787685);
   hnumuCCinFV_stack_12->SetBinError(6,1.13806);
   hnumuCCinFV_stack_12->SetBinError(7,0.9738866);
   hnumuCCinFV_stack_12->SetBinError(8,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(9,1.805605);
   hnumuCCinFV_stack_12->SetBinError(10,1.716627);
   hnumuCCinFV_stack_12->SetBinError(11,1.648578);
   hnumuCCinFV_stack_12->SetBinError(12,1.271757);
   hnumuCCinFV_stack_12->SetBinError(13,1.206988);
   hnumuCCinFV_stack_12->SetBinError(14,1.944853);
   hnumuCCinFV_stack_12->SetBinError(15,0.9698106);
   hnumuCCinFV_stack_12->SetBinError(16,1.167151);
   hnumuCCinFV_stack_12->SetBinError(17,1.599715);
   hnumuCCinFV_stack_12->SetBinError(18,1.450719);
   hnumuCCinFV_stack_12->SetBinError(19,0.8239984);
   hnumuCCinFV_stack_12->SetBinError(20,1.057347);
   hnumuCCinFV_stack_12->SetBinError(21,0.9487139);
   hnumuCCinFV_stack_12->SetBinError(22,0.940447);
   hnumuCCinFV_stack_12->SetBinError(23,1.202918);
   hnumuCCinFV_stack_12->SetBinError(24,1.202768);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.5604295);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.4031327);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(22,1.390614);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4141923);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(6,0.2764757);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.2932406);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2945335);
   hnueCCinFV_stack_13->SetBinError(22,1.180686);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__26->SetBinContent(1,37.86172);
   hmcerror__26->SetBinContent(2,31.526);
   hmcerror__26->SetBinContent(3,31.84057);
   hmcerror__26->SetBinContent(4,25.01395);
   hmcerror__26->SetBinContent(5,27.93147);
   hmcerror__26->SetBinContent(6,28.44534);
   hmcerror__26->SetBinContent(7,29.58046);
   hmcerror__26->SetBinContent(8,28.38746);
   hmcerror__26->SetBinContent(9,26.88992);
   hmcerror__26->SetBinContent(10,28.57367);
   hmcerror__26->SetBinContent(11,31.14214);
   hmcerror__26->SetBinContent(12,29.84067);
   hmcerror__26->SetBinContent(13,32.57938);
   hmcerror__26->SetBinContent(14,37.33825);
   hmcerror__26->SetBinContent(15,32.72153);
   hmcerror__26->SetBinContent(16,31.24023);
   hmcerror__26->SetBinContent(17,26.78383);
   hmcerror__26->SetBinContent(18,29.43776);
   hmcerror__26->SetBinContent(19,30.07993);
   hmcerror__26->SetBinContent(20,25.90398);
   hmcerror__26->SetBinContent(21,29.6523);
   hmcerror__26->SetBinContent(22,30.4117);
   hmcerror__26->SetBinContent(23,29.0584);
   hmcerror__26->SetBinContent(24,28.81697);
   hmcerror__26->SetBinError(1,13.83689);
   hmcerror__26->SetBinError(2,14.74213);
   hmcerror__26->SetBinError(3,19.18818);
   hmcerror__26->SetBinError(4,16.88522);
   hmcerror__26->SetBinError(5,12.17084);
   hmcerror__26->SetBinError(6,12.88495);
   hmcerror__26->SetBinError(7,11.90499);
   hmcerror__26->SetBinError(8,13.38266);
   hmcerror__26->SetBinError(9,15.35272);
   hmcerror__26->SetBinError(10,14.74618);
   hmcerror__26->SetBinError(11,13.56051);
   hmcerror__26->SetBinError(12,16.68476);
   hmcerror__26->SetBinError(13,14.66902);
   hmcerror__26->SetBinError(14,16.30654);
   hmcerror__26->SetBinError(15,20.39472);
   hmcerror__26->SetBinError(16,15.76124);
   hmcerror__26->SetBinError(17,22.52479);
   hmcerror__26->SetBinError(18,24.83342);
   hmcerror__26->SetBinError(19,11.67057);
   hmcerror__26->SetBinError(20,12.09353);
   hmcerror__26->SetBinError(21,14.50715);
   hmcerror__26->SetBinError(22,13.68035);
   hmcerror__26->SetBinError(23,14.19949);
   hmcerror__26->SetBinError(24,13.48941);
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
   35,
   28,
   15,
   28,
   24,
   26,
   20,
   19,
   23,
   34,
   28,
   23,
   32,
   30,
   27,
   24,
   19,
   27,
   22,
   14,
   18,
   13,
   29,
   27};
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
   6.0548,
   5.4358,
   4.0385,
   5.4358,
   5.0476,
   5.2453,
   4.6266,
   4.5151,
   4.9457,
   5.9703,
   5.4358,
   4.9457,
   5.7977,
   5.6197,
   5.3414,
   5.0476,
   4.5151,
   5.3414,
   4.8417,
   3.9102,
   4.4008,
   3.77763,
   5.5285,
   5.3414};
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
   5.8483,
   5.2271,
   3.8197,
   5.2271,
   4.837,
   5.0358,
   4.4133,
   4.3011,
   4.7346,
   5.7635,
   5.2271,
   4.7346,
   5.5904,
   5.4117,
   5.1322,
   4.837,
   4.3011,
   5.1322,
   4.6299,
   3.6898,
   4.1858,
   3.5552,
   5.3201,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(6.059777);
   Graph_Graph3033->SetMaximum(44.01089);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.9/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_phi_all");
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
   0.3654586,
   0.4676182,
   0.6026329,
   0.6750319,
   0.4357394,
   0.4529724,
   0.4024614,
   0.4714285,
   0.5709469,
   0.5160759,
   0.4354391,
   0.5591281,
   0.4502546,
   0.4367248,
   0.6232814,
   0.5045174,
   0.8409844,
   0.8435906,
   0.3879853,
   0.4668599,
   0.489242,
   0.4498384,
   0.4886537,
   0.4681065};
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
   0.3654586,
   0.4676182,
   0.6026329,
   0.6750319,
   0.4357394,
   0.4529724,
   0.4024614,
   0.4714285,
   0.5709469,
   0.5160759,
   0.4354391,
   0.5591281,
   0.4502546,
   0.4367248,
   0.6232814,
   0.5045174,
   0.8409844,
   0.8435906,
   0.3879853,
   0.4668599,
   0.489242,
   0.4498384,
   0.4886537,
   0.4681065};
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
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   0.2300934,
   0.2456357,
   0.2914121,
   0.2812113,
   0.2414478,
   0.2442835,
   0.2291717,
   0.2372311,
   0.257235,
   0.2569664,
   0.2507975,
   0.2863937,
   0.2575755,
   0.2167494,
   0.2520457,
   0.249549,
   0.2732026,
   0.2695,
   0.2244673,
   0.2451993,
   0.2309582,
   0.2854421,
   0.2436866,
   0.2924485};
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
   0.2300934,
   0.2456357,
   0.2914121,
   0.2812113,
   0.2414478,
   0.2442835,
   0.2291717,
   0.2372311,
   0.257235,
   0.2569664,
   0.2507975,
   0.2863937,
   0.2575755,
   0.2167494,
   0.2520457,
   0.249549,
   0.2732026,
   0.2695,
   0.2244673,
   0.2451993,
   0.2309582,
   0.2854421,
   0.2436866,
   0.2924485};
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
   0.9244164,
   0.8881559,
   0.4710971,
   1.119375,
   0.859246,
   0.9140336,
   0.6761221,
   0.6693096,
   0.8553391,
   1.189907,
   0.8991032,
   0.7707602,
   0.9822164,
   0.8034657,
   0.8251447,
   0.7682403,
   0.7093832,
   0.9171893,
   0.7313848,
   0.5404574,
   0.6070356,
   0.4274671,
   0.9979903,
   0.9369478};
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
   0.1599188,
   0.1724228,
   0.126835,
   0.2173107,
   0.1807137,
   0.1843993,
   0.1564073,
   0.1590526,
   0.1839239,
   0.2089441,
   0.174548,
   0.1657369,
   0.1779561,
   0.1505079,
   0.1632381,
   0.1615737,
   0.1685756,
   0.1814472,
   0.1609612,
   0.1509498,
   0.1484135,
   0.1242163,
   0.1902548,
   0.185356};
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
   0.1544647,
   0.1658029,
   0.1199633,
   0.2089674,
   0.1731739,
   0.1770343,
   0.1491965,
   0.1515141,
   0.1760734,
   0.2017067,
   0.1678465,
   0.1586627,
   0.1715932,
   0.1449372,
   0.1568447,
   0.1548324,
   0.1605857,
   0.1743407,
   0.1539199,
   0.1424414,
   0.1411628,
   0.1169024,
   0.183083,
   0.1780964};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.1944145);
   Graph_Graph3036->SetMaximum(1.50045);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
