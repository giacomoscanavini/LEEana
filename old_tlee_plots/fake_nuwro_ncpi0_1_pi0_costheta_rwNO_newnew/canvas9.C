#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Jan 16 04:37:12 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-2.362866,1.25641,261.2832);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__25->SetBinContent(1,25.18069);
   hmc__25->SetBinContent(2,13.71313);
   hmc__25->SetBinContent(3,16.6759);
   hmc__25->SetBinContent(4,13.13735);
   hmc__25->SetBinContent(5,11.86386);
   hmc__25->SetBinContent(6,15.61891);
   hmc__25->SetBinContent(7,15.67372);
   hmc__25->SetBinContent(8,16.13641);
   hmc__25->SetBinContent(9,16.3305);
   hmc__25->SetBinContent(10,19.37429);
   hmc__25->SetBinContent(11,19.91357);
   hmc__25->SetBinContent(12,19.98431);
   hmc__25->SetBinContent(13,19.92766);
   hmc__25->SetBinContent(14,27.20955);
   hmc__25->SetBinContent(15,37.2233);
   hmc__25->SetBinContent(16,34.68686);
   hmc__25->SetBinContent(17,50.7671);
   hmc__25->SetBinContent(18,54.3931);
   hmc__25->SetBinContent(19,64.58289);
   hmc__25->SetBinContent(20,118.1433);
   hmc__25->SetBinError(1,14.53474);
   hmc__25->SetBinError(2,16.46966);
   hmc__25->SetBinError(3,10.53163);
   hmc__25->SetBinError(4,10.42928);
   hmc__25->SetBinError(5,7.253709);
   hmc__25->SetBinError(6,9.298709);
   hmc__25->SetBinError(7,16.34733);
   hmc__25->SetBinError(8,9.820797);
   hmc__25->SetBinError(9,10.26372);
   hmc__25->SetBinError(10,11.18267);
   hmc__25->SetBinError(11,10.00485);
   hmc__25->SetBinError(12,11.22635);
   hmc__25->SetBinError(13,10.33599);
   hmc__25->SetBinError(14,15.76673);
   hmc__25->SetBinError(15,17.83323);
   hmc__25->SetBinError(16,24.66939);
   hmc__25->SetBinError(17,21.25973);
   hmc__25->SetBinError(18,24.58005);
   hmc__25->SetBinError(19,24.40072);
   hmc__25->SetBinError(20,43.79533);
   hmc__25->SetBinError(21,0.4673072);
   hmc__25->SetMinimum(-2.362866);
   hmc__25->SetMaximum(248.1009);
   hmc__25->SetEntries(597.4116);
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
   hs9_stack_9->SetMinimum(-1.166102e-08);
   hs9_stack_9->SetMaximum(124.0505);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.149808);
   hbadmatch_stack_1->SetBinContent(3,1.358624);
   hbadmatch_stack_1->SetBinContent(5,0.6793121);
   hbadmatch_stack_1->SetBinContent(6,0.8918287);
   hbadmatch_stack_1->SetBinContent(7,1.428446);
   hbadmatch_stack_1->SetBinContent(8,0.4667954);
   hbadmatch_stack_1->SetBinContent(9,2.368385);
   hbadmatch_stack_1->SetBinContent(10,0.4667954);
   hbadmatch_stack_1->SetBinContent(11,1.545814);
   hbadmatch_stack_1->SetBinContent(12,1.166989);
   hbadmatch_stack_1->SetBinContent(13,0.7353953);
   hbadmatch_stack_1->SetBinContent(14,0.9127098);
   hbadmatch_stack_1->SetBinContent(15,1.685353);
   hbadmatch_stack_1->SetBinContent(16,1.423705);
   hbadmatch_stack_1->SetBinContent(17,1.834729);
   hbadmatch_stack_1->SetBinContent(18,1.399352);
   hbadmatch_stack_1->SetBinContent(19,0.8918287);
   hbadmatch_stack_1->SetBinContent(20,2.604948);
   hbadmatch_stack_1->SetBinError(1,0.846969);
   hbadmatch_stack_1->SetBinError(3,0.7117782);
   hbadmatch_stack_1->SetBinError(5,0.5033032);
   hbadmatch_stack_1->SetBinError(6,0.6306181);
   hbadmatch_stack_1->SetBinError(7,0.6648143);
   hbadmatch_stack_1->SetBinError(8,0.3300742);
   hbadmatch_stack_1->SetBinError(9,1.024519);
   hbadmatch_stack_1->SetBinError(10,0.3300742);
   hbadmatch_stack_1->SetBinError(11,0.6378517);
   hbadmatch_stack_1->SetBinError(12,0.5218932);
   hbadmatch_stack_1->SetBinError(13,0.5316378);
   hbadmatch_stack_1->SetBinError(14,0.554787);
   hbadmatch_stack_1->SetBinError(15,0.8715232);
   hbadmatch_stack_1->SetBinError(16,0.8249673);
   hbadmatch_stack_1->SetBinError(17,0.8474959);
   hbadmatch_stack_1->SetBinError(18,0.7261532);
   hbadmatch_stack_1->SetBinError(19,0.6306181);
   hbadmatch_stack_1->SetBinError(20,0.9052845);
   hbadmatch_stack_1->SetEntries(75);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,7.493314);
   houtFV_stack_4->SetBinContent(2,5.943054);
   houtFV_stack_4->SetBinContent(3,4.573936);
   houtFV_stack_4->SetBinContent(4,3.706035);
   houtFV_stack_4->SetBinContent(5,2.106545);
   houtFV_stack_4->SetBinContent(6,2.992408);
   houtFV_stack_4->SetBinContent(7,4.124161);
   houtFV_stack_4->SetBinContent(8,3.884237);
   houtFV_stack_4->SetBinContent(9,4.407534);
   houtFV_stack_4->SetBinContent(10,3.092973);
   houtFV_stack_4->SetBinContent(11,4.436444);
   houtFV_stack_4->SetBinContent(12,2.11694);
   houtFV_stack_4->SetBinContent(13,1.379505);
   houtFV_stack_4->SetBinContent(14,3.417441);
   houtFV_stack_4->SetBinContent(15,7.39923);
   houtFV_stack_4->SetBinContent(16,3.842475);
   houtFV_stack_4->SetBinContent(17,7.367394);
   houtFV_stack_4->SetBinContent(18,9.701286);
   houtFV_stack_4->SetBinContent(19,11.77675);
   houtFV_stack_4->SetBinContent(20,21.8431);
   houtFV_stack_4->SetBinError(1,1.642122);
   houtFV_stack_4->SetBinError(2,1.398456);
   houtFV_stack_4->SetBinError(3,1.193391);
   houtFV_stack_4->SetBinError(4,1.180966);
   houtFV_stack_4->SetBinError(5,0.833432);
   houtFV_stack_4->SetBinError(6,0.9423108);
   houtFV_stack_4->SetBinError(7,1.242883);
   houtFV_stack_4->SetBinError(8,1.133856);
   houtFV_stack_4->SetBinError(9,1.150036);
   houtFV_stack_4->SetBinError(10,1.020576);
   houtFV_stack_4->SetBinError(11,1.305354);
   houtFV_stack_4->SetBinError(12,0.7739072);
   houtFV_stack_4->SetBinError(13,0.6455522);
   houtFV_stack_4->SetBinError(14,1.084749);
   houtFV_stack_4->SetBinError(15,1.552815);
   houtFV_stack_4->SetBinError(16,1.210541);
   houtFV_stack_4->SetBinError(17,1.579675);
   houtFV_stack_4->SetBinError(18,1.783699);
   houtFV_stack_4->SetBinError(19,2.044576);
   houtFV_stack_4->SetBinError(20,2.909297);
   houtFV_stack_4->SetEntries(375);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.256225);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8103737);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2562251);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3757188);
   hNCpi0inFVcoh_stack_5->SetEntries(14);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1986157);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7110658);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.08108451);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3713183);
   hNCpi0inFVqe_stack_6->SetEntries(32);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.415604);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.903153);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.473213);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.159379);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.059677);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.95256);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.837342);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.183885);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.977954);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.738821);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.87904);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.946033);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.029429);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.584365);
   hNCpi0inFVres_stack_7->SetBinContent(15,9.635053);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.098095);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.98484);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.91083);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.38454);
   hNCpi0inFVres_stack_7->SetBinContent(20,23.47158);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7164163);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6180209);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7565242);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6690299);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4895808);
   hNCpi0inFVres_stack_7->SetBinError(6,0.838174);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7644492);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7110428);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5720632);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9951602);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7270442);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9695533);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9101951);
   hNCpi0inFVres_stack_7->SetBinError(14,1.145957);
   hNCpi0inFVres_stack_7->SetBinError(15,1.185397);
   hNCpi0inFVres_stack_7->SetBinError(16,1.102671);
   hNCpi0inFVres_stack_7->SetBinError(17,1.456315);
   hNCpi0inFVres_stack_7->SetBinError(18,1.60773);
   hNCpi0inFVres_stack_7->SetBinError(19,1.587211);
   hNCpi0inFVres_stack_7->SetBinError(20,1.845744);
   hNCpi0inFVres_stack_7->SetEntries(2461);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.521439);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6534564);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3310261);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.000394);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5210459);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6779631);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3972314);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6534564);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8434762);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.422132);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.199009);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4965392);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.364522);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.240708);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.885568);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.364916);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.98527);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.811554);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.912143);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.882682);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5282441);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2807146);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1046797);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4523542);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2727958);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3698398);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1146708);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2807146);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3771742);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5251233);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.459564);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1282059);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4654868);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3942205);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5395327);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.649078);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7064044);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.868929);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7277974);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.236003);
   hNCpi0inFVdis_stack_8->SetEntries(570);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04681417);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.13469);
   hCCpi0inFV_stack_10->SetBinContent(2,2.271334);
   hCCpi0inFV_stack_10->SetBinContent(3,2.971527);
   hCCpi0inFV_stack_10->SetBinContent(4,1.902819);
   hCCpi0inFV_stack_10->SetBinContent(5,2.811773);
   hCCpi0inFV_stack_10->SetBinContent(6,3.510894);
   hCCpi0inFV_stack_10->SetBinContent(7,2.525613);
   hCCpi0inFV_stack_10->SetBinContent(8,4.385755);
   hCCpi0inFV_stack_10->SetBinContent(9,2.759011);
   hCCpi0inFV_stack_10->SetBinContent(10,2.752376);
   hCCpi0inFV_stack_10->SetBinContent(11,3.492327);
   hCCpi0inFV_stack_10->SetBinContent(12,3.692601);
   hCCpi0inFV_stack_10->SetBinContent(13,4.376399);
   hCCpi0inFV_stack_10->SetBinContent(14,5.325268);
   hCCpi0inFV_stack_10->SetBinContent(15,7.392103);
   hCCpi0inFV_stack_10->SetBinContent(16,7.182478);
   hCCpi0inFV_stack_10->SetBinContent(17,12.09697);
   hCCpi0inFV_stack_10->SetBinContent(18,11.62113);
   hCCpi0inFV_stack_10->SetBinContent(19,14.19615);
   hCCpi0inFV_stack_10->SetBinContent(20,25.75002);
   hCCpi0inFV_stack_10->SetBinError(1,1.479843);
   hCCpi0inFV_stack_10->SetBinError(2,0.9024504);
   hCCpi0inFV_stack_10->SetBinError(3,0.9888581);
   hCCpi0inFV_stack_10->SetBinError(4,0.74516);
   hCCpi0inFV_stack_10->SetBinError(5,0.9278406);
   hCCpi0inFV_stack_10->SetBinError(6,1.126391);
   hCCpi0inFV_stack_10->SetBinError(7,0.8826101);
   hCCpi0inFV_stack_10->SetBinError(8,1.283908);
   hCCpi0inFV_stack_10->SetBinError(9,0.9129486);
   hCCpi0inFV_stack_10->SetBinError(10,1.015327);
   hCCpi0inFV_stack_10->SetBinError(11,1.006706);
   hCCpi0inFV_stack_10->SetBinError(12,1.025365);
   hCCpi0inFV_stack_10->SetBinError(13,1.228086);
   hCCpi0inFV_stack_10->SetBinError(14,1.317145);
   hCCpi0inFV_stack_10->SetBinError(15,1.64621);
   hCCpi0inFV_stack_10->SetBinError(16,1.552377);
   hCCpi0inFV_stack_10->SetBinError(17,2.120143);
   hCCpi0inFV_stack_10->SetBinError(18,2.046718);
   hCCpi0inFV_stack_10->SetBinError(19,2.201599);
   hCCpi0inFV_stack_10->SetBinError(20,3.014974);
   hCCpi0inFV_stack_10->SetEntries(411);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.400386);
   hNCinFV_stack_11->SetBinContent(2,0.6793121);
   hNCinFV_stack_11->SetBinContent(3,0.4459144);
   hNCinFV_stack_11->SetBinContent(4,0.4459144);
   hNCinFV_stack_11->SetBinContent(5,0.4667954);
   hNCinFV_stack_11->SetBinContent(6,0.9127098);
   hNCinFV_stack_11->SetBinContent(7,1.207652);
   hNCinFV_stack_11->SetBinContent(8,0.2333977);
   hNCinFV_stack_11->SetBinContent(9,1.125226);
   hNCinFV_stack_11->SetBinContent(10,0.6793121);
   hNCinFV_stack_11->SetBinContent(11,0.6793121);
   hNCinFV_stack_11->SetBinContent(12,0.6793121);
   hNCinFV_stack_11->SetBinContent(13,1.358624);
   hNCinFV_stack_11->SetBinContent(14,1.358624);
   hNCinFV_stack_11->SetBinContent(15,2.929765);
   hNCinFV_stack_11->SetBinContent(16,1.612903);
   hNCinFV_stack_11->SetBinContent(17,2.037936);
   hNCinFV_stack_11->SetBinContent(18,3.67172);
   hNCinFV_stack_11->SetBinContent(19,5.242861);
   hNCinFV_stack_11->SetBinContent(20,9.785528);
   hNCinFV_stack_11->SetBinError(1,0.5717053);
   hNCinFV_stack_11->SetBinError(2,0.5033032);
   hNCinFV_stack_11->SetBinError(3,0.4459143);
   hNCinFV_stack_11->SetBinError(4,0.4459143);
   hNCinFV_stack_11->SetBinError(5,0.3300742);
   hNCinFV_stack_11->SetBinError(6,0.554787);
   hNCinFV_stack_11->SetBinError(7,0.6050213);
   hNCinFV_stack_11->SetBinError(8,0.2333977);
   hNCinFV_stack_11->SetBinError(9,0.6724238);
   hNCinFV_stack_11->SetBinError(10,0.5033032);
   hNCinFV_stack_11->SetBinError(11,0.5033032);
   hNCinFV_stack_11->SetBinError(12,0.5033032);
   hNCinFV_stack_11->SetBinError(13,0.7117782);
   hNCinFV_stack_11->SetBinError(14,0.7117782);
   hNCinFV_stack_11->SetBinError(15,1.075928);
   hNCinFV_stack_11->SetBinError(16,0.6864489);
   hNCinFV_stack_11->SetBinError(17,0.8717467);
   hNCinFV_stack_11->SetBinError(18,1.068299);
   hNCinFV_stack_11->SetBinError(19,1.338752);
   hNCinFV_stack_11->SetBinError(20,1.849619);
   hNCinFV_stack_11->SetEntries(119);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.532444);
   hnumuCCinFV_stack_12->SetBinContent(2,1.196618);
   hnumuCCinFV_stack_12->SetBinContent(3,3.488558);
   hnumuCCinFV_stack_12->SetBinContent(4,2.889711);
   hnumuCCinFV_stack_12->SetBinContent(5,2.962486);
   hnumuCCinFV_stack_12->SetBinContent(6,2.647439);
   hnumuCCinFV_stack_12->SetBinContent(7,2.153278);
   hnumuCCinFV_stack_12->SetBinContent(8,3.295781);
   hnumuCCinFV_stack_12->SetBinContent(9,1.81581);
   hnumuCCinFV_stack_12->SetBinContent(10,5.188774);
   hnumuCCinFV_stack_12->SetBinContent(11,4.615421);
   hnumuCCinFV_stack_12->SetBinContent(12,5.8859);
   hnumuCCinFV_stack_12->SetBinContent(13,4.61758);
   hnumuCCinFV_stack_12->SetBinContent(14,6.271124);
   hnumuCCinFV_stack_12->SetBinContent(15,5.972436);
   hnumuCCinFV_stack_12->SetBinContent(16,9.12919);
   hnumuCCinFV_stack_12->SetBinContent(17,10.45996);
   hnumuCCinFV_stack_12->SetBinContent(18,8.211026);
   hnumuCCinFV_stack_12->SetBinContent(19,10.50098);
   hnumuCCinFV_stack_12->SetBinContent(20,17.59755);
   hnumuCCinFV_stack_12->SetBinError(1,0.9227198);
   hnumuCCinFV_stack_12->SetBinError(2,0.6232116);
   hnumuCCinFV_stack_12->SetBinError(3,1.114932);
   hnumuCCinFV_stack_12->SetBinError(4,1.067392);
   hnumuCCinFV_stack_12->SetBinError(5,1.047625);
   hnumuCCinFV_stack_12->SetBinError(6,0.9829184);
   hnumuCCinFV_stack_12->SetBinError(7,0.9031665);
   hnumuCCinFV_stack_12->SetBinError(8,1.214274);
   hnumuCCinFV_stack_12->SetBinError(9,0.7591758);
   hnumuCCinFV_stack_12->SetBinError(10,1.94149);
   hnumuCCinFV_stack_12->SetBinError(11,1.373506);
   hnumuCCinFV_stack_12->SetBinError(12,1.533191);
   hnumuCCinFV_stack_12->SetBinError(13,1.254328);
   hnumuCCinFV_stack_12->SetBinError(14,1.515226);
   hnumuCCinFV_stack_12->SetBinError(15,1.589608);
   hnumuCCinFV_stack_12->SetBinError(16,2.042671);
   hnumuCCinFV_stack_12->SetBinError(17,1.955048);
   hnumuCCinFV_stack_12->SetBinError(18,1.690519);
   hnumuCCinFV_stack_12->SetBinError(19,2.302498);
   hnumuCCinFV_stack_12->SetBinError(20,2.914793);
   hnumuCCinFV_stack_12->SetEntries(327);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(15,0.2575838);
   hnueCCinFV_stack_13->SetBinContent(19,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(20,5.620256);
   hnueCCinFV_stack_13->SetBinError(1,0.3300742);
   hnueCCinFV_stack_13->SetBinError(15,0.2575838);
   hnueCCinFV_stack_13->SetBinError(19,0.4459143);
   hnueCCinFV_stack_13->SetBinError(20,2.506204);
   hnueCCinFV_stack_13->SetEntries(13);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__26->SetBinContent(1,25.18069);
   hmcerror__26->SetBinContent(2,13.71313);
   hmcerror__26->SetBinContent(3,16.6759);
   hmcerror__26->SetBinContent(4,13.13735);
   hmcerror__26->SetBinContent(5,11.86386);
   hmcerror__26->SetBinContent(6,15.61891);
   hmcerror__26->SetBinContent(7,15.67372);
   hmcerror__26->SetBinContent(8,16.13641);
   hmcerror__26->SetBinContent(9,16.3305);
   hmcerror__26->SetBinContent(10,19.37429);
   hmcerror__26->SetBinContent(11,19.91357);
   hmcerror__26->SetBinContent(12,19.98431);
   hmcerror__26->SetBinContent(13,19.92766);
   hmcerror__26->SetBinContent(14,27.20955);
   hmcerror__26->SetBinContent(15,37.2233);
   hmcerror__26->SetBinContent(16,34.68686);
   hmcerror__26->SetBinContent(17,50.7671);
   hmcerror__26->SetBinContent(18,54.3931);
   hmcerror__26->SetBinContent(19,64.58289);
   hmcerror__26->SetBinContent(20,118.1433);
   hmcerror__26->SetBinError(1,14.53474);
   hmcerror__26->SetBinError(2,16.46966);
   hmcerror__26->SetBinError(3,10.53163);
   hmcerror__26->SetBinError(4,10.42928);
   hmcerror__26->SetBinError(5,7.253709);
   hmcerror__26->SetBinError(6,9.298709);
   hmcerror__26->SetBinError(7,16.34733);
   hmcerror__26->SetBinError(8,9.820797);
   hmcerror__26->SetBinError(9,10.26372);
   hmcerror__26->SetBinError(10,11.18267);
   hmcerror__26->SetBinError(11,10.00485);
   hmcerror__26->SetBinError(12,11.22635);
   hmcerror__26->SetBinError(13,10.33599);
   hmcerror__26->SetBinError(14,15.76673);
   hmcerror__26->SetBinError(15,17.83323);
   hmcerror__26->SetBinError(16,24.66939);
   hmcerror__26->SetBinError(17,21.25973);
   hmcerror__26->SetBinError(18,24.58005);
   hmcerror__26->SetBinError(19,24.40072);
   hmcerror__26->SetBinError(20,43.79533);
   hmcerror__26->SetBinError(21,0.4673072);
   hmcerror__26->SetEntries(597.4116);

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
   22,
   11,
   14,
   8,
   14,
   13,
   9,
   6,
   13,
   8,
   7,
   19,
   15,
   25,
   24,
   26,
   34,
   49,
   48,
   85};
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
   4.8417,
   3.4975,
   3.9102,
   3.0307,
   3.9102,
   3.77763,
   3.19354,
   2.67925,
   3.77763,
   3.0307,
   2.85954,
   4.5151,
   4.0385,
   5.1474,
   5.0476,
   5.2453,
   5.9703,
   7.1318,
   7.0604,
   9.3428};
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
   4.6299,
   3.27,
   3.6898,
   2.7896,
   3.6898,
   3.5552,
   2.9582,
   2.41858,
   3.5552,
   2.7896,
   2.61053,
   4.3011,
   3.8197,
   4.9374,
   4.837,
   5.0358,
   5.7635,
   6.9277,
   6.8561,
   9.1411};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(2.988675);
   Graph_Graph3033->SetMaximum(103.2231);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.19","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 450.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 24.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  148.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  37.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 127.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all");
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
   0.5772177,
   1.201014,
   0.6315477,
   0.7938643,
   0.6114122,
   0.5953496,
   1.042977,
   0.608611,
   0.6285003,
   0.5771913,
   0.5024136,
   0.5617582,
   0.5186756,
   0.5794558,
   0.4790879,
   0.7112027,
   0.4187698,
   0.4518964,
   0.3778203,
   0.3706967};
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
   0.5772177,
   1.201014,
   0.6315477,
   0.7938643,
   0.6114122,
   0.5953496,
   1.042977,
   0.608611,
   0.6285003,
   0.5771913,
   0.5024136,
   0.5617582,
   0.5186756,
   0.5794558,
   0.4790879,
   0.7112027,
   0.4187698,
   0.4518964,
   0.3778203,
   0.3706967};
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
   0.2429676,
   0.2712954,
   0.2569259,
   0.2748861,
   0.277019,
   0.2456548,
   0.2913078,
   0.2732108,
   0.2640159,
   0.250942,
   0.2435208,
   0.25718,
   0.2543237,
   0.2785372,
   0.2567286,
   0.2806425,
   0.2443324,
   0.2551356,
   0.2294764,
   0.2085982};
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
   0.2429676,
   0.2712954,
   0.2569259,
   0.2748861,
   0.277019,
   0.2456548,
   0.2913078,
   0.2732108,
   0.2640159,
   0.250942,
   0.2435208,
   0.25718,
   0.2543237,
   0.2785372,
   0.2567286,
   0.2806425,
   0.2443324,
   0.2551356,
   0.2294764,
   0.2085982};
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
   0.8736855,
   0.8021507,
   0.8395348,
   0.6089507,
   1.180054,
   0.8323246,
   0.5742095,
   0.3718299,
   0.7960566,
   0.4129184,
   0.351519,
   0.9507458,
   0.7527225,
   0.9187951,
   0.6447575,
   0.7495633,
   0.6697251,
   0.9008495,
   0.743231,
   0.7194653};
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
   0.1922783,
   0.2550475,
   0.2344821,
   0.2306934,
   0.3295892,
   0.2418626,
   0.2037512,
   0.1660376,
   0.2313236,
   0.156429,
   0.1435975,
   0.2259322,
   0.202658,
   0.1891762,
   0.1356032,
   0.1512186,
   0.1176018,
   0.1311159,
   0.1093231,
   0.07908024};
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
   0.1838671,
   0.2384575,
   0.2212654,
   0.2123411,
   0.3110118,
   0.2276216,
   0.1887363,
   0.1498834,
   0.2177031,
   0.1439847,
   0.131093,
   0.2152238,
   0.1916783,
   0.1814584,
   0.1299455,
   0.1451789,
   0.1135282,
   0.1273636,
   0.1061597,
   0.07737299};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.07726499);
   Graph_Graph3036->SetMaximum(1.619594);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
