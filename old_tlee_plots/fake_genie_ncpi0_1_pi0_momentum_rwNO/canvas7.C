#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Jan 13 22:27:20 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-17.3,1353.846,1913.016);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,290.9326);
   hmc__19->SetBinContent(2,845.9352);
   hmc__19->SetBinContent(3,663.0405);
   hmc__19->SetBinContent(4,412.3528);
   hmc__19->SetBinContent(5,280.9061);
   hmc__19->SetBinContent(6,156.3007);
   hmc__19->SetBinContent(7,82.19715);
   hmc__19->SetBinContent(8,50.47973);
   hmc__19->SetBinContent(9,36.86575);
   hmc__19->SetBinContent(10,29.36718);
   hmc__19->SetBinContent(11,21.36185);
   hmc__19->SetBinContent(12,29.28077);
   hmc__19->SetBinContent(13,166.1772);
   hmc__19->SetBinError(1,71.56168);
   hmc__19->SetBinError(2,219.3862);
   hmc__19->SetBinError(3,195.8092);
   hmc__19->SetBinError(4,119.8526);
   hmc__19->SetBinError(5,85.22973);
   hmc__19->SetBinError(6,48.31036);
   hmc__19->SetBinError(7,27.1566);
   hmc__19->SetBinError(8,19.75555);
   hmc__19->SetBinError(9,15.54947);
   hmc__19->SetBinError(10,16.5255);
   hmc__19->SetBinError(11,14.73302);
   hmc__19->SetBinError(12,17.45327);
   hmc__19->SetBinError(13,52.01151);
   hmc__19->SetMinimum(-17.3);
   hmc__19->SetMaximum(1816.5);
   hmc__19->SetEntries(3019.221);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-1.103704e-08);
   hs7_stack_7->SetMaximum(888.232);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.45049);
   hbadmatch_stack_1->SetBinContent(2,11.87661);
   hbadmatch_stack_1->SetBinContent(3,8.593502);
   hbadmatch_stack_1->SetBinContent(4,3.970271);
   hbadmatch_stack_1->SetBinContent(5,6.448201);
   hbadmatch_stack_1->SetBinContent(6,3.34428);
   hbadmatch_stack_1->SetBinContent(7,2.254602);
   hbadmatch_stack_1->SetBinContent(9,2.101179);
   hbadmatch_stack_1->SetBinContent(10,1.985136);
   hbadmatch_stack_1->SetBinContent(13,0.9925678);
   hbadmatch_stack_1->SetBinError(1,3.314631);
   hbadmatch_stack_1->SetBinError(2,6.229487);
   hbadmatch_stack_1->SetBinError(3,3.077135);
   hbadmatch_stack_1->SetBinError(4,1.985136);
   hbadmatch_stack_1->SetBinError(5,2.648445);
   hbadmatch_stack_1->SetBinError(6,1.936542);
   hbadmatch_stack_1->SetBinError(7,1.605591);
   hbadmatch_stack_1->SetBinError(9,1.488022);
   hbadmatch_stack_1->SetBinError(10,1.403703);
   hbadmatch_stack_1->SetBinError(13,0.9925678);
   hbadmatch_stack_1->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,16.01037);
   houtFV_stack_4->SetBinContent(2,19.11225);
   houtFV_stack_4->SetBinContent(3,22.27518);
   houtFV_stack_4->SetBinContent(4,15.41369);
   houtFV_stack_4->SetBinContent(5,10.91825);
   houtFV_stack_4->SetBinContent(6,8.224006);
   houtFV_stack_4->SetBinContent(7,5.955407);
   houtFV_stack_4->SetBinContent(8,1.985136);
   houtFV_stack_4->SetBinContent(9,2.977704);
   houtFV_stack_4->SetBinContent(10,0.9925678);
   houtFV_stack_4->SetBinContent(11,0.9925678);
   houtFV_stack_4->SetBinContent(12,3.970271);
   houtFV_stack_4->SetBinContent(13,13.89595);
   houtFV_stack_4->SetBinError(1,4.00455);
   houtFV_stack_4->SetBinError(2,4.391586);
   houtFV_stack_4->SetBinError(3,4.758294);
   houtFV_stack_4->SetBinError(4,3.995622);
   houtFV_stack_4->SetBinError(5,3.291975);
   houtFV_stack_4->SetBinError(6,2.91969);
   houtFV_stack_4->SetBinError(7,2.431285);
   houtFV_stack_4->SetBinError(8,1.403703);
   houtFV_stack_4->SetBinError(9,1.719178);
   houtFV_stack_4->SetBinError(10,0.9925678);
   houtFV_stack_4->SetBinError(11,0.9925678);
   houtFV_stack_4->SetBinError(12,1.985136);
   houtFV_stack_4->SetBinError(13,3.713849);
   houtFV_stack_4->SetEntries(122);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.700452);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetEntries(20);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.952944);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.467061);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.971766);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.566258);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.310426);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.213219);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,120.8518);
   hNCpi0inFVres_stack_7->SetBinContent(2,432.9483);
   hNCpi0inFVres_stack_7->SetBinContent(3,355.1261);
   hNCpi0inFVres_stack_7->SetBinContent(4,231.7978);
   hNCpi0inFVres_stack_7->SetBinContent(5,127.7859);
   hNCpi0inFVres_stack_7->SetBinContent(6,75.28474);
   hNCpi0inFVres_stack_7->SetBinContent(7,29.71766);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.8306);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.86824);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.88706);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.952944);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.438827);
   hNCpi0inFVres_stack_7->SetBinContent(13,61.4165);
   hNCpi0inFVres_stack_7->SetBinError(1,7.736746);
   hNCpi0inFVres_stack_7->SetBinError(2,14.64482);
   hNCpi0inFVres_stack_7->SetBinError(3,13.26243);
   hNCpi0inFVres_stack_7->SetBinError(4,10.71486);
   hNCpi0inFVres_stack_7->SetBinError(5,7.955606);
   hNCpi0inFVres_stack_7->SetBinError(6,6.106399);
   hNCpi0inFVres_stack_7->SetBinError(7,3.836534);
   hNCpi0inFVres_stack_7->SetBinError(8,2.971766);
   hNCpi0inFVres_stack_7->SetBinError(9,2.620852);
   hNCpi0inFVres_stack_7->SetBinError(10,2.426437);
   hNCpi0inFVres_stack_7->SetBinError(11,1.566258);
   hNCpi0inFVres_stack_7->SetBinError(12,1.785809);
   hNCpi0inFVres_stack_7->SetBinError(13,5.515365);
   hNCpi0inFVres_stack_7->SetEntries(3008);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,32.19413);
   hNCpi0inFVdis_stack_8->SetBinContent(2,99.55417);
   hNCpi0inFVdis_stack_8->SetBinContent(3,62.40709);
   hNCpi0inFVdis_stack_8->SetBinContent(4,38.63296);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.79295);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.36354);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.429416);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.410593);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.457649);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.971766);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9905888);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.981178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.37295);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.993191);
   hNCpi0inFVdis_stack_8->SetBinError(2,7.02201);
   hNCpi0inFVdis_stack_8->SetBinError(3,5.559666);
   hNCpi0inFVdis_stack_8->SetBinError(4,4.374322);
   hNCpi0inFVdis_stack_8->SetBinError(5,3.285411);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.667242);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.918267);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.158938);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.485883);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.213219);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.700452);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9905888);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.573625);
   hNCpi0inFVdis_stack_8->SetEntries(625);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,50.78267);
   hCCpi0inFV_stack_10->SetBinContent(2,156.793);
   hCCpi0inFV_stack_10->SetBinContent(3,89.52152);
   hCCpi0inFV_stack_10->SetBinContent(4,61.78218);
   hCCpi0inFV_stack_10->SetBinContent(5,43.93598);
   hCCpi0inFV_stack_10->SetBinContent(6,22.99562);
   hCCpi0inFV_stack_10->SetBinContent(7,8.93311);
   hCCpi0inFV_stack_10->SetBinContent(8,6.947975);
   hCCpi0inFV_stack_10->SetBinContent(9,6.947975);
   hCCpi0inFV_stack_10->SetBinContent(10,1.985136);
   hCCpi0inFV_stack_10->SetBinContent(11,4.193651);
   hCCpi0inFV_stack_10->SetBinContent(12,9.12064);
   hCCpi0inFV_stack_10->SetBinContent(13,19.85136);
   hCCpi0inFV_stack_10->SetBinError(1,7.112798);
   hCCpi0inFV_stack_10->SetBinError(2,12.51968);
   hCCpi0inFV_stack_10->SetBinError(3,9.438297);
   hCCpi0inFV_stack_10->SetBinError(4,7.850045);
   hCCpi0inFV_stack_10->SetBinError(5,6.628699);
   hCCpi0inFV_stack_10->SetBinError(6,4.797684);
   hCCpi0inFV_stack_10->SetBinError(7,2.977704);
   hCCpi0inFV_stack_10->SetBinError(8,2.626088);
   hCCpi0inFV_stack_10->SetBinError(9,2.626088);
   hCCpi0inFV_stack_10->SetBinError(10,1.403703);
   hCCpi0inFV_stack_10->SetBinError(11,2.105731);
   hCCpi0inFV_stack_10->SetBinError(12,3.04535);
   hCCpi0inFV_stack_10->SetBinError(13,4.438898);
   hCCpi0inFV_stack_10->SetEntries(486);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,38.71015);
   hNCinFV_stack_11->SetBinContent(2,66.50204);
   hNCinFV_stack_11->SetBinContent(3,58.5615);
   hNCinFV_stack_11->SetBinContent(4,20.84393);
   hNCinFV_stack_11->SetBinContent(5,22.82906);
   hNCinFV_stack_11->SetBinContent(6,16.87365);
   hNCinFV_stack_11->SetBinContent(7,13.89595);
   hNCinFV_stack_11->SetBinContent(8,3.970271);
   hNCinFV_stack_11->SetBinContent(9,1.985136);
   hNCinFV_stack_11->SetBinContent(10,3.970271);
   hNCinFV_stack_11->SetBinContent(11,4.962839);
   hNCinFV_stack_11->SetBinContent(12,4.962839);
   hNCinFV_stack_11->SetBinContent(13,15.88109);
   hNCinFV_stack_11->SetBinError(1,6.198584);
   hNCinFV_stack_11->SetBinError(2,8.124518);
   hNCinFV_stack_11->SetBinError(3,7.624058);
   hNCinFV_stack_11->SetBinError(4,4.548517);
   hNCinFV_stack_11->SetBinError(5,4.760188);
   hNCinFV_stack_11->SetBinError(6,4.092462);
   hNCinFV_stack_11->SetBinError(7,3.713849);
   hNCinFV_stack_11->SetBinError(8,1.985136);
   hNCinFV_stack_11->SetBinError(9,1.403703);
   hNCinFV_stack_11->SetBinError(10,1.985136);
   hNCinFV_stack_11->SetBinError(11,2.219449);
   hNCinFV_stack_11->SetBinError(12,2.219449);
   hNCinFV_stack_11->SetBinError(13,3.970271);
   hNCinFV_stack_11->SetEntries(276);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,19.9518);
   hnumuCCinFV_stack_12->SetBinContent(2,51.22418);
   hnumuCCinFV_stack_12->SetBinContent(3,58.62693);
   hnumuCCinFV_stack_12->SetBinContent(4,33.46922);
   hnumuCCinFV_stack_12->SetBinContent(5,44.222);
   hnumuCCinFV_stack_12->SetBinContent(6,14.71955);
   hnumuCCinFV_stack_12->SetBinContent(7,13.01844);
   hnumuCCinFV_stack_12->SetBinContent(8,10.33516);
   hnumuCCinFV_stack_12->SetBinContent(9,4.527863);
   hnumuCCinFV_stack_12->SetBinContent(10,5.079947);
   hnumuCCinFV_stack_12->SetBinContent(11,5.269264);
   hnumuCCinFV_stack_12->SetBinContent(12,2.311716);
   hnumuCCinFV_stack_12->SetBinContent(13,35.80588);
   hnumuCCinFV_stack_12->SetBinError(1,4.66011);
   hnumuCCinFV_stack_12->SetBinError(2,8.114555);
   hnumuCCinFV_stack_12->SetBinError(3,8.965906);
   hnumuCCinFV_stack_12->SetBinError(4,6.063934);
   hnumuCCinFV_stack_12->SetBinError(5,9.322515);
   hnumuCCinFV_stack_12->SetBinError(6,3.949964);
   hnumuCCinFV_stack_12->SetBinError(7,7.202951);
   hnumuCCinFV_stack_12->SetBinError(8,3.511255);
   hnumuCCinFV_stack_12->SetBinError(9,2.281229);
   hnumuCCinFV_stack_12->SetBinError(10,2.597632);
   hnumuCCinFV_stack_12->SetBinError(11,2.638701);
   hnumuCCinFV_stack_12->SetBinError(12,1.650861);
   hnumuCCinFV_stack_12->SetBinError(13,7.64441);
   hnumuCCinFV_stack_12->SetEntries(264);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,1.985136);
   hnueCCinFV_stack_13->SetBinContent(4,1.985136);
   hnueCCinFV_stack_13->SetBinContent(5,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,3.970271);
   hnueCCinFV_stack_13->SetBinError(3,1.403703);
   hnueCCinFV_stack_13->SetBinError(4,1.403703);
   hnueCCinFV_stack_13->SetBinError(5,0.9925678);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,1.985136);
   hnueCCinFV_stack_13->SetEntries(10);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,290.9326);
   hmcerror__20->SetBinContent(2,845.9352);
   hmcerror__20->SetBinContent(3,663.0405);
   hmcerror__20->SetBinContent(4,412.3528);
   hmcerror__20->SetBinContent(5,280.9061);
   hmcerror__20->SetBinContent(6,156.3007);
   hmcerror__20->SetBinContent(7,82.19715);
   hmcerror__20->SetBinContent(8,50.47973);
   hmcerror__20->SetBinContent(9,36.86575);
   hmcerror__20->SetBinContent(10,29.36718);
   hmcerror__20->SetBinContent(11,21.36185);
   hmcerror__20->SetBinContent(12,29.28077);
   hmcerror__20->SetBinContent(13,166.1772);
   hmcerror__20->SetBinError(1,71.56168);
   hmcerror__20->SetBinError(2,219.3862);
   hmcerror__20->SetBinError(3,195.8092);
   hmcerror__20->SetBinError(4,119.8526);
   hmcerror__20->SetBinError(5,85.22973);
   hmcerror__20->SetBinError(6,48.31036);
   hmcerror__20->SetBinError(7,27.1566);
   hmcerror__20->SetBinError(8,19.75555);
   hmcerror__20->SetBinError(9,15.54947);
   hmcerror__20->SetBinError(10,16.5255);
   hmcerror__20->SetBinError(11,14.73302);
   hmcerror__20->SetBinError(12,17.45327);
   hmcerror__20->SetBinError(13,52.01151);
   hmcerror__20->SetEntries(3019.221);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[12] = {
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
   Double_t _fy3025[12] = {
   361,
   865,
   793,
   594,
   336,
   202,
   118,
   76,
   43,
   35,
   24,
   18};
   Double_t _felx3025[12] = {
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
   Double_t _fely3025[12] = {
   19,
   29.41088,
   28.16026,
   24.37212,
   18.3303,
   14.21267,
   10.86278,
   8.8425,
   6.6917,
   6.0548,
   5.0476,
   4.4008};
   Double_t _fehx3025[12] = {
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
   Double_t _fehy3025[12] = {
   19,
   29.41088,
   28.16026,
   24.37212,
   18.3303,
   14.21267,
   10.86278,
   8.6406,
   6.4868,
   5.8483,
   4.837,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(12.23928);
   Graph_Graph3025->SetMaximum(982.4921);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.20#pm0.31","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.6/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3465.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 51.0","F");

   ci = 1512;
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

   ci = 1513;
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

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 108.8","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  9.4","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1428.5","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.2","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 463.9","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 258.1","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.8","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.0","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[12] = {
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
   Double_t _fy3026[12] = {
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
   Double_t _felx3026[12] = {
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
   Double_t _fely3026[12] = {
   0.2459734,
   0.2593417,
   0.2953202,
   0.2906555,
   0.30341,
   0.3090861,
   0.3303837,
   0.391356,
   0.4217862,
   0.5627201,
   0.6896881,
   0.5960659};
   Double_t _fehx3026[12] = {
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
   Double_t _fehy3026[12] = {
   0.2459734,
   0.2593417,
   0.2953202,
   0.2906555,
   0.30341,
   0.3090861,
   0.3303837,
   0.391356,
   0.4217862,
   0.5627201,
   0.6896881,
   0.5960659};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[12] = {
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
   Double_t _fy3027[12] = {
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
   Double_t _felx3027[12] = {
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
   Double_t _fely3027[12] = {
   0.2177891,
   0.2372005,
   0.2756857,
   0.2705545,
   0.2603496,
   0.2632473,
   0.2548563,
   0.2460091,
   0.2865365,
   0.2875451,
   0.3028949,
   0.2627888};
   Double_t _fehx3027[12] = {
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
   Double_t _fehy3027[12] = {
   0.2177891,
   0.2372005,
   0.2756857,
   0.2705545,
   0.2603496,
   0.2632473,
   0.2548563,
   0.2460091,
   0.2865365,
   0.2875451,
   0.3028949,
   0.2627888};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[12] = {
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
   Double_t _fy3028[12] = {
   1.240837,
   1.022537,
   1.196005,
   1.440514,
   1.196129,
   1.292381,
   1.435573,
   1.505555,
   1.166394,
   1.191806,
   1.123498,
   0.614738};
   Double_t _felx3028[12] = {
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
   Double_t _fely3028[12] = {
   0.06530722,
   0.0347673,
   0.0424714,
   0.059105,
   0.06525419,
   0.0909316,
   0.1321552,
   0.1751693,
   0.1815154,
   0.2061757,
   0.2362903,
   0.1502966};
   Double_t _fehx3028[12] = {
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
   Double_t _fehy3028[12] = {
   0.06530722,
   0.0347673,
   0.0424714,
   0.059105,
   0.06525419,
   0.0909316,
   0.1321552,
   0.1711697,
   0.1759574,
   0.1991441,
   0.2264317,
   0.1429539};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0.3432131);
   Graph_Graph3028->SetMaximum(1.797953);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
