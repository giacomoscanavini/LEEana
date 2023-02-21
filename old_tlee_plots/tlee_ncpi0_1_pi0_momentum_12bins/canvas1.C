#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Jan  9 23:11:08 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-32.34,1353.846,3576.123);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,755.3071);
   hmc__1->SetBinContent(2,1598.465);
   hmc__1->SetBinContent(3,1327.542);
   hmc__1->SetBinContent(4,927.1158);
   hmc__1->SetBinContent(5,613.707);
   hmc__1->SetBinContent(6,388.2281);
   hmc__1->SetBinContent(7,239.1712);
   hmc__1->SetBinContent(8,145.2088);
   hmc__1->SetBinContent(9,117.4323);
   hmc__1->SetBinContent(10,77.55459);
   hmc__1->SetBinContent(11,69.57931);
   hmc__1->SetBinContent(12,56.4511);
   hmc__1->SetBinContent(13,463.3459);
   hmc__1->SetBinError(1,179.6296);
   hmc__1->SetBinError(2,447.7723);
   hmc__1->SetBinError(3,354.7099);
   hmc__1->SetBinError(4,255.2002);
   hmc__1->SetBinError(5,173.5814);
   hmc__1->SetBinError(6,94.54669);
   hmc__1->SetBinError(7,52.79779);
   hmc__1->SetBinError(8,34.96032);
   hmc__1->SetBinError(9,31.37315);
   hmc__1->SetBinError(10,22.25822);
   hmc__1->SetBinError(11,24.85017);
   hmc__1->SetBinError(12,18.42413);
   hmc__1->SetBinError(13,99.3113);
   hmc__1->SetMinimum(-32.34);
   hmc__1->SetMaximum(3395.7);
   hmc__1->SetEntries(7381.09);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-1.398517e-09);
   hs1_stack_1->SetMaximum(1678.388);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,28.60339);
   hbadmatch_stack_1->SetBinContent(2,45.0167);
   hbadmatch_stack_1->SetBinContent(3,28.42519);
   hbadmatch_stack_1->SetBinContent(4,20.15483);
   hbadmatch_stack_1->SetBinContent(5,15.25124);
   hbadmatch_stack_1->SetBinContent(6,7.460745);
   hbadmatch_stack_1->SetBinContent(7,4.354862);
   hbadmatch_stack_1->SetBinContent(8,3.900934);
   hbadmatch_stack_1->SetBinContent(9,3.265974);
   hbadmatch_stack_1->SetBinContent(10,1.652178);
   hbadmatch_stack_1->SetBinContent(11,1.904007);
   hbadmatch_stack_1->SetBinContent(12,2.722548);
   hbadmatch_stack_1->SetBinContent(13,10.74749);
   hbadmatch_stack_1->SetBinError(1,2.896677);
   hbadmatch_stack_1->SetBinError(2,4.419819);
   hbadmatch_stack_1->SetBinError(3,2.767673);
   hbadmatch_stack_1->SetBinError(4,2.745878);
   hbadmatch_stack_1->SetBinError(5,2.307276);
   hbadmatch_stack_1->SetBinError(6,1.425476);
   hbadmatch_stack_1->SetBinError(7,1.120385);
   hbadmatch_stack_1->SetBinError(8,1.089181);
   hbadmatch_stack_1->SetBinError(9,1.029745);
   hbadmatch_stack_1->SetBinError(10,0.6752);
   hbadmatch_stack_1->SetBinError(11,0.8293442);
   hbadmatch_stack_1->SetBinError(12,0.873656);
   hbadmatch_stack_1->SetBinError(13,1.802364);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,98.87821);
   hext_stack_2->SetBinContent(2,189.4889);
   hext_stack_2->SetBinContent(3,123.5705);
   hext_stack_2->SetBinContent(4,82.88409);
   hext_stack_2->SetBinContent(5,67.16695);
   hext_stack_2->SetBinContent(6,47.93881);
   hext_stack_2->SetBinContent(7,33.06957);
   hext_stack_2->SetBinContent(8,12.62882);
   hext_stack_2->SetBinContent(9,17.13889);
   hext_stack_2->SetBinContent(10,8.835386);
   hext_stack_2->SetBinContent(11,10.66644);
   hext_stack_2->SetBinContent(12,5.027592);
   hext_stack_2->SetBinContent(13,57.04392);
   hext_stack_2->SetBinError(1,6.907372);
   hext_stack_2->SetBinError(2,9.338143);
   hext_stack_2->SetBinError(3,7.42454);
   hext_stack_2->SetBinError(4,6.310038);
   hext_stack_2->SetBinError(5,5.636336);
   hext_stack_2->SetBinError(6,4.720509);
   hext_stack_2->SetBinError(7,3.962036);
   hext_stack_2->SetBinError(8,2.348507);
   hext_stack_2->SetBinError(9,2.851296);
   hext_stack_2->SetBinError(10,1.890514);
   hext_stack_2->SetBinError(11,2.19432);
   hext_stack_2->SetBinError(12,1.426537);
   hext_stack_2->SetBinError(13,5.218791);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,13.92191);
   hdirt_stack_3->SetBinContent(2,18.14569);
   hdirt_stack_3->SetBinContent(3,10.82083);
   hdirt_stack_3->SetBinContent(4,6.757972);
   hdirt_stack_3->SetBinContent(5,4.948392);
   hdirt_stack_3->SetBinContent(6,4.396319);
   hdirt_stack_3->SetBinContent(7,3.187969);
   hdirt_stack_3->SetBinContent(8,2.022682);
   hdirt_stack_3->SetBinContent(9,1.438663);
   hdirt_stack_3->SetBinContent(10,0.8581587);
   hdirt_stack_3->SetBinContent(11,0.8718092);
   hdirt_stack_3->SetBinContent(12,1.249728);
   hdirt_stack_3->SetBinContent(13,4.410919);
   hdirt_stack_3->SetBinError(1,1.91376);
   hdirt_stack_3->SetBinError(2,2.372843);
   hdirt_stack_3->SetBinError(3,1.613177);
   hdirt_stack_3->SetBinError(4,1.544136);
   hdirt_stack_3->SetBinError(5,1.196695);
   hdirt_stack_3->SetBinError(6,1.152944);
   hdirt_stack_3->SetBinError(7,0.902989);
   hdirt_stack_3->SetBinError(8,1.194892);
   hdirt_stack_3->SetBinError(9,0.6151616);
   hdirt_stack_3->SetBinError(10,0.5193504);
   hdirt_stack_3->SetBinError(11,0.4467199);
   hdirt_stack_3->SetBinError(12,0.6539975);
   hdirt_stack_3->SetBinError(13,1.171808);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,107.7401);
   houtFV_stack_4->SetBinContent(2,147.2937);
   houtFV_stack_4->SetBinContent(3,113.2136);
   houtFV_stack_4->SetBinContent(4,83.75014);
   houtFV_stack_4->SetBinContent(5,53.22771);
   houtFV_stack_4->SetBinContent(6,36.22422);
   houtFV_stack_4->SetBinContent(7,26.4686);
   houtFV_stack_4->SetBinContent(8,15.84979);
   houtFV_stack_4->SetBinContent(9,12.82314);
   houtFV_stack_4->SetBinContent(10,11.80204);
   houtFV_stack_4->SetBinContent(11,8.723993);
   houtFV_stack_4->SetBinContent(12,9.773493);
   houtFV_stack_4->SetBinContent(13,52.92136);
   houtFV_stack_4->SetBinError(1,5.193981);
   houtFV_stack_4->SetBinError(2,6.168021);
   houtFV_stack_4->SetBinError(3,5.259959);
   houtFV_stack_4->SetBinError(4,4.649473);
   houtFV_stack_4->SetBinError(5,3.690605);
   houtFV_stack_4->SetBinError(6,3.082145);
   houtFV_stack_4->SetBinError(7,2.53589);
   houtFV_stack_4->SetBinError(8,2.012332);
   houtFV_stack_4->SetBinError(9,1.869756);
   houtFV_stack_4->SetBinError(10,1.885738);
   houtFV_stack_4->SetBinError(11,1.546758);
   houtFV_stack_4->SetBinError(12,1.59967);
   houtFV_stack_4->SetBinError(13,3.666787);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.419232);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,15.69562);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,24.26046);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,21.42456);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.67428);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.739498);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.948018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.427546);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.172468);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.605583);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8366772);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.13648);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.27066);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.044114);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.490213);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.800664);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.757756);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.356217);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.04946);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9610697);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7161735);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5173886);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4942197);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2372521);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3098748);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.126941);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.391018);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.420623);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.330199);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.921284);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8626781);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.650981);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5826849);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1846715);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1576705);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2041393);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4984151);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08721538);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5902669);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3594734);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6859648);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6009524);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5548764);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1930751);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2303301);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.244204);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.09205883);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1321809);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1396091);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3052083);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06251801);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1845438);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,189.8955);
   hNCpi0inFVres_stack_7->SetBinContent(2,519.1598);
   hNCpi0inFVres_stack_7->SetBinContent(3,500.6069);
   hNCpi0inFVres_stack_7->SetBinContent(4,340.7432);
   hNCpi0inFVres_stack_7->SetBinContent(5,202.7339);
   hNCpi0inFVres_stack_7->SetBinContent(6,114.9368);
   hNCpi0inFVres_stack_7->SetBinContent(7,68.64355);
   hNCpi0inFVres_stack_7->SetBinContent(8,38.84894);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.34618);
   hNCpi0inFVres_stack_7->SetBinContent(10,20.13689);
   hNCpi0inFVres_stack_7->SetBinContent(11,17.66842);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.86427);
   hNCpi0inFVres_stack_7->SetBinContent(13,112.5853);
   hNCpi0inFVres_stack_7->SetBinError(1,4.470134);
   hNCpi0inFVres_stack_7->SetBinError(2,7.155784);
   hNCpi0inFVres_stack_7->SetBinError(3,7.278002);
   hNCpi0inFVres_stack_7->SetBinError(4,5.929397);
   hNCpi0inFVres_stack_7->SetBinError(5,4.509436);
   hNCpi0inFVres_stack_7->SetBinError(6,3.521085);
   hNCpi0inFVres_stack_7->SetBinError(7,2.978376);
   hNCpi0inFVres_stack_7->SetBinError(8,2.170968);
   hNCpi0inFVres_stack_7->SetBinError(9,2.200272);
   hNCpi0inFVres_stack_7->SetBinError(10,1.598289);
   hNCpi0inFVres_stack_7->SetBinError(11,1.421968);
   hNCpi0inFVres_stack_7->SetBinError(12,1.269703);
   hNCpi0inFVres_stack_7->SetBinError(13,3.817936);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,46.40803);
   hNCpi0inFVdis_stack_8->SetBinContent(2,105.8674);
   hNCpi0inFVdis_stack_8->SetBinContent(3,80.51229);
   hNCpi0inFVdis_stack_8->SetBinContent(4,63.21363);
   hNCpi0inFVdis_stack_8->SetBinContent(5,45.2976);
   hNCpi0inFVdis_stack_8->SetBinContent(6,32.75588);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.13385);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.98094);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.29421);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.375844);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.938602);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.684662);
   hNCpi0inFVdis_stack_8->SetBinContent(13,37.86517);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.305448);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.379793);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.969318);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.600189);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.378793);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.979214);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.781198);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.300823);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.43682);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7634111);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9151138);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9816453);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.506334);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3535035);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.5140381);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.07408595);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2117689);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1512652);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1935041);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03704761);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1416881);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,121.0298);
   hCCpi0inFV_stack_10->SetBinContent(2,264.7817);
   hCCpi0inFV_stack_10->SetBinContent(3,226.4474);
   hCCpi0inFV_stack_10->SetBinContent(4,160.7343);
   hCCpi0inFV_stack_10->SetBinContent(5,98.39082);
   hCCpi0inFV_stack_10->SetBinContent(6,65.96505);
   hCCpi0inFV_stack_10->SetBinContent(7,34.38893);
   hCCpi0inFV_stack_10->SetBinContent(8,20.3144);
   hCCpi0inFV_stack_10->SetBinContent(9,16.30493);
   hCCpi0inFV_stack_10->SetBinContent(10,10.18308);
   hCCpi0inFV_stack_10->SetBinContent(11,9.168773);
   hCCpi0inFV_stack_10->SetBinContent(12,7.420504);
   hCCpi0inFV_stack_10->SetBinContent(13,59.88737);
   hCCpi0inFV_stack_10->SetBinError(1,5.45245);
   hCCpi0inFV_stack_10->SetBinError(2,8.176749);
   hCCpi0inFV_stack_10->SetBinError(3,7.568547);
   hCCpi0inFV_stack_10->SetBinError(4,6.409377);
   hCCpi0inFV_stack_10->SetBinError(5,4.921037);
   hCCpi0inFV_stack_10->SetBinError(6,4.100043);
   hCCpi0inFV_stack_10->SetBinError(7,2.988797);
   hCCpi0inFV_stack_10->SetBinError(8,2.209953);
   hCCpi0inFV_stack_10->SetBinError(9,2.03407);
   hCCpi0inFV_stack_10->SetBinError(10,1.54627);
   hCCpi0inFV_stack_10->SetBinError(11,1.563604);
   hCCpi0inFV_stack_10->SetBinError(12,1.30688);
   hCCpi0inFV_stack_10->SetBinError(13,3.920783);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,67.24049);
   hNCinFV_stack_11->SetBinContent(2,130.9085);
   hNCinFV_stack_11->SetBinContent(3,93.66962);
   hNCinFV_stack_11->SetBinContent(4,54.29512);
   hNCinFV_stack_11->SetBinContent(5,48.124);
   hNCinFV_stack_11->SetBinContent(6,31.80168);
   hNCinFV_stack_11->SetBinContent(7,17.80899);
   hNCinFV_stack_11->SetBinContent(8,13.53765);
   hNCinFV_stack_11->SetBinContent(9,6.635118);
   hNCinFV_stack_11->SetBinContent(10,7.199595);
   hNCinFV_stack_11->SetBinContent(11,5.752347);
   hNCinFV_stack_11->SetBinContent(12,3.764454);
   hNCinFV_stack_11->SetBinContent(13,34.50335);
   hNCinFV_stack_11->SetBinError(1,4.285548);
   hNCinFV_stack_11->SetBinError(2,6.278569);
   hNCinFV_stack_11->SetBinError(3,5.259616);
   hNCinFV_stack_11->SetBinError(4,3.93839);
   hNCinFV_stack_11->SetBinError(5,3.949096);
   hNCinFV_stack_11->SetBinError(6,3.080744);
   hNCinFV_stack_11->SetBinError(7,2.22416);
   hNCinFV_stack_11->SetBinError(8,1.972517);
   hNCinFV_stack_11->SetBinError(9,1.3964);
   hNCinFV_stack_11->SetBinError(10,1.449799);
   hNCinFV_stack_11->SetBinError(11,1.24166);
   hNCinFV_stack_11->SetBinError(12,1.231526);
   hNCinFV_stack_11->SetBinError(13,3.194873);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,64.24355);
   hnumuCCinFV_stack_12->SetBinContent(2,151.7571);
   hnumuCCinFV_stack_12->SetBinContent(3,115.9714);
   hnumuCCinFV_stack_12->SetBinContent(4,83.59753);
   hnumuCCinFV_stack_12->SetBinContent(5,61.09074);
   hnumuCCinFV_stack_12->SetBinContent(6,36.96951);
   hnumuCCinFV_stack_12->SetBinContent(7,22.95255);
   hnumuCCinFV_stack_12->SetBinContent(8,19.52439);
   hnumuCCinFV_stack_12->SetBinContent(9,11.12315);
   hnumuCCinFV_stack_12->SetBinContent(10,8.829817);
   hnumuCCinFV_stack_12->SetBinContent(11,7.505619);
   hnumuCCinFV_stack_12->SetBinContent(12,6.597095);
   hnumuCCinFV_stack_12->SetBinContent(13,63.59885);
   hnumuCCinFV_stack_12->SetBinError(1,4.74572);
   hnumuCCinFV_stack_12->SetBinError(2,7.012426);
   hnumuCCinFV_stack_12->SetBinError(3,6.439012);
   hnumuCCinFV_stack_12->SetBinError(4,5.067376);
   hnumuCCinFV_stack_12->SetBinError(5,4.606378);
   hnumuCCinFV_stack_12->SetBinError(6,3.951718);
   hnumuCCinFV_stack_12->SetBinError(7,2.808492);
   hnumuCCinFV_stack_12->SetBinError(8,2.483968);
   hnumuCCinFV_stack_12->SetBinError(9,2.19022);
   hnumuCCinFV_stack_12->SetBinError(10,1.818609);
   hnumuCCinFV_stack_12->SetBinError(11,1.420291);
   hnumuCCinFV_stack_12->SetBinError(12,1.456137);
   hnumuCCinFV_stack_12->SetBinError(13,4.686783);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,6.182369);
   hnueCCinFV_stack_13->SetBinContent(2,4.414959);
   hnueCCinFV_stack_13->SetBinContent(3,5.639759);
   hnueCCinFV_stack_13->SetBinContent(4,6.606069);
   hnueCCinFV_stack_13->SetBinContent(5,2.900972);
   hnueCCinFV_stack_13->SetBinContent(6,1.371181);
   hnueCCinFV_stack_13->SetBinContent(7,1.63161);
   hnueCCinFV_stack_13->SetBinContent(8,1.776237);
   hnueCCinFV_stack_13->SetBinContent(9,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(10,0.8718764);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,1.123056);
   hnueCCinFV_stack_13->SetBinContent(13,18.92124);
   hnueCCinFV_stack_13->SetBinError(1,1.661443);
   hnueCCinFV_stack_13->SetBinError(2,1.086025);
   hnueCCinFV_stack_13->SetBinError(3,1.385054);
   hnueCCinFV_stack_13->SetBinError(4,2.229194);
   hnueCCinFV_stack_13->SetBinError(5,0.883778);
   hnueCCinFV_stack_13->SetBinError(6,0.5745533);
   hnueCCinFV_stack_13->SetBinError(7,0.6310246);
   hnueCCinFV_stack_13->SetBinError(8,0.6884973);
   hnueCCinFV_stack_13->SetBinError(9,0.438694);
   hnueCCinFV_stack_13->SetBinError(10,0.4395467);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.5751693);
   hnueCCinFV_stack_13->SetBinError(13,3.093928);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,755.3071);
   hmcerror__2->SetBinContent(2,1598.465);
   hmcerror__2->SetBinContent(3,1327.542);
   hmcerror__2->SetBinContent(4,927.1158);
   hmcerror__2->SetBinContent(5,613.707);
   hmcerror__2->SetBinContent(6,388.2281);
   hmcerror__2->SetBinContent(7,239.1712);
   hmcerror__2->SetBinContent(8,145.2088);
   hmcerror__2->SetBinContent(9,117.4323);
   hmcerror__2->SetBinContent(10,77.55459);
   hmcerror__2->SetBinContent(11,69.57931);
   hmcerror__2->SetBinContent(12,56.4511);
   hmcerror__2->SetBinContent(13,463.3459);
   hmcerror__2->SetBinError(1,179.6296);
   hmcerror__2->SetBinError(2,447.7723);
   hmcerror__2->SetBinError(3,354.7099);
   hmcerror__2->SetBinError(4,255.2002);
   hmcerror__2->SetBinError(5,173.5814);
   hmcerror__2->SetBinError(6,94.54669);
   hmcerror__2->SetBinError(7,52.79779);
   hmcerror__2->SetBinError(8,34.96032);
   hmcerror__2->SetBinError(9,31.37315);
   hmcerror__2->SetBinError(10,22.25822);
   hmcerror__2->SetBinError(11,24.85017);
   hmcerror__2->SetBinError(12,18.42413);
   hmcerror__2->SetBinError(13,99.3113);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   765,
   1617,
   1352,
   828,
   494,
   348,
   201,
   162,
   100,
   77,
   45,
   43};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   27.65863,
   40.21194,
   36.76955,
   28.77499,
   22.22611,
   18.65476,
   14.17745,
   12.72792,
   10.1212,
   8.8995,
   6.8416,
   6.6917};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   27.65863,
   40.21194,
   36.76955,
   28.77499,
   22.22611,
   18.65476,
   14.17745,
   12.72792,
   9.92,
   8.6976,
   6.637,
   6.4868};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(32.67747);
   Graph_Graph3001->SetMaximum(1819.302);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6032.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 162.7","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 697.3","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 68.6","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 626.9","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.3","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.3","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2059.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  435.5","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1035.1","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 480.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 590.2","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 34.3","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[12] = {
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
   Double_t _fy3002[12] = {
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
   Double_t _felx3002[12] = {
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
   Double_t _fely3002[12] = {
   0.2378232,
   0.2801265,
   0.2671929,
   0.2752625,
   0.2828409,
   0.2435339,
   0.2207531,
   0.240759,
   0.2671594,
   0.2870007,
   0.3571488,
   0.3263733};
   Double_t _fehx3002[12] = {
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
   Double_t _fehy3002[12] = {
   0.2378232,
   0.2801265,
   0.2671929,
   0.2752625,
   0.2828409,
   0.2435339,
   0.2207531,
   0.240759,
   0.2671594,
   0.2870007,
   0.3571488,
   0.3263733};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
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
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.2223183,
   0.2779062,
   0.2638567,
   0.2698226,
   0.2629687,
   0.2308632,
   0.1927009,
   0.1926531,
   0.1985723,
   0.2027111,
   0.1793656,
   0.1981931};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.2223183,
   0.2779062,
   0.2638567,
   0.2698226,
   0.2629687,
   0.2308632,
   0.1927009,
   0.1926531,
   0.1985723,
   0.2027111,
   0.1793656,
   0.1981931};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[12] = {
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
   Double_t _fy3004[12] = {
   1.012833,
   1.011596,
   1.018423,
   0.8930923,
   0.8049444,
   0.8963803,
   0.8404022,
   1.115635,
   0.8515543,
   0.9928491,
   0.646744,
   0.7617213};
   Double_t _felx3004[12] = {
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
   Double_t _fely3004[12] = {
   0.03661906,
   0.0251566,
   0.02769746,
   0.0310371,
   0.03621616,
   0.04805103,
   0.0592774,
   0.08765256,
   0.08618752,
   0.1147514,
   0.09832808,
   0.1185398};
   Double_t _fehx3004[12] = {
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
   Double_t _fehy3004[12] = {
   0.03661906,
   0.0251566,
   0.02769746,
   0.0310371,
   0.03621616,
   0.04805103,
   0.0592774,
   0.08765256,
   0.08447419,
   0.1121481,
   0.09538755,
   0.1149101};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.4829288);
   Graph_Graph3004->SetMaximum(1.268775);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
