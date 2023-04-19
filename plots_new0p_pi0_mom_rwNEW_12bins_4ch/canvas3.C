#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 21:31:45 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,133.5988);
   hmc__7->SetBinContent(2,248.8647);
   hmc__7->SetBinContent(3,203.3624);
   hmc__7->SetBinContent(4,164.7455);
   hmc__7->SetBinContent(5,108.7281);
   hmc__7->SetBinContent(6,80.29009);
   hmc__7->SetBinContent(7,38.19127);
   hmc__7->SetBinContent(8,29.22941);
   hmc__7->SetBinContent(9,20.32425);
   hmc__7->SetBinContent(10,16.70496);
   hmc__7->SetBinContent(11,10.83266);
   hmc__7->SetBinContent(12,10.89944);
   hmc__7->SetBinContent(13,88.48631);
   hmc__7->SetBinError(1,40.98059);
   hmc__7->SetBinError(2,59.17623);
   hmc__7->SetBinError(3,50.62815);
   hmc__7->SetBinError(4,41.54847);
   hmc__7->SetBinError(5,46.32615);
   hmc__7->SetBinError(6,24.42709);
   hmc__7->SetBinError(7,15.37878);
   hmc__7->SetBinError(8,13.30937);
   hmc__7->SetBinError(9,11.71346);
   hmc__7->SetBinError(10,11.15448);
   hmc__7->SetBinError(11,7.273576);
   hmc__7->SetBinError(12,9.357854);
   hmc__7->SetBinError(13,26.11905);
   hmc__7->SetMinimum(-4.977294);
   hmc__7->SetMaximum(522.6159);
   hmc__7->SetEntries(1133.738);
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
   hs3_stack_3->SetMinimum(-7.299257e-09);
   hs3_stack_3->SetMaximum(261.3079);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,133.5988);
   hmcerror__8->SetBinContent(2,248.8647);
   hmcerror__8->SetBinContent(3,203.3624);
   hmcerror__8->SetBinContent(4,164.7455);
   hmcerror__8->SetBinContent(5,108.7281);
   hmcerror__8->SetBinContent(6,80.29009);
   hmcerror__8->SetBinContent(7,38.19127);
   hmcerror__8->SetBinContent(8,29.22941);
   hmcerror__8->SetBinContent(9,20.32425);
   hmcerror__8->SetBinContent(10,16.70496);
   hmcerror__8->SetBinContent(11,10.83266);
   hmcerror__8->SetBinContent(12,10.89944);
   hmcerror__8->SetBinContent(13,88.48631);
   hmcerror__8->SetBinError(1,40.98059);
   hmcerror__8->SetBinError(2,59.17623);
   hmcerror__8->SetBinError(3,50.62815);
   hmcerror__8->SetBinError(4,41.54847);
   hmcerror__8->SetBinError(5,46.32615);
   hmcerror__8->SetBinError(6,24.42709);
   hmcerror__8->SetBinError(7,15.37878);
   hmcerror__8->SetBinError(8,13.30937);
   hmcerror__8->SetBinError(9,11.71346);
   hmcerror__8->SetBinError(10,11.15448);
   hmcerror__8->SetBinError(11,7.273576);
   hmcerror__8->SetBinError(12,9.357854);
   hmcerror__8->SetBinError(13,26.11905);
   hmcerror__8->SetEntries(1133.738);

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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(5.225814);
   Graph_Graph3009->SetMaximum(260.009);
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
   entry=leg->AddEntry("hext_stack_2","EXT, 180.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 20.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 227.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  164.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  42.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 211.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 48.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 117.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all");
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
   0.3067437,
   0.2377847,
   0.2489553,
   0.252198,
   0.4260734,
   0.3042354,
   0.4026778,
   0.4553417,
   0.5763294,
   0.6677343,
   0.6714487,
   0.8585631};
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
   0.3067437,
   0.2377847,
   0.2489553,
   0.252198,
   0.4260734,
   0.3042354,
   0.4026778,
   0.4553417,
   0.5763294,
   0.6677343,
   0.6714487,
   0.8585631};
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
   0.1725061,
   0.1624439,
   0.18555,
   0.1859643,
   0.190008,
   0.1809539,
   0.207863,
   0.2147951,
   0.2290904,
   0.2308992,
   0.2324986,
   0.2510686};
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
   0.1725061,
   0.1624439,
   0.18555,
   0.1859643,
   0.190008,
   0.1809539,
   0.207863,
   0.2147951,
   0.2290904,
   0.2308992,
   0.2324986,
   0.2510686};
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
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.4169488);
   Graph_Graph3012->SetMaximum(1.845733);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
