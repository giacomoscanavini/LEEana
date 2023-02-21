#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 23:12:07 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
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
   pad1->Range(-0.1538462,-1.072624,1.128205,118.6097);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__25->SetBinContent(1,39.62172);
   hmc__25->SetBinContent(2,34.53794);
   hmc__25->SetBinContent(3,30.44405);
   hmc__25->SetBinContent(4,32.29311);
   hmc__25->SetBinContent(5,31.64967);
   hmc__25->SetBinContent(6,36.99506);
   hmc__25->SetBinContent(7,35.27865);
   hmc__25->SetBinContent(8,28.3245);
   hmc__25->SetBinContent(9,31.21482);
   hmc__25->SetBinContent(10,32.09104);
   hmc__25->SetBinContent(11,37.9298);
   hmc__25->SetBinContent(12,32.78819);
   hmc__25->SetBinContent(13,36.31162);
   hmc__25->SetBinContent(14,31.42373);
   hmc__25->SetBinContent(15,37.24327);
   hmc__25->SetBinContent(16,40.39363);
   hmc__25->SetBinContent(17,38.7157);
   hmc__25->SetBinContent(18,36.61771);
   hmc__25->SetBinContent(19,43.5522);
   hmc__25->SetBinContent(20,53.63122);
   hmc__25->SetBinError(1,24.0546);
   hmc__25->SetBinError(2,19.09286);
   hmc__25->SetBinError(3,13.19175);
   hmc__25->SetBinError(4,17.20674);
   hmc__25->SetBinError(5,16.0721);
   hmc__25->SetBinError(6,16.03539);
   hmc__25->SetBinError(7,16.33061);
   hmc__25->SetBinError(8,16.06352);
   hmc__25->SetBinError(9,23.37391);
   hmc__25->SetBinError(10,14.6291);
   hmc__25->SetBinError(11,18.58773);
   hmc__25->SetBinError(12,19.03249);
   hmc__25->SetBinError(13,18.11031);
   hmc__25->SetBinError(14,16.88691);
   hmc__25->SetBinError(15,23.25489);
   hmc__25->SetBinError(16,16.21128);
   hmc__25->SetBinError(17,21.13329);
   hmc__25->SetBinError(18,21.78584);
   hmc__25->SetBinError(19,19.18656);
   hmc__25->SetBinError(20,20.17653);
   hmc__25->SetBinError(21,0.3895343);
   hmc__25->SetMinimum(-1.072624);
   hmc__25->SetMaximum(112.6256);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,1);
   hs9_stack_9->SetMinimum(-5.790634e-09);
   hs9_stack_9->SetMaximum(56.31277);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,2.494981);
   hbadmatch_stack_1->SetBinContent(2,2.395248);
   hbadmatch_stack_1->SetBinContent(3,0.5352025);
   hbadmatch_stack_1->SetBinContent(4,0.9286332);
   hbadmatch_stack_1->SetBinContent(5,1.125349);
   hbadmatch_stack_1->SetBinContent(6,1.340237);
   hbadmatch_stack_1->SetBinContent(7,0.3917402);
   hbadmatch_stack_1->SetBinContent(8,1.404241);
   hbadmatch_stack_1->SetBinContent(9,0.5884556);
   hbadmatch_stack_1->SetBinContent(10,0.8781033);
   hbadmatch_stack_1->SetBinContent(11,1.360711);
   hbadmatch_stack_1->SetBinContent(12,1.529414);
   hbadmatch_stack_1->SetBinContent(13,1.277666);
   hbadmatch_stack_1->SetBinContent(14,0.5884556);
   hbadmatch_stack_1->SetBinContent(15,0.9801958);
   hbadmatch_stack_1->SetBinContent(16,1.461569);
   hbadmatch_stack_1->SetBinContent(17,0.8942785);
   hbadmatch_stack_1->SetBinContent(18,1.159675);
   hbadmatch_stack_1->SetBinContent(19,0.7607957);
   hbadmatch_stack_1->SetBinContent(20,1.573262);
   hbadmatch_stack_1->SetBinError(1,0.8123347);
   hbadmatch_stack_1->SetBinError(2,0.7359467);
   hbadmatch_stack_1->SetBinError(3,0.3921167);
   hbadmatch_stack_1->SetBinError(4,0.48078);
   hbadmatch_stack_1->SetBinError(5,0.5194673);
   hbadmatch_stack_1->SetBinError(6,0.6143951);
   hbadmatch_stack_1->SetBinError(7,0.2770047);
   hbadmatch_stack_1->SetBinError(8,0.6092665);
   hbadmatch_stack_1->SetBinError(9,0.3397478);
   hbadmatch_stack_1->SetBinError(10,0.5211595);
   hbadmatch_stack_1->SetBinError(11,0.6803552);
   hbadmatch_stack_1->SetBinError(12,0.6586514);
   hbadmatch_stack_1->SetBinError(13,0.6913699);
   hbadmatch_stack_1->SetBinError(14,0.3397478);
   hbadmatch_stack_1->SetBinError(15,0.4383608);
   hbadmatch_stack_1->SetBinError(16,0.7359857);
   hbadmatch_stack_1->SetBinError(17,0.4524859);
   hbadmatch_stack_1->SetBinError(18,0.5334133);
   hbadmatch_stack_1->SetBinError(19,0.4522722);
   hbadmatch_stack_1->SetBinError(20,0.6086426);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,5.483261);
   hext_stack_2->SetBinContent(2,3.864046);
   hext_stack_2->SetBinContent(3,2.510206);
   hext_stack_2->SetBinContent(4,1.379791);
   hext_stack_2->SetBinContent(5,1.614806);
   hext_stack_2->SetBinContent(6,3.208071);
   hext_stack_2->SetBinContent(7,3.483397);
   hext_stack_2->SetBinContent(8,1.950793);
   hext_stack_2->SetBinContent(9,2.599588);
   hext_stack_2->SetBinContent(10,4.677244);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,3.241202);
   hext_stack_2->SetBinContent(13,6.855872);
   hext_stack_2->SetBinContent(14,3.864046);
   hext_stack_2->SetBinContent(15,5.116974);
   hext_stack_2->SetBinContent(16,8.291914);
   hext_stack_2->SetBinContent(17,2.905215);
   hext_stack_2->SetBinContent(18,7.967516);
   hext_stack_2->SetBinContent(19,6.855872);
   hext_stack_2->SetBinContent(20,8.656622);
   hext_stack_2->SetBinError(1,1.711754);
   hext_stack_2->SetBinError(2,1.437918);
   hext_stack_2->SetBinError(3,1.057404);
   hext_stack_2->SetBinError(4,0.6935586);
   hext_stack_2->SetBinError(5,0.8528597);
   hext_stack_2->SetBinError(6,1.434693);
   hext_stack_2->SetBinError(7,1.197416);
   hext_stack_2->SetBinError(8,0.8755137);
   hext_stack_2->SetBinError(9,0.9884288);
   hext_stack_2->SetBinError(10,1.54863);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,1.178414);
   hext_stack_2->SetBinError(13,1.900612);
   hext_stack_2->SetBinError(14,1.437918);
   hext_stack_2->SetBinError(15,1.376188);
   hext_stack_2->SetBinError(16,2.149865);
   hext_stack_2->SetBinError(17,1.161682);
   hext_stack_2->SetBinError(18,2.12525);
   hext_stack_2->SetBinError(19,1.900612);
   hext_stack_2->SetBinError(20,1.963739);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(2,0.3381872);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(7,0.2620035);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.140423);
   hdirt_stack_3->SetBinContent(13,0.2945329);
   hdirt_stack_3->SetBinContent(14,0.2645861);
   hdirt_stack_3->SetBinContent(15,0.2623434);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.8999509);
   hdirt_stack_3->SetBinContent(20,1.029908);
   hdirt_stack_3->SetBinError(2,0.3381872);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(7,0.2620035);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(11,0.1380915);
   hdirt_stack_3->SetBinError(13,0.2086718);
   hdirt_stack_3->SetBinError(14,0.2645861);
   hdirt_stack_3->SetBinError(15,0.2623434);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(18,0.3381872);
   hdirt_stack_3->SetBinError(19,0.4999968);
   hdirt_stack_3->SetBinError(20,0.6061357);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,7.681806);
   houtFV_stack_4->SetBinContent(2,5.684357);
   houtFV_stack_4->SetBinContent(3,4.571897);
   houtFV_stack_4->SetBinContent(4,5.623362);
   houtFV_stack_4->SetBinContent(5,6.248774);
   houtFV_stack_4->SetBinContent(6,6.39897);
   houtFV_stack_4->SetBinContent(7,5.765134);
   houtFV_stack_4->SetBinContent(8,5.570421);
   houtFV_stack_4->SetBinContent(9,5.896889);
   houtFV_stack_4->SetBinContent(10,5.178369);
   houtFV_stack_4->SetBinContent(11,6.815603);
   houtFV_stack_4->SetBinContent(12,5.71019);
   houtFV_stack_4->SetBinContent(13,6.739175);
   houtFV_stack_4->SetBinContent(14,4.107964);
   houtFV_stack_4->SetBinContent(15,4.969228);
   houtFV_stack_4->SetBinContent(16,8.080697);
   houtFV_stack_4->SetBinContent(17,6.443798);
   houtFV_stack_4->SetBinContent(18,5.231622);
   houtFV_stack_4->SetBinContent(19,7.881533);
   houtFV_stack_4->SetBinContent(20,6.696471);
   houtFV_stack_4->SetBinError(1,1.38307);
   houtFV_stack_4->SetBinError(2,1.179657);
   houtFV_stack_4->SetBinError(3,1.054793);
   houtFV_stack_4->SetBinError(4,1.160994);
   houtFV_stack_4->SetBinError(5,1.271618);
   houtFV_stack_4->SetBinError(6,1.337612);
   houtFV_stack_4->SetBinError(7,1.193427);
   houtFV_stack_4->SetBinError(8,1.212588);
   houtFV_stack_4->SetBinError(9,1.180044);
   houtFV_stack_4->SetBinError(10,1.144335);
   houtFV_stack_4->SetBinError(11,1.31938);
   houtFV_stack_4->SetBinError(12,1.209104);
   houtFV_stack_4->SetBinError(13,1.346257);
   houtFV_stack_4->SetBinError(14,1.000995);
   houtFV_stack_4->SetBinError(15,1.095718);
   houtFV_stack_4->SetBinError(16,1.511219);
   houtFV_stack_4->SetBinError(17,1.286487);
   houtFV_stack_4->SetBinError(18,1.127464);
   houtFV_stack_4->SetBinError(19,1.369743);
   houtFV_stack_4->SetBinError(20,1.331276);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2792353);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1994106);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.19424);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.841516);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.126654);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.33574);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.602538);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.686238);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.230292);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.20869);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.125653);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.139272);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.237422);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.392204);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.705153);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.457382);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.514262);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.945468);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.436634);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.721604);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.164844);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.246319);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8457961);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9952937);
   hNCpi0inFVres_stack_7->SetBinError(3,0.882026);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9073661);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9924545);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9936303);
   hNCpi0inFVres_stack_7->SetBinError(7,1.036699);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8612623);
   hNCpi0inFVres_stack_7->SetBinError(9,0.852024);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8562011);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8728215);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9007649);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7811648);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8247894);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8816579);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8563907);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9930101);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8606221);
   hNCpi0inFVres_stack_7->SetBinError(19,0.841914);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9755454);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.520722);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.128458);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.26979);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.105462);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.589644);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.618376);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.078226);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.35249);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.687626);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.714694);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.561576);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.13353);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.464258);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.799226);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.468498);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.14698);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.00748);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.343944);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.757044);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.194402);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3839875);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3130755);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4161726);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4727974);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4498782);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4716302);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4574563);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3514395);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4453858);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4241235);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4109174);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5070253);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3992271);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4488676);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5469685);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4810939);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4770317);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5248167);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4550394);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6462893);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.277592);
   hCCpi0inFV_stack_10->SetBinContent(2,6.545127);
   hCCpi0inFV_stack_10->SetBinContent(3,8.175687);
   hCCpi0inFV_stack_10->SetBinContent(4,6.418611);
   hCCpi0inFV_stack_10->SetBinContent(5,5.537594);
   hCCpi0inFV_stack_10->SetBinContent(6,9.502928);
   hCCpi0inFV_stack_10->SetBinContent(7,7.558052);
   hCCpi0inFV_stack_10->SetBinContent(8,4.794763);
   hCCpi0inFV_stack_10->SetBinContent(9,4.67882);
   hCCpi0inFV_stack_10->SetBinContent(10,5.518546);
   hCCpi0inFV_stack_10->SetBinContent(11,8.955784);
   hCCpi0inFV_stack_10->SetBinContent(12,5.625076);
   hCCpi0inFV_stack_10->SetBinContent(13,5.80378);
   hCCpi0inFV_stack_10->SetBinContent(14,8.198086);
   hCCpi0inFV_stack_10->SetBinContent(15,5.324954);
   hCCpi0inFV_stack_10->SetBinContent(16,6.168537);
   hCCpi0inFV_stack_10->SetBinContent(17,7.333777);
   hCCpi0inFV_stack_10->SetBinContent(18,5.444662);
   hCCpi0inFV_stack_10->SetBinContent(19,8.650563);
   hCCpi0inFV_stack_10->SetBinContent(20,5.594904);
   hCCpi0inFV_stack_10->SetBinError(1,1.22113);
   hCCpi0inFV_stack_10->SetBinError(2,1.353912);
   hCCpi0inFV_stack_10->SetBinError(3,1.433406);
   hCCpi0inFV_stack_10->SetBinError(4,1.323357);
   hCCpi0inFV_stack_10->SetBinError(5,1.222396);
   hCCpi0inFV_stack_10->SetBinError(6,1.517369);
   hCCpi0inFV_stack_10->SetBinError(7,1.407497);
   hCCpi0inFV_stack_10->SetBinError(8,1.017912);
   hCCpi0inFV_stack_10->SetBinError(9,1.082093);
   hCCpi0inFV_stack_10->SetBinError(10,1.193827);
   hCCpi0inFV_stack_10->SetBinError(11,1.509784);
   hCCpi0inFV_stack_10->SetBinError(12,1.194994);
   hCCpi0inFV_stack_10->SetBinError(13,1.256427);
   hCCpi0inFV_stack_10->SetBinError(14,1.46186);
   hCCpi0inFV_stack_10->SetBinError(15,1.08393);
   hCCpi0inFV_stack_10->SetBinError(16,1.251702);
   hCCpi0inFV_stack_10->SetBinError(17,1.319254);
   hCCpi0inFV_stack_10->SetBinError(18,1.177692);
   hCCpi0inFV_stack_10->SetBinError(19,1.477676);
   hCCpi0inFV_stack_10->SetBinError(20,1.207609);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,2.447412);
   hNCinFV_stack_11->SetBinContent(2,2.145881);
   hNCinFV_stack_11->SetBinContent(3,0.9303237);
   hNCinFV_stack_11->SetBinContent(4,1.996117);
   hNCinFV_stack_11->SetBinContent(5,1.56527);
   hNCinFV_stack_11->SetBinContent(6,1.518779);
   hNCinFV_stack_11->SetBinContent(7,2.055672);
   hNCinFV_stack_11->SetBinContent(8,2.434496);
   hNCinFV_stack_11->SetBinContent(9,2.340906);
   hNCinFV_stack_11->SetBinContent(10,0.9801958);
   hNCinFV_stack_11->SetBinContent(11,2.590875);
   hNCinFV_stack_11->SetBinContent(12,1.318683);
   hNCinFV_stack_11->SetBinContent(13,1.712114);
   hNCinFV_stack_11->SetBinContent(14,1.804013);
   hNCinFV_stack_11->SetBinContent(15,2.931052);
   hNCinFV_stack_11->SetBinContent(16,1.373626);
   hNCinFV_stack_11->SetBinContent(17,0.9286332);
   hNCinFV_stack_11->SetBinContent(18,1.855576);
   hNCinFV_stack_11->SetBinContent(19,1.710423);
   hNCinFV_stack_11->SetBinContent(20,2.537621);
   hNCinFV_stack_11->SetBinError(1,0.7605193);
   hNCinFV_stack_11->SetBinError(2,0.785499);
   hNCinFV_stack_11->SetBinError(3,0.4814682);
   hNCinFV_stack_11->SetBinError(4,0.7619161);
   hNCinFV_stack_11->SetBinError(5,0.5534115);
   hNCinFV_stack_11->SetBinError(6,0.5892709);
   hNCinFV_stack_11->SetBinError(7,0.7082781);
   hNCinFV_stack_11->SetBinError(8,0.8784752);
   hNCinFV_stack_11->SetBinError(9,0.8093475);
   hNCinFV_stack_11->SetBinError(10,0.4383608);
   hNCinFV_stack_11->SetBinError(11,0.8095761);
   hNCinFV_stack_11->SetBinError(12,0.5542732);
   hNCinFV_stack_11->SetBinError(13,0.6201715);
   hNCinFV_stack_11->SetBinError(14,0.7075491);
   hNCinFV_stack_11->SetBinError(15,0.8781425);
   hNCinFV_stack_11->SetBinError(16,0.519186);
   hNCinFV_stack_11->SetBinError(17,0.48078);
   hNCinFV_stack_11->SetBinError(18,0.6794384);
   hNCinFV_stack_11->SetBinError(19,0.6196373);
   hNCinFV_stack_11->SetBinError(20,0.8329108);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.465903);
   hnumuCCinFV_stack_12->SetBinContent(2,3.567218);
   hnumuCCinFV_stack_12->SetBinContent(3,5.268488);
   hnumuCCinFV_stack_12->SetBinContent(4,5.865853);
   hnumuCCinFV_stack_12->SetBinContent(5,4.836145);
   hnumuCCinFV_stack_12->SetBinContent(6,4.72146);
   hnumuCCinFV_stack_12->SetBinContent(7,4.342531);
   hnumuCCinFV_stack_12->SetBinContent(8,3.580705);
   hnumuCCinFV_stack_12->SetBinContent(9,6.130912);
   hnumuCCinFV_stack_12->SetBinContent(10,5.948819);
   hnumuCCinFV_stack_12->SetBinContent(11,5.328346);
   hnumuCCinFV_stack_12->SetBinContent(12,5.754189);
   hnumuCCinFV_stack_12->SetBinContent(13,4.824859);
   hnumuCCinFV_stack_12->SetBinContent(14,3.886059);
   hnumuCCinFV_stack_12->SetBinContent(15,7.592064);
   hnumuCCinFV_stack_12->SetBinContent(16,5.418694);
   hnumuCCinFV_stack_12->SetBinContent(17,9.263348);
   hnumuCCinFV_stack_12->SetBinContent(18,5.276581);
   hnumuCCinFV_stack_12->SetBinContent(19,6.216041);
   hnumuCCinFV_stack_12->SetBinContent(20,12.03047);
   hnumuCCinFV_stack_12->SetBinError(1,1.528592);
   hnumuCCinFV_stack_12->SetBinError(2,0.9021365);
   hnumuCCinFV_stack_12->SetBinError(3,1.180298);
   hnumuCCinFV_stack_12->SetBinError(4,1.272295);
   hnumuCCinFV_stack_12->SetBinError(5,1.528754);
   hnumuCCinFV_stack_12->SetBinError(6,1.128284);
   hnumuCCinFV_stack_12->SetBinError(7,0.9900297);
   hnumuCCinFV_stack_12->SetBinError(8,0.9557405);
   hnumuCCinFV_stack_12->SetBinError(9,1.361807);
   hnumuCCinFV_stack_12->SetBinError(10,1.799061);
   hnumuCCinFV_stack_12->SetBinError(11,1.23938);
   hnumuCCinFV_stack_12->SetBinError(12,1.38039);
   hnumuCCinFV_stack_12->SetBinError(13,1.147762);
   hnumuCCinFV_stack_12->SetBinError(14,1.02738);
   hnumuCCinFV_stack_12->SetBinError(15,1.68313);
   hnumuCCinFV_stack_12->SetBinError(16,1.355108);
   hnumuCCinFV_stack_12->SetBinError(17,1.925096);
   hnumuCCinFV_stack_12->SetBinError(18,1.176656);
   hnumuCCinFV_stack_12->SetBinError(19,1.341784);
   hnumuCCinFV_stack_12->SetBinError(20,2.136257);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(19,1.543539);
   hnueCCinFV_stack_13->SetBinContent(20,3.373233);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.2171002);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(19,1.190549);
   hnueCCinFV_stack_13->SetBinError(20,1.725714);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__26->SetBinContent(1,39.62172);
   hmcerror__26->SetBinContent(2,34.53794);
   hmcerror__26->SetBinContent(3,30.44405);
   hmcerror__26->SetBinContent(4,32.29311);
   hmcerror__26->SetBinContent(5,31.64967);
   hmcerror__26->SetBinContent(6,36.99506);
   hmcerror__26->SetBinContent(7,35.27865);
   hmcerror__26->SetBinContent(8,28.3245);
   hmcerror__26->SetBinContent(9,31.21482);
   hmcerror__26->SetBinContent(10,32.09104);
   hmcerror__26->SetBinContent(11,37.9298);
   hmcerror__26->SetBinContent(12,32.78819);
   hmcerror__26->SetBinContent(13,36.31162);
   hmcerror__26->SetBinContent(14,31.42373);
   hmcerror__26->SetBinContent(15,37.24327);
   hmcerror__26->SetBinContent(16,40.39363);
   hmcerror__26->SetBinContent(17,38.7157);
   hmcerror__26->SetBinContent(18,36.61771);
   hmcerror__26->SetBinContent(19,43.5522);
   hmcerror__26->SetBinContent(20,53.63122);
   hmcerror__26->SetBinError(1,24.0546);
   hmcerror__26->SetBinError(2,19.09286);
   hmcerror__26->SetBinError(3,13.19175);
   hmcerror__26->SetBinError(4,17.20674);
   hmcerror__26->SetBinError(5,16.0721);
   hmcerror__26->SetBinError(6,16.03539);
   hmcerror__26->SetBinError(7,16.33061);
   hmcerror__26->SetBinError(8,16.06352);
   hmcerror__26->SetBinError(9,23.37391);
   hmcerror__26->SetBinError(10,14.6291);
   hmcerror__26->SetBinError(11,18.58773);
   hmcerror__26->SetBinError(12,19.03249);
   hmcerror__26->SetBinError(13,18.11031);
   hmcerror__26->SetBinError(14,16.88691);
   hmcerror__26->SetBinError(15,23.25489);
   hmcerror__26->SetBinError(16,16.21128);
   hmcerror__26->SetBinError(17,21.13329);
   hmcerror__26->SetBinError(18,21.78584);
   hmcerror__26->SetBinError(19,19.18656);
   hmcerror__26->SetBinError(20,20.17653);
   hmcerror__26->SetBinError(21,0.3895343);
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
   
   Double_t _fx3033[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3033[20] = {
   34,
   19,
   29,
   30,
   35,
   30,
   24,
   23,
   25,
   21,
   32,
   30,
   22,
   35,
   30,
   33,
   31,
   24,
   41,
   37};
   Double_t _felx3033[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3033[20] = {
   5.9703,
   4.5151,
   5.5285,
   5.6197,
   6.0548,
   5.6197,
   5.0476,
   4.9457,
   5.1474,
   4.7354,
   5.7977,
   5.6197,
   4.8417,
   6.0548,
   5.6197,
   5.8847,
   5.7094,
   5.0476,
   6.5384,
   6.2203};
   Double_t _fehx3033[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3033[20] = {
   5.7635,
   4.3011,
   5.3201,
   5.4117,
   5.8483,
   5.4117,
   4.837,
   4.7346,
   4.9374,
   4.5229,
   5.5904,
   5.4117,
   4.6299,
   5.8483,
   5.4117,
   5.6776,
   5.5017,
   4.837,
   6.3331,
   6.0141};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1.1);
   Graph_Graph3033->SetMinimum(11.20008);
   Graph_Graph3033->SetMaximum(50.61792);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/20","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3034[20] = {
   0.6071064,
   0.5528084,
   0.4333114,
   0.53283,
   0.5078125,
   0.4334469,
   0.4629035,
   0.5671245,
   0.7488079,
   0.4558624,
   0.490056,
   0.5804679,
   0.498747,
   0.5373934,
   0.6244052,
   0.4013325,
   0.5458584,
   0.5949538,
   0.4405416,
   0.3762086};
   Double_t _fehx3034[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3034[20] = {
   0.6071064,
   0.5528084,
   0.4333114,
   0.53283,
   0.5078125,
   0.4334469,
   0.4629035,
   0.5671245,
   0.7488079,
   0.4558624,
   0.490056,
   0.5804679,
   0.498747,
   0.5373934,
   0.6244052,
   0.4013325,
   0.5458584,
   0.5949538,
   0.4405416,
   0.3762086};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1.1);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
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
   
   Double_t _fx3035[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3035[20] = {
   0.2425629,
   0.2861728,
   0.2648141,
   0.2986254,
   0.2901184,
   0.2674661,
   0.2705246,
   0.2803402,
   0.2760992,
   0.2664603,
   0.2351437,
   0.242938,
   0.2301319,
   0.2440596,
   0.2421475,
   0.2258184,
   0.2512539,
   0.2098358,
   0.2201669,
   0.1878822};
   Double_t _fehx3035[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3035[20] = {
   0.2425629,
   0.2861728,
   0.2648141,
   0.2986254,
   0.2901184,
   0.2674661,
   0.2705246,
   0.2803402,
   0.2760992,
   0.2664603,
   0.2351437,
   0.242938,
   0.2301319,
   0.2440596,
   0.2421475,
   0.2258184,
   0.2512539,
   0.2098358,
   0.2201669,
   0.1878822};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1.1);
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
   
   Double_t _fx3036[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3036[20] = {
   0.8581153,
   0.5501196,
   0.9525671,
   0.9289907,
   1.105857,
   0.8109191,
   0.6802982,
   0.8120179,
   0.8009016,
   0.6543882,
   0.8436638,
   0.9149637,
   0.6058667,
   1.113808,
   0.8055146,
   0.8169605,
   0.8007088,
   0.6554206,
   0.941399,
   0.6898966};
   Double_t _felx3036[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3036[20] = {
   0.1506825,
   0.1307287,
   0.1815954,
   0.1740216,
   0.1913069,
   0.1519041,
   0.143078,
   0.1746086,
   0.1649024,
   0.1475614,
   0.1528534,
   0.1713941,
   0.1333375,
   0.1926824,
   0.1508917,
   0.1456839,
   0.1474699,
   0.1378459,
   0.1501279,
   0.1159828};
   Double_t _fehx3036[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3036[20] = {
   0.1454632,
   0.1245326,
   0.1747501,
   0.1675806,
   0.1847823,
   0.1462817,
   0.1371084,
   0.1671556,
   0.1581749,
   0.1409396,
   0.1473881,
   0.1650503,
   0.1275046,
   0.1861109,
   0.1453068,
   0.1405568,
   0.1421051,
   0.1320946,
   0.145414,
   0.112138};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1.1);
   Graph_Graph3036->SetMinimum(0.3313382);
   Graph_Graph3036->SetMaximum(1.387971);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   TLine *line = new TLine(0,1,1,1);
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
