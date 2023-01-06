#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 16:05:16 2022) by ROOT version 6.26/00
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
   pad1->Range(-153.8462,-2.880431,1128.205,318.515);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hmc__25->SetBinContent(1,29.56384);
   hmc__25->SetBinContent(2,133.7806);
   hmc__25->SetBinContent(3,144.0215);
   hmc__25->SetBinContent(4,108.1593);
   hmc__25->SetBinContent(5,85.38953);
   hmc__25->SetBinContent(6,44.56468);
   hmc__25->SetBinContent(7,29.2783);
   hmc__25->SetBinContent(8,23.17839);
   hmc__25->SetBinContent(9,14.74374);
   hmc__25->SetBinContent(10,7.937858);
   hmc__25->SetBinContent(11,5.89284);
   hmc__25->SetBinContent(12,8.162511);
   hmc__25->SetBinContent(13,25.91598);
   hmc__25->SetBinError(1,13.84276);
   hmc__25->SetBinError(2,48.79406);
   hmc__25->SetBinError(3,49.25947);
   hmc__25->SetBinError(4,39.09998);
   hmc__25->SetBinError(5,34.62991);
   hmc__25->SetBinError(6,15.87293);
   hmc__25->SetBinError(7,19.78389);
   hmc__25->SetBinError(8,14.54421);
   hmc__25->SetBinError(9,13.21255);
   hmc__25->SetBinError(10,10.07483);
   hmc__25->SetBinError(11,6.787039);
   hmc__25->SetBinError(12,7.739618);
   hmc__25->SetBinError(13,21.09595);
   hmc__25->SetMinimum(-2.880431);
   hmc__25->SetMaximum(302.4452);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",12,0,1000);
   hs9_stack_9->SetMinimum(-6.583386e-09);
   hs9_stack_9->SetMaximum(151.2226);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,2.835474);
   hbadmatch_stack_1->SetBinContent(2,6.074339);
   hbadmatch_stack_1->SetBinContent(3,4.877482);
   hbadmatch_stack_1->SetBinContent(4,4.0029);
   hbadmatch_stack_1->SetBinContent(6,0.8338594);
   hbadmatch_stack_1->SetBinContent(7,0.7022117);
   hbadmatch_stack_1->SetBinContent(8,0.5624326);
   hbadmatch_stack_1->SetBinContent(9,0.1274195);
   hbadmatch_stack_1->SetBinContent(11,0.4781666);
   hbadmatch_stack_1->SetBinContent(13,0.5502936);
   hbadmatch_stack_1->SetBinError(1,0.7996012);
   hbadmatch_stack_1->SetBinError(2,1.217006);
   hbadmatch_stack_1->SetBinError(3,1.175517);
   hbadmatch_stack_1->SetBinError(4,1.051425);
   hbadmatch_stack_1->SetBinError(6,0.4162089);
   hbadmatch_stack_1->SetBinError(7,0.3364383);
   hbadmatch_stack_1->SetBinError(8,0.4063473);
   hbadmatch_stack_1->SetBinError(9,0.1274195);
   hbadmatch_stack_1->SetBinError(11,0.3433827);
   hbadmatch_stack_1->SetBinError(13,0.5502935);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,4.054399);
   hext_stack_2->SetBinContent(2,20.54884);
   hext_stack_2->SetBinContent(3,11.5762);
   hext_stack_2->SetBinContent(4,7.027455);
   hext_stack_2->SetBinContent(5,17.08699);
   hext_stack_2->SetBinContent(6,4.054399);
   hext_stack_2->SetBinContent(7,5.187586);
   hext_stack_2->SetBinContent(8,5.457311);
   hext_stack_2->SetBinContent(9,1.607626);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(12,3.532468);
   hext_stack_2->SetBinContent(13,7.19463);
   hext_stack_2->SetBinError(1,1.311223);
   hext_stack_2->SetBinError(2,3.332305);
   hext_stack_2->SetBinError(3,2.19166);
   hext_stack_2->SetBinError(4,1.879176);
   hext_stack_2->SetBinError(5,3.011121);
   hext_stack_2->SetBinError(6,1.311223);
   hext_stack_2->SetBinError(7,1.421289);
   hext_stack_2->SetBinError(8,1.843525);
   hext_stack_2->SetBinError(9,0.9636239);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(12,1.47091);
   hext_stack_2->SetBinError(13,1.820757);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(2,1.033135);
   hdirt_stack_3->SetBinContent(3,1.343387);
   hdirt_stack_3->SetBinContent(4,1.868521);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinError(2,0.4957845);
   hdirt_stack_3->SetBinError(3,0.6216607);
   hdirt_stack_3->SetBinError(4,0.810014);
   hdirt_stack_3->SetBinError(9,0.1952625);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,7.843012);
   houtFV_stack_4->SetBinContent(2,32.68032);
   houtFV_stack_4->SetBinContent(3,29.04633);
   houtFV_stack_4->SetBinContent(4,18.79495);
   houtFV_stack_4->SetBinContent(5,12.73845);
   houtFV_stack_4->SetBinContent(6,4.689545);
   houtFV_stack_4->SetBinContent(7,4.175016);
   houtFV_stack_4->SetBinContent(8,2.394495);
   houtFV_stack_4->SetBinContent(9,0.3917402);
   houtFV_stack_4->SetBinContent(10,1.256394);
   houtFV_stack_4->SetBinContent(13,2.237023);
   houtFV_stack_4->SetBinError(1,1.406172);
   houtFV_stack_4->SetBinError(2,2.823673);
   houtFV_stack_4->SetBinError(3,2.653815);
   houtFV_stack_4->SetBinError(4,2.21946);
   houtFV_stack_4->SetBinError(5,1.829089);
   houtFV_stack_4->SetBinError(6,1.175626);
   houtFV_stack_4->SetBinError(7,1.140322);
   houtFV_stack_4->SetBinError(8,0.8111197);
   houtFV_stack_4->SetBinError(9,0.2770047);
   houtFV_stack_4->SetBinError(10,0.9091871);
   houtFV_stack_4->SetBinError(13,0.9939932);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05625373);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1286568);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1355755);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03570856);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1072676);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1112314);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0890861);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1483895);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2601834);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.07216842);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1595668);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04747643);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05246187);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08607059);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03609378);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1190866);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.516768);
   hNCpi0inFVres_stack_7->SetBinContent(2,29.0589);
   hNCpi0inFVres_stack_7->SetBinContent(3,24.559);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.20711);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.388496);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.905855);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.388611);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.54092);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.347032);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.895205);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.2551863);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6014128);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.8658858);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7806276);
   hNCpi0inFVres_stack_7->SetBinError(2,1.484263);
   hNCpi0inFVres_stack_7->SetBinError(3,1.277688);
   hNCpi0inFVres_stack_7->SetBinError(4,1.204809);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8974489);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9504638);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6540387);
   hNCpi0inFVres_stack_7->SetBinError(8,0.402572);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4832663);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7462673);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1288964);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5027277);
   hNCpi0inFVres_stack_7->SetBinError(13,0.250108);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7423584);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.966325);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.23399);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.640136);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.507548);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.800314);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.562245);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.327732);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.417798);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3622553);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5539221);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.933441);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.833011);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2131775);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4876521);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9551032);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9238006);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6862676);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8829184);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3995251);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6379634);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8580191);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2178222);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3204736);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5670616);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5688385);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02275844);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01720841);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02619662);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(2,15.16252);
   hCCpi0inFV_stack_10->SetBinContent(3,30.14448);
   hCCpi0inFV_stack_10->SetBinContent(4,25.11184);
   hCCpi0inFV_stack_10->SetBinContent(5,18.92744);
   hCCpi0inFV_stack_10->SetBinContent(6,12.95741);
   hCCpi0inFV_stack_10->SetBinContent(7,6.17148);
   hCCpi0inFV_stack_10->SetBinContent(8,6.017107);
   hCCpi0inFV_stack_10->SetBinContent(9,3.70237);
   hCCpi0inFV_stack_10->SetBinContent(10,1.413964);
   hCCpi0inFV_stack_10->SetBinContent(11,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(12,2.291034);
   hCCpi0inFV_stack_10->SetBinContent(13,5.22824);
   hCCpi0inFV_stack_10->SetBinError(1,0.89917);
   hCCpi0inFV_stack_10->SetBinError(2,1.945155);
   hCCpi0inFV_stack_10->SetBinError(3,2.755984);
   hCCpi0inFV_stack_10->SetBinError(4,2.503851);
   hCCpi0inFV_stack_10->SetBinError(5,2.237267);
   hCCpi0inFV_stack_10->SetBinError(6,1.831908);
   hCCpi0inFV_stack_10->SetBinError(7,1.143824);
   hCCpi0inFV_stack_10->SetBinError(8,1.219981);
   hCCpi0inFV_stack_10->SetBinError(9,1.00431);
   hCCpi0inFV_stack_10->SetBinError(10,0.6515799);
   hCCpi0inFV_stack_10->SetBinError(11,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(12,0.8334836);
   hCCpi0inFV_stack_10->SetBinError(13,1.126877);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,1.846903);
   hNCinFV_stack_11->SetBinContent(2,6.237304);
   hNCinFV_stack_11->SetBinContent(3,7.643781);
   hNCinFV_stack_11->SetBinContent(4,7.560891);
   hNCinFV_stack_11->SetBinContent(5,3.129416);
   hNCinFV_stack_11->SetBinContent(6,2.611409);
   hNCinFV_stack_11->SetBinContent(7,0.9252522);
   hNCinFV_stack_11->SetBinContent(8,1.955143);
   hNCinFV_stack_11->SetBinContent(9,2.265266);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,1.070405);
   hNCinFV_stack_11->SetBinError(1,0.6665167);
   hNCinFV_stack_11->SetBinError(2,1.216777);
   hNCinFV_stack_11->SetBinError(3,1.576061);
   hNCinFV_stack_11->SetBinError(4,1.373358);
   hNCinFV_stack_11->SetBinError(5,1.062139);
   hNCinFV_stack_11->SetBinError(6,0.9964199);
   hNCinFV_stack_11->SetBinError(7,0.4794006);
   hNCinFV_stack_11->SetBinError(8,0.9151148);
   hNCinFV_stack_11->SetBinError(9,0.8426574);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.5545368);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,1.48869);
   hnumuCCinFV_stack_12->SetBinContent(2,18.13308);
   hnumuCCinFV_stack_12->SetBinContent(3,27.0666);
   hnumuCCinFV_stack_12->SetBinContent(4,20.8171);
   hnumuCCinFV_stack_12->SetBinContent(5,20.45764);
   hnumuCCinFV_stack_12->SetBinContent(6,8.448057);
   hnumuCCinFV_stack_12->SetBinContent(7,5.363029);
   hnumuCCinFV_stack_12->SetBinContent(8,3.539069);
   hnumuCCinFV_stack_12->SetBinContent(9,2.60835);
   hnumuCCinFV_stack_12->SetBinContent(10,1.691755);
   hnumuCCinFV_stack_12->SetBinContent(11,1.798282);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(13,4.566857);
   hnumuCCinFV_stack_12->SetBinError(1,0.6174701);
   hnumuCCinFV_stack_12->SetBinError(2,2.59635);
   hnumuCCinFV_stack_12->SetBinError(3,3.04261);
   hnumuCCinFV_stack_12->SetBinError(4,2.543782);
   hnumuCCinFV_stack_12->SetBinError(5,2.849254);
   hnumuCCinFV_stack_12->SetBinError(6,1.522635);
   hnumuCCinFV_stack_12->SetBinError(7,1.173081);
   hnumuCCinFV_stack_12->SetBinError(8,1.023747);
   hnumuCCinFV_stack_12->SetBinError(9,0.8509231);
   hnumuCCinFV_stack_12->SetBinError(10,0.6608681);
   hnumuCCinFV_stack_12->SetBinError(11,0.6724826);
   hnumuCCinFV_stack_12->SetBinError(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(13,1.12029);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(2,0.536893);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.007353);
   hnueCCinFV_stack_13->SetBinContent(7,1.802869);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(11,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(12,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(13,2.313836);
   hnueCCinFV_stack_13->SetBinError(2,0.3929602);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.5223564);
   hnueCCinFV_stack_13->SetBinError(7,1.586911);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2192101);
   hnueCCinFV_stack_13->SetBinError(11,0.1529246);
   hnueCCinFV_stack_13->SetBinError(12,0.1711909);
   hnueCCinFV_stack_13->SetBinError(13,1.30531);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__26->SetBinContent(1,29.56384);
   hmcerror__26->SetBinContent(2,133.7806);
   hmcerror__26->SetBinContent(3,144.0215);
   hmcerror__26->SetBinContent(4,108.1593);
   hmcerror__26->SetBinContent(5,85.38953);
   hmcerror__26->SetBinContent(6,44.56468);
   hmcerror__26->SetBinContent(7,29.2783);
   hmcerror__26->SetBinContent(8,23.17839);
   hmcerror__26->SetBinContent(9,14.74374);
   hmcerror__26->SetBinContent(10,7.937858);
   hmcerror__26->SetBinContent(11,5.89284);
   hmcerror__26->SetBinContent(12,8.162511);
   hmcerror__26->SetBinContent(13,25.91598);
   hmcerror__26->SetBinError(1,13.84276);
   hmcerror__26->SetBinError(2,48.79406);
   hmcerror__26->SetBinError(3,49.25947);
   hmcerror__26->SetBinError(4,39.09998);
   hmcerror__26->SetBinError(5,34.62991);
   hmcerror__26->SetBinError(6,15.87293);
   hmcerror__26->SetBinError(7,19.78389);
   hmcerror__26->SetBinError(8,14.54421);
   hmcerror__26->SetBinError(9,13.21255);
   hmcerror__26->SetBinError(10,10.07483);
   hmcerror__26->SetBinError(11,6.787039);
   hmcerror__26->SetBinError(12,7.739618);
   hmcerror__26->SetBinError(13,21.09595);
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
   
   Double_t _fx3033[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3033[12] = {
   47,
   133,
   134,
   98,
   68,
   31,
   15,
   12,
   13,
   15,
   2,
   3};
   Double_t _felx3033[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3033[12] = {
   6.9882,
   11.53256,
   11.57584,
   10.0209,
   8.3726,
   5.7094,
   4.0385,
   3.64022,
   3.77763,
   4.0385,
   2,
   2.143368};
   Double_t _fehx3033[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3033[12] = {
   6.7839,
   11.53256,
   11.57584,
   9.82,
   8.1701,
   5.5017,
   3.8197,
   3.4155,
   3.5552,
   3.8197,
   1.51917,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1100);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(160.1334);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.6/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 571.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 81.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 114.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 126.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3034[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3034[12] = {
   1,
   1,
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
   Double_t _felx3034[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3034[12] = {
   0.468233,
   0.3647319,
   0.3420285,
   0.3615035,
   0.4055522,
   0.3561774,
   0.6757186,
   0.6274898,
   0.8961461,
   1.269213,
   1.151743,
   0.9481909};
   Double_t _fehx3034[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3034[12] = {
   0.468233,
   0.3647319,
   0.3420285,
   0.3615035,
   0.4055522,
   0.3561774,
   0.6757186,
   0.6274898,
   0.8961461,
   1.269213,
   1.151743,
   0.9481909};
   grae = new TGraphAsymmErrors(12,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1100);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   
   Double_t _fx3035[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3035[12] = {
   1,
   1,
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
   Double_t _felx3035[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3035[12] = {
   0.407751,
   0.3383101,
   0.2970577,
   0.2458631,
   0.1974888,
   0.2281606,
   0.2139272,
   0.2170226,
   0.2668469,
   0.4138558,
   0.3423585,
   0.300738};
   Double_t _fehx3035[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3035[12] = {
   0.407751,
   0.3383101,
   0.2970577,
   0.2458631,
   0.1974888,
   0.2281606,
   0.2139272,
   0.2170226,
   0.2668469,
   0.4138558,
   0.3423585,
   0.300738};
   grae = new TGraphAsymmErrors(12,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1100);
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
   
   Double_t _fx3036[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3036[12] = {
   1.58978,
   0.9941649,
   0.9304163,
   0.9060707,
   0.7963506,
   0.6956181,
   0.5123248,
   0.5177236,
   0.88173,
   1.889679,
   0.3393949,
   0.367534};
   Double_t _felx3036[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3036[12] = {
   0.2363766,
   0.08620503,
   0.08037573,
   0.09264943,
   0.09805184,
   0.1281149,
   0.1379349,
   0.1570523,
   0.2562192,
   0.5087645,
   0.3393949,
   0.2625868};
   Double_t _fehx3036[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3036[12] = {
   0.2294662,
   0.08620503,
   0.08037573,
   0.09079198,
   0.09568035,
   0.1234543,
   0.1304618,
   0.1473571,
   0.2411328,
   0.4812004,
   0.2577993,
   0.2112365};
   grae = new TGraphAsymmErrors(12,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1100);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.607967);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_visible_energy_all",12,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
