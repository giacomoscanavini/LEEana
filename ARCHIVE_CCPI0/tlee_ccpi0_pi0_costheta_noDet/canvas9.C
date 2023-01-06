#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 20:33:13 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-8.456592,1.25641,935.121);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__25->SetBinContent(1,70.63541);
   hmc__25->SetBinContent(2,68.39391);
   hmc__25->SetBinContent(3,68.84888);
   hmc__25->SetBinContent(4,70.54722);
   hmc__25->SetBinContent(5,78.42495);
   hmc__25->SetBinContent(6,82.67466);
   hmc__25->SetBinContent(7,93.07936);
   hmc__25->SetBinContent(8,91.44277);
   hmc__25->SetBinContent(9,111.3581);
   hmc__25->SetBinContent(10,118.2305);
   hmc__25->SetBinContent(11,122.8379);
   hmc__25->SetBinContent(12,132.9577);
   hmc__25->SetBinContent(13,134.8583);
   hmc__25->SetBinContent(14,150.2233);
   hmc__25->SetBinContent(15,182.0452);
   hmc__25->SetBinContent(16,211.9228);
   hmc__25->SetBinContent(17,237.5173);
   hmc__25->SetBinContent(18,255.155);
   hmc__25->SetBinContent(19,342.3605);
   hmc__25->SetBinContent(20,422.8296);
   hmc__25->SetBinError(1,20.46489);
   hmc__25->SetBinError(2,19.93639);
   hmc__25->SetBinError(3,20.85544);
   hmc__25->SetBinError(4,19.01078);
   hmc__25->SetBinError(5,22.78827);
   hmc__25->SetBinError(6,22.30585);
   hmc__25->SetBinError(7,25.71554);
   hmc__25->SetBinError(8,24.4802);
   hmc__25->SetBinError(9,28.13927);
   hmc__25->SetBinError(10,31.23713);
   hmc__25->SetBinError(11,31.5841);
   hmc__25->SetBinError(12,34.37939);
   hmc__25->SetBinError(13,35.56333);
   hmc__25->SetBinError(14,41.69334);
   hmc__25->SetBinError(15,46.86944);
   hmc__25->SetBinError(16,54.95068);
   hmc__25->SetBinError(17,64.57488);
   hmc__25->SetBinError(18,60.34178);
   hmc__25->SetBinError(19,81.62533);
   hmc__25->SetBinError(20,89.09592);
   hmc__25->SetBinError(21,0.3895343);
   hmc__25->SetMinimum(-8.456592);
   hmc__25->SetMaximum(887.9421);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,-1,1);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(443.9711);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(3,0.3073375);
   hbadmatch_stack_1->SetBinContent(6,0.04984158);
   hbadmatch_stack_1->SetBinContent(7,0.9060575);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.7588764);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.801807);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.7319179);
   hbadmatch_stack_1->SetBinContent(14,0.5978752);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,0.7656058);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,1.71961);
   hbadmatch_stack_1->SetBinContent(20,0.7817899);
   hbadmatch_stack_1->SetBinError(3,0.225686);
   hbadmatch_stack_1->SetBinError(6,0.04984158);
   hbadmatch_stack_1->SetBinError(7,0.5313973);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.5394715);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.4941306);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.438694);
   hbadmatch_stack_1->SetBinError(14,0.4467954);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.454798);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.6890778);
   hbadmatch_stack_1->SetBinError(20,0.3908977);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,3.704052);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,1.137595);
   hext_stack_2->SetBinContent(5,3.61467);
   hext_stack_2->SetBinContent(6,1.055394);
   hext_stack_2->SetBinContent(7,1.219797);
   hext_stack_2->SetBinContent(8,1.697008);
   hext_stack_2->SetBinContent(9,6.538654);
   hext_stack_2->SetBinContent(10,2.587998);
   hext_stack_2->SetBinContent(11,9.899538);
   hext_stack_2->SetBinContent(12,7.23652);
   hext_stack_2->SetBinContent(13,2.357392);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,7.836244);
   hext_stack_2->SetBinContent(16,3.704052);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,2.270781);
   hext_stack_2->SetBinContent(20,5.553873);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,1.443106);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.6602113);
   hext_stack_2->SetBinError(5,1.491196);
   hext_stack_2->SetBinError(6,0.6130171);
   hext_stack_2->SetBinError(7,0.7042499);
   hext_stack_2->SetBinError(8,0.8873887);
   hext_stack_2->SetBinError(9,1.818211);
   hext_stack_2->SetBinError(10,1.021308);
   hext_stack_2->SetBinError(11,2.355948);
   hext_stack_2->SetBinError(12,2.060614);
   hext_stack_2->SetBinError(13,0.9653222);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,1.930499);
   hext_stack_2->SetBinError(16,1.443106);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.8582747);
   hext_stack_2->SetBinError(20,1.748219);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(6,0.311381);
   hdirt_stack_3->SetBinContent(8,0.2441834);
   hdirt_stack_3->SetBinContent(16,1.167841e-06);
   hdirt_stack_3->SetBinContent(18,0.4046628);
   hdirt_stack_3->SetBinContent(20,0.432084);
   hdirt_stack_3->SetBinError(6,0.311381);
   hdirt_stack_3->SetBinError(8,0.2441834);
   hdirt_stack_3->SetBinError(16,1.167841e-06);
   hdirt_stack_3->SetBinError(18,0.3002244);
   hdirt_stack_3->SetBinError(20,0.3136519);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,0.2873969);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(3,0.1306092);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,0.6039672);
   houtFV_stack_4->SetBinContent(6,0.3934307);
   houtFV_stack_4->SetBinContent(7,0.9286332);
   houtFV_stack_4->SetBinContent(8,1.349204);
   houtFV_stack_4->SetBinContent(9,1.17353);
   houtFV_stack_4->SetBinContent(10,0.536893);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(12,1.465526);
   houtFV_stack_4->SetBinContent(13,0.9768147);
   houtFV_stack_4->SetBinContent(14,2.499303);
   houtFV_stack_4->SetBinContent(15,0.9288318);
   houtFV_stack_4->SetBinContent(16,3.317113);
   houtFV_stack_4->SetBinContent(17,2.16958);
   houtFV_stack_4->SetBinContent(18,2.066433);
   houtFV_stack_4->SetBinContent(19,2.772795);
   houtFV_stack_4->SetBinContent(20,5.698067);
   houtFV_stack_4->SetBinError(1,0.2157946);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(3,0.1306092);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.3490334);
   houtFV_stack_4->SetBinError(6,0.2781975);
   houtFV_stack_4->SetBinError(7,0.48078);
   houtFV_stack_4->SetBinError(8,0.5656477);
   houtFV_stack_4->SetBinError(9,0.4790957);
   houtFV_stack_4->SetBinError(10,0.3929602);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(12,0.6209405);
   houtFV_stack_4->SetBinError(13,0.4368475);
   houtFV_stack_4->SetBinError(14,0.905936);
   houtFV_stack_4->SetBinError(15,0.5151662);
   houtFV_stack_4->SetBinError(16,1.370832);
   houtFV_stack_4->SetBinError(17,0.7147399);
   houtFV_stack_4->SetBinError(18,0.7113716);
   houtFV_stack_4->SetBinError(19,0.8360981);
   houtFV_stack_4->SetBinError(20,1.273041);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3609859);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.6527874);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.6078091);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5395806);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.2806011);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.3013574);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.6289733);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.6570328);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.4615561);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.713852);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.086083);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6366544);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.117423);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.398119);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.8124426);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.411254);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.330306);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.54407);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.573977);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.5258);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1553322);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2476957);
   hNCpi0inFVres_stack_7->SetBinError(3,0.193831);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2223304);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1078532);
   hNCpi0inFVres_stack_7->SetBinError(6,0.168434);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3442444);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2827814);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1684759);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4267312);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3534046);
   hNCpi0inFVres_stack_7->SetBinError(12,0.217841);
   hNCpi0inFVres_stack_7->SetBinError(13,0.423894);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3987313);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1856888);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6573851);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8314863);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8724367);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6467748);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9174307);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3609317);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.04591791);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5079823);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.3293517);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5159867);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.4005826);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4958734);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6082808);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5113242);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3058918);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4320502);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5654896);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.341053);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9555793);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.102609);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.558759);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.414093);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.219551);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.037386);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.690291);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2188214);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.02681065);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2468901);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1267038);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2077227);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1668969);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1904653);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3266789);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2331238);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.135686);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1585756);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2064303);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4249943);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2894662);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6108058);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5118053);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3932027);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7122739);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8850757);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8059343);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,58.09885);
   hCCpi0inFV_stack_10->SetBinContent(2,55.99369);
   hCCpi0inFV_stack_10->SetBinContent(3,61.22199);
   hCCpi0inFV_stack_10->SetBinContent(4,61.02766);
   hCCpi0inFV_stack_10->SetBinContent(5,66.33218);
   hCCpi0inFV_stack_10->SetBinContent(6,64.2369);
   hCCpi0inFV_stack_10->SetBinContent(7,76.44693);
   hCCpi0inFV_stack_10->SetBinContent(8,73.42883);
   hCCpi0inFV_stack_10->SetBinContent(9,84.34888);
   hCCpi0inFV_stack_10->SetBinContent(10,93.14404);
   hCCpi0inFV_stack_10->SetBinContent(11,87.08908);
   hCCpi0inFV_stack_10->SetBinContent(12,100.5284);
   hCCpi0inFV_stack_10->SetBinContent(13,105.7516);
   hCCpi0inFV_stack_10->SetBinContent(14,118.634);
   hCCpi0inFV_stack_10->SetBinContent(15,140.0059);
   hCCpi0inFV_stack_10->SetBinContent(16,165.8146);
   hCCpi0inFV_stack_10->SetBinContent(17,182.5235);
   hCCpi0inFV_stack_10->SetBinContent(18,188.7467);
   hCCpi0inFV_stack_10->SetBinContent(19,263.5768);
   hCCpi0inFV_stack_10->SetBinContent(20,308.6013);
   hCCpi0inFV_stack_10->SetBinError(1,3.868256);
   hCCpi0inFV_stack_10->SetBinError(2,3.737898);
   hCCpi0inFV_stack_10->SetBinError(3,3.961052);
   hCCpi0inFV_stack_10->SetBinError(4,3.947462);
   hCCpi0inFV_stack_10->SetBinError(5,4.105856);
   hCCpi0inFV_stack_10->SetBinError(6,4.073997);
   hCCpi0inFV_stack_10->SetBinError(7,4.409046);
   hCCpi0inFV_stack_10->SetBinError(8,4.302416);
   hCCpi0inFV_stack_10->SetBinError(9,4.783612);
   hCCpi0inFV_stack_10->SetBinError(10,4.837095);
   hCCpi0inFV_stack_10->SetBinError(11,4.676978);
   hCCpi0inFV_stack_10->SetBinError(12,5.032684);
   hCCpi0inFV_stack_10->SetBinError(13,5.183823);
   hCCpi0inFV_stack_10->SetBinError(14,5.446065);
   hCCpi0inFV_stack_10->SetBinError(15,5.972605);
   hCCpi0inFV_stack_10->SetBinError(16,6.567534);
   hCCpi0inFV_stack_10->SetBinError(17,6.831408);
   hCCpi0inFV_stack_10->SetBinError(18,6.857296);
   hCCpi0inFV_stack_10->SetBinError(19,8.218935);
   hCCpi0inFV_stack_10->SetBinError(20,8.826857);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.3401776);
   hNCinFV_stack_11->SetBinContent(6,0.5867651);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.9286332);
   hNCinFV_stack_11->SetBinContent(13,0.3934307);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,1.805704);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,1.610679);
   hNCinFV_stack_11->SetBinContent(19,1.463836);
   hNCinFV_stack_11->SetBinContent(20,4.058092);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.3401776);
   hNCinFV_stack_11->SetBinError(6,0.3387718);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.48078);
   hNCinFV_stack_11->SetBinError(13,0.2781975);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.7080169);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.6806271);
   hNCinFV_stack_11->SetBinError(19,0.620407);
   hNCinFV_stack_11->SetBinError(20,1.020609);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,10.27512);
   hnumuCCinFV_stack_12->SetBinContent(2,7.46056);
   hnumuCCinFV_stack_12->SetBinContent(3,5.480676);
   hnumuCCinFV_stack_12->SetBinContent(4,6.832678);
   hnumuCCinFV_stack_12->SetBinContent(5,6.68749);
   hnumuCCinFV_stack_12->SetBinContent(6,15.339);
   hnumuCCinFV_stack_12->SetBinContent(7,12.25807);
   hnumuCCinFV_stack_12->SetBinContent(8,13.0648);
   hnumuCCinFV_stack_12->SetBinContent(9,16.97687);
   hnumuCCinFV_stack_12->SetBinContent(10,19.15493);
   hnumuCCinFV_stack_12->SetBinContent(11,22.99248);
   hnumuCCinFV_stack_12->SetBinContent(12,21.38295);
   hnumuCCinFV_stack_12->SetBinContent(13,22.18869);
   hnumuCCinFV_stack_12->SetBinContent(14,24.54612);
   hnumuCCinFV_stack_12->SetBinContent(15,28.47196);
   hnumuCCinFV_stack_12->SetBinContent(16,32.43428);
   hnumuCCinFV_stack_12->SetBinContent(17,45.26379);
   hnumuCCinFV_stack_12->SetBinContent(18,53.56316);
   hnumuCCinFV_stack_12->SetBinContent(19,63.35518);
   hnumuCCinFV_stack_12->SetBinContent(20,84.44608);
   hnumuCCinFV_stack_12->SetBinError(1,4.223438);
   hnumuCCinFV_stack_12->SetBinError(2,1.336682);
   hnumuCCinFV_stack_12->SetBinError(3,1.148562);
   hnumuCCinFV_stack_12->SetBinError(4,1.29074);
   hnumuCCinFV_stack_12->SetBinError(5,1.77096);
   hnumuCCinFV_stack_12->SetBinError(6,3.081226);
   hnumuCCinFV_stack_12->SetBinError(7,1.795877);
   hnumuCCinFV_stack_12->SetBinError(8,1.883966);
   hnumuCCinFV_stack_12->SetBinError(9,2.120747);
   hnumuCCinFV_stack_12->SetBinError(10,2.341815);
   hnumuCCinFV_stack_12->SetBinError(11,2.480357);
   hnumuCCinFV_stack_12->SetBinError(12,2.8968);
   hnumuCCinFV_stack_12->SetBinError(13,3.303192);
   hnumuCCinFV_stack_12->SetBinError(14,2.864846);
   hnumuCCinFV_stack_12->SetBinError(15,3.034013);
   hnumuCCinFV_stack_12->SetBinError(16,3.039529);
   hnumuCCinFV_stack_12->SetBinError(17,3.434417);
   hnumuCCinFV_stack_12->SetBinError(18,4.114936);
   hnumuCCinFV_stack_12->SetBinError(19,4.197015);
   hnumuCCinFV_stack_12->SetBinError(20,5.005641);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.2680781);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(15,0.813428);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(20,3.024642);
   hnueCCinFV_stack_13->SetBinError(3,0.2680781);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(15,0.5045317);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.340721);
   hnueCCinFV_stack_13->SetBinError(20,0.9422365);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__26->SetBinContent(1,70.63541);
   hmcerror__26->SetBinContent(2,68.39391);
   hmcerror__26->SetBinContent(3,68.84888);
   hmcerror__26->SetBinContent(4,70.54722);
   hmcerror__26->SetBinContent(5,78.42495);
   hmcerror__26->SetBinContent(6,82.67466);
   hmcerror__26->SetBinContent(7,93.07936);
   hmcerror__26->SetBinContent(8,91.44277);
   hmcerror__26->SetBinContent(9,111.3581);
   hmcerror__26->SetBinContent(10,118.2305);
   hmcerror__26->SetBinContent(11,122.8379);
   hmcerror__26->SetBinContent(12,132.9577);
   hmcerror__26->SetBinContent(13,134.8583);
   hmcerror__26->SetBinContent(14,150.2233);
   hmcerror__26->SetBinContent(15,182.0452);
   hmcerror__26->SetBinContent(16,211.9228);
   hmcerror__26->SetBinContent(17,237.5173);
   hmcerror__26->SetBinContent(18,255.155);
   hmcerror__26->SetBinContent(19,342.3605);
   hmcerror__26->SetBinContent(20,422.8296);
   hmcerror__26->SetBinError(1,20.46489);
   hmcerror__26->SetBinError(2,19.93639);
   hmcerror__26->SetBinError(3,20.85544);
   hmcerror__26->SetBinError(4,19.01078);
   hmcerror__26->SetBinError(5,22.78827);
   hmcerror__26->SetBinError(6,22.30585);
   hmcerror__26->SetBinError(7,25.71554);
   hmcerror__26->SetBinError(8,24.4802);
   hmcerror__26->SetBinError(9,28.13927);
   hmcerror__26->SetBinError(10,31.23713);
   hmcerror__26->SetBinError(11,31.5841);
   hmcerror__26->SetBinError(12,34.37939);
   hmcerror__26->SetBinError(13,35.56333);
   hmcerror__26->SetBinError(14,41.69334);
   hmcerror__26->SetBinError(15,46.86944);
   hmcerror__26->SetBinError(16,54.95068);
   hmcerror__26->SetBinError(17,64.57488);
   hmcerror__26->SetBinError(18,60.34178);
   hmcerror__26->SetBinError(19,81.62533);
   hmcerror__26->SetBinError(20,89.09592);
   hmcerror__26->SetBinError(21,0.3895343);
   hmcerror__26->SetEntries(3014.754);

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
   
   Double_t _fx3033[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3033[20] = {
   55,
   46,
   54,
   57,
   58,
   66,
   72,
   70,
   85,
   97,
   114,
   96,
   133,
   148,
   160,
   202,
   207,
   269,
   321,
   349};
   Double_t _felx3033[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3033[20] = {
   7.546,
   6.9153,
   7.4785,
   7.679,
   7.7446,
   8.2509,
   8.6108,
   8.4925,
   9.3428,
   9.9704,
   10.67708,
   9.9196,
   11.53256,
   12.16553,
   12.64911,
   14.21267,
   14.38749,
   16.40122,
   17.91647,
   18.68154};
   Double_t _fehx3033[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3033[20] = {
   7.3425,
   6.7108,
   7.275,
   7.4757,
   7.5415,
   8.0483,
   8.4085,
   8.2902,
   9.1411,
   9.769,
   10.67708,
   9.718,
   11.53256,
   12.16553,
   12.64911,
   14.21267,
   14.38749,
   16.40122,
   17.91647,
   18.68154};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(6.225016);
   Graph_Graph3033->SetMaximum(400.5412);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2659.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2355.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 512.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_pi0_costheta_all");
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
   
   Double_t _fx3034[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3034[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3034[20] = {
   0.2897257,
   0.2914936,
   0.3029162,
   0.269476,
   0.2905742,
   0.2698027,
   0.2762754,
   0.2677106,
   0.2526917,
   0.2642055,
   0.2571201,
   0.2585739,
   0.2637089,
   0.2775425,
   0.2574605,
   0.2592957,
   0.2718745,
   0.2364907,
   0.2384192,
   0.2107135};
   Double_t _fehx3034[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3034[20] = {
   0.2897257,
   0.2914936,
   0.3029162,
   0.269476,
   0.2905742,
   0.2698027,
   0.2762754,
   0.2677106,
   0.2526917,
   0.2642055,
   0.2571201,
   0.2585739,
   0.2637089,
   0.2775425,
   0.2574605,
   0.2592957,
   0.2718745,
   0.2364907,
   0.2384192,
   0.2107135};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3035[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3035[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3035[20] = {
   0.2897257,
   0.2914936,
   0.3029162,
   0.269476,
   0.2905742,
   0.2698027,
   0.2762754,
   0.2677106,
   0.2526917,
   0.2642055,
   0.2571201,
   0.2585739,
   0.2637089,
   0.2775425,
   0.2574605,
   0.2592957,
   0.2718745,
   0.2364907,
   0.2384192,
   0.2107135};
   Double_t _fehx3035[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3035[20] = {
   0.2897257,
   0.2914936,
   0.3029162,
   0.269476,
   0.2905742,
   0.2698027,
   0.2762754,
   0.2677106,
   0.2526917,
   0.2642055,
   0.2571201,
   0.2585739,
   0.2637089,
   0.2775425,
   0.2574605,
   0.2592957,
   0.2718745,
   0.2364907,
   0.2384192,
   0.2107135};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3036[20] = {
   0.7786463,
   0.6725745,
   0.7843264,
   0.8079695,
   0.7395606,
   0.7983099,
   0.7735335,
   0.7655061,
   0.763303,
   0.8204315,
   0.9280521,
   0.7220344,
   0.9862204,
   0.9852002,
   0.8789028,
   0.9531771,
   0.8715155,
   1.054261,
   0.9376082,
   0.8253916};
   Double_t _felx3036[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3036[20] = {
   0.1068303,
   0.1011099,
   0.1086219,
   0.1088491,
   0.09875174,
   0.09979962,
   0.0925103,
   0.09287229,
   0.08389867,
   0.08433021,
   0.08692004,
   0.07460721,
   0.08551616,
   0.08098295,
   0.06948336,
   0.06706531,
   0.06057452,
   0.06427943,
   0.05233218,
   0.0441822};
   Double_t _fehx3036[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3036[20] = {
   0.1039493,
   0.09811985,
   0.1056662,
   0.1059673,
   0.096162,
   0.09734906,
   0.09033689,
   0.09065998,
   0.0820874,
   0.08262676,
   0.08692004,
   0.07309094,
   0.08551616,
   0.08098295,
   0.06948336,
   0.06706531,
   0.06057452,
   0.06427943,
   0.05233218,
   0.0441822};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.5167571);
   Graph_Graph3036->SetMaximum(1.173248);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
