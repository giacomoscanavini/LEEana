#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 12:32:25 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-4.977294,1353.846,550.384);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__22->SetBinContent(1,133.5988);
   hmc__22->SetBinContent(2,248.8647);
   hmc__22->SetBinContent(3,203.3624);
   hmc__22->SetBinContent(4,164.7455);
   hmc__22->SetBinContent(5,108.7281);
   hmc__22->SetBinContent(6,80.29009);
   hmc__22->SetBinContent(7,38.19127);
   hmc__22->SetBinContent(8,29.22941);
   hmc__22->SetBinContent(9,20.32425);
   hmc__22->SetBinContent(10,16.70496);
   hmc__22->SetBinContent(11,10.83266);
   hmc__22->SetBinContent(12,10.89944);
   hmc__22->SetBinContent(13,88.48631);
   hmc__22->SetBinError(1,40.77573);
   hmc__22->SetBinError(2,59.19319);
   hmc__22->SetBinError(3,50.77885);
   hmc__22->SetBinError(4,41.59648);
   hmc__22->SetBinError(5,46.28783);
   hmc__22->SetBinError(6,24.43152);
   hmc__22->SetBinError(7,15.46241);
   hmc__22->SetBinError(8,13.33443);
   hmc__22->SetBinError(9,11.70903);
   hmc__22->SetBinError(10,11.12228);
   hmc__22->SetBinError(11,7.315403);
   hmc__22->SetBinError(12,9.384345);
   hmc__22->SetBinError(13,26.0837);
   hmc__22->SetMinimum(-4.977294);
   hmc__22->SetMaximum(522.6159);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",12,0,1200);
   hs8_stack_8->SetMinimum(-7.299257e-09);
   hs8_stack_8->SetMaximum(261.3079);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,6.749542);
   hbadmatch_stack_1->SetBinContent(2,9.199628);
   hbadmatch_stack_1->SetBinContent(3,5.501865);
   hbadmatch_stack_1->SetBinContent(4,4.23287);
   hbadmatch_stack_1->SetBinContent(5,4.373218);
   hbadmatch_stack_1->SetBinContent(6,2.30395);
   hbadmatch_stack_1->SetBinContent(7,1.442715);
   hbadmatch_stack_1->SetBinContent(8,1.032126);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.5773679);
   hbadmatch_stack_1->SetBinContent(13,3.377188);
   hbadmatch_stack_1->SetBinError(1,1.343222);
   hbadmatch_stack_1->SetBinError(2,1.677286);
   hbadmatch_stack_1->SetBinError(3,1.158276);
   hbadmatch_stack_1->SetBinError(4,1.058618);
   hbadmatch_stack_1->SetBinError(5,1.558626);
   hbadmatch_stack_1->SetBinError(6,0.7080718);
   hbadmatch_stack_1->SetBinError(7,0.6609066);
   hbadmatch_stack_1->SetBinError(8,0.4638019);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.4147048);
   hbadmatch_stack_1->SetBinError(13,1.015445);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,15.39558);
   hext_stack_2->SetBinContent(2,47.46443);
   hext_stack_2->SetBinContent(3,34.25302);
   hext_stack_2->SetBinContent(4,25.96269);
   hext_stack_2->SetBinContent(5,16.92542);
   hext_stack_2->SetBinContent(6,17.66359);
   hext_stack_2->SetBinContent(7,6.81839);
   hext_stack_2->SetBinContent(8,4.054399);
   hext_stack_2->SetBinContent(9,4.06158);
   hext_stack_2->SetBinContent(10,3.882816);
   hext_stack_2->SetBinContent(11,2.435184);
   hext_stack_2->SetBinContent(12,1.868591);
   hext_stack_2->SetBinContent(13,19.62157);
   hext_stack_2->SetBinError(1,2.505261);
   hext_stack_2->SetBinError(2,4.508324);
   hext_stack_2->SetBinError(3,3.819695);
   hext_stack_2->SetBinError(4,3.430745);
   hext_stack_2->SetBinError(5,2.698136);
   hext_stack_2->SetBinError(6,2.710958);
   hext_stack_2->SetBinError(7,1.678236);
   hext_stack_2->SetBinError(8,1.311223);
   hext_stack_2->SetBinError(9,1.232114);
   hext_stack_2->SetBinError(10,1.341763);
   hext_stack_2->SetBinError(11,0.9256422);
   hext_stack_2->SetBinError(12,0.840497);
   hext_stack_2->SetBinError(13,2.813292);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,3.968527);
   hdirt_stack_3->SetBinContent(2,4.415061);
   hdirt_stack_3->SetBinContent(3,2.885186);
   hdirt_stack_3->SetBinContent(4,3.497834);
   hdirt_stack_3->SetBinContent(5,1.48622);
   hdirt_stack_3->SetBinContent(6,1.765737);
   hdirt_stack_3->SetBinContent(7,0.3379148);
   hdirt_stack_3->SetBinContent(8,0.3173019);
   hdirt_stack_3->SetBinContent(9,0.6566868);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,1.3631);
   hdirt_stack_3->SetBinError(1,1.019604);
   hdirt_stack_3->SetBinError(2,1.083165);
   hdirt_stack_3->SetBinError(3,0.8293902);
   hdirt_stack_3->SetBinError(4,1.279059);
   hdirt_stack_3->SetBinError(5,0.6977623);
   hdirt_stack_3->SetBinError(6,0.7730156);
   hdirt_stack_3->SetBinError(7,0.2473388);
   hdirt_stack_3->SetBinError(8,0.2243877);
   hdirt_stack_3->SetBinError(9,0.3791383);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.6417027);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,37.61777);
   houtFV_stack_4->SetBinContent(2,54.08397);
   houtFV_stack_4->SetBinContent(3,36.95126);
   houtFV_stack_4->SetBinContent(4,32.08837);
   houtFV_stack_4->SetBinContent(5,19.34487);
   houtFV_stack_4->SetBinContent(6,15.51348);
   houtFV_stack_4->SetBinContent(7,9.393898);
   houtFV_stack_4->SetBinContent(8,9.239122);
   houtFV_stack_4->SetBinContent(9,3.370974);
   houtFV_stack_4->SetBinContent(10,4.483092);
   houtFV_stack_4->SetBinContent(11,2.961411);
   houtFV_stack_4->SetBinContent(12,2.657956);
   houtFV_stack_4->SetBinContent(13,18.36203);
   houtFV_stack_4->SetBinError(1,3.098614);
   houtFV_stack_4->SetBinError(2,3.895576);
   houtFV_stack_4->SetBinError(3,3.076232);
   houtFV_stack_4->SetBinError(4,3.007769);
   houtFV_stack_4->SetBinError(5,2.207136);
   houtFV_stack_4->SetBinError(6,2.01017);
   houtFV_stack_4->SetBinError(7,1.523312);
   houtFV_stack_4->SetBinError(8,1.49113);
   houtFV_stack_4->SetBinError(9,0.8986391);
   houtFV_stack_4->SetBinError(10,1.092952);
   houtFV_stack_4->SetBinError(11,0.9357755);
   houtFV_stack_4->SetBinError(12,0.7852803);
   houtFV_stack_4->SetBinError(13,2.172117);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9060901);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.050662);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.272198);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.812012);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.24513);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.825798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.530268);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.394672);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3332495);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5234555);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4916305);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4351454);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5100866);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4787964);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2180566);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3434108);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.21653);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.25211);
   hNCpi0inFVres_stack_7->SetBinContent(3,35.71976);
   hNCpi0inFVres_stack_7->SetBinContent(4,28.67782);
   hNCpi0inFVres_stack_7->SetBinContent(5,19.06225);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.28685);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.5288);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.612397);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.862843);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.93623);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.114008);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.462762);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.312487);
   hNCpi0inFVres_stack_7->SetBinError(1,1.356561);
   hNCpi0inFVres_stack_7->SetBinError(2,1.83547);
   hNCpi0inFVres_stack_7->SetBinError(3,1.871986);
   hNCpi0inFVres_stack_7->SetBinError(4,1.710336);
   hNCpi0inFVres_stack_7->SetBinError(5,1.421521);
   hNCpi0inFVres_stack_7->SetBinError(6,1.175817);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8905168);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5754036);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7043551);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3841557);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2676089);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3919296);
   hNCpi0inFVres_stack_7->SetBinError(13,0.962693);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.12656);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.905357);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.626862);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.639816);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.089114);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.653083);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.161094);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.26979);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.38139);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6835541);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.570384);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6769285);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.861375);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9123922);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9236275);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7465598);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.565453);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4385604);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4161726);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4198967);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3022172);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.607805);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,23.65829);
   hCCpi0inFV_stack_10->SetBinContent(2,45.70504);
   hCCpi0inFV_stack_10->SetBinContent(3,43.39731);
   hCCpi0inFV_stack_10->SetBinContent(4,37.09787);
   hCCpi0inFV_stack_10->SetBinContent(5,27.37502);
   hCCpi0inFV_stack_10->SetBinContent(6,13.24892);
   hCCpi0inFV_stack_10->SetBinContent(7,6.887101);
   hCCpi0inFV_stack_10->SetBinContent(8,3.817658);
   hCCpi0inFV_stack_10->SetBinContent(9,4.86825);
   hCCpi0inFV_stack_10->SetBinContent(10,2.252388);
   hCCpi0inFV_stack_10->SetBinContent(11,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(12,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(13,14.59026);
   hCCpi0inFV_stack_10->SetBinError(1,2.364265);
   hCCpi0inFV_stack_10->SetBinError(2,3.41227);
   hCCpi0inFV_stack_10->SetBinError(3,3.32826);
   hCCpi0inFV_stack_10->SetBinError(4,3.116396);
   hCCpi0inFV_stack_10->SetBinError(5,2.650274);
   hCCpi0inFV_stack_10->SetBinError(6,1.832565);
   hCCpi0inFV_stack_10->SetBinError(7,1.301073);
   hCCpi0inFV_stack_10->SetBinError(8,0.9201191);
   hCCpi0inFV_stack_10->SetBinError(9,1.185572);
   hCCpi0inFV_stack_10->SetBinError(10,0.7350883);
   hCCpi0inFV_stack_10->SetBinError(11,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(12,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(13,1.937018);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,6.689155);
   hNCinFV_stack_11->SetBinContent(2,13.90982);
   hNCinFV_stack_11->SetBinContent(3,8.004605);
   hNCinFV_stack_11->SetBinContent(4,6.935891);
   hNCinFV_stack_11->SetBinContent(5,4.744601);
   hNCinFV_stack_11->SetBinContent(6,2.931052);
   hNCinFV_stack_11->SetBinContent(7,1.17353);
   hNCinFV_stack_11->SetBinContent(8,1.907138);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.5884556);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,2.589184);
   hNCinFV_stack_11->SetBinError(1,1.30254);
   hNCinFV_stack_11->SetBinError(2,1.912569);
   hNCinFV_stack_11->SetBinError(3,1.468997);
   hNCinFV_stack_11->SetBinError(4,1.360553);
   hNCinFV_stack_11->SetBinError(5,1.037837);
   hNCinFV_stack_11->SetBinError(6,0.8781425);
   hNCinFV_stack_11->SetBinError(7,0.4790957);
   hNCinFV_stack_11->SetBinError(8,0.6501133);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.3397478);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.809167);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,16.43652);
   hnumuCCinFV_stack_12->SetBinContent(2,30.2899);
   hnumuCCinFV_stack_12->SetBinContent(3,26.19695);
   hnumuCCinFV_stack_12->SetBinContent(4,15.7626);
   hnumuCCinFV_stack_12->SetBinContent(5,7.477546);
   hnumuCCinFV_stack_12->SetBinContent(6,8.845102);
   hnumuCCinFV_stack_12->SetBinContent(7,2.889654);
   hnumuCCinFV_stack_12->SetBinContent(8,3.575094);
   hnumuCCinFV_stack_12->SetBinContent(9,0.7649378);
   hnumuCCinFV_stack_12->SetBinContent(10,2.693007);
   hnumuCCinFV_stack_12->SetBinContent(11,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(12,1.750445);
   hnumuCCinFV_stack_12->SetBinContent(13,10.2464);
   hnumuCCinFV_stack_12->SetBinError(1,2.947246);
   hnumuCCinFV_stack_12->SetBinError(2,2.873792);
   hnumuCCinFV_stack_12->SetBinError(3,3.391933);
   hnumuCCinFV_stack_12->SetBinError(4,2.178118);
   hnumuCCinFV_stack_12->SetBinError(5,1.366016);
   hnumuCCinFV_stack_12->SetBinError(6,1.528018);
   hnumuCCinFV_stack_12->SetBinError(7,0.8614046);
   hnumuCCinFV_stack_12->SetBinError(8,0.9132059);
   hnumuCCinFV_stack_12->SetBinError(9,0.4543371);
   hnumuCCinFV_stack_12->SetBinError(10,1.352279);
   hnumuCCinFV_stack_12->SetBinError(11,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(12,0.7790067);
   hnumuCCinFV_stack_12->SetBinError(13,1.828013);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.4992645);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.9818863);
   hnueCCinFV_stack_13->SetBinContent(5,0.4931023);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(13,4.059048);
   hnueCCinFV_stack_13->SetBinError(1,0.3608779);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.4391155);
   hnueCCinFV_stack_13->SetBinError(5,0.3729702);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2179626);
   hnueCCinFV_stack_13->SetBinError(13,1.608384);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__23->SetBinContent(1,133.5988);
   hmcerror__23->SetBinContent(2,248.8647);
   hmcerror__23->SetBinContent(3,203.3624);
   hmcerror__23->SetBinContent(4,164.7455);
   hmcerror__23->SetBinContent(5,108.7281);
   hmcerror__23->SetBinContent(6,80.29009);
   hmcerror__23->SetBinContent(7,38.19127);
   hmcerror__23->SetBinContent(8,29.22941);
   hmcerror__23->SetBinContent(9,20.32425);
   hmcerror__23->SetBinContent(10,16.70496);
   hmcerror__23->SetBinContent(11,10.83266);
   hmcerror__23->SetBinContent(12,10.89944);
   hmcerror__23->SetBinContent(13,88.48631);
   hmcerror__23->SetBinError(1,40.77573);
   hmcerror__23->SetBinError(2,59.19319);
   hmcerror__23->SetBinError(3,50.77885);
   hmcerror__23->SetBinError(4,41.59648);
   hmcerror__23->SetBinError(5,46.28783);
   hmcerror__23->SetBinError(6,24.43152);
   hmcerror__23->SetBinError(7,15.46241);
   hmcerror__23->SetBinError(8,13.33443);
   hmcerror__23->SetBinError(9,11.70903);
   hmcerror__23->SetBinError(10,11.12228);
   hmcerror__23->SetBinError(11,7.315403);
   hmcerror__23->SetBinError(12,9.384345);
   hmcerror__23->SetBinError(13,26.0837);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[12] = {
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
   Double_t _fy3029[12] = {
   143,
   222,
   202,
   129,
   102,
   56,
   38,
   36,
   15,
   18,
   9,
   15};
   Double_t _felx3029[12] = {
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
   Double_t _fely3029[12] = {
   11.95826,
   14.89966,
   14.21267,
   11.35782,
   10.0995,
   7.6127,
   6.3013,
   6.1381,
   4.0385,
   4.4008,
   3.19354,
   4.0385};
   Double_t _fehx3029[12] = {
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
   Double_t _fehy3029[12] = {
   11.95826,
   14.89966,
   14.21267,
   11.35782,
   10.0995,
   7.4094,
   6.0955,
   5.9318,
   3.8197,
   4.1858,
   2.9582,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1320);
   Graph_Graph3029->SetMinimum(5.225814);
   Graph_Graph3029->SetMaximum(260.009);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 985.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.8","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 180.8","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 20.0","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 227.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.3","F");

   ci = 1529;
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

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  164.7","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  42.2","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 211.3","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 48.0","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 117.5","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.0","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[12] = {
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
   Double_t _fy3030[12] = {
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
   Double_t _felx3030[12] = {
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
   Double_t _fely3030[12] = {
   0.3052103,
   0.2378529,
   0.2496963,
   0.2524894,
   0.425721,
   0.3042906,
   0.4048676,
   0.4561989,
   0.5761114,
   0.6658069,
   0.6753099,
   0.8609936};
   Double_t _fehx3030[12] = {
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
   Double_t _fehy3030[12] = {
   0.3052103,
   0.2378529,
   0.2496963,
   0.2524894,
   0.425721,
   0.3042906,
   0.4048676,
   0.4561989,
   0.5761114,
   0.6658069,
   0.6753099,
   0.8609936};
   grae = new TGraphAsymmErrors(12,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1320);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[12] = {
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
   Double_t _fy3031[12] = {
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
   Double_t _felx3031[12] = {
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
   Double_t _fely3031[12] = {
   0.1725061,
   0.162444,
   0.18555,
   0.1859643,
   0.1900078,
   0.1809538,
   0.2078626,
   0.2147953,
   0.2290909,
   0.2308999,
   0.2324988,
   0.2510677};
   Double_t _fehx3031[12] = {
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
   Double_t _fehy3031[12] = {
   0.1725061,
   0.162444,
   0.18555,
   0.1859643,
   0.1900078,
   0.1809538,
   0.2078626,
   0.2147953,
   0.2290909,
   0.2308999,
   0.2324988,
   0.2510677};
   grae = new TGraphAsymmErrors(12,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1320);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[12] = {
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
   Double_t _fy3032[12] = {
   1.070369,
   0.8920509,
   0.9933005,
   0.7830262,
   0.9381201,
   0.6974709,
   0.9949918,
   1.231636,
   0.7380345,
   1.077524,
   0.8308207,
   1.376218};
   Double_t _felx3032[12] = {
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
   Double_t _fely3032[12] = {
   0.08950873,
   0.05987054,
   0.06988838,
   0.06894161,
   0.09288773,
   0.09481494,
   0.1649932,
   0.2099974,
   0.1987035,
   0.2634427,
   0.2948066,
   0.3705238};
   Double_t _fehx3032[12] = {
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
   Double_t _fehy3032[12] = {
   0.08950873,
   0.05987054,
   0.06988838,
   0.06894161,
   0.09288773,
   0.09228287,
   0.1596045,
   0.2029394,
   0.187938,
   0.2505722,
   0.2730815,
   0.3504493};
   grae = new TGraphAsymmErrors(12,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1320);
   Graph_Graph3032->SetMinimum(0.4169488);
   Graph_Graph3032->SetMaximum(1.845733);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
