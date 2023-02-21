#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Jan 13 22:27:18 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-8.14,1353.846,900.1126);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,173.1469);
   hmc__7->SetBinContent(2,345.8307);
   hmc__7->SetBinContent(3,286.2249);
   hmc__7->SetBinContent(4,222.8678);
   hmc__7->SetBinContent(5,154.9897);
   hmc__7->SetBinContent(6,102.0749);
   hmc__7->SetBinContent(7,58.58224);
   hmc__7->SetBinContent(8,38.26631);
   hmc__7->SetBinContent(9,23.80184);
   hmc__7->SetBinContent(10,22.1394);
   hmc__7->SetBinContent(11,21.59505);
   hmc__7->SetBinContent(12,11.40562);
   hmc__7->SetBinContent(13,93.70781);
   hmc__7->SetBinError(1,50.30017);
   hmc__7->SetBinError(2,96.03698);
   hmc__7->SetBinError(3,76.22089);
   hmc__7->SetBinError(4,59.22079);
   hmc__7->SetBinError(5,61.10961);
   hmc__7->SetBinError(6,34.63391);
   hmc__7->SetBinError(7,28.68695);
   hmc__7->SetBinError(8,18.32547);
   hmc__7->SetBinError(9,15.61754);
   hmc__7->SetBinError(10,16.4175);
   hmc__7->SetBinError(11,16.17883);
   hmc__7->SetBinError(12,11.19442);
   hmc__7->SetBinError(13,32.15568);
   hmc__7->SetMinimum(-8.14);
   hmc__7->SetMaximum(854.7);
   hmc__7->SetEntries(1517.75);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1200);
   hs3_stack_3->SetMinimum(-1.866353e-08);
   hs3_stack_3->SetMaximum(363.1222);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,8.732271);
   hbadmatch_stack_1->SetBinContent(2,9.080082);
   hbadmatch_stack_1->SetBinContent(3,11.02018);
   hbadmatch_stack_1->SetBinContent(4,10.39606);
   hbadmatch_stack_1->SetBinContent(5,8.429769);
   hbadmatch_stack_1->SetBinContent(6,1.985136);
   hbadmatch_stack_1->SetBinContent(7,0.9925678);
   hbadmatch_stack_1->SetBinContent(8,2.24943);
   hbadmatch_stack_1->SetBinContent(9,0.9925678);
   hbadmatch_stack_1->SetBinContent(10,0.9925678);
   hbadmatch_stack_1->SetBinError(1,3.109916);
   hbadmatch_stack_1->SetBinError(2,3.029864);
   hbadmatch_stack_1->SetBinError(3,3.32413);
   hbadmatch_stack_1->SetBinError(4,3.295493);
   hbadmatch_stack_1->SetBinError(5,5.716681);
   hbadmatch_stack_1->SetBinError(6,1.403703);
   hbadmatch_stack_1->SetBinError(7,0.9925678);
   hbadmatch_stack_1->SetBinError(8,1.601529);
   hbadmatch_stack_1->SetBinError(9,0.9925678);
   hbadmatch_stack_1->SetBinError(10,0.9925678);
   hbadmatch_stack_1->SetEntries(50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,45.65812);
   houtFV_stack_4->SetBinContent(2,78.40939);
   houtFV_stack_4->SetBinContent(3,54.42451);
   houtFV_stack_4->SetBinContent(4,47.64326);
   houtFV_stack_4->SetBinContent(5,36.17983);
   houtFV_stack_4->SetBinContent(6,23.82163);
   houtFV_stack_4->SetBinContent(7,19.18933);
   houtFV_stack_4->SetBinContent(8,12.3544);
   houtFV_stack_4->SetBinContent(9,8.93311);
   houtFV_stack_4->SetBinContent(10,8.140558);
   houtFV_stack_4->SetBinContent(11,8.206268);
   houtFV_stack_4->SetBinContent(12,3.970271);
   houtFV_stack_4->SetBinContent(13,25.38138);
   houtFV_stack_4->SetBinError(1,6.731923);
   houtFV_stack_4->SetBinError(2,8.897084);
   houtFV_stack_4->SetBinError(3,7.423092);
   houtFV_stack_4->SetBinError(4,6.876712);
   houtFV_stack_4->SetBinError(5,6.037895);
   houtFV_stack_4->SetBinError(6,4.86257);
   houtFV_stack_4->SetBinError(7,4.414076);
   houtFV_stack_4->SetBinError(8,3.578511);
   houtFV_stack_4->SetBinError(9,2.977704);
   houtFV_stack_4->SetBinError(10,2.884197);
   houtFV_stack_4->SetBinError(11,2.911982);
   houtFV_stack_4->SetBinError(12,1.985136);
   houtFV_stack_4->SetBinError(13,5.0962);
   houtFV_stack_4->SetEntries(374);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.467061);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.971766);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.467061);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.310426);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.213219);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.310426);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.700452);
   hNCpi0inFVcoh_stack_5->SetEntries(40);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.700452);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,28.23178);
   hNCpi0inFVres_stack_7->SetBinContent(2,75.78004);
   hNCpi0inFVres_stack_7->SetBinContent(3,70.3318);
   hNCpi0inFVres_stack_7->SetBinContent(4,59.93062);
   hNCpi0inFVres_stack_7->SetBinContent(5,33.68002);
   hNCpi0inFVres_stack_7->SetBinContent(6,20.30707);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.934122);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.962355);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.92471);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.943532);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.467061);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.467061);
   hNCpi0inFVres_stack_7->SetBinContent(13,17.3353);
   hNCpi0inFVres_stack_7->SetBinError(1,3.739391);
   hNCpi0inFVres_stack_7->SetBinError(2,6.126453);
   hNCpi0inFVres_stack_7->SetBinError(3,5.902114);
   hNCpi0inFVres_stack_7->SetBinError(4,5.448238);
   hNCpi0inFVres_stack_7->SetBinError(5,4.084302);
   hNCpi0inFVres_stack_7->SetBinError(6,3.171431);
   hNCpi0inFVres_stack_7->SetBinError(7,1.853222);
   hNCpi0inFVres_stack_7->SetBinError(8,1.400904);
   hNCpi0inFVres_stack_7->SetBinError(9,1.981178);
   hNCpi0inFVres_stack_7->SetBinError(10,1.71575);
   hNCpi0inFVres_stack_7->SetBinError(11,1.310426);
   hNCpi0inFVres_stack_7->SetBinError(12,1.310426);
   hNCpi0inFVres_stack_7->SetBinError(13,2.930201);
   hNCpi0inFVres_stack_7->SetEntries(681);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.934122);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.37295);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.35413);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.32589);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.905888);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.943532);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.971766);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.981178);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.457649);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.853222);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.573625);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.757682);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.012758);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.215024);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.71575);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.213219);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9905888);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4952944);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.485883);
   hNCpi0inFVdis_stack_8->SetEntries(164);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,44.5666);
   hCCpi0inFV_stack_10->SetBinContent(2,85.81664);
   hCCpi0inFV_stack_10->SetBinContent(3,69.01271);
   hCCpi0inFV_stack_10->SetBinContent(4,45.07403);
   hCCpi0inFV_stack_10->SetBinContent(5,37.71758);
   hCCpi0inFV_stack_10->SetBinContent(6,22.21153);
   hCCpi0inFV_stack_10->SetBinContent(7,12.90338);
   hCCpi0inFV_stack_10->SetBinContent(8,6.947975);
   hCCpi0inFV_stack_10->SetBinContent(9,3.970271);
   hCCpi0inFV_stack_10->SetBinContent(10,1.985136);
   hCCpi0inFV_stack_10->SetBinContent(11,2.977704);
   hCCpi0inFV_stack_10->SetBinContent(12,0.9925678);
   hCCpi0inFV_stack_10->SetBinContent(13,25.20352);
   hCCpi0inFV_stack_10->SetBinError(1,6.734204);
   hCCpi0inFV_stack_10->SetBinError(2,9.299995);
   hCCpi0inFV_stack_10->SetBinError(3,8.313641);
   hCCpi0inFV_stack_10->SetBinError(4,6.725625);
   hCCpi0inFV_stack_10->SetBinError(5,6.118599);
   hCCpi0inFV_stack_10->SetBinError(6,4.742965);
   hCCpi0inFV_stack_10->SetBinError(7,3.578754);
   hCCpi0inFV_stack_10->SetBinError(8,2.626088);
   hCCpi0inFV_stack_10->SetBinError(9,1.985136);
   hCCpi0inFV_stack_10->SetBinError(10,1.403703);
   hCCpi0inFV_stack_10->SetBinError(11,1.719178);
   hCCpi0inFV_stack_10->SetBinError(12,0.9925678);
   hCCpi0inFV_stack_10->SetBinError(13,5.047773);
   hCCpi0inFV_stack_10->SetEntries(360);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,9.925678);
   hNCinFV_stack_11->SetBinContent(2,19.85136);
   hNCinFV_stack_11->SetBinContent(3,10.91825);
   hNCinFV_stack_11->SetBinContent(4,10.91825);
   hNCinFV_stack_11->SetBinContent(5,8.93311);
   hNCinFV_stack_11->SetBinContent(6,3.970271);
   hNCinFV_stack_11->SetBinContent(7,5.955407);
   hNCinFV_stack_11->SetBinContent(8,4.962839);
   hNCinFV_stack_11->SetBinContent(10,0.9925678);
   hNCinFV_stack_11->SetBinContent(11,0.9925678);
   hNCinFV_stack_11->SetBinContent(13,3.970271);
   hNCinFV_stack_11->SetBinError(1,3.138775);
   hNCinFV_stack_11->SetBinError(2,4.438898);
   hNCinFV_stack_11->SetBinError(3,3.291975);
   hNCinFV_stack_11->SetBinError(4,3.291975);
   hNCinFV_stack_11->SetBinError(5,2.977704);
   hNCinFV_stack_11->SetBinError(6,1.985136);
   hNCinFV_stack_11->SetBinError(7,2.431285);
   hNCinFV_stack_11->SetBinError(8,2.219449);
   hNCinFV_stack_11->SetBinError(10,0.9925678);
   hNCinFV_stack_11->SetBinError(11,0.9925678);
   hNCinFV_stack_11->SetBinError(13,1.985136);
   hNCinFV_stack_11->SetEntries(82);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,27.61239);
   hnumuCCinFV_stack_12->SetBinContent(2,62.03435);
   hnumuCCinFV_stack_12->SetBinContent(3,49.16916);
   hnumuCCinFV_stack_12->SetBinContent(4,24.6302);
   hnumuCCinFV_stack_12->SetBinContent(5,16.39338);
   hnumuCCinFV_stack_12->SetBinContent(6,20.36863);
   hnumuCCinFV_stack_12->SetBinContent(7,9.635662);
   hnumuCCinFV_stack_12->SetBinContent(8,5.312837);
   hnumuCCinFV_stack_12->SetBinContent(10,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(11,3.970271);
   hnumuCCinFV_stack_12->SetBinContent(12,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(13,15.18233);
   hnumuCCinFV_stack_12->SetBinError(1,6.840259);
   hnumuCCinFV_stack_12->SetBinError(2,9.313782);
   hnumuCCinFV_stack_12->SetBinError(3,10.21109);
   hnumuCCinFV_stack_12->SetBinError(4,5.124322);
   hnumuCCinFV_stack_12->SetBinError(5,4.107225);
   hnumuCCinFV_stack_12->SetBinError(6,4.630998);
   hnumuCCinFV_stack_12->SetBinError(7,3.143685);
   hnumuCCinFV_stack_12->SetBinError(8,2.383694);
   hnumuCCinFV_stack_12->SetBinError(10,1.403703);
   hnumuCCinFV_stack_12->SetBinError(11,1.985136);
   hnumuCCinFV_stack_12->SetBinError(12,1.403703);
   hnumuCCinFV_stack_12->SetBinError(13,4.234698);
   hnumuCCinFV_stack_12->SetEntries(212);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,2.527103);
   hnueCCinFV_stack_13->SetBinContent(4,2.977704);
   hnueCCinFV_stack_13->SetBinContent(5,0.7783012);
   hnueCCinFV_stack_13->SetBinContent(10,1.109308);
   hnueCCinFV_stack_13->SetBinContent(13,1.186773);
   hnueCCinFV_stack_13->SetBinError(3,1.786987);
   hnueCCinFV_stack_13->SetBinError(4,1.719178);
   hnueCCinFV_stack_13->SetBinError(5,0.7783013);
   hnueCCinFV_stack_13->SetBinError(10,1.109308);
   hnueCCinFV_stack_13->SetBinError(13,1.186773);
   hnueCCinFV_stack_13->SetEntries(8);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,173.1469);
   hmcerror__8->SetBinContent(2,345.8307);
   hmcerror__8->SetBinContent(3,286.2249);
   hmcerror__8->SetBinContent(4,222.8678);
   hmcerror__8->SetBinContent(5,154.9897);
   hmcerror__8->SetBinContent(6,102.0749);
   hmcerror__8->SetBinContent(7,58.58224);
   hmcerror__8->SetBinContent(8,38.26631);
   hmcerror__8->SetBinContent(9,23.80184);
   hmcerror__8->SetBinContent(10,22.1394);
   hmcerror__8->SetBinContent(11,21.59505);
   hmcerror__8->SetBinContent(12,11.40562);
   hmcerror__8->SetBinContent(13,93.70781);
   hmcerror__8->SetBinError(1,50.30017);
   hmcerror__8->SetBinError(2,96.03698);
   hmcerror__8->SetBinError(3,76.22089);
   hmcerror__8->SetBinError(4,59.22079);
   hmcerror__8->SetBinError(5,61.10961);
   hmcerror__8->SetBinError(6,34.63391);
   hmcerror__8->SetBinError(7,28.68695);
   hmcerror__8->SetBinError(8,18.32547);
   hmcerror__8->SetBinError(9,15.61754);
   hmcerror__8->SetBinError(10,16.4175);
   hmcerror__8->SetBinError(11,16.17883);
   hmcerror__8->SetBinError(12,11.19442);
   hmcerror__8->SetBinError(13,32.15568);
   hmcerror__8->SetEntries(1517.75);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3009[12] = {
   210,
   407,
   363,
   309,
   166,
   143,
   67,
   37,
   27,
   35,
   7,
   10};
   Double_t _felx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3009[12] = {
   14.49138,
   20.17424,
   19.05256,
   17.5784,
   12.8841,
   11.95826,
   8.3119,
   6.2203,
   5.3414,
   6.0548,
   2.85954,
   3.34883};
   Double_t _fehx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3009[12] = {
   14.49138,
   20.17424,
   19.05256,
   17.5784,
   12.8841,
   11.95826,
   8.1094,
   6.0141,
   5.1322,
   5.8483,
   2.61053,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(3.726414);
   Graph_Graph3009->SetMaximum(469.4776);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.22#pm0.25","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1781.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.9","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 346.9","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  18.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  320.0","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  76.8","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 334.2","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 77.4","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 223.1","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.4","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3010[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3010[12] = {
   1,
   1,
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
   Double_t _felx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3010[12] = {
   0.2905058,
   0.2776994,
   0.2662972,
   0.2657217,
   0.3942819,
   0.3392991,
   0.4896869,
   0.4788931,
   0.6561483,
   0.7415515,
   0.7491918,
   0.9814824};
   Double_t _fehx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3010[12] = {
   0.2905058,
   0.2776994,
   0.2662972,
   0.2657217,
   0.3942819,
   0.3392991,
   0.4896869,
   0.4788931,
   0.6561483,
   0.7415515,
   0.7491918,
   0.9814824};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3011[12] = {
   1,
   1,
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
   Double_t _felx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3011[12] = {
   0.2009907,
   0.2043165,
   0.2265918,
   0.2233586,
   0.22423,
   0.2181508,
   0.2398143,
   0.2529459,
   0.2874247,
   0.2819711,
   0.2809688,
   0.3473377};
   Double_t _fehx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3011[12] = {
   0.2009907,
   0.2043165,
   0.2265918,
   0.2233586,
   0.22423,
   0.2181508,
   0.2398143,
   0.2529459,
   0.2874247,
   0.2819711,
   0.2809688,
   0.3473377};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3012[12] = {
   1.212843,
   1.176877,
   1.268234,
   1.386472,
   1.071039,
   1.400933,
   1.143691,
   0.9669079,
   1.134366,
   1.580892,
   0.3241484,
   0.8767604};
   Double_t _felx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3012[12] = {
   0.08369414,
   0.05833561,
   0.066565,
   0.07887366,
   0.08312877,
   0.1171519,
   0.1418843,
   0.1625529,
   0.2244112,
   0.2734853,
   0.1324165,
   0.2936122};
   Double_t _fehx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3012[12] = {
   0.08369414,
   0.05833561,
   0.066565,
   0.07887366,
   0.08312877,
   0.1171519,
   0.1384276,
   0.1571644,
   0.215622,
   0.2641581,
   0.1208856,
   0.2733651};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.02640007);
   Graph_Graph3012->SetMaximum(2.010382);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
